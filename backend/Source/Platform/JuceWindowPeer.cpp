#include <cstdint>

// ===== Hook_caller_A @ 0x1801d1c30 size=945 =====
std::int64_t juceWindowPeerInitializeServices (std::int64_t windowPeer)
{
    std::int64_t opaqueValue2; // rax
    std::int64_t allocatedObject3; // rdi
    std::int64_t opaqueValue4; // rax
    std::int64_t allocatedObject5; // rbx
    DWORD CurrentThreadId; // edi
    HMODULE ModuleHandleA; // rax
    _OWORD* temporaryPointer8; // rax
    std::int64_t* temporaryPointer9; // rcx
    std::int64_t i; // rdx
    HMODULE opaqueValue11; // rax
    std::uint8_t (*ProcAddress) (void); // rax
    bool conditionFlag13; // al
    std::int64_t opaqueValue14; // rdi
    std::int64_t opaqueValue16; // [rsp+20h] [rbp-268h] BYREF
    std::int64_t opaqueValue17; // [rsp+28h] [rbp-260h]
    std::uint8_t stackStorage18[328]; // [rsp+140h] [rbp-148h] BYREF
    std::int64_t allocatedObject19; // [rsp+298h] [rbp+10h]

    sub_180192490();
    *(std::uint64_t*)(windowPeer + 8) = &juce::Timer::`vftable';
    *(std::uint64_t*)(windowPeer + 16) = -1;
    *(std::uint32_t*)(windowPeer + 24) = 0;
    opaqueValue2 = sub_1801952B0();
    sub_180195100 (opaqueValue2, windowPeer + 32);
    sub_180192F50 (windowPeer + 48);
    *(std::uint64_t*)windowPeer = &juce::Desktop::`vftable';
    *(std::uint64_t*)(windowPeer + 8) = &juce::Desktop::`vftable';
    *(std::uint64_t*)(windowPeer + 48) = &juce::Desktop::`vftable';
    allocatedObject3 = memoryAllocateObject (72);
    *(std::uint64_t*)allocatedObject3 = &juce::Timer::`vftable';
    *(std::uint64_t*)(allocatedObject3 + 8) = -1;
    *(std::uint32_t*)(allocatedObject3 + 16) = 0;
    opaqueValue4 = sub_1801952B0();
    sub_180195100 (opaqueValue4, allocatedObject3 + 24);
    *(std::uint64_t*)allocatedObject3 = &juce::detail::MouseInputSourceList::`vftable';
    *(std::uint64_t*)(allocatedObject3 + 40) = 0;
    *(std::uint64_t*)(allocatedObject3 + 48) = 0;
    *(std::uint64_t*)(allocatedObject3 + 56) = 0;
    *(std::uint64_t*)(allocatedObject3 + 64) = 0;
    sub_1801A7200 (allocatedObject3, 0, 0);
    *(std::uint64_t*)(windowPeer + 64) = allocatedObject3;
    *(std::uint64_t*)(windowPeer + 72) = 0;
    *(std::uint64_t*)(windowPeer + 80) = 0;
    *(std::uint32_t*)(windowPeer + 88) = 0;
    *(std::uint64_t*)(windowPeer + 96) = 0;
    *(std::uint64_t*)(windowPeer + 104) = 0;
    *(std::uint32_t*)(windowPeer + 112) = 0;
    *(std::uint64_t*)(windowPeer + 120) = 0;
    *(std::uint64_t*)(windowPeer + 128) = 0;
    *(std::uint32_t*)(windowPeer + 136) = 0;
    *(std::uint64_t*)(windowPeer + 144) = 0;
    *(std::uint64_t*)(windowPeer + 152) = 0;
    *(std::uint64_t*)(windowPeer + 160) = 0;
    *(std::uint64_t*)(windowPeer + 168) = 0;
    *(std::uint64_t*)(windowPeer + 176) = 0;
    *(std::uint64_t*)(windowPeer + 184) = 0;
    *(std::uint64_t*)(windowPeer + 192) = 0;
    *(std::uint64_t*)(windowPeer + 200) = 0;
    *(std::uint64_t*)(windowPeer + 208) = 0;
    *(std::uint64_t*)(windowPeer + 216) = 0;
    *(std::uint64_t*)(windowPeer + 224) = 0;
    *(std::uint64_t*)(windowPeer + 232) = 0;
    *(std::uint64_t*)(windowPeer + 240) = 0;
    *(std::uint8_t*)(windowPeer + 248) = 0;
    *(std::uint32_t*)(windowPeer + 252) = 15;
    *(std::uint32_t*)(windowPeer + 256) = 1065353216;
    sub_1801FF750 (windowPeer + 264);
    allocatedObject5 = memoryAllocateObject (24);
    *(std::uint64_t*)allocatedObject5 = 0;
    *(std::uint8_t*)(allocatedObject5 + 8) = 0;
    CurrentThreadId = GetCurrentThreadId();
    ModuleHandleA = *(HMODULE*)&hmod;
    if (*(std::uint64_t*)&hmod == 0)
    {
        if (!GetModuleHandleExW (6u, &hmod, (HMODULE*)&hmod) || (ModuleHandleA = *(HMODULE*)&hmod, *(std::uint64_t*)&hmod == 0))
        {
            ModuleHandleA = GetModuleHandleA (nullptr);
            *(std::uint64_t*)&hmod = ModuleHandleA;
        }
    }
    *(std::uint64_t*)(allocatedObject5 + 16) = SetWindowsHookExW (4, fn, ModuleHandleA, CurrentThreadId);
    temporaryPointer8 = (_OWORD*)sub_1800ADE60 (stackStorage18);
    temporaryPointer9 = &opaqueValue16;
    for (i = 2; i != 0; --i)
    {
        *(_OWORD*)temporaryPointer9 = *temporaryPointer8;
        *((_OWORD*)temporaryPointer9 + 1) = temporaryPointer8[1];
        *((_OWORD*)temporaryPointer9 + 2) = temporaryPointer8[2];
        *((_OWORD*)temporaryPointer9 + 3) = temporaryPointer8[3];
        *((_OWORD*)temporaryPointer9 + 4) = temporaryPointer8[4];
        *((_OWORD*)temporaryPointer9 + 5) = temporaryPointer8[5];
        *((_OWORD*)temporaryPointer9 + 6) = temporaryPointer8[6];
        temporaryPointer9 += 16;
        *((_OWORD*)temporaryPointer9 - 1) = temporaryPointer8[7];
        temporaryPointer8 += 8;
    }
    *(_OWORD*)temporaryPointer9 = *temporaryPointer8;
    *((std::uint32_t*)temporaryPointer9 + 4) = *((std::uint32_t*)temporaryPointer8 + 4);
    if (HIDWORD (opaqueValue16) >= 0xA && HIDWORD (opaqueValue17) >= 0x4563)
    {
        LoadLibraryA ("uxtheme.dll");
        opaqueValue11 = GetModuleHandleA ("uxtheme.dll");
        if (opaqueValue11 != nullptr)
        {
            ProcAddress = (std::uint8_t (*) (void))GetProcAddress (opaqueValue11, (LPCSTR)0x84);
            *(std::uint64_t*)allocatedObject5 = ProcAddress;
            if (ProcAddress != nullptr)
            {
                conditionFlag13 = ProcAddress() != 0 && (std::uint8_t)sub_1801B2280() == 0;
                *(std::uint8_t*)(allocatedObject5 + 8) = conditionFlag13;
            }
        }
    }
    *(std::uint64_t*)(windowPeer + 392) = allocatedObject5;
    allocatedObject19 = memoryAllocateObject (176);
    *(std::uint64_t*)allocatedObject19 = 0;
    *(std::uint64_t*)(allocatedObject19 + 8) = 0;
    *(std::uint64_t*)(allocatedObject19 + 20) = 0;
    *(std::uint64_t*)(allocatedObject19 + 28) = 0;
    *(std::uint64_t*)(allocatedObject19 + 36) = 0;
    *(std::uint64_t*)(allocatedObject19 + 44) = 0;
    *(std::uint64_t*)(allocatedObject19 + 52) = 0;
    *(std::uint64_t*)(allocatedObject19 + 60) = 0;
    *(std::uint64_t*)(allocatedObject19 + 68) = 0;
    *(std::uint64_t*)(allocatedObject19 + 76) = 0;
    *(std::uint64_t*)(allocatedObject19 + 84) = 0;
    *(std::uint64_t*)(allocatedObject19 + 92) = 0;
    *(std::uint64_t*)(allocatedObject19 + 100) = 0;
    *(std::uint64_t*)(allocatedObject19 + 108) = 0;
    *(std::uint64_t*)(allocatedObject19 + 116) = 0;
    *(std::uint64_t*)(allocatedObject19 + 124) = 0;
    *(std::uint64_t*)(allocatedObject19 + 132) = 0;
    *(std::uint8_t*)(allocatedObject19 + 168) = 0;
    sub_1801D2FF0 (allocatedObject19, windowPeer);
    opaqueValue14 = *(std::uint64_t*)(windowPeer + 176);
    *(std::uint64_t*)(windowPeer + 176) = allocatedObject19;
    if (opaqueValue14 != 0)
    {
        *(std::uint32_t*)(opaqueValue14 + 12) = 0;
        memoryFreeBuffer (*(LPVOID*)opaqueValue14);
        memoryFree ((LPVOID)opaqueValue14);
    }
    return windowPeer;
}

// ===== Hook_caller_B @ 0x1801e8a80 size=513 =====
HHOOK** juceWindowPeerAcquireModalDismissHook (std::int64_t hookRegistry, HHOOK** outputSharedHook)
{
    int opaqueValue4; // ecx
    std::int64_t opaqueValue5; // rdx
    std::int32_t opaqueValue6; // eax
    std::int32_t opaqueValue7; // ett
    HHOOK* temporaryPointer8; // rax
    volatile std::int32_t* temporaryPointer9; // rdi
    HHOOK* allocatedObject10; // r15
    DWORD CurrentThreadId; // edi
    HMODULE ModuleHandleA; // rax
    std::int64_t allocatedObject13; // rdi
    volatile std::int32_t* temporaryPointer14; // rcx

    if (_InterlockedCompareExchange ((volatile std::int32_t*)hookRegistry, 1, 0) != 0)
    {
        opaqueValue4 = 19;
        while (_InterlockedCompareExchange ((volatile std::int32_t*)hookRegistry, 1, 0) != 0)
        {
            if (--opaqueValue4 < 0)
            {
                while (_InterlockedCompareExchange ((volatile std::int32_t*)hookRegistry, 1, 0) != 0)
                    Sleep (0);
                break;
            }
        }
    }
    opaqueValue5 = *(std::uint64_t*)(hookRegistry + 16);
    if (opaqueValue5 != 0)
    {
        opaqueValue6 = *(std::uint32_t*)(opaqueValue5 + 8);
        if (opaqueValue6 != 0)
        {
            while (1)
            {
                opaqueValue7 = opaqueValue6;
                opaqueValue6 = _InterlockedCompareExchange ((volatile std::int32_t*)(opaqueValue5 + 8), opaqueValue6 + 1, opaqueValue6);
                if (opaqueValue7 == opaqueValue6)
                    break;
                if (opaqueValue6 == 0)
                    goto label18;
            }
            temporaryPointer8 = *(HHOOK**)(hookRegistry + 8);
            temporaryPointer9 = *(volatile std::int32_t**)(hookRegistry + 16);
            if (temporaryPointer8 != nullptr)
            {
                *outputSharedHook = temporaryPointer8;
                outputSharedHook[1] = (HHOOK*)temporaryPointer9;
                goto label28;
            }
            if (temporaryPointer9 != nullptr && _InterlockedExchangeAdd (temporaryPointer9 + 2, 0xFFFFFFFF) == 1)
            {
                (**(void (***) (volatile std::int32_t*))temporaryPointer9) (temporaryPointer9);
                if (_InterlockedExchangeAdd (temporaryPointer9 + 3, 0xFFFFFFFF) == 1)
                    (*(void (**) (volatile std::int32_t*)) (*(std::uint64_t*)temporaryPointer9 + 8LL)) (temporaryPointer9);
            }
        }
    }
label18:
    allocatedObject10 = (HHOOK*)memoryAllocateObject (8);
    CurrentThreadId = GetCurrentThreadId();
    ModuleHandleA = *(HMODULE*)&hmod;
    if (*(std::uint64_t*)&hmod == 0)
    {
        if (!GetModuleHandleExW (6u, &hmod, (HMODULE*)&hmod) || (ModuleHandleA = *(HMODULE*)&hmod, *(std::uint64_t*)&hmod == 0))
        {
            ModuleHandleA = GetModuleHandleA (nullptr);
            *(std::uint64_t*)&hmod = ModuleHandleA;
        }
    }
    *allocatedObject10 = SetWindowsHookExW (4, sub_1801BCD80, ModuleHandleA, CurrentThreadId);
    allocatedObject13 = memoryAllocateObject (24);
    *(_OWORD*)allocatedObject13 = 0;
    *(std::uint32_t*)(allocatedObject13 + 8) = 1;
    *(std::uint32_t*)(allocatedObject13 + 12) = 1;
    *(std::uint64_t*)allocatedObject13 = &std::_Ref_count<juce::HWNDComponentPeer::TopLevelModalDismissBroadcaster>::`vftable';
    *(std::uint64_t*)(allocatedObject13 + 16) = allocatedObject10;
    _InterlockedIncrement ((volatile std::int32_t*)(allocatedObject13 + 12));
    *(std::uint64_t*)(hookRegistry + 8) = allocatedObject10;
    temporaryPointer14 = *(volatile std::int32_t**)(hookRegistry + 16);
    *(std::uint64_t*)(hookRegistry + 16) = allocatedObject13;
    if (temporaryPointer14 != nullptr && _InterlockedExchangeAdd (temporaryPointer14 + 3, 0xFFFFFFFF) == 1)
        (*(void (**) (volatile std::int32_t*)) (*(std::uint64_t*)temporaryPointer14 + 8LL)) (temporaryPointer14);
    *outputSharedHook = nullptr;
    outputSharedHook[1] = nullptr;
    _InterlockedIncrement ((volatile std::int32_t*)(allocatedObject13 + 8));
    *outputSharedHook = allocatedObject10;
    outputSharedHook[1] = (HHOOK*)allocatedObject13;
    if (_InterlockedExchangeAdd ((volatile std::int32_t*)(allocatedObject13 + 8), 0xFFFFFFFF) == 1)
    {
        (**(void (***) (std::int64_t))allocatedObject13) (allocatedObject13);
        if (_InterlockedExchangeAdd ((volatile std::int32_t*)(allocatedObject13 + 12), 0xFFFFFFFF) == 1)
            (*(void (**) (std::int64_t)) (*(std::uint64_t*)allocatedObject13 + 8LL)) (allocatedObject13);
    }
label28:
    _InterlockedExchange ((volatile std::int32_t*)hookRegistry, 0);
    return outputSharedHook;
}
