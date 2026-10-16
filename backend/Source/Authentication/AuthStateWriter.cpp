#include <cstdint>

// ===== AuthStore_ReadOnboardingCompleted @ 0x18035e0b0 size=5986 =====
std::int64_t authStorageSerializeState (std::int64_t outputJson, std::int64_t authState)
{
    std::int64_t allocatedObject3; // r14
    std::int64_t opaqueValue4; // rcx
    std::int64_t opaqueValue5; // rbx
    void (*callbackFunction6) (std::int64_t, std::int64_t*, void (***) (std::uint64_t*, std::int64_t*)); // rbx
    void* stringStorageToRelease7; // rcx
    std::int64_t (*callbackFunction8)(); // rdx
    std::int64_t opaqueValue9; // rbx
    void (*callbackFunction10) (std::int64_t, std::int64_t*, void (***) (std::uint64_t*, std::int64_t*)); // rbx
    void* stringStorageToRelease11; // rcx
    void (*callbackFunction12) (std::int64_t*); // rdx
    std::int64_t opaqueValue13; // rcx
    std::int64_t opaqueValue14; // rbx
    void (*callbackFunction15) (std::int64_t, std::int64_t*, void (***) (std::uint64_t*, std::int64_t*)); // rbx
    void* stringStorageToRelease16; // rcx
    void (*callbackFunction17) (std::int64_t*); // rdx
    std::int64_t opaqueValue18; // rcx
    std::int64_t opaqueValue19; // rbx
    void (*callbackFunction20) (std::int64_t, std::int64_t*, void (***) (std::uint64_t*, std::int64_t*)); // rbx
    void* stringStorageToRelease21; // rcx
    void (*callbackFunction22) (std::int64_t*); // rdx
    std::int64_t opaqueValue23; // rcx
    std::int64_t opaqueValue24; // rbx
    void (*callbackFunction25) (std::int64_t, std::int64_t*, void (***) (std::uint64_t*, std::int64_t*)); // rbx
    void* stringStorageToRelease26; // rcx
    void (*callbackFunction27) (std::int64_t*); // rdx
    std::int64_t opaqueValue28; // rcx
    std::int64_t opaqueValue29; // rbx
    void (*callbackFunction30) (std::int64_t, std::int64_t*, void (***) (std::uint64_t*, std::int64_t*)); // rbx
    void* stringStorageToRelease31; // rcx
    void (*callbackFunction32) (std::int64_t*); // rdx
    std::int64_t opaqueValue33; // rcx
    std::int64_t opaqueValue34; // rbx
    void (*callbackFunction35) (std::int64_t, std::int64_t*, void (***) (std::uint64_t*, std::int64_t*)); // rbx
    void* stringStorageToRelease36; // rcx
    void (*callbackFunction37) (std::int64_t*); // rdx
    std::int64_t opaqueValue38; // rcx
    std::int64_t opaqueValue39; // rbx
    void (*callbackFunction40) (std::int64_t, std::int64_t*, void (***) (std::uint64_t*, std::int64_t*)); // rbx
    void* stringStorageToRelease41; // rcx
    void (*callbackFunction42) (std::int64_t*); // rdx
    std::int64_t opaqueValue43; // rcx
    std::int64_t opaqueValue44; // rbx
    void (*callbackFunction45) (std::int64_t, std::int64_t*, void (***) (std::uint64_t*, std::int64_t*)); // rbx
    void* stringStorageToRelease46; // rcx
    void (*callbackFunction47) (std::int64_t*); // rdx
    std::int64_t opaqueValue48; // rcx
    std::int64_t opaqueValue49; // rbx
    void* stringStorageToRelease50; // rcx
    void (*callbackFunction51) (std::int64_t*); // rdx
    std::int64_t opaqueValue52; // rcx
    std::int64_t opaqueValue53; // rbx
    void* stringStorageToRelease54; // rcx
    void (*callbackFunction55) (std::int64_t*); // rdx
    std::int64_t opaqueValue56; // rcx
    std::int64_t opaqueValue57; // rbx
    void* stringStorageToRelease58; // rcx
    std::int64_t (*callbackFunction59)(); // rdx
    std::int64_t opaqueValue60; // rbx
    void* stringStorageToRelease61; // rcx
    void (*callbackFunction62) (std::int64_t*); // rdx
    std::int64_t opaqueValue63; // rcx
    std::int64_t opaqueValue64; // rbx
    void* stringStorageToRelease65; // rcx
    std::int64_t (*callbackFunction66)(); // rdx
    std::int64_t opaqueValue67; // rbx
    void* stringStorageToRelease68; // rcx
    std::int64_t (*callbackFunction69)(); // rdx
    std::int64_t opaqueValue70; // rbx
    void* stringStorageToRelease71; // rcx
    void (*callbackFunction72) (std::int64_t*); // rdx
    std::int64_t opaqueValue73; // rcx
    std::int64_t opaqueValue74; // rbx
    void* stringStorageToRelease75; // rcx
    std::int64_t (*callbackFunction76)(); // rdx
    std::int64_t opaqueValue77; // rax
    void* stringStorageToRelease78; // rcx
    std::int64_t (*callbackFunction79)(); // rdx
    std::int64_t opaqueValue80; // rax
    void* stringStorageToRelease81; // rcx
    std::int64_t (*callbackFunction82)(); // rdx
    std::int64_t opaqueValue83; // rax
    void* stringStorageToRelease84; // rcx
    std::int64_t (*callbackFunction85)(); // rdx
    std::int64_t opaqueValue86; // rax
    void* stringStorageToRelease87; // rcx
    std::int64_t (*callbackFunction88)(); // rdx
    std::int64_t opaqueValue89; // rax
    void* stringStorageToRelease90; // rcx
    std::int64_t (*callbackFunction91)(); // rdx
    std::int64_t opaqueValue92; // rax
    void* stringStorageToRelease93; // rcx
    std::int64_t (*callbackFunction94)(); // rdx
    std::int64_t opaqueValue95; // rax
    void* stringStorageToRelease96; // rcx
    std::int64_t (*callbackFunction97)(); // rdx
    std::int64_t opaqueValue98; // rax
    void* stringStorageToRelease99; // rcx
    void (*callbackFunction100) (std::int64_t*); // rdx
    std::int64_t opaqueValue101; // rcx
    std::int64_t opaqueValue102; // rax
    void* stringStorageToRelease103; // rcx
    std::int64_t (*callbackFunction104)(); // rdx
    std::int64_t opaqueValue105; // rax
    void* stringStorageToRelease106; // rcx
    std::int64_t (*callbackFunction107)(); // rdx
    std::int64_t opaqueValue108; // rax
    std::int64_t opaqueValue109; // r9
    void* stringStorageToRelease110; // rcx
    std::int64_t (*callbackFunction111)(); // rdx
    void (*callbackFunction112) (std::int64_t*); // rdx
    std::int64_t opaqueValue114; // [rsp+20h] [rbp-E0h] BYREF
    const char* temporaryPointer115; // [rsp+28h] [rbp-D8h] BYREF
    std::int64_t opaqueValue116; // [rsp+30h] [rbp-D0h]
    void (**callbackFunction117) (std::uint64_t*, std::int64_t*); // [rsp+38h] [rbp-C8h] BYREF
    std::int64_t opaqueValue118; // [rsp+40h] [rbp-C0h] BYREF
    char opaqueValue119; // [rsp+48h] [rbp-B8h]
    std::int64_t opaqueValue120; // [rsp+50h] [rbp-B0h]
    std::uint8_t stackStorage121[8]; // [rsp+60h] [rbp-A0h] BYREF
    std::int64_t opaqueValue122; // [rsp+68h] [rbp-98h]
    std::int64_t opaqueValue123; // [rsp+70h] [rbp-90h]
    std::int64_t opaqueValue124; // [rsp+78h] [rbp-88h]
    std::int64_t opaqueValue125; // [rsp+80h] [rbp-80h]
    std::int64_t opaqueValue126; // [rsp+88h] [rbp-78h]
    std::int64_t opaqueValue127; // [rsp+90h] [rbp-70h]
    std::int64_t opaqueValue128; // [rsp+98h] [rbp-68h]
    std::int64_t opaqueValue129; // [rsp+A0h] [rbp-60h]
    std::int64_t opaqueValue130; // [rsp+A8h] [rbp-58h]
    unsigned int opaqueValue131; // [rsp+B0h] [rbp-50h]
    std::int64_t opaqueValue132; // [rsp+B8h] [rbp-48h]
    unsigned int opaqueValue133; // [rsp+C0h] [rbp-40h]
    unsigned int opaqueValue134; // [rsp+C4h] [rbp-3Ch]
    std::int64_t opaqueValue135; // [rsp+D8h] [rbp-28h]
    std::int64_t opaqueValue136; // [rsp+E0h] [rbp-20h]
    std::int64_t opaqueValue137; // [rsp+E8h] [rbp-18h]
    std::int64_t opaqueValue138; // [rsp+F0h] [rbp-10h]
    std::uint8_t opaqueValue139; // [rsp+F8h] [rbp-8h]
    std::int64_t opaqueValue140; // [rsp+100h] [rbp+0h]
    std::int64_t opaqueValue141; // [rsp+108h] [rbp+8h]
    std::int64_t opaqueValue142; // [rsp+110h] [rbp+10h]
    std::uint8_t opaqueValue143; // [rsp+130h] [rbp+30h]
    unsigned int opaqueValue144; // [rsp+134h] [rbp+34h]
    std::int64_t opaqueValue145; // [rsp+138h] [rbp+38h]
    std::uint8_t opaqueValue146; // [rsp+140h] [rbp+40h]
    std::int64_t opaqueValue147; // [rsp+190h] [rbp+90h]
    void (**callbackFunction148) (std::uint64_t*, std::int64_t*); // [rsp+1A0h] [rbp+A0h] BYREF
    std::int64_t opaqueValue149; // [rsp+1A8h] [rbp+A8h] BYREF

    sub_1803513E0 (stackStorage121, authState);
    sub_1803598E0 (stackStorage121);
    allocatedObject3 = memoryAllocateObject (32);
    *(std::uint32_t*)(allocatedObject3 + 8) = 0;
    *(std::uint64_t*)allocatedObject3 = &juce::DynamicObject::`vftable';
    *(std::uint64_t*)(allocatedObject3 + 16) = 0;
    *(std::uint64_t*)(allocatedObject3 + 24) = 0;
    opaqueValue120 = allocatedObject3;
    callbackFunction148 = (void (**) (std::uint64_t*, std::int64_t*))&unk_180F51450;
    opaqueValue149 = 1;
    opaqueValue5 = sub_18009EA20 (opaqueValue4);
    opaqueValue116 = opaqueValue5 + 16;
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue5 + 16));
    sub_18009E8C0 (opaqueValue5);
    temporaryPointer115 = "schemaVersion";
    sub_1800B4BF0 (&opaqueValue114, opaqueValue5, &temporaryPointer115);
    LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue5 + 16));
    sub_18008A110 (allocatedObject3 + 16, &opaqueValue114, &callbackFunction148);
    callbackFunction6 = *(void (**) (std::int64_t, std::int64_t*, void (***) (std::uint64_t*, std::int64_t*))) (*(std::uint64_t*)allocatedObject3 + 24LL);
    callbackFunction117 = callbackFunction148;
    opaqueValue118 = 0;
    callbackFunction148[12](&opaqueValue118, &opaqueValue149);
    opaqueValue119 = 1;
    callbackFunction6 (allocatedObject3, &opaqueValue114, &callbackFunction117);
    if (opaqueValue119 != 0)
        ((void (*) (std::int64_t*))callbackFunction117[11]) (&opaqueValue118);
    stringStorageToRelease7 = (void*)(opaqueValue114 - 16);
    if ((void*)(opaqueValue114 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease7) == -1)
        memoryFree (stringStorageToRelease7);
    callbackFunction8 = (std::int64_t (*)())callbackFunction148[11];
    if (callbackFunction8 != guard_check_icall_nop)
        ((void (*) (std::int64_t*))callbackFunction8) (&opaqueValue149);
    callbackFunction148 = (void (**) (std::uint64_t*, std::int64_t*))&unk_180F512B0;
    opaqueValue149 = opaqueValue122;
    if ((void*)(opaqueValue122 - 16) != &emptyJuceStringStorage)
        _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue122 - 16));
    opaqueValue9 = sub_18009EA20 (stringStorageToRelease7);
    opaqueValue116 = opaqueValue9 + 16;
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue9 + 16));
    sub_18009E8C0 (opaqueValue9);
    temporaryPointer115 = "deviceCode";
    sub_1800B4BF0 (&opaqueValue114, opaqueValue9, &temporaryPointer115);
    LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue9 + 16));
    sub_18008A110 (allocatedObject3 + 16, &opaqueValue114, &callbackFunction148);
    callbackFunction10 = *(void (**) (std::int64_t, std::int64_t*, void (***) (std::uint64_t*, std::int64_t*))) (*(std::uint64_t*)allocatedObject3 + 24LL);
    callbackFunction117 = callbackFunction148;
    opaqueValue118 = 0;
    callbackFunction148[12](&opaqueValue118, &opaqueValue149);
    opaqueValue119 = 1;
    callbackFunction10 (allocatedObject3, &opaqueValue114, &callbackFunction117);
    if (opaqueValue119 != 0)
        ((void (*) (std::int64_t*))callbackFunction117[11]) (&opaqueValue118);
    stringStorageToRelease11 = (void*)(opaqueValue114 - 16);
    if ((void*)(opaqueValue114 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease11) == -1)
        memoryFree (stringStorageToRelease11);
    callbackFunction12 = (void (*) (std::int64_t*))callbackFunction148[11];
    if ((char*)callbackFunction12 == (char*)sub_18000B8D0)
        sub_180023C60 (&opaqueValue149, 0);
    else
        callbackFunction12 (&opaqueValue149);
    callbackFunction148 = (void (**) (std::uint64_t*, std::int64_t*))&unk_180F512B0;
    opaqueValue149 = opaqueValue123;
    if ((void*)(opaqueValue123 - 16) != &emptyJuceStringStorage)
        _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue123 - 16));
    opaqueValue14 = sub_18009EA20 (opaqueValue13);
    opaqueValue116 = opaqueValue14 + 16;
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue14 + 16));
    sub_18009E8C0 (opaqueValue14);
    temporaryPointer115 = "deviceSecret";
    sub_1800B4BF0 (&opaqueValue114, opaqueValue14, &temporaryPointer115);
    LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue14 + 16));
    sub_18008A110 (allocatedObject3 + 16, &opaqueValue114, &callbackFunction148);
    callbackFunction15 = *(void (**) (std::int64_t, std::int64_t*, void (***) (std::uint64_t*, std::int64_t*))) (*(std::uint64_t*)allocatedObject3 + 24LL);
    callbackFunction117 = callbackFunction148;
    opaqueValue118 = 0;
    callbackFunction148[12](&opaqueValue118, &opaqueValue149);
    opaqueValue119 = 1;
    callbackFunction15 (allocatedObject3, &opaqueValue114, &callbackFunction117);
    if (opaqueValue119 != 0)
        ((void (*) (std::int64_t*))callbackFunction117[11]) (&opaqueValue118);
    stringStorageToRelease16 = (void*)(opaqueValue114 - 16);
    if ((void*)(opaqueValue114 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease16) == -1)
        memoryFree (stringStorageToRelease16);
    callbackFunction17 = (void (*) (std::int64_t*))callbackFunction148[11];
    if ((char*)callbackFunction17 == (char*)sub_18000B8D0)
        sub_180023C60 (&opaqueValue149, 0);
    else
        callbackFunction17 (&opaqueValue149);
    callbackFunction148 = (void (**) (std::uint64_t*, std::int64_t*))&unk_180F512B0;
    opaqueValue149 = opaqueValue124;
    if ((void*)(opaqueValue124 - 16) != &emptyJuceStringStorage)
        _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue124 - 16));
    opaqueValue19 = sub_18009EA20 (opaqueValue18);
    opaqueValue116 = opaqueValue19 + 16;
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue19 + 16));
    sub_18009E8C0 (opaqueValue19);
    temporaryPointer115 = "token";
    sub_1800B4BF0 (&opaqueValue114, opaqueValue19, &temporaryPointer115);
    LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue19 + 16));
    sub_18008A110 (allocatedObject3 + 16, &opaqueValue114, &callbackFunction148);
    callbackFunction20 = *(void (**) (std::int64_t, std::int64_t*, void (***) (std::uint64_t*, std::int64_t*))) (*(std::uint64_t*)allocatedObject3 + 24LL);
    callbackFunction117 = callbackFunction148;
    opaqueValue118 = 0;
    callbackFunction148[12](&opaqueValue118, &opaqueValue149);
    opaqueValue119 = 1;
    callbackFunction20 (allocatedObject3, &opaqueValue114, &callbackFunction117);
    if (opaqueValue119 != 0)
        ((void (*) (std::int64_t*))callbackFunction117[11]) (&opaqueValue118);
    stringStorageToRelease21 = (void*)(opaqueValue114 - 16);
    if ((void*)(opaqueValue114 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease21) == -1)
        memoryFree (stringStorageToRelease21);
    callbackFunction22 = (void (*) (std::int64_t*))callbackFunction148[11];
    if ((char*)callbackFunction22 == (char*)sub_18000B8D0)
        sub_180023C60 (&opaqueValue149, 0);
    else
        callbackFunction22 (&opaqueValue149);
    callbackFunction148 = (void (**) (std::uint64_t*, std::int64_t*))&unk_180F512B0;
    opaqueValue149 = opaqueValue125;
    if ((void*)(opaqueValue125 - 16) != &emptyJuceStringStorage)
        _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue125 - 16));
    opaqueValue24 = sub_18009EA20 (opaqueValue23);
    opaqueValue116 = opaqueValue24 + 16;
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue24 + 16));
    sub_18009E8C0 (opaqueValue24);
    temporaryPointer115 = "refreshToken";
    sub_1800B4BF0 (&opaqueValue114, opaqueValue24, &temporaryPointer115);
    LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue24 + 16));
    sub_18008A110 (allocatedObject3 + 16, &opaqueValue114, &callbackFunction148);
    callbackFunction25 = *(void (**) (std::int64_t, std::int64_t*, void (***) (std::uint64_t*, std::int64_t*))) (*(std::uint64_t*)allocatedObject3 + 24LL);
    callbackFunction117 = callbackFunction148;
    opaqueValue118 = 0;
    callbackFunction148[12](&opaqueValue118, &opaqueValue149);
    opaqueValue119 = 1;
    callbackFunction25 (allocatedObject3, &opaqueValue114, &callbackFunction117);
    if (opaqueValue119 != 0)
        ((void (*) (std::int64_t*))callbackFunction117[11]) (&opaqueValue118);
    stringStorageToRelease26 = (void*)(opaqueValue114 - 16);
    if ((void*)(opaqueValue114 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease26) == -1)
        memoryFree (stringStorageToRelease26);
    callbackFunction27 = (void (*) (std::int64_t*))callbackFunction148[11];
    if ((char*)callbackFunction27 == (char*)sub_18000B8D0)
        sub_180023C60 (&opaqueValue149, 0);
    else
        callbackFunction27 (&opaqueValue149);
    callbackFunction148 = (void (**) (std::uint64_t*, std::int64_t*))&unk_180F512B0;
    opaqueValue149 = opaqueValue126;
    if ((void*)(opaqueValue126 - 16) != &emptyJuceStringStorage)
        _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue126 - 16));
    opaqueValue29 = sub_18009EA20 (opaqueValue28);
    opaqueValue116 = opaqueValue29 + 16;
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue29 + 16));
    sub_18009E8C0 (opaqueValue29);
    temporaryPointer115 = "refreshOperationId";
    sub_1800B4BF0 (&opaqueValue114, opaqueValue29, &temporaryPointer115);
    LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue29 + 16));
    sub_18008A110 (allocatedObject3 + 16, &opaqueValue114, &callbackFunction148);
    callbackFunction30 = *(void (**) (std::int64_t, std::int64_t*, void (***) (std::uint64_t*, std::int64_t*))) (*(std::uint64_t*)allocatedObject3 + 24LL);
    callbackFunction117 = callbackFunction148;
    opaqueValue118 = 0;
    callbackFunction148[12](&opaqueValue118, &opaqueValue149);
    opaqueValue119 = 1;
    callbackFunction30 (allocatedObject3, &opaqueValue114, &callbackFunction117);
    if (opaqueValue119 != 0)
        ((void (*) (std::int64_t*))callbackFunction117[11]) (&opaqueValue118);
    stringStorageToRelease31 = (void*)(opaqueValue114 - 16);
    if ((void*)(opaqueValue114 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease31) == -1)
        memoryFree (stringStorageToRelease31);
    callbackFunction32 = (void (*) (std::int64_t*))callbackFunction148[11];
    if ((char*)callbackFunction32 == (char*)sub_18000B8D0)
        sub_180023C60 (&opaqueValue149, 0);
    else
        callbackFunction32 (&opaqueValue149);
    callbackFunction148 = (void (**) (std::uint64_t*, std::int64_t*))&unk_180F512B0;
    opaqueValue149 = opaqueValue147;
    if ((void*)(opaqueValue147 - 16) != &emptyJuceStringStorage)
        _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue147 - 16));
    opaqueValue34 = sub_18009EA20 (opaqueValue33);
    opaqueValue116 = opaqueValue34 + 16;
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue34 + 16));
    sub_18009E8C0 (opaqueValue34);
    temporaryPointer115 = "standardResetEpoch";
    sub_1800B4BF0 (&opaqueValue114, opaqueValue34, &temporaryPointer115);
    LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue34 + 16));
    sub_18008A110 (allocatedObject3 + 16, &opaqueValue114, &callbackFunction148);
    callbackFunction35 = *(void (**) (std::int64_t, std::int64_t*, void (***) (std::uint64_t*, std::int64_t*))) (*(std::uint64_t*)allocatedObject3 + 24LL);
    callbackFunction117 = callbackFunction148;
    opaqueValue118 = 0;
    callbackFunction148[12](&opaqueValue118, &opaqueValue149);
    opaqueValue119 = 1;
    callbackFunction35 (allocatedObject3, &opaqueValue114, &callbackFunction117);
    if (opaqueValue119 != 0)
        ((void (*) (std::int64_t*))callbackFunction117[11]) (&opaqueValue118);
    stringStorageToRelease36 = (void*)(opaqueValue114 - 16);
    if ((void*)(opaqueValue114 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease36) == -1)
        memoryFree (stringStorageToRelease36);
    callbackFunction37 = (void (*) (std::int64_t*))callbackFunction148[11];
    if ((char*)callbackFunction37 == (char*)sub_18000B8D0)
        sub_180023C60 (&opaqueValue149, 0);
    else
        callbackFunction37 (&opaqueValue149);
    callbackFunction148 = (void (**) (std::uint64_t*, std::int64_t*))&unk_180F512B0;
    opaqueValue149 = opaqueValue127;
    if ((void*)(opaqueValue127 - 16) != &emptyJuceStringStorage)
        _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue127 - 16));
    opaqueValue39 = sub_18009EA20 (opaqueValue38);
    opaqueValue116 = opaqueValue39 + 16;
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue39 + 16));
    sub_18009E8C0 (opaqueValue39);
    temporaryPointer115 = "tier";
    sub_1800B4BF0 (&opaqueValue114, opaqueValue39, &temporaryPointer115);
    LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue39 + 16));
    sub_18008A110 (allocatedObject3 + 16, &opaqueValue114, &callbackFunction148);
    callbackFunction40 = *(void (**) (std::int64_t, std::int64_t*, void (***) (std::uint64_t*, std::int64_t*))) (*(std::uint64_t*)allocatedObject3 + 24LL);
    callbackFunction117 = callbackFunction148;
    opaqueValue118 = 0;
    callbackFunction148[12](&opaqueValue118, &opaqueValue149);
    opaqueValue119 = 1;
    callbackFunction40 (allocatedObject3, &opaqueValue114, &callbackFunction117);
    if (opaqueValue119 != 0)
        ((void (*) (std::int64_t*))callbackFunction117[11]) (&opaqueValue118);
    stringStorageToRelease41 = (void*)(opaqueValue114 - 16);
    if ((void*)(opaqueValue114 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease41) == -1)
        memoryFree (stringStorageToRelease41);
    callbackFunction42 = (void (*) (std::int64_t*))callbackFunction148[11];
    if ((char*)callbackFunction42 == (char*)sub_18000B8D0)
        sub_180023C60 (&opaqueValue149, 0);
    else
        callbackFunction42 (&opaqueValue149);
    callbackFunction148 = (void (**) (std::uint64_t*, std::int64_t*))&unk_180F512B0;
    opaqueValue149 = opaqueValue128;
    if ((void*)(opaqueValue128 - 16) != &emptyJuceStringStorage)
        _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue128 - 16));
    opaqueValue44 = sub_18009EA20 (opaqueValue43);
    opaqueValue116 = opaqueValue44 + 16;
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue44 + 16));
    sub_18009E8C0 (opaqueValue44);
    temporaryPointer115 = "email";
    sub_1800B4BF0 (&opaqueValue114, opaqueValue44, &temporaryPointer115);
    LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue44 + 16));
    sub_18008A110 (allocatedObject3 + 16, &opaqueValue114, &callbackFunction148);
    callbackFunction45 = *(void (**) (std::int64_t, std::int64_t*, void (***) (std::uint64_t*, std::int64_t*))) (*(std::uint64_t*)allocatedObject3 + 24LL);
    callbackFunction117 = callbackFunction148;
    opaqueValue118 = 0;
    callbackFunction148[12](&opaqueValue118, &opaqueValue149);
    opaqueValue119 = 1;
    callbackFunction45 (allocatedObject3, &opaqueValue114, &callbackFunction117);
    if (opaqueValue119 != 0)
        ((void (*) (std::int64_t*))callbackFunction117[11]) (&opaqueValue118);
    stringStorageToRelease46 = (void*)(opaqueValue114 - 16);
    if ((void*)(opaqueValue114 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease46) == -1)
        memoryFree (stringStorageToRelease46);
    callbackFunction47 = (void (*) (std::int64_t*))callbackFunction148[11];
    if ((char*)callbackFunction47 == (char*)sub_18000B8D0)
        sub_180023C60 (&opaqueValue149, 0);
    else
        callbackFunction47 (&opaqueValue149);
    callbackFunction148 = (void (**) (std::uint64_t*, std::int64_t*))&unk_180F512B0;
    opaqueValue149 = opaqueValue129;
    if ((void*)(opaqueValue129 - 16) != &emptyJuceStringStorage)
        _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue129 - 16));
    opaqueValue49 = sub_18009EA20 (opaqueValue48);
    opaqueValue116 = opaqueValue49 + 16;
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue49 + 16));
    sub_18009E8C0 (opaqueValue49);
    temporaryPointer115 = "activationError";
    sub_1800B4BF0 (&opaqueValue114, opaqueValue49, &temporaryPointer115);
    LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue49 + 16));
    sub_1800A6D50 (allocatedObject3, &opaqueValue114, &callbackFunction148);
    stringStorageToRelease50 = (void*)(opaqueValue114 - 16);
    if ((void*)(opaqueValue114 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease50) == -1)
        memoryFree (stringStorageToRelease50);
    callbackFunction51 = (void (*) (std::int64_t*))callbackFunction148[11];
    if ((char*)callbackFunction51 == (char*)sub_18000B8D0)
        sub_180023C60 (&opaqueValue149, 0);
    else
        callbackFunction51 (&opaqueValue149);
    callbackFunction148 = (void (**) (std::uint64_t*, std::int64_t*))&unk_180F512B0;
    opaqueValue149 = opaqueValue130;
    if ((void*)(opaqueValue130 - 16) != &emptyJuceStringStorage)
        _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue130 - 16));
    opaqueValue53 = sub_18009EA20 (opaqueValue52);
    opaqueValue116 = opaqueValue53 + 16;
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue53 + 16));
    sub_18009E8C0 (opaqueValue53);
    temporaryPointer115 = "activationErrorCode";
    sub_1800B4BF0 (&opaqueValue114, opaqueValue53, &temporaryPointer115);
    LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue53 + 16));
    sub_1800A6D50 (allocatedObject3, &opaqueValue114, &callbackFunction148);
    stringStorageToRelease54 = (void*)(opaqueValue114 - 16);
    if ((void*)(opaqueValue114 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease54) == -1)
        memoryFree (stringStorageToRelease54);
    callbackFunction55 = (void (*) (std::int64_t*))callbackFunction148[11];
    if ((char*)callbackFunction55 == (char*)sub_18000B8D0)
        sub_180023C60 (&opaqueValue149, 0);
    else
        callbackFunction55 (&opaqueValue149);
    callbackFunction148 = (void (**) (std::uint64_t*, std::int64_t*))&unk_180F51450;
    opaqueValue149 = opaqueValue131;
    opaqueValue57 = sub_18009EA20 (opaqueValue56);
    opaqueValue116 = opaqueValue57 + 16;
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue57 + 16));
    sub_18009E8C0 (opaqueValue57);
    temporaryPointer115 = "activationErrorStatusCode";
    sub_1800B4BF0 (&opaqueValue114, opaqueValue57, &temporaryPointer115);
    LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue57 + 16));
    sub_1800A6D50 (allocatedObject3, &opaqueValue114, &callbackFunction148);
    stringStorageToRelease58 = (void*)(opaqueValue114 - 16);
    if ((void*)(opaqueValue114 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease58) == -1)
        memoryFree (stringStorageToRelease58);
    callbackFunction59 = (std::int64_t (*)())callbackFunction148[11];
    if (callbackFunction59 != guard_check_icall_nop)
        ((void (*) (std::int64_t*))callbackFunction59) (&opaqueValue149);
    callbackFunction148 = (void (**) (std::uint64_t*, std::int64_t*))&unk_180F512B0;
    opaqueValue149 = opaqueValue132;
    if ((void*)(opaqueValue132 - 16) != &emptyJuceStringStorage)
        _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue132 - 16));
    opaqueValue60 = sub_18009EA20 (stringStorageToRelease58);
    opaqueValue116 = opaqueValue60 + 16;
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue60 + 16));
    sub_18009E8C0 (opaqueValue60);
    temporaryPointer115 = "tokenDeliveryNonce";
    sub_1800B4BF0 (&opaqueValue114, opaqueValue60, &temporaryPointer115);
    LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue60 + 16));
    sub_1800A6D50 (allocatedObject3, &opaqueValue114, &callbackFunction148);
    stringStorageToRelease61 = (void*)(opaqueValue114 - 16);
    if ((void*)(opaqueValue114 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease61) == -1)
        memoryFree (stringStorageToRelease61);
    callbackFunction62 = (void (*) (std::int64_t*))callbackFunction148[11];
    if ((char*)callbackFunction62 == (char*)sub_18000B8D0)
        sub_180023C60 (&opaqueValue149, 0);
    else
        callbackFunction62 (&opaqueValue149);
    callbackFunction148 = (void (**) (std::uint64_t*, std::int64_t*))&unk_180F51230;
    opaqueValue149 = stackStorage121[0];
    opaqueValue64 = sub_18009EA20 (opaqueValue63);
    opaqueValue116 = opaqueValue64 + 16;
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue64 + 16));
    sub_18009E8C0 (opaqueValue64);
    temporaryPointer115 = "activated";
    sub_1800B4BF0 (&opaqueValue114, opaqueValue64, &temporaryPointer115);
    LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue64 + 16));
    sub_1800A6D50 (allocatedObject3, &opaqueValue114, &callbackFunction148);
    stringStorageToRelease65 = (void*)(opaqueValue114 - 16);
    if ((void*)(opaqueValue114 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease65) == -1)
        memoryFree (stringStorageToRelease65);
    callbackFunction66 = (std::int64_t (*)())callbackFunction148[11];
    if (callbackFunction66 != guard_check_icall_nop)
        ((void (*) (std::int64_t*))callbackFunction66) (&opaqueValue149);
    callbackFunction148 = (void (**) (std::uint64_t*, std::int64_t*))&unk_180F51350;
    opaqueValue149 = opaqueValue135;
    opaqueValue67 = sub_18009EA20 (stringStorageToRelease65);
    opaqueValue116 = opaqueValue67 + 16;
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue67 + 16));
    sub_18009E8C0 (opaqueValue67);
    temporaryPointer115 = "tokenExpiresAt";
    sub_1800B4BF0 (&opaqueValue114, opaqueValue67, &temporaryPointer115);
    LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue67 + 16));
    sub_1800A6D50 (allocatedObject3, &opaqueValue114, &callbackFunction148);
    stringStorageToRelease68 = (void*)(opaqueValue114 - 16);
    if ((void*)(opaqueValue114 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease68) == -1)
        memoryFree (stringStorageToRelease68);
    callbackFunction69 = (std::int64_t (*)())callbackFunction148[11];
    if (callbackFunction69 != guard_check_icall_nop)
        ((void (*) (std::int64_t*))callbackFunction69) (&opaqueValue149);
    callbackFunction148 = (void (**) (std::uint64_t*, std::int64_t*))&unk_180F512B0;
    opaqueValue149 = opaqueValue136;
    if ((void*)(opaqueValue136 - 16) != &emptyJuceStringStorage)
        _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue136 - 16));
    opaqueValue70 = sub_18009EA20 (stringStorageToRelease68);
    opaqueValue116 = opaqueValue70 + 16;
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue70 + 16));
    sub_18009E8C0 (opaqueValue70);
    temporaryPointer115 = "entitlementStatus";
    sub_1800B4BF0 (&opaqueValue114, opaqueValue70, &temporaryPointer115);
    LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue70 + 16));
    sub_1800A6D50 (allocatedObject3, &opaqueValue114, &callbackFunction148);
    stringStorageToRelease71 = (void*)(opaqueValue114 - 16);
    if ((void*)(opaqueValue114 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease71) == -1)
        memoryFree (stringStorageToRelease71);
    callbackFunction72 = (void (*) (std::int64_t*))callbackFunction148[11];
    if ((char*)callbackFunction72 == (char*)sub_18000B8D0)
        sub_18000B8D0 (&opaqueValue149);
    else
        callbackFunction72 (&opaqueValue149);
    callbackFunction148 = (void (**) (std::uint64_t*, std::int64_t*))&unk_180F51350;
    opaqueValue149 = opaqueValue137;
    opaqueValue74 = sub_18009EA20 (opaqueValue73);
    opaqueValue116 = opaqueValue74 + 16;
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue74 + 16));
    sub_18009E8C0 (opaqueValue74);
    temporaryPointer115 = "entitlementExpiresAt";
    sub_1800B4BF0 (&opaqueValue114, opaqueValue74, &temporaryPointer115);
    LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue74 + 16));
    sub_1800A6D50 (allocatedObject3, &opaqueValue114, &callbackFunction148);
    stringStorageToRelease75 = (void*)(opaqueValue114 - 16);
    if ((void*)(opaqueValue114 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease75) == -1)
        memoryFree (stringStorageToRelease75);
    callbackFunction76 = (std::int64_t (*)())callbackFunction148[11];
    if (callbackFunction76 != guard_check_icall_nop)
        ((void (*) (std::int64_t*))callbackFunction76) (&opaqueValue149);
    callbackFunction148 = (void (**) (std::uint64_t*, std::int64_t*))&unk_180F51350;
    opaqueValue149 = opaqueValue138;
    opaqueValue77 = sub_18009EA20 (stringStorageToRelease75);
    sub_18009E570 (opaqueValue77, &opaqueValue114, "entitlementGraceUntil");
    sub_1800A6D50 (allocatedObject3, &opaqueValue114, &callbackFunction148);
    stringStorageToRelease78 = (void*)(opaqueValue114 - 16);
    if ((void*)(opaqueValue114 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease78) == -1)
        memoryFree (stringStorageToRelease78);
    callbackFunction79 = (std::int64_t (*)())callbackFunction148[11];
    if (callbackFunction79 != guard_check_icall_nop)
        ((void (*) (std::int64_t*))callbackFunction79) (&opaqueValue149);
    callbackFunction148 = (void (**) (std::uint64_t*, std::int64_t*))&unk_180F51230;
    opaqueValue149 = opaqueValue139;
    opaqueValue80 = sub_18009EA20 (stringStorageToRelease78);
    sub_18009E570 (opaqueValue80, &opaqueValue114, "isTrial");
    sub_1800A6D50 (allocatedObject3, &opaqueValue114, &callbackFunction148);
    stringStorageToRelease81 = (void*)(opaqueValue114 - 16);
    if ((void*)(opaqueValue114 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease81) == -1)
        memoryFree (stringStorageToRelease81);
    callbackFunction82 = (std::int64_t (*)())callbackFunction148[11];
    if (callbackFunction82 != guard_check_icall_nop)
        ((void (*) (std::int64_t*))callbackFunction82) (&opaqueValue149);
    callbackFunction148 = (void (**) (std::uint64_t*, std::int64_t*))&unk_180F51350;
    opaqueValue149 = opaqueValue140;
    opaqueValue83 = sub_18009EA20 (stringStorageToRelease81);
    sub_18009E570 (opaqueValue83, &opaqueValue114, "trialStartedAt");
    sub_1800A6D50 (allocatedObject3, &opaqueValue114, &callbackFunction148);
    stringStorageToRelease84 = (void*)(opaqueValue114 - 16);
    if ((void*)(opaqueValue114 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease84) == -1)
        memoryFree (stringStorageToRelease84);
    callbackFunction85 = (std::int64_t (*)())callbackFunction148[11];
    if (callbackFunction85 != guard_check_icall_nop)
        ((void (*) (std::int64_t*))callbackFunction85) (&opaqueValue149);
    callbackFunction148 = (void (**) (std::uint64_t*, std::int64_t*))&unk_180F51350;
    opaqueValue149 = opaqueValue141;
    opaqueValue86 = sub_18009EA20 (stringStorageToRelease84);
    sub_18009E570 (opaqueValue86, &opaqueValue114, "trialExpiresAt");
    sub_1800A6D50 (allocatedObject3, &opaqueValue114, &callbackFunction148);
    stringStorageToRelease87 = (void*)(opaqueValue114 - 16);
    if ((void*)(opaqueValue114 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease87) == -1)
        memoryFree (stringStorageToRelease87);
    callbackFunction88 = (std::int64_t (*)())callbackFunction148[11];
    if (callbackFunction88 != guard_check_icall_nop)
        ((void (*) (std::int64_t*))callbackFunction88) (&opaqueValue149);
    callbackFunction148 = (void (**) (std::uint64_t*, std::int64_t*))&unk_180F51350;
    opaqueValue149 = opaqueValue142;
    opaqueValue89 = sub_18009EA20 (stringStorageToRelease87);
    sub_18009E570 (opaqueValue89, &opaqueValue114, "authorizationServerTimeMs");
    sub_1800A6D50 (allocatedObject3, &opaqueValue114, &callbackFunction148);
    stringStorageToRelease90 = (void*)(opaqueValue114 - 16);
    if ((void*)(opaqueValue114 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease90) == -1)
        memoryFree (stringStorageToRelease90);
    callbackFunction91 = (std::int64_t (*)())callbackFunction148[11];
    if (callbackFunction91 != guard_check_icall_nop)
        ((void (*) (std::int64_t*))callbackFunction91) (&opaqueValue149);
    callbackFunction148 = (void (**) (std::uint64_t*, std::int64_t*))&unk_180F51450;
    opaqueValue149 = opaqueValue133;
    opaqueValue92 = sub_18009EA20 (stringStorageToRelease90);
    sub_18009E570 (opaqueValue92, &opaqueValue114, "remaining");
    sub_1800A6D50 (allocatedObject3, &opaqueValue114, &callbackFunction148);
    stringStorageToRelease93 = (void*)(opaqueValue114 - 16);
    if ((void*)(opaqueValue114 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease93) == -1)
        memoryFree (stringStorageToRelease93);
    callbackFunction94 = (std::int64_t (*)())callbackFunction148[11];
    if (callbackFunction94 != guard_check_icall_nop)
        ((void (*) (std::int64_t*))callbackFunction94) (&opaqueValue149);
    callbackFunction148 = (void (**) (std::uint64_t*, std::int64_t*))&unk_180F51450;
    opaqueValue149 = opaqueValue134;
    opaqueValue95 = sub_18009EA20 (stringStorageToRelease93);
    sub_18009E570 (opaqueValue95, &opaqueValue114, "quotaTotal");
    sub_1800A6D50 (allocatedObject3, &opaqueValue114, &callbackFunction148);
    stringStorageToRelease96 = (void*)(opaqueValue114 - 16);
    if ((void*)(opaqueValue114 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease96) == -1)
        memoryFree (stringStorageToRelease96);
    callbackFunction97 = (std::int64_t (*)())callbackFunction148[11];
    if (callbackFunction97 != guard_check_icall_nop)
        ((void (*) (std::int64_t*))callbackFunction97) (&opaqueValue149);
    callbackFunction148 = (void (**) (std::uint64_t*, std::int64_t*))&unk_180F512B0;
    opaqueValue149 = opaqueValue145;
    if ((void*)(opaqueValue145 - 16) != &emptyJuceStringStorage)
        _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue145 - 16));
    opaqueValue98 = sub_18009EA20 (stringStorageToRelease96);
    sub_18009E570 (opaqueValue98, &opaqueValue114, "pendingFeedback");
    sub_1800A6D50 (allocatedObject3, &opaqueValue114, &callbackFunction148);
    stringStorageToRelease99 = (void*)(opaqueValue114 - 16);
    if ((void*)(opaqueValue114 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease99) == -1)
        memoryFree (stringStorageToRelease99);
    callbackFunction100 = (void (*) (std::int64_t*))callbackFunction148[11];
    if ((char*)callbackFunction100 == (char*)sub_18000B8D0)
        sub_18000B8D0 (&opaqueValue149);
    else
        callbackFunction100 (&opaqueValue149);
    callbackFunction148 = (void (**) (std::uint64_t*, std::int64_t*))&unk_180F51230;
    opaqueValue149 = opaqueValue146;
    opaqueValue102 = sub_18009EA20 (opaqueValue101);
    sub_18009E570 (opaqueValue102, &opaqueValue114, "tokenDeliveryAckPending");
    sub_1800A6D50 (allocatedObject3, &opaqueValue114, &callbackFunction148);
    stringStorageToRelease103 = (void*)(opaqueValue114 - 16);
    if ((void*)(opaqueValue114 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease103) == -1)
        memoryFree (stringStorageToRelease103);
    callbackFunction104 = (std::int64_t (*)())callbackFunction148[11];
    if (callbackFunction104 != guard_check_icall_nop)
        ((void (*) (std::int64_t*))callbackFunction104) (&opaqueValue149);
    callbackFunction148 = (void (**) (std::uint64_t*, std::int64_t*))&unk_180F51230;
    opaqueValue149 = opaqueValue143;
    opaqueValue105 = sub_18009EA20 (stringStorageToRelease103);
    sub_18009E570 (opaqueValue105, &opaqueValue114, "onboardingCompleted");
    sub_1800A6D50 (allocatedObject3, &opaqueValue114, &callbackFunction148);
    stringStorageToRelease106 = (void*)(opaqueValue114 - 16);
    if ((void*)(opaqueValue114 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease106) == -1)
        memoryFree (stringStorageToRelease106);
    callbackFunction107 = (std::int64_t (*)())callbackFunction148[11];
    if (callbackFunction107 != guard_check_icall_nop)
        ((void (*) (std::int64_t*))callbackFunction107) (&opaqueValue149);
    callbackFunction148 = (void (**) (std::uint64_t*, std::int64_t*))&unk_180F51450;
    opaqueValue149 = opaqueValue144;
    opaqueValue108 = sub_18009EA20 (stringStorageToRelease106);
    sub_18009E570 (opaqueValue108, &opaqueValue114, "onboardingVersion");
    sub_1800A6D50 (allocatedObject3, &opaqueValue114, &callbackFunction148);
    stringStorageToRelease110 = (void*)(opaqueValue114 - 16);
    if ((void*)(opaqueValue114 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease110) == -1)
        memoryFree (stringStorageToRelease110);
    callbackFunction111 = (std::int64_t (*)())callbackFunction148[11];
    if (callbackFunction111 != guard_check_icall_nop)
        ((void (*) (std::int64_t*))callbackFunction111) (&opaqueValue149);
    opaqueValue120 = 0;
    callbackFunction148 = (void (**) (std::uint64_t*, std::int64_t*))&unk_180F513D0;
    opaqueValue149 = allocatedObject3;
    _InterlockedIncrement ((volatile std::int32_t*)(allocatedObject3 + 8));
    sub_1800A6950 (outputJson, &callbackFunction148, 0, opaqueValue109);
    callbackFunction112 = (void (*) (std::int64_t*))callbackFunction148[11];
    if ((char*)callbackFunction112 == (char*)sub_18000B9A0)
        sub_18000B9A0 (&opaqueValue149);
    else
        callbackFunction112 (&opaqueValue149);
    sub_180058EA0 (stackStorage121);
    return outputJson;
}
