#include <cstdint>

// ===== AuthStore_WriteOnboardingCompleted @ 0x18035b130 size=7610 =====
std::int64_t authStorageDeserializeState (std::int64_t encodedState, const char* outputState)
{
    int opaqueValue2; // esi
    int opaqueValue3; // eax
    std::int64_t opaqueValue4; // rax
    std::int64_t stringStorageToRelease5; // rcx
    std::int64_t* temporaryPointer6; // r13
    std::int64_t opaqueValue7; // rdi
    std::uint8_t* temporaryPointer8; // r15
    std::int64_t opaqueValue9; // rax
    std::int64_t opaqueValue10; // r14
    struct _RTL_CRITICAL_SECTION* criticalSection11; // rbx
    int opaqueValue12; // esi
    char* temporaryPointer13; // rbx
    char** temporaryPointer14; // rdx
    char** temporaryPointer15; // rax
    std::int64_t opaqueValue16; // r15
    char opaqueValue17; // r14
    std::int64_t opaqueValue18; // rbx
    std::uint64_t* temporaryPointer19; // rdx
    std::uint64_t* temporaryPointer20; // r8
    char opaqueValue21; // bl
    void* stringStorageToRelease22; // rcx
    std::int64_t opaqueValue23; // rax
    std::uint64_t* temporaryPointer24; // rdx
    std::uint64_t* temporaryPointer25; // rax
    std::int64_t opaqueValue26; // rbx
    std::uint64_t* temporaryPointer27; // rdx
    std::uint64_t* temporaryPointer28; // rax
    std::int64_t opaqueValue29; // rax
    std::int64_t* temporaryPointer30; // rdx
    void* stringStorageToRelease31; // rcx
    std::int64_t opaqueValue32; // rax
    char* temporaryPointer33; // r13
    std::int64_t opaqueValue34; // rbx
    std::uint64_t* temporaryPointer35; // rdx
    std::uint64_t* temporaryPointer36; // rax
    std::int64_t opaqueValue37; // rbx
    std::int64_t opaqueValue38; // rax
    void* stringStorageToRelease39; // rcx
    std::int64_t opaqueValue40; // rbx
    std::uint64_t* temporaryPointer41; // rdx
    std::uint64_t* temporaryPointer42; // rax
    std::int64_t opaqueValue43; // rbx
    std::int64_t opaqueValue44; // rax
    std::int64_t opaqueValue45; // rcx
    void* stringStorageToRelease46; // rcx
    void* stringStorageToRelease47; // rcx
    std::int64_t opaqueValue48; // rbx
    std::uint64_t* temporaryPointer49; // rdx
    std::uint64_t* temporaryPointer50; // rax
    std::int64_t opaqueValue51; // rbx
    std::int64_t opaqueValue52; // rax
    std::int64_t opaqueValue53; // rcx
    void* stringStorageToRelease54; // rcx
    void* stringStorageToRelease55; // rcx
    std::int64_t opaqueValue56; // rbx
    std::uint64_t* temporaryPointer57; // rdx
    std::uint64_t* temporaryPointer58; // rax
    std::int64_t opaqueValue59; // rbx
    std::int64_t opaqueValue60; // rax
    std::int64_t opaqueValue61; // rcx
    void* stringStorageToRelease62; // rcx
    void* stringStorageToRelease63; // rcx
    std::int64_t opaqueValue64; // rbx
    std::uint64_t* temporaryPointer65; // rdx
    std::uint64_t* temporaryPointer66; // rax
    std::int64_t opaqueValue67; // rbx
    std::int64_t opaqueValue68; // rax
    std::int64_t opaqueValue69; // rcx
    void* stringStorageToRelease70; // rcx
    void* stringStorageToRelease71; // rcx
    std::int64_t opaqueValue72; // rbx
    std::uint64_t* temporaryPointer73; // rdx
    std::uint64_t* temporaryPointer74; // rax
    std::int64_t opaqueValue75; // rbx
    std::int64_t opaqueValue76; // rax
    std::int64_t opaqueValue77; // rcx
    void* stringStorageToRelease78; // rcx
    void* stringStorageToRelease79; // rcx
    std::int64_t opaqueValue80; // rbx
    std::uint64_t* temporaryPointer81; // rdx
    std::uint64_t* temporaryPointer82; // rax
    std::int64_t opaqueValue83; // rbx
    std::int64_t opaqueValue84; // rax
    std::int64_t opaqueValue85; // rcx
    void* stringStorageToRelease86; // rcx
    void* stringStorageToRelease87; // rcx
    std::int64_t opaqueValue88; // rbx
    std::uint64_t* temporaryPointer89; // rdx
    std::uint64_t* temporaryPointer90; // rax
    std::int64_t opaqueValue91; // rbx
    std::int64_t opaqueValue92; // rax
    std::int64_t opaqueValue93; // rcx
    void* stringStorageToRelease94; // rcx
    void* stringStorageToRelease95; // rcx
    std::int64_t opaqueValue96; // rbx
    std::uint64_t* temporaryPointer97; // rdx
    std::uint64_t* temporaryPointer98; // rax
    std::int64_t opaqueValue99; // rbx
    std::int64_t opaqueValue100; // rax
    std::int64_t opaqueValue101; // rcx
    void* stringStorageToRelease102; // rcx
    void* stringStorageToRelease103; // rcx
    std::int64_t opaqueValue104; // rbx
    std::uint64_t* temporaryPointer105; // rdx
    std::uint64_t* temporaryPointer106; // rax
    std::int64_t opaqueValue107; // rbx
    std::int64_t opaqueValue108; // rax
    std::int64_t opaqueValue109; // rcx
    void* stringStorageToRelease110; // rcx
    void* stringStorageToRelease111; // rcx
    std::int64_t opaqueValue112; // rbx
    std::uint64_t* temporaryPointer113; // rdx
    std::uint64_t* temporaryPointer114; // rax
    std::int64_t opaqueValue115; // rbx
    std::int64_t opaqueValue116; // rax
    std::int64_t opaqueValue117; // rcx
    void* stringStorageToRelease118; // rcx
    void* stringStorageToRelease119; // rcx
    std::int64_t opaqueValue120; // rbx
    std::uint64_t* temporaryPointer121; // rdx
    std::uint64_t* temporaryPointer122; // rax
    std::int64_t opaqueValue123; // rbx
    std::int64_t* temporaryPointer124; // rdx
    void* stringStorageToRelease125; // rcx
    std::int64_t opaqueValue126; // rax
    std::int64_t opaqueValue127; // rcx
    std::int64_t opaqueValue128; // rbx
    std::uint64_t* temporaryPointer129; // rdx
    std::uint64_t* temporaryPointer130; // rax
    std::int64_t opaqueValue131; // rbx
    std::int64_t opaqueValue132; // rax
    std::int64_t opaqueValue133; // rcx
    void* stringStorageToRelease134; // rcx
    void* stringStorageToRelease135; // rcx
    std::int64_t opaqueValue136; // rbx
    std::uint64_t* temporaryPointer137; // rdx
    std::uint64_t* temporaryPointer138; // rax
    std::int64_t opaqueValue139; // rdi
    std::int64_t opaqueValue140; // rax
    std::int64_t opaqueValue141; // rbx
    void* stringStorageToRelease142; // rcx
    std::int64_t opaqueValue143; // rax
    std::uint64_t* temporaryPointer144; // rdx
    std::uint64_t* temporaryPointer145; // rax
    std::int64_t opaqueValue146; // rax
    void* stringStorageToRelease147; // rcx
    std::int64_t opaqueValue148; // rbx
    std::uint64_t* temporaryPointer149; // rdx
    std::uint64_t* temporaryPointer150; // rax
    std::int64_t opaqueValue151; // rbx
    std::int64_t opaqueValue152; // rax
    std::int64_t opaqueValue153; // rcx
    void* stringStorageToRelease154; // rcx
    void* stringStorageToRelease155; // rcx
    std::int64_t opaqueValue156; // rbx
    std::uint64_t* temporaryPointer157; // rdx
    std::uint64_t* temporaryPointer158; // rax
    std::int64_t opaqueValue159; // rdi
    std::int64_t opaqueValue160; // rax
    std::int64_t opaqueValue161; // rbx
    void* stringStorageToRelease162; // rcx
    std::int64_t opaqueValue163; // rax
    std::uint64_t* temporaryPointer164; // rdx
    std::uint64_t* temporaryPointer165; // rax
    std::int64_t opaqueValue166; // rax
    void* stringStorageToRelease167; // rcx
    std::int64_t opaqueValue168; // rbx
    std::uint64_t* temporaryPointer169; // rdx
    std::uint64_t* temporaryPointer170; // rax
    std::int64_t opaqueValue171; // rdi
    std::int64_t opaqueValue172; // rax
    std::int64_t opaqueValue173; // rbx
    void* stringStorageToRelease174; // rcx
    void* stringStorageToRelease175; // rcx
    std::int64_t opaqueValue176; // rbx
    std::uint64_t* temporaryPointer177; // rdx
    std::uint64_t* temporaryPointer178; // rax
    std::int64_t opaqueValue179; // rbx
    std::int64_t opaqueValue180; // rax
    std::uint64_t* temporaryPointer181; // rdx
    std::uint64_t* temporaryPointer182; // rax
    std::int64_t opaqueValue183; // rax
    std::int64_t opaqueValue184; // rax
    void* stringStorageToRelease185; // rcx
    std::int64_t opaqueValue186; // rbx
    std::uint64_t* temporaryPointer187; // rdx
    std::uint64_t* temporaryPointer188; // rax
    std::int64_t opaqueValue189; // rdi
    std::int64_t opaqueValue190; // rax
    std::int64_t opaqueValue191; // rbx
    void* stringStorageToRelease192; // rcx
    std::uint64_t* temporaryPointer193; // rdx
    std::uint64_t* temporaryPointer194; // rax
    std::int64_t opaqueValue195; // rax
    void* stringStorageToRelease196; // rcx
    std::int64_t opaqueValue197; // rbx
    std::uint64_t* temporaryPointer198; // rdx
    std::uint64_t* temporaryPointer199; // rax
    std::int64_t opaqueValue200; // rdi
    std::int64_t opaqueValue201; // rax
    std::int64_t opaqueValue202; // rbx
    void* stringStorageToRelease203; // rcx
    std::uint64_t* temporaryPointer204; // rdx
    std::uint64_t* temporaryPointer205; // rax
    std::int64_t opaqueValue206; // rax
    void* stringStorageToRelease207; // rcx
    std::int64_t opaqueValue208; // rbx
    std::uint64_t* temporaryPointer209; // rdx
    std::uint64_t* temporaryPointer210; // rax
    std::int64_t opaqueValue211; // rdi
    std::int64_t opaqueValue212; // rax
    std::int64_t opaqueValue213; // rbx
    void* stringStorageToRelease214; // rcx
    void* stringStorageToRelease215; // rcx
    std::int64_t opaqueValue216; // rbx
    std::uint64_t* temporaryPointer217; // rdx
    std::uint64_t* temporaryPointer218; // rax
    std::int64_t opaqueValue219; // rbx
    std::int64_t opaqueValue220; // rax
    std::uint64_t* temporaryPointer221; // rdx
    std::uint64_t* temporaryPointer222; // rax
    std::int64_t opaqueValue223; // rax
    std::int64_t* temporaryPointer224; // rdx
    void* stringStorageToRelease225; // rcx
    std::int64_t opaqueValue226; // rax
    std::int64_t opaqueValue227; // rcx
    std::int64_t opaqueValue228; // rax
    std::uint64_t* temporaryPointer229; // rdx
    std::uint64_t* temporaryPointer230; // rax
    const char* temporaryPointer231; // rbx
    std::int64_t* temporaryPointer232; // rdx
    char* stringStorageToRelease233; // rcx
    std::int64_t opaqueValue234; // rax
    std::int64_t opaqueValue235; // rcx
    std::int64_t opaqueValue236; // rax
    const char** temporaryPointer237; // rdx
    const char** temporaryPointer238; // rax
    const char* temporaryPointer239; // rbx
    std::int64_t opaqueValue240; // rax
    std::int64_t opaqueValue241; // rcx
    void* stringStorageToRelease242; // rcx
    char* stringStorageToRelease243; // rcx
    std::int64_t opaqueValue244; // rax
    const char** temporaryPointer245; // rdx
    const char** temporaryPointer246; // rax
    const char* temporaryPointer247; // rbx
    std::int64_t opaqueValue248; // rax
    char* stringStorageToRelease249; // rcx
    std::int64_t opaqueValue250; // rax
    const char** temporaryPointer251; // rdx
    const char** temporaryPointer252; // rax
    const char* temporaryPointer253; // rbx
    std::int64_t opaqueValue254; // rax
    char* stringStorageToRelease255; // rcx
    std::int64_t opaqueValue256; // rax
    const char** temporaryPointer257; // rdx
    const char** temporaryPointer258; // rax
    const char* temporaryPointer259; // rbx
    std::int64_t opaqueValue260; // rax
    char* stringStorageToRelease261; // rcx
    std::int64_t opaqueValue262; // rbx
    std::int64_t opaqueValue264; // [rsp+30h] [rbp-79h] BYREF
    const char* temporaryPointer265; // [rsp+38h] [rbp-71h] BYREF
    std::uint8_t opaqueValue266; // [rsp+40h] [rbp-69h]
    std::int64_t opaqueValue267; // [rsp+48h] [rbp-61h]
    std::uint8_t* temporaryPointer268; // [rsp+50h] [rbp-59h] BYREF
    char* temporaryPointer269; // [rsp+58h] [rbp-51h] BYREF
    std::int64_t opaqueValue270; // [rsp+60h] [rbp-49h] BYREF
    std::int64_t opaqueValue271; // [rsp+68h] [rbp-41h] BYREF
    std::int64_t opaqueValue272; // [rsp+70h] [rbp-39h]
    std::int64_t opaqueValue273; // [rsp+78h] [rbp-31h] BYREF
    std::int64_t opaqueValue274; // [rsp+80h] [rbp-29h] BYREF
    char stackStorage275[8]; // [rsp+88h] [rbp-21h] BYREF
    std::uint64_t stackStorage276[6]; // [rsp+90h] [rbp-19h] BYREF
    std::int64_t opaqueValue277; // [rsp+C0h] [rbp+17h] BYREF

    temporaryPointer265 = outputState;
    opaqueValue270 = 0;
    opaqueValue2 = 0;
    LODWORD (temporaryPointer268) = 0;
    sub_1800462D0 (&opaqueValue274, encodedState);
    opaqueValue3 = (*(std::int64_t (**) (char*)) (opaqueValue274 + 56)) (stackStorage275);
    opaqueValue4 = cppRttiDynamicCast (
        opaqueValue3,
        0,
        (unsigned int)&juce::ReferenceCountedObject `RTTI Type Descriptor',
        (unsigned int)&juce::DynamicObject `RTTI Type Descriptor',
        0);
    opaqueValue267 = opaqueValue4;
    if (opaqueValue4 == 0 || *(std::uint32_t*)(opaqueValue4 + 28) == 0)
        goto label420;
    stackStorage276[0] = "deviceCode";
    stackStorage276[1] = "deviceSecret";
    stackStorage276[2] = "token";
    stackStorage276[3] = "refreshToken";
    stackStorage276[4] = "refreshOperationId";
    stackStorage276[5] = "standardResetEpoch";
    temporaryPointer6 = stackStorage276;
    opaqueValue7 = opaqueValue264;
    do
    {
        temporaryPointer8 = (std::uint8_t*)*temporaryPointer6;
        opaqueValue9 = sub_18009EA20 (stringStorageToRelease5);
        opaqueValue10 = opaqueValue9;
        if (temporaryPointer8 != nullptr && *temporaryPointer8 != 0)
        {
            criticalSection11 = (struct _RTL_CRITICAL_SECTION*)(opaqueValue9 + 16);
            opaqueValue272 = opaqueValue9 + 16;
            EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue9 + 16));
            sub_18009E8C0 (opaqueValue10);
            temporaryPointer268 = temporaryPointer8;
            sub_1800B4BF0 (&temporaryPointer269, opaqueValue10, &temporaryPointer268);
            opaqueValue12 = opaqueValue2 | 0x100;
            LeaveCriticalSection (criticalSection11);
            temporaryPointer13 = temporaryPointer269;
        }
        else
        {
            temporaryPointer13 = &emptyJuceStringCharacters;
            temporaryPointer269 = &emptyJuceStringCharacters;
            opaqueValue12 = opaqueValue2 | 0x100;
        }
        opaqueValue2 = opaqueValue12 | 1;
        LODWORD (temporaryPointer268) = opaqueValue2;
        temporaryPointer14 = *(char***)(opaqueValue267 + 16);
        stringStorageToRelease5 = 3LL * *(int*)(opaqueValue267 + 28);
        temporaryPointer15 = &temporaryPointer14[3 * *(int*)(opaqueValue267 + 28)];
        if (temporaryPointer14 == temporaryPointer15)
            goto label11;
        while (*temporaryPointer14 != temporaryPointer13)
        {
            temporaryPointer14 += 3;
            if (temporaryPointer14 == temporaryPointer15)
                goto label11;
        }
        if (temporaryPointer14 == (char**)-8LL || temporaryPointer14[1][10] != 0)
        {
        label11:
            opaqueValue16 = opaqueValue267;
        }
        else
        {
            sub_180096D60 (&opaqueValue264, temporaryPointer8);
            opaqueValue2 |= 2u;
            opaqueValue16 = opaqueValue267;
            temporaryPointer27 = *(std::uint64_t**)(opaqueValue267 + 16);
            stringStorageToRelease5 = 3LL * *(int*)(opaqueValue267 + 28);
            temporaryPointer28 = &temporaryPointer27[3 * *(int*)(opaqueValue267 + 28)];
            opaqueValue7 = opaqueValue264;
            if (temporaryPointer27 == temporaryPointer28)
                goto label42;
            while (*temporaryPointer27 != opaqueValue264)
            {
                temporaryPointer27 += 3;
                if (temporaryPointer27 == temporaryPointer28)
                    goto label42;
            }
            opaqueValue29 = (std::int64_t)(temporaryPointer27 + 1);
            if (temporaryPointer27 == (std::uint64_t*)-8LL)
            label42:
                opaqueValue29 = sub_180089E90();
            if (*(std::uint8_t*)(*(std::uint64_t*)opaqueValue29 + 6LL) == 0)
            {
                opaqueValue17 = 1;
                goto label13;
            }
        }
        opaqueValue17 = 0;
    label13:
        if ((opaqueValue2 & 2) != 0)
        {
            opaqueValue2 &= ~2u;
            stringStorageToRelease5 = opaqueValue7 - 16;
            if ((void*)(opaqueValue7 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease5) == -1)
                memoryFree ((LPVOID)stringStorageToRelease5);
        }
        if ((opaqueValue2 & 1) != 0)
        {
            opaqueValue2 &= ~1u;
            stringStorageToRelease5 = (std::int64_t)(temporaryPointer13 - 16);
            if (temporaryPointer13 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease5) == -1)
                memoryFree ((LPVOID)stringStorageToRelease5);
        }
        if (opaqueValue17 != 0)
            goto label420;
        ++temporaryPointer6;
    } while (temporaryPointer6 != &opaqueValue277);
    opaqueValue18 = sub_18009EA20 (stringStorageToRelease5);
    opaqueValue272 = opaqueValue18 + 16;
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue18 + 16));
    sub_18009E8C0 (opaqueValue18);
    temporaryPointer269 = "schemaVersion";
    sub_1800B4BF0 (&opaqueValue264, opaqueValue18, &temporaryPointer269);
    LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue18 + 16));
    temporaryPointer19 = *(std::uint64_t**)(opaqueValue16 + 16);
    temporaryPointer20 = &temporaryPointer19[3 * *(int*)(opaqueValue16 + 28)];
    if (temporaryPointer19 == temporaryPointer20)
        goto label26;
    while (*temporaryPointer19 != opaqueValue264)
    {
        temporaryPointer19 += 3;
        if (temporaryPointer19 == temporaryPointer20)
            goto label26;
    }
    if (temporaryPointer19 == (std::uint64_t*)-8LL || *(std::uint8_t*)(temporaryPointer19[1] + 10LL) != 0)
    label26:
        opaqueValue21 = 0;
    else
        opaqueValue21 = 1;
    opaqueValue266 = opaqueValue21;
    stringStorageToRelease22 = (void*)(opaqueValue264 - 16);
    if ((void*)(opaqueValue264 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease22) == -1)
        memoryFree (stringStorageToRelease22);
    if (opaqueValue21 == 0)
        goto label59;
    opaqueValue23 = sub_18009EA20 (stringStorageToRelease22);
    sub_18009E570 (opaqueValue23, &opaqueValue264, "schemaVersion");
    temporaryPointer24 = *(std::uint64_t**)(opaqueValue16 + 16);
    temporaryPointer25 = &temporaryPointer24[3 * *(int*)(opaqueValue16 + 28)];
    opaqueValue26 = opaqueValue264;
    if (temporaryPointer24 == temporaryPointer25)
        goto label49;
    while (*temporaryPointer24 != opaqueValue264)
    {
        temporaryPointer24 += 3;
        if (temporaryPointer24 == temporaryPointer25)
            goto label49;
    }
    temporaryPointer30 = temporaryPointer24 + 1;
    if (temporaryPointer30 == nullptr)
    label49:
        temporaryPointer30 = (std::int64_t*)sub_180089E90();
    opaqueValue272 = *temporaryPointer30;
    opaqueValue273 = 0;
    (*(void (**) (std::int64_t*, std::int64_t*)) (opaqueValue272 + 96)) (&opaqueValue273, temporaryPointer30 + 1);
    stringStorageToRelease31 = (void*)(opaqueValue26 - 16);
    if ((void*)(opaqueValue26 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease31) == -1)
        memoryFree (stringStorageToRelease31);
    opaqueValue32 = opaqueValue272;
    if (*(std::uint8_t*)(opaqueValue272 + 2) != 0 || *(std::uint8_t*)(opaqueValue272 + 3) != 0)
    {
        if ((*(unsigned int (**) (std::int64_t*)) (opaqueValue272 + 16)) (&opaqueValue273) != 1)
        {
            opaqueValue32 = opaqueValue272;
            goto label57;
        }
        (*(void (**) (std::int64_t*)) (opaqueValue272 + 88)) (&opaqueValue273);
    label59:
        temporaryPointer33 = (char*)temporaryPointer265;
        *((std::uint16_t*)temporaryPointer265 + 92) = 0;
        *((std::uint64_t*)temporaryPointer33 + 25) = 0;
        opaqueValue34 = sub_18009EA20 (stringStorageToRelease22);
        opaqueValue272 = opaqueValue34 + 16;
        EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue34 + 16));
        sub_18009E8C0 (opaqueValue34);
        temporaryPointer265 = "activated";
        sub_1800B4BF0 (&opaqueValue264, opaqueValue34, &temporaryPointer265);
        LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue34 + 16));
        temporaryPointer35 = *(std::uint64_t**)(opaqueValue16 + 16);
        temporaryPointer36 = &temporaryPointer35[3 * *(int*)(opaqueValue16 + 28)];
        opaqueValue37 = opaqueValue264;
        if (temporaryPointer35 == temporaryPointer36)
            goto label64;
        while (*temporaryPointer35 != opaqueValue264)
        {
            temporaryPointer35 += 3;
            if (temporaryPointer35 == temporaryPointer36)
                goto label64;
        }
        opaqueValue38 = (std::int64_t)(temporaryPointer35 + 1);
        if (temporaryPointer35 == (std::uint64_t*)-8LL)
        label64:
            opaqueValue38 = sub_180089E90();
        *temporaryPointer33 = (*(std::int64_t (**) (std::int64_t)) (*(std::uint64_t*)opaqueValue38 + 48LL)) (opaqueValue38 + 8);
        stringStorageToRelease39 = (void*)(opaqueValue37 - 16);
        if ((void*)(opaqueValue37 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease39) == -1)
            memoryFree (stringStorageToRelease39);
        opaqueValue40 = sub_18009EA20 (stringStorageToRelease39);
        opaqueValue272 = opaqueValue40 + 16;
        EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue40 + 16));
        sub_18009E8C0 (opaqueValue40);
        temporaryPointer265 = "deviceCode";
        sub_1800B4BF0 (&opaqueValue264, opaqueValue40, &temporaryPointer265);
        LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue40 + 16));
        temporaryPointer41 = *(std::uint64_t**)(opaqueValue16 + 16);
        temporaryPointer42 = &temporaryPointer41[3 * *(int*)(opaqueValue16 + 28)];
        opaqueValue43 = opaqueValue264;
        if (temporaryPointer41 == temporaryPointer42)
            goto label73;
        while (*temporaryPointer41 != opaqueValue264)
        {
            temporaryPointer41 += 3;
            if (temporaryPointer41 == temporaryPointer42)
                goto label73;
        }
        opaqueValue44 = (std::int64_t)(temporaryPointer41 + 1);
        if (temporaryPointer41 == (std::uint64_t*)-8LL)
        label73:
            opaqueValue44 = sub_180089E90();
        (*(void (**) (std::int64_t*, std::int64_t)) (*(std::uint64_t*)opaqueValue44 + 40LL)) (&opaqueValue270, opaqueValue44 + 8);
        opaqueValue45 = *((std::uint64_t*)temporaryPointer33 + 1);
        *((std::uint64_t*)temporaryPointer33 + 1) = opaqueValue270;
        opaqueValue270 = opaqueValue45;
        stringStorageToRelease46 = (void*)(opaqueValue45 - 16);
        if (stringStorageToRelease46 != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease46) == -1)
            memoryFree (stringStorageToRelease46);
        stringStorageToRelease47 = (void*)(opaqueValue43 - 16);
        if ((void*)(opaqueValue43 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease47) == -1)
            memoryFree (stringStorageToRelease47);
        opaqueValue48 = sub_18009EA20 (stringStorageToRelease47);
        opaqueValue272 = opaqueValue48 + 16;
        EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue48 + 16));
        sub_18009E8C0 (opaqueValue48);
        temporaryPointer265 = "deviceSecret";
        sub_1800B4BF0 (&opaqueValue264, opaqueValue48, &temporaryPointer265);
        LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue48 + 16));
        temporaryPointer49 = *(std::uint64_t**)(opaqueValue16 + 16);
        temporaryPointer50 = &temporaryPointer49[3 * *(int*)(opaqueValue16 + 28)];
        opaqueValue51 = opaqueValue264;
        if (temporaryPointer49 == temporaryPointer50)
            goto label85;
        while (*temporaryPointer49 != opaqueValue264)
        {
            temporaryPointer49 += 3;
            if (temporaryPointer49 == temporaryPointer50)
                goto label85;
        }
        opaqueValue52 = (std::int64_t)(temporaryPointer49 + 1);
        if (temporaryPointer49 == (std::uint64_t*)-8LL)
        label85:
            opaqueValue52 = sub_180089E90();
        (*(void (**) (std::int64_t*, std::int64_t)) (*(std::uint64_t*)opaqueValue52 + 40LL)) (&opaqueValue270, opaqueValue52 + 8);
        opaqueValue53 = *((std::uint64_t*)temporaryPointer33 + 2);
        *((std::uint64_t*)temporaryPointer33 + 2) = opaqueValue270;
        opaqueValue270 = opaqueValue53;
        stringStorageToRelease54 = (void*)(opaqueValue53 - 16);
        if (stringStorageToRelease54 != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease54) == -1)
            memoryFree (stringStorageToRelease54);
        stringStorageToRelease55 = (void*)(opaqueValue51 - 16);
        if ((void*)(opaqueValue51 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease55) == -1)
            memoryFree (stringStorageToRelease55);
        opaqueValue56 = sub_18009EA20 (stringStorageToRelease55);
        opaqueValue272 = opaqueValue56 + 16;
        EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue56 + 16));
        sub_18009E8C0 (opaqueValue56);
        temporaryPointer265 = "token";
        sub_1800B4BF0 (&opaqueValue264, opaqueValue56, &temporaryPointer265);
        LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue56 + 16));
        temporaryPointer57 = *(std::uint64_t**)(opaqueValue16 + 16);
        temporaryPointer58 = &temporaryPointer57[3 * *(int*)(opaqueValue16 + 28)];
        opaqueValue59 = opaqueValue264;
        if (temporaryPointer57 == temporaryPointer58)
            goto label97;
        while (*temporaryPointer57 != opaqueValue264)
        {
            temporaryPointer57 += 3;
            if (temporaryPointer57 == temporaryPointer58)
                goto label97;
        }
        opaqueValue60 = (std::int64_t)(temporaryPointer57 + 1);
        if (temporaryPointer57 == (std::uint64_t*)-8LL)
        label97:
            opaqueValue60 = sub_180089E90();
        (*(void (**) (std::int64_t*, std::int64_t)) (*(std::uint64_t*)opaqueValue60 + 40LL)) (&opaqueValue270, opaqueValue60 + 8);
        opaqueValue61 = *((std::uint64_t*)temporaryPointer33 + 3);
        *((std::uint64_t*)temporaryPointer33 + 3) = opaqueValue270;
        opaqueValue270 = opaqueValue61;
        stringStorageToRelease62 = (void*)(opaqueValue61 - 16);
        if (stringStorageToRelease62 != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease62) == -1)
            memoryFree (stringStorageToRelease62);
        stringStorageToRelease63 = (void*)(opaqueValue59 - 16);
        if ((void*)(opaqueValue59 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease63) == -1)
            memoryFree (stringStorageToRelease63);
        opaqueValue64 = sub_18009EA20 (stringStorageToRelease63);
        opaqueValue272 = opaqueValue64 + 16;
        EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue64 + 16));
        sub_18009E8C0 (opaqueValue64);
        temporaryPointer265 = "refreshToken";
        sub_1800B4BF0 (&opaqueValue264, opaqueValue64, &temporaryPointer265);
        LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue64 + 16));
        temporaryPointer65 = *(std::uint64_t**)(opaqueValue16 + 16);
        temporaryPointer66 = &temporaryPointer65[3 * *(int*)(opaqueValue16 + 28)];
        opaqueValue67 = opaqueValue264;
        if (temporaryPointer65 == temporaryPointer66)
            goto label109;
        while (*temporaryPointer65 != opaqueValue264)
        {
            temporaryPointer65 += 3;
            if (temporaryPointer65 == temporaryPointer66)
                goto label109;
        }
        opaqueValue68 = (std::int64_t)(temporaryPointer65 + 1);
        if (temporaryPointer65 == (std::uint64_t*)-8LL)
        label109:
            opaqueValue68 = sub_180089E90();
        (*(void (**) (std::int64_t*, std::int64_t)) (*(std::uint64_t*)opaqueValue68 + 40LL)) (&opaqueValue270, opaqueValue68 + 8);
        opaqueValue69 = *((std::uint64_t*)temporaryPointer33 + 4);
        *((std::uint64_t*)temporaryPointer33 + 4) = opaqueValue270;
        opaqueValue270 = opaqueValue69;
        stringStorageToRelease70 = (void*)(opaqueValue69 - 16);
        if (stringStorageToRelease70 != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease70) == -1)
            memoryFree (stringStorageToRelease70);
        stringStorageToRelease71 = (void*)(opaqueValue67 - 16);
        if ((void*)(opaqueValue67 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease71) == -1)
            memoryFree (stringStorageToRelease71);
        opaqueValue72 = sub_18009EA20 (stringStorageToRelease71);
        opaqueValue272 = opaqueValue72 + 16;
        EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue72 + 16));
        sub_18009E8C0 (opaqueValue72);
        temporaryPointer265 = "refreshOperationId";
        sub_1800B4BF0 (&opaqueValue264, opaqueValue72, &temporaryPointer265);
        LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue72 + 16));
        temporaryPointer73 = *(std::uint64_t**)(opaqueValue16 + 16);
        temporaryPointer74 = &temporaryPointer73[3 * *(int*)(opaqueValue16 + 28)];
        opaqueValue75 = opaqueValue264;
        if (temporaryPointer73 == temporaryPointer74)
            goto label121;
        while (*temporaryPointer73 != opaqueValue264)
        {
            temporaryPointer73 += 3;
            if (temporaryPointer73 == temporaryPointer74)
                goto label121;
        }
        opaqueValue76 = (std::int64_t)(temporaryPointer73 + 1);
        if (temporaryPointer73 == (std::uint64_t*)-8LL)
        label121:
            opaqueValue76 = sub_180089E90();
        (*(void (**) (std::int64_t*, std::int64_t)) (*(std::uint64_t*)opaqueValue76 + 40LL)) (&opaqueValue270, opaqueValue76 + 8);
        opaqueValue77 = *((std::uint64_t*)temporaryPointer33 + 5);
        *((std::uint64_t*)temporaryPointer33 + 5) = opaqueValue270;
        opaqueValue270 = opaqueValue77;
        stringStorageToRelease78 = (void*)(opaqueValue77 - 16);
        if (stringStorageToRelease78 != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease78) == -1)
            memoryFree (stringStorageToRelease78);
        stringStorageToRelease79 = (void*)(opaqueValue75 - 16);
        if ((void*)(opaqueValue75 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease79) == -1)
            memoryFree (stringStorageToRelease79);
        opaqueValue80 = sub_18009EA20 (stringStorageToRelease79);
        opaqueValue272 = opaqueValue80 + 16;
        EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue80 + 16));
        sub_18009E8C0 (opaqueValue80);
        temporaryPointer265 = "standardResetEpoch";
        sub_1800B4BF0 (&opaqueValue264, opaqueValue80, &temporaryPointer265);
        LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue80 + 16));
        temporaryPointer81 = *(std::uint64_t**)(opaqueValue16 + 16);
        temporaryPointer82 = &temporaryPointer81[3 * *(int*)(opaqueValue16 + 28)];
        opaqueValue83 = opaqueValue264;
        if (temporaryPointer81 == temporaryPointer82)
            goto label133;
        while (*temporaryPointer81 != opaqueValue264)
        {
            temporaryPointer81 += 3;
            if (temporaryPointer81 == temporaryPointer82)
                goto label133;
        }
        opaqueValue84 = (std::int64_t)(temporaryPointer81 + 1);
        if (temporaryPointer81 == (std::uint64_t*)-8LL)
        label133:
            opaqueValue84 = sub_180089E90();
        (*(void (**) (std::int64_t*, std::int64_t)) (*(std::uint64_t*)opaqueValue84 + 40LL)) (&opaqueValue270, opaqueValue84 + 8);
        opaqueValue85 = *((std::uint64_t*)temporaryPointer33 + 38);
        *((std::uint64_t*)temporaryPointer33 + 38) = opaqueValue270;
        opaqueValue270 = opaqueValue85;
        stringStorageToRelease86 = (void*)(opaqueValue85 - 16);
        if (stringStorageToRelease86 != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease86) == -1)
            memoryFree (stringStorageToRelease86);
        stringStorageToRelease87 = (void*)(opaqueValue83 - 16);
        if ((void*)(opaqueValue83 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease87) == -1)
            memoryFree (stringStorageToRelease87);
        opaqueValue88 = sub_18009EA20 (stringStorageToRelease87);
        opaqueValue272 = opaqueValue88 + 16;
        EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue88 + 16));
        sub_18009E8C0 (opaqueValue88);
        temporaryPointer265 = "tier";
        sub_1800B4BF0 (&opaqueValue264, opaqueValue88, &temporaryPointer265);
        LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue88 + 16));
        temporaryPointer89 = *(std::uint64_t**)(opaqueValue16 + 16);
        temporaryPointer90 = &temporaryPointer89[3 * *(int*)(opaqueValue16 + 28)];
        opaqueValue91 = opaqueValue264;
        if (temporaryPointer89 == temporaryPointer90)
            goto label145;
        while (*temporaryPointer89 != opaqueValue264)
        {
            temporaryPointer89 += 3;
            if (temporaryPointer89 == temporaryPointer90)
                goto label145;
        }
        opaqueValue92 = (std::int64_t)(temporaryPointer89 + 1);
        if (temporaryPointer89 == (std::uint64_t*)-8LL)
        label145:
            opaqueValue92 = sub_180089E90();
        (*(void (**) (std::int64_t*, std::int64_t)) (*(std::uint64_t*)opaqueValue92 + 40LL)) (&opaqueValue270, opaqueValue92 + 8);
        opaqueValue93 = *((std::uint64_t*)temporaryPointer33 + 6);
        *((std::uint64_t*)temporaryPointer33 + 6) = opaqueValue270;
        opaqueValue270 = opaqueValue93;
        stringStorageToRelease94 = (void*)(opaqueValue93 - 16);
        if (stringStorageToRelease94 != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease94) == -1)
            memoryFree (stringStorageToRelease94);
        stringStorageToRelease95 = (void*)(opaqueValue91 - 16);
        if ((void*)(opaqueValue91 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease95) == -1)
            memoryFree (stringStorageToRelease95);
        opaqueValue96 = sub_18009EA20 (stringStorageToRelease95);
        opaqueValue272 = opaqueValue96 + 16;
        EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue96 + 16));
        sub_18009E8C0 (opaqueValue96);
        temporaryPointer265 = "email";
        sub_1800B4BF0 (&opaqueValue264, opaqueValue96, &temporaryPointer265);
        LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue96 + 16));
        temporaryPointer97 = *(std::uint64_t**)(opaqueValue16 + 16);
        temporaryPointer98 = &temporaryPointer97[3 * *(int*)(opaqueValue16 + 28)];
        opaqueValue99 = opaqueValue264;
        if (temporaryPointer97 == temporaryPointer98)
            goto label157;
        while (*temporaryPointer97 != opaqueValue264)
        {
            temporaryPointer97 += 3;
            if (temporaryPointer97 == temporaryPointer98)
                goto label157;
        }
        opaqueValue100 = (std::int64_t)(temporaryPointer97 + 1);
        if (temporaryPointer97 == (std::uint64_t*)-8LL)
        label157:
            opaqueValue100 = sub_180089E90();
        (*(void (**) (std::int64_t*, std::int64_t)) (*(std::uint64_t*)opaqueValue100 + 40LL)) (&opaqueValue270, opaqueValue100 + 8);
        opaqueValue101 = *((std::uint64_t*)temporaryPointer33 + 7);
        *((std::uint64_t*)temporaryPointer33 + 7) = opaqueValue270;
        opaqueValue270 = opaqueValue101;
        stringStorageToRelease102 = (void*)(opaqueValue101 - 16);
        if (stringStorageToRelease102 != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease102) == -1)
            memoryFree (stringStorageToRelease102);
        stringStorageToRelease103 = (void*)(opaqueValue99 - 16);
        if ((void*)(opaqueValue99 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease103) == -1)
            memoryFree (stringStorageToRelease103);
        opaqueValue104 = sub_18009EA20 (stringStorageToRelease103);
        opaqueValue272 = opaqueValue104 + 16;
        EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue104 + 16));
        sub_18009E8C0 (opaqueValue104);
        temporaryPointer265 = "activationError";
        sub_1800B4BF0 (&opaqueValue264, opaqueValue104, &temporaryPointer265);
        LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue104 + 16));
        temporaryPointer105 = *(std::uint64_t**)(opaqueValue16 + 16);
        temporaryPointer106 = &temporaryPointer105[3 * *(int*)(opaqueValue16 + 28)];
        opaqueValue107 = opaqueValue264;
        if (temporaryPointer105 == temporaryPointer106)
            goto label169;
        while (*temporaryPointer105 != opaqueValue264)
        {
            temporaryPointer105 += 3;
            if (temporaryPointer105 == temporaryPointer106)
                goto label169;
        }
        opaqueValue108 = (std::int64_t)(temporaryPointer105 + 1);
        if (temporaryPointer105 == (std::uint64_t*)-8LL)
        label169:
            opaqueValue108 = sub_180089E90();
        (*(void (**) (std::int64_t*, std::int64_t)) (*(std::uint64_t*)opaqueValue108 + 40LL)) (&opaqueValue270, opaqueValue108 + 8);
        opaqueValue109 = *((std::uint64_t*)temporaryPointer33 + 8);
        *((std::uint64_t*)temporaryPointer33 + 8) = opaqueValue270;
        opaqueValue270 = opaqueValue109;
        stringStorageToRelease110 = (void*)(opaqueValue109 - 16);
        if (stringStorageToRelease110 != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease110) == -1)
            memoryFree (stringStorageToRelease110);
        stringStorageToRelease111 = (void*)(opaqueValue107 - 16);
        if ((void*)(opaqueValue107 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease111) == -1)
            memoryFree (stringStorageToRelease111);
        opaqueValue112 = sub_18009EA20 (stringStorageToRelease111);
        opaqueValue272 = opaqueValue112 + 16;
        EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue112 + 16));
        sub_18009E8C0 (opaqueValue112);
        temporaryPointer265 = "activationErrorCode";
        sub_1800B4BF0 (&opaqueValue264, opaqueValue112, &temporaryPointer265);
        LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue112 + 16));
        temporaryPointer113 = *(std::uint64_t**)(opaqueValue16 + 16);
        temporaryPointer114 = &temporaryPointer113[3 * *(int*)(opaqueValue16 + 28)];
        opaqueValue115 = opaqueValue264;
        if (temporaryPointer113 == temporaryPointer114)
            goto label181;
        while (*temporaryPointer113 != opaqueValue264)
        {
            temporaryPointer113 += 3;
            if (temporaryPointer113 == temporaryPointer114)
                goto label181;
        }
        opaqueValue116 = (std::int64_t)(temporaryPointer113 + 1);
        if (temporaryPointer113 == (std::uint64_t*)-8LL)
        label181:
            opaqueValue116 = sub_180089E90();
        (*(void (**) (std::int64_t*, std::int64_t)) (*(std::uint64_t*)opaqueValue116 + 40LL)) (&opaqueValue270, opaqueValue116 + 8);
        opaqueValue117 = *((std::uint64_t*)temporaryPointer33 + 9);
        *((std::uint64_t*)temporaryPointer33 + 9) = opaqueValue270;
        opaqueValue270 = opaqueValue117;
        stringStorageToRelease118 = (void*)(opaqueValue117 - 16);
        if (stringStorageToRelease118 != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease118) == -1)
            memoryFree (stringStorageToRelease118);
        stringStorageToRelease119 = (void*)(opaqueValue115 - 16);
        if ((void*)(opaqueValue115 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease119) == -1)
            memoryFree (stringStorageToRelease119);
        opaqueValue120 = sub_18009EA20 (stringStorageToRelease119);
        opaqueValue272 = opaqueValue120 + 16;
        EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue120 + 16));
        sub_18009E8C0 (opaqueValue120);
        temporaryPointer265 = "activationErrorStatusCode";
        sub_1800B4BF0 (&opaqueValue264, opaqueValue120, &temporaryPointer265);
        LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue120 + 16));
        temporaryPointer121 = *(std::uint64_t**)(opaqueValue16 + 16);
        temporaryPointer122 = &temporaryPointer121[3 * *(int*)(opaqueValue16 + 28)];
        opaqueValue123 = opaqueValue264;
        if (temporaryPointer121 == temporaryPointer122)
            goto label193;
        while (*temporaryPointer121 != opaqueValue264)
        {
            temporaryPointer121 += 3;
            if (temporaryPointer121 == temporaryPointer122)
                goto label193;
        }
        temporaryPointer124 = temporaryPointer121 + 1;
        if (temporaryPointer124 == nullptr)
        label193:
            temporaryPointer124 = (std::int64_t*)sub_180089E90();
        opaqueValue270 = *temporaryPointer124;
        opaqueValue271 = 0;
        (*(void (**) (std::int64_t*, std::int64_t*)) (opaqueValue270 + 96)) (&opaqueValue271, temporaryPointer124 + 1);
        stringStorageToRelease125 = (void*)(opaqueValue123 - 16);
        if ((void*)(opaqueValue123 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease125) == -1)
            memoryFree (stringStorageToRelease125);
        opaqueValue126 = opaqueValue270;
        if (*(std::uint8_t*)(opaqueValue270 + 2) != 0 || *(std::uint8_t*)(opaqueValue270 + 5) != 0)
        {
            *((std::uint32_t*)temporaryPointer33 + 20) = (*(std::int64_t (**) (std::int64_t*)) (opaqueValue270 + 16)) (&opaqueValue271);
            opaqueValue126 = opaqueValue270;
        }
        (*(void (**) (std::int64_t*)) (opaqueValue126 + 88)) (&opaqueValue271);
        opaqueValue128 = sub_18009EA20 (opaqueValue127);
        opaqueValue272 = opaqueValue128 + 16;
        EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue128 + 16));
        sub_18009E8C0 (opaqueValue128);
        temporaryPointer265 = "tokenDeliveryNonce";
        sub_1800B4BF0 (&opaqueValue264, opaqueValue128, &temporaryPointer265);
        LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue128 + 16));
        temporaryPointer129 = *(std::uint64_t**)(opaqueValue16 + 16);
        temporaryPointer130 = &temporaryPointer129[3 * *(int*)(opaqueValue16 + 28)];
        opaqueValue131 = opaqueValue264;
        if (temporaryPointer129 == temporaryPointer130)
            goto label205;
        while (*temporaryPointer129 != opaqueValue264)
        {
            temporaryPointer129 += 3;
            if (temporaryPointer129 == temporaryPointer130)
                goto label205;
        }
        opaqueValue132 = (std::int64_t)(temporaryPointer129 + 1);
        if (temporaryPointer129 == (std::uint64_t*)-8LL)
        label205:
            opaqueValue132 = sub_180089E90();
        (*(void (**) (std::int64_t*, std::int64_t)) (*(std::uint64_t*)opaqueValue132 + 40LL)) (&opaqueValue270, opaqueValue132 + 8);
        opaqueValue133 = *((std::uint64_t*)temporaryPointer33 + 11);
        *((std::uint64_t*)temporaryPointer33 + 11) = opaqueValue270;
        opaqueValue270 = opaqueValue133;
        stringStorageToRelease134 = (void*)(opaqueValue133 - 16);
        if (stringStorageToRelease134 != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease134) == -1)
            memoryFree (stringStorageToRelease134);
        stringStorageToRelease135 = (void*)(opaqueValue131 - 16);
        if ((void*)(opaqueValue131 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease135) == -1)
            memoryFree (stringStorageToRelease135);
        opaqueValue136 = sub_18009EA20 (stringStorageToRelease135);
        opaqueValue272 = opaqueValue136 + 16;
        EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue136 + 16));
        sub_18009E8C0 (opaqueValue136);
        temporaryPointer265 = "tokenExpiresAt";
        sub_1800B4BF0 (&opaqueValue264, opaqueValue136, &temporaryPointer265);
        LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue136 + 16));
        temporaryPointer137 = *(std::uint64_t**)(opaqueValue16 + 16);
        temporaryPointer138 = &temporaryPointer137[3 * *(int*)(opaqueValue16 + 28)];
        opaqueValue139 = opaqueValue264;
        if (temporaryPointer137 == temporaryPointer138)
            goto label215;
        while (*temporaryPointer137 != opaqueValue264)
        {
            temporaryPointer137 += 3;
            if (temporaryPointer137 == temporaryPointer138)
                goto label215;
        }
        if (temporaryPointer137 == (std::uint64_t*)-8LL || *(std::uint8_t*)(temporaryPointer137[1] + 10LL) != 0)
        {
        label215:
            opaqueValue140 = 0;
            opaqueValue141 = opaqueValue270;
        }
        else
        {
            opaqueValue143 = sub_18009EA20 (3LL * *(int*)(opaqueValue16 + 28));
            sub_18009E570 (opaqueValue143, &opaqueValue270, "tokenExpiresAt");
            LOBYTE (opaqueValue2) = opaqueValue2 | 4;
            temporaryPointer144 = *(std::uint64_t**)(opaqueValue16 + 16);
            temporaryPointer145 = &temporaryPointer144[3 * *(int*)(opaqueValue16 + 28)];
            opaqueValue141 = opaqueValue270;
            if (temporaryPointer144 == temporaryPointer145)
                goto label227;
            while (*temporaryPointer144 != opaqueValue270)
            {
                temporaryPointer144 += 3;
                if (temporaryPointer144 == temporaryPointer145)
                    goto label227;
            }
            opaqueValue146 = (std::int64_t)(temporaryPointer144 + 1);
            if (temporaryPointer144 == (std::uint64_t*)-8LL)
            label227:
                opaqueValue146 = sub_180089E90();
            opaqueValue140 = (*(std::int64_t (**) (std::int64_t)) (*(std::uint64_t*)opaqueValue146 + 24LL)) (opaqueValue146 + 8);
        }
        *((std::uint64_t*)temporaryPointer33 + 15) = opaqueValue140;
        if ((opaqueValue2 & 4) != 0)
        {
            LOBYTE (opaqueValue2) = opaqueValue2 & 0xFB;
            stringStorageToRelease142 = (void*)(opaqueValue141 - 16);
            if ((void*)(opaqueValue141 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease142) == -1)
                memoryFree (stringStorageToRelease142);
        }
        stringStorageToRelease147 = (void*)(opaqueValue139 - 16);
        if ((void*)(opaqueValue139 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease147) == -1)
            memoryFree (stringStorageToRelease147);
        opaqueValue148 = sub_18009EA20 (stringStorageToRelease147);
        opaqueValue272 = opaqueValue148 + 16;
        EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue148 + 16));
        sub_18009E8C0 (opaqueValue148);
        temporaryPointer265 = "entitlementStatus";
        sub_1800B4BF0 (&opaqueValue264, opaqueValue148, &temporaryPointer265);
        LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue148 + 16));
        temporaryPointer149 = *(std::uint64_t**)(opaqueValue16 + 16);
        temporaryPointer150 = &temporaryPointer149[3 * *(int*)(opaqueValue16 + 28)];
        opaqueValue151 = opaqueValue264;
        if (temporaryPointer149 == temporaryPointer150)
            goto label237;
        while (*temporaryPointer149 != opaqueValue264)
        {
            temporaryPointer149 += 3;
            if (temporaryPointer149 == temporaryPointer150)
                goto label237;
        }
        opaqueValue152 = (std::int64_t)(temporaryPointer149 + 1);
        if (temporaryPointer149 == (std::uint64_t*)-8LL)
        label237:
            opaqueValue152 = sub_180089E90();
        (*(void (**) (std::int64_t*, std::int64_t)) (*(std::uint64_t*)opaqueValue152 + 40LL)) (&opaqueValue270, opaqueValue152 + 8);
        opaqueValue153 = *((std::uint64_t*)temporaryPointer33 + 16);
        *((std::uint64_t*)temporaryPointer33 + 16) = opaqueValue270;
        opaqueValue270 = opaqueValue153;
        stringStorageToRelease154 = (void*)(opaqueValue153 - 16);
        if (stringStorageToRelease154 != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease154) == -1)
            memoryFree (stringStorageToRelease154);
        stringStorageToRelease155 = (void*)(opaqueValue151 - 16);
        if ((void*)(opaqueValue151 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease155) == -1)
            memoryFree (stringStorageToRelease155);
        opaqueValue156 = sub_18009EA20 (stringStorageToRelease155);
        opaqueValue272 = opaqueValue156 + 16;
        EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue156 + 16));
        sub_18009E8C0 (opaqueValue156);
        temporaryPointer265 = "entitlementExpiresAt";
        sub_1800B4BF0 (&opaqueValue264, opaqueValue156, &temporaryPointer265);
        LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue156 + 16));
        temporaryPointer157 = *(std::uint64_t**)(opaqueValue16 + 16);
        temporaryPointer158 = &temporaryPointer157[3 * *(int*)(opaqueValue16 + 28)];
        opaqueValue159 = opaqueValue264;
        if (temporaryPointer157 == temporaryPointer158)
            goto label247;
        while (*temporaryPointer157 != opaqueValue264)
        {
            temporaryPointer157 += 3;
            if (temporaryPointer157 == temporaryPointer158)
                goto label247;
        }
        if (temporaryPointer157 == (std::uint64_t*)-8LL || *(std::uint8_t*)(temporaryPointer157[1] + 10LL) != 0)
        {
        label247:
            opaqueValue160 = 0;
            opaqueValue161 = opaqueValue270;
        }
        else
        {
            opaqueValue163 = sub_18009EA20 (3LL * *(int*)(opaqueValue16 + 28));
            sub_18009E570 (opaqueValue163, &opaqueValue270, "entitlementExpiresAt");
            LOBYTE (opaqueValue2) = opaqueValue2 | 8;
            temporaryPointer164 = *(std::uint64_t**)(opaqueValue16 + 16);
            temporaryPointer165 = &temporaryPointer164[3 * *(int*)(opaqueValue16 + 28)];
            opaqueValue161 = opaqueValue270;
            if (temporaryPointer164 == temporaryPointer165)
                goto label259;
            while (*temporaryPointer164 != opaqueValue270)
            {
                temporaryPointer164 += 3;
                if (temporaryPointer164 == temporaryPointer165)
                    goto label259;
            }
            opaqueValue166 = (std::int64_t)(temporaryPointer164 + 1);
            if (temporaryPointer164 == (std::uint64_t*)-8LL)
            label259:
                opaqueValue166 = sub_180089E90();
            opaqueValue160 = (*(std::int64_t (**) (std::int64_t)) (*(std::uint64_t*)opaqueValue166 + 24LL)) (opaqueValue166 + 8);
        }
        *((std::uint64_t*)temporaryPointer33 + 17) = opaqueValue160;
        if ((opaqueValue2 & 8) != 0)
        {
            LOBYTE (opaqueValue2) = opaqueValue2 & 0xF7;
            stringStorageToRelease162 = (void*)(opaqueValue161 - 16);
            if ((void*)(opaqueValue161 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease162) == -1)
                memoryFree (stringStorageToRelease162);
        }
        stringStorageToRelease167 = (void*)(opaqueValue159 - 16);
        if ((void*)(opaqueValue159 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease167) == -1)
            memoryFree (stringStorageToRelease167);
        opaqueValue168 = sub_18009EA20 (stringStorageToRelease167);
        opaqueValue272 = opaqueValue168 + 16;
        EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue168 + 16));
        sub_18009E8C0 (opaqueValue168);
        temporaryPointer265 = "entitlementGraceUntil";
        sub_1800B4BF0 (&opaqueValue264, opaqueValue168, &temporaryPointer265);
        LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue168 + 16));
        temporaryPointer169 = *(std::uint64_t**)(opaqueValue16 + 16);
        temporaryPointer170 = &temporaryPointer169[3 * *(int*)(opaqueValue16 + 28)];
        opaqueValue171 = opaqueValue264;
        if (temporaryPointer169 == temporaryPointer170)
            goto label267;
        while (*temporaryPointer169 != opaqueValue264)
        {
            temporaryPointer169 += 3;
            if (temporaryPointer169 == temporaryPointer170)
                goto label267;
        }
        if (temporaryPointer169 == (std::uint64_t*)-8LL || *(std::uint8_t*)(temporaryPointer169[1] + 10LL) != 0)
        {
        label267:
            opaqueValue172 = sub_180351BB0 (temporaryPointer33 + 128, *((std::uint64_t*)temporaryPointer33 + 17));
            opaqueValue173 = opaqueValue270;
        }
        else
        {
            opaqueValue180 = sub_18009EA20 (3LL * *(int*)(opaqueValue16 + 28));
            sub_18009E570 (opaqueValue180, &opaqueValue270, "entitlementGraceUntil");
            LOBYTE (opaqueValue2) = opaqueValue2 | 0x10;
            temporaryPointer181 = *(std::uint64_t**)(opaqueValue16 + 16);
            temporaryPointer182 = &temporaryPointer181[3 * *(int*)(opaqueValue16 + 28)];
            opaqueValue173 = opaqueValue270;
            if (temporaryPointer181 == temporaryPointer182)
                goto label286;
            while (*temporaryPointer181 != opaqueValue270)
            {
                temporaryPointer181 += 3;
                if (temporaryPointer181 == temporaryPointer182)
                    goto label286;
            }
            opaqueValue183 = (std::int64_t)(temporaryPointer181 + 1);
            if (temporaryPointer181 == (std::uint64_t*)-8LL)
            label286:
                opaqueValue183 = sub_180089E90();
            opaqueValue172 = (*(std::int64_t (**) (std::int64_t)) (*(std::uint64_t*)opaqueValue183 + 24LL)) (opaqueValue183 + 8);
        }
        *((std::uint64_t*)temporaryPointer33 + 18) = opaqueValue172;
        if ((opaqueValue2 & 0x10) != 0)
        {
            LOBYTE (opaqueValue2) = opaqueValue2 & 0xEF;
            stringStorageToRelease174 = (void*)(opaqueValue173 - 16);
            if ((void*)(opaqueValue173 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease174) == -1)
                memoryFree (stringStorageToRelease174);
        }
        stringStorageToRelease175 = (void*)(opaqueValue171 - 16);
        if ((void*)(opaqueValue171 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease175) == -1)
            memoryFree (stringStorageToRelease175);
        opaqueValue176 = sub_18009EA20 (stringStorageToRelease175);
        opaqueValue272 = opaqueValue176 + 16;
        EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue176 + 16));
        sub_18009E8C0 (opaqueValue176);
        temporaryPointer265 = "isTrial";
        sub_1800B4BF0 (&opaqueValue264, opaqueValue176, &temporaryPointer265);
        LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue176 + 16));
        temporaryPointer177 = *(std::uint64_t**)(opaqueValue16 + 16);
        temporaryPointer178 = &temporaryPointer177[3 * *(int*)(opaqueValue16 + 28)];
        opaqueValue179 = opaqueValue264;
        if (temporaryPointer177 == temporaryPointer178)
            goto label289;
        while (*temporaryPointer177 != opaqueValue264)
        {
            temporaryPointer177 += 3;
            if (temporaryPointer177 == temporaryPointer178)
                goto label289;
        }
        opaqueValue184 = (std::int64_t)(temporaryPointer177 + 1);
        if (temporaryPointer177 == (std::uint64_t*)-8LL)
        label289:
            opaqueValue184 = sub_180089E90();
        temporaryPointer33[152] = (*(std::int64_t (**) (std::int64_t)) (*(std::uint64_t*)opaqueValue184 + 48LL)) (opaqueValue184 + 8);
        stringStorageToRelease185 = (void*)(opaqueValue179 - 16);
        if ((void*)(opaqueValue179 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease185) == -1)
            memoryFree (stringStorageToRelease185);
        opaqueValue186 = sub_18009EA20 (stringStorageToRelease185);
        opaqueValue272 = opaqueValue186 + 16;
        EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue186 + 16));
        sub_18009E8C0 (opaqueValue186);
        temporaryPointer265 = "trialStartedAt";
        sub_1800B4BF0 (&opaqueValue264, opaqueValue186, &temporaryPointer265);
        LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue186 + 16));
        temporaryPointer187 = *(std::uint64_t**)(opaqueValue16 + 16);
        temporaryPointer188 = &temporaryPointer187[3 * *(int*)(opaqueValue16 + 28)];
        opaqueValue189 = opaqueValue264;
        if (temporaryPointer187 == temporaryPointer188)
            goto label296;
        while (*temporaryPointer187 != opaqueValue264)
        {
            temporaryPointer187 += 3;
            if (temporaryPointer187 == temporaryPointer188)
                goto label296;
        }
        if (temporaryPointer187 == (std::uint64_t*)-8LL || *(std::uint8_t*)(temporaryPointer187[1] + 10LL) != 0)
        {
        label296:
            opaqueValue190 = 0;
            opaqueValue191 = opaqueValue270;
        }
        else
        {
            sub_180096D60 (&opaqueValue270, "trialStartedAt");
            LOBYTE (opaqueValue2) = opaqueValue2 | 0x20;
            temporaryPointer193 = *(std::uint64_t**)(opaqueValue16 + 16);
            temporaryPointer194 = &temporaryPointer193[3 * *(int*)(opaqueValue16 + 28)];
            opaqueValue191 = opaqueValue270;
            if (temporaryPointer193 == temporaryPointer194)
                goto label308;
            while (*temporaryPointer193 != opaqueValue270)
            {
                temporaryPointer193 += 3;
                if (temporaryPointer193 == temporaryPointer194)
                    goto label308;
            }
            opaqueValue195 = (std::int64_t)(temporaryPointer193 + 1);
            if (temporaryPointer193 == (std::uint64_t*)-8LL)
            label308:
                opaqueValue195 = sub_180089E90();
            opaqueValue190 = (*(std::int64_t (**) (std::int64_t)) (*(std::uint64_t*)opaqueValue195 + 24LL)) (opaqueValue195 + 8);
        }
        *((std::uint64_t*)temporaryPointer33 + 20) = opaqueValue190;
        if ((opaqueValue2 & 0x20) != 0)
        {
            LOBYTE (opaqueValue2) = opaqueValue2 & 0xDF;
            stringStorageToRelease192 = (void*)(opaqueValue191 - 16);
            if ((void*)(opaqueValue191 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease192) == -1)
                memoryFree (stringStorageToRelease192);
        }
        stringStorageToRelease196 = (void*)(opaqueValue189 - 16);
        if ((void*)(opaqueValue189 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease196) == -1)
            memoryFree (stringStorageToRelease196);
        opaqueValue197 = sub_18009EA20 (stringStorageToRelease196);
        opaqueValue272 = opaqueValue197 + 16;
        EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue197 + 16));
        sub_18009E8C0 (opaqueValue197);
        temporaryPointer265 = "trialExpiresAt";
        sub_1800B4BF0 (&opaqueValue264, opaqueValue197, &temporaryPointer265);
        LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue197 + 16));
        temporaryPointer198 = *(std::uint64_t**)(opaqueValue16 + 16);
        temporaryPointer199 = &temporaryPointer198[3 * *(int*)(opaqueValue16 + 28)];
        opaqueValue200 = opaqueValue264;
        if (temporaryPointer198 == temporaryPointer199)
            goto label316;
        while (*temporaryPointer198 != opaqueValue264)
        {
            temporaryPointer198 += 3;
            if (temporaryPointer198 == temporaryPointer199)
                goto label316;
        }
        if (temporaryPointer198 == (std::uint64_t*)-8LL || *(std::uint8_t*)(temporaryPointer198[1] + 10LL) != 0)
        {
        label316:
            opaqueValue201 = 0;
            opaqueValue202 = opaqueValue270;
        }
        else
        {
            sub_180096D60 (&opaqueValue270, "trialExpiresAt");
            LOBYTE (opaqueValue2) = opaqueValue2 | 0x40;
            temporaryPointer204 = *(std::uint64_t**)(opaqueValue16 + 16);
            temporaryPointer205 = &temporaryPointer204[3 * *(int*)(opaqueValue16 + 28)];
            opaqueValue202 = opaqueValue270;
            if (temporaryPointer204 == temporaryPointer205)
                goto label328;
            while (*temporaryPointer204 != opaqueValue270)
            {
                temporaryPointer204 += 3;
                if (temporaryPointer204 == temporaryPointer205)
                    goto label328;
            }
            opaqueValue206 = (std::int64_t)(temporaryPointer204 + 1);
            if (temporaryPointer204 == (std::uint64_t*)-8LL)
            label328:
                opaqueValue206 = sub_180089E90();
            opaqueValue201 = (*(std::int64_t (**) (std::int64_t)) (*(std::uint64_t*)opaqueValue206 + 24LL)) (opaqueValue206 + 8);
        }
        *((std::uint64_t*)temporaryPointer33 + 21) = opaqueValue201;
        if ((opaqueValue2 & 0x40) != 0)
        {
            LOBYTE (opaqueValue2) = opaqueValue2 & 0xBF;
            stringStorageToRelease203 = (void*)(opaqueValue202 - 16);
            if ((void*)(opaqueValue202 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease203) == -1)
                memoryFree (stringStorageToRelease203);
        }
        stringStorageToRelease207 = (void*)(opaqueValue200 - 16);
        if ((void*)(opaqueValue200 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease207) == -1)
            memoryFree (stringStorageToRelease207);
        opaqueValue208 = sub_18009EA20 (stringStorageToRelease207);
        opaqueValue272 = opaqueValue208 + 16;
        EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue208 + 16));
        sub_18009E8C0 (opaqueValue208);
        temporaryPointer265 = "authorizationServerTimeMs";
        sub_1800B4BF0 (&opaqueValue264, opaqueValue208, &temporaryPointer265);
        LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue208 + 16));
        temporaryPointer209 = *(std::uint64_t**)(opaqueValue16 + 16);
        temporaryPointer210 = &temporaryPointer209[3 * *(int*)(opaqueValue16 + 28)];
        opaqueValue211 = opaqueValue264;
        if (temporaryPointer209 == temporaryPointer210)
            goto label336;
        while (*temporaryPointer209 != opaqueValue264)
        {
            temporaryPointer209 += 3;
            if (temporaryPointer209 == temporaryPointer210)
                goto label336;
        }
        if (temporaryPointer209 == (std::uint64_t*)-8LL || *(std::uint8_t*)(temporaryPointer209[1] + 10LL) != 0)
        {
        label336:
            opaqueValue212 = 0;
            opaqueValue213 = opaqueValue270;
        }
        else
        {
            opaqueValue220 = sub_18009EA20 (3LL * *(int*)(opaqueValue16 + 28));
            sub_18009E570 (opaqueValue220, &opaqueValue270, "authorizationServerTimeMs");
            LOBYTE (opaqueValue2) = opaqueValue2 | 0x80;
            temporaryPointer221 = *(std::uint64_t**)(opaqueValue16 + 16);
            temporaryPointer222 = &temporaryPointer221[3 * *(int*)(opaqueValue16 + 28)];
            opaqueValue213 = opaqueValue270;
            if (temporaryPointer221 == temporaryPointer222)
                goto label355;
            while (*temporaryPointer221 != opaqueValue270)
            {
                temporaryPointer221 += 3;
                if (temporaryPointer221 == temporaryPointer222)
                    goto label355;
            }
            opaqueValue223 = (std::int64_t)(temporaryPointer221 + 1);
            if (temporaryPointer221 == (std::uint64_t*)-8LL)
            label355:
                opaqueValue223 = sub_180089E90();
            opaqueValue212 = (*(std::int64_t (**) (std::int64_t)) (*(std::uint64_t*)opaqueValue223 + 24LL)) (opaqueValue223 + 8);
        }
        *((std::uint64_t*)temporaryPointer33 + 22) = opaqueValue212;
        if ((opaqueValue2 & 0x80u) != 0)
        {
            stringStorageToRelease214 = (void*)(opaqueValue213 - 16);
            if ((void*)(opaqueValue213 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease214) == -1)
                memoryFree (stringStorageToRelease214);
        }
        stringStorageToRelease215 = (void*)(opaqueValue211 - 16);
        if ((void*)(opaqueValue211 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease215) == -1)
            memoryFree (stringStorageToRelease215);
        opaqueValue216 = sub_18009EA20 (stringStorageToRelease215);
        opaqueValue272 = opaqueValue216 + 16;
        EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue216 + 16));
        sub_18009E8C0 (opaqueValue216);
        temporaryPointer265 = "remaining";
        sub_1800B4BF0 (&opaqueValue264, opaqueValue216, &temporaryPointer265);
        LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue216 + 16));
        temporaryPointer217 = *(std::uint64_t**)(opaqueValue16 + 16);
        temporaryPointer218 = &temporaryPointer217[3 * *(int*)(opaqueValue16 + 28)];
        opaqueValue219 = opaqueValue264;
        if (temporaryPointer217 == temporaryPointer218)
            goto label358;
        while (*temporaryPointer217 != opaqueValue264)
        {
            temporaryPointer217 += 3;
            if (temporaryPointer217 == temporaryPointer218)
                goto label358;
        }
        temporaryPointer224 = temporaryPointer217 + 1;
        if (temporaryPointer224 == nullptr)
        label358:
            temporaryPointer224 = (std::int64_t*)sub_180089E90();
        opaqueValue270 = *temporaryPointer224;
        opaqueValue271 = 0;
        (*(void (**) (std::int64_t*, std::int64_t*)) (opaqueValue270 + 96)) (&opaqueValue271, temporaryPointer224 + 1);
        stringStorageToRelease225 = (void*)(opaqueValue219 - 16);
        if ((void*)(opaqueValue219 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease225) == -1)
            memoryFree (stringStorageToRelease225);
        opaqueValue226 = opaqueValue270;
        if (*(std::uint8_t*)(opaqueValue270 + 2) != 0 || *(std::uint8_t*)(opaqueValue270 + 5) != 0)
        {
            *((std::uint32_t*)temporaryPointer33 + 24) = (*(std::int64_t (**) (std::int64_t*)) (opaqueValue270 + 16)) (&opaqueValue271);
            opaqueValue226 = opaqueValue270;
        }
        (*(void (**) (std::int64_t*)) (opaqueValue226 + 88)) (&opaqueValue271);
        opaqueValue228 = sub_18009EA20 (opaqueValue227);
        sub_18009E570 (opaqueValue228, &temporaryPointer265, "quotaTotal");
        temporaryPointer229 = *(std::uint64_t**)(opaqueValue16 + 16);
        temporaryPointer230 = &temporaryPointer229[3 * *(int*)(opaqueValue16 + 28)];
        temporaryPointer231 = temporaryPointer265;
        if (temporaryPointer229 == temporaryPointer230)
            goto label370;
        while ((const char*)*temporaryPointer229 != temporaryPointer265)
        {
            temporaryPointer229 += 3;
            if (temporaryPointer229 == temporaryPointer230)
                goto label370;
        }
        temporaryPointer232 = temporaryPointer229 + 1;
        if (temporaryPointer232 == nullptr)
        label370:
            temporaryPointer232 = (std::int64_t*)sub_180089E90();
        opaqueValue272 = *temporaryPointer232;
        opaqueValue273 = 0;
        (*(void (**) (std::int64_t*, std::int64_t*)) (opaqueValue272 + 96)) (&opaqueValue273, temporaryPointer232 + 1);
        stringStorageToRelease233 = (char*)(temporaryPointer231 - 16);
        if (temporaryPointer231 - 16 != (const char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease233) == -1)
            memoryFree (stringStorageToRelease233);
        opaqueValue234 = opaqueValue272;
        if (*(std::uint8_t*)(opaqueValue272 + 2) != 0 || *(std::uint8_t*)(opaqueValue272 + 5) != 0)
        {
            *((std::uint32_t*)temporaryPointer33 + 25) = (*(std::int64_t (**) (std::int64_t*)) (opaqueValue272 + 16)) (&opaqueValue273);
            opaqueValue234 = opaqueValue272;
        }
        (*(void (**) (std::int64_t*)) (opaqueValue234 + 88)) (&opaqueValue273);
        sub_180350400 (temporaryPointer33);
        opaqueValue236 = sub_18009EA20 (opaqueValue235);
        sub_18009E570 (opaqueValue236, &temporaryPointer265, "pendingFeedback");
        temporaryPointer237 = *(const char***)(opaqueValue16 + 16);
        temporaryPointer238 = &temporaryPointer237[3 * *(int*)(opaqueValue16 + 28)];
        temporaryPointer239 = temporaryPointer265;
        if (temporaryPointer237 == temporaryPointer238)
            goto label382;
        while (*temporaryPointer237 != temporaryPointer265)
        {
            temporaryPointer237 += 3;
            if (temporaryPointer237 == temporaryPointer238)
                goto label382;
        }
        opaqueValue240 = (std::int64_t)(temporaryPointer237 + 1);
        if (temporaryPointer237 == (const char**)-8LL)
        label382:
            opaqueValue240 = sub_180089E90();
        (*(void (**) (std::int64_t*, std::int64_t)) (*(std::uint64_t*)opaqueValue240 + 40LL)) (&opaqueValue264, opaqueValue240 + 8);
        opaqueValue241 = *((std::uint64_t*)temporaryPointer33 + 27);
        *((std::uint64_t*)temporaryPointer33 + 27) = opaqueValue264;
        opaqueValue264 = opaqueValue241;
        stringStorageToRelease242 = (void*)(opaqueValue241 - 16);
        if (stringStorageToRelease242 != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease242) == -1)
            memoryFree (stringStorageToRelease242);
        stringStorageToRelease243 = (char*)(temporaryPointer239 - 16);
        if (temporaryPointer239 - 16 != (const char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease243) == -1)
            memoryFree (stringStorageToRelease243);
        opaqueValue244 = sub_18009EA20 (stringStorageToRelease243);
        sub_18009E570 (opaqueValue244, &temporaryPointer265, "tokenDeliveryAckPending");
        temporaryPointer245 = *(const char***)(opaqueValue16 + 16);
        temporaryPointer246 = &temporaryPointer245[3 * *(int*)(opaqueValue16 + 28)];
        temporaryPointer247 = temporaryPointer265;
        if (temporaryPointer245 == temporaryPointer246)
            goto label394;
        while (*temporaryPointer245 != temporaryPointer265)
        {
            temporaryPointer245 += 3;
            if (temporaryPointer245 == temporaryPointer246)
                goto label394;
        }
        opaqueValue248 = (std::int64_t)(temporaryPointer245 + 1);
        if (temporaryPointer245 == (const char**)-8LL)
        label394:
            opaqueValue248 = sub_180089E90();
        temporaryPointer33[224] = (*(std::int64_t (**) (std::int64_t)) (*(std::uint64_t*)opaqueValue248 + 48LL)) (opaqueValue248 + 8);
        stringStorageToRelease249 = (char*)(temporaryPointer247 - 16);
        if (temporaryPointer247 - 16 != (const char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease249) == -1)
            memoryFree (stringStorageToRelease249);
        opaqueValue250 = sub_18009EA20 (stringStorageToRelease249);
        sub_18009E570 (opaqueValue250, &temporaryPointer265, "onboardingCompleted");
        temporaryPointer251 = *(const char***)(opaqueValue16 + 16);
        temporaryPointer252 = &temporaryPointer251[3 * *(int*)(opaqueValue16 + 28)];
        temporaryPointer253 = temporaryPointer265;
        if (temporaryPointer251 == temporaryPointer252)
            goto label403;
        while (*temporaryPointer251 != temporaryPointer265)
        {
            temporaryPointer251 += 3;
            if (temporaryPointer251 == temporaryPointer252)
                goto label403;
        }
        opaqueValue254 = (std::int64_t)(temporaryPointer251 + 1);
        if (temporaryPointer251 == (const char**)-8LL)
        label403:
            opaqueValue254 = sub_180089E90();
        temporaryPointer33[208] = (*(std::int64_t (**) (std::int64_t)) (*(std::uint64_t*)opaqueValue254 + 48LL)) (opaqueValue254 + 8);
        stringStorageToRelease255 = (char*)(temporaryPointer253 - 16);
        if (temporaryPointer253 - 16 != (const char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease255) == -1)
            memoryFree (stringStorageToRelease255);
        opaqueValue256 = sub_18009EA20 (stringStorageToRelease255);
        sub_18009E570 (opaqueValue256, &temporaryPointer265, "onboardingVersion");
        temporaryPointer257 = *(const char***)(opaqueValue16 + 16);
        temporaryPointer258 = &temporaryPointer257[3 * *(int*)(opaqueValue16 + 28)];
        temporaryPointer259 = temporaryPointer265;
        if (temporaryPointer257 == temporaryPointer258)
            goto label412;
        while (*temporaryPointer257 != temporaryPointer265)
        {
            temporaryPointer257 += 3;
            if (temporaryPointer257 == temporaryPointer258)
                goto label412;
        }
        opaqueValue260 = (std::int64_t)(temporaryPointer257 + 1);
        if (temporaryPointer257 == (const char**)-8LL)
        label412:
            opaqueValue260 = sub_180089E90();
        *((std::uint32_t*)temporaryPointer33 + 53) = (*(std::int64_t (**) (std::int64_t)) (*(std::uint64_t*)opaqueValue260 + 16LL)) (opaqueValue260 + 8);
        stringStorageToRelease261 = (char*)(temporaryPointer259 - 16);
        if (temporaryPointer259 - 16 != (const char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease261) == -1)
            memoryFree (stringStorageToRelease261);
        opaqueValue262 = *((std::uint64_t*)temporaryPointer33 + 15);
        if (opaqueValue262 > 0 && clockGetUnixTimeMilliseconds() > opaqueValue262)
            juceStringClear (temporaryPointer33 + 24);
        sub_1803598E0 (temporaryPointer33);
        opaqueValue270 = (unsigned int)opaqueValue266 + 1;
    }
    else
    {
    label57:
        (*(void (**) (std::int64_t*)) (opaqueValue32 + 88)) (&opaqueValue273);
        LODWORD (opaqueValue270) = 3;
    }
label420:
    (*(void (**) (char*)) (opaqueValue274 + 88)) (stackStorage275);
    return opaqueValue270;
}
