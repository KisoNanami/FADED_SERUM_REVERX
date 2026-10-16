#include <cstdint>

// ===== AuthDiagnostics_BuildJson @ 0x180808c70 size=1761 =====
// diagnostics JSON: activated/verified/revision/tokenExpiresAt/entitlement/entitlementExpiresAt/resetEpoch/masResetEpoch; AUTH_NOT_READY warning when inner+1728==0
const char* authDiagnosticsBuildJson (std::int64_t cliHost, const char* outputJson)
{
    std::int64_t processor; // rax
    std::int64_t processorAlias; // r14
    std::int64_t authManager; // rbx
    std::int64_t sharedAuthState; // rdi
    std::int64_t opaqueValue8; // rcx
    std::int64_t opaqueValue9; // rbx
    std::int64_t opaqueValue10; // rcx
    std::int64_t opaqueValue11; // rbx
    std::uint64_t opaqueValue12; // r8
    char* temporaryPointer13; // r9
    std::int64_t opaqueValue14; // rcx
    std::int64_t opaqueValue15; // rax
    std::int64_t opaqueValue16; // rdi
    struct _RTL_CRITICAL_SECTION* jsonObjectLock; // rbx
    std::int64_t authManagerOrVerificationFlag; // rbx
    std::int64_t initialVerificationState; // rdi
    std::int64_t opaqueValue20; // rax
    std::int64_t opaqueValue21; // rcx
    std::int64_t opaqueValue22; // rbx
    std::int64_t opaqueValue23; // rcx
    std::int64_t opaqueValue24; // rbx
    std::int64_t opaqueValue25; // rax
    std::int64_t opaqueValue26; // rcx
    std::int64_t opaqueValue27; // rbx
    std::int64_t opaqueValue28; // rcx
    std::int64_t opaqueValue29; // rbx
    std::int64_t opaqueValue30; // rcx
    std::int64_t opaqueValue31; // rbx
    std::int64_t allocatedObject32; // rdi
    char* temporaryPointer33; // rbx
    std::int64_t opaqueValue34; // rax
    std::int64_t opaqueValue35; // r8
    char* stringStorageToRelease36; // rcx
    std::int64_t opaqueValue38; // rax
    char* propertyNameOrErrorString; // [rsp+20h] [rbp-E0h] BYREF
    char* temporaryPointer40; // [rsp+28h] [rbp-D8h] BYREF
    char* temporaryPointer41; // [rsp+30h] [rbp-D0h] BYREF
    std::uint8_t authStateSnapshot[120]; // [rsp+40h] [rbp-C0h] BYREF
    std::int64_t opaqueValue43; // [rsp+B8h] [rbp-48h]
    std::int64_t opaqueValue44; // [rsp+C0h] [rbp-40h]
    std::int64_t opaqueValue45; // [rsp+C8h] [rbp-38h]
    std::uint8_t opaqueValue46; // [rsp+F8h] [rbp-8h]
    std::int64_t opaqueValue47; // [rsp+158h] [rbp+58h]
    std::int64_t opaqueValue48; // [rsp+170h] [rbp+70h]
    std::uint64_t opaqueValue49; // [rsp+178h] [rbp+78h]
    const char* temporaryPointer50; // [rsp+180h] [rbp+80h] BYREF
    char stackStorage51[8]; // [rsp+188h] [rbp+88h] BYREF
    void (**callbackFunction52) (std::uint64_t*); // [rsp+190h] [rbp+90h] BYREF
    std::int64_t opaqueValue53; // [rsp+198h] [rbp+98h] BYREF
    char stackStorage54[8]; // [rsp+1A0h] [rbp+A0h] BYREF
    void* temporaryPointer55; // [rsp+1A8h] [rbp+A8h]
    std::int64_t opaqueValue56; // [rsp+1B0h] [rbp+B0h]
    char stackStorage57[8]; // [rsp+1B8h] [rbp+B8h] BYREF
    void* temporaryPointer58; // [rsp+1C0h] [rbp+C0h]
    std::int64_t opaqueValue59; // [rsp+1C8h] [rbp+C8h]
    std::uint64_t stackStorage60[3]; // [rsp+1D0h] [rbp+D0h] BYREF
    char stackStorage61[8]; // [rsp+1E8h] [rbp+E8h] BYREF
    void* temporaryPointer62; // [rsp+1F0h] [rbp+F0h]
    char* temporaryPointer63; // [rsp+1F8h] [rbp+F8h]
    char stackStorage64[8]; // [rsp+200h] [rbp+100h] BYREF
    void* temporaryPointer65; // [rsp+208h] [rbp+108h]
    std::int64_t opaqueValue66; // [rsp+210h] [rbp+110h]
    char stackStorage67[8]; // [rsp+218h] [rbp+118h] BYREF
    void* temporaryPointer68; // [rsp+220h] [rbp+120h]
    char* temporaryPointer69; // [rsp+228h] [rbp+128h]
    char stackStorage70[8]; // [rsp+230h] [rbp+130h] BYREF
    void* temporaryPointer71; // [rsp+238h] [rbp+138h]
    std::int64_t opaqueValue72; // [rsp+240h] [rbp+140h]
    char stackStorage73[8]; // [rsp+248h] [rbp+148h] BYREF
    void* temporaryPointer74; // [rsp+250h] [rbp+150h]
    std::int64_t opaqueValue75; // [rsp+258h] [rbp+158h]
    __int128 opaqueValue76; // [rsp+260h] [rbp+160h] BYREF
    __int128 opaqueValue77; // [rsp+270h] [rbp+170h] BYREF
    std::uint64_t stackStorage78[8]; // [rsp+280h] [rbp+180h] BYREF

    temporaryPointer50 = outputJson;
    processor = cliHostGetProcessor (cliHost);
    processorAlias = processor;
    if (*(std::uint64_t*)(cliHost + 96) != 0)
    {
        authManagerOrVerificationFlag = *(std::uint64_t*)(processor + 475552);
        initialVerificationState = *(std::uint64_t*)(authManagerOrVerificationFlag + 40);
        EnterCriticalSection ((LPCRITICAL_SECTION)(initialVerificationState + 1168));
        LOBYTE (authManagerOrVerificationFlag) = *(std::uint8_t*)(*(std::uint64_t*)(authManagerOrVerificationFlag + 40) + 1728LL);
        LeaveCriticalSection ((LPCRITICAL_SECTION)(initialVerificationState + 1168));
        if ((std::uint8_t)authManagerOrVerificationFlag == 0)
        {
            opaqueValue38 = sub_1800971D0 (&propertyNameOrErrorString, "AUTH_NOT_READY");
            sub_1807FBD40 (opaqueValue38, 5);
        }
    }
    else
    {
        authManagerWaitForInitialVerification (*(std::uint64_t*)(processor + 475552));
    }
    authManager = *(std::uint64_t*)(processorAlias + 475552);
    sharedAuthState = *(std::uint64_t*)(authManager + 40);
    EnterCriticalSection ((LPCRITICAL_SECTION)(sharedAuthState + 1168));
    authManagerSnapshotState ((std::int64_t)authStateSnapshot, *(std::uint64_t*)(authManager + 40));
    LeaveCriticalSection ((LPCRITICAL_SECTION)(sharedAuthState + 1168));
    opaqueValue9 = sub_18009EA20 (opaqueValue8);
    temporaryPointer50 = (const char*)(opaqueValue9 + 16);
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue9 + 16));
    sub_18009E8C0 (opaqueValue9);
    propertyNameOrErrorString = "activated";
    sub_1800B4BF0 (stackStorage54, opaqueValue9, &propertyNameOrErrorString);
    LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue9 + 16));
    temporaryPointer55 = &unk_180F51230;
    opaqueValue56 = authStateSnapshot[0];
    opaqueValue11 = sub_18009EA20 (opaqueValue10);
    temporaryPointer50 = (const char*)(opaqueValue11 + 16);
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue11 + 16));
    sub_18009E8C0 (opaqueValue11);
    propertyNameOrErrorString = "verified";
    sub_1800B4BF0 (stackStorage57, opaqueValue11, &propertyNameOrErrorString);
    LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue11 + 16));
    temporaryPointer58 = &unk_180F51230;
    opaqueValue59 = opaqueValue46;
    opaqueValue12 = opaqueValue49;
    temporaryPointer13 = (char*)&opaqueValue77 + 15;
    HIBYTE (opaqueValue77) = 0;
    do
    {
        *--temporaryPointer13 = opaqueValue12 % 0xA + 48;
        opaqueValue12 /= 0xAu;
    } while (opaqueValue12 != 0);
    juceStringConstructFromUtf8Span (&temporaryPointer40, temporaryPointer13, (char*)&opaqueValue77 + 15 - temporaryPointer13);
    opaqueValue15 = sub_18009EA20 (opaqueValue14);
    opaqueValue16 = opaqueValue15;
    if (aRevision[0] != 0)
    {
        jsonObjectLock = (struct _RTL_CRITICAL_SECTION*)(opaqueValue15 + 16);
        temporaryPointer50 = (const char*)(opaqueValue15 + 16);
        EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue15 + 16));
        sub_18009E8C0 (opaqueValue16);
        propertyNameOrErrorString = "revision";
        sub_1800B4BF0 (stackStorage60, opaqueValue16, &propertyNameOrErrorString);
        LeaveCriticalSection (jsonObjectLock);
    }
    else
    {
        stackStorage60[0] = &emptyJuceStringCharacters;
    }
    stackStorage60[1] = &unk_180F512B0;
    stackStorage60[2] = temporaryPointer40;
    temporaryPointer40 = &emptyJuceStringCharacters;
    opaqueValue20 = sub_180097770 (stackStorage78, opaqueValue43);
    juceStringConstructFromUtf8Span (&temporaryPointer41, opaqueValue20, (char*)&opaqueValue77 - opaqueValue20 + 15);
    opaqueValue22 = sub_18009EA20 (opaqueValue21);
    temporaryPointer50 = (const char*)(opaqueValue22 + 16);
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue22 + 16));
    sub_18009E8C0 (opaqueValue22);
    propertyNameOrErrorString = "tokenExpiresAt";
    sub_1800B4BF0 (stackStorage61, opaqueValue22, &propertyNameOrErrorString);
    LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue22 + 16));
    temporaryPointer62 = &unk_180F512B0;
    temporaryPointer63 = temporaryPointer41;
    temporaryPointer41 = &emptyJuceStringCharacters;
    opaqueValue24 = sub_18009EA20 (opaqueValue23);
    temporaryPointer50 = (const char*)(opaqueValue24 + 16);
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue24 + 16));
    sub_18009E8C0 (opaqueValue24);
    propertyNameOrErrorString = "entitlement";
    sub_1800B4BF0 (stackStorage64, opaqueValue24, &propertyNameOrErrorString);
    LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue24 + 16));
    temporaryPointer65 = &unk_180F512B0;
    opaqueValue66 = opaqueValue44;
    if ((void*)(opaqueValue44 - 16) != &emptyJuceStringStorage)
        _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue44 - 16));
    opaqueValue25 = sub_180097770 (stackStorage78, opaqueValue45);
    juceStringConstructFromUtf8Span (&propertyNameOrErrorString, opaqueValue25, (char*)&opaqueValue77 - opaqueValue25 + 15);
    opaqueValue27 = sub_18009EA20 (opaqueValue26);
    *(std::uint64_t*)&opaqueValue76 = opaqueValue27 + 16;
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue27 + 16));
    sub_18009E8C0 (opaqueValue27);
    temporaryPointer50 = "entitlementExpiresAt";
    sub_1800B4BF0 (stackStorage67, opaqueValue27, &temporaryPointer50);
    LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue27 + 16));
    temporaryPointer68 = &unk_180F512B0;
    temporaryPointer69 = propertyNameOrErrorString;
    propertyNameOrErrorString = &emptyJuceStringCharacters;
    opaqueValue29 = sub_18009EA20 (opaqueValue28);
    *(std::uint64_t*)&opaqueValue76 = opaqueValue29 + 16;
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue29 + 16));
    sub_18009E8C0 (opaqueValue29);
    temporaryPointer50 = "resetEpoch";
    sub_1800B4BF0 (stackStorage70, opaqueValue29, &temporaryPointer50);
    LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue29 + 16));
    temporaryPointer71 = &unk_180F512B0;
    opaqueValue72 = opaqueValue48;
    if ((void*)(opaqueValue48 - 16) != &emptyJuceStringStorage)
        _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue48 - 16));
    opaqueValue31 = sub_18009EA20 (opaqueValue30);
    *(std::uint64_t*)&opaqueValue76 = opaqueValue31 + 16;
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue31 + 16));
    sub_18009E8C0 (opaqueValue31);
    temporaryPointer50 = "masResetEpoch";
    sub_1800B4BF0 (stackStorage73, opaqueValue31, &temporaryPointer50);
    LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue31 + 16));
    temporaryPointer74 = &unk_180F512B0;
    opaqueValue75 = opaqueValue47;
    if ((void*)(opaqueValue47 - 16) != &emptyJuceStringStorage)
        _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue47 - 16));
    allocatedObject32 = memoryAllocateObject (32);
    *(std::uint64_t*)&opaqueValue76 = allocatedObject32;
    *(std::uint32_t*)(allocatedObject32 + 8) = 0;
    *(std::uint64_t*)allocatedObject32 = &juce::DynamicObject::`vftable';
    *(std::uint64_t*)(allocatedObject32 + 16) = 0;
    *(std::uint64_t*)(allocatedObject32 + 24) = 0;
    temporaryPointer33 = stackStorage54;
    do
    {
        sub_1800A6D50 (allocatedObject32, temporaryPointer33, temporaryPointer33 + 8);
        temporaryPointer33 += 24;
    } while (temporaryPointer33 != (char*)&opaqueValue76);
    callbackFunction52 = (void (**) (std::uint64_t*))&unk_180F513D0;
    opaqueValue53 = allocatedObject32;
    _InterlockedIncrement ((volatile std::int32_t*)(allocatedObject32 + 8));
    sub_1809A12FC (stackStorage54, 24, 8, sub_180211140);
    opaqueValue34 = sub_1807FA7E0 (&temporaryPointer50, &callbackFunction52);
    *(std::uint64_t*)&opaqueValue76 = 1;
    *((std::uint64_t*)&opaqueValue76 + 1) = 15;
    sub_1800A64C0 (&propertyNameOrErrorString, opaqueValue34, &opaqueValue76);
    opaqueValue76 = 0;
    opaqueValue77 = 0;
    opaqueValue35 = -1;
    do
        ++opaqueValue35;
    while (propertyNameOrErrorString[opaqueValue35] != 0);
    sub_180471180 (&opaqueValue76, propertyNameOrErrorString, opaqueValue35);
    sub_18009B4C0 (outputJson, &opaqueValue76, 32);
    stringStorageToRelease36 = propertyNameOrErrorString - 16;
    if (propertyNameOrErrorString - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease36) == -1)
        memoryFree (stringStorageToRelease36);
    (*((void (**) (char*))temporaryPointer50 + 11)) (stackStorage51);
    callbackFunction52[11](&opaqueValue53);
    sub_180058EA0 (authStateSnapshot);
    return outputJson;
}

// ===== AuthStatus_AggregateForUi @ 0x18005cdf0 size=6210 =====
// status aggregator for WebView state (authAvailable/activated/verified/error/statusCode 0-599 clamp...)
std::uint64_t* authDiagnosticsBuildProcessorStatus (std::int64_t processor, std::uint64_t* outputStatus)
{
    std::int64_t allocatedObject3; // r12
    std::int64_t opaqueValue4; // rax
    std::int64_t opaqueValue5; // rbx
    void (*callbackFunction6) (std::int64_t, std::int64_t*, void (***) (std::uint64_t*)); // rbx
    void* stringStorageToRelease7; // rcx
    std::int64_t (*callbackFunction8)(); // rdx
    unsigned int opaqueValue9; // eax
    std::int64_t opaqueValue10; // rbx
    void (*callbackFunction11) (std::int64_t, std::int64_t*, void (***) (std::uint64_t*)); // rbx
    void* stringStorageToRelease12; // rcx
    std::int64_t (*callbackFunction13)(); // rdx
    std::int64_t opaqueValue14; // r14
    std::int64_t opaqueValue15; // rax
    std::int64_t opaqueValue16; // rbx
    void (*callbackFunction17) (std::int64_t, std::int64_t*, void (***) (std::uint64_t*)); // rbx
    void* stringStorageToRelease18; // rcx
    std::int64_t (*callbackFunction19)(); // rdx
    unsigned int opaqueValue20; // edi
    std::int64_t opaqueValue21; // rax
    std::int64_t opaqueValue22; // r15
    volatile std::int32_t* temporaryPointer23; // rbx
    std::uint64_t* i; // rcx
    int opaqueValue25; // eax
    std::int64_t opaqueValue26; // rbx
    void (*callbackFunction27) (std::int64_t, std::int64_t*, void (***) (std::uint64_t*)); // rbx
    void* stringStorageToRelease28; // rcx
    std::int64_t (*callbackFunction29)(); // rdx
    std::int64_t opaqueValue30; // r14
    std::uint8_t opaqueValue31; // al
    std::int64_t opaqueValue32; // rbx
    void (*callbackFunction33) (std::int64_t, std::int64_t*, void (***) (std::uint64_t*)); // rbx
    void* stringStorageToRelease34; // rcx
    std::int64_t (*callbackFunction35)(); // rdx
    std::int64_t opaqueValue36; // rbx
    void (*callbackFunction37) (std::int64_t, std::int64_t*, void (***) (std::uint64_t*)); // rbx
    void* stringStorageToRelease38; // rcx
    std::int64_t (*callbackFunction39)(); // rdx
    std::int64_t opaqueValue40; // rbx
    void (*callbackFunction41) (std::int64_t, std::int64_t*, void (***) (std::uint64_t*)); // rbx
    void* stringStorageToRelease42; // rcx
    std::int64_t (*callbackFunction43)(); // rdx
    std::int64_t opaqueValue44; // rbx
    int opaqueValue45; // r15d
    void (*callbackFunction46) (std::int64_t, std::int64_t*, void (***) (std::uint64_t*)); // rbx
    void* stringStorageToRelease47; // rcx
    std::int64_t opaqueValue48; // rcx
    std::int64_t authManagerOrScratch49; // rdi
    std::int64_t opaqueValue50; // rbx
    std::int64_t opaqueValue51; // rcx
    std::int64_t opaqueValue52; // rbx
    void* stringStorageToRelease53; // rcx
    std::int64_t opaqueValue54; // rcx
    std::int64_t opaqueValue55; // rbx
    void* stringStorageToRelease56; // rcx
    std::int64_t (*callbackFunction57)(); // rdx
    std::int64_t opaqueValue58; // rcx
    std::int64_t opaqueValue59; // rbx
    void* stringStorageToRelease60; // rcx
    std::int64_t (*callbackFunction61)(); // rdx
    std::int64_t* temporaryPointer62; // rax
    std::int64_t opaqueValue63; // rbx
    void* stringStorageToRelease64; // rcx
    void (*callbackFunction65) (std::int64_t*); // rdx
    char* stringStorageToRelease66; // rcx
    unsigned int opaqueValue67; // eax
    std::int64_t opaqueValue68; // rbx
    void* stringStorageToRelease69; // rcx
    std::int64_t (*callbackFunction70)(); // rdx
    std::int64_t opaqueValue71; // rbx
    int opaqueValue72; // r15d
    void (*callbackFunction73) (std::int64_t, std::int64_t*, void (***) (std::uint64_t*)); // rbx
    void* stringStorageToRelease74; // rcx
    std::int64_t (*callbackFunction75)(); // rdx
    std::int64_t opaqueValue76; // r13
    void* stringStorageToRelease77; // rcx
    std::int64_t opaqueValue78; // rbx
    char opaqueValue79; // r15
    std::int64_t opaqueValue80; // rdi
    std::int64_t opaqueValue81; // rax
    volatile std::int32_t* stringStorageToRelease82; // r14
    std::int64_t opaqueValue83; // rbx
    void* stringStorageToRelease84; // rcx
    void (*callbackFunction85) (std::int64_t*); // rdx
    std::int64_t opaqueValue86; // rcx
    std::int64_t opaqueValue87; // rbx
    void* stringStorageToRelease88; // rcx
    std::int64_t (*callbackFunction89)(); // rdx
    std::int64_t* temporaryPointer90; // rax
    std::int64_t opaqueValue91; // rbx
    void* stringStorageToRelease92; // rcx
    char* stringStorageToRelease93; // rcx
    int opaqueValue94; // eax
    int opaqueValue95; // r15d
    std::int64_t opaqueValue96; // rbx
    void* stringStorageToRelease97; // rcx
    std::int64_t (*callbackFunction98)(); // rdx
    std::int64_t opaqueValue99; // rcx
    int opaqueValue100; // eax
    std::int64_t opaqueValue101; // rbx
    void* stringStorageToRelease102; // rcx
    std::int64_t (*callbackFunction103)(); // rdx
    std::int64_t opaqueValue104; // rcx
    int opaqueValue105; // eax
    std::int64_t opaqueValue106; // rbx
    void* stringStorageToRelease107; // rcx
    int opaqueValue108; // eax
    std::int64_t opaqueValue109; // rbx
    void* stringStorageToRelease110; // rcx
    std::int64_t (*callbackFunction111)(); // rdx
    std::uint8_t opaqueValue112; // al
    std::int64_t opaqueValue113; // rax
    void* stringStorageToRelease114; // rcx
    std::int64_t (*callbackFunction115)(); // rdx
    std::uint64_t* result; // rax
    std::int64_t unknownString117; // [rsp+20h] [rbp-E0h] BYREF
    const char* temporaryPointer118; // [rsp+28h] [rbp-D8h] BYREF
    const char* temporaryPointer119; // [rsp+30h] [rbp-D0h] BYREF
    std::int64_t opaqueValue120; // [rsp+38h] [rbp-C8h]
    std::int64_t opaqueValue121; // [rsp+40h] [rbp-C0h] BYREF
    int opaqueValue122; // [rsp+48h] [rbp-B8h]
    std::uint64_t* temporaryPointer123; // [rsp+50h] [rbp-B0h]
    std::uint8_t stackStorage124[64]; // [rsp+60h] [rbp-A0h] BYREF
    std::uint8_t* temporaryPointer125; // [rsp+A0h] [rbp-60h]
    char stackStorage126[8]; // [rsp+A8h] [rbp-58h] BYREF
    int opaqueValue127; // [rsp+B0h] [rbp-50h]
    std::uint8_t opaqueValue128; // [rsp+118h] [rbp+18h]
    void* temporaryPointer129; // [rsp+1A0h] [rbp+A0h] BYREF
    std::int64_t opaqueValue130; // [rsp+1A8h] [rbp+A8h] BYREF
    void (**callbackFunction131) (std::uint64_t*); // [rsp+1B0h] [rbp+B0h] BYREF
    std::int64_t opaqueValue132; // [rsp+1B8h] [rbp+B8h] BYREF
    char opaqueValue133; // [rsp+1C0h] [rbp+C0h]

    temporaryPointer123 = outputStatus;
    opaqueValue121 = processor;
    opaqueValue122 = 0;
    allocatedObject3 = memoryAllocateObject (32);
    temporaryPointer118 = (const char*)allocatedObject3;
    *(std::uint32_t*)(allocatedObject3 + 8) = 0;
    *(std::uint64_t*)allocatedObject3 = &juce::DynamicObject::`vftable';
    *(std::uint64_t*)(allocatedObject3 + 16) = 0;
    *(std::uint64_t*)(allocatedObject3 + 24) = 0;
    sub_1800309B0 (*(std::uint64_t*)(processor + 260680), allocatedObject3);
    opaqueValue4 = *(std::uint64_t*)(processor + 475912);
    temporaryPointer129 = &unk_180F514D0;
    opaqueValue130 = opaqueValue4;
    opaqueValue5 = sub_18009EA20 (&unk_180F514D0);
    temporaryPointer118 = (const char*)(opaqueValue5 + 16);
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue5 + 16));
    sub_18009E8C0 (opaqueValue5);
    temporaryPointer119 = "sampleRate";
    sub_1800B4BF0 (&unknownString117, opaqueValue5, &temporaryPointer119);
    LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue5 + 16));
    sub_18008A110 (allocatedObject3 + 16, &unknownString117, &temporaryPointer129);
    callbackFunction6 = *(void (**) (std::int64_t, std::int64_t*, void (***) (std::uint64_t*))) (*(std::uint64_t*)allocatedObject3 + 24LL);
    callbackFunction131 = (void (**) (std::uint64_t*))temporaryPointer129;
    opaqueValue132 = 0;
    (*((void (**) (std::int64_t*, std::int64_t*))temporaryPointer129 + 12)) (&opaqueValue132, &opaqueValue130);
    opaqueValue133 = 1;
    callbackFunction6 (allocatedObject3, &unknownString117, &callbackFunction131);
    if (opaqueValue133 != 0)
        callbackFunction131[11](&opaqueValue132);
    stringStorageToRelease7 = (void*)(unknownString117 - 16);
    if ((void*)(unknownString117 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease7) == -1)
        memoryFree (stringStorageToRelease7);
    callbackFunction8 = *((std::int64_t (**)())temporaryPointer129 + 11);
    if (callbackFunction8 != guard_check_icall_nop)
        ((void (*) (std::int64_t*))callbackFunction8) (&opaqueValue130);
    opaqueValue9 = *(std::uint32_t*)(processor + 475920);
    temporaryPointer129 = &unk_180F51450;
    opaqueValue130 = opaqueValue9;
    opaqueValue10 = sub_18009EA20 (0);
    temporaryPointer118 = (const char*)(opaqueValue10 + 16);
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue10 + 16));
    sub_18009E8C0 (opaqueValue10);
    temporaryPointer119 = "blockSize";
    sub_1800B4BF0 (&unknownString117, opaqueValue10, &temporaryPointer119);
    LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue10 + 16));
    sub_18008A110 (allocatedObject3 + 16, &unknownString117, &temporaryPointer129);
    callbackFunction11 = *(void (**) (std::int64_t, std::int64_t*, void (***) (std::uint64_t*))) (*(std::uint64_t*)allocatedObject3 + 24LL);
    callbackFunction131 = (void (**) (std::uint64_t*))temporaryPointer129;
    opaqueValue132 = 0;
    (*((void (**) (std::int64_t*, std::int64_t*))temporaryPointer129 + 12)) (&opaqueValue132, &opaqueValue130);
    opaqueValue133 = 1;
    callbackFunction11 (allocatedObject3, &unknownString117, &callbackFunction131);
    if (opaqueValue133 != 0)
        callbackFunction131[11](&opaqueValue132);
    stringStorageToRelease12 = (void*)(unknownString117 - 16);
    if ((void*)(unknownString117 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease12) == -1)
        memoryFree (stringStorageToRelease12);
    callbackFunction13 = *((std::int64_t (**)())temporaryPointer129 + 11);
    if (callbackFunction13 != guard_check_icall_nop)
        ((void (*) (std::int64_t*))callbackFunction13) (&opaqueValue130);
    opaqueValue14 = processor + 69152;
    sub_1803E4E10 (opaqueValue14);
    opaqueValue15 = *(unsigned int*)(opaqueValue14 + 190936);
    temporaryPointer129 = &unk_180F51350;
    opaqueValue130 = opaqueValue15;
    opaqueValue16 = sub_18009EA20 (&unk_180F51350);
    temporaryPointer118 = (const char*)(opaqueValue16 + 16);
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue16 + 16));
    sub_18009E8C0 (opaqueValue16);
    temporaryPointer119 = "wavetableGeneration";
    sub_1800B4BF0 (&unknownString117, opaqueValue16, &temporaryPointer119);
    LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue16 + 16));
    sub_18008A110 (allocatedObject3 + 16, &unknownString117, &temporaryPointer129);
    callbackFunction17 = *(void (**) (std::int64_t, std::int64_t*, void (***) (std::uint64_t*))) (*(std::uint64_t*)allocatedObject3 + 24LL);
    callbackFunction131 = (void (**) (std::uint64_t*))temporaryPointer129;
    opaqueValue132 = 0;
    (*((void (**) (std::int64_t*, std::int64_t*))temporaryPointer129 + 12)) (&opaqueValue132, &opaqueValue130);
    opaqueValue133 = 1;
    callbackFunction17 (allocatedObject3, &unknownString117, &callbackFunction131);
    if (opaqueValue133 != 0)
        callbackFunction131[11](&opaqueValue132);
    stringStorageToRelease18 = (void*)(unknownString117 - 16);
    if ((void*)(unknownString117 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease18) == -1)
        memoryFree (stringStorageToRelease18);
    callbackFunction19 = *((std::int64_t (**)())temporaryPointer129 + 11);
    if (callbackFunction19 != guard_check_icall_nop)
        ((void (*) (std::int64_t*))callbackFunction19) (&opaqueValue130);
    sub_1803E4E10 (opaqueValue14);
    opaqueValue20 = 0;
    sub_1809A7BE0();
    opaqueValue21 = *(std::uint64_t*)(opaqueValue14 + 191048);
    if (opaqueValue21 != 0)
        _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue21 + 8));
    opaqueValue22 = *(std::uint64_t*)(opaqueValue14 + 191040);
    temporaryPointer23 = *(volatile std::int32_t**)(opaqueValue14 + 191048);
    sub_1809A7BF0();
    if (opaqueValue22 != 0)
    {
        for (i = (std::uint64_t*)(opaqueValue22 + 16); i != (std::uint64_t*)(opaqueValue22 + 272); i += 2)
        {
            opaqueValue25 = opaqueValue20++;
            if (*i == 0)
                opaqueValue20 = opaqueValue25;
        }
    }
    if (temporaryPointer23 != nullptr && _InterlockedExchangeAdd (temporaryPointer23 + 2, 0xFFFFFFFF) == 1)
    {
        (**(void (***) (volatile std::int32_t*))temporaryPointer23) (temporaryPointer23);
        if (_InterlockedExchangeAdd (temporaryPointer23 + 3, 0xFFFFFFFF) == 1)
            (*(void (**) (volatile std::int32_t*)) (*(std::uint64_t*)temporaryPointer23 + 8LL)) (temporaryPointer23);
    }
    temporaryPointer129 = &unk_180F51450;
    opaqueValue130 = opaqueValue20;
    opaqueValue26 = sub_18009EA20 (i);
    temporaryPointer118 = (const char*)(opaqueValue26 + 16);
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue26 + 16));
    sub_18009E8C0 (opaqueValue26);
    temporaryPointer119 = "loadedWavetableSlots";
    sub_1800B4BF0 (&unknownString117, opaqueValue26, &temporaryPointer119);
    LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue26 + 16));
    sub_18008A110 (allocatedObject3 + 16, &unknownString117, &temporaryPointer129);
    callbackFunction27 = *(void (**) (std::int64_t, std::int64_t*, void (***) (std::uint64_t*))) (*(std::uint64_t*)allocatedObject3 + 24LL);
    callbackFunction131 = (void (**) (std::uint64_t*))temporaryPointer129;
    opaqueValue132 = 0;
    (*((void (**) (std::int64_t*, std::int64_t*))temporaryPointer129 + 12)) (&opaqueValue132, &opaqueValue130);
    opaqueValue133 = 1;
    callbackFunction27 (allocatedObject3, &unknownString117, &callbackFunction131);
    if (opaqueValue133 != 0)
        callbackFunction131[11](&opaqueValue132);
    stringStorageToRelease28 = (void*)(unknownString117 - 16);
    if ((void*)(unknownString117 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease28) == -1)
        memoryFree (stringStorageToRelease28);
    callbackFunction29 = *((std::int64_t (**)())temporaryPointer129 + 11);
    if (callbackFunction29 != guard_check_icall_nop)
        ((void (*) (std::int64_t*))callbackFunction29) (&opaqueValue130);
    opaqueValue30 = opaqueValue121;
    opaqueValue31 = sub_180056530 (opaqueValue121);
    temporaryPointer129 = &unk_180F51230;
    opaqueValue130 = opaqueValue31;
    opaqueValue32 = sub_18009EA20 (0);
    temporaryPointer118 = (const char*)(opaqueValue32 + 16);
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue32 + 16));
    sub_18009E8C0 (opaqueValue32);
    temporaryPointer119 = "stateRestoreBusy";
    sub_1800B4BF0 (&unknownString117, opaqueValue32, &temporaryPointer119);
    LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue32 + 16));
    sub_18008A110 (allocatedObject3 + 16, &unknownString117, &temporaryPointer129);
    callbackFunction33 = *(void (**) (std::int64_t, std::int64_t*, void (***) (std::uint64_t*))) (*(std::uint64_t*)allocatedObject3 + 24LL);
    callbackFunction131 = (void (**) (std::uint64_t*))temporaryPointer129;
    opaqueValue132 = 0;
    (*((void (**) (std::int64_t*, std::int64_t*))temporaryPointer129 + 12)) (&opaqueValue132, &opaqueValue130);
    opaqueValue133 = 1;
    callbackFunction33 (allocatedObject3, &unknownString117, &callbackFunction131);
    if (opaqueValue133 != 0)
        callbackFunction131[11](&opaqueValue132);
    stringStorageToRelease34 = (void*)(unknownString117 - 16);
    if ((void*)(unknownString117 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease34) == -1)
        memoryFree (stringStorageToRelease34);
    callbackFunction35 = *((std::int64_t (**)())temporaryPointer129 + 11);
    if (callbackFunction35 != guard_check_icall_nop)
        ((void (*) (std::int64_t*))callbackFunction35) (&opaqueValue130);
    temporaryPointer129 = &unk_180F51230;
    opaqueValue130 = 1;
    opaqueValue36 = sub_18009EA20 (&unk_180F51230);
    temporaryPointer118 = (const char*)(opaqueValue36 + 16);
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue36 + 16));
    sub_18009E8C0 (opaqueValue36);
    temporaryPointer119 = "versionUseAllowed";
    sub_1800B4BF0 (&unknownString117, opaqueValue36, &temporaryPointer119);
    LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue36 + 16));
    sub_18008A110 (allocatedObject3 + 16, &unknownString117, &temporaryPointer129);
    callbackFunction37 = *(void (**) (std::int64_t, std::int64_t*, void (***) (std::uint64_t*))) (*(std::uint64_t*)allocatedObject3 + 24LL);
    callbackFunction131 = (void (**) (std::uint64_t*))temporaryPointer129;
    opaqueValue132 = 0;
    (*((void (**) (std::int64_t*, std::int64_t*))temporaryPointer129 + 12)) (&opaqueValue132, &opaqueValue130);
    opaqueValue133 = 1;
    callbackFunction37 (allocatedObject3, &unknownString117, &callbackFunction131);
    if (opaqueValue133 != 0)
        callbackFunction131[11](&opaqueValue132);
    stringStorageToRelease38 = (void*)(unknownString117 - 16);
    if ((void*)(unknownString117 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease38) == -1)
        memoryFree (stringStorageToRelease38);
    callbackFunction39 = *((std::int64_t (**)())temporaryPointer129 + 11);
    if (callbackFunction39 != guard_check_icall_nop)
        ((void (*) (std::int64_t*))callbackFunction39) (&opaqueValue130);
    temporaryPointer129 = &unk_180F51230;
    opaqueValue130 = 0;
    opaqueValue40 = sub_18009EA20 (stringStorageToRelease38);
    temporaryPointer118 = (const char*)(opaqueValue40 + 16);
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue40 + 16));
    sub_18009E8C0 (opaqueValue40);
    temporaryPointer119 = "updateRequired";
    sub_1800B4BF0 (&unknownString117, opaqueValue40, &temporaryPointer119);
    LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue40 + 16));
    sub_18008A110 (allocatedObject3 + 16, &unknownString117, &temporaryPointer129);
    callbackFunction41 = *(void (**) (std::int64_t, std::int64_t*, void (***) (std::uint64_t*))) (*(std::uint64_t*)allocatedObject3 + 24LL);
    callbackFunction131 = (void (**) (std::uint64_t*))temporaryPointer129;
    opaqueValue132 = 0;
    (*((void (**) (std::int64_t*, std::int64_t*))temporaryPointer129 + 12)) (&opaqueValue132, &opaqueValue130);
    opaqueValue133 = 1;
    callbackFunction41 (allocatedObject3, &unknownString117, &callbackFunction131);
    if (opaqueValue133 != 0)
        callbackFunction131[11](&opaqueValue132);
    stringStorageToRelease42 = (void*)(unknownString117 - 16);
    if ((void*)(unknownString117 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease42) == -1)
        memoryFree (stringStorageToRelease42);
    callbackFunction43 = *((std::int64_t (**)())temporaryPointer129 + 11);
    if (callbackFunction43 != guard_check_icall_nop)
        ((void (*) (std::int64_t*))callbackFunction43) (&opaqueValue130);
    temporaryPointer129 = &unk_180F51230;
    opaqueValue130 = 0;
    LOBYTE (opaqueValue130) = *(std::uint64_t*)(opaqueValue30 + 475552) != 0;
    opaqueValue44 = sub_18009EA20 (stringStorageToRelease42);
    temporaryPointer118 = (const char*)(opaqueValue44 + 16);
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue44 + 16));
    sub_18009E8C0 (opaqueValue44);
    temporaryPointer119 = "authAvailable";
    sub_1800B4BF0 (&unknownString117, opaqueValue44, &temporaryPointer119);
    opaqueValue45 = 2040;
    LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue44 + 16));
    sub_18008A110 (allocatedObject3 + 16, &unknownString117, &temporaryPointer129);
    callbackFunction46 = *(void (**) (std::int64_t, std::int64_t*, void (***) (std::uint64_t*))) (*(std::uint64_t*)allocatedObject3 + 24LL);
    callbackFunction131 = (void (**) (std::uint64_t*))temporaryPointer129;
    opaqueValue132 = 0;
    (*((void (**) (std::int64_t*, std::int64_t*))temporaryPointer129 + 12)) (&opaqueValue132, &opaqueValue130);
    opaqueValue133 = 1;
    callbackFunction46 (allocatedObject3, &unknownString117, &callbackFunction131);
    if (opaqueValue133 != 0)
        callbackFunction131[11](&opaqueValue132);
    stringStorageToRelease47 = (void*)(unknownString117 - 16);
    if ((void*)(unknownString117 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease47) == -1)
        memoryFree (stringStorageToRelease47);
    (*((void (**) (std::int64_t*))temporaryPointer129 + 11)) (&opaqueValue130);
    authManagerOrScratch49 = *(std::uint64_t*)(opaqueValue30 + 475552);
    if (authManagerOrScratch49 != 0)
    {
        opaqueValue50 = *(std::uint64_t*)(authManagerOrScratch49 + 40);
        EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue50 + 1168));
        authManagerSnapshotState ((std::int64_t)stackStorage124, *(std::uint64_t*)(authManagerOrScratch49 + 40));
        LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue50 + 1168));
        temporaryPointer129 = &unk_180F51230;
        opaqueValue130 = stackStorage124[0];
        opaqueValue52 = sub_18009EA20 (opaqueValue51);
        temporaryPointer118 = (const char*)(opaqueValue52 + 16);
        EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue52 + 16));
        sub_18009E8C0 (opaqueValue52);
        temporaryPointer119 = "authActivated";
        sub_1800B4BF0 (&unknownString117, opaqueValue52, &temporaryPointer119);
        LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue52 + 16));
        sub_1800A6D50 (allocatedObject3, &unknownString117, &temporaryPointer129);
        stringStorageToRelease53 = (void*)(unknownString117 - 16);
        if ((void*)(unknownString117 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease53) == -1)
            memoryFree (stringStorageToRelease53);
        (*((void (**) (std::int64_t*))temporaryPointer129 + 11)) (&opaqueValue130);
        temporaryPointer129 = &unk_180F51230;
        opaqueValue130 = opaqueValue128;
        opaqueValue55 = sub_18009EA20 (opaqueValue54);
        temporaryPointer118 = (const char*)(opaqueValue55 + 16);
        EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue55 + 16));
        sub_18009E8C0 (opaqueValue55);
        temporaryPointer119 = "authVerified";
        sub_1800B4BF0 (&unknownString117, opaqueValue55, &temporaryPointer119);
        LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue55 + 16));
        sub_1800A6D50 (allocatedObject3, &unknownString117, &temporaryPointer129);
        stringStorageToRelease56 = (void*)(unknownString117 - 16);
        if ((void*)(unknownString117 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease56) == -1)
            memoryFree (stringStorageToRelease56);
        callbackFunction57 = *((std::int64_t (**)())temporaryPointer129 + 11);
        if (callbackFunction57 != guard_check_icall_nop)
            ((void (*) (std::int64_t*))callbackFunction57) (&opaqueValue130);
        opaqueValue58 = *temporaryPointer125;
        temporaryPointer129 = &unk_180F51230;
        opaqueValue130 = (std::uint8_t)opaqueValue58 != 0;
        opaqueValue59 = sub_18009EA20 (opaqueValue58);
        temporaryPointer118 = (const char*)(opaqueValue59 + 16);
        EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue59 + 16));
        sub_18009E8C0 (opaqueValue59);
        temporaryPointer119 = "authError";
        sub_1800B4BF0 (&unknownString117, opaqueValue59, &temporaryPointer119);
        LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue59 + 16));
        sub_1800A6D50 (allocatedObject3, &unknownString117, &temporaryPointer129);
        stringStorageToRelease60 = (void*)(unknownString117 - 16);
        if ((void*)(unknownString117 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease60) == -1)
            memoryFree (stringStorageToRelease60);
        callbackFunction61 = *((std::int64_t (**)())temporaryPointer129 + 11);
        if (callbackFunction61 != guard_check_icall_nop)
            ((void (*) (std::int64_t*))callbackFunction61) (&opaqueValue130);
        temporaryPointer62 = (std::int64_t*)sub_180035BC0 (&temporaryPointer118, stackStorage126);
        temporaryPointer129 = &unk_180F512B0;
        opaqueValue130 = 0;
        opaqueValue130 = *temporaryPointer62;
        *temporaryPointer62 = (std::int64_t)&emptyJuceStringCharacters;
        opaqueValue63 = sub_18009EA20 (temporaryPointer62);
        opaqueValue120 = opaqueValue63 + 16;
        EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue63 + 16));
        sub_18009E8C0 (opaqueValue63);
        temporaryPointer119 = "authErrorCode";
        sub_1800B4BF0 (&unknownString117, opaqueValue63, &temporaryPointer119);
        LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue63 + 16));
        sub_1800A6D50 (allocatedObject3, &unknownString117, &temporaryPointer129);
        stringStorageToRelease64 = (void*)(unknownString117 - 16);
        if ((void*)(unknownString117 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease64) == -1)
            memoryFree (stringStorageToRelease64);
        callbackFunction65 = *((void (**) (std::int64_t*))temporaryPointer129 + 11);
        if ((char*)callbackFunction65 == (char*)sub_18000B8D0)
            sub_180023C60 (&opaqueValue130, 0);
        else
            callbackFunction65 (&opaqueValue130);
        stringStorageToRelease66 = (char*)(temporaryPointer118 - 16);
        if (temporaryPointer118 - 16 != (const char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease66) == -1)
            memoryFree (stringStorageToRelease66);
        opaqueValue67 = opaqueValue127;
        if (opaqueValue127 >= 0)
        {
            if (opaqueValue127 > 599)
                opaqueValue67 = 599;
        }
        else
        {
            opaqueValue67 = 0;
        }
        temporaryPointer129 = &unk_180F51450;
        opaqueValue130 = opaqueValue67;
        opaqueValue68 = sub_18009EA20 (0);
        opaqueValue120 = opaqueValue68 + 16;
        EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue68 + 16));
        sub_18009E8C0 (opaqueValue68);
        temporaryPointer118 = "authStatusCode";
        sub_1800B4BF0 (&unknownString117, opaqueValue68, &temporaryPointer118);
        opaqueValue45 = 129016;
        LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue68 + 16));
        sub_1800A6D50 (allocatedObject3, &unknownString117, &temporaryPointer129);
        stringStorageToRelease69 = (void*)(unknownString117 - 16);
        if ((void*)(unknownString117 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease69) == -1)
            memoryFree (stringStorageToRelease69);
        callbackFunction70 = *((std::int64_t (**)())temporaryPointer129 + 11);
        if (callbackFunction70 != guard_check_icall_nop)
            ((void (*) (std::int64_t*))callbackFunction70) (&opaqueValue130);
        sub_180058EA0 (stackStorage124);
    }
    temporaryPointer129 = &unk_180F51230;
    opaqueValue130 = 0;
    LOBYTE (opaqueValue130) = *(std::uint64_t*)(opaqueValue30 + 475560) != 0;
    opaqueValue71 = sub_18009EA20 (opaqueValue48);
    opaqueValue120 = opaqueValue71 + 16;
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue71 + 16));
    sub_18009E8C0 (opaqueValue71);
    temporaryPointer118 = "altAvailable";
    sub_1800B4BF0 (&unknownString117, opaqueValue71, &temporaryPointer118);
    opaqueValue72 = opaqueValue45 | 0x800;
    opaqueValue122 = opaqueValue72;
    LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue71 + 16));
    sub_18008A110 (allocatedObject3 + 16, &unknownString117, &temporaryPointer129);
    callbackFunction73 = *(void (**) (std::int64_t, std::int64_t*, void (***) (std::uint64_t*))) (*(std::uint64_t*)allocatedObject3 + 24LL);
    callbackFunction131 = (void (**) (std::uint64_t*))temporaryPointer129;
    opaqueValue132 = 0;
    (*((void (**) (std::int64_t*, std::int64_t*))temporaryPointer129 + 12)) (&opaqueValue132, &opaqueValue130);
    opaqueValue133 = 1;
    callbackFunction73 (allocatedObject3, &unknownString117, &callbackFunction131);
    if (opaqueValue133 != 0)
        callbackFunction131[11](&opaqueValue132);
    stringStorageToRelease74 = (void*)(unknownString117 - 16);
    if ((void*)(unknownString117 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease74) == -1)
        memoryFree (stringStorageToRelease74);
    callbackFunction75 = *((std::int64_t (**)())temporaryPointer129 + 11);
    if (callbackFunction75 != guard_check_icall_nop)
        ((void (*) (std::int64_t*))callbackFunction75) (&opaqueValue130);
    opaqueValue76 = *(std::uint64_t*)(opaqueValue30 + 475560);
    if (opaqueValue76 != 0)
    {
        if ((int)sub_180089250 (opaqueValue76 + 1672) <= 48 && (std::uint8_t)sub_18009B1B0 (opaqueValue76 + 1672, "abcdefghijklmnopqrstuvwxyz0123456789-_") != 0)
        {
            opaqueValue78 = *(std::uint64_t*)(opaqueValue76 + 1672);
            if ((void*)(opaqueValue78 - 16) != &emptyJuceStringStorage)
                _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue78 - 16));
            opaqueValue79 = opaqueValue72 | 1;
            opaqueValue80 = opaqueValue78;
            opaqueValue81 = unknownString117;
        }
        else
        {
            juceStringConstructFromUtf8 (&unknownString117, "unknown");
            opaqueValue79 = opaqueValue72 | 2;
            opaqueValue81 = unknownString117;
            opaqueValue80 = unknownString117;
            opaqueValue78 = opaqueValue120;
        }
        opaqueValue120 = opaqueValue80;
        stringStorageToRelease82 = (volatile std::int32_t*)(opaqueValue80 - 16);
        if ((void*)(opaqueValue80 - 16) != &emptyJuceStringStorage)
            _InterlockedIncrement (stringStorageToRelease82);
        if ((opaqueValue79 & 2) != 0)
        {
            opaqueValue79 &= ~2u;
            stringStorageToRelease77 = (void*)(opaqueValue81 - 16);
            if ((void*)(opaqueValue81 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease77) == -1)
                memoryFree (stringStorageToRelease77);
        }
        if ((opaqueValue79 & 1) != 0)
        {
            stringStorageToRelease77 = (void*)(opaqueValue78 - 16);
            if ((void*)(opaqueValue78 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease77) == -1)
                memoryFree (stringStorageToRelease77);
        }
        temporaryPointer129 = &unk_180F512B0;
        opaqueValue130 = opaqueValue80;
        if (stringStorageToRelease82 != (volatile std::int32_t*)&emptyJuceStringStorage)
            _InterlockedIncrement (stringStorageToRelease82);
        opaqueValue83 = sub_18009EA20 (stringStorageToRelease77);
        temporaryPointer119 = (const char*)(opaqueValue83 + 16);
        EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue83 + 16));
        sub_18009E8C0 (opaqueValue83);
        temporaryPointer118 = "altPhase";
        sub_1800B4BF0 (&unknownString117, opaqueValue83, &temporaryPointer118);
        LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue83 + 16));
        sub_1800A6D50 (allocatedObject3, &unknownString117, &temporaryPointer129);
        stringStorageToRelease84 = (void*)(unknownString117 - 16);
        if ((void*)(unknownString117 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease84) == -1)
            memoryFree (stringStorageToRelease84);
        callbackFunction85 = *((void (**) (std::int64_t*))temporaryPointer129 + 11);
        if ((char*)callbackFunction85 == (char*)sub_18000B8D0)
            sub_180023C60 (&opaqueValue130, 0);
        else
            callbackFunction85 (&opaqueValue130);
        temporaryPointer129 = &unk_180F51230;
        opaqueValue130 = 0;
        LOBYTE (opaqueValue130) = *(std::uint8_t*)(opaqueValue76 + 1757);
        opaqueValue87 = sub_18009EA20 (opaqueValue86);
        temporaryPointer119 = (const char*)(opaqueValue87 + 16);
        EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue87 + 16));
        sub_18009E8C0 (opaqueValue87);
        temporaryPointer118 = "altBusy";
        sub_1800B4BF0 (&unknownString117, opaqueValue87, &temporaryPointer118);
        LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue87 + 16));
        sub_1800A6D50 (allocatedObject3, &unknownString117, &temporaryPointer129);
        stringStorageToRelease88 = (void*)(unknownString117 - 16);
        if ((void*)(unknownString117 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease88) == -1)
            memoryFree (stringStorageToRelease88);
        callbackFunction89 = *((std::int64_t (**)())temporaryPointer129 + 11);
        if (callbackFunction89 != guard_check_icall_nop)
            ((void (*) (std::int64_t*))callbackFunction89) (&opaqueValue130);
        temporaryPointer90 = (std::int64_t*)sub_180035BC0 (&temporaryPointer119, opaqueValue76 + 1712);
        callbackFunction131 = (void (**) (std::uint64_t*))&unk_180F512B0;
        opaqueValue132 = 0;
        opaqueValue132 = *temporaryPointer90;
        *temporaryPointer90 = (std::int64_t)&emptyJuceStringCharacters;
        opaqueValue91 = sub_18009EA20 (temporaryPointer90);
        temporaryPointer129 = (void*)(opaqueValue91 + 16);
        EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue91 + 16));
        sub_18009E8C0 (opaqueValue91);
        temporaryPointer118 = "altErrorCode";
        sub_1800B4BF0 (&unknownString117, opaqueValue91, &temporaryPointer118);
        LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue91 + 16));
        sub_1800A6D50 (allocatedObject3, &unknownString117, &callbackFunction131);
        stringStorageToRelease92 = (void*)(unknownString117 - 16);
        if ((void*)(unknownString117 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease92) == -1)
            memoryFree (stringStorageToRelease92);
        callbackFunction131[11](&opaqueValue132);
        stringStorageToRelease93 = (char*)(temporaryPointer119 - 16);
        if (temporaryPointer119 - 16 != (const char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease93) == -1)
            memoryFree (stringStorageToRelease93);
        opaqueValue94 = *(std::uint32_t*)(opaqueValue76 + 1720);
        if (opaqueValue94 >= 0)
        {
            if (opaqueValue94 > 599)
                opaqueValue94 = 599;
            opaqueValue95 = 0;
        }
        else
        {
            opaqueValue95 = 0;
            opaqueValue94 = 0;
        }
        callbackFunction131 = (void (**) (std::uint64_t*))&unk_180F51450;
        opaqueValue132 = (unsigned int)opaqueValue94;
        opaqueValue96 = sub_18009EA20 (0);
        temporaryPointer129 = (void*)(opaqueValue96 + 16);
        EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue96 + 16));
        sub_18009E8C0 (opaqueValue96);
        temporaryPointer118 = "altStatusCode";
        sub_1800B4BF0 (&unknownString117, opaqueValue96, &temporaryPointer118);
        LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue96 + 16));
        sub_1800A6D50 (allocatedObject3, &unknownString117, &callbackFunction131);
        stringStorageToRelease97 = (void*)(unknownString117 - 16);
        if ((void*)(unknownString117 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease97) == -1)
            memoryFree (stringStorageToRelease97);
        callbackFunction98 = (std::int64_t (*)())callbackFunction131[11];
        if (callbackFunction98 != guard_check_icall_nop)
            ((void (*) (std::int64_t*))callbackFunction98) (&opaqueValue132);
        opaqueValue99 = *(unsigned int*)(opaqueValue76 + 1832);
        callbackFunction131 = (void (**) (std::uint64_t*))&unk_180F51450;
        opaqueValue132 = 0;
        opaqueValue100 = 0;
        if ((int)opaqueValue99 > 0)
            opaqueValue100 = opaqueValue99;
        LODWORD (opaqueValue132) = opaqueValue100;
        opaqueValue101 = sub_18009EA20 (opaqueValue99);
        temporaryPointer129 = (void*)(opaqueValue101 + 16);
        EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue101 + 16));
        sub_18009E8C0 (opaqueValue101);
        temporaryPointer118 = "altRounds";
        sub_1800B4BF0 (&unknownString117, opaqueValue101, &temporaryPointer118);
        LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue101 + 16));
        sub_1800A6D50 (allocatedObject3, &unknownString117, &callbackFunction131);
        stringStorageToRelease102 = (void*)(unknownString117 - 16);
        if ((void*)(unknownString117 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease102) == -1)
            memoryFree (stringStorageToRelease102);
        callbackFunction103 = (std::int64_t (*)())callbackFunction131[11];
        if (callbackFunction103 != guard_check_icall_nop)
            ((void (*) (std::int64_t*))callbackFunction103) (&opaqueValue132);
        opaqueValue104 = *(unsigned int*)(opaqueValue76 + 1836);
        callbackFunction131 = (void (**) (std::uint64_t*))&unk_180F51450;
        opaqueValue132 = 0;
        opaqueValue105 = 0;
        if ((int)opaqueValue104 > 0)
            opaqueValue105 = opaqueValue104;
        LODWORD (opaqueValue132) = opaqueValue105;
        opaqueValue106 = sub_18009EA20 (opaqueValue104);
        temporaryPointer129 = (void*)(opaqueValue106 + 16);
        EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue106 + 16));
        sub_18009E8C0 (opaqueValue106);
        temporaryPointer118 = "altToolCalls";
        sub_1800B4BF0 (&unknownString117, opaqueValue106, &temporaryPointer118);
        LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue106 + 16));
        sub_1800A6D50 (allocatedObject3, &unknownString117, &callbackFunction131);
        stringStorageToRelease107 = (void*)(unknownString117 - 16);
        if ((void*)(unknownString117 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease107) == -1)
            memoryFree (stringStorageToRelease107);
        callbackFunction131[11](&opaqueValue132);
        opaqueValue108 = *(std::uint32_t*)(opaqueValue76 + 1828);
        callbackFunction131 = (void (**) (std::uint64_t*))&unk_180F51450;
        opaqueValue132 = 0;
        if (opaqueValue108 > 0)
            opaqueValue95 = opaqueValue108;
        LODWORD (opaqueValue132) = opaqueValue95;
        opaqueValue109 = sub_18009EA20 (0);
        temporaryPointer129 = (void*)(opaqueValue109 + 16);
        EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue109 + 16));
        sub_18009E8C0 (opaqueValue109);
        temporaryPointer118 = "altCompletedCandidates";
        sub_1800B4BF0 (&unknownString117, opaqueValue109, &temporaryPointer118);
        LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue109 + 16));
        sub_1800A6D50 (allocatedObject3, &unknownString117, &callbackFunction131);
        stringStorageToRelease110 = (void*)(unknownString117 - 16);
        if ((void*)(unknownString117 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease110) == -1)
            memoryFree (stringStorageToRelease110);
        callbackFunction111 = (std::int64_t (*)())callbackFunction131[11];
        if (callbackFunction111 != guard_check_icall_nop)
            ((void (*) (std::int64_t*))callbackFunction111) (&opaqueValue132);
        opaqueValue112 = sub_1803035A0 (*(std::uint64_t*)(opaqueValue121 + 475560));
        callbackFunction131 = (void (**) (std::uint64_t*))&unk_180F51230;
        opaqueValue132 = opaqueValue112;
        opaqueValue113 = sub_18009EA20 (0);
        sub_18009E570 (opaqueValue113, &opaqueValue121, "altPreviewOwned");
        sub_1800A6D50 (allocatedObject3, &opaqueValue121, &callbackFunction131);
        stringStorageToRelease114 = (void*)(opaqueValue121 - 16);
        if ((void*)(opaqueValue121 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease114) == -1)
            memoryFree (stringStorageToRelease114);
        callbackFunction115 = (std::int64_t (*)())callbackFunction131[11];
        if (callbackFunction115 != guard_check_icall_nop)
            ((void (*) (std::int64_t*))callbackFunction115) (&opaqueValue132);
        if (stringStorageToRelease82 != (volatile std::int32_t*)&emptyJuceStringStorage && _InterlockedDecrement (stringStorageToRelease82) == -1)
            memoryFree ((LPVOID)stringStorageToRelease82);
    }
    result = temporaryPointer123;
    *temporaryPointer123 = &unk_180F513D0;
    result[1] = allocatedObject3;
    _InterlockedIncrement ((volatile std::int32_t*)(allocatedObject3 + 8));
    return result;
}
