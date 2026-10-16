#include <cstdint>

// ===== ShellExecute_caller_C @ 0x1809095f0 size=957 =====
char** updaterLaunch (char** outputResult)
{
    char* stringStorageToRelease2; // rcx
    PWSTR opaqueValue3; // rbx
    char opaqueValue4; // si
    std::int64_t opaqueValue5; // rdi
    PWSTR opaqueValue6; // rax
    unsigned int opaqueValue7; // edx
    std::uint16_t* temporaryPointer8; // r8
    std::int64_t opaqueValue9; // rcx
    std::int64_t opaqueValue10; // rcx
    std::uint64_t opaqueValue11; // rdi
    std::int64_t opaqueValue12; // rax
    char* temporaryPointer13; // rdi
    char* stringStorageToRelease14; // rcx
    char* stringStorageToRelease15; // rcx
    void* temporaryPointer16; // rdx
    char* temporaryPointer17; // rcx
    std::int64_t opaqueValue18; // rax
    char opaqueValue19; // r14
    char* stringStorageToRelease20; // rcx
    LPCWSTR* utf16Characters21; // rax
    char** temporaryPointer22; // rax
    char* temporaryPointer23; // rcx
    char opaqueValue24; // si
    void* stringStorageToRelease25; // rcx
    char* stringStorageToRelease26; // rcx
    char* stringStorageToRelease27; // rcx
    char* stringStorageToRelease28; // rcx
    char* temporaryPointer30; // [rsp+38h] [rbp-18h] BYREF
    char* temporaryPointer31; // [rsp+40h] [rbp-10h] BYREF
    std::int64_t opaqueValue32; // [rsp+48h] [rbp-8h] BYREF
    char* temporaryPointer33; // [rsp+98h] [rbp+48h] BYREF
    char* reusableString34; // [rsp+A0h] [rbp+50h] BYREF
    PWSTR ppszPath; // [rsp+A8h] [rbp+58h] BYREF

    ppszPath = nullptr;
    if (SHGetKnownFolderPath (&stru_180E40510, 0, nullptr, &ppszPath) != 0)
    {
        juceStringConstructFromUtf8 (&reusableString34, "Updater location unavailable");
        juceStringAssign (outputResult, &reusableString34);
        stringStorageToRelease2 = reusableString34 - 16;
        if (reusableString34 - 16 == (char*)&emptyJuceStringStorage)
            return outputResult;
        goto label56;
    }
    opaqueValue3 = ppszPath;
    opaqueValue4 = 2;
    if (ppszPath != nullptr && *ppszPath != 0)
    {
        opaqueValue5 = 0;
        opaqueValue6 = ppszPath;
        while (1)
        {
            opaqueValue7 = *opaqueValue6;
            temporaryPointer8 = opaqueValue6 + 1;
            if (opaqueValue7 - 55296 > 0x3FF)
                goto label11;
            if ((unsigned int)*temporaryPointer8 - 56320 <= 0x3FF)
                opaqueValue7 = (((opaqueValue7 - 55296) << 10) | (*temporaryPointer8 - 56320)) + 0x10000;
            opaqueValue9 = 4;
            if ((unsigned int)*temporaryPointer8 - 56320 > 0x3FF)
            label11:
                opaqueValue9 = 2;
            opaqueValue6 = (PWSTR)((char*)opaqueValue6 + opaqueValue9);
            if (opaqueValue7 == 0)
                break;
            opaqueValue10 = 1;
            if (opaqueValue7 >= 0x80)
            {
                opaqueValue10 = 2;
                if (opaqueValue7 >= 0x800)
                {
                    opaqueValue10 = 3;
                    if (opaqueValue7 >= 0x10000)
                        opaqueValue10 = 4;
                }
            }
            opaqueValue5 += opaqueValue10;
        }
        opaqueValue11 = (opaqueValue5 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
        opaqueValue12 = sub_1809A1734 (opaqueValue11 + 23);
        _InterlockedExchange ((volatile std::int32_t*)opaqueValue12, 0);
        *(std::uint64_t*)(opaqueValue12 + 8) = opaqueValue11;
        temporaryPointer13 = (char*)(opaqueValue12 + 16);
        reusableString34 = (char*)(opaqueValue12 + 16);
        sub_1800B7B20 (&reusableString34, opaqueValue3);
        reusableString34 = temporaryPointer13;
    }
    else
    {
        reusableString34 = &emptyJuceStringCharacters;
    }
    sub_18008C740 (&temporaryPointer30, &reusableString34);
    sub_18008D3A0 (&temporaryPointer30, &temporaryPointer33, "FAD Synth/Updater/FAD Synth Updater.exe");
    stringStorageToRelease14 = temporaryPointer30 - 16;
    if (temporaryPointer30 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease14) == -1)
        memoryFree (stringStorageToRelease14);
    stringStorageToRelease15 = reusableString34 - 16;
    if (reusableString34 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease15) == -1)
        memoryFree (stringStorageToRelease15);
    CoTaskMemFree (ppszPath);
    if ((std::uint8_t)winTrustVerifyPublisherSignature (&temporaryPointer33) == 0)
    {
        temporaryPointer16 = &unk_181333648;
    label28:
        sub_1800B3260 (&reusableString34, temporaryPointer16);
        juceStringAssign (outputResult, &reusableString34);
        temporaryPointer17 = reusableString34;
        goto label52;
    }
    opaqueValue18 = sub_1800943B0 (&temporaryPointer33, &reusableString34);
    opaqueValue19 = sub_180908F60 (opaqueValue18);
    stringStorageToRelease20 = reusableString34 - 16;
    if (reusableString34 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease20) == -1)
        memoryFree (stringStorageToRelease20);
    if (opaqueValue19 == 0)
    {
        temporaryPointer16 = &unk_181333710;
        goto label28;
    }
    temporaryPointer31 = temporaryPointer33;
    if (temporaryPointer33 - 16 != (char*)&emptyJuceStringStorage)
        _InterlockedIncrement ((volatile std::int32_t*)temporaryPointer33 - 4);
    utf16Characters21 = (LPCWSTR*)juceStringGetUtf16View (&reusableString34, &temporaryPointer31);
    if ((std::int64_t)ShellExecuteW (nullptr, L"open", *utf16Characters21, nullptr, nullptr, 1) <= 32)
    {
        juceStringConstructFromUtf8 (&reusableString34, "Could not open updater");
        temporaryPointer22 = (char**)juceStringAssign (&opaqueValue32, &reusableString34);
        opaqueValue4 = 12;
        temporaryPointer23 = *temporaryPointer22;
    }
    else
    {
        temporaryPointer30 = &emptyJuceStringCharacters;
        temporaryPointer22 = &temporaryPointer30;
        temporaryPointer23 = &emptyJuceStringCharacters;
    }
    *outputResult = temporaryPointer23;
    *temporaryPointer22 = &emptyJuceStringCharacters;
    opaqueValue24 = opaqueValue4 | 1;
    if ((opaqueValue24 & 8) != 0)
    {
        opaqueValue24 &= ~8u;
        stringStorageToRelease25 = (void*)(opaqueValue32 - 16);
        if ((void*)(opaqueValue32 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease25) == -1)
            memoryFree (stringStorageToRelease25);
    }
    if ((opaqueValue24 & 4) != 0)
    {
        opaqueValue24 &= ~4u;
        stringStorageToRelease26 = reusableString34 - 16;
        if (reusableString34 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease26) == -1)
            memoryFree (stringStorageToRelease26);
    }
    if ((opaqueValue24 & 2) != 0)
    {
        stringStorageToRelease27 = temporaryPointer30 - 16;
        if (temporaryPointer30 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease27) == -1)
            memoryFree (stringStorageToRelease27);
    }
    temporaryPointer17 = temporaryPointer31;
label52:
    stringStorageToRelease28 = temporaryPointer17 - 16;
    if (stringStorageToRelease28 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease28) == -1)
        memoryFree (stringStorageToRelease28);
    stringStorageToRelease2 = temporaryPointer33 - 16;
    if (temporaryPointer33 - 16 != (char*)&emptyJuceStringStorage)
    {
    label56:
        if (_InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease2) == -1)
            memoryFree (stringStorageToRelease2);
    }
    return outputResult;
}
