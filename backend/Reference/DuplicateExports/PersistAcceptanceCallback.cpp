#include <cstdint>

// ===== Onboarding_AcceptCommitThunk @ 0x1806d0a00 size=96 =====
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
