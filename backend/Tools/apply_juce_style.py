"""Group reference exports and apply an audited JUCE-style presentation."""
from collections import defaultdict
import argparse
import hashlib
import json
from pathlib import Path
import re
import subprocess
import zipfile

from juce_style_rules import destination, lower_camel
from style_tools import modernize_tokens, semantic_fingerprint, verify_style, format_reference
from token_tools import tokenize, write_utf8
from verify_exports import verify

ROOT = Path(__file__).resolve().parents[1]


def plan(original=None, source_archive=None):
    if original is None:
        original = json.loads((ROOT / 'docs/refactor_manifest.json').read_text(encoding='utf-8'))
    names = {new: lower_camel(new) for new in set(original['shared_symbols'].values())}
    sources = {}
    for record in original['files']:
        data = source_archive.read(record['path']) if source_archive is not None else (ROOT / record['path']).read_bytes()
        source = data.decode('utf-8')
        unknown_uses = sum(kind == 'identifier' and value == '_UNKNOWN' for kind, value in tokenize(source))
        if unknown_uses != len(re.findall(r'\b_UNKNOWN\s*\*', source)):
            raise ValueError(f'Unknown value type cannot be converted to void: {record["path"]}')
        sources[record['path']] = source
        for kind, name in tokenize(source):
            if kind != 'identifier':
                continue
            if name.startswith('LABEL_'):
                names[name] = 'label' + name[6:]
            elif re.fullmatch(r'(?:Auth[A-Za-z0-9]*|CliHost|FadModel1AudioProcessor|Processor|IsAuthorized)_[A-Za-z][A-Za-z0-9_]*', name):
                names[name] = lower_camel(name)
    inverse = defaultdict(set)
    for old, new in names.items():
        inverse[new].add(old)
    collisions = {new: old for new, old in inverse.items() if len(old) > 1}
    if collisions:
        raise ValueError(f'Global naming collisions: {collisions}')
    for source in sources.values():
        identifiers = {value for kind, value in tokenize(source) if kind == 'identifier'}
        for old in identifiers & names.keys():
            if names[old] != old and names[old] in identifiers - names.keys():
                raise ValueError(f'Existing identifier collision: {old} -> {names[old]}')
    outputs = {}
    fragments = []
    for record in original['files']:
        source = sources[record['path']]
        modern = modernize_tokens(source, names)
        modern = re.sub(r'\r+\n|\r', '\n', modern)
        modern = format_reference(modern, ROOT / '.clang-format')
        expected = semantic_fingerprint(source, names)
        if semantic_fingerprint(modern, names) != expected:
            raise ValueError(f'Formatter changed tokens or comments: {record["path"]}')
        target = destination(record['path'])
        current = outputs.get(target, '#include <cstdint>\n\n')
        start = len(current)
        outputs[target] = current + modern + '\n'
        fragments.append(dict(original_file=record['stem'] + '.c', previous_path=record['path'],
                              path=target, span=[start, start + len(modern)],
                              function=names[record['function']], address=record['address'],
                              original_sha256=record['original_sha256'], semantic_sha256=expected,
                              evidence=record['evidence']))
    outputs = {relative: source[:-1] for relative, source in outputs.items()}
    return original, names, outputs, fragments


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--apply', action='store_true')
    args = parser.parse_args()
    verify(ROOT)
    original, names, outputs, fragments = plan()
    print(f'JUCE-style plan: {len(fragments)} exports -> {len(outputs)} C++ files')
    for target in sorted(outputs):
        print(f'  {target}: {len(outputs[target].splitlines())} lines')
    if not args.apply:
        return
    for relative in outputs:
        path = (ROOT / relative).resolve()
        if not path.is_relative_to(ROOT) or path.exists():
            raise ValueError(f'Unsafe/existing destination: {path}')
    archive = ROOT.parents[1] / 'artifacts/backend-before-juce-style.zip'
    if archive.exists():
        raise FileExistsError(archive)
    with zipfile.ZipFile(archive, 'w', zipfile.ZIP_DEFLATED) as snapshot:
        for path in sorted(ROOT.rglob('*')):
            if path.is_file() and '__pycache__' not in path.parts:
                snapshot.writestr(path.relative_to(ROOT).as_posix(), path.read_bytes())
    previous_reference = ROOT / '.previous-reference'
    if previous_reference.exists():
        raise FileExistsError(previous_reference)
    (ROOT / 'reference').rename(previous_reference)
    for relative, source in outputs.items():
        write_utf8(ROOT / relative, source)
    manifest = dict(version=2, names=names, fragments=fragments,
                    output_sha256={relative: hashlib.sha256(source.encode('utf-8')).hexdigest()
                                   for relative, source in outputs.items()})
    # Rename support directories through unique intermediate paths for Windows.
    for old, new in [('docs', 'Docs'), ('tooling', 'Tools')]:
        temporary = ROOT / ('.layout-' + old)
        if temporary.exists():
            raise FileExistsError(temporary)
        (ROOT / old).rename(temporary)
        temporary.rename(ROOT / new)
    bundle = ROOT / 'Reference/OriginalBundle.txt'
    bundle.parent.mkdir(parents=True, exist_ok=True)
    (previous_reference / 'original_bundle.txt').rename(bundle)
    write_utf8(ROOT / 'Docs/style_manifest.json', json.dumps(manifest, ensure_ascii=False, indent=2) + '\n')
    write_utf8(ROOT / 'Docs/files.tsv', 'original\tprevious\tcurrent\tfunction\taddress\tevidence\n' + ''.join(
        f'{r["original_file"]}\t{r["previous_path"]}\t{r["path"]}\t{r["function"]}\t{r["address"]}\t{r["evidence"]}\n'
        for r in fragments))
    write_utf8(ROOT / 'Docs/symbols.tsv', 'original\tcurrent\n' + ''.join(
        f'{old}\t{names.get(new, new)}\n' for old, new in sorted(original['shared_symbols'].items())))
    by_old_path = {record['previous_path']: record for record in fragments}
    write_utf8(ROOT / 'Docs/locals.tsv', 'file\tfunction\toriginal\tcurrent\tevidence\n' + ''.join(
        f'{by_old_path[r["path"]]["path"]}\t{by_old_path[r["path"]]["function"]}\t{old}\t{new}\t{reason}\n'
        for r in original['files'] for old, (new, reason) in r['local_names'].items()))
    # Verify target files before deleting the old exports.
    for record in fragments:
        source = (ROOT / record['path']).read_text(encoding='utf-8')
        start, end = record['span']
        if semantic_fingerprint(source[start:end], names) != record['semantic_sha256']:
            raise ValueError(f'Written fragment mismatch: {record["path"]}')
    for record in original['files']:
        old_relative = record['path']
        if old_relative.startswith('reference/'):
            old_relative = '.previous-reference/' + old_relative[len('reference/'):]
        path = (ROOT / old_relative).resolve()
        if not path.is_relative_to(ROOT) or path.suffix != '.cpp':
            raise ValueError(f'Invalid obsolete file: {path}')
        path.unlink()
    for old in ['auth', 'audio', 'ui', 'platform', 'standalone', '.previous-reference']:
        directory = (ROOT / old).resolve()
        if not directory.is_relative_to(ROOT):
            raise ValueError(directory)
        for path in sorted(directory.rglob('*'), key=lambda p: len(p.parts), reverse=True):
            if path.is_dir():
                path.rmdir()
        directory.rmdir()
    verify_style(ROOT)
    print(f'Original layout snapshot: {archive}')


if __name__ == '__main__':
    main()
