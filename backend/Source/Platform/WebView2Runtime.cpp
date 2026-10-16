#include <cstdint>

// ===== RegOpenKey_caller_A @ 0x1800022c7 size=519 =====
std::int64_t webView2ReadRuntimeLocation (LPCWSTR registrySubKey, std::int64_t readEdgeLocation, std::uint8_t useCurrentUserHive, std::int64_t outputVersion, std::int64_t outputLocation)
{
    char opaqueValue7; // bl
    unsigned int opaqueValue9; // ebp
    const WCHAR* temporaryPointer11; // rdx
    LSTATUS opaqueValue12; // r14d
    std::int64_t opaqueValue13; // rax
    std::int64_t opaqueValue14; // rdx
    std::int64_t opaqueValue15; // rax
    std::int64_t opaqueValue16; // rbx
    std::int64_t opaqueValue17; // [rsp+0h] [rbp-298h] BYREF
    HKEY hKey; // [rsp+30h] [rbp-268h] BYREF
    DWORD cbData; // [rsp+3Ch] [rbp-25Ch] BYREF
    __int128 opaqueValue20; // [rsp+40h] [rbp-258h] BYREF
    BYTE Data[520]; // [rsp+50h] [rbp-248h] BYREF
    std::int64_t opaqueValue22; // [rsp+258h] [rbp-40h]

    opaqueValue7 = readEdgeLocation;
    LOBYTE (readEdgeLocation) = -86;
    memoryFillBytes (Data, readEdgeLocation, 520);
    cbData = 520;
    hKey = (HKEY)0xAAAAAAAAAAAAAAAALL;
    opaqueValue9 = 0;
    if (RegOpenKeyExW ((HKEY)(-2147483646LL - useCurrentUserHive), registrySubKey, 0, 0x20219u, &hKey) == 0)
    {
        temporaryPointer11 = L"EBWebView";
        if (opaqueValue7 != 0)
            temporaryPointer11 = L"location";
        opaqueValue12 = RegQueryValueExW (hKey, temporaryPointer11, nullptr, nullptr, Data, &cbData);
        if (opaqueValue12 == 0 && cbData >= 3)
        {
            wideStringAssign (outputLocation, Data);
            opaqueValue12 = 0;
            if (opaqueValue7 != 0)
            {
                cbData = 520;
                opaqueValue12 = RegQueryValueExW (hKey, L"pv", nullptr, nullptr, Data, &cbData);
                if (opaqueValue12 == 0 && cbData >= 3)
                {
                    wideStringAppend (outputLocation, &unk_180A3D9EA);
                    wideStringAppend (outputLocation, Data);
                    opaqueValue12 = 0;
                }
            }
        }
        RegCloseKey (hKey);
        opaqueValue9 = 0;
        if (opaqueValue12 == 0 && cbData >= 3)
        {
            opaqueValue13 = wideStringGetCharacters (outputLocation);
            LOWORD (opaqueValue14) = 92;
            opaqueValue15 = wideStringFindLastCharacter (opaqueValue13, opaqueValue14);
            if (opaqueValue15 != 0 && (opaqueValue16 = opaqueValue15 + 2, opaqueValue20 = xmmword_180A3D6C0, (std::uint8_t)sub_18000220C (opaqueValue15 + 2) != 0))
            {
                if (outputVersion != 0)
                    wideStringAssign (outputVersion, opaqueValue16);
                opaqueValue9 = sub_1800024CE (&opaqueValue20, outputLocation);
            }
            else
            {
                opaqueValue9 = 0;
            }
        }
    }
    if (_security_cookie != ((std::uint64_t)&opaqueValue17 ^ opaqueValue22))
        __debugbreak();
    return opaqueValue9;
}

// ===== WebView2_Loader @ 0x180001480 size=1560 =====
std::int64_t webView2LoadRuntime (std::int64_t browserFolder, std::int64_t environmentOptions, std::int64_t completionHandler, std::int64_t loaderOptions)
{
    LONG (__stdcall * opaqueValue4) (const UINT32, UINT32*, BYTE*, UINT32*); // rsi
    int opaqueValue8; // eax
    std::int64_t opaqueValue9; // rbp
    std::uint64_t opaqueValue10; // r12
    wchar_t* temporaryPointer11; // r13
    const WCHAR* temporaryPointer12; // rax
    const WCHAR* temporaryPointer13; // rax
    std::uint64_t* ThreadLocalStoragePointer; // rdx
    std::uint64_t* temporaryPointer15; // rdx
    void* temporaryPointer16; // rsi
    HANDLE ProcessHeap; // rax
    std::uint64_t* temporaryPointer18; // rdx
    std::int64_t opaqueValue19; // rax
    std::int64_t opaqueValue20; // rax
    unsigned int opaqueValue21; // r14d
    unsigned int opaqueValue22; // r13d
    std::uint8_t opaqueValue23; // al
    HMODULE ModuleHandleW; // rax
    HMODULE moduleHandle25; // rax
    HMODULE moduleHandle26; // rax
    std::int64_t result; // rax
    std::int64_t opaqueValue28; // rdx
    std::int64_t opaqueValue29; // [rsp+0h] [rbp-148h] BYREF
    std::int64_t opaqueValue30; // [rsp+40h] [rbp-108h]
    unsigned int opaqueValue31; // [rsp+4Ch] [rbp-FCh]
    std::int64_t opaqueValue32; // [rsp+50h] [rbp-F8h]
    std::int64_t opaqueValue33; // [rsp+58h] [rbp-F0h]
    std::uint64_t stackStorage34[4]; // [rsp+60h] [rbp-E8h] BYREF
    LPVOID lpMem; // [rsp+80h] [rbp-C8h] BYREF
    unsigned int opaqueValue36; // [rsp+88h] [rbp-C0h] BYREF
    std::uint32_t stackStorage37[9]; // [rsp+8Ch] [rbp-BCh] BYREF
    __m128i vectorValue38; // [rsp+B0h] [rbp-98h] BYREF
    std::uint64_t stackStorage39[3]; // [rsp+C0h] [rbp-88h] BYREF
    std::int64_t opaqueValue40; // [rsp+D8h] [rbp-70h]

    opaqueValue32 = loaderOptions;
    memset (&stackStorage37[1], 170, 20);
    opaqueValue8 = sub_180001A98();
    if (opaqueValue8 <= 0)
    {
    label42:
        OutputDebugStringA ("WebView2: Failed to find an installed WebView2 runtime or non-stable Microsoft Edge installation.\n");
        result = 2147942402LL;
    }
    else
    {
        opaqueValue33 = (unsigned int)opaqueValue8;
        opaqueValue9 = 0;
        opaqueValue30 = browserFolder;
        while (1)
        {
            opaqueValue10 = (unsigned int)stackStorage37[opaqueValue9 + 1];
            temporaryPointer11 = opaqueValue10 > 4 ? nullptr : (&off_180A3DE10)[opaqueValue10];
            LOBYTE (opaqueValue4) = *(std::uint8_t*)(browserFolder + 28) & (opaqueValue10 == 0);
            memset (stackStorage34, 170, 24);
            wideStringInitialize (stackStorage34);
            sub_180001001 ((unsigned int)opaqueValue10, (unsigned int)opaqueValue4, stackStorage34);
            temporaryPointer12 = (const WCHAR*)wideStringGetCharacters (stackStorage34);
            if ((std::uint8_t)webView2ReadRuntimeLocation (temporaryPointer12, (unsigned int)opaqueValue4, 0, completionHandler, environmentOptions) != 0)
                break;
            temporaryPointer13 = (const WCHAR*)wideStringGetCharacters (stackStorage34);
            if ((std::uint8_t)webView2ReadRuntimeLocation (temporaryPointer13, (unsigned int)opaqueValue4, 1u, completionHandler, environmentOptions) != 0)
                break;
            vectorValue38 = (__m128i)xmmword_180A3D6C0;
            ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
            if (dword_1814F8C48 > *(std::uint32_t*)(ThreadLocalStoragePointer[TlsIndex] + 16LL))
            {
                sub_1809A0F30 (&dword_1814F8C48, ThreadLocalStoragePointer);
                if (dword_1814F8C48 == -1)
                {
                    ModuleHandleW = GetModuleHandleW (L"kernelbase.dll");
                    TryCreatePackageDependency = (std::int64_t)GetProcAddress (ModuleHandleW, "TryCreatePackageDependency");
                    sub_1809A0EC4 (&dword_1814F8C48);
                }
            }
            LODWORD (opaqueValue4) = 0;
            if (TryCreatePackageDependency != 0)
            {
                temporaryPointer15 = NtCurrentTeb()->ThreadLocalStoragePointer;
                if (dword_1814F8C58 > *(std::uint32_t*)(temporaryPointer15[TlsIndex] + 16LL))
                {
                    sub_1809A0F30 (&dword_1814F8C58, temporaryPointer15);
                    if (dword_1814F8C58 == -1)
                    {
                        moduleHandle25 = GetModuleHandleW (L"kernelbase.dll");
                        AddPackageDependency = (std::int64_t)GetProcAddress (moduleHandle25, "AddPackageDependency");
                        sub_1809A0EC4 (&dword_1814F8C58);
                    }
                }
                if (AddPackageDependency != 0)
                {
                    lpMem = nullptr;
                    if ((int)((std::int64_t (*) (std::uint64_t, wchar_t*, std::uint64_t, std::uint64_t, std::uint32_t, std::uint64_t, std::uint32_t, LPVOID*))TryCreatePackageDependency) (
                            0,
                            temporaryPointer11,
                            0,
                            0,
                            0,
                            0,
                            0,
                            &lpMem) >= 0)
                    {
                        stackStorage39[0] = 0;
                        ((void (*) (LPVOID, std::uint64_t, std::uint64_t, std::uint64_t*, std::uint64_t))AddPackageDependency) (lpMem, 0, 0, stackStorage39, 0);
                        temporaryPointer16 = lpMem;
                        ProcessHeap = GetProcessHeap();
                        HeapFree (ProcessHeap, 0, temporaryPointer16);
                        lpMem = nullptr;
                    }
                    temporaryPointer18 = NtCurrentTeb()->ThreadLocalStoragePointer;
                    if (dword_1814F8C68 > *(std::uint32_t*)(temporaryPointer18[TlsIndex] + 16LL))
                    {
                        sub_1809A0F30 (&dword_1814F8C68, temporaryPointer18);
                        if (dword_1814F8C68 == -1)
                        {
                            moduleHandle26 = GetModuleHandleW (L"kernelbase.dll");
                            GetCurrentPackageInfo = (LONG (__stdcall*) (const UINT32, UINT32*, BYTE*, UINT32*))GetProcAddress (moduleHandle26, "GetCurrentPackageInfo");
                            sub_1809A0EC4 (&dword_1814F8C68);
                        }
                    }
                    opaqueValue4 = (LONG (__stdcall*) (const UINT32, UINT32*, BYTE*, UINT32*))stackStorage39;
                    if (GetCurrentPackageInfo != nullptr)
                    {
                        stackStorage37[0] = -1431655766;
                        opaqueValue36 = 0;
                        if ((unsigned int)((std::int64_t (*) (std::int64_t, unsigned int*, std::uint64_t, std::uint32_t*))GetCurrentPackageInfo) (
                                1572865,
                                &opaqueValue36,
                                0,
                                stackStorage37) == 122 &&
                            opaqueValue36 != 0)
                        {
                            memset (stackStorage39, 170, sizeof (stackStorage39));
                            wideStringInitialize (stackStorage39);
                            if ((std::uint8_t)sub_1800029D0 (stackStorage39, opaqueValue36) != 0 && (opaqueValue4 = GetCurrentPackageInfo, opaqueValue19 = wideStringGetCharacters (stackStorage39), ((unsigned int (*) (std::int64_t, unsigned int*, std::int64_t, std::uint32_t*))opaqueValue4) (1572865, &opaqueValue36, opaqueValue19, stackStorage37) == 0) && (opaqueValue20 = wideStringGetCharacters (stackStorage39), stackStorage37[0] != 0))
                            {
                                opaqueValue4 = (LONG (__stdcall*) (const UINT32, UINT32*, BYTE*, UINT32*)) (opaqueValue20 + 46);
                                opaqueValue21 = 0;
                                while ((unsigned int)sub_1809C9D50 (*(std::uint64_t*)((char*)opaqueValue4 - 22), temporaryPointer11) != 0)
                                {
                                    ++opaqueValue21;
                                    opaqueValue4 = (LONG (__stdcall*) (const UINT32, UINT32*, BYTE*, UINT32*)) ((char*)opaqueValue4 + 80);
                                    if (opaqueValue21 >= stackStorage37[0])
                                        goto label20;
                                }
                                opaqueValue22 = *(std::uint16_t*)opaqueValue4;
                                vectorValue38 = _mm_shuffle_epi32 (
                                    _mm_unpacklo_epi16 (_mm_loadl_epi64 ((const __m128i*)((char*)opaqueValue4 - 6)), (__m128i)0LL),
                                    27);
                                wideStringAssign (environmentOptions, *(std::uint64_t*)((char*)opaqueValue4 - 38));
                                opaqueValue4 = (LONG (__stdcall*) (const UINT32, UINT32*, BYTE*, UINT32*))stackStorage39;
                                wideStringDestroy (stackStorage39);
                                opaqueValue23 = sub_1800024CE (&vectorValue38, environmentOptions);
                                if (((completionHandler == 0) | opaqueValue23 ^ 1) != 0)
                                {
                                    browserFolder = opaqueValue30;
                                    if (opaqueValue23 != 0)
                                        break;
                                }
                                else
                                {
                                    sub_180002782 (completionHandler, 15);
                                    memset (stackStorage39, 170, 22);
                                    browserFolder = opaqueValue30;
                                    if ((unsigned int)sub_1809CA0A4 (opaqueValue22, stackStorage39, 11, 10) == 0)
                                    {
                                        opaqueValue31 = opaqueValue22;
                                        wideStringAssign (completionHandler, stackStorage39);
                                        LODWORD (opaqueValue4) = 3;
                                        while ((unsigned int)sub_1809CA0A4 (opaqueValue31, stackStorage39, 11, 10) == 0)
                                        {
                                            wideStringAppend (completionHandler, ".");
                                            wideStringAppend (completionHandler, stackStorage39);
                                            LODWORD (opaqueValue4) = (std::uint32_t)opaqueValue4 - 1;
                                            if ((std::uint32_t)opaqueValue4 == 0)
                                                goto label43;
                                        }
                                    }
                                }
                            }
                            else
                            {
                            label20:
                                wideStringDestroy (stackStorage39);
                                browserFolder = opaqueValue30;
                            }
                        }
                    }
                }
            }
            wideStringDestroy (stackStorage34);
            if (++opaqueValue9 == opaqueValue33)
                goto label42;
        }
    label43:
        if (opaqueValue32 != 0)
        {
            if ((unsigned int)opaqueValue10 > 4)
                opaqueValue28 = 0;
            else
                opaqueValue28 = (std::int64_t)*(&off_180A3DE38 + opaqueValue10);
            wideStringAssign (opaqueValue32, opaqueValue28);
        }
        wideStringDestroy (stackStorage34);
        result = 0;
    }
    if (_security_cookie != ((std::uint64_t)&opaqueValue29 ^ opaqueValue40))
        __debugbreak();
    return result;
}
