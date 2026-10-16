#include <cstdint>

// ===== Processor_OnAuthStateChanged @ 0x180064ac0 size=597 =====
// lambda_6 _Do_call: packs {activated,+184 anchor, +152 isMAS, tier status, +144 expiry, +176 serverTime, +192 mono} -> RenderGate_ComputeDeadline -> atomic +475712
void* audioGateOnAuthStateChanged (std::int64_t* processorCallback, std::int64_t authState)
{
    std::int64_t trimmedStatus; // rax
    void* trimmedStatusStorage; // rcx
    char isStatusAllowed; // r15
    std::int64_t normalizedStatus; // rbx
    bool isPermanentEntitlement; // r14
    std::int64_t processor; // rbp
    std::int64_t resetAnchor; // r12
    std::int64_t serverTimeAnchor; // r13
    bool hasVerifiedEntitlement; // r15
    ULONGLONG currentTickMs; // rdx
    void* normalizedStatusStorage; // rcx
    void* result; // rax
    std::uint8_t entitlementSnapshot[8]; // [rsp+30h] [rbp-68h] BYREF
    std::int64_t snapshotPrimaryExpiry; // [rsp+38h] [rbp-60h]
    std::int64_t snapshotGraceExpiry; // [rsp+40h] [rbp-58h]
    std::int64_t snapshotServerTime; // [rsp+48h] [rbp-50h]
    std::int64_t snapshotResetAnchor; // [rsp+50h] [rbp-48h]
    std::int64_t masFlagOrStatusScratch; // [rsp+A0h] [rbp+8h] BYREF
    std::int64_t statusOrExpiryScratch; // [rsp+A8h] [rbp+10h] BYREF
    std::int64_t graceExpiryMs; // [rsp+B0h] [rbp+18h]

    trimmedStatus = juceStringTrimWhitespace (authState + 128, &statusOrExpiryScratch);
    juceStringToLowerCase (trimmedStatus, &masFlagOrStatusScratch);
    trimmedStatusStorage = (void*)(statusOrExpiryScratch - 16);
    if ((void*)(statusOrExpiryScratch - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)trimmedStatusStorage) == -1)
        memoryFree (trimmedStatusStorage);
    isStatusAllowed = entitlementIsStatusAllowed (&masFlagOrStatusScratch);
    normalizedStatus = masFlagOrStatusScratch;
    isPermanentEntitlement = (unsigned int)utf8CompareStrings (masFlagOrStatusScratch, "permanent") == 0 || (unsigned int)utf8CompareStrings (normalizedStatus, "grandfathered") == 0 || (unsigned int)utf8CompareStrings (normalizedStatus, "refund_pending") == 0 && *(std::int64_t*)(authState + 136) <= 0;
    processor = *processorCallback;
    resetAnchor = *(std::uint64_t*)(authState + 192);
    serverTimeAnchor = *(std::uint64_t*)(authState + 176);
    graceExpiryMs = *(std::uint64_t*)(authState + 144);
    statusOrExpiryScratch = *(std::uint64_t*)(authState + 168);
    LOBYTE (masFlagOrStatusScratch) = *(std::uint8_t*)(authState + 152);
    hasVerifiedEntitlement = *(std::uint8_t*)authState != 0 && *(std::uint8_t*)(authState + 184) != 0 && isStatusAllowed != 0;
    if ((unsigned int)mutexLock (processor + 475720) != 0)
        cppRuntimeThrowSystemError (5);
    if (*(std::uint32_t*)(processor + 475796) == 0x7FFFFFFF)
    {
        *(std::uint32_t*)(processor + 475796) = 2147483646;
        cppRuntimeThrowSystemError (6);
    }
    entitlementSnapshot[0] = 1;
    entitlementSnapshot[1] = hasVerifiedEntitlement;
    entitlementSnapshot[2] = masFlagOrStatusScratch;
    entitlementSnapshot[3] = isPermanentEntitlement;
    snapshotPrimaryExpiry = statusOrExpiryScratch;
    snapshotGraceExpiry = graceExpiryMs;
    snapshotServerTime = serverTimeAnchor;
    snapshotResetAnchor = resetAnchor;
    currentTickMs = GetTickCount64();
    if (currentTickMs >= 0x7FFFFFFFFFFFFFFFLL)
        currentTickMs = 0x7FFFFFFFFFFFFFFFLL;
    if (audioGateUpdateRenderDeadline (
            (std::int64_t)entitlementSnapshot,
            currentTickMs,
            (volatile std::int64_t*)(processor + 475712),
            (std::int64_t*)(processor + 475808),
            (std::int64_t*)(processor + 475816),
            (std::uint64_t*)(processor + 475800)))
    {
        audioEngineRequestWorkerWakeup (processor + 260400);
        *(std::uint8_t*)(processor + 178944) = 1;
    }
    mutexUnlock (processor + 475720);
    normalizedStatusStorage = (void*)(normalizedStatus - 16);
    result = &emptyJuceStringStorage;
    if ((void*)(normalizedStatus - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)normalizedStatusStorage) == -1)
        return (void*)memoryFree (normalizedStatusStorage);
    return result;
}

// ===== RenderGate_AudioThread_Check @ 0x180066180 size=167 =====
// reads atomic deadline +475712: 0=locked; INF=allowed; expired -> InterlockedCompareExchange64 to 0 (revoke), wake EngineSignal_Wake(+260400), dirty +178944=1
char audioGateIsRenderAllowedOnAudioThread (std::int64_t processor)
{
    std::int64_t deadlineTickMs; // rdi
    std::int64_t currentTickMs; // rcx
    std::int64_t observedDeadlineTickMs; // rax

    deadlineTickMs = *(std::uint64_t*)(processor + 475712);
    if (deadlineTickMs == 0)
        return 0;
    if (deadlineTickMs != 0x7FFFFFFFFFFFFFFFLL)
    {
        currentTickMs = GetTickCount64();
        if ((std::uint64_t)currentTickMs >= 0x7FFFFFFFFFFFFFFFLL)
            currentTickMs = 0x7FFFFFFFFFFFFFFFLL;
        if (currentTickMs >= deadlineTickMs)
        {
            observedDeadlineTickMs = _InterlockedCompareExchange64 ((volatile std::int64_t*)(processor + 475712), 0, deadlineTickMs);
            if (deadlineTickMs == observedDeadlineTickMs)
            {
                audioEngineRequestWorkerWakeup (processor + 260400);
                *(std::uint8_t*)(processor + 178944) = 1;
                return 0;
            }
            if (observedDeadlineTickMs != 0x7FFFFFFFFFFFFFFFLL && (observedDeadlineTickMs <= 0 || currentTickMs >= observedDeadlineTickMs))
                return 0;
        }
    }
    return 1;
}

// ===== RenderGate_ComputeDeadline @ 0x1800567f0 size=446 =====
// deadline = now + (expiresAt - serverTime anchor); 0 if not activated; INF if permanent/MAS-valid; min-clamp vs prev deadline (anti-rollback); floors: raw expiry +475808, serverTime +475816, masResetEpoch +475800
bool audioGateUpdateRenderDeadline (
    std::int64_t entitlementSnapshot,
    std::int64_t currentTickMs,
    volatile std::int64_t* atomicDeadline,
    std::int64_t* previousExpiry,
    std::int64_t* serverTimeFloor,
    std::uint64_t* resetEpochFloor)
{
    char isVerified; // r8
    char isPermanentEntitlement; // di
    std::int64_t rawExpiryMs; // rcx
    std::int64_t expiryFieldOffset; // rax
    std::uint64_t* incomingResetEpoch; // rdx
    bool hasResetEpoch; // r9
    std::int64_t nextDeadlineTickMs; // rdx
    std::int64_t permanentServerAnchorMs; // rax
    std::int64_t serverAnchorMs; // r8
    std::int64_t remainingEntitlementMs; // rdx
    volatile std::int64_t existingDeadlineTickMs; // r8
    std::int64_t updatedResetEpochFloor; // rax
    std::int64_t updatedServerTimeFloor; // rax

    if (*(std::uint8_t*)entitlementSnapshot == 0)
    {
        *previousExpiry = -1;
        return _InterlockedExchange64 (atomicDeadline, 0) != 0;
    }
    isVerified = *(std::uint8_t*)(entitlementSnapshot + 1);
    if (isVerified == 0)
    {
        rawExpiryMs = -1;
    label12:
        isPermanentEntitlement = 0;
        goto label13;
    }
    if (*(std::uint8_t*)(entitlementSnapshot + 2) != 0 || *(std::uint8_t*)(entitlementSnapshot + 3) == 0)
    {
        expiryFieldOffset = 8;
        if (*(std::uint8_t*)(entitlementSnapshot + 2) == 0)
            expiryFieldOffset = 16;
        rawExpiryMs = *(std::uint64_t*)(expiryFieldOffset + entitlementSnapshot);
        goto label12;
    }
    isPermanentEntitlement = 1;
    rawExpiryMs = 0x7FFFFFFFFFFFFFFFLL;
label13:
    incomingResetEpoch = (std::uint64_t*)(entitlementSnapshot + 32);
    hasResetEpoch = resetEpochFloor != nullptr && *incomingResetEpoch != 0;
    if (isVerified != 0 && hasResetEpoch && *incomingResetEpoch <= *resetEpochFloor)
        return false;
    nextDeadlineTickMs = 0;
    if (isPermanentEntitlement != 0)
    {
        permanentServerAnchorMs = *(std::uint64_t*)(entitlementSnapshot + 24);
        if (permanentServerAnchorMs <= 0 || !hasResetEpoch && permanentServerAnchorMs <= *serverTimeFloor)
            return false;
        nextDeadlineTickMs = 0x7FFFFFFFFFFFFFFFLL;
    }
    else if (isVerified != 0 && rawExpiryMs > 0)
    {
        serverAnchorMs = *(std::uint64_t*)(entitlementSnapshot + 24);
        if (serverAnchorMs > 0)
        {
            if (!hasResetEpoch && serverAnchorMs <= *serverTimeFloor)
                return false;
            if (serverAnchorMs < rawExpiryMs && (std::uint64_t)(currentTickMs - 1) <= 0x7FFFFFFFFFFFFFFDLL)
            {
                remainingEntitlementMs = rawExpiryMs - serverAnchorMs;
                if (0x7FFFFFFFFFFFFFFELL - currentTickMs < rawExpiryMs - serverAnchorMs)
                    remainingEntitlementMs = 0x7FFFFFFFFFFFFFFELL - currentTickMs;
                nextDeadlineTickMs = currentTickMs + remainingEntitlementMs;
            }
            existingDeadlineTickMs = *atomicDeadline;
            if (rawExpiryMs == *previousExpiry && (std::uint64_t)(existingDeadlineTickMs - 1) <= 0x7FFFFFFFFFFFFFFDLL && nextDeadlineTickMs != 0)
            {
                if (nextDeadlineTickMs < existingDeadlineTickMs)
                    existingDeadlineTickMs = nextDeadlineTickMs;
                nextDeadlineTickMs = existingDeadlineTickMs;
            }
        }
    }
    *previousExpiry = rawExpiryMs;
    if (hasResetEpoch)
    {
        updatedResetEpochFloor = *resetEpochFloor;
        if (*resetEpochFloor < *(std::uint64_t*)(entitlementSnapshot + 32))
            updatedResetEpochFloor = *(std::uint64_t*)(entitlementSnapshot + 32);
        *resetEpochFloor = updatedResetEpochFloor;
    }
    updatedServerTimeFloor = *serverTimeFloor;
    if (*serverTimeFloor < *(std::uint64_t*)(entitlementSnapshot + 24))
        updatedServerTimeFloor = *(std::uint64_t*)(entitlementSnapshot + 24);
    *serverTimeFloor = updatedServerTimeFloor;
    return _InterlockedExchange64 (atomicDeadline, nextDeadlineTickMs) != 0 && nextDeadlineTickMs == 0;
}

// ===== RenderGate_IsAuthorized_readonly @ 0x180066130 size=71 =====
// non-atomic grace check of +475712 (deadline==INF or now<deadline); used by editor UI + CLI
bool audioGateIsRenderAuthorized (std::int64_t processor)
{
    ULONGLONG currentTickMs; // rax
    std::int64_t deadlineTickMs; // rcx

    currentTickMs = GetTickCount64();
    deadlineTickMs = *(std::uint64_t*)(processor + 475712);
    if (currentTickMs >= 0x7FFFFFFFFFFFFFFFLL)
        currentTickMs = 0x7FFFFFFFFFFFFFFFLL;
    return deadlineTickMs == 0x7FFFFFFFFFFFFFFFLL || deadlineTickMs > 0 && (std::int64_t)currentTickMs < deadlineTickMs;
}
