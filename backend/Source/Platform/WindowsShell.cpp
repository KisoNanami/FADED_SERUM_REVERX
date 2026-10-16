#include <cstdint>

// ===== ShellExecA_Caller @ 0x18008ee40 size=93 =====
bool winShellLaunchExistingFile (std::uint8_t** filePath, std::int64_t arguments)
{
    LPCWSTR* utf16Characters4; // rax
    bool result; // al
    char opaqueValue6; // [rsp+30h] [rbp+8h] BYREF

    result = false;
    if (**filePath != 0)
    {
        utf16Characters4 = (LPCWSTR*)juceStringGetUtf16View (&opaqueValue6, filePath);
        if (GetFileAttributesW (*utf16Characters4) != -1 && winShellExecute ((std::int64_t)filePath, arguments))
            return true;
    }
    return result;
}

// ===== ShellExecute_caller_A @ 0x180094f20 size=90 =====
bool winShellExecute (std::int64_t targetPath, std::int64_t arguments)
{
    const WCHAR* temporaryPointer3; // rdi
    LPCWSTR* utf16Characters4; // rax
    char opaqueValue6; // [rsp+50h] [rbp+18h] BYREF
    char opaqueValue7; // [rsp+58h] [rbp+20h] BYREF

    temporaryPointer3 = *(const WCHAR**)juceStringGetUtf16View (&opaqueValue6, arguments);
    utf16Characters4 = (LPCWSTR*)juceStringGetUtf16View (&opaqueValue7, targetPath);
    return (std::uint64_t)ShellExecuteW (nullptr, nullptr, *utf16Characters4, temporaryPointer3, nullptr, 10) > 0x20;
}

// ===== ShellExecute_caller_B @ 0x1800b1d00 size=547 =====
std::int64_t winShellOpenUrlOrEmail (char** url)
{
    std::int64_t opaqueValue2; // rax
    std::int64_t opaqueValue3; // rbx
    char* stringStorageToRelease4; // rcx
    void* stringStorageToRelease5; // rcx
    void* stringStorageToRelease6; // rcx
    std::int64_t opaqueValue7; // rax
    char* temporaryPointer8; // rax
    char* temporaryPointer9; // rdi
    char* stringStorageToRelease10; // rcx
    void* stringStorageToRelease11; // rcx
    const WCHAR* temporaryPointer12; // rbx
    LPCWSTR* utf16Characters13; // rax
    bool opaqueValue14; // bl
    char* stringStorageToRelease15; // rcx
    char** temporaryPointer16; // rcx
    std::uint8_t stackStorage18[16]; // [rsp+30h] [rbp-10h] BYREF
    char* messageString19; // [rsp+78h] [rbp+38h] BYREF
    char** temporaryPointer20; // [rsp+80h] [rbp+40h] BYREF
    std::int64_t opaqueValue21; // [rsp+88h] [rbp+48h] BYREF

    opaqueValue2 = sub_1800AFFC0 (url, &opaqueValue21);
    messageString19 = *url;
    if (messageString19 - 16 != (char*)&emptyJuceStringStorage)
        _InterlockedIncrement ((volatile std::int32_t*)messageString19 - 4);
    temporaryPointer20 = &messageString19;
    opaqueValue3 = *(std::uint64_t*)juceStringAppendString (&messageString19, opaqueValue2);
    temporaryPointer20 = (char**)opaqueValue3;
    if ((void*)(opaqueValue3 - 16) != &emptyJuceStringStorage)
        _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue3 - 16));
    stringStorageToRelease4 = messageString19 - 16;
    if (messageString19 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease4) == -1)
        memoryFree (stringStorageToRelease4);
    stringStorageToRelease5 = (void*)(opaqueValue21 - 16);
    if ((void*)(opaqueValue21 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease5) == -1)
        memoryFree (stringStorageToRelease5);
    if ((int)sub_1800B2540 (opaqueValue3, 64) >= 0 && (int)sub_1800B2540 (opaqueValue3, 58) < 0)
    {
        juceStringConstructFromUtf8 (&messageString19, "mailto:");
        if (*messageString19 != 0)
        {
            opaqueValue7 = -1;
            do
                ++opaqueValue7;
            while (*(std::uint8_t*)(opaqueValue3 + opaqueValue7) != 0);
            juceStringAppendUtf8Range (&messageString19, opaqueValue3, opaqueValue7 + opaqueValue3);
        }
        else
        {
            if ((void*)(opaqueValue3 - 16) != &emptyJuceStringStorage)
                _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue3 - 16));
            stringStorageToRelease6 = (void*)(_InterlockedExchange64 ((volatile std::int64_t*)&messageString19, opaqueValue3) - 16);
            if (stringStorageToRelease6 != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease6) == -1)
                memoryFree (stringStorageToRelease6);
        }
        temporaryPointer8 = messageString19;
        temporaryPointer9 = messageString19;
        if (messageString19 - 16 != (char*)&emptyJuceStringStorage)
        {
            _InterlockedIncrement ((volatile std::int32_t*)messageString19 - 4);
            temporaryPointer8 = messageString19;
        }
        stringStorageToRelease10 = temporaryPointer8 - 16;
        if (temporaryPointer8 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease10) == -1)
            memoryFree (stringStorageToRelease10);
        temporaryPointer20 = (char**)temporaryPointer9;
        stringStorageToRelease11 = (void*)(opaqueValue3 - 16);
        if ((void*)(opaqueValue3 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease11) == -1)
            memoryFree (stringStorageToRelease11);
    }
    messageString19 = &emptyJuceStringCharacters;
    temporaryPointer12 = *(const WCHAR**)juceStringGetUtf16View (&opaqueValue21, &messageString19);
    utf16Characters13 = (LPCWSTR*)juceStringGetUtf16View (stackStorage18, &temporaryPointer20);
    opaqueValue14 = (std::uint64_t)ShellExecuteW (nullptr, nullptr, *utf16Characters13, temporaryPointer12, nullptr, 10) > 0x20;
    stringStorageToRelease15 = messageString19 - 16;
    if (messageString19 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease15) == -1)
        memoryFree (stringStorageToRelease15);
    temporaryPointer16 = temporaryPointer20 - 2;
    if (temporaryPointer20 - 2 != (char**)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)temporaryPointer16) == -1)
        memoryFree (temporaryPointer16);
    return opaqueValue14;
}
