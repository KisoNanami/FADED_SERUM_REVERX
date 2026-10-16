#include <cstdint>

// ===== Editor_CompleteOnboardingFromFallback @ 0x1802261c0 size=414 =====
std::int64_t editorCompleteOnboardingFromFallback (std::int64_t* editorWeakReference)
{
    std::int64_t result; // rax
    std::int64_t opaqueValue2; // rcx
    std::int64_t opaqueValue3; // rsi
    std::int64_t opaqueValue4; // rbx
    std::int64_t opaqueValue5; // rdi
    std::int64_t opaqueValue6; // rcx
    std::int64_t opaqueValue7; // rbx
    std::uint64_t stackStorage8[7]; // [rsp+30h] [rbp-48h] BYREF
    std::uint64_t* temporaryPointer9; // [rsp+68h] [rbp-10h]
    std::int64_t opaqueValue10; // [rsp+80h] [rbp+8h] BYREF
    std::int64_t opaqueValue11; // [rsp+88h] [rbp+10h]

    result = *editorWeakReference;
    if (*editorWeakReference != 0)
    {
        opaqueValue2 = *(std::uint64_t*)(result + 16);
        if (opaqueValue2 != 0)
        {
            result = cppRttiDynamicCast (
                opaqueValue2,
                0,
                (unsigned int)&juce::Component `RTTI Type Descriptor',
                (unsigned int)&FadModel1AudioProcessorEditor `RTTI Type Descriptor',
                0);
            opaqueValue3 = result;
            if (*(std::uint64_t*)(result + 928) != 0 || *(std::uint64_t*)(result + 976) != 0 && *(std::uint64_t*)(result + 968) != 0 && *(std::uint64_t*)(result + 984) != 0 && *(std::uint64_t*)(result + 992) != 0)
            {
                opaqueValue4 = *(std::uint64_t*)(*(std::uint64_t*)(result + 328) + 475552LL);
                opaqueValue5 = *(std::uint64_t*)(opaqueValue4 + 40);
                EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue5 + 1168));
                LOBYTE (opaqueValue4) = **(std::uint8_t**)(opaqueValue4 + 40);
                LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue5 + 1168));
                if ((std::uint8_t)opaqueValue4 != 0)
                {
                    sub_180024A10 (&opaqueValue10, opaqueValue3);
                    opaqueValue6 = *(std::uint64_t*)(*(std::uint64_t*)(opaqueValue3 + 328) + 475552LL);
                    opaqueValue7 = opaqueValue10;
                    opaqueValue11 = opaqueValue10;
                    if (opaqueValue10 != 0)
                        _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue10 + 8));
                    temporaryPointer9 = nullptr;
                    stackStorage8[0] = ___7___Func_impl_no_alloc_V_lambda_1___1__completeOnboardingFromFallback_FadModel1AudioProcessorEditor__AEAAXXZ_X_N_std__6B_;
                    stackStorage8[1] = opaqueValue7;
                    if (opaqueValue7 != 0)
                        _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue7 + 8));
                    temporaryPointer9 = stackStorage8;
                    result = sub_1803613F0 (opaqueValue6, stackStorage8);
                    if (opaqueValue7 != 0)
                    {
                        result = (unsigned int)_InterlockedExchangeAdd ((volatile std::int32_t*)(opaqueValue7 + 8), 0xFFFFFFFF);
                        if ((std::uint32_t)result == 1)
                            result = (**(std::int64_t (***) (std::int64_t, std::int64_t))opaqueValue7) (opaqueValue7, 1);
                    }
                    if (opaqueValue7 != 0 && _InterlockedExchangeAdd ((volatile std::int32_t*)(opaqueValue7 + 8), 0xFFFFFFFF) == 1)
                        return (**(std::int64_t (***) (std::int64_t, std::int64_t))opaqueValue7) (opaqueValue7, 1);
                }
                else
                {
                    return editorOpenAccountHandoff (opaqueValue3, 1);
                }
            }
        }
    }
    return result;
}

// ===== Editor_CompleteOnboardingFromFallbackThunk @ 0x18023bb80 size=31 =====
std::uint64_t* editorInvokeFallbackCompletion (std::int64_t callbackContext, std::uint64_t* outputResult)
{
    std::int64_t opaqueValue2; // rax

    *outputResult = ___7___Func_impl_no_alloc_V_lambda_1___1__completeOnboardingFromFallback_FadModel1AudioProcessorEditor__AEAAXXZ_X_N_std__6B_;
    opaqueValue2 = *(std::uint64_t*)(callbackContext + 8);
    outputResult[1] = opaqueValue2;
    if (opaqueValue2 != 0)
        _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue2 + 8));
    return outputResult;
}

// ===== Editor_OnboardingAcceptCallback @ 0x180225f70 size=589 =====
std::int64_t editorOnOnboardingAcceptRequest (std::int64_t* editorWeakReference, std::int64_t acceptResult)
{
    std::int64_t opaqueValue4; // rcx
    std::uint64_t* temporaryPointer5; // rax
    std::int64_t opaqueValue6; // rcx
    std::int64_t opaqueValue7; // rsi
    std::int64_t opaqueValue8; // rax
    std::int64_t opaqueValue9; // rcx
    std::int64_t opaqueValue10; // rdx
    std::int64_t opaqueValue11; // rcx
    std::uint64_t* allocatedObject12; // rdi
    std::int64_t opaqueValue13; // rdx
    std::int64_t result; // rax
    std::int64_t opaqueValue15; // rdx
    std::int64_t (***callbackFunction16) (std::uint64_t, std::int64_t); // rcx
    std::int64_t opaqueValue17; // rcx
    std::int64_t opaqueValue18; // rcx
    std::uint8_t stackStorage19[8]; // [rsp+30h] [rbp-D8h] BYREF
    std::uint8_t* temporaryPointer20; // [rsp+38h] [rbp-D0h]
    std::uint8_t stackStorage21[56]; // [rsp+40h] [rbp-C8h] BYREF
    std::uint64_t* temporaryPointer22; // [rsp+78h] [rbp-90h]
    std::int64_t opaqueValue23; // [rsp+80h] [rbp-88h]
    std::int64_t opaqueValue24; // [rsp+90h] [rbp-78h]
    std::uint8_t stackStorage25[56]; // [rsp+98h] [rbp-70h] BYREF
    std::uint8_t* temporaryPointer26; // [rsp+D0h] [rbp-38h]

    opaqueValue23 = acceptResult;
    if (*editorWeakReference != 0)
    {
        opaqueValue4 = *(std::uint64_t*)(*editorWeakReference + 16);
        if (opaqueValue4 != 0)
        {
            temporaryPointer5 = (std::uint64_t*)cppRttiDynamicCast (
                opaqueValue4,
                0,
                (unsigned int)&juce::Component `RTTI Type Descriptor',
                (unsigned int)&FadModel1AudioProcessorEditor `RTTI Type Descriptor',
                0);
            if (temporaryPointer5[116] != 0 || temporaryPointer5[122] != 0 && temporaryPointer5[121] != 0 && temporaryPointer5[123] != 0 && temporaryPointer5[124] != 0)
            {
                if (*editorWeakReference != 0)
                    opaqueValue6 = *(std::uint64_t*)(*editorWeakReference + 16);
                else
                    LODWORD (opaqueValue6) = 0;
                opaqueValue7 = *(std::uint64_t*)(*(std::uint64_t*)(cppRttiDynamicCast (
                                                                       opaqueValue6,
                                                                       0,
                                                                       (unsigned int)&juce::Component `RTTI Type Descriptor',
                                                                       (unsigned int)&FadModel1AudioProcessorEditor `RTTI Type Descriptor',
                                                                       0) +
                                                                   328) +
                                                 475552LL);
                temporaryPointer20 = stackStorage21;
                opaqueValue8 = *editorWeakReference;
                opaqueValue24 = opaqueValue8;
                if (opaqueValue8 != 0)
                    _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue8 + 8));
                temporaryPointer26 = nullptr;
                opaqueValue9 = *(std::uint64_t*)(acceptResult + 56);
                if (opaqueValue9 == 0)
                    goto label19;
                if (opaqueValue9 == acceptResult)
                {
                    temporaryPointer26 = (std::uint8_t*)(*(std::int64_t (**) (std::int64_t, std::uint8_t*)) (*(std::uint64_t*)opaqueValue9 + 8LL)) (opaqueValue9, stackStorage25);
                    opaqueValue11 = *(std::uint64_t*)(acceptResult + 56);
                    if (opaqueValue11 == 0)
                    {
                    label19:
                        temporaryPointer22 = nullptr;
                        allocatedObject12 = (std::uint64_t*)memoryAllocateObject (80);
                        *allocatedObject12 = ___7___Func_impl_no_alloc_V_lambda_1___1___R1_1__configureOnboardingCallbacks_FadModel1AudioProcessorEditor__AEAAXAEAVOnboardingPanel_ui_fadmodel1___Z_QEAA_V__function___A6AX_N_Z_std___Z_X_N_std__6B_;
                        opaqueValue13 = opaqueValue24;
                        allocatedObject12[1] = opaqueValue24;
                        if (opaqueValue13 != 0)
                            _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue13 + 8));
                        allocatedObject12[9] = 0;
                        sub_180080DB0 (allocatedObject12 + 2, stackStorage25);
                        temporaryPointer22 = allocatedObject12;
                        result = sub_1803613F0 (opaqueValue7, stackStorage21);
                        if (temporaryPointer26 != nullptr)
                        {
                            LOBYTE (opaqueValue15) = temporaryPointer26 != stackStorage25;
                            result = (*(std::int64_t (**) (std::uint8_t*, std::int64_t)) (*(std::uint64_t*)temporaryPointer26 + 32LL)) (temporaryPointer26, opaqueValue15);
                            temporaryPointer26 = nullptr;
                        }
                        callbackFunction16 = (std::int64_t (***) (std::uint64_t, std::int64_t))opaqueValue24;
                        if (opaqueValue24 != 0)
                        {
                            result = (unsigned int)_InterlockedExchangeAdd ((volatile std::int32_t*)(opaqueValue24 + 8), 0xFFFFFFFF);
                            if ((std::uint32_t)result == 1)
                                result = (**callbackFunction16) (callbackFunction16, 1);
                        }
                        goto label28;
                    }
                    LOBYTE (opaqueValue10) = opaqueValue11 != acceptResult;
                    (*(void (**) (std::int64_t, std::int64_t)) (*(std::uint64_t*)opaqueValue11 + 32LL)) (opaqueValue11, opaqueValue10);
                }
                else
                {
                    temporaryPointer26 = *(std::uint8_t**)(acceptResult + 56);
                }
                *(std::uint64_t*)(acceptResult + 56) = 0;
                goto label19;
            }
        }
    }
    stackStorage19[0] = 0;
    opaqueValue17 = *(std::uint64_t*)(acceptResult + 56);
    if (opaqueValue17 == 0)
    {
        Concurrency::cancel_current_task();
        JUMPOUT (0x1802261BDLL);
    }
    result = (*(std::int64_t (**) (std::int64_t, std::uint8_t*)) (*(std::uint64_t*)opaqueValue17 + 16LL)) (opaqueValue17, stackStorage19);
label28:
    opaqueValue18 = *(std::uint64_t*)(acceptResult + 56);
    if (opaqueValue18 != 0)
    {
        LOBYTE (opaqueValue15) = opaqueValue18 != acceptResult;
        result = (*(std::int64_t (**) (std::int64_t, std::int64_t)) (*(std::uint64_t*)opaqueValue18 + 32LL)) (opaqueValue18, opaqueValue15);
        *(std::uint64_t*)(acceptResult + 56) = 0;
    }
    return result;
}

// ===== Editor_OnboardingExitTick @ 0x18023bb70 size=12 =====
std::uint64_t* editorInvokeOnboardingExitTick (std::int64_t callbackContext, char* callbackArgument)
{
    return editorOnOnboardingError (callbackContext + 8, *callbackArgument);
}

// ===== Editor_OnOnboardingAccepted @ 0x180225520 size=306 =====
std::int64_t editorOpenAccountHandoff (std::int64_t editor, int actionKind)
{
    std::int64_t opaqueValue4; // rbx
    std::int64_t opaqueValue5; // rdi
    std::int64_t opaqueValue6; // rax
    std::int64_t opaqueValue7; // rax
    std::int64_t opaqueValue9; // [rsp+20h] [rbp-1C8h]
    std::uint8_t stackStorage10[88]; // [rsp+28h] [rbp-1C0h] BYREF
    std::uint8_t stackStorage11[8]; // [rsp+80h] [rbp-168h] BYREF
    std::uint8_t* stackStorage12[39]; // [rsp+88h] [rbp-160h] BYREF

    opaqueValue4 = *(std::uint64_t*)(*(std::uint64_t*)(editor + 328) + 475552LL);
    opaqueValue5 = *(std::uint64_t*)(opaqueValue4 + 40);
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue5 + 1168));
    authManagerSnapshotState ((std::int64_t)stackStorage11, *(std::uint64_t*)(opaqueValue4 + 40));
    LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue5 + 1168));
    if (actionKind == 3)
    {
        opaqueValue6 = onboardingBuildAccountHandoffUrl ((std::int64_t)stackStorage10, 3, stackStorage12);
        winShellOpenUrlOrEmail (opaqueValue6);
        sub_18002C950 (stackStorage10);
    }
    else if (*stackStorage12[0] != 0)
    {
        *(std::uint8_t*)(editor + 812) = 0;
        opaqueValue7 = onboardingBuildAccountHandoffUrl ((std::int64_t)stackStorage10, actionKind, stackStorage12);
        winShellOpenUrlOrEmail (opaqueValue7);
        sub_18002C950 (stackStorage10);
        sub_180361350 (*(std::uint64_t*)(*(std::uint64_t*)(editor + 328) + 475552LL));
    }
    else
    {
        LODWORD (opaqueValue9) = actionKind;
        BYTE4 (opaqueValue9) = 1;
        *(std::uint64_t*)(editor + 808) = opaqueValue9;
        sub_1802252D0 (editor);
    }
    return sub_180058EA0 (stackStorage11);
}

// ===== Editor_OnOnboardingError @ 0x180225850 size=570 =====
std::uint64_t* editorOnOnboardingError (std::int64_t editor, char retryRequested)
{
    std::uint64_t* result; // rax
    std::int64_t opaqueValue5; // rcx
    std::int64_t opaqueValue6; // rcx
    std::int64_t opaqueValue7; // rbx
    std::int64_t opaqueValue8; // rdi
    std::int64_t opaqueValue9; // rax
    std::int64_t opaqueValue10; // rax
    std::int64_t opaqueValue11; // rbx
    std::int64_t opaqueValue12; // rbx
    void* temporaryPointer13; // rcx
    std::int64_t opaqueValue14; // rax
    std::int64_t opaqueValue15; // rax
    std::int64_t opaqueValue16; // rcx
    std::int64_t opaqueValue17; // rcx
    std::int64_t opaqueValue18; // rax
    std::int64_t opaqueValue19; // rdx
    std::uint64_t stackStorage20[2]; // [rsp+30h] [rbp-168h] BYREF
    std::uint8_t stackStorage21[320]; // [rsp+40h] [rbp-158h] BYREF

    result = *(std::uint64_t**)editor;
    if (*(std::uint64_t*)editor != 0)
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
                if (*(std::uint64_t*)editor != 0)
                    opaqueValue6 = *(std::uint64_t*)(*(std::uint64_t*)editor + 16LL);
                else
                    LODWORD (opaqueValue6) = 0;
                opaqueValue7 = *(std::uint64_t*)(*(std::uint64_t*)(cppRttiDynamicCast (
                                                                       opaqueValue6,
                                                                       0,
                                                                       (unsigned int)&juce::Component `RTTI Type Descriptor',
                                                                       (unsigned int)&FadModel1AudioProcessorEditor `RTTI Type Descriptor',
                                                                       0) +
                                                                   328) +
                                                 475552LL);
                opaqueValue8 = *(std::uint64_t*)(opaqueValue7 + 40);
                EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue8 + 1168));
                authManagerSnapshotState ((std::int64_t)stackStorage21, *(std::uint64_t*)(opaqueValue7 + 40));
                LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue8 + 1168));
                if (retryRequested != 0)
                {
                    if (stackStorage21[0] != 0)
                    {
                        *(std::uint8_t*)(sub_180238810 (editor) + 784) = 1;
                        opaqueValue15 = sub_180238810 (editor);
                        opaqueValue16 = *(std::uint64_t*)(opaqueValue15 + 928);
                        if (opaqueValue16 != 0)
                            opaqueValue17 = opaqueValue16 + 153208;
                        else
                            opaqueValue17 = *(std::uint64_t*)(opaqueValue15 + 968);
                        juceComponentSetVisible (opaqueValue17, 0);
                        opaqueValue18 = sub_180238810 (editor);
                        editorSynchronizeOnboardingVisibility (opaqueValue18, opaqueValue19);
                    }
                    else
                    {
                        opaqueValue14 = sub_180238810 (editor);
                        onboardingCheckStartupRequirements (opaqueValue14, (std::int64_t)stackStorage21);
                    }
                }
                else
                {
                    *(std::uint8_t*)(sub_180238810 (editor) + 784) = 0;
                    opaqueValue9 = sub_180238810 (editor);
                    onboardingCheckStartupRequirements (opaqueValue9, (std::int64_t)stackStorage21);
                    opaqueValue10 = sub_180238810 (editor);
                    opaqueValue11 = *(std::uint64_t*)(opaqueValue10 + 928);
                    if (opaqueValue11 != 0)
                        opaqueValue12 = opaqueValue11 + 153208;
                    else
                        opaqueValue12 = *(std::uint64_t*)(opaqueValue10 + 968);
                    sub_1800B3260 (stackStorage20, &unk_180F61D50);
                    onboardingShowSetupError (opaqueValue12, (std::int64_t)stackStorage20);
                    temporaryPointer13 = (void*)(stackStorage20[0] - 16LL);
                    if ((void*)(stackStorage20[0] - 16LL) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)temporaryPointer13) == -1)
                    {
                        memoryFree (temporaryPointer13);
                    }
                }
                return (std::uint64_t*)sub_180058EA0 (stackStorage21);
            }
        }
    }
    return result;
}

// ===== Editor_ScheduleOnboardingExit @ 0x18023b960 size=374 =====
void editorScheduleOnboardingExit (std::int64_t editor, char* callbackArgument)
{
    std::int64_t opaqueValue2; // rbx
    char opaqueValue3; // di
    std::int64_t opaqueValue4; // rcx
    std::int64_t opaqueValue5; // rcx
    std::uint64_t* temporaryPointer6; // rax
    std::int64_t opaqueValue7; // rcx
    std::int64_t opaqueValue8; // rax
    std::int64_t opaqueValue9; // rbx
    std::uint64_t stackStorage10[7]; // [rsp+30h] [rbp-48h] BYREF
    std::uint64_t* temporaryPointer11; // [rsp+68h] [rbp-10h]
    std::int64_t opaqueValue12; // [rsp+80h] [rbp+8h] BYREF
    std::int64_t opaqueValue13; // [rsp+88h] [rbp+10h]

    opaqueValue2 = editor + 8;
    opaqueValue3 = *callbackArgument;
    opaqueValue4 = *(std::uint64_t*)(editor + 8);
    if (opaqueValue4 != 0)
    {
        opaqueValue5 = *(std::uint64_t*)(opaqueValue4 + 16);
        if (opaqueValue5 != 0)
        {
            temporaryPointer6 = (std::uint64_t*)cppRttiDynamicCast (
                opaqueValue5,
                0,
                (unsigned int)&juce::Component `RTTI Type Descriptor',
                (unsigned int)&FadModel1AudioProcessorEditor `RTTI Type Descriptor',
                0);
            if (temporaryPointer6[116] != 0 || temporaryPointer6[122] != 0 && temporaryPointer6[121] != 0 && temporaryPointer6[123] != 0 && temporaryPointer6[124] != 0)
            {
                LOBYTE (opaqueValue12) = opaqueValue3;
                opaqueValue7 = *(std::uint64_t*)(opaqueValue2 + 64);
                if (opaqueValue7 == 0)
                {
                    Concurrency::cancel_current_task();
                    JUMPOUT (0x18023BAD5LL);
                }
                (*(void (**) (std::int64_t, std::int64_t*)) (*(std::uint64_t*)opaqueValue7 + 16LL)) (opaqueValue7, &opaqueValue12);
                if (opaqueValue3 != 0)
                {
                    opaqueValue8 = sub_180238810 (opaqueValue2);
                    sub_180024A10 (&opaqueValue12, opaqueValue8);
                    opaqueValue9 = opaqueValue12;
                    opaqueValue13 = opaqueValue12;
                    if (opaqueValue12 != 0)
                        _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue12 + 8));
                    temporaryPointer11 = nullptr;
                    stackStorage10[0] = ___7___Func_impl_no_alloc_V_lambda_1___1__scheduleOnboardingExit_FadModel1AudioProcessorEditor__AEAAXXZ_X__V_std__6B_;
                    stackStorage10[1] = opaqueValue9;
                    if (opaqueValue9 != 0)
                        _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue9 + 8));
                    temporaryPointer11 = stackStorage10;
                    sub_180194320 (360, stackStorage10);
                    if (opaqueValue9 != 0 && _InterlockedExchangeAdd ((volatile std::int32_t*)(opaqueValue9 + 8), 0xFFFFFFFF) == 1)
                        (**(void (***) (std::int64_t, std::int64_t))opaqueValue9) (opaqueValue9, 1);
                    if (opaqueValue9 != 0 && _InterlockedExchangeAdd ((volatile std::int32_t*)(opaqueValue9 + 8), 0xFFFFFFFF) == 1)
                        (**(void (***) (std::int64_t, std::int64_t))opaqueValue9) (opaqueValue9, 1);
                }
            }
        }
    }
}

// ===== Editor_ScheduleOnboardingExitThunk @ 0x18023bbc0 size=31 =====
std::uint64_t* editorInvokeExitScheduler (std::int64_t callbackContext, std::uint64_t* outputResult)
{
    std::int64_t opaqueValue2; // rax

    *outputResult = ___7___Func_impl_no_alloc_V_lambda_1___1__scheduleOnboardingExit_FadModel1AudioProcessorEditor__AEAAXXZ_X__V_std__6B_;
    opaqueValue2 = *(std::uint64_t*)(callbackContext + 8);
    outputResult[1] = opaqueValue2;
    if (opaqueValue2 != 0)
        _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue2 + 8));
    return outputResult;
}
