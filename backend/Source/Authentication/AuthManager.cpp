#include <cstdint>

// ===== AuthManager_ApplyVerifiedState @ 0x1803635d0 size=2932 =====
std::int64_t authManagerLoadPersistentState (std::uint64_t* authManager, char persistentStorageEnabled)
{
    std::int64_t opaqueValue3; // rax
    char opaqueValue4; // r14
    bool conditionFlag5; // r12
    std::int64_t opaqueValue6; // rbx
    std::int64_t opaqueValue7; // r13
    char opaqueValue8; // r14
    void* stringStorageToRelease9; // rdx
    void* stringStorageToRelease10; // rcx
    std::int64_t opaqueValue11; // rax
    volatile std::int32_t* stringStorageToRelease12; // r15
    void* stringStorageToRelease13; // rcx
    std::int64_t opaqueValue14; // rax
    volatile std::int32_t* stringStorageToRelease15; // r14
    void* stringStorageToRelease16; // rcx
    struct _RTL_CRITICAL_SECTION* criticalSection17; // rbx
    std::int64_t opaqueValue18; // rcx
    std::uint64_t* temporaryPointer19; // rcx
    std::int64_t opaqueValue20; // rax
    std::int64_t opaqueValue21; // rcx
    bool conditionFlag22; // r13
    std::int64_t opaqueValue23; // r8
    std::int64_t opaqueValue24; // r9
    std::int64_t opaqueValue25; // rax
    char* temporaryPointer26; // rdx
    void* stringStorageToRelease27; // rcx
    void* stringStorageToRelease28; // rcx
    bool conditionFlag29; // r15
    int opaqueValue30; // eax
    struct _RTL_CRITICAL_SECTION* criticalSection31; // r14
    std::int64_t opaqueValue32; // rax
    void* stringStorageToRelease33; // rcx
    void* stringStorageToRelease34; // rcx
    std::int64_t* temporaryPointer35; // rsi
    std::int64_t opaqueValue36; // rdx
    std::int64_t opaqueValue37; // rcx
    std::int64_t* temporaryPointer38; // rax
    char* stringStorageToRelease39; // rcx
    char* stringStorageToRelease40; // rcx
    char* stringStorageToRelease41; // rcx
    char* stringStorageToRelease42; // rcx
    const char* temporaryPointer43; // rdx
    void* temporaryPointer44; // rdx
    std::int64_t opaqueValue45; // rax
    volatile std::int32_t* stringStorageToRelease46; // r15
    void* stringStorageToRelease47; // rcx
    std::int64_t opaqueValue48; // rax
    volatile std::int32_t* stringStorageToRelease49; // r14
    void* stringStorageToRelease50; // rcx
    std::int64_t opaqueValue51; // rax
    volatile std::int32_t* stringStorageToRelease52; // r15
    void* stringStorageToRelease53; // rcx
    std::int64_t opaqueValue54; // rax
    volatile std::int32_t* stringStorageToRelease55; // r14
    void* stringStorageToRelease56; // rcx
    char opaqueValue57; // dl
    char opaqueValue58; // r15
    char opaqueValue59; // r14
    char opaqueValue60; // r12
    std::int64_t unixTimeMs61; // rax
    char opaqueValue62; // cl
    char opaqueValue63; // al
    char opaqueValue64; // r15
    struct _RTL_CRITICAL_SECTION* criticalSection65; // r13
    std::int64_t opaqueValue66; // r15
    std::uint64_t* temporaryPointer67; // rcx
    std::int64_t opaqueValue68; // rax
    std::int64_t opaqueValue69; // r8
    bool conditionFlag70; // cl
    std::int64_t opaqueValue71; // rcx
    char* stringStorageToRelease72; // rcx
    std::int64_t opaqueValue73; // rsi
    std::int64_t result; // rax
    volatile std::int32_t* temporaryPointer75; // rbx
    bool conditionFlag76; // [rsp+20h] [rbp-E0h]
    bool conditionFlag77; // [rsp+21h] [rbp-DFh]
    bool conditionFlag78; // [rsp+22h] [rbp-DEh]
    std::int64_t reusableString79; // [rsp+28h] [rbp-D8h] BYREF
    char opaqueValue80; // [rsp+30h] [rbp-D0h]
    std::int64_t messageString81; // [rsp+38h] [rbp-C8h] BYREF
    char* temporaryPointer82; // [rsp+40h] [rbp-C0h] BYREF
    int opaqueValue83; // [rsp+48h] [rbp-B8h] BYREF
    char* temporaryPointer84; // [rsp+50h] [rbp-B0h] BYREF
    std::int64_t opaqueValue85; // [rsp+58h] [rbp-A8h]
    std::int64_t opaqueValue86; // [rsp+60h] [rbp-A0h] BYREF
    std::int64_t opaqueValue87; // [rsp+68h] [rbp-98h]
    std::int64_t opaqueValue88; // [rsp+70h] [rbp-90h]
    std::int64_t opaqueValue89; // [rsp+78h] [rbp-88h] BYREF
    std::int64_t opaqueValue90; // [rsp+80h] [rbp-80h]
    std::int64_t opaqueValue91; // [rsp+88h] [rbp-78h]
    std::uint64_t stackStorage92[3]; // [rsp+90h] [rbp-70h] BYREF
    std::int64_t opaqueValue93; // [rsp+A8h] [rbp-58h]
    std::int64_t opaqueValue94; // [rsp+B0h] [rbp-50h] BYREF
    volatile std::int32_t* temporaryPointer95; // [rsp+B8h] [rbp-48h]
    char* temporaryPointer96; // [rsp+C0h] [rbp-40h]
    char stackStorage97[24]; // [rsp+C8h] [rbp-38h] BYREF
    char stackStorage98[8]; // [rsp+E0h] [rbp-20h] BYREF
    char* temporaryPointer99; // [rsp+E8h] [rbp-18h]
    char* temporaryPointer100; // [rsp+F0h] [rbp-10h]
    char* temporaryPointer101; // [rsp+F8h] [rbp-8h]
    char* temporaryPointer102; // [rsp+100h] [rbp+0h]
    std::int64_t opaqueValue103; // [rsp+120h] [rbp+20h] BYREF
    std::int64_t opaqueValue104; // [rsp+128h] [rbp+28h] BYREF
    int opaqueValue105; // [rsp+130h] [rbp+30h]
    std::int64_t opaqueValue106; // [rsp+190h] [rbp+90h]
    char opaqueValue107; // [rsp+198h] [rbp+98h]
    char opaqueValue108; // [rsp+1C1h] [rbp+C1h]
    char opaqueValue109; // [rsp+208h] [rbp+108h]
    std::int64_t opaqueValue110; // [rsp+220h] [rbp+120h] BYREF
    std::int64_t opaqueValue111; // [rsp+228h] [rbp+128h]
    std::int64_t opaqueValue112; // [rsp+230h] [rbp+130h]
    std::int64_t opaqueValue113; // [rsp+238h] [rbp+138h]
    std::int64_t opaqueValue114; // [rsp+278h] [rbp+178h]
    std::int64_t opaqueValue115; // [rsp+280h] [rbp+180h]
    std::uint8_t stackStorage116[320]; // [rsp+290h] [rbp+190h] BYREF

    opaqueValue80 = persistentStorageEnabled;
    opaqueValue3 = authManager[1];
    if (opaqueValue3 != 0)
        _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue3 + 8));
    opaqueValue93 = *authManager;
    opaqueValue94 = opaqueValue93;
    temporaryPointer95 = (volatile std::int32_t*)authManager[1];
    sub_1803552A0 (stackStorage98);
    opaqueValue4 = sub_18035AD50();
    conditionFlag5 = opaqueValue4 != 0 || (std::uint8_t)sub_18034FDF0() != 0;
    opaqueValue6 = *authManager;
    EnterCriticalSection ((LPCRITICAL_SECTION)(*authManager + 1168LL));
    opaqueValue7 = *(std::uint64_t*)(*authManager + 1688LL);
    messageString81 = opaqueValue7;
    LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue6 + 1168));
    if ((std::uint8_t)sub_18035AE20() != 0)
    {
        if (opaqueValue4 == 0)
        {
            authCleanupLegacyMasFile();
            sub_180359310();
            temporaryPointer82 = &emptyJuceStringCharacters;
            juceStringConstructFromUtf8 (&reusableString79, "auth_state");
            opaqueValue8 = sub_1807EF040 (&reusableString79);
            stringStorageToRelease9 = (void*)(reusableString79 - 16);
            if ((void*)(reusableString79 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease9) == -1)
                memoryFree (stringStorageToRelease9);
            if (opaqueValue8 == 0)
            {
                juceStringConstructFromUtf8 (&messageString81, "AuthManager: failed to remove secure auth state while persistent storage is disabled");
                stringStorageToRelease10 = (void*)(messageString81 - 16);
                if ((void*)(messageString81 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease10) == -1)
                    memoryFree (stringStorageToRelease10);
            }
        }
        if (!conditionFlag5)
        {
            juceStringConstructFromUtf8 (&reusableString79, "FAD-AUTH-LEGACY-PLAINTEXT-DELETE-FAILED");
            sub_1800B3260 (&messageString81, &unk_180F76710);
            opaqueValue11 = messageString81;
            stringStorageToRelease12 = (volatile std::int32_t*)(messageString81 - 16);
            if ((void*)(messageString81 - 16) != &emptyJuceStringStorage)
                _InterlockedIncrement (stringStorageToRelease12);
            stringStorageToRelease13 = (void*)(_InterlockedExchange64 (&opaqueValue103, opaqueValue11) - 16);
            if (stringStorageToRelease13 != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease13) == -1)
                memoryFree (stringStorageToRelease13);
            opaqueValue14 = reusableString79;
            stringStorageToRelease15 = (volatile std::int32_t*)(reusableString79 - 16);
            if ((void*)(reusableString79 - 16) != &emptyJuceStringStorage)
                _InterlockedIncrement (stringStorageToRelease15);
            stringStorageToRelease16 = (void*)(_InterlockedExchange64 (&opaqueValue104, opaqueValue14) - 16);
            if (stringStorageToRelease16 != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease16) == -1)
                memoryFree (stringStorageToRelease16);
            opaqueValue105 = 0;
            if (stringStorageToRelease12 != (volatile std::int32_t*)&emptyJuceStringStorage && _InterlockedDecrement (stringStorageToRelease12) == -1)
                memoryFree ((LPVOID)stringStorageToRelease12);
            if (stringStorageToRelease15 != (volatile std::int32_t*)&emptyJuceStringStorage && _InterlockedDecrement (stringStorageToRelease15) == -1)
                memoryFree ((LPVOID)stringStorageToRelease15);
        }
        criticalSection17 = (struct _RTL_CRITICAL_SECTION*)(*authManager + 1168LL);
        temporaryPointer82 = (char*)criticalSection17;
        EnterCriticalSection (criticalSection17);
        if (opaqueValue7 == 0 && *(std::uint64_t*)(*authManager + 1688LL) == 0 && (std::uint8_t)sub_180351150 (*authManager) != 0)
        {
            sub_18035D830 (opaqueValue18, stackStorage98);
            temporaryPointer19 = (std::uint64_t*)*authManager;
            opaqueValue20 = ++temporaryPointer19[211];
            temporaryPointer19[39] = opaqueValue20;
            temporaryPointer19[212] = opaqueValue20;
        }
        opaqueValue21 = *authManager;
        if (*(std::uint8_t*)(*authManager + 224LL) != 0 && **(std::uint8_t**)(opaqueValue21 + 8) != 0 && **(std::uint8_t**)(opaqueValue21 + 24) != 0)
            sub_180366280 (opaqueValue21, 7);
        LeaveCriticalSection (criticalSection17);
        goto label189;
    }
    conditionFlag78 = false;
    conditionFlag76 = false;
    conditionFlag22 = false;
    conditionFlag77 = false;
    temporaryPointer96 = &emptyJuceStringCharacters;
    opaqueValue83 = 2;
    temporaryPointer84 = &emptyJuceStringCharacters;
    opaqueValue85 = 0;
    juceStringConstructFromUtf8 (&reusableString79, "auth_state");
    opaqueValue25 = sub_1807EECF0 (&opaqueValue89, &reusableString79, opaqueValue23, opaqueValue24);
    opaqueValue83 = *(std::uint32_t*)opaqueValue25;
    temporaryPointer26 = temporaryPointer84;
    temporaryPointer84 = *(char**)(opaqueValue25 + 8);
    *(std::uint64_t*)(opaqueValue25 + 8) = temporaryPointer26;
    opaqueValue85 = *(std::uint64_t*)(opaqueValue25 + 16);
    stringStorageToRelease27 = (void*)(opaqueValue90 - 16);
    if ((void*)(opaqueValue90 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease27) == -1)
        memoryFree (stringStorageToRelease27);
    stringStorageToRelease28 = (void*)(reusableString79 - 16);
    if ((void*)(reusableString79 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease28) == -1)
        memoryFree (stringStorageToRelease28);
    conditionFlag29 = opaqueValue83 == 2;
    if (opaqueValue83 == 0)
    {
        opaqueValue30 = authStorageDeserializeState (&temporaryPointer84, stackStorage98);
        conditionFlag78 = opaqueValue30 == 1;
        conditionFlag76 = opaqueValue30 == 3;
        conditionFlag22 = opaqueValue30 == 0;
        conditionFlag77 = opaqueValue30 == 0;
    }
    authCleanupLegacyMasFile();
    sub_180359310();
    if (!conditionFlag29 || opaqueValue108 != 0)
    {
        if ((conditionFlag76 || conditionFlag22) && opaqueValue108 == 0)
        {
            stackStorage98[0] = 0;
            stringStorageToRelease39 = temporaryPointer99 - 16;
            if (temporaryPointer99 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease39) == -1)
                memoryFree (stringStorageToRelease39);
            temporaryPointer99 = &emptyJuceStringCharacters;
            stringStorageToRelease40 = temporaryPointer100 - 16;
            if (temporaryPointer100 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease40) == -1)
                memoryFree (stringStorageToRelease40);
            temporaryPointer100 = &emptyJuceStringCharacters;
            stringStorageToRelease41 = temporaryPointer101 - 16;
            if (temporaryPointer101 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease41) == -1)
                memoryFree (stringStorageToRelease41);
            temporaryPointer101 = &emptyJuceStringCharacters;
            stringStorageToRelease42 = temporaryPointer102 - 16;
            if (temporaryPointer102 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease42) == -1)
                memoryFree (stringStorageToRelease42);
            temporaryPointer102 = &emptyJuceStringCharacters;
            temporaryPointer43 = "FAD-AUTH-STATE-SCHEMA";
            if (conditionFlag22)
                temporaryPointer43 = "FAD-AUTH-STATE-CORRUPT";
            juceStringConstructFromUtf8 (&temporaryPointer82, temporaryPointer43);
            temporaryPointer44 = &unk_180F76910;
            if (conditionFlag22)
                temporaryPointer44 = &unk_180F76A10;
            sub_1800B3260 (&reusableString79, temporaryPointer44);
            opaqueValue45 = reusableString79;
            stringStorageToRelease46 = (volatile std::int32_t*)(reusableString79 - 16);
            if ((void*)(reusableString79 - 16) != &emptyJuceStringStorage)
                _InterlockedIncrement (stringStorageToRelease46);
            stringStorageToRelease47 = (void*)(_InterlockedExchange64 (&opaqueValue103, opaqueValue45) - 16);
            if (stringStorageToRelease47 != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease47) == -1)
                memoryFree (stringStorageToRelease47);
            opaqueValue48 = (std::int64_t)temporaryPointer82;
            stringStorageToRelease49 = (volatile std::int32_t*)(temporaryPointer82 - 16);
            if (temporaryPointer82 - 16 != (char*)&emptyJuceStringStorage)
                _InterlockedIncrement (stringStorageToRelease49);
            stringStorageToRelease50 = (void*)(_InterlockedExchange64 (&opaqueValue104, opaqueValue48) - 16);
            if (stringStorageToRelease50 != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease50) == -1)
                memoryFree (stringStorageToRelease50);
            opaqueValue105 = 0;
            if (stringStorageToRelease46 != (volatile std::int32_t*)&emptyJuceStringStorage && _InterlockedDecrement (stringStorageToRelease46) == -1)
                memoryFree ((LPVOID)stringStorageToRelease46);
            if (stringStorageToRelease49 != (volatile std::int32_t*)&emptyJuceStringStorage && _InterlockedDecrement (stringStorageToRelease49) == -1)
                memoryFree ((LPVOID)stringStorageToRelease49);
        }
        if (!conditionFlag5)
        {
            juceStringConstructFromUtf8 (&reusableString79, "FAD-AUTH-LEGACY-PLAINTEXT-DELETE-FAILED");
            sub_1800B3260 (&temporaryPointer82, &unk_180F76710);
            opaqueValue51 = (std::int64_t)temporaryPointer82;
            stringStorageToRelease52 = (volatile std::int32_t*)(temporaryPointer82 - 16);
            if (temporaryPointer82 - 16 != (char*)&emptyJuceStringStorage)
                _InterlockedIncrement (stringStorageToRelease52);
            stringStorageToRelease53 = (void*)(_InterlockedExchange64 (&opaqueValue103, opaqueValue51) - 16);
            if (stringStorageToRelease53 != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease53) == -1)
                memoryFree (stringStorageToRelease53);
            opaqueValue54 = reusableString79;
            stringStorageToRelease55 = (volatile std::int32_t*)(reusableString79 - 16);
            if ((void*)(reusableString79 - 16) != &emptyJuceStringStorage)
                _InterlockedIncrement (stringStorageToRelease55);
            stringStorageToRelease56 = (void*)(_InterlockedExchange64 (&opaqueValue104, opaqueValue54) - 16);
            if (stringStorageToRelease56 != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease56) == -1)
                memoryFree (stringStorageToRelease56);
            opaqueValue105 = 0;
            if (stringStorageToRelease52 != (volatile std::int32_t*)&emptyJuceStringStorage && _InterlockedDecrement (stringStorageToRelease52) == -1)
                memoryFree ((LPVOID)stringStorageToRelease52);
            if (stringStorageToRelease55 != (volatile std::int32_t*)&emptyJuceStringStorage && _InterlockedDecrement (stringStorageToRelease55) == -1)
                memoryFree ((LPVOID)stringStorageToRelease55);
        }
        opaqueValue57 = stackStorage98[0];
        opaqueValue58 = stackStorage98[0];
        if (stackStorage98[0] != 0 && *temporaryPointer99 != 0 && *temporaryPointer101 != 0)
        {
            opaqueValue59 = 1;
        }
        else
        {
            opaqueValue59 = 0;
            if (*temporaryPointer99 == 0)
                goto label126;
        }
        if (*temporaryPointer102 != 0 && opaqueValue59 == 0)
        {
            opaqueValue60 = 1;
        label127:
            if (stackStorage98[0] != 0 && opaqueValue108 == 0)
            {
                unixTimeMs61 = clockGetUnixTimeMilliseconds();
                if (opaqueValue107 != 0 && opaqueValue106 > 0 && entitlementIsTimeValid ((std::int64_t)stackStorage98, unixTimeMs61) != 0)
                {
                    opaqueValue62 = 1;
                    opaqueValue57 = stackStorage98[0];
                    goto label135;
                }
                opaqueValue57 = stackStorage98[0];
            }
            opaqueValue62 = 0;
        label135:
            if (opaqueValue58 != 0)
            {
                opaqueValue63 = opaqueValue57;
                if (opaqueValue62 == 0)
                    opaqueValue63 = 0;
                stackStorage98[0] = opaqueValue63;
                if (opaqueValue59 == 0 && opaqueValue60 == 0 && opaqueValue109 == 0)
                    sub_18035A0F0 (stackStorage98);
            }
            sub_1803552A0 (stackStorage116);
            opaqueValue64 = 0;
            criticalSection65 = (struct _RTL_CRITICAL_SECTION*)(*authManager + 1168LL);
            temporaryPointer82 = (char*)criticalSection65;
            EnterCriticalSection (criticalSection65);
            if (messageString81 != 0 || *(std::uint64_t*)(*authManager + 1688LL) != 0 || **(std::uint8_t**)(*authManager + 1576LL) == 0)
                goto label177;
            opaqueValue66 = *authManager;
            if ((std::uint8_t)sub_180351150 (*authManager) == 0 && (opaqueValue80 == 0 || (unsigned int)utf8CompareStrings (*(std::uint64_t*)(opaqueValue66 + 72), "FAD-AUTH-KEYSTORE-READ") != 0))
            {
                opaqueValue64 = 0;
                goto label177;
            }
            sub_18035D830 (opaqueValue66, stackStorage98);
            temporaryPointer67 = (std::uint64_t*)*authManager;
            opaqueValue68 = ++temporaryPointer67[211];
            temporaryPointer67[39] = opaqueValue68;
            temporaryPointer67[212] = opaqueValue68;
            if (!conditionFlag78 || opaqueValue59 != 0 || opaqueValue60 != 0)
            {
                opaqueValue64 = 0;
            }
            else
            {
                sub_18035D830 (stackStorage116, *authManager);
                opaqueValue64 = 1;
            }
            opaqueValue69 = *authManager;
            if (*(std::uint8_t*)(*authManager + 296LL) != 0)
            {
                opaqueValue110 = *(std::uint64_t*)(opaqueValue69 + 232);
                if ((void*)(opaqueValue110 - 16) != &emptyJuceStringStorage)
                    _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue110 - 16));
                opaqueValue111 = *(std::uint64_t*)(*authManager + 240LL);
                if ((void*)(opaqueValue111 - 16) != &emptyJuceStringStorage)
                    _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue111 - 16));
                opaqueValue112 = *(std::uint64_t*)(*authManager + 248LL);
                if ((void*)(opaqueValue112 - 16) != &emptyJuceStringStorage)
                    _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue112 - 16));
                opaqueValue113 = *(std::uint64_t*)(*authManager + 256LL);
                if ((void*)(opaqueValue113 - 16) != &emptyJuceStringStorage)
                    _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue113 - 16));
                opaqueValue114 = 0;
                opaqueValue115 = 0;
                sub_180371D00 (opaqueValue69 + 440, &opaqueValue110);
                sub_180360820 (&opaqueValue110);
                sub_180366280 (*authManager, 5);
                goto label177;
            }
            if (opaqueValue108 != 0)
            {
                conditionFlag70 = conditionFlag77;
            }
            else
            {
                if (conditionFlag76)
                    goto label183;
                conditionFlag70 = conditionFlag77;
                if (conditionFlag77)
                    goto label183;
            }
            if (opaqueValue59 != 0)
            {
                sub_180366280 (*authManager, 7);
            label177:
                if (!conditionFlag76 && !conditionFlag77)
                {
                    opaqueValue71 = *authManager;
                    if (*(std::uint8_t*)(*authManager + 224LL) != 0 && **(std::uint8_t**)(opaqueValue71 + 8) != 0 && **(std::uint8_t**)(opaqueValue71 + 24) != 0)
                        sub_180366280 (opaqueValue71, 7);
                }
                goto label183;
            }
            if (opaqueValue108 != 0 || !conditionFlag76 && !conditionFlag70)
            {
                if (opaqueValue60 != 0 && _InterlockedCompareExchange8 ((volatile std::int8_t*)(opaqueValue69 + 1592), 1, 0) == 0)
                    sub_180366280 (*authManager, 9);
                goto label177;
            }
        label183:
            LeaveCriticalSection (criticalSection65);
            if (opaqueValue64 != 0)
                authEventsPersistAndDispatch (authManager, (std::int64_t)stackStorage116, 0);
            sub_180058EA0 (stackStorage116);
            goto label186;
        }
    label126:
        opaqueValue60 = 0;
        goto label127;
    }
    criticalSection31 = (struct _RTL_CRITICAL_SECTION*)(*authManager + 1168LL);
    temporaryPointer82 = (char*)criticalSection31;
    EnterCriticalSection (criticalSection31);
    if (messageString81 == 0 && *(std::uint64_t*)(*authManager + 1688LL) == 0 && (std::uint8_t)sub_180351150 (*authManager) != 0)
    {
        juceStringConstructFromUtf8 (&reusableString79, "FAD-AUTH-KEYSTORE-READ");
        opaqueValue32 = sub_18035B040 (&messageString81, &opaqueValue83);
        sub_18035AAD0 (*authManager, opaqueValue32, &reusableString79, 0);
        stringStorageToRelease33 = (void*)(messageString81 - 16);
        if ((void*)(messageString81 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease33) == -1)
            memoryFree (stringStorageToRelease33);
        stringStorageToRelease34 = (void*)(reusableString79 - 16);
        if ((void*)(reusableString79 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease34) == -1)
            memoryFree (stringStorageToRelease34);
        temporaryPointer35 = (std::int64_t*)(*authManager + 352LL);
        opaqueValue36 = temporaryPointer35[3];
        opaqueValue37 = opaqueValue36 + temporaryPointer35[4];
        LODWORD (reusableString79) = 6;
        opaqueValue91 = opaqueValue37;
        stackStorage92[2] = opaqueValue37;
        opaqueValue88 = opaqueValue36;
        opaqueValue90 = 0;
        stackStorage92[1] = 0;
        opaqueValue87 = 0;
        if (temporaryPointer35 != nullptr)
        {
            opaqueValue89 = *temporaryPointer35;
            stackStorage92[0] = opaqueValue89;
            opaqueValue86 = opaqueValue89;
        }
        else
        {
            opaqueValue89 = 0;
            stackStorage92[0] = 0;
            opaqueValue86 = 0;
        }
        temporaryPointer38 = (std::int64_t*)sub_1803711C0 (stackStorage97, &opaqueValue86, stackStorage92, &reusableString79);
        opaqueValue87 = 0;
        opaqueValue86 = *temporaryPointer38;
        opaqueValue88 = temporaryPointer38[2];
        sub_180371E00 (temporaryPointer35, stackStorage92, &opaqueValue86, &opaqueValue89);
    }
    LeaveCriticalSection (criticalSection31);
label186:
    stringStorageToRelease72 = temporaryPointer84 - 16;
    if (temporaryPointer84 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease72) == -1)
        memoryFree (stringStorageToRelease72);
label189:
    sub_180058EA0 (stackStorage98);
    opaqueValue73 = opaqueValue93;
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue93 + 1168));
    *(std::uint8_t*)(opaqueValue73 + 1728) = 1;
    LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue73 + 1168));
    result = authManagerNotifyStateChangedAsync (&opaqueValue94);
    temporaryPointer75 = temporaryPointer95;
    if (temporaryPointer95 != nullptr)
    {
        result = (unsigned int)_InterlockedExchangeAdd (temporaryPointer95 + 2, 0xFFFFFFFF);
        if ((std::uint32_t)result == 1)
        {
            result = (**(std::int64_t (***) (volatile std::int32_t*))temporaryPointer75) (temporaryPointer75);
            if (_InterlockedExchangeAdd (temporaryPointer75 + 3, 0xFFFFFFFF) == 1)
                return (*(std::int64_t (**) (volatile std::int32_t*)) (*(std::uint64_t*)temporaryPointer75 + 8LL)) (temporaryPointer75);
        }
    }
    return result;
}

// ===== AuthManager_IsTaskBusy @ 0x180360510 size=68 =====
std::int64_t authManagerIsInitialVerificationComplete (std::int64_t authManager)
{
    std::int64_t sharedAuthState; // rdi
    std::int64_t managerOrReadyByte; // rbx

    sharedAuthState = *(std::uint64_t*)(authManager + 40);
    managerOrReadyByte = authManager;
    EnterCriticalSection ((LPCRITICAL_SECTION)(sharedAuthState + 1168));
    LOBYTE (managerOrReadyByte) = *(std::uint8_t*)(*(std::uint64_t*)(managerOrReadyByte + 40) + 1728LL);
    LeaveCriticalSection ((LPCRITICAL_SECTION)(sharedAuthState + 1168));
    return (std::uint8_t)managerOrReadyByte;
}

// ===== AuthManager_MarkVerified @ 0x1803719f0 size=125 =====
std::int64_t authManagerCompleteInitialVerification (std::uint64_t* verificationContext)
{
    std::int64_t sharedAuthState; // rbx
    std::int64_t result; // rax
    volatile std::int32_t* callbackReferenceCount; // rbx

    sharedAuthState = *verificationContext;
    EnterCriticalSection ((LPCRITICAL_SECTION)(*verificationContext + 1168LL));
    *(std::uint8_t*)(*verificationContext + 1728LL) = 1;
    LeaveCriticalSection ((LPCRITICAL_SECTION)(sharedAuthState + 1168));
    result = authManagerNotifyStateChangedAsync (verificationContext);
    callbackReferenceCount = (volatile std::int32_t*)verificationContext[1];
    if (callbackReferenceCount != nullptr)
    {
        result = (unsigned int)_InterlockedExchangeAdd (callbackReferenceCount + 2, 0xFFFFFFFF);
        if ((std::uint32_t)result == 1)
        {
            result = (**(std::int64_t (***) (volatile std::int32_t*))callbackReferenceCount) (callbackReferenceCount);
            if (_InterlockedExchangeAdd (callbackReferenceCount + 3, 0xFFFFFFFF) == 1)
                return (*(std::int64_t (**) (volatile std::int32_t*)) (*(std::uint64_t*)callbackReferenceCount + 8LL)) (callbackReferenceCount);
        }
    }
    return result;
}

// ===== AuthManager_SnapshotForUi @ 0x180360270 size=82 =====
std::int64_t authManagerCopyStateSnapshot (std::int64_t authManager, std::int64_t outputState)
{
    std::int64_t sharedAuthState; // rbx

    sharedAuthState = *(std::uint64_t*)(authManager + 40);
    EnterCriticalSection ((LPCRITICAL_SECTION)(sharedAuthState + 1168));
    authManagerSnapshotState (outputState);
    LeaveCriticalSection ((LPCRITICAL_SECTION)(sharedAuthState + 1168));
    return outputState;
}

// ===== AuthManager_WaitReadyBlocking @ 0x180360560 size=580 =====
// waits on condvar inner+1456 (<=15s) while task busy inner+1552; ready = inner+1728 verified AND (if +184/+176 anchored) AuthEntitlement_IsTimeValid
std::int64_t authManagerWaitForInitialVerification (std::int64_t authManager)
{
    std::int64_t verificationMutex; // rsi
    std::int64_t sharedAuthState; // rbp
    std::int64_t waitDeadlineNanoseconds; // rbx
    std::int64_t counterFrequency; // rdi
    std::int64_t counterTicks; // rax
    std::int64_t currentNanoseconds; // rax
    std::int64_t elapsedWholeSeconds; // r8
    std::int64_t fractionalNanoseconds; // rax
    std::int64_t wholeNanoseconds; // rcx
    std::int64_t elapsedSeconds; // rcx
    std::int64_t remainingWaitDuration; // rax
    std::int64_t lockedAuthState; // rdi
    std::int64_t verifiedAuthState; // rcx
    bool hasValidEntitlement; // bl
    std::int64_t clockTimeParts; // [rsp+20h] [rbp-38h] BYREF
    std::uint16_t clockMilliseconds; // [rsp+28h] [rbp-30h]

    verificationMutex = *(std::uint64_t*)(authManager + 40) + 1216LL;
    if ((unsigned int)mutexLock (verificationMutex) != 0)
        cppRuntimeThrowSystemError (5);
    if (*(std::uint32_t*)(verificationMutex + 76) == 0x7FFFFFFF)
    {
        *(std::uint32_t*)(verificationMutex + 76) = 2147483646;
        cppRuntimeThrowSystemError (6);
    }
    sharedAuthState = *(std::uint64_t*)(authManager + 40);
    clockReadSteadyNanoseconds (&clockTimeParts);
    if (clockTimeParts > 0x7FFFFFFC81EE29FELL)
        waitDeadlineNanoseconds = 0x7FFFFFFFFFFFFFFFLL;
    else
        waitDeadlineNanoseconds = clockTimeParts + 15000000000LL;
    if (*(std::uint32_t*)(*(std::uint64_t*)(authManager + 40) + 1552LL) != 0)
    {
        do
        {
            counterFrequency = clockGetPerformanceCounterFrequency();
            counterTicks = clockGetPerformanceCounterTicks();
            if (counterFrequency == 10000000)
            {
                currentNanoseconds = 100 * counterTicks;
            }
            else
            {
                if (counterFrequency == 24000000)
                {
                    elapsedWholeSeconds = counterTicks / 24000000;
                    fractionalNanoseconds = 1000000000 * (counterTicks % 24000000) / 24000000;
                    wholeNanoseconds = 1000000000 * elapsedWholeSeconds;
                }
                else
                {
                    elapsedSeconds = counterTicks / counterFrequency;
                    fractionalNanoseconds = 1000000000 * (counterTicks % counterFrequency) / counterFrequency;
                    wholeNanoseconds = 1000000000 * elapsedSeconds;
                }
                currentNanoseconds = wholeNanoseconds + fractionalNanoseconds;
            }
            if (waitDeadlineNanoseconds == currentNanoseconds)
                break;
            if (waitDeadlineNanoseconds < currentNanoseconds)
                break;
            clockTimeParts = waitDeadlineNanoseconds - currentNanoseconds;
            remainingWaitDuration = sub_18007FF90 (&clockTimeParts);
        } while ((unsigned int)conditionVariableWaitTimed (sharedAuthState + 1456, verificationMutex, remainingWaitDuration) != 0 || *(std::uint32_t*)(*(std::uint64_t*)(authManager + 40) + 1552LL) != 0);
    }
    mutexUnlock (verificationMutex);
    lockedAuthState = *(std::uint64_t*)(authManager + 40);
    EnterCriticalSection ((LPCRITICAL_SECTION)(lockedAuthState + 1168));
    hasValidEntitlement = false;
    if (*(std::uint8_t*)(*(std::uint64_t*)(authManager + 40) + 1728LL) != 0)
    {
        clockReadUnixTimeParts (&clockTimeParts);
        verifiedAuthState = *(std::uint64_t*)(authManager + 40);
        if (*(std::uint8_t*)(verifiedAuthState + 184) != 0 && *(std::int64_t*)(verifiedAuthState + 176) > 0 && entitlementIsTimeValid (verifiedAuthState, clockMilliseconds + 1000 * clockTimeParts) != 0)
        {
            hasValidEntitlement = true;
        }
    }
    LeaveCriticalSection ((LPCRITICAL_SECTION)(lockedAuthState + 1168));
    return hasValidEntitlement;
}
