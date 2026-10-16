#include <cstdint>

// ===== Onboarding_StartupCheck @ 0x180227700 size=2906 =====
void onboardingCheckStartupRequirements (std::int64_t editor, std::int64_t authState)
{
    std::int64_t opaqueValue4; // rbx
    std::int64_t opaqueValue5; // rdi
    std::int64_t opaqueValue6; // rcx
    int* temporaryPointer7; // rbx
    int* temporaryPointer8; // rdx
    int* temporaryPointer9; // rdx
    std::int64_t opaqueValue10; // rax
    int* temporaryPointer11; // rdx
    volatile std::int32_t* prefixedString12; // rdi
    void* temporaryPointer13; // rcx
    volatile std::int32_t* temporaryPointer14; // r14
    void* temporaryPointer15; // rcx
    volatile std::int32_t* temporaryPointer16; // r14
    void* temporaryPointer17; // rcx
    void* stringStorageToRelease18; // rcx
    void* stringStorageToRelease19; // rcx
    volatile std::int32_t* temporaryPointer20; // rcx
    char* stringStorageToRelease21; // rcx
    void* stringStorageToRelease22; // rcx
    char* stringStorageToRelease23; // rcx
    void* stringStorageToRelease24; // rcx
    char* stringStorageToRelease25; // rcx
    std::int64_t opaqueValue26; // r14
    std::uint8_t* temporaryPointer27; // r14
    std::int64_t opaqueValue28; // rdx
    char opaqueValue29; // r12
    std::int64_t opaqueValue30; // rdx
    int opaqueValue31; // ebx
    std::int64_t opaqueValue32; // rax
    std::int64_t opaqueValue33; // rax
    std::int64_t* prefixedString34; // rbx
    void* stringStorageToRelease35; // rcx
    void* stringStorageToRelease36; // rcx
    char* stringStorageToRelease37; // rcx
    void* stringStorageToRelease38; // rcx
    char* stringStorageToRelease39; // rcx
    void* stringStorageToRelease40; // rcx
    char* stringStorageToRelease41; // rcx
    char opaqueValue42; // al
    char* stringStorageToRelease43; // rcx
    void* stringStorageToRelease44; // rcx
    char* stringStorageToRelease45; // rcx
    char* stringStorageToRelease46; // rcx
    void* stringStorageToRelease47; // rcx
    char* stringStorageToRelease48; // rcx
    int* temporaryPointer49; // rdx
    std::int64_t* prefixedString50; // rbx
    void* stringStorageToRelease51; // rcx
    void* stringStorageToRelease52; // rcx
    char* stringStorageToRelease53; // rcx
    void* stringStorageToRelease54; // rcx
    char* stringStorageToRelease55; // rcx
    void* stringStorageToRelease56; // rcx
    char* stringStorageToRelease57; // rcx
    std::int64_t opaqueValue58; // rcx
    std::int64_t opaqueValue59; // r14
    char opaqueValue60; // al
    std::int64_t opaqueValue61; // rax
    std::int64_t opaqueValue62; // rax
    std::int64_t opaqueValue63; // rcx
    std::int64_t opaqueValue64; // r15
    std::int64_t opaqueValue65; // rbx
    char* temporaryPointer66; // [rsp+20h] [rbp-99h] BYREF
    std::int64_t opaqueValue67; // [rsp+28h] [rbp-91h] BYREF
    std::int64_t reusableString68; // [rsp+30h] [rbp-89h] BYREF
    char* pluginEditorString69; // [rsp+38h] [rbp-81h] BYREF
    char* temporaryPointer70; // [rsp+40h] [rbp-79h] BYREF
    std::int64_t opaqueValue71; // [rsp+48h] [rbp-71h] BYREF
    std::int64_t opaqueValue72; // [rsp+50h] [rbp-69h] BYREF
    volatile std::int32_t* temporaryPointer73; // [rsp+58h] [rbp-61h] BYREF
    std::uint64_t stackStorage74[2]; // [rsp+60h] [rbp-59h] BYREF
    std::int64_t opaqueValue75; // [rsp+70h] [rbp-49h] BYREF
    int opaqueValue76; // [rsp+78h] [rbp-41h]
    int opaqueValue77; // [rsp+7Ch] [rbp-3Dh]
    std::int64_t opaqueValue78; // [rsp+80h] [rbp-39h] BYREF
    std::int64_t opaqueValue79; // [rsp+88h] [rbp-31h] BYREF
    std::int64_t pluginEditorString80; // [rsp+90h] [rbp-29h] BYREF
    std::uint64_t stackStorage81[3]; // [rsp+98h] [rbp-21h] BYREF
    std::uint8_t stackStorage83[24]; // [rsp+B8h] [rbp-1h] BYREF
    std::uint64_t* temporaryPointer84; // [rsp+D0h] [rbp+17h]

    if (*(std::uint64_t*)(editor + 928) != 0 || *(std::uint64_t*)(editor + 976) != 0 && *(std::uint64_t*)(editor + 968) != 0 && *(std::uint64_t*)(editor + 984) != 0 && *(std::uint64_t*)(editor + 992) != 0)
    {
        opaqueValue4 = *(std::uint64_t*)(*(std::uint64_t*)(editor + 328) + 475552LL);
        opaqueValue5 = *(std::uint64_t*)(opaqueValue4 + 40);
        EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue5 + 1168));
        LOBYTE (opaqueValue4) = *(std::uint8_t*)(*(std::uint64_t*)(opaqueValue4 + 40) + 1728LL);
        LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue5 + 1168));
        if ((std::uint8_t)opaqueValue4 == 0)
        {
            opaqueValue6 = *(std::uint64_t*)(editor + 928);
            if (opaqueValue6 != 0)
                juceComponentSetVisible (opaqueValue6 + 153208, 0);
            else
                juceComponentSetVisible (*(std::uint64_t*)(editor + 968), 0);
            goto label107;
        }
        pluginEditorString69 = &emptyJuceStringCharacters;
        temporaryPointer7 = &dword_180F49688;
        temporaryPointer8 = &dword_180F49688;
        if (**(std::uint8_t**)(authState + 8) != 0)
            temporaryPointer8 = &dword_180F49690;
        juceStringConstructFromUtf8 (&reusableString68, temporaryPointer8);
        temporaryPointer9 = &dword_180F49688;
        if (*(std::uint8_t*)authState != 0)
            temporaryPointer9 = &dword_180F49690;
        juceStringConstructFromUtf8 (&temporaryPointer66, temporaryPointer9);
        opaqueValue10 = sub_180097810 (stackStorage83, *(unsigned int*)(authState + 212));
        juceStringConstructFromUtf8Span (&opaqueValue71, opaqueValue10, &stackStorage83[-opaqueValue10 - 1]);
        temporaryPointer11 = &dword_180F49688;
        if (*(std::uint8_t*)(authState + 208) != 0)
            temporaryPointer11 = &dword_180F49690;
        juceStringConstructFromUtf8 (&temporaryPointer70, temporaryPointer11);
        prefixedString12 = (volatile std::int32_t*)juceStringJoinUtf8Prefix (&opaqueValue75, "FAD-ONB-STARTUP-CHECK completed=", &temporaryPointer70);
        temporaryPointer73 = prefixedString12;
        juceStringAppendUtf8Range (prefixedString12, " version=", "");
        opaqueValue78 = *(std::uint64_t*)prefixedString12;
        if ((void*)(opaqueValue78 - 16) != &emptyJuceStringStorage)
            _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue78 - 16));
        temporaryPointer13 = (void*)(*(std::uint64_t*)prefixedString12 - 16LL);
        if (temporaryPointer13 != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)temporaryPointer13) == -1)
            memoryFree (temporaryPointer13);
        temporaryPointer14 = (volatile std::int32_t*)sub_180098710 (stackStorage74, &opaqueValue78, &opaqueValue71);
        temporaryPointer73 = temporaryPointer14;
        juceStringAppendUtf8Range (temporaryPointer14, " activated=", "");
        opaqueValue79 = *(std::uint64_t*)temporaryPointer14;
        if ((void*)(opaqueValue79 - 16) != &emptyJuceStringStorage)
            _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue79 - 16));
        temporaryPointer15 = (void*)(*(std::uint64_t*)temporaryPointer14 - 16LL);
        if (temporaryPointer15 != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)temporaryPointer15) == -1)
            memoryFree (temporaryPointer15);
        temporaryPointer16 = (volatile std::int32_t*)sub_180098710 (&opaqueValue72, &opaqueValue79, &temporaryPointer66);
        temporaryPointer73 = temporaryPointer16;
        juceStringAppendUtf8Range (temporaryPointer16, " hasDeviceCode=", "");
        opaqueValue67 = *(std::uint64_t*)temporaryPointer16;
        if ((void*)(opaqueValue67 - 16) != &emptyJuceStringStorage)
            _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue67 - 16));
        temporaryPointer17 = (void*)(*(std::uint64_t*)temporaryPointer16 - 16LL);
        if (temporaryPointer17 != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)temporaryPointer17) == -1)
            memoryFree (temporaryPointer17);
        temporaryPointer73 = (volatile std::int32_t*)&opaqueValue67;
        temporaryPointer73 = *(volatile std::int32_t**)juceStringAppendString (&opaqueValue67, &reusableString68);
        if (temporaryPointer73 - 4 != (volatile std::int32_t*)&emptyJuceStringStorage)
            _InterlockedIncrement (temporaryPointer73 - 4);
        stringStorageToRelease18 = (void*)(opaqueValue67 - 16);
        if ((void*)(opaqueValue67 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease18) == -1)
            memoryFree (stringStorageToRelease18);
        juceStringConstructFromUtf8 (&pluginEditorString80, "PluginEditor");
        diagnosticsReportUiWarning (&pluginEditorString80, &temporaryPointer73, &pluginEditorString69);
        stringStorageToRelease19 = (void*)(pluginEditorString80 - 16);
        if ((void*)(pluginEditorString80 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease19) == -1)
            memoryFree (stringStorageToRelease19);
        temporaryPointer20 = temporaryPointer73 - 4;
        if (temporaryPointer73 - 4 != (volatile std::int32_t*)&emptyJuceStringStorage && _InterlockedDecrement (temporaryPointer20) == -1)
            memoryFree ((LPVOID)temporaryPointer20);
        stringStorageToRelease21 = temporaryPointer70 - 16;
        if (temporaryPointer70 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease21) == -1)
            memoryFree (stringStorageToRelease21);
        stringStorageToRelease22 = (void*)(opaqueValue71 - 16);
        if ((void*)(opaqueValue71 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease22) == -1)
            memoryFree (stringStorageToRelease22);
        stringStorageToRelease23 = temporaryPointer66 - 16;
        if (temporaryPointer66 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease23) == -1)
            memoryFree (stringStorageToRelease23);
        stringStorageToRelease24 = (void*)(reusableString68 - 16);
        if ((void*)(reusableString68 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease24) == -1)
            memoryFree (stringStorageToRelease24);
        stringStorageToRelease25 = pluginEditorString69 - 16;
        if (pluginEditorString69 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease25) == -1)
            memoryFree (stringStorageToRelease25);
        opaqueValue26 = *(std::uint64_t*)(editor + 928);
        if (opaqueValue26 != 0)
            temporaryPointer27 = (std::uint8_t*)(opaqueValue26 + 153208);
        else
            temporaryPointer27 = *(std::uint8_t**)(editor + 968);
        editorSynchronizeWebViewAuthState (editor, authState);
        if (temporaryPointer27[844] != 0)
        {
            temporaryPointer27[844] = 0;
            onboardingPanelResetSurfaceCallbacks (temporaryPointer27);
            juceComponentSetVisible (temporaryPointer27, 0);
        }
        if (temporaryPointer27[810] != 0 || temporaryPointer27[811] != 0)
            goto label105;
        opaqueValue29 = *(std::uint8_t*)(authState + 208);
        if (opaqueValue29 == 0 && *(std::uint8_t*)(editor + 784) == 0)
        {
            if ((temporaryPointer27[168] & 2) != 0)
            {
            label106:
                LOBYTE (opaqueValue28) = 1;
                juceComponentBringToFront (temporaryPointer27, opaqueValue28);
            label107:
                editorSynchronizeOnboardingVisibility (editor);
                return;
            }
            opaqueValue30 = *(unsigned int*)(editor + 68);
            opaqueValue31 = *(std::uint32_t*)(editor + 64);
            opaqueValue75 = 0;
            opaqueValue76 = opaqueValue31;
            opaqueValue77 = opaqueValue30;
            if (opaqueValue31 <= 0 || (int)opaqueValue30 <= 0)
            {
                opaqueValue31 = 1050;
                opaqueValue76 = 1050;
                opaqueValue30 = 880;
                opaqueValue77 = 880;
            }
            temporaryPointer70 = &emptyJuceStringCharacters;
            opaqueValue32 = sub_180097810 (stackStorage83, opaqueValue30);
            juceStringConstructFromUtf8Span (&opaqueValue71, opaqueValue32, &stackStorage83[-opaqueValue32 - 1]);
            opaqueValue33 = sub_180097810 (stackStorage83, (unsigned int)opaqueValue31);
            juceStringConstructFromUtf8Span (&temporaryPointer66, opaqueValue33, &stackStorage83[-opaqueValue33 - 1]);
            prefixedString34 = (std::int64_t*)juceStringJoinUtf8Prefix (&opaqueValue72, "FAD-ONB-STARTUP-BOUNDS width=", &temporaryPointer66);
            stackStorage74[0] = prefixedString34;
            juceStringAppendUtf8Range (prefixedString34, " height=", "");
            opaqueValue67 = *prefixedString34;
            if ((void*)(opaqueValue67 - 16) != &emptyJuceStringStorage)
                _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue67 - 16));
            stringStorageToRelease35 = (void*)(*prefixedString34 - 16);
            if (stringStorageToRelease35 != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease35) == -1)
                memoryFree (stringStorageToRelease35);
            stackStorage74[0] = &opaqueValue67;
            reusableString68 = *(std::uint64_t*)juceStringAppendString (&opaqueValue67, &opaqueValue71);
            if ((void*)(reusableString68 - 16) != &emptyJuceStringStorage)
                _InterlockedIncrement ((volatile std::int32_t*)(reusableString68 - 16));
            stringStorageToRelease36 = (void*)(opaqueValue67 - 16);
            if ((void*)(opaqueValue67 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease36) == -1)
                memoryFree (stringStorageToRelease36);
            juceStringConstructFromUtf8 (&pluginEditorString69, "PluginEditor");
            diagnosticsReportUiWarning (&pluginEditorString69, &reusableString68, &temporaryPointer70);
            stringStorageToRelease37 = pluginEditorString69 - 16;
            if (pluginEditorString69 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease37) == -1)
                memoryFree (stringStorageToRelease37);
            stringStorageToRelease38 = (void*)(reusableString68 - 16);
            if ((void*)(reusableString68 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease38) == -1)
                memoryFree (stringStorageToRelease38);
            stringStorageToRelease39 = temporaryPointer66 - 16;
            if (temporaryPointer66 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease39) == -1)
                memoryFree (stringStorageToRelease39);
            stringStorageToRelease40 = (void*)(opaqueValue71 - 16);
            if ((void*)(opaqueValue71 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease40) == -1)
                memoryFree (stringStorageToRelease40);
            stringStorageToRelease41 = temporaryPointer70 - 16;
            if (temporaryPointer70 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease41) == -1)
                memoryFree (stringStorageToRelease41);
            sub_1806CE580 (temporaryPointer27, &opaqueValue75);
            opaqueValue42 = sub_1806C9F30 (temporaryPointer27);
            temporaryPointer66 = &emptyJuceStringCharacters;
            if (opaqueValue42 != 0)
            {
                juceStringConstructFromUtf8 (&reusableString68, "FAD-ONB-STARTUP-SHOW");
                juceStringConstructFromUtf8 (&pluginEditorString69, "PluginEditor");
                diagnosticsReportUiWarning (&pluginEditorString69, &reusableString68, &temporaryPointer66);
                stringStorageToRelease43 = pluginEditorString69 - 16;
                if (pluginEditorString69 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease43) == -1)
                    memoryFree (stringStorageToRelease43);
                stringStorageToRelease44 = (void*)(reusableString68 - 16);
                if ((void*)(reusableString68 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease44) == -1)
                    memoryFree (stringStorageToRelease44);
                stringStorageToRelease45 = temporaryPointer66 - 16;
                if (temporaryPointer66 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease45) == -1)
                    memoryFree (stringStorageToRelease45);
            }
            else
            {
                juceStringConstructFromUtf8 (&reusableString68, "FAD-ONB-WEBVIEW-UNAVAILABLE");
                juceStringConstructFromUtf8 (&pluginEditorString69, "PluginEditor");
                diagnosticsReportUiWarning (&pluginEditorString69, &reusableString68, &temporaryPointer66);
                stringStorageToRelease46 = pluginEditorString69 - 16;
                if (pluginEditorString69 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease46) == -1)
                    memoryFree (stringStorageToRelease46);
                stringStorageToRelease47 = (void*)(reusableString68 - 16);
                if ((void*)(reusableString68 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease47) == -1)
                    memoryFree (stringStorageToRelease47);
                stringStorageToRelease48 = temporaryPointer66 - 16;
                if (temporaryPointer66 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease48) == -1)
                    memoryFree (stringStorageToRelease48);
                onboardingPanelInitializeSurface (temporaryPointer27);
            }
        label105:
            LOBYTE (opaqueValue28) = 1;
            juceComponentSetVisible (temporaryPointer27, opaqueValue28);
            goto label106;
        }
        temporaryPointer70 = &emptyJuceStringCharacters;
        temporaryPointer49 = &dword_180F49688;
        if (*(std::uint8_t*)(editor + 784) != 0)
            temporaryPointer49 = &dword_180F49690;
        juceStringConstructFromUtf8 (&opaqueValue71, temporaryPointer49);
        if (opaqueValue29 == 0)
            temporaryPointer7 = &dword_180F49690;
        juceStringConstructFromUtf8 (&temporaryPointer66, temporaryPointer7);
        prefixedString50 = (std::int64_t*)juceStringJoinUtf8Prefix (&opaqueValue72, "FAD-ONB-STARTUP-SKIP needed=", &temporaryPointer66);
        stackStorage74[0] = prefixedString50;
        juceStringAppendUtf8Range (prefixedString50, " dismissed=", "");
        opaqueValue67 = *prefixedString50;
        if ((void*)(opaqueValue67 - 16) != &emptyJuceStringStorage)
            _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue67 - 16));
        stringStorageToRelease51 = (void*)(*prefixedString50 - 16);
        if (stringStorageToRelease51 != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease51) == -1)
            memoryFree (stringStorageToRelease51);
        stackStorage74[0] = &opaqueValue67;
        reusableString68 = *(std::uint64_t*)juceStringAppendString (&opaqueValue67, &opaqueValue71);
        if ((void*)(reusableString68 - 16) != &emptyJuceStringStorage)
            _InterlockedIncrement ((volatile std::int32_t*)(reusableString68 - 16));
        stringStorageToRelease52 = (void*)(opaqueValue67 - 16);
        if ((void*)(opaqueValue67 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease52) == -1)
            memoryFree (stringStorageToRelease52);
        juceStringConstructFromUtf8 (&pluginEditorString69, "PluginEditor");
        diagnosticsReportUiWarning (&pluginEditorString69, &reusableString68, &temporaryPointer70);
        stringStorageToRelease53 = pluginEditorString69 - 16;
        if (pluginEditorString69 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease53) == -1)
            memoryFree (stringStorageToRelease53);
        stringStorageToRelease54 = (void*)(reusableString68 - 16);
        if ((void*)(reusableString68 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease54) == -1)
            memoryFree (stringStorageToRelease54);
        stringStorageToRelease55 = temporaryPointer66 - 16;
        if (temporaryPointer66 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease55) == -1)
            memoryFree (stringStorageToRelease55);
        stringStorageToRelease56 = (void*)(opaqueValue71 - 16);
        if ((void*)(opaqueValue71 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease56) == -1)
            memoryFree (stringStorageToRelease56);
        stringStorageToRelease57 = temporaryPointer70 - 16;
        if (temporaryPointer70 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease57) == -1)
            memoryFree (stringStorageToRelease57);
        juceComponentSetVisible (temporaryPointer27, 0);
        editorSynchronizeOnboardingVisibility (editor);
        if (audioGateIsRenderAuthorized (*(std::uint64_t*)(editor + 328)) || **(std::uint8_t**)(authState + 64) == 0)
        {
        label153:
            *(std::uint8_t*)(editor + 785) = 0;
            ++*(std::uint64_t*)(editor + 792);
            opaqueValue61 = *(std::uint64_t*)(editor + 800);
            if (opaqueValue61 != 0 && *(std::uint64_t*)(opaqueValue61 + 16) != 0)
            {
                opaqueValue62 = sub_1801E9B20 (editor + 800);
                sub_1801CAE70 (opaqueValue62, 0);
            }
            opaqueValue63 = *(std::uint64_t*)(editor + 800);
            *(std::uint64_t*)(editor + 800) = 0;
            if (opaqueValue63 != 0 && _InterlockedExchangeAdd ((volatile std::int32_t*)(opaqueValue63 + 8), 0xFFFFFFFF) == 1)
                (**(void (***) (std::int64_t, std::int64_t))opaqueValue63) (opaqueValue63, 1);
        }
        else
        {
            opaqueValue58 = 0;
            opaqueValue59 = 8;
            while (1)
            {
                opaqueValue60 = *(std::uint8_t*)(*(std::uint64_t*)(authState + 128) + opaqueValue58++);
                if (opaqueValue60 != aExpired[opaqueValue58 - 1])
                    break;
                if (opaqueValue58 == 8)
                    goto label153;
            }
            if (*(std::uint8_t*)(editor + 785) == 0)
            {
                *(std::uint8_t*)(editor + 785) = 1;
                opaqueValue64 = *(std::uint64_t*)(editor + 792) + 1LL;
                *(std::uint64_t*)(editor + 792) = opaqueValue64;
                sub_180024A10 (&opaqueValue72, editor);
                opaqueValue65 = opaqueValue72;
                stackStorage74[0] = opaqueValue72;
                if (opaqueValue72 != 0)
                {
                    opaqueValue59 = opaqueValue72 + 8;
                    _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue72 + 8));
                }
                stackStorage74[1] = opaqueValue64;
                temporaryPointer84 = nullptr;
                stackStorage81[0] = std::X$$V::Z::_Func_impl_no_alloc<`FadModel1AudioProcessorEditor::syncOnboardingVisibility'::`24'::_lambda_1_, fadmodel1::ai::AuthManager::AXAEBUAuthState&>::`vftable';
                stackStorage81[1] = opaqueValue65;
                if (opaqueValue65 != 0)
                    _InterlockedIncrement ((volatile std::int32_t*)opaqueValue59);
                stackStorage81[2] = opaqueValue64;
                temporaryPointer84 = stackStorage81;
                sub_180194320 (5000, stackStorage81);
                if (opaqueValue65 != 0 && _InterlockedExchangeAdd ((volatile std::int32_t*)opaqueValue59, 0xFFFFFFFF) == 1)
                    (**(void (***) (std::int64_t, std::int64_t))opaqueValue65) (opaqueValue65, 1);
                if (opaqueValue65 != 0 && _InterlockedExchangeAdd ((volatile std::int32_t*)(opaqueValue65 + 8), 0xFFFFFFFF) == 1)
                    (**(void (***) (std::int64_t, std::int64_t))opaqueValue65) (opaqueValue65, 1);
            }
        }
    }
}
