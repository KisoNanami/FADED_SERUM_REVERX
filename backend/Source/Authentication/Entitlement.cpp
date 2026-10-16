#include <cstdint>

// ===== AuthEntitlement_IsTimeValid @ 0x180359d40 size=375 =====
// status refund_pending&&expiresAt(+136)<=0 special-case; else grace(+144) vs deadline; MAS path: status active AND revocation deadline +200 >= GetTickCount64
char entitlementIsTimeValid (std::int64_t authState, std::int64_t currentUnixTimeMs)
{
    std::int64_t entitlementStatusField; // rcx
    std::int64_t masStatusString; // rax
    ULONGLONG currentTickMs; // rax
    std::int64_t masRevocationDeadline; // rcx
    char isMasEntitlementValid; // bl
    void* masStatusStorage; // rcx
    std::int64_t normalizedStatus; // rax
    bool hasRefundWithoutExpiry; // di
    void* normalizedStatusStorage; // rcx
    std::int64_t graceExpiryMs; // rax
    std::int64_t temporaryStatusString; // [rsp+30h] [rbp+8h] BYREF

    if (*(std::uint8_t*)authState == 0 || (std::uint8_t)entitlementIsStatusAllowed (authState + 128) == 0)
        return 0;
    entitlementStatusField = authState + 128;
    if (*(std::uint8_t*)(authState + 152) == 0)
    {
        if ((std::uint8_t)sub_180351A70 (entitlementStatusField) == 0)
        {
            normalizedStatus = juceStringTrimWhitespace (authState + 128, &temporaryStatusString);
            hasRefundWithoutExpiry = (unsigned int)juceStringCompareUtf8 (normalizedStatus, "refund_pending") == 0 && *(std::int64_t*)(authState + 136) <= 0;
            normalizedStatusStorage = (void*)(temporaryStatusString - 16);
            if ((void*)(temporaryStatusString - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)normalizedStatusStorage) == -1)
                memoryFree (normalizedStatusStorage);
            if (!hasRefundWithoutExpiry)
            {
                graceExpiryMs = *(std::uint64_t*)(authState + 144);
                if (graceExpiryMs <= 0 || currentUnixTimeMs > graceExpiryMs)
                    return 0;
            }
        }
        return 1;
    }
    masStatusString = juceStringTrimWhitespace (entitlementStatusField, &temporaryStatusString);
    if ((unsigned int)juceStringCompareUtf8 (masStatusString, "active") != 0)
        goto label11;
    currentTickMs = GetTickCount64();
    if (currentTickMs >= 0x7FFFFFFFFFFFFFFFLL)
        currentTickMs = 0x7FFFFFFFFFFFFFFFLL;
    if (*(std::uint8_t*)(authState + 152) != 0 && ((masRevocationDeadline = *(std::uint64_t*)(authState + 200)) <= 0 || (std::int64_t)currentTickMs >= masRevocationDeadline))
    label11:
        isMasEntitlementValid = 0;
    else
        isMasEntitlementValid = 1;
    masStatusStorage = (void*)(temporaryStatusString - 16);
    if ((void*)(temporaryStatusString - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)masStatusStorage) == -1)
        memoryFree (masStatusStorage);
    return isMasEntitlementValid;
}

// ===== AuthEntitlement_StatusNonEmpty @ 0x180351990 size=222 =====
// entitlement status string != empty
std::int64_t entitlementIsStatusAllowed (std::int64_t statusString)
{
    std::int64_t trimmedStatus; // rax
    void* trimmedStatusStorage; // rcx
    std::int64_t characterIndex; // rcx
    std::int64_t normalizedStatus; // rbx
    char statusCharacter; // al
    std::uint8_t isAllowedStatus; // di
    void* normalizedStatusStorage; // rcx
    std::int64_t trimmedStatusString; // [rsp+48h] [rbp+10h] BYREF
    std::int64_t normalizedStatusString; // [rsp+50h] [rbp+18h] BYREF

    trimmedStatus = juceStringTrimWhitespace (statusString, &trimmedStatusString);
    juceStringToLowerCase (trimmedStatus, &normalizedStatusString);
    trimmedStatusStorage = (void*)(trimmedStatusString - 16);
    if ((void*)(trimmedStatusString - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)trimmedStatusStorage) == -1)
        memoryFree (trimmedStatusStorage);
    characterIndex = 0;
    normalizedStatus = normalizedStatusString;
    while (1)
    {
        statusCharacter = *(std::uint8_t*)(normalizedStatusString + characterIndex++);
        if (statusCharacter != aActive[characterIndex - 1])
            break;
        if (characterIndex == 7)
            goto label7;
    }
    if ((unsigned int)utf8CompareStrings (normalizedStatusString, "refund_pending") == 0 || (unsigned int)utf8CompareStrings (normalizedStatus, "permanent") == 0 || (unsigned int)utf8CompareStrings (normalizedStatus, "grandfathered") == 0)
    {
    label7:
        isAllowedStatus = 1;
        goto label8;
    }
    isAllowedStatus = 0;
label8:
    normalizedStatusStorage = (void*)(normalizedStatus - 16);
    if ((void*)(normalizedStatus - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)normalizedStatusStorage) == -1)
        memoryFree (normalizedStatusStorage);
    return isAllowedStatus;
}
