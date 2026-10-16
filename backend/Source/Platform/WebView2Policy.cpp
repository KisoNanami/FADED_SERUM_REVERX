#include <cstdint>

// ===== RegGetValue_caller_A @ 0x180003411 size=398 =====
char webView2ReadPolicyValue (
    HKEY registryKey,
    LPCWSTR valueName,
    std::uint64_t* policyState,
    std::int64_t policyContext,
    std::uint32_t* outputBoolean,
    std::int64_t outputString,
    std::int64_t stringOptions,
    std::uint8_t* outputFound)
{
    std::int64_t opaqueValue12; // rdx
    char result; // al
    bool conditionFlag14; // zf
    bool conditionFlag15; // al
    std::uint8_t stackStorage16[32]; // [rsp+0h] [rbp-88h] BYREF
    DWORD pcbData; // [rsp+38h] [rbp-50h] BYREF
    int pvData; // [rsp+3Ch] [rbp-4Ch] BYREF
    std::int64_t opaqueValue19; // [rsp+40h] [rbp-48h]

    if (outputString != 0)
    {
        if ((std::uint8_t)webView2HasRegistryValue (registryKey, valueName) != 0 && (std::uint8_t)sub_1803711B0 (policyContext, opaqueValue12) == 0)
        {
            sub_18000302D (outputString, *policyState, stringOptions);
            result = 1;
            goto label11;
        }
        goto label10;
    }
    if (outputBoolean == nullptr)
    {
        if (_security_cookie == ((std::uint64_t)stackStorage16 ^ opaqueValue19))
            return webView2HasRegistryValue (registryKey, valueName);
    label20:
        __debugbreak();
    }
    pvData = 0;
    pcbData = 4;
    if (RegGetValueW (registryKey, nullptr, valueName, 0x10u, nullptr, &pvData, &pcbData) == 0)
    {
        conditionFlag14 = pvData == 1;
        goto label16;
    }
    if ((std::uint8_t)webView2HasRegistryValue (registryKey, valueName) == 0)
    {
    label10:
        result = 0;
        goto label11;
    }
    if (*policyState != 0)
    {
        conditionFlag14 = (unsigned int)sub_1809C3B34() == 1;
    label16:
        conditionFlag15 = conditionFlag14;
        goto label17;
    }
    conditionFlag15 = false;
label17:
    *outputBoolean = conditionFlag15;
    result = 1;
    if (outputFound != nullptr)
        *outputFound = 1;
label11:
    if (_security_cookie != ((std::uint64_t)stackStorage16 ^ opaqueValue19))
        goto label20;
    return result;
}

// ===== RegOpenKey_caller_B @ 0x1800030e5 size=117 =====
bool webView2HasPolicyRegistryKey (HKEY registryRoot)
{
    LSTATUS opaqueValue1; // esi
    bool result; // al
    std::int64_t opaqueValue3; // [rsp+0h] [rbp-48h] BYREF
    HKEY phkResult[4]; // [rsp+28h] [rbp-20h] BYREF

    phkResult[0] = nullptr;
    opaqueValue1 = RegOpenKeyExW (registryRoot, L"Software\\Policies\\Microsoft\\Edge\\WebView2\\", 0, 0x20019u, phkResult);
    RegCloseKey (phkResult[0]);
    result = opaqueValue1 == 0;
    if (_security_cookie != ((std::uint64_t)&opaqueValue3 ^ (std::uint64_t)phkResult[1]))
        __debugbreak();
    return result;
}

// ===== RegOpenKey_caller_C @ 0x18000315a size=695 =====
std::int64_t webView2ReadApplicationPolicy (
    HKEY registryRoot,
    std::uint16_t* applicationId,
    std::int64_t policyArgument3,
    std::int64_t policyArgument4,
    std::int64_t policyState,
    std::int64_t policyContext,
    std::int64_t outputBoolean,
    std::int64_t outputString,
    std::uint8_t skipWildcard)
{
    std::int64_t opaqueValue11; // rax
    std::int64_t opaqueValue12; // rdx
    std::int64_t opaqueValue13; // rax
    std::int64_t opaqueValue14; // rax
    const WCHAR* temporaryPointer15; // rax
    unsigned int opaqueValue16; // ebp
    LSTATUS opaqueValue17; // ebx
    const WCHAR* temporaryPointer18; // rax
    const WCHAR* temporaryPointer19; // rax
    std::int64_t opaqueValue21; // [rsp+0h] [rbp-108h] BYREF
    HKEY hKeya; // [rsp+48h] [rbp-C0h] BYREF
    std::uint8_t stackStorage23[32]; // [rsp+50h] [rbp-B8h] BYREF
    std::uint8_t stackStorage24[32]; // [rsp+70h] [rbp-98h] BYREF
    std::uint64_t stackStorage25[4]; // [rsp+90h] [rbp-78h] BYREF

    memset (stackStorage24, 170, 24);
    wideStringInitialize (stackStorage24);
    sub_180002A18 (stackStorage24);
    memset (stackStorage23, 170, 24);
    wideStringInitialize (stackStorage23);
    memset (stackStorage25, 170, 24);
    wideStringInitialize (stackStorage25);
    if ((int)sub_180001129 (nullptr) < 0)
    {
        sub_1800028C6 (stackStorage23);
    }
    else
    {
        opaqueValue11 = wideStringGetCharacters (stackStorage25);
        LOWORD (opaqueValue12) = 92;
        opaqueValue13 = wideStringFindLastCharacter (opaqueValue11, opaqueValue12);
        if (opaqueValue13 == 0)
            opaqueValue13 = wideStringGetCharacters (stackStorage25);
        wideStringAssign (stackStorage23, opaqueValue13 + 2);
    }
    wideStringDestroy (stackStorage25);
    hKeya = nullptr;
    if (applicationId != nullptr && *applicationId != 0)
    {
        memset (stackStorage25, 170, 24);
        opaqueValue14 = wideStringGetLength (applicationId);
        sub_18000275E (stackStorage25, opaqueValue14 + 42);
        wideStringAppend (stackStorage25, L"Software\\Policies\\Microsoft\\Edge\\WebView2\\");
        wideStringAppend (stackStorage25, applicationId);
        temporaryPointer15 = (const WCHAR*)wideStringGetCharacters (stackStorage25);
        opaqueValue16 = 0;
        opaqueValue17 = RegOpenKeyExW (registryRoot, temporaryPointer15, 0, 1u, &hKeya);
        wideStringDestroy (stackStorage25);
        if (opaqueValue17 == 0)
        {
            temporaryPointer18 = (const WCHAR*)wideStringGetCharacters (stackStorage24);
            LOBYTE (opaqueValue16) = 1;
            if ((std::uint8_t)webView2ReadPolicyValue (hKeya, temporaryPointer18, policyState, policyContext, outputBoolean, outputString) == 0)
            {
                temporaryPointer19 = (const WCHAR*)wideStringGetCharacters (stackStorage23);
                opaqueValue16 = webView2ReadPolicyValue (hKeya, temporaryPointer19, policyState, policyContext, outputBoolean, outputString);
                if (((std::uint8_t)opaqueValue16 | skipWildcard) == 0)
                    opaqueValue16 = webView2ReadPolicyValue (hKeya, L"*", policyState, policyContext, outputBoolean, outputString);
            }
            RegCloseKey (hKeya);
        }
    }
    else
    {
        opaqueValue16 = 0;
    }
    wideStringDestroy (stackStorage23);
    wideStringDestroy (stackStorage24);
    if (_security_cookie != ((std::uint64_t)&opaqueValue21 ^ stackStorage25[3]))
        __debugbreak();
    return opaqueValue16;
}
