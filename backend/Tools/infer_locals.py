"""Conservative local roles from call sites, string cleanup and known offsets."""
from collections import defaultdict
import re

from token_tools import code_only, tokenize


def infer_roles(source, parameters):
    tokens = tokenize(source)
    source = ''.join(parameters.get(value, value) if kind == 'identifier' else value
                     for kind, value in tokens)
    code = code_only(source)
    roles = defaultdict(set)
    reasons = {}

    def add(name, role, reason):
        roles[name].add(role)
        reasons[name] = reason

    # String constructors may reuse one stack slot for many unrelated messages.
    string_slots = defaultdict(set)
    pattern = r'JuceString_ConstructFromUtf8\s*\(\s*&(v\d+)\s*,\s*"((?:\\.|[^"\\])*)"'
    for match in re.finditer(pattern, source):
        string_slots[match[1]].add(match[2])
    for name, values in string_slots.items():
        if len(values) == 1:
            value = next(iter(values))
            if re.fullmatch(r'[a-zA-Z][a-zA-Z0-9_]{1,32}', value):
                role = value[0].lower() + value[1:] + 'String'
            elif value.startswith('FAD-') or re.fullmatch(r'[A-Z][A-Z0-9_]+', value):
                role = 'diagnosticCodeString'
            elif value.startswith(('http', 'fadlab:')):
                role = 'urlString'
            else:
                role = 'messageString'
        else:
            role = 'reusableString'
        add(name, role, 'UTF-8 string construction; reusable slots use a general name')
    for match in re.finditer(r'\b(v\d+)\s*=\s*(?:\([^;\n=]*?\)\s*)?\(?[^;\n]+?\s*-\s*16\)?\s*;', code):
        statement = match.group()
        if 'g_emptyJuceStringStorage' in code[match.end():match.end() + 220]:
            add(match[1], 'stringStorageToRelease', '16-byte string header and shared-empty comparison')
    for match in re.finditer(r'\b(v\d+)\s*=\s*\([^;\n]*?_RTL_CRITICAL_SECTION\s*\*\)', code):
        add(match[1], 'criticalSection', 'explicit Windows critical-section pointer cast')
    for match in re.finditer(r'\b(v\d+)\s*=\s*(?:\([^;\n]*?\)\s*)?\(?\s*(?:\*\([^;\n]*?\)\s*)?\((\w+)\s*\+\s*(\d+)(?:LL)?\)\s*;', code):
        name, base, offset = match[1], match[2], int(match[3])
        role = None
        if offset == 475552:
            role = 'authManagerOrScratch'
        elif base == 'panel':
            role = {720: 'deviceCodeCharacters', 728: 'emailCharacters', 736: 'tierCharacters',
                    776: 'errorCharacters', 784: 'errorCodeCharacters', 792: 'revision'}.get(offset)
        elif base == 'authManager' and offset == 40:
            role = 'sharedAuthState'
        if role:
            add(name, role, f'known member offset {offset}; decompiler locals can be reused')
    # Result roles are useful even where the decompiler flattened the C++ type.
    result_roles = {
        'Onboarding_ValidateAcceptanceNonce': 'nonceValidationResult',
        'AudioGate_IsRenderAuthorized': 'isRenderAuthorized',
        'AudioGate_IsRenderAllowedOnAudioThread': 'isRenderAllowed',
        'Entitlement_IsTimeValid': 'isEntitlementTimeValid',
        'Entitlement_IsStatusAllowed': 'isEntitlementStatusAllowed',
        'WinTrust_VerifyPublisherSignature': 'isPublisherSignatureValid',
        'AuthManager_IsInitialVerificationComplete': 'isVerificationComplete',
        'CliHost_GetProcessor': 'processor',
        'JuceString_CompareUtf8': 'stringComparisonResult',
        'JuceString_StartsWithUtf8': 'hasExpectedPrefix',
        'JuceString_JoinUtf8Prefix': 'prefixedString',
        'JuceString_AppendString': 'combinedString',
        'JuceString_TrimWhitespace': 'trimmedString',
        'JuceString_ToLowerCase': 'lowercaseString',
    }
    for match in re.finditer(r'\b(v\d+)\s*=\s*(?:\([^;\n=]*?\)\s*)?([\w]+)\s*\(', code):
        if match[2] in result_roles:
            add(match[1], result_roles[match[2]], 'result of a named function')
    return {name: (next(iter(values)) + name[1:], reasons[name])
            for name, values in roles.items() if len(values) == 1}
