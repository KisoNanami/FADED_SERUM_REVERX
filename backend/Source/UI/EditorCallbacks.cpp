#include <cstdint>

// ===== Editor_ConfigureOnboardingCallbacks @ 0x180225a90 size=1239 =====
std::int64_t editorConfigureOnboardingCallbacks (std::int64_t editor, std::int64_t onboardingPanel)
{
    std::int64_t opaqueValue4; // rbx
    std::int64_t opaqueValue5; // rdx
    std::int64_t opaqueValue6; // rdx
    std::int64_t opaqueValue7; // rdx
    std::int64_t opaqueValue8; // rdx
    std::int64_t opaqueValue9; // rdx
    std::int64_t opaqueValue10; // rdx
    std::int64_t opaqueValue11; // rdx
    std::int64_t opaqueValue12; // rdx
    std::int64_t opaqueValue13; // rdi
    std::int64_t opaqueValue14; // rsi
    std::int64_t result; // rax
    std::int64_t opaqueValue16; // [rsp+20h] [rbp-E0h] BYREF
    std::uint64_t stackStorage17[7]; // [rsp+30h] [rbp-D0h] BYREF
    std::uint64_t* temporaryPointer18; // [rsp+68h] [rbp-98h]
    std::uint64_t stackStorage19[7]; // [rsp+70h] [rbp-90h] BYREF
    std::uint64_t* temporaryPointer20; // [rsp+A8h] [rbp-58h]
    std::uint64_t stackStorage21[7]; // [rsp+B0h] [rbp-50h] BYREF
    std::uint64_t* temporaryPointer22; // [rsp+E8h] [rbp-18h]
    std::uint64_t stackStorage23[7]; // [rsp+F0h] [rbp-10h] BYREF
    std::uint64_t* temporaryPointer24; // [rsp+128h] [rbp+28h]
    std::uint64_t stackStorage25[7]; // [rsp+130h] [rbp+30h] BYREF
    std::uint64_t* temporaryPointer26; // [rsp+168h] [rbp+68h]
    std::uint64_t stackStorage27[7]; // [rsp+170h] [rbp+70h] BYREF
    std::uint64_t* temporaryPointer28; // [rsp+1A8h] [rbp+A8h]
    std::uint64_t stackStorage29[7]; // [rsp+1B0h] [rbp+B0h] BYREF
    std::uint64_t* temporaryPointer30; // [rsp+1E8h] [rbp+E8h]
    std::uint64_t stackStorage31[7]; // [rsp+1F0h] [rbp+F0h] BYREF
    std::uint64_t* temporaryPointer32; // [rsp+228h] [rbp+128h]
    std::uint8_t stackStorage33[320]; // [rsp+230h] [rbp+130h] BYREF

    sub_180024A10 (&opaqueValue16, editor);
    opaqueValue4 = opaqueValue16;
    if (opaqueValue16 != 0)
        _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue16 + 8));
    temporaryPointer18 = nullptr;
    stackStorage17[0] = ___7___Func_impl_no_alloc_V_lambda_1___1__configureOnboardingCallbacks_FadModel1AudioProcessorEditor__AEAAXAEAVOnboardingPanel_ui_fadmodel1___Z_XV__function___A6AX_N_Z_std___std__6B_;
    stackStorage17[1] = opaqueValue4;
    if (opaqueValue4 != 0)
        _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue4 + 8));
    temporaryPointer18 = stackStorage17;
    sub_1800850A0 (stackStorage17, onboardingPanel + 184);
    if (temporaryPointer18 != nullptr)
    {
        LOBYTE (opaqueValue5) = temporaryPointer18 != stackStorage17;
        (*(void (**) (std::uint64_t*, std::int64_t)) (*temporaryPointer18 + 32LL)) (temporaryPointer18, opaqueValue5);
    }
    if (opaqueValue4 != 0)
    {
        if (_InterlockedExchangeAdd ((volatile std::int32_t*)(opaqueValue4 + 8), 0xFFFFFFFF) == 1)
            (**(void (***) (std::int64_t, std::int64_t))opaqueValue4) (opaqueValue4, 1);
        _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue4 + 8));
    }
    temporaryPointer20 = nullptr;
    stackStorage19[0] = std::X$$V::Z::_Func_impl_no_alloc<`FadModel1AudioProcessorEditor::configureOnboardingCallbacks'::`2'::_lambda_2_, fadmodel1::ui::AXAEAVOnboardingPanel&>::`vftable';
    stackStorage19[1] = opaqueValue4;
    if (opaqueValue4 != 0)
        _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue4 + 8));
    temporaryPointer20 = stackStorage19;
    sub_1800850A0 (stackStorage19, onboardingPanel + 248);
    if (temporaryPointer20 != nullptr)
    {
        LOBYTE (opaqueValue6) = temporaryPointer20 != stackStorage19;
        (*(void (**) (std::uint64_t*, std::int64_t)) (*temporaryPointer20 + 32LL)) (temporaryPointer20, opaqueValue6);
    }
    if (opaqueValue4 != 0)
    {
        if (_InterlockedExchangeAdd ((volatile std::int32_t*)(opaqueValue4 + 8), 0xFFFFFFFF) == 1)
            (**(void (***) (std::int64_t, std::int64_t))opaqueValue4) (opaqueValue4, 1);
        _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue4 + 8));
    }
    temporaryPointer22 = nullptr;
    stackStorage21[0] = std::X$$V::Z::_Func_impl_no_alloc<`FadModel1AudioProcessorEditor::configureOnboardingCallbacks'::`2'::_lambda_3_, fadmodel1::ui::AXAEAVOnboardingPanel&>::`vftable';
    stackStorage21[1] = opaqueValue4;
    if (opaqueValue4 != 0)
        _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue4 + 8));
    temporaryPointer22 = stackStorage21;
    sub_1800850A0 (stackStorage21, onboardingPanel + 312);
    if (temporaryPointer22 != nullptr)
    {
        LOBYTE (opaqueValue7) = temporaryPointer22 != stackStorage21;
        (*(void (**) (std::uint64_t*, std::int64_t)) (*temporaryPointer22 + 32LL)) (temporaryPointer22, opaqueValue7);
    }
    if (opaqueValue4 != 0)
    {
        if (_InterlockedExchangeAdd ((volatile std::int32_t*)(opaqueValue4 + 8), 0xFFFFFFFF) == 1)
            (**(void (***) (std::int64_t, std::int64_t))opaqueValue4) (opaqueValue4, 1);
        _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue4 + 8));
    }
    temporaryPointer24 = nullptr;
    stackStorage23[0] = std::X$$V::Z::_Func_impl_no_alloc<`FadModel1AudioProcessorEditor::configureOnboardingCallbacks'::`2'::_lambda_4_, fadmodel1::ui::AXAEAVOnboardingPanel&>::`vftable';
    stackStorage23[1] = opaqueValue4;
    if (opaqueValue4 != 0)
        _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue4 + 8));
    temporaryPointer24 = stackStorage23;
    sub_1800850A0 (stackStorage23, onboardingPanel + 376);
    if (temporaryPointer24 != nullptr)
    {
        LOBYTE (opaqueValue8) = temporaryPointer24 != stackStorage23;
        (*(void (**) (std::uint64_t*, std::int64_t)) (*temporaryPointer24 + 32LL)) (temporaryPointer24, opaqueValue8);
    }
    if (opaqueValue4 != 0)
    {
        if (_InterlockedExchangeAdd ((volatile std::int32_t*)(opaqueValue4 + 8), 0xFFFFFFFF) == 1)
            (**(void (***) (std::int64_t, std::int64_t))opaqueValue4) (opaqueValue4, 1);
        _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue4 + 8));
    }
    temporaryPointer26 = nullptr;
    stackStorage25[0] = std::X$$V::Z::_Func_impl_no_alloc<`FadModel1AudioProcessorEditor::configureOnboardingCallbacks'::`2'::_lambda_5_, fadmodel1::ui::AXAEAVOnboardingPanel&>::`vftable';
    stackStorage25[1] = opaqueValue4;
    if (opaqueValue4 != 0)
        _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue4 + 8));
    temporaryPointer26 = stackStorage25;
    sub_1800850A0 (stackStorage25, onboardingPanel + 440);
    if (temporaryPointer26 != nullptr)
    {
        LOBYTE (opaqueValue9) = temporaryPointer26 != stackStorage25;
        (*(void (**) (std::uint64_t*, std::int64_t)) (*temporaryPointer26 + 32LL)) (temporaryPointer26, opaqueValue9);
    }
    if (opaqueValue4 != 0)
    {
        if (_InterlockedExchangeAdd ((volatile std::int32_t*)(opaqueValue4 + 8), 0xFFFFFFFF) == 1)
            (**(void (***) (std::int64_t, std::int64_t))opaqueValue4) (opaqueValue4, 1);
        _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue4 + 8));
    }
    temporaryPointer28 = nullptr;
    stackStorage27[0] = std::X$$V::Z::_Func_impl_no_alloc<`FadModel1AudioProcessorEditor::configureOnboardingCallbacks'::`2'::_lambda_6_, fadmodel1::ui::AXAEAVOnboardingPanel&>::`vftable';
    stackStorage27[1] = opaqueValue4;
    if (opaqueValue4 != 0)
        _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue4 + 8));
    temporaryPointer28 = stackStorage27;
    sub_1800850A0 (stackStorage27, onboardingPanel + 504);
    if (temporaryPointer28 != nullptr)
    {
        LOBYTE (opaqueValue10) = temporaryPointer28 != stackStorage27;
        (*(void (**) (std::uint64_t*, std::int64_t)) (*temporaryPointer28 + 32LL)) (temporaryPointer28, opaqueValue10);
    }
    if (opaqueValue4 != 0)
    {
        if (_InterlockedExchangeAdd ((volatile std::int32_t*)(opaqueValue4 + 8), 0xFFFFFFFF) == 1)
            (**(void (***) (std::int64_t, std::int64_t))opaqueValue4) (opaqueValue4, 1);
        _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue4 + 8));
    }
    temporaryPointer30 = nullptr;
    stackStorage29[0] = ___7___Func_impl_no_alloc_V_lambda_7___1__configureOnboardingCallbacks_FadModel1AudioProcessorEditor__AEAAXAEAVOnboardingPanel_ui_fadmodel1___Z_XW4AccountAction_456__std__6B_;
    stackStorage29[1] = opaqueValue4;
    if (opaqueValue4 != 0)
        _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue4 + 8));
    temporaryPointer30 = stackStorage29;
    sub_1800850A0 (stackStorage29, onboardingPanel + 568);
    if (temporaryPointer30 != nullptr)
    {
        LOBYTE (opaqueValue11) = temporaryPointer30 != stackStorage29;
        (*(void (**) (std::uint64_t*, std::int64_t)) (*temporaryPointer30 + 32LL)) (temporaryPointer30, opaqueValue11);
    }
    if (opaqueValue4 != 0)
    {
        if (_InterlockedExchangeAdd ((volatile std::int32_t*)(opaqueValue4 + 8), 0xFFFFFFFF) == 1)
            (**(void (***) (std::int64_t, std::int64_t))opaqueValue4) (opaqueValue4, 1);
        _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue4 + 8));
    }
    temporaryPointer32 = nullptr;
    stackStorage31[0] = ___7___Func_impl_no_alloc_V_lambda_8___1__configureOnboardingCallbacks_FadModel1AudioProcessorEditor__AEAAXAEAVOnboardingPanel_ui_fadmodel1___Z_XW4LegalDocument_456__std__6B_;
    stackStorage31[1] = opaqueValue4;
    if (opaqueValue4 != 0)
        _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue4 + 8));
    temporaryPointer32 = stackStorage31;
    sub_1800850A0 (stackStorage31, onboardingPanel + 632);
    if (temporaryPointer32 != nullptr)
    {
        LOBYTE (opaqueValue12) = temporaryPointer32 != stackStorage31;
        (*(void (**) (std::uint64_t*, std::int64_t)) (*temporaryPointer32 + 32LL)) (temporaryPointer32, opaqueValue12);
    }
    if (opaqueValue4 != 0 && _InterlockedExchangeAdd ((volatile std::int32_t*)(opaqueValue4 + 8), 0xFFFFFFFF) == 1)
        (**(void (***) (std::int64_t, std::int64_t))opaqueValue4) (opaqueValue4, 1);
    opaqueValue13 = *(std::uint64_t*)(*(std::uint64_t*)(editor + 328) + 475552LL);
    opaqueValue14 = *(std::uint64_t*)(opaqueValue13 + 40);
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue14 + 1168));
    authManagerSnapshotState ((std::int64_t)stackStorage33, *(std::uint64_t*)(opaqueValue13 + 40));
    LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue14 + 1168));
    editorSynchronizeWebViewAuthState (editor, (std::int64_t)stackStorage33);
    result = sub_180058EA0 (stackStorage33);
    if (opaqueValue4 != 0 && _InterlockedExchangeAdd ((volatile std::int32_t*)(opaqueValue4 + 8), 0xFFFFFFFF) == 1)
        return (**(std::int64_t (***) (std::int64_t, std::int64_t))opaqueValue4) (opaqueValue4, 1);
    return result;
}
