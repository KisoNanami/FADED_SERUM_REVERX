#include <cstdint>

// ===== AuthState_SetUiFlags @ 0x1806cccb0 size=624 =====
std::int64_t onboardingPanelUpdateAuthState (std::int64_t panel, char* incomingUiState)
{
    char opaqueValue4; // r9
    std::uint8_t* deviceCodeCharacters5; // rax
    std::uint8_t* temporaryPointer6; // r8
    std::int64_t opaqueValue7; // r8
    int opaqueValue8; // ecx
    int opaqueValue9; // edx
    std::uint8_t* emailCharacters10; // rax
    std::uint8_t* temporaryPointer11; // r8
    std::int64_t opaqueValue12; // r8
    int opaqueValue13; // ecx
    int opaqueValue14; // edx
    std::uint8_t* tierCharacters15; // rax
    std::uint8_t* temporaryPointer16; // r8
    std::int64_t opaqueValue17; // r8
    int opaqueValue18; // ecx
    int opaqueValue19; // edx
    std::uint8_t* errorCharacters20; // rax
    std::uint8_t* temporaryPointer21; // r8
    std::int64_t opaqueValue22; // r8
    int opaqueValue23; // ecx
    int opaqueValue24; // edx
    std::uint8_t* errorCodeCharacters25; // rax
    std::uint8_t* temporaryPointer26; // r8
    std::int64_t opaqueValue27; // r8
    int opaqueValue28; // ecx
    int opaqueValue29; // edx
    std::int64_t deviceCodeCharacters30; // rcx
    std::int64_t emailCharacters31; // rcx
    std::int64_t tierCharacters32; // rcx
    std::int64_t errorCharacters33; // rcx
    std::int64_t errorCodeCharacters34; // rcx

    opaqueValue4 = *incomingUiState;
    if (*(std::uint16_t*)(panel + 712) != *(std::uint16_t*)incomingUiState || *(std::uint8_t*)(panel + 714) != incomingUiState[2])
        goto label32;
    deviceCodeCharacters5 = *(std::uint8_t**)(panel + 720);
    temporaryPointer6 = *((std::uint8_t**)incomingUiState + 1);
    if (deviceCodeCharacters5 != temporaryPointer6)
    {
        opaqueValue7 = temporaryPointer6 - deviceCodeCharacters5;
        do
        {
            opaqueValue8 = deviceCodeCharacters5[opaqueValue7];
            opaqueValue9 = *deviceCodeCharacters5 - opaqueValue8;
            if (opaqueValue9 != 0)
                break;
            ++deviceCodeCharacters5;
        } while (opaqueValue8 != 0);
        if (opaqueValue9 != 0)
            goto label32;
    }
    emailCharacters10 = *(std::uint8_t**)(panel + 728);
    temporaryPointer11 = *((std::uint8_t**)incomingUiState + 2);
    if (emailCharacters10 != temporaryPointer11)
    {
        opaqueValue12 = temporaryPointer11 - emailCharacters10;
        do
        {
            opaqueValue13 = emailCharacters10[opaqueValue12];
            opaqueValue14 = *emailCharacters10 - opaqueValue13;
            if (opaqueValue14 != 0)
                break;
            ++emailCharacters10;
        } while (opaqueValue13 != 0);
        if (opaqueValue14 != 0)
            goto label32;
    }
    tierCharacters15 = *(std::uint8_t**)(panel + 736);
    temporaryPointer16 = *((std::uint8_t**)incomingUiState + 3);
    if (tierCharacters15 != temporaryPointer16)
    {
        opaqueValue17 = temporaryPointer16 - tierCharacters15;
        do
        {
            opaqueValue18 = tierCharacters15[opaqueValue17];
            opaqueValue19 = *tierCharacters15 - opaqueValue18;
            if (opaqueValue19 != 0)
                break;
            ++tierCharacters15;
        } while (opaqueValue18 != 0);
        if (opaqueValue19 != 0)
            goto label32;
    }
    if (*(std::uint8_t*)(panel + 744) != incomingUiState[32] || *(std::uint64_t*)(panel + 752) != *((std::uint64_t*)incomingUiState + 5) || *(std::uint64_t*)(panel + 760) != *((std::uint64_t*)incomingUiState + 6) || *(std::uint64_t*)(panel + 768) != *((std::uint64_t*)incomingUiState + 7))
    {
        goto label32;
    }
    errorCharacters20 = *(std::uint8_t**)(panel + 776);
    temporaryPointer21 = *((std::uint8_t**)incomingUiState + 8);
    if (errorCharacters20 != temporaryPointer21)
    {
        opaqueValue22 = temporaryPointer21 - errorCharacters20;
        do
        {
            opaqueValue23 = errorCharacters20[opaqueValue22];
            opaqueValue24 = *errorCharacters20 - opaqueValue23;
            if (opaqueValue24 != 0)
                break;
            ++errorCharacters20;
        } while (opaqueValue23 != 0);
        if (opaqueValue24 != 0)
            goto label32;
    }
    errorCodeCharacters25 = *(std::uint8_t**)(panel + 784);
    temporaryPointer26 = *((std::uint8_t**)incomingUiState + 9);
    if (errorCodeCharacters25 != temporaryPointer26)
    {
        opaqueValue27 = temporaryPointer26 - errorCodeCharacters25;
        do
        {
            opaqueValue28 = errorCodeCharacters25[opaqueValue27];
            opaqueValue29 = *errorCodeCharacters25 - opaqueValue28;
            if (opaqueValue29 != 0)
                break;
            ++errorCodeCharacters25;
        } while (opaqueValue28 != 0);
        if (opaqueValue29 != 0)
        {
        label32:
            *(std::uint8_t*)(panel + 712) = opaqueValue4;
            *(std::uint8_t*)(panel + 713) = incomingUiState[1];
            *(std::uint8_t*)(panel + 714) = incomingUiState[2];
            deviceCodeCharacters30 = *(std::uint64_t*)(panel + 720);
            *(std::uint64_t*)(panel + 720) = *((std::uint64_t*)incomingUiState + 1);
            *((std::uint64_t*)incomingUiState + 1) = deviceCodeCharacters30;
            emailCharacters31 = *(std::uint64_t*)(panel + 728);
            *(std::uint64_t*)(panel + 728) = *((std::uint64_t*)incomingUiState + 2);
            *((std::uint64_t*)incomingUiState + 2) = emailCharacters31;
            tierCharacters32 = *(std::uint64_t*)(panel + 736);
            *(std::uint64_t*)(panel + 736) = *((std::uint64_t*)incomingUiState + 3);
            *((std::uint64_t*)incomingUiState + 3) = tierCharacters32;
            *(std::uint8_t*)(panel + 744) = incomingUiState[32];
            *(std::uint64_t*)(panel + 752) = *((std::uint64_t*)incomingUiState + 5);
            *(std::uint64_t*)(panel + 760) = *((std::uint64_t*)incomingUiState + 6);
            *(std::uint64_t*)(panel + 768) = *((std::uint64_t*)incomingUiState + 7);
            errorCharacters33 = *(std::uint64_t*)(panel + 776);
            *(std::uint64_t*)(panel + 776) = *((std::uint64_t*)incomingUiState + 8);
            *((std::uint64_t*)incomingUiState + 8) = errorCharacters33;
            errorCodeCharacters34 = *(std::uint64_t*)(panel + 784);
            *(std::uint64_t*)(panel + 784) = *((std::uint64_t*)incomingUiState + 9);
            *((std::uint64_t*)incomingUiState + 9) = errorCodeCharacters34;
            ++*(std::uint64_t*)(panel + 792);
            *(std::uint8_t*)(panel + 808) = 1;
            if (*(std::uint8_t*)(panel + 843) != 0)
                sub_1806CFBC0 (panel);
            *(std::uint8_t*)(panel + 808) = 1;
            onboardingPanelPushAuthStateToJavaScript (panel);
        }
    }
    return onboardingUiStateDestroy (incomingUiState);
}

// ===== WebViewState_Build @ 0x1806ccad0 size=479 =====
std::int64_t onboardingPanelPushAuthStateToJavaScript (std::int64_t panel)
{
    std::int64_t result; // rax
    std::int64_t opaqueValue3; // rbx
    char** temporaryPointer4; // rbx
    char* stringStorageToRelease5; // rcx
    void* stringStorageToRelease6; // rcx
    volatile std::int32_t* stringStorageToRelease7; // rcx
    char* stringStorageToRelease8; // rcx
    std::uint8_t stackStorage9[56]; // [rsp+20h] [rbp-48h] BYREF
    std::int64_t opaqueValue10; // [rsp+58h] [rbp-10h]
    char* reusableString11; // [rsp+A0h] [rbp+38h] BYREF
    char* temporaryPointer12; // [rsp+A8h] [rbp+40h] BYREF
    char opaqueValue13; // [rsp+B0h] [rbp+48h] BYREF
    std::int64_t opaqueValue14; // [rsp+B8h] [rbp+50h] BYREF

    result = *(std::uint64_t*)(panel + 696);
    if (result != 0 && *(std::uint8_t*)(panel + 840) != 0 && *(std::uint32_t*)(result + 584) == 2)
    {
        if (*(std::uint8_t*)(panel + 808) != 0)
        {
            result = *(std::uint64_t*)(panel + 800);
            if (*(std::uint64_t*)(panel + 792) != result)
            {
                opaqueValue3 = authStateBuildWebViewJson (panel, (std::int64_t)&opaqueValue14);
                juceStringConstructFromUtf8 (
                    &reusableString11,
                    "if (typeof window.fadOnboardingReceiveAuthState === 'function') { window.fadOnboardingReceiveAuthState(");
                temporaryPointer4 = (char**)sub_180098710 (&opaqueValue13, &reusableString11, opaqueValue3);
                temporaryPointer12 = (char*)temporaryPointer4;
                juceStringAppendUtf8Range (temporaryPointer4, "); }", "");
                temporaryPointer12 = *temporaryPointer4;
                if (temporaryPointer12 - 16 != (char*)&emptyJuceStringStorage)
                    _InterlockedIncrement ((volatile std::int32_t*)temporaryPointer12 - 4);
                stringStorageToRelease5 = *temporaryPointer4 - 16;
                if (stringStorageToRelease5 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease5) == -1)
                    memoryFree (stringStorageToRelease5);
                stringStorageToRelease6 = (void*)(opaqueValue14 - 16);
                if ((void*)(opaqueValue14 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease6) == -1)
                    memoryFree (stringStorageToRelease6);
                opaqueValue10 = 0;
                reusableString11 = &emptyJuceStringCharacters;
                sub_1808EE060 (*(std::uint64_t*)(panel + 696), &temporaryPointer12, &reusableString11, stackStorage9);
                result = *(std::uint64_t*)(panel + 792);
                *(std::uint64_t*)(panel + 800) = result;
                stringStorageToRelease7 = (volatile std::int32_t*)(temporaryPointer12 - 16);
                if (temporaryPointer12 - 16 != (char*)&emptyJuceStringStorage)
                {
                    result = (unsigned int)_InterlockedDecrement (stringStorageToRelease7);
                    if ((std::uint32_t)result == -1)
                        result = memoryFree ((LPVOID)stringStorageToRelease7);
                }
            }
            *(std::uint8_t*)(panel + 808) = 0;
        }
        if (*(std::uint8_t*)(panel + 812) != 0 && *(std::uint8_t*)(panel + 813) == 0)
        {
            juceStringConstructFromUtf8 (
                &reusableString11,
                "if (typeof window.fadOnboardingNativeAcceptResolved === 'function') { window.fadOnboardingNativeAcceptResolved(); }");
            opaqueValue10 = 0;
            temporaryPointer12 = &emptyJuceStringCharacters;
            result = sub_1808EE060 (*(std::uint64_t*)(panel + 696), &reusableString11, &temporaryPointer12, stackStorage9);
            *(std::uint16_t*)(panel + 812) = 256;
            stringStorageToRelease8 = reusableString11 - 16;
            if (reusableString11 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease8) == -1)
                return memoryFree (stringStorageToRelease8);
        }
    }
    return result;
}
