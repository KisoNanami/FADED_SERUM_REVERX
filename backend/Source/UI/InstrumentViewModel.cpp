#include <cstdint>

// ===== MainWebViewModel_BuildAuthorizationStatus @ 0x18071f2b0 size=8801 =====
std::uint64_t* webViewBuildInstrumentViewModel (std::int64_t editor, std::uint64_t* outputModel)
{
    char* temporaryPointer2; // r13
    std::int64_t opaqueValue3; // rdx
    __int128* temporaryPointer4; // rax
    int opaqueValue5; // r15d
    std::int64_t opaqueValue6; // rax
    std::int64_t opaqueValue7; // rax
    volatile std::int32_t* temporaryPointer8; // r12
    std::int64_t opaqueValue9; // rbx
    std::int64_t opaqueValue10; // rax
    std::int64_t opaqueValue11; // rax
    std::int64_t opaqueValue12; // rax
    char opaqueValue13; // di
    std::int64_t opaqueValue14; // rdx
    std::int64_t* temporaryPointer15; // rax
    int opaqueValue16; // r15d
    std::int64_t opaqueValue17; // rbx
    std::int64_t opaqueValue18; // rax
    std::int64_t opaqueValue19; // rbx
    std::int64_t opaqueValue20; // rcx
    std::int64_t opaqueValue21; // rdx
    std::uint8_t opaqueValue22; // al
    std::int64_t opaqueValue23; // r8
    std::int64_t opaqueValue24; // rdx
    std::uint8_t opaqueValue25; // r9
    std::int64_t opaqueValue26; // rdx
    std::int64_t opaqueValue27; // rcx
    std::uint8_t opaqueValue28; // al
    std::int64_t opaqueValue29; // rbx
    std::int64_t opaqueValue30; // r14
    std::int64_t opaqueValue31; // rbx
    const char* temporaryPointer32; // rdx
    std::int64_t opaqueValue33; // rax
    std::int64_t opaqueValue34; // rbx
    std::int64_t opaqueValue35; // rax
    std::int64_t opaqueValue36; // rdx
    std::int64_t opaqueValue37; // rsi
    std::uint64_t* temporaryPointer38; // rbx
    char opaqueValue39; // r12
    char* temporaryPointer40; // r13
    std::int64_t opaqueValue41; // rax
    std::int64_t opaqueValue42; // rdi
    std::int64_t opaqueValue43; // rax
    bool conditionFlag44; // zf
    const char* temporaryPointer45; // rdx
    std::int64_t opaqueValue46; // rbx
    std::int64_t opaqueValue47; // rbx
    std::int64_t opaqueValue48; // rbx
    double scalarValue49; // xmm0_8
    unsigned int opaqueValue50; // eax
    std::int64_t opaqueValue51; // rbx
    std::int64_t opaqueValue52; // rbx
    std::int64_t opaqueValue53; // rbx
    std::int64_t opaqueValue54; // rax
    std::int64_t opaqueValue55; // rbx
    std::int64_t opaqueValue56; // rax
    std::int64_t opaqueValue57; // rbx
    std::int64_t opaqueValue58; // r8
    std::int64_t opaqueValue59; // rbx
    std::int64_t opaqueValue60; // rax
    std::int64_t opaqueValue61; // rbx
    std::int64_t opaqueValue62; // rax
    std::int64_t opaqueValue63; // rax
    std::int64_t opaqueValue64; // rbx
    int opaqueValue65; // r12d
    std::uint32_t* temporaryPointer66; // rbx
    std::int64_t allocatedObject67; // r14
    std::int64_t opaqueValue68; // rcx
    std::int64_t opaqueValue69; // rbx
    int opaqueValue70; // r15d
    void (*callbackFunction71) (std::int64_t, char**, void (***) (std::uint64_t*)); // rbx
    char* stringStorageToRelease72; // rcx
    std::int64_t (*callbackFunction73)(); // rdx
    std::int64_t opaqueValue74; // rcx
    std::int64_t opaqueValue75; // rbx
    void (*callbackFunction76) (std::int64_t, std::int64_t*, void (***) (std::uint64_t*)); // rbx
    void* stringStorageToRelease77; // rcx
    void (*callbackFunction78) (char**); // rdx
    std::int64_t opaqueValue79; // rax
    std::int64_t opaqueValue80; // rcx
    std::uint64_t* temporaryPointer81; // rax
    std::uint64_t* temporaryPointer82; // rdx
    std::int64_t opaqueValue83; // rax
    void (*callbackFunction84) (std::int64_t*); // rdx
    std::int64_t allocatedObject85; // rbx
    std::int64_t opaqueValue86; // rcx
    std::int64_t opaqueValue87; // rbx
    volatile std::int32_t* temporaryPointer88; // r12
    void (*callbackFunction89) (volatile std::int32_t*, std::int64_t*, void (***) (std::uint64_t*)); // rbx
    char* temporaryPointer90; // r13
    void* stringStorageToRelease91; // rcx
    std::int64_t opaqueValue92; // rcx
    std::int64_t opaqueValue93; // rbx
    void (*callbackFunction94) (volatile std::int32_t*, std::int64_t*, void (***) (std::uint64_t*)); // rbx
    void* stringStorageToRelease95; // rcx
    std::uint64_t* temporaryPointer96; // rsi
    std::int64_t opaqueValue97; // rcx
    std::int64_t opaqueValue98; // rbx
    void (*callbackFunction99) (volatile std::int32_t*, std::int64_t*, void (***) (std::uint64_t*)); // rbx
    void* stringStorageToRelease100; // rcx
    std::int64_t opaqueValue101; // rcx
    std::uint64_t* temporaryPointer102; // rsi
    std::int64_t opaqueValue103; // rcx
    std::int64_t opaqueValue104; // rbx
    void (*callbackFunction105) (volatile std::int32_t*, std::int64_t*, void (***) (std::uint64_t*)); // rbx
    void* stringStorageToRelease106; // rcx
    std::int64_t opaqueValue107; // rbx
    std::int64_t opaqueValue108; // rcx
    std::int64_t opaqueValue109; // rax
    void (*callbackFunction110) (char*); // rdx
    std::int64_t opaqueValue111; // rbx
    std::int64_t opaqueValue112; // rcx
    std::int64_t opaqueValue113; // rax
    std::int64_t opaqueValue114; // rbx
    std::int64_t opaqueValue115; // rcx
    std::int64_t opaqueValue116; // rax
    std::uint64_t* temporaryPointer117; // rax
    std::int64_t opaqueValue118; // rax
    void (*callbackFunction119) (char*); // rdx
    volatile std::int32_t* temporaryPointer120; // rcx
    std::uint64_t* temporaryPointer121; // rax
    std::int64_t opaqueValue122; // rax
    void (*callbackFunction123) (char*); // rdx
    volatile std::int32_t* temporaryPointer124; // rcx
    std::int64_t opaqueValue125; // rcx
    std::int64_t opaqueValue126; // rax
    volatile std::int32_t* temporaryPointer127; // rcx
    void (*callbackFunction128) (char*); // rdx
    std::uint64_t* temporaryPointer129; // rax
    std::int64_t opaqueValue130; // rax
    void (*callbackFunction131) (char*); // rdx
    volatile std::int32_t* temporaryPointer132; // rcx
    std::int64_t opaqueValue133; // rbx
    std::int64_t opaqueValue134; // rax
    std::int64_t opaqueValue135; // rbx
    std::int64_t opaqueValue136; // rcx
    std::int64_t opaqueValue137; // rax
    std::uint64_t* opaqueValue138; // rdi
    volatile std::int32_t* temporaryPointer139; // rbx
    std::uint64_t* allocatedObject141; // [rsp+20h] [rbp-E0h] BYREF
    std::int64_t reusableString142; // [rsp+28h] [rbp-D8h] BYREF
    char* temporaryPointer143; // [rsp+30h] [rbp-D0h] BYREF
    const char* temporaryPointer144; // [rsp+38h] [rbp-C8h] BYREF
    char* temporaryPointer145; // [rsp+40h] [rbp-C0h] BYREF
    volatile std::int32_t* temporaryPointer146; // [rsp+48h] [rbp-B8h] BYREF
    void (**callbackFunction147) (std::uint64_t*); // [rsp+50h] [rbp-B0h] BYREF
    std::int64_t opaqueValue148; // [rsp+58h] [rbp-A8h] BYREF
    char opaqueValue149; // [rsp+60h] [rbp-A0h]
    char* temporaryPointer150; // [rsp+68h] [rbp-98h] BYREF
    std::int64_t opaqueValue151; // [rsp+70h] [rbp-90h] BYREF
    LPVOID lpMem; // [rsp+78h] [rbp-88h] BYREF
    std::int64_t opaqueValue153; // [rsp+80h] [rbp-80h]
    std::int64_t opaqueValue154; // [rsp+88h] [rbp-78h] BYREF
    int opaqueValue155; // [rsp+90h] [rbp-70h]
    std::int64_t readyString156; // [rsp+98h] [rbp-68h] BYREF
    const char* temporaryPointer157; // [rsp+A0h] [rbp-60h] BYREF
    volatile std::int32_t* temporaryPointer158; // [rsp+A8h] [rbp-58h] BYREF
    char stackStorage159[8]; // [rsp+B0h] [rbp-50h] BYREF
    volatile std::int32_t* temporaryPointer160; // [rsp+B8h] [rbp-48h]
    std::int64_t opaqueValue161; // [rsp+C0h] [rbp-40h] BYREF
    std::uint64_t stackStorage162[2]; // [rsp+C8h] [rbp-38h] BYREF
    std::uint64_t* temporaryPointer163; // [rsp+D8h] [rbp-28h] BYREF
    std::uint8_t stackStorage164[40]; // [rsp+E0h] [rbp-20h] BYREF
    char stackStorage165[16]; // [rsp+108h] [rbp+8h] BYREF
    char stackStorage166[16]; // [rsp+118h] [rbp+18h] BYREF
    char stackStorage167[16]; // [rsp+128h] [rbp+28h] BYREF
    std::uint8_t stackStorage168[40]; // [rsp+138h] [rbp+38h] BYREF
    std::uint8_t stackStorage169[48]; // [rsp+160h] [rbp+60h] BYREF
    std::uint8_t stackStorage170[56]; // [rsp+190h] [rbp+90h] BYREF
    char stackStorage171[32]; // [rsp+1C8h] [rbp+C8h] BYREF
    std::int64_t opaqueValue172; // [rsp+1E8h] [rbp+E8h]
    std::int64_t opaqueValue173; // [rsp+1F0h] [rbp+F0h]
    char opaqueValue174; // [rsp+1F8h] [rbp+F8h]
    std::int64_t opaqueValue175; // [rsp+208h] [rbp+108h]
    char opaqueValue176; // [rsp+218h] [rbp+118h]
    __int128 opaqueValue177; // [rsp+2A0h] [rbp+1A0h] BYREF
    void (**callbackFunction178) (std::uint64_t*); // [rsp+2B0h] [rbp+1B0h] BYREF
    char* temporaryPointer179; // [rsp+2B8h] [rbp+1B8h] BYREF
    std::int64_t opaqueValue180; // [rsp+2C0h] [rbp+1C0h] BYREF
    char stackStorage181[8]; // [rsp+2C8h] [rbp+1C8h] BYREF
    std::int64_t opaqueValue182; // [rsp+2D0h] [rbp+1D0h] BYREF
    char stackStorage183[8]; // [rsp+2D8h] [rbp+1D8h] BYREF
    std::uint64_t* temporaryPointer184; // [rsp+2E0h] [rbp+1E0h] BYREF
    std::int64_t opaqueValue185; // [rsp+2E8h] [rbp+1E8h] BYREF
    std::uint8_t stackStorage186[16]; // [rsp+2F0h] [rbp+1F0h] BYREF
    std::uint8_t stackStorage187[16]; // [rsp+300h] [rbp+200h] BYREF
    std::uint8_t stackStorage188[16]; // [rsp+310h] [rbp+210h] BYREF
    std::uint8_t stackStorage189[16]; // [rsp+320h] [rbp+220h] BYREF
    std::uint8_t stackStorage190[16]; // [rsp+330h] [rbp+230h] BYREF
    std::uint8_t stackStorage191[16]; // [rsp+340h] [rbp+240h] BYREF
    std::uint8_t stackStorage192[16]; // [rsp+350h] [rbp+250h] BYREF
    std::uint8_t stackStorage193[16]; // [rsp+360h] [rbp+260h] BYREF
    std::uint8_t stackStorage194[16]; // [rsp+370h] [rbp+270h] BYREF
    std::uint8_t stackStorage195[16]; // [rsp+380h] [rbp+280h] BYREF
    std::uint8_t stackStorage196[64]; // [rsp+390h] [rbp+290h] BYREF
    std::uint8_t* temporaryPointer197; // [rsp+3D0h] [rbp+2D0h]
    std::uint8_t stackStorage198[248]; // [rsp+3D8h] [rbp+2D8h] BYREF

    temporaryPointer163 = outputModel;
    temporaryPointer2 = (char*)editor;
    temporaryPointer143 = (char*)editor;
    temporaryPointer146 = (volatile std::int32_t*)outputModel;
    opaqueValue155 = 0;
    opaqueValue3 = *(std::uint64_t*)(editor + 112);
    if (opaqueValue3 != 0)
    {
        temporaryPointer4 = (__int128*)sub_180081080 (&opaqueValue180, opaqueValue3 + 272);
        opaqueValue5 = 1;
    }
    else
    {
        opaqueValue177 = 0;
        temporaryPointer4 = &opaqueValue177;
        opaqueValue5 = 2;
    }
    sub_180081080 (stackStorage159, temporaryPointer4);
    if ((opaqueValue5 & 2) != 0)
    {
        opaqueValue5 &= ~2u;
        sub_18001DAA0 (&opaqueValue177);
    }
    if ((opaqueValue5 & 1) != 0)
    {
        opaqueValue5 &= ~1u;
        sub_18001DAA0 (&opaqueValue180);
    }
    opaqueValue6 = sub_180081080 (&opaqueValue180, stackStorage159);
    sub_180383340 (stackStorage168, opaqueValue6, "N4.project");
    sub_1800783E0 (&temporaryPointer158);
    opaqueValue7 = sub_180036100 (&temporaryPointer145);
    sub_1800A3A70 (&opaqueValue177, opaqueValue7);
    sub_180096D60 (&allocatedObject141, "version");
    temporaryPointer8 = temporaryPointer158;
    temporaryPointer146 = temporaryPointer158;
    sub_1800A6D50 (temporaryPointer158, &allocatedObject141, &opaqueValue177);
    sub_18000B8D0 (&allocatedObject141);
    sub_1800A3440 (&opaqueValue177);
    sub_18000B8D0 (&temporaryPointer145);
    opaqueValue9 = sub_1807111A0 (temporaryPointer2, &opaqueValue180);
    sub_180096D60 (&allocatedObject141, "instrumentControls");
    sub_1800A6D50 (temporaryPointer8, &allocatedObject141, opaqueValue9);
    sub_18000B8D0 (&allocatedObject141);
    sub_1800A3440 (&opaqueValue180);
    *(std::uint64_t*)&opaqueValue177 = &unk_180F51350;
    *((std::uint64_t*)&opaqueValue177 + 1) = *((std::uint64_t*)temporaryPointer2 + 102);
    sub_180096D60 (&allocatedObject141, "authoritativeRevision");
    sub_1800A6D50 (temporaryPointer8, &allocatedObject141, &opaqueValue177);
    sub_18000B8D0 (&allocatedObject141);
    sub_1800A3440 (&opaqueValue177);
    opaqueValue10 = sub_180704060 (&temporaryPointer145, *((unsigned int*)temporaryPointer2 + 168));
    sub_1800A3A70 (&opaqueValue177, opaqueValue10);
    sub_180096D60 (&allocatedObject141, "workspace");
    sub_1800A6D50 (temporaryPointer8, &allocatedObject141, &opaqueValue177);
    sub_18000B8D0 (&allocatedObject141);
    sub_1800A3440 (&opaqueValue177);
    sub_18000B8D0 (&temporaryPointer145);
    sub_1800A3560 (&opaqueValue177, temporaryPointer2 + 472);
    sub_180096D60 (&allocatedObject141, "presetName");
    sub_1800A6D50 (temporaryPointer8, &allocatedObject141, &opaqueValue177);
    sub_18000B8D0 (&allocatedObject141);
    sub_1800A3440 (&opaqueValue177);
    opaqueValue11 = sub_180387D30 (*((std::uint64_t*)temporaryPointer2 + 10));
    sub_18039A6C0 (opaqueValue11, stackStorage186);
    opaqueValue12 = sub_1800A3E20 (stackStorage186, "preview");
    opaqueValue13 = sub_1800A36A0 (opaqueValue12);
    sub_180096D60 (&allocatedObject141, "assetEditor");
    sub_1800A6D50 (temporaryPointer8, &allocatedObject141, stackStorage186);
    sub_18000B8D0 (&allocatedObject141);
    if (temporaryPointer2[680] != 0 || opaqueValue13 != 0)
        LOBYTE (opaqueValue14) = 1;
    else
        opaqueValue14 = 0;
    sub_1800A34D0 (&opaqueValue177, opaqueValue14);
    sub_180096D60 (&allocatedObject141, "previewActive");
    sub_1800A6D50 (temporaryPointer8, &allocatedObject141, &opaqueValue177);
    sub_18000B8D0 (&allocatedObject141);
    sub_1800A3440 (&opaqueValue177);
    if (opaqueValue13 != 0)
    {
        juceStringConstructFromUtf8 (&reusableString142, "asset");
        temporaryPointer15 = &reusableString142;
        opaqueValue16 = opaqueValue5 | 4;
    }
    else
    {
        temporaryPointer15 = (std::int64_t*)sub_18008BD40 (&temporaryPointer145, temporaryPointer2 + 688);
        opaqueValue16 = opaqueValue5 | 8;
    }
    opaqueValue155 = opaqueValue16;
    sub_1800A3A70 (&opaqueValue177, temporaryPointer15);
    sub_180096D60 (&allocatedObject141, "previewKind");
    sub_1800A6D50 (temporaryPointer8, &allocatedObject141, &opaqueValue177);
    sub_18000B8D0 (&allocatedObject141);
    sub_1800A3440 (&opaqueValue177);
    if ((opaqueValue16 & 8) != 0)
    {
        opaqueValue16 &= ~8u;
        sub_18000B8D0 (&temporaryPointer145);
    }
    if ((opaqueValue16 & 4) != 0)
    {
        opaqueValue16 &= ~4u;
        sub_18000B8D0 (&reusableString142);
    }
    opaqueValue17 = *((std::uint64_t*)temporaryPointer2 + 11);
    temporaryPointer150 = &emptyJuceStringCharacters;
    juceStringConstructFromUtf8 (&reusableString142, "modSourceStrip");
    opaqueValue18 = sub_180051FD0 (opaqueValue17, &temporaryPointer145, &reusableString142, &temporaryPointer150);
    opaqueValue19 = sub_1800A66C0 (&opaqueValue180, opaqueValue18);
    sub_180096D60 (&allocatedObject141, "modSourceStrip");
    sub_1800A6D50 (temporaryPointer8, &allocatedObject141, opaqueValue19);
    sub_18000B8D0 (&allocatedObject141);
    sub_1800A3440 (&opaqueValue180);
    sub_18000B8D0 (&temporaryPointer145);
    sub_18000B8D0 (&reusableString142);
    sub_18000B8D0 (&temporaryPointer150);
    sub_1800A34D0 (&opaqueValue177, (std::uint8_t)temporaryPointer2[696]);
    sub_180096D60 (&allocatedObject141, "importPreparing");
    sub_1800A6D50 (temporaryPointer8, &allocatedObject141, &opaqueValue177);
    sub_18000B8D0 (&allocatedObject141);
    sub_1800A3440 (&opaqueValue177);
    opaqueValue20 = *((std::uint64_t*)temporaryPointer2 + 9);
    if (*(std::uint64_t*)(opaqueValue20 + 760) != 0 && (std::uint8_t)sub_18007DD20 (opaqueValue20 + 704) != 0)
        LOBYTE (opaqueValue21) = 1;
    else
        opaqueValue21 = 0;
    sub_1800A34D0 (&opaqueValue177, opaqueValue21);
    sub_180096D60 (&allocatedObject141, "canQuickSave");
    sub_1800A6D50 (temporaryPointer8, &allocatedObject141, &opaqueValue177);
    sub_18000B8D0 (&allocatedObject141);
    sub_1800A3440 (&opaqueValue177);
    opaqueValue22 = sub_18020D5A0 (*((std::uint64_t*)temporaryPointer2 + 10) + 1112LL);
    temporaryPointer2[737] = opaqueValue22;
    temporaryPointer2[738] = sub_18020D5D0 (opaqueValue23 + 1112, opaqueValue24, opaqueValue23, opaqueValue22);
    sub_1800A34D0 (&opaqueValue177, opaqueValue25);
    sub_180096D60 (&allocatedObject141, "canUndo");
    sub_1800A6D50 (temporaryPointer8, &allocatedObject141, &opaqueValue177);
    sub_18000B8D0 (&allocatedObject141);
    sub_1800A3440 (&opaqueValue177);
    sub_1800A34D0 (&opaqueValue177, (std::uint8_t)temporaryPointer2[738]);
    sub_180096D60 (&allocatedObject141, "canRedo");
    sub_1800A6D50 (temporaryPointer8, &allocatedObject141, &opaqueValue177);
    sub_18000B8D0 (&allocatedObject141);
    sub_1800A3440 (&opaqueValue177);
    if (opaqueValue13 != 0 || *(std::uint64_t*)((opaqueValue27 = *((std::uint64_t*)temporaryPointer2 + 9)) + 952) != 0 && (std::uint8_t)sub_18007DD20 (opaqueValue27 + 896) != 0)
        LOBYTE (opaqueValue26) = 1;
    else
        opaqueValue26 = 0;
    sub_1800A34D0 (&opaqueValue177, opaqueValue26);
    sub_180096D60 (&allocatedObject141, "canComparePreview");
    sub_1800A6D50 (temporaryPointer8, &allocatedObject141, &opaqueValue177);
    sub_18000B8D0 (&allocatedObject141);
    sub_1800A3440 (&opaqueValue177);
    opaqueValue28 = sub_180218130 (*((std::uint64_t*)temporaryPointer2 + 10) + 768LL);
    sub_1800A34D0 (&callbackFunction178, opaqueValue28);
    sub_180096D60 (&reusableString142, "comparingBaseline");
    sub_1800A6D50 (temporaryPointer8, &reusableString142, &callbackFunction178);
    sub_18000B8D0 (&reusableString142);
    sub_1800A3440 (&callbackFunction178);
    sub_1800A3560 (&opaqueValue177, temporaryPointer2 + 536);
    sub_180096D60 (&allocatedObject141, "previewedPresetId");
    sub_1800A6D50 (temporaryPointer8, &allocatedObject141, &opaqueValue177);
    sub_18000B8D0 (&allocatedObject141);
    sub_1800A3440 (&opaqueValue177);
    sub_1800A3560 (&opaqueValue177, temporaryPointer2 + 544);
    sub_180096D60 (&allocatedObject141, "previewedPresetName");
    sub_1800A6D50 (temporaryPointer8, &allocatedObject141, &opaqueValue177);
    sub_18000B8D0 (&allocatedObject141);
    sub_1800A3440 (&opaqueValue177);
    opaqueValue29 = (std::uint8_t)sub_180724910 (temporaryPointer2);
    sub_1800A34D0 (&opaqueValue177, opaqueValue29);
    sub_180096D60 (&allocatedObject141, "modified");
    sub_1800A6D50 (temporaryPointer8, &allocatedObject141, &opaqueValue177);
    sub_18000B8D0 (&allocatedObject141);
    sub_1800A3440 (&opaqueValue177);
    temporaryPointer2[736] = opaqueValue29;
    sub_1800A3560 (&opaqueValue177, temporaryPointer2 + 552);
    sub_180096D60 (&allocatedObject141, "statusMessage");
    sub_1800A6D50 (temporaryPointer8, &allocatedObject141, &opaqueValue177);
    sub_18000B8D0 (&allocatedObject141);
    sub_1800A3440 (&opaqueValue177);
    juceStringConstructFromUtf8 (&readyString156, "ready");
    sub_1800783E0 (&opaqueValue161);
    sub_1800A3490 (&opaqueValue177, 0);
    sub_180096D60 (&allocatedObject141, "expiresAt");
    opaqueValue30 = opaqueValue161;
    sub_1800A6D50 (opaqueValue161, &allocatedObject141, &opaqueValue177);
    sub_18000B8D0 (&allocatedObject141);
    sub_1800A3440 (&opaqueValue177);
    sub_1800A3490 (&opaqueValue177, 0);
    sub_180096D60 (&allocatedObject141, "graceUntil");
    sub_1800A6D50 (opaqueValue30, &allocatedObject141, &opaqueValue177);
    sub_18000B8D0 (&allocatedObject141);
    sub_1800A3440 (&opaqueValue177);
    sub_1800A3590 (&opaqueValue177, "unknown");
    sub_180096D60 (&allocatedObject141, "pointStatus");
    sub_1800A6D50 (opaqueValue30, &allocatedObject141, &opaqueValue177);
    sub_18000B8D0 (&allocatedObject141);
    sub_1800A3440 (&opaqueValue177);
    sub_1800A34D0 (&opaqueValue177, 0);
    sub_180096D60 (&allocatedObject141, "storeManaged");
    sub_1800A6D50 (opaqueValue30, &allocatedObject141, &opaqueValue177);
    sub_18000B8D0 (&allocatedObject141);
    sub_1800A3440 (&opaqueValue177);
    if (!audioGateIsRenderAuthorized (*((std::uint64_t*)temporaryPointer2 + 10)))
    {
        opaqueValue31 = *(std::uint64_t*)(*((std::uint64_t*)temporaryPointer2 + 10) + 475552LL);
        authManagerCopyStateSnapshot (opaqueValue31, (std::int64_t)stackStorage196);
        if ((std::uint8_t)authManagerIsInitialVerificationComplete (opaqueValue31) != 0 && (*temporaryPointer197 != 0 || stackStorage196[0] == 0 || stackStorage198[112] != 0))
            temporaryPointer32 = "unverified";
        else
            temporaryPointer32 = "checking";
        juceStringConstructFromUtf8 (&reusableString142, temporaryPointer32);
        opaqueValue33 = readyString156;
        opaqueValue34 = reusableString142;
        readyString156 = reusableString142;
        reusableString142 = opaqueValue33;
        sub_18000B8D0 (&reusableString142);
        if (stackStorage198[113] != 0 && ((std::uint8_t)sub_180097F90 (stackStorage198, "FAD-CHK-SUBSCRIPTION-EXPIRED") != 0 || (std::uint8_t)sub_180097F90 (stackStorage198, "FAD-AUTH-SUBSCRIPTION-EXPIRED") != 0) || (std::uint8_t)sub_180097F90 (stackStorage198, "FAD-CHK-TRIAL-EXPIRED") != 0 || (std::uint8_t)sub_180097F90 (stackStorage198, "FAD-AUTH-TRIAL-EXPIRED") != 0 || (std::uint8_t)sub_180097F90 (stackStorage198, "FAD-MAS-TRANSACTION-EXPIRED") != 0)
        {
            juceStringConstructFromUtf8 (&reusableString142, "expired");
            readyString156 = reusableString142;
            reusableString142 = opaqueValue34;
            sub_18000B8D0 (&reusableString142);
        }
        sub_180058EA0 (stackStorage196);
    }
    authManagerCopyStateSnapshot (*(std::uint64_t*)(*((std::uint64_t*)temporaryPointer2 + 10) + 475552LL), (std::int64_t)stackStorage169);
    *(std::uint64_t*)&opaqueValue177 = &unk_180F51350;
    opaqueValue35 = opaqueValue172;
    if (opaqueValue174 != 0)
        opaqueValue35 = opaqueValue175;
    *((std::uint64_t*)&opaqueValue177 + 1) = opaqueValue35;
    sub_180096D60 (&allocatedObject141, "expiresAt");
    sub_1800A6D50 (opaqueValue30, &allocatedObject141, &opaqueValue177);
    sub_18000B8D0 (&allocatedObject141);
    sub_1800A3440 (&opaqueValue177);
    *(std::uint64_t*)&opaqueValue177 = &unk_180F51350;
    *((std::uint64_t*)&opaqueValue177 + 1) = opaqueValue173;
    sub_180096D60 (&allocatedObject141, "graceUntil");
    sub_1800A6D50 (opaqueValue30, &allocatedObject141, &opaqueValue177);
    sub_18000B8D0 (&allocatedObject141);
    sub_1800A3440 (&opaqueValue177);
    if ((std::uint8_t)sub_180098ED0 (stackStorage170, "synth_buyout") != 0 || (std::uint8_t)sub_180098ED0 (stackStorage170, "synth_earlybird_499") != 0)
    {
        LOBYTE (opaqueValue36) = 1;
    }
    else
    {
        opaqueValue36 = 0;
    }
    sub_1800A34D0 (&callbackFunction178, opaqueValue36);
    sub_180096D60 (&reusableString142, "permanentSynth");
    sub_1800A6D50 (opaqueValue30, &reusableString142, &callbackFunction178);
    sub_18000B8D0 (&reusableString142);
    sub_1800A3440 (&callbackFunction178);
    if (stackStorage169[0] != 0 && opaqueValue176 != 0)
    {
        opaqueValue37 = 0;
        temporaryPointer145 = (char*)sub_1800A3750 (stackStorage171);
        if (temporaryPointer145 != nullptr)
        {
            stackStorage162[0] = "weekly";
            stackStorage162[1] = "prepaid";
            temporaryPointer38 = stackStorage162;
            opaqueValue39 = 0;
            temporaryPointer40 = temporaryPointer145;
            do
            {
                sub_180096D60 (&allocatedObject141, *temporaryPointer38);
                opaqueValue41 = sub_1800A6D10 (temporaryPointer40, &allocatedObject141);
                sub_1800A3460 (&callbackFunction178, opaqueValue41);
                sub_18000B8D0 (&allocatedObject141);
                opaqueValue42 = sub_1800A3750 (&callbackFunction178);
                if (opaqueValue42 != 0)
                {
                    sub_180096D60 (&reusableString142, "remainingUnits");
                    opaqueValue43 = sub_1800A6D10 (opaqueValue42, &reusableString142);
                    sub_1800A3460 (&opaqueValue177, opaqueValue43);
                    sub_18000B8D0 (&reusableString142);
                    if (*(std::uint8_t*)(opaqueValue177 + 2) != 0 || *(std::uint8_t*)(opaqueValue177 + 3) != 0)
                    {
                        opaqueValue37 += sub_1800A3680 (&opaqueValue177);
                        opaqueValue39 = 1;
                    }
                    sub_1800A3440 (&opaqueValue177);
                }
                sub_1800A3440 (&callbackFunction178);
                ++temporaryPointer38;
            } while (temporaryPointer38 != &temporaryPointer163);
            conditionFlag44 = opaqueValue39 == 0;
            temporaryPointer8 = temporaryPointer146;
            temporaryPointer2 = temporaryPointer143;
            if (!conditionFlag44)
            {
                temporaryPointer45 = "available";
                if (opaqueValue37 == 0)
                    temporaryPointer45 = "empty";
                sub_1800A3590 (&opaqueValue177, temporaryPointer45);
                sub_180096D60 (&allocatedObject141, "pointStatus");
                sub_1800A6D50 (opaqueValue30, &allocatedObject141, &opaqueValue177);
                sub_18000B8D0 (&allocatedObject141);
                sub_1800A3440 (&opaqueValue177);
            }
        }
    }
    opaqueValue161 = 0;
    opaqueValue46 = sub_1800A35C0 (stackStorage188, opaqueValue30);
    sub_180096D60 (&allocatedObject141, "access");
    sub_1800A6D50 (temporaryPointer8, &allocatedObject141, opaqueValue46);
    sub_18000B8D0 (&allocatedObject141);
    sub_1800A3440 (stackStorage188);
    sub_1800A3560 (&callbackFunction178, &readyString156);
    sub_180096D60 (&allocatedObject141, "authorizationStatus");
    sub_1800A6D50 (temporaryPointer8, &allocatedObject141, &callbackFunction178);
    sub_18000B8D0 (&allocatedObject141);
    sub_1800A3440 (&callbackFunction178);
    allocatedObject141 = (std::uint64_t*)memoryAllocateObject (32);
    opaqueValue47 = sub_1800A6B50 (allocatedObject141);
    sub_1800A3560 (&opaqueValue182, temporaryPointer2 + 560);
    sub_180096D60 (&allocatedObject141, "message");
    sub_1800A6D50 (opaqueValue47, &allocatedObject141, &opaqueValue182);
    sub_18000B8D0 (&allocatedObject141);
    sub_1800A3440 (&opaqueValue182);
    sub_1800A34D0 (&opaqueValue182, (std::uint8_t)temporaryPointer2[568]);
    sub_180096D60 (&reusableString142, "pending");
    sub_1800A6D50 (opaqueValue47, &reusableString142, &opaqueValue182);
    sub_18000B8D0 (&reusableString142);
    sub_1800A3440 (&opaqueValue182);
    sub_1800A34D0 (&opaqueValue182, (std::uint8_t)temporaryPointer2[569]);
    sub_180096D60 (&temporaryPointer150, "error");
    sub_1800A6D50 (opaqueValue47, &temporaryPointer150, &opaqueValue182);
    sub_18000B8D0 (&temporaryPointer150);
    sub_1800A3440 (&opaqueValue182);
    sub_1800A34D0 (&opaqueValue182, (std::uint8_t)temporaryPointer2[570]);
    sub_180096D60 (&temporaryPointer184, "available");
    sub_1800A6D50 (opaqueValue47, &temporaryPointer184, &opaqueValue182);
    sub_18000B8D0 (&temporaryPointer184);
    sub_1800A3440 (&opaqueValue182);
    sub_1800A34D0 (&opaqueValue182, (std::uint8_t)temporaryPointer2[571]);
    sub_180096D60 (&lpMem, "uploaded");
    sub_1800A6D50 (opaqueValue47, &lpMem, &opaqueValue182);
    sub_18000B8D0 (&lpMem);
    sub_1800A3440 (&opaqueValue182);
    opaqueValue48 = sub_1800A35C0 (stackStorage189, opaqueValue47);
    sub_180096D60 (&lpMem, "debugReport");
    sub_1800A6D50 (temporaryPointer8, &lpMem, opaqueValue48);
    sub_18000B8D0 (&lpMem);
    sub_1800A3440 (stackStorage189);
    scalarValue49 = sub_18007EC40 (*((std::uint64_t*)temporaryPointer2 + 10) + 475912LL, 0);
    *(std::uint64_t*)&opaqueValue177 = &unk_180F514D0;
    *((double*)&opaqueValue177 + 1) = scalarValue49;
    sub_180096D60 (&opaqueValue154, "sampleRate");
    sub_1800A6D50 (temporaryPointer8, &opaqueValue154, &opaqueValue177);
    sub_18000B8D0 (&opaqueValue154);
    sub_1800A3440 (&opaqueValue177);
    opaqueValue50 = sub_18007EEE0 (*((std::uint64_t*)temporaryPointer2 + 10) + 475920LL, 0);
    sub_1800A3490 (&opaqueValue180, opaqueValue50);
    sub_180096D60 (&opaqueValue151, "blockSize");
    sub_1800A6D50 (temporaryPointer8, &opaqueValue151, &opaqueValue180);
    sub_18000B8D0 (&opaqueValue151);
    sub_1800A3440 (&opaqueValue180);
    opaqueValue51 = sub_180471D10 (stackStorage190);
    sub_180096D60 (&opaqueValue151, "noiseSampleCapabilities");
    sub_1800A6D50 (temporaryPointer8, &opaqueValue151, opaqueValue51);
    sub_18000B8D0 (&opaqueValue151);
    sub_1800A3440 (stackStorage190);
    opaqueValue52 = sub_180476C80 (*((std::uint64_t*)temporaryPointer2 + 10), stackStorage191);
    sub_180096D60 (&temporaryPointer157, "noiseSampleDescriptor");
    sub_1800A6D50 (temporaryPointer8, &temporaryPointer157, opaqueValue52);
    sub_18000B8D0 (&temporaryPointer157);
    sub_1800A3440 (stackStorage191);
    opaqueValue53 = sub_180473AC0 (*((std::uint64_t*)temporaryPointer2 + 10), stackStorage192);
    sub_180096D60 (&temporaryPointer144, "noiseImportStatus");
    sub_1800A6D50 (temporaryPointer8, &temporaryPointer144, opaqueValue53);
    sub_18000B8D0 (&temporaryPointer144);
    sub_1800A3440 (stackStorage192);
    opaqueValue54 = sub_180081080 (stackStorage165, stackStorage159);
    sub_180383340 (stackStorage164, opaqueValue54, "N4.parameters");
    opaqueValue55 = sub_18071A350 (temporaryPointer2, stackStorage193);
    sub_180096D60 (&temporaryPointer144, "parameters");
    sub_1800A6D50 (temporaryPointer8, &temporaryPointer144, opaqueValue55);
    sub_18000B8D0 (&temporaryPointer144);
    sub_1800A3440 (stackStorage193);
    sub_180383400 (stackStorage164);
    opaqueValue56 = sub_180081080 (stackStorage166, stackStorage159);
    sub_180383340 (stackStorage164, opaqueValue56, "N4.oscillators");
    opaqueValue57 = sub_180719270 (temporaryPointer2, stackStorage194, 0);
    sub_180096D60 (&temporaryPointer144, "oscillatorPreviews");
    sub_1800A6D50 (temporaryPointer8, &temporaryPointer144, opaqueValue57);
    sub_18000B8D0 (&temporaryPointer144);
    sub_1800A3440 (stackStorage194);
    LOBYTE (opaqueValue58) = 1;
    opaqueValue59 = sub_180719270 (temporaryPointer2, stackStorage195, opaqueValue58);
    sub_180096D60 (&temporaryPointer144, "oscillatorNodeSeeds");
    sub_1800A6D50 (temporaryPointer8, &temporaryPointer144, opaqueValue59);
    sub_18000B8D0 (&temporaryPointer144);
    sub_1800A3440 (stackStorage195);
    sub_180383400 (stackStorage164);
    opaqueValue60 = sub_180081080 (stackStorage167, stackStorage159);
    sub_180383340 (stackStorage164, opaqueValue60, "N4.filter");
    opaqueValue61 = sub_180715E10 (temporaryPointer2, stackStorage187);
    sub_180096D60 (&temporaryPointer144, "filterResponse");
    sub_1800A6D50 (temporaryPointer8, &temporaryPointer144, opaqueValue61);
    sub_18000B8D0 (&temporaryPointer144);
    sub_1800A3440 (stackStorage187);
    sub_180383400 (stackStorage164);
    opaqueValue62 = sub_180081080 (&callbackFunction147, stackStorage159);
    sub_180383340 (stackStorage164, opaqueValue62, "N4.lfo");
    opaqueValue63 = sub_1800755F0 (*((std::uint64_t*)temporaryPointer2 + 10));
    opaqueValue64 = sub_1806F1640 (stackStorage187, *((std::uint64_t*)temporaryPointer2 + 13), opaqueValue63);
    sub_180096D60 (&temporaryPointer144, "lfoCurves");
    sub_1800A6D50 (temporaryPointer8, &temporaryPointer144, opaqueValue64);
    sub_18000B8D0 (&temporaryPointer144);
    sub_1800A3440 (stackStorage187);
    sub_180383400 (stackStorage164);
    sub_1800A3490 (&opaqueValue180, 1);
    sub_180096D60 (&temporaryPointer145, "modulationConnectionVersion");
    sub_1800A6D50 (temporaryPointer8, &temporaryPointer145, &opaqueValue180);
    sub_18000B8D0 (&temporaryPointer145);
    sub_1800A3440 (&opaqueValue180);
    lpMem = nullptr;
    opaqueValue153 = 0;
    opaqueValue65 = 0;
    temporaryPointer66 = &unk_180F4AC70;
    allocatedObject141 = &unk_180F4AC70;
    temporaryPointer144 = "target";
    temporaryPointer157 = "label";
    do
    {
        allocatedObject67 = memoryAllocateObject (32);
        *(std::uint32_t*)(allocatedObject67 + 8) = 0;
        *(std::uint64_t*)allocatedObject67 = &juce::DynamicObject::`vftable';
        *(std::uint64_t*)(allocatedObject67 + 16) = 0;
        *(std::uint64_t*)(allocatedObject67 + 24) = 0;
        opaqueValue151 = allocatedObject67;
        *(std::uint64_t*)&opaqueValue177 = &unk_180F51450;
        *((std::uint64_t*)&opaqueValue177 + 1) = 0;
        DWORD2 (opaqueValue177) = *temporaryPointer66;
        opaqueValue69 = sub_18009EA20 (opaqueValue68);
        opaqueValue154 = opaqueValue69 + 16;
        EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue69 + 16));
        sub_18009E8C0 (opaqueValue69);
        sub_1800B4BF0 (&temporaryPointer150, opaqueValue69, &temporaryPointer144);
        opaqueValue70 = opaqueValue16 | 0x60;
        LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue69 + 16));
        sub_18008A110 (allocatedObject67 + 16, &temporaryPointer150, &opaqueValue177);
        callbackFunction71 = *(void (**) (std::int64_t, char**, void (***) (std::uint64_t*))) (*(std::uint64_t*)allocatedObject67 + 24LL);
        callbackFunction147 = (void (**) (std::uint64_t*))opaqueValue177;
        opaqueValue148 = 0;
        (*(void (**) (std::int64_t*, char*)) (opaqueValue177 + 96)) (&opaqueValue148, (char*)&opaqueValue177 + 8);
        opaqueValue149 = 1;
        callbackFunction71 (allocatedObject67, &temporaryPointer150, &callbackFunction147);
        if (opaqueValue149 != 0)
            callbackFunction147[11](&opaqueValue148);
        stringStorageToRelease72 = temporaryPointer150 - 16;
        if (temporaryPointer150 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease72) == -1)
            memoryFree (stringStorageToRelease72);
        callbackFunction73 = *(std::int64_t (**)()) (opaqueValue177 + 88);
        if (callbackFunction73 != guard_check_icall_nop)
            ((void (*) (char*))callbackFunction73) ((char*)&opaqueValue177 + 8);
        juceStringConstructFromUtf8 (&temporaryPointer145, allocatedObject141[2]);
        callbackFunction178 = (void (**) (std::uint64_t*))&unk_180F512B0;
        temporaryPointer179 = temporaryPointer145;
        temporaryPointer145 = &emptyJuceStringCharacters;
        opaqueValue75 = sub_18009EA20 (opaqueValue74);
        opaqueValue154 = opaqueValue75 + 16;
        EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue75 + 16));
        sub_18009E8C0 (opaqueValue75);
        sub_1800B4BF0 (&reusableString142, opaqueValue75, &temporaryPointer157);
        opaqueValue16 = opaqueValue70 | 0x80;
        LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue75 + 16));
        sub_18008A110 (allocatedObject67 + 16, &reusableString142, &callbackFunction178);
        callbackFunction76 = *(void (**) (std::int64_t, std::int64_t*, void (***) (std::uint64_t*))) (*(std::uint64_t*)allocatedObject67 + 24LL);
        callbackFunction147 = callbackFunction178;
        opaqueValue148 = 0;
        ((void (*) (std::int64_t*, char**))callbackFunction178[12]) (&opaqueValue148, &temporaryPointer179);
        opaqueValue149 = 1;
        callbackFunction76 (allocatedObject67, &reusableString142, &callbackFunction147);
        if (opaqueValue149 != 0)
            callbackFunction147[11](&opaqueValue148);
        stringStorageToRelease77 = (void*)(reusableString142 - 16);
        if ((void*)(reusableString142 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease77) == -1)
            memoryFree (stringStorageToRelease77);
        callbackFunction78 = (void (*) (char**))callbackFunction178[11];
        if ((char*)callbackFunction78 == (char*)sub_18000B8D0)
            sub_180023C60 (&temporaryPointer179, 0);
        else
            callbackFunction78 (&temporaryPointer179);
        opaqueValue151 = 0;
        temporaryPointer184 = &unk_180F513D0;
        opaqueValue185 = allocatedObject67;
        _InterlockedIncrement ((volatile std::int32_t*)(allocatedObject67 + 8));
        if (opaqueValue65 + 1 > (int)opaqueValue153)
        {
            sub_180088160 (&lpMem, (opaqueValue65 + 1 + (opaqueValue65 + 1) / 2 + 8) & 0xFFFFFFF8);
            opaqueValue65 = HIDWORD (opaqueValue153);
        }
        opaqueValue79 = opaqueValue65++;
        HIDWORD (opaqueValue153) = opaqueValue65;
        opaqueValue80 = 2 * opaqueValue79;
        temporaryPointer81 = temporaryPointer184;
        temporaryPointer184 = &unk_180F51130;
        temporaryPointer82 = lpMem;
        *((std::uint64_t*)lpMem + opaqueValue80) = temporaryPointer81;
        opaqueValue83 = opaqueValue185;
        opaqueValue185 = 0;
        temporaryPointer82[opaqueValue80 + 1] = opaqueValue83;
        callbackFunction84 = (void (*) (std::int64_t*))temporaryPointer184[11];
        if ((char*)callbackFunction84 == (char*)sub_18000B9A0)
        {
            if (opaqueValue185 != 0)
                sub_180089340();
        }
        else
        {
            callbackFunction84 (&opaqueValue185);
        }
        temporaryPointer66 = allocatedObject141 + 3;
        allocatedObject141 = temporaryPointer66;
    } while (temporaryPointer66 != (std::uint32_t*)&unk_180F4B3A8);
    *(std::uint64_t*)&opaqueValue177 = &unk_180F511B0;
    *((std::uint64_t*)&opaqueValue177 + 1) = 0;
    allocatedObject85 = memoryAllocateObject (32);
    temporaryPointer145 = (char*)allocatedObject85;
    *(std::uint32_t*)(allocatedObject85 + 8) = 0;
    *(std::uint64_t*)allocatedObject85 = &juce::var::VariantType::RefCountedArray::`vftable';
    sub_1800B60D0 (allocatedObject85 + 16, &lpMem);
    _InterlockedIncrement ((volatile std::int32_t*)(allocatedObject85 + 8));
    *((std::uint64_t*)&opaqueValue177 + 1) = allocatedObject85;
    opaqueValue87 = sub_18009EA20 (opaqueValue86);
    temporaryPointer144 = (const char*)(opaqueValue87 + 16);
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue87 + 16));
    sub_18009E8C0 (opaqueValue87);
    temporaryPointer145 = "modulationTargetCatalog";
    sub_1800B4BF0 (&reusableString142, opaqueValue87, &temporaryPointer145);
    LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue87 + 16));
    temporaryPointer88 = temporaryPointer146;
    sub_18008A110 (temporaryPointer146 + 4, &reusableString142, &opaqueValue177);
    callbackFunction89 = *(void (**) (volatile std::int32_t*, std::int64_t*, void (***) (std::uint64_t*))) (*(std::uint64_t*)temporaryPointer88 + 24LL);
    callbackFunction147 = (void (**) (std::uint64_t*))opaqueValue177;
    opaqueValue148 = 0;
    (*(void (**) (std::int64_t*, char*)) (opaqueValue177 + 96)) (&opaqueValue148, (char*)&opaqueValue177 + 8);
    opaqueValue149 = 1;
    callbackFunction89 (temporaryPointer88, &reusableString142, &callbackFunction147);
    temporaryPointer90 = temporaryPointer143;
    if (opaqueValue149 != 0)
        callbackFunction147[11](&opaqueValue148);
    stringStorageToRelease91 = (void*)(reusableString142 - 16);
    if ((void*)(reusableString142 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease91) == -1)
        memoryFree (stringStorageToRelease91);
    (*(void (**) (char*)) (opaqueValue177 + 88)) ((char*)&opaqueValue177 + 8);
    sub_18005AC00 (&callbackFunction178, *((std::uint64_t*)temporaryPointer90 + 13));
    opaqueValue93 = sub_18009EA20 (opaqueValue92);
    temporaryPointer146 = (volatile std::int32_t*)(opaqueValue93 + 16);
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue93 + 16));
    sub_18009E8C0 (opaqueValue93);
    temporaryPointer143 = "modulationParameterTargets";
    sub_1800B4BF0 (&reusableString142, opaqueValue93, &temporaryPointer143);
    LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue93 + 16));
    sub_18008A110 (temporaryPointer88 + 4, &reusableString142, &callbackFunction178);
    callbackFunction94 = *(void (**) (volatile std::int32_t*, std::int64_t*, void (***) (std::uint64_t*))) (*(std::uint64_t*)temporaryPointer88 + 24LL);
    callbackFunction147 = callbackFunction178;
    opaqueValue148 = 0;
    ((void (*) (std::int64_t*, char**))callbackFunction178[12]) (&opaqueValue148, &temporaryPointer179);
    opaqueValue149 = 1;
    callbackFunction94 (temporaryPointer88, &reusableString142, &callbackFunction147);
    if (opaqueValue149 != 0)
        callbackFunction147[11](&opaqueValue148);
    stringStorageToRelease95 = (void*)(reusableString142 - 16);
    if ((void*)(reusableString142 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease95) == -1)
        memoryFree (stringStorageToRelease95);
    ((void (**) (char**))callbackFunction178)[11](&temporaryPointer179);
    temporaryPointer96 = (std::uint64_t*)sub_18071A5D0 (temporaryPointer90, &opaqueValue180);
    opaqueValue98 = sub_18009EA20 (opaqueValue97);
    temporaryPointer146 = (volatile std::int32_t*)(opaqueValue98 + 16);
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue98 + 16));
    sub_18009E8C0 (opaqueValue98);
    temporaryPointer143 = "fxSlots";
    sub_1800B4BF0 (&reusableString142, opaqueValue98, &temporaryPointer143);
    LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue98 + 16));
    sub_18008A110 (temporaryPointer88 + 4, &reusableString142, temporaryPointer96);
    callbackFunction99 = *(void (**) (volatile std::int32_t*, std::int64_t*, void (***) (std::uint64_t*))) (*(std::uint64_t*)temporaryPointer88 + 24LL);
    callbackFunction147 = (void (**) (std::uint64_t*))*temporaryPointer96;
    opaqueValue148 = 0;
    ((void (*) (std::int64_t*, std::uint64_t*))callbackFunction147[12]) (&opaqueValue148, temporaryPointer96 + 1);
    opaqueValue149 = 1;
    callbackFunction99 (temporaryPointer88, &reusableString142, &callbackFunction147);
    if (opaqueValue149 != 0)
        callbackFunction147[11](&opaqueValue148);
    stringStorageToRelease100 = (void*)(reusableString142 - 16);
    if ((void*)(reusableString142 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease100) == -1)
        memoryFree (stringStorageToRelease100);
    (*(void (**) (char*)) (opaqueValue180 + 88)) (stackStorage181);
    temporaryPointer102 = (std::uint64_t*)sub_18071B860 (opaqueValue101, &opaqueValue182);
    opaqueValue104 = sub_18009EA20 (opaqueValue103);
    temporaryPointer146 = (volatile std::int32_t*)(opaqueValue104 + 16);
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue104 + 16));
    sub_18009E8C0 (opaqueValue104);
    temporaryPointer143 = "availableFxTypes";
    sub_1800B4BF0 (&reusableString142, opaqueValue104, &temporaryPointer143);
    LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue104 + 16));
    sub_18008A110 (temporaryPointer88 + 4, &reusableString142, temporaryPointer102);
    callbackFunction105 = *(void (**) (volatile std::int32_t*, std::int64_t*, void (***) (std::uint64_t*))) (*(std::uint64_t*)temporaryPointer88 + 24LL);
    callbackFunction147 = (void (**) (std::uint64_t*))*temporaryPointer102;
    opaqueValue148 = 0;
    ((void (*) (std::int64_t*, std::uint64_t*))callbackFunction147[12]) (&opaqueValue148, temporaryPointer102 + 1);
    opaqueValue149 = 1;
    callbackFunction105 (temporaryPointer88, &reusableString142, &callbackFunction147);
    if (opaqueValue149 != 0)
        callbackFunction147[11](&opaqueValue148);
    stringStorageToRelease106 = (void*)(reusableString142 - 16);
    if ((void*)(reusableString142 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease106) == -1)
        memoryFree (stringStorageToRelease106);
    (*(void (**) (char*)) (opaqueValue182 + 88)) (stackStorage183);
    opaqueValue107 = sub_18071BCD0 (temporaryPointer90, &opaqueValue177);
    opaqueValue109 = sub_18009EA20 (opaqueValue108);
    sub_18009E570 (opaqueValue109, &temporaryPointer143, "library");
    sub_1800A6D50 (temporaryPointer88, &temporaryPointer143, opaqueValue107);
    sub_18000B8D0 (&temporaryPointer143);
    callbackFunction110 = *(void (**) (char*)) (opaqueValue177 + 88);
    if ((char*)callbackFunction110 == (char*)sub_18000B9A0)
        sub_18000B9A0 ((char*)&opaqueValue177 + 8);
    else
        callbackFunction110 ((char*)&opaqueValue177 + 8);
    opaqueValue111 = sub_180212550 (&opaqueValue180, *((std::uint64_t*)temporaryPointer90 + 13) + 56LL);
    opaqueValue113 = sub_18009EA20 (opaqueValue112);
    sub_18009E570 (opaqueValue113, &temporaryPointer143, "macroLabels");
    sub_1800A6D50 (temporaryPointer88, &temporaryPointer143, opaqueValue111);
    sub_18000B8D0 (&temporaryPointer143);
    (*(void (**) (char*)) (opaqueValue180 + 88)) (stackStorage181);
    opaqueValue114 = sub_180212950 (&opaqueValue182, *((std::uint64_t*)temporaryPointer90 + 13) + 56LL);
    opaqueValue116 = sub_18009EA20 (opaqueValue115);
    sub_18009E570 (opaqueValue116, &temporaryPointer143, "patchMetadata");
    sub_1800A6D50 (temporaryPointer88, &temporaryPointer143, opaqueValue114);
    sub_18000B8D0 (&temporaryPointer143);
    (*(void (**) (char*)) (opaqueValue182 + 88)) (stackStorage183);
    temporaryPointer117 = (std::uint64_t*)sub_180097C70 (&temporaryPointer146, *(std::uint64_t*)(*((std::uint64_t*)temporaryPointer90 + 10) + 467112LL));
    *(std::uint64_t*)&opaqueValue177 = &unk_180F512B0;
    *((std::uint64_t*)&opaqueValue177 + 1) = 0;
    *((std::uint64_t*)&opaqueValue177 + 1) = *temporaryPointer117;
    *temporaryPointer117 = &emptyJuceStringCharacters;
    opaqueValue118 = sub_18009EA20 (temporaryPointer117);
    sub_18009E570 (opaqueValue118, &temporaryPointer143, "saveAuthority");
    sub_1800A6D50 (temporaryPointer88, &temporaryPointer143, &opaqueValue177);
    sub_18000B8D0 (&temporaryPointer143);
    callbackFunction119 = *(void (**) (char*)) (opaqueValue177 + 88);
    if ((char*)callbackFunction119 == (char*)sub_18000B8D0)
        sub_18000B8D0 ((char*)&opaqueValue177 + 8);
    else
        callbackFunction119 ((char*)&opaqueValue177 + 8);
    temporaryPointer120 = temporaryPointer146 - 4;
    if (temporaryPointer146 - 4 != (volatile std::int32_t*)&emptyJuceStringStorage && _InterlockedDecrement (temporaryPointer120) == -1)
        memoryFree ((LPVOID)temporaryPointer120);
    temporaryPointer121 = (std::uint64_t*)sub_18071F150 (temporaryPointer90, &temporaryPointer146);
    opaqueValue177 = (std::uint64_t)&unk_180F512B0;
    *((std::uint64_t*)&opaqueValue177 + 1) = *temporaryPointer121;
    *temporaryPointer121 = &emptyJuceStringCharacters;
    opaqueValue122 = sub_18009EA20 (temporaryPointer121);
    sub_18009E570 (opaqueValue122, &temporaryPointer143, "fxCommandContext");
    sub_1800A6D50 (temporaryPointer88, &temporaryPointer143, &opaqueValue177);
    sub_18000B8D0 (&temporaryPointer143);
    callbackFunction123 = *(void (**) (char*)) (opaqueValue177 + 88);
    if ((char*)callbackFunction123 == (char*)sub_18000B8D0)
        sub_18000B8D0 ((char*)&opaqueValue177 + 8);
    else
        callbackFunction123 ((char*)&opaqueValue177 + 8);
    temporaryPointer124 = temporaryPointer146 - 4;
    if (temporaryPointer146 - 4 != (volatile std::int32_t*)&emptyJuceStringStorage && _InterlockedDecrement (temporaryPointer124) == -1)
        memoryFree ((LPVOID)temporaryPointer124);
    sub_1800B3660 (&temporaryPointer143, *(unsigned int*)(*((std::uint64_t*)temporaryPointer90 + 10) + 1440LL));
    *(std::uint64_t*)&opaqueValue177 = &unk_180F512B0;
    *((std::uint64_t*)&opaqueValue177 + 1) = temporaryPointer143;
    temporaryPointer143 = &emptyJuceStringCharacters;
    opaqueValue126 = sub_18009EA20 (opaqueValue125);
    sub_18009E570 (opaqueValue126, &temporaryPointer146, "saveRevision");
    sub_1800A6D50 (temporaryPointer88, &temporaryPointer146, &opaqueValue177);
    temporaryPointer127 = temporaryPointer146 - 4;
    if (temporaryPointer146 - 4 != (volatile std::int32_t*)&emptyJuceStringStorage && _InterlockedDecrement (temporaryPointer127) == -1)
        memoryFree ((LPVOID)temporaryPointer127);
    callbackFunction128 = *(void (**) (char*)) (opaqueValue177 + 88);
    if ((char*)callbackFunction128 == (char*)sub_18000B8D0)
        sub_18000B8D0 ((char*)&opaqueValue177 + 8);
    else
        callbackFunction128 ((char*)&opaqueValue177 + 8);
    temporaryPointer129 = (std::uint64_t*)sub_180212850 (&temporaryPointer146, *((std::uint64_t*)temporaryPointer90 + 13) + 56LL);
    opaqueValue177 = (std::uint64_t)&unk_180F512B0;
    *((std::uint64_t*)&opaqueValue177 + 1) = *temporaryPointer129;
    *temporaryPointer129 = &emptyJuceStringCharacters;
    opaqueValue130 = sub_18009EA20 (temporaryPointer129);
    sub_18009E570 (opaqueValue130, &temporaryPointer143, "saveMetadata");
    sub_1800A6D50 (temporaryPointer88, &temporaryPointer143, &opaqueValue177);
    sub_18000B8D0 (&temporaryPointer143);
    callbackFunction131 = *(void (**) (char*)) (opaqueValue177 + 88);
    if ((char*)callbackFunction131 == (char*)sub_18000B8D0)
        sub_18000B8D0 ((char*)&opaqueValue177 + 8);
    else
        callbackFunction131 ((char*)&opaqueValue177 + 8);
    temporaryPointer132 = temporaryPointer146 - 4;
    if (temporaryPointer146 - 4 != (volatile std::int32_t*)&emptyJuceStringStorage && _InterlockedDecrement (temporaryPointer132) == -1)
        memoryFree ((LPVOID)temporaryPointer132);
    opaqueValue133 = *((std::uint64_t*)temporaryPointer90 + 9);
    opaqueValue134 = sub_18009EA20 (temporaryPointer132);
    sub_18009E570 (opaqueValue134, &temporaryPointer143, "saveReceipt");
    sub_1800A6D50 (temporaryPointer88, &temporaryPointer143, opaqueValue133 + 176);
    sub_18000B8D0 (&temporaryPointer143);
    opaqueValue135 = sub_18071E180 (temporaryPointer90, &opaqueValue180);
    opaqueValue137 = sub_18009EA20 (opaqueValue136);
    sub_18009E570 (opaqueValue137, &temporaryPointer143, "system");
    sub_1800A6D50 (temporaryPointer88, &temporaryPointer143, opaqueValue135);
    sub_18000B8D0 (&temporaryPointer143);
    (*(void (**) (char*)) (opaqueValue180 + 88)) (stackStorage181);
    temporaryPointer158 = nullptr;
    opaqueValue138 = temporaryPointer163;
    *temporaryPointer163 = &unk_180F513D0;
    opaqueValue138[1] = temporaryPointer88;
    if (temporaryPointer88 != nullptr)
        _InterlockedIncrement (temporaryPointer88 + 2);
    sub_1800815D0 (&lpMem);
    memoryFreeBuffer (lpMem);
    sub_180058EA0 (stackStorage169);
    sub_18000B8D0 (&readyString156);
    sub_1800A3440 (stackStorage186);
    sub_180022890 (&temporaryPointer158);
    sub_180383400 (stackStorage168);
    temporaryPointer139 = temporaryPointer160;
    if (temporaryPointer160 != nullptr && _InterlockedExchangeAdd (temporaryPointer160 + 2, 0xFFFFFFFF) == 1)
    {
        (**(void (***) (volatile std::int32_t*))temporaryPointer139) (temporaryPointer139);
        if (_InterlockedExchangeAdd (temporaryPointer139 + 3, 0xFFFFFFFF) == 1)
            (*(void (**) (volatile std::int32_t*)) (*(std::uint64_t*)temporaryPointer139 + 8LL)) (temporaryPointer139);
    }
    return opaqueValue138;
}
