#include <cstdint>

// ===== EditorState_SetAuthVisible @ 0x1801c8860 size=332 =====
char juceComponentSetVisible (std::int64_t component, std::uint8_t shouldBeVisible)
{
    std::uint64_t* temporaryPointer4; // rax
    std::int64_t opaqueValue5; // r8
    std::int64_t opaqueValue6; // rdx
    std::int64_t opaqueValue7; // rcx
    std::int64_t opaqueValue8; // rbx
    std::int64_t opaqueValue10; // [rsp+20h] [rbp-18h] BYREF
    int opaqueValue11; // [rsp+28h] [rbp-10h]
    int opaqueValue12; // [rsp+2Ch] [rbp-Ch]
    std::int64_t opaqueValue13; // [rsp+40h] [rbp+8h] BYREF

    LOBYTE (temporaryPointer4) = (*(std::uint8_t*)(component + 168) & 2) != 0;
    if ((std::uint8_t)temporaryPointer4 == shouldBeVisible)
        return (char)temporaryPointer4;
    sub_180024A10 (&opaqueValue13, component);
    *(std::uint8_t*)(component + 168) &= ~2u;
    *(std::uint8_t*)(component + 168) |= 2 * shouldBeVisible;
    if (shouldBeVisible != 0)
    {
        opaqueValue10 = 0;
        opaqueValue11 = *(std::uint32_t*)(component + 64);
        opaqueValue12 = *(std::uint32_t*)(component + 68);
        LOBYTE (opaqueValue5) = 1;
        sub_1801CB730 (component, &opaqueValue10, opaqueValue5);
        LOBYTE (temporaryPointer4) = sub_1801CF7E0 (component);
        goto label12;
    }
    sub_1801CB4F0 (component);
    sub_1801CF7E0 (component);
    sub_1801A56A0 (component);
    temporaryPointer4 = (std::uint64_t*)focusedJuceComponent;
    if (focusedJuceComponent == component)
    {
    label9:
        opaqueValue7 = *(std::uint64_t*)(component + 48);
        if (opaqueValue7 != 0)
            sub_1801D0090 (opaqueValue7);
        LOBYTE (opaqueValue6) = 1;
        LOBYTE (temporaryPointer4) = sub_1801D01B0 (component, opaqueValue6);
        goto label12;
    }
    if (focusedJuceComponent != 0)
    {
        do
        {
            temporaryPointer4 = (std::uint64_t*)temporaryPointer4[6];
            if (temporaryPointer4 == (std::uint64_t*)component)
                goto label9;
        } while (temporaryPointer4 != nullptr);
    }
label12:
    opaqueValue8 = opaqueValue13;
    if (opaqueValue13 != 0 && *(std::uint64_t*)(opaqueValue13 + 16) != 0)
    {
        LOBYTE (temporaryPointer4) = sub_1801C89B0 (component);
        if (*(std::uint64_t*)(opaqueValue8 + 16) != 0 && (*(std::uint8_t*)(component + 168) & 1) != 0)
        {
            temporaryPointer4 = (std::uint64_t*)sub_1801C90A0 (component);
            if (temporaryPointer4 != nullptr)
            {
                (*(void (**) (std::uint64_t*, std::uint64_t)) (*temporaryPointer4 + 24LL)) (temporaryPointer4, shouldBeVisible);
                LOBYTE (temporaryPointer4) = sub_1801CABA0 (component);
            }
        }
    }
    if (opaqueValue8 != 0)
    {
        LODWORD (temporaryPointer4) = _InterlockedExchangeAdd ((volatile std::int32_t*)(opaqueValue8 + 8), 0xFFFFFFFF);
        if ((std::uint32_t)temporaryPointer4 == 1)
            LOBYTE (temporaryPointer4) = (**(char (***) (std::int64_t, std::int64_t))opaqueValue8) (opaqueValue8, 1);
    }
    return (char)temporaryPointer4;
}

// ===== EditorState_SetAuthVisible2 @ 0x1801c9200 size=335 =====
void juceComponentBringToFront (std::int64_t component, std::uint8_t shouldTakeFocus)
{
    std::int64_t opaqueValue4; // rax
    std::int64_t opaqueValue5; // rax
    std::int64_t opaqueValue6; // r11
    std::int64_t opaqueValue7; // r9
    std::int64_t opaqueValue8; // rdx
    std::uint64_t* temporaryPointer9; // r10
    std::uint64_t* temporaryPointer10; // rax
    std::uint64_t* temporaryPointer11; // rcx
    std::int64_t opaqueValue12; // rax
    std::int64_t opaqueValue13; // r8
    std::int64_t opaqueValue14; // r9
    std::uint64_t* temporaryPointer15; // r10

    if ((*(std::uint8_t*)(component + 168) & 1) != 0)
    {
        opaqueValue4 = sub_1801D7BE0 (component);
        if (opaqueValue4 == 0)
            return;
        (*(void (**) (std::int64_t, std::uint64_t)) (*(std::uint64_t*)opaqueValue4 + 224LL)) (opaqueValue4, shouldTakeFocus);
        if (shouldTakeFocus == 0)
            return;
        opaqueValue5 = focusedJuceComponent;
        if (focusedJuceComponent == component)
            return;
        if (focusedJuceComponent != 0)
        {
            while (1)
            {
                opaqueValue5 = *(std::uint64_t*)(opaqueValue5 + 48);
                if (opaqueValue5 == component)
                    break;
                if (opaqueValue5 == 0)
                {
                    sub_1801D0090 (component);
                    return;
                }
            }
            return;
        }
    label27:
        sub_1801D0090 (component);
        return;
    }
    opaqueValue6 = *(std::uint64_t*)(component + 48);
    if (opaqueValue6 != 0)
    {
        opaqueValue7 = *(int*)(opaqueValue6 + 84);
        if ((int)opaqueValue7 <= 0)
            opaqueValue8 = 0;
        else
            opaqueValue8 = *(std::uint64_t*)(*(std::uint64_t*)(opaqueValue6 + 72) + 8 * opaqueValue7 - 8);
        if (opaqueValue8 != component)
        {
            temporaryPointer9 = *(std::uint64_t**)(opaqueValue6 + 72);
            temporaryPointer10 = temporaryPointer9;
            temporaryPointer11 = &temporaryPointer9[opaqueValue7];
            if (temporaryPointer9 != temporaryPointer11)
            {
                while (component != *temporaryPointer10)
                {
                    if (++temporaryPointer10 == temporaryPointer11)
                        goto label25;
                }
                opaqueValue12 = temporaryPointer10 - temporaryPointer9;
                if ((int)opaqueValue12 >= 0)
                {
                    opaqueValue13 = 0xFFFFFFFFLL;
                    if ((*(std::uint8_t*)(component + 169) & 8) == 0)
                    {
                        opaqueValue13 = (unsigned int)(opaqueValue7 - 1);
                        if ((int)opaqueValue7 - 1 > 0)
                        {
                            opaqueValue14 = (int)opaqueValue13;
                            temporaryPointer15 = &temporaryPointer9[(int)opaqueValue13];
                            do
                            {
                                if ((*(std::uint8_t*)(*temporaryPointer15 + 169LL) & 8) == 0)
                                    break;
                                opaqueValue13 = (unsigned int)(opaqueValue13 - 1);
                                --opaqueValue14;
                                --temporaryPointer15;
                            } while (opaqueValue14 > 0);
                        }
                    }
                    sub_1801C9190 (opaqueValue6, (unsigned int)opaqueValue12, opaqueValue13);
                }
            }
        }
    label25:
        if (shouldTakeFocus != 0)
        {
            sub_1801CF890 (component);
            if ((std::uint8_t)sub_1801C8A60 (component) != 0)
                goto label27;
        }
    }
}
