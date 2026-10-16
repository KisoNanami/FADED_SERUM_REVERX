"""Independently reverse identifier edits and verify every original byte."""
import hashlib
import json
import argparse
import subprocess
from pathlib import Path

from token_tools import tokenize


def sha256(data):
    return hashlib.sha256(data).hexdigest()


def verify(root):
    if (root / 'Docs/style_manifest.json').exists():
        from style_tools import verify_style
        verify_style(root)
        return
    manifest = json.loads((root / 'docs/refactor_manifest.json').read_text(encoding='utf-8'))
    paths = set()
    edits_count = 0
    for record in manifest['files']:
        path = (root / record['path']).resolve()
        if not path.is_relative_to(root.resolve()) or path.suffix != '.cpp':
            raise ValueError(f'Invalid reference path: {path}')
        paths.add(path)
        data = path.read_bytes()
        if sha256(data) != record['output_sha256']:
            raise ValueError(f'Output hash mismatch: {path}')
        tokens = tokenize(data.decode('utf-8'))
        for index, old, new in record['edits']:
            if tokens[index] != ('identifier', new):
                raise ValueError(f'Unexpected edit at {path}, token {index}')
            if tokenize(old) != [('identifier', old)]:
                raise ValueError(f'Original edit is not an identifier: {old}')
            tokens[index] = ('identifier', old)
            edits_count += 1
        restored = ''.join(value for _, value in tokens).encode('utf-8')
        if sha256(restored) != record['original_sha256']:
            raise ValueError(f'Original-byte reconstruction mismatch: {path}')
    actual = set(root.rglob('*.cpp'))
    if actual != paths:
        raise ValueError(f'Unexpected/missing C++ references: {actual ^ paths}')
    bundle = (root / 'reference/original_bundle.txt').read_bytes()
    if sha256(bundle) != manifest['original_bundle_sha256']:
        raise ValueError('Original bundle was modified')
    print(f'PASS: {len(paths)} files, {edits_count} identifier edits; '
          'all original bytes recover exactly, including comments and literals')


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--format', action='store_true', help='Also require clang-format conformance')
    args = parser.parse_args()
    root = Path(__file__).resolve().parents[1]
    verify(root)
    if args.format:
        from style_tools import format_reference
        paths = list(root.rglob('*.cpp'))
        for path in paths:
            data = path.read_bytes()
            formatted = format_reference(data.decode('utf-8'), root / '.clang-format')
            if formatted.encode('utf-8') != data:
                raise ValueError(f'Formatting mismatch: {path}')
        print(f'PASS: clang-format conformance for {len(paths)} files')
