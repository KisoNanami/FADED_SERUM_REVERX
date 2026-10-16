"""One-time, auditable reorganization of the original flat .c exports."""
import argparse
import ast
from collections import Counter
import hashlib
import json
from pathlib import Path
import re
import zipfile

from naming_rules import FILES
from infer_locals import infer_roles
from shared_symbols import HELPERS, LOCALS
from token_tools import code_only, signature, tokenize, write_utf8

ROOT = Path(__file__).resolve().parents[1]
WORKSPACE = ROOT.parents[1]


def digest(data):
    return hashlib.sha256(data).hexdigest()


def local_names(source, stem, parameters):
    code = code_only(source)
    names = dict(LOCALS.get(stem, {}))
    evidence = {name: 'individually reviewed data flow' for name in names}
    for name, (role, reason) in infer_roles(source, parameters).items():
        if name not in names:
            names[name] = role
            evidence[name] = reason
    declarations = {}
    for line in code.splitlines():
        match = re.match(r'  ([\w *]+?)\b(v\d+)\s*(\[[^;]*\])?\s*;', line)
        if match:
            declarations[match[2]] = (match[1].strip(), bool(match[3]))
        callback = re.match(r'  .*\(\s*__fastcall\s*\*+(v\d+)\)', line)
        if callback and callback[1] not in names:
            names[callback[1]] = 'callbackFunction' + callback[1][1:]
            evidence[callback[1]] = 'function-pointer declaration; callback purpose unresolved'
    # Prefer a concrete result role where a known call directly assigns a local.
    call_roles = {
        'GetTickCount64': 'currentTickMs', 'GetCurrentProcessId': 'processId',
        'GetCurrentThreadId': 'threadId', 'OpenProcess': 'processHandle',
        'GetModuleHandleW': 'moduleHandle', 'LoadLibraryW': 'moduleHandle',
        'GetProcAddress': 'resolvedFunction', 'GetLastError': 'windowsErrorCode',
        'CliHost_GetProcessor': 'processor',
        'Clock_ReadSteadyNanoseconds': 'steadyNanoseconds',
        'Clock_GetUnixTimeMilliseconds': 'unixTimeMs',
        'Clock_GetPerformanceCounterTicks': 'counterTicks',
        'Clock_GetPerformanceCounterFrequency': 'counterFrequency',
        'Memory_AllocateObject': 'allocatedObject', 'Memory_AllocateBuffer': 'allocatedBuffer',
        'JuceString_GetUtf16View': 'utf16Characters',
    }
    candidates = {}
    for match in re.finditer(r'\b(v\d+)\s*=\s*(?:\([^;\n=]*?\)\s*)?([\w]+)\s*\(', code):
        if match[2] in call_roles:
            candidates.setdefault(match[1], set()).add(call_roles[match[2]])
    for name, roles in candidates.items():
        if name not in names and len(roles) == 1:
            names[name] = next(iter(roles)) + name[1:]
            evidence[name] = 'direct assignment from a known API/helper; inferred role'
    for name, (type_name, is_array) in declarations.items():
        if name in names:
            continue
        if is_array:
            role = 'stackStorage'
        elif '__m128' in type_name or '__m256' in type_name:
            role = 'vectorValue'
        elif '*' in type_name:
            role = 'temporaryPointer'
        elif type_name in ('float', 'double'):
            role = 'scalarValue'
        elif type_name in ('bool', '_BOOL8'):
            role = 'conditionFlag'
        else:
            role = 'opaqueValue'
        names[name] = role + name[1:]
        evidence[name] = 'type-only name; semantic role unresolved'
    for name in set(re.findall(r'\bv\d+\b', code)) - names.keys():
        names[name] = 'opaqueValue' + name[1:]
        evidence[name] = 'decompiler temporary; semantic role unresolved'
    identifiers = set(re.findall(r'[A-Za-z_$][\w$]*', code))
    missing = set(names) - identifiers
    if missing:
        raise ValueError(f'{stem}: local rules not present: {missing}')
    names.update(parameters)
    for old in parameters:
        evidence[old] = FILES[stem][3]
    targets = list(names.values())
    if len(set(targets)) != len(targets):
        raise ValueError(f'{stem}: name collision: {Counter(targets)}')
    for old, new in names.items():
        if old != new and new in identifiers and new not in names:
            raise ValueError(f'{stem}: existing identifier collision: {new}')
    return names, evidence


def prepare():
    paths = sorted(ROOT.glob('*.c'))
    if {path.stem for path in paths} != set(FILES):
        raise ValueError('Input files do not match naming rules')
    sources = {path.stem: path.read_bytes().decode('utf-8') for path in paths}
    symbols = {old: new for old, (new, _) in HELPERS.items()}
    addresses = {}
    records = []
    for stem, source in sources.items():
        destination, function, arguments, evidence = FILES[stem]
        original_function, parameters = signature(source)
        desired_parameters = arguments.split()
        if len(parameters) != len(desired_parameters):
            raise ValueError(f'{stem}: parameters {parameters}, requested {desired_parameters}')
        address = int(re.search(r'@ (0x[0-9a-fA-F]+)', source)[1], 16)
        if address in addresses and addresses[address] != function:
            raise ValueError(f'Conflicting names at {address:x}')
        addresses[address] = function
        for alias in (original_function, f'sub_{address:X}'):
            if alias in symbols and symbols[alias] != function:
                raise ValueError(f'Conflicting symbol: {alias}')
            symbols[alias] = function
        records.append(dict(stem=stem, path=destination + '.cpp', function=function,
                            old_function=original_function, address=f'0x{address:X}',
                            parameters=dict(zip(parameters, desired_parameters)), evidence=evidence))
    # Import only the literal rename dictionaries, never execute IDA scripts.
    for path in sorted((WORKSPACE / 'tools').glob('ida_apply_annotations*.py')):
        tree = ast.parse(path.read_text(encoding='utf-8-sig'))
        for node in tree.body:
            if isinstance(node, ast.Assign) and any(isinstance(t, ast.Name) and t.id == 'RENAMES' for t in node.targets):
                for address, alias in ast.literal_eval(node.value).items():
                    if address in addresses and alias:
                        if alias in symbols and symbols[alias] != addresses[address]:
                            raise ValueError(f'Conflicting IDA alias: {alias}')
                        symbols[alias] = addresses[address]
    outputs = {}
    for record in records:
        source = sources[record['stem']]
        global_source = ''.join(symbols.get(value, value) if kind == 'identifier' else value
                                for kind, value in tokenize(source))
        locals_map, reasons = local_names(global_source, record['stem'], record['parameters'])
        edits = []
        output = []
        for index, (kind, value) in enumerate(tokenize(source)):
            replacement = locals_map.get(value, symbols.get(value, value)) if kind == 'identifier' else value
            if replacement != value:
                edits.append([index, value, replacement])
            output.append(replacement)
        output = ''.join(output)
        record.update(original_sha256=digest(source.encode('utf-8')),
                      output_sha256=digest(output.encode('utf-8')), edits=edits,
                      local_names={old: [new, reasons[old]] for old, new in locals_map.items()})
        outputs[record['path']] = output
    return sources, symbols, records, outputs


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--apply', action='store_true')
    args = parser.parse_args()
    sources, symbols, records, outputs = prepare()
    print(f'Planned {len(records)} C++ reference files, {len(symbols)} shared aliases, '
          f'{sum(len(r["local_names"]) for r in records)} parameter/local names, '
          f'{sum(len(r["edits"]) for r in records)} identifier edits')
    if not args.apply:
        for record in records:
            print(f'{record["stem"]}.c -> {record["path"]}')
        return
    for relative in outputs:
        target = (ROOT / relative).resolve()
        if not target.is_relative_to(ROOT) or target.exists():
            raise ValueError(f'Unsafe or existing destination: {target}')
    bundle = ROOT / '_all.txt'
    original_bundle = bundle.read_bytes()
    archive = WORKSPACE / 'artifacts/backend-before-readability.zip'
    if archive.exists():
        raise FileExistsError(archive)
    archive.parent.mkdir(parents=True, exist_ok=True)
    with zipfile.ZipFile(archive, 'w', zipfile.ZIP_DEFLATED) as snapshot:
        for stem, source in sources.items():
            snapshot.writestr(stem + '.c', source.encode('utf-8'))
        snapshot.writestr('_all.txt', original_bundle)
    for relative, output in outputs.items():
        write_utf8(ROOT / relative, output)
    manifest = dict(version=1, files=records, shared_symbols=symbols,
                    original_bundle_sha256=digest(original_bundle))
    write_utf8(ROOT / 'docs/refactor_manifest.json', json.dumps(manifest, ensure_ascii=False, indent=2) + '\n')
    write_utf8(ROOT / 'docs/files.tsv', 'original\tcurrent\tfunction\taddress\tevidence\n' + ''.join(
        f'{r["stem"]}.c\t{r["path"]}\t{r["function"]}\t{r["address"]}\t{r["evidence"]}\n' for r in records))
    write_utf8(ROOT / 'docs/symbols.tsv', 'original\tcurrent\n' + ''.join(
        f'{old}\t{new}\n' for old, new in sorted(symbols.items())))
    write_utf8(ROOT / 'docs/locals.tsv', 'file\toriginal\tcurrent\tevidence\n' + ''.join(
        f'{r["path"]}\t{old}\t{new}\t{reason}\n' for r in records
        for old, (new, reason) in r['local_names'].items()))
    write_utf8(ROOT / 'reference/original_bundle.txt', original_bundle.decode('utf-8'))
    from verify_exports import verify
    verify(ROOT)
    for stem in sources:
        target = (ROOT / (stem + '.c')).resolve()
        if target.parent != ROOT:
            raise ValueError(target)
        target.unlink()
    bundle.unlink()
    print(f'Applied and verified. Original snapshot: {archive}')


if __name__ == '__main__':
    main()
