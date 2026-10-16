#include <cstdint>

// ===== MuteFade_OutputToSilence64 @ 0x180068ff0 size=811 =====
// gated path output writer: 64-sample linear fade (1 - n/64) from last peaks +475824/+475828, then zero-fill remainder
std::int64_t audioGateFadeOutOver64Samples (std::int64_t processor, std::int64_t audioBuffer)
{
    std::int64_t result; // rax
    int sampleCount; // ecx
    __m128 si128; // xmm9
    int remainingFadeSamples; // eax
    int samplesToFade; // ebx
    __m128 vectorValue9; // xmm10
    __m128i vectorValue10; // xmm11
    unsigned int completedFadeSamples; // r14d
    std::int64_t fadeSampleCount; // rdi
    int channelIndex; // esi
    std::int64_t channelPointerOffset; // r12
    __m128i vectorValue15; // xmm8
    std::int64_t channelPointers; // rax
    __m128* channelData; // r9
    int peakChannelIndex; // eax
    signed int vectorSampleIndex; // r10d
    std::int64_t sampleIndex; // r8
    float lastChannelPeak; // xmm4_4
    __m128 broadcastChannelPeak; // xmm5
    __m128* vectorValue23; // r15
    unsigned int opaqueValue24; // edi
    unsigned int opaqueValue25; // ecx
    __m128 vectorValue26; // xmm1
    unsigned int opaqueValue27; // eax
    unsigned int opaqueValue28; // edx
    __m128i vectorValue29; // xmm0
    int fadeSampleIndex; // eax
    float fadeSamplePosition; // xmm0_4
    bool conditionFlag32; // zf
    std::int64_t opaqueValue33; // rcx
    std::uint8_t opaqueValue34; // al
    int opaqueValue35; // [rsp+20h] [rbp-98h]
    std::uint32_t stackStorage36[3]; // [rsp+24h] [rbp-94h] BYREF
    void* retaddr; // [rsp+B8h] [rbp+0h] BYREF

    result = (std::int64_t)&retaddr;
    sampleCount = *(std::uint32_t*)(audioBuffer + 4);
    if (sampleCount > 0 && *(int*)audioBuffer > 0)
    {
        si128 = (__m128)_mm_load_si128 ((const __m128i*)&xmmword_18133BE90);
        remainingFadeSamples = *(std::uint32_t*)(processor + 475832);
        samplesToFade = remainingFadeSamples;
        vectorValue9 = (__m128)_mm_load_si128 ((const __m128i*)&xmmword_18133B940);
        vectorValue10 = _mm_load_si128 ((const __m128i*)&xmmword_18133B1A0);
        if (sampleCount < remainingFadeSamples)
            samplesToFade = *(std::uint32_t*)(audioBuffer + 4);
        completedFadeSamples = 64 - remainingFadeSamples;
        fadeSampleCount = samplesToFade;
        channelIndex = 0;
        channelPointerOffset = 0;
        vectorValue15 = _mm_shuffle_epi32 (_mm_cvtsi32_si128 (64 - remainingFadeSamples), 0);
        do
        {
            channelPointers = *(std::uint64_t*)(audioBuffer + 16);
            *(std::uint8_t*)(audioBuffer + 288) = 0;
            channelData = *(__m128**)(channelPointerOffset + channelPointers);
            peakChannelIndex = channelIndex;
            if (channelIndex > 1)
                peakChannelIndex = 1;
            vectorSampleIndex = 0;
            sampleIndex = 0;
            lastChannelPeak = *(float*)(processor + 4LL * peakChannelIndex + 475824);
            broadcastChannelPeak = _mm_shuffle_ps ((__m128)LODWORD (lastChannelPeak), (__m128)LODWORD (lastChannelPeak), 0);
            if (samplesToFade >= 16)
            {
                vectorValue23 = channelData + 2;
                opaqueValue24 = completedFadeSamples;
                do
                {
                    opaqueValue25 = vectorSampleIndex + 8;
                    opaqueValue24 += 16;
                    sampleIndex += 16;
                    vectorValue26 = _mm_sub_ps (
                        si128,
                        _mm_mul_ps (
                            _mm_cvtepi32_ps (_mm_add_epi32 (_mm_add_epi32 (_mm_shuffle_epi32 (_mm_cvtsi32_si128 (vectorSampleIndex), 0), vectorValue15), vectorValue10)),
                            vectorValue9));
                    opaqueValue27 = completedFadeSamples + vectorSampleIndex;
                    opaqueValue28 = completedFadeSamples + vectorSampleIndex + 14;
                    vectorValue29 = _mm_add_epi32 (_mm_add_epi32 (_mm_shuffle_epi32 (_mm_cvtsi32_si128 (vectorSampleIndex + 4), 0), vectorValue15), vectorValue10);
                    vectorSampleIndex += 16;
                    vectorValue23[-2] = _mm_mul_ps (vectorValue26, broadcastChannelPeak);
                    vectorValue23[-1] = _mm_mul_ps (_mm_sub_ps (si128, _mm_mul_ps (_mm_cvtepi32_ps (vectorValue29), vectorValue9)), broadcastChannelPeak);
                    *vectorValue23 = _mm_mul_ps (
                        _mm_sub_ps (
                            si128,
                            _mm_mul_ps (
                                _mm_cvtepi32_ps (_mm_add_epi32 (_mm_add_epi32 (_mm_shuffle_epi32 (_mm_cvtsi32_si128 (opaqueValue25), 0), vectorValue15), vectorValue10)),
                                vectorValue9)),
                        broadcastChannelPeak);
                    vectorValue23[1] = _mm_mul_ps (
                        _mm_sub_ps (
                            si128,
                            _mm_mul_ps (
                                _mm_cvtepi32_ps (
                                    _mm_unpacklo_epi64 (
                                        _mm_unpacklo_epi32 (_mm_cvtsi32_si128 (opaqueValue27 + 13), _mm_cvtsi32_si128 (opaqueValue28)),
                                        _mm_unpacklo_epi32 (_mm_cvtsi32_si128 (opaqueValue27 + 15), _mm_cvtsi32_si128 (opaqueValue24)))),
                                vectorValue9)),
                        broadcastChannelPeak);
                    vectorValue23 += 4;
                } while (vectorSampleIndex < samplesToFade - (samplesToFade & 0xF));
                fadeSampleCount = samplesToFade;
            }
            if (sampleIndex < fadeSampleCount)
            {
                fadeSampleIndex = vectorSampleIndex + completedFadeSamples + 1;
                do
                {
                    fadeSamplePosition = (float)fadeSampleIndex++;
                    channelData->m128_f32[sampleIndex++] = (float)(1.0 - (float)(fadeSamplePosition * 0.015625)) * lastChannelPeak;
                } while (sampleIndex < fadeSampleCount);
            }
            result = *(unsigned int*)(audioBuffer + 4);
            if (samplesToFade < (int)result)
                result = memoryFillBytes (&channelData->m128_f32[fadeSampleCount], 0, 4LL * ((int)result - samplesToFade));
            ++channelIndex;
            channelPointerOffset += 8;
        } while (channelIndex < *(std::uint32_t*)audioBuffer);
        conditionFlag32 = *(std::uint32_t*)(processor + 475832) == samplesToFade;
        *(std::uint32_t*)(processor + 475832) -= samplesToFade;
        if (conditionFlag32)
        {
            opaqueValue35 = 0;
            stackStorage36[0] = 0;
            opaqueValue33 = 0;
            while (1)
            {
                opaqueValue34 = *((std::uint8_t*)&stackStorage36[-1] + opaqueValue33++);
                if (opaqueValue34 != *((std::uint8_t*)stackStorage36 + opaqueValue33 - 1))
                    break;
                if (opaqueValue33 == 4)
                {
                    result = 0;
                    goto label24;
                }
            }
            result = opaqueValue34 < *((std::uint8_t*)stackStorage36 + opaqueValue33 - 1) ? -1 : 1;
        label24:
            if ((std::uint32_t)result == 0)
                result = 0;
            *(std::uint64_t*)(processor + 475824) = 0;
        }
    }
    return result;
}
