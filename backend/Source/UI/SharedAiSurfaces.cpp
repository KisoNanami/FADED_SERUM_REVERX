#include <cstdint>

// ===== Editor_Method_A @ 0x180224400 size=1286 =====
std::int64_t editorApplyAuthStateToSharedAiSurfaces (std::int64_t* editorWeakReference, std::int64_t authState)
{
    std::int64_t result; // rax
    std::int64_t opaqueValue5; // rcx
    std::int64_t opaqueValue6; // rcx
    std::int64_t opaqueValue7; // r13
    std::int64_t opaqueValue8; // rcx
    std::int64_t opaqueValue9; // rcx
    char* temporaryPointer10; // rbx
    char opaqueValue11; // si
    char* temporaryPointer12; // rdi
    char* stringStorageToRelease13; // rcx
    char* stringStorageToRelease14; // rcx
    char* temporaryPointer15; // rbx
    char opaqueValue16; // si
    char* temporaryPointer17; // rdi
    char* stringStorageToRelease18; // rcx
    char* stringStorageToRelease19; // rcx
    std::uint8_t* temporaryPointer20; // rbx
    std::uint8_t* temporaryPointer21; // rcx
    std::int64_t opaqueValue22; // r8
    int opaqueValue23; // eax
    int opaqueValue24; // edx
    std::int64_t opaqueValue25; // rcx
    std::int64_t opaqueValue26; // rax
    char* temporaryPointer27; // rdx
    std::int64_t opaqueValue28; // rdx
    std::int64_t (*callbackFunction29)(); // rdx
    std::int64_t opaqueValue30; // rcx
    std::int64_t opaqueValue31; // rax
    std::int64_t opaqueValue32; // rcx
    std::int64_t opaqueValue33; // rax
    std::int64_t opaqueValue34; // rsi
    void (**callbackFunction35) (std::uint64_t*); // rax
    void* stringStorageToRelease36; // rcx
    std::int64_t opaqueValue37; // rcx
    std::int64_t opaqueValue38; // rax
    std::int64_t opaqueValue39; // rcx
    std::int64_t opaqueValue40; // rax
    std::int64_t opaqueValue41; // rcx
    char** temporaryPointer42; // rdx
    std::uint8_t* stringStorageToRelease43; // rcx
    char* temporaryPointer44; // [rsp+38h] [rbp-38h] BYREF
    char* temporaryPointer45; // [rsp+40h] [rbp-30h] BYREF
    std::int64_t opaqueValue46; // [rsp+48h] [rbp-28h] BYREF
    void (**callbackFunction47) (std::uint64_t*); // [rsp+50h] [rbp-20h]
    std::int64_t opaqueValue48; // [rsp+58h] [rbp-18h] BYREF

    result = *editorWeakReference;
    if (*editorWeakReference != 0)
    {
        opaqueValue5 = *(std::uint64_t*)(result + 16);
        if (opaqueValue5 != 0)
        {
            result = cppRttiDynamicCast (
                opaqueValue5,
                0,
                (unsigned int)&juce::Component `RTTI Type Descriptor',
                (unsigned int)&FadModel1AudioProcessorEditor `RTTI Type Descriptor',
                0);
            if (*(std::uint64_t*)(result + 928) != 0)
            {
                if (*editorWeakReference != 0)
                    opaqueValue6 = *(std::uint64_t*)(*editorWeakReference + 16);
                else
                    LODWORD (opaqueValue6) = 0;
                opaqueValue7 = *(std::uint64_t*)(cppRttiDynamicCast (
                                                     opaqueValue6,
                                                     0,
                                                     (unsigned int)&juce::Component `RTTI Type Descriptor',
                                                     (unsigned int)&FadModel1AudioProcessorEditor `RTTI Type Descriptor',
                                                     0) +
                                                 928);
                if (*editorWeakReference != 0)
                    opaqueValue8 = *(std::uint64_t*)(*editorWeakReference + 16);
                else
                    LODWORD (opaqueValue8) = 0;
                opaqueValue9 = *(std::uint64_t*)(cppRttiDynamicCast (
                                                     opaqueValue8,
                                                     0,
                                                     (unsigned int)&juce::Component `RTTI Type Descriptor',
                                                     (unsigned int)&FadModel1AudioProcessorEditor `RTTI Type Descriptor',
                                                     0) +
                                                 328);
                if (*(std::uint8_t*)authState != 0)
                {
                    temporaryPointer10 = *(char**)(authState + 24);
                    temporaryPointer45 = temporaryPointer10;
                    if (temporaryPointer10 - 16 != (char*)&emptyJuceStringStorage)
                        _InterlockedIncrement ((volatile std::int32_t*)temporaryPointer10 - 4);
                    opaqueValue11 = 1;
                    temporaryPointer12 = temporaryPointer45;
                }
                else
                {
                    temporaryPointer12 = &emptyJuceStringCharacters;
                    temporaryPointer45 = &emptyJuceStringCharacters;
                    opaqueValue11 = 2;
                    temporaryPointer10 = &emptyJuceStringCharacters;
                }
                sub_180066810 (opaqueValue9, &temporaryPointer45);
                if ((opaqueValue11 & 2) != 0)
                {
                    opaqueValue11 &= ~2u;
                    stringStorageToRelease13 = temporaryPointer12 - 16;
                    if (temporaryPointer12 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease13) == -1)
                        memoryFree (stringStorageToRelease13);
                }
                if ((opaqueValue11 & 1) != 0)
                {
                    opaqueValue11 &= ~1u;
                    stringStorageToRelease14 = temporaryPointer10 - 16;
                    if (temporaryPointer10 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease14) == -1)
                        memoryFree (stringStorageToRelease14);
                }
                if (*(std::uint8_t*)(authState + 225) != 0)
                {
                    temporaryPointer15 = *(char**)(authState + 248);
                    temporaryPointer45 = temporaryPointer15;
                    if (temporaryPointer15 - 16 != (char*)&emptyJuceStringStorage)
                        _InterlockedIncrement ((volatile std::int32_t*)temporaryPointer15 - 4);
                    opaqueValue16 = opaqueValue11 | 4;
                    temporaryPointer17 = temporaryPointer45;
                }
                else
                {
                    temporaryPointer17 = &emptyJuceStringCharacters;
                    temporaryPointer45 = &emptyJuceStringCharacters;
                    opaqueValue16 = opaqueValue11 | 8;
                    temporaryPointer15 = &emptyJuceStringCharacters;
                }
                sub_18021CF50 (&temporaryPointer44, authState + 56, &temporaryPointer45);
                if ((opaqueValue16 & 8) != 0)
                {
                    opaqueValue16 &= ~8u;
                    stringStorageToRelease18 = temporaryPointer17 - 16;
                    if (temporaryPointer17 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease18) == -1)
                        memoryFree (stringStorageToRelease18);
                }
                if ((opaqueValue16 & 4) != 0)
                {
                    stringStorageToRelease19 = temporaryPointer15 - 16;
                    if (temporaryPointer15 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease19) == -1)
                        memoryFree (stringStorageToRelease19);
                }
                temporaryPointer20 = (std::uint8_t*)temporaryPointer44;
                if (*(std::uint8_t*)authState == 0)
                    goto label42;
                temporaryPointer21 = *(std::uint8_t**)(sub_180238810 (editorWeakReference) + 1056);
                if (temporaryPointer21 != temporaryPointer20)
                {
                    opaqueValue22 = temporaryPointer20 - temporaryPointer21;
                    do
                    {
                        opaqueValue23 = temporaryPointer21[opaqueValue22];
                        opaqueValue24 = *temporaryPointer21 - opaqueValue23;
                        if (opaqueValue24 != 0)
                            break;
                        ++temporaryPointer21;
                    } while (opaqueValue23 != 0);
                    if (opaqueValue24 != 0)
                    {
                    label42:
                        temporaryPointer45 = (char*)&unk_180F51130;
                        opaqueValue46 = 0;
                        if (*editorWeakReference != 0)
                            opaqueValue25 = *(std::uint64_t*)(*editorWeakReference + 16);
                        else
                            LODWORD (opaqueValue25) = 0;
                        opaqueValue26 = cppRttiDynamicCast (
                            opaqueValue25,
                            0,
                            (unsigned int)&juce::Component `RTTI Type Descriptor',
                            (unsigned int)&FadModel1AudioProcessorEditor `RTTI Type Descriptor',
                            0);
                        temporaryPointer27 = *(char**)(opaqueValue26 + 1040);
                        *(std::uint64_t*)(opaqueValue26 + 1040) = temporaryPointer45;
                        temporaryPointer45 = temporaryPointer27;
                        opaqueValue28 = *(std::uint64_t*)(opaqueValue26 + 1048);
                        *(std::uint64_t*)(opaqueValue26 + 1048) = opaqueValue46;
                        opaqueValue46 = opaqueValue28;
                        callbackFunction29 = *((std::int64_t (**)())temporaryPointer45 + 11);
                        if (callbackFunction29 != guard_check_icall_nop)
                            ((void (*) (std::int64_t*))callbackFunction29) (&opaqueValue46);
                        if (*editorWeakReference != 0)
                            opaqueValue30 = *(std::uint64_t*)(*editorWeakReference + 16);
                        else
                            LODWORD (opaqueValue30) = 0;
                        opaqueValue31 = cppRttiDynamicCast (
                            opaqueValue30,
                            0,
                            (unsigned int)&juce::Component `RTTI Type Descriptor',
                            (unsigned int)&FadModel1AudioProcessorEditor `RTTI Type Descriptor',
                            0);
                        juceStringClear (opaqueValue31 + 1056);
                        if (*editorWeakReference != 0)
                            opaqueValue32 = *(std::uint64_t*)(*editorWeakReference + 16);
                        else
                            LODWORD (opaqueValue32) = 0;
                        opaqueValue33 = cppRttiDynamicCast (
                            opaqueValue32,
                            0,
                            (unsigned int)&juce::Component `RTTI Type Descriptor',
                            (unsigned int)&FadModel1AudioProcessorEditor `RTTI Type Descriptor',
                            0);
                        opaqueValue34 = sub_180065570 (*(std::uint64_t*)(opaqueValue33 + 328));
                        temporaryPointer45 = &emptyJuceStringCharacters;
                        callbackFunction47 = (void (**) (std::uint64_t*))&unk_180F51130;
                        opaqueValue48 = 0;
                        (*(void (**) (std::int64_t)) (*(std::uint64_t*)(opaqueValue34 + 12160) + 88LL)) (opaqueValue34 + 12168);
                        callbackFunction35 = callbackFunction47;
                        *(std::uint64_t*)(opaqueValue34 + 12160) = callbackFunction47;
                        ((void (*) (std::int64_t, std::int64_t*))callbackFunction35[12]) (opaqueValue34 + 12168, &opaqueValue48);
                        stringStorageToRelease36 = (void*)(_InterlockedExchange64 ((volatile std::int64_t*)(opaqueValue34 + 12176), (std::int64_t)&emptyJuceStringCharacters) - 16);
                        if (stringStorageToRelease36 != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease36) == -1)
                            memoryFree (stringStorageToRelease36);
                        callbackFunction47[11](&opaqueValue48);
                    }
                }
                if (*editorWeakReference != 0)
                    opaqueValue37 = *(std::uint64_t*)(*editorWeakReference + 16);
                else
                    LODWORD (opaqueValue37) = 0;
                opaqueValue38 = cppRttiDynamicCast (
                    opaqueValue37,
                    0,
                    (unsigned int)&juce::Component `RTTI Type Descriptor',
                    (unsigned int)&FadModel1AudioProcessorEditor `RTTI Type Descriptor',
                    0);
                editorSynchronizeWebViewAuthState (opaqueValue38, authState);
                opaqueValue39 = *editorWeakReference;
                if (*editorWeakReference != 0)
                    opaqueValue39 = *(std::uint64_t*)(opaqueValue39 + 16);
                opaqueValue40 = cppRttiDynamicCast (
                    opaqueValue39,
                    0,
                    (unsigned int)&juce::Component `RTTI Type Descriptor',
                    (unsigned int)&FadModel1AudioProcessorEditor `RTTI Type Descriptor',
                    0);
                onboardingCheckStartupRequirements (opaqueValue40, authState);
                opaqueValue41 = *(std::uint64_t*)(opaqueValue7 + 169368);
                if (*(std::uint8_t*)authState != 0)
                {
                    sub_18068EBF0 (opaqueValue41, authState + 24);
                    temporaryPointer42 = (char**)(authState + 24);
                }
                else
                {
                    temporaryPointer44 = &emptyJuceStringCharacters;
                    sub_18068EBF0 (opaqueValue41, &temporaryPointer44);
                    temporaryPointer44 = &emptyJuceStringCharacters;
                    temporaryPointer42 = &temporaryPointer44;
                }
                result = sub_18066B8E0 (*(std::uint64_t*)(opaqueValue7 + 157904), temporaryPointer42);
                stringStorageToRelease43 = temporaryPointer20 - 16;
                if (temporaryPointer20 - 16 != (std::uint8_t*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease43) == -1)
                {
                    return memoryFree (stringStorageToRelease43);
                }
            }
        }
    }
    return result;
}

// ===== Editor_Method_B @ 0x1802264e0 size=985 =====
void editorConfigureSharedAiSurfaces (std::uint64_t* editor)
{
    std::int64_t opaqueValue2; // rcx
    std::int64_t authManagerOrScratch3; // r13
    std::int64_t opaqueValue4; // rax
    std::int64_t opaqueValue5; // rax
    std::int64_t opaqueValue6; // rbx
    std::int64_t opaqueValue7; // rsi
    char opaqueValue8; // di
    std::int64_t opaqueValue9; // rdi
    char* temporaryPointer10; // rsi
    char opaqueValue11; // r15
    char* temporaryPointer12; // rdi
    char* stringStorageToRelease13; // rcx
    char* stringStorageToRelease14; // rcx
    std::int64_t opaqueValue15; // rsi
    char opaqueValue16; // di
    std::int64_t opaqueValue17; // rsi
    volatile std::int32_t* temporaryPointer18; // rdi
    char opaqueValue19; // si
    volatile std::int32_t* temporaryPointer20; // rcx
    std::int64_t opaqueValue21; // rdi
    volatile std::int32_t* temporaryPointer22; // [rsp+20h] [rbp-E0h]
    char* temporaryPointer23; // [rsp+30h] [rbp-D0h] BYREF
    std::int64_t opaqueValue24; // [rsp+38h] [rbp-C8h]
    std::int64_t opaqueValue25; // [rsp+40h] [rbp-C0h] BYREF
    std::int64_t (**callbackFunction26)(); // [rsp+48h] [rbp-B8h] BYREF
    std::int64_t opaqueValue27; // [rsp+50h] [rbp-B0h]
    std::int64_t (***callbackFunction28)(); // [rsp+80h] [rbp-80h]
    std::uint8_t stackStorage29[320]; // [rsp+90h] [rbp-70h] BYREF

    if (editor[116] == 0 && (editor[122] == 0 || editor[121] == 0 || editor[123] == 0 || editor[124] == 0))
        return;
    sub_180024A10 (&opaqueValue25, editor);
    opaqueValue2 = editor[41];
    authManagerOrScratch3 = *(std::uint64_t*)(opaqueValue2 + 475552);
    opaqueValue4 = editor[116];
    if (opaqueValue4 != 0)
        opaqueValue5 = opaqueValue4 + 153208;
    else
        opaqueValue5 = editor[121];
    opaqueValue24 = opaqueValue5;
    opaqueValue6 = opaqueValue25;
    if (opaqueValue25 != 0)
        _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue25 + 8));
    callbackFunction28 = nullptr;
    callbackFunction26 = std::_Func_impl_no_alloc<`FadModel1AudioProcessorEditor::configureSharedAiSurfaces'::`2'::_lambda_1_, fadmodel1::ai::AuthManager::XAEBUAuthState::AXXZ&>::`vftable';
    opaqueValue27 = opaqueValue6;
    if (opaqueValue6 != 0)
        _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue6 + 8));
    callbackFunction28 = &callbackFunction26;
    processorDispatchAuthEventImpl (opaqueValue2, (std::int64_t)&callbackFunction26);
    if (opaqueValue6 != 0 && _InterlockedExchangeAdd ((volatile std::int32_t*)(opaqueValue6 + 8), 0xFFFFFFFF) == 1)
        (**(void (***) (std::int64_t, std::int64_t))opaqueValue6) (opaqueValue6, 1);
    temporaryPointer22 = (volatile std::int32_t*)editor[41];
    opaqueValue7 = *(std::uint64_t*)(authManagerOrScratch3 + 40);
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue7 + 1168));
    opaqueValue8 = **(std::uint8_t**)(authManagerOrScratch3 + 40);
    LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue7 + 1168));
    if (opaqueValue8 != 0)
    {
        opaqueValue9 = *(std::uint64_t*)(authManagerOrScratch3 + 40);
        EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue9 + 1168));
        temporaryPointer10 = *(char**)(*(std::uint64_t*)(authManagerOrScratch3 + 40) + 24LL);
        temporaryPointer23 = temporaryPointer10;
        if (temporaryPointer10 - 16 != (char*)&emptyJuceStringStorage)
            _InterlockedIncrement ((volatile std::int32_t*)temporaryPointer10 - 4);
        LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue9 + 1168));
        opaqueValue11 = 1;
        temporaryPointer12 = temporaryPointer23;
    }
    else
    {
        temporaryPointer12 = &emptyJuceStringCharacters;
        temporaryPointer23 = &emptyJuceStringCharacters;
        opaqueValue11 = 2;
        temporaryPointer10 = &emptyJuceStringCharacters;
    }
    sub_180066810 (temporaryPointer22, &temporaryPointer23);
    if ((opaqueValue11 & 2) != 0)
    {
        opaqueValue11 &= ~2u;
        stringStorageToRelease13 = temporaryPointer12 - 16;
        if (temporaryPointer12 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease13) == -1)
            memoryFree (stringStorageToRelease13);
    }
    if ((opaqueValue11 & 1) != 0)
    {
        opaqueValue11 &= ~1u;
        stringStorageToRelease14 = temporaryPointer10 - 16;
        if (temporaryPointer10 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease14) == -1)
            memoryFree (stringStorageToRelease14);
    }
    opaqueValue15 = *(std::uint64_t*)(authManagerOrScratch3 + 40);
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue15 + 1168));
    opaqueValue16 = **(std::uint8_t**)(authManagerOrScratch3 + 40);
    LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue15 + 1168));
    if (opaqueValue16 != 0)
    {
        opaqueValue17 = *(std::uint64_t*)(authManagerOrScratch3 + 40);
        EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue17 + 1168));
        temporaryPointer18 = *(volatile std::int32_t**)(*(std::uint64_t*)(authManagerOrScratch3 + 40) + 24LL);
        if (temporaryPointer18 - 4 != (volatile std::int32_t*)&emptyJuceStringStorage)
            _InterlockedIncrement (temporaryPointer18 - 4);
        LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue17 + 1168));
        opaqueValue11 |= 4u;
        if (*(std::uint8_t*)temporaryPointer18 == 0)
        {
            opaqueValue19 = 1;
            goto label36;
        }
    }
    else
    {
        temporaryPointer18 = temporaryPointer22;
    }
    opaqueValue19 = 0;
label36:
    if ((opaqueValue11 & 4) != 0)
    {
        temporaryPointer20 = temporaryPointer18 - 4;
        if (temporaryPointer18 - 4 != (volatile std::int32_t*)&emptyJuceStringStorage && _InterlockedDecrement (temporaryPointer20) == -1)
            memoryFree ((LPVOID)temporaryPointer20);
    }
    if (opaqueValue19 != 0)
    {
        if (opaqueValue6 != 0)
            _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue6 + 8));
        callbackFunction28 = nullptr;
        callbackFunction26 = ___7___Func_impl_no_alloc_V_lambda_2___6__configureSharedAiSurfaces_FadModel1AudioProcessorEditor__AEAAXXZ_X_N_std__6B_;
        opaqueValue27 = opaqueValue6;
        if (opaqueValue6 != 0)
            _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue6 + 8));
        callbackFunction28 = &callbackFunction26;
        sub_180364620 (authManagerOrScratch3, &callbackFunction26);
        if (opaqueValue6 != 0 && _InterlockedExchangeAdd ((volatile std::int32_t*)(opaqueValue6 + 8), 0xFFFFFFFF) == 1)
            (**(void (***) (std::int64_t, std::int64_t))opaqueValue6) (opaqueValue6, 1);
    }
    editorConfigureOnboardingCallbacks ((std::int64_t)editor, opaqueValue24);
    opaqueValue21 = *(std::uint64_t*)(authManagerOrScratch3 + 40);
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue21 + 1168));
    authManagerSnapshotState ((std::int64_t)stackStorage29, *(std::uint64_t*)(authManagerOrScratch3 + 40));
    LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue21 + 1168));
    onboardingCheckStartupRequirements ((std::int64_t)editor, (std::int64_t)stackStorage29);
    sub_180058EA0 (stackStorage29);
    if (opaqueValue6 != 0 && _InterlockedExchangeAdd ((volatile std::int32_t*)(opaqueValue6 + 8), 0xFFFFFFFF) == 1)
        (**(void (***) (std::int64_t, std::int64_t))opaqueValue6) (opaqueValue6, 1);
}

// ===== Editor_Method_C @ 0x1802268c0 size=1340 =====
std::uint64_t* editorSynchronizeAiSurfaceAuthState (std::int64_t editorCallback, std::int64_t authState)
{
    std::uint64_t* result; // rax
    std::int64_t opaqueValue5; // rcx
    std::int64_t opaqueValue6; // rcx
    std::int64_t opaqueValue7; // rcx
    char* temporaryPointer8; // rbx
    char opaqueValue9; // r14
    char* temporaryPointer10; // rdi
    char* stringStorageToRelease11; // rcx
    char* stringStorageToRelease12; // rcx
    char* temporaryPointer13; // rbx
    char opaqueValue14; // r14
    char* temporaryPointer15; // rdi
    char* stringStorageToRelease16; // rcx
    char* stringStorageToRelease17; // rcx
    std::uint8_t* temporaryPointer18; // rbx
    std::uint8_t* temporaryPointer19; // rcx
    std::int64_t opaqueValue20; // r8
    int opaqueValue21; // eax
    int opaqueValue22; // edx
    std::int64_t opaqueValue23; // rcx
    std::int64_t opaqueValue24; // rax
    char* temporaryPointer25; // rdx
    std::int64_t opaqueValue26; // rdx
    std::int64_t (*callbackFunction27)(); // rdx
    std::int64_t opaqueValue28; // rcx
    std::int64_t opaqueValue29; // rax
    std::int64_t opaqueValue30; // rcx
    std::int64_t opaqueValue31; // rax
    std::int64_t opaqueValue32; // r14
    std::uint64_t* temporaryPointer33; // rax
    void* stringStorageToRelease34; // rcx
    std::int64_t (*callbackFunction35)(); // rdx
    std::int64_t opaqueValue36; // rcx
    std::int64_t opaqueValue37; // rax
    std::int64_t opaqueValue38; // rcx
    std::int64_t opaqueValue39; // rax
    std::int64_t opaqueValue40; // rcx
    std::int64_t opaqueValue41; // rax
    std::int64_t opaqueValue42; // rdx
    std::int64_t opaqueValue43; // rcx
    std::int64_t opaqueValue44; // rax
    std::uint8_t* stringStorageToRelease45; // rcx
    std::uint8_t* temporaryPointer46; // [rsp+38h] [rbp-38h] BYREF
    char* temporaryPointer47; // [rsp+40h] [rbp-30h] BYREF
    std::int64_t opaqueValue48; // [rsp+48h] [rbp-28h] BYREF
    std::uint64_t* temporaryPointer49; // [rsp+50h] [rbp-20h]
    std::int64_t opaqueValue50; // [rsp+58h] [rbp-18h] BYREF

    result = *(std::uint64_t**)editorCallback;
    if (*(std::uint64_t*)editorCallback != 0)
    {
        opaqueValue5 = result[2];
        if (opaqueValue5 != 0)
        {
            result = (std::uint64_t*)cppRttiDynamicCast (
                opaqueValue5,
                0,
                (unsigned int)&juce::Component `RTTI Type Descriptor',
                (unsigned int)&FadModel1AudioProcessorEditor `RTTI Type Descriptor',
                0);
            if (result[116] != 0 || result[122] != 0 && result[121] != 0 && result[123] != 0 && result[124] != 0)
            {
                if (*(std::uint64_t*)editorCallback != 0)
                    opaqueValue6 = *(std::uint64_t*)(*(std::uint64_t*)editorCallback + 16LL);
                else
                    LODWORD (opaqueValue6) = 0;
                opaqueValue7 = *(std::uint64_t*)(cppRttiDynamicCast (
                                                     opaqueValue6,
                                                     0,
                                                     (unsigned int)&juce::Component `RTTI Type Descriptor',
                                                     (unsigned int)&FadModel1AudioProcessorEditor `RTTI Type Descriptor',
                                                     0) +
                                                 328);
                if (*(std::uint8_t*)authState != 0)
                {
                    temporaryPointer8 = *(char**)(authState + 24);
                    temporaryPointer47 = temporaryPointer8;
                    if (temporaryPointer8 - 16 != (char*)&emptyJuceStringStorage)
                        _InterlockedIncrement ((volatile std::int32_t*)temporaryPointer8 - 4);
                    opaqueValue9 = 1;
                    temporaryPointer10 = temporaryPointer47;
                }
                else
                {
                    temporaryPointer10 = &emptyJuceStringCharacters;
                    temporaryPointer47 = &emptyJuceStringCharacters;
                    opaqueValue9 = 2;
                    temporaryPointer8 = &emptyJuceStringCharacters;
                }
                sub_180066810 (opaqueValue7, &temporaryPointer47);
                if ((opaqueValue9 & 2) != 0)
                {
                    opaqueValue9 &= ~2u;
                    stringStorageToRelease11 = temporaryPointer10 - 16;
                    if (temporaryPointer10 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease11) == -1)
                        memoryFree (stringStorageToRelease11);
                }
                if ((opaqueValue9 & 1) != 0)
                {
                    opaqueValue9 &= ~1u;
                    stringStorageToRelease12 = temporaryPointer8 - 16;
                    if (temporaryPointer8 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease12) == -1)
                        memoryFree (stringStorageToRelease12);
                }
                if (*(std::uint8_t*)(authState + 225) != 0)
                {
                    temporaryPointer13 = *(char**)(authState + 248);
                    temporaryPointer47 = temporaryPointer13;
                    if (temporaryPointer13 - 16 != (char*)&emptyJuceStringStorage)
                        _InterlockedIncrement ((volatile std::int32_t*)temporaryPointer13 - 4);
                    opaqueValue14 = opaqueValue9 | 4;
                    temporaryPointer15 = temporaryPointer47;
                }
                else
                {
                    temporaryPointer15 = &emptyJuceStringCharacters;
                    temporaryPointer47 = &emptyJuceStringCharacters;
                    opaqueValue14 = opaqueValue9 | 8;
                    temporaryPointer13 = &emptyJuceStringCharacters;
                }
                sub_18021CF50 (&temporaryPointer46, authState + 56, &temporaryPointer47);
                if ((opaqueValue14 & 8) != 0)
                {
                    opaqueValue14 &= ~8u;
                    stringStorageToRelease16 = temporaryPointer15 - 16;
                    if (temporaryPointer15 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease16) == -1)
                        memoryFree (stringStorageToRelease16);
                }
                if ((opaqueValue14 & 4) != 0)
                {
                    stringStorageToRelease17 = temporaryPointer13 - 16;
                    if (temporaryPointer13 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease17) == -1)
                        memoryFree (stringStorageToRelease17);
                }
                temporaryPointer18 = temporaryPointer46;
                if (*(std::uint8_t*)authState == 0)
                    goto label43;
                temporaryPointer19 = *(std::uint8_t**)(sub_180238810 (editorCallback) + 1056);
                if (temporaryPointer19 != temporaryPointer18)
                {
                    opaqueValue20 = temporaryPointer18 - temporaryPointer19;
                    do
                    {
                        opaqueValue21 = temporaryPointer19[opaqueValue20];
                        opaqueValue22 = *temporaryPointer19 - opaqueValue21;
                        if (opaqueValue22 != 0)
                            break;
                        ++temporaryPointer19;
                    } while (opaqueValue21 != 0);
                    if (opaqueValue22 != 0)
                    {
                    label43:
                        temporaryPointer47 = (char*)&unk_180F51130;
                        opaqueValue48 = 0;
                        if (*(std::uint64_t*)editorCallback != 0)
                            opaqueValue23 = *(std::uint64_t*)(*(std::uint64_t*)editorCallback + 16LL);
                        else
                            LODWORD (opaqueValue23) = 0;
                        opaqueValue24 = cppRttiDynamicCast (
                            opaqueValue23,
                            0,
                            (unsigned int)&juce::Component `RTTI Type Descriptor',
                            (unsigned int)&FadModel1AudioProcessorEditor `RTTI Type Descriptor',
                            0);
                        temporaryPointer25 = *(char**)(opaqueValue24 + 1040);
                        *(std::uint64_t*)(opaqueValue24 + 1040) = temporaryPointer47;
                        temporaryPointer47 = temporaryPointer25;
                        opaqueValue26 = *(std::uint64_t*)(opaqueValue24 + 1048);
                        *(std::uint64_t*)(opaqueValue24 + 1048) = opaqueValue48;
                        opaqueValue48 = opaqueValue26;
                        callbackFunction27 = *((std::int64_t (**)())temporaryPointer47 + 11);
                        if (callbackFunction27 != guard_check_icall_nop)
                            ((void (*) (std::int64_t*))callbackFunction27) (&opaqueValue48);
                        if (*(std::uint64_t*)editorCallback != 0)
                            opaqueValue28 = *(std::uint64_t*)(*(std::uint64_t*)editorCallback + 16LL);
                        else
                            LODWORD (opaqueValue28) = 0;
                        opaqueValue29 = cppRttiDynamicCast (
                            opaqueValue28,
                            0,
                            (unsigned int)&juce::Component `RTTI Type Descriptor',
                            (unsigned int)&FadModel1AudioProcessorEditor `RTTI Type Descriptor',
                            0);
                        juceStringClear (opaqueValue29 + 1056);
                        if (*(std::uint64_t*)editorCallback != 0)
                            opaqueValue30 = *(std::uint64_t*)(*(std::uint64_t*)editorCallback + 16LL);
                        else
                            LODWORD (opaqueValue30) = 0;
                        opaqueValue31 = cppRttiDynamicCast (
                            opaqueValue30,
                            0,
                            (unsigned int)&juce::Component `RTTI Type Descriptor',
                            (unsigned int)&FadModel1AudioProcessorEditor `RTTI Type Descriptor',
                            0);
                        opaqueValue32 = sub_180065570 (*(std::uint64_t*)(opaqueValue31 + 328));
                        temporaryPointer47 = &emptyJuceStringCharacters;
                        temporaryPointer49 = &unk_180F51130;
                        opaqueValue50 = 0;
                        (*(void (**) (std::int64_t)) (*(std::uint64_t*)(opaqueValue32 + 12160) + 88LL)) (opaqueValue32 + 12168);
                        temporaryPointer33 = temporaryPointer49;
                        *(std::uint64_t*)(opaqueValue32 + 12160) = temporaryPointer49;
                        ((void (*) (std::int64_t, std::int64_t*))temporaryPointer33[12]) (opaqueValue32 + 12168, &opaqueValue50);
                        stringStorageToRelease34 = (void*)(_InterlockedExchange64 ((volatile std::int64_t*)(opaqueValue32 + 12176), (std::int64_t)&emptyJuceStringCharacters) - 16);
                        if (stringStorageToRelease34 != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease34) == -1)
                            memoryFree (stringStorageToRelease34);
                        callbackFunction35 = (std::int64_t (*)())temporaryPointer49[11];
                        if (callbackFunction35 != guard_check_icall_nop)
                            ((void (*) (std::int64_t*))callbackFunction35) (&opaqueValue50);
                    }
                }
                if (*(std::uint64_t*)editorCallback != 0)
                    opaqueValue36 = *(std::uint64_t*)(*(std::uint64_t*)editorCallback + 16LL);
                else
                    LODWORD (opaqueValue36) = 0;
                opaqueValue37 = cppRttiDynamicCast (
                    opaqueValue36,
                    0,
                    (unsigned int)&juce::Component `RTTI Type Descriptor',
                    (unsigned int)&FadModel1AudioProcessorEditor `RTTI Type Descriptor',
                    0);
                editorSynchronizeWebViewAuthState (opaqueValue37, authState);
                if (*(std::uint64_t*)editorCallback != 0)
                    opaqueValue38 = *(std::uint64_t*)(*(std::uint64_t*)editorCallback + 16LL);
                else
                    LODWORD (opaqueValue38) = 0;
                opaqueValue39 = cppRttiDynamicCast (
                    opaqueValue38,
                    0,
                    (unsigned int)&juce::Component `RTTI Type Descriptor',
                    (unsigned int)&FadModel1AudioProcessorEditor `RTTI Type Descriptor',
                    0);
                onboardingCheckStartupRequirements (opaqueValue39, authState);
                if (*(std::uint64_t*)editorCallback != 0)
                    opaqueValue40 = *(std::uint64_t*)(*(std::uint64_t*)editorCallback + 16LL);
                else
                    LODWORD (opaqueValue40) = 0;
                opaqueValue41 = cppRttiDynamicCast (
                    opaqueValue40,
                    0,
                    (unsigned int)&juce::Component `RTTI Type Descriptor',
                    (unsigned int)&FadModel1AudioProcessorEditor `RTTI Type Descriptor',
                    0);
                editorSynchronizeOnboardingVisibility (opaqueValue41, opaqueValue42);
                if (*(std::uint64_t*)editorCallback != 0)
                    opaqueValue43 = *(std::uint64_t*)(*(std::uint64_t*)editorCallback + 16LL);
                else
                    LODWORD (opaqueValue43) = 0;
                result = (std::uint64_t*)cppRttiDynamicCast (
                    opaqueValue43,
                    0,
                    (unsigned int)&juce::Component `RTTI Type Descriptor',
                    (unsigned int)&FadModel1AudioProcessorEditor `RTTI Type Descriptor',
                    0);
                if (result[119] != 0)
                {
                    opaqueValue44 = sub_180238810 (editorCallback);
                    result = (std::uint64_t*)sub_180727450 (*(std::uint64_t*)(opaqueValue44 + 952));
                }
                stringStorageToRelease45 = temporaryPointer18 - 16;
                if (temporaryPointer18 - 16 != (std::uint8_t*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease45) == -1)
                {
                    return (std::uint64_t*)memoryFree (stringStorageToRelease45);
                }
            }
        }
    }
    return result;
}
