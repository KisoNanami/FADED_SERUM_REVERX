#include <cstdint>

// ===== Editor_OnOnboardingSurfaceChanged2 @ 0x1806d01d0 size=298 =====
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
