#include <cstdint>

// ===== sub_1807FB840_deadlineWriter @ 0x1807fb840 size=944 =====
char** standaloneCloudSubmitTask (std::int64_t cloudSession, char** outputError, std::uint8_t** taskRequest)
{
    const char* temporaryPointer6; // rdx
    char* temporaryPointer7; // rcx
    std::int64_t opaqueValue8; // rbx
    ULONGLONG TickCount64; // rcx
    std::int64_t opaqueValue10; // rax
    std::int64_t opaqueValue11; // rbx
    std::int64_t opaqueValue12; // rdi
    std::int64_t opaqueValue13; // rdx
    char** temporaryPointer14; // rax
    char opaqueValue15; // si
    char* temporaryPointer16; // rcx
    char opaqueValue17; // si
    char** temporaryPointer18; // rcx
    char* stringStorageToRelease19; // rcx
    char* stringStorageToRelease20; // rcx
    std::int64_t opaqueValue21; // rax
    std::int64_t opaqueValue22; // rax
    volatile std::int32_t* temporaryPointer23; // rcx
    std::int64_t opaqueValue24; // rax
    std::int64_t opaqueValue25; // r9
    int opaqueValue26; // edx
    int opaqueValue27; // r8d
    char* stringStorageToRelease28; // rcx
    void* stringStorageToRelease29; // rcx
    char* cLOUD_TASK_LIMITString31; // [rsp+20h] [rbp-E0h] BYREF
    char* reusableString32; // [rsp+28h] [rbp-D8h] BYREF
    volatile std::int32_t* temporaryPointer33; // [rsp+30h] [rbp-D0h] BYREF
    int opaqueValue34; // [rsp+38h] [rbp-C8h]
    char** temporaryPointer35; // [rsp+40h] [rbp-C0h] BYREF
    std::uint16_t opaqueValue36; // [rsp+48h] [rbp-B8h]
    std::uint8_t stackStorage37[320]; // [rsp+50h] [rbp-B0h] BYREF

    temporaryPointer35 = outputError;
    opaqueValue34 = 0;
    clockReadUnixTimeParts (&temporaryPointer35);
    if (*(std::uint64_t*)(cloudSession + 56) <= opaqueValue36 + 1000 * (std::int64_t)temporaryPointer35)
    {
        temporaryPointer6 = "CLOUD_PERMISSION_EXPIRED";
    label3:
        juceStringConstructFromUtf8 (&cLOUD_TASK_LIMITString31, temporaryPointer6);
        juceStringAssign (outputError, &cLOUD_TASK_LIMITString31);
        temporaryPointer7 = cLOUD_TASK_LIMITString31;
        goto label47;
    }
    opaqueValue8 = *(std::uint64_t*)(cloudSession + 40);
    TickCount64 = GetTickCount64();
    if (TickCount64 >= 0x7FFFFFFFFFFFFFFFLL)
        TickCount64 = 0x7FFFFFFFFFFFFFFFLL;
    opaqueValue10 = *(std::uint64_t*)(opaqueValue8 + 475712);
    if (opaqueValue10 != 0x7FFFFFFFFFFFFFFFLL && (opaqueValue10 <= 0 || (std::int64_t)TickCount64 >= opaqueValue10))
    {
        temporaryPointer6 = "ENTITLEMENT_DENIED";
        goto label3;
    }
    opaqueValue11 = *(std::uint64_t*)(*(std::uint64_t*)(cloudSession + 40) + 475552LL);
    opaqueValue12 = *(std::uint64_t*)(opaqueValue11 + 40);
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue12 + 1168));
    authManagerSnapshotState ((std::int64_t)stackStorage37, *(std::uint64_t*)(opaqueValue11 + 40));
    LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue12 + 1168));
    LOBYTE (opaqueValue11) = stackStorage37[225];
    sub_180058EA0 (stackStorage37);
    if ((std::uint8_t)opaqueValue11 != 0)
    {
        temporaryPointer6 = "ALT_DELIVERY_UNSUPPORTED";
        goto label3;
    }
    if (**taskRequest != 0)
    {
        if (**(std::uint8_t**)(cloudSession + 64) != 0)
        {
            juceStringConstructFromUtf8 (&cLOUD_TASK_LIMITString31, "CLOUD_TASK_LIMIT");
            temporaryPointer14 = (char**)juceStringAssign (&temporaryPointer35, &cLOUD_TASK_LIMITString31);
            opaqueValue15 = 12;
            temporaryPointer16 = *temporaryPointer14;
        }
        else
        {
            reusableString32 = &emptyJuceStringCharacters;
            temporaryPointer14 = &reusableString32;
            opaqueValue15 = 2;
            temporaryPointer16 = &emptyJuceStringCharacters;
        }
        *outputError = temporaryPointer16;
        *temporaryPointer14 = &emptyJuceStringCharacters;
        opaqueValue17 = opaqueValue15 | 1;
        if ((opaqueValue17 & 8) != 0)
        {
            opaqueValue17 &= ~8u;
            temporaryPointer18 = temporaryPointer35 - 2;
            if (temporaryPointer35 - 2 != (char**)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)temporaryPointer18) == -1)
                memoryFree (temporaryPointer18);
        }
        if ((opaqueValue17 & 4) != 0)
        {
            opaqueValue17 &= ~4u;
            stringStorageToRelease19 = cLOUD_TASK_LIMITString31 - 16;
            if (cLOUD_TASK_LIMITString31 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease19) == -1)
                memoryFree (stringStorageToRelease19);
        }
        if ((opaqueValue17 & 2) != 0)
        {
            stringStorageToRelease20 = reusableString32 - 16;
            if (reusableString32 - 16 != (char*)&emptyJuceStringStorage)
                goto label48;
        }
    }
    else
    {
        LOBYTE (opaqueValue13) = 1;
        if ((std::uint8_t)sub_18029DB50 (taskRequest, opaqueValue13) == 0 || (opaqueValue21 = sub_1800A3E20 (taskRequest, "maxMicroYuan"),
                                                                              (*(std::int64_t (**) (std::int64_t)) (*(std::uint64_t*)opaqueValue21 + 24LL)) (opaqueValue21 + 8) > 32000000))
        {
            juceStringConstructFromUtf8 (&reusableString32, "CLOUD_BUDGET_UNSUPPORTED");
            juceStringAssign (outputError, &reusableString32);
            temporaryPointer7 = reusableString32;
        label47:
            stringStorageToRelease20 = temporaryPointer7 - 16;
            if (stringStorageToRelease20 == (char*)&emptyJuceStringStorage)
                return outputError;
            goto label48;
        }
        opaqueValue22 = sub_1800A3E20 (taskRequest, "taskId");
        (*(void (**) (volatile std::int32_t**, std::int64_t)) (*(std::uint64_t*)opaqueValue22 + 40LL)) (&temporaryPointer33, opaqueValue22 + 8);
        temporaryPointer23 = *(volatile std::int32_t**)(cloudSession + 64);
        opaqueValue24 = (std::int64_t)temporaryPointer33;
        if (*(std::uint8_t*)temporaryPointer23 == 0 || temporaryPointer23 == temporaryPointer33)
            goto label40;
        opaqueValue25 = (char*)temporaryPointer33 - (char*)temporaryPointer23;
        do
        {
            opaqueValue26 = *((std::uint8_t*)temporaryPointer23 + opaqueValue25);
            opaqueValue27 = *(std::uint8_t*)temporaryPointer23 - opaqueValue26;
            if (opaqueValue27 != 0)
                break;
            temporaryPointer23 = (volatile std::int32_t*)((char*)temporaryPointer23 + 1);
        } while (opaqueValue26 != 0);
        if (opaqueValue27 != 0)
        {
            juceStringConstructFromUtf8 (&reusableString32, "CLOUD_TASK_LIMIT");
            juceStringAssign (outputError, &reusableString32);
            stringStorageToRelease28 = reusableString32 - 16;
            if (reusableString32 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease28) == -1)
                memoryFree (stringStorageToRelease28);
        }
        else
        {
        label40:
            if (temporaryPointer33 - 4 != (volatile std::int32_t*)&emptyJuceStringStorage)
            {
                _InterlockedIncrement (temporaryPointer33 - 4);
                opaqueValue24 = (std::int64_t)temporaryPointer33;
            }
            stringStorageToRelease29 = (void*)(_InterlockedExchange64 ((volatile std::int64_t*)(cloudSession + 64), opaqueValue24) - 16);
            if (stringStorageToRelease29 != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease29) == -1)
                memoryFree (stringStorageToRelease29);
            *outputError = &emptyJuceStringCharacters;
        }
        stringStorageToRelease20 = (char*)(temporaryPointer33 - 4);
        if (temporaryPointer33 - 4 != (volatile std::int32_t*)&emptyJuceStringStorage)
        {
        label48:
            if (_InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease20) == -1)
                memoryFree (stringStorageToRelease20);
        }
    }
    return outputError;
}

// ===== sub_18081B670_deadlineWriter @ 0x18081b670 size=926 =====
std::int64_t standaloneCloudRequireProjectSession (std::int64_t cliHost, char verifyEntitlement)
{
    WCHAR* allocatedBuffer4; // rsi
    const char* temporaryPointer5; // rbx
    LPCWSTR* utf16Characters6; // rax
    DWORD EnvironmentVariableW; // eax
    DWORD opaqueValue8; // r14d
    LPCWSTR* utf16Characters9; // rax
    DWORD opaqueValue10; // eax
    LPCWSTR* utf16Characters11; // rax
    DWORD FileAttributesW; // eax
    LPCWSTR* utf16Characters13; // rax
    DWORD opaqueValue14; // eax
    char* stringStorageToRelease15; // rcx
    void* stringStorageToRelease16; // rcx
    std::int64_t processor17; // rax
    std::int64_t opaqueValue18; // rsi
    ULONGLONG TickCount64; // rax
    std::int64_t opaqueValue20; // rcx
    std::int64_t opaqueValue21; // rax
    std::int64_t opaqueValue22; // rcx
    std::int64_t opaqueValue23; // rdx
    std::int64_t opaqueValue24; // rdi
    char* stringStorageToRelease25; // rcx
    std::int64_t opaqueValue27; // rax
    std::int64_t opaqueValue28; // rax
    std::int64_t opaqueValue29; // rax
    std::int64_t opaqueValue30; // rax
    std::int64_t opaqueValue31; // rax
    std::int64_t opaqueValue32; // rax
    char* temporaryPointer33; // [rsp+20h] [rbp-40h] BYREF
    WCHAR* temporaryPointer34; // [rsp+28h] [rbp-38h] BYREF
    int opaqueValue35; // [rsp+30h] [rbp-30h]
    const char* temporaryPointer36; // [rsp+38h] [rbp-28h] BYREF
    std::int64_t fADMODEL1_SHARED_STORAGE_ROOTString37; // [rsp+40h] [rbp-20h] BYREF
    char* allocatedObject38; // [rsp+48h] [rbp-18h] BYREF
    std::uint16_t opaqueValue39; // [rsp+50h] [rbp-10h]

    allocatedBuffer4 = nullptr;
    opaqueValue35 = 0;
    if (*(std::uint8_t*)(cliHost + 72) == 0)
    {
        opaqueValue29 = sub_1800971D0 (&temporaryPointer33, "PROJECT_REQUIRED");
        sub_1807FBD40 (opaqueValue29, 3);
    }
    if (verifyEntitlement != 0)
    {
        clockReadUnixTimeParts (&allocatedObject38);
        if (*(std::uint64_t*)(cliHost + 160) <= opaqueValue39 + 1000 * (std::int64_t)allocatedObject38)
        {
            opaqueValue30 = sub_1800971D0 (&temporaryPointer33, "CLOUD_PERMISSION_REQUIRED");
            sub_1807FBD40 (opaqueValue30, 3);
        }
        if (*(std::uint64_t*)(cliHost + 168) != 32000000)
        {
            opaqueValue31 = sub_1800971D0 (&temporaryPointer33, "CLOUD_BUDGET_UNSUPPORTED");
            sub_1807FBD40 (opaqueValue31, 4);
        }
        if (*(std::uint64_t*)(cliHost + 240) == 0)
        {
            opaqueValue32 = sub_1800971D0 (&temporaryPointer33, "APPROVAL_REQUIRED");
            sub_1807FBD40 (opaqueValue32, 3);
        }
    }
    sub_18008D3A0 (cliHost + 24, &temporaryPointer36, ".fad-alt-runtime");
    temporaryPointer5 = &emptyJuceStringCharacters;
    allocatedObject38 = &emptyJuceStringCharacters;
    juceStringConstructFromUtf8 (&fADMODEL1_SHARED_STORAGE_ROOTString37, "FADMODEL1_SHARED_STORAGE_ROOT");
    opaqueValue35 = 3;
    utf16Characters6 = (LPCWSTR*)juceStringGetUtf16View (&temporaryPointer34, &fADMODEL1_SHARED_STORAGE_ROOTString37);
    EnvironmentVariableW = GetEnvironmentVariableW (*utf16Characters6, nullptr, 0);
    opaqueValue8 = EnvironmentVariableW;
    if (EnvironmentVariableW != 0)
    {
        if (2LL * EnvironmentVariableW != 0)
            allocatedBuffer4 = (WCHAR*)memoryAllocateBuffer (2LL * EnvironmentVariableW);
        temporaryPointer34 = allocatedBuffer4;
        utf16Characters9 = (LPCWSTR*)juceStringGetUtf16View (&temporaryPointer33, &fADMODEL1_SHARED_STORAGE_ROOTString37);
        opaqueValue10 = GetEnvironmentVariableW (*utf16Characters9, allocatedBuffer4, opaqueValue8);
        juceStringConstructFromUtf16Span (&temporaryPointer33, allocatedBuffer4, &allocatedBuffer4[opaqueValue10]);
        memoryFreeBuffer (allocatedBuffer4);
        temporaryPointer5 = temporaryPointer33;
    }
    else
    {
        temporaryPointer33 = &emptyJuceStringCharacters;
    }
    opaqueValue35 = 15;
    if (temporaryPointer5 != temporaryPointer36 && strcmp (temporaryPointer5, temporaryPointer36) != 0 || (utf16Characters11 = (LPCWSTR*)juceStringGetUtf16View (&temporaryPointer34, &temporaryPointer36), ((FileAttributesW = GetFileAttributesW (*utf16Characters11)) & 0x10) == 0) || FileAttributesW == -1 || (utf16Characters13 = (LPCWSTR*)juceStringGetUtf16View (&temporaryPointer34, &temporaryPointer36), (opaqueValue14 = GetFileAttributesW (*utf16Characters13)) != -1) && (opaqueValue14 & 0x400) != 0)
    {
        opaqueValue28 = sub_1800971D0 (&temporaryPointer34, "CLOUD_RECOVERY_STORAGE_REQUIRED");
        sub_1807FBD40 (opaqueValue28, 3);
    }
    stringStorageToRelease15 = (char*)(temporaryPointer5 - 16);
    if (temporaryPointer5 - 16 != (const char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease15) == -1)
        memoryFree (stringStorageToRelease15);
    stringStorageToRelease16 = (void*)(fADMODEL1_SHARED_STORAGE_ROOTString37 - 16);
    if ((void*)(fADMODEL1_SHARED_STORAGE_ROOTString37 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease16) == -1)
        memoryFree (stringStorageToRelease16);
    processor17 = cliHostGetProcessor (cliHost);
    opaqueValue18 = processor17;
    if (verifyEntitlement != 0)
    {
        authManagerWaitForInitialVerification (*(std::uint64_t*)(processor17 + 475552));
        TickCount64 = GetTickCount64();
        if (TickCount64 >= 0x7FFFFFFFFFFFFFFFLL)
            TickCount64 = 0x7FFFFFFFFFFFFFFFLL;
        opaqueValue20 = *(std::uint64_t*)(opaqueValue18 + 475712);
        if (opaqueValue20 != 0x7FFFFFFFFFFFFFFFLL && (opaqueValue20 <= 0 || (std::int64_t)TickCount64 >= opaqueValue20))
        {
            opaqueValue27 = sub_1800971D0 (&temporaryPointer33, "ENTITLEMENT_DENIED");
            sub_1807FBD40 (opaqueValue27, 3);
        }
    }
    if (*(std::uint64_t*)(cliHost + 144) == 0)
    {
        allocatedObject38 = (char*)memoryAllocateObject (72);
        opaqueValue21 = standaloneCloudCreateProjectSession (allocatedObject38, opaqueValue18, *(std::uint64_t*)(cliHost + 160));
        opaqueValue23 = *(std::uint64_t*)(cliHost + 144);
        *(std::uint64_t*)(cliHost + 144) = opaqueValue21;
        if (opaqueValue23 != 0)
            sub_180827280 (opaqueValue22);
    }
    opaqueValue24 = *(std::uint64_t*)(*(std::uint64_t*)(cliHost + 144) + 48LL);
    stringStorageToRelease25 = (char*)(temporaryPointer36 - 16);
    if (temporaryPointer36 - 16 != (const char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease25) == -1)
        memoryFree (stringStorageToRelease25);
    return opaqueValue24;
}
