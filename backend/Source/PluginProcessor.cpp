#include <cstdint>

// ===== FadModel1AudioProcessor_ctor @ 0x1800631e0 size=5261 =====
// Processor ctor: AuthManager at +475552; registers state-change callbacks (lambda_6/7); standalone PlaybackGate +467264; render deadline +475712 initialized 0
std::int64_t audioProcessorInitialize (std::int64_t processor)
{
    int opaqueValue2; // edx
    void* temporaryPointer3; // rcx
    char* stringStorageToRelease4; // rcx
    std::int64_t opaqueValue5; // rax
    std::int64_t allocatedObject6; // rcx
    std::int64_t opaqueValue7; // rax
    int opaqueValue8; // r9d
    std::int64_t opaqueValue9; // rax
    std::uint32_t* allocatedObject10; // rdi
    std::int64_t opaqueValue11; // rax
    std::int64_t opaqueValue12; // rdx
    std::int64_t opaqueValue13; // rcx
    void* stringStorageToRelease14; // rcx
    std::uint32_t* allocatedObject15; // rdi
    std::uint64_t* temporaryPointer16; // rdi
    _OWORD* allocatedObject17; // rcx
    std::int64_t opaqueValue18; // rax
    void* temporaryPointer19; // rbx
    std::int64_t opaqueValue20; // rdx
    char* stringStorageToRelease21; // rcx
    char* stringStorageToRelease22; // rcx
    std::int64_t opaqueValue23; // rax
    std::int16_t opaqueValue24; // bx
    char opaqueValue25; // cl
    std::uint8_t opaqueValue26; // si
    bool conditionFlag27; // al
    char* stringStorageToRelease28; // rcx
    std::int64_t opaqueValue29; // rsi
    std::int64_t opaqueValue30; // rdx
    std::uint64_t opaqueValue31; // rax
    std::int64_t opaqueValue32; // rax
    std::uint64_t opaqueValue33; // rcx
    std::int64_t opaqueValue34; // rsi
    std::uint64_t opaqueValue35; // rdx
    std::int64_t opaqueValue36; // r15
    std::int64_t opaqueValue37; // rbx
    std::uint64_t opaqueValue38; // rbx
    std::int64_t opaqueValue39; // rax
    void (***authManagerOrScratch40) (std::uint64_t, std::int64_t); // rcx
    std::int64_t opaqueValue41; // rax
    void* temporaryPointer42; // rbx
    std::int64_t allocatedObject43; // rcx
    std::int64_t opaqueValue44; // rax
    void* temporaryPointer45; // rbx
    std::int64_t* temporaryPointer46; // rax
    std::int64_t opaqueValue47; // rdx
    void* temporaryPointer48; // rbx
    void* temporaryPointer49; // rbx
    std::int64_t opaqueValue50; // rbx
    int opaqueValue51; // eax
    const char* temporaryPointer52; // rdx
    char* stringStorageToRelease53; // rcx
    std::int64_t opaqueValue54; // rbx
    std::int64_t opaqueValue55; // rax
    void* temporaryPointer56; // rbx
    std::int64_t opaqueValue57; // rdx
    int opaqueValue58; // eax
    std::uint64_t* allocatedObject59; // rbx
    std::uint64_t* temporaryPointer60; // rdi
    void* temporaryPointer61; // rbx
    void* stringStorageToRelease62; // rcx
    int opaqueValue63; // ecx
    int opaqueValue64; // ecx
    const char* temporaryPointer65; // rdx
    char* stringStorageToRelease66; // rcx
    void* temporaryPointer67; // rcx
    void* stringStorageToRelease68; // rcx
    LPVOID lpMem[2]; // [rsp+30h] [rbp-D0h] BYREF
    std::int16_t opaqueValue71; // [rsp+40h] [rbp-C0h] BYREF
    char opaqueValue72; // [rsp+42h] [rbp-BEh]
    __int128 opaqueValue73; // [rsp+50h] [rbp-B0h] BYREF
    __int128 opaqueValue74; // [rsp+60h] [rbp-A0h] BYREF
    std::uint8_t stackStorage75[16]; // [rsp+70h] [rbp-90h] BYREF
    std::uint8_t stackStorage76[16]; // [rsp+80h] [rbp-80h] BYREF
    std::uint8_t stackStorage77[16]; // [rsp+90h] [rbp-70h] BYREF
    std::uint8_t stackStorage78[16]; // [rsp+A0h] [rbp-60h] BYREF
    std::int64_t opaqueValue79; // [rsp+B0h] [rbp-50h]
    std::int64_t messageString80; // [rsp+B8h] [rbp-48h] BYREF
    char opaqueValue81; // [rsp+C0h] [rbp-40h] BYREF
    std::uint64_t stackStorage82[3]; // [rsp+C8h] [rbp-38h] BYREF
    LPVOID opaqueValue83; // [rsp+E0h] [rbp-20h] BYREF
    std::int64_t opaqueValue84; // [rsp+E8h] [rbp-18h]
    LPVOID* temporaryPointer85; // [rsp+118h] [rbp+18h]
    std::uint64_t stackStorage86[7]; // [rsp+120h] [rbp+20h] BYREF
    std::uint64_t* temporaryPointer87; // [rsp+158h] [rbp+58h]
    std::uint64_t stackStorage88[7]; // [rsp+160h] [rbp+60h] BYREF
    std::uint64_t* temporaryPointer89; // [rsp+198h] [rbp+98h]
    LPVOID stackStorage90[5]; // [rsp+1A0h] [rbp+A0h] BYREF

    opaqueValue79 = processor;
    opaqueValue73 = 0u;
    opaqueValue74 = 0u;
    messageString80 = 0x200000001LL;
    lpMem[0] = &messageString80;
    lpMem[1] = &opaqueValue81;
    sub_1801962C0 (&opaqueValue83, lpMem);
    juceStringConstructFromUtf8 (lpMem, "Input");
    sub_1801A2380 (stackStorage75, &opaqueValue73);
    sub_1801A2380 (stackStorage76, &opaqueValue74);
    LOBYTE (opaqueValue2) = 1;
    sub_18019F870 ((unsigned int)stackStorage75, opaqueValue2, (unsigned int)lpMem, (unsigned int)&opaqueValue83, 0);
    messageString80 = 0x200000001LL;
    stackStorage82[0] = &messageString80;
    stackStorage82[1] = &opaqueValue81;
    sub_1801962C0 (stackStorage90, stackStorage82);
    juceStringConstructFromUtf8 (stackStorage82, "Output");
    sub_1801A2380 (stackStorage77, stackStorage75);
    sub_1801A2380 (stackStorage78, stackStorage76);
    sub_18019F870 ((unsigned int)stackStorage77, 0, (unsigned int)stackStorage82, (unsigned int)stackStorage90, 1);
    sub_18019CB70 (processor, stackStorage77);
    sub_18007EAA0 (stackStorage78);
    sub_18007EAA0 (stackStorage77);
    temporaryPointer3 = (void*)(stackStorage82[0] - 16LL);
    if ((void*)(stackStorage82[0] - 16LL) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)temporaryPointer3) == -1)
        memoryFree (temporaryPointer3);
    memoryFreeBuffer (stackStorage90[0]);
    sub_18007EAA0 (stackStorage76);
    sub_18007EAA0 (stackStorage75);
    stringStorageToRelease4 = (char*)lpMem[0] - 16;
    if ((char*)lpMem[0] - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease4) == -1)
        memoryFree (stringStorageToRelease4);
    memoryFreeBuffer (opaqueValue83);
    sub_18007EAA0 (&opaqueValue74);
    sub_18007EAA0 (&opaqueValue73);
    sub_180192F50 (processor + 352);
    sub_180193E00 (processor + 368);
    *(std::uint64_t*)processor = &FadModel1AudioProcessor::`vftable';
    *(std::uint64_t*)(processor + 352) = &FadModel1AudioProcessor::`vftable';
    *(std::uint64_t*)(processor + 368) = &FadModel1AudioProcessor::`vftable';
    *(std::uint64_t*)(processor + 464) = 0;
    opaqueValue5 = sub_180092C80 (stackStorage82);
    sub_18009B4C0 (processor + 472, opaqueValue5, 16);
    *(std::uint64_t*)(processor + 480) = &emptyJuceStringCharacters;
    *(std::uint64_t*)(processor + 544) = 0;
    *(std::uint64_t*)(processor + 608) = 0;
    *(std::uint64_t*)(processor + 616) = &emptyJuceStringCharacters;
    *(std::uint64_t*)(processor + 680) = 0;
    *(std::uint8_t*)(processor + 688) = 0;
    *(std::uint64_t*)(processor + 696) = 0;
    *(std::uint8_t*)(processor + 704) = 0;
    *(std::uint64_t*)(processor + 712) = 0;
    allocatedObject6 = memoryAllocateObject (24);
    *(_OWORD*)allocatedObject6 = 0;
    *(std::uint32_t*)(allocatedObject6 + 8) = 1;
    *(std::uint32_t*)(allocatedObject6 + 12) = 1;
    *(std::uint64_t*)allocatedObject6 = &std::_Ref_count_obj2<std::atomic<std::uint64_t>>::`vftable';
    *(std::uint64_t*)(allocatedObject6 + 16) = 0;
    *(std::uint64_t*)(processor + 720) = allocatedObject6 + 16;
    *(std::uint64_t*)(processor + 728) = allocatedObject6;
    *(std::uint64_t*)(processor + 736) = &unk_180F51130;
    *(std::uint64_t*)(processor + 744) = 0;
    *(std::uint64_t*)(processor + 752) = -1;
    *(std::uint64_t*)(processor + 760) = &emptyJuceStringCharacters;
    lpMem[0] = (LPVOID)(processor + 768);
    *(std::uint64_t*)(processor + 768) = 0;
    *(std::uint64_t*)(processor + 776) = 0;
    *(std::uint64_t*)(processor + 784) = 0;
    *(std::uint64_t*)(processor + 792) = 0;
    *(std::uint8_t*)(processor + 800) = 0;
    *(std::uint64_t*)(processor + 864) = 0;
    *(std::uint64_t*)(processor + 928) = 0;
    *(std::uint64_t*)(processor + 992) = 0;
    *(std::uint16_t*)(processor + 1000) = 1;
    *(std::uint8_t*)(processor + 1002) = 0;
    *(std::uint64_t*)(processor + 1008) = 0;
    *(std::uint64_t*)(processor + 1016) = 0;
    *(std::uint64_t*)(processor + 1024) = 0;
    *(std::uint8_t*)(processor + 1032) = 0;
    *(std::uint64_t*)(processor + 1040) = &emptyJuceStringCharacters;
    *(std::uint64_t*)(processor + 1048) = 0;
    juceStringConstructFromUtf8 (processor + 1056, "Init");
    *(std::uint64_t*)(processor + 1064) = &emptyJuceStringCharacters;
    *(std::uint64_t*)(processor + 1072) = &emptyJuceStringCharacters;
    *(std::uint64_t*)(processor + 1080) = 0;
    *(std::uint64_t*)(processor + 1088) = 0;
    *(std::uint8_t*)(processor + 1096) = 0;
    *(std::uint64_t*)(processor + 1104) = 0;
    sub_18020CED0 (processor + 1112);
    opaqueValue7 = sub_18041AD90 (stackStorage82);
    sub_1801F7B50 (processor + 1240, processor, processor + 1112, opaqueValue8, opaqueValue7);
    sub_1803F8BA0 (processor + 1432, processor + 1240);
    sub_18002CEC0 (processor + 44128, processor + 1240);
    sub_1803F80D0 (processor + 45896);
    sub_1803F80D0 (processor + 53628);
    *(std::uint8_t*)(processor + 61360) = 0;
    *(std::uint64_t*)(processor + 61364) = -1;
    *(std::uint32_t*)(processor + 61372) = -1;
    *(std::uint8_t*)(processor + 61376) = 0;
    *(std::uint8_t*)(processor + 61380) = 0;
    *(std::uint32_t*)(processor + 61384) = 0;
    *(std::uint32_t*)(processor + 61388) = -1044381696;
    *(std::uint64_t*)(processor + 61392) = 1;
    *(std::uint64_t*)(processor + 61400) = 1065353216;
    *(std::uint8_t*)(processor + 61408) = 0;
    *(std::uint32_t*)(processor + 61412) = 0;
    sub_1803F80D0 (processor + 61416);
    *(std::uint16_t*)(processor + 69148) = 0;
    sub_1803CC4E0 (processor + 69152);
    *(std::uint64_t*)(processor + 260680) = 0;
    *(std::uint64_t*)(processor + 260688) = 0;
    *(std::uint64_t*)(processor + 260696) = 0;
    *(std::uint64_t*)(processor + 260704) = 0;
    *(std::uint64_t*)(processor + 260712) = processor + 260728;
    *(std::uint64_t*)(processor + 260720) = 0;
    *(std::uint8_t*)(processor + 260984) = 0;
    *(std::uint64_t*)(processor + 260992) = 0;
    *(std::uint64_t*)(processor + 261000) = 0;
    *(std::uint64_t*)(processor + 261008) = processor + 261024;
    *(std::uint64_t*)(processor + 261016) = 0;
    *(std::uint8_t*)(processor + 261280) = 0;
    *(std::uint64_t*)(processor + 261288) = 0;
    *(std::uint64_t*)(processor + 261296) = 0;
    *(std::uint32_t*)(processor + 261304) = 0;
    *(std::uint8_t*)(processor + 261308) = 0;
    memoryFillBytes (processor + 261312, 0, 12288);
    sub_18007AF90 (processor + 261312, 256);
    memoryFillBytes (processor + 273600, 0, 2048);
    sub_18007ABD0 (processor + 273600);
    *(std::uint64_t*)(processor + 275648) = 0;
    *(std::uint64_t*)(processor + 275656) = 1;
    *(std::uint32_t*)(processor + 275664) = 0;
    *(std::uint64_t*)(processor + 275672) = 0;
    memoryFillBytes (processor + 275680, 0, 41216);
    sub_18007AD60 (processor + 275680);
    *(std::uint32_t*)(processor + 316896) = 0;
    memoryFillBytes (processor + 316904, 0, 6144);
    sub_18007AF90 (processor + 316904, 128);
    memoryFillBytes (processor + 323048, 0, 104448);
    sub_18007AF90 (processor + 323048, 2176);
    *(std::uint64_t*)(processor + 427496) = 0;
    *(std::uint64_t*)(processor + 427504) = 0;
    *(std::uint64_t*)(processor + 427512) = 0;
    *(std::uint64_t*)(processor + 427520) = 0;
    *(std::uint64_t*)(processor + 427528) = 0;
    lpMem[0] = &emptyJuceStringCharacters;
    sub_18024F010 (processor + 427536, lpMem);
    sub_18029C0B0 (processor + 428376);
    stackStorage82[0] = processor + 428512;
    *(std::uint64_t*)(processor + 428512) = &juce::Timer::`vftable';
    *(std::uint64_t*)(processor + 428520) = -1;
    *(std::uint32_t*)(processor + 428528) = 0;
    opaqueValue9 = sub_1801952B0();
    sub_180195100 (opaqueValue9, processor + 428536);
    *(std::uint64_t*)(processor + 428512) = &fadmodel1::ai::TelemetryClient::`vftable';
    allocatedObject10 = (std::uint32_t*)memoryAllocateObject (464);
    lpMem[0] = allocatedObject10;
    *(_OWORD*)allocatedObject10 = 0;
    allocatedObject10[2] = 1;
    allocatedObject10[3] = 1;
    *(std::uint64_t*)allocatedObject10 = &std::_Ref_count_obj2<fadmodel1::ai::TelemetryClient::SharedState>::`vftable';
    memoryFillBytes (allocatedObject10 + 4, 0, 448);
    sub_18034F6D0 (allocatedObject10 + 4);
    *(std::uint64_t*)(processor + 428552) = allocatedObject10 + 4;
    *(std::uint64_t*)(processor + 428560) = allocatedObject10;
    opaqueValue11 = sub_180092C80 (&messageString80);
    sub_18009B4C0 (lpMem, opaqueValue11, 16);
    opaqueValue12 = *(std::uint64_t*)(processor + 428552);
    opaqueValue13 = *(std::uint64_t*)(opaqueValue12 + 24);
    *(LPVOID*)(opaqueValue12 + 24) = lpMem[0];
    stringStorageToRelease14 = (void*)(opaqueValue13 - 16);
    if (stringStorageToRelease14 != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease14) == -1)
        memoryFree (stringStorageToRelease14);
    sub_180193EE0 (processor + 428512, 15000);
    sub_180378DA0 (processor + 428568, processor + 1240, processor + 428376, processor + 1432);
    InitializeCriticalSection ((LPCRITICAL_SECTION)(processor + 453648));
    *(std::uint64_t*)(processor + 453696) = &emptyJuceStringCharacters;
    *(std::uint16_t*)(processor + 453704) = 0;
    *(std::uint8_t*)(processor + 453706) = 0;
    memoryFillBytes (processor + 453712, 0, 12288);
    sub_18007AFE0 (processor + 453712);
    *(std::uint64_t*)(processor + 466000) = 0;
    *(std::uint64_t*)(processor + 466008) = 0;
    *(std::uint32_t*)(processor + 466016) = -1;
    *(std::uint64_t*)(processor + 466020) = 1;
    *(std::uint64_t*)(processor + 466028) = 0;
    *(std::uint16_t*)(processor + 466036) = 0;
    *(std::uint64_t*)(processor + 466040) = 0;
    memoryFillBytes (processor + 466048, 0, 512);
    *(std::uint32_t*)(processor + 466560) = 0;
    allocatedObject15 = (std::uint32_t*)memoryAllocateObject (2456);
    lpMem[0] = allocatedObject15;
    *(_OWORD*)allocatedObject15 = 0;
    allocatedObject15[2] = 1;
    allocatedObject15[3] = 1;
    *(std::uint64_t*)allocatedObject15 = &std::_Ref_count_obj2<FadModel1AudioProcessor::FactoryProgramHostStateCache>::`vftable';
    memoryFillBytes (allocatedObject15 + 4, 0, 2440);
    sub_180085750 (allocatedObject15 + 4);
    *(std::uint64_t*)(processor + 466568) = allocatedObject15 + 4;
    *(std::uint64_t*)(processor + 466576) = allocatedObject15;
    *(std::uint32_t*)(processor + 466584) = 0;
    *(std::uint64_t*)(processor + 466592) = 0;
    *(std::uint64_t*)(processor + 466600) = 0;
    *(std::uint64_t*)(processor + 466608) = 0;
    temporaryPointer16 = (std::uint64_t*)(processor + 466616);
    sub_1809A1768 (processor + 466616, 56, 3, sub_180064670, sub_180065530);
    *(_OWORD*)(processor + 466808) = 0;
    *(_OWORD*)(processor + 466824) = 0;
    *(_OWORD*)(processor + 466840) = 0;
    *(_OWORD*)(processor + 466792) = 0;
    *(std::uint32_t*)(processor + 466856) = -1;
    *(std::uint32_t*)(processor + 466784) = 2;
    *(std::uint32_t*)(processor + 466860) = 0;
    *(_OWORD*)(processor + 466888) = 0;
    *(_OWORD*)(processor + 466904) = 0;
    *(_OWORD*)(processor + 466920) = 0;
    *(_OWORD*)(processor + 466872) = 0;
    *(std::uint32_t*)(processor + 466936) = -1;
    *(std::uint32_t*)(processor + 466864) = 2;
    *(std::uint32_t*)(processor + 466940) = 0;
    InitializeCriticalSection ((LPCRITICAL_SECTION)(processor + 466944));
    *(std::uint64_t*)(processor + 466992) = 0;
    *(std::uint64_t*)(processor + 467000) = 0;
    *(std::uint8_t*)(processor + 467008) = 0;
    InitializeCriticalSection ((LPCRITICAL_SECTION)(processor + 467016));
    *(std::uint64_t*)(processor + 467064) = 0;
    *(std::uint64_t*)(processor + 467072) = 0;
    *(std::uint8_t*)(processor + 467080) = 0;
    *(std::uint64_t*)(processor + 467088) = 0;
    *(std::uint64_t*)(processor + 467096) = 0;
    *(std::uint8_t*)(processor + 467104) = 0;
    *(std::uint64_t*)(processor + 467112) = 0;
    *(std::uint32_t*)(processor + 467120) = 0;
    *(std::uint64_t*)(processor + 467128) = 1;
    *(std::uint64_t*)(processor + 467136) = 0;
    *(std::uint64_t*)(processor + 467144) = 0;
    *(std::uint16_t*)(processor + 467152) = 0;
    *(std::uint32_t*)(processor + 467156) = 0;
    *(std::uint64_t*)(processor + 467160) = 0;
    *(std::uint64_t*)(processor + 467168) = 0;
    *(std::uint64_t*)(processor + 467176) = 0;
    *(std::uint64_t*)(processor + 467184) = 0;
    *(std::uint64_t*)(processor + 467192) = 0;
    *(std::uint64_t*)(processor + 467200) = 0;
    *(std::uint64_t*)(processor + 467208) = 0;
    *(std::uint64_t*)(processor + 467216) = 0;
    *(std::uint64_t*)(processor + 467224) = 0;
    *(std::uint64_t*)(processor + 467232) = 0;
    *(std::uint64_t*)(processor + 467240) = 0;
    *(std::uint64_t*)(processor + 467248) = 0;
    *(std::uint32_t*)(processor + 467256) = 0;
    allocatedObject17 = (_OWORD*)memoryAllocateObject (24);
    lpMem[0] = allocatedObject17;
    *allocatedObject17 = 0;
    *((std::uint32_t*)allocatedObject17 + 2) = 1;
    *((std::uint32_t*)allocatedObject17 + 3) = 1;
    *(std::uint64_t*)allocatedObject17 = &std::_Ref_count_obj2<fadmodel1::standalone::PlaybackGate>::`vftable';
    *((std::uint8_t*)allocatedObject17 + 16) = 0;
    *(std::uint64_t*)(processor + 467264) = allocatedObject17 + 1;
    *(std::uint64_t*)(processor + 467272) = allocatedObject17;
    *(std::uint64_t*)(processor + 467280) = 0;
    *(std::uint32_t*)(processor + 467288) = 0;
    *(std::uint8_t*)(processor + 467292) = 0;
    memoryFillBytes (processor + 467296, 0, 0x2000);
    *(std::uint64_t*)(processor + 475488) = 0;
    *(std::uint8_t*)(processor + 475496) = 0;
    *(std::uint32_t*)(processor + 475500) = 0;
    *(std::uint8_t*)(processor + 475504) = 0;
    *(std::uint32_t*)(processor + 475508) = 0;
    *(std::uint8_t*)(processor + 475512) = 0;
    *(std::uint64_t*)(processor + 475516) = 0;
    *(std::uint64_t*)(processor + 475524) = 0;
    *(std::uint32_t*)(processor + 475532) = 0;
    *(std::uint16_t*)(processor + 475536) = 0;
    *(std::uint64_t*)(processor + 475544) = 0;
    *(std::uint64_t*)(processor + 475552) = 0;
    *(std::uint64_t*)(processor + 475560) = 0;
    *(_OWORD*)(processor + 475592) = 0;
    *(_OWORD*)(processor + 475608) = 0;
    *(_OWORD*)(processor + 475624) = 0;
    *(_OWORD*)(processor + 475576) = 0;
    *(std::uint32_t*)(processor + 475640) = -1;
    *(std::uint32_t*)(processor + 475568) = 2;
    *(std::uint32_t*)(processor + 475644) = 0;
    *(std::uint64_t*)(processor + 475704) = 0;
    *(std::uint64_t*)(processor + 475712) = 0;
    *(_OWORD*)(processor + 475744) = 0;
    *(_OWORD*)(processor + 475760) = 0;
    *(_OWORD*)(processor + 475776) = 0;
    *(_OWORD*)(processor + 475728) = 0;
    *(std::uint32_t*)(processor + 475792) = -1;
    *(std::uint32_t*)(processor + 475720) = 2;
    *(std::uint32_t*)(processor + 475796) = 0;
    *(std::uint64_t*)(processor + 475800) = 0;
    *(std::uint64_t*)(processor + 475808) = -1;
    *(std::uint64_t*)(processor + 475816) = 0;
    *(std::uint64_t*)(processor + 475824) = 0;
    *(std::uint32_t*)(processor + 475832) = 0;
    *(std::uint8_t*)(processor + 475836) = 1;
    sub_180240820 (processor + 475840);
    *(std::uint64_t*)(processor + 475856) = 0x405E000000000000LL;
    *(std::uint64_t*)(processor + 475864) = 0;
    *(std::uint8_t*)(processor + 475872) = 0;
    *(std::uint64_t*)(processor + 475880) = 0x405E000000000000LL;
    *(std::uint8_t*)(processor + 475888) = 0;
    *(std::uint8_t*)(processor + 475896) = 0;
    *(std::uint32_t*)(processor + 475900) = 0;
    *(std::uint16_t*)(processor + 475904) = 256;
    *(std::uint8_t*)(processor + 475906) = 0;
    *(std::uint32_t*)(processor + 475908) = 1065353216;
    *(std::uint64_t*)(processor + 475912) = 0x40E5888000000000LL;
    *(std::uint32_t*)(processor + 475920) = 0;
    *(std::uint8_t*)(processor + 475924) = 0;
    *(std::uint64_t*)(processor + 475928) = 0;
    sub_180036760();
    lpMem[0] = (LPVOID)memoryAllocateObject (164408);
    opaqueValue83 = ___7___Func_impl_no_alloc_V_lambda_1___1___0FadModel1AudioProcessor__QEAA_XZ_I__V_std__6B_;
    opaqueValue84 = processor;
    temporaryPointer85 = &opaqueValue83;
    opaqueValue18 = sub_180030510 (lpMem[0], processor, processor + 260488, &opaqueValue83);
    temporaryPointer19 = *(void**)(processor + 260680);
    *(std::uint64_t*)(processor + 260680) = opaqueValue18;
    if (temporaryPointer19 != nullptr)
    {
        sub_180030D20 (temporaryPointer19);
        memoryFree (temporaryPointer19);
    }
    stackStorage86[0] = std::_Func_impl_no_alloc<`FadModel1AudioProcessor::FadModel1AudioProcessor'::`2'::_lambda_2_, juce::Vvar::XZ::A* const, >::`vftable';
    stackStorage86[1] = processor;
    temporaryPointer87 = stackStorage86;
    sub_1800850A0 (stackStorage86, *(std::uint64_t*)(processor + 260680) + 40LL);
    if (temporaryPointer87 != nullptr)
    {
        LOBYTE (opaqueValue20) = temporaryPointer87 != stackStorage86;
        (*(void (**) (std::uint64_t*, std::int64_t)) (*temporaryPointer87 + 32LL)) (temporaryPointer87, opaqueValue20);
        temporaryPointer87 = nullptr;
    }
    stackStorage82[0] = &emptyJuceStringCharacters;
    lpMem[0] = &emptyJuceStringCharacters;
    sub_180347AD0 (processor + 428512, lpMem, stackStorage82);
    stringStorageToRelease21 = (char*)lpMem[0] - 16;
    if ((char*)lpMem[0] - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease21) == -1)
        memoryFree (stringStorageToRelease21);
    stackStorage82[0] = &emptyJuceStringCharacters;
    lpMem[0] = &emptyJuceStringCharacters;
    sub_18037E480 (processor + 428568, lpMem, stackStorage82);
    stringStorageToRelease22 = (char*)lpMem[0] - 16;
    if ((char*)lpMem[0] - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease22) == -1)
        memoryFree (stringStorageToRelease22);
    opaqueValue23 = sub_18005C380 (&messageString80);
    opaqueValue24 = *(std::uint16_t*)opaqueValue23;
    opaqueValue71 = opaqueValue24;
    opaqueValue25 = *(std::uint8_t*)(opaqueValue23 + 2);
    *(std::uint8_t*)(processor + 453704) = opaqueValue24;
    opaqueValue26 = HIBYTE (opaqueValue71);
    *(std::uint8_t*)(processor + 453705) = HIBYTE (opaqueValue71);
    conditionFlag27 = opaqueValue26 != 0 && opaqueValue25 != 0;
    *(std::uint8_t*)(processor + 453706) = conditionFlag27;
    if (opaqueValue25 != 0 && !conditionFlag27)
    {
        juceStringConstructFromUtf8 (lpMem, "tasteUploadConsent");
        sub_18005C710 (lpMem, 0);
        stringStorageToRelease28 = (char*)lpMem[0] - 16;
        if ((char*)lpMem[0] - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease28) == -1)
            memoryFree (stringStorageToRelease28);
    }
    sub_180349CC0 (processor + 428512, (std::uint8_t)opaqueValue24);
    sub_180379A00 (processor + 428568, opaqueValue26);
    *(std::uint64_t*)(processor + 259744) = processor + 1520;
    *(std::uint64_t*)(processor + 69152) = processor;
    *(std::uint64_t*)(processor + 69160) = sub_1800648B0;
    *(std::uint64_t*)(processor + 69168) = sub_1800648E0;
    *(std::uint64_t*)(processor + 69176) = sub_180064A40;
    do
    {
        opaqueValue29 = temporaryPointer16[1];
        opaqueValue30 = *temporaryPointer16;
        opaqueValue31 = opaqueValue29 - *temporaryPointer16;
        if (opaqueValue31 > 0x40000)
        {
            opaqueValue32 = opaqueValue30 + 0x40000;
        label40:
            temporaryPointer16[1] = opaqueValue32;
            goto label41;
        }
        if (opaqueValue31 >= 0x40000)
            goto label41;
        opaqueValue33 = temporaryPointer16[2] - opaqueValue30;
        if (opaqueValue33 >= 0x40000)
        {
            opaqueValue38 = 0x40000 - opaqueValue31;
            memoryFillBytes (temporaryPointer16[1], 0, 0x40000 - opaqueValue31);
            opaqueValue32 = opaqueValue29 + opaqueValue38;
            goto label40;
        }
        opaqueValue34 = opaqueValue29 - opaqueValue30;
        opaqueValue35 = opaqueValue33 >> 1;
        if (opaqueValue33 <= 0x7FFFFFFFFFFFFFFFLL - (opaqueValue33 >> 1))
        {
            opaqueValue36 = opaqueValue33 + opaqueValue35;
            if (opaqueValue33 + opaqueValue35 < 0x40000)
                opaqueValue36 = 0x40000;
        }
        else
        {
            opaqueValue36 = 0x7FFFFFFFFFFFFFFFLL;
        }
        opaqueValue37 = sub_180029C10 (opaqueValue36, opaqueValue35, 0x7FFFFFFFFFFFFFFFLL);
        memoryFillBytes (opaqueValue37 + opaqueValue34, 0, 0x40000 - opaqueValue34);
        sub_1809E9680 (opaqueValue37, *temporaryPointer16, temporaryPointer16[1] - *temporaryPointer16);
        sub_18002AB50 (temporaryPointer16, opaqueValue37, 0x40000, opaqueValue36);
    label41:
        temporaryPointer16 += 7;
    } while (temporaryPointer16 != (std::uint64_t*)(processor + 466784));
    lpMem[0] = (LPVOID)memoryAllocateObject (56);
    opaqueValue39 = sub_18035FA60 (lpMem[0]);
    authManagerOrScratch40 = *(void (****) (std::uint64_t, std::int64_t)) (processor + 475552);
    *(std::uint64_t*)(processor + 475552) = opaqueValue39;
    if (authManagerOrScratch40 != nullptr)
        (**authManagerOrScratch40) (authManagerOrScratch40, 1);
    opaqueValue83 = std::_Func_impl_no_alloc<`FadModel1AudioProcessor::FadModel1AudioProcessor'::`2'::_lambda_6_, fadmodel1::ai::AuthManager::XAEBUAuthState::XZ::A* const>::`vftable';
    opaqueValue84 = processor;
    temporaryPointer85 = &opaqueValue83;
    authManagerSetStateChangedCallback (*(std::uint64_t*)(processor + 475552), (std::int64_t)&opaqueValue83);
    opaqueValue83 = std::_Func_impl_no_alloc<`FadModel1AudioProcessor::FadModel1AudioProcessor'::`2'::_lambda_7_, fadmodel1::ai::AuthManager::XAEBUAuthState::XZ::A* const>::`vftable';
    opaqueValue84 = processor;
    temporaryPointer85 = &opaqueValue83;
    authManagerSetEventCallback (*(std::uint64_t*)(processor + 475552), &opaqueValue83);
    *(std::uint32_t*)(processor + 475500) = *(std::uint32_t*)(processor + 475900);
    lpMem[0] = (LPVOID)memoryAllocateObject (16);
    opaqueValue71 = 0;
    opaqueValue72 = 0;
    opaqueValue41 = sub_1803B3010 (lpMem[0], processor, &opaqueValue71);
    temporaryPointer42 = *(void**)(processor + 427528);
    *(std::uint64_t*)(processor + 427528) = opaqueValue41;
    if (temporaryPointer42 != nullptr)
    {
        sub_1803B32C0 (temporaryPointer42);
        memoryFree (temporaryPointer42);
    }
    *(std::uint8_t*)(processor + 475504) = 0;
    sub_180193EE0 (processor + 368, 16);
    sub_18006C3B0 (processor);
    allocatedObject43 = memoryAllocateObject (200);
    stackStorage82[0] = allocatedObject43;
    opaqueValue83 = std::_Func_impl_no_alloc<`FadModel1AudioProcessor::FadModel1AudioProcessor'::`2'::_lambda_8_, juce::VMemoryBlock::XZ::A* const, >::`vftable';
    opaqueValue84 = processor;
    temporaryPointer85 = &opaqueValue83;
    lpMem[0] = *(LPVOID*)(processor + 472);
    if ((char*)lpMem[0] - 16 != (char*)&emptyJuceStringStorage)
        _InterlockedIncrement ((volatile std::int32_t*)lpMem[0] - 4);
    opaqueValue44 = sub_180053D40 (allocatedObject43, lpMem, &opaqueValue83);
    temporaryPointer45 = *(void**)(processor + 1104);
    *(std::uint64_t*)(processor + 1104) = opaqueValue44;
    if (temporaryPointer45 != nullptr)
    {
        sub_180054060 (temporaryPointer45);
        memoryFree (temporaryPointer45);
    }
    temporaryPointer46 = (std::int64_t*)sub_18007BA50 (lpMem);
    opaqueValue47 = *temporaryPointer46;
    *temporaryPointer46 = 0;
    temporaryPointer48 = *(void**)(processor + 475544);
    *(std::uint64_t*)(processor + 475544) = opaqueValue47;
    if (temporaryPointer48 != nullptr)
    {
        sub_18004C7F0 (temporaryPointer48);
        memoryFree (temporaryPointer48);
    }
    temporaryPointer49 = lpMem[0];
    if (lpMem[0] != nullptr)
    {
        sub_18004C7F0 (lpMem[0]);
        memoryFree (temporaryPointer49);
    }
    opaqueValue50 = *(std::uint64_t*)(processor + 475544);
    opaqueValue51 = *(std::uint32_t*)(processor + 8);
    if (opaqueValue51 == 6)
    {
        temporaryPointer52 = "standalone";
    }
    else if (opaqueValue51 == 3)
    {
        temporaryPointer52 = "au";
    }
    else
    {
        temporaryPointer52 = "vst3";
        if (opaqueValue51 == 4)
            temporaryPointer52 = "auv3";
    }
    juceStringConstructFromUtf8 (lpMem, temporaryPointer52);
    sub_18004EF60 (opaqueValue50, lpMem);
    stringStorageToRelease53 = (char*)lpMem[0] - 16;
    if ((char*)lpMem[0] - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease53) == -1)
        memoryFree (stringStorageToRelease53);
    opaqueValue54 = *(std::uint64_t*)(processor + 475544);
    if (*(std::uint8_t*)(opaqueValue54 + 280) == 0 && (unsigned int)sub_180036530() != 0 && **(std::uint8_t**)(opaqueValue54 + 264) != 0)
    {
        *(std::uint8_t*)(opaqueValue54 + 280) = 1;
        *(std::uint64_t*)(opaqueValue54 + 288) = *(std::uint64_t*)clockReadSteadyNanoseconds (lpMem) + 3000000000LL;
        sub_180050700 (opaqueValue54);
    }
    lpMem[0] = (LPVOID)memoryAllocateObject (672);
    opaqueValue83 = std::_Func_impl_no_alloc<`FadModel1AudioProcessor::FadModel1AudioProcessor'::`2'::_lambda_9_, fadmodel1::diagnostics::BugReportService::UIdentity::XZ::A* const, >::`vftable';
    opaqueValue84 = processor;
    temporaryPointer85 = &opaqueValue83;
    opaqueValue55 = sub_180036C00 (lpMem[0], &opaqueValue83);
    temporaryPointer56 = *(void**)(processor + 260688);
    *(std::uint64_t*)(processor + 260688) = opaqueValue55;
    if (temporaryPointer56 != nullptr)
    {
        sub_180037EE0 (temporaryPointer56);
        memoryFree (temporaryPointer56);
    }
    stackStorage88[0] = std::_Func_impl_no_alloc<`FadModel1AudioProcessor::FadModel1AudioProcessor'::`2'::_lambda_10_, fadmodel1::diagnostics::UBugReportCapture::XZ::A* const, >::`vftable';
    stackStorage88[1] = processor;
    temporaryPointer89 = stackStorage88;
    sub_1800850A0 (stackStorage88, *(std::uint64_t*)(processor + 260688) + 104LL);
    if (temporaryPointer89 != nullptr)
    {
        LOBYTE (opaqueValue57) = temporaryPointer89 != stackStorage88;
        (*(void (**) (std::uint64_t*, std::int64_t)) (*temporaryPointer89 + 32LL)) (temporaryPointer89, opaqueValue57);
    }
    opaqueValue58 = *(std::uint32_t*)(processor + 8);
    if (opaqueValue58 == 2 || opaqueValue58 == 3)
    {
        allocatedObject59 = (std::uint64_t*)memoryAllocateObject (8);
        lpMem[0] = allocatedObject59;
        stackStorage82[0] = memoryAllocateObject (216);
        *allocatedObject59 = sub_1803A3510 (stackStorage82[0], processor);
        temporaryPointer60 = *(std::uint64_t**)(processor + 696);
        *(std::uint64_t*)(processor + 696) = allocatedObject59;
        if (temporaryPointer60 != nullptr)
        {
            temporaryPointer61 = (void*)*temporaryPointer60;
            if (*temporaryPointer60 != 0)
            {
                sub_1803A3820 (*temporaryPointer60);
                memoryFree (temporaryPointer61);
            }
            memoryFree (temporaryPointer60);
        }
    }
    juceStringConstructFromUtf8 (&messageString80, "Plugin instance created");
    if (activeJuceLogger != 0)
        (*(void (**) (std::int64_t, std::int64_t*)) (*(std::uint64_t*)activeJuceLogger + 8LL)) (activeJuceLogger, &messageString80);
    else
        juceLoggerWriteDefaultLog (&messageString80);
    stringStorageToRelease62 = (void*)(messageString80 - 16);
    if ((void*)(messageString80 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease62) == -1)
        memoryFree (stringStorageToRelease62);
    opaqueValue63 = sub_180036530();
    if (opaqueValue63 != 0)
    {
        opaqueValue64 = opaqueValue63 - 1;
        if (opaqueValue64 != 0)
        {
            if (opaqueValue64 == 1)
                temporaryPointer65 = "online";
            else
                temporaryPointer65 = "cache-only";
        }
        else
        {
            temporaryPointer65 = "cache-only";
        }
    }
    else
    {
        temporaryPointer65 = "disabled";
    }
    juceStringConstructFromUtf8 (&messageString80, temporaryPointer65);
    juceStringConstructFromUtf8 (lpMem, "RemoteContent mode: ");
    stackStorage82[0] = *(std::uint64_t*)juceStringAppendString (lpMem, &messageString80);
    if ((void*)(stackStorage82[0] - 16LL) != &emptyJuceStringStorage)
        _InterlockedIncrement ((volatile std::int32_t*)(stackStorage82[0] - 16LL));
    stringStorageToRelease66 = (char*)lpMem[0] - 16;
    if ((char*)lpMem[0] - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease66) == -1)
        memoryFree (stringStorageToRelease66);
    if (activeJuceLogger != 0)
        (*(void (**) (std::int64_t, std::uint64_t*)) (*(std::uint64_t*)activeJuceLogger + 8LL)) (activeJuceLogger, stackStorage82);
    else
        juceLoggerWriteDefaultLog (stackStorage82);
    temporaryPointer67 = (void*)(stackStorage82[0] - 16LL);
    if ((void*)(stackStorage82[0] - 16LL) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)temporaryPointer67) == -1)
        memoryFree (temporaryPointer67);
    stringStorageToRelease68 = (void*)(messageString80 - 16);
    if ((void*)(messageString80 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease68) == -1)
        memoryFree (stringStorageToRelease68);
    return processor;
}

// ===== FadModel1AudioProcessor_prepareToPlay @ 0x180066bc0 size=2666 =====
// vtable[6]. Waits <=15s via AuthManager_WaitReadyBlocking; throttled FAD-RENDER-AUTH-NOT-READY log (activated=/verified=/error=/status=) when check fails
std::int64_t audioProcessorPrepareToPlay (std::int64_t processor, double sampleRate, unsigned int maximumBlockSize)
{
    std::int64_t opaqueValue3; // r15
    std::int64_t opaqueValue6; // rcx
    std::int64_t opaqueValue7; // rdx
    int* temporaryPointer8; // r8
    char opaqueValue9; // al
    ULONGLONG TickCount64; // rax
    std::int64_t authManagerOrScratch11; // rbx
    std::int64_t opaqueValue12; // rdi
    std::int64_t opaqueValue13; // rdx
    std::int64_t opaqueValue14; // rax
    std::int64_t opaqueValue15; // r12
    std::int64_t opaqueValue16; // rax
    std::int64_t opaqueValue17; // rax
    std::int64_t opaqueValue18; // rax
    void* stringStorageToRelease19; // rcx
    std::int64_t* temporaryPointer20; // rdi
    void* stringStorageToRelease21; // rcx
    std::int64_t* temporaryPointer22; // rdi
    void* stringStorageToRelease23; // rcx
    std::int64_t* temporaryPointer24; // rdi
    void* stringStorageToRelease25; // rcx
    void* stringStorageToRelease26; // rcx
    void* stringStorageToRelease27; // rcx
    void* stringStorageToRelease28; // rcx
    void* stringStorageToRelease29; // rcx
    void* stringStorageToRelease30; // rcx
    void* stringStorageToRelease31; // rcx
    double scalarValue32; // xmm1_8
    std::int64_t opaqueValue33; // rax
    int opaqueValue34; // eax
    std::int64_t opaqueValue35; // r8
    char opaqueValue36; // r12
    std::int64_t opaqueValue37; // rdx
    int opaqueValue38; // ebx
    std::int64_t opaqueValue39; // rax
    char opaqueValue40; // al
    int opaqueValue41; // ecx
    bool conditionFlag42; // cc
    std::int64_t opaqueValue43; // rax
    int opaqueValue44; // edi
    std::int64_t opaqueValue45; // r8
    std::uint64_t opaqueValue46; // rdx
    char opaqueValue47; // al
    std::int64_t i; // rcx
    std::int64_t opaqueValue49; // rdx
    std::int64_t opaqueValue50; // rcx
    std::int64_t opaqueValue51; // r8
    std::int64_t opaqueValue52; // rdx
    int opaqueValue53; // ecx
    std::int64_t opaqueValue54; // r8
    int opaqueValue55; // eax
    int opaqueValue56; // eax
    int opaqueValue57; // ecx
    std::int64_t opaqueValue58; // r13
    std::int64_t opaqueValue59; // rax
    int opaqueValue60; // edi
    std::uint64_t opaqueValue61; // rdx
    char opaqueValue62; // al
    std::int64_t j; // rcx
    int opaqueValue64; // eax
    std::int64_t result; // rax
    std::int64_t diagnosticCodeString66; // [rsp+20h] [rbp-E0h] BYREF
    std::int64_t opaqueValue67; // [rsp+28h] [rbp-D8h] BYREF
    std::int64_t opaqueValue68; // [rsp+30h] [rbp-D0h] BYREF
    std::int64_t opaqueValue69; // [rsp+38h] [rbp-C8h] BYREF
    std::int64_t opaqueValue70; // [rsp+40h] [rbp-C0h] BYREF
    int opaqueValue71; // [rsp+48h] [rbp-B8h] BYREF
    int opaqueValue72; // [rsp+4Ch] [rbp-B4h] BYREF
    std::int64_t opaqueValue73; // [rsp+50h] [rbp-B0h] BYREF
    std::int64_t opaqueValue74; // [rsp+58h] [rbp-A8h] BYREF
    std::int64_t opaqueValue75; // [rsp+60h] [rbp-A0h] BYREF
    std::int64_t opaqueValue76; // [rsp+68h] [rbp-98h] BYREF
    std::int64_t opaqueValue77; // [rsp+70h] [rbp-90h] BYREF
    char stackStorage78[8]; // [rsp+78h] [rbp-88h] BYREF
    char stackStorage79[8]; // [rsp+80h] [rbp-80h] BYREF
    char stackStorage80[8]; // [rsp+88h] [rbp-78h] BYREF
    std::uint8_t stackStorage81[72]; // [rsp+90h] [rbp-70h] BYREF
    char stackStorage82[8]; // [rsp+D8h] [rbp-28h] BYREF
    int opaqueValue83; // [rsp+E0h] [rbp-20h]
    std::uint8_t opaqueValue84; // [rsp+148h] [rbp+48h]
    std::uint8_t stackStorage85[7728]; // [rsp+A30h] [rbp+930h] BYREF
    int opaqueValue86; // [rsp+2860h] [rbp+2760h]
    double scalarValue87; // [rsp+2870h] [rbp+2770h] BYREF
    int opaqueValue88; // [rsp+2878h] [rbp+2778h]
    int opaqueValue89; // [rsp+287Ch] [rbp+277Ch]
    std::int64_t opaqueValue90; // [rsp+2880h] [rbp+2780h]
    char opaqueValue91; // [rsp+288Fh] [rbp+278Fh] BYREF
    std::uint64_t stackStorage92[2]; // [rsp+2890h] [rbp+2790h] BYREF

    opaqueValue3 = maximumBlockSize;
    _InterlockedIncrement64 ((volatile std::int64_t*)(processor + 275656));
    opaqueValue71 = 0;
    opaqueValue72 = 0;
    opaqueValue6 = 0;
    opaqueValue7 = (std::int64_t)&opaqueValue71;
    temporaryPointer8 = &opaqueValue72;
    do
        opaqueValue9 = *((std::uint8_t*)&opaqueValue71 + opaqueValue6++);
    while (opaqueValue9 == *((std::uint8_t*)&opaqueValue72 + opaqueValue6 - 1) && opaqueValue6 != 4);
    *(std::uint64_t*)(processor + 475824) = 0;
    *(std::uint32_t*)(processor + 475832) = 0;
    *(std::uint8_t*)(processor + 69149) = 1;
    if (*(std::uint8_t*)(processor + 65) != 0 && *(std::uint64_t*)(processor + 475552) != 0)
    {
        TickCount64 = GetTickCount64();
        opaqueValue7 = 0x7FFFFFFFFFFFFFFFLL;
        if (TickCount64 >= 0x7FFFFFFFFFFFFFFFLL)
            TickCount64 = 0x7FFFFFFFFFFFFFFFLL;
        opaqueValue6 = *(std::uint64_t*)(processor + 475712);
        if (opaqueValue6 != 0x7FFFFFFFFFFFFFFFLL && (opaqueValue6 <= 0 || (std::int64_t)TickCount64 >= opaqueValue6) && !authManagerWaitForInitialVerification (*(std::uint64_t*)(processor + 475552)))
        {
            authManagerOrScratch11 = *(std::uint64_t*)(processor + 475552);
            opaqueValue12 = *(std::uint64_t*)(authManagerOrScratch11 + 40);
            EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue12 + 1168));
            authManagerSnapshotState ((std::int64_t)stackStorage81, *(std::uint64_t*)(authManagerOrScratch11 + 40));
            LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue12 + 1168));
            opaqueValue13 = (unsigned int)opaqueValue83;
            if (opaqueValue83 >= 0)
            {
                if (opaqueValue83 > 599)
                    opaqueValue13 = 599;
            }
            else
            {
                opaqueValue13 = 0;
            }
            opaqueValue14 = sub_180097810 (stackStorage92, opaqueValue13);
            juceStringConstructFromUtf8Span (&opaqueValue77, opaqueValue14, &opaqueValue91 - opaqueValue14);
            opaqueValue15 = sub_180035BC0 (&opaqueValue68, stackStorage82);
            opaqueValue16 = sub_180097810 (stackStorage92, opaqueValue84);
            juceStringConstructFromUtf8Span (&opaqueValue67, opaqueValue16, &opaqueValue91 - opaqueValue16);
            opaqueValue17 = sub_180097810 (stackStorage92, stackStorage81[0]);
            juceStringConstructFromUtf8Span (&opaqueValue70, opaqueValue17, &opaqueValue91 - opaqueValue17);
            juceStringConstructFromUtf8 (&diagnosticCodeString66, "FAD-RENDER-AUTH-NOT-READY: offline preparation could not verify authorization");
            scalarValue87 = COERCE_DOUBLE (&diagnosticCodeString66);
            juceStringAppendUtf8Range (&diagnosticCodeString66, " activated=", "");
            opaqueValue18 = diagnosticCodeString66;
            opaqueValue74 = diagnosticCodeString66;
            if ((void*)(diagnosticCodeString66 - 16) != &emptyJuceStringStorage)
            {
                _InterlockedIncrement ((volatile std::int32_t*)(diagnosticCodeString66 - 16));
                opaqueValue18 = diagnosticCodeString66;
            }
            stringStorageToRelease19 = (void*)(opaqueValue18 - 16);
            if ((void*)(opaqueValue18 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease19) == -1)
                memoryFree (stringStorageToRelease19);
            temporaryPointer20 = (std::int64_t*)sub_180098710 (stackStorage78, &opaqueValue74, &opaqueValue70);
            scalarValue87 = *(double*)&temporaryPointer20;
            juceStringAppendUtf8Range (temporaryPointer20, " verified=", "");
            opaqueValue75 = *temporaryPointer20;
            if ((void*)(opaqueValue75 - 16) != &emptyJuceStringStorage)
                _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue75 - 16));
            stringStorageToRelease21 = (void*)(*temporaryPointer20 - 16);
            if (stringStorageToRelease21 != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease21) == -1)
                memoryFree (stringStorageToRelease21);
            temporaryPointer22 = (std::int64_t*)sub_180098710 (stackStorage79, &opaqueValue75, &opaqueValue67);
            scalarValue87 = *(double*)&temporaryPointer22;
            juceStringAppendUtf8Range (temporaryPointer22, " error=", "");
            opaqueValue76 = *temporaryPointer22;
            if ((void*)(opaqueValue76 - 16) != &emptyJuceStringStorage)
                _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue76 - 16));
            stringStorageToRelease23 = (void*)(*temporaryPointer22 - 16);
            if (stringStorageToRelease23 != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease23) == -1)
                memoryFree (stringStorageToRelease23);
            temporaryPointer24 = (std::int64_t*)sub_180098710 (stackStorage80, &opaqueValue76, opaqueValue15);
            scalarValue87 = *(double*)&temporaryPointer24;
            juceStringAppendUtf8Range (temporaryPointer24, " status=", "");
            opaqueValue69 = *temporaryPointer24;
            if ((void*)(opaqueValue69 - 16) != &emptyJuceStringStorage)
                _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue69 - 16));
            stringStorageToRelease25 = (void*)(*temporaryPointer24 - 16);
            if (stringStorageToRelease25 != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease25) == -1)
                memoryFree (stringStorageToRelease25);
            scalarValue87 = COERCE_DOUBLE (&opaqueValue69);
            opaqueValue73 = *(std::uint64_t*)juceStringAppendString (&opaqueValue69, &opaqueValue77);
            if ((void*)(opaqueValue73 - 16) != &emptyJuceStringStorage)
                _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue73 - 16));
            stringStorageToRelease26 = (void*)(opaqueValue69 - 16);
            if ((void*)(opaqueValue69 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease26) == -1)
                memoryFree (stringStorageToRelease26);
            if (activeJuceLogger != 0)
                (*(void (**) (std::int64_t, std::int64_t*)) (*(std::uint64_t*)activeJuceLogger + 8LL)) (activeJuceLogger, &opaqueValue73);
            else
                juceLoggerWriteDefaultLog (&opaqueValue73);
            stringStorageToRelease27 = (void*)(opaqueValue73 - 16);
            if ((void*)(opaqueValue73 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease27) == -1)
                memoryFree (stringStorageToRelease27);
            stringStorageToRelease28 = (void*)(opaqueValue70 - 16);
            if ((void*)(opaqueValue70 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease28) == -1)
                memoryFree (stringStorageToRelease28);
            stringStorageToRelease29 = (void*)(opaqueValue67 - 16);
            if ((void*)(opaqueValue67 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease29) == -1)
                memoryFree (stringStorageToRelease29);
            stringStorageToRelease30 = (void*)(opaqueValue68 - 16);
            if ((void*)(opaqueValue68 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease30) == -1)
                memoryFree (stringStorageToRelease30);
            stringStorageToRelease31 = (void*)(opaqueValue77 - 16);
            if ((void*)(opaqueValue77 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease31) == -1)
                memoryFree (stringStorageToRelease31);
            sub_180058EA0 (stackStorage81);
        }
    }
    if ((std::int16_t)sub_1809C8FE0 (opaqueValue6, opaqueValue7, temporaryPointer8) <= 0)
    {
        if (sampleRate >= 8000.0)
            scalarValue32 = fmin (384000.0, sampleRate);
        else
            scalarValue32 = 8000.0;
    }
    else
    {
        scalarValue32 = 44100.0;
    }
    if ((int)opaqueValue3 > 0)
    {
        if ((int)opaqueValue3 > 0x100000)
            opaqueValue3 = 0x100000;
    }
    else
    {
        opaqueValue3 = 1;
    }
    LOBYTE (opaqueValue90) = 0;
    *(__m128i*)(processor + 475856) = _mm_load_si128 ((const __m128i*)&xmmword_18133AC30);
    *(std::uint64_t*)(processor + 475872) = opaqueValue90;
    *(std::uint64_t*)(processor + 475880) = *(std::uint64_t*)(processor + 475856);
    *(std::uint8_t*)(processor + 475888) = 0;
    *(std::uint8_t*)(processor + 475896) = 0;
    *(double*)(processor + 475912) = scalarValue32;
    *(std::uint32_t*)(processor + 475920) = opaqueValue3;
    scalarValue87 = scalarValue32;
    opaqueValue88 = opaqueValue3;
    if (*(std::uint32_t*)(processor + 244) != 0 && (opaqueValue33 = **(std::uint64_t**)(processor + 232)) != 0)
        opaqueValue34 = *(std::uint32_t*)(opaqueValue33 + 140);
    else
        opaqueValue34 = 0;
    opaqueValue89 = opaqueValue34;
    if (*(std::uint8_t*)(processor + 65) != 0 && *(std::uint8_t*)(processor + 69148) != 0)
    {
        sub_1809E9680 (processor + 70136, processor + 61416, 7732);
        *(std::uint8_t*)(processor + 78016) = 0;
        *(std::uint8_t*)(processor + 178944) = 0;
    }
    if (*(std::uint8_t*)(processor + 65) != 0)
        opaqueValue35 = *(unsigned int*)(processor + 61412);
    else
        opaqueValue35 = 0;
    sub_1803CE550 (processor + 69152, &scalarValue87, opaqueValue35);
    *(std::uint8_t*)(processor + 61408) = 0;
    opaqueValue36 = *(std::uint8_t*)(processor + 61376);
    *(std::uint8_t*)(processor + 61376) = 0;
    sub_1803F80D0 (stackStorage85);
    if (*(std::uint8_t*)(processor + 1520) != 0 || (opaqueValue38 = *(std::uint32_t*)(processor + 1440), opaqueValue39 = sub_1803FDCA0 (processor + 1432, stackStorage81), sub_180400390 (processor + 12480, stackStorage85, opaqueValue39, 0x1FFFFFFFFFFFFFFLL), LODWORD (diagnosticCodeString66) = *(std::uint32_t*)(processor + 1440), opaqueValue38 != (std::uint32_t)diagnosticCodeString66) || *(std::uint8_t*)(processor + 1520) != 0)
    {
        if (opaqueValue36 != 0)
            *(std::uint8_t*)(processor + 61376) = 1;
    }
    else
    {
        opaqueValue86 = *(std::uint32_t*)(processor + 260088);
        sub_1809E9680 (processor + 45896, stackStorage85, 7732);
        *(std::uint32_t*)(processor + 61364) = diagnosticCodeString66;
        opaqueValue40 = sub_1803D2460 (processor + 69152, stackStorage85);
        *(std::uint8_t*)(processor + 61360) = opaqueValue40 ^ 1;
        if (opaqueValue40 != 0)
        {
            *(std::uint32_t*)(processor + 61368) = *(std::uint32_t*)(processor + 61364);
            *(std::uint32_t*)(processor + 61372) = opaqueValue86;
        }
    }
    opaqueValue41 = *(std::uint32_t*)(processor + 260700);
    if (opaqueValue41 >= (int)opaqueValue3)
    {
        opaqueValue3 = (unsigned int)opaqueValue41;
        conditionFlag42 = opaqueValue41 < 0x10000;
    }
    else
    {
        conditionFlag42 = (int)opaqueValue3 < 0x10000;
    }
    if (conditionFlag42)
        opaqueValue3 = 0x10000;
    if (*(std::uint32_t*)(processor + 244) != 0 && *(std::uint64_t*)(opaqueValue43 = *(std::uint64_t*)(processor + 232)) != 0)
        opaqueValue44 = *(std::uint32_t*)(*(std::uint64_t*)opaqueValue43 + 140LL);
    else
        opaqueValue44 = 0;
    opaqueValue45 = 4294967280LL;
    if ((std::uint32_t)opaqueValue3 != opaqueValue41 || opaqueValue44 != *(std::uint32_t*)(processor + 260696))
    {
        opaqueValue68 = (8LL * (unsigned int)(opaqueValue44 + 1) + 15) & 0xFFFFFFF0LL;
        opaqueValue46 = opaqueValue68 + 4 * opaqueValue44 * ((opaqueValue3 + 3) & 0xFFFFFFFCLL) + 32;
        opaqueValue47 = *(std::uint8_t*)(processor + 260984);
        if (*(std::uint64_t*)(processor + 260704) < opaqueValue46)
        {
            *(std::uint64_t*)(processor + 260704) = opaqueValue46;
            LOBYTE (opaqueValue45) = opaqueValue47 != 0;
            sub_180029FF0 (processor + 260720, opaqueValue46, opaqueValue45);
            *(std::uint64_t*)(processor + 260712) = *(std::uint64_t*)(processor + 260720);
        }
        else if (opaqueValue47 != 0)
        {
            memoryFillBytes (*(std::uint64_t*)(processor + 260720), 0, opaqueValue68 + 4 * opaqueValue44 * ((opaqueValue3 + 3) & 0xFFFFFFFCLL) + 32);
        }
        opaqueValue37 = *(std::uint64_t*)(processor + 260720) + opaqueValue68;
        if (opaqueValue44 > 0)
        {
            for (i = 0; i < opaqueValue44; ++i)
            {
                *(std::uint64_t*)(*(std::uint64_t*)(processor + 260712) + 8 * i) = opaqueValue37;
                opaqueValue37 += 4 * ((opaqueValue3 + 3) & 0xFFFFFFFCLL);
            }
        }
        *(std::uint64_t*)(*(std::uint64_t*)(processor + 260712) + 8LL * opaqueValue44) = 0;
        *(std::uint32_t*)(processor + 260700) = opaqueValue3;
        *(std::uint32_t*)(processor + 260696) = opaqueValue44;
    }
    sub_180024D30 (processor + 260696, opaqueValue37, opaqueValue45);
    sub_1809C8FE0 (opaqueValue50, opaqueValue49, opaqueValue51);
    opaqueValue53 = 10 * sub_1809C7260();
    opaqueValue55 = 1;
    if (opaqueValue53 > 1)
        opaqueValue55 = opaqueValue53;
    opaqueValue56 = opaqueValue55 + 1;
    opaqueValue57 = *(std::uint32_t*)(processor + 260996);
    opaqueValue58 = (unsigned int)opaqueValue57;
    if (opaqueValue57 < opaqueValue56)
        opaqueValue58 = (unsigned int)opaqueValue56;
    if (*(std::uint32_t*)(processor + 244) != 0 && *(std::uint64_t*)(opaqueValue59 = *(std::uint64_t*)(processor + 232)) != 0)
        opaqueValue60 = *(std::uint32_t*)(*(std::uint64_t*)opaqueValue59 + 140LL);
    else
        opaqueValue60 = 0;
    if ((std::uint32_t)opaqueValue58 != opaqueValue57 || opaqueValue60 != *(std::uint32_t*)(processor + 260992))
    {
        opaqueValue68 = (8LL * (unsigned int)(opaqueValue60 + 1) + 15) & 0xFFFFFFF0LL;
        opaqueValue61 = opaqueValue68 + 4 * opaqueValue60 * ((opaqueValue58 + 3) & 0xFFFFFFFCLL) + 32;
        opaqueValue62 = *(std::uint8_t*)(processor + 261280);
        if (*(std::uint64_t*)(processor + 261000) < opaqueValue61)
        {
            *(std::uint64_t*)(processor + 261000) = opaqueValue61;
            LOBYTE (opaqueValue54) = opaqueValue62 != 0;
            sub_180029FF0 (processor + 261016, opaqueValue61, opaqueValue54);
            *(std::uint64_t*)(processor + 261008) = *(std::uint64_t*)(processor + 261016);
        }
        else if (opaqueValue62 != 0)
        {
            memoryFillBytes (*(std::uint64_t*)(processor + 261016), 0, opaqueValue68 + 4 * opaqueValue60 * ((opaqueValue58 + 3) & 0xFFFFFFFCLL) + 32);
        }
        opaqueValue52 = *(std::uint64_t*)(processor + 261016) + opaqueValue68;
        if (opaqueValue60 > 0)
        {
            for (j = 0; j < opaqueValue60; ++j)
            {
                *(std::uint64_t*)(*(std::uint64_t*)(processor + 261008) + 8 * j) = opaqueValue52;
                opaqueValue52 += 4 * ((opaqueValue58 + 3) & 0xFFFFFFFCLL);
            }
        }
        *(std::uint64_t*)(*(std::uint64_t*)(processor + 261008) + 8LL * opaqueValue60) = 0;
        *(std::uint32_t*)(processor + 260996) = opaqueValue58;
        *(std::uint32_t*)(processor + 260992) = opaqueValue60;
    }
    sub_180024D30 (processor + 260992, opaqueValue52, opaqueValue54);
    *(std::uint32_t*)(processor + 261288) = 0;
    opaqueValue64 = *(std::uint32_t*)(processor + 261304);
    *(std::uint32_t*)(processor + 261292) = opaqueValue64;
    *(std::uint32_t*)(processor + 261296) = opaqueValue64;
    *(std::uint32_t*)(processor + 261300) = 0;
    *(std::uint8_t*)(processor + 261308) = 0;
    *(std::uint16_t*)(processor + 475904) = 256;
    *(std::uint8_t*)(processor + 475906) = 0;
    *(std::uint32_t*)(processor + 475908) = 1065353216;
    *(std::uint8_t*)(processor + 475537) = 1;
    *(std::uint32_t*)(processor + 475500) = *(std::uint32_t*)(processor + 109752);
    *(std::uint8_t*)(processor + 475504) = 1;
    if (_InterlockedCompareExchange ((volatile std::int32_t*)(*(std::uint64_t*)(processor + 360) + 24LL), 1, 0) == 0 && (std::uint8_t)sub_180192BE0 (*(std::uint64_t*)(processor + 360)) == 0)
    {
        _InterlockedExchange ((volatile std::int32_t*)(*(std::uint64_t*)(processor + 360) + 24LL), 0);
    }
    result = audioEngineRequestWorkerWakeup (processor + 260400);
    *(std::uint8_t*)(processor + 178944) = 1;
    return result;
}
