#include <cstdint>

// ===== Worker_Launcher @ 0x1807f4710 size=751 =====
std::uint64_t* assetWorkerResolveExecutablePath (std::uint64_t* outputPath)
{
    std::uint64_t* temporaryPointer2; // rcx
    void* stringStorageToRelease3; // rcx
    std::uint64_t* temporaryPointer4; // rax
    int stringComparisonResult5; // edi
    void* stringStorageToRelease6; // rcx
    std::uint64_t* temporaryPointer7; // rax
    std::uint64_t* temporaryPointer8; // rdx
    std::uint64_t* temporaryPointer9; // rcx
    std::int64_t opaqueValue10; // rax
    std::uint64_t* temporaryPointer11; // rcx
    std::uint64_t* temporaryPointer12; // rcx
    std::uint64_t* temporaryPointer13; // rcx
    std::uint64_t* temporaryPointer14; // rcx
    std::uint64_t* temporaryPointer15; // rcx
    std::int64_t opaqueValue16; // rax
    std::uint64_t* temporaryPointer18; // [rsp+20h] [rbp-E0h] BYREF
    std::uint64_t* temporaryPointer19; // [rsp+28h] [rbp-D8h] BYREF
    std::uint64_t* temporaryPointer20; // [rsp+30h] [rbp-D0h] BYREF
    std::int64_t opaqueValue21; // [rsp+38h] [rbp-C8h] BYREF
    HMODULE phModule; // [rsp+40h] [rbp-C0h] BYREF
    WCHAR Filename[32768]; // [rsp+50h] [rbp-B0h] BYREF

    temporaryPointer19 = outputPath;
    phModule = nullptr;
    memoryFillBytes (Filename, 0, 0x10000);
    if (GetModuleHandleExW (6u, (LPCWSTR)assetWorkerResolveExecutablePath, &phModule) && GetModuleFileNameW (phModule, Filename, 0x8000u) - 1 <= 0x7FFE)
    {
        sub_1800B3120 (&opaqueValue21, Filename);
        sub_18008C740 (&temporaryPointer18, &opaqueValue21);
        sub_18008D020 (&temporaryPointer18, &temporaryPointer20);
        temporaryPointer2 = temporaryPointer18 - 2;
        if (temporaryPointer18 - 2 != (std::uint64_t*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)temporaryPointer2) == -1)
            memoryFree (temporaryPointer2);
        stringStorageToRelease3 = (void*)(opaqueValue21 - 16);
        if ((void*)(opaqueValue21 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease3) == -1)
            memoryFree (stringStorageToRelease3);
        temporaryPointer18 = temporaryPointer20;
        if (temporaryPointer20 - 2 != (std::uint64_t*)&emptyJuceStringStorage)
            _InterlockedIncrement ((volatile std::int32_t*)temporaryPointer20 - 4);
        while (1)
        {
            temporaryPointer4 = (std::uint64_t*)sub_18008D020 (&temporaryPointer18, &opaqueValue21);
            if (temporaryPointer18 == (std::uint64_t*)*temporaryPointer4)
                stringComparisonResult5 = 0;
            else
                stringComparisonResult5 = juceStringCompareUtf8 (&temporaryPointer18, *temporaryPointer4);
            stringStorageToRelease6 = (void*)(opaqueValue21 - 16);
            if ((void*)(opaqueValue21 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease6) == -1)
                memoryFree (stringStorageToRelease6);
            if (stringComparisonResult5 == 0)
                break;
            if ((std::uint8_t)sub_18008E9C0 (&temporaryPointer18, "app;vst3;component;appex;mxo") != 0)
            {
                opaqueValue10 = sub_18008D3A0 (&temporaryPointer18, &temporaryPointer19, "Contents/Helpers");
                sub_18008D3A0 (opaqueValue10, outputPath, "FADAssetFileWorker.exe");
                temporaryPointer11 = temporaryPointer19 - 2;
                if (temporaryPointer19 - 2 != (std::uint64_t*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)temporaryPointer11) == -1)
                    memoryFree (temporaryPointer11);
                temporaryPointer12 = temporaryPointer18;
                goto label26;
            }
            temporaryPointer7 = (std::uint64_t*)sub_18008D020 (&temporaryPointer18, &temporaryPointer19);
            temporaryPointer8 = temporaryPointer18;
            temporaryPointer18 = (std::uint64_t*)*temporaryPointer7;
            *temporaryPointer7 = temporaryPointer8;
            temporaryPointer9 = temporaryPointer19 - 2;
            if (temporaryPointer19 - 2 != (std::uint64_t*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)temporaryPointer9) == -1)
                memoryFree (temporaryPointer9);
        }
        temporaryPointer15 = temporaryPointer18 - 2;
        if (temporaryPointer18 - 2 != (std::uint64_t*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)temporaryPointer15) == -1)
            memoryFree (temporaryPointer15);
        opaqueValue16 = sub_18008D3A0 (&temporaryPointer20, &temporaryPointer19, "Helpers");
        sub_18008D3A0 (opaqueValue16, outputPath, "FADAssetFileWorker.exe");
        temporaryPointer12 = temporaryPointer19;
    label26:
        temporaryPointer13 = temporaryPointer12 - 2;
        if (temporaryPointer13 != (std::uint64_t*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)temporaryPointer13) == -1)
            memoryFree (temporaryPointer13);
        temporaryPointer14 = temporaryPointer20 - 2;
        if (temporaryPointer20 - 2 != (std::uint64_t*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)temporaryPointer14) == -1)
            memoryFree (temporaryPointer14);
    }
    else
    {
        *outputPath = &emptyJuceStringCharacters;
    }
    return outputPath;
}

// ===== Worker_Launcher_Caller @ 0x1807f53d0 size=9174 =====
LPVOID* assetWorkerRunProcessingJob (LPVOID* outputResult, void* inputPath, std::int64_t requestOptions, std::uint64_t* progressCallback, std::int64_t cancellationToken, std::uint64_t* processingBudget)
{
    std::int64_t opaqueValue8; // rcx
    volatile std::int32_t* temporaryPointer9; // rsi
    double scalarValue10; // xmm0_8
    double scalarValue11; // xmm1_8
    std::int64_t allocatedObject12; // r13
    std::int64_t opaqueValue13; // rcx
    std::int64_t opaqueValue14; // rbx
    void (*callbackFunction15) (std::int64_t, std::uint64_t*, __int128*); // rbx
    void* temporaryPointer16; // rcx
    std::int64_t (*callbackFunction17)(); // rdx
    std::int64_t opaqueValue18; // rbx
    void (*callbackFunction19) (std::int64_t, std::uint64_t*, __int128*); // rbx
    void* temporaryPointer20; // rcx
    std::int64_t (*callbackFunction21)(); // rdx
    std::int64_t opaqueValue22; // rbx
    void (*callbackFunction23) (std::int64_t, std::uint64_t*, __int128*); // rbx
    void* temporaryPointer24; // rcx
    std::int64_t opaqueValue25; // rcx
    std::int64_t opaqueValue26; // rax
    std::int64_t opaqueValue27; // r14
    struct _RTL_CRITICAL_SECTION* criticalSection28; // rbx
    void (*callbackFunction29) (std::int64_t, std::uint64_t*, __int128*); // rbx
    void* temporaryPointer30; // rcx
    std::int64_t (*callbackFunction31)(); // rdx
    std::int64_t opaqueValue32; // rbx
    void (*callbackFunction33) (std::int64_t, std::uint64_t*, __int128*); // rbx
    void* temporaryPointer34; // rcx
    std::int64_t (*callbackFunction35)(); // rdx
    std::int64_t opaqueValue36; // rbx
    struct _RTL_CRITICAL_SECTION* criticalSection37; // r14
    int opaqueValue38; // ebx
    void* stringStorageToRelease39; // rcx
    std::int64_t (*callbackFunction40)(); // rdx
    std::uint8_t* temporaryPointer41; // rax
    volatile std::int32_t* stringStorageToRelease42; // rax
    std::int64_t opaqueValue43; // rbx
    struct _RTL_CRITICAL_SECTION* criticalSection44; // r14
    void* stringStorageToRelease45; // rcx
    void (*callbackFunction46) (std::int64_t*); // rdx
    std::int64_t opaqueValue47; // rax
    std::int64_t opaqueValue48; // rbx
    LPVOID* opaqueValue49; // rbx
    char* temporaryPointer50; // rcx
    char* stringStorageToRelease51; // rcx
    HANDLE opaqueValue52; // rcx
    void* temporaryPointer53; // rcx
    void* stringStorageToRelease54; // rcx
    char opaqueValue55; // r14
    std::int64_t opaqueValue56; // rcx
    std::int64_t opaqueValue57; // rcx
    DWORD opaqueValue58; // r8d
    std::uint64_t opaqueValue59; // r8
    std::uint64_t opaqueValue60; // rdx
    char* temporaryPointer61; // rcx
    char* stringStorageToRelease62; // rcx
    void* temporaryPointer63; // rcx
    HANDLE opaqueValue64; // rcx
    char* temporaryPointer65; // rcx
    char* stringStorageToRelease66; // rcx
    void* temporaryPointer67; // rcx
    char* temporaryPointer68; // rcx
    char* stringStorageToRelease69; // rcx
    void* temporaryPointer70; // rcx
    void* temporaryPointer71; // rcx
    void* stringStorageToRelease72; // rcx
    void* temporaryPointer73; // rax
    std::int64_t opaqueValue74; // rdx
    DWORD opaqueValue75; // r14d
    char* stringStorageToRelease76; // rcx
    std::int64_t opaqueValue77; // rax
    std::int64_t opaqueValue78; // rax
    DWORD opaqueValue79; // r14d
    char* temporaryPointer80; // rcx
    char* stringStorageToRelease81; // rcx
    std::int64_t opaqueValue82; // rax
    int opaqueValue83; // eax
    char* temporaryPointer84; // rcx
    char* stringStorageToRelease85; // rcx
    void* temporaryPointer86; // rcx
    HANDLE opaqueValue87; // rcx
    void* temporaryPointer88; // rcx
    void* stringStorageToRelease89; // rcx
    std::uint32_t* temporaryPointer90; // r14
    std::int64_t opaqueValue91; // rax
    std::int64_t opaqueValue92; // rax
    std::int64_t opaqueValue93; // rax
    std::int64_t opaqueValue94; // rax
    std::int64_t opaqueValue95; // rax
    std::int64_t opaqueValue96; // rax
    std::int64_t opaqueValue97; // rdi
    double scalarValue98; // xmm1_8
    int opaqueValue99; // eax
    std::uint8_t* temporaryPointer100; // rcx
    std::uint8_t* stringStorageToRelease101; // rcx
    void* temporaryPointer102; // rcx
    std::uint8_t* temporaryPointer103; // rcx
    std::uint8_t* stringStorageToRelease104; // rcx
    void* temporaryPointer105; // rcx
    LPVOID* temporaryPointer106; // rax
    LPVOID opaqueValue107; // rdx
    void* temporaryPointer108; // rcx
    char* temporaryPointer109; // rcx
    char* stringStorageToRelease110; // rcx
    void* temporaryPointer111; // rcx
    char* temporaryPointer112; // rcx
    char* stringStorageToRelease113; // rcx
    void* temporaryPointer114; // rcx
    char* temporaryPointer115; // rcx
    char* stringStorageToRelease116; // rcx
    void* temporaryPointer117; // rcx
    std::uint64_t* steadyNanoseconds118; // rax
    bool conditionFlag119; // cc
    char opaqueValue120; // al
    const char* temporaryPointer121; // rdx
    char* temporaryPointer122; // rcx
    char* stringStorageToRelease123; // rcx
    void* temporaryPointer124; // rcx
    void* temporaryPointer125; // rcx
    void* stringStorageToRelease126; // rcx
    volatile std::int32_t* temporaryPointer127; // rcx
    char* temporaryPointer128; // rcx
    char* stringStorageToRelease129; // rcx
    std::uint64_t* steadyNanoseconds130; // rax
    bool conditionFlag131; // cc
    char opaqueValue132; // al
    const char* temporaryPointer133; // rdx
    char* temporaryPointer134; // rcx
    char* stringStorageToRelease135; // rcx
    DWORD opaqueValue137; // [rsp+30h] [rbp-D0h] BYREF
    char opaqueValue138; // [rsp+34h] [rbp-CCh]
    DWORD opaqueValue139; // [rsp+38h] [rbp-C8h] BYREF
    char opaqueValue140; // [rsp+3Ch] [rbp-C4h]
    HANDLE hHandle[2]; // [rsp+40h] [rbp-C0h]
    HANDLE hJob; // [rsp+50h] [rbp-B0h]
    DWORD ExitCode; // [rsp+58h] [rbp-A8h] BYREF
    DWORD opaqueValue144; // [rsp+5Ch] [rbp-A4h] BYREF
    std::uint64_t stackStorage145[2]; // [rsp+60h] [rbp-A0h] BYREF
    __int128 workerUnavailableString146; // [rsp+70h] [rbp-90h] BYREF
    char opaqueValue147; // [rsp+80h] [rbp-80h]
    LPVOID stackStorage148[2]; // [rsp+90h] [rbp-70h] BYREF
    __int128 opaqueValue149; // [rsp+A0h] [rbp-60h] BYREF
    std::int64_t opaqueValue150; // [rsp+B0h] [rbp-50h]
    std::uint64_t opaqueValue151; // [rsp+B8h] [rbp-48h] BYREF
    std::int64_t opaqueValue152; // [rsp+C0h] [rbp-40h] BYREF
    LPVOID* opaqueValue153; // [rsp+C8h] [rbp-38h]
    char* temporaryPointer154; // [rsp+D0h] [rbp-30h] BYREF
    LPVOID opaqueValue155; // [rsp+D8h] [rbp-28h] BYREF
    std::int64_t opaqueValue156; // [rsp+E0h] [rbp-20h]
    DWORD TotalBytesAvail; // [rsp+E8h] [rbp-18h] BYREF
    DWORD NumberOfBytesRead[2]; // [rsp+F0h] [rbp-10h] BYREF
    LPVOID lpMem; // [rsp+F8h] [rbp-8h]
    LPVOID* temporaryPointer160; // [rsp+100h] [rbp+0h]
    volatile std::int32_t* temporaryPointer161; // [rsp+110h] [rbp+10h]
    std::int64_t opaqueValue162; // [rsp+118h] [rbp+18h]
    std::uint64_t stackStorage163[9]; // [rsp+120h] [rbp+20h] BYREF
    char opaqueValue164; // [rsp+168h] [rbp+68h] BYREF
    LPVOID opaqueValue165; // [rsp+170h] [rbp+70h] BYREF
    std::int64_t opaqueValue166; // [rsp+178h] [rbp+78h] BYREF
    std::int64_t opaqueValue167; // [rsp+180h] [rbp+80h] BYREF
    char stackStorage168[8]; // [rsp+188h] [rbp+88h] BYREF
    std::uint8_t Buffer[65536]; // [rsp+190h] [rbp+90h] BYREF

    stackStorage148[0] = progressCallback;
    opaqueValue156 = requestOptions;
    opaqueValue155 = inputPath;
    opaqueValue153 = outputResult;
    temporaryPointer160 = outputResult;
    *outputResult = &emptyJuceStringCharacters;
    outputResult[1] = nullptr;
    outputResult[2] = nullptr;
    *((std::uint32_t*)outputResult + 6) = 0;
    outputResult[4] = nullptr;
    outputResult[5] = nullptr;
    outputResult[6] = nullptr;
    *((std::uint8_t*)outputResult + 56) = 1;
    ExitCode = 1;
    opaqueValue8 = progressCallback[7];
    if (opaqueValue8 != 0 && (*(std::uint8_t (**) (std::int64_t)) (*(std::uint64_t*)opaqueValue8 + 16LL)) (opaqueValue8) != 0 || *(std::uint64_t*)clockReadSteadyNanoseconds (&workerUnavailableString146) >= cancellationToken)
    {
        steadyNanoseconds130 = (std::uint64_t*)clockReadSteadyNanoseconds (&opaqueValue165);
        conditionFlag131 = *steadyNanoseconds130 < cancellationToken;
        if (*steadyNanoseconds130 == cancellationToken)
        {
            opaqueValue132 = 0;
        }
        else
        {
            opaqueValue132 = -1;
            if (!conditionFlag131)
                opaqueValue132 = 1;
        }
        temporaryPointer133 = "cancelled";
        if (opaqueValue132 >= 0)
            temporaryPointer133 = "processingTimeout";
        juceStringConstructFromUtf8 (stackStorage148, temporaryPointer133);
        temporaryPointer134 = (char*)*outputResult;
        *outputResult = stackStorage148[0];
        stringStorageToRelease135 = temporaryPointer134 - 16;
        if (stringStorageToRelease135 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease135) == -1)
            memoryFree (stringStorageToRelease135);
        return opaqueValue153;
    }
    temporaryPointer9 = *(volatile std::int32_t**)(requestOptions + 8);
    temporaryPointer161 = temporaryPointer9;
    lpMem = (LPVOID)(temporaryPointer9 - 4);
    if (temporaryPointer9 - 4 != (volatile std::int32_t*)&emptyJuceStringStorage)
        _InterlockedIncrement (temporaryPointer9 - 4);
    if (*(std::uint8_t*)temporaryPointer9 == 0 || (std::uint64_t)sub_1800B3750 (temporaryPointer9) > 0x2000 || (scalarValue10 = *(double*)(requestOptions + 16), ((*(std::uint64_t*)&scalarValue10 >> 52) & 0x7FF) == 2047) || (scalarValue11 = *(double*)(requestOptions + 24), ((*(std::uint64_t*)&scalarValue11 >> 52) & 0x7FF) == 2047) || scalarValue10 < 0.0 || scalarValue10 > 2.401919801264264e13 || scalarValue11 < 0.0 || scalarValue11 > 30.0 || *(std::uint32_t*)(requestOptions + 32) > 2u)
    {
        juceStringConstructFromUtf8 (stackStorage148, "invalid");
        opaqueValue49 = opaqueValue153;
        temporaryPointer128 = (char*)*opaqueValue153;
        *opaqueValue153 = stackStorage148[0];
        stringStorageToRelease129 = temporaryPointer128 - 16;
        if (stringStorageToRelease129 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease129) == -1)
            memoryFree (stringStorageToRelease129);
        goto label459;
    }
    allocatedObject12 = memoryAllocateObject (32);
    *(std::uint64_t*)&workerUnavailableString146 = allocatedObject12;
    *(std::uint32_t*)(allocatedObject12 + 8) = 0;
    *(std::uint64_t*)allocatedObject12 = &juce::DynamicObject::`vftable';
    *(std::uint64_t*)(allocatedObject12 + 16) = 0;
    *(std::uint64_t*)(allocatedObject12 + 24) = 0;
    opaqueValue162 = allocatedObject12;
    _InterlockedIncrement ((volatile std::int32_t*)(allocatedObject12 + 8));
    opaqueValue165 = &unk_180F51450;
    opaqueValue166 = 1;
    opaqueValue14 = sub_18009EA20 (opaqueValue13);
    opaqueValue151 = opaqueValue14 + 16;
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue14 + 16));
    sub_18009E8C0 (opaqueValue14);
    *(std::uint64_t*)&workerUnavailableString146 = "version";
    sub_1800B4BF0 (stackStorage145, opaqueValue14, &workerUnavailableString146);
    ExitCode = 5;
    LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue14 + 16));
    sub_18008A110 (allocatedObject12 + 16, stackStorage145, &opaqueValue165);
    callbackFunction15 = *(void (**) (std::int64_t, std::uint64_t*, __int128*)) (*(std::uint64_t*)allocatedObject12 + 24LL);
    workerUnavailableString146 = (std::uint64_t)opaqueValue165;
    (*((void (**) (char*, std::int64_t*))opaqueValue165 + 12)) ((char*)&workerUnavailableString146 + 8, &opaqueValue166);
    opaqueValue147 = 1;
    callbackFunction15 (allocatedObject12, stackStorage145, &workerUnavailableString146);
    if (opaqueValue147 != 0)
        (*(void (**) (char*)) (workerUnavailableString146 + 88)) ((char*)&workerUnavailableString146 + 8);
    temporaryPointer16 = (void*)(stackStorage145[0] - 16LL);
    if ((void*)(stackStorage145[0] - 16LL) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)temporaryPointer16) == -1)
        memoryFree (temporaryPointer16);
    callbackFunction17 = *((std::int64_t (**)())opaqueValue165 + 11);
    if (callbackFunction17 != guard_check_icall_nop)
        ((void (*) (std::int64_t*))callbackFunction17) (&opaqueValue166);
    opaqueValue165 = &unk_180F51450;
    opaqueValue166 = 0;
    LODWORD (opaqueValue166) = *(std::uint32_t*)opaqueValue156;
    opaqueValue18 = sub_18009EA20 (temporaryPointer16);
    opaqueValue151 = opaqueValue18 + 16;
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue18 + 16));
    sub_18009E8C0 (opaqueValue18);
    *(std::uint64_t*)&workerUnavailableString146 = "operation";
    sub_1800B4BF0 (stackStorage145, opaqueValue18, &workerUnavailableString146);
    ExitCode = 13;
    LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue18 + 16));
    sub_18008A110 (allocatedObject12 + 16, stackStorage145, &opaqueValue165);
    callbackFunction19 = *(void (**) (std::int64_t, std::uint64_t*, __int128*)) (*(std::uint64_t*)allocatedObject12 + 24LL);
    workerUnavailableString146 = (std::uint64_t)opaqueValue165;
    (*((void (**) (char*, std::int64_t*))opaqueValue165 + 12)) ((char*)&workerUnavailableString146 + 8, &opaqueValue166);
    opaqueValue147 = 1;
    callbackFunction19 (allocatedObject12, stackStorage145, &workerUnavailableString146);
    if (opaqueValue147 != 0)
        (*(void (**) (char*)) (workerUnavailableString146 + 88)) ((char*)&workerUnavailableString146 + 8);
    temporaryPointer20 = (void*)(stackStorage145[0] - 16LL);
    if ((void*)(stackStorage145[0] - 16LL) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)temporaryPointer20) == -1)
        memoryFree (temporaryPointer20);
    callbackFunction21 = *((std::int64_t (**)())opaqueValue165 + 11);
    if (callbackFunction21 != guard_check_icall_nop)
        ((void (*) (std::int64_t*))callbackFunction21) (&opaqueValue166);
    opaqueValue165 = &unk_180F512B0;
    opaqueValue166 = (std::int64_t)temporaryPointer9;
    if (temporaryPointer9 - 4 != (volatile std::int32_t*)&emptyJuceStringStorage)
        _InterlockedIncrement (temporaryPointer9 - 4);
    opaqueValue22 = sub_18009EA20 (temporaryPointer20);
    opaqueValue151 = opaqueValue22 + 16;
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue22 + 16));
    sub_18009E8C0 (opaqueValue22);
    *(std::uint64_t*)&workerUnavailableString146 = "path";
    sub_1800B4BF0 (stackStorage145, opaqueValue22, &workerUnavailableString146);
    ExitCode = 77;
    LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue22 + 16));
    sub_18008A110 (allocatedObject12 + 16, stackStorage145, &opaqueValue165);
    callbackFunction23 = *(void (**) (std::int64_t, std::uint64_t*, __int128*)) (*(std::uint64_t*)allocatedObject12 + 24LL);
    workerUnavailableString146 = (std::uint64_t)opaqueValue165;
    (*((void (**) (char*, std::int64_t*))opaqueValue165 + 12)) ((char*)&workerUnavailableString146 + 8, &opaqueValue166);
    opaqueValue147 = 1;
    callbackFunction23 (allocatedObject12, stackStorage145, &workerUnavailableString146);
    if (opaqueValue147 != 0)
        (*(void (**) (char*)) (workerUnavailableString146 + 88)) ((char*)&workerUnavailableString146 + 8);
    temporaryPointer24 = (void*)(stackStorage145[0] - 16LL);
    if ((void*)(stackStorage145[0] - 16LL) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)temporaryPointer24) == -1)
        memoryFree (temporaryPointer24);
    (*((void (**) (std::int64_t*))opaqueValue165 + 11)) (&opaqueValue166);
    opaqueValue165 = &unk_180F514D0;
    opaqueValue166 = *(std::uint64_t*)(opaqueValue156 + 16);
    opaqueValue26 = sub_18009EA20 (opaqueValue25);
    opaqueValue27 = opaqueValue26;
    if (aStart[0] != 0)
    {
        criticalSection28 = (struct _RTL_CRITICAL_SECTION*)(opaqueValue26 + 16);
        opaqueValue151 = opaqueValue26 + 16;
        EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue26 + 16));
        sub_18009E8C0 (opaqueValue27);
        *(std::uint64_t*)&workerUnavailableString146 = "start";
        sub_1800B4BF0 (stackStorage145, opaqueValue27, &workerUnavailableString146);
        ExitCode = 109;
        LeaveCriticalSection (criticalSection28);
    }
    else
    {
        stackStorage145[0] = &emptyJuceStringCharacters;
        ExitCode = 109;
    }
    sub_18008A110 (allocatedObject12 + 16, stackStorage145, &opaqueValue165);
    callbackFunction29 = *(void (**) (std::int64_t, std::uint64_t*, __int128*)) (*(std::uint64_t*)allocatedObject12 + 24LL);
    workerUnavailableString146 = (std::uint64_t)opaqueValue165;
    (*((void (**) (char*, std::int64_t*))opaqueValue165 + 12)) ((char*)&workerUnavailableString146 + 8, &opaqueValue166);
    opaqueValue147 = 1;
    callbackFunction29 (allocatedObject12, stackStorage145, &workerUnavailableString146);
    if (opaqueValue147 != 0)
        (*(void (**) (char*)) (workerUnavailableString146 + 88)) ((char*)&workerUnavailableString146 + 8);
    temporaryPointer30 = (void*)(stackStorage145[0] - 16LL);
    if ((void*)(stackStorage145[0] - 16LL) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)temporaryPointer30) == -1)
        memoryFree (temporaryPointer30);
    callbackFunction31 = *((std::int64_t (**)())opaqueValue165 + 11);
    if (callbackFunction31 != guard_check_icall_nop)
        ((void (*) (std::int64_t*))callbackFunction31) (&opaqueValue166);
    opaqueValue165 = &unk_180F514D0;
    opaqueValue166 = *(std::uint64_t*)(opaqueValue156 + 24);
    opaqueValue32 = sub_18009EA20 (temporaryPointer30);
    opaqueValue151 = opaqueValue32 + 16;
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue32 + 16));
    sub_18009E8C0 (opaqueValue32);
    *(std::uint64_t*)&workerUnavailableString146 = "length";
    sub_1800B4BF0 (stackStorage145, opaqueValue32, &workerUnavailableString146);
    ExitCode = 237;
    LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue32 + 16));
    sub_18008A110 (allocatedObject12 + 16, stackStorage145, &opaqueValue165);
    callbackFunction33 = *(void (**) (std::int64_t, std::uint64_t*, __int128*)) (*(std::uint64_t*)allocatedObject12 + 24LL);
    workerUnavailableString146 = (std::uint64_t)opaqueValue165;
    (*((void (**) (char*, std::int64_t*))opaqueValue165 + 12)) ((char*)&workerUnavailableString146 + 8, &opaqueValue166);
    opaqueValue147 = 1;
    callbackFunction33 (allocatedObject12, stackStorage145, &workerUnavailableString146);
    if (opaqueValue147 != 0)
        (*(void (**) (char*)) (workerUnavailableString146 + 88)) ((char*)&workerUnavailableString146 + 8);
    temporaryPointer34 = (void*)(stackStorage145[0] - 16LL);
    if ((void*)(stackStorage145[0] - 16LL) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)temporaryPointer34) == -1)
        memoryFree (temporaryPointer34);
    callbackFunction35 = *((std::int64_t (**)())opaqueValue165 + 11);
    if (callbackFunction35 != guard_check_icall_nop)
        ((void (*) (std::int64_t*))callbackFunction35) (&opaqueValue166);
    opaqueValue165 = &unk_180F51450;
    opaqueValue166 = 0;
    LODWORD (opaqueValue166) = *(std::uint32_t*)(opaqueValue156 + 32);
    opaqueValue36 = sub_18009EA20 (temporaryPointer34);
    criticalSection37 = (struct _RTL_CRITICAL_SECTION*)(opaqueValue36 + 16);
    temporaryPointer154 = (char*)(opaqueValue36 + 16);
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue36 + 16));
    sub_18009E8C0 (opaqueValue36);
    *(std::uint64_t*)&workerUnavailableString146 = "channel";
    sub_1800B4BF0 (&opaqueValue151, opaqueValue36, &workerUnavailableString146);
    opaqueValue38 = 493;
    ExitCode = 493;
    LeaveCriticalSection (criticalSection37);
    sub_1800A6D50 (allocatedObject12, &opaqueValue151, &opaqueValue165);
    stringStorageToRelease39 = (void*)(opaqueValue151 - 16);
    if ((void*)(opaqueValue151 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease39) == -1)
        memoryFree (stringStorageToRelease39);
    callbackFunction40 = *((std::int64_t (**)())opaqueValue165 + 11);
    if (callbackFunction40 != guard_check_icall_nop)
        ((void (*) (std::int64_t*))callbackFunction40) (&opaqueValue166);
    temporaryPointer41 = (std::uint8_t*)*processingBudget;
    if (*(std::uint8_t*)*processingBudget != 0)
    {
        opaqueValue165 = &unk_180F512B0;
        opaqueValue166 = (std::int64_t)temporaryPointer41;
        stringStorageToRelease42 = (volatile std::int32_t*)(temporaryPointer41 - 16);
        if (stringStorageToRelease42 != (volatile std::int32_t*)&emptyJuceStringStorage)
            _InterlockedIncrement (stringStorageToRelease42);
        opaqueValue43 = sub_18009EA20 (&unk_180F512B0);
        criticalSection44 = (struct _RTL_CRITICAL_SECTION*)(opaqueValue43 + 16);
        temporaryPointer154 = (char*)(opaqueValue43 + 16);
        EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue43 + 16));
        sub_18009E8C0 (opaqueValue43);
        *(std::uint64_t*)&workerUnavailableString146 = "testBehaviour";
        sub_1800B4BF0 (&opaqueValue151, opaqueValue43, &workerUnavailableString146);
        opaqueValue38 = 1005;
        ExitCode = 1005;
        LeaveCriticalSection (criticalSection44);
        sub_1800A6D50 (allocatedObject12, &opaqueValue151, &opaqueValue165);
        stringStorageToRelease45 = (void*)(opaqueValue151 - 16);
        if ((void*)(opaqueValue151 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease45) == -1)
            memoryFree (stringStorageToRelease45);
        callbackFunction46 = *((void (**) (std::int64_t*))opaqueValue165 + 11);
        if ((char*)callbackFunction46 == (char*)sub_18000B8D0)
            sub_180023C60 (&opaqueValue166, callbackFunction46);
        else
            callbackFunction46 (&opaqueValue166);
    }
    opaqueValue165 = &unk_180F513D0;
    opaqueValue166 = allocatedObject12;
    _InterlockedIncrement ((volatile std::int32_t*)(allocatedObject12 + 8));
    *(std::uint64_t*)&workerUnavailableString146 = 1;
    *((std::uint64_t*)&workerUnavailableString146 + 1) = 15;
    sub_1800A64C0 (&opaqueValue152, &opaqueValue165, &workerUnavailableString146);
    opaqueValue137 = opaqueValue38 | 0x10;
    ExitCode = opaqueValue38 | 0x10;
    (*((void (**) (std::int64_t*))opaqueValue165 + 11)) (&opaqueValue166);
    opaqueValue47 = sub_1800B3750 (opaqueValue152);
    sub_18009EBF0 (stackStorage145, opaqueValue152, opaqueValue47);
    opaqueValue139 = 1;
    opaqueValue140 = 0;
    *(_OWORD*)hHandle = 0;
    opaqueValue48 = 0;
    hJob = nullptr;
    if ((std::uint8_t)winProcessLaunchChildProcess ((std::int64_t)&opaqueValue139, (std::int64_t)opaqueValue155, (std::int64_t)stackStorage145) == 0)
    {
        juceStringConstructFromUtf8 (&workerUnavailableString146, "workerUnavailable");
        opaqueValue49 = opaqueValue153;
        temporaryPointer50 = (char*)*opaqueValue153;
        *opaqueValue153 = (LPVOID)workerUnavailableString146;
        stringStorageToRelease51 = temporaryPointer50 - 16;
        if (stringStorageToRelease51 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease51) == -1)
            memoryFree (stringStorageToRelease51);
        opaqueValue52 = hHandle[1];
        if (opaqueValue140 == 0)
        {
            if (hHandle[1] == nullptr)
                goto label80;
            if (WaitForSingleObject (hHandle[1], 0) != 0)
            {
                if (hJob != nullptr)
                {
                    TerminateJobObject (hJob, 1u);
                }
                else
                {
                    opaqueValue52 = hHandle[1];
                    if (hHandle[1] == nullptr)
                        goto label80;
                    TerminateProcess (hHandle[1], 1u);
                }
            }
            else
            {
                ExitCode = 1;
                GetExitCodeProcess (hHandle[1], &ExitCode);
                opaqueValue139 = ExitCode;
                opaqueValue140 = 1;
            }
            while (1)
            {
                opaqueValue52 = hHandle[1];
            label80:
                if (opaqueValue140 != 0 || opaqueValue52 == nullptr)
                    break;
                if (WaitForSingleObject (opaqueValue52, 0) == 0)
                {
                    ExitCode = 1;
                    GetExitCodeProcess (hHandle[1], &ExitCode);
                    opaqueValue139 = ExitCode;
                    opaqueValue140 = 1;
                    opaqueValue52 = hHandle[1];
                    break;
                }
                *(std::uint64_t*)&workerUnavailableString146 = 5;
                sub_180078590 (&workerUnavailableString146);
            }
        }
        if (hHandle[0] != nullptr)
        {
            CloseHandle (hHandle[0]);
            opaqueValue52 = hHandle[1];
        }
        if (opaqueValue52 != nullptr)
            CloseHandle (opaqueValue52);
        if (hJob != nullptr)
            CloseHandle (hJob);
        temporaryPointer53 = (void*)(stackStorage145[0] - 16LL);
        if ((void*)(stackStorage145[0] - 16LL) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)temporaryPointer53) == -1)
            memoryFree (temporaryPointer53);
        stringStorageToRelease54 = (void*)(opaqueValue152 - 16);
        if ((void*)(opaqueValue152 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease54) == -1)
            memoryFree (stringStorageToRelease54);
        if (_InterlockedExchangeAdd ((volatile std::int32_t*)(allocatedObject12 + 8), 0xFFFFFFFF) == 1)
        label213:
            (**(void (***) (std::int64_t, std::int64_t))allocatedObject12) (allocatedObject12, 1);
    label214:
        temporaryPointer73 = lpMem;
        if (lpMem != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)lpMem) == -1)
            memoryFree (temporaryPointer73);
        return opaqueValue49;
    }
    opaqueValue149 = 0;
    opaqueValue150 = 0;
    temporaryPointer154 = nullptr;
    *(std::uint64_t*)&workerUnavailableString146 = 0;
    opaqueValue151 = 0;
    if (*(std::uint32_t*)opaqueValue156 == 1)
    {
        opaqueValue155 = (LPVOID)46080000;
    }
    else
    {
        if (*(std::uint32_t*)opaqueValue156 == 2)
            opaqueValue48 = 0x100000;
        opaqueValue155 = (LPVOID)opaqueValue48;
        LODWORD (opaqueValue48) = 0;
    }
    opaqueValue55 = 0;
    opaqueValue138 = 0;
    memoryFillBytes (Buffer, 0, 0x10000);
    while (1)
    {
        opaqueValue56 = *((std::uint64_t*)stackStorage148[0] + 7);
        if (opaqueValue56 != 0 && (*(std::uint8_t (**) (std::int64_t)) (*(std::uint64_t*)opaqueValue56 + 16LL)) (opaqueValue56) != 0 || *(std::uint64_t*)clockReadSteadyNanoseconds (&opaqueValue165) >= cancellationToken)
        {
            steadyNanoseconds118 = (std::uint64_t*)clockReadSteadyNanoseconds (&opaqueValue165);
            conditionFlag119 = *steadyNanoseconds118 < cancellationToken;
            if (*steadyNanoseconds118 == cancellationToken)
            {
                opaqueValue120 = 0;
            }
            else
            {
                opaqueValue120 = -1;
                if (!conditionFlag119)
                    opaqueValue120 = 1;
            }
            temporaryPointer121 = "cancelled";
            if (opaqueValue120 >= 0)
                temporaryPointer121 = "processingTimeout";
            juceStringConstructFromUtf8 (stackStorage148, temporaryPointer121);
            opaqueValue49 = opaqueValue153;
            temporaryPointer122 = (char*)*opaqueValue153;
            *opaqueValue153 = stackStorage148[0];
            stringStorageToRelease123 = temporaryPointer122 - 16;
            if (stringStorageToRelease123 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease123) == -1)
                memoryFree (stringStorageToRelease123);
            if (opaqueValue140 == 0 && hHandle[1] != nullptr)
            {
                if (WaitForSingleObject (hHandle[1], 0) != 0)
                {
                    if (hJob != nullptr)
                    {
                        TerminateJobObject (hJob, 1u);
                    }
                    else if (hHandle[1] != nullptr)
                    {
                        TerminateProcess (hHandle[1], 1u);
                    }
                }
                else
                {
                    opaqueValue137 = 1;
                    GetExitCodeProcess (hHandle[1], &opaqueValue137);
                    opaqueValue139 = opaqueValue137;
                    opaqueValue140 = 1;
                }
            }
            temporaryPointer124 = (void*)opaqueValue149;
            if ((std::uint64_t)opaqueValue149 != 0)
            {
                if ((std::uint64_t)(opaqueValue150 - opaqueValue149) >= 0x1000)
                {
                    temporaryPointer124 = *(void**)(opaqueValue149 - 8);
                    if ((std::uint64_t)(opaqueValue149 - (std::uint64_t)temporaryPointer124 - 8) > 0x1F)
                        goto label476;
                }
                memoryFree (temporaryPointer124);
                opaqueValue149 = 0;
                opaqueValue150 = 0;
            }
            if (opaqueValue140 == 0)
            {
                if (hHandle[1] != nullptr)
                {
                    if (WaitForSingleObject (hHandle[1], 0) != 0)
                    {
                        if (hJob != nullptr)
                        {
                            TerminateJobObject (hJob, 1u);
                        }
                        else if (hHandle[1] != nullptr)
                        {
                            TerminateProcess (hHandle[1], 1u);
                        }
                    }
                    else
                    {
                        opaqueValue137 = 1;
                        GetExitCodeProcess (hHandle[1], &opaqueValue137);
                        opaqueValue139 = opaqueValue137;
                        opaqueValue140 = 1;
                    }
                }
                while (opaqueValue140 == 0 && hHandle[1] != nullptr)
                {
                    if (WaitForSingleObject (hHandle[1], 0) == 0)
                    {
                        opaqueValue137 = 1;
                        GetExitCodeProcess (hHandle[1], &opaqueValue137);
                        opaqueValue139 = opaqueValue137;
                        opaqueValue140 = 1;
                        break;
                    }
                    stackStorage148[0] = (LPVOID)5;
                    sub_180078590 (stackStorage148);
                }
            }
            if (hHandle[0] != nullptr)
                CloseHandle (hHandle[0]);
            if (hHandle[1] != nullptr)
                CloseHandle (hHandle[1]);
            if (hJob != nullptr)
                CloseHandle (hJob);
            temporaryPointer125 = (void*)(stackStorage145[0] - 16LL);
            if ((void*)(stackStorage145[0] - 16LL) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)temporaryPointer125) == -1)
            {
                memoryFree (temporaryPointer125);
            }
            stringStorageToRelease126 = (void*)(opaqueValue152 - 16);
            if ((void*)(opaqueValue152 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease126) == -1)
                memoryFree (stringStorageToRelease126);
            if (_InterlockedExchangeAdd ((volatile std::int32_t*)(allocatedObject12 + 8), 0xFFFFFFFF) == 1)
                goto label458;
            goto label459;
        }
        if (opaqueValue55 != 0)
        {
            opaqueValue57 = opaqueValue149;
            goto label144;
        }
        TotalBytesAvail = 0;
        NumberOfBytesRead[0] = 0;
        if (PeekNamedPipe (hHandle[0], nullptr, 0, nullptr, &TotalBytesAvail, nullptr))
            break;
        LOBYTE (opaqueValue48) = GetLastError() == 109;
        LODWORD (opaqueValue48) = opaqueValue48 - 2;
    label118:
        if ((std::uint32_t)opaqueValue48 == -2)
            goto label391;
        if ((std::uint32_t)opaqueValue48 != -1)
        {
            if ((int)opaqueValue48 <= 0)
            {
                opaqueValue57 = opaqueValue149;
                goto label143;
            }
            if (*((std::uint64_t*)&opaqueValue149 + 1) + (int)opaqueValue48 - (std::uint64_t)opaqueValue149 > (std::uint64_t)opaqueValue155 + 4112)
            {
                juceStringConstructFromUtf8 (stackStorage148, "budgetExceeded");
                opaqueValue49 = opaqueValue153;
                temporaryPointer68 = (char*)*opaqueValue153;
                *opaqueValue153 = stackStorage148[0];
                stringStorageToRelease69 = temporaryPointer68 - 16;
                if (stringStorageToRelease69 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease69) == -1)
                    memoryFree (stringStorageToRelease69);
                temporaryPointer70 = (void*)opaqueValue149;
                if ((std::uint64_t)opaqueValue149 != 0)
                {
                    if ((std::uint64_t)(opaqueValue150 - opaqueValue149) >= 0x1000)
                    {
                        temporaryPointer70 = *(void**)(opaqueValue149 - 8);
                        if ((std::uint64_t)(opaqueValue149 - (std::uint64_t)temporaryPointer70 - 8) > 0x1F)
                            goto label476;
                    }
                    memoryFree (temporaryPointer70);
                    opaqueValue149 = 0;
                    opaqueValue150 = 0;
                }
                opaqueValue64 = hHandle[1];
                if (opaqueValue140 == 0)
                {
                    if (hHandle[1] == nullptr)
                        goto label195;
                    if (WaitForSingleObject (hHandle[1], 0) != 0)
                    {
                        if (hJob != nullptr)
                        {
                            TerminateJobObject (hJob, 1u);
                        }
                        else
                        {
                            opaqueValue64 = hHandle[1];
                            if (hHandle[1] == nullptr)
                                goto label195;
                            TerminateProcess (hHandle[1], 1u);
                        }
                    }
                    else
                    {
                        opaqueValue144 = 1;
                        GetExitCodeProcess (hHandle[1], &opaqueValue144);
                        opaqueValue139 = opaqueValue144;
                        opaqueValue140 = 1;
                    }
                    while (1)
                    {
                        opaqueValue64 = hHandle[1];
                    label195:
                        if (opaqueValue140 != 0 || opaqueValue64 == nullptr)
                            break;
                        if (WaitForSingleObject (opaqueValue64, 0) == 0)
                        {
                        label199:
                            opaqueValue144 = 1;
                            GetExitCodeProcess (hHandle[1], &opaqueValue144);
                            opaqueValue139 = opaqueValue144;
                            opaqueValue140 = 1;
                            opaqueValue64 = hHandle[1];
                            goto label200;
                        }
                        stackStorage148[0] = (LPVOID)5;
                        sub_180078590 (stackStorage148);
                    }
                }
                goto label200;
            }
            sub_18028B140 (&opaqueValue149, *((std::uint64_t*)&opaqueValue149 + 1), Buffer, (int)opaqueValue48);
            opaqueValue57 = opaqueValue149;
            if (temporaryPointer154 != nullptr)
                goto label129;
            if (*((std::uint64_t*)&opaqueValue149 + 1) - (std::uint64_t)opaqueValue149 < 0x10u)
                goto label143;
            opaqueValue59 = *(std::uint8_t*)(opaqueValue149 + 4) | ((*(std::uint8_t*)(opaqueValue149 + 5) | ((std::uint64_t)*(std::uint16_t*)(opaqueValue149 + 6) << 8)) << 8);
            *(std::uint64_t*)&workerUnavailableString146 = opaqueValue59;
            opaqueValue60 = *(std::uint8_t*)(opaqueValue149 + 8) | ((*(std::uint8_t*)(opaqueValue149 + 9) | ((*(std::uint8_t*)(opaqueValue149 + 10) | ((*(std::uint8_t*)(opaqueValue149 + 11) | ((*(std::uint8_t*)(opaqueValue149 + 12) | ((*(std::uint8_t*)(opaqueValue149 + 13) | ((std::uint64_t)*(std::uint16_t*)(opaqueValue149 + 14) << 8)) << 8)) << 8)) << 8)) << 8)) << 8);
            opaqueValue151 = opaqueValue60;
            if (*(std::uint32_t*)opaqueValue149 == 827539782 && opaqueValue59 - 1 <= 0xFFF && opaqueValue60 <= (std::uint64_t)opaqueValue155)
            {
                temporaryPointer154 = (char*)(opaqueValue60 + opaqueValue59 + 16);
                if (temporaryPointer154 != nullptr)
                {
                label129:
                    if (*((std::uint64_t*)&opaqueValue149 + 1) - (std::uint64_t)opaqueValue149 > (std::uint64_t)temporaryPointer154)
                    {
                        juceStringConstructFromUtf8 (stackStorage148, "invalid");
                        opaqueValue49 = opaqueValue153;
                        temporaryPointer61 = (char*)*opaqueValue153;
                        *opaqueValue153 = stackStorage148[0];
                        stringStorageToRelease62 = temporaryPointer61 - 16;
                        if (stringStorageToRelease62 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease62) == -1)
                            memoryFree (stringStorageToRelease62);
                        temporaryPointer63 = (void*)opaqueValue149;
                        if ((std::uint64_t)opaqueValue149 != 0)
                        {
                            if ((std::uint64_t)(opaqueValue150 - opaqueValue149) >= 0x1000)
                            {
                                temporaryPointer63 = *(void**)(opaqueValue149 - 8);
                                if ((std::uint64_t)(opaqueValue149 - (std::uint64_t)temporaryPointer63 - 8) > 0x1F)
                                    goto label477;
                            }
                            memoryFree (temporaryPointer63);
                            opaqueValue149 = 0;
                            opaqueValue150 = 0;
                        }
                        opaqueValue64 = hHandle[1];
                        if (opaqueValue140 == 0)
                        {
                            if (hHandle[1] == nullptr)
                                goto label175;
                            if (WaitForSingleObject (hHandle[1], 0) != 0)
                            {
                                if (hJob != nullptr)
                                {
                                    TerminateJobObject (hJob, 1u);
                                }
                                else
                                {
                                    opaqueValue64 = hHandle[1];
                                    if (hHandle[1] == nullptr)
                                        goto label175;
                                    TerminateProcess (hHandle[1], 1u);
                                }
                            }
                            else
                            {
                                opaqueValue144 = 1;
                                GetExitCodeProcess (hHandle[1], &opaqueValue144);
                                opaqueValue139 = opaqueValue144;
                                opaqueValue140 = 1;
                            }
                            while (1)
                            {
                                opaqueValue64 = hHandle[1];
                            label175:
                                if (opaqueValue140 != 0 || opaqueValue64 == nullptr)
                                    break;
                                if (WaitForSingleObject (opaqueValue64, 0) == 0)
                                    goto label199;
                                stackStorage148[0] = (LPVOID)5;
                                sub_180078590 (stackStorage148);
                            }
                        }
                    label200:
                        if (hHandle[0] != nullptr)
                        {
                            CloseHandle (hHandle[0]);
                            opaqueValue64 = hHandle[1];
                        }
                        if (opaqueValue64 != nullptr)
                            CloseHandle (opaqueValue64);
                        if (hJob != nullptr)
                            CloseHandle (hJob);
                        temporaryPointer71 = (void*)(stackStorage145[0] - 16LL);
                        if ((void*)(stackStorage145[0] - 16LL) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)temporaryPointer71) == -1)
                        {
                            memoryFree (temporaryPointer71);
                        }
                        stringStorageToRelease72 = (void*)(opaqueValue152 - 16);
                        if ((void*)(opaqueValue152 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease72) == -1)
                        {
                            memoryFree (stringStorageToRelease72);
                        }
                        if (_InterlockedExchangeAdd ((volatile std::int32_t*)(allocatedObject12 + 8), 0xFFFFFFFF) != 1)
                            goto label214;
                        goto label213;
                    }
                }
            label143:
                opaqueValue55 = opaqueValue138;
                goto label144;
            }
            juceStringConstructFromUtf8 (stackStorage148, "budgetExceeded");
            opaqueValue49 = opaqueValue153;
            temporaryPointer65 = (char*)*opaqueValue153;
            *opaqueValue153 = stackStorage148[0];
            stringStorageToRelease66 = temporaryPointer65 - 16;
            if (stringStorageToRelease66 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease66) == -1)
                memoryFree (stringStorageToRelease66);
            temporaryPointer67 = (void*)opaqueValue149;
            if ((std::uint64_t)opaqueValue149 == 0)
            {
            label158:
                opaqueValue64 = hHandle[1];
                if (opaqueValue140 == 0)
                {
                    if (hHandle[1] == nullptr)
                        goto label167;
                    if (WaitForSingleObject (hHandle[1], 0) != 0)
                    {
                        if (hJob != nullptr)
                        {
                            TerminateJobObject (hJob, 1u);
                        }
                        else
                        {
                            opaqueValue64 = hHandle[1];
                            if (hHandle[1] == nullptr)
                                goto label167;
                            TerminateProcess (hHandle[1], 1u);
                        }
                    }
                    else
                    {
                        opaqueValue144 = 1;
                        GetExitCodeProcess (hHandle[1], &opaqueValue144);
                        opaqueValue139 = opaqueValue144;
                        opaqueValue140 = 1;
                    }
                    while (1)
                    {
                        opaqueValue64 = hHandle[1];
                    label167:
                        if (opaqueValue140 != 0 || opaqueValue64 == nullptr)
                            break;
                        if (WaitForSingleObject (opaqueValue64, 0) == 0)
                            goto label199;
                        stackStorage148[0] = (LPVOID)5;
                        sub_180078590 (stackStorage148);
                    }
                }
                goto label200;
            }
            if ((std::uint64_t)(opaqueValue150 - opaqueValue149) < 0x1000 || (temporaryPointer67 = *(void**)(opaqueValue149 - 8), (std::uint64_t)(opaqueValue149 - (std::uint64_t)temporaryPointer67 - 8) <= 0x1F))
            {
                memoryFree (temporaryPointer67);
                opaqueValue149 = 0;
                opaqueValue150 = 0;
                goto label158;
            }
        label476:
            sub_1809AEBB8 (0, 0, 0, 0, 0);
            __debugbreak();
        }
        opaqueValue55 = 1;
        opaqueValue138 = 1;
        opaqueValue57 = opaqueValue149;
    label144:
        if (opaqueValue140 != 0 || hHandle[1] == nullptr)
            goto label148;
        if (WaitForSingleObject (hHandle[1], 0) == 0)
        {
            opaqueValue144 = 1;
            GetExitCodeProcess (hHandle[1], &opaqueValue144);
            opaqueValue139 = opaqueValue144;
            opaqueValue140 = 1;
            opaqueValue57 = opaqueValue149;
        label148:
            if (opaqueValue55 == 0)
                goto label149;
            if (opaqueValue139 != 0 || temporaryPointer154 == nullptr || (char*)(*((std::uint64_t*)&opaqueValue149 + 1) - opaqueValue57) != temporaryPointer154)
            {
                juceStringConstructFromUtf8 (stackStorage148, "analysisFailed");
                opaqueValue49 = opaqueValue153;
                temporaryPointer112 = (char*)*opaqueValue153;
                *opaqueValue153 = stackStorage148[0];
                stringStorageToRelease113 = temporaryPointer112 - 16;
                if (stringStorageToRelease113 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease113) == -1)
                    memoryFree (stringStorageToRelease113);
                temporaryPointer114 = (void*)opaqueValue149;
                if ((std::uint64_t)opaqueValue149 != 0)
                {
                    if ((std::uint64_t)(opaqueValue150 - opaqueValue149) >= 0x1000)
                    {
                        temporaryPointer114 = *(void**)(opaqueValue149 - 8);
                        if ((std::uint64_t)(opaqueValue149 - (std::uint64_t)temporaryPointer114 - 8) > 0x1F)
                            goto label477;
                    }
                    memoryFree (temporaryPointer114);
                    opaqueValue149 = 0;
                    opaqueValue150 = 0;
                }
                opaqueValue87 = hHandle[1];
                if (opaqueValue140 == 0)
                {
                    if (hHandle[1] == nullptr)
                        goto label387;
                    if (WaitForSingleObject (hHandle[1], 0) != 0)
                    {
                        if (hJob != nullptr)
                        {
                            TerminateJobObject (hJob, 1u);
                        }
                        else
                        {
                            opaqueValue87 = hHandle[1];
                            if (hHandle[1] == nullptr)
                                goto label387;
                            TerminateProcess (hHandle[1], 1u);
                        }
                    }
                    else
                    {
                        opaqueValue137 = 1;
                        GetExitCodeProcess (hHandle[1], &opaqueValue137);
                        opaqueValue139 = opaqueValue137;
                        opaqueValue140 = 1;
                    }
                    while (1)
                    {
                        opaqueValue87 = hHandle[1];
                    label387:
                        if (opaqueValue140 != 0 || opaqueValue87 == nullptr)
                            break;
                        if (WaitForSingleObject (opaqueValue87, 0) == 0)
                            goto label263;
                        stackStorage148[0] = (LPVOID)5;
                        sub_180078590 (stackStorage148);
                    }
                }
                goto label264;
            }
            opaqueValue74 = opaqueValue57 + 16;
            if (opaqueValue57 == -16 || (std::uint32_t)workerUnavailableString146 == 0)
            {
                temporaryPointer154 = &emptyJuceStringCharacters;
                opaqueValue75 = opaqueValue137 | 0x400;
            }
            else
            {
                opaqueValue75 = opaqueValue137 | 0x400;
                if ((int)workerUnavailableString146 >= 0)
                    sub_180097430 (&temporaryPointer154, opaqueValue74, opaqueValue74 + (int)workerUnavailableString146);
                else
                    sub_1800B3260 (&temporaryPointer154, opaqueValue74);
            }
            ExitCode = opaqueValue75;
            sub_1800A66C0 (&opaqueValue167, &temporaryPointer154);
            stringStorageToRelease76 = temporaryPointer154 - 16;
            if (temporaryPointer154 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease76) == -1)
                memoryFree (stringStorageToRelease76);
            if (*(std::uint8_t*)(opaqueValue167 + 7) == 0 || *(std::uint8_t*)(*(std::uint64_t*)sub_1800A3E20 (&opaqueValue167, "version") + 2LL) == 0 || (opaqueValue77 = sub_1800A3E20 (&opaqueValue167, "version"), (*(unsigned int (**) (std::int64_t)) (*(std::uint64_t*)opaqueValue77 + 16LL)) (opaqueValue77 + 8) != 1) || *(std::uint8_t*)(*(std::uint64_t*)sub_1800A3E20 (&opaqueValue167, "error") + 6LL) == 0)
            {
                juceStringConstructFromUtf8 (stackStorage148, "invalid");
                opaqueValue49 = opaqueValue153;
                temporaryPointer109 = (char*)*opaqueValue153;
                *opaqueValue153 = stackStorage148[0];
                stringStorageToRelease110 = temporaryPointer109 - 16;
                if (stringStorageToRelease110 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease110) == -1)
                    memoryFree (stringStorageToRelease110);
                ExitCode = 0;
                (*(void (**) (char*)) (opaqueValue167 + 88)) (stackStorage168);
                temporaryPointer111 = (void*)opaqueValue149;
                if ((std::uint64_t)opaqueValue149 != 0)
                {
                    if ((std::uint64_t)(opaqueValue150 - opaqueValue149) >= 0x1000)
                    {
                        temporaryPointer111 = *(void**)(opaqueValue149 - 8);
                        if ((std::uint64_t)(opaqueValue149 - (std::uint64_t)temporaryPointer111 - 8) > 0x1F)
                            goto label477;
                    }
                    memoryFree (temporaryPointer111);
                    opaqueValue149 = 0;
                    opaqueValue150 = 0;
                }
                opaqueValue87 = hHandle[1];
                if (opaqueValue140 == 0)
                {
                    if (hHandle[1] == nullptr)
                        goto label367;
                    if (WaitForSingleObject (hHandle[1], 0) != 0)
                    {
                        if (hJob != nullptr)
                        {
                            TerminateJobObject (hJob, 1u);
                        }
                        else
                        {
                            opaqueValue87 = hHandle[1];
                            if (hHandle[1] == nullptr)
                                goto label367;
                            TerminateProcess (hHandle[1], 1u);
                        }
                    }
                    else
                    {
                        opaqueValue137 = 1;
                        GetExitCodeProcess (hHandle[1], &opaqueValue137);
                        opaqueValue139 = opaqueValue137;
                        opaqueValue140 = 1;
                    }
                    while (1)
                    {
                        opaqueValue87 = hHandle[1];
                    label367:
                        if (opaqueValue140 != 0 || opaqueValue87 == nullptr)
                            break;
                        if (WaitForSingleObject (opaqueValue87, 0) == 0)
                            goto label263;
                        stackStorage148[0] = (LPVOID)5;
                        sub_180078590 (stackStorage148);
                    }
                }
                goto label264;
            }
            opaqueValue78 = sub_1800A3E20 (&opaqueValue167, "error");
            (*(void (**) (LPVOID*, std::int64_t)) (*(std::uint64_t*)opaqueValue78 + 40LL)) (&opaqueValue155, opaqueValue78 + 8);
            opaqueValue79 = opaqueValue75 | 0x800;
            ExitCode = opaqueValue79;
            opaqueValue49 = opaqueValue153;
            temporaryPointer80 = (char*)*opaqueValue153;
            *opaqueValue153 = opaqueValue155;
            opaqueValue155 = temporaryPointer80;
            stringStorageToRelease81 = temporaryPointer80 - 16;
            if (stringStorageToRelease81 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease81) == -1)
                memoryFree (stringStorageToRelease81);
            if (*(std::uint8_t*)*opaqueValue49 == 0)
            {
                temporaryPointer90 = (std::uint32_t*)opaqueValue156;
                if (*(std::uint32_t*)opaqueValue156 != 2)
                {
                    opaqueValue91 = sub_1800A3E20 (&opaqueValue167, "sampleRate");
                    if ((std::uint8_t)sub_1807F5390 (opaqueValue91) == 0 || (opaqueValue92 = sub_1800A3E20 (&opaqueValue167, "duration"), (std::uint8_t)sub_1807F5390 (opaqueValue92) == 0) || *(std::uint8_t*)(*(std::uint64_t*)sub_1800A3E20 (&opaqueValue167, "channels") + 2LL) == 0 || *(std::uint8_t*)(*(std::uint64_t*)sub_1800A3E20 (&opaqueValue167, "frames") + 3LL) == 0 && *(std::uint8_t*)(*(std::uint64_t*)sub_1800A3E20 (&opaqueValue167, "frames") + 2LL) == 0)
                    {
                        juceStringConstructFromUtf8 (stackStorage148, "invalid");
                        temporaryPointer103 = *opaqueValue49;
                        *opaqueValue49 = stackStorage148[0];
                        stringStorageToRelease104 = temporaryPointer103 - 16;
                        if (stringStorageToRelease104 != (std::uint8_t*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease104) == -1)
                            memoryFree (stringStorageToRelease104);
                        ExitCode = 0;
                        (*(void (**) (char*)) (opaqueValue167 + 88)) (stackStorage168);
                        temporaryPointer105 = (void*)opaqueValue149;
                        if ((std::uint64_t)opaqueValue149 != 0)
                        {
                            if ((std::uint64_t)(opaqueValue150 - opaqueValue149) >= 0x1000)
                            {
                                temporaryPointer105 = *(void**)(opaqueValue149 - 8);
                                if ((std::uint64_t)(opaqueValue149 - (std::uint64_t)temporaryPointer105 - 8) > 0x1F)
                                    goto label477;
                            }
                            memoryFree (temporaryPointer105);
                            opaqueValue149 = 0;
                            opaqueValue150 = 0;
                        }
                        opaqueValue87 = hHandle[1];
                        if (opaqueValue140 == 0)
                        {
                            if (hHandle[1] == nullptr)
                                goto label330;
                            if (WaitForSingleObject (hHandle[1], 0) != 0)
                            {
                                if (hJob != nullptr)
                                {
                                    TerminateJobObject (hJob, 1u);
                                }
                                else
                                {
                                    opaqueValue87 = hHandle[1];
                                    if (hHandle[1] == nullptr)
                                        goto label330;
                                    TerminateProcess (hHandle[1], 1u);
                                }
                            }
                            else
                            {
                                opaqueValue137 = 1;
                                GetExitCodeProcess (hHandle[1], &opaqueValue137);
                                opaqueValue139 = opaqueValue137;
                                opaqueValue140 = 1;
                            }
                            while (1)
                            {
                                opaqueValue87 = hHandle[1];
                            label330:
                                if (opaqueValue140 != 0 || opaqueValue87 == nullptr)
                                    break;
                                if (WaitForSingleObject (opaqueValue87, 0) == 0)
                                    goto label263;
                                stackStorage148[0] = (LPVOID)5;
                                sub_180078590 (stackStorage148);
                            }
                        }
                        goto label264;
                    }
                    opaqueValue93 = sub_1800A3E20 (&opaqueValue167, "sampleRate");
                    *((double*)opaqueValue49 + 1) = (*(double (**) (std::int64_t)) (*(std::uint64_t*)opaqueValue93 + 32LL)) (opaqueValue93 + 8);
                    opaqueValue94 = sub_1800A3E20 (&opaqueValue167, "duration");
                    *((double*)opaqueValue49 + 2) = (*(double (**) (std::int64_t)) (*(std::uint64_t*)opaqueValue94 + 32LL)) (opaqueValue94 + 8);
                    opaqueValue95 = sub_1800A3E20 (&opaqueValue167, "channels");
                    *((std::uint32_t*)opaqueValue49 + 6) = (*(std::int64_t (**) (std::int64_t)) (*(std::uint64_t*)opaqueValue95 + 16LL)) (opaqueValue95 + 8);
                    opaqueValue96 = sub_1800A3E20 (&opaqueValue167, "frames");
                    opaqueValue97 = (*(std::int64_t (**) (std::int64_t)) (*(std::uint64_t*)opaqueValue96 + 24LL)) (opaqueValue96 + 8);
                    opaqueValue49[4] = (LPVOID)opaqueValue97;
                    scalarValue98 = *((double*)opaqueValue49 + 1);
                    if (scalarValue98 < 8000.0 || scalarValue98 > 384000.0 || *((double*)opaqueValue49 + 2) <= 0.0 || (opaqueValue99 = *((std::uint32_t*)opaqueValue49 + 6)) < 1 || opaqueValue99 > 2 || opaqueValue97 <= 0 || *temporaryPointer90 == 1 && ((std::uint64_t)opaqueValue97 > 0xAFC800 || opaqueValue151 != 4 * opaqueValue97 || opaqueValue97 != (int)sub_1809E18B0()))
                    {
                        juceStringConstructFromUtf8 (stackStorage148, "invalid");
                        temporaryPointer100 = *opaqueValue49;
                        *opaqueValue49 = stackStorage148[0];
                        stringStorageToRelease101 = temporaryPointer100 - 16;
                        if (stringStorageToRelease101 != (std::uint8_t*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease101) == -1)
                            memoryFree (stringStorageToRelease101);
                        ExitCode = 0;
                        (*(void (**) (char*)) (opaqueValue167 + 88)) (stackStorage168);
                        temporaryPointer102 = (void*)opaqueValue149;
                        if ((std::uint64_t)opaqueValue149 != 0)
                        {
                            *(std::uint64_t*)&workerUnavailableString146 = opaqueValue150 - opaqueValue149;
                            opaqueValue155 = (LPVOID)opaqueValue149;
                            if ((std::uint64_t)(opaqueValue150 - opaqueValue149) >= 0x1000)
                            {
                                sub_180008120 (&opaqueValue155, &workerUnavailableString146);
                                temporaryPointer102 = opaqueValue155;
                            }
                            memoryFree (temporaryPointer102);
                            opaqueValue149 = 0;
                            opaqueValue150 = 0;
                        }
                        opaqueValue87 = hHandle[1];
                        if (opaqueValue140 == 0)
                        {
                            if (hHandle[1] == nullptr)
                                goto label310;
                            if (WaitForSingleObject (hHandle[1], 0) != 0)
                            {
                                if (hJob != nullptr)
                                {
                                    TerminateJobObject (hJob, 1u);
                                }
                                else
                                {
                                    opaqueValue87 = hHandle[1];
                                    if (hHandle[1] == nullptr)
                                        goto label310;
                                    TerminateProcess (hHandle[1], 1u);
                                }
                            }
                            else
                            {
                                opaqueValue137 = 1;
                                GetExitCodeProcess (hHandle[1], &opaqueValue137);
                                opaqueValue139 = opaqueValue137;
                                opaqueValue140 = 1;
                            }
                            while (1)
                            {
                                opaqueValue87 = hHandle[1];
                            label310:
                                if (opaqueValue140 != 0 || opaqueValue87 == nullptr)
                                    break;
                                if (WaitForSingleObject (opaqueValue87, 0) == 0)
                                    goto label263;
                                stackStorage148[0] = (LPVOID)5;
                                sub_180078590 (stackStorage148);
                            }
                        }
                        goto label264;
                    }
                }
                temporaryPointer106 = (LPVOID*)sub_1800921D0 (&opaqueValue165, opaqueValue149 + 16 + workerUnavailableString146, opaqueValue151);
                opaqueValue107 = opaqueValue49[5];
                opaqueValue49[5] = *temporaryPointer106;
                *temporaryPointer106 = opaqueValue107;
                opaqueValue49[6] = temporaryPointer106[1];
                memoryFreeBuffer (opaqueValue165);
                ExitCode = 0;
                (*(void (**) (char*)) (opaqueValue167 + 88)) (stackStorage168);
                temporaryPointer108 = (void*)opaqueValue149;
                if ((std::uint64_t)opaqueValue149 != 0)
                {
                    if ((std::uint64_t)(opaqueValue150 - opaqueValue149) >= 0x1000)
                    {
                        temporaryPointer108 = *(void**)(opaqueValue149 - 8);
                        if ((std::uint64_t)(opaqueValue149 - (std::uint64_t)temporaryPointer108 - 8) > 0x1F)
                            goto label477;
                    }
                    memoryFree (temporaryPointer108);
                    opaqueValue149 = 0;
                    opaqueValue150 = 0;
                }
                opaqueValue87 = hHandle[1];
                if (opaqueValue140 == 0)
                {
                    if (hHandle[1] == nullptr)
                        goto label347;
                    if (WaitForSingleObject (hHandle[1], 0) != 0)
                    {
                        if (hJob != nullptr)
                        {
                            TerminateJobObject (hJob, 1u);
                        }
                        else
                        {
                            opaqueValue87 = hHandle[1];
                            if (hHandle[1] == nullptr)
                                goto label347;
                            TerminateProcess (hHandle[1], 1u);
                        }
                    }
                    else
                    {
                        opaqueValue137 = 1;
                        GetExitCodeProcess (hHandle[1], &opaqueValue137);
                        opaqueValue139 = opaqueValue137;
                        opaqueValue140 = 1;
                    }
                    while (1)
                    {
                        opaqueValue87 = hHandle[1];
                    label347:
                        if (opaqueValue140 != 0 || opaqueValue87 == nullptr)
                            break;
                        if (WaitForSingleObject (opaqueValue87, 0) == 0)
                            goto label263;
                        stackStorage148[0] = (LPVOID)5;
                        sub_180078590 (stackStorage148);
                    }
                }
                goto label264;
            }
            if (opaqueValue151 != 0)
                goto label239;
            stackStorage163[0] = "budgetExceeded";
            stackStorage163[1] = "permissionDenied";
            stackStorage163[2] = "formatUnsupported";
            stackStorage163[3] = "emptySelection";
            stackStorage163[4] = "analysisFailed";
            stackStorage163[5] = "nonFiniteInput";
            stackStorage163[6] = "midCancellation";
            stackStorage163[7] = "silence";
            stackStorage163[8] = "invalid";
            opaqueValue165 = stackStorage163;
            opaqueValue166 = (std::int64_t)&opaqueValue164;
            opaqueValue82 = sub_18009CD70 (stackStorage148, &opaqueValue165);
            opaqueValue79 |= 2u;
            ExitCode = opaqueValue79;
            opaqueValue83 = sub_18009D280 (opaqueValue82, *opaqueValue49, 0, 0);
            opaqueValue138 = 0;
            if (opaqueValue83 < 0)
            label239:
                opaqueValue138 = 1;
            if ((opaqueValue79 & 2) != 0)
            {
                ExitCode = opaqueValue79 & 0xFFFFFFFD;
                sub_180024DB0 (stackStorage148);
                memoryFreeBuffer (stackStorage148[0]);
            }
            if (opaqueValue138 != 0)
            {
                juceStringConstructFromUtf8 (stackStorage148, "invalid");
                temporaryPointer84 = (char*)*opaqueValue49;
                *opaqueValue49 = stackStorage148[0];
                stringStorageToRelease85 = temporaryPointer84 - 16;
                if (stringStorageToRelease85 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease85) == -1)
                    memoryFree (stringStorageToRelease85);
            }
            ExitCode = 0;
            (*(void (**) (char*)) (opaqueValue167 + 88)) (stackStorage168);
            temporaryPointer86 = (void*)opaqueValue149;
            if ((std::uint64_t)opaqueValue149 == 0)
            {
            label250:
                opaqueValue87 = hHandle[1];
                if (opaqueValue140 == 0)
                {
                    if (hHandle[1] == nullptr)
                        goto label259;
                    if (WaitForSingleObject (hHandle[1], 0) != 0)
                    {
                        if (hJob != nullptr)
                        {
                            TerminateJobObject (hJob, 1u);
                        }
                        else
                        {
                            opaqueValue87 = hHandle[1];
                            if (hHandle[1] == nullptr)
                                goto label259;
                            TerminateProcess (hHandle[1], 1u);
                        }
                    }
                    else
                    {
                        opaqueValue137 = 1;
                        GetExitCodeProcess (hHandle[1], &opaqueValue137);
                        opaqueValue139 = opaqueValue137;
                        opaqueValue140 = 1;
                    }
                    while (1)
                    {
                        opaqueValue87 = hHandle[1];
                    label259:
                        if (opaqueValue140 != 0 || opaqueValue87 == nullptr)
                            break;
                        if (WaitForSingleObject (opaqueValue87, 0) == 0)
                            goto label263;
                        stackStorage148[0] = (LPVOID)5;
                        sub_180078590 (stackStorage148);
                    }
                }
                goto label264;
            }
            if ((std::uint64_t)(opaqueValue150 - opaqueValue149) < 0x1000 || (temporaryPointer86 = *(void**)(opaqueValue149 - 8), (std::uint64_t)(opaqueValue149 - (std::uint64_t)temporaryPointer86 - 8) <= 0x1F))
            {
                memoryFree (temporaryPointer86);
                opaqueValue149 = 0;
                opaqueValue150 = 0;
                goto label250;
            }
        label477:
            sub_1809AEBB8 (0, 0, 0, 0, 0);
            JUMPOUT (0x1807F77A5LL);
        }
    label149:
        conditionFlag119 = (int)opaqueValue48 <= 0;
        LODWORD (opaqueValue48) = 0;
        if (conditionFlag119)
        {
            *(std::uint64_t*)NumberOfBytesRead = 5;
            sub_180078590 (NumberOfBytesRead);
        }
    }
    if (TotalBytesAvail == 0)
    {
        opaqueValue57 = opaqueValue149;
        goto label144;
    }
    opaqueValue58 = 0x10000;
    if (TotalBytesAvail < 0x10000)
        opaqueValue58 = TotalBytesAvail;
    if (ReadFile (hHandle[0], Buffer, opaqueValue58, NumberOfBytesRead, nullptr))
    {
        LODWORD (opaqueValue48) = NumberOfBytesRead[0];
        goto label118;
    }
label391:
    juceStringConstructFromUtf8 (stackStorage148, "analysisFailed");
    opaqueValue49 = opaqueValue153;
    temporaryPointer115 = (char*)*opaqueValue153;
    *opaqueValue153 = stackStorage148[0];
    stringStorageToRelease116 = temporaryPointer115 - 16;
    if (stringStorageToRelease116 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease116) == -1)
        memoryFree (stringStorageToRelease116);
    temporaryPointer117 = (void*)opaqueValue149;
    if ((std::uint64_t)opaqueValue149 != 0)
    {
        if ((std::uint64_t)(opaqueValue150 - opaqueValue149) >= 0x1000)
        {
            temporaryPointer117 = *(void**)(opaqueValue149 - 8);
            if ((std::uint64_t)(opaqueValue149 - (std::uint64_t)temporaryPointer117 - 8) > 0x1F)
                goto label476;
        }
        memoryFree (temporaryPointer117);
        opaqueValue149 = 0;
        opaqueValue150 = 0;
    }
    opaqueValue87 = hHandle[1];
    if (opaqueValue140 == 0)
    {
        if (hHandle[1] == nullptr)
            goto label407;
        if (WaitForSingleObject (hHandle[1], 0) != 0)
        {
            if (hJob != nullptr)
            {
                TerminateJobObject (hJob, 1u);
            }
            else
            {
                opaqueValue87 = hHandle[1];
                if (hHandle[1] == nullptr)
                    goto label407;
                TerminateProcess (hHandle[1], 1u);
            }
        }
        else
        {
            opaqueValue137 = 1;
            GetExitCodeProcess (hHandle[1], &opaqueValue137);
            opaqueValue139 = opaqueValue137;
            opaqueValue140 = 1;
        }
        while (1)
        {
            opaqueValue87 = hHandle[1];
        label407:
            if (opaqueValue140 != 0 || opaqueValue87 == nullptr)
                break;
            if (WaitForSingleObject (opaqueValue87, 0) == 0)
            {
            label263:
                opaqueValue137 = 1;
                GetExitCodeProcess (hHandle[1], &opaqueValue137);
                opaqueValue139 = opaqueValue137;
                opaqueValue140 = 1;
                opaqueValue87 = hHandle[1];
                break;
            }
            stackStorage148[0] = (LPVOID)5;
            sub_180078590 (stackStorage148);
        }
    }
label264:
    if (hHandle[0] != nullptr)
    {
        CloseHandle (hHandle[0]);
        opaqueValue87 = hHandle[1];
    }
    if (opaqueValue87 != nullptr)
        CloseHandle (opaqueValue87);
    if (hJob != nullptr)
        CloseHandle (hJob);
    temporaryPointer88 = (void*)(stackStorage145[0] - 16LL);
    if ((void*)(stackStorage145[0] - 16LL) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)temporaryPointer88) == -1)
        memoryFree (temporaryPointer88);
    stringStorageToRelease89 = (void*)(opaqueValue152 - 16);
    if ((void*)(opaqueValue152 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease89) == -1)
        memoryFree (stringStorageToRelease89);
    if (_InterlockedExchangeAdd ((volatile std::int32_t*)(allocatedObject12 + 8), 0xFFFFFFFF) == 1)
    label458:
        (**(void (***) (std::int64_t, std::int64_t))allocatedObject12) (allocatedObject12, 1);
label459:
    temporaryPointer127 = temporaryPointer9 - 4;
    if (temporaryPointer9 - 4 != (volatile std::int32_t*)&emptyJuceStringStorage && _InterlockedDecrement (temporaryPointer127) == -1)
        memoryFree ((LPVOID)temporaryPointer127);
    return opaqueValue49;
}
