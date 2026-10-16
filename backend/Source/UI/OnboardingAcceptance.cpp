#include <cstdint>

// ===== Onboarding_AcceptPersistTask @ 0x1806d0a00 size=96 =====
void onboardingPersistAcceptanceCallback (std::int64_t callbackContext, char* callbackArgument)
{
    char opaqueValue3; // di
    std::int64_t opaqueValue4; // rax
    std::int64_t opaqueValue5; // rcx
    std::int64_t opaqueValue6; // rax

    opaqueValue3 = *callbackArgument;
    opaqueValue4 = *(std::uint64_t*)(callbackContext + 8);
    if (opaqueValue4 != 0)
    {
        opaqueValue5 = *(std::uint64_t*)(opaqueValue4 + 16);
        if (opaqueValue5 != 0)
        {
            opaqueValue6 = cppRttiDynamicCast (
                opaqueValue5,
                0,
                (unsigned int)&juce::Component `RTTI Type Descriptor',
                (unsigned int)&fadmodel1::ui::OnboardingPanel `RTTI Type Descriptor',
                0);
            onboardingCommitAcceptance (opaqueValue6, opaqueValue3, *(std::uint8_t*)(callbackContext + 16), *(std::uint64_t*)(callbackContext + 24));
        }
    }
}

// ===== Onboarding_CommitAccept @ 0x1806cbe30 size=1550 =====
void onboardingCommitAcceptance (std::int64_t panel, char persistenceSucceeded, char acceptedViaNativeBridge, std::int64_t acceptanceAttempt)
{
    std::int64_t* prefixedString5; // rbx
    void* stringStorageToRelease6; // rcx
    void* stringStorageToRelease7; // rcx
    void* stringStorageToRelease8; // rcx
    void* stringStorageToRelease9; // rcx
    void* stringStorageToRelease10; // rcx
    void* stringStorageToRelease11; // rcx
    void* stringStorageToRelease12; // rcx
    void* stringStorageToRelease13; // rcx
    void* stringStorageToRelease14; // rcx
    std::int64_t* prefixedString15; // rbx
    void* stringStorageToRelease16; // rcx
    void* stringStorageToRelease17; // rcx
    void* stringStorageToRelease18; // rcx
    void* stringStorageToRelease19; // rcx
    void* stringStorageToRelease20; // rcx
    std::int64_t* prefixedString21; // rbx
    void* stringStorageToRelease22; // rcx
    void* stringStorageToRelease23; // rcx
    void* stringStorageToRelease24; // rcx
    void* stringStorageToRelease25; // rcx
    void* stringStorageToRelease26; // rcx
    void* stringStorageToRelease27; // rcx
    std::int64_t opaqueValue28; // rax
    std::int64_t opaqueValue29; // rcx
    void* stringStorageToRelease30; // rcx
    std::int64_t reusableString31; // [rsp+20h] [rbp-30h] BYREF
    std::int64_t reusableString32; // [rsp+28h] [rbp-28h] BYREF
    std::int64_t reusableString33; // [rsp+30h] [rbp-20h] BYREF
    std::int64_t* temporaryPointer34; // [rsp+38h] [rbp-18h] BYREF

    if (acceptanceAttempt == *(std::uint64_t*)(panel + 816) && *(std::uint8_t*)(panel + 810) != 0)
    {
        *(std::uint8_t*)(panel + 810) = 0;
        if (persistenceSucceeded != 0)
        {
            if (acceptedViaNativeBridge != 0)
            {
                juceStringConstructFromUtf8 (&reusableString32, "FAD-ONB-ACCEPT-NATIVE-BRIDGE");
                prefixedString15 = (std::int64_t*)juceStringJoinUtf8Prefix (&reusableString33, "OnboardingPanel: ", &reusableString32);
                temporaryPointer34 = prefixedString15;
                juceStringAppendUtf8Range (prefixedString15, " accepted onboarding via native bridge", "");
                reusableString31 = *prefixedString15;
                if ((void*)(reusableString31 - 16) != &emptyJuceStringStorage)
                    _InterlockedIncrement ((volatile std::int32_t*)(reusableString31 - 16));
                stringStorageToRelease16 = (void*)(*prefixedString15 - 16);
                if (stringStorageToRelease16 != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease16) == -1)
                    memoryFree (stringStorageToRelease16);
                if (activeJuceLogger != 0)
                    (*(void (**) (std::int64_t, std::int64_t*)) (*(std::uint64_t*)activeJuceLogger + 8LL)) (activeJuceLogger, &reusableString31);
                else
                    juceLoggerWriteDefaultLog (&reusableString31);
                stringStorageToRelease17 = (void*)(reusableString31 - 16);
                if ((void*)(reusableString31 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease17) == -1)
                    memoryFree (stringStorageToRelease17);
                stringStorageToRelease18 = (void*)(reusableString32 - 16);
                if ((void*)(reusableString32 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease18) == -1)
                    memoryFree (stringStorageToRelease18);
                juceStringConstructFromUtf8 (&reusableString31, "accepted onboarding via native bridge");
                juceStringConstructFromUtf8 (&reusableString33, "FAD-ONB-ACCEPT-NATIVE-BRIDGE");
                juceStringConstructFromUtf8 (&reusableString32, "OnboardingPanel");
                diagnosticsReportUiWarning (&reusableString32, &reusableString33, &reusableString31);
                stringStorageToRelease19 = (void*)(reusableString32 - 16);
                if ((void*)(reusableString32 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease19) == -1)
                    memoryFree (stringStorageToRelease19);
                stringStorageToRelease20 = (void*)(reusableString33 - 16);
                if ((void*)(reusableString33 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease20) == -1)
                    memoryFree (stringStorageToRelease20);
            }
            else
            {
                juceStringConstructFromUtf8 (&reusableString32, "FAD-ONB-ACCEPT-NAVIGATION");
                prefixedString21 = (std::int64_t*)juceStringJoinUtf8Prefix (&reusableString33, "OnboardingPanel: ", &reusableString32);
                temporaryPointer34 = prefixedString21;
                juceStringAppendUtf8Range (prefixedString21, " accepted onboarding via navigation fallback", "");
                reusableString31 = *prefixedString21;
                if ((void*)(reusableString31 - 16) != &emptyJuceStringStorage)
                    _InterlockedIncrement ((volatile std::int32_t*)(reusableString31 - 16));
                stringStorageToRelease22 = (void*)(*prefixedString21 - 16);
                if (stringStorageToRelease22 != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease22) == -1)
                    memoryFree (stringStorageToRelease22);
                if (activeJuceLogger != 0)
                    (*(void (**) (std::int64_t, std::int64_t*)) (*(std::uint64_t*)activeJuceLogger + 8LL)) (activeJuceLogger, &reusableString31);
                else
                    juceLoggerWriteDefaultLog (&reusableString31);
                stringStorageToRelease23 = (void*)(reusableString31 - 16);
                if ((void*)(reusableString31 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease23) == -1)
                    memoryFree (stringStorageToRelease23);
                stringStorageToRelease24 = (void*)(reusableString32 - 16);
                if ((void*)(reusableString32 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease24) == -1)
                    memoryFree (stringStorageToRelease24);
                juceStringConstructFromUtf8 (&reusableString31, "accepted onboarding via navigation fallback");
                juceStringConstructFromUtf8 (&reusableString33, "FAD-ONB-ACCEPT-NAVIGATION");
                juceStringConstructFromUtf8 (&reusableString32, "OnboardingPanel");
                diagnosticsReportUiWarning (&reusableString32, &reusableString33, &reusableString31);
                stringStorageToRelease25 = (void*)(reusableString32 - 16);
                if ((void*)(reusableString32 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease25) == -1)
                    memoryFree (stringStorageToRelease25);
                stringStorageToRelease26 = (void*)(reusableString33 - 16);
                if ((void*)(reusableString33 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease26) == -1)
                    memoryFree (stringStorageToRelease26);
            }
            stringStorageToRelease27 = (void*)(reusableString31 - 16);
            if ((void*)(reusableString31 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease27) == -1)
                memoryFree (stringStorageToRelease27);
            *(std::uint8_t*)(panel + 809) = 1;
            *(std::uint8_t*)(panel + 811) = 1;
            opaqueValue28 = sub_180092C80 (&temporaryPointer34);
            sub_18009B4C0 (&reusableString32, opaqueValue28, 16);
            opaqueValue29 = *(std::uint64_t*)(panel + 704);
            *(std::uint64_t*)(panel + 704) = reusableString32;
            stringStorageToRelease30 = (void*)(opaqueValue29 - 16);
            if (stringStorageToRelease30 != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease30) == -1)
                memoryFree (stringStorageToRelease30);
            *(std::uint16_t*)(panel + 812) = 1;
            onboardingPanelPushAuthStateToJavaScript (panel);
        }
        else
        {
            juceStringConstructFromUtf8 (&reusableString33, "FAD-ONB-PERSISTENCE-FAILED");
            prefixedString5 = (std::int64_t*)juceStringJoinUtf8Prefix (&reusableString32, "OnboardingPanel: ", &reusableString33);
            temporaryPointer34 = prefixedString5;
            juceStringAppendUtf8Range (prefixedString5, " onboarding completion was not persisted", "");
            reusableString31 = *prefixedString5;
            if ((void*)(reusableString31 - 16) != &emptyJuceStringStorage)
                _InterlockedIncrement ((volatile std::int32_t*)(reusableString31 - 16));
            stringStorageToRelease6 = (void*)(*prefixedString5 - 16);
            if (stringStorageToRelease6 != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease6) == -1)
                memoryFree (stringStorageToRelease6);
            if (activeJuceLogger != 0)
                (*(void (**) (std::int64_t, std::int64_t*)) (*(std::uint64_t*)activeJuceLogger + 8LL)) (activeJuceLogger, &reusableString31);
            else
                juceLoggerWriteDefaultLog (&reusableString31);
            stringStorageToRelease7 = (void*)(reusableString31 - 16);
            if ((void*)(reusableString31 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease7) == -1)
                memoryFree (stringStorageToRelease7);
            stringStorageToRelease8 = (void*)(reusableString33 - 16);
            if ((void*)(reusableString33 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease8) == -1)
                memoryFree (stringStorageToRelease8);
            juceStringConstructFromUtf8 (&reusableString32, "onboarding completion was not persisted");
            juceStringConstructFromUtf8 (&reusableString31, "FAD-ONB-PERSISTENCE-FAILED");
            juceStringConstructFromUtf8 (&reusableString33, "OnboardingPanel");
            diagnosticsReportUiWarning (&reusableString33, &reusableString31, &reusableString32);
            stringStorageToRelease9 = (void*)(reusableString33 - 16);
            if ((void*)(reusableString33 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease9) == -1)
                memoryFree (stringStorageToRelease9);
            stringStorageToRelease10 = (void*)(reusableString31 - 16);
            if ((void*)(reusableString31 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease10) == -1)
                memoryFree (stringStorageToRelease10);
            stringStorageToRelease11 = (void*)(reusableString32 - 16);
            if ((void*)(reusableString32 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease11) == -1)
                memoryFree (stringStorageToRelease11);
            sub_1800B3260 (&reusableString33, &unk_1812F6B70);
            juceStringConstructFromUtf8 (&reusableString31, "FAD-ONB-PERSISTENCE-FAILED");
            temporaryPointer34 = &reusableString31;
            reusableString32 = *(std::uint64_t*)juceStringAppendString (&reusableString31, &reusableString33);
            if ((void*)(reusableString32 - 16) != &emptyJuceStringStorage)
                _InterlockedIncrement ((volatile std::int32_t*)(reusableString32 - 16));
            stringStorageToRelease12 = (void*)(reusableString31 - 16);
            if ((void*)(reusableString31 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease12) == -1)
                memoryFree (stringStorageToRelease12);
            onboardingShowSetupError (panel, &reusableString32);
            stringStorageToRelease13 = (void*)(reusableString32 - 16);
            if ((void*)(reusableString32 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease13) == -1)
                memoryFree (stringStorageToRelease13);
            stringStorageToRelease14 = (void*)(reusableString33 - 16);
            if ((void*)(reusableString33 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease14) == -1)
                memoryFree (stringStorageToRelease14);
        }
    }
}

// ===== Onboarding_HandleAccept @ 0x1806cada0 size=2023 =====
char onboardingHandleAcceptanceRequest (std::int64_t panel, std::uint64_t* commandUrl, std::uint8_t cameFromNativeBridge)
{
    unsigned int nonceValidationCode; // eax
    std::int64_t* prefixedString6; // rdi
    void* stringStorageToRelease7; // rcx
    void* stringStorageToRelease8; // rcx
    char* stringStorageToRelease9; // rcx
    void* stringStorageToRelease10; // rcx
    char* stringStorageToRelease11; // rcx
    void* stringStorageToRelease12; // rcx
    void* stringStorageToRelease13; // rcx
    char* stringStorageToRelease14; // rcx
    std::int64_t opaqueValue15; // rcx
    std::int64_t* prefixedString16; // rdi
    void* stringStorageToRelease17; // rcx
    void* stringStorageToRelease18; // rcx
    char* stringStorageToRelease19; // rcx
    void* stringStorageToRelease20; // rcx
    char* stringStorageToRelease21; // rcx
    void* stringStorageToRelease22; // rcx
    void* stringStorageToRelease23; // rcx
    char* stringStorageToRelease24; // rcx
    std::int64_t* prefixedString25; // rdi
    void* stringStorageToRelease26; // rcx
    void* stringStorageToRelease27; // rcx
    char* stringStorageToRelease28; // rcx
    void* stringStorageToRelease29; // rcx
    char* stringStorageToRelease30; // rcx
    void* stringStorageToRelease31; // rcx
    std::int64_t opaqueValue32; // rsi
    void* stringStorageToRelease33; // rcx
    std::int64_t opaqueValue34; // rdi
    std::int64_t opaqueValue35; // rbx
    std::int64_t opaqueValue36; // rax
    std::int64_t opaqueValue37; // rcx
    std::int64_t opaqueValue38; // rdx
    std::int64_t reusableString40; // [rsp+20h] [rbp-79h] BYREF
    std::int64_t* temporaryPointer41; // [rsp+28h] [rbp-71h]
    std::uint64_t acceptanceCallbackCapture[2]; // [rsp+30h] [rbp-69h] BYREF
    std::uint8_t nativeBridgeFlag; // [rsp+40h] [rbp-59h]
    std::int64_t opaqueValue44; // [rsp+48h] [rbp-51h]
    std::uint64_t* acceptanceCallbackObject; // [rsp+68h] [rbp-31h]
    std::int64_t opaqueValue46; // [rsp+70h] [rbp-29h]
    std::uint8_t capturedBridgeFlag; // [rsp+78h] [rbp-21h]
    std::int64_t opaqueValue48; // [rsp+80h] [rbp-19h]
    std::uint8_t stackStorage49[56]; // [rsp+88h] [rbp-11h] BYREF
    std::int64_t opaqueValue50; // [rsp+C0h] [rbp+27h]
    std::int64_t reusableString51; // [rsp+100h] [rbp+67h] BYREF
    char* reusableString52; // [rsp+118h] [rbp+7Fh] BYREF

    nonceValidationCode = (unsigned int)onboardingValidateAcceptanceNonce (commandUrl, (const char**)(panel + 704));
    if (nonceValidationCode != 0)
    {
        if (nonceValidationCode == 2)
        {
            juceStringConstructFromUtf8 (&reusableString52, "FAD-ONB-ACCEPT-NONCE-MISSING");
            prefixedString6 = (std::int64_t*)juceStringJoinUtf8Prefix (&reusableString40, "OnboardingPanel: ", &reusableString52);
            temporaryPointer41 = prefixedString6;
            juceStringAppendUtf8Range (prefixedString6, " rejected onboarding accept before native nonce was created", "");
            reusableString51 = *prefixedString6;
            if ((void*)(reusableString51 - 16) != &emptyJuceStringStorage)
                _InterlockedIncrement ((volatile std::int32_t*)(reusableString51 - 16));
            stringStorageToRelease7 = (void*)(*prefixedString6 - 16);
            if (stringStorageToRelease7 != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease7) == -1)
                memoryFree (stringStorageToRelease7);
            if (activeJuceLogger != 0)
                (*(void (**) (std::int64_t, std::int64_t*)) (*(std::uint64_t*)activeJuceLogger + 8LL)) (activeJuceLogger, &reusableString51);
            else
                juceLoggerWriteDefaultLog (&reusableString51);
            stringStorageToRelease8 = (void*)(reusableString51 - 16);
            if ((void*)(reusableString51 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease8) == -1)
                memoryFree (stringStorageToRelease8);
            stringStorageToRelease9 = reusableString52 - 16;
            if (reusableString52 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease9) == -1)
                memoryFree (stringStorageToRelease9);
            juceStringConstructFromUtf8 (&reusableString40, "rejected onboarding accept before native nonce was created");
            juceStringConstructFromUtf8 (&reusableString52, "FAD-ONB-ACCEPT-NONCE-MISSING");
            juceStringConstructFromUtf8 (&reusableString51, "OnboardingPanel");
            diagnosticsReportUiWarning (&reusableString51, &reusableString52, &reusableString40);
            stringStorageToRelease10 = (void*)(reusableString51 - 16);
            if ((void*)(reusableString51 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease10) == -1)
                memoryFree (stringStorageToRelease10);
            stringStorageToRelease11 = reusableString52 - 16;
            if (reusableString52 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease11) == -1)
                memoryFree (stringStorageToRelease11);
            stringStorageToRelease12 = (void*)(reusableString40 - 16);
            if ((void*)(reusableString40 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease12) == -1)
                memoryFree (stringStorageToRelease12);
            sub_1800B3260 (&reusableString40, &unk_1812F65C0);
            juceStringConstructFromUtf8 (&reusableString51, "FAD-ONB-ACCEPT-NONCE-MISSING");
            temporaryPointer41 = &reusableString51;
            reusableString52 = *(char**)juceStringAppendString (&reusableString51, &reusableString40);
            if (reusableString52 - 16 != (char*)&emptyJuceStringStorage)
                _InterlockedIncrement ((volatile std::int32_t*)reusableString52 - 4);
            stringStorageToRelease13 = (void*)(reusableString51 - 16);
            if ((void*)(reusableString51 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease13) == -1)
                memoryFree (stringStorageToRelease13);
            onboardingShowSetupError (panel, &reusableString52);
            stringStorageToRelease14 = reusableString52 - 16;
            if (reusableString52 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease14) == -1)
                memoryFree (stringStorageToRelease14);
            opaqueValue15 = reusableString40;
        }
        else if (nonceValidationCode == 3)
        {
            juceStringConstructFromUtf8 (&reusableString52, "FAD-ONB-ACCEPT-NONCE-MISMATCH");
            prefixedString16 = (std::int64_t*)juceStringJoinUtf8Prefix (&reusableString40, "OnboardingPanel: ", &reusableString52);
            temporaryPointer41 = prefixedString16;
            juceStringAppendUtf8Range (prefixedString16, " rejected onboarding accept with invalid nonce", "");
            reusableString51 = *prefixedString16;
            if ((void*)(reusableString51 - 16) != &emptyJuceStringStorage)
                _InterlockedIncrement ((volatile std::int32_t*)(reusableString51 - 16));
            stringStorageToRelease17 = (void*)(*prefixedString16 - 16);
            if (stringStorageToRelease17 != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease17) == -1)
                memoryFree (stringStorageToRelease17);
            if (activeJuceLogger != 0)
                (*(void (**) (std::int64_t, std::int64_t*)) (*(std::uint64_t*)activeJuceLogger + 8LL)) (activeJuceLogger, &reusableString51);
            else
                juceLoggerWriteDefaultLog (&reusableString51);
            stringStorageToRelease18 = (void*)(reusableString51 - 16);
            if ((void*)(reusableString51 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease18) == -1)
                memoryFree (stringStorageToRelease18);
            stringStorageToRelease19 = reusableString52 - 16;
            if (reusableString52 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease19) == -1)
                memoryFree (stringStorageToRelease19);
            juceStringConstructFromUtf8 (&reusableString40, "rejected onboarding accept with invalid nonce");
            juceStringConstructFromUtf8 (&reusableString52, "FAD-ONB-ACCEPT-NONCE-MISMATCH");
            juceStringConstructFromUtf8 (&reusableString51, "OnboardingPanel");
            diagnosticsReportUiWarning (&reusableString51, &reusableString52, &reusableString40);
            stringStorageToRelease20 = (void*)(reusableString51 - 16);
            if ((void*)(reusableString51 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease20) == -1)
                memoryFree (stringStorageToRelease20);
            stringStorageToRelease21 = reusableString52 - 16;
            if (reusableString52 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease21) == -1)
                memoryFree (stringStorageToRelease21);
            stringStorageToRelease22 = (void*)(reusableString40 - 16);
            if ((void*)(reusableString40 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease22) == -1)
                memoryFree (stringStorageToRelease22);
            sub_1800B3260 (&reusableString40, &unk_1812F65F0);
            juceStringConstructFromUtf8 (&reusableString51, "FAD-ONB-ACCEPT-NONCE-MISMATCH");
            temporaryPointer41 = &reusableString51;
            reusableString52 = *(char**)juceStringAppendString (&reusableString51, &reusableString40);
            if (reusableString52 - 16 != (char*)&emptyJuceStringStorage)
                _InterlockedIncrement ((volatile std::int32_t*)reusableString52 - 4);
            stringStorageToRelease23 = (void*)(reusableString51 - 16);
            if ((void*)(reusableString51 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease23) == -1)
                memoryFree (stringStorageToRelease23);
            onboardingShowSetupError (panel, &reusableString52);
            stringStorageToRelease24 = reusableString52 - 16;
            if (reusableString52 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease24) == -1)
                memoryFree (stringStorageToRelease24);
            opaqueValue15 = reusableString40;
        }
        else
        {
            if (*(std::uint8_t*)(panel + 712) != 0)
            {
                if (*(std::uint8_t*)(panel + 809) == 0 && *(std::uint8_t*)(panel + 810) == 0)
                {
                    *(std::uint8_t*)(panel + 810) = 1;
                    opaqueValue34 = *(std::uint64_t*)(panel + 816) + 1LL;
                    *(std::uint64_t*)(panel + 816) = opaqueValue34;
                    if (*(std::uint64_t*)(panel + 240) != 0)
                    {
                        sub_180024A10 (&reusableString51, panel);
                        opaqueValue35 = reusableString51;
                        opaqueValue46 = reusableString51;
                        if (reusableString51 != 0)
                        {
                            opaqueValue36 = reusableString51 + 8;
                            _InterlockedIncrement ((volatile std::int32_t*)(reusableString51 + 8));
                        }
                        else
                        {
                            opaqueValue36 = 8;
                        }
                        capturedBridgeFlag = cameFromNativeBridge;
                        opaqueValue48 = opaqueValue34;
                        acceptanceCallbackObject = nullptr;
                        acceptanceCallbackCapture[0] = std::X_N::Z::_Func_impl_no_alloc<`fadmodel1::ui::OnboardingPanel::handleAcceptUrl'::`2'::_lambda_1_, juce::A_NAEBVString&, bool>::`vftable';
                        acceptanceCallbackCapture[1] = opaqueValue35;
                        if (opaqueValue35 != 0)
                            _InterlockedIncrement ((volatile std::int32_t*)opaqueValue36);
                        nativeBridgeFlag = cameFromNativeBridge;
                        opaqueValue44 = opaqueValue34;
                        acceptanceCallbackObject = acceptanceCallbackCapture;
                        reusableString52 = (char*)acceptanceCallbackCapture;
                        opaqueValue37 = *(std::uint64_t*)(panel + 240);
                        if (opaqueValue37 == 0)
                        {
                            Concurrency::cancel_current_task();
                            JUMPOUT (0x1806CB587LL);
                        }
                        (*(void (**) (std::int64_t, std::uint64_t*)) (*(std::uint64_t*)opaqueValue37 + 16LL)) (opaqueValue37, acceptanceCallbackCapture);
                        if (acceptanceCallbackObject != nullptr)
                        {
                            LOBYTE (opaqueValue38) = acceptanceCallbackObject != acceptanceCallbackCapture;
                            (*(void (**) (std::uint64_t*, std::int64_t)) (*acceptanceCallbackObject + 32LL)) (acceptanceCallbackObject, opaqueValue38);
                            acceptanceCallbackObject = nullptr;
                        }
                        if (opaqueValue35 != 0 && _InterlockedExchangeAdd ((volatile std::int32_t*)(opaqueValue35 + 8), 0xFFFFFFFF) == 1)
                            (**(void (***) (std::int64_t, std::int64_t))opaqueValue35) (opaqueValue35, 1);
                        if (opaqueValue35 != 0 && _InterlockedExchangeAdd ((volatile std::int32_t*)(opaqueValue35 + 8), 0xFFFFFFFF) == 1)
                            (**(void (***) (std::int64_t, std::int64_t))opaqueValue35) (opaqueValue35, 1);
                    }
                    else
                    {
                        onboardingCommitAcceptance (panel, 0, cameFromNativeBridge, opaqueValue34);
                    }
                }
                goto label115;
            }
            juceStringConstructFromUtf8 (&reusableString52, "FAD-ONB-AUTH-REQUIRED");
            prefixedString25 = (std::int64_t*)juceStringJoinUtf8Prefix (&reusableString40, "OnboardingPanel: ", &reusableString52);
            temporaryPointer41 = prefixedString25;
            juceStringAppendUtf8Range (prefixedString25, " rejected onboarding accept without verified authorization", "");
            reusableString51 = *prefixedString25;
            if ((void*)(reusableString51 - 16) != &emptyJuceStringStorage)
                _InterlockedIncrement ((volatile std::int32_t*)(reusableString51 - 16));
            stringStorageToRelease26 = (void*)(*prefixedString25 - 16);
            if (stringStorageToRelease26 != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease26) == -1)
                memoryFree (stringStorageToRelease26);
            if (activeJuceLogger != 0)
                (*(void (**) (std::int64_t, std::int64_t*)) (*(std::uint64_t*)activeJuceLogger + 8LL)) (activeJuceLogger, &reusableString51);
            else
                juceLoggerWriteDefaultLog (&reusableString51);
            stringStorageToRelease27 = (void*)(reusableString51 - 16);
            if ((void*)(reusableString51 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease27) == -1)
                memoryFree (stringStorageToRelease27);
            stringStorageToRelease28 = reusableString52 - 16;
            if (reusableString52 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease28) == -1)
                memoryFree (stringStorageToRelease28);
            juceStringConstructFromUtf8 (&reusableString40, "rejected onboarding accept without verified authorization");
            juceStringConstructFromUtf8 (&reusableString52, "FAD-ONB-AUTH-REQUIRED");
            juceStringConstructFromUtf8 (&reusableString51, "OnboardingPanel");
            diagnosticsReportUiWarning (&reusableString51, &reusableString52, &reusableString40);
            stringStorageToRelease29 = (void*)(reusableString51 - 16);
            if ((void*)(reusableString51 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease29) == -1)
                memoryFree (stringStorageToRelease29);
            stringStorageToRelease30 = reusableString52 - 16;
            if (reusableString52 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease30) == -1)
                memoryFree (stringStorageToRelease30);
            stringStorageToRelease31 = (void*)(reusableString40 - 16);
            if ((void*)(reusableString40 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease31) == -1)
                memoryFree (stringStorageToRelease31);
            *(std::uint8_t*)(panel + 808) = 1;
            onboardingPanelPushAuthStateToJavaScript (panel);
            opaqueValue32 = *(std::uint64_t*)(panel + 696);
            if (opaqueValue32 == 0)
            {
            label115:
                LOBYTE (nonceValidationCode) = 1;
                return nonceValidationCode;
            }
            juceStringConstructFromUtf8 (
                &reusableString51,
                "if (typeof window.fadOnboardingNativeAcceptRejected === 'function') { window.fadOnboardingNativeAcceptRejected(); }");
            opaqueValue50 = 0;
            reusableString52 = &emptyJuceStringCharacters;
            sub_1808EE060 (opaqueValue32, &reusableString51, &reusableString52, stackStorage49);
            opaqueValue15 = reusableString51;
        }
        stringStorageToRelease33 = (void*)(opaqueValue15 - 16);
        if (stringStorageToRelease33 != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease33) == -1)
            memoryFree (stringStorageToRelease33);
        goto label115;
    }
    return nonceValidationCode;
}

// ===== Onboarding_ValidateNonce @ 0x1806c5ae0 size=537 =====
// onboarding-accept nonce validation
const char** onboardingValidateAcceptanceNonce (std::uint64_t* commandUrl, const char** expectedNonce)
{
    char temporaryCleanupFlags; // si
    const char* acceptUrlPrefixCharacters; // rax
    const char* prefixCharactersOrResultScratch; // rbx
    char* stringStorageToRelease7; // rcx
    char isUnrelatedNavigation; // bp
    char* stringStorageToRelease9; // rcx
    const char** nonceKeyStringStorage; // rcx
    const char** validationResult; // rbx
    char* stringStorageToRelease13; // rcx
    const char** validationResultOrNonceKeyScratch; // [rsp+50h] [rbp+8h] BYREF
    const char* urlPrefixOrNonceScratch; // [rsp+60h] [rbp+18h] BYREF

    temporaryCleanupFlags = 0;
    LODWORD (validationResultOrNonceKeyScratch) = 0;
    if ((unsigned int)utf8CompareStrings (*commandUrl, "fadlab://onboarding-accept") == 0)
    {
        prefixCharactersOrResultScratch = (const char*)validationResultOrNonceKeyScratch;
    label10:
        isUnrelatedNavigation = 0;
        goto label11;
    }
    juceStringConstructFromUtf8 (&urlPrefixOrNonceScratch, "fadlab://onboarding-accept");
    validationResultOrNonceKeyScratch = &urlPrefixOrNonceScratch;
    juceStringAppendUtf8Range (&urlPrefixOrNonceScratch, "?", "");
    acceptUrlPrefixCharacters = urlPrefixOrNonceScratch;
    prefixCharactersOrResultScratch = urlPrefixOrNonceScratch;
    if (urlPrefixOrNonceScratch - 16 != (const char*)&emptyJuceStringStorage)
    {
        _InterlockedIncrement ((volatile std::int32_t*)urlPrefixOrNonceScratch - 4);
        acceptUrlPrefixCharacters = urlPrefixOrNonceScratch;
    }
    stringStorageToRelease7 = (char*)(acceptUrlPrefixCharacters - 16);
    if (acceptUrlPrefixCharacters - 16 != (const char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease7) == -1)
        memoryFree (stringStorageToRelease7);
    temporaryCleanupFlags = 3;
    if ((std::uint8_t)juceStringStartsWithUtf8 (commandUrl, prefixCharactersOrResultScratch) != 0)
        goto label10;
    isUnrelatedNavigation = 1;
label11:
    if ((temporaryCleanupFlags & 1) != 0)
    {
        stringStorageToRelease9 = (char*)(prefixCharactersOrResultScratch - 16);
        if (prefixCharactersOrResultScratch - 16 != (const char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease9) == -1)
            memoryFree (stringStorageToRelease9);
    }
    if (isUnrelatedNavigation != 0)
    {
        LODWORD (validationResultOrNonceKeyScratch) = 0;
        BYTE4 (validationResultOrNonceKeyScratch) = 0;
        return validationResultOrNonceKeyScratch;
    }
    else if (**expectedNonce != 0)
    {
        if ((unsigned int)utf8CompareStrings (*commandUrl, "fadlab://onboarding-accept") != 0)
        {
            juceStringConstructFromUtf8 (&validationResultOrNonceKeyScratch, "nonce");
            sub_1806C5740 (&urlPrefixOrNonceScratch, commandUrl, &validationResultOrNonceKeyScratch);
            nonceKeyStringStorage = validationResultOrNonceKeyScratch - 2;
            if (validationResultOrNonceKeyScratch - 2 != (const char**)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)nonceKeyStringStorage) == -1)
                memoryFree (nonceKeyStringStorage);
            if (*urlPrefixOrNonceScratch != 0 && (urlPrefixOrNonceScratch == *expectedNonce || strcmp (urlPrefixOrNonceScratch, *expectedNonce) == 0))
                LODWORD (validationResultOrNonceKeyScratch) = 1;
            else
                LODWORD (validationResultOrNonceKeyScratch) = 3;
            BYTE4 (validationResultOrNonceKeyScratch) = 0;
            validationResult = validationResultOrNonceKeyScratch;
            stringStorageToRelease13 = (char*)(urlPrefixOrNonceScratch - 16);
            if (urlPrefixOrNonceScratch - 16 != (const char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease13) == -1)
                memoryFree (stringStorageToRelease13);
            return validationResult;
        }
        else
        {
            LODWORD (validationResultOrNonceKeyScratch) = 3;
            BYTE4 (validationResultOrNonceKeyScratch) = 1;
            return validationResultOrNonceKeyScratch;
        }
    }
    else
    {
        LODWORD (validationResultOrNonceKeyScratch) = 2;
        BYTE4 (validationResultOrNonceKeyScratch) = 0;
        return validationResultOrNonceKeyScratch;
    }
}
