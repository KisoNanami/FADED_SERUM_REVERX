#include <cstdint>

// ===== Hook_caller_C @ 0x1801f3330 size=130 =====
HHOOK* juceMessageLoopInstallGetMessageHook (HHOOK* outputHook)
{
    DWORD CurrentThreadId; // edi
    HMODULE ModuleHandleA; // rax

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
    *outputHook = SetWindowsHookExW (3, sub_1801C0EA0, ModuleHandleA, CurrentThreadId);
    return outputHook;
}
