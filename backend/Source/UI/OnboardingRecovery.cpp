#include <cstdint>

// ===== Onboarding_RenderRecoverySurface @ 0x1806c9fe0 size=1756 =====
std::int64_t onboardingPanelPaintRecoverySurface (std::int64_t panel, std::int64_t graphics)
{
    std::int64_t result; // rax
    int opaqueValue5; // edi
    int opaqueValue6; // ebx
    int opaqueValue7; // r15d
    int opaqueValue8; // r12d
    std::int64_t* temporaryPointer9; // rcx
    std::int64_t opaqueValue10; // rax
    const char* temporaryPointer11; // rax
    int opaqueValue12; // esi
    int opaqueValue13; // edi
    int opaqueValue14; // eax
    int opaqueValue15; // eax
    int opaqueValue16; // esi
    int opaqueValue17; // edi
    float scalarValue18; // xmm6_4
    void* stringStorageToRelease19; // rcx
    int opaqueValue20; // edi
    int opaqueValue21; // esi
    int opaqueValue22; // eax
    int opaqueValue23; // esi
    int opaqueValue24; // edi
    const char* temporaryPointer25; // rdx
    int opaqueValue26; // eax
    void* stringStorageToRelease27; // rcx
    int opaqueValue28; // esi
    int opaqueValue29; // edi
    volatile std::int32_t* stringStorageToRelease30; // rcx
    std::int64_t opaqueValue31; // rax
    std::int64_t opaqueValue32; // rax
    __int128 opaqueValue33; // xmm6
    std::int64_t opaqueValue34; // rsi
    std::int64_t opaqueValue35; // rcx
    void (*callbackFunction36) (std::int64_t, const char**); // r8
    int opaqueValue37; // edi
    int opaqueValue38; // esi
    int opaqueValue39; // ebx
    float scalarValue40; // xmm0_4
    const char* temporaryPointer41; // rdx
    volatile std::int32_t* stringStorageToRelease42; // rcx
    std::int64_t (***callbackFunction43) (std::uint64_t, std::int64_t); // rcx
    std::int64_t (***callbackFunction44) (std::uint64_t, std::int64_t); // rcx
    __int128 opaqueValue45; // [rsp+30h] [rbp-39h] BYREF
    const char* temporaryPointer46; // [rsp+40h] [rbp-29h] BYREF
    float scalarValue47; // [rsp+48h] [rbp-21h]
    float scalarValue48; // [rsp+4Ch] [rbp-1Dh]
    std::int64_t opaqueValue49; // [rsp+50h] [rbp-19h] BYREF
    int opaqueValue50; // [rsp+58h] [rbp-11h]
    int opaqueValue51; // [rsp+5Ch] [rbp-Dh]
    int opaqueValue52; // [rsp+60h] [rbp-9h]
    std::int64_t opaqueValue53; // [rsp+68h] [rbp-1h] BYREF
    std::int64_t messageString54; // [rsp+70h] [rbp+7h] BYREF
    float scalarValue55; // [rsp+78h] [rbp+Fh]
    float scalarValue56; // [rsp+7Ch] [rbp+13h]
    std::int64_t opaqueValue57; // [rsp+D0h] [rbp+67h] BYREF
    std::uint64_t opaqueValue58; // [rsp+E0h] [rbp+77h]
    int opaqueValue59; // [rsp+E8h] [rbp+7Fh]

    result = sub_1800CA690 (graphics, (unsigned int)dword_1814A4800);
    if (*(std::uint8_t*)(panel + 843) != 0)
    {
        opaqueValue5 = *(std::uint32_t*)(panel + 64);
        opaqueValue50 = opaqueValue5;
        opaqueValue6 = 34;
        opaqueValue7 = 34;
        if (*(int*)(panel + 68) < 34)
            opaqueValue7 = *(std::uint32_t*)(panel + 68);
        opaqueValue59 = opaqueValue7;
        sub_1800C9730 (graphics, (unsigned int)dword_1814A471C);
        opaqueValue8 = 0;
        temporaryPointer46 = nullptr;
        scalarValue47 = *(float*)&opaqueValue5;
        scalarValue48 = *(float*)&opaqueValue7;
        (*(void (**) (std::uint64_t, const char**, std::uint64_t)) (**(std::uint64_t**)(graphics + 8) + 184LL)) (
            *(std::uint64_t*)(graphics + 8),
            &temporaryPointer46,
            0);
        sub_1800C9730 (graphics, (unsigned int)dword_1814A4720);
        temporaryPointer9 = *(std::int64_t**)(graphics + 8);
        opaqueValue10 = *temporaryPointer9;
        LODWORD (messageString54) = 0;
        *((float*)&messageString54 + 1) = (float)opaqueValue7;
        scalarValue55 = (float)opaqueValue5;
        scalarValue56 = (float)opaqueValue7;
        (*(void (**) (std::int64_t*, std::int64_t*)) (opaqueValue10 + 232)) (temporaryPointer9, &messageString54);
        sub_1806C6870 (&opaqueValue49, panel + 912);
        temporaryPointer11 = "FALLBACK";
        if (opaqueValue5 < 320)
            temporaryPointer11 = "LOCAL";
        temporaryPointer46 = temporaryPointer11;
        sub_1800BBDD0 (&opaqueValue49, "FAD OS");
        opaqueValue12 = (int)sub_1809E0DD0() + 24;
        if (opaqueValue5 < opaqueValue12)
            opaqueValue12 = opaqueValue5;
        LODWORD (opaqueValue57) = opaqueValue12;
        opaqueValue13 = opaqueValue5 - opaqueValue12;
        sub_1800BBDD0 (&opaqueValue49, temporaryPointer46);
        opaqueValue14 = (int)sub_1809E0DD0() + 24;
        if (opaqueValue13 < opaqueValue14)
            opaqueValue14 = opaqueValue13;
        opaqueValue51 = opaqueValue14;
        LODWORD (opaqueValue58) = opaqueValue13 - opaqueValue14;
        opaqueValue52 = opaqueValue12 + opaqueValue13 - opaqueValue14;
        if (*(std::uint8_t*)(graphics + 16) != 0)
        {
            *(std::uint8_t*)(graphics + 16) = 0;
            (*(void (**) (std::uint64_t)) (**(std::uint64_t**)(graphics + 8) + 104LL)) (*(std::uint64_t*)(graphics + 8));
        }
        (*(void (**) (std::uint64_t, std::int64_t*)) (**(std::uint64_t**)(graphics + 8) + 248LL)) (*(std::uint64_t*)(graphics + 8), &opaqueValue49);
        sub_1800C9730 (graphics, (unsigned int)dword_1814A4720);
        opaqueValue15 = opaqueValue12 - 24;
        opaqueValue16 = 0;
        if (opaqueValue15 > 0)
            opaqueValue16 = opaqueValue15;
        opaqueValue17 = 0;
        if (opaqueValue7 > 0)
            opaqueValue17 = opaqueValue7;
        juceStringConstructFromUtf8 (&messageString54, "FAD OS");
        scalarValue18 = (float)opaqueValue17;
        *(std::uint64_t*)&opaqueValue45 = 1094713344;
        *((float*)&opaqueValue45 + 2) = (float)opaqueValue16;
        *((float*)&opaqueValue45 + 3) = (float)opaqueValue17;
        sub_1800C9DC0 (graphics, (unsigned int)&messageString54, (unsigned int)&opaqueValue45, 33, 0);
        stringStorageToRelease19 = (void*)(messageString54 - 16);
        if ((void*)(messageString54 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease19) == -1)
            memoryFree (stringStorageToRelease19);
        sub_1800C9730 (graphics, (unsigned int)dword_1814A4720);
        opaqueValue20 = opaqueValue57;
        *(std::uint64_t*)&opaqueValue45 = (unsigned int)opaqueValue57;
        opaqueValue21 = opaqueValue58;
        *((std::uint64_t*)&opaqueValue45 + 1) = __PAIR64__ (opaqueValue59, opaqueValue58);
        (*(void (**) (std::uint64_t, __int128*, std::uint64_t)) (**(std::uint64_t**)(graphics + 8) + 184LL)) (*(std::uint64_t*)(graphics + 8), &opaqueValue45, 0);
        sub_1800C9730 (graphics, (unsigned int)dword_1814A471C);
        opaqueValue22 = opaqueValue21 - 24;
        opaqueValue23 = 0;
        if (opaqueValue22 > 0)
            opaqueValue23 = opaqueValue22;
        opaqueValue24 = opaqueValue20 + 12;
        temporaryPointer25 = "First run / Recovery";
        if (opaqueValue50 < 640)
            temporaryPointer25 = "SETUP";
        opaqueValue26 = sub_1808C4060 (&opaqueValue57, temporaryPointer25);
        *(std::uint64_t*)&opaqueValue45 = COERCE_UNSIGNED_INT ((float)opaqueValue24);
        *((float*)&opaqueValue45 + 2) = (float)opaqueValue23;
        *((float*)&opaqueValue45 + 3) = scalarValue18;
        sub_1800C9DC0 (graphics, opaqueValue26, (unsigned int)&opaqueValue45, 33, 0);
        stringStorageToRelease27 = (void*)(opaqueValue57 - 16);
        if ((void*)(opaqueValue57 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease27) == -1)
            memoryFree (stringStorageToRelease27);
        sub_1800C9730 (graphics, (unsigned int)dword_1814A4720);
        opaqueValue28 = 0;
        if (opaqueValue51 - 24 > 0)
            opaqueValue28 = opaqueValue51 - 24;
        opaqueValue29 = opaqueValue52 + 12;
        juceStringConstructFromUtf8 (&opaqueValue57, temporaryPointer46);
        *(std::uint64_t*)&opaqueValue45 = COERCE_UNSIGNED_INT ((float)opaqueValue29);
        *((float*)&opaqueValue45 + 2) = (float)opaqueValue28;
        *((float*)&opaqueValue45 + 3) = scalarValue18;
        sub_1800C9DC0 (graphics, (unsigned int)&opaqueValue57, (unsigned int)&opaqueValue45, 34, 0);
        stringStorageToRelease30 = (volatile std::int32_t*)(opaqueValue57 - 16);
        result = (std::int64_t)&emptyJuceStringStorage;
        if ((void*)(opaqueValue57 - 16) != &emptyJuceStringStorage)
        {
            result = (unsigned int)_InterlockedDecrement (stringStorageToRelease30);
            if ((std::uint32_t)result == -1)
                result = memoryFree ((LPVOID)stringStorageToRelease30);
        }
        if (*(int*)(panel + 904) > 0 && *(int*)(panel + 908) > 0)
        {
            opaqueValue57 = 0x433800000000002ELL;
            sub_1800C9730 (graphics, dword_1814A4720 & 0xFFFFFF | 0x2E000000u);
            LODWORD (opaqueValue45) = *(std::uint32_t*)(panel + 896) + 4;
            DWORD1 (opaqueValue45) = *(std::uint32_t*)(panel + 900) + 4;
            *((std::uint64_t*)&opaqueValue45 + 1) = *(std::uint64_t*)(panel + 904);
            (*(void (**) (std::uint64_t, __int128*, std::uint64_t)) (**(std::uint64_t**)(graphics + 8) + 184LL)) (*(std::uint64_t*)(graphics + 8), &opaqueValue45, 0);
            sub_1800C9730 (graphics, (unsigned int)dword_1814A471C);
            opaqueValue45 = *(_OWORD*)(panel + 896);
            (*(void (**) (std::uint64_t, __int128*, std::uint64_t)) (**(std::uint64_t**)(graphics + 8) + 184LL)) (*(std::uint64_t*)(graphics + 8), &opaqueValue45, 0);
            sub_1800C9730 (graphics, (unsigned int)dword_1814A4720);
            opaqueValue31 = *(std::uint64_t*)(panel + 896);
            *(float*)&opaqueValue45 = (float)(int)opaqueValue31;
            *((float*)&opaqueValue45 + 1) = (float)SHIDWORD (opaqueValue31);
            opaqueValue32 = *(std::uint64_t*)(panel + 904);
            *((float*)&opaqueValue45 + 2) = (float)(int)opaqueValue32;
            *((float*)&opaqueValue45 + 3) = (float)SHIDWORD (opaqueValue32);
            (*(void (**) (std::uint64_t, __int128*)) (**(std::uint64_t**)(graphics + 8) + 208LL)) (*(std::uint64_t*)(graphics + 8), &opaqueValue45);
            opaqueValue33 = *(_OWORD*)(panel + 896);
            opaqueValue34 = *(std::uint64_t*)(panel + 904);
            if (SHIDWORD (opaqueValue34) < 34)
                opaqueValue6 = HIDWORD (opaqueValue34);
            sub_1800C9730 (graphics, (unsigned int)dword_1814A47FC);
            opaqueValue57 = opaqueValue33;
            *(std::uint64_t*)&opaqueValue45 = opaqueValue33;
            *((std::uint64_t*)&opaqueValue45 + 1) = __PAIR64__ (opaqueValue6, opaqueValue34);
            (*(void (**) (std::uint64_t, __int128*, std::uint64_t)) (**(std::uint64_t**)(graphics + 8) + 184LL)) (*(std::uint64_t*)(graphics + 8), &opaqueValue45, 0);
            sub_1800C9730 (graphics, (unsigned int)dword_1814A4720);
            opaqueValue58 = DWORD1 (opaqueValue33);
            opaqueValue35 = *(std::uint64_t*)(graphics + 8);
            callbackFunction36 = *(void (**) (std::int64_t, const char**)) (*(std::uint64_t*)opaqueValue35 + 232LL);
            *(float*)&temporaryPointer46 = (float)(int)opaqueValue33;
            *((float*)&temporaryPointer46 + 1) = (float)(opaqueValue6 + DWORD1 (opaqueValue33));
            scalarValue47 = (float)(opaqueValue33 + opaqueValue34);
            scalarValue48 = *((float*)&temporaryPointer46 + 1);
            callbackFunction36 (opaqueValue35, &temporaryPointer46);
            sub_1806C6870 (&opaqueValue53, panel + 912);
            if (*(std::uint8_t*)(graphics + 16) != 0)
            {
                *(std::uint8_t*)(graphics + 16) = 0;
                (*(void (**) (std::uint64_t)) (**(std::uint64_t**)(graphics + 8) + 104LL)) (*(std::uint64_t*)(graphics + 8));
            }
            (*(void (**) (std::uint64_t, std::int64_t*)) (**(std::uint64_t**)(graphics + 8) + 248LL)) (*(std::uint64_t*)(graphics + 8), &opaqueValue53);
            opaqueValue37 = opaqueValue34 - 24;
            opaqueValue38 = 0;
            if (opaqueValue37 > 0)
                opaqueValue38 = opaqueValue37;
            if (opaqueValue6 > 0)
                opaqueValue8 = opaqueValue6;
            opaqueValue39 = opaqueValue57 + 12;
            sub_1800BBDD0 (&opaqueValue53, "FAD SYNTH / ONBOARDING RECOVERY");
            scalarValue40 = sub_1809E0DD0();
            temporaryPointer41 = "FAD SYNTH / SETUP";
            if ((int)scalarValue40 <= opaqueValue37)
                temporaryPointer41 = "FAD SYNTH / ONBOARDING RECOVERY";
            juceStringConstructFromUtf8 (&opaqueValue57, temporaryPointer41);
            *(float*)&opaqueValue45 = (float)opaqueValue39;
            *((float*)&opaqueValue45 + 1) = (float)(int)opaqueValue58;
            *((float*)&opaqueValue45 + 2) = (float)opaqueValue38;
            *((float*)&opaqueValue45 + 3) = (float)opaqueValue8;
            sub_1800C9DC0 (graphics, (unsigned int)&opaqueValue57, (unsigned int)&opaqueValue45, 33, 0);
            stringStorageToRelease42 = (volatile std::int32_t*)(opaqueValue57 - 16);
            result = (std::int64_t)&emptyJuceStringStorage;
            if ((void*)(opaqueValue57 - 16) != &emptyJuceStringStorage)
            {
                result = (unsigned int)_InterlockedDecrement (stringStorageToRelease42);
                if ((std::uint32_t)result == -1)
                    result = memoryFree ((LPVOID)stringStorageToRelease42);
            }
            callbackFunction43 = (std::int64_t (***) (std::uint64_t, std::int64_t))opaqueValue53;
            if (opaqueValue53 != 0)
            {
                result = (unsigned int)_InterlockedExchangeAdd ((volatile std::int32_t*)(opaqueValue53 + 8), 0xFFFFFFFF);
                if ((std::uint32_t)result == 1)
                    result = (**callbackFunction43) (callbackFunction43, 1);
            }
        }
        callbackFunction44 = (std::int64_t (***) (std::uint64_t, std::int64_t))opaqueValue49;
        if (opaqueValue49 != 0 && _InterlockedExchangeAdd ((volatile std::int32_t*)(opaqueValue49 + 8), 0xFFFFFFFF) == 1)
            return (**callbackFunction44) (callbackFunction44, 1);
    }
    return result;
}

// ===== Onboarding_ShowError @ 0x1806ca9b0 size=137 =====
std::int64_t onboardingShowSetupError (std::int64_t panel, std::int64_t errorMessage)
{
    std::int64_t opaqueValue4; // rsi
    std::int64_t opaqueValue5; // rax
    void* stringStorageToRelease6; // rcx
    std::int64_t opaqueValue8; // [rsp+30h] [rbp+8h] BYREF

    opaqueValue4 = *(std::uint64_t*)(panel + 696);
    if (opaqueValue4 != 0)
    {
        opaqueValue5 = sub_1808C4060 (&opaqueValue8, "Setup error");
        sub_1808EF210 (opaqueValue4, opaqueValue5, errorMessage, 0);
        stringStorageToRelease6 = (void*)(opaqueValue8 - 16);
        if ((void*)(opaqueValue8 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease6) == -1)
            memoryFree (stringStorageToRelease6);
    }
    return onboardingShowNativeRecoverySurface (panel, errorMessage);
}

// ===== Onboarding_ShowNativeFallback @ 0x1806caa40 size=266 =====
std::int64_t onboardingShowNativeRecoverySurface (std::int64_t panel, std::int64_t errorMessage)
{
    std::int64_t* temporaryPointer4; // rsi
    char opaqueValue5; // bl
    std::int64_t result; // rax
    volatile std::int32_t* stringStorageToRelease7; // rcx
    volatile std::int32_t* stringStorageToRelease8; // rcx
    void* temporaryPointer9; // rcx
    std::uint64_t stackStorage10[5]; // [rsp+20h] [rbp-28h] BYREF
    std::int64_t messageString11; // [rsp+60h] [rbp+18h] BYREF
    std::int64_t opaqueValue12; // [rsp+68h] [rbp+20h] BYREF

    if (*(std::uint8_t*)(panel + 712) != 0)
    {
        sub_1800B3260 (stackStorage10, &unk_1812F62C8);
        temporaryPointer4 = stackStorage10;
        opaqueValue5 = 5;
    }
    else
    {
        sub_1800B3260 (&opaqueValue12, &unk_1812F62B0);
        temporaryPointer4 = &opaqueValue12;
        opaqueValue5 = 10;
    }
    juceStringConstructFromUtf8 (&messageString11, "Setup error");
    result = sub_1806CF6B0 (panel, &messageString11, errorMessage, temporaryPointer4);
    stringStorageToRelease7 = (volatile std::int32_t*)(messageString11 - 16);
    if ((void*)(messageString11 - 16) != &emptyJuceStringStorage)
    {
        result = (unsigned int)_InterlockedDecrement (stringStorageToRelease7);
        if ((std::uint32_t)result == -1)
            result = memoryFree ((LPVOID)stringStorageToRelease7);
    }
    if ((opaqueValue5 & 2) != 0)
    {
        opaqueValue5 &= ~2u;
        stringStorageToRelease8 = (volatile std::int32_t*)(opaqueValue12 - 16);
        if ((void*)(opaqueValue12 - 16) != &emptyJuceStringStorage)
        {
            result = (unsigned int)_InterlockedDecrement (stringStorageToRelease8);
            if ((std::uint32_t)result == -1)
                result = memoryFree ((LPVOID)stringStorageToRelease8);
        }
    }
    if ((opaqueValue5 & 1) != 0)
    {
        temporaryPointer9 = (void*)(stackStorage10[0] - 16LL);
        if ((void*)(stackStorage10[0] - 16LL) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)temporaryPointer9) == -1)
            return memoryFree (temporaryPointer9);
    }
    return result;
}
