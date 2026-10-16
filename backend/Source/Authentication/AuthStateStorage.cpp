#include <cstdint>

// ===== AuthMod_OpenProcessToken_caller @ 0x1807ef590 size=1477 =====
std::int64_t* authStorageOpenCredentialStore (std::int64_t* outputStore, std::int64_t applicationId, std::int64_t storageOptions)
{
    std::int64_t* opaqueValue4; // rdi
    char* temporaryPointer5; // rbx
    HANDLE CurrentProcess; // rax
    HANDLE opaqueValue7; // rsi
    DWORD opaqueValue8; // r9d
    std::int64_t opaqueValue9; // r14
    char* temporaryPointer10; // r13
    std::int64_t allocatedObject11; // rax
    PSID* allocatedObject12; // r12
    PSID* temporaryPointer13; // rax
    PSID* temporaryPointer14; // rax
    LPWSTR opaqueValue15; // r14
    std::int64_t opaqueValue16; // rbx
    LPWSTR opaqueValue17; // rax
    unsigned int opaqueValue18; // edx
    std::uint16_t* temporaryPointer19; // r8
    std::int64_t opaqueValue20; // rcx
    std::int64_t opaqueValue21; // rcx
    std::uint64_t opaqueValue22; // rbx
    std::int64_t opaqueValue23; // rax
    std::int64_t* prefixedString24; // rdi
    void* stringStorageToRelease25; // rdx
    char* temporaryPointer26; // rdi
    void* stringStorageToRelease27; // rdx
    char* stringStorageToRelease28; // rbx
    PSID* temporaryPointer29; // rax
    char* temporaryPointer30; // rbx
    void* stringStorageToRelease31; // rcx
    LPCWSTR* utf16Characters32; // rax
    HANDLE MutexW; // rax
    void* temporaryPointer34; // rbx
    std::int64_t allocatedObject35; // r14
    std::int64_t opaqueValue36; // rdx
    char* stringStorageToRelease37; // rcx
    std::int64_t opaqueValue39; // [rsp+30h] [rbp-89h] BYREF
    char* temporaryPointer40; // [rsp+38h] [rbp-81h] BYREF
    HANDLE TokenHandle; // [rsp+40h] [rbp-79h] BYREF
    char stackStorage42[8]; // [rsp+48h] [rbp-71h] BYREF
    LPWSTR StringSid; // [rsp+50h] [rbp-69h] BYREF
    std::int64_t* p_TokenInformationLength; // [rsp+58h] [rbp-61h]
    __int128 opaqueValue45; // [rsp+68h] [rbp-51h]
    char* temporaryPointer46; // [rsp+78h] [rbp-41h]
    std::uint64_t stackStorage47[7]; // [rsp+80h] [rbp-39h] BYREF
    std::uint64_t* temporaryPointer48; // [rsp+B8h] [rbp-1h]
    HANDLE opaqueValue49; // [rsp+C0h] [rbp+7h]
    LPWSTR opaqueValue50; // [rsp+C8h] [rbp+Fh]
    std::int64_t TokenInformationLength; // [rsp+130h] [rbp+77h] BYREF
    char* temporaryPointer54; // [rsp+138h] [rbp+7Fh] BYREF

    TokenInformationLength = storageOptions;
    opaqueValue4 = outputStore;
    if ((std::uint8_t)sub_1807EBA40 (applicationId) == 0)
    {
        *opaqueValue4 = 0;
        return opaqueValue4;
    }
    temporaryPointer5 = &emptyJuceStringCharacters;
    temporaryPointer54 = &emptyJuceStringCharacters;
    if ((std::uint8_t)juceStringStartsWithUtf8 (applicationId, "cred3.") != 0)
    {
        TokenHandle = nullptr;
        CurrentProcess = GetCurrentProcess();
        if (!OpenProcessToken (CurrentProcess, 8u, &TokenHandle))
        {
            *opaqueValue4 = 0;
            return opaqueValue4;
        }
        opaqueValue7 = TokenHandle;
        opaqueValue49 = TokenHandle;
        LODWORD (TokenInformationLength) = 0;
        GetTokenInformation (TokenHandle, TokenUser, nullptr, 0, (PDWORD)&TokenInformationLength);
        opaqueValue8 = TokenInformationLength;
        if ((unsigned int)(TokenInformationLength - 1) > 0xFFFF)
        {
            *opaqueValue4 = 0;
            CloseHandle (opaqueValue7);
            return opaqueValue4;
        }
        opaqueValue9 = (unsigned int)TokenInformationLength;
        opaqueValue45 = 0;
        temporaryPointer10 = nullptr;
        temporaryPointer46 = nullptr;
        if ((std::uint32_t)TokenInformationLength != 0)
        {
            if ((unsigned int)TokenInformationLength < 0x1000uLL)
            {
                allocatedObject12 = (PSID*)memoryAllocateObject ((unsigned int)TokenInformationLength);
            }
            else
            {
                if ((std::uint64_t)(unsigned int)TokenInformationLength + 39 < (unsigned int)TokenInformationLength)
                    Concurrency::cancel_current_task();
                allocatedObject11 = memoryAllocateObject ((unsigned int)TokenInformationLength + 39LL);
                if (allocatedObject11 == 0)
                    goto label74;
                allocatedObject12 = (PSID*)((allocatedObject11 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
                *(allocatedObject12 - 1) = (PSID)allocatedObject11;
            }
            *(std::uint64_t*)&opaqueValue45 = allocatedObject12;
            temporaryPointer10 = (char*)allocatedObject12 + opaqueValue9;
            temporaryPointer46 = (char*)allocatedObject12 + opaqueValue9;
            memoryFillBytes (allocatedObject12, 0, opaqueValue9);
            *((std::uint64_t*)&opaqueValue45 + 1) = (char*)allocatedObject12 + opaqueValue9;
            opaqueValue8 = TokenInformationLength;
        }
        else
        {
            allocatedObject12 = (PSID*)opaqueValue45;
        }
        if (!GetTokenInformation (TokenHandle, TokenUser, allocatedObject12, opaqueValue8, (PDWORD)&TokenInformationLength))
        {
            *opaqueValue4 = 0;
            if (allocatedObject12 == nullptr)
            {
            label20:
                CloseHandle (opaqueValue7);
                return opaqueValue4;
            }
            temporaryPointer13 = allocatedObject12;
            if ((std::uint64_t)(temporaryPointer10 - (char*)allocatedObject12) < 0x1000 || (allocatedObject12 = (PSID*)*(allocatedObject12 - 1), (std::uint64_t)((char*)temporaryPointer13 - (char*)allocatedObject12 - 8) <= 0x1F))
            {
                memoryFree (allocatedObject12);
                goto label20;
            }
        label74:
            sub_1809AEBB8 (0, 0, 0, 0, 0);
            __debugbreak();
        }
        StringSid = nullptr;
        if (!ConvertSidToStringSidW (*allocatedObject12, &StringSid))
        {
            *opaqueValue4 = 0;
            temporaryPointer14 = allocatedObject12;
            if ((std::uint64_t)(temporaryPointer10 - (char*)allocatedObject12) < 0x1000 || (allocatedObject12 = (PSID*)*(allocatedObject12 - 1), (std::uint64_t)((char*)temporaryPointer14 - (char*)allocatedObject12 - 8) <= 0x1F))
            {
                memoryFree (allocatedObject12);
                CloseHandle (opaqueValue7);
                return opaqueValue4;
            }
            goto label74;
        }
        opaqueValue15 = StringSid;
        opaqueValue50 = StringSid;
        if (StringSid != nullptr && *StringSid != 0)
        {
            opaqueValue16 = 0;
            opaqueValue17 = StringSid;
            while (1)
            {
                opaqueValue18 = *opaqueValue17;
                temporaryPointer19 = opaqueValue17 + 1;
                if (opaqueValue18 - 55296 > 0x3FF)
                    goto label32;
                if ((unsigned int)*temporaryPointer19 - 56320 <= 0x3FF)
                    opaqueValue18 = (((opaqueValue18 - 55296) << 10) | (*temporaryPointer19 - 56320)) + 0x10000;
                opaqueValue20 = 4;
                if ((unsigned int)*temporaryPointer19 - 56320 > 0x3FF)
                label32:
                    opaqueValue20 = 2;
                opaqueValue17 = (LPWSTR)((char*)opaqueValue17 + opaqueValue20);
                if (opaqueValue18 == 0)
                    break;
                opaqueValue21 = 1;
                if (opaqueValue18 >= 0x80)
                {
                    opaqueValue21 = 2;
                    if (opaqueValue18 >= 0x800)
                    {
                        opaqueValue21 = 3;
                        if (opaqueValue18 >= 0x10000)
                            opaqueValue21 = 4;
                    }
                }
                opaqueValue16 += opaqueValue21;
            }
            opaqueValue22 = (opaqueValue16 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
            opaqueValue23 = sub_1809A1734 (opaqueValue22 + 23);
            _InterlockedExchange ((volatile std::int32_t*)opaqueValue23, 0);
            *(std::uint64_t*)(opaqueValue23 + 8) = opaqueValue22;
            temporaryPointer5 = (char*)(opaqueValue23 + 16);
            temporaryPointer40 = (char*)(opaqueValue23 + 16);
            sub_1800B7B20 (&temporaryPointer40, opaqueValue15);
        }
        temporaryPointer40 = temporaryPointer5;
        prefixedString24 = (std::int64_t*)juceStringJoinUtf8Prefix (stackStorage42, "Global\\FADModel1.", &temporaryPointer40);
        p_TokenInformationLength = prefixedString24;
        juceStringAppendUtf8Range (prefixedString24, ".", "");
        opaqueValue39 = *prefixedString24;
        if ((void*)(opaqueValue39 - 16) != &emptyJuceStringStorage)
            _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue39 - 16));
        stringStorageToRelease25 = (void*)(*prefixedString24 - 16);
        if (stringStorageToRelease25 != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease25) == -1)
            memoryFree (stringStorageToRelease25);
        p_TokenInformationLength = &opaqueValue39;
        temporaryPointer26 = *(char**)juceStringAppendString (&opaqueValue39, applicationId);
        if (temporaryPointer26 - 16 != (char*)&emptyJuceStringStorage)
            _InterlockedIncrement ((volatile std::int32_t*)temporaryPointer26 - 4);
        stringStorageToRelease27 = (void*)(opaqueValue39 - 16);
        if ((void*)(opaqueValue39 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease27) == -1)
            memoryFree (stringStorageToRelease27);
        temporaryPointer54 = temporaryPointer26;
        stringStorageToRelease28 = temporaryPointer5 - 16;
        if (stringStorageToRelease28 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease28) == -1)
            memoryFree (stringStorageToRelease28);
        LocalFree (opaqueValue15);
        temporaryPointer29 = allocatedObject12;
        if ((std::uint64_t)(temporaryPointer10 - (char*)allocatedObject12) >= 0x1000)
        {
            allocatedObject12 = (PSID*)*(allocatedObject12 - 1);
            if ((std::uint64_t)((char*)temporaryPointer29 - (char*)allocatedObject12 - 8) > 0x1F)
                goto label74;
        }
        memoryFree (allocatedObject12);
        CloseHandle (opaqueValue7);
        opaqueValue4 = outputStore;
    }
    else
    {
        juceStringConstructFromUtf8 (&TokenInformationLength, "Local\\FADModel1.");
        p_TokenInformationLength = &TokenInformationLength;
        temporaryPointer30 = *(char**)juceStringAppendString (&TokenInformationLength, applicationId);
        if (temporaryPointer30 - 16 != (char*)&emptyJuceStringStorage)
            _InterlockedIncrement ((volatile std::int32_t*)temporaryPointer30 - 4);
        stringStorageToRelease31 = (void*)(TokenInformationLength - 16);
        if ((void*)(TokenInformationLength - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease31) == -1)
        {
            memoryFree (stringStorageToRelease31);
        }
        temporaryPointer54 = temporaryPointer30;
    }
    utf16Characters32 = (LPCWSTR*)juceStringGetUtf16View (&TokenInformationLength, &temporaryPointer54);
    MutexW = CreateMutexW (nullptr, false, *utf16Characters32);
    temporaryPointer34 = MutexW;
    if (MutexW != nullptr)
    {
        if ((WaitForSingleObject (MutexW, 0) & 0xFFFFFF7F) != 0)
        {
            CloseHandle (temporaryPointer34);
            *opaqueValue4 = 0;
        }
        else
        {
            allocatedObject35 = memoryAllocateObject (64);
            TokenInformationLength = allocatedObject35;
            stackStorage47[0] = ___7___Func_impl_no_alloc_V_lambda_3___1__tryAcquireInterprocessLock_PlatformKeyStore_ai_fadmodel1__SA_AV__unique_ptr_VInterprocessLock_PlatformKeyStore_ai_fadmodel1__U__default_delete_VInterprocessLock_PlatformKeyStore_ai_fadmodel1___std___std__AEBVString_juce__0_Z_X__V_std__6B_;
            stackStorage47[1] = temporaryPointer34;
            temporaryPointer48 = stackStorage47;
            *(std::uint64_t*)(allocatedObject35 + 56) = 0;
            sub_180080DB0 (allocatedObject35, stackStorage47);
            if (temporaryPointer48 != nullptr)
            {
                LOBYTE (opaqueValue36) = temporaryPointer48 != stackStorage47;
                (*(void (**) (std::uint64_t*, std::int64_t)) (*temporaryPointer48 + 32LL)) (temporaryPointer48, opaqueValue36);
                temporaryPointer48 = nullptr;
            }
            *opaqueValue4 = allocatedObject35;
        }
    }
    else
    {
        *opaqueValue4 = 0;
    }
    stringStorageToRelease37 = temporaryPointer54 - 16;
    if (temporaryPointer54 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease37) == -1)
        memoryFree (stringStorageToRelease37);
    return opaqueValue4;
}

// ===== AuthStore_WriteOnboardingCompletedWrapper @ 0x18035cef0 size=290 =====
std::int64_t authStorageReadSecureRecord (std::int64_t outputRecord)
{
    std::int64_t opaqueValue2; // r9
    std::int64_t opaqueValue3; // r8
    std::int64_t opaqueValue4; // r9
    std::int64_t opaqueValue5; // rax
    std::int64_t opaqueValue6; // rdx
    void* stringStorageToRelease7; // rcx
    void* stringStorageToRelease8; // rcx
    int opaqueValue9; // eax
    std::uint8_t stackStorage11[8]; // [rsp+20h] [rbp-48h] BYREF
    std::int64_t opaqueValue12; // [rsp+28h] [rbp-40h]
    std::int64_t auth_stateString13; // [rsp+80h] [rbp+18h] BYREF
    std::int64_t opaqueValue14; // [rsp+88h] [rbp+20h]

    *(std::uint16_t*)outputRecord = 0;
    *(std::uint8_t*)(outputRecord + 2) = 0;
    *(std::uint32_t*)(outputRecord + 8) = 2;
    *(std::uint64_t*)(outputRecord + 16) = &emptyJuceStringCharacters;
    *(std::uint64_t*)(outputRecord + 24) = 0;
    sub_1803552A0 (outputRecord + 32);
    opaqueValue14 = opaqueValue2;
    juceStringConstructFromUtf8 (&auth_stateString13, "auth_state");
    opaqueValue5 = sub_1807EECF0 (stackStorage11, &auth_stateString13, opaqueValue3, opaqueValue4);
    *(std::uint32_t*)(outputRecord + 8) = *(std::uint32_t*)opaqueValue5;
    opaqueValue6 = *(std::uint64_t*)(outputRecord + 16);
    *(std::uint64_t*)(outputRecord + 16) = *(std::uint64_t*)(opaqueValue5 + 8);
    *(std::uint64_t*)(opaqueValue5 + 8) = opaqueValue6;
    *(std::uint32_t*)(outputRecord + 24) = *(std::uint32_t*)(opaqueValue5 + 16);
    *(std::uint32_t*)(outputRecord + 28) = *(std::uint32_t*)(opaqueValue5 + 20);
    stringStorageToRelease7 = (void*)(opaqueValue12 - 16);
    if ((void*)(opaqueValue12 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease7) == -1)
        memoryFree (stringStorageToRelease7);
    stringStorageToRelease8 = (void*)(auth_stateString13 - 16);
    if ((void*)(auth_stateString13 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease8) == -1)
        memoryFree (stringStorageToRelease8);
    if (*(std::uint32_t*)(outputRecord + 8) == 0)
    {
        opaqueValue9 = authStorageDeserializeState (outputRecord + 16, (const char*)(outputRecord + 32));
        *(std::uint8_t*)(outputRecord + 2) = opaqueValue9 == 0;
        *(std::uint8_t*)(outputRecord + 1) = opaqueValue9 == 3;
        *(std::uint8_t*)outputRecord = (unsigned int)(opaqueValue9 - 1) <= 1;
    }
    return outputRecord;
}
