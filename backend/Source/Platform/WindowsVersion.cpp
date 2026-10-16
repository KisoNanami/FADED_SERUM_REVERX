#include <cstdint>

// ===== SystemDir_caller @ 0x180044e90 size=1126 =====
LPCSTR* winSystemQueryOsVersion (LPCSTR* outputDescription, std::uint64_t* outputVersion)
{
    FARPROC ProcAddress; // r15
    LPCSTR opaqueValue5; // rcx
    CHAR* stringStorageToRelease6; // rcx
    LPCSTR opaqueValue7; // rcx
    CHAR* stringStorageToRelease8; // rcx
    void* stringStorageToRelease9; // rcx
    std::int64_t opaqueValue10; // rax
    LPCWSTR* utf16Characters11; // rax
    HMODULE LibraryW; // rbx
    std::int64_t* temporaryPointer13; // rcx
    void* stringStorageToRelease14; // rcx
    LPCSTR opaqueValue15; // rdi
    CHAR* stringStorageToRelease16; // rcx
    std::int64_t opaqueValue17; // rax
    std::int64_t opaqueValue18; // rax
    std::int64_t* temporaryPointer19; // rdi
    void* stringStorageToRelease20; // rcx
    std::int64_t* temporaryPointer21; // rdi
    void* stringStorageToRelease22; // rcx
    const CHAR* temporaryPointer23; // rdi
    void* stringStorageToRelease24; // rcx
    LPCSTR opaqueValue25; // rcx
    CHAR* stringStorageToRelease26; // rcx
    void* stringStorageToRelease27; // rcx
    CHAR* stringStorageToRelease28; // rcx
    void* temporaryPointer29; // rcx
    LPCSTR lpProcName; // [rsp+28h] [rbp-D8h] BYREF
    std::int64_t* temporaryPointer32; // [rsp+30h] [rbp-D0h] BYREF
    std::int64_t opaqueValue33; // [rsp+38h] [rbp-C8h] BYREF
    std::int64_t opaqueValue34; // [rsp+40h] [rbp-C0h] BYREF
    std::int64_t opaqueValue35; // [rsp+48h] [rbp-B8h] BYREF
    char stackStorage36[8]; // [rsp+50h] [rbp-B0h] BYREF
    char stackStorage37[8]; // [rsp+58h] [rbp-A8h] BYREF
    LPCSTR* temporaryPointer38; // [rsp+60h] [rbp-A0h]
    std::uint64_t* temporaryPointer39; // [rsp+68h] [rbp-98h]
    HMODULE opaqueValue40; // [rsp+70h] [rbp-90h]
    int opaqueValue41; // [rsp+80h] [rbp-80h] BYREF
    std::uint32_t stackStorage42[78]; // [rsp+84h] [rbp-7Ch] BYREF
    char opaqueValue43; // [rsp+1BFh] [rbp+BFh] BYREF
    WCHAR Buffer[2048]; // [rsp+1C0h] [rbp+C0h] BYREF

    temporaryPointer38 = outputDescription;
    temporaryPointer39 = outputVersion;
    ProcAddress = nullptr;
    *outputDescription = &emptyJuceStringCharacters;
    outputDescription[1] = &emptyJuceStringCharacters;
    outputDescription[2] = &emptyJuceStringCharacters;
    outputDescription[3] = &emptyJuceStringCharacters;
    outputDescription[2] = (LPCSTR)*outputVersion;
    *outputVersion = &emptyJuceStringCharacters;
    juceStringConstructFromUtf8 (&lpProcName, "x64");
    opaqueValue5 = outputDescription[1];
    outputDescription[1] = lpProcName;
    stringStorageToRelease6 = (CHAR*)(opaqueValue5 - 16);
    if (stringStorageToRelease6 != (CHAR*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease6) == -1)
        memoryFree (stringStorageToRelease6);
    juceStringConstructFromUtf8 (&lpProcName, "windows");
    opaqueValue7 = *outputDescription;
    *outputDescription = lpProcName;
    stringStorageToRelease8 = (CHAR*)(opaqueValue7 - 16);
    if (stringStorageToRelease8 != (CHAR*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease8) == -1)
        memoryFree (stringStorageToRelease8);
    Buffer[0] = 0;
    GetSystemDirectoryW (Buffer, 0x800u);
    sub_1800B3120 (&opaqueValue33, Buffer);
    sub_18008C740 (&opaqueValue34, &opaqueValue33);
    stringStorageToRelease9 = (void*)(opaqueValue33 - 16);
    if ((void*)(opaqueValue33 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease9) == -1)
        memoryFree (stringStorageToRelease9);
    opaqueValue10 = sub_18008D3A0 (&opaqueValue34, &temporaryPointer32, "ntdll.dll");
    utf16Characters11 = (LPCWSTR*)juceStringGetUtf16View (stackStorage36, opaqueValue10);
    LibraryW = LoadLibraryW (*utf16Characters11);
    opaqueValue40 = LibraryW;
    temporaryPointer13 = temporaryPointer32 - 2;
    if (temporaryPointer32 - 2 != (std::int64_t*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)temporaryPointer13) == -1)
        memoryFree (temporaryPointer13);
    stringStorageToRelease14 = (void*)(opaqueValue34 - 16);
    if ((void*)(opaqueValue34 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease14) == -1)
        memoryFree (stringStorageToRelease14);
    juceStringConstructFromUtf8 (&lpProcName, "RtlGetVersion");
    opaqueValue15 = lpProcName;
    if (LibraryW != nullptr)
        ProcAddress = GetProcAddress (LibraryW, lpProcName);
    stringStorageToRelease16 = (CHAR*)(opaqueValue15 - 16);
    if (opaqueValue15 - 16 != (LPCSTR)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease16) == -1)
        memoryFree (stringStorageToRelease16);
    memoryFillBytes (stackStorage42, 0, 272);
    opaqueValue41 = 276;
    if (ProcAddress != nullptr && ((unsigned int (*) (int*))ProcAddress) (&opaqueValue41) == 0)
    {
        opaqueValue17 = sub_180097810 (Buffer, stackStorage42[2]);
        juceStringConstructFromUtf8Span (&lpProcName, opaqueValue17, &opaqueValue43 - opaqueValue17);
        opaqueValue18 = sub_180097810 (Buffer, stackStorage42[1]);
        juceStringConstructFromUtf8Span (&opaqueValue34, opaqueValue18, &opaqueValue43 - opaqueValue18);
        temporaryPointer19 = (std::int64_t*)sub_180097BD0 (stackStorage37, stackStorage42[0]);
        temporaryPointer32 = temporaryPointer19;
        juceStringAppendUtf8Range (temporaryPointer19, ".", "");
        opaqueValue35 = *temporaryPointer19;
        if ((void*)(opaqueValue35 - 16) != &emptyJuceStringStorage)
            _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue35 - 16));
        stringStorageToRelease20 = (void*)(*temporaryPointer19 - 16);
        if (stringStorageToRelease20 != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease20) == -1)
            memoryFree (stringStorageToRelease20);
        temporaryPointer21 = (std::int64_t*)sub_180098710 (stackStorage36, &opaqueValue35, &opaqueValue34);
        temporaryPointer32 = temporaryPointer21;
        juceStringAppendUtf8Range (temporaryPointer21, ".", "");
        opaqueValue33 = *temporaryPointer21;
        if ((void*)(opaqueValue33 - 16) != &emptyJuceStringStorage)
            _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue33 - 16));
        stringStorageToRelease22 = (void*)(*temporaryPointer21 - 16);
        if (stringStorageToRelease22 != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease22) == -1)
            memoryFree (stringStorageToRelease22);
        temporaryPointer32 = &opaqueValue33;
        temporaryPointer23 = *(const CHAR**)juceStringAppendString (&opaqueValue33, &lpProcName);
        if (temporaryPointer23 - 16 != (const CHAR*)&emptyJuceStringStorage)
            _InterlockedIncrement ((volatile std::int32_t*)temporaryPointer23 - 4);
        stringStorageToRelease24 = (void*)(opaqueValue33 - 16);
        if ((void*)(opaqueValue33 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease24) == -1)
            memoryFree (stringStorageToRelease24);
        opaqueValue25 = outputDescription[3];
        outputDescription[3] = temporaryPointer23;
        stringStorageToRelease26 = (CHAR*)(opaqueValue25 - 16);
        if (stringStorageToRelease26 != (CHAR*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease26) == -1)
            memoryFree (stringStorageToRelease26);
        stringStorageToRelease27 = (void*)(opaqueValue34 - 16);
        if ((void*)(opaqueValue34 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease27) == -1)
            memoryFree (stringStorageToRelease27);
        stringStorageToRelease28 = (CHAR*)(lpProcName - 16);
        if (lpProcName - 16 != (LPCSTR)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease28) == -1)
            memoryFree (stringStorageToRelease28);
    }
    if (LibraryW != nullptr)
        FreeLibrary (LibraryW);
    temporaryPointer29 = (void*)(*outputVersion - 16LL);
    if (temporaryPointer29 != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)temporaryPointer29) == -1)
        memoryFree (temporaryPointer29);
    return outputDescription;
}
