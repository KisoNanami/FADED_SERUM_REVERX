"""Token-aware type normalization and style-independent verification."""
import hashlib
import json
import re
import subprocess

from juce_style_rules import modern_type
from token_tools import tokenize


def format_reference(source, configuration):
    """Mask IDA-only backtick names while clang-format parses C++ tokens."""
    protected = []
    offset = 0
    for kind, value in tokenize(source):
        if kind in ('comment', 'literal'):
            protected.append((offset, offset + len(value)))
        offset += len(value)
    symbols = {}
    pieces = []
    cursor = 0
    for match in re.finditer(r"`[^'\r\n]*'", source):
        if any(start <= match.start() < end for start, end in protected):
            continue
        placeholder = f'decompiledRttiSymbol{len(symbols)}'
        if placeholder in source:
            raise ValueError('RTTI placeholder already appears in source')
        symbols[placeholder] = match.group()
        pieces.extend((source[cursor:match.start()], placeholder))
        cursor = match.end()
    pieces.append(source[cursor:])
    masked = ''.join(pieces)
    result = subprocess.run(['clang-format', f'--style=file:{configuration}'],
                            input=masked.encode('utf-8'), capture_output=True, check=True)
    if result.stderr:
        raise RuntimeError(result.stderr.decode('utf-8'))
    formatted = result.stdout.decode('utf-8')
    counts = {name: 0 for name in symbols}
    restored = []
    for kind, value in tokenize(formatted):
        if kind == 'identifier' and value in symbols:
            counts[value] += 1
            restored.append(symbols[value])
        else:
            restored.append(value)
    if any(count != 1 for count in counts.values()):
        raise ValueError('Formatter modified an RTTI placeholder')
    return ''.join(restored)


def modernize_tokens(source, names):
    tokens = tokenize(source)
    output = []
    index = 0
    while index < len(tokens):
        kind, value = tokens[index]
        if kind != 'identifier':
            output.append(value)
            index += 1
            continue
        if value == '__fastcall':
            index += 1
            continue
        # Signedness is part of the type, never a separate cosmetic replacement.
        if value in ('unsigned', 'signed') and index + 2 < len(tokens):
            separator, next_token = tokens[index + 1], tokens[index + 2]
            if separator[1].isspace() and next_token[0] == 'identifier':
                replacement = modern_type([value, next_token[1]])
                if replacement:
                    output.append(replacement)
                    index += 3
                    continue
        output.append(modern_type([value]) or names.get(value, value))
        index += 1
    return ''.join(output)


def semantic_fingerprint(source, names):
    normalized = modernize_tokens(source, names)
    significant = []
    for kind, value in tokenize(normalized):
        if kind == 'other':
            atoms = re.findall(r'\d+(?:\.\d*)?|>>=|<<=|->\*|\.\.\.|::|->|\+\+|--|&&|\|\||==|!=|<=|>=|<<|>>|[+*/%&|^!-]=|\S', value)
            significant.extend(('punctuation', item) for item in atoms)
        elif kind == 'comment':
            significant.append((kind, re.sub(r'\r+\n|\r', '\n', value)))
        else:
            significant.append((kind, value))
    serialized = json.dumps(significant, ensure_ascii=False, separators=(',', ':')).encode('utf-8')
    return hashlib.sha256(serialized).hexdigest()


def verify_style(root):
    manifest = json.loads((root / 'Docs/style_manifest.json').read_text(encoding='utf-8'))
    names = manifest['names']
    paths = set()
    spans = {}
    for record in manifest['fragments']:
        path = (root / record['path']).resolve()
        if not path.is_relative_to(root.resolve()):
            raise ValueError(f'Invalid path: {path}')
        paths.add(path)
        source = path.read_text(encoding='utf-8')
        start, end = record['span']
        fragment = source[start:end]
        if semantic_fingerprint(fragment, names) != record['semantic_sha256']:
            raise ValueError(f'Code/comment/literal mismatch: {record["original_file"]}')
        spans.setdefault(record['path'], []).append((start, end))
    for relative, expected in manifest['output_sha256'].items():
        data = (root / relative).read_bytes()
        if hashlib.sha256(data).hexdigest() != expected:
            raise ValueError(f'File hash mismatch: {relative}')
        ranges = sorted(spans[relative])
        if any(left[1] > right[0] for left, right in zip(ranges, ranges[1:])):
            raise ValueError(f'Overlapping function fragments: {relative}')
    actual = set(root.rglob('*.cpp'))
    if actual != paths:
        raise ValueError(f'Unexpected/missing C++ sources: {actual ^ paths}')
    original = json.loads((root / 'Docs/refactor_manifest.json').read_text(encoding='utf-8'))
    if len(original['files']) != len(manifest['fragments']):
        raise ValueError('Original export count mismatch')
    original_hashes = {record['stem'] + '.c': record['original_sha256'] for record in original['files']}
    for record in manifest['fragments']:
        if original_hashes[record['original_file']] != record['original_sha256']:
            raise ValueError('Original provenance mismatch')
    bundle = (root / 'Reference/OriginalBundle.txt').read_bytes()
    if hashlib.sha256(bundle).hexdigest() != original['original_bundle_sha256']:
        raise ValueError('Original text bundle changed')
    print(f'PASS: {len(paths)} C++ files, {len(manifest["fragments"])} original exports; '
          'code tokens, comments, literals and provenance verified')
