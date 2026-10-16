#include <cstdint>

// ===== Editor_OnAuthStateChanged @ 0x180225660 size=483 =====
std::uint64_t* editorOnAuthStateChanged (std::int64_t editor)
{
    std::uint64_t* result; // rax
    std::int64_t opaqueValue3; // rcx
    std::int64_t opaqueValue4; // rcx
    std::int64_t opaqueValue5; // rbp
    std::int64_t opaqueValue6; // rbp
    std::int64_t opaqueValue7; // rbx
    std::int64_t opaqueValue8; // rdi
    std::int64_t opaqueValue9; // rax
    std::int64_t opaqueValue10; // rdx
    std::int64_t opaqueValue11; // rax
    std::uint8_t stackStorage12[212]; // [rsp+30h] [rbp-158h] BYREF
    int opaqueValue13; // [rsp+104h] [rbp-84h]

    result = *(std::uint64_t**)editor;
    if (*(std::uint64_t*)editor != 0)
    {
        opaqueValue3 = result[2];
        if (opaqueValue3 != 0)
        {
            result = (std::uint64_t*)cppRttiDynamicCast (
                opaqueValue3,
                0,
                (unsigned int)&juce::Component `RTTI Type Descriptor',
                (unsigned int)&FadModel1AudioProcessorEditor `RTTI Type Descriptor',
                0);
            if (result[116] != 0 || result[122] != 0 && result[121] != 0 && result[123] != 0 && result[124] != 0)
            {
                if (*(std::uint64_t*)editor != 0)
                    opaqueValue4 = *(std::uint64_t*)(*(std::uint64_t*)editor + 16LL);
                else
                    LODWORD (opaqueValue4) = 0;
                result = (std::uint64_t*)cppRttiDynamicCast (
                    opaqueValue4,
                    0,
                    (unsigned int)&juce::Component `RTTI Type Descriptor',
                    (unsigned int)&FadModel1AudioProcessorEditor `RTTI Type Descriptor',
                    0);
                opaqueValue5 = result[116];
                opaqueValue6 = opaqueValue5 != 0 ? opaqueValue5 + 153208 : result[121];
                if (*(std::uint8_t*)(opaqueValue6 + 810) != 0 || *(std::uint8_t*)(opaqueValue6 + 811) != 0)
                {
                    *(std::uint8_t*)(opaqueValue6 + 811) = 0;
                    opaqueValue7 = *(std::uint64_t*)(*(std::uint64_t*)(sub_180238810 (editor) + 328) + 475552LL);
                    opaqueValue8 = *(std::uint64_t*)(opaqueValue7 + 40);
                    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue8 + 1168));
                    authManagerSnapshotState ((std::int64_t)stackStorage12, *(std::uint64_t*)(opaqueValue7 + 40));
                    LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue8 + 1168));
                    if (stackStorage12[0] != 0 && stackStorage12[208] != 0 && opaqueValue13 == 6)
                    {
                        *(std::uint8_t*)(sub_180238810 (editor) + 784) = 1;
                        juceComponentSetVisible (opaqueValue6, 0);
                        opaqueValue9 = sub_180238810 (editor);
                        editorSynchronizeOnboardingVisibility (opaqueValue9, opaqueValue10);
                    }
                    else
                    {
                        *(std::uint8_t*)(sub_180238810 (editor) + 784) = 0;
                        opaqueValue11 = sub_180238810 (editor);
                        onboardingCheckStartupRequirements (opaqueValue11, (std::int64_t)stackStorage12);
                    }
                    return (std::uint64_t*)sub_180058EA0 (stackStorage12);
                }
            }
        }
    }
    return result;
}

// ===== Onboarding_UpdateVisibility @ 0x1802274c0 size=565 =====
void editorSynchronizeOnboardingVisibility (std::int64_t editor, std::int64_t authState)
{
    std::int64_t opaqueValue2; // rax
    bool conditionFlag4; // si
    std::uint8_t* temporaryPointer5; // rbx
    char opaqueValue6; // bp
    char opaqueValue7; // al
    std::int64_t opaqueValue8; // rcx
    std::int64_t opaqueValue9; // rbx
    bool conditionFlag10; // al
    std::int64_t opaqueValue11; // rbx
    std::int64_t opaqueValue12; // rdx
    bool conditionFlag13; // zf
    std::int64_t opaqueValue14; // rbx
    std::int64_t opaqueValue15; // rdx
    std::int64_t opaqueValue16; // rbx
    std::int64_t opaqueValue17; // rcx
    std::int64_t opaqueValue18; // rbx

    opaqueValue2 = *(std::uint64_t*)(editor + 312);
    conditionFlag4 = opaqueValue2 != 0 && (*(std::uint8_t*)(opaqueValue2 + 168) & 2) != 0;
    temporaryPointer5 = *(std::uint8_t**)(editor + 968);
    if (temporaryPointer5 != nullptr && (temporaryPointer5[168] & 2) != 0)
    {
        opaqueValue6 = 1;
    }
    else
    {
        opaqueValue6 = 0;
        if (temporaryPointer5 == nullptr)
            goto label19;
    }
    opaqueValue7 = (std::uint8_t)((std::int64_t (*) (void))sub_1801C8A60)() != 0 && opaqueValue6 != 0 && !conditionFlag4 && temporaryPointer5[843] == 0;
    if (temporaryPointer5[841] != opaqueValue7)
    {
        temporaryPointer5[841] = opaqueValue7;
        sub_1806CE420 (temporaryPointer5);
        if (temporaryPointer5[841] != 0 && temporaryPointer5[840] == 0)
            onboardingPanelEnsureSurfaceLoaded ((std::int64_t)temporaryPointer5);
    }
label19:
    opaqueValue8 = *(std::uint64_t*)(editor + 952);
    if (opaqueValue8 != 0)
    {
        if (*(std::uint8_t*)(editor + 1004) != 0 || opaqueValue6 != 0 || conditionFlag4)
            authState = 0;
        else
            LOBYTE (authState) = 1;
        juceComponentSetVisible (opaqueValue8, authState);
        opaqueValue14 = *(std::uint64_t*)(editor + 952);
        LOBYTE (opaqueValue15) = (std::uint8_t)sub_1801C8A60 (editor) != 0 && *(std::uint8_t*)(editor + 1004) == 0 && opaqueValue6 == 0 && !conditionFlag4;
        sub_1807246C0 (*(std::uint64_t*)(opaqueValue14 + 2752), opaqueValue15);
        opaqueValue16 = *(std::uint64_t*)(editor + 952);
        if ((std::uint8_t)sub_1801C8A60 (editor) != 0 && *(std::uint8_t*)(editor + 1004) == 0 && *(std::uint32_t*)(editor + 1000) != 2 && *(std::uint8_t*)(editor + 1081) == 0 && !conditionFlag4 && opaqueValue6 == 0)
        {
            opaqueValue17 = *(std::uint64_t*)(opaqueValue16 + 2752);
            *(std::uint8_t*)(opaqueValue17 + 740) = 1;
            sub_180724500 (opaqueValue17);
            return;
        }
        opaqueValue18 = *(std::uint64_t*)(opaqueValue16 + 2752);
        _multtenpow12 (opaqueValue18);
        *(std::uint8_t*)(opaqueValue18 + 740) = 0;
        sub_180724500 (opaqueValue18);
    }
    else
    {
        opaqueValue9 = *(std::uint64_t*)(editor + 1088);
        if (opaqueValue9 != 0)
        {
            conditionFlag10 = (std::uint8_t)sub_1801C8A60 (editor) != 0 && opaqueValue6 == 0 && !conditionFlag4;
            *(std::uint8_t*)(opaqueValue9 + 10065) = conditionFlag10;
            sub_1807446B0 (opaqueValue9);
        }
        opaqueValue11 = *(std::uint64_t*)(editor + 960);
        if (opaqueValue11 == 0)
            goto label53;
        if ((std::uint8_t)sub_1801C8A60 (editor) == 0 || conditionFlag4)
        {
            *(std::uint8_t*)(opaqueValue11 + 15532) = 0;
        }
        else
        {
            conditionFlag13 = *(std::uint32_t*)(opaqueValue11 + 15528) == 0;
            *(std::uint8_t*)(opaqueValue11 + 15532) = 1;
            if (conditionFlag13)
            {
                LOBYTE (opaqueValue12) = 1;
                sub_18073D450 (opaqueValue11 + 208, opaqueValue12);
                goto label53;
            }
        }
        sub_18073D450 (opaqueValue11 + 208, 0);
    }
label53:
    if (conditionFlag4)
        juceComponentBringToFront (*(std::uint64_t*)(editor + 312), 0);
}

// ===== WebViewState_OwnerSync @ 0x180225150 size=384 =====
void editorSynchronizeWebViewAuthState (std::int64_t editor, std::int64_t authState)
{
    bool conditionFlag4; // dl
    std::int64_t opaqueValue5; // rax
    std::int64_t opaqueValue6; // rcx
    std::int64_t opaqueValue7; // rax
    std::uint8_t stackStorage8[8]; // [rsp+20h] [rbp-49h] BYREF
    char* temporaryPointer9; // [rsp+28h] [rbp-41h]
    char* temporaryPointer10; // [rsp+30h] [rbp-39h]
    char* temporaryPointer11; // [rsp+38h] [rbp-31h]
    char opaqueValue12; // [rsp+40h] [rbp-29h]
    std::int64_t opaqueValue13; // [rsp+48h] [rbp-21h]
    std::int64_t opaqueValue14; // [rsp+50h] [rbp-19h]
    std::int64_t opaqueValue15; // [rsp+58h] [rbp-11h]
    char* temporaryPointer16; // [rsp+60h] [rbp-9h]
    char* temporaryPointer17; // [rsp+68h] [rbp-1h]
    char stackStorage18[8]; // [rsp+70h] [rbp+7h] BYREF
    char* temporaryPointer19; // [rsp+78h] [rbp+Fh]
    char* temporaryPointer20; // [rsp+80h] [rbp+17h]
    char* temporaryPointer21; // [rsp+88h] [rbp+1Fh]
    char opaqueValue22; // [rsp+90h] [rbp+27h]
    std::int64_t opaqueValue23; // [rsp+98h] [rbp+2Fh]
    std::int64_t opaqueValue24; // [rsp+A0h] [rbp+37h]
    std::int64_t opaqueValue25; // [rsp+A8h] [rbp+3Fh]
    char* temporaryPointer26; // [rsp+B0h] [rbp+47h]
    char* temporaryPointer27; // [rsp+B8h] [rbp+4Fh]

    if (*(std::uint64_t*)(editor + 928) != 0 || *(std::uint64_t*)(editor + 976) != 0 && *(std::uint64_t*)(editor + 968) != 0 && *(std::uint64_t*)(editor + 984) != 0 && *(std::uint64_t*)(editor + 992) != 0)
    {
        onboardingUiStateInitialize (stackStorage8);
        conditionFlag4 = *(std::uint32_t*)(*(std::uint64_t*)(editor + 328) + 8LL) == 6;
        stackStorage8[2] = conditionFlag4;
        opaqueValue5 = *(std::uint64_t*)(editor + 928);
        opaqueValue6 = opaqueValue5 + 153208;
        if (opaqueValue5 == 0)
            opaqueValue6 = *(std::uint64_t*)(editor + 968);
        stackStorage18[0] = stackStorage8[0];
        stackStorage18[1] = stackStorage8[1];
        stackStorage18[2] = conditionFlag4;
        temporaryPointer19 = temporaryPointer9;
        temporaryPointer9 = &emptyJuceStringCharacters;
        temporaryPointer20 = temporaryPointer10;
        temporaryPointer10 = &emptyJuceStringCharacters;
        temporaryPointer21 = temporaryPointer11;
        temporaryPointer11 = &emptyJuceStringCharacters;
        opaqueValue22 = opaqueValue12;
        opaqueValue23 = opaqueValue13;
        opaqueValue24 = opaqueValue14;
        opaqueValue25 = opaqueValue15;
        temporaryPointer26 = temporaryPointer16;
        temporaryPointer16 = &emptyJuceStringCharacters;
        temporaryPointer27 = temporaryPointer17;
        temporaryPointer17 = &emptyJuceStringCharacters;
        onboardingPanelUpdateAuthState (opaqueValue6, stackStorage18);
        onboardingUiStateDestroy (stackStorage8);
    }
    if (*(std::uint8_t*)(editor + 812) != 0 && **(std::uint8_t**)(authState + 8) != 0)
    {
        *(std::uint8_t*)(editor + 812) = 0;
        opaqueValue7 = onboardingBuildAccountHandoffUrl ((std::int64_t)stackStorage18, *(std::uint32_t*)(editor + 808), (std::uint8_t**)(authState + 8));
        winShellOpenUrlOrEmail (opaqueValue7);
        sub_18002C950 (stackStorage18);
        sub_180361350 (*(std::uint64_t*)(*(std::uint64_t*)(editor + 328) + 475552LL));
    }
}
