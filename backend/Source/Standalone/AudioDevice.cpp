#include <cstdint>

// ===== sub_1807FACF0_deadlineWriter @ 0x1807facf0 size=565 =====
char* standaloneAudioOpenDevice (std::int64_t standaloneHost, char* outputError)
{
    const char* permissionErrorCode; // rdx
    char* stringStorageToRelease5; // rcx
    std::int64_t processor; // rbx
    ULONGLONG currentTickMs; // rax
    std::int64_t renderDeadlineTickMs; // rcx
    void* previousDeviceErrorStorage; // rcx
    std::int64_t audioDeviceManager; // rcx
    const char* deviceErrorCode; // rdx
    char* stringStorageToRelease12; // rcx
    std::uint8_t* deviceOpenError; // [rsp+20h] [rbp-58h] BYREF
    char* timeOrStringScratch; // [rsp+30h] [rbp-48h] BYREF
    std::uint16_t currentUnixMilliseconds; // [rsp+38h] [rbp-40h]

    timeOrStringScratch = outputError;
    clockReadUnixTimeParts (&timeOrStringScratch);
    if (*(std::uint64_t*)(standaloneHost + 64) <= currentUnixMilliseconds + 1000 * (std::int64_t)timeOrStringScratch)
    {
        permissionErrorCode = "AUDIO_PERMISSION_REQUIRED";
        goto label3;
    }
    processor = *(std::uint64_t*)(standaloneHost + 48);
    currentTickMs = GetTickCount64();
    if (currentTickMs >= 0x7FFFFFFFFFFFFFFFLL)
        currentTickMs = 0x7FFFFFFFFFFFFFFFLL;
    renderDeadlineTickMs = *(std::uint64_t*)(processor + 475712);
    if (renderDeadlineTickMs != 0x7FFFFFFFFFFFFFFFLL && (renderDeadlineTickMs <= 0 || (std::int64_t)currentTickMs >= renderDeadlineTickMs))
    {
        permissionErrorCode = "ENTITLEMENT_DENIED";
    label3:
        juceStringConstructFromUtf8 (&timeOrStringScratch, permissionErrorCode);
        juceStringAssign (outputError, &timeOrStringScratch);
        stringStorageToRelease5 = timeOrStringScratch - 16;
        if (timeOrStringScratch - 16 == (char*)&emptyJuceStringStorage)
            return outputError;
        goto label23;
    }
    *(std::uint8_t*)(*(std::uint64_t*)(standaloneHost + 48) + 65LL) = 0;
    timeOrStringScratch = &emptyJuceStringCharacters;
    sub_1807743F0 (standaloneHost + 384);
    sub_180771620 (standaloneHost + 384);
    *(std::uint32_t*)(standaloneHost + 632) = 0;
    *(std::uint32_t*)(standaloneHost + 636) = 2;
    previousDeviceErrorStorage = (void*)(_InterlockedExchange64 ((volatile std::int64_t*)(standaloneHost + 640), (std::int64_t)&emptyJuceStringCharacters) - 16);
    if (previousDeviceErrorStorage != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)previousDeviceErrorStorage) == -1)
        memoryFree (previousDeviceErrorStorage);
    sub_180772300 (standaloneHost + 384, &deviceOpenError, standaloneHost + 640, 0);
    audioDeviceManager = standaloneHost + 384;
    if (*deviceOpenError != 0)
    {
        sub_180775530 (audioDeviceManager);
        *(std::uint8_t*)(*(std::uint64_t*)(standaloneHost + 48) + 65LL) = 1;
        deviceErrorCode = "AUDIO_DEVICE_UNAVAILABLE";
    }
    else
    {
        sub_1807762E0 (audioDeviceManager, standaloneHost);
        *(std::uint8_t*)(standaloneHost + 1296) = 1;
        sub_180193EE0 (standaloneHost + 8, 100);
        if (*(std::uint8_t*)(standaloneHost + 1280) != 0)
        {
            *(std::uint64_t*)outputError = &emptyJuceStringCharacters;
            goto label22;
        }
        standaloneAudioCloseDevice (standaloneHost);
        deviceErrorCode = "AUDIO_DEVICE_UNSUPPORTED";
    }
    juceStringConstructFromUtf8 (&timeOrStringScratch, deviceErrorCode);
    juceStringAssign (outputError, &timeOrStringScratch);
    stringStorageToRelease12 = timeOrStringScratch - 16;
    if (timeOrStringScratch - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease12) == -1)
        memoryFree (stringStorageToRelease12);
label22:
    stringStorageToRelease5 = deviceOpenError - 16;
    if (deviceOpenError - 16 == (std::uint8_t*)&emptyJuceStringStorage)
        return outputError;
label23:
    if (_InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease5) == -1)
        memoryFree (stringStorageToRelease5);
    return outputError;
}

// ===== sub_1807FB460_deadlineWriter @ 0x1807fb460 size=178 =====
std::uint8_t* standaloneAudioRevalidatePermission (std::int64_t permissionMonitor)
{
    std::int64_t processor; // rbx
    ULONGLONG currentTickMs; // rax
    std::int64_t renderDeadlineTickMs; // rcx
    std::uint8_t* result; // rax
    std::int64_t currentUnixSeconds; // [rsp+20h] [rbp-28h] BYREF
    std::uint16_t currentUnixMilliseconds; // [rsp+28h] [rbp-20h]

    clockReadUnixTimeParts (&currentUnixSeconds);
    if (*(std::uint64_t*)(permissionMonitor + 56) <= currentUnixMilliseconds + 1000 * currentUnixSeconds)
        return (std::uint8_t*)standaloneAudioCloseDevice (permissionMonitor - 8);
    processor = *(std::uint64_t*)(permissionMonitor + 40);
    currentTickMs = GetTickCount64();
    renderDeadlineTickMs = *(std::uint64_t*)(processor + 475712);
    if (currentTickMs >= 0x7FFFFFFFFFFFFFFFLL)
        currentTickMs = 0x7FFFFFFFFFFFFFFFLL;
    if (renderDeadlineTickMs != 0x7FFFFFFFFFFFFFFFLL && (renderDeadlineTickMs <= 0 || (std::int64_t)currentTickMs >= renderDeadlineTickMs))
        return (std::uint8_t*)standaloneAudioCloseDevice (permissionMonitor - 8);
    if (*(std::uint8_t*)(permissionMonitor + 1273) != 0)
        return (std::uint8_t*)standaloneAudioCloseDevice (permissionMonitor - 8);
    result = *(std::uint8_t**)(permissionMonitor + 48);
    if (*result != 0)
        return (std::uint8_t*)standaloneAudioCloseDevice (permissionMonitor - 8);
    return result;
}
