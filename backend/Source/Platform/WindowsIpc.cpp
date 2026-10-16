#include <cstdint>

// ===== OpenProcessToken_caller @ 0x1803a26e0 size=2879 =====
std::int64_t* winIpcCreateDawTransport (std::int64_t* outputTransport, std::int64_t processorContext)
{
    HANDLE CurrentProcess; // rax
    std::int64_t opaqueValue5; // rax
    char* temporaryPointer6; // rbx
    std::uint64_t* temporaryPointer7; // rdx
    std::int64_t opaqueValue8; // rbx
    std::int64_t opaqueValue9; // rdi
    HANDLE EventW; // rax
    void* stringStorageToRelease11; // rcx
    std::int64_t opaqueValue12; // rax
    std::uint8_t* temporaryPointer13; // rax
    std::uint8_t* stringStorageToRelease14; // rcx
    volatile std::int32_t* temporaryPointer15; // rax
    volatile std::int32_t* temporaryPointer16; // rcx
    void* stringStorageToRelease17; // rcx
    std::int64_t opaqueValue18; // rax
    std::int64_t opaqueValue19; // rax
    void* stringStorageToRelease20; // rcx
    volatile std::int32_t* temporaryPointer21; // rax
    volatile std::int32_t* temporaryPointer22; // rcx
    LPCWSTR* utf16Characters23; // rax
    volatile std::int32_t* temporaryPointer24; // rcx
    volatile std::int32_t* stringStorageToRelease25; // rcx
    bool conditionFlag26; // zf
    void* stringStorageToRelease27; // rcx
    std::int64_t opaqueValue28; // rax
    std::uint8_t* temporaryPointer29; // rax
    std::uint8_t* stringStorageToRelease30; // rcx
    std::uint8_t* temporaryPointer31; // rax
    std::uint8_t* stringStorageToRelease32; // rcx
    void* stringStorageToRelease33; // rcx
    std::int64_t opaqueValue34; // rax
    std::uint8_t* temporaryPointer35; // rax
    std::uint8_t* stringStorageToRelease36; // rcx
    volatile std::int32_t* temporaryPointer37; // rax
    volatile std::int32_t* temporaryPointer38; // rcx
    volatile std::int32_t* temporaryPointer39; // rcx
    LPCWSTR* utf16Characters40; // rax
    void* stringStorageToRelease41; // rcx
    void* stringStorageToRelease42; // rcx
    std::int64_t opaqueValue43; // rax
    std::uint8_t* temporaryPointer44; // rax
    std::uint8_t* stringStorageToRelease45; // rcx
    volatile std::int32_t* temporaryPointer46; // rax
    volatile std::int32_t* temporaryPointer47; // rcx
    void* stringStorageToRelease48; // rcx
    std::int64_t opaqueValue49; // rax
    std::int64_t opaqueValue50; // rax
    void* stringStorageToRelease51; // rcx
    volatile std::int32_t* temporaryPointer52; // rax
    volatile std::int32_t* temporaryPointer53; // rcx
    LPCWSTR* utf16Characters54; // rax
    volatile std::int32_t* temporaryPointer55; // rcx
    std::uint64_t* prefixedString56; // rsi
    std::int64_t opaqueValue57; // rsi
    volatile std::int32_t* stringStorageToRelease58; // r13
    void* temporaryPointer59; // rcx
    std::int64_t* temporaryPointer60; // rax
    std::int64_t opaqueValue61; // rdx
    std::uint8_t* stringStorageToRelease62; // rcx
    std::int64_t* temporaryPointer63; // rcx
    LPCWSTR* utf16Characters64; // rax
    volatile std::int32_t* temporaryPointer65; // rcx
    void* stringStorageToRelease66; // rcx
    volatile std::int32_t* temporaryPointer67; // rcx
    void* stringStorageToRelease68; // rcx
    void* stringStorageToRelease69; // rcx
    void* temporaryPointer70; // rcx
    void* stringStorageToRelease71; // rcx
    std::uint8_t* messageString73; // [rsp+40h] [rbp-69h] BYREF
    std::uint8_t* reusableString74; // [rsp+48h] [rbp-61h] BYREF
    std::int64_t* temporaryPointer75; // [rsp+50h] [rbp-59h] BYREF
    volatile std::int32_t* temporaryPointer76; // [rsp+58h] [rbp-51h] BYREF
    volatile std::int32_t* temporaryPointer77; // [rsp+60h] [rbp-49h] BYREF
    std::uint8_t* temporaryPointer78; // [rsp+68h] [rbp-41h] BYREF
    volatile std::int32_t* temporaryPointer79; // [rsp+70h] [rbp-39h] BYREF
    PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+78h] [rbp-31h] BYREF
    volatile std::int32_t* temporaryPointer81; // [rsp+80h] [rbp-29h] BYREF
    volatile std::int32_t* temporaryPointer82; // [rsp+88h] [rbp-21h] BYREF
    std::int64_t opaqueValue83; // [rsp+90h] [rbp-19h] BYREF
    std::uint8_t* temporaryPointer84; // [rsp+98h] [rbp-11h] BYREF
    std::uint8_t* temporaryPointer85; // [rsp+A0h] [rbp-9h] BYREF
    std::int64_t opaqueValue86; // [rsp+A8h] [rbp-1h] BYREF
    struct _SECURITY_ATTRIBUTES SecurityAttributes; // [rsp+B0h] [rbp+7h] BYREF
    std::int64_t* temporaryPointer88; // [rsp+C8h] [rbp+1Fh]
    HANDLE TokenHandle; // [rsp+120h] [rbp+77h] BYREF
    volatile std::int32_t* allocatedObject90; // [rsp+128h] [rbp+7Fh] BYREF

    *outputTransport = (std::int64_t)&emptyJuceStringCharacters;
    outputTransport[1] = 0;
    outputTransport[2] = 0;
    outputTransport[3] = 0;
    *((std::uint8_t*)outputTransport + 32) = 0;
    temporaryPointer88 = outputTransport;
    TokenHandle = nullptr;
    CurrentProcess = GetCurrentProcess();
    if (OpenProcessToken (CurrentProcess, 8u, &TokenHandle))
    {
        allocatedObject90 = (volatile std::int32_t*)memoryAllocateObject (48);
        opaqueValue5 = sub_1803A2150 (allocatedObject90, TokenHandle);
        temporaryPointer6 = (char*)outputTransport[3];
        outputTransport[3] = opaqueValue5;
        if (temporaryPointer6 != nullptr)
        {
            sub_180024F00 (temporaryPointer6 + 24);
            sub_180024F00 (temporaryPointer6);
            memoryFree (temporaryPointer6);
        }
        temporaryPointer7 = (std::uint64_t*)outputTransport[3];
        if (*temporaryPointer7 != temporaryPointer7[1] && temporaryPointer7[3] != temporaryPointer7[4])
        {
            sub_1803A2550 (&temporaryPointer85);
            sub_1803A2550 (&temporaryPointer84);
            opaqueValue8 = (std::int64_t)temporaryPointer84;
            opaqueValue9 = (std::int64_t)temporaryPointer85;
            if (*temporaryPointer85 != 0 && *temporaryPointer84 != 0 && (EventW = CreateEventW (nullptr, true, false, nullptr), outputTransport[2] = (std::int64_t)EventW, EventW != nullptr))
            {
                juceStringConstructFromUtf8 (&messageString73, "O:");
                if (*messageString73 != 0)
                {
                    opaqueValue12 = -1;
                    do
                        ++opaqueValue12;
                    while (*(std::uint8_t*)(opaqueValue9 + opaqueValue12) != 0);
                    juceStringAppendUtf8Range (&messageString73, opaqueValue9, opaqueValue12 + opaqueValue9);
                }
                else
                {
                    if ((void*)(opaqueValue9 - 16) != &emptyJuceStringStorage)
                        _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue9 - 16));
                    stringStorageToRelease11 = (void*)(_InterlockedExchange64 ((volatile std::int64_t*)&messageString73, opaqueValue9) - 16);
                    if (stringStorageToRelease11 != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease11) == -1)
                        memoryFree (stringStorageToRelease11);
                }
                temporaryPointer13 = messageString73;
                temporaryPointer76 = (volatile std::int32_t*)messageString73;
                if (messageString73 - 16 != (std::uint8_t*)&emptyJuceStringStorage)
                {
                    _InterlockedIncrement ((volatile std::int32_t*)messageString73 - 4);
                    temporaryPointer13 = messageString73;
                }
                stringStorageToRelease14 = temporaryPointer13 - 16;
                if (temporaryPointer13 - 16 != (std::uint8_t*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease14) == -1)
                    memoryFree (stringStorageToRelease14);
                temporaryPointer75 = (std::int64_t*)&temporaryPointer76;
                juceStringAppendUtf8Range (&temporaryPointer76, "D:P(A;;0x12019b;;;", "");
                temporaryPointer15 = temporaryPointer76;
                allocatedObject90 = temporaryPointer76;
                if (temporaryPointer76 - 4 != (volatile std::int32_t*)&emptyJuceStringStorage)
                {
                    _InterlockedIncrement (temporaryPointer76 - 4);
                    temporaryPointer15 = temporaryPointer76;
                }
                temporaryPointer16 = temporaryPointer15 - 4;
                if (temporaryPointer15 - 4 != (volatile std::int32_t*)&emptyJuceStringStorage && _InterlockedDecrement (temporaryPointer16) == -1)
                    memoryFree ((LPVOID)temporaryPointer16);
                temporaryPointer75 = (std::int64_t*)&allocatedObject90;
                if (*(std::uint8_t*)allocatedObject90 != 0)
                {
                    opaqueValue18 = -1;
                    do
                        ++opaqueValue18;
                    while (*(std::uint8_t*)(opaqueValue8 + opaqueValue18) != 0);
                    juceStringAppendUtf8Range (&allocatedObject90, opaqueValue8, opaqueValue18 + opaqueValue8);
                }
                else
                {
                    if ((void*)(opaqueValue8 - 16) != &emptyJuceStringStorage)
                        _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue8 - 16));
                    stringStorageToRelease17 = (void*)(_InterlockedExchange64 ((volatile std::int64_t*)&allocatedObject90, opaqueValue8) - 16);
                    if (stringStorageToRelease17 != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease17) == -1)
                        memoryFree (stringStorageToRelease17);
                }
                opaqueValue19 = (std::int64_t)allocatedObject90;
                temporaryPointer77 = allocatedObject90;
                if (allocatedObject90 - 4 != (volatile std::int32_t*)&emptyJuceStringStorage)
                {
                    _InterlockedIncrement (allocatedObject90 - 4);
                    opaqueValue19 = (std::int64_t)allocatedObject90;
                }
                stringStorageToRelease20 = (void*)(opaqueValue19 - 16);
                if ((void*)(opaqueValue19 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease20) == -1)
                    memoryFree (stringStorageToRelease20);
                temporaryPointer75 = (std::int64_t*)&temporaryPointer77;
                juceStringAppendUtf8Range (&temporaryPointer77, ")", "");
                temporaryPointer21 = temporaryPointer77;
                temporaryPointer82 = temporaryPointer77;
                if (temporaryPointer77 - 4 != (volatile std::int32_t*)&emptyJuceStringStorage)
                {
                    _InterlockedIncrement (temporaryPointer77 - 4);
                    temporaryPointer21 = temporaryPointer77;
                }
                temporaryPointer22 = temporaryPointer21 - 4;
                if (temporaryPointer21 - 4 != (volatile std::int32_t*)&emptyJuceStringStorage && _InterlockedDecrement (temporaryPointer22) == -1)
                    memoryFree ((LPVOID)temporaryPointer22);
                SecurityDescriptor = nullptr;
                utf16Characters23 = (LPCWSTR*)juceStringGetUtf16View (&temporaryPointer75, &temporaryPointer82);
                if (ConvertStringSecurityDescriptorToSecurityDescriptorW (*utf16Characters23, 1u, &SecurityDescriptor, nullptr))
                {
                    SecurityAttributes.nLength = 24;
                    SecurityAttributes.lpSecurityDescriptor = SecurityDescriptor;
                    SecurityAttributes.bInheritHandle = false;
                    juceStringConstructFromUtf8 (&reusableString74, "\\\\.\\pipe\\fadsynth-daw-");
                    if (*reusableString74 != 0)
                    {
                        opaqueValue28 = -1;
                        do
                            ++opaqueValue28;
                        while (*(std::uint8_t*)(opaqueValue9 + opaqueValue28) != 0);
                        juceStringAppendUtf8Range (&reusableString74, opaqueValue9, opaqueValue28 + opaqueValue9);
                    }
                    else
                    {
                        if ((void*)(opaqueValue9 - 16) != &emptyJuceStringStorage)
                            _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue9 - 16));
                        stringStorageToRelease27 = (void*)(_InterlockedExchange64 ((volatile std::int64_t*)&reusableString74, opaqueValue9) - 16);
                        if (stringStorageToRelease27 != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease27) == -1)
                            memoryFree (stringStorageToRelease27);
                    }
                    temporaryPointer29 = reusableString74;
                    temporaryPointer78 = reusableString74;
                    if (reusableString74 - 16 != (std::uint8_t*)&emptyJuceStringStorage)
                    {
                        _InterlockedIncrement ((volatile std::int32_t*)reusableString74 - 4);
                        temporaryPointer29 = reusableString74;
                    }
                    stringStorageToRelease30 = temporaryPointer29 - 16;
                    if (temporaryPointer29 - 16 != (std::uint8_t*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease30) == -1)
                        memoryFree (stringStorageToRelease30);
                    allocatedObject90 = (volatile std::int32_t*)&temporaryPointer78;
                    juceStringAppendUtf8Range (&temporaryPointer78, "-", "");
                    temporaryPointer31 = temporaryPointer78;
                    messageString73 = temporaryPointer78;
                    if (temporaryPointer78 - 16 != (std::uint8_t*)&emptyJuceStringStorage)
                    {
                        _InterlockedIncrement ((volatile std::int32_t*)temporaryPointer78 - 4);
                        temporaryPointer31 = temporaryPointer78;
                    }
                    stringStorageToRelease32 = temporaryPointer31 - 16;
                    if (temporaryPointer31 - 16 != (std::uint8_t*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease32) == -1)
                        memoryFree (stringStorageToRelease32);
                    allocatedObject90 = (volatile std::int32_t*)&messageString73;
                    if (*messageString73 != 0)
                    {
                        opaqueValue34 = -1;
                        do
                            ++opaqueValue34;
                        while (*(std::uint8_t*)(opaqueValue8 + opaqueValue34) != 0);
                        juceStringAppendUtf8Range (&messageString73, opaqueValue8, opaqueValue34 + opaqueValue8);
                    }
                    else
                    {
                        if ((void*)(opaqueValue8 - 16) != &emptyJuceStringStorage)
                            _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue8 - 16));
                        stringStorageToRelease33 = (void*)(_InterlockedExchange64 ((volatile std::int64_t*)&messageString73, opaqueValue8) - 16);
                        if (stringStorageToRelease33 != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease33) == -1)
                            memoryFree (stringStorageToRelease33);
                    }
                    temporaryPointer35 = messageString73;
                    temporaryPointer81 = (volatile std::int32_t*)messageString73;
                    if (messageString73 - 16 != (std::uint8_t*)&emptyJuceStringStorage)
                    {
                        _InterlockedIncrement ((volatile std::int32_t*)messageString73 - 4);
                        temporaryPointer35 = messageString73;
                    }
                    stringStorageToRelease36 = temporaryPointer35 - 16;
                    if (temporaryPointer35 - 16 != (std::uint8_t*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease36) == -1)
                        memoryFree (stringStorageToRelease36);
                    allocatedObject90 = (volatile std::int32_t*)&temporaryPointer81;
                    juceStringAppendUtf8Range (&temporaryPointer81, "-", "");
                    temporaryPointer37 = temporaryPointer81;
                    temporaryPointer79 = temporaryPointer81;
                    if (temporaryPointer81 - 4 != (volatile std::int32_t*)&emptyJuceStringStorage)
                    {
                        _InterlockedIncrement (temporaryPointer81 - 4);
                        temporaryPointer37 = temporaryPointer81;
                    }
                    temporaryPointer38 = temporaryPointer37 - 4;
                    if (temporaryPointer37 - 4 != (volatile std::int32_t*)&emptyJuceStringStorage && _InterlockedDecrement (temporaryPointer38) == -1)
                        memoryFree ((LPVOID)temporaryPointer38);
                    allocatedObject90 = (volatile std::int32_t*)&temporaryPointer79;
                    opaqueValue83 = *(std::uint64_t*)juceStringAppendString (&temporaryPointer79, processorContext);
                    if ((void*)(opaqueValue83 - 16) != &emptyJuceStringStorage)
                        _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue83 - 16));
                    temporaryPointer39 = temporaryPointer79 - 4;
                    if (temporaryPointer79 - 4 != (volatile std::int32_t*)&emptyJuceStringStorage && _InterlockedDecrement (temporaryPointer39) == -1)
                        memoryFree ((LPVOID)temporaryPointer39);
                    utf16Characters40 = (LPCWSTR*)juceStringGetUtf16View (&allocatedObject90, &opaqueValue83);
                    outputTransport[1] = (std::int64_t)CreateNamedPipeW (*utf16Characters40, 0x40080003u, 8u, 1u, 0x1000u, 0x1000u, 0x7D0u, &SecurityAttributes);
                    LocalFree (SecurityDescriptor);
                    if (outputTransport[1] != -1)
                    {
                        juceStringConstructFromUtf8 (&reusableString74, "O:");
                        if (*reusableString74 != 0)
                        {
                            opaqueValue43 = -1;
                            do
                                ++opaqueValue43;
                            while (*(std::uint8_t*)(opaqueValue9 + opaqueValue43) != 0);
                            juceStringAppendUtf8Range (&reusableString74, opaqueValue9, opaqueValue43 + opaqueValue9);
                        }
                        else
                        {
                            if ((void*)(opaqueValue9 - 16) != &emptyJuceStringStorage)
                                _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue9 - 16));
                            stringStorageToRelease42 = (void*)(_InterlockedExchange64 ((volatile std::int64_t*)&reusableString74, opaqueValue9) - 16);
                            if (stringStorageToRelease42 != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease42) == -1)
                                memoryFree (stringStorageToRelease42);
                        }
                        temporaryPointer44 = reusableString74;
                        temporaryPointer77 = (volatile std::int32_t*)reusableString74;
                        if (reusableString74 - 16 != (std::uint8_t*)&emptyJuceStringStorage)
                        {
                            _InterlockedIncrement ((volatile std::int32_t*)reusableString74 - 4);
                            temporaryPointer44 = reusableString74;
                        }
                        stringStorageToRelease45 = temporaryPointer44 - 16;
                        if (temporaryPointer44 - 16 != (std::uint8_t*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease45) == -1)
                            memoryFree (stringStorageToRelease45);
                        temporaryPointer75 = (std::int64_t*)&temporaryPointer77;
                        juceStringAppendUtf8Range (&temporaryPointer77, "D:P(A;OICI;FA;;;", "");
                        temporaryPointer46 = temporaryPointer77;
                        allocatedObject90 = temporaryPointer77;
                        if (temporaryPointer77 - 4 != (volatile std::int32_t*)&emptyJuceStringStorage)
                        {
                            _InterlockedIncrement (temporaryPointer77 - 4);
                            temporaryPointer46 = temporaryPointer77;
                        }
                        temporaryPointer47 = temporaryPointer46 - 4;
                        if (temporaryPointer46 - 4 != (volatile std::int32_t*)&emptyJuceStringStorage && _InterlockedDecrement (temporaryPointer47) == -1)
                            memoryFree ((LPVOID)temporaryPointer47);
                        temporaryPointer75 = (std::int64_t*)&allocatedObject90;
                        if (*(std::uint8_t*)allocatedObject90 != 0)
                        {
                            opaqueValue49 = -1;
                            do
                                ++opaqueValue49;
                            while (*(std::uint8_t*)(opaqueValue8 + opaqueValue49) != 0);
                            juceStringAppendUtf8Range (&allocatedObject90, opaqueValue8, opaqueValue49 + opaqueValue8);
                        }
                        else
                        {
                            if ((void*)(opaqueValue8 - 16) != &emptyJuceStringStorage)
                                _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue8 - 16));
                            stringStorageToRelease48 = (void*)(_InterlockedExchange64 ((volatile std::int64_t*)&allocatedObject90, opaqueValue8) - 16);
                            if (stringStorageToRelease48 != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease48) == -1)
                                memoryFree (stringStorageToRelease48);
                        }
                        opaqueValue50 = (std::int64_t)allocatedObject90;
                        temporaryPointer76 = allocatedObject90;
                        if (allocatedObject90 - 4 != (volatile std::int32_t*)&emptyJuceStringStorage)
                        {
                            _InterlockedIncrement (allocatedObject90 - 4);
                            opaqueValue50 = (std::int64_t)allocatedObject90;
                        }
                        stringStorageToRelease51 = (void*)(opaqueValue50 - 16);
                        if ((void*)(opaqueValue50 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease51) == -1)
                            memoryFree (stringStorageToRelease51);
                        temporaryPointer75 = (std::int64_t*)&temporaryPointer76;
                        juceStringAppendUtf8Range (&temporaryPointer76, ")", "");
                        temporaryPointer52 = temporaryPointer76;
                        temporaryPointer79 = temporaryPointer76;
                        if (temporaryPointer76 - 4 != (volatile std::int32_t*)&emptyJuceStringStorage)
                        {
                            _InterlockedIncrement (temporaryPointer76 - 4);
                            temporaryPointer52 = temporaryPointer76;
                        }
                        temporaryPointer53 = temporaryPointer52 - 4;
                        if (temporaryPointer52 - 4 != (volatile std::int32_t*)&emptyJuceStringStorage && _InterlockedDecrement (temporaryPointer53) == -1)
                            memoryFree ((LPVOID)temporaryPointer53);
                        SecurityDescriptor = nullptr;
                        utf16Characters54 = (LPCWSTR*)juceStringGetUtf16View (&temporaryPointer75, &temporaryPointer79);
                        if (ConvertStringSecurityDescriptorToSecurityDescriptorW (*utf16Characters54, 1u, &SecurityDescriptor, nullptr))
                        {
                            SecurityAttributes.lpSecurityDescriptor = SecurityDescriptor;
                            reusableString74 = (std::uint8_t*)sub_1800940D0 (&temporaryPointer75, 9);
                            prefixedString56 = (std::uint64_t*)juceStringJoinUtf8Prefix (&temporaryPointer81, "fadsynth-daw-", processorContext);
                            temporaryPointer78 = prefixedString56;
                            juceStringAppendUtf8Range (prefixedString56, ".scratch", "");
                            opaqueValue57 = *prefixedString56;
                            opaqueValue86 = opaqueValue57;
                            stringStorageToRelease58 = (volatile std::int32_t*)(opaqueValue57 - 16);
                            if ((void*)(opaqueValue57 - 16) != &emptyJuceStringStorage)
                                _InterlockedIncrement (stringStorageToRelease58);
                            temporaryPointer59 = (void*)(*(std::uint64_t*)temporaryPointer78 - 16LL);
                            if (temporaryPointer59 != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)temporaryPointer59) == -1)
                                memoryFree (temporaryPointer59);
                            temporaryPointer60 = (std::int64_t*)sub_18008D3A0 (reusableString74, &messageString73, opaqueValue57);
                            opaqueValue61 = *outputTransport;
                            *outputTransport = *temporaryPointer60;
                            *temporaryPointer60 = opaqueValue61;
                            stringStorageToRelease62 = messageString73 - 16;
                            if (messageString73 - 16 != (std::uint8_t*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease62) == -1)
                                memoryFree (stringStorageToRelease62);
                            if (stringStorageToRelease58 != (volatile std::int32_t*)&emptyJuceStringStorage && _InterlockedDecrement (stringStorageToRelease58) == -1)
                                memoryFree ((LPVOID)(opaqueValue57 - 16));
                            temporaryPointer63 = temporaryPointer75 - 2;
                            if (temporaryPointer75 - 2 != (std::int64_t*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)temporaryPointer63) == -1)
                                memoryFree (temporaryPointer63);
                            utf16Characters64 = (LPCWSTR*)juceStringGetUtf16View (&opaqueValue86, outputTransport);
                            *((std::uint8_t*)outputTransport + 32) = CreateDirectoryW (*utf16Characters64, &SecurityAttributes);
                            LocalFree (SecurityDescriptor);
                            temporaryPointer65 = temporaryPointer79 - 4;
                            if (temporaryPointer79 - 4 != (volatile std::int32_t*)&emptyJuceStringStorage && _InterlockedDecrement (temporaryPointer65) == -1)
                                memoryFree ((LPVOID)temporaryPointer65);
                            stringStorageToRelease66 = (void*)(opaqueValue83 - 16);
                            if ((void*)(opaqueValue83 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease66) == -1)
                            {
                                memoryFree (stringStorageToRelease66);
                            }
                            temporaryPointer67 = temporaryPointer82 - 4;
                            if (temporaryPointer82 - 4 != (volatile std::int32_t*)&emptyJuceStringStorage && _InterlockedDecrement (temporaryPointer67) == -1)
                                memoryFree ((LPVOID)temporaryPointer67);
                            stringStorageToRelease68 = (void*)(opaqueValue8 - 16);
                            if ((void*)(opaqueValue8 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease68) == -1)
                            {
                                memoryFree (stringStorageToRelease68);
                            }
                            stringStorageToRelease69 = (void*)(opaqueValue9 - 16);
                            if ((void*)(opaqueValue9 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease69) == -1)
                            {
                                memoryFree (stringStorageToRelease69);
                            }
                            if ((char*)TokenHandle - 1 <= (char*)0xFFFFFFFFFFFFFFFDLL)
                                CloseHandle (TokenHandle);
                            temporaryPointer70 = (void*)outputTransport[1];
                            if (temporaryPointer70 != nullptr && temporaryPointer70 != (void*)-1LL && (outputTransport[2] == 0 || *((std::uint8_t*)outputTransport + 32) == 0))
                                goto label191;
                            return outputTransport;
                        }
                        temporaryPointer55 = temporaryPointer79 - 4;
                        if (temporaryPointer79 - 4 != (volatile std::int32_t*)&emptyJuceStringStorage && _InterlockedDecrement (temporaryPointer55) == -1)
                            memoryFree ((LPVOID)temporaryPointer55);
                    }
                    stringStorageToRelease41 = (void*)(opaqueValue83 - 16);
                    if ((void*)(opaqueValue83 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease41) == -1)
                        memoryFree (stringStorageToRelease41);
                }
                temporaryPointer24 = temporaryPointer82 - 4;
                if (temporaryPointer82 - 4 != (volatile std::int32_t*)&emptyJuceStringStorage && _InterlockedDecrement (temporaryPointer24) == -1)
                    memoryFree ((LPVOID)temporaryPointer24);
                stringStorageToRelease25 = (volatile std::int32_t*)(opaqueValue8 - 16);
                if ((void*)(opaqueValue8 - 16) == &emptyJuceStringStorage)
                    goto label182;
                conditionFlag26 = _InterlockedDecrement (stringStorageToRelease25) == -1;
            }
            else
            {
                stringStorageToRelease25 = (volatile std::int32_t*)(opaqueValue8 - 16);
                if ((void*)(opaqueValue8 - 16) == &emptyJuceStringStorage)
                {
                label182:
                    stringStorageToRelease71 = (void*)(opaqueValue9 - 16);
                    if ((void*)(opaqueValue9 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease71) == -1)
                        memoryFree (stringStorageToRelease71);
                    goto label185;
                }
                conditionFlag26 = _InterlockedDecrement (stringStorageToRelease25) == -1;
            }
            if (conditionFlag26)
                memoryFree ((LPVOID)stringStorageToRelease25);
            goto label182;
        }
    }
label185:
    if ((char*)TokenHandle - 1 <= (char*)0xFFFFFFFFFFFFFFFDLL)
        CloseHandle (TokenHandle);
    temporaryPointer70 = (void*)outputTransport[1];
    if (temporaryPointer70 != nullptr && temporaryPointer70 != (void*)-1LL && (outputTransport[2] == 0 || *((std::uint8_t*)outputTransport + 32) == 0))
    {
    label191:
        CloseHandle (temporaryPointer70);
        outputTransport[1] = 0;
    }
    return outputTransport;
}
