#include <cstdint>

// ===== Onboarding_ValidateHtml @ 0x1806c7940 size=662 =====
// checks required markers incl __FAD_ONBOARDING_AUTH_STATE__, fadlab:// URLs
bool onboardingIsBundledHtmlCompatible (std::uint8_t** htmlDocument)
{
    int opaqueValue2; // edi
    int opaqueValue3; // eax
    int opaqueValue4; // eax
    int opaqueValue5; // eax
    int opaqueValue6; // eax
    int opaqueValue7; // eax
    int opaqueValue8; // eax
    int opaqueValue9; // eax
    int opaqueValue10; // eax

    if (**htmlDocument == 0)
        return false;
    opaqueValue2 = 0;
    opaqueValue3 = aMetaNameFadlab[0] != 0 ? sub_1800B3800 (htmlDocument, "<meta name=\"fadlab-onboarding-version\" content=\"6\">") : 0;
    if (opaqueValue3 < 0)
        return false;
    opaqueValue4 = aFadlabOnboardi[0] != 0 ? sub_1800B3800 (htmlDocument, "fadlab://onboarding-accept") : 0;
    if (opaqueValue4 < 0)
        return false;
    opaqueValue5 = aFadOnboardingA[0] != 0 ? sub_1800B3800 (htmlDocument, "__FAD_ONBOARDING_ACCEPT_NONCE__") : 0;
    if (opaqueValue5 < 0)
        return false;
    opaqueValue6 = aFadOnboardingR[0] != 0 ? sub_1800B3800 (htmlDocument, "__FAD_ONBOARDING_RUNTIME_ACTIVE__") : 0;
    if (opaqueValue6 < 0)
        return false;
    opaqueValue7 = aFontsOnboardin[0] != 0 ? sub_1800B3800 (htmlDocument, "/fonts/onboarding-mono.ttf") : 0;
    if (opaqueValue7 < 0)
        return false;
    opaqueValue8 = aFontsOnboardin_0[0] != 0 ? sub_1800B3800 (htmlDocument, "/fonts/onboarding-pixel-latin.woff2") : 0;
    if (opaqueValue8 < 0)
        return false;
    opaqueValue9 = aFontsOnboardin_1[0] != 0 ? sub_1800B3800 (htmlDocument, "/fonts/onboarding-pixel-zh.woff2") : 0;
    if (opaqueValue9 < 0 || (int)sub_1800B3800 (htmlDocument, "fadlab://onboarding-page/") < 0)
        return false;
    opaqueValue10 = aIdSlider[0] != 0 ? sub_1800B3800 (htmlDocument, "id=\"slider\"") : 0;
    if (opaqueValue10 < 0)
        return false;
    if (aFadOnboardingA_0[0] != 0)
        opaqueValue2 = sub_1800B3800 (htmlDocument, "__FAD_ONBOARDING_AUTH_STATE__");
    return opaqueValue2 >= 0 && (int)sub_1800B3800 (htmlDocument, "fadlab://onboarding-auth/start") >= 0 && (int)sub_1800B3800 (htmlDocument, "fadlab://onboarding-auth/refresh") >= 0 && (int)sub_1800B3800 (htmlDocument, "fadlab://onboarding-account/connect") >= 0 && (int)sub_1800B3800 (htmlDocument, "fadlab://onboarding-account/login") >= 0 && (int)sub_1800B3800 (htmlDocument, "fadlab://onboarding-account/register") >= 0 && (int)sub_1800B3800 (htmlDocument, "fadlab://onboarding-account/help") >= 0 && (int)sub_1800B3800 (htmlDocument, "fadlab://onboarding-account/cdk") >= 0 && (int)sub_1800B3800 (htmlDocument, "fadlab://onboarding-legal/eula") >= 0 && (int)sub_1800B3800 (htmlDocument, "fadlab://onboarding-legal/terms") >= 0 && (int)sub_1800B3800 (htmlDocument, "fadlab://onboarding-legal/privacy") >= 0;
}

// ===== OnboardingPanel_Init @ 0x1806cf120 size=1421 =====
void onboardingPanelLoadBundledHtml (std::int64_t panel)
{
    char* stringStorageToRelease2; // rcx
    char* stringStorageToRelease3; // rcx
    void* stringStorageToRelease4; // rcx
    char* stringStorageToRelease5; // rcx
    char* temporaryPointer6; // rcx
    std::int64_t opaqueValue7; // rax
    std::int64_t opaqueValue8; // rcx
    void* stringStorageToRelease9; // rcx
    char** temporaryPointer10; // rax
    char* temporaryPointer11; // rcx
    char* temporaryPointer12; // rbx
    char* stringStorageToRelease13; // rcx
    std::uint64_t* temporaryPointer14; // rax
    char** temporaryPointer15; // rax
    char* temporaryPointer16; // rdi
    char* stringStorageToRelease17; // rcx
    void* stringStorageToRelease18; // rcx
    int* temporaryPointer19; // r9
    char** temporaryPointer20; // rax
    char* temporaryPointer21; // rbx
    char* stringStorageToRelease22; // rcx
    char** temporaryPointer23; // rax
    char* temporaryPointer24; // r12
    void* stringStorageToRelease25; // rcx
    char* temporaryPointer26; // rbx
    char* temporaryPointer27; // r9
    std::int64_t opaqueValue28; // rdi
    std::uint64_t* temporaryPointer29; // rax
    char** temporaryPointer30; // rax
    void* stringStorageToRelease31; // rcx
    char* stringStorageToRelease32; // rcx
    void* temporaryPointer33; // rcx
    char* stringStorageToRelease34; // rcx
    char* stringStorageToRelease35; // rcx
    void* stringStorageToRelease36; // rcx
    char* stringStorageToRelease37; // rcx
    char* stringStorageToRelease38; // rcx
    char* reusableString39; // [rsp+30h] [rbp-40h] BYREF
    char* temporaryPointer40; // [rsp+38h] [rbp-38h] BYREF
    char* reusableString41; // [rsp+40h] [rbp-30h] BYREF
    std::int64_t reusableString42; // [rsp+48h] [rbp-28h] BYREF
    std::uint64_t stackStorage43[2]; // [rsp+50h] [rbp-20h] BYREF

    if (*(std::uint64_t*)(panel + 696) != 0)
    {
        onboardingPanelResetSurfaceCallbacks();
        if (off_181491060 != nullptr)
            sub_180097430 (&temporaryPointer40, off_181491060, (char*)off_181491060 + 60618);
        else
            temporaryPointer40 = &emptyJuceStringCharacters;
        if (onboardingIsBundledHtmlCompatible (&temporaryPointer40))
        {
            opaqueValue7 = sub_180092C80 (stackStorage43);
            sub_18009B4C0 (&reusableString39, opaqueValue7, 16);
            opaqueValue8 = *(std::uint64_t*)(panel + 704);
            *(std::uint64_t*)(panel + 704) = reusableString39;
            stringStorageToRelease9 = (void*)(opaqueValue8 - 16);
            if (stringStorageToRelease9 != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease9) == -1)
                memoryFree (stringStorageToRelease9);
            *(std::uint16_t*)(panel + 809) = 0;
            *(std::uint8_t*)(panel + 811) = 0;
            ++*(std::uint64_t*)(panel + 816);
            sub_180024DB0 (panel + 824);
            if (*(std::uint32_t*)(panel + 832) != 0)
            {
                memoryFreeBuffer (*(LPVOID*)(panel + 824));
                *(std::uint64_t*)(panel + 824) = 0;
            }
            *(std::uint32_t*)(panel + 832) = 0;
            *(std::uint64_t*)(panel + 800) = *(std::uint64_t*)(panel + 792);
            *(std::uint8_t*)(panel + 808) = 0;
            *(std::uint16_t*)(panel + 812) = 0;
            temporaryPointer10 = (char**)sub_180099550 (&temporaryPointer40, &reusableString39, "__FAD_ONBOARDING_ACCEPT_NONCE__", *(std::uint64_t*)(panel + 704));
            temporaryPointer11 = temporaryPointer40;
            temporaryPointer12 = *temporaryPointer10;
            temporaryPointer40 = *temporaryPointer10;
            *temporaryPointer10 = temporaryPointer11;
            stringStorageToRelease13 = reusableString39 - 16;
            if (reusableString39 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease13) == -1)
                memoryFree (stringStorageToRelease13);
            temporaryPointer14 = (std::uint64_t*)authStateBuildWebViewJson (panel, (std::int64_t)&reusableString42);
            temporaryPointer15 = (char**)sub_180099550 (&temporaryPointer40, &reusableString39, "__FAD_ONBOARDING_AUTH_STATE__", *temporaryPointer14);
            temporaryPointer16 = *temporaryPointer15;
            temporaryPointer40 = *temporaryPointer15;
            *temporaryPointer15 = temporaryPointer12;
            stringStorageToRelease17 = reusableString39 - 16;
            if (reusableString39 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease17) == -1)
                memoryFree (stringStorageToRelease17);
            stringStorageToRelease18 = (void*)(reusableString42 - 16);
            if ((void*)(reusableString42 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease18) == -1)
                memoryFree (stringStorageToRelease18);
            temporaryPointer19 = &dword_180F49688;
            if (*(std::uint8_t*)(panel + 841) != 0)
                temporaryPointer19 = &dword_180F49690;
            temporaryPointer20 = (char**)sub_180099550 (&temporaryPointer40, &reusableString39, "__FAD_ONBOARDING_RUNTIME_ACTIVE__", temporaryPointer19);
            temporaryPointer21 = *temporaryPointer20;
            temporaryPointer40 = *temporaryPointer20;
            *temporaryPointer20 = temporaryPointer16;
            stringStorageToRelease22 = reusableString39 - 16;
            if (reusableString39 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease22) == -1)
                memoryFree (stringStorageToRelease22);
            reusableString39 = temporaryPointer21;
            if (temporaryPointer21 - 16 != (char*)&emptyJuceStringStorage)
                _InterlockedIncrement ((volatile std::int32_t*)temporaryPointer21 - 4);
            temporaryPointer23 = (char**)sub_1806C5510 (&reusableString42, &reusableString39);
            temporaryPointer24 = *temporaryPointer23;
            temporaryPointer40 = *temporaryPointer23;
            *temporaryPointer23 = temporaryPointer21;
            stringStorageToRelease25 = (void*)(reusableString42 - 16);
            if ((void*)(reusableString42 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease25) == -1)
                memoryFree (stringStorageToRelease25);
            if (off_1814911B8 != nullptr)
            {
                sub_180097430 (&reusableString39, off_1814911B8, off_1814911B8 + 43551);
                temporaryPointer26 = reusableString39;
                temporaryPointer27 = reusableString39;
            }
            else
            {
                temporaryPointer26 = &emptyJuceStringCharacters;
                reusableString39 = &emptyJuceStringCharacters;
                temporaryPointer27 = &emptyJuceStringCharacters;
            }
            opaqueValue28 = sub_180099550 (&temporaryPointer40, stackStorage43, "__FADOS_DITHER_ENGINE__", temporaryPointer27);
            temporaryPointer29 = (std::uint64_t*)sub_18009EBF0 (&reusableString41, off_181491070, 151848);
            temporaryPointer30 = (char**)sub_180099550 (opaqueValue28, &reusableString42, "__FADOS_LOGO_BASE64__", *temporaryPointer29);
            temporaryPointer40 = *temporaryPointer30;
            *temporaryPointer30 = temporaryPointer24;
            stringStorageToRelease31 = (void*)(reusableString42 - 16);
            if ((void*)(reusableString42 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease31) == -1)
                memoryFree (stringStorageToRelease31);
            stringStorageToRelease32 = reusableString41 - 16;
            if (reusableString41 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease32) == -1)
                memoryFree (stringStorageToRelease32);
            temporaryPointer33 = (void*)(stackStorage43[0] - 16LL);
            if ((void*)(stackStorage43[0] - 16LL) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)temporaryPointer33) == -1)
                memoryFree (temporaryPointer33);
            stringStorageToRelease34 = temporaryPointer26 - 16;
            if (temporaryPointer26 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease34) == -1)
                memoryFree (stringStorageToRelease34);
            sub_1808ECD30 (*(std::uint64_t*)(panel + 696), &temporaryPointer40);
            reusableString41 = &emptyJuceStringCharacters;
            juceStringConstructFromUtf8 (&reusableString42, "FAD-ONB-HTML-MEMORY-LOAD");
            juceStringConstructFromUtf8 (&reusableString39, "OnboardingPanel");
            diagnosticsReportUiWarning (&reusableString39, &reusableString42, &reusableString41);
            stringStorageToRelease35 = reusableString39 - 16;
            if (reusableString39 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease35) == -1)
                memoryFree (stringStorageToRelease35);
            stringStorageToRelease36 = (void*)(reusableString42 - 16);
            if ((void*)(reusableString42 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease36) == -1)
                memoryFree (stringStorageToRelease36);
            temporaryPointer6 = reusableString41;
        }
        else
        {
            juceStringConstructFromUtf8 (&reusableString41, "OnboardingPanel: bundled onboarding.html failed compatibility checks");
            if (activeJuceLogger != 0)
                (*(void (**) (std::int64_t, char**)) (*(std::uint64_t*)activeJuceLogger + 8LL)) (activeJuceLogger, &reusableString41);
            else
                juceLoggerWriteDefaultLog (&reusableString41);
            stringStorageToRelease2 = reusableString41 - 16;
            if (reusableString41 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease2) == -1)
                memoryFree (stringStorageToRelease2);
            reusableString39 = &emptyJuceStringCharacters;
            juceStringConstructFromUtf8 (&reusableString42, "FAD-ONB-BUNDLED-COMPAT-FAILED");
            juceStringConstructFromUtf8 (&reusableString41, "OnboardingPanel");
            diagnosticsReportUiWarning (&reusableString41, &reusableString42, &reusableString39);
            stringStorageToRelease3 = reusableString41 - 16;
            if (reusableString41 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease3) == -1)
                memoryFree (stringStorageToRelease3);
            stringStorageToRelease4 = (void*)(reusableString42 - 16);
            if ((void*)(reusableString42 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease4) == -1)
                memoryFree (stringStorageToRelease4);
            stringStorageToRelease5 = reusableString39 - 16;
            if (reusableString39 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease5) == -1)
                memoryFree (stringStorageToRelease5);
            juceStringConstructFromUtf8 (&reusableString39, "Failed to load the bundled onboarding UI.");
            onboardingShowSetupError (panel, &reusableString39);
            temporaryPointer6 = reusableString39;
        }
        stringStorageToRelease37 = temporaryPointer6 - 16;
        if (stringStorageToRelease37 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease37) == -1)
            memoryFree (stringStorageToRelease37);
        stringStorageToRelease38 = temporaryPointer40 - 16;
        if (temporaryPointer40 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease38) == -1)
            memoryFree (stringStorageToRelease38);
    }
}

// ===== OnboardingPanel_NotifyOwner @ 0x1806d01d0 size=298 =====
std::int64_t onboardingPanelResetSurfaceCallbacks (std::int64_t panel)
{
    std::int64_t opaqueValue2; // rcx
    std::int64_t opaqueValue3; // r8
    char opaqueValue4; // al
    std::int64_t opaqueValue6; // [rsp+20h] [rbp-18h] BYREF
    int opaqueValue7; // [rsp+28h] [rbp-10h]
    int opaqueValue8; // [rsp+2Ch] [rbp-Ch]

    *(std::uint8_t*)(panel + 843) = 0;
    *(std::uint8_t*)(panel + 845) = 0;
    (*(void (**) (std::int64_t, std::uint64_t)) (*(std::uint64_t*)(panel + 928) + 88LL)) (panel + 928, 0);
    (*(void (**) (std::int64_t, std::uint64_t)) (*(std::uint64_t*)(panel + 1472) + 88LL)) (panel + 1472, 0);
    (*(void (**) (std::int64_t, std::uint64_t)) (*(std::uint64_t*)(panel + 2328) + 88LL)) (panel + 2328, 0);
    (*(void (**) (std::int64_t, std::uint64_t)) (*(std::uint64_t*)(panel + 2800) + 88LL)) (panel + 2800, 0);
    (*(void (**) (std::int64_t, std::uint64_t)) (*(std::uint64_t*)(panel + 3272) + 88LL)) (panel + 3272, 0);
    (*(void (**) (std::int64_t, std::uint64_t)) (*(std::uint64_t*)(panel + 3744) + 88LL)) (panel + 3744, 0);
    sub_1801FC580 (panel + 3744, 0, 0, 0);
    (*(void (**) (std::int64_t, std::uint64_t)) (*(std::uint64_t*)(panel + 4216) + 88LL)) (panel + 4216, 0);
    opaqueValue2 = *(std::uint64_t*)(panel + 696);
    if (opaqueValue2 != 0)
        juceComponentSetVisible (opaqueValue2, 1u);
    opaqueValue4 = (std::uint8_t)sub_1801C8A60 (panel) != 0 && *(std::uint8_t*)(panel + 843) == 0;
    if (*(std::uint8_t*)(panel + 841) != opaqueValue4)
    {
        *(std::uint8_t*)(panel + 841) = opaqueValue4;
        sub_1806CE420 (panel);
        if (*(std::uint8_t*)(panel + 841) != 0 && *(std::uint8_t*)(panel + 840) == 0)
            onboardingPanelEnsureSurfaceLoaded (panel);
    }
    opaqueValue6 = 0;
    LOBYTE (opaqueValue3) = 1;
    opaqueValue7 = *(std::uint32_t*)(panel + 64);
    opaqueValue8 = *(std::uint32_t*)(panel + 68);
    return sub_1801CB730 (panel, &opaqueValue6, opaqueValue3);
}

// ===== OnboardingPanel_ResetState @ 0x1806ce7d0 size=725 =====
void onboardingPanelResetForReview (std::int64_t panel, std::int64_t reviewOptions)
{
    std::int64_t opaqueValue4; // rax
    std::int64_t opaqueValue5; // rax
    volatile std::int32_t* temporaryPointer6; // rbx
    void* temporaryPointer7; // rcx
    void* stringStorageToRelease8; // rcx
    void* stringStorageToRelease9; // rcx
    void* stringStorageToRelease10; // rcx
    volatile std::int32_t* temporaryPointer11; // rcx
    void* stringStorageToRelease12; // rcx
    void* stringStorageToRelease13; // rcx
    std::int64_t opaqueValue14; // [rsp+30h] [rbp-29h] BYREF
    volatile std::int32_t* temporaryPointer15; // [rsp+38h] [rbp-21h] BYREF
    std::int64_t opaqueValue16; // [rsp+40h] [rbp-19h] BYREF
    char stackStorage17[8]; // [rsp+48h] [rbp-11h] BYREF
    std::int64_t onboardingPanelString18; // [rsp+50h] [rbp-9h] BYREF
    std::int64_t diagnosticCodeString19; // [rsp+58h] [rbp-1h] BYREF
    std::int64_t opaqueValue20; // [rsp+60h] [rbp+7h] BYREF
    char stackStorage21[39]; // [rsp+68h] [rbp+Fh] BYREF
    char opaqueValue22; // [rsp+8Fh] [rbp+36h] BYREF
    std::uint64_t stackStorage23[2]; // [rsp+90h] [rbp+37h] BYREF

    opaqueValue4 = sub_180097810 (stackStorage23, *(unsigned int*)(reviewOptions + 12));
    juceStringConstructFromUtf8Span (&opaqueValue20, opaqueValue4, &opaqueValue22 - opaqueValue4);
    opaqueValue5 = sub_180097810 (stackStorage23, *(unsigned int*)(reviewOptions + 8));
    juceStringConstructFromUtf8Span (&opaqueValue16, opaqueValue5, &opaqueValue22 - opaqueValue5);
    juceStringConstructFromUtf8 (stackStorage17, "bounds=");
    temporaryPointer6 = (volatile std::int32_t*)sub_180098710 (stackStorage21, stackStorage17, &opaqueValue16);
    temporaryPointer15 = temporaryPointer6;
    juceStringAppendUtf8Range (temporaryPointer6, "x", "");
    opaqueValue14 = *(std::uint64_t*)temporaryPointer6;
    if ((void*)(opaqueValue14 - 16) != &emptyJuceStringStorage)
        _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue14 - 16));
    temporaryPointer7 = (void*)(*(std::uint64_t*)temporaryPointer6 - 16LL);
    if (temporaryPointer7 != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)temporaryPointer7) == -1)
        memoryFree (temporaryPointer7);
    temporaryPointer15 = (volatile std::int32_t*)&opaqueValue14;
    temporaryPointer15 = *(volatile std::int32_t**)juceStringAppendString (&opaqueValue14, &opaqueValue20);
    if (temporaryPointer15 - 4 != (volatile std::int32_t*)&emptyJuceStringStorage)
        _InterlockedIncrement (temporaryPointer15 - 4);
    stringStorageToRelease8 = (void*)(opaqueValue14 - 16);
    if ((void*)(opaqueValue14 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease8) == -1)
        memoryFree (stringStorageToRelease8);
    juceStringConstructFromUtf8 (&diagnosticCodeString19, "FAD-ONB-REOPEN-REVIEW");
    juceStringConstructFromUtf8 (&onboardingPanelString18, "OnboardingPanel");
    diagnosticsReportUiWarning (&onboardingPanelString18, &diagnosticCodeString19, &temporaryPointer15);
    stringStorageToRelease9 = (void*)(onboardingPanelString18 - 16);
    if ((void*)(onboardingPanelString18 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease9) == -1)
        memoryFree (stringStorageToRelease9);
    stringStorageToRelease10 = (void*)(diagnosticCodeString19 - 16);
    if ((void*)(diagnosticCodeString19 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease10) == -1)
        memoryFree (stringStorageToRelease10);
    temporaryPointer11 = temporaryPointer15 - 4;
    if (temporaryPointer15 - 4 != (volatile std::int32_t*)&emptyJuceStringStorage && _InterlockedDecrement (temporaryPointer11) == -1)
        memoryFree ((LPVOID)temporaryPointer11);
    stringStorageToRelease12 = (void*)(opaqueValue16 - 16);
    if ((void*)(opaqueValue16 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease12) == -1)
        memoryFree (stringStorageToRelease12);
    stringStorageToRelease13 = (void*)(opaqueValue20 - 16);
    if ((void*)(opaqueValue20 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease13) == -1)
        memoryFree (stringStorageToRelease13);
    *(std::uint16_t*)(panel + 809) = 0;
    *(std::uint8_t*)(panel + 811) = 0;
    ++*(std::uint64_t*)(panel + 816);
    sub_180024DB0 (panel + 824);
    if (*(std::uint32_t*)(panel + 832) != 0)
    {
        memoryFreeBuffer (*(LPVOID*)(panel + 824));
        *(std::uint64_t*)(panel + 824) = 0;
    }
    *(std::uint32_t*)(panel + 832) = 0;
    *(std::uint8_t*)(panel + 808) = 0;
    *(std::uint16_t*)(panel + 812) = 0;
    *(std::uint8_t*)(panel + 840) = 0;
    *(std::uint8_t*)(panel + 842) = 0;
    onboardingPanelResetSurfaceCallbacks (panel);
    sub_1801C98A0 (panel, *(std::uint64_t*)reviewOptions, HIDWORD (*(std::uint64_t*)reviewOptions), *(std::uint64_t*)(reviewOptions + 8), HIDWORD (*(std::uint64_t*)(reviewOptions + 8)));
    juceComponentSetVisible (panel, 1u);
    onboardingPanelEnsureSurfaceLoaded (panel);
    juceComponentBringToFront (panel, 1u);
}

// ===== OnboardingPanel_Show_Decide @ 0x1806ceab0 size=1643 =====
void onboardingPanelEnsureSurfaceLoaded (std::int64_t panel)
{
    int opaqueValue2; // ebx
    int opaqueValue3; // edi
    std::int64_t opaqueValue4; // rax
    std::int64_t opaqueValue5; // rax
    std::int64_t* temporaryPointer6; // rbx
    void* stringStorageToRelease7; // rcx
    std::int64_t opaqueValue8; // rbx
    void* stringStorageToRelease9; // rcx
    std::uint8_t* stringStorageToRelease10; // rcx
    std::uint8_t* stringStorageToRelease11; // rcx
    void* stringStorageToRelease12; // rcx
    std::int64_t opaqueValue13; // rax
    std::uint8_t* temporaryPointer14; // rax
    std::uint8_t* stringStorageToRelease15; // rcx
    std::uint8_t* stringStorageToRelease16; // rcx
    std::uint8_t* stringStorageToRelease17; // rcx
    std::uint8_t* stringStorageToRelease18; // rcx
    std::uint8_t* stringStorageToRelease19; // rcx
    std::uint8_t* stringStorageToRelease20; // rcx
    volatile std::int32_t* temporaryPointer21; // rcx
    std::int64_t opaqueValue22; // rax
    std::int64_t opaqueValue23; // rax
    const char* temporaryPointer24; // rdx
    volatile std::int32_t* temporaryPointer25; // rbx
    void* temporaryPointer26; // rcx
    volatile std::int32_t* temporaryPointer27; // rbx
    void* temporaryPointer28; // rcx
    void* stringStorageToRelease29; // rcx
    std::uint8_t* stringStorageToRelease30; // rcx
    std::uint8_t* stringStorageToRelease31; // rcx
    void* stringStorageToRelease32; // rcx
    void* stringStorageToRelease33; // rcx
    std::uint8_t* stringStorageToRelease34; // rcx
    volatile std::int32_t* temporaryPointer35; // rcx
    std::uint8_t* reusableString36; // [rsp+20h] [rbp-29h] BYREF
    std::uint8_t* reusableString37; // [rsp+28h] [rbp-21h] BYREF
    volatile std::int32_t* temporaryPointer38; // [rsp+30h] [rbp-19h] BYREF
    std::int64_t opaqueValue39; // [rsp+38h] [rbp-11h] BYREF
    std::int64_t opaqueValue40; // [rsp+40h] [rbp-9h] BYREF
    std::int64_t* temporaryPointer41; // [rsp+48h] [rbp-1h] BYREF
    char stackStorage42[8]; // [rsp+50h] [rbp+7h] BYREF
    std::int64_t onboardingPanelString43; // [rsp+58h] [rbp+Fh] BYREF
    char stackStorage44[39]; // [rsp+60h] [rbp+17h] BYREF
    char opaqueValue45; // [rsp+87h] [rbp+3Eh] BYREF
    std::int64_t opaqueValue46; // [rsp+88h] [rbp+3Fh] BYREF

    opaqueValue2 = *(std::uint32_t*)(panel + 68);
    opaqueValue3 = *(std::uint32_t*)(panel + 64);
    if (*(std::uint8_t*)(panel + 843) == 0)
    {
        if (*(std::uint8_t*)(panel + 840) != 0)
        {
            if (**(std::uint8_t**)(panel + 704) != 0)
                onboardingPanelResetSurfaceCallbacks (panel);
        }
        else
        {
            if ((std::uint8_t)sub_1801C8A60() != 0 && opaqueValue3 > 0 && opaqueValue2 > 0)
            {
                sub_1806C9A00 (panel);
                *(std::uint8_t*)(panel + 840) = 1;
                onboardingPanelResetSurfaceCallbacks (panel);
                opaqueValue4 = sub_180097810 (&opaqueValue46, (unsigned int)opaqueValue2);
                juceStringConstructFromUtf8Span (&reusableString36, opaqueValue4, &opaqueValue45 - opaqueValue4);
                opaqueValue5 = sub_180097810 (&opaqueValue46, (unsigned int)opaqueValue3);
                juceStringConstructFromUtf8Span (&reusableString37, opaqueValue5, &opaqueValue45 - opaqueValue5);
                juceStringConstructFromUtf8 (stackStorage42, "bounds=");
                temporaryPointer6 = (std::int64_t*)sub_180098710 (&temporaryPointer38, stackStorage42, &reusableString37);
                temporaryPointer41 = temporaryPointer6;
                juceStringAppendUtf8Range (temporaryPointer6, "x", "");
                opaqueValue39 = *temporaryPointer6;
                if ((void*)(opaqueValue39 - 16) != &emptyJuceStringStorage)
                    _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue39 - 16));
                stringStorageToRelease7 = (void*)(*temporaryPointer6 - 16);
                if (stringStorageToRelease7 != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease7) == -1)
                    memoryFree (stringStorageToRelease7);
                temporaryPointer41 = &opaqueValue39;
                opaqueValue8 = *(std::uint64_t*)juceStringAppendString (&opaqueValue39, &reusableString36);
                opaqueValue40 = opaqueValue8;
                if ((void*)(opaqueValue8 - 16) != &emptyJuceStringStorage)
                    _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue8 - 16));
                stringStorageToRelease9 = (void*)(opaqueValue39 - 16);
                if ((void*)(opaqueValue39 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease9) == -1)
                    memoryFree (stringStorageToRelease9);
                stringStorageToRelease10 = reusableString37 - 16;
                if (reusableString37 - 16 != (std::uint8_t*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease10) == -1)
                    memoryFree (stringStorageToRelease10);
                stringStorageToRelease11 = reusableString36 - 16;
                if (reusableString36 - 16 != (std::uint8_t*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease11) == -1)
                    memoryFree (stringStorageToRelease11);
                juceStringConstructFromUtf8 (&reusableString36, "OnboardingPanel: FAD-ONB-LOAD-DEFERRED ");
                if (*reusableString36 != 0)
                {
                    opaqueValue13 = -1;
                    do
                        ++opaqueValue13;
                    while (*(std::uint8_t*)(opaqueValue8 + opaqueValue13) != 0);
                    juceStringAppendUtf8Range (&reusableString36, opaqueValue8, opaqueValue13 + opaqueValue8);
                }
                else
                {
                    if ((void*)(opaqueValue8 - 16) != &emptyJuceStringStorage)
                        _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue8 - 16));
                    stringStorageToRelease12 = (void*)(_InterlockedExchange64 ((volatile std::int64_t*)&reusableString36, opaqueValue8) - 16);
                    if (stringStorageToRelease12 != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease12) == -1)
                        memoryFree (stringStorageToRelease12);
                }
                temporaryPointer14 = reusableString36;
                reusableString37 = reusableString36;
                if (reusableString36 - 16 != (std::uint8_t*)&emptyJuceStringStorage)
                {
                    _InterlockedIncrement ((volatile std::int32_t*)reusableString36 - 4);
                    temporaryPointer14 = reusableString36;
                }
                stringStorageToRelease15 = temporaryPointer14 - 16;
                if (temporaryPointer14 - 16 != (std::uint8_t*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease15) == -1)
                    memoryFree (stringStorageToRelease15);
                if (activeJuceLogger != 0)
                    (*(void (**) (std::int64_t, std::uint8_t**)) (*(std::uint64_t*)activeJuceLogger + 8LL)) (activeJuceLogger, &reusableString37);
                else
                    juceLoggerWriteDefaultLog (&reusableString37);
                stringStorageToRelease16 = reusableString37 - 16;
                if (reusableString37 - 16 != (std::uint8_t*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease16) == -1)
                    memoryFree (stringStorageToRelease16);
                juceStringConstructFromUtf8 (&reusableString36, "FAD-ONB-LOAD-DEFERRED");
                juceStringConstructFromUtf8 (&reusableString37, "OnboardingPanel");
                diagnosticsReportUiWarning (&reusableString37, &reusableString36, &opaqueValue40);
                stringStorageToRelease17 = reusableString37 - 16;
                if (reusableString37 - 16 != (std::uint8_t*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease17) == -1)
                    memoryFree (stringStorageToRelease17);
                stringStorageToRelease18 = reusableString36 - 16;
                if (reusableString36 - 16 != (std::uint8_t*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease18) == -1)
                    memoryFree (stringStorageToRelease18);
                juceStringConstructFromUtf8 (&reusableString36, "FAD-ONB-LOAD-START");
                juceStringConstructFromUtf8 (&reusableString37, "OnboardingPanel");
                diagnosticsReportUiWarning (&reusableString37, &reusableString36, &opaqueValue40);
                stringStorageToRelease19 = reusableString37 - 16;
                if (reusableString37 - 16 != (std::uint8_t*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease19) == -1)
                    memoryFree (stringStorageToRelease19);
                stringStorageToRelease20 = reusableString36 - 16;
                if (reusableString36 - 16 != (std::uint8_t*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease20) == -1)
                    memoryFree (stringStorageToRelease20);
                onboardingPanelLoadBundledHtml (panel);
                if (**(std::uint8_t**)(panel + 704) != 0)
                    onboardingPanelResetSurfaceCallbacks (panel);
                temporaryPointer21 = (volatile std::int32_t*)opaqueValue40;
            }
            else
            {
                if (*(std::uint8_t*)(panel + 842) != 0)
                    return;
                *(std::uint8_t*)(panel + 842) = 1;
                opaqueValue22 = sub_180097810 (&opaqueValue46, (unsigned int)opaqueValue2);
                juceStringConstructFromUtf8Span (&onboardingPanelString43, opaqueValue22, &opaqueValue45 - opaqueValue22);
                opaqueValue23 = sub_180097810 (&opaqueValue46, (unsigned int)opaqueValue3);
                juceStringConstructFromUtf8Span (&reusableString36, opaqueValue23, &opaqueValue45 - opaqueValue23);
                temporaryPointer24 = "0";
                if (*(std::uint64_t*)(panel + 696) != 0)
                    temporaryPointer24 = "1";
                juceStringConstructFromUtf8 (&reusableString37, temporaryPointer24);
                juceStringConstructFromUtf8 (stackStorage42, "webViewHost=");
                temporaryPointer25 = (volatile std::int32_t*)sub_180098710 (stackStorage44, stackStorage42, &reusableString37);
                temporaryPointer38 = temporaryPointer25;
                juceStringAppendUtf8Range (temporaryPointer25, " bounds=", "");
                opaqueValue40 = *(std::uint64_t*)temporaryPointer25;
                if ((void*)(opaqueValue40 - 16) != &emptyJuceStringStorage)
                    _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue40 - 16));
                temporaryPointer26 = (void*)(*(std::uint64_t*)temporaryPointer25 - 16LL);
                if (temporaryPointer26 != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)temporaryPointer26) == -1)
                    memoryFree (temporaryPointer26);
                temporaryPointer27 = (volatile std::int32_t*)sub_180098710 (&temporaryPointer41, &opaqueValue40, &reusableString36);
                temporaryPointer38 = temporaryPointer27;
                juceStringAppendUtf8Range (temporaryPointer27, "x", "");
                opaqueValue39 = *(std::uint64_t*)temporaryPointer27;
                if ((void*)(opaqueValue39 - 16) != &emptyJuceStringStorage)
                    _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue39 - 16));
                temporaryPointer28 = (void*)(*(std::uint64_t*)temporaryPointer27 - 16LL);
                if (temporaryPointer28 != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)temporaryPointer28) == -1)
                    memoryFree (temporaryPointer28);
                temporaryPointer38 = (volatile std::int32_t*)&opaqueValue39;
                temporaryPointer38 = *(volatile std::int32_t**)juceStringAppendString (&opaqueValue39, &onboardingPanelString43);
                if (temporaryPointer38 - 4 != (volatile std::int32_t*)&emptyJuceStringStorage)
                    _InterlockedIncrement (temporaryPointer38 - 4);
                stringStorageToRelease29 = (void*)(opaqueValue39 - 16);
                if ((void*)(opaqueValue39 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease29) == -1)
                    memoryFree (stringStorageToRelease29);
                stringStorageToRelease30 = reusableString37 - 16;
                if (reusableString37 - 16 != (std::uint8_t*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease30) == -1)
                    memoryFree (stringStorageToRelease30);
                stringStorageToRelease31 = reusableString36 - 16;
                if (reusableString36 - 16 != (std::uint8_t*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease31) == -1)
                    memoryFree (stringStorageToRelease31);
                stringStorageToRelease32 = (void*)(onboardingPanelString43 - 16);
                if ((void*)(onboardingPanelString43 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease32) == -1)
                    memoryFree (stringStorageToRelease32);
                juceStringConstructFromUtf8 (&reusableString37, "FAD-ONB-LOAD-SKIP");
                juceStringConstructFromUtf8 (&onboardingPanelString43, "OnboardingPanel");
                diagnosticsReportUiWarning (&onboardingPanelString43, &reusableString37, &temporaryPointer38);
                stringStorageToRelease33 = (void*)(onboardingPanelString43 - 16);
                if ((void*)(onboardingPanelString43 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease33) == -1)
                    memoryFree (stringStorageToRelease33);
                stringStorageToRelease34 = reusableString37 - 16;
                if (reusableString37 - 16 != (std::uint8_t*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease34) == -1)
                    memoryFree (stringStorageToRelease34);
                temporaryPointer21 = temporaryPointer38;
            }
            temporaryPointer35 = temporaryPointer21 - 4;
            if (temporaryPointer35 != (volatile std::int32_t*)&emptyJuceStringStorage && _InterlockedDecrement (temporaryPointer35) == -1)
                memoryFree ((LPVOID)temporaryPointer35);
        }
    }
}

// ===== OnboardingPanel_ShowSurface @ 0x1806ca6c0 size=370 =====
void** onboardingPanelInitializeSurface (std::int64_t panel)
{
    void** result; // rax
    volatile std::int32_t* temporaryPointer3; // rcx
    volatile std::int32_t* temporaryPointer4; // rbx
    char opaqueValue5; // bp
    volatile std::int32_t* temporaryPointer6; // rsi
    volatile std::int32_t* temporaryPointer7; // rax
    volatile std::int32_t* temporaryPointer8; // rsi
    volatile std::int32_t* temporaryPointer9; // rcx
    volatile std::int32_t* temporaryPointer10; // rcx
    std::uint8_t stackStorage11[24]; // [rsp+20h] [rbp-58h] BYREF
    volatile std::int32_t* temporaryPointer12; // [rsp+38h] [rbp-40h]
    void* retaddr; // [rsp+78h] [rbp+0h] BYREF
    volatile std::int32_t* temporaryPointer14; // [rsp+80h] [rbp+8h] BYREF
    volatile std::int32_t* onboardingString15; // [rsp+88h] [rbp+10h] BYREF

    result = &retaddr;
    LODWORD (temporaryPointer14) = 0;
    if (*(std::uint64_t*)(panel + 696) != 0)
    {
        juceStringConstructFromUtf8 (&onboardingString15, "Onboarding");
        webViewBuildPathDiagnostics (stackStorage11, &onboardingString15);
        temporaryPointer3 = onboardingString15 - 4;
        if (onboardingString15 - 4 != (volatile std::int32_t*)&emptyJuceStringStorage && _InterlockedDecrement (temporaryPointer3) == -1)
            memoryFree ((LPVOID)temporaryPointer3);
        temporaryPointer4 = temporaryPointer12;
        if (*(std::uint8_t*)temporaryPointer12 != 0)
        {
            if (temporaryPointer12 - 4 != (volatile std::int32_t*)&emptyJuceStringStorage)
                _InterlockedIncrement (temporaryPointer12 - 4);
            opaqueValue5 = 1;
            temporaryPointer6 = temporaryPointer4;
            temporaryPointer7 = onboardingString15;
        }
        else
        {
            sub_1800B3260 (&onboardingString15, &unk_1812F63D0);
            opaqueValue5 = 6;
            temporaryPointer7 = onboardingString15;
            temporaryPointer6 = onboardingString15;
            temporaryPointer4 = temporaryPointer14;
        }
        temporaryPointer14 = temporaryPointer6;
        temporaryPointer8 = temporaryPointer6 - 4;
        if (temporaryPointer8 != (volatile std::int32_t*)&emptyJuceStringStorage)
            _InterlockedIncrement (temporaryPointer8);
        if ((opaqueValue5 & 2) != 0)
        {
            opaqueValue5 &= ~2u;
            temporaryPointer9 = temporaryPointer7 - 4;
            if (temporaryPointer7 - 4 != (volatile std::int32_t*)&emptyJuceStringStorage && _InterlockedDecrement (temporaryPointer9) == -1)
                memoryFree ((LPVOID)temporaryPointer9);
        }
        if ((opaqueValue5 & 1) != 0)
        {
            temporaryPointer10 = temporaryPointer4 - 4;
            if (temporaryPointer4 - 4 != (volatile std::int32_t*)&emptyJuceStringStorage && _InterlockedDecrement (temporaryPointer10) == -1)
                memoryFree ((LPVOID)temporaryPointer10);
        }
        sub_1806CA840 (panel, &temporaryPointer14);
        if (temporaryPointer8 != (volatile std::int32_t*)&emptyJuceStringStorage && _InterlockedDecrement (temporaryPointer8) == -1)
            memoryFree ((LPVOID)temporaryPointer8);
        return (void**)sub_18021A800 (stackStorage11);
    }
    return result;
}
