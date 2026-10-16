#include <cstdint>

// ===== BrowserHandoff_BuildUrl @ 0x18021ed70 size=2511 =====
std::int64_t onboardingBuildAccountHandoffUrl (std::int64_t outputUrl, int actionKind, std::uint8_t** deviceCode)
{
    std::uint8_t** temporaryPointer3; // r13
    std::int64_t opaqueValue5; // rbx
    std::int64_t opaqueValue6; // rdi
    volatile std::int32_t* stringStorageToRelease7; // r14
    void* stringStorageToRelease8; // rcx
    void* stringStorageToRelease9; // rcx
    volatile std::int32_t* temporaryPointer10; // rdi
    std::int64_t opaqueValue11; // rbx
    volatile std::int32_t* stringStorageToRelease12; // r12
    int opaqueValue13; // ecx
    std::int64_t* temporaryPointer14; // rbx
    volatile std::int32_t* temporaryPointer15; // r15
    int opaqueValue16; // edx
    void* stringStorageToRelease17; // rcx
    volatile std::int32_t* temporaryPointer18; // rcx
    volatile std::int32_t* temporaryPointer19; // r15
    std::int64_t opaqueValue20; // rbx
    volatile std::int32_t* stringStorageToRelease21; // r13
    int opaqueValue22; // ecx
    std::int64_t* temporaryPointer23; // rbx
    volatile std::int32_t* temporaryPointer24; // r12
    int opaqueValue25; // ecx
    std::int64_t opaqueValue26; // rbx
    int opaqueValue27; // ecx
    int opaqueValue28; // ecx
    std::int64_t** temporaryPointer29; // rdx
    char opaqueValue30; // di
    char opaqueValue31; // di
    void* stringStorageToRelease32; // rcx
    bool conditionFlag33; // zf
    volatile std::int32_t* temporaryPointer34; // r15
    std::int64_t opaqueValue35; // rbx
    volatile std::int32_t* stringStorageToRelease36; // r12
    int opaqueValue37; // ecx
    int opaqueValue38; // edx
    std::int64_t* temporaryPointer39; // rbx
    volatile std::int32_t* temporaryPointer40; // r13
    std::int64_t opaqueValue41; // rcx
    std::int64_t opaqueValue42; // r8
    std::int64_t opaqueValue43; // rbx
    volatile std::int32_t* stringStorageToRelease44; // rdi
    std::int64_t opaqueValue45; // rcx
    std::int64_t* reusableString47; // [rsp+20h] [rbp-E0h] BYREF
    std::int64_t* temporaryPointer48; // [rsp+28h] [rbp-D8h] BYREF
    __int128 opaqueValue49; // [rsp+30h] [rbp-D0h] BYREF
    std::int64_t opaqueValue50; // [rsp+40h] [rbp-C0h] BYREF
    std::int64_t opaqueValue51; // [rsp+48h] [rbp-B8h]
    std::int64_t opaqueValue52; // [rsp+50h] [rbp-B0h] BYREF
    std::int64_t opaqueValue53; // [rsp+58h] [rbp-A8h]
    char* temporaryPointer54; // [rsp+60h] [rbp-A0h]
    std::uint64_t stackStorage55[2]; // [rsp+68h] [rbp-98h] BYREF
    int opaqueValue56; // [rsp+78h] [rbp-88h]
    std::int64_t reusableString57; // [rsp+80h] [rbp-80h] BYREF
    std::int64_t* reusableString58; // [rsp+88h] [rbp-78h] BYREF
    std::int64_t* temporaryPointer59; // [rsp+90h] [rbp-70h] BYREF
    __int128 opaqueValue60; // [rsp+98h] [rbp-68h] BYREF
    std::int64_t opaqueValue61; // [rsp+A8h] [rbp-58h] BYREF
    std::int64_t opaqueValue62; // [rsp+B0h] [rbp-50h]
    std::int64_t opaqueValue63; // [rsp+B8h] [rbp-48h] BYREF
    std::int64_t opaqueValue64; // [rsp+C0h] [rbp-40h]
    char* temporaryPointer65; // [rsp+C8h] [rbp-38h]
    std::int64_t opaqueValue66; // [rsp+D0h] [rbp-30h] BYREF
    std::int64_t opaqueValue67; // [rsp+D8h] [rbp-28h]
    std::int64_t* temporaryPointer68; // [rsp+E0h] [rbp-20h] BYREF
    char stackStorage69[16]; // [rsp+E8h] [rbp-18h] BYREF
    std::uint64_t stackStorage70[2]; // [rsp+F8h] [rbp-8h] BYREF
    std::uint64_t stackStorage71[3]; // [rsp+108h] [rbp+8h] BYREF
    char stackStorage72[16]; // [rsp+120h] [rbp+20h] BYREF
    std::int64_t opaqueValue73; // [rsp+130h] [rbp+30h]
    std::uint8_t** temporaryPointer75; // [rsp+190h] [rbp+90h]
    std::int64_t reusableString76; // [rsp+198h] [rbp+98h] BYREF

    temporaryPointer75 = deviceCode;
    temporaryPointer3 = deviceCode;
    opaqueValue56 = 0;
    LOBYTE (deviceCode) = 1;
    opaqueValue5 = sub_1800B19E0 (&reusableString57, temporaryPointer3, deviceCode);
    juceStringConstructFromUtf8 (&reusableString76, "/activate?code=");
    reusableString47 = &reusableString76;
    opaqueValue6 = *(std::uint64_t*)juceStringAppendString (&reusableString76, opaqueValue5);
    opaqueValue73 = opaqueValue6;
    stringStorageToRelease7 = (volatile std::int32_t*)(opaqueValue6 - 16);
    if ((void*)(opaqueValue6 - 16) != &emptyJuceStringStorage)
        _InterlockedIncrement (stringStorageToRelease7);
    stringStorageToRelease8 = (void*)(reusableString76 - 16);
    if ((void*)(reusableString76 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease8) == -1)
        memoryFree (stringStorageToRelease8);
    stringStorageToRelease9 = (void*)(reusableString57 - 16);
    if ((void*)(reusableString57 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease9) == -1)
        memoryFree (stringStorageToRelease9);
    if (actionKind == 4)
    {
        juceStringConstructFromUtf8 (&reusableString58, "https://fadrecords.com/cdk/redeem");
        temporaryPointer59 = reusableString58;
        temporaryPointer10 = (volatile std::int32_t*)(reusableString58 - 2);
        if (reusableString58 - 2 != (std::int64_t*)&emptyJuceStringStorage)
            _InterlockedIncrement (temporaryPointer10);
        opaqueValue60 = 0;
        opaqueValue61 = 0;
        opaqueValue62 = 0;
        opaqueValue63 = 0;
        opaqueValue64 = 0;
        temporaryPointer65 = &emptyJuceStringCharacters;
        opaqueValue66 = 0;
        opaqueValue67 = 0;
        sub_1800AF3A0 (&temporaryPointer59);
        juceStringConstructFromUtf8 (&reusableString47, "fad-synth");
        juceStringConstructFromUtf8 (&reusableString57, "productId");
        sub_180089B70 (&temporaryPointer48, &temporaryPointer59);
        opaqueValue11 = reusableString57;
        stringStorageToRelease12 = (volatile std::int32_t*)(reusableString57 - 16);
        if ((void*)(reusableString57 - 16) != &emptyJuceStringStorage)
            _InterlockedIncrement (stringStorageToRelease12);
        opaqueValue13 = HIDWORD (opaqueValue51);
        if (HIDWORD (opaqueValue51) + 1 > (int)opaqueValue51)
        {
            sub_180086F40 (&opaqueValue50, ((HIDWORD (opaqueValue51) + 1) / 2 + HIDWORD (opaqueValue51) + 9) & 0xFFFFFFF8);
            opaqueValue13 = HIDWORD (opaqueValue51);
        }
        HIDWORD (opaqueValue51) = opaqueValue13 + 1;
        *(std::uint64_t*)(opaqueValue50 + 8LL * opaqueValue13) = opaqueValue11;
        temporaryPointer14 = reusableString47;
        temporaryPointer15 = (volatile std::int32_t*)(reusableString47 - 2);
        if (reusableString47 - 2 != (std::int64_t*)&emptyJuceStringStorage)
            _InterlockedIncrement (temporaryPointer15);
        opaqueValue16 = HIDWORD (opaqueValue53);
        if (HIDWORD (opaqueValue53) + 1 > (int)opaqueValue53)
        {
            sub_180086F40 (&opaqueValue52, ((HIDWORD (opaqueValue53) + 1) / 2 + HIDWORD (opaqueValue53) + 9) & 0xFFFFFFF8);
            opaqueValue16 = HIDWORD (opaqueValue53);
        }
        HIDWORD (opaqueValue53) = opaqueValue16 + 1;
        *(std::uint64_t*)(opaqueValue52 + 8LL * opaqueValue16) = temporaryPointer14;
        juceStringConstructFromUtf8 (&reusableString76, "deviceCode");
        sub_180089B70 (outputUrl, &temporaryPointer48);
        sub_1800AFD60 (outputUrl, &reusableString76, temporaryPointer3);
        stringStorageToRelease17 = (void*)(reusableString76 - 16);
        if ((void*)(reusableString76 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease17) == -1)
            memoryFree (stringStorageToRelease17);
        sub_18002C950 (&temporaryPointer48);
        if (stringStorageToRelease12 != (volatile std::int32_t*)&emptyJuceStringStorage && _InterlockedDecrement (stringStorageToRelease12) == -1)
            memoryFree ((LPVOID)stringStorageToRelease12);
        if (temporaryPointer15 != (volatile std::int32_t*)&emptyJuceStringStorage && _InterlockedDecrement (temporaryPointer15) == -1)
            memoryFree ((LPVOID)temporaryPointer15);
        sub_18002C950 (&temporaryPointer59);
        if (temporaryPointer10 != (volatile std::int32_t*)&emptyJuceStringStorage && _InterlockedDecrement (temporaryPointer10) == -1)
        {
            temporaryPointer18 = temporaryPointer10;
        label110:
            memoryFree ((LPVOID)temporaryPointer18);
        }
    label111:
        conditionFlag33 = stringStorageToRelease7 == (volatile std::int32_t*)&emptyJuceStringStorage;
        goto label112;
    }
    if (actionKind != 3)
    {
        juceStringConstructFromUtf8 (&reusableString47, "https://fadrecords.com/login");
        temporaryPointer59 = reusableString47;
        temporaryPointer34 = (volatile std::int32_t*)(reusableString47 - 2);
        if (reusableString47 - 2 != (std::int64_t*)&emptyJuceStringStorage)
            _InterlockedIncrement (temporaryPointer34);
        opaqueValue60 = 0;
        opaqueValue61 = 0;
        opaqueValue62 = 0;
        opaqueValue63 = 0;
        opaqueValue64 = 0;
        temporaryPointer65 = &emptyJuceStringCharacters;
        opaqueValue66 = 0;
        opaqueValue67 = 0;
        sub_1800AF3A0 (&temporaryPointer59);
        juceStringConstructFromUtf8 (&reusableString76, "next");
        sub_180089B70 (&temporaryPointer48, &temporaryPointer59);
        opaqueValue35 = reusableString76;
        stringStorageToRelease36 = (volatile std::int32_t*)(reusableString76 - 16);
        if ((void*)(reusableString76 - 16) != &emptyJuceStringStorage)
            _InterlockedIncrement (stringStorageToRelease36);
        opaqueValue37 = HIDWORD (opaqueValue51);
        if (HIDWORD (opaqueValue51) + 1 > (int)opaqueValue51)
        {
            sub_180086F40 (&opaqueValue50, ((HIDWORD (opaqueValue51) + 1) / 2 + HIDWORD (opaqueValue51) + 9) & 0xFFFFFFF8);
            opaqueValue37 = HIDWORD (opaqueValue51);
        }
        HIDWORD (opaqueValue51) = opaqueValue37 + 1;
        *(std::uint64_t*)(opaqueValue50 + 8LL * opaqueValue37) = opaqueValue35;
        if (stringStorageToRelease7 != (volatile std::int32_t*)&emptyJuceStringStorage)
            _InterlockedIncrement (stringStorageToRelease7);
        opaqueValue38 = HIDWORD (opaqueValue53);
        if (HIDWORD (opaqueValue53) + 1 > (int)opaqueValue53)
        {
            sub_180086F40 (&opaqueValue52, ((HIDWORD (opaqueValue53) + 1) / 2 + HIDWORD (opaqueValue53) + 9) & 0xFFFFFFF8);
            opaqueValue38 = HIDWORD (opaqueValue53);
        }
        HIDWORD (opaqueValue53) = opaqueValue38 + 1;
        *(std::uint64_t*)(opaqueValue52 + 8LL * opaqueValue38) = opaqueValue6;
        juceStringConstructFromUtf8 (&reusableString57, "synth-onboarding");
        juceStringConstructFromUtf8 (&reusableString58, "from");
        sub_180089B70 (outputUrl, &temporaryPointer48);
        temporaryPointer39 = reusableString58;
        temporaryPointer40 = (volatile std::int32_t*)(reusableString58 - 2);
        if (reusableString58 - 2 != (std::int64_t*)&emptyJuceStringStorage)
            _InterlockedIncrement (temporaryPointer40);
        if (*(std::uint32_t*)(outputUrl + 36) + 1 > *(std::uint32_t*)(outputUrl + 32))
            sub_180086F40 (outputUrl + 24, ((*(std::uint32_t*)(outputUrl + 36) + 1) / 2 + *(std::uint32_t*)(outputUrl + 36) + 9) & 0xFFFFFFF8);
        opaqueValue41 = *(int*)(outputUrl + 36);
        *(std::uint32_t*)(outputUrl + 36) = opaqueValue41 + 1;
        *(std::uint64_t*)(*(std::uint64_t*)(outputUrl + 24) + 8 * opaqueValue41) = temporaryPointer39;
        opaqueValue42 = outputUrl + 40;
        reusableString76 = outputUrl + 40;
        opaqueValue43 = reusableString57;
        stringStorageToRelease44 = (volatile std::int32_t*)(reusableString57 - 16);
        if ((void*)(reusableString57 - 16) != &emptyJuceStringStorage)
            _InterlockedIncrement (stringStorageToRelease44);
        if (*(std::uint32_t*)(outputUrl + 52) + 1 > *(std::uint32_t*)(outputUrl + 48))
        {
            sub_180086F40 (outputUrl + 40, ((*(std::uint32_t*)(outputUrl + 52) + 1) / 2 + *(std::uint32_t*)(outputUrl + 52) + 9) & 0xFFFFFFF8);
            opaqueValue42 = reusableString76;
        }
        opaqueValue45 = *(int*)(opaqueValue42 + 12);
        *(std::uint32_t*)(opaqueValue42 + 12) = opaqueValue45 + 1;
        *(std::uint64_t*)(*(std::uint64_t*)opaqueValue42 + 8 * opaqueValue45) = opaqueValue43;
        if (temporaryPointer40 != (volatile std::int32_t*)&emptyJuceStringStorage && _InterlockedDecrement (temporaryPointer40) == -1)
            memoryFree ((LPVOID)temporaryPointer40);
        if (stringStorageToRelease44 != (volatile std::int32_t*)&emptyJuceStringStorage && _InterlockedDecrement (stringStorageToRelease44) == -1)
            memoryFree ((LPVOID)stringStorageToRelease44);
        sub_18002C950 (&temporaryPointer48);
        if (stringStorageToRelease36 != (volatile std::int32_t*)&emptyJuceStringStorage && _InterlockedDecrement (stringStorageToRelease36) == -1)
            memoryFree ((LPVOID)stringStorageToRelease36);
        sub_18002C950 (&temporaryPointer59);
        if (temporaryPointer34 == (volatile std::int32_t*)&emptyJuceStringStorage || _InterlockedDecrement (temporaryPointer34) != -1)
            goto label111;
        temporaryPointer18 = temporaryPointer34;
        goto label110;
    }
    juceStringConstructFromUtf8 (&reusableString47, "https://fadrecords.com/account-help");
    temporaryPointer48 = reusableString47;
    temporaryPointer19 = (volatile std::int32_t*)(reusableString47 - 2);
    if (reusableString47 - 2 != (std::int64_t*)&emptyJuceStringStorage)
        _InterlockedIncrement (temporaryPointer19);
    opaqueValue49 = 0;
    opaqueValue50 = 0;
    opaqueValue51 = 0;
    opaqueValue52 = 0;
    opaqueValue53 = 0;
    temporaryPointer54 = &emptyJuceStringCharacters;
    stackStorage55[0] = 0;
    stackStorage55[1] = 0;
    sub_1800AF3A0 (&temporaryPointer48);
    juceStringConstructFromUtf8 (&reusableString58, "synth-onboarding");
    juceStringConstructFromUtf8 (&reusableString76, "from");
    sub_180089B70 (&temporaryPointer59, &temporaryPointer48);
    opaqueValue56 = 144;
    opaqueValue20 = reusableString76;
    stringStorageToRelease21 = (volatile std::int32_t*)(reusableString76 - 16);
    if ((void*)(reusableString76 - 16) != &emptyJuceStringStorage)
        _InterlockedIncrement (stringStorageToRelease21);
    opaqueValue22 = HIDWORD (opaqueValue62);
    if (HIDWORD (opaqueValue62) + 1 > (int)opaqueValue62)
    {
        sub_180086F40 (&opaqueValue61, ((HIDWORD (opaqueValue62) + 1) / 2 + HIDWORD (opaqueValue62) + 9) & 0xFFFFFFF8);
        opaqueValue22 = HIDWORD (opaqueValue62);
    }
    HIDWORD (opaqueValue62) = opaqueValue22 + 1;
    *(std::uint64_t*)(opaqueValue61 + 8LL * opaqueValue22) = opaqueValue20;
    temporaryPointer23 = reusableString58;
    temporaryPointer24 = (volatile std::int32_t*)(reusableString58 - 2);
    if (reusableString58 - 2 != (std::int64_t*)&emptyJuceStringStorage)
        _InterlockedIncrement (temporaryPointer24);
    opaqueValue25 = HIDWORD (opaqueValue64);
    if (HIDWORD (opaqueValue64) + 1 > (int)opaqueValue64)
    {
        sub_180086F40 (&opaqueValue63, ((HIDWORD (opaqueValue64) + 1) / 2 + HIDWORD (opaqueValue64) + 9) & 0xFFFFFFF8);
        opaqueValue25 = HIDWORD (opaqueValue64);
    }
    HIDWORD (opaqueValue64) = opaqueValue25 + 1;
    *(std::uint64_t*)(opaqueValue63 + 8LL * opaqueValue25) = temporaryPointer23;
    if (stringStorageToRelease21 != (volatile std::int32_t*)&emptyJuceStringStorage && _InterlockedDecrement (stringStorageToRelease21) == -1)
        memoryFree ((LPVOID)stringStorageToRelease21);
    if (temporaryPointer24 != (volatile std::int32_t*)&emptyJuceStringStorage && _InterlockedDecrement (temporaryPointer24) == -1)
        memoryFree ((LPVOID)temporaryPointer24);
    sub_18002C950 (&temporaryPointer48);
    if (temporaryPointer19 != (volatile std::int32_t*)&emptyJuceStringStorage && _InterlockedDecrement (temporaryPointer19) == -1)
        memoryFree ((LPVOID)temporaryPointer19);
    if (**temporaryPointer75 != 0)
    {
        juceStringConstructFromUtf8 (&reusableString76, "next");
        opaqueValue56 = 146;
        temporaryPointer48 = temporaryPointer59;
        if (temporaryPointer59 - 2 != (std::int64_t*)&emptyJuceStringStorage)
            _InterlockedIncrement ((volatile std::int32_t*)temporaryPointer59 - 4);
        sub_180092140 (&opaqueValue49, &opaqueValue60);
        opaqueValue50 = 0;
        opaqueValue51 = 0;
        sub_1800B6C30 (&opaqueValue50, opaqueValue61, HIDWORD (opaqueValue62));
        opaqueValue52 = 0;
        opaqueValue53 = 0;
        sub_1800B6C30 (&opaqueValue52, opaqueValue63, HIDWORD (opaqueValue64));
        temporaryPointer54 = temporaryPointer65;
        if (temporaryPointer65 - 16 != (char*)&emptyJuceStringStorage)
            _InterlockedIncrement ((volatile std::int32_t*)temporaryPointer65 - 4);
        sub_1800B5870 (stackStorage55, &opaqueValue66);
        opaqueValue26 = reusableString76;
        if ((void*)(reusableString76 - 16) != &emptyJuceStringStorage)
            _InterlockedIncrement ((volatile std::int32_t*)(reusableString76 - 16));
        opaqueValue27 = HIDWORD (opaqueValue51);
        if (HIDWORD (opaqueValue51) + 1 > (int)opaqueValue51)
        {
            sub_180086F40 (&opaqueValue50, ((HIDWORD (opaqueValue51) + 1) / 2 + HIDWORD (opaqueValue51) + 9) & 0xFFFFFFF8);
            opaqueValue27 = HIDWORD (opaqueValue51);
        }
        HIDWORD (opaqueValue51) = opaqueValue27 + 1;
        *(std::uint64_t*)(opaqueValue50 + 8LL * opaqueValue27) = opaqueValue26;
        if (stringStorageToRelease7 != (volatile std::int32_t*)&emptyJuceStringStorage)
            _InterlockedIncrement (stringStorageToRelease7);
        opaqueValue28 = HIDWORD (opaqueValue53);
        if (HIDWORD (opaqueValue53) + 1 > (int)opaqueValue53)
        {
            sub_180086F40 (&opaqueValue52, ((HIDWORD (opaqueValue53) + 1) / 2 + HIDWORD (opaqueValue53) + 9) & 0xFFFFFFF8);
            opaqueValue28 = HIDWORD (opaqueValue53);
        }
        HIDWORD (opaqueValue53) = opaqueValue28 + 1;
        *(std::uint64_t*)(opaqueValue52 + 8LL * opaqueValue28) = opaqueValue6;
        temporaryPointer29 = &temporaryPointer48;
        opaqueValue30 = -106;
    }
    else
    {
        temporaryPointer68 = temporaryPointer59;
        if (temporaryPointer59 - 2 != (std::int64_t*)&emptyJuceStringStorage)
            _InterlockedIncrement ((volatile std::int32_t*)temporaryPointer59 - 4);
        sub_180092140 (stackStorage69, &opaqueValue60);
        stackStorage70[0] = 0;
        stackStorage70[1] = 0;
        sub_1800B6C30 (stackStorage70, opaqueValue61, HIDWORD (opaqueValue62));
        stackStorage71[0] = 0;
        stackStorage71[1] = 0;
        sub_1800B6C30 (stackStorage71, opaqueValue63, HIDWORD (opaqueValue64));
        stackStorage71[2] = temporaryPointer65;
        if (temporaryPointer65 - 16 != (char*)&emptyJuceStringStorage)
            _InterlockedIncrement ((volatile std::int32_t*)temporaryPointer65 - 4);
        sub_1800B5870 (stackStorage72, &opaqueValue66);
        temporaryPointer29 = &temporaryPointer68;
        opaqueValue30 = -104;
        opaqueValue26 = reusableString76;
    }
    sub_1800B0610 (outputUrl, temporaryPointer29);
    opaqueValue31 = opaqueValue30 | 1;
    if ((opaqueValue31 & 8) != 0)
    {
        opaqueValue31 &= ~8u;
        sub_18002C950 (&temporaryPointer68);
    }
    if ((opaqueValue31 & 4) != 0)
    {
        opaqueValue31 &= ~4u;
        sub_18002C950 (&temporaryPointer48);
    }
    if ((opaqueValue31 & 2) != 0)
    {
        stringStorageToRelease32 = (void*)(opaqueValue26 - 16);
        if ((void*)(opaqueValue26 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease32) == -1)
            memoryFree (stringStorageToRelease32);
    }
    sub_18002C950 (&temporaryPointer59);
    conditionFlag33 = stringStorageToRelease7 == (volatile std::int32_t*)&emptyJuceStringStorage;
label112:
    if (!conditionFlag33 && _InterlockedDecrement (stringStorageToRelease7) == -1)
        memoryFree ((LPVOID)stringStorageToRelease7);
    return outputUrl;
}

// ===== Onboarding_DispatchDeepLink @ 0x1806cb590 size=1740 =====
char onboardingDispatchDeepLink (std::int64_t panel, std::int64_t commandUrl)
{
    int opaqueValue4; // ebx
    std::uint8_t* temporaryPointer5; // r8
    std::uint8_t* temporaryPointer6; // rax
    std::uint8_t* temporaryPointer7; // r8
    int opaqueValue8; // ecx
    int opaqueValue9; // edx
    char opaqueValue10; // r15
    std::int64_t opaqueValue11; // rax
    void* stringStorageToRelease12; // rcx
    std::int64_t* temporaryPointer13; // rbx
    void* stringStorageToRelease14; // rcx
    std::int64_t opaqueValue15; // rbx
    volatile std::int32_t* stringStorageToRelease16; // r12
    void* stringStorageToRelease17; // rcx
    std::int64_t opaqueValue18; // rcx
    std::int64_t opaqueValue19; // rcx
    std::int64_t opaqueValue20; // rcx
    std::int64_t opaqueValue21; // rcx
    std::int64_t opaqueValue22; // rcx
    std::int64_t opaqueValue23; // rcx
    std::int64_t* prefixedString24; // rdi
    void* stringStorageToRelease25; // rcx
    void* stringStorageToRelease26; // rcx
    void* stringStorageToRelease27; // rcx
    void* stringStorageToRelease28; // rcx
    void* stringStorageToRelease29; // rcx
    std::int64_t* temporaryPointer30; // rcx
    std::uint8_t* temporaryPointer32; // [rsp+38h] [rbp-18h] BYREF
    std::uint8_t stackStorage33[8]; // [rsp+40h] [rbp-10h] BYREF
    char opaqueValue34; // [rsp+48h] [rbp-8h]
    std::int64_t onboardingPanelString35; // [rsp+98h] [rbp+48h] BYREF
    std::int64_t diagnosticCodeString36; // [rsp+A0h] [rbp+50h] BYREF
    std::int64_t* messageString37; // [rsp+A8h] [rbp+58h] BYREF

    onboardingPanelString35 = commandUrl;
    if ((std::uint8_t)sub_1806C7830 (&onboardingPanelString35, "fadlab://onboarding-store/settings") != 0)
    {
        opaqueValue4 = 3;
    }
    else if ((std::uint8_t)sub_1806C7830 (&onboardingPanelString35, "fadlab://onboarding-auth/start") != 0)
    {
        opaqueValue4 = 1;
    }
    else if ((std::uint8_t)sub_1806C7830 (&onboardingPanelString35, "fadlab://onboarding-auth/refresh") != 0)
    {
        opaqueValue4 = 2;
    }
    else if ((std::uint8_t)sub_1806C7830 (&onboardingPanelString35, "fadlab://onboarding-auth/reset") != 0)
    {
        opaqueValue4 = 4;
    }
    else if ((std::uint8_t)sub_1806C7830 (&onboardingPanelString35, "fadlab://onboarding-account/connect") != 0)
    {
        opaqueValue4 = 5;
    }
    else if ((std::uint8_t)sub_1806C7830 (&onboardingPanelString35, "fadlab://onboarding-account/login") != 0)
    {
        opaqueValue4 = 6;
    }
    else if ((std::uint8_t)sub_1806C7830 (&onboardingPanelString35, "fadlab://onboarding-account/register") != 0)
    {
        opaqueValue4 = 7;
    }
    else if ((std::uint8_t)sub_1806C7830 (&onboardingPanelString35, "fadlab://onboarding-account/help") != 0)
    {
        opaqueValue4 = 8;
    }
    else if ((std::uint8_t)sub_1806C7830 (&onboardingPanelString35, "fadlab://onboarding-copy-device-code") != 0)
    {
        opaqueValue4 = 9;
    }
    else if ((std::uint8_t)sub_1806C7830 (&onboardingPanelString35, "fadlab://onboarding-account/cdk") != 0)
    {
        opaqueValue4 = 10;
    }
    else if ((std::uint8_t)sub_1806C7830 (&onboardingPanelString35, "fadlab://onboarding-legal/eula") != 0)
    {
        opaqueValue4 = 11;
    }
    else if ((std::uint8_t)sub_1806C7830 (&onboardingPanelString35, "fadlab://onboarding-legal/terms") != 0)
    {
        opaqueValue4 = 12;
    }
    else
    {
        if ((std::uint8_t)sub_1806C7830 (&onboardingPanelString35, "fadlab://onboarding-legal/privacy") == 0)
            return 0;
        opaqueValue4 = 13;
    }
    sub_1806C7220 (&temporaryPointer32, commandUrl);
    temporaryPointer5 = *(std::uint8_t**)(panel + 704);
    if (*temporaryPointer5 == 0 || opaqueValue34 == 0)
        goto label81;
    temporaryPointer6 = temporaryPointer32;
    if (temporaryPointer32 == temporaryPointer5)
        goto label35;
    temporaryPointer7 = (std::uint8_t*)(temporaryPointer5 - temporaryPointer32);
    do
    {
        opaqueValue8 = (std::uint8_t)temporaryPointer7[(std::uint64_t)temporaryPointer6];
        opaqueValue9 = *temporaryPointer6 - opaqueValue8;
        if (opaqueValue9 != 0)
            break;
        ++temporaryPointer6;
    } while (opaqueValue8 != 0);
    if (opaqueValue9 == 0)
    {
    label35:
        if (opaqueValue4 != 9 || **(std::uint8_t**)(panel + 720) != 0)
        {
            if ((std::uint8_t)sub_1806CBC60 (panel, commandUrl, stackStorage33) != 0)
            {
                opaqueValue10 = 1;
            }
            else
            {
                switch (opaqueValue4)
                {
                case 1:
                    opaqueValue18 = *(std::uint64_t*)(panel + 368);
                    if (opaqueValue18 == 0)
                        goto label80;
                    goto label62;
                case 2:
                    opaqueValue18 = *(std::uint64_t*)(panel + 432);
                    if (opaqueValue18 != 0)
                        goto label62;
                    goto label80;
                case 3:
                    opaqueValue18 = *(std::uint64_t*)(panel + 496);
                    if (opaqueValue18 == 0)
                        goto label80;
                label62:
                    (*(void (**) (std::int64_t)) (*(std::uint64_t*)opaqueValue18 + 16LL)) (opaqueValue18);
                    opaqueValue10 = 1;
                    break;
                case 4:
                    sub_1806CC490 (panel);
                    opaqueValue10 = 1;
                    break;
                case 5:
                    opaqueValue19 = *(std::uint64_t*)(panel + 624);
                    if (opaqueValue19 != 0)
                        goto label65;
                    goto label80;
                case 6:
                    opaqueValue20 = *(std::uint64_t*)(panel + 624);
                    goto label67;
                case 7:
                    opaqueValue21 = *(std::uint64_t*)(panel + 624);
                    goto label78;
                case 8:
                    opaqueValue22 = *(std::uint64_t*)(panel + 624);
                    if (opaqueValue22 == 0)
                        goto label80;
                    LODWORD (onboardingPanelString35) = 3;
                    (*(void (**) (std::int64_t, std::int64_t*)) (*(std::uint64_t*)opaqueValue22 + 16LL)) (opaqueValue22, &onboardingPanelString35);
                    opaqueValue10 = 1;
                    break;
                case 9:
                    sub_1801BF9D0 (panel + 720);
                    opaqueValue11 = sub_1801BFA80 (&onboardingPanelString35);
                    opaqueValue10 = sub_180097F10 (opaqueValue11, panel + 720);
                    stringStorageToRelease12 = (void*)(onboardingPanelString35 - 16);
                    if ((void*)(onboardingPanelString35 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease12) == -1)
                        memoryFree (stringStorageToRelease12);
                    if (opaqueValue10 == 0)
                    {
                        temporaryPointer13 = (std::int64_t*)sub_18009A350 (commandUrl, &diagnosticCodeString36, "?", 0);
                        messageString37 = temporaryPointer13;
                        juceStringAppendUtf8Range (temporaryPointer13, "#", "");
                        onboardingPanelString35 = *temporaryPointer13;
                        if ((void*)(onboardingPanelString35 - 16) != &emptyJuceStringStorage)
                            _InterlockedIncrement ((volatile std::int32_t*)(onboardingPanelString35 - 16));
                        stringStorageToRelease14 = (void*)(*temporaryPointer13 - 16);
                        if (stringStorageToRelease14 != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease14) == -1)
                            memoryFree (stringStorageToRelease14);
                        messageString37 = &onboardingPanelString35;
                        opaqueValue15 = *(std::uint64_t*)juceStringAppendString (&onboardingPanelString35, stackStorage33);
                        stringStorageToRelease16 = (volatile std::int32_t*)(opaqueValue15 - 16);
                        if ((void*)(opaqueValue15 - 16) != &emptyJuceStringStorage)
                            _InterlockedIncrement (stringStorageToRelease16);
                        stringStorageToRelease17 = (void*)(onboardingPanelString35 - 16);
                        if ((void*)(onboardingPanelString35 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease17) == -1)
                        {
                            memoryFree (stringStorageToRelease17);
                        }
                        sub_18009D450 (panel + 824, opaqueValue15, 0);
                        if (stringStorageToRelease16 != (volatile std::int32_t*)&emptyJuceStringStorage && _InterlockedDecrement (stringStorageToRelease16) == -1)
                            memoryFree ((LPVOID)stringStorageToRelease16);
                    }
                    break;
                case 10:
                    opaqueValue23 = *(std::uint64_t*)(panel + 624);
                    if (opaqueValue23 == 0)
                        goto label80;
                    LODWORD (onboardingPanelString35) = 4;
                    (*(void (**) (std::int64_t, std::int64_t*)) (*(std::uint64_t*)opaqueValue23 + 16LL)) (opaqueValue23, &onboardingPanelString35);
                    opaqueValue10 = 1;
                    break;
                case 11:
                    opaqueValue19 = *(std::uint64_t*)(panel + 688);
                    if (opaqueValue19 == 0)
                        goto label80;
                label65:
                    LODWORD (onboardingPanelString35) = 0;
                    (*(void (**) (std::int64_t, std::int64_t*)) (*(std::uint64_t*)opaqueValue19 + 16LL)) (opaqueValue19, &onboardingPanelString35);
                    opaqueValue10 = 1;
                    break;
                case 12:
                    opaqueValue20 = *(std::uint64_t*)(panel + 688);
                label67:
                    if (opaqueValue20 == 0)
                        goto label80;
                    LODWORD (onboardingPanelString35) = 1;
                    (*(void (**) (std::int64_t, std::int64_t*)) (*(std::uint64_t*)opaqueValue20 + 16LL)) (opaqueValue20, &onboardingPanelString35);
                    opaqueValue10 = 1;
                    break;
                case 13:
                    opaqueValue21 = *(std::uint64_t*)(panel + 688);
                label78:
                    if (opaqueValue21 != 0)
                    {
                        LODWORD (onboardingPanelString35) = 2;
                        (*(void (**) (std::int64_t, std::int64_t*)) (*(std::uint64_t*)opaqueValue21 + 16LL)) (opaqueValue21, &onboardingPanelString35);
                    }
                label80:
                    opaqueValue10 = 1;
                    break;
                }
            }
        }
        else
        {
            opaqueValue10 = 0;
        }
    }
    else
    {
    label81:
        juceStringConstructFromUtf8 (&diagnosticCodeString36, "FAD-ONB-COMMAND-NONCE-MISMATCH");
        prefixedString24 = (std::int64_t*)juceStringJoinUtf8Prefix (&messageString37, "OnboardingPanel: ", &diagnosticCodeString36);
        juceStringAppendUtf8Range (prefixedString24, " rejected onboarding capability command", "");
        onboardingPanelString35 = *prefixedString24;
        if ((void*)(onboardingPanelString35 - 16) != &emptyJuceStringStorage)
            _InterlockedIncrement ((volatile std::int32_t*)(onboardingPanelString35 - 16));
        stringStorageToRelease25 = (void*)(*prefixedString24 - 16);
        if (stringStorageToRelease25 != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease25) == -1)
            memoryFree (stringStorageToRelease25);
        if (activeJuceLogger != 0)
            (*(void (**) (std::int64_t, std::int64_t*)) (*(std::uint64_t*)activeJuceLogger + 8LL)) (activeJuceLogger, &onboardingPanelString35);
        else
            juceLoggerWriteDefaultLog (&onboardingPanelString35);
        stringStorageToRelease26 = (void*)(onboardingPanelString35 - 16);
        if ((void*)(onboardingPanelString35 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease26) == -1)
            memoryFree (stringStorageToRelease26);
        stringStorageToRelease27 = (void*)(diagnosticCodeString36 - 16);
        if ((void*)(diagnosticCodeString36 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease27) == -1)
            memoryFree (stringStorageToRelease27);
        juceStringConstructFromUtf8 (&messageString37, "rejected onboarding capability command");
        juceStringConstructFromUtf8 (&diagnosticCodeString36, "FAD-ONB-COMMAND-NONCE-MISMATCH");
        juceStringConstructFromUtf8 (&onboardingPanelString35, "OnboardingPanel");
        diagnosticsReportUiWarning (&onboardingPanelString35, &diagnosticCodeString36, &messageString37);
        stringStorageToRelease28 = (void*)(onboardingPanelString35 - 16);
        if ((void*)(onboardingPanelString35 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease28) == -1)
            memoryFree (stringStorageToRelease28);
        stringStorageToRelease29 = (void*)(diagnosticCodeString36 - 16);
        if ((void*)(diagnosticCodeString36 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease29) == -1)
            memoryFree (stringStorageToRelease29);
        temporaryPointer30 = messageString37 - 2;
        if (messageString37 - 2 != (std::int64_t*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)temporaryPointer30) == -1)
            memoryFree (temporaryPointer30);
        opaqueValue10 = opaqueValue4 != 9;
    }
    if (opaqueValue34 != 0)
        sub_1806C77B0 (&temporaryPointer32);
    return opaqueValue10;
}

// ===== Onboarding_HandleUrl_A @ 0x1806c9db0 size=376 =====
char onboardingFilterBrowserNavigation (std::int64_t panelWeakReference, std::uint64_t* navigationUrl)
{
    std::int64_t opaqueValue3; // rcx
    std::int64_t opaqueValue4; // rdi
    std::int64_t opaqueValue5; // rbx
    void* stringStorageToRelease6; // rcx
    void* stringStorageToRelease7; // rcx
    void* stringStorageToRelease8; // rcx
    std::int64_t opaqueValue10; // [rsp+40h] [rbp+8h] BYREF
    std::int64_t messageString11; // [rsp+50h] [rbp+18h] BYREF
    std::int64_t opaqueValue12; // [rsp+58h] [rbp+20h] BYREF

    if (*(std::uint64_t*)panelWeakReference != 0)
    {
        opaqueValue3 = *(std::uint64_t*)(*(std::uint64_t*)panelWeakReference + 16LL);
        if (opaqueValue3 != 0)
        {
            opaqueValue4 = cppRttiDynamicCast (
                opaqueValue3,
                0,
                (unsigned int)&juce::Component `RTTI Type Descriptor',
                (unsigned int)&fadmodel1::ui::OnboardingPanel `RTTI Type Descriptor',
                0);
            if (onboardingHandleAcceptanceRequest (opaqueValue4, navigationUrl, 0) == 0 && onboardingDispatchDeepLink (opaqueValue4, (std::int64_t)navigationUrl) == 0 && (std::uint8_t)juceStringStartsWithUtf8 (navigationUrl, "fadlab://onboarding-page/") == 0 && (std::uint8_t)juceStringStartsWithUtf8 (navigationUrl, "fadlab://") == 0)
            {
                opaqueValue5 = sub_1806C7BE0 (&opaqueValue12, navigationUrl);
                juceStringConstructFromUtf8 (&messageString11, "OnboardingPanel: blocked non-FADLab navigation: ");
                opaqueValue10 = *(std::uint64_t*)juceStringAppendString (&messageString11, opaqueValue5);
                if ((void*)(opaqueValue10 - 16) != &emptyJuceStringStorage)
                    _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue10 - 16));
                stringStorageToRelease6 = (void*)(messageString11 - 16);
                if ((void*)(messageString11 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease6) == -1)
                    memoryFree (stringStorageToRelease6);
                if (activeJuceLogger != 0)
                    (*(void (**) (std::int64_t, std::int64_t*)) (*(std::uint64_t*)activeJuceLogger + 8LL)) (activeJuceLogger, &opaqueValue10);
                else
                    juceLoggerWriteDefaultLog (&opaqueValue10);
                stringStorageToRelease7 = (void*)(opaqueValue10 - 16);
                if ((void*)(opaqueValue10 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease7) == -1)
                    memoryFree (stringStorageToRelease7);
                stringStorageToRelease8 = (void*)(opaqueValue12 - 16);
                if ((void*)(opaqueValue12 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease8) == -1)
                    memoryFree (stringStorageToRelease8);
            }
        }
    }
    return 0;
}

// ===== Onboarding_HandleUrl_B @ 0x1806cab50 size=589 =====
char onboardingHandleNativeCommand (std::int64_t panel, std::uint64_t* commandUrl)
{
    std::int64_t opaqueValue4; // rdi
    std::int64_t* prefixedString5; // rbx
    void* stringStorageToRelease6; // rcx
    void* stringStorageToRelease7; // rcx
    void* stringStorageToRelease8; // rcx
    void* stringStorageToRelease9; // rcx
    void* stringStorageToRelease10; // rcx
    void* stringStorageToRelease11; // rcx
    void* stringStorageToRelease12; // rcx
    void* stringStorageToRelease13; // rcx
    std::int64_t reusableString15; // [rsp+20h] [rbp-20h] BYREF
    std::uint8_t stackStorage16[8]; // [rsp+28h] [rbp-18h] BYREF
    std::int64_t opaqueValue17; // [rsp+30h] [rbp-10h] BYREF
    std::int64_t* temporaryPointer18; // [rsp+38h] [rbp-8h]
    std::int64_t onboardingPanelString19; // [rsp+70h] [rbp+30h] BYREF
    std::int64_t diagnosticCodeString20; // [rsp+78h] [rbp+38h] BYREF

    if (onboardingHandleAcceptanceRequest (panel, commandUrl, 1u) != 0 || onboardingDispatchDeepLink (panel, (std::int64_t)commandUrl) != 0)
        return 1;
    opaqueValue4 = sub_1806C7BE0 (&opaqueValue17, commandUrl);
    juceStringConstructFromUtf8 (&reusableString15, "FAD-ONB-NATIVE-COMMAND-REJECTED");
    prefixedString5 = (std::int64_t*)juceStringJoinUtf8Prefix (stackStorage16, "OnboardingPanel: ", &reusableString15);
    temporaryPointer18 = prefixedString5;
    juceStringAppendUtf8Range (prefixedString5, " rejected native onboarding command: ", "");
    onboardingPanelString19 = *prefixedString5;
    if ((void*)(onboardingPanelString19 - 16) != &emptyJuceStringStorage)
        _InterlockedIncrement ((volatile std::int32_t*)(onboardingPanelString19 - 16));
    stringStorageToRelease6 = (void*)(*prefixedString5 - 16);
    if (stringStorageToRelease6 != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease6) == -1)
        memoryFree (stringStorageToRelease6);
    temporaryPointer18 = &onboardingPanelString19;
    diagnosticCodeString20 = *(std::uint64_t*)juceStringAppendString (&onboardingPanelString19, opaqueValue4);
    if ((void*)(diagnosticCodeString20 - 16) != &emptyJuceStringStorage)
        _InterlockedIncrement ((volatile std::int32_t*)(diagnosticCodeString20 - 16));
    stringStorageToRelease7 = (void*)(onboardingPanelString19 - 16);
    if ((void*)(onboardingPanelString19 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease7) == -1)
        memoryFree (stringStorageToRelease7);
    if (activeJuceLogger != 0)
        (*(void (**) (std::int64_t, std::int64_t*)) (*(std::uint64_t*)activeJuceLogger + 8LL)) (activeJuceLogger, &diagnosticCodeString20);
    else
        juceLoggerWriteDefaultLog (&diagnosticCodeString20);
    stringStorageToRelease8 = (void*)(diagnosticCodeString20 - 16);
    if ((void*)(diagnosticCodeString20 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease8) == -1)
        memoryFree (stringStorageToRelease8);
    stringStorageToRelease9 = (void*)(reusableString15 - 16);
    if ((void*)(reusableString15 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease9) == -1)
        memoryFree (stringStorageToRelease9);
    stringStorageToRelease10 = (void*)(opaqueValue17 - 16);
    if ((void*)(opaqueValue17 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease10) == -1)
        memoryFree (stringStorageToRelease10);
    juceStringConstructFromUtf8 (&reusableString15, "rejected native onboarding command");
    juceStringConstructFromUtf8 (&diagnosticCodeString20, "FAD-ONB-NATIVE-COMMAND-REJECTED");
    juceStringConstructFromUtf8 (&onboardingPanelString19, "OnboardingPanel");
    diagnosticsReportUiWarning (&onboardingPanelString19, &diagnosticCodeString20, &reusableString15);
    stringStorageToRelease11 = (void*)(onboardingPanelString19 - 16);
    if ((void*)(onboardingPanelString19 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease11) == -1)
        memoryFree (stringStorageToRelease11);
    stringStorageToRelease12 = (void*)(diagnosticCodeString20 - 16);
    if ((void*)(diagnosticCodeString20 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease12) == -1)
        memoryFree (stringStorageToRelease12);
    stringStorageToRelease13 = (void*)(reusableString15 - 16);
    if ((void*)(reusableString15 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease13) == -1)
        memoryFree (stringStorageToRelease13);
    return 0;
}
