#include <cstdint>

// ===== OpenProcessToken_caller_A @ 0x1800937e0 size=401 =====
bool winSecurityCanWriteFile (std::uint8_t** filePath)
{
    bool opaqueValue2; // bl
    LPCWSTR* utf16Characters3; // rax
    HANDLE CurrentProcess; // rax
    DWORD AccessMask[4]; // [rsp+40h] [rbp-19h] BYREF
    BOOL AccessStatus; // [rsp+50h] [rbp-9h] BYREF
    DWORD GrantedAccess; // [rsp+54h] [rbp-5h] BYREF
    DWORD PrivilegeSetLength; // [rsp+58h] [rbp-1h] BYREF
    HANDLE DuplicateTokenHandle; // [rsp+60h] [rbp+7h] BYREF
    HANDLE TokenHandle; // [rsp+68h] [rbp+Fh] BYREF
    PSECURITY_DESCRIPTOR pSecurityDescriptor; // [rsp+70h] [rbp+17h] BYREF
    std::uint8_t stackStorage12[8]; // [rsp+78h] [rbp+1Fh] BYREF
    GENERIC_MAPPING GenericMapping; // [rsp+80h] [rbp+27h] BYREF
    struct _PRIVILEGE_SET PrivilegeSet; // [rsp+90h] [rbp+37h] BYREF

    AccessMask[0] = 0x80000000;
    if (**filePath == 0)
        return false;
    opaqueValue2 = false;
    pSecurityDescriptor = nullptr;
    utf16Characters3 = (LPCWSTR*)juceStringGetUtf16View (stackStorage12, filePath);
    if (GetNamedSecurityInfoW (*utf16Characters3, SE_FILE_OBJECT, 7u, nullptr, nullptr, nullptr, nullptr, &pSecurityDescriptor) == 0)
    {
        TokenHandle = nullptr;
        CurrentProcess = GetCurrentProcess();
        if (OpenProcessToken (CurrentProcess, 0x2000Eu, &TokenHandle))
        {
            DuplicateTokenHandle = nullptr;
            if (!DuplicateToken (TokenHandle, SecurityImpersonation, &DuplicateTokenHandle))
                goto label9;
            GenericMapping.GenericRead = 1179785;
            GenericMapping.GenericWrite = 1179926;
            GenericMapping.GenericExecute = 1179808;
            GenericMapping.GenericAll = 2032127;
            MapGenericMask (AccessMask, &GenericMapping);
            GrantedAccess = 0;
            AccessStatus = false;
            PrivilegeSetLength = 20;
            if (AccessCheck (
                    pSecurityDescriptor,
                    DuplicateTokenHandle,
                    AccessMask[0],
                    &GenericMapping,
                    &PrivilegeSet,
                    &PrivilegeSetLength,
                    &GrantedAccess,
                    &AccessStatus))
            {
                opaqueValue2 = AccessStatus;
            }
            else
            {
            label9:
                opaqueValue2 = false;
            }
            if (DuplicateTokenHandle != (HANDLE)-1LL)
                CloseHandle (DuplicateTokenHandle);
        }
        else
        {
            opaqueValue2 = false;
        }
        if (TokenHandle != (HANDLE)-1LL)
            CloseHandle (TokenHandle);
    }
    if (pSecurityDescriptor != nullptr)
        LocalFree (pSecurityDescriptor);
    return opaqueValue2;
}
