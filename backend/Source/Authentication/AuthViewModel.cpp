#include <cstdint>

// ===== AuthState_SerializeForWebView @ 0x1806ccf20 size=3901 =====
// serializes full auth state for WebView bridge
std::int64_t authStateBuildWebViewJson (std::int64_t panel, std::int64_t outputJson)
{
    std::int64_t allocatedObject4; // r14
    std::int64_t opaqueValue5; // rcx
    std::int64_t opaqueValue6; // rbx
    void (*callbackFunction7) (std::int64_t, char**, void (***) (std::uint64_t*)); // rbx
    char* stringStorageToRelease8; // rcx
    std::int64_t (*callbackFunction9)(); // rdx
    std::int64_t opaqueValue10; // rbx
    void (*callbackFunction11) (std::int64_t, char**, void (***) (std::uint64_t*)); // rbx
    char* stringStorageToRelease12; // rcx
    std::int64_t (*callbackFunction13)(); // rdx
    std::int64_t opaqueValue14; // rbx
    void (*callbackFunction15) (std::int64_t, char**, void (***) (std::uint64_t*)); // rbx
    char* stringStorageToRelease16; // rcx
    std::int64_t (*callbackFunction17)(); // rdx
    std::int64_t opaqueValue18; // rbx
    void (*callbackFunction19) (std::int64_t, char**, void (***) (std::uint64_t*)); // rbx
    char* stringStorageToRelease20; // rcx
    void (*callbackFunction21) (std::int64_t*); // rdx
    std::int64_t opaqueValue22; // rcx
    std::int64_t opaqueValue23; // rbx
    void (*callbackFunction24) (std::int64_t, char**, void (***) (std::uint64_t*)); // rbx
    char* stringStorageToRelease25; // rcx
    void (*callbackFunction26) (std::int64_t*); // rdx
    std::int64_t opaqueValue27; // rcx
    std::int64_t opaqueValue28; // rbx
    void (*callbackFunction29) (std::int64_t, char**, void (***) (std::uint64_t*)); // rbx
    char* stringStorageToRelease30; // rcx
    void (*callbackFunction31) (std::int64_t*); // rdx
    std::int64_t opaqueValue32; // rcx
    std::int64_t opaqueValue33; // rbx
    void (*callbackFunction34) (std::int64_t, char**, void (***) (std::uint64_t*)); // rbx
    char* stringStorageToRelease35; // rcx
    std::int64_t (*callbackFunction36)(); // rdx
    std::int64_t opaqueValue37; // rbx
    void (*callbackFunction38) (std::int64_t, char**, void (***) (std::uint64_t*)); // rbx
    char* stringStorageToRelease39; // rcx
    std::int64_t (*callbackFunction40)(); // rdx
    std::int64_t opaqueValue41; // rbx
    void (*callbackFunction42) (std::int64_t, char**, void (***) (std::uint64_t*)); // rbx
    char* stringStorageToRelease43; // rcx
    std::int64_t (*callbackFunction44)(); // rdx
    std::int64_t opaqueValue45; // rbx
    void (*callbackFunction46) (std::int64_t, char**, void (***) (std::uint64_t*)); // rbx
    char* stringStorageToRelease47; // rcx
    std::int64_t (*callbackFunction48)(); // rdx
    std::int64_t opaqueValue49; // rbx
    char* stringStorageToRelease50; // rcx
    void (*callbackFunction51) (std::int64_t*); // rdx
    std::int64_t opaqueValue52; // rcx
    std::int64_t opaqueValue53; // rbx
    char* stringStorageToRelease54; // rcx
    void (*callbackFunction55) (std::int64_t*); // rdx
    std::int64_t opaqueValue56; // rcx
    std::int64_t opaqueValue57; // rax
    std::int64_t opaqueValue58; // rdi
    struct _RTL_CRITICAL_SECTION* criticalSection59; // rbx
    char* stringStorageToRelease60; // rcx
    std::int64_t (*callbackFunction61)(); // rdx
    std::int64_t opaqueValue62; // rax
    std::int64_t opaqueValue63; // rax
    std::int64_t opaqueValue64; // rbx
    std::int64_t opaqueValue65; // rdi
    std::uint8_t* temporaryPointer66; // rax
    int opaqueValue67; // r14d
    int i; // ecx
    std::int64_t opaqueValue69; // r15
    std::int64_t opaqueValue70; // rbx
    std::uint8_t* temporaryPointer71; // rax
    void* stringStorageToRelease72; // rcx
    void* stringStorageToRelease73; // rcx
    void* stringStorageToRelease74; // rcx
    void* stringStorageToRelease75; // rcx
    char* stringStorageToRelease76; // rcx
    void* stringStorageToRelease77; // rcx
    char* stringStorageToRelease78; // rcx
    void (*callbackFunction79) (std::int64_t*); // rdx
    char* temporaryPointer81; // [rsp+30h] [rbp-49h] BYREF
    std::int64_t opaqueValue82; // [rsp+38h] [rbp-41h] BYREF
    std::uint64_t stackStorage83[2]; // [rsp+40h] [rbp-39h] BYREF
    std::uint64_t stackStorage84[3]; // [rsp+50h] [rbp-29h] BYREF
    std::int64_t opaqueValue85; // [rsp+68h] [rbp-11h]
    std::int64_t opaqueValue86; // [rsp+70h] [rbp-9h] BYREF
    std::int64_t opaqueValue87; // [rsp+78h] [rbp-1h] BYREF
    char* temporaryPointer88; // [rsp+80h] [rbp+7h] BYREF
    std::int64_t opaqueValue89; // [rsp+88h] [rbp+Fh] BYREF
    void (**callbackFunction90) (std::uint64_t*); // [rsp+90h] [rbp+17h] BYREF
    std::int64_t revision91; // [rsp+98h] [rbp+1Fh] BYREF
    char opaqueValue92; // [rsp+A0h] [rbp+27h]

    allocatedObject4 = memoryAllocateObject (32);
    opaqueValue82 = allocatedObject4;
    *(std::uint32_t*)(allocatedObject4 + 8) = 0;
    *(std::uint64_t*)allocatedObject4 = &juce::DynamicObject::`vftable';
    *(std::uint64_t*)(allocatedObject4 + 16) = 0;
    *(std::uint64_t*)(allocatedObject4 + 24) = 0;
    opaqueValue85 = allocatedObject4;
    temporaryPointer88 = (char*)&unk_180F51230;
    opaqueValue89 = 0;
    LOBYTE (opaqueValue89) = *(std::uint8_t*)(panel + 712);
    opaqueValue6 = sub_18009EA20 (opaqueValue5);
    opaqueValue82 = opaqueValue6 + 16;
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue6 + 16));
    sub_18009E8C0 (opaqueValue6);
    stackStorage83[0] = "activated";
    sub_1800B4BF0 (&temporaryPointer81, opaqueValue6, stackStorage83);
    LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue6 + 16));
    sub_18008A110 (allocatedObject4 + 16, &temporaryPointer81, &temporaryPointer88);
    callbackFunction7 = *(void (**) (std::int64_t, char**, void (***) (std::uint64_t*))) (*(std::uint64_t*)allocatedObject4 + 24LL);
    callbackFunction90 = (void (**) (std::uint64_t*))temporaryPointer88;
    revision91 = 0;
    (*((void (**) (std::int64_t*, std::int64_t*))temporaryPointer88 + 12)) (&revision91, &opaqueValue89);
    opaqueValue92 = 1;
    callbackFunction7 (allocatedObject4, &temporaryPointer81, &callbackFunction90);
    if (opaqueValue92 != 0)
        callbackFunction90[11](&revision91);
    stringStorageToRelease8 = temporaryPointer81 - 16;
    if (temporaryPointer81 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease8) == -1)
        memoryFree (stringStorageToRelease8);
    callbackFunction9 = *((std::int64_t (**)())temporaryPointer88 + 11);
    if (callbackFunction9 != guard_check_icall_nop)
        ((void (*) (std::int64_t*))callbackFunction9) (&opaqueValue89);
    temporaryPointer88 = (char*)&unk_180F51230;
    opaqueValue89 = 0;
    LOBYTE (opaqueValue89) = *(std::uint8_t*)(panel + 713);
    opaqueValue10 = sub_18009EA20 (stringStorageToRelease8);
    opaqueValue82 = opaqueValue10 + 16;
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue10 + 16));
    sub_18009E8C0 (opaqueValue10);
    stackStorage83[0] = "storeManaged";
    sub_1800B4BF0 (&temporaryPointer81, opaqueValue10, stackStorage83);
    LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue10 + 16));
    sub_18008A110 (allocatedObject4 + 16, &temporaryPointer81, &temporaryPointer88);
    callbackFunction11 = *(void (**) (std::int64_t, char**, void (***) (std::uint64_t*))) (*(std::uint64_t*)allocatedObject4 + 24LL);
    callbackFunction90 = (void (**) (std::uint64_t*))temporaryPointer88;
    revision91 = 0;
    (*((void (**) (std::int64_t*, std::int64_t*))temporaryPointer88 + 12)) (&revision91, &opaqueValue89);
    opaqueValue92 = 1;
    callbackFunction11 (allocatedObject4, &temporaryPointer81, &callbackFunction90);
    if (opaqueValue92 != 0)
        callbackFunction90[11](&revision91);
    stringStorageToRelease12 = temporaryPointer81 - 16;
    if (temporaryPointer81 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease12) == -1)
        memoryFree (stringStorageToRelease12);
    callbackFunction13 = *((std::int64_t (**)())temporaryPointer88 + 11);
    if (callbackFunction13 != guard_check_icall_nop)
        ((void (*) (std::int64_t*))callbackFunction13) (&opaqueValue89);
    temporaryPointer88 = (char*)&unk_180F51230;
    opaqueValue89 = 0;
    LOBYTE (opaqueValue89) = *(std::uint8_t*)(panel + 714);
    opaqueValue14 = sub_18009EA20 (stringStorageToRelease12);
    opaqueValue82 = opaqueValue14 + 16;
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue14 + 16));
    sub_18009E8C0 (opaqueValue14);
    stackStorage83[0] = "standalone";
    sub_1800B4BF0 (&temporaryPointer81, opaqueValue14, stackStorage83);
    LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue14 + 16));
    sub_18008A110 (allocatedObject4 + 16, &temporaryPointer81, &temporaryPointer88);
    callbackFunction15 = *(void (**) (std::int64_t, char**, void (***) (std::uint64_t*))) (*(std::uint64_t*)allocatedObject4 + 24LL);
    callbackFunction90 = (void (**) (std::uint64_t*))temporaryPointer88;
    revision91 = 0;
    (*((void (**) (std::int64_t*, std::int64_t*))temporaryPointer88 + 12)) (&revision91, &opaqueValue89);
    opaqueValue92 = 1;
    callbackFunction15 (allocatedObject4, &temporaryPointer81, &callbackFunction90);
    if (opaqueValue92 != 0)
        callbackFunction90[11](&revision91);
    stringStorageToRelease16 = temporaryPointer81 - 16;
    if (temporaryPointer81 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease16) == -1)
        memoryFree (stringStorageToRelease16);
    callbackFunction17 = *((std::int64_t (**)())temporaryPointer88 + 11);
    if (callbackFunction17 != guard_check_icall_nop)
        ((void (*) (std::int64_t*))callbackFunction17) (&opaqueValue89);
    temporaryPointer88 = (char*)&unk_180F512B0;
    opaqueValue89 = *(std::uint64_t*)(panel + 720);
    if ((void*)(opaqueValue89 - 16) != &emptyJuceStringStorage)
        _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue89 - 16));
    opaqueValue18 = sub_18009EA20 (stringStorageToRelease16);
    opaqueValue82 = opaqueValue18 + 16;
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue18 + 16));
    sub_18009E8C0 (opaqueValue18);
    stackStorage83[0] = "deviceCode";
    sub_1800B4BF0 (&temporaryPointer81, opaqueValue18, stackStorage83);
    LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue18 + 16));
    sub_18008A110 (allocatedObject4 + 16, &temporaryPointer81, &temporaryPointer88);
    callbackFunction19 = *(void (**) (std::int64_t, char**, void (***) (std::uint64_t*))) (*(std::uint64_t*)allocatedObject4 + 24LL);
    callbackFunction90 = (void (**) (std::uint64_t*))temporaryPointer88;
    revision91 = 0;
    (*((void (**) (std::int64_t*, std::int64_t*))temporaryPointer88 + 12)) (&revision91, &opaqueValue89);
    opaqueValue92 = 1;
    callbackFunction19 (allocatedObject4, &temporaryPointer81, &callbackFunction90);
    if (opaqueValue92 != 0)
        callbackFunction90[11](&revision91);
    stringStorageToRelease20 = temporaryPointer81 - 16;
    if (temporaryPointer81 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease20) == -1)
        memoryFree (stringStorageToRelease20);
    callbackFunction21 = *((void (**) (std::int64_t*))temporaryPointer88 + 11);
    if ((char*)callbackFunction21 == (char*)sub_18000B8D0)
        sub_180023C60 (&opaqueValue89, 0);
    else
        callbackFunction21 (&opaqueValue89);
    temporaryPointer88 = (char*)&unk_180F512B0;
    opaqueValue89 = *(std::uint64_t*)(panel + 728);
    if ((void*)(opaqueValue89 - 16) != &emptyJuceStringStorage)
        _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue89 - 16));
    opaqueValue23 = sub_18009EA20 (opaqueValue22);
    opaqueValue82 = opaqueValue23 + 16;
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue23 + 16));
    sub_18009E8C0 (opaqueValue23);
    stackStorage83[0] = "email";
    sub_1800B4BF0 (&temporaryPointer81, opaqueValue23, stackStorage83);
    LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue23 + 16));
    sub_18008A110 (allocatedObject4 + 16, &temporaryPointer81, &temporaryPointer88);
    callbackFunction24 = *(void (**) (std::int64_t, char**, void (***) (std::uint64_t*))) (*(std::uint64_t*)allocatedObject4 + 24LL);
    callbackFunction90 = (void (**) (std::uint64_t*))temporaryPointer88;
    revision91 = 0;
    (*((void (**) (std::int64_t*, std::int64_t*))temporaryPointer88 + 12)) (&revision91, &opaqueValue89);
    opaqueValue92 = 1;
    callbackFunction24 (allocatedObject4, &temporaryPointer81, &callbackFunction90);
    if (opaqueValue92 != 0)
        callbackFunction90[11](&revision91);
    stringStorageToRelease25 = temporaryPointer81 - 16;
    if (temporaryPointer81 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease25) == -1)
        memoryFree (stringStorageToRelease25);
    callbackFunction26 = *((void (**) (std::int64_t*))temporaryPointer88 + 11);
    if ((char*)callbackFunction26 == (char*)sub_18000B8D0)
        sub_180023C60 (&opaqueValue89, 0);
    else
        callbackFunction26 (&opaqueValue89);
    temporaryPointer88 = (char*)&unk_180F512B0;
    opaqueValue89 = *(std::uint64_t*)(panel + 736);
    if ((void*)(opaqueValue89 - 16) != &emptyJuceStringStorage)
        _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue89 - 16));
    opaqueValue28 = sub_18009EA20 (opaqueValue27);
    opaqueValue82 = opaqueValue28 + 16;
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue28 + 16));
    sub_18009E8C0 (opaqueValue28);
    stackStorage83[0] = "tier";
    sub_1800B4BF0 (&temporaryPointer81, opaqueValue28, stackStorage83);
    LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue28 + 16));
    sub_18008A110 (allocatedObject4 + 16, &temporaryPointer81, &temporaryPointer88);
    callbackFunction29 = *(void (**) (std::int64_t, char**, void (***) (std::uint64_t*))) (*(std::uint64_t*)allocatedObject4 + 24LL);
    callbackFunction90 = (void (**) (std::uint64_t*))temporaryPointer88;
    revision91 = 0;
    (*((void (**) (std::int64_t*, std::int64_t*))temporaryPointer88 + 12)) (&revision91, &opaqueValue89);
    opaqueValue92 = 1;
    callbackFunction29 (allocatedObject4, &temporaryPointer81, &callbackFunction90);
    if (opaqueValue92 != 0)
        callbackFunction90[11](&revision91);
    stringStorageToRelease30 = temporaryPointer81 - 16;
    if (temporaryPointer81 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease30) == -1)
        memoryFree (stringStorageToRelease30);
    callbackFunction31 = *((void (**) (std::int64_t*))temporaryPointer88 + 11);
    if ((char*)callbackFunction31 == (char*)sub_18000B8D0)
        sub_180023C60 (&opaqueValue89, 0);
    else
        callbackFunction31 (&opaqueValue89);
    temporaryPointer88 = (char*)&unk_180F51230;
    opaqueValue89 = 0;
    LOBYTE (opaqueValue89) = *(std::uint8_t*)(panel + 744);
    opaqueValue33 = sub_18009EA20 (opaqueValue32);
    opaqueValue82 = opaqueValue33 + 16;
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue33 + 16));
    sub_18009E8C0 (opaqueValue33);
    stackStorage83[0] = "isTrial";
    sub_1800B4BF0 (&temporaryPointer81, opaqueValue33, stackStorage83);
    LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue33 + 16));
    sub_18008A110 (allocatedObject4 + 16, &temporaryPointer81, &temporaryPointer88);
    callbackFunction34 = *(void (**) (std::int64_t, char**, void (***) (std::uint64_t*))) (*(std::uint64_t*)allocatedObject4 + 24LL);
    callbackFunction90 = (void (**) (std::uint64_t*))temporaryPointer88;
    revision91 = 0;
    (*((void (**) (std::int64_t*, std::int64_t*))temporaryPointer88 + 12)) (&revision91, &opaqueValue89);
    opaqueValue92 = 1;
    callbackFunction34 (allocatedObject4, &temporaryPointer81, &callbackFunction90);
    if (opaqueValue92 != 0)
        callbackFunction90[11](&revision91);
    stringStorageToRelease35 = temporaryPointer81 - 16;
    if (temporaryPointer81 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease35) == -1)
        memoryFree (stringStorageToRelease35);
    callbackFunction36 = *((std::int64_t (**)())temporaryPointer88 + 11);
    if (callbackFunction36 != guard_check_icall_nop)
        ((void (*) (std::int64_t*))callbackFunction36) (&opaqueValue89);
    temporaryPointer88 = (char*)&unk_180F51350;
    opaqueValue89 = *(std::uint64_t*)(panel + 752);
    opaqueValue37 = sub_18009EA20 (stringStorageToRelease35);
    opaqueValue82 = opaqueValue37 + 16;
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue37 + 16));
    sub_18009E8C0 (opaqueValue37);
    stackStorage83[0] = "trialExpiresAt";
    sub_1800B4BF0 (&temporaryPointer81, opaqueValue37, stackStorage83);
    LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue37 + 16));
    sub_18008A110 (allocatedObject4 + 16, &temporaryPointer81, &temporaryPointer88);
    callbackFunction38 = *(void (**) (std::int64_t, char**, void (***) (std::uint64_t*))) (*(std::uint64_t*)allocatedObject4 + 24LL);
    callbackFunction90 = (void (**) (std::uint64_t*))temporaryPointer88;
    revision91 = 0;
    (*((void (**) (std::int64_t*, std::int64_t*))temporaryPointer88 + 12)) (&revision91, &opaqueValue89);
    opaqueValue92 = 1;
    callbackFunction38 (allocatedObject4, &temporaryPointer81, &callbackFunction90);
    if (opaqueValue92 != 0)
        callbackFunction90[11](&revision91);
    stringStorageToRelease39 = temporaryPointer81 - 16;
    if (temporaryPointer81 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease39) == -1)
        memoryFree (stringStorageToRelease39);
    callbackFunction40 = *((std::int64_t (**)())temporaryPointer88 + 11);
    if (callbackFunction40 != guard_check_icall_nop)
        ((void (*) (std::int64_t*))callbackFunction40) (&opaqueValue89);
    temporaryPointer88 = (char*)&unk_180F51350;
    opaqueValue89 = *(std::uint64_t*)(panel + 760);
    opaqueValue41 = sub_18009EA20 (stringStorageToRelease39);
    opaqueValue82 = opaqueValue41 + 16;
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue41 + 16));
    sub_18009E8C0 (opaqueValue41);
    stackStorage83[0] = "entitlementExpiresAt";
    sub_1800B4BF0 (&temporaryPointer81, opaqueValue41, stackStorage83);
    LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue41 + 16));
    sub_18008A110 (allocatedObject4 + 16, &temporaryPointer81, &temporaryPointer88);
    callbackFunction42 = *(void (**) (std::int64_t, char**, void (***) (std::uint64_t*))) (*(std::uint64_t*)allocatedObject4 + 24LL);
    callbackFunction90 = (void (**) (std::uint64_t*))temporaryPointer88;
    revision91 = 0;
    (*((void (**) (std::int64_t*, std::int64_t*))temporaryPointer88 + 12)) (&revision91, &opaqueValue89);
    opaqueValue92 = 1;
    callbackFunction42 (allocatedObject4, &temporaryPointer81, &callbackFunction90);
    if (opaqueValue92 != 0)
        callbackFunction90[11](&revision91);
    stringStorageToRelease43 = temporaryPointer81 - 16;
    if (temporaryPointer81 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease43) == -1)
        memoryFree (stringStorageToRelease43);
    callbackFunction44 = *((std::int64_t (**)())temporaryPointer88 + 11);
    if (callbackFunction44 != guard_check_icall_nop)
        ((void (*) (std::int64_t*))callbackFunction44) (&opaqueValue89);
    temporaryPointer88 = (char*)&unk_180F51350;
    opaqueValue89 = *(std::uint64_t*)(panel + 768);
    opaqueValue45 = sub_18009EA20 (stringStorageToRelease43);
    opaqueValue82 = opaqueValue45 + 16;
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue45 + 16));
    sub_18009E8C0 (opaqueValue45);
    stackStorage83[0] = "entitlementGraceUntil";
    sub_1800B4BF0 (&temporaryPointer81, opaqueValue45, stackStorage83);
    LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue45 + 16));
    sub_18008A110 (allocatedObject4 + 16, &temporaryPointer81, &temporaryPointer88);
    callbackFunction46 = *(void (**) (std::int64_t, char**, void (***) (std::uint64_t*))) (*(std::uint64_t*)allocatedObject4 + 24LL);
    callbackFunction90 = (void (**) (std::uint64_t*))temporaryPointer88;
    revision91 = 0;
    (*((void (**) (std::int64_t*, std::int64_t*))temporaryPointer88 + 12)) (&revision91, &opaqueValue89);
    opaqueValue92 = 1;
    callbackFunction46 (allocatedObject4, &temporaryPointer81, &callbackFunction90);
    if (opaqueValue92 != 0)
        callbackFunction90[11](&revision91);
    stringStorageToRelease47 = temporaryPointer81 - 16;
    if (temporaryPointer81 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease47) == -1)
        memoryFree (stringStorageToRelease47);
    callbackFunction48 = *((std::int64_t (**)())temporaryPointer88 + 11);
    if (callbackFunction48 != guard_check_icall_nop)
        ((void (*) (std::int64_t*))callbackFunction48) (&opaqueValue89);
    temporaryPointer88 = (char*)&unk_180F512B0;
    opaqueValue89 = *(std::uint64_t*)(panel + 776);
    if ((void*)(opaqueValue89 - 16) != &emptyJuceStringStorage)
        _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue89 - 16));
    opaqueValue49 = sub_18009EA20 (stringStorageToRelease47);
    opaqueValue82 = opaqueValue49 + 16;
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue49 + 16));
    sub_18009E8C0 (opaqueValue49);
    stackStorage83[0] = "error";
    sub_1800B4BF0 (&temporaryPointer81, opaqueValue49, stackStorage83);
    LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue49 + 16));
    sub_1800A6D50 (allocatedObject4, &temporaryPointer81, &temporaryPointer88);
    stringStorageToRelease50 = temporaryPointer81 - 16;
    if (temporaryPointer81 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease50) == -1)
        memoryFree (stringStorageToRelease50);
    callbackFunction51 = *((void (**) (std::int64_t*))temporaryPointer88 + 11);
    if ((char*)callbackFunction51 == (char*)sub_18000B8D0)
        sub_180023C60 (&opaqueValue89, 0);
    else
        callbackFunction51 (&opaqueValue89);
    temporaryPointer88 = (char*)&unk_180F512B0;
    opaqueValue89 = *(std::uint64_t*)(panel + 784);
    if ((void*)(opaqueValue89 - 16) != &emptyJuceStringStorage)
        _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue89 - 16));
    opaqueValue53 = sub_18009EA20 (opaqueValue52);
    opaqueValue82 = opaqueValue53 + 16;
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue53 + 16));
    sub_18009E8C0 (opaqueValue53);
    stackStorage83[0] = "errorCode";
    sub_1800B4BF0 (&temporaryPointer81, opaqueValue53, stackStorage83);
    LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue53 + 16));
    sub_1800A6D50 (allocatedObject4, &temporaryPointer81, &temporaryPointer88);
    stringStorageToRelease54 = temporaryPointer81 - 16;
    if (temporaryPointer81 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease54) == -1)
        memoryFree (stringStorageToRelease54);
    callbackFunction55 = *((void (**) (std::int64_t*))temporaryPointer88 + 11);
    if ((char*)callbackFunction55 == (char*)sub_18000B8D0)
        sub_180023C60 (&opaqueValue89, 0);
    else
        callbackFunction55 (&opaqueValue89);
    callbackFunction90 = (void (**) (std::uint64_t*))&unk_180F51350;
    revision91 = *(std::uint64_t*)(panel + 792);
    opaqueValue57 = sub_18009EA20 (opaqueValue56);
    opaqueValue58 = opaqueValue57;
    if (aRevision[0] != 0)
    {
        criticalSection59 = (struct _RTL_CRITICAL_SECTION*)(opaqueValue57 + 16);
        opaqueValue82 = opaqueValue57 + 16;
        EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue57 + 16));
        sub_18009E8C0 (opaqueValue58);
        stackStorage83[0] = "revision";
        sub_1800B4BF0 (&temporaryPointer81, opaqueValue58, stackStorage83);
        LeaveCriticalSection (criticalSection59);
    }
    else
    {
        temporaryPointer81 = &emptyJuceStringCharacters;
    }
    sub_1800A6D50 (allocatedObject4, &temporaryPointer81, &callbackFunction90);
    stringStorageToRelease60 = temporaryPointer81 - 16;
    if (temporaryPointer81 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease60) == -1)
        memoryFree (stringStorageToRelease60);
    callbackFunction61 = (std::int64_t (*)())callbackFunction90[11];
    if (callbackFunction61 != guard_check_icall_nop)
        ((void (*) (std::int64_t*))callbackFunction61) (&revision91);
    opaqueValue85 = 0;
    callbackFunction90 = (void (**) (std::uint64_t*))&unk_180F513D0;
    revision91 = allocatedObject4;
    _InterlockedIncrement ((volatile std::int32_t*)(allocatedObject4 + 8));
    stackStorage84[0] = 1;
    stackStorage84[1] = 15;
    sub_1800A64C0 (&temporaryPointer81, &callbackFunction90, stackStorage84);
    opaqueValue62 = sub_180099550 (&temporaryPointer81, &opaqueValue82, "&", "\\u0026");
    opaqueValue63 = sub_180099550 (opaqueValue62, &temporaryPointer88, "<", "\\u003C");
    opaqueValue64 = sub_180099550 (opaqueValue63, &opaqueValue87, ">", "\\u003E");
    sub_180096F40 (stackStorage83, 4);
    opaqueValue65 = stackStorage83[0];
    *(std::uint8_t*)stackStorage83[0] = -30;
    temporaryPointer66 = (std::uint8_t*)(opaqueValue65 + 1);
    opaqueValue67 = 6;
    for (i = 6; i >= 0; i -= 6)
        *temporaryPointer66++ = (0x2028u >> i) & 0x3F | 0x80;
    *temporaryPointer66 = 0;
    opaqueValue69 = sub_180099550 (opaqueValue64, &opaqueValue86, opaqueValue65, "\\u2028");
    sub_180096F40 (stackStorage84, 4);
    opaqueValue70 = stackStorage84[0];
    *(std::uint8_t*)stackStorage84[0] = -30;
    temporaryPointer71 = (std::uint8_t*)(opaqueValue70 + 1);
    do
    {
        *temporaryPointer71++ = (0x2029u >> opaqueValue67) & 0x3F | 0x80;
        opaqueValue67 -= 6;
    } while (opaqueValue67 >= 0);
    *temporaryPointer71 = 0;
    sub_180099550 (opaqueValue69, outputJson, opaqueValue70, "\\u2029");
    stringStorageToRelease72 = (void*)(opaqueValue70 - 16);
    if ((void*)(opaqueValue70 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease72) == -1)
        memoryFree (stringStorageToRelease72);
    stringStorageToRelease73 = (void*)(opaqueValue86 - 16);
    if ((void*)(opaqueValue86 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease73) == -1)
        memoryFree (stringStorageToRelease73);
    stringStorageToRelease74 = (void*)(opaqueValue65 - 16);
    if ((void*)(opaqueValue65 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease74) == -1)
        memoryFree (stringStorageToRelease74);
    stringStorageToRelease75 = (void*)(opaqueValue87 - 16);
    if ((void*)(opaqueValue87 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease75) == -1)
        memoryFree (stringStorageToRelease75);
    stringStorageToRelease76 = temporaryPointer88 - 16;
    if (temporaryPointer88 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease76) == -1)
        memoryFree (stringStorageToRelease76);
    stringStorageToRelease77 = (void*)(opaqueValue82 - 16);
    if ((void*)(opaqueValue82 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease77) == -1)
        memoryFree (stringStorageToRelease77);
    stringStorageToRelease78 = temporaryPointer81 - 16;
    if (temporaryPointer81 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease78) == -1)
        memoryFree (stringStorageToRelease78);
    callbackFunction79 = callbackFunction90[11];
    if ((char*)callbackFunction79 == (char*)sub_18000B9A0)
        sub_18000B9A0 (&revision91);
    else
        callbackFunction79 (&revision91);
    return outputJson;
}
