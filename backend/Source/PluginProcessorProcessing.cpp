#include <cstdint>

// ===== FadModel1AudioProcessor_processBlock_alt @ 0x18006b610 size=2321 =====
// vtable[12] second render entry; same gate at 0x18006ba8d
std::int64_t audioProcessorProcessBlockAlternatePath (std::int64_t processor, std::int64_t audioBuffer, std::int64_t midiBuffer)
{
    std::int64_t opaqueValue3; // r13
    unsigned int opaqueValue6; // et0
    volatile std::int32_t* temporaryPointer7; // r12
    std::int64_t opaqueValue8; // r8
    int opaqueValue9; // r8d
    std::int64_t opaqueValue10; // rbx
    char* temporaryPointer11; // rdx
    int opaqueValue12; // r9d
    std::int64_t opaqueValue13; // rcx
    std::int64_t opaqueValue14; // r8
    int opaqueValue15; // r8d
    std::int64_t opaqueValue16; // rbx
    char* temporaryPointer17; // rdx
    int opaqueValue18; // r9d
    std::int64_t opaqueValue19; // rcx
    bool conditionFlag20; // r14
    std::int64_t opaqueValue21; // rdx
    int opaqueValue22; // r9d
    int opaqueValue23; // edx
    unsigned int opaqueValue24; // r8d
    __m128i vectorValue25; // xmm0
    std::int64_t opaqueValue26; // rax
    char opaqueValue27; // al
    std::int64_t opaqueValue28; // r8
    std::int64_t opaqueValue29; // rax
    int opaqueValue30; // r8d
    std::int64_t opaqueValue31; // r13
    int opaqueValue32; // esi
    std::int64_t opaqueValue33; // rdx
    std::int64_t opaqueValue34; // rcx
    int opaqueValue35; // eax
    int opaqueValue36; // r12d
    std::uint8_t opaqueValue37; // r15
    int opaqueValue38; // eax
    std::int64_t opaqueValue39; // rbx
    char* temporaryPointer40; // rdx
    int opaqueValue41; // r8d
    std::int64_t opaqueValue42; // rcx
    int opaqueValue43; // esi
    std::int64_t opaqueValue44; // rbx
    std::int64_t opaqueValue45; // rbx
    std::int64_t opaqueValue46; // rcx
    std::int64_t opaqueValue47; // r8
    std::int64_t opaqueValue48; // r8
    std::int64_t opaqueValue49; // rdx
    int opaqueValue50; // r9d
    int opaqueValue51; // edx
    unsigned int opaqueValue52; // r8d
    __m128i vectorValue53; // xmm0
    std::int64_t opaqueValue54; // rax
    std::int64_t opaqueValue55; // rcx
    char opaqueValue56; // al
    std::int64_t result; // rax
    std::int64_t opaqueValue58; // [rsp+20h] [rbp-E0h]
    std::int64_t opaqueValue59; // [rsp+28h] [rbp-D8h]
    char opaqueValue60; // [rsp+58h] [rbp-A8h]
    int opaqueValue62; // [rsp+68h] [rbp-98h]
    int opaqueValue63; // [rsp+6Ch] [rbp-94h] BYREF
    std::int64_t opaqueValue64; // [rsp+70h] [rbp-90h]
    std::int64_t opaqueValue65; // [rsp+78h] [rbp-88h]
    std::int64_t opaqueValue66; // [rsp+80h] [rbp-80h]
    std::int64_t opaqueValue67; // [rsp+88h] [rbp-78h]
    std::int64_t opaqueValue68; // [rsp+90h] [rbp-70h]
    std::int64_t opaqueValue69; // [rsp+98h] [rbp-68h]
    char opaqueValue70; // [rsp+A0h] [rbp-60h]
    int opaqueValue71; // [rsp+B0h] [rbp-50h] BYREF
    int opaqueValue72; // [rsp+B4h] [rbp-4Ch]
    std::int64_t opaqueValue73; // [rsp+B8h] [rbp-48h]
    char* temporaryPointer74; // [rsp+C0h] [rbp-40h]
    LPVOID opaqueValue75; // [rsp+C8h] [rbp-38h] BYREF
    char opaqueValue76; // [rsp+D0h] [rbp-30h] BYREF
    char opaqueValue77; // [rsp+1D0h] [rbp+D0h]
    int opaqueValue78; // [rsp+1E0h] [rbp+E0h] BYREF
    int opaqueValue79; // [rsp+1E4h] [rbp+E4h]
    std::int64_t opaqueValue80; // [rsp+1E8h] [rbp+E8h]
    char* temporaryPointer81; // [rsp+1F0h] [rbp+F0h]
    LPVOID lpMem; // [rsp+1F8h] [rbp+F8h] BYREF
    char opaqueValue83; // [rsp+200h] [rbp+100h] BYREF
    char opaqueValue84; // [rsp+300h] [rbp+200h]
    std::uint32_t stackStorage85[2]; // [rsp+310h] [rbp+210h] BYREF
    std::int64_t opaqueValue86; // [rsp+318h] [rbp+218h]
    char* temporaryPointer87; // [rsp+320h] [rbp+220h]
    LPVOID opaqueValue88; // [rsp+328h] [rbp+228h] BYREF
    char opaqueValue89; // [rsp+330h] [rbp+230h] BYREF
    char opaqueValue90; // [rsp+430h] [rbp+330h]
    std::uint8_t stackStorage91[12292]; // [rsp+440h] [rbp+340h] BYREF
    int opaqueValue92; // [rsp+3444h] [rbp+3344h]
    char opaqueValue93; // [rsp+3448h] [rbp+3348h]

    opaqueValue3 = midiBuffer;
    opaqueValue64 = audioBuffer;
    sub_18006A160 (processor, midiBuffer);
    opaqueValue66 = opaqueValue3;
    opaqueValue6 = _mm_getcsr();
    opaqueValue65 = opaqueValue6;
    opaqueValue67 = opaqueValue6;
    _mm_setcsr (opaqueValue6 | 0x8040);
    temporaryPointer7 = (volatile std::int32_t*)(processor + 475532);
    opaqueValue69 = processor + 475532;
    opaqueValue60 = *(std::uint8_t*)(*((std::uint64_t*)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex) + 304LL);
    opaqueValue70 = opaqueValue60;
    *(std::uint8_t*)(*((std::uint64_t*)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex) + 304LL) = 1;
    _InterlockedExchangeAdd ((volatile std::int32_t*)(processor + 475532), 1u);
    *(std::uint16_t*)(processor + 109696) = 257;
    opaqueValue68 = processor;
    if (*(std::uint32_t*)(processor + 228) != 0)
        opaqueValue8 = **(std::uint64_t**)(processor + 216);
    else
        opaqueValue8 = 0;
    if (opaqueValue8 != 0)
        opaqueValue9 = *(std::uint32_t*)(opaqueValue8 + 140);
    else
        opaqueValue9 = 0;
    *(std::uint8_t*)(audioBuffer + 288) = 0;
    opaqueValue10 = *(std::uint64_t*)(audioBuffer + 16);
    stackStorage85[0] = opaqueValue9;
    stackStorage85[1] = *(std::uint32_t*)(audioBuffer + 4);
    opaqueValue86 = 0;
    temporaryPointer87 = nullptr;
    opaqueValue88 = nullptr;
    opaqueValue90 = 0;
    if (opaqueValue9 >= 32)
    {
        sub_18002C000 (&opaqueValue88, (unsigned int)(opaqueValue9 + 1));
        temporaryPointer11 = (char*)opaqueValue88;
        opaqueValue9 = stackStorage85[0];
    }
    else
    {
        temporaryPointer11 = &opaqueValue89;
    }
    temporaryPointer87 = temporaryPointer11;
    opaqueValue12 = 0;
    if (opaqueValue9 > 0)
    {
        opaqueValue13 = 0;
        do
        {
            *(std::uint64_t*)&temporaryPointer11[opaqueValue13] = *(std::uint64_t*)(opaqueValue10 + opaqueValue13);
            ++opaqueValue12;
            opaqueValue13 += 8;
            opaqueValue9 = stackStorage85[0];
            temporaryPointer11 = temporaryPointer87;
        } while (opaqueValue12 < stackStorage85[0]);
    }
    *(std::uint64_t*)&temporaryPointer11[8 * opaqueValue9] = 0;
    opaqueValue90 = 0;
    if (*(std::uint32_t*)(processor + 244) != 0)
        opaqueValue14 = **(std::uint64_t**)(processor + 232);
    else
        opaqueValue14 = 0;
    if (opaqueValue14 != 0)
        opaqueValue15 = *(std::uint32_t*)(opaqueValue14 + 140);
    else
        opaqueValue15 = 0;
    *(std::uint8_t*)(audioBuffer + 288) = 0;
    opaqueValue16 = *(std::uint64_t*)(audioBuffer + 16);
    opaqueValue71 = opaqueValue15;
    opaqueValue72 = *(std::uint32_t*)(audioBuffer + 4);
    opaqueValue73 = 0;
    temporaryPointer74 = nullptr;
    opaqueValue75 = nullptr;
    opaqueValue77 = 0;
    if (opaqueValue15 >= 32)
    {
        sub_18002C000 (&opaqueValue75, (unsigned int)(opaqueValue15 + 1));
        temporaryPointer17 = (char*)opaqueValue75;
        opaqueValue15 = opaqueValue71;
    }
    else
    {
        temporaryPointer17 = &opaqueValue76;
    }
    temporaryPointer74 = temporaryPointer17;
    opaqueValue18 = 0;
    if (opaqueValue15 > 0)
    {
        opaqueValue19 = 0;
        do
        {
            *(std::uint64_t*)&temporaryPointer17[opaqueValue19] = *(std::uint64_t*)(opaqueValue16 + opaqueValue19);
            ++opaqueValue18;
            opaqueValue19 += 8;
            opaqueValue15 = opaqueValue71;
            temporaryPointer17 = temporaryPointer74;
        } while (opaqueValue18 < opaqueValue71);
    }
    *(std::uint64_t*)&temporaryPointer17[8 * opaqueValue15] = 0;
    opaqueValue77 = 0;
    conditionFlag20 = *(std::uint8_t*)(processor + 65) == 0;
    *(std::uint8_t*)(processor + 167104) = conditionFlag20;
    if (*(std::uint32_t*)(processor + 8) == 6 && **(std::uint8_t**)(processor + 467264) != 0)
    {
        sub_1803DD330 (processor + 69152);
        _InterlockedExchangeAdd64 ((volatile std::int64_t*)(processor + 275656), 1u);
        opaqueValue21 = *(std::uint64_t*)(processor + 275656);
        if (opaqueValue21 != *(std::uint64_t*)(processor + 275672))
            *(std::uint64_t*)(processor + 275672) = opaqueValue21;
        opaqueValue22 = *(std::uint32_t*)(processor + 275648);
        opaqueValue23 = *(std::uint32_t*)(processor + 275652);
        opaqueValue24 = 0;
        while (opaqueValue23 != opaqueValue22)
        {
            if (opaqueValue24 >= 0x80)
                break;
            vectorValue25 = *(__m128i*)(processor + 273600 + 16LL * (opaqueValue23++ & 0x7F));
            *(std::uint32_t*)(processor + 275652) = opaqueValue23;
            opaqueValue26 = *(std::uint64_t*)(processor + 275656);
            if (opaqueValue26 != *(std::uint64_t*)(processor + 275672))
                *(std::uint64_t*)(processor + 275672) = opaqueValue26;
            if (_mm_srli_si128 (vectorValue25, 8).m128i_u64[0] == *(std::uint64_t*)(processor + 275672))
                ++opaqueValue24;
        }
        audioMidiDrainPendingNotes (processor);
        audioGateFadeOutOver64Samples (processor, (std::int64_t)&opaqueValue71);
    label79:
        sub_180069A80 (processor, &opaqueValue71, 0);
        goto label80;
    }
    if (*(std::uint8_t*)(processor + 467152) != 0)
        *(std::uint8_t*)(processor + 475536) = 1;
    *(std::uint8_t*)(processor + 475896) = sub_18005CA70 (processor + 475856, processor + 69152, *(std::uint64_t*)(processor + 16), *(unsigned int*)(audioBuffer + 4));
    sub_1800679C0 (processor);
    if (*(std::uint64_t*)(processor + 427528) != 0)
        sub_1803B3480 (*(std::uint64_t*)(processor + 427528));
    opaqueValue27 = *(std::uint8_t*)(processor + 1096);
    *(std::uint8_t*)(processor + 1096) = 0;
    if (opaqueValue27 != 0)
    {
        _InterlockedExchangeAdd64 ((volatile std::int64_t*)(processor + 275656), 1u);
        sub_1803DD330 (processor + 69152);
    }
    if (audioGateIsRenderAllowedOnAudioThread (processor) == 0)
    {
        _InterlockedExchangeAdd64 ((volatile std::int64_t*)(processor + 275656), 1u);
        opaqueValue49 = *(std::uint64_t*)(processor + 275656);
        if (opaqueValue49 != *(std::uint64_t*)(processor + 275672))
            *(std::uint64_t*)(processor + 275672) = opaqueValue49;
        opaqueValue50 = *(std::uint32_t*)(processor + 275648);
        opaqueValue51 = *(std::uint32_t*)(processor + 275652);
        opaqueValue52 = 0;
        while (opaqueValue51 != opaqueValue50)
        {
            if (opaqueValue52 >= 0x80)
                break;
            vectorValue53 = *(__m128i*)(processor + 273600 + 16LL * (opaqueValue51++ & 0x7F));
            *(std::uint32_t*)(processor + 275652) = opaqueValue51;
            opaqueValue54 = *(std::uint64_t*)(processor + 275656);
            if (opaqueValue54 != *(std::uint64_t*)(processor + 275672))
                *(std::uint64_t*)(processor + 275672) = opaqueValue54;
            if (_mm_srli_si128 (vectorValue53, 8).m128i_u64[0] == *(std::uint64_t*)(processor + 275672))
                ++opaqueValue52;
        }
        audioMidiDrainPendingNotes (processor);
        sub_180069320 (processor, stackStorage85, &opaqueValue71, (unsigned int)opaqueValue72);
        if (opaqueValue72 > 0)
        {
            opaqueValue62 = 0;
            opaqueValue63 = 0;
            opaqueValue55 = 0;
            do
                opaqueValue56 = *((std::uint8_t*)&opaqueValue62 + opaqueValue55++);
            while (opaqueValue56 == *((std::uint8_t*)&opaqueValue63 + opaqueValue55 - 1) && opaqueValue55 != 4);
            *(std::uint64_t*)(processor + 475824) = 0;
            *(std::uint32_t*)(processor + 475832) = 0;
        }
        goto label79;
    }
    sub_18039E560 (processor + 453712, stackStorage91, *(unsigned int*)(audioBuffer + 4));
    opaqueValue29 = sub_18005CC50 (stackStorage91, processor + 261312, opaqueValue28, *(unsigned int*)(audioBuffer + 4));
    opaqueValue30 = *(std::uint32_t*)(audioBuffer + 4);
    if (opaqueValue93 != 0)
    {
        *(std::uint32_t*)(processor + 475520) = opaqueValue92;
        *(std::uint32_t*)(processor + 475524) = opaqueValue29;
        *(std::uint32_t*)(processor + 475528) = opaqueValue30;
        if (_InterlockedExchangeAdd ((volatile std::int32_t*)(processor + 475516), 1u) == 0)
            *(std::uint8_t*)(processor + 475536) = 1;
    }
    opaqueValue31 = sub_180067B50 (processor, opaqueValue29, *(unsigned int*)(audioBuffer + 4));
    opaqueValue32 = opaqueValue72;
    opaqueValue35 = sub_18005C090 (opaqueValue34, opaqueValue33, (unsigned int)opaqueValue72);
    opaqueValue36 = opaqueValue35;
    if (*(std::uint8_t*)(processor + 475904) != 0 && opaqueValue35 > 0 && opaqueValue72 <= *(std::uint32_t*)(processor + 260700) && *(int*)(processor + 260696) > 0)
    {
        opaqueValue37 = 1;
        opaqueValue38 = *(std::uint32_t*)(processor + 260696);
        *(std::uint8_t*)(processor + 260984) = 0;
        opaqueValue39 = *(std::uint64_t*)(processor + 260712);
        opaqueValue78 = opaqueValue38;
        opaqueValue79 = opaqueValue32;
        opaqueValue80 = 0;
        temporaryPointer81 = nullptr;
        lpMem = nullptr;
        opaqueValue84 = 0;
        if (opaqueValue38 >= 32)
        {
            sub_18002C000 (&lpMem, (unsigned int)(opaqueValue38 + 1));
            temporaryPointer40 = (char*)lpMem;
            opaqueValue38 = opaqueValue78;
        }
        else
        {
            temporaryPointer40 = &opaqueValue83;
        }
        temporaryPointer81 = temporaryPointer40;
        opaqueValue41 = 0;
        if (opaqueValue38 > 0)
        {
            opaqueValue42 = 0;
            do
            {
                *(std::uint64_t*)&temporaryPointer40[opaqueValue42] = *(std::uint64_t*)(opaqueValue39 + opaqueValue42);
                ++opaqueValue41;
                opaqueValue42 += 8;
                opaqueValue38 = opaqueValue78;
                temporaryPointer40 = temporaryPointer81;
            } while (opaqueValue41 < opaqueValue78);
        }
        *(std::uint64_t*)&temporaryPointer40[8 * opaqueValue38] = 0;
        opaqueValue84 = 0;
        opaqueValue43 = 0;
        if (opaqueValue78 > 0)
        {
            opaqueValue44 = 0;
            do
            {
                memoryFillBytes (*(std::uint64_t*)&temporaryPointer81[opaqueValue44], 0, 4LL * opaqueValue79);
                ++opaqueValue43;
                opaqueValue44 += 8;
            } while (opaqueValue43 < opaqueValue78);
        }
        opaqueValue84 = 1;
        opaqueValue59 = opaqueValue31;
        opaqueValue3 = midiBuffer;
        sub_1803D37E0 (processor + 69152, (unsigned int)&opaqueValue78, midiBuffer, opaqueValue36, processor + 323048, opaqueValue59, 0);
        memoryFreeBuffer (lpMem);
        opaqueValue45 = opaqueValue64;
    }
    else
    {
        opaqueValue37 = 0;
        opaqueValue58 = opaqueValue31;
        opaqueValue45 = opaqueValue64;
        opaqueValue3 = midiBuffer;
        sub_1803D5F10 (processor + 69152, midiBuffer, *(std::uint32_t*)(opaqueValue64 + 4), processor + 323048, opaqueValue58);
    }
    if (conditionFlag20)
        sub_180069E00 (processor, opaqueValue45);
    sub_180069320 (processor, stackStorage85, &opaqueValue71, (unsigned int)opaqueValue72);
    sub_1803D6E30 (opaqueValue46, &opaqueValue71, opaqueValue47);
    LOBYTE (opaqueValue48) = 1;
    sub_180069800 (processor, &opaqueValue71, opaqueValue48, opaqueValue37);
    sub_180069A80 (processor, &opaqueValue71, 0);
    sub_1809A12FC (stackStorage91, 48, 256, sub_18005CDA0);
    temporaryPointer7 = (volatile std::int32_t*)(processor + 475532);
label80:
    memoryFreeBuffer (opaqueValue75);
    memoryFreeBuffer (opaqueValue88);
    if (*(std::uint64_t*)(processor + 427528) != 0)
        sub_1803B35B0 (*(std::uint64_t*)(processor + 427528));
    *(std::uint8_t*)(processor + 109696) = 0;
    _InterlockedExchangeAdd (temporaryPointer7, 0xFFFFFFFF);
    *(std::uint8_t*)(*((std::uint64_t*)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex) + 304LL) = opaqueValue60;
    result = (unsigned int)opaqueValue65;
    _mm_setcsr (opaqueValue65);
    *(std::uint32_t*)(opaqueValue3 + 12) = 0;
    return result;
}

// ===== FadModel1AudioProcessor_processBlock_impl @ 0x1800685c0 size=2549 =====
// 0x180068ba0: if RenderGate_AudioThread_Check()==0 -> drain MIDI ring (+273600), skip voice/FX/master chain, MuteFade_OutputToSilence64
std::int64_t audioProcessorProcessBlock (std::int64_t processor, std::int64_t audioBuffer, std::uint64_t* midiBuffer)
{
    int midiEventCount; // r8d
    std::uint64_t midiBufferEnd; // rdx
    std::uint64_t midiEventCursor; // rcx
    int opaqueValue9; // r12d
    std::int64_t opaqueValue10; // r8
    int opaqueValue11; // r8d
    std::int64_t opaqueValue12; // rbx
    char* temporaryPointer13; // rdx
    int opaqueValue14; // r9d
    std::int64_t opaqueValue15; // rcx
    std::int64_t opaqueValue16; // r8
    int opaqueValue17; // r8d
    std::int64_t opaqueValue18; // rbx
    char* temporaryPointer19; // rdx
    int opaqueValue20; // r9d
    std::int64_t opaqueValue21; // rcx
    bool conditionFlag22; // r15
    char opaqueValue23; // al
    unsigned int opaqueValue24; // ebx
    char opaqueValue25; // r14
    int opaqueValue26; // eax
    std::int64_t opaqueValue27; // rsi
    std::uint8_t* temporaryPointer28; // rdx
    int opaqueValue29; // r8d
    std::int64_t opaqueValue30; // rcx
    std::int64_t opaqueValue31; // rdx
    int opaqueValue32; // r9d
    int opaqueValue33; // edx
    unsigned int opaqueValue34; // r8d
    __m128i vectorValue35; // xmm0
    std::int64_t opaqueValue36; // rax
    std::int64_t opaqueValue37; // r8
    std::int64_t opaqueValue38; // rax
    int opaqueValue39; // r8d
    std::int64_t opaqueValue40; // r15
    std::uint8_t opaqueValue41; // si
    std::int64_t opaqueValue42; // rcx
    int opaqueValue43; // eax
    std::int64_t opaqueValue44; // rbx
    std::uint8_t* temporaryPointer45; // rdx
    std::int64_t opaqueValue46; // r8
    std::uint64_t* temporaryPointer47; // r15
    std::int64_t opaqueValue48; // rdx
    std::int64_t opaqueValue49; // r8
    std::int64_t opaqueValue50; // r9
    int opaqueValue51; // ebx
    int opaqueValue52; // r14d
    std::int64_t opaqueValue53; // rcx
    char* temporaryPointer54; // rsi
    int opaqueValue55; // xmm6_4
    std::int64_t opaqueValue56; // rdx
    std::int64_t opaqueValue57; // rcx
    std::int64_t opaqueValue58; // r8
    std::int64_t opaqueValue59; // r9
    int opaqueValue60; // xmm6_4
    std::int64_t opaqueValue61; // rdx
    int opaqueValue62; // r9d
    int opaqueValue63; // edx
    unsigned int opaqueValue64; // r8d
    __m128i vectorValue65; // xmm0
    std::int64_t opaqueValue66; // rax
    std::int64_t opaqueValue68; // [rsp+28h] [rbp-D8h]
    char opaqueValue69; // [rsp+58h] [rbp-A8h]
    unsigned int savedSseControlRegister; // [rsp+60h] [rbp-A0h]
    int opaqueValue72; // [rsp+80h] [rbp-80h] BYREF
    unsigned int opaqueValue73; // [rsp+84h] [rbp-7Ch]
    std::int64_t opaqueValue74; // [rsp+88h] [rbp-78h]
    std::uint8_t* temporaryPointer75; // [rsp+90h] [rbp-70h]
    LPVOID lpMem; // [rsp+98h] [rbp-68h] BYREF
    std::uint8_t stackStorage77[256]; // [rsp+A0h] [rbp-60h] BYREF
    char opaqueValue78; // [rsp+1A0h] [rbp+A0h]
    std::uint64_t* midiBufferAlias; // [rsp+1B0h] [rbp+B0h]
    std::int64_t opaqueValue80; // [rsp+1B8h] [rbp+B8h]
    std::int64_t opaqueValue81; // [rsp+1C0h] [rbp+C0h]
    std::int64_t opaqueValue82; // [rsp+1C8h] [rbp+C8h]
    char opaqueValue83; // [rsp+1D0h] [rbp+D0h]
    int opaqueValue84; // [rsp+1E0h] [rbp+E0h] BYREF
    int opaqueValue85; // [rsp+1E4h] [rbp+E4h]
    std::int64_t opaqueValue86; // [rsp+1E8h] [rbp+E8h]
    char* temporaryPointer87; // [rsp+1F0h] [rbp+F0h]
    LPVOID opaqueValue88; // [rsp+1F8h] [rbp+F8h] BYREF
    char opaqueValue89; // [rsp+200h] [rbp+100h] BYREF
    char opaqueValue90; // [rsp+300h] [rbp+200h]
    std::uint32_t stackStorage91[2]; // [rsp+310h] [rbp+210h] BYREF
    std::int64_t opaqueValue92; // [rsp+318h] [rbp+218h]
    char* temporaryPointer93; // [rsp+320h] [rbp+220h]
    LPVOID opaqueValue94; // [rsp+328h] [rbp+228h] BYREF
    char opaqueValue95; // [rsp+330h] [rbp+230h] BYREF
    char opaqueValue96; // [rsp+430h] [rbp+330h]
    std::uint8_t stackStorage97[12292]; // [rsp+440h] [rbp+340h] BYREF
    int opaqueValue98; // [rsp+3444h] [rbp+3344h]
    char opaqueValue99; // [rsp+3448h] [rbp+3348h]

    midiEventCount = 0;
    midiBufferEnd = *midiBuffer + *((int*)midiBuffer + 3);
    for (midiEventCursor = *midiBuffer; midiEventCursor < midiBufferEnd; ++midiEventCount)
        midiEventCursor += (std::uint16_t)(*(std::uint16_t*)(midiEventCursor + 4) + 6);
    _InterlockedExchangeAdd64 ((volatile std::int64_t*)(processor + 427496), midiEventCount);
    sub_18006A160 (processor, midiBuffer);
    midiBufferAlias = midiBuffer;
    savedSseControlRegister = _mm_getcsr();
    opaqueValue80 = savedSseControlRegister;
    _mm_setcsr (savedSseControlRegister | 0x8040);
    opaqueValue82 = processor + 475532;
    opaqueValue69 = *(std::uint8_t*)(*((std::uint64_t*)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex) + 304LL);
    opaqueValue83 = opaqueValue69;
    *(std::uint8_t*)(*((std::uint64_t*)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex) + 304LL) = 1;
    opaqueValue9 = 1;
    _InterlockedExchangeAdd ((volatile std::int32_t*)(processor + 475532), 1u);
    *(std::uint16_t*)(processor + 109696) = 257;
    opaqueValue81 = processor;
    if (*(std::uint32_t*)(processor + 228) != 0)
        opaqueValue10 = **(std::uint64_t**)(processor + 216);
    else
        opaqueValue10 = 0;
    if (opaqueValue10 != 0)
        opaqueValue11 = *(std::uint32_t*)(opaqueValue10 + 140);
    else
        opaqueValue11 = 0;
    *(std::uint8_t*)(audioBuffer + 288) = 0;
    opaqueValue12 = *(std::uint64_t*)(audioBuffer + 16);
    stackStorage91[0] = opaqueValue11;
    stackStorage91[1] = *(std::uint32_t*)(audioBuffer + 4);
    opaqueValue92 = 0;
    temporaryPointer93 = nullptr;
    opaqueValue94 = nullptr;
    opaqueValue96 = 0;
    if (opaqueValue11 >= 32)
    {
        sub_18002C000 (&opaqueValue94, (unsigned int)(opaqueValue11 + 1));
        temporaryPointer13 = (char*)opaqueValue94;
        opaqueValue11 = stackStorage91[0];
    }
    else
    {
        temporaryPointer13 = &opaqueValue95;
    }
    temporaryPointer93 = temporaryPointer13;
    opaqueValue14 = 0;
    if (opaqueValue11 > 0)
    {
        opaqueValue15 = 0;
        do
        {
            *(std::uint64_t*)&temporaryPointer13[opaqueValue15] = *(std::uint64_t*)(opaqueValue15 + opaqueValue12);
            ++opaqueValue14;
            opaqueValue15 += 8;
            opaqueValue11 = stackStorage91[0];
            temporaryPointer13 = temporaryPointer93;
        } while (opaqueValue14 < stackStorage91[0]);
    }
    *(std::uint64_t*)&temporaryPointer13[8 * opaqueValue11] = 0;
    opaqueValue96 = 0;
    if (*(std::uint32_t*)(processor + 244) != 0)
        opaqueValue16 = **(std::uint64_t**)(processor + 232);
    else
        opaqueValue16 = 0;
    if (opaqueValue16 != 0)
        opaqueValue17 = *(std::uint32_t*)(opaqueValue16 + 140);
    else
        opaqueValue17 = 0;
    *(std::uint8_t*)(audioBuffer + 288) = 0;
    opaqueValue18 = *(std::uint64_t*)(audioBuffer + 16);
    opaqueValue84 = opaqueValue17;
    opaqueValue85 = *(std::uint32_t*)(audioBuffer + 4);
    opaqueValue86 = 0;
    temporaryPointer87 = nullptr;
    opaqueValue88 = nullptr;
    opaqueValue90 = 0;
    if (opaqueValue17 >= 32)
    {
        sub_18002C000 (&opaqueValue88, (unsigned int)(opaqueValue17 + 1));
        temporaryPointer19 = (char*)opaqueValue88;
        opaqueValue17 = opaqueValue84;
    }
    else
    {
        temporaryPointer19 = &opaqueValue89;
    }
    temporaryPointer87 = temporaryPointer19;
    opaqueValue20 = 0;
    if (opaqueValue17 > 0)
    {
        opaqueValue21 = 0;
        do
        {
            *(std::uint64_t*)&temporaryPointer19[opaqueValue21] = *(std::uint64_t*)(opaqueValue21 + opaqueValue18);
            ++opaqueValue20;
            opaqueValue21 += 8;
            opaqueValue17 = opaqueValue84;
            temporaryPointer19 = temporaryPointer87;
        } while (opaqueValue20 < opaqueValue84);
    }
    *(std::uint64_t*)&temporaryPointer19[8 * opaqueValue17] = 0;
    opaqueValue90 = 0;
    conditionFlag22 = *(std::uint8_t*)(processor + 65) == 0;
    *(std::uint8_t*)(processor + 167104) = conditionFlag22;
    if (*(std::uint8_t*)(processor + 467152) != 0)
        *(std::uint8_t*)(processor + 475536) = 1;
    *(std::uint8_t*)(processor + 475896) = sub_18005CA70 (processor + 475856, processor + 69152, *(std::uint64_t*)(processor + 16), *(unsigned int*)(audioBuffer + 4));
    sub_1800679C0 (processor);
    if (*(std::uint64_t*)(processor + 427528) != 0)
        sub_1803B3480 (*(std::uint64_t*)(processor + 427528));
    opaqueValue23 = *(std::uint8_t*)(processor + 1096);
    *(std::uint8_t*)(processor + 1096) = 0;
    if (opaqueValue23 != 0)
    {
        _InterlockedExchangeAdd64 ((volatile std::int64_t*)(processor + 275656), 1u);
        sub_1803DD330 (processor + 69152);
    }
    opaqueValue24 = opaqueValue85;
    if (opaqueValue85 <= 0 || opaqueValue85 > *(std::uint32_t*)(processor + 260700) || *(int*)(processor + 260696) <= 0)
    {
        opaqueValue25 = 0;
        sub_180069320 (processor, stackStorage91, 0, (unsigned int)opaqueValue85);
    }
    else
    {
        opaqueValue25 = 1;
        opaqueValue26 = *(std::uint32_t*)(processor + 260696);
        *(std::uint8_t*)(processor + 260984) = 0;
        opaqueValue27 = *(std::uint64_t*)(processor + 260712);
        opaqueValue72 = opaqueValue26;
        opaqueValue73 = opaqueValue24;
        opaqueValue74 = 0;
        temporaryPointer75 = nullptr;
        lpMem = nullptr;
        opaqueValue78 = 0;
        if (opaqueValue26 >= 32)
        {
            sub_18002C000 (&lpMem, (unsigned int)(opaqueValue26 + 1));
            temporaryPointer28 = lpMem;
            opaqueValue26 = opaqueValue72;
        }
        else
        {
            temporaryPointer28 = stackStorage77;
        }
        temporaryPointer75 = temporaryPointer28;
        opaqueValue29 = 0;
        if (opaqueValue26 > 0)
        {
            opaqueValue30 = 0;
            do
            {
                *(std::uint64_t*)&temporaryPointer28[opaqueValue30] = *(std::uint64_t*)(opaqueValue30 + opaqueValue27);
                ++opaqueValue29;
                opaqueValue30 += 8;
                opaqueValue26 = opaqueValue72;
                temporaryPointer28 = temporaryPointer75;
            } while (opaqueValue29 < opaqueValue72);
        }
        *(std::uint64_t*)&temporaryPointer28[8 * opaqueValue26] = 0;
        opaqueValue78 = 0;
        sub_180069320 (processor, stackStorage91, &opaqueValue72, opaqueValue24);
        memoryFreeBuffer (lpMem);
    }
    if (*(std::uint32_t*)(processor + 8) == 6 && **(std::uint8_t**)(processor + 467264) != 0)
    {
        _InterlockedExchangeAdd64 ((volatile std::int64_t*)(processor + 275656), 1u);
        opaqueValue31 = *(std::uint64_t*)(processor + 275656);
        if (opaqueValue31 != *(std::uint64_t*)(processor + 275672))
            *(std::uint64_t*)(processor + 275672) = opaqueValue31;
        opaqueValue32 = *(std::uint32_t*)(processor + 275648);
        opaqueValue33 = *(std::uint32_t*)(processor + 275652);
        opaqueValue34 = 0;
        while (opaqueValue33 != opaqueValue32)
        {
            if (opaqueValue34 >= 0x80)
                break;
            vectorValue35 = *(__m128i*)(processor + 273600 + 16LL * (opaqueValue33++ & 0x7F));
            *(std::uint32_t*)(processor + 275652) = opaqueValue33;
            opaqueValue36 = *(std::uint64_t*)(processor + 275656);
            if (opaqueValue36 != *(std::uint64_t*)(processor + 275672))
                *(std::uint64_t*)(processor + 275672) = opaqueValue36;
            if (_mm_srli_si128 (vectorValue35, 8).m128i_u64[0] == *(std::uint64_t*)(processor + 275672))
                ++opaqueValue34;
        }
    label99:
        audioMidiDrainPendingNotes (processor);
        audioGateFadeOutOver64Samples (processor, (std::int64_t)&opaqueValue84);
        sub_180069A80 (processor, &opaqueValue84, 0);
        temporaryPointer47 = midiBuffer;
        goto label100;
    }
    if (audioGateIsRenderAllowedOnAudioThread (processor) == 0)
    {
        _InterlockedExchangeAdd64 ((volatile std::int64_t*)(processor + 275656), 1u);
        opaqueValue61 = *(std::uint64_t*)(processor + 275656);
        if (opaqueValue61 != *(std::uint64_t*)(processor + 275672))
            *(std::uint64_t*)(processor + 275672) = opaqueValue61;
        opaqueValue62 = *(std::uint32_t*)(processor + 275648);
        opaqueValue63 = *(std::uint32_t*)(processor + 275652);
        opaqueValue64 = 0;
        while (opaqueValue63 != opaqueValue62)
        {
            if (opaqueValue64 >= 0x80)
                break;
            vectorValue65 = *(__m128i*)(processor + 273600 + 16LL * (opaqueValue63++ & 0x7F));
            *(std::uint32_t*)(processor + 275652) = opaqueValue63;
            opaqueValue66 = *(std::uint64_t*)(processor + 275656);
            if (opaqueValue66 != *(std::uint64_t*)(processor + 275672))
                *(std::uint64_t*)(processor + 275672) = opaqueValue66;
            if (_mm_srli_si128 (vectorValue65, 8).m128i_u64[0] == *(std::uint64_t*)(processor + 275672))
                ++opaqueValue64;
        }
        goto label99;
    }
    if (conditionFlag22)
        sub_180069E00 (processor, audioBuffer);
    sub_18039E560 (processor + 453712, stackStorage97, *(unsigned int*)(audioBuffer + 4));
    opaqueValue38 = sub_18005CC50 (stackStorage97, processor + 261312, opaqueValue37, *(unsigned int*)(audioBuffer + 4));
    opaqueValue39 = *(std::uint32_t*)(audioBuffer + 4);
    if (opaqueValue99 != 0)
    {
        *(std::uint32_t*)(processor + 475520) = opaqueValue98;
        *(std::uint32_t*)(processor + 475524) = opaqueValue38;
        *(std::uint32_t*)(processor + 475528) = opaqueValue39;
        if (_InterlockedExchangeAdd ((volatile std::int32_t*)(processor + 475516), 1u) == 0)
            *(std::uint8_t*)(processor + 475536) = 1;
    }
    opaqueValue40 = sub_180067B50 (processor, opaqueValue38, *(unsigned int*)(audioBuffer + 4));
    if (*(std::uint8_t*)(processor + 475904) != 0 && *(float*)(processor + 475908) > 0.0 && opaqueValue25 != 0)
    {
        opaqueValue41 = 1;
        opaqueValue42 = (unsigned int)opaqueValue85;
        opaqueValue43 = *(std::uint32_t*)(processor + 260696);
        *(std::uint8_t*)(processor + 260984) = 0;
        opaqueValue44 = *(std::uint64_t*)(processor + 260712);
        opaqueValue72 = opaqueValue43;
        opaqueValue73 = opaqueValue42;
        opaqueValue74 = 0;
        temporaryPointer75 = nullptr;
        lpMem = nullptr;
        opaqueValue78 = 0;
        if (opaqueValue43 >= 32)
        {
            sub_18002C000 (&lpMem, (unsigned int)(opaqueValue43 + 1));
            temporaryPointer45 = lpMem;
            opaqueValue43 = opaqueValue72;
        }
        else
        {
            temporaryPointer45 = stackStorage77;
        }
        temporaryPointer75 = temporaryPointer45;
        opaqueValue46 = 0;
        if (opaqueValue43 > 0)
        {
            opaqueValue42 = 0;
            do
            {
                *(std::uint64_t*)&temporaryPointer45[opaqueValue42] = *(std::uint64_t*)(opaqueValue44 + opaqueValue42);
                opaqueValue46 = (unsigned int)(opaqueValue46 + 1);
                opaqueValue42 += 8;
                opaqueValue43 = opaqueValue72;
                temporaryPointer45 = temporaryPointer75;
            } while ((int)opaqueValue46 < opaqueValue72);
        }
        *(std::uint64_t*)&temporaryPointer45[8 * opaqueValue43] = 0;
        opaqueValue78 = 0;
        sub_1803D6E30 (opaqueValue42, &opaqueValue72, opaqueValue46);
        memoryFreeBuffer (lpMem);
    }
    else
    {
        opaqueValue41 = 0;
    }
    opaqueValue68 = opaqueValue40;
    temporaryPointer47 = midiBuffer;
    sub_1803D37E0 (processor + 69152, (unsigned int)&opaqueValue84, (std::uint32_t)midiBuffer, opaqueValue85, processor + 323048, opaqueValue68, 0);
    sub_180069800 (processor, &opaqueValue84, 0, opaqueValue41);
    opaqueValue51 = opaqueValue85;
    if (opaqueValue85 > 0)
    {
        opaqueValue52 = opaqueValue84;
        opaqueValue53 = 0;
        if (opaqueValue84 - 1 < 0)
            opaqueValue53 = (unsigned int)(opaqueValue84 - 1);
        temporaryPointer54 = temporaryPointer87;
        if ((int)opaqueValue53 < 0)
        {
            opaqueValue55 = 0;
        }
        else
        {
            opaqueValue48 = (int)opaqueValue53;
            opaqueValue53 = opaqueValue85 - 1;
            opaqueValue55 = *(std::uint32_t*)(*(std::uint64_t*)&temporaryPointer87[8 * opaqueValue48] + 4 * opaqueValue53);
        }
        if ((std::int16_t)sub_1809DFD20 (opaqueValue53, opaqueValue48, opaqueValue49, opaqueValue50) > 0)
            opaqueValue55 = 0;
        *(std::uint32_t*)(processor + 475824) = opaqueValue55;
        if (opaqueValue52 - 1 < 1)
            opaqueValue9 = opaqueValue52 - 1;
        if (opaqueValue9 < 0)
        {
            opaqueValue60 = 0;
        }
        else
        {
            opaqueValue56 = opaqueValue9;
            opaqueValue57 = opaqueValue51 - 1;
            opaqueValue60 = *(std::uint32_t*)(*(std::uint64_t*)&temporaryPointer54[8 * opaqueValue9] + 4 * opaqueValue57);
        }
        if ((std::int16_t)sub_1809DFD20 (opaqueValue57, opaqueValue56, opaqueValue58, opaqueValue59) > 0)
            opaqueValue60 = 0;
        *(std::uint32_t*)(processor + 475828) = opaqueValue60;
        *(std::uint32_t*)(processor + 475832) = 64;
    }
    sub_180069A80 (processor, &opaqueValue84, 1);
    sub_1809A12FC (stackStorage97, 48, 256, sub_18005CDA0);
label100:
    memoryFreeBuffer (opaqueValue88);
    memoryFreeBuffer (opaqueValue94);
    if (*(std::uint64_t*)(processor + 427528) != 0)
        sub_1803B35B0 (*(std::uint64_t*)(processor + 427528));
    *(std::uint8_t*)(processor + 109696) = 0;
    _InterlockedExchangeAdd ((volatile std::int32_t*)(processor + 475532), 0xFFFFFFFF);
    *(std::uint8_t*)(*((std::uint64_t*)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex) + 304LL) = opaqueValue69;
    _mm_setcsr (savedSseControlRegister);
    *((std::uint32_t*)temporaryPointer47 + 3) = 0;
    return savedSseControlRegister;
}
