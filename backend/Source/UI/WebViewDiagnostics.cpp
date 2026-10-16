#include <cstdint>

// ===== WebView_Diagnostics_Format @ 0x1808e74c0 size=1065 =====
std::uint8_t* webViewFormatBackendDiagnostics (std::uint8_t* outputText, std::int64_t surfaceName)
{
    std::int64_t opaqueValue3; // rax
    void* stringStorageToRelease4; // rcx
    std::int64_t opaqueValue5; // rax
    std::uint8_t* temporaryPointer6; // rax
    std::uint8_t* temporaryPointer7; // rbx
    std::uint8_t* stringStorageToRelease8; // rcx
    std::int64_t opaqueValue9; // rax
    int opaqueValue10; // esi
    std::uint64_t* temporaryPointer11; // r15
    std::int64_t opaqueValue12; // rax
    void* stringStorageToRelease13; // rcx
    std::int64_t opaqueValue14; // rax
    std::uint8_t* temporaryPointer15; // rax
    std::uint8_t* temporaryPointer16; // r13
    std::uint8_t* stringStorageToRelease17; // rcx
    int opaqueValue18; // r14d
    int opaqueValue19; // ebx
    int* temporaryPointer20; // rdx
    std::int64_t opaqueValue21; // r13
    std::uint8_t* stringStorageToRelease22; // rcx
    int opaqueValue23; // esi
    void* stringStorageToRelease24; // rcx
    volatile std::int32_t* temporaryPointer25; // rbx
    std::int64_t opaqueValue26; // rax
    std::int64_t opaqueValue27; // rax
    void* stringStorageToRelease28; // rcx
    std::int64_t opaqueValue29; // rax
    std::uint8_t* temporaryPointer30; // rax
    std::uint8_t* temporaryPointer31; // rbx
    std::uint8_t* stringStorageToRelease32; // rcx
    LPVOID lpMem; // [rsp+38h] [rbp-38h] BYREF
    std::int64_t opaqueValue35; // [rsp+40h] [rbp-30h]
    std::int64_t opaqueValue36; // [rsp+48h] [rbp-28h] BYREF
    std::int64_t opaqueValue37; // [rsp+50h] [rbp-20h]
    char opaqueValue38; // [rsp+58h] [rbp-18h]
    volatile std::int32_t* temporaryPointer39; // [rsp+60h] [rbp-10h]
    volatile std::int32_t* temporaryPointer40; // [rsp+68h] [rbp-8h]
    std::uint8_t* reusableString41; // [rsp+B0h] [rbp+40h] BYREF
    std::int64_t opaqueValue42; // [rsp+C0h] [rbp+50h] BYREF

    reusableString41 = outputText;
    webViewBuildPathDiagnostics (&opaqueValue36, surfaceName);
    lpMem = nullptr;
    opaqueValue35 = 0;
    juceStringConstructFromUtf8 (&reusableString41, "surface=");
    if (*reusableString41 != 0)
    {
        opaqueValue5 = -1;
        do
            ++opaqueValue5;
        while (*(std::uint8_t*)(opaqueValue36 + opaqueValue5) != 0);
        juceStringAppendUtf8Range (&reusableString41, opaqueValue36, opaqueValue5 + opaqueValue36);
    }
    else
    {
        opaqueValue3 = opaqueValue36;
        if ((void*)(opaqueValue36 - 16) != &emptyJuceStringStorage)
        {
            _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue36 - 16));
            opaqueValue3 = opaqueValue36;
        }
        stringStorageToRelease4 = (void*)(_InterlockedExchange64 ((volatile std::int64_t*)&reusableString41, opaqueValue3) - 16);
        if (stringStorageToRelease4 != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease4) == -1)
            memoryFree (stringStorageToRelease4);
    }
    temporaryPointer6 = reusableString41;
    temporaryPointer7 = reusableString41;
    if (reusableString41 - 16 != (std::uint8_t*)&emptyJuceStringStorage)
    {
        _InterlockedIncrement ((volatile std::int32_t*)reusableString41 - 4);
        temporaryPointer6 = reusableString41;
    }
    stringStorageToRelease8 = temporaryPointer6 - 16;
    if (temporaryPointer6 - 16 != (std::uint8_t*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease8) == -1)
        memoryFree (stringStorageToRelease8);
    sub_180086F40 (&lpMem, 8);
    opaqueValue9 = SHIDWORD (opaqueValue35);
    opaqueValue10 = ++HIDWORD (opaqueValue35);
    temporaryPointer11 = lpMem;
    *((std::uint64_t*)lpMem + opaqueValue9) = temporaryPointer7;
    juceStringConstructFromUtf8 (&reusableString41, "requestedBackend=");
    if (*reusableString41 != 0)
    {
        opaqueValue14 = -1;
        do
            ++opaqueValue14;
        while (*(std::uint8_t*)(opaqueValue37 + opaqueValue14) != 0);
        juceStringAppendUtf8Range (&reusableString41, opaqueValue37, opaqueValue14 + opaqueValue37);
    }
    else
    {
        opaqueValue12 = opaqueValue37;
        if ((void*)(opaqueValue37 - 16) != &emptyJuceStringStorage)
        {
            _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue37 - 16));
            opaqueValue12 = opaqueValue37;
        }
        stringStorageToRelease13 = (void*)(_InterlockedExchange64 ((volatile std::int64_t*)&reusableString41, opaqueValue12) - 16);
        if (stringStorageToRelease13 != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease13) == -1)
            memoryFree (stringStorageToRelease13);
    }
    temporaryPointer15 = reusableString41;
    temporaryPointer16 = reusableString41;
    if (reusableString41 - 16 != (std::uint8_t*)&emptyJuceStringStorage)
    {
        _InterlockedIncrement ((volatile std::int32_t*)reusableString41 - 4);
        temporaryPointer15 = reusableString41;
    }
    stringStorageToRelease17 = temporaryPointer15 - 16;
    if (temporaryPointer15 - 16 != (std::uint8_t*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease17) == -1)
        memoryFree (stringStorageToRelease17);
    opaqueValue18 = opaqueValue35;
    if (opaqueValue10 + 1 > (int)opaqueValue35)
    {
        sub_180086F40 (&lpMem, ((opaqueValue10 + 1) / 2 + opaqueValue10 + 9) & 0xFFFFFFF8);
        opaqueValue10 = HIDWORD (opaqueValue35);
        opaqueValue18 = opaqueValue35;
        temporaryPointer11 = lpMem;
    }
    opaqueValue19 = opaqueValue10 + 1;
    HIDWORD (opaqueValue35) = opaqueValue10 + 1;
    temporaryPointer11[opaqueValue10] = temporaryPointer16;
    temporaryPointer20 = &dword_180F49688;
    if (opaqueValue38 != 0)
        temporaryPointer20 = &dword_180F49690;
    juceStringConstructFromUtf8 (&opaqueValue42, temporaryPointer20);
    juceStringConstructFromUtf8 (&reusableString41, "requestedBackendSupported=");
    opaqueValue21 = *(std::uint64_t*)juceStringAppendString (&reusableString41, &opaqueValue42);
    if ((void*)(opaqueValue21 - 16) != &emptyJuceStringStorage)
        _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue21 - 16));
    stringStorageToRelease22 = reusableString41 - 16;
    if (reusableString41 - 16 != (std::uint8_t*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease22) == -1)
        memoryFree (stringStorageToRelease22);
    if (opaqueValue10 + 2 > opaqueValue18)
    {
        sub_180086F40 (&lpMem, (opaqueValue10 + 2 + (opaqueValue10 + 2) / 2 + 8) & 0xFFFFFFF8);
        opaqueValue19 = HIDWORD (opaqueValue35);
        opaqueValue18 = opaqueValue35;
        temporaryPointer11 = lpMem;
    }
    opaqueValue23 = opaqueValue19 + 1;
    HIDWORD (opaqueValue35) = opaqueValue19 + 1;
    temporaryPointer11[opaqueValue19] = opaqueValue21;
    stringStorageToRelease24 = (void*)(opaqueValue42 - 16);
    if ((void*)(opaqueValue42 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease24) == -1)
        memoryFree (stringStorageToRelease24);
    temporaryPointer25 = temporaryPointer40;
    if (*(std::uint8_t*)temporaryPointer40 != 0)
    {
        if (temporaryPointer40 - 4 != (volatile std::int32_t*)&emptyJuceStringStorage)
            _InterlockedIncrement (temporaryPointer40 - 4);
        if (opaqueValue23 + 1 > opaqueValue18)
        {
            sub_180086F40 (&lpMem, (opaqueValue23 + 1 + (opaqueValue23 + 1) / 2 + 8) & 0xFFFFFFF8);
            opaqueValue23 = HIDWORD (opaqueValue35);
            opaqueValue18 = opaqueValue35;
            temporaryPointer11 = lpMem;
        }
        opaqueValue26 = opaqueValue23++;
        HIDWORD (opaqueValue35) = opaqueValue23;
        temporaryPointer11[opaqueValue26] = temporaryPointer25;
    }
    if (*(std::uint8_t*)temporaryPointer39 != 0)
    {
        juceStringConstructFromUtf8 (&reusableString41, "reason=");
        if (*reusableString41 != 0)
        {
            opaqueValue29 = -1;
            do
                ++opaqueValue29;
            while (*((std::uint8_t*)temporaryPointer39 + opaqueValue29) != 0);
            juceStringAppendUtf8Range (&reusableString41, temporaryPointer39, (char*)temporaryPointer39 + opaqueValue29);
        }
        else
        {
            opaqueValue27 = (std::int64_t)temporaryPointer39;
            if (temporaryPointer39 - 4 != (volatile std::int32_t*)&emptyJuceStringStorage)
            {
                _InterlockedIncrement (temporaryPointer39 - 4);
                opaqueValue27 = (std::int64_t)temporaryPointer39;
            }
            stringStorageToRelease28 = (void*)(_InterlockedExchange64 ((volatile std::int64_t*)&reusableString41, opaqueValue27) - 16);
            if (stringStorageToRelease28 != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease28) == -1)
                memoryFree (stringStorageToRelease28);
        }
        temporaryPointer30 = reusableString41;
        temporaryPointer31 = reusableString41;
        if (reusableString41 - 16 != (std::uint8_t*)&emptyJuceStringStorage)
        {
            _InterlockedIncrement ((volatile std::int32_t*)reusableString41 - 4);
            temporaryPointer30 = reusableString41;
        }
        stringStorageToRelease32 = temporaryPointer30 - 16;
        if (temporaryPointer30 - 16 != (std::uint8_t*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease32) == -1)
            memoryFree (stringStorageToRelease32);
        if (opaqueValue23 + 1 > opaqueValue18)
        {
            sub_180086F40 (&lpMem, (opaqueValue23 + 1 + (opaqueValue23 + 1) / 2 + 8) & 0xFFFFFFF8);
            opaqueValue23 = HIDWORD (opaqueValue35);
            temporaryPointer11 = lpMem;
        }
        HIDWORD (opaqueValue35) = opaqueValue23 + 1;
        temporaryPointer11[opaqueValue23] = temporaryPointer31;
    }
    sub_18009D6C0 (&lpMem, outputText, "; ", 0);
    sub_180024DB0 (&lpMem);
    memoryFreeBuffer (lpMem);
    sub_18021A800 (&opaqueValue36);
    return outputText;
}

// ===== WebView_PathDiagnostics @ 0x18021a3a0 size=1107 =====
std::int64_t webViewBuildPathDiagnostics (std::int64_t outputDiagnostics, volatile std::int32_t** surfaceName)
{
    char* temporaryPointer3; // rsi
    volatile std::int32_t* temporaryPointer4; // rbx
    char opaqueValue5; // r15
    std::int64_t opaqueValue6; // rax
    char* temporaryPointer7; // rdi
    char* stringStorageToRelease8; // rcx
    int opaqueValue9; // eax
    std::int64_t opaqueValue10; // rcx
    void* stringStorageToRelease11; // rcx
    std::int64_t opaqueValue12; // rbx
    std::int64_t opaqueValue13; // rbx
    char* stringStorageToRelease14; // rcx
    std::int64_t opaqueValue15; // rcx
    void* stringStorageToRelease16; // rcx
    void* stringStorageToRelease17; // rcx
    std::uint32_t* temporaryPointer18; // rdx
    char opaqueValue19; // al
    std::int64_t opaqueValue20; // rcx
    void* temporaryPointer21; // rdx
    std::int64_t opaqueValue22; // rcx
    void* stringStorageToRelease23; // rcx
    int opaqueValue24; // eax
    std::int64_t opaqueValue25; // rcx
    std::int64_t opaqueValue26; // rax
    std::int64_t opaqueValue27; // rbx
    void* stringStorageToRelease28; // rcx
    std::int64_t opaqueValue29; // rcx
    void* stringStorageToRelease30; // rcx
    char* stringStorageToRelease31; // rcx
    void* temporaryPointer32; // rcx
    std::int64_t reusableString34; // [rsp+28h] [rbp-D8h] BYREF
    char* reusableString35; // [rsp+30h] [rbp-D0h] BYREF
    volatile std::int32_t* temporaryPointer36; // [rsp+38h] [rbp-C8h]
    void (*callbackFunction37) (std::int64_t); // [rsp+40h] [rbp-C0h] BYREF
    std::int64_t opaqueValue38; // [rsp+48h] [rbp-B8h]
    std::int64_t opaqueValue39; // [rsp+50h] [rbp-B0h]
    char opaqueValue40; // [rsp+58h] [rbp-A8h]
    std::uint8_t stackStorage41[240]; // [rsp+60h] [rbp-A0h] BYREF

    temporaryPointer36 = (volatile std::int32_t*)outputDiagnostics;
    temporaryPointer3 = &emptyJuceStringCharacters;
    *(std::uint64_t*)outputDiagnostics = &emptyJuceStringCharacters;
    *(std::uint64_t*)(outputDiagnostics + 8) = &emptyJuceStringCharacters;
    *(std::uint8_t*)(outputDiagnostics + 16) = 0;
    *(std::uint64_t*)(outputDiagnostics + 24) = &emptyJuceStringCharacters;
    *(std::uint64_t*)(outputDiagnostics + 32) = &emptyJuceStringCharacters;
    temporaryPointer4 = *surfaceName;
    if (*(std::uint8_t*)*surfaceName != 0)
    {
        if (temporaryPointer4 - 4 != (volatile std::int32_t*)&emptyJuceStringStorage)
            _InterlockedIncrement (temporaryPointer4 - 4);
        opaqueValue5 = 3;
        opaqueValue6 = (std::int64_t)temporaryPointer4;
        temporaryPointer7 = reusableString35;
    }
    else
    {
        juceStringConstructFromUtf8 (&reusableString35, "unnamed-surface");
        opaqueValue5 = 5;
        temporaryPointer7 = reusableString35;
        opaqueValue6 = (std::int64_t)reusableString35;
        temporaryPointer4 = temporaryPointer36;
    }
    if ((void*)(opaqueValue6 - 16) != &emptyJuceStringStorage)
        _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue6 - 16));
    stringStorageToRelease8 = (char*)(_InterlockedExchange64 ((volatile std::int64_t*)outputDiagnostics, opaqueValue6) - 16);
    if (stringStorageToRelease8 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease8) == -1)
        memoryFree (stringStorageToRelease8);
    if ((opaqueValue5 & 4) != 0)
    {
        opaqueValue5 &= ~4u;
        stringStorageToRelease8 = temporaryPointer7 - 16;
        if (temporaryPointer7 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease8) == -1)
            memoryFree (stringStorageToRelease8);
    }
    if ((opaqueValue5 & 2) != 0)
    {
        stringStorageToRelease8 = (char*)(temporaryPointer4 - 4);
        if (temporaryPointer4 - 4 != (volatile std::int32_t*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease8) == -1)
        {
            memoryFree (stringStorageToRelease8);
        }
    }
    opaqueValue9 = sub_1801F98B0 (stringStorageToRelease8);
    if (opaqueValue9 == 33 || opaqueValue9 == 16)
    {
        juceStringConstructFromUtf8 (&reusableString34, "plugin-validator-fallback");
        opaqueValue22 = *(std::uint64_t*)(outputDiagnostics + 8);
        *(std::uint64_t*)(outputDiagnostics + 8) = reusableString34;
        stringStorageToRelease23 = (void*)(opaqueValue22 - 16);
        if (stringStorageToRelease23 != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease23) == -1)
            memoryFree (stringStorageToRelease23);
        opaqueValue24 = sub_1801F98B0 (stringStorageToRelease23);
        if (opaqueValue24 == 33 || opaqueValue24 == 16)
        {
            LODWORD (reusableString35) = sub_1801F98B0 (opaqueValue25);
            opaqueValue26 = sub_1801F9560 (&reusableString35);
            juceStringConstructFromUtf8 (&reusableString35, opaqueValue26);
            temporaryPointer3 = reusableString35;
        }
        else
        {
            reusableString35 = &emptyJuceStringCharacters;
        }
        juceStringConstructFromUtf8 (&reusableString34, "host=");
        opaqueValue27 = *(std::uint64_t*)juceStringAppendString (&reusableString34, &reusableString35);
        if ((void*)(opaqueValue27 - 16) != &emptyJuceStringStorage)
            _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue27 - 16));
        stringStorageToRelease28 = (void*)(reusableString34 - 16);
        if ((void*)(reusableString34 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease28) == -1)
            memoryFree (stringStorageToRelease28);
        opaqueValue29 = *(std::uint64_t*)(outputDiagnostics + 32);
        *(std::uint64_t*)(outputDiagnostics + 32) = opaqueValue27;
        stringStorageToRelease30 = (void*)(opaqueValue29 - 16);
        if (stringStorageToRelease30 != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease30) == -1)
            memoryFree (stringStorageToRelease30);
        stringStorageToRelease31 = temporaryPointer3 - 16;
        if (temporaryPointer3 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease31) == -1)
            memoryFree (stringStorageToRelease31);
        temporaryPointer21 = &unk_180F60F60;
        goto label65;
    }
    juceStringConstructFromUtf8 (&reusableString34, "webview2");
    opaqueValue10 = *(std::uint64_t*)(outputDiagnostics + 8);
    *(std::uint64_t*)(outputDiagnostics + 8) = reusableString34;
    stringStorageToRelease11 = (void*)(opaqueValue10 - 16);
    if (stringStorageToRelease11 != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease11) == -1)
        memoryFree (stringStorageToRelease11);
    opaqueValue12 = sub_180219E70 (&reusableString34);
    juceStringConstructFromUtf8 (&reusableString35, "userDataFolder=");
    opaqueValue13 = *(std::uint64_t*)juceStringAppendString (&reusableString35, opaqueValue12);
    if ((void*)(opaqueValue13 - 16) != &emptyJuceStringStorage)
        _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue13 - 16));
    stringStorageToRelease14 = reusableString35 - 16;
    if (reusableString35 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease14) == -1)
        memoryFree (stringStorageToRelease14);
    opaqueValue15 = *(std::uint64_t*)(outputDiagnostics + 32);
    *(std::uint64_t*)(outputDiagnostics + 32) = opaqueValue13;
    stringStorageToRelease16 = (void*)(opaqueValue15 - 16);
    if (stringStorageToRelease16 != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease16) == -1)
        memoryFree (stringStorageToRelease16);
    stringStorageToRelease17 = (void*)(reusableString34 - 16);
    if ((void*)(reusableString34 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease17) == -1)
        memoryFree (stringStorageToRelease17);
    temporaryPointer18 = (std::uint32_t*)sub_180219F90 (stackStorage41);
    if (*temporaryPointer18 < 2u)
        goto label43;
    if (*temporaryPointer18 == 2)
    {
        sub_180588F10 (&callbackFunction37, temporaryPointer18);
        if (opaqueValue40 != 0)
        {
            opaqueValue20 = opaqueValue39;
            opaqueValue39 = 0;
            if (opaqueValue20 != 0)
                (*(void (**) (std::int64_t)) (*(std::uint64_t*)opaqueValue20 + 16LL)) (opaqueValue20);
            if (opaqueValue38 != 0)
                callbackFunction37 (opaqueValue38);
        label43:
            opaqueValue19 = 1;
            goto label44;
        }
    }
    opaqueValue19 = 0;
label44:
    *(std::uint8_t*)(outputDiagnostics + 16) = opaqueValue19;
    sub_180210E40 (stackStorage41, temporaryPointer18);
    if (*(std::uint8_t*)(outputDiagnostics + 16) != 0)
        return outputDiagnostics;
    temporaryPointer21 = &unk_180F60FE0;
label65:
    sub_1800B3260 (&reusableString34, temporaryPointer21);
    temporaryPointer32 = (void*)(*(std::uint64_t*)(outputDiagnostics + 24) - 16LL);
    *(std::uint64_t*)(outputDiagnostics + 24) = reusableString34;
    if (temporaryPointer32 != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)temporaryPointer32) == -1)
        memoryFree (temporaryPointer32);
    return outputDiagnostics;
}
