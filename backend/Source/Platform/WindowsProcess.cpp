#include <cstdint>

// ===== AuthMod_CreateProcess_caller @ 0x1807f4a00 size=2117 =====
int winProcessLaunchChildProcess (std::int64_t processOwner, std::int64_t commandLine, std::int64_t processOptions)
{
    int result; // eax
    HANDLE opaqueValue7; // rax
    ULONG_PTR opaqueValue8; // rbx
    char* temporaryPointer9; // r12
    std::int64_t allocatedObject10; // rax
    struct _PROC_THREAD_ATTRIBUTE_LIST* allocatedObject11; // rdi
    std::uint8_t opaqueValue12; // bl
    HANDLE JobObjectW; // rax
    volatile std::int32_t* prefixedString14; // rbx
    void* temporaryPointer15; // rcx
    void* stringStorageToRelease16; // rcx
    std::int64_t opaqueValue17; // rdx
    std::int64_t opaqueValue18; // r8
    std::int64_t opaqueValue19; // r13
    std::int64_t opaqueValue20; // rax
    WCHAR* temporaryPointer21; // rsi
    std::uint64_t opaqueValue22; // rbx
    WCHAR* temporaryPointer23; // rax
    std::int64_t opaqueValue24; // rbx
    WCHAR* temporaryPointer25; // r14
    void* stringStorageToRelease26; // rcx
    void* stringStorageToRelease27; // rcx
    std::int64_t opaqueValue28; // rdx
    std::int64_t opaqueValue29; // r8
    std::int64_t opaqueValue30; // r13
    std::int64_t opaqueValue31; // rax
    std::uint64_t opaqueValue32; // rbx
    std::int64_t opaqueValue33; // rbx
    char* temporaryPointer34; // rbx
    void* temporaryPointer35; // rbx
    LPCWSTR* utf16Characters36; // rax
    HANDLE hProcess; // rdx
    std::int64_t opaqueValue38; // rbx
    void* temporaryPointer39; // rcx
    void* stringStorageToRelease40; // rcx
    WCHAR* temporaryPointer41; // rax
    volatile std::int32_t* temporaryPointer42; // rcx
    struct _PROC_THREAD_ATTRIBUTE_LIST* temporaryPointer43; // rax
    std::int64_t messageString44; // [rsp+50h] [rbp-B0h] BYREF
    std::int64_t opaqueValue45; // [rsp+58h] [rbp-A8h] BYREF
    volatile std::int32_t* temporaryPointer46; // [rsp+60h] [rbp-A0h] BYREF
    HANDLE hWritePipe; // [rsp+68h] [rbp-98h] BYREF
    HANDLE hObject; // [rsp+70h] [rbp-90h] BYREF
    std::int64_t opaqueValue49; // [rsp+78h] [rbp-88h] BYREF
    std::int64_t* temporaryPointer50; // [rsp+80h] [rbp-80h] BYREF
    ULONG_PTR Size; // [rsp+88h] [rbp-78h] BYREF
    LPVOID lpEnvironment[2]; // [rsp+90h] [rbp-70h] BYREF
    char* temporaryPointer53; // [rsp+A0h] [rbp-60h]
    std::int64_t opaqueValue54; // [rsp+A8h] [rbp-58h]
    std::int64_t opaqueValue55; // [rsp+B0h] [rbp-50h]
    __int128 opaqueValue56; // [rsp+B8h] [rbp-48h]
    char* temporaryPointer57; // [rsp+C8h] [rbp-38h]
    __int128 opaqueValue58; // [rsp+D0h] [rbp-30h]
    WCHAR* temporaryPointer59; // [rsp+E0h] [rbp-20h]
    struct _PROCESS_INFORMATION ProcessInformation; // [rsp+E8h] [rbp-18h] BYREF
    struct _SECURITY_ATTRIBUTES PipeAttributes; // [rsp+100h] [rbp+0h] BYREF
    std::uint64_t Value[3]; // [rsp+118h] [rbp+18h] BYREF
    struct _STARTUPINFOW StartupInfo; // [rsp+130h] [rbp+30h] BYREF
    LPPROC_THREAD_ATTRIBUTE_LIST opaqueValue64; // [rsp+198h] [rbp+98h]
    struct _STARTUPINFOW* p_StartupInfo; // [rsp+1A0h] [rbp+A0h]
    HANDLE* p_hWritePipe; // [rsp+1A8h] [rbp+A8h]
    HANDLE* p_hObject; // [rsp+1B0h] [rbp+B0h]
    __int128 JobObjectInformation; // [rsp+1C0h] [rbp+C0h] BYREF
    __int128 opaqueValue69; // [rsp+1D0h] [rbp+D0h]
    __int128 opaqueValue70; // [rsp+1E0h] [rbp+E0h]
    __int128 opaqueValue71; // [rsp+1F0h] [rbp+F0h]
    __int128 opaqueValue72; // [rsp+200h] [rbp+100h]
    __int128 opaqueValue73; // [rsp+210h] [rbp+110h]
    __int128 opaqueValue74; // [rsp+220h] [rbp+120h]
    __int128 opaqueValue75; // [rsp+230h] [rbp+130h]
    __int128 opaqueValue76; // [rsp+240h] [rbp+140h]
    WCHAR Buffer[32768]; // [rsp+250h] [rbp+150h] BYREF

    opaqueValue54 = commandLine;
    opaqueValue55 = processOwner;
    PipeAttributes.nLength = 24;
    PipeAttributes.lpSecurityDescriptor = nullptr;
    PipeAttributes.bInheritHandle = true;
    hWritePipe = nullptr;
    hObject = (HANDLE)-1LL;
    result = CreatePipe ((PHANDLE)(processOwner + 8), &hWritePipe, &PipeAttributes, 0x10000u);
    if (result == 0)
        return result;
    p_hWritePipe = &hWritePipe;
    p_hObject = &hObject;
    if (!SetHandleInformation (*(HANDLE*)(processOwner + 8), 1u, 0) || (opaqueValue7 = CreateFileW (L"NUL", 0xC0000000, 3u, &PipeAttributes, 3u, 0, nullptr), hObject = opaqueValue7, opaqueValue7 == (HANDLE)-1LL))
    {
        opaqueValue12 = 0;
        goto label78;
    }
    memset (&StartupInfo, 0, 80);
    opaqueValue64 = nullptr;
    StartupInfo.cb = 112;
    StartupInfo.dwFlags = 256;
    StartupInfo.hStdInput = opaqueValue7;
    StartupInfo.hStdOutput = hWritePipe;
    StartupInfo.hStdError = opaqueValue7;
    Size = 0;
    InitializeProcThreadAttributeList (nullptr, 1u, 0, &Size);
    opaqueValue8 = Size;
    opaqueValue56 = 0;
    temporaryPointer9 = nullptr;
    temporaryPointer57 = nullptr;
    if (Size != 0)
    {
        if (Size > 0x7FFFFFFFFFFFFFFFLL)
            std::vector<void*>::_Xlen();
        if (Size < 0x1000)
        {
            allocatedObject11 = (struct _PROC_THREAD_ATTRIBUTE_LIST*)memoryAllocateObject (Size);
        }
        else
        {
            if (Size + 39 < Size)
                Concurrency::cancel_current_task();
            allocatedObject10 = memoryAllocateObject (Size + 39);
            if (allocatedObject10 == 0)
                goto label82;
            allocatedObject11 = (struct _PROC_THREAD_ATTRIBUTE_LIST*)((allocatedObject10 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
            *((std::uint64_t*)allocatedObject11 - 1) = allocatedObject10;
        }
        *(std::uint64_t*)&opaqueValue56 = allocatedObject11;
        temporaryPointer9 = (char*)allocatedObject11 + opaqueValue8;
        temporaryPointer57 = (char*)allocatedObject11 + opaqueValue8;
        memoryFillBytes (allocatedObject11, 0, opaqueValue8);
        *((std::uint64_t*)&opaqueValue56 + 1) = (char*)allocatedObject11 + opaqueValue8;
    }
    else
    {
        allocatedObject11 = (struct _PROC_THREAD_ATTRIBUTE_LIST*)opaqueValue56;
    }
    opaqueValue64 = allocatedObject11;
    if (!InitializeProcThreadAttributeList (allocatedObject11, 1u, 0, &Size))
    {
        opaqueValue12 = 0;
        goto label73;
    }
    p_StartupInfo = &StartupInfo;
    Value[0] = hWritePipe;
    Value[1] = hObject;
    if (UpdateProcThreadAttribute (opaqueValue64, 0, 0x20002u, Value, 0x10u, nullptr, nullptr))
    {
        JobObjectW = CreateJobObjectW (nullptr, nullptr);
        *(std::uint64_t*)(processOwner + 24) = JobObjectW;
        JobObjectInformation = 0;
        opaqueValue69 = 0;
        opaqueValue70 = 0;
        opaqueValue71 = 0;
        opaqueValue72 = 0;
        opaqueValue73 = 0;
        opaqueValue74 = 0;
        opaqueValue76 = 0;
        LODWORD (opaqueValue69) = 8456;
        DWORD2 (opaqueValue70) = 1;
        opaqueValue75 = 0x10000000u;
        if (JobObjectW != nullptr && SetInformationJobObject (JobObjectW, JobObjectExtendedLimitInformation, &JobObjectInformation, 0x90u))
        {
            prefixedString14 = (volatile std::int32_t*)juceStringJoinUtf8Prefix (&opaqueValue49, "\"", commandLine);
            temporaryPointer46 = prefixedString14;
            juceStringAppendUtf8Range (prefixedString14, "\" ", "");
            messageString44 = *(std::uint64_t*)prefixedString14;
            if ((void*)(messageString44 - 16) != &emptyJuceStringStorage)
                _InterlockedIncrement ((volatile std::int32_t*)(messageString44 - 16));
            temporaryPointer15 = (void*)(*(std::uint64_t*)prefixedString14 - 16LL);
            if (temporaryPointer15 != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)temporaryPointer15) == -1)
                memoryFree (temporaryPointer15);
            temporaryPointer46 = (volatile std::int32_t*)&messageString44;
            temporaryPointer46 = *(volatile std::int32_t**)juceStringAppendString (&messageString44, processOptions);
            if (temporaryPointer46 - 4 != (volatile std::int32_t*)&emptyJuceStringStorage)
                _InterlockedIncrement (temporaryPointer46 - 4);
            stringStorageToRelease16 = (void*)(messageString44 - 16);
            if ((void*)(messageString44 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease16) == -1)
                memoryFree (stringStorageToRelease16);
            opaqueValue19 = *(std::uint64_t*)juceStringGetUtf16View (&temporaryPointer50, &temporaryPointer46);
            opaqueValue20 = -1;
            do
                ++opaqueValue20;
            while (*(std::uint16_t*)(opaqueValue19 + 2 * opaqueValue20) != 0);
            opaqueValue58 = 0;
            temporaryPointer21 = nullptr;
            temporaryPointer59 = nullptr;
            opaqueValue45 = 2 * opaqueValue20 + 2;
            opaqueValue22 = opaqueValue45 >> 1;
            temporaryPointer23 = nullptr;
            if (opaqueValue45 >> 1 != 0)
            {
                if (opaqueValue22 > 0x7FFFFFFFFFFFFFFFLL)
                    std::vector<void*>::_Xlen();
                opaqueValue24 = opaqueValue22;
                temporaryPointer25 = (WCHAR*)sub_180029C10 (opaqueValue24 * 2, opaqueValue17, opaqueValue18);
                *(std::uint64_t*)&opaqueValue58 = temporaryPointer25;
                temporaryPointer21 = &temporaryPointer25[opaqueValue24];
                temporaryPointer59 = &temporaryPointer25[opaqueValue24];
                sub_1809E9680 (temporaryPointer25, opaqueValue19, opaqueValue45);
                *((std::uint64_t*)&opaqueValue58 + 1) = &temporaryPointer25[opaqueValue24];
                temporaryPointer23 = &temporaryPointer25[opaqueValue24];
            }
            else
            {
                temporaryPointer25 = (WCHAR*)opaqueValue58;
            }
            if ((std::uint64_t)(temporaryPointer23 - temporaryPointer25) > 0x7530 || (memoryFillBytes (Buffer, 0, 0x10000), GetWindowsDirectoryW (Buffer, 0x8000u) - 1 > 0x7FFE))
            {
                opaqueValue12 = 0;
            }
            else
            {
                sub_1800B3120 (&opaqueValue45, Buffer);
                juceStringConstructFromUtf8 (&messageString44, "SystemRoot=");
                temporaryPointer50 = &messageString44;
                opaqueValue49 = *(std::uint64_t*)juceStringAppendString (&messageString44, &opaqueValue45);
                if ((void*)(opaqueValue49 - 16) != &emptyJuceStringStorage)
                    _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue49 - 16));
                stringStorageToRelease26 = (void*)(messageString44 - 16);
                if ((void*)(messageString44 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease26) == -1)
                    memoryFree (stringStorageToRelease26);
                stringStorageToRelease27 = (void*)(opaqueValue45 - 16);
                if ((void*)(opaqueValue45 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease27) == -1)
                    memoryFree (stringStorageToRelease27);
                opaqueValue30 = *(std::uint64_t*)juceStringGetUtf16View (&temporaryPointer50, &opaqueValue49);
                opaqueValue31 = -1;
                do
                    ++opaqueValue31;
                while (*(std::uint16_t*)(opaqueValue30 + 2 * opaqueValue31) != 0);
                *(_OWORD*)lpEnvironment = 0;
                temporaryPointer53 = nullptr;
                opaqueValue45 = 2 * opaqueValue31 + 2;
                opaqueValue32 = opaqueValue45 >> 1;
                if (opaqueValue45 >> 1 != 0)
                {
                    if (opaqueValue32 > 0x7FFFFFFFFFFFFFFFLL)
                        std::vector<void*>::_Xlen();
                    opaqueValue33 = 2 * opaqueValue32;
                    lpEnvironment[0] = (LPVOID)sub_180029C10 (opaqueValue33, opaqueValue28, opaqueValue29);
                    lpEnvironment[1] = lpEnvironment[0];
                    temporaryPointer34 = (char*)lpEnvironment[0] + opaqueValue33;
                    temporaryPointer53 = temporaryPointer34;
                    sub_1809E9680 (lpEnvironment[0], opaqueValue30, opaqueValue45);
                    lpEnvironment[1] = temporaryPointer34;
                }
                LOWORD (messageString44) = 0;
                sub_18013B0E0 (lpEnvironment, &messageString44);
                memset (&ProcessInformation, 0, sizeof (ProcessInformation));
                temporaryPointer35 = lpEnvironment[0];
                utf16Characters36 = (LPCWSTR*)juceStringGetUtf16View (&temporaryPointer50, opaqueValue54);
                if (CreateProcessW (
                        *utf16Characters36,
                        temporaryPointer25,
                        nullptr,
                        nullptr,
                        true,
                        0x8080404u,
                        temporaryPointer35,
                        nullptr,
                        &StartupInfo,
                        &ProcessInformation))
                {
                    hProcess = ProcessInformation.hProcess;
                    opaqueValue38 = opaqueValue55;
                    *(std::uint64_t*)(opaqueValue55 + 16) = ProcessInformation.hProcess;
                    if (!AssignProcessToJobObject (*(HANDLE*)(opaqueValue38 + 24), hProcess) || ResumeThread (ProcessInformation.hThread) == -1)
                    {
                        TerminateProcess (*(HANDLE*)(opaqueValue38 + 16), 1u);
                        opaqueValue12 = 0;
                    }
                    else
                    {
                        opaqueValue12 = 1;
                    }
                    CloseHandle (ProcessInformation.hThread);
                }
                else
                {
                    opaqueValue12 = 0;
                }
                temporaryPointer39 = lpEnvironment[0];
                if (lpEnvironment[0] != nullptr)
                {
                    if ((std::uint64_t)(2 * ((temporaryPointer53 - (char*)lpEnvironment[0]) >> 1)) >= 0x1000)
                    {
                        temporaryPointer39 = *((void**)lpEnvironment[0] - 1);
                        if ((std::uint64_t)((char*)lpEnvironment[0] - (char*)temporaryPointer39 - 8) > 0x1F)
                        {
                            sub_1809AEBB8 (0, 0, 0, 0, 0);
                            goto label88;
                        }
                    }
                    memoryFree (temporaryPointer39);
                    *(_OWORD*)lpEnvironment = 0;
                    temporaryPointer53 = nullptr;
                }
                stringStorageToRelease40 = (void*)(opaqueValue49 - 16);
                if ((void*)(opaqueValue49 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease40) == -1)
                    memoryFree (stringStorageToRelease40);
            }
            if (temporaryPointer25 == nullptr)
            {
            label68:
                temporaryPointer42 = temporaryPointer46 - 4;
                if (temporaryPointer46 - 4 != (volatile std::int32_t*)&emptyJuceStringStorage && _InterlockedDecrement (temporaryPointer42) == -1)
                    memoryFree ((LPVOID)temporaryPointer42);
                goto label72;
            }
            temporaryPointer41 = temporaryPointer25;
            if ((std::uint64_t)(2 * (temporaryPointer21 - temporaryPointer25)) < 0x1000 || (temporaryPointer25 = *((WCHAR**)temporaryPointer25 - 1), (std::uint64_t)((char*)temporaryPointer41 - (char*)temporaryPointer25 - 8) <= 0x1F))
            {
                memoryFree (temporaryPointer25);
                goto label68;
            }
        label88:
            sub_1809AEBB8 (0, 0, 0, 0, 0);
            JUMPOUT (0x1807F5244LL);
        }
    }
    opaqueValue12 = 0;
label72:
    DeleteProcThreadAttributeList (opaqueValue64);
label73:
    if (allocatedObject11 != nullptr)
    {
        temporaryPointer43 = allocatedObject11;
        if ((std::uint64_t)(temporaryPointer9 - (char*)allocatedObject11) < 0x1000 || (allocatedObject11 = *((struct _PROC_THREAD_ATTRIBUTE_LIST**)allocatedObject11 - 1), (std::uint64_t)(temporaryPointer43 - allocatedObject11 - 8) <= 0x1F))
        {
            memoryFree (allocatedObject11);
            goto label78;
        }
    label82:
        sub_1809AEBB8 (0, 0, 0, 0, 0);
        __debugbreak();
    }
label78:
    CloseHandle (hWritePipe);
    if (hObject != (HANDLE)-1LL)
        CloseHandle (hObject);
    return opaqueValue12;
}

// ===== OpenProcess_caller @ 0x1803a1ab0 size=404 =====
char* winProcessReadCreationTimeString (char* outputCreationTime, DWORD processId)
{
    HANDLE processHandle; // rsi
    BOOL readProcessTimesSucceeded; // ebx
    char* decimalWriteCursor; // r9
    struct _FILETIME remainingFileTime; // r8
    char* temporaryStringStorage; // rcx
    struct _FILETIME CreationTime; // [rsp+30h] [rbp-68h] BYREF
    char* formattedCreationTime; // [rsp+38h] [rbp-60h] BYREF
    char* outputStringAlias; // [rsp+40h] [rbp-58h]
    struct _FILETIME UserTime; // [rsp+50h] [rbp-48h] BYREF
    struct _FILETIME KernelTime; // [rsp+58h] [rbp-40h] BYREF
    struct _FILETIME ExitTime; // [rsp+60h] [rbp-38h] BYREF
    char decimalBufferEnd; // [rsp+87h] [rbp-11h] BYREF

    outputStringAlias = outputCreationTime;
    processHandle = OpenProcess (0x1000u, false, processId);
    if (processHandle != nullptr)
    {
        CreationTime = 0;
        ExitTime = 0;
        KernelTime = 0;
        UserTime = 0;
        readProcessTimesSucceeded = GetProcessTimes (processHandle, &CreationTime, &ExitTime, &KernelTime, &UserTime);
        CloseHandle (processHandle);
        if (readProcessTimesSucceeded)
        {
            decimalWriteCursor = &decimalBufferEnd;
            remainingFileTime = CreationTime;
            decimalBufferEnd = 0;
            do
            {
                *--decimalWriteCursor = *(std::uint64_t*)&remainingFileTime % 0xA + 48;
                remainingFileTime = (struct _FILETIME) (*(std::uint64_t*)&remainingFileTime / 0xA);
            } while (remainingFileTime != 0);
            juceStringConstructFromUtf8Span (&formattedCreationTime, decimalWriteCursor, &decimalBufferEnd - decimalWriteCursor);
            *(std::uint64_t*)outputCreationTime = formattedCreationTime;
            formattedCreationTime = &emptyJuceStringCharacters;
        }
        else
        {
            *(std::uint64_t*)outputCreationTime = &emptyJuceStringCharacters;
            outputStringAlias = &emptyJuceStringCharacters;
        }
        temporaryStringStorage = &emptyJuceStringCharacters - 16;
        if (&emptyJuceStringCharacters - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)temporaryStringStorage) == -1)
            memoryFree (temporaryStringStorage);
    }
    else
    {
        *(std::uint64_t*)outputCreationTime = &emptyJuceStringCharacters;
    }
    return outputCreationTime;
}
