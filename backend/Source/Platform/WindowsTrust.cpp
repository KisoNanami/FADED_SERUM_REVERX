#include <cstdint>

// ===== WinTrust_DynamicLoader @ 0x180909120 size=1228 =====
char winTrustVerifyPublisherSignature (std::uint8_t** filePath)
{
    FARPROC resolvedFunction2; // r13
    LPCWSTR* utf16Characters3; // rax
    LPCWSTR* utf16Characters4; // rax
    DWORD FileAttributesW; // eax
    CHAR* stringStorageToRelease6; // rcx
    std::int64_t opaqueValue7; // rax
    LPCWSTR* utf16Characters8; // rax
    HMODULE LibraryW; // rbx
    char* stringStorageToRelease10; // rcx
    void* temporaryPointer11; // rcx
    LPCSTR opaqueValue12; // rdi
    FARPROC ProcAddress; // r14
    CHAR* stringStorageToRelease14; // rcx
    LPCSTR opaqueValue15; // rdi
    CHAR* stringStorageToRelease16; // rcx
    LPCSTR opaqueValue17; // rdi
    FARPROC resolvedFunction18; // r12
    CHAR* stringStorageToRelease19; // rcx
    std::int64_t opaqueValue20; // rcx
    unsigned int opaqueValue21; // r15d
    bool conditionFlag22; // di
    std::int64_t opaqueValue23; // rax
    std::int64_t opaqueValue24; // rax
    std::int64_t opaqueValue25; // rdx
    std::int64_t opaqueValue26; // rdx
    char* temporaryPointer27; // rcx
    char opaqueValue28; // di
    void* temporaryPointer29; // rcx
    LPCSTR lpProcName; // [rsp+20h] [rbp-E0h] BYREF
    const char* temporaryPointer32; // [rsp+28h] [rbp-D8h] BYREF
    std::uint64_t stackStorage33[2]; // [rsp+30h] [rbp-D0h] BYREF
    __int128 opaqueValue34; // [rsp+40h] [rbp-C0h] BYREF
    std::int64_t opaqueValue35; // [rsp+50h] [rbp-B0h]
    std::int64_t opaqueValue36; // [rsp+58h] [rbp-A8h]
    std::int64_t opaqueValue37; // [rsp+60h] [rbp-A0h]
    std::uint64_t* temporaryPointer38; // [rsp+68h] [rbp-98h]
    __int128 opaqueValue39; // [rsp+70h] [rbp-90h]
    __int128 opaqueValue40; // [rsp+80h] [rbp-80h]
    std::int64_t opaqueValue41; // [rsp+90h] [rbp-70h]
    std::uint64_t stackStorage42[2]; // [rsp+A0h] [rbp-60h] BYREF
    __int128 opaqueValue43; // [rsp+B0h] [rbp-50h]
    HMODULE opaqueValue44; // [rsp+C0h] [rbp-40h]
    std::uint32_t stackStorage45[4]; // [rsp+C8h] [rbp-38h] BYREF
    std::uint64_t stackStorage46[4]; // [rsp+D8h] [rbp-28h] BYREF
    WCHAR Buffer[2048]; // [rsp+100h] [rbp+0h] BYREF

    resolvedFunction2 = nullptr;
    if (**filePath == 0)
        return 0;
    utf16Characters3 = (LPCWSTR*)juceStringGetUtf16View (&temporaryPointer32, filePath);
    if ((GetFileAttributesW (*utf16Characters3) & 0x10) != 0)
        return 0;
    utf16Characters4 = (LPCWSTR*)juceStringGetUtf16View (&temporaryPointer32, filePath);
    FileAttributesW = GetFileAttributesW (*utf16Characters4);
    if (FileAttributesW != -1 && (FileAttributesW & 0x400) != 0)
        return 0;
    Buffer[0] = 0;
    GetSystemDirectoryW (Buffer, 0x800u);
    sub_1800B3120 (&lpProcName, Buffer);
    sub_18008C740 (stackStorage33, &lpProcName);
    stringStorageToRelease6 = (CHAR*)(lpProcName - 16);
    if (lpProcName - 16 != (LPCSTR)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease6) == -1)
        memoryFree (stringStorageToRelease6);
    opaqueValue7 = sub_18008D3A0 (stackStorage33, &temporaryPointer32, "wintrust.dll");
    utf16Characters8 = (LPCWSTR*)juceStringGetUtf16View (&lpProcName, opaqueValue7);
    LibraryW = LoadLibraryW (*utf16Characters8);
    opaqueValue44 = LibraryW;
    stringStorageToRelease10 = (char*)(temporaryPointer32 - 16);
    if (temporaryPointer32 - 16 != (const char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease10) == -1)
        memoryFree (stringStorageToRelease10);
    temporaryPointer11 = (void*)(stackStorage33[0] - 16LL);
    if ((void*)(stackStorage33[0] - 16LL) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)temporaryPointer11) == -1)
        memoryFree (temporaryPointer11);
    juceStringConstructFromUtf8 (&lpProcName, "WinVerifyTrust");
    opaqueValue12 = lpProcName;
    if (LibraryW != nullptr)
        ProcAddress = GetProcAddress (LibraryW, lpProcName);
    else
        ProcAddress = nullptr;
    stringStorageToRelease14 = (CHAR*)(opaqueValue12 - 16);
    if (opaqueValue12 - 16 != (LPCSTR)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease14) == -1)
        memoryFree (stringStorageToRelease14);
    juceStringConstructFromUtf8 (&lpProcName, "WTHelperProvDataFromStateData");
    opaqueValue15 = lpProcName;
    if (LibraryW != nullptr)
        resolvedFunction2 = GetProcAddress (LibraryW, lpProcName);
    stringStorageToRelease16 = (CHAR*)(opaqueValue15 - 16);
    if (opaqueValue15 - 16 != (LPCSTR)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease16) == -1)
        memoryFree (stringStorageToRelease16);
    juceStringConstructFromUtf8 (&lpProcName, "WTHelperGetProvSignerFromChain");
    opaqueValue17 = lpProcName;
    if (LibraryW != nullptr)
        resolvedFunction18 = GetProcAddress (LibraryW, lpProcName);
    else
        resolvedFunction18 = nullptr;
    stringStorageToRelease19 = (CHAR*)(opaqueValue17 - 16);
    if (opaqueValue17 - 16 != (LPCSTR)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease19) == -1)
        memoryFree (stringStorageToRelease19);
    if (ProcAddress != nullptr && resolvedFunction2 != nullptr && resolvedFunction18 != nullptr)
    {
        stackStorage33[0] = *filePath;
        if ((void*)(stackStorage33[0] - 16LL) != &emptyJuceStringStorage)
            _InterlockedIncrement ((volatile std::int32_t*)(stackStorage33[0] - 16LL));
        opaqueValue20 = *(std::uint64_t*)juceStringGetUtf16View (&temporaryPointer32, stackStorage33);
        stackStorage42[0] = 32;
        opaqueValue43 = 0;
        stackStorage42[1] = opaqueValue20;
        opaqueValue34 = 0;
        opaqueValue35 = 0;
        opaqueValue39 = 0;
        opaqueValue40 = 0;
        opaqueValue41 = 0;
        LODWORD (opaqueValue34) = 88;
        opaqueValue36 = 0x100000002LL;
        opaqueValue37 = 1;
        temporaryPointer38 = stackStorage42;
        LODWORD (opaqueValue39) = 1;
        DWORD2 (opaqueValue40) = 4224;
        stackStorage45[0] = 11191659;
        stackStorage45[1] = 298896708;
        stackStorage45[2] = -1073692020;
        stackStorage45[3] = -292175281;
        opaqueValue21 = ((std::int64_t (*) (std::uint64_t, std::uint32_t*, __int128*))ProcAddress) (0, stackStorage45, &opaqueValue34);
        conditionFlag22 = false;
        if (opaqueValue21 != 0)
            goto label50;
        opaqueValue23 = ((std::int64_t (*) (std::uint64_t))resolvedFunction2) (*((std::uint64_t*)&opaqueValue39 + 1));
        if (opaqueValue23 == 0)
        {
            LODWORD (opaqueValue39) = 2;
            ((void (*) (std::uint64_t, std::uint32_t*, __int128*))ProcAddress) (0, stackStorage45, &opaqueValue34);
            goto label46;
        }
        opaqueValue24 = ((std::int64_t (*) (std::int64_t, std::uint64_t, std::uint64_t, std::uint64_t))resolvedFunction18) (opaqueValue23, 0, 0, 0);
        if (opaqueValue24 == 0)
            goto label50;
        if (*(std::uint32_t*)(opaqueValue24 + 12) > opaqueValue21 && (opaqueValue25 = *(std::uint64_t*)(opaqueValue24 + 16)) != 0 && (opaqueValue26 = *(std::uint64_t*)(opaqueValue25 + 8)) != 0 && (memset (stackStorage46, 0, sizeof (stackStorage46)), sub_180471180 (stackStorage46, *(std::uint64_t*)(opaqueValue26 + 8), *(unsigned int*)(opaqueValue26 + 16)), sub_18009B4C0 (&temporaryPointer32, stackStorage46, 32), conditionFlag22 = strcmp (temporaryPointer32, "932c66ac5bdf605a3b08c1e573c60cadccf2e74b0099edea6a7c3bccc018b2ab") == 0, temporaryPointer27 = (char*)(temporaryPointer32 - 16), temporaryPointer32 - 16 != (const char*)&emptyJuceStringStorage) && _InterlockedDecrement ((volatile std::int32_t*)temporaryPointer27) == -1)
        {
            memoryFree (temporaryPointer27);
            LODWORD (opaqueValue39) = 2;
            ((void (*) (std::uint64_t, std::uint32_t*, __int128*))ProcAddress) (0, stackStorage45, &opaqueValue34);
        }
        else
        {
        label50:
            LODWORD (opaqueValue39) = 2;
            ((void (*) (std::uint64_t, std::uint32_t*, __int128*))ProcAddress) (0, stackStorage45, &opaqueValue34);
            if (opaqueValue21 != 0)
                goto label46;
        }
        if (conditionFlag22)
        {
            opaqueValue28 = 1;
            goto label47;
        }
    label46:
        opaqueValue28 = 0;
    label47:
        temporaryPointer29 = (void*)(stackStorage33[0] - 16LL);
        if ((void*)(stackStorage33[0] - 16LL) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)temporaryPointer29) == -1)
            memoryFree (temporaryPointer29);
        goto label54;
    }
    opaqueValue28 = 0;
label54:
    if (LibraryW != nullptr)
        FreeLibrary (LibraryW);
    return opaqueValue28;
}
