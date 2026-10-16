"""Lossless lexical operations for IDA pseudocode (not a C++ parser)."""
import re

TOKEN = re.compile(
    r'(?P<comment>//[^\r\n]*|/\*[\s\S]*?\*/)'
    r'|(?P<literal>(?:u8|[LuU])?"(?:\\[\s\S]|[^"\\])*"'
    r"|(?:[LuU])?'(?:\\(?:x[0-9A-Fa-f]+|[0-7]{1,3}|.)|[^'\\\r\n])')"
    r'|(?P<identifier>[A-Za-z_$][A-Za-z0-9_$]*)'
    r'|(?P<other>[^A-Za-z_$/"\']+|.)'
)


def tokenize(source):
    tokens = [(match.lastgroup, match.group()) for match in TOKEN.finditer(source)]
    if ''.join(value for _, value in tokens) != source:
        raise ValueError('Tokenizer did not preserve input')
    return tokens


def code_only(source):
    return ''.join(value if kind not in ('comment', 'literal') else ' ' * len(value)
                   for kind, value in tokenize(source))


def signature(source):
    code = code_only(source)
    header = code[:code.index('{')]
    match = re.search(r'([A-Za-z_$][\w$]*)\s*\(([^{}]*)\)\s*$', header)
    if not match:
        raise ValueError('Cannot identify function declaration')
    arguments = match.group(2).strip()
    parameters = []
    if arguments and arguments != 'void':
        for argument in arguments.split(','):
            names = re.findall(r'[A-Za-z_$][\w$]*', argument)
            if not names:
                raise ValueError(f'Cannot identify parameter: {argument}')
            parameters.append(names[-1])
    return match.group(1), parameters


def write_utf8(path, source):
    path.parent.mkdir(parents=True, exist_ok=True)
    with path.open('w', encoding='utf-8', newline='') as stream:
        # Bound both line count and character count for every write.
        for line in source.splitlines(keepends=True):
            for start in range(0, len(line), 10000):
                stream.write(line[start:start + 10000])
