#include <cstdint>

// ===== EngineSignal_Wake @ 0x1803c6ab0 size=181 =====
// wake engine worker; called on gate revoke and releaseResources
std::int64_t audioEngineRequestWorkerWakeup (std::int64_t engineSignal)
{
    std::int64_t workerSharedControl; // rax
    std::int64_t workerStateOrReleaseResult; // rax
    volatile std::int32_t* workerSharedControlToRelease; // rbx

    workerSharedControl = *(std::uint64_t*)(engineSignal + 72);
    if (workerSharedControl != 0)
        _InterlockedIncrement ((volatile std::int32_t*)(workerSharedControl + 8));
    workerStateOrReleaseResult = *(std::uint64_t*)(engineSignal + 64);
    workerSharedControlToRelease = *(volatile std::int32_t**)(engineSignal + 72);
    if (workerStateOrReleaseResult != 0)
    {
        _InterlockedIncrement64 ((volatile std::int64_t*)(workerStateOrReleaseResult + 8));
        *(std::uint8_t*)(workerStateOrReleaseResult + 1) = 0;
        *(std::uint8_t*)(workerStateOrReleaseResult + 2) = 1;
        _InterlockedIncrement64 ((volatile std::int64_t*)(workerStateOrReleaseResult + 16));
        *(std::uint8_t*)(workerStateOrReleaseResult + 210) = 1;
        *(std::uint8_t*)(workerStateOrReleaseResult + 209) = 0;
        _InterlockedIncrement64 ((volatile std::int64_t*)(workerStateOrReleaseResult + 216));
        *(std::uint8_t*)(workerStateOrReleaseResult + 416) = 0;
        *(std::uint8_t*)(workerStateOrReleaseResult + 417) = 1;
        *(std::uint64_t*)(workerStateOrReleaseResult + 424) = 0;
        *(std::uint64_t*)(workerStateOrReleaseResult + 432) = 0;
        *(std::uint32_t*)(workerStateOrReleaseResult + 264) = 0;
    }
    if (workerSharedControlToRelease != nullptr)
    {
        workerStateOrReleaseResult = (unsigned int)_InterlockedExchangeAdd (workerSharedControlToRelease + 2, 0xFFFFFFFF);
        if ((std::uint32_t)workerStateOrReleaseResult == 1)
        {
            workerStateOrReleaseResult = (**(std::int64_t (***) (volatile std::int32_t*))workerSharedControlToRelease) (workerSharedControlToRelease);
            if (_InterlockedExchangeAdd (workerSharedControlToRelease + 3, 0xFFFFFFFF) == 1)
                return (*(std::int64_t (**) (volatile std::int32_t*)) (*(std::uint64_t*)workerSharedControlToRelease + 8LL)) (workerSharedControlToRelease);
        }
    }
    return workerStateOrReleaseResult;
}
