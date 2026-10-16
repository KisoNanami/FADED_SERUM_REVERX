#include <cstdint>

// ===== MuteDrain_AllNotesOff @ 0x180367760 size=32618 =====
// POST /api/v1/device/register
std::int64_t authNetworkRegisterDevice (std::int64_t* authManager)
{
    int opaqueValue2; // r15d
    unsigned int opaqueValue3; // r14d
    int opaqueValue4; // ebx
    std::int64_t opaqueValue5; // rsi
    std::int64_t opaqueValue6; // rax
    std::int64_t opaqueValue7; // rax
    std::int64_t opaqueValue8; // rax
    std::int64_t opaqueValue9; // rax
    std::int64_t opaqueValue10; // rax
    std::int64_t opaqueValue11; // rax
    std::int64_t opaqueValue12; // rax
    std::int64_t opaqueValue13; // rax
    std::int64_t opaqueValue14; // rax
    std::int64_t opaqueValue15; // rax
    std::int64_t opaqueValue16; // rbx
    std::int64_t opaqueValue17; // rbx
    std::int64_t opaqueValue18; // rbx
    std::int64_t opaqueValue19; // rax
    std::int64_t opaqueValue20; // rax
    std::int64_t opaqueValue21; // rax
    int opaqueValue22; // eax
    std::int64_t opaqueValue23; // rax
    std::int64_t opaqueValue24; // rax
    std::int64_t opaqueValue25; // rax
    std::int64_t opaqueValue26; // rbx
    std::int64_t opaqueValue27; // rax
    std::int64_t opaqueValue28; // rax
    std::int64_t opaqueValue29; // rax
    std::int64_t opaqueValue30; // rax
    std::int64_t opaqueValue31; // rax
    std::int64_t opaqueValue32; // rax
    std::int64_t opaqueValue33; // rax
    std::int64_t opaqueValue34; // rax
    std::int64_t opaqueValue35; // rax
    std::int64_t prefixedString36; // rax
    std::int64_t opaqueValue37; // rax
    std::int64_t opaqueValue38; // rax
    std::int64_t opaqueValue39; // rax
    std::int64_t opaqueValue40; // rax
    unsigned int opaqueValue41; // esi
    std::int64_t opaqueValue42; // rbx
    std::int64_t opaqueValue43; // rax
    std::int64_t opaqueValue44; // rax
    std::int64_t opaqueValue45; // rax
    std::int64_t opaqueValue46; // rax
    std::int64_t opaqueValue47; // rax
    std::int64_t opaqueValue48; // rbx
    std::int64_t opaqueValue49; // rax
    std::int64_t opaqueValue50; // rax
    std::int64_t opaqueValue51; // rax
    std::int64_t opaqueValue52; // rax
    std::int64_t opaqueValue53; // rax
    std::int64_t opaqueValue54; // rbx
    std::int64_t opaqueValue55; // rax
    std::int64_t opaqueValue56; // rax
    std::int64_t opaqueValue57; // rax
    std::int64_t opaqueValue58; // rax
    std::int64_t opaqueValue59; // rax
    std::int64_t opaqueValue60; // rax
    std::int64_t opaqueValue61; // rax
    std::int64_t opaqueValue62; // rax
    std::int64_t opaqueValue63; // rax
    std::int64_t opaqueValue64; // r12
    std::int64_t opaqueValue65; // rbx
    std::int64_t opaqueValue66; // rbx
    char opaqueValue67; // r13
    std::int64_t opaqueValue68; // rax
    std::int64_t opaqueValue69; // rax
    std::int64_t opaqueValue70; // rbx
    std::int64_t opaqueValue71; // rax
    std::int64_t prefixedString72; // rax
    std::int64_t opaqueValue73; // rax
    std::int64_t opaqueValue74; // rax
    std::int64_t opaqueValue75; // rax
    int opaqueValue76; // eax
    std::int64_t opaqueValue77; // rax
    std::int64_t opaqueValue78; // rax
    std::int64_t opaqueValue79; // rax
    std::int64_t opaqueValue80; // rax
    std::int64_t opaqueValue81; // rax
    std::int64_t opaqueValue82; // rax
    char opaqueValue83; // bl
    char opaqueValue84; // al
    std::int64_t opaqueValue85; // rax
    std::int64_t opaqueValue86; // rax
    std::int64_t opaqueValue87; // rbx
    std::int64_t opaqueValue88; // rax
    std::int64_t opaqueValue89; // rax
    std::int64_t opaqueValue90; // rax
    std::int64_t opaqueValue91; // rsi
    std::int64_t opaqueValue92; // rax
    std::int64_t opaqueValue93; // rax
    std::int64_t opaqueValue94; // rax
    char opaqueValue95; // bl
    char opaqueValue96; // al
    std::int64_t opaqueValue97; // rax
    std::int64_t opaqueValue98; // rax
    std::int64_t opaqueValue99; // rbx
    std::int64_t opaqueValue100; // rax
    std::int64_t opaqueValue101; // rax
    std::int64_t opaqueValue102; // rax
    bool conditionFlag103; // bl
    std::int64_t opaqueValue104; // rax
    std::int64_t opaqueValue105; // rax
    std::int64_t opaqueValue106; // rax
    std::int64_t opaqueValue107; // rax
    char opaqueValue108; // bl
    std::int64_t opaqueValue109; // rdx
    char opaqueValue110; // r13
    char opaqueValue111; // r12
    char opaqueValue112; // si
    char opaqueValue113; // r14
    char opaqueValue114; // bl
    std::int64_t opaqueValue115; // rax
    std::int64_t opaqueValue116; // rax
    std::int64_t opaqueValue117; // rax
    std::int64_t opaqueValue118; // rax
    char opaqueValue119; // si
    std::int64_t opaqueValue120; // rax
    std::int64_t opaqueValue121; // rax
    std::int64_t opaqueValue122; // rax
    std::int64_t opaqueValue123; // rax
    std::int64_t opaqueValue124; // rbx
    std::int64_t opaqueValue125; // rax
    std::int64_t opaqueValue126; // rax
    std::int64_t opaqueValue127; // rax
    std::int64_t opaqueValue128; // rax
    std::int64_t opaqueValue129; // rax
    std::int64_t opaqueValue130; // rax
    std::int64_t opaqueValue131; // rbx
    std::int64_t opaqueValue132; // rbx
    std::int64_t opaqueValue133; // rax
    std::int64_t opaqueValue134; // rax
    std::int64_t opaqueValue135; // rax
    std::int64_t opaqueValue136; // rax
    std::int64_t opaqueValue137; // rax
    std::int64_t opaqueValue138; // rax
    std::int64_t opaqueValue139; // rbx
    char opaqueValue140; // bl
    std::int64_t opaqueValue141; // rax
    std::int64_t opaqueValue142; // rax
    std::int64_t opaqueValue143; // rax
    std::int64_t opaqueValue144; // rbx
    std::int64_t opaqueValue145; // rax
    std::uint8_t* temporaryPointer146; // rcx
    std::int64_t opaqueValue147; // rax
    std::int64_t opaqueValue148; // rbx
    std::int64_t opaqueValue149; // rax
    std::int64_t opaqueValue150; // rbx
    std::int64_t opaqueValue151; // rax
    std::int64_t opaqueValue152; // rax
    std::int64_t opaqueValue153; // rax
    std::int64_t opaqueValue154; // rax
    char opaqueValue155; // r14
    std::int64_t opaqueValue156; // rax
    std::int64_t opaqueValue157; // rax
    std::int64_t opaqueValue158; // rax
    std::int64_t opaqueValue159; // rax
    std::int64_t opaqueValue160; // rax
    std::int64_t opaqueValue161; // rax
    std::int64_t opaqueValue162; // rbx
    std::int64_t opaqueValue163; // rax
    std::int64_t opaqueValue164; // rax
    std::int64_t opaqueValue165; // rax
    std::int64_t opaqueValue166; // rbx
    std::int64_t opaqueValue167; // rax
    std::int64_t opaqueValue168; // rbx
    std::int64_t opaqueValue169; // rbx
    std::int64_t opaqueValue170; // rax
    std::int64_t opaqueValue171; // rax
    std::int64_t opaqueValue172; // rbx
    std::int64_t opaqueValue173; // rax
    std::int64_t opaqueValue174; // rax
    std::int64_t opaqueValue175; // rbx
    std::int64_t opaqueValue176; // rax
    std::int64_t opaqueValue177; // rax
    std::int64_t opaqueValue178; // rbx
    std::int64_t opaqueValue179; // rax
    std::int64_t opaqueValue180; // rbx
    std::int64_t opaqueValue181; // rbx
    std::int64_t opaqueValue182; // rax
    std::int64_t opaqueValue183; // rbx
    std::int64_t opaqueValue184; // rax
    std::int64_t opaqueValue185; // rax
    std::int64_t opaqueValue186; // rax
    std::int64_t opaqueValue187; // rbx
    std::int64_t opaqueValue188; // rax
    std::int64_t opaqueValue189; // rax
    int opaqueValue190; // ebx
    std::int64_t opaqueValue191; // rax
    int opaqueValue192; // ebx
    std::int64_t opaqueValue193; // rax
    std::int64_t opaqueValue194; // rax
    std::int64_t opaqueValue195; // rax
    std::int64_t opaqueValue196; // rax
    std::int64_t opaqueValue197; // rax
    std::int64_t opaqueValue198; // rax
    std::int64_t opaqueValue199; // rax
    std::int64_t opaqueValue200; // rbx
    std::int64_t opaqueValue201; // rax
    std::int64_t opaqueValue202; // rax
    std::int64_t opaqueValue203; // rax
    std::int64_t opaqueValue204; // rax
    std::int64_t opaqueValue205; // rax
    std::int64_t opaqueValue206; // rbx
    std::int64_t opaqueValue207; // rax
    char opaqueValue208; // r12
    char opaqueValue209; // r14
    char opaqueValue210; // si
    char opaqueValue211; // bl
    std::int64_t opaqueValue212; // rax
    std::int64_t opaqueValue213; // rax
    std::int64_t opaqueValue214; // rax
    std::int64_t opaqueValue215; // rax
    char opaqueValue216; // al
    std::int64_t opaqueValue217; // rax
    std::int64_t opaqueValue218; // rax
    std::int64_t opaqueValue219; // rbx
    std::int64_t opaqueValue220; // rax
    std::int64_t opaqueValue221; // rax
    std::int64_t opaqueValue222; // r13
    std::int64_t opaqueValue223; // rsi
    std::uint8_t* temporaryPointer224; // rax
    std::int64_t unixTimeMs225; // rbx
    std::int64_t opaqueValue226; // rax
    std::int64_t opaqueValue227; // rbx
    struct _RTL_CRITICAL_SECTION* criticalSection228; // rsi
    char opaqueValue229; // r12
    std::int64_t opaqueValue230; // rax
    std::int64_t opaqueValue231; // rax
    bool conditionFlag232; // r14
    std::int64_t opaqueValue233; // rax
    std::int64_t opaqueValue234; // rsi
    std::int64_t opaqueValue235; // rax
    std::int64_t opaqueValue236; // rax
    std::int64_t opaqueValue237; // rax
    std::int64_t opaqueValue238; // rsi
    std::int64_t opaqueValue239; // rax
    std::int64_t opaqueValue240; // rsi
    std::int64_t opaqueValue241; // rax
    std::int64_t opaqueValue242; // rax
    std::int64_t opaqueValue243; // rax
    std::uint8_t* temporaryPointer244; // rcx
    std::int64_t opaqueValue245; // rax
    std::int64_t opaqueValue246; // rax
    std::int64_t result; // rax
    std::int64_t opaqueValue248; // rax
    std::int64_t opaqueValue249; // rax
    char opaqueValue250; // bl
    std::int64_t opaqueValue251; // rax
    std::int64_t opaqueValue252; // rbx
    std::int64_t opaqueValue253; // r9
    std::int64_t opaqueValue254; // rax
    std::int64_t opaqueValue255; // rax
    std::int64_t opaqueValue256; // rax
    std::int64_t opaqueValue257; // rax
    std::int64_t opaqueValue258; // rax
    std::int64_t opaqueValue259; // rax
    std::int64_t opaqueValue260; // rax
    std::int64_t opaqueValue261; // rax
    std::int64_t opaqueValue262; // rax
    std::int64_t opaqueValue263; // rax
    std::int64_t opaqueValue264; // rax
    std::int64_t opaqueValue265; // rax
    std::int64_t opaqueValue266; // rax
    std::int64_t opaqueValue267; // rsi
    std::int64_t opaqueValue268; // rbx
    std::int64_t opaqueValue269; // rax
    std::int64_t opaqueValue270; // rax
    std::int64_t opaqueValue271; // rax
    std::int64_t opaqueValue272; // rax
    char opaqueValue273; // bl
    std::int64_t opaqueValue274; // rax
    std::int64_t opaqueValue275; // rax
    std::int64_t opaqueValue276; // rax
    std::int64_t opaqueValue277; // rax
    std::int64_t unixTimeMs278; // rax
    char opaqueValue279; // si
    std::int64_t opaqueValue280; // rax
    std::int64_t opaqueValue281; // rax
    std::int64_t opaqueValue282; // rbx
    std::int64_t opaqueValue283; // rax
    std::int64_t opaqueValue284; // rax
    std::int64_t opaqueValue285; // rax
    std::int64_t opaqueValue286; // rax
    std::int64_t opaqueValue287; // rax
    std::int64_t opaqueValue288; // rax
    std::int64_t opaqueValue289; // rax
    std::int64_t opaqueValue290; // rax
    std::int64_t opaqueValue291; // rax
    std::int64_t opaqueValue292; // rax
    std::int64_t opaqueValue293; // rax
    std::int64_t opaqueValue294; // rax
    std::int64_t opaqueValue295; // rax
    std::int64_t opaqueValue296; // rax
    std::int64_t opaqueValue297; // rax
    std::int64_t opaqueValue298; // rax
    std::int64_t opaqueValue299; // rax
    std::int64_t opaqueValue300; // rax
    std::int64_t opaqueValue301; // rax
    std::int64_t opaqueValue302; // rax
    std::int64_t opaqueValue303; // rax
    std::int64_t opaqueValue304; // rsi
    std::int64_t opaqueValue305; // rbx
    std::int64_t opaqueValue306; // rax
    std::int64_t opaqueValue307; // rax
    std::int64_t opaqueValue308; // rax
    std::int64_t opaqueValue309; // rax
    std::int64_t opaqueValue310; // rax
    std::int64_t opaqueValue311; // rax
    bool conditionFlag312; // si
    std::int64_t opaqueValue313; // rbx
    std::int64_t opaqueValue314; // rax
    std::int64_t opaqueValue315; // rax
    std::int64_t opaqueValue316; // rax
    std::int64_t opaqueValue317; // rax
    std::int64_t opaqueValue318; // rbx
    std::int64_t opaqueValue319; // rbx
    std::int64_t opaqueValue320; // rbx
    std::int64_t opaqueValue321; // rbx
    std::int64_t opaqueValue322; // rax
    std::int64_t opaqueValue323; // rax
    std::int64_t opaqueValue324; // rax
    std::int64_t opaqueValue325; // rax
    std::int64_t opaqueValue326; // rax
    std::int64_t opaqueValue327; // rax
    std::int64_t opaqueValue328; // rax
    std::int64_t prefixedString329; // rax
    std::int64_t prefixedString330; // rbx
    int opaqueValue331; // eax
    std::int64_t opaqueValue332; // rax
    std::int64_t opaqueValue333; // rax
    std::int64_t opaqueValue334; // rbx
    int opaqueValue335; // eax
    int opaqueValue336; // eax
    char opaqueValue337; // bl
    int opaqueValue338; // esi
    int opaqueValue339; // r14d
    int opaqueValue340; // eax
    int opaqueValue341; // eax
    std::int64_t opaqueValue342; // rax
    char opaqueValue343; // r12
    char opaqueValue344; // r13
    std::int64_t opaqueValue345; // rax
    std::int64_t opaqueValue346; // rax
    std::int64_t opaqueValue347; // rax
    std::int64_t opaqueValue348; // rax
    std::int64_t opaqueValue349; // rax
    std::int64_t opaqueValue350; // rax
    std::int64_t opaqueValue351; // r14
    std::int64_t opaqueValue352; // rax
    std::int64_t opaqueValue353; // rax
    std::int64_t opaqueValue354; // rsi
    std::int64_t opaqueValue355; // rax
    std::int64_t opaqueValue356; // rbx
    std::int64_t opaqueValue357; // rax
    std::int64_t opaqueValue358; // rax
    std::int64_t opaqueValue359; // rax
    std::int64_t opaqueValue360; // rax
    std::int64_t opaqueValue361; // rax
    std::int64_t opaqueValue362; // rax
    std::int64_t opaqueValue363; // rax
    char opaqueValue364; // r8
    int opaqueValue365; // eax
    int opaqueValue366; // eax
    std::int64_t opaqueValue367; // rax
    std::int64_t opaqueValue368; // rax
    std::int64_t trimmedString369; // rax
    int opaqueValue370; // r15d
    const char* temporaryPointer371; // rdx
    std::int64_t opaqueValue372; // rax
    std::int64_t opaqueValue373; // rax
    char opaqueValue374; // al
    char opaqueValue375; // r12
    std::int64_t opaqueValue376; // rax
    std::int64_t opaqueValue377; // rax
    std::int64_t opaqueValue378; // rax
    std::int64_t opaqueValue379; // rax
    std::int64_t opaqueValue380; // rax
    std::int64_t opaqueValue381; // rax
    char opaqueValue382; // bl
    std::int64_t opaqueValue383; // rsi
    std::int64_t opaqueValue384; // rbx
    int opaqueValue385; // eax
    std::int64_t opaqueValue386; // r8
    std::int64_t opaqueValue387; // rax
    std::int64_t opaqueValue388; // rax
    std::int64_t opaqueValue389; // rax
    std::int64_t opaqueValue390; // rax
    std::int64_t opaqueValue391; // rax
    bool conditionFlag392; // r12
    std::int64_t opaqueValue393; // rax
    std::int64_t opaqueValue394; // r14
    std::int64_t opaqueValue395; // rax
    std::int64_t opaqueValue396; // rax
    std::int64_t opaqueValue397; // rsi
    std::int64_t opaqueValue398; // rax
    std::int64_t opaqueValue399; // rbx
    std::int64_t opaqueValue400; // rax
    std::int64_t opaqueValue401; // rax
    std::int64_t opaqueValue402; // rax
    std::int64_t opaqueValue403; // rax
    std::int64_t opaqueValue404; // rax
    std::int64_t opaqueValue405; // rbx
    std::int64_t opaqueValue406; // rax
    std::int64_t opaqueValue407; // rax
    std::int64_t opaqueValue408; // rax
    std::int16_t* temporaryPointer409; // rcx
    std::uint8_t* temporaryPointer410; // rcx
    std::int64_t opaqueValue411; // rax
    std::int64_t opaqueValue412; // rax
    std::int64_t opaqueValue413; // rax
    bool conditionFlag414; // r12
    std::int64_t opaqueValue415; // rax
    std::int64_t opaqueValue416; // r14
    std::int64_t opaqueValue417; // rax
    std::int64_t opaqueValue418; // rax
    std::int64_t opaqueValue419; // rsi
    std::int64_t opaqueValue420; // rax
    std::int64_t opaqueValue421; // rbx
    std::int64_t opaqueValue422; // rax
    std::int64_t opaqueValue423; // rax
    std::int64_t opaqueValue424; // rax
    std::int64_t opaqueValue425; // rax
    std::int64_t opaqueValue426; // rax
    std::int64_t opaqueValue427; // rbx
    std::int64_t opaqueValue428; // rax
    std::int64_t opaqueValue429; // rax
    std::int64_t opaqueValue430; // rax
    std::int16_t* temporaryPointer431; // rcx
    std::int64_t opaqueValue432; // rax
    std::int64_t opaqueValue433; // rax
    std::int64_t opaqueValue434; // rax
    bool conditionFlag435; // si
    std::int64_t opaqueValue436; // rbx
    std::int64_t opaqueValue437; // rax
    std::int64_t opaqueValue438; // rax
    std::int64_t opaqueValue439; // rax
    bool conditionFlag440; // bl
    std::int64_t opaqueValue441; // rax
    std::int64_t opaqueValue442; // rax
    std::int64_t opaqueValue443; // rax
    bool conditionFlag444; // si
    std::int64_t opaqueValue445; // r8
    std::int64_t opaqueValue446; // rax
    std::int64_t opaqueValue447; // rax
    char opaqueValue448; // bl
    std::int64_t opaqueValue449; // rax
    std::int64_t opaqueValue450; // rax
    std::int64_t opaqueValue451; // rax
    bool conditionFlag452; // si
    std::int64_t opaqueValue453; // rax
    std::int64_t opaqueValue454; // rax
    std::int64_t opaqueValue455; // rax
    std::int64_t opaqueValue456; // rax
    bool conditionFlag457; // si
    std::int64_t opaqueValue458; // rbx
    std::int64_t opaqueValue459; // rax
    std::int64_t opaqueValue460; // rax
    std::int64_t opaqueValue461; // rax
    std::int64_t opaqueValue462; // rax
    std::int64_t opaqueValue463; // rax
    std::int64_t opaqueValue464; // rsi
    std::int64_t opaqueValue465; // rbx
    int opaqueValue466; // eax
    std::int64_t opaqueValue467; // rax
    std::int64_t opaqueValue468; // rax
    std::int64_t opaqueValue469; // rax
    std::int64_t opaqueValue470; // rax
    std::int64_t opaqueValue471; // rax
    std::int64_t opaqueValue472; // rax
    bool conditionFlag473; // bl
    std::int64_t opaqueValue474; // rax
    std::int64_t opaqueValue475; // rax
    std::uint8_t* temporaryPointer476; // rax
    std::int16_t* temporaryPointer477; // rcx
    std::int64_t opaqueValue478; // rax
    std::int64_t opaqueValue479; // rax
    std::int64_t opaqueValue480; // rax
    std::int16_t* temporaryPointer481; // rcx
    std::int64_t unixTimeMs482; // r13
    std::int64_t opaqueValue483; // rax
    std::int64_t opaqueValue484; // rax
    std::int64_t opaqueValue485; // rax
    std::int64_t opaqueValue486; // rax
    char opaqueValue487; // bl
    char opaqueValue488; // si
    std::int64_t opaqueValue489; // rax
    std::int64_t opaqueValue490; // rax
    std::int64_t opaqueValue491; // rax
    bool conditionFlag492; // r14
    std::uint8_t* temporaryPointer493; // rax
    std::int64_t opaqueValue494; // rax
    std::int64_t opaqueValue495; // rax
    std::int64_t opaqueValue496; // rax
    std::int64_t opaqueValue497; // rax
    std::int64_t opaqueValue498; // rax
    std::int64_t opaqueValue499; // rax
    std::int64_t opaqueValue500; // rax
    bool conditionFlag501; // bl
    std::int64_t opaqueValue502; // rax
    std::int64_t opaqueValue503; // rax
    std::int64_t opaqueValue504; // rax
    bool conditionFlag505; // si
    std::int64_t opaqueValue506; // rax
    std::int64_t opaqueValue507; // rax
    std::int64_t opaqueValue508; // rax
    bool conditionFlag509; // si
    std::int64_t opaqueValue510; // rbx
    std::int64_t opaqueValue511; // rax
    std::int64_t opaqueValue512; // rax
    std::int64_t opaqueValue513; // rax
    std::int64_t opaqueValue514; // r8
    std::int64_t opaqueValue515; // rax
    std::int64_t opaqueValue516; // rax
    std::int64_t opaqueValue517; // rax
    bool conditionFlag518; // r12
    std::int64_t opaqueValue519; // rax
    std::int64_t opaqueValue520; // r14
    std::int64_t opaqueValue521; // rax
    std::int64_t opaqueValue522; // rax
    std::int64_t opaqueValue523; // rsi
    std::int64_t opaqueValue524; // rax
    std::int64_t opaqueValue525; // rbx
    std::int64_t opaqueValue526; // rax
    std::int64_t opaqueValue527; // rax
    std::int64_t opaqueValue528; // rax
    std::int64_t opaqueValue529; // rax
    std::int64_t opaqueValue530; // rax
    std::int64_t opaqueValue531; // rax
    std::int64_t opaqueValue532; // rax
    std::int64_t opaqueValue533; // rax
    std::int64_t opaqueValue534; // rax
    char opaqueValue535; // bl
    char opaqueValue536; // al
    std::int64_t opaqueValue537; // rax
    std::int64_t opaqueValue538; // rax
    std::int64_t opaqueValue539; // rax
    bool conditionFlag540; // r12
    std::int64_t opaqueValue541; // rax
    std::int64_t opaqueValue542; // r14
    std::int64_t opaqueValue543; // rax
    std::int64_t opaqueValue544; // rax
    std::int64_t opaqueValue545; // rsi
    std::int64_t opaqueValue546; // rax
    std::int64_t opaqueValue547; // rbx
    std::int64_t opaqueValue548; // rax
    std::int64_t opaqueValue549; // rax
    std::int64_t opaqueValue550; // rax
    std::int64_t opaqueValue551; // rax
    std::int64_t opaqueValue552; // rax
    std::int64_t opaqueValue553; // rbx
    std::int64_t opaqueValue554; // rax
    std::int64_t opaqueValue555; // rax
    std::int64_t opaqueValue556; // rax
    char opaqueValue557; // si
    std::int64_t opaqueValue558; // rax
    std::int64_t opaqueValue559; // rax
    std::int64_t opaqueValue560; // rax
    bool conditionFlag561; // r14
    std::int64_t opaqueValue562; // rax
    std::int64_t opaqueValue563; // rax
    std::int64_t opaqueValue564; // rbx
    std::int64_t opaqueValue565; // rax
    std::int64_t opaqueValue566; // rax
    std::int64_t opaqueValue567; // rax
    std::int64_t opaqueValue568; // rbx
    std::int64_t opaqueValue569; // rax
    std::int64_t opaqueValue570; // rax
    std::int64_t opaqueValue571; // rax
    std::uint8_t* temporaryPointer572; // rcx
    char opaqueValue573; // si
    std::int64_t opaqueValue574; // rax
    std::int64_t opaqueValue575; // rax
    std::int64_t opaqueValue576; // rax
    bool conditionFlag577; // r14
    std::int64_t opaqueValue578; // rax
    std::int64_t opaqueValue579; // rax
    std::int64_t opaqueValue580; // rax
    std::int64_t opaqueValue581; // rbx
    std::int64_t opaqueValue582; // rax
    std::int64_t opaqueValue583; // rax
    std::int64_t opaqueValue584; // rax
    std::int64_t opaqueValue585; // rax
    char opaqueValue586; // bl
    char opaqueValue587; // al
    std::int64_t opaqueValue588; // rax
    std::int64_t opaqueValue589; // rax
    std::int64_t opaqueValue590; // rax
    bool conditionFlag591; // si
    std::int64_t opaqueValue592; // rax
    bool conditionFlag593; // bl
    std::int64_t opaqueValue594; // rax
    std::int64_t opaqueValue595; // rax
    std::int64_t opaqueValue596; // rax
    std::int64_t opaqueValue597; // rbx
    int opaqueValue598; // r14d
    std::int64_t opaqueValue599; // rax
    std::int64_t opaqueValue600; // rax
    std::int64_t opaqueValue601; // rax
    const char* temporaryPointer602; // rdx
    std::int64_t opaqueValue603; // rax
    std::int64_t opaqueValue604; // rax
    int opaqueValue605; // r15d
    std::int64_t opaqueValue606; // rax
    std::int64_t opaqueValue607; // rax
    std::int64_t opaqueValue608; // rax
    LPCRITICAL_SECTION* p_lpCriticalSection; // rcx
    std::int64_t opaqueValue610; // rax
    int opaqueValue611; // [rsp+20h] [rbp-E0h]
    char opaqueValue612; // [rsp+34h] [rbp-CCh]
    bool conditionFlag613; // [rsp+34h] [rbp-CCh]
    char opaqueValue614; // [rsp+34h] [rbp-CCh]
    char opaqueValue615; // [rsp+35h] [rbp-CBh]
    std::uint8_t opaqueValue616; // [rsp+35h] [rbp-CBh]
    std::uint8_t stackStorage617[8]; // [rsp+38h] [rbp-C8h] BYREF
    std::uint8_t stackStorage618[8]; // [rsp+40h] [rbp-C0h] BYREF
    std::uint8_t stackStorage619[8]; // [rsp+48h] [rbp-B8h] BYREF
    std::uint8_t stackStorage620[8]; // [rsp+50h] [rbp-B0h] BYREF
    std::uint8_t stackStorage621[8]; // [rsp+58h] [rbp-A8h] BYREF
    std::uint8_t stackStorage622[8]; // [rsp+60h] [rbp-A0h] BYREF
    std::uint8_t stackStorage623[8]; // [rsp+68h] [rbp-98h] BYREF
    std::uint8_t stackStorage624[8]; // [rsp+70h] [rbp-90h] BYREF
    std::int64_t opaqueValue625; // [rsp+78h] [rbp-88h] BYREF
    std::uint8_t stackStorage626[8]; // [rsp+80h] [rbp-80h] BYREF
    std::uint8_t stackStorage627[8]; // [rsp+88h] [rbp-78h] BYREF
    std::uint8_t stackStorage628[8]; // [rsp+90h] [rbp-70h] BYREF
    std::uint8_t stackStorage629[16]; // [rsp+98h] [rbp-68h] BYREF
    std::uint8_t stackStorage630[8]; // [rsp+A8h] [rbp-58h] BYREF
    std::uint8_t stackStorage631[8]; // [rsp+B0h] [rbp-50h] BYREF
    std::uint8_t stackStorage632[8]; // [rsp+B8h] [rbp-48h] BYREF
    unsigned int opaqueValue633; // [rsp+C0h] [rbp-40h]
    std::int64_t opaqueValue634; // [rsp+C8h] [rbp-38h] BYREF
    std::uint8_t stackStorage635[8]; // [rsp+D0h] [rbp-30h] BYREF
    std::uint8_t stackStorage636[8]; // [rsp+D8h] [rbp-28h] BYREF
    std::uint8_t stackStorage637[8]; // [rsp+E0h] [rbp-20h] BYREF
    std::uint8_t stackStorage638[8]; // [rsp+E8h] [rbp-18h] BYREF
    unsigned int opaqueValue639; // [rsp+F0h] [rbp-10h] BYREF
    std::uint8_t stackStorage640[16]; // [rsp+F8h] [rbp-8h] BYREF
    std::uint8_t stackStorage641[8]; // [rsp+108h] [rbp+8h] BYREF
    std::uint8_t stackStorage642[8]; // [rsp+110h] [rbp+10h] BYREF
    std::uint8_t stackStorage643[8]; // [rsp+118h] [rbp+18h] BYREF
    std::uint8_t stackStorage644[8]; // [rsp+120h] [rbp+20h] BYREF
    std::uint8_t stackStorage645[8]; // [rsp+128h] [rbp+28h] BYREF
    std::uint8_t stackStorage646[8]; // [rsp+130h] [rbp+30h] BYREF
    std::uint8_t stackStorage647[16]; // [rsp+138h] [rbp+38h] BYREF
    std::uint8_t stackStorage648[8]; // [rsp+148h] [rbp+48h] BYREF
    LPCRITICAL_SECTION opaqueValue649; // [rsp+150h] [rbp+50h]
    std::uint8_t stackStorage650[8]; // [rsp+158h] [rbp+58h] BYREF
    std::uint8_t stackStorage651[8]; // [rsp+160h] [rbp+60h] BYREF
    std::uint8_t stackStorage652[8]; // [rsp+168h] [rbp+68h] BYREF
    std::uint8_t stackStorage653[8]; // [rsp+170h] [rbp+70h] BYREF
    std::uint8_t stackStorage654[8]; // [rsp+178h] [rbp+78h] BYREF
    int opaqueValue655; // [rsp+180h] [rbp+80h] BYREF
    std::uint8_t stackStorage656[16]; // [rsp+188h] [rbp+88h] BYREF
    std::uint8_t stackStorage657[8]; // [rsp+198h] [rbp+98h] BYREF
    std::int64_t opaqueValue658; // [rsp+1A0h] [rbp+A0h] BYREF
    std::uint8_t stackStorage659[8]; // [rsp+1A8h] [rbp+A8h] BYREF
    std::uint8_t stackStorage660[8]; // [rsp+1B0h] [rbp+B0h] BYREF
    LPCRITICAL_SECTION lpCriticalSection; // [rsp+1B8h] [rbp+B8h] BYREF
    std::uint64_t stackStorage662[2]; // [rsp+1C0h] [rbp+C0h] BYREF
    std::uint8_t stackStorage663[8]; // [rsp+1D0h] [rbp+D0h] BYREF
    std::uint8_t stackStorage664[16]; // [rsp+1D8h] [rbp+D8h] BYREF
    unsigned int opaqueValue665; // [rsp+1E8h] [rbp+E8h] BYREF
    std::uint8_t stackStorage666[16]; // [rsp+1F0h] [rbp+F0h] BYREF
    std::uint8_t stackStorage667[8]; // [rsp+200h] [rbp+100h] BYREF
    int opaqueValue668; // [rsp+208h] [rbp+108h] BYREF
    int opaqueValue669; // [rsp+20Ch] [rbp+10Ch] BYREF
    int opaqueValue670; // [rsp+210h] [rbp+110h] BYREF
    int opaqueValue671; // [rsp+214h] [rbp+114h] BYREF
    int opaqueValue672; // [rsp+218h] [rbp+118h] BYREF
    int opaqueValue673; // [rsp+21Ch] [rbp+11Ch] BYREF
    std::uint8_t stackStorage674[8]; // [rsp+220h] [rbp+120h] BYREF
    int opaqueValue675; // [rsp+228h] [rbp+128h] BYREF
    std::uint8_t stackStorage676[8]; // [rsp+230h] [rbp+130h] BYREF
    std::uint8_t stackStorage677[8]; // [rsp+238h] [rbp+138h] BYREF
    std::uint8_t stackStorage678[8]; // [rsp+240h] [rbp+140h] BYREF
    std::uint8_t stackStorage679[8]; // [rsp+248h] [rbp+148h] BYREF
    std::uint8_t stackStorage680[8]; // [rsp+250h] [rbp+150h] BYREF
    std::uint8_t stackStorage681[8]; // [rsp+258h] [rbp+158h] BYREF
    std::uint8_t stackStorage682[8]; // [rsp+260h] [rbp+160h] BYREF
    std::uint8_t stackStorage683[8]; // [rsp+268h] [rbp+168h] BYREF
    std::uint8_t stackStorage684[8]; // [rsp+270h] [rbp+170h] BYREF
    std::uint8_t stackStorage685[8]; // [rsp+278h] [rbp+178h] BYREF
    std::uint8_t stackStorage686[8]; // [rsp+280h] [rbp+180h] BYREF
    std::uint8_t stackStorage687[8]; // [rsp+288h] [rbp+188h] BYREF
    std::uint8_t stackStorage688[8]; // [rsp+290h] [rbp+190h] BYREF
    std::uint8_t stackStorage689[8]; // [rsp+298h] [rbp+198h] BYREF
    std::uint8_t stackStorage690[8]; // [rsp+2A0h] [rbp+1A0h] BYREF
    std::uint8_t stackStorage691[8]; // [rsp+2A8h] [rbp+1A8h] BYREF
    std::uint8_t stackStorage692[8]; // [rsp+2B0h] [rbp+1B0h] BYREF
    std::uint8_t stackStorage693[8]; // [rsp+2B8h] [rbp+1B8h] BYREF
    std::uint8_t stackStorage694[8]; // [rsp+2C0h] [rbp+1C0h] BYREF
    std::uint8_t stackStorage695[8]; // [rsp+2C8h] [rbp+1C8h] BYREF
    std::uint8_t stackStorage696[8]; // [rsp+2D0h] [rbp+1D0h] BYREF
    std::uint8_t stackStorage697[8]; // [rsp+2D8h] [rbp+1D8h] BYREF
    std::uint8_t stackStorage698[8]; // [rsp+2E0h] [rbp+1E0h] BYREF
    std::uint8_t stackStorage699[8]; // [rsp+2E8h] [rbp+1E8h] BYREF
    std::uint8_t stackStorage700[8]; // [rsp+2F0h] [rbp+1F0h] BYREF
    std::uint8_t stackStorage701[8]; // [rsp+2F8h] [rbp+1F8h] BYREF
    std::uint8_t stackStorage702[8]; // [rsp+300h] [rbp+200h] BYREF
    std::uint8_t stackStorage703[8]; // [rsp+308h] [rbp+208h] BYREF
    std::uint8_t stackStorage704[8]; // [rsp+310h] [rbp+210h] BYREF
    std::uint8_t stackStorage705[8]; // [rsp+318h] [rbp+218h] BYREF
    std::uint8_t stackStorage706[8]; // [rsp+320h] [rbp+220h] BYREF
    std::uint8_t stackStorage707[8]; // [rsp+328h] [rbp+228h] BYREF
    std::uint8_t stackStorage708[8]; // [rsp+330h] [rbp+230h] BYREF
    std::uint8_t stackStorage709[8]; // [rsp+338h] [rbp+238h] BYREF
    std::uint8_t stackStorage710[8]; // [rsp+340h] [rbp+240h] BYREF
    std::uint8_t stackStorage711[8]; // [rsp+348h] [rbp+248h] BYREF
    std::uint8_t stackStorage712[8]; // [rsp+350h] [rbp+250h] BYREF
    std::uint8_t stackStorage713[8]; // [rsp+358h] [rbp+258h] BYREF
    std::uint8_t stackStorage714[8]; // [rsp+360h] [rbp+260h] BYREF
    std::uint8_t stackStorage715[8]; // [rsp+368h] [rbp+268h] BYREF
    std::uint8_t stackStorage716[8]; // [rsp+370h] [rbp+270h] BYREF
    std::uint8_t stackStorage717[8]; // [rsp+378h] [rbp+278h] BYREF
    std::uint8_t stackStorage718[8]; // [rsp+380h] [rbp+280h] BYREF
    std::uint8_t stackStorage719[8]; // [rsp+388h] [rbp+288h] BYREF
    std::uint8_t stackStorage720[8]; // [rsp+390h] [rbp+290h] BYREF
    std::uint8_t stackStorage721[8]; // [rsp+398h] [rbp+298h] BYREF
    std::uint8_t stackStorage722[8]; // [rsp+3A0h] [rbp+2A0h] BYREF
    std::uint8_t stackStorage723[8]; // [rsp+3A8h] [rbp+2A8h] BYREF
    std::uint8_t stackStorage724[8]; // [rsp+3B0h] [rbp+2B0h] BYREF
    std::uint8_t stackStorage725[8]; // [rsp+3B8h] [rbp+2B8h] BYREF
    std::uint8_t stackStorage726[8]; // [rsp+3C0h] [rbp+2C0h] BYREF
    std::uint8_t stackStorage727[8]; // [rsp+3C8h] [rbp+2C8h] BYREF
    std::uint8_t stackStorage728[8]; // [rsp+3D0h] [rbp+2D0h] BYREF
    std::uint8_t stackStorage729[8]; // [rsp+3D8h] [rbp+2D8h] BYREF
    std::uint8_t stackStorage730[8]; // [rsp+3E0h] [rbp+2E0h] BYREF
    std::uint8_t stackStorage731[8]; // [rsp+3E8h] [rbp+2E8h] BYREF
    std::uint8_t stackStorage732[8]; // [rsp+3F0h] [rbp+2F0h] BYREF
    std::uint8_t stackStorage733[8]; // [rsp+3F8h] [rbp+2F8h] BYREF
    std::uint8_t stackStorage734[8]; // [rsp+400h] [rbp+300h] BYREF
    std::uint8_t stackStorage735[8]; // [rsp+408h] [rbp+308h] BYREF
    std::uint8_t stackStorage736[8]; // [rsp+410h] [rbp+310h] BYREF
    std::uint8_t stackStorage737[8]; // [rsp+418h] [rbp+318h] BYREF
    std::uint8_t stackStorage738[8]; // [rsp+420h] [rbp+320h] BYREF
    std::uint8_t stackStorage739[8]; // [rsp+428h] [rbp+328h] BYREF
    std::uint8_t stackStorage740[8]; // [rsp+430h] [rbp+330h] BYREF
    std::uint8_t stackStorage741[8]; // [rsp+438h] [rbp+338h] BYREF
    std::uint8_t stackStorage742[8]; // [rsp+440h] [rbp+340h] BYREF
    std::uint8_t stackStorage743[8]; // [rsp+448h] [rbp+348h] BYREF
    std::uint8_t stackStorage744[8]; // [rsp+450h] [rbp+350h] BYREF
    std::uint8_t stackStorage745[8]; // [rsp+458h] [rbp+358h] BYREF
    std::uint8_t stackStorage746[8]; // [rsp+460h] [rbp+360h] BYREF
    std::uint8_t stackStorage747[8]; // [rsp+468h] [rbp+368h] BYREF
    std::uint8_t stackStorage748[8]; // [rsp+470h] [rbp+370h] BYREF
    std::uint8_t stackStorage749[8]; // [rsp+478h] [rbp+378h] BYREF
    std::uint8_t stackStorage750[8]; // [rsp+480h] [rbp+380h] BYREF
    std::uint8_t stackStorage751[8]; // [rsp+488h] [rbp+388h] BYREF
    std::uint8_t stackStorage752[8]; // [rsp+490h] [rbp+390h] BYREF
    std::uint8_t stackStorage753[8]; // [rsp+498h] [rbp+398h] BYREF
    std::uint8_t stackStorage754[8]; // [rsp+4A0h] [rbp+3A0h] BYREF
    std::uint8_t stackStorage755[8]; // [rsp+4A8h] [rbp+3A8h] BYREF
    std::uint8_t stackStorage756[8]; // [rsp+4B0h] [rbp+3B0h] BYREF
    std::uint8_t stackStorage757[8]; // [rsp+4B8h] [rbp+3B8h] BYREF
    std::uint8_t stackStorage758[8]; // [rsp+4C0h] [rbp+3C0h] BYREF
    std::uint8_t stackStorage759[8]; // [rsp+4C8h] [rbp+3C8h] BYREF
    std::uint8_t stackStorage760[8]; // [rsp+4D0h] [rbp+3D0h] BYREF
    std::uint8_t stackStorage761[8]; // [rsp+4D8h] [rbp+3D8h] BYREF
    std::uint8_t stackStorage762[8]; // [rsp+4E0h] [rbp+3E0h] BYREF
    std::uint8_t stackStorage763[8]; // [rsp+4E8h] [rbp+3E8h] BYREF
    std::uint8_t stackStorage764[8]; // [rsp+4F0h] [rbp+3F0h] BYREF
    std::uint8_t stackStorage765[8]; // [rsp+4F8h] [rbp+3F8h] BYREF
    std::uint8_t stackStorage766[16]; // [rsp+500h] [rbp+400h] BYREF
    std::uint8_t stackStorage767[16]; // [rsp+510h] [rbp+410h] BYREF
    char opaqueValue768; // [rsp+520h] [rbp+420h] BYREF
    char opaqueValue769; // [rsp+521h] [rbp+421h]
    std::uint8_t stackStorage770[24]; // [rsp+528h] [rbp+428h] BYREF
    std::uint8_t stackStorage771[8]; // [rsp+540h] [rbp+440h] BYREF
    std::uint8_t stackStorage772[8]; // [rsp+548h] [rbp+448h] BYREF
    std::uint8_t stackStorage773[8]; // [rsp+550h] [rbp+450h] BYREF
    std::uint8_t stackStorage774[8]; // [rsp+558h] [rbp+458h] BYREF
    std::uint8_t stackStorage775[8]; // [rsp+560h] [rbp+460h] BYREF
    std::uint8_t stackStorage776[8]; // [rsp+568h] [rbp+468h] BYREF
    std::uint8_t stackStorage777[8]; // [rsp+570h] [rbp+470h] BYREF
    std::uint8_t stackStorage778[8]; // [rsp+578h] [rbp+478h] BYREF
    std::uint8_t stackStorage779[8]; // [rsp+580h] [rbp+480h] BYREF
    std::uint8_t stackStorage780[8]; // [rsp+588h] [rbp+488h] BYREF
    std::uint8_t stackStorage781[8]; // [rsp+590h] [rbp+490h] BYREF
    std::uint8_t stackStorage782[8]; // [rsp+598h] [rbp+498h] BYREF
    std::uint8_t stackStorage783[8]; // [rsp+5A0h] [rbp+4A0h] BYREF
    std::uint8_t stackStorage784[8]; // [rsp+5A8h] [rbp+4A8h] BYREF
    LPCRITICAL_SECTION opaqueValue785; // [rsp+5B0h] [rbp+4B0h] BYREF
    std::uint8_t stackStorage786[8]; // [rsp+5B8h] [rbp+4B8h] BYREF
    std::uint8_t stackStorage787[8]; // [rsp+5C0h] [rbp+4C0h] BYREF
    std::uint8_t stackStorage788[8]; // [rsp+5C8h] [rbp+4C8h] BYREF
    std::uint8_t stackStorage789[8]; // [rsp+5D0h] [rbp+4D0h] BYREF
    std::uint8_t stackStorage790[8]; // [rsp+5D8h] [rbp+4D8h] BYREF
    std::uint8_t stackStorage791[8]; // [rsp+5E0h] [rbp+4E0h] BYREF
    std::uint8_t stackStorage792[8]; // [rsp+5E8h] [rbp+4E8h] BYREF
    std::uint8_t stackStorage793[8]; // [rsp+5F0h] [rbp+4F0h] BYREF
    std::uint8_t stackStorage794[8]; // [rsp+5F8h] [rbp+4F8h] BYREF
    std::uint8_t stackStorage795[8]; // [rsp+600h] [rbp+500h] BYREF
    std::uint8_t stackStorage796[8]; // [rsp+608h] [rbp+508h] BYREF
    std::uint8_t stackStorage797[8]; // [rsp+610h] [rbp+510h] BYREF
    std::uint8_t stackStorage798[8]; // [rsp+618h] [rbp+518h] BYREF
    std::uint8_t stackStorage799[8]; // [rsp+620h] [rbp+520h] BYREF
    std::int64_t unixTimeMs800; // [rsp+628h] [rbp+528h] BYREF
    std::uint8_t stackStorage801[8]; // [rsp+630h] [rbp+530h] BYREF
    std::uint8_t stackStorage802[8]; // [rsp+638h] [rbp+538h] BYREF
    std::uint8_t stackStorage803[8]; // [rsp+640h] [rbp+540h] BYREF
    std::uint8_t stackStorage804[8]; // [rsp+648h] [rbp+548h] BYREF
    std::uint8_t stackStorage805[8]; // [rsp+650h] [rbp+550h] BYREF
    std::uint8_t stackStorage806[8]; // [rsp+658h] [rbp+558h] BYREF
    std::uint8_t stackStorage807[8]; // [rsp+660h] [rbp+560h] BYREF
    std::uint8_t stackStorage808[8]; // [rsp+668h] [rbp+568h] BYREF
    std::uint8_t stackStorage809[8]; // [rsp+670h] [rbp+570h] BYREF
    std::uint8_t stackStorage810[8]; // [rsp+678h] [rbp+578h] BYREF
    std::uint8_t stackStorage811[8]; // [rsp+680h] [rbp+580h] BYREF
    std::uint8_t stackStorage812[8]; // [rsp+688h] [rbp+588h] BYREF
    std::uint8_t stackStorage813[8]; // [rsp+690h] [rbp+590h] BYREF
    std::uint8_t stackStorage814[8]; // [rsp+698h] [rbp+598h] BYREF
    std::uint8_t stackStorage815[8]; // [rsp+6A0h] [rbp+5A0h] BYREF
    std::uint8_t stackStorage816[8]; // [rsp+6A8h] [rbp+5A8h] BYREF
    std::uint8_t stackStorage817[8]; // [rsp+6B0h] [rbp+5B0h] BYREF
    std::uint8_t stackStorage818[8]; // [rsp+6B8h] [rbp+5B8h] BYREF
    std::uint8_t stackStorage819[8]; // [rsp+6C0h] [rbp+5C0h] BYREF
    std::uint8_t stackStorage820[8]; // [rsp+6C8h] [rbp+5C8h] BYREF
    std::uint8_t stackStorage821[8]; // [rsp+6D0h] [rbp+5D0h] BYREF
    std::uint8_t stackStorage822[8]; // [rsp+6D8h] [rbp+5D8h] BYREF
    std::uint8_t stackStorage823[8]; // [rsp+6E0h] [rbp+5E0h] BYREF
    std::uint8_t stackStorage824[8]; // [rsp+6E8h] [rbp+5E8h] BYREF
    std::uint8_t stackStorage825[8]; // [rsp+6F0h] [rbp+5F0h] BYREF
    std::uint8_t stackStorage826[8]; // [rsp+6F8h] [rbp+5F8h] BYREF
    std::uint8_t stackStorage827[8]; // [rsp+700h] [rbp+600h] BYREF
    std::uint8_t stackStorage828[8]; // [rsp+708h] [rbp+608h] BYREF
    std::uint8_t stackStorage829[8]; // [rsp+710h] [rbp+610h] BYREF
    std::uint8_t stackStorage830[8]; // [rsp+718h] [rbp+618h] BYREF
    std::uint8_t stackStorage831[8]; // [rsp+720h] [rbp+620h] BYREF
    std::uint8_t stackStorage832[8]; // [rsp+728h] [rbp+628h] BYREF
    std::uint8_t stackStorage833[8]; // [rsp+730h] [rbp+630h] BYREF
    std::uint8_t stackStorage834[8]; // [rsp+738h] [rbp+638h] BYREF
    std::uint8_t stackStorage835[8]; // [rsp+740h] [rbp+640h] BYREF
    std::uint8_t stackStorage836[8]; // [rsp+748h] [rbp+648h] BYREF
    std::uint8_t stackStorage837[8]; // [rsp+750h] [rbp+650h] BYREF
    std::uint8_t stackStorage838[8]; // [rsp+758h] [rbp+658h] BYREF
    std::uint8_t stackStorage839[8]; // [rsp+760h] [rbp+660h] BYREF
    std::uint8_t stackStorage840[8]; // [rsp+768h] [rbp+668h] BYREF
    std::uint8_t stackStorage841[8]; // [rsp+770h] [rbp+670h] BYREF
    std::uint8_t stackStorage842[8]; // [rsp+778h] [rbp+678h] BYREF
    std::uint8_t stackStorage843[8]; // [rsp+780h] [rbp+680h] BYREF
    std::uint8_t stackStorage844[8]; // [rsp+788h] [rbp+688h] BYREF
    std::uint8_t stackStorage845[8]; // [rsp+790h] [rbp+690h] BYREF
    std::uint8_t stackStorage846[8]; // [rsp+798h] [rbp+698h] BYREF
    std::uint8_t stackStorage847[8]; // [rsp+7A0h] [rbp+6A0h] BYREF
    std::uint8_t stackStorage848[8]; // [rsp+7A8h] [rbp+6A8h] BYREF
    std::uint8_t stackStorage849[8]; // [rsp+7B0h] [rbp+6B0h] BYREF
    std::uint8_t stackStorage850[8]; // [rsp+7B8h] [rbp+6B8h] BYREF
    std::uint8_t stackStorage851[8]; // [rsp+7C0h] [rbp+6C0h] BYREF
    std::uint8_t stackStorage852[8]; // [rsp+7C8h] [rbp+6C8h] BYREF
    std::uint8_t stackStorage853[8]; // [rsp+7D0h] [rbp+6D0h] BYREF
    std::uint8_t stackStorage854[8]; // [rsp+7D8h] [rbp+6D8h] BYREF
    std::uint8_t stackStorage855[8]; // [rsp+7E0h] [rbp+6E0h] BYREF
    std::uint8_t stackStorage856[8]; // [rsp+7E8h] [rbp+6E8h] BYREF
    std::uint8_t stackStorage857[8]; // [rsp+7F0h] [rbp+6F0h] BYREF
    std::uint8_t stackStorage858[8]; // [rsp+7F8h] [rbp+6F8h] BYREF
    std::uint8_t stackStorage859[8]; // [rsp+800h] [rbp+700h] BYREF
    std::uint8_t stackStorage860[8]; // [rsp+808h] [rbp+708h] BYREF
    std::uint8_t stackStorage861[8]; // [rsp+810h] [rbp+710h] BYREF
    std::uint8_t stackStorage862[8]; // [rsp+818h] [rbp+718h] BYREF
    std::uint8_t stackStorage863[8]; // [rsp+820h] [rbp+720h] BYREF
    std::uint8_t stackStorage864[8]; // [rsp+828h] [rbp+728h] BYREF
    std::uint8_t stackStorage865[8]; // [rsp+830h] [rbp+730h] BYREF
    std::uint8_t stackStorage866[8]; // [rsp+838h] [rbp+738h] BYREF
    std::uint8_t stackStorage867[8]; // [rsp+840h] [rbp+740h] BYREF
    std::uint8_t stackStorage868[8]; // [rsp+848h] [rbp+748h] BYREF
    std::uint8_t stackStorage869[8]; // [rsp+850h] [rbp+750h] BYREF
    std::uint8_t stackStorage870[8]; // [rsp+858h] [rbp+758h] BYREF
    std::uint8_t stackStorage871[8]; // [rsp+860h] [rbp+760h] BYREF
    std::uint8_t stackStorage872[8]; // [rsp+868h] [rbp+768h] BYREF
    std::uint8_t stackStorage873[8]; // [rsp+870h] [rbp+770h] BYREF
    std::uint8_t stackStorage874[8]; // [rsp+878h] [rbp+778h] BYREF
    std::uint8_t stackStorage875[8]; // [rsp+880h] [rbp+780h] BYREF
    std::uint8_t stackStorage876[8]; // [rsp+888h] [rbp+788h] BYREF
    std::uint8_t stackStorage877[8]; // [rsp+890h] [rbp+790h] BYREF
    std::uint8_t stackStorage878[32]; // [rsp+898h] [rbp+798h] BYREF
    std::uint8_t stackStorage879[24]; // [rsp+8B8h] [rbp+7B8h] BYREF
    std::uint32_t stackStorage880[6]; // [rsp+8D0h] [rbp+7D0h] BYREF
    std::uint8_t stackStorage881[24]; // [rsp+8E8h] [rbp+7E8h] BYREF
    std::uint8_t stackStorage882[56]; // [rsp+900h] [rbp+800h] BYREF
    std::uint8_t stackStorage883[24]; // [rsp+938h] [rbp+838h] BYREF
    std::uint8_t stackStorage884[8]; // [rsp+950h] [rbp+850h] BYREF
    std::uint8_t stackStorage885[48]; // [rsp+958h] [rbp+858h] BYREF
    std::uint8_t stackStorage886[24]; // [rsp+988h] [rbp+888h] BYREF
    std::uint8_t stackStorage887[24]; // [rsp+9A0h] [rbp+8A0h] BYREF
    std::uint8_t stackStorage888[24]; // [rsp+9B8h] [rbp+8B8h] BYREF
    std::uint8_t stackStorage889[24]; // [rsp+9D0h] [rbp+8D0h] BYREF
    std::uint8_t stackStorage890[24]; // [rsp+9E8h] [rbp+8E8h] BYREF
    std::uint8_t stackStorage891[24]; // [rsp+A00h] [rbp+900h] BYREF
    std::uint8_t stackStorage892[24]; // [rsp+A18h] [rbp+918h] BYREF
    std::uint8_t stackStorage893[24]; // [rsp+A30h] [rbp+930h] BYREF
    std::uint8_t stackStorage894[24]; // [rsp+A48h] [rbp+948h] BYREF
    std::uint8_t stackStorage895[24]; // [rsp+A60h] [rbp+960h] BYREF
    std::uint8_t stackStorage896[24]; // [rsp+A78h] [rbp+978h] BYREF
    std::uint8_t stackStorage897[24]; // [rsp+A90h] [rbp+990h] BYREF
    std::uint8_t stackStorage898[24]; // [rsp+AA8h] [rbp+9A8h] BYREF
    std::uint8_t stackStorage899[24]; // [rsp+AC0h] [rbp+9C0h] BYREF
    std::uint8_t stackStorage900[24]; // [rsp+AD8h] [rbp+9D8h] BYREF
    std::uint8_t stackStorage901[24]; // [rsp+AF0h] [rbp+9F0h] BYREF
    std::uint8_t stackStorage902[24]; // [rsp+B08h] [rbp+A08h] BYREF
    std::uint8_t stackStorage903[24]; // [rsp+B20h] [rbp+A20h] BYREF
    std::uint8_t stackStorage904[24]; // [rsp+B38h] [rbp+A38h] BYREF
    std::uint8_t stackStorage905[24]; // [rsp+B50h] [rbp+A50h] BYREF
    std::uint8_t stackStorage906[24]; // [rsp+B68h] [rbp+A68h] BYREF
    std::uint8_t stackStorage907[24]; // [rsp+B80h] [rbp+A80h] BYREF
    std::uint8_t stackStorage908[24]; // [rsp+B98h] [rbp+A98h] BYREF
    std::uint8_t stackStorage909[24]; // [rsp+BB0h] [rbp+AB0h] BYREF
    std::uint8_t stackStorage910[24]; // [rsp+BC8h] [rbp+AC8h] BYREF
    std::uint8_t stackStorage911[24]; // [rsp+BE0h] [rbp+AE0h] BYREF
    std::uint8_t stackStorage912[24]; // [rsp+BF8h] [rbp+AF8h] BYREF
    std::uint8_t stackStorage913[24]; // [rsp+C10h] [rbp+B10h] BYREF
    std::uint8_t stackStorage914[24]; // [rsp+C28h] [rbp+B28h] BYREF
    std::uint8_t stackStorage915[24]; // [rsp+C40h] [rbp+B40h] BYREF
    std::uint8_t stackStorage916[24]; // [rsp+C58h] [rbp+B58h] BYREF
    std::uint8_t stackStorage917[24]; // [rsp+C70h] [rbp+B70h] BYREF
    std::uint8_t stackStorage918[24]; // [rsp+C88h] [rbp+B88h] BYREF
    std::uint8_t stackStorage919[24]; // [rsp+CA0h] [rbp+BA0h] BYREF
    std::uint8_t stackStorage920[24]; // [rsp+CB8h] [rbp+BB8h] BYREF
    std::uint8_t stackStorage921[24]; // [rsp+CD0h] [rbp+BD0h] BYREF
    std::uint8_t stackStorage922[24]; // [rsp+CE8h] [rbp+BE8h] BYREF
    std::uint8_t stackStorage923[24]; // [rsp+D00h] [rbp+C00h] BYREF
    std::uint8_t stackStorage924[24]; // [rsp+D18h] [rbp+C18h] BYREF
    std::uint8_t stackStorage925[64]; // [rsp+D30h] [rbp+C30h] BYREF
    std::uint8_t stackStorage926[64]; // [rsp+D70h] [rbp+C70h] BYREF
    std::uint8_t stackStorage927[64]; // [rsp+DB0h] [rbp+CB0h] BYREF
    std::uint8_t stackStorage928[16]; // [rsp+DF0h] [rbp+CF0h] BYREF
    std::uint8_t stackStorage929[16]; // [rsp+E00h] [rbp+D00h] BYREF
    std::uint8_t stackStorage930[16]; // [rsp+E10h] [rbp+D10h] BYREF
    std::uint8_t stackStorage931[4]; // [rsp+E20h] [rbp+D20h] BYREF
    unsigned int opaqueValue932; // [rsp+E24h] [rbp+D24h]
    std::uint8_t stackStorage933[8]; // [rsp+E28h] [rbp+D28h] BYREF
    std::uint8_t stackStorage934[128]; // [rsp+E30h] [rbp+D30h] BYREF
    std::uint8_t stackStorage935[16]; // [rsp+EB0h] [rbp+DB0h] BYREF
    std::uint8_t stackStorage936[16]; // [rsp+EC0h] [rbp+DC0h] BYREF
    std::uint8_t stackStorage937[16]; // [rsp+ED0h] [rbp+DD0h] BYREF
    std::uint8_t stackStorage938[16]; // [rsp+EE0h] [rbp+DE0h] BYREF
    std::uint8_t stackStorage939[8]; // [rsp+EF0h] [rbp+DF0h] BYREF
    std::uint8_t stackStorage940[8]; // [rsp+EF8h] [rbp+DF8h] BYREF
    std::uint8_t stackStorage941[8]; // [rsp+F00h] [rbp+E00h] BYREF
    std::uint8_t stackStorage942[8]; // [rsp+F08h] [rbp+E08h] BYREF
    std::uint8_t stackStorage943[80]; // [rsp+F10h] [rbp+E10h] BYREF
    std::uint8_t stackStorage944[16]; // [rsp+F60h] [rbp+E60h] BYREF
    std::uint8_t stackStorage945[16]; // [rsp+F70h] [rbp+E70h] BYREF
    std::uint8_t stackStorage946[16]; // [rsp+F80h] [rbp+E80h] BYREF
    std::uint8_t stackStorage947[16]; // [rsp+F90h] [rbp+E90h] BYREF
    std::uint8_t stackStorage948[16]; // [rsp+FA0h] [rbp+EA0h] BYREF
    std::uint8_t stackStorage949[16]; // [rsp+FB0h] [rbp+EB0h] BYREF
    std::uint8_t stackStorage950[16]; // [rsp+FC0h] [rbp+EC0h] BYREF
    std::uint8_t stackStorage951[16]; // [rsp+FD0h] [rbp+ED0h] BYREF
    std::uint8_t stackStorage952[16]; // [rsp+FE0h] [rbp+EE0h] BYREF
    std::uint8_t stackStorage953[16]; // [rsp+FF0h] [rbp+EF0h] BYREF
    std::uint8_t stackStorage954[32]; // [rsp+1000h] [rbp+F00h] BYREF
    std::uint8_t stackStorage955[8]; // [rsp+1020h] [rbp+F20h] BYREF
    std::uint8_t stackStorage956[185]; // [rsp+1028h] [rbp+F28h] BYREF
    char opaqueValue957; // [rsp+10E1h] [rbp+FE1h]
    std::uint8_t stackStorage958[32]; // [rsp+1120h] [rbp+1020h] BYREF
    std::uint8_t stackStorage959[64]; // [rsp+1140h] [rbp+1040h] BYREF
    std::int16_t opaqueValue960; // [rsp+1180h] [rbp+1080h] BYREF
    char opaqueValue961; // [rsp+1182h] [rbp+1082h]
    int opaqueValue962; // [rsp+1184h] [rbp+1084h]
    std::uint8_t stackStorage963[8]; // [rsp+1188h] [rbp+1088h] BYREF
    std::uint8_t stackStorage964[8]; // [rsp+1190h] [rbp+1090h] BYREF
    std::uint8_t stackStorage965[8]; // [rsp+1198h] [rbp+1098h] BYREF
    std::uint8_t stackStorage966[8]; // [rsp+11A0h] [rbp+10A0h] BYREF
    std::uint8_t stackStorage967[8]; // [rsp+11A8h] [rbp+10A8h] BYREF
    std::int64_t opaqueValue968; // [rsp+11B0h] [rbp+10B0h]
    std::uint8_t stackStorage969[24]; // [rsp+11B8h] [rbp+10B8h] BYREF
    std::uint8_t stackStorage970[8]; // [rsp+11D0h] [rbp+10D0h] BYREF
    std::int64_t opaqueValue971; // [rsp+11D8h] [rbp+10D8h]
    std::int64_t opaqueValue972; // [rsp+11E0h] [rbp+10E0h]
    char opaqueValue973; // [rsp+11E8h] [rbp+10E8h]
    __int128 opaqueValue974; // [rsp+11F0h] [rbp+10F0h]
    __int128 opaqueValue975; // [rsp+1200h] [rbp+1100h]
    std::int16_t opaqueValue976; // [rsp+1210h] [rbp+1110h] BYREF
    char opaqueValue977; // [rsp+1212h] [rbp+1112h]
    int opaqueValue978; // [rsp+1214h] [rbp+1114h]
    std::uint8_t stackStorage979[8]; // [rsp+1218h] [rbp+1118h] BYREF
    std::uint8_t stackStorage980[8]; // [rsp+1220h] [rbp+1120h] BYREF
    std::uint8_t stackStorage981[8]; // [rsp+1228h] [rbp+1128h] BYREF
    std::uint8_t stackStorage982[8]; // [rsp+1230h] [rbp+1130h] BYREF
    std::uint8_t stackStorage983[8]; // [rsp+1238h] [rbp+1138h] BYREF
    std::int64_t opaqueValue984; // [rsp+1240h] [rbp+1140h]
    std::uint8_t stackStorage985[24]; // [rsp+1248h] [rbp+1148h] BYREF
    std::uint8_t stackStorage986[8]; // [rsp+1260h] [rbp+1160h] BYREF
    std::int64_t opaqueValue987; // [rsp+1268h] [rbp+1168h]
    std::int64_t opaqueValue988; // [rsp+1270h] [rbp+1170h]
    char opaqueValue989; // [rsp+1278h] [rbp+1178h]
    __int128 opaqueValue990; // [rsp+1280h] [rbp+1180h]
    __int128 opaqueValue991; // [rsp+1290h] [rbp+1190h]
    std::int16_t opaqueValue992; // [rsp+12A0h] [rbp+11A0h] BYREF
    char opaqueValue993; // [rsp+12A2h] [rbp+11A2h]
    int opaqueValue994; // [rsp+12A4h] [rbp+11A4h]
    std::uint8_t stackStorage995[8]; // [rsp+12A8h] [rbp+11A8h] BYREF
    std::uint8_t stackStorage996[8]; // [rsp+12B0h] [rbp+11B0h] BYREF
    std::uint8_t stackStorage997[8]; // [rsp+12B8h] [rbp+11B8h] BYREF
    std::uint8_t stackStorage998[8]; // [rsp+12C0h] [rbp+11C0h] BYREF
    std::uint8_t stackStorage999[8]; // [rsp+12C8h] [rbp+11C8h] BYREF
    std::int64_t opaqueValue1000; // [rsp+12D0h] [rbp+11D0h]
    std::uint8_t stackStorage1001[24]; // [rsp+12D8h] [rbp+11D8h] BYREF
    std::uint8_t stackStorage1002[8]; // [rsp+12F0h] [rbp+11F0h] BYREF
    std::int64_t opaqueValue1003; // [rsp+12F8h] [rbp+11F8h]
    std::int64_t opaqueValue1004; // [rsp+1300h] [rbp+1200h]
    char opaqueValue1005; // [rsp+1308h] [rbp+1208h]
    __int128 opaqueValue1006; // [rsp+1310h] [rbp+1210h]
    __int128 opaqueValue1007; // [rsp+1320h] [rbp+1220h]
    std::int16_t opaqueValue1008; // [rsp+1330h] [rbp+1230h] BYREF
    char opaqueValue1009; // [rsp+1332h] [rbp+1232h]
    int opaqueValue1010; // [rsp+1334h] [rbp+1234h]
    std::uint8_t stackStorage1011[8]; // [rsp+1338h] [rbp+1238h] BYREF
    std::uint8_t stackStorage1012[8]; // [rsp+1340h] [rbp+1240h] BYREF
    std::uint8_t stackStorage1013[8]; // [rsp+1348h] [rbp+1248h] BYREF
    std::uint8_t stackStorage1014[8]; // [rsp+1350h] [rbp+1250h] BYREF
    std::uint8_t stackStorage1015[8]; // [rsp+1358h] [rbp+1258h] BYREF
    std::int64_t opaqueValue1016; // [rsp+1360h] [rbp+1260h]
    std::uint8_t stackStorage1017[24]; // [rsp+1368h] [rbp+1268h] BYREF
    std::uint8_t stackStorage1018[8]; // [rsp+1380h] [rbp+1280h] BYREF
    std::int64_t opaqueValue1019; // [rsp+1388h] [rbp+1288h]
    std::int64_t opaqueValue1020; // [rsp+1390h] [rbp+1290h]
    char opaqueValue1021; // [rsp+1398h] [rbp+1298h]
    __int128 opaqueValue1022; // [rsp+13A0h] [rbp+12A0h]
    __int128 opaqueValue1023; // [rsp+13B0h] [rbp+12B0h]
    std::int16_t opaqueValue1024; // [rsp+13C0h] [rbp+12C0h] BYREF
    char opaqueValue1025; // [rsp+13C2h] [rbp+12C2h]
    int opaqueValue1026; // [rsp+13C4h] [rbp+12C4h]
    std::uint8_t stackStorage1027[8]; // [rsp+13C8h] [rbp+12C8h] BYREF
    std::uint8_t stackStorage1028[8]; // [rsp+13D0h] [rbp+12D0h] BYREF
    std::uint8_t stackStorage1029[8]; // [rsp+13D8h] [rbp+12D8h] BYREF
    std::uint8_t stackStorage1030[8]; // [rsp+13E0h] [rbp+12E0h] BYREF
    std::uint8_t stackStorage1031[8]; // [rsp+13E8h] [rbp+12E8h] BYREF
    std::int64_t opaqueValue1032; // [rsp+13F0h] [rbp+12F0h]
    std::uint8_t stackStorage1033[24]; // [rsp+13F8h] [rbp+12F8h] BYREF
    std::uint8_t stackStorage1034[8]; // [rsp+1410h] [rbp+1310h] BYREF
    std::int64_t opaqueValue1035; // [rsp+1418h] [rbp+1318h]
    std::int64_t opaqueValue1036; // [rsp+1420h] [rbp+1320h]
    char opaqueValue1037; // [rsp+1428h] [rbp+1328h]
    __int128 opaqueValue1038; // [rsp+1430h] [rbp+1330h]
    __int128 opaqueValue1039; // [rsp+1440h] [rbp+1340h]
    std::int16_t opaqueValue1040; // [rsp+1450h] [rbp+1350h] BYREF
    char opaqueValue1041; // [rsp+1452h] [rbp+1352h]
    int opaqueValue1042; // [rsp+1454h] [rbp+1354h]
    std::uint8_t stackStorage1043[8]; // [rsp+1458h] [rbp+1358h] BYREF
    std::uint8_t stackStorage1044[8]; // [rsp+1460h] [rbp+1360h] BYREF
    std::uint8_t stackStorage1045[8]; // [rsp+1468h] [rbp+1368h] BYREF
    std::uint8_t stackStorage1046[8]; // [rsp+1470h] [rbp+1370h] BYREF
    std::uint8_t stackStorage1047[8]; // [rsp+1478h] [rbp+1378h] BYREF
    std::int64_t opaqueValue1048; // [rsp+1480h] [rbp+1380h]
    std::uint8_t stackStorage1049[24]; // [rsp+1488h] [rbp+1388h] BYREF
    std::uint8_t stackStorage1050[8]; // [rsp+14A0h] [rbp+13A0h] BYREF
    std::int64_t opaqueValue1051; // [rsp+14A8h] [rbp+13A8h]
    std::int64_t opaqueValue1052; // [rsp+14B0h] [rbp+13B0h]
    char opaqueValue1053; // [rsp+14B8h] [rbp+13B8h]
    __int128 opaqueValue1054; // [rsp+14C0h] [rbp+13C0h]
    __int128 opaqueValue1055; // [rsp+14D0h] [rbp+13D0h]
    std::int16_t opaqueValue1056; // [rsp+14E0h] [rbp+13E0h] BYREF
    char opaqueValue1057; // [rsp+14E2h] [rbp+13E2h]
    int opaqueValue1058; // [rsp+14E4h] [rbp+13E4h]
    std::uint8_t stackStorage1059[8]; // [rsp+14E8h] [rbp+13E8h] BYREF
    std::uint8_t stackStorage1060[8]; // [rsp+14F0h] [rbp+13F0h] BYREF
    std::uint8_t stackStorage1061[8]; // [rsp+14F8h] [rbp+13F8h] BYREF
    std::uint8_t stackStorage1062[8]; // [rsp+1500h] [rbp+1400h] BYREF
    std::uint8_t stackStorage1063[8]; // [rsp+1508h] [rbp+1408h] BYREF
    std::int64_t opaqueValue1064; // [rsp+1510h] [rbp+1410h]
    std::uint8_t stackStorage1065[24]; // [rsp+1518h] [rbp+1418h] BYREF
    std::uint8_t stackStorage1066[8]; // [rsp+1530h] [rbp+1430h] BYREF
    std::int64_t opaqueValue1067; // [rsp+1538h] [rbp+1438h]
    std::int64_t opaqueValue1068; // [rsp+1540h] [rbp+1440h]
    char opaqueValue1069; // [rsp+1548h] [rbp+1448h]
    __int128 opaqueValue1070; // [rsp+1550h] [rbp+1450h]
    __int128 opaqueValue1071; // [rsp+1560h] [rbp+1460h]
    std::int16_t opaqueValue1072; // [rsp+1570h] [rbp+1470h] BYREF
    char opaqueValue1073; // [rsp+1572h] [rbp+1472h]
    int opaqueValue1074; // [rsp+1574h] [rbp+1474h]
    std::uint8_t stackStorage1075[8]; // [rsp+1578h] [rbp+1478h] BYREF
    std::uint8_t stackStorage1076[8]; // [rsp+1580h] [rbp+1480h] BYREF
    std::uint8_t stackStorage1077[8]; // [rsp+1588h] [rbp+1488h] BYREF
    std::uint8_t stackStorage1078[8]; // [rsp+1590h] [rbp+1490h] BYREF
    std::uint8_t stackStorage1079[8]; // [rsp+1598h] [rbp+1498h] BYREF
    std::int64_t opaqueValue1080; // [rsp+15A0h] [rbp+14A0h]
    std::uint8_t stackStorage1081[24]; // [rsp+15A8h] [rbp+14A8h] BYREF
    std::uint8_t stackStorage1082[8]; // [rsp+15C0h] [rbp+14C0h] BYREF
    std::int64_t opaqueValue1083; // [rsp+15C8h] [rbp+14C8h]
    std::int64_t opaqueValue1084; // [rsp+15D0h] [rbp+14D0h]
    char opaqueValue1085; // [rsp+15D8h] [rbp+14D8h]
    __int128 opaqueValue1086; // [rsp+15E0h] [rbp+14E0h]
    __int128 opaqueValue1087; // [rsp+15F0h] [rbp+14F0h]
    std::int16_t opaqueValue1088; // [rsp+1600h] [rbp+1500h] BYREF
    char opaqueValue1089; // [rsp+1602h] [rbp+1502h]
    int opaqueValue1090; // [rsp+1604h] [rbp+1504h]
    std::uint8_t stackStorage1091[8]; // [rsp+1608h] [rbp+1508h] BYREF
    std::uint8_t stackStorage1092[8]; // [rsp+1610h] [rbp+1510h] BYREF
    std::uint8_t stackStorage1093[8]; // [rsp+1618h] [rbp+1518h] BYREF
    std::uint8_t stackStorage1094[8]; // [rsp+1620h] [rbp+1520h] BYREF
    std::uint8_t stackStorage1095[8]; // [rsp+1628h] [rbp+1528h] BYREF
    std::int64_t opaqueValue1096; // [rsp+1630h] [rbp+1530h]
    std::uint8_t stackStorage1097[24]; // [rsp+1638h] [rbp+1538h] BYREF
    std::uint8_t stackStorage1098[8]; // [rsp+1650h] [rbp+1550h] BYREF
    std::int64_t opaqueValue1099; // [rsp+1658h] [rbp+1558h]
    std::int64_t opaqueValue1100; // [rsp+1660h] [rbp+1560h]
    char opaqueValue1101; // [rsp+1668h] [rbp+1568h]
    __int128 opaqueValue1102; // [rsp+1670h] [rbp+1570h]
    __int128 opaqueValue1103; // [rsp+1680h] [rbp+1580h]
    std::int16_t opaqueValue1104; // [rsp+1690h] [rbp+1590h] BYREF
    char opaqueValue1105; // [rsp+1692h] [rbp+1592h]
    int opaqueValue1106; // [rsp+1694h] [rbp+1594h]
    std::uint8_t stackStorage1107[8]; // [rsp+1698h] [rbp+1598h] BYREF
    std::uint8_t stackStorage1108[8]; // [rsp+16A0h] [rbp+15A0h] BYREF
    std::uint8_t stackStorage1109[8]; // [rsp+16A8h] [rbp+15A8h] BYREF
    std::uint8_t stackStorage1110[8]; // [rsp+16B0h] [rbp+15B0h] BYREF
    std::uint8_t stackStorage1111[8]; // [rsp+16B8h] [rbp+15B8h] BYREF
    std::int64_t opaqueValue1112; // [rsp+16C0h] [rbp+15C0h]
    std::uint8_t stackStorage1113[24]; // [rsp+16C8h] [rbp+15C8h] BYREF
    std::uint8_t stackStorage1114[8]; // [rsp+16E0h] [rbp+15E0h] BYREF
    std::int64_t opaqueValue1115; // [rsp+16E8h] [rbp+15E8h]
    std::int64_t opaqueValue1116; // [rsp+16F0h] [rbp+15F0h]
    char opaqueValue1117; // [rsp+16F8h] [rbp+15F8h]
    __int128 opaqueValue1118; // [rsp+1700h] [rbp+1600h]
    __int128 opaqueValue1119; // [rsp+1710h] [rbp+1610h]
    std::int16_t opaqueValue1120; // [rsp+1720h] [rbp+1620h] BYREF
    char opaqueValue1121; // [rsp+1722h] [rbp+1622h]
    int opaqueValue1122; // [rsp+1724h] [rbp+1624h]
    std::uint8_t stackStorage1123[8]; // [rsp+1728h] [rbp+1628h] BYREF
    std::uint8_t stackStorage1124[8]; // [rsp+1730h] [rbp+1630h] BYREF
    std::uint8_t stackStorage1125[8]; // [rsp+1738h] [rbp+1638h] BYREF
    std::uint8_t stackStorage1126[8]; // [rsp+1740h] [rbp+1640h] BYREF
    std::uint8_t stackStorage1127[8]; // [rsp+1748h] [rbp+1648h] BYREF
    std::int64_t opaqueValue1128; // [rsp+1750h] [rbp+1650h]
    std::uint8_t stackStorage1129[24]; // [rsp+1758h] [rbp+1658h] BYREF
    std::uint8_t stackStorage1130[8]; // [rsp+1770h] [rbp+1670h] BYREF
    std::int64_t opaqueValue1131; // [rsp+1778h] [rbp+1678h]
    std::int64_t opaqueValue1132; // [rsp+1780h] [rbp+1680h]
    char opaqueValue1133; // [rsp+1788h] [rbp+1688h]
    __int128 opaqueValue1134; // [rsp+1790h] [rbp+1690h]
    __int128 opaqueValue1135; // [rsp+17A0h] [rbp+16A0h]
    std::int16_t opaqueValue1136; // [rsp+17B0h] [rbp+16B0h] BYREF
    char opaqueValue1137; // [rsp+17B2h] [rbp+16B2h]
    int opaqueValue1138; // [rsp+17B4h] [rbp+16B4h]
    std::uint8_t stackStorage1139[8]; // [rsp+17B8h] [rbp+16B8h] BYREF
    std::uint8_t stackStorage1140[8]; // [rsp+17C0h] [rbp+16C0h] BYREF
    std::uint8_t stackStorage1141[8]; // [rsp+17C8h] [rbp+16C8h] BYREF
    std::uint8_t stackStorage1142[8]; // [rsp+17D0h] [rbp+16D0h] BYREF
    std::uint8_t stackStorage1143[8]; // [rsp+17D8h] [rbp+16D8h] BYREF
    std::int64_t opaqueValue1144; // [rsp+17E0h] [rbp+16E0h]
    std::uint8_t stackStorage1145[24]; // [rsp+17E8h] [rbp+16E8h] BYREF
    std::uint8_t stackStorage1146[8]; // [rsp+1800h] [rbp+1700h] BYREF
    std::int64_t opaqueValue1147; // [rsp+1808h] [rbp+1708h]
    std::int64_t opaqueValue1148; // [rsp+1810h] [rbp+1710h]
    char opaqueValue1149; // [rsp+1818h] [rbp+1718h]
    __int128 opaqueValue1150; // [rsp+1820h] [rbp+1720h]
    __int128 opaqueValue1151; // [rsp+1830h] [rbp+1730h]
    std::int16_t opaqueValue1152; // [rsp+1840h] [rbp+1740h] BYREF
    char opaqueValue1153; // [rsp+1842h] [rbp+1742h]
    int opaqueValue1154; // [rsp+1844h] [rbp+1744h]
    std::uint8_t stackStorage1155[8]; // [rsp+1848h] [rbp+1748h] BYREF
    std::uint8_t stackStorage1156[8]; // [rsp+1850h] [rbp+1750h] BYREF
    std::uint8_t stackStorage1157[8]; // [rsp+1858h] [rbp+1758h] BYREF
    std::uint8_t stackStorage1158[8]; // [rsp+1860h] [rbp+1760h] BYREF
    std::uint8_t stackStorage1159[8]; // [rsp+1868h] [rbp+1768h] BYREF
    std::int64_t opaqueValue1160; // [rsp+1870h] [rbp+1770h]
    std::uint8_t stackStorage1161[24]; // [rsp+1878h] [rbp+1778h] BYREF
    std::uint8_t stackStorage1162[8]; // [rsp+1890h] [rbp+1790h] BYREF
    std::int64_t opaqueValue1163; // [rsp+1898h] [rbp+1798h]
    std::int64_t opaqueValue1164; // [rsp+18A0h] [rbp+17A0h]
    char opaqueValue1165; // [rsp+18A8h] [rbp+17A8h]
    __int128 opaqueValue1166; // [rsp+18B0h] [rbp+17B0h]
    __int128 opaqueValue1167; // [rsp+18C0h] [rbp+17C0h]
    std::int16_t opaqueValue1168; // [rsp+18D0h] [rbp+17D0h] BYREF
    char opaqueValue1169; // [rsp+18D2h] [rbp+17D2h]
    int opaqueValue1170; // [rsp+18D4h] [rbp+17D4h]
    std::uint8_t stackStorage1171[8]; // [rsp+18D8h] [rbp+17D8h] BYREF
    std::uint8_t stackStorage1172[8]; // [rsp+18E0h] [rbp+17E0h] BYREF
    std::uint8_t stackStorage1173[8]; // [rsp+18E8h] [rbp+17E8h] BYREF
    std::uint8_t stackStorage1174[8]; // [rsp+18F0h] [rbp+17F0h] BYREF
    std::uint8_t stackStorage1175[8]; // [rsp+18F8h] [rbp+17F8h] BYREF
    std::int64_t opaqueValue1176; // [rsp+1900h] [rbp+1800h]
    std::uint8_t stackStorage1177[24]; // [rsp+1908h] [rbp+1808h] BYREF
    std::uint8_t stackStorage1178[8]; // [rsp+1920h] [rbp+1820h] BYREF
    std::int64_t opaqueValue1179; // [rsp+1928h] [rbp+1828h]
    std::int64_t opaqueValue1180; // [rsp+1930h] [rbp+1830h]
    char opaqueValue1181; // [rsp+1938h] [rbp+1838h]
    __int128 opaqueValue1182; // [rsp+1940h] [rbp+1840h]
    __int128 opaqueValue1183; // [rsp+1950h] [rbp+1850h]
    std::int16_t opaqueValue1184; // [rsp+1960h] [rbp+1860h] BYREF
    char opaqueValue1185; // [rsp+1962h] [rbp+1862h]
    int opaqueValue1186; // [rsp+1964h] [rbp+1864h]
    std::uint8_t stackStorage1187[8]; // [rsp+1968h] [rbp+1868h] BYREF
    std::uint8_t stackStorage1188[8]; // [rsp+1970h] [rbp+1870h] BYREF
    std::uint8_t stackStorage1189[8]; // [rsp+1978h] [rbp+1878h] BYREF
    std::uint8_t stackStorage1190[8]; // [rsp+1980h] [rbp+1880h] BYREF
    std::uint8_t stackStorage1191[8]; // [rsp+1988h] [rbp+1888h] BYREF
    std::int64_t opaqueValue1192; // [rsp+1990h] [rbp+1890h]
    std::uint8_t stackStorage1193[24]; // [rsp+1998h] [rbp+1898h] BYREF
    std::uint8_t stackStorage1194[8]; // [rsp+19B0h] [rbp+18B0h] BYREF
    std::int64_t opaqueValue1195; // [rsp+19B8h] [rbp+18B8h]
    std::int64_t opaqueValue1196; // [rsp+19C0h] [rbp+18C0h]
    char opaqueValue1197; // [rsp+19C8h] [rbp+18C8h]
    __int128 opaqueValue1198; // [rsp+19D0h] [rbp+18D0h]
    __int128 opaqueValue1199; // [rsp+19E0h] [rbp+18E0h]
    std::uint8_t stackStorage1200[8]; // [rsp+19F0h] [rbp+18F0h] BYREF
    std::uint8_t stackStorage1201[8]; // [rsp+19F8h] [rbp+18F8h] BYREF
    std::uint8_t stackStorage1202[8]; // [rsp+1A00h] [rbp+1900h] BYREF
    std::uint8_t stackStorage1203[8]; // [rsp+1A08h] [rbp+1908h] BYREF
    std::uint8_t stackStorage1204[8]; // [rsp+1A10h] [rbp+1910h] BYREF
    std::uint8_t stackStorage1205[8]; // [rsp+1A18h] [rbp+1918h] BYREF
    std::uint8_t stackStorage1206[8]; // [rsp+1A20h] [rbp+1920h] BYREF
    std::uint8_t stackStorage1207[8]; // [rsp+1A28h] [rbp+1928h] BYREF
    std::uint8_t stackStorage1208[8]; // [rsp+1A30h] [rbp+1930h] BYREF
    std::uint8_t stackStorage1209[8]; // [rsp+1A38h] [rbp+1938h] BYREF
    int opaqueValue1210; // [rsp+1A40h] [rbp+1940h]
    std::uint8_t stackStorage1211[8]; // [rsp+1A48h] [rbp+1948h] BYREF
    std::int64_t opaqueValue1212; // [rsp+1A50h] [rbp+1950h]
    std::uint8_t stackStorage1213[16]; // [rsp+1A58h] [rbp+1958h] BYREF
    std::int64_t opaqueValue1214; // [rsp+1A68h] [rbp+1968h]
    std::uint8_t stackStorage1215[8]; // [rsp+1A70h] [rbp+1970h] BYREF
    std::int64_t opaqueValue1216; // [rsp+1A78h] [rbp+1978h]
    std::int64_t opaqueValue1217; // [rsp+1A80h] [rbp+1980h]
    char opaqueValue1218; // [rsp+1A88h] [rbp+1988h]
    __int128 opaqueValue1219; // [rsp+1A90h] [rbp+1990h]
    std::int64_t opaqueValue1220; // [rsp+1AA0h] [rbp+19A0h]
    std::int16_t opaqueValue1221; // [rsp+1AA8h] [rbp+19A8h]
    std::int64_t opaqueValue1222; // [rsp+1AB0h] [rbp+19B0h]
    std::int64_t opaqueValue1223; // [rsp+1AB8h] [rbp+19B8h]
    char opaqueValue1224; // [rsp+1AC0h] [rbp+19C0h]
    int opaqueValue1225; // [rsp+1AC4h] [rbp+19C4h]
    std::uint8_t stackStorage1226[8]; // [rsp+1AC8h] [rbp+19C8h] BYREF
    std::int16_t opaqueValue1227; // [rsp+1AD0h] [rbp+19D0h]
    std::uint8_t stackStorage1228[8]; // [rsp+1AD8h] [rbp+19D8h] BYREF
    std::uint8_t stackStorage1229[8]; // [rsp+1AE0h] [rbp+19E0h] BYREF
    std::uint8_t stackStorage1230[8]; // [rsp+1AE8h] [rbp+19E8h] BYREF
    std::uint8_t stackStorage1231[8]; // [rsp+1AF0h] [rbp+19F0h] BYREF
    std::uint8_t stackStorage1232[8]; // [rsp+1AF8h] [rbp+19F8h] BYREF
    std::int64_t opaqueValue1233; // [rsp+1B00h] [rbp+1A00h]
    std::uint8_t stackStorage1234[8]; // [rsp+1B08h] [rbp+1A08h] BYREF
    std::uint8_t stackStorage1235[16]; // [rsp+1B10h] [rbp+1A10h] BYREF
    std::uint8_t stackStorage1236[8]; // [rsp+1B20h] [rbp+1A20h] BYREF
    std::int64_t opaqueValue1237; // [rsp+1B28h] [rbp+1A28h]
    std::uint8_t stackStorage1238[8]; // [rsp+1B30h] [rbp+1A30h] BYREF
    std::uint8_t stackStorage1239[8]; // [rsp+1B38h] [rbp+1A38h] BYREF
    std::uint8_t stackStorage1240[8]; // [rsp+1B40h] [rbp+1A40h] BYREF
    std::uint8_t stackStorage1241[8]; // [rsp+1B48h] [rbp+1A48h] BYREF
    std::uint8_t stackStorage1242[8]; // [rsp+1B50h] [rbp+1A50h] BYREF
    std::uint8_t stackStorage1243[8]; // [rsp+1B58h] [rbp+1A58h] BYREF
    std::uint8_t stackStorage1244[8]; // [rsp+1B60h] [rbp+1A60h] BYREF
    std::uint8_t stackStorage1245[8]; // [rsp+1B68h] [rbp+1A68h] BYREF
    std::uint8_t stackStorage1246[8]; // [rsp+1B70h] [rbp+1A70h] BYREF
    std::uint8_t stackStorage1247[8]; // [rsp+1B78h] [rbp+1A78h] BYREF
    int opaqueValue1248; // [rsp+1B80h] [rbp+1A80h]
    std::uint8_t stackStorage1249[8]; // [rsp+1B88h] [rbp+1A88h] BYREF
    std::int64_t opaqueValue1250; // [rsp+1B90h] [rbp+1A90h]
    std::uint8_t stackStorage1251[16]; // [rsp+1B98h] [rbp+1A98h] BYREF
    std::int64_t opaqueValue1252; // [rsp+1BA8h] [rbp+1AA8h]
    std::uint8_t stackStorage1253[8]; // [rsp+1BB0h] [rbp+1AB0h] BYREF
    std::int64_t opaqueValue1254; // [rsp+1BB8h] [rbp+1AB8h]
    std::int64_t opaqueValue1255; // [rsp+1BC0h] [rbp+1AC0h]
    char opaqueValue1256; // [rsp+1BC8h] [rbp+1AC8h]
    __int128 opaqueValue1257; // [rsp+1BD0h] [rbp+1AD0h]
    std::int64_t opaqueValue1258; // [rsp+1BE0h] [rbp+1AE0h]
    std::int16_t opaqueValue1259; // [rsp+1BE8h] [rbp+1AE8h]
    std::int64_t opaqueValue1260; // [rsp+1BF0h] [rbp+1AF0h]
    std::int64_t opaqueValue1261; // [rsp+1BF8h] [rbp+1AF8h]
    char opaqueValue1262; // [rsp+1C00h] [rbp+1B00h]
    int opaqueValue1263; // [rsp+1C04h] [rbp+1B04h]
    std::uint8_t stackStorage1264[8]; // [rsp+1C08h] [rbp+1B08h] BYREF
    std::int16_t opaqueValue1265; // [rsp+1C10h] [rbp+1B10h]
    std::uint8_t stackStorage1266[8]; // [rsp+1C18h] [rbp+1B18h] BYREF
    std::uint8_t stackStorage1267[8]; // [rsp+1C20h] [rbp+1B20h] BYREF
    std::uint8_t stackStorage1268[8]; // [rsp+1C28h] [rbp+1B28h] BYREF
    std::uint8_t stackStorage1269[8]; // [rsp+1C30h] [rbp+1B30h] BYREF
    std::uint8_t stackStorage1270[8]; // [rsp+1C38h] [rbp+1B38h] BYREF
    std::int64_t opaqueValue1271; // [rsp+1C40h] [rbp+1B40h]
    std::uint8_t stackStorage1272[8]; // [rsp+1C48h] [rbp+1B48h] BYREF
    std::uint8_t stackStorage1273[16]; // [rsp+1C50h] [rbp+1B50h] BYREF
    std::uint8_t stackStorage1274[8]; // [rsp+1C60h] [rbp+1B60h] BYREF
    std::int64_t opaqueValue1275; // [rsp+1C68h] [rbp+1B68h]
    std::uint8_t stackStorage1276[8]; // [rsp+1C70h] [rbp+1B70h] BYREF
    std::uint8_t stackStorage1277[8]; // [rsp+1C78h] [rbp+1B78h] BYREF
    std::uint8_t stackStorage1278[8]; // [rsp+1C80h] [rbp+1B80h] BYREF
    std::uint8_t stackStorage1279[8]; // [rsp+1C88h] [rbp+1B88h] BYREF
    std::uint8_t stackStorage1280[8]; // [rsp+1C90h] [rbp+1B90h] BYREF
    std::uint8_t stackStorage1281[8]; // [rsp+1C98h] [rbp+1B98h] BYREF
    std::uint8_t stackStorage1282[8]; // [rsp+1CA0h] [rbp+1BA0h] BYREF
    std::uint8_t stackStorage1283[8]; // [rsp+1CA8h] [rbp+1BA8h] BYREF
    std::uint8_t stackStorage1284[8]; // [rsp+1CB0h] [rbp+1BB0h] BYREF
    std::uint8_t stackStorage1285[8]; // [rsp+1CB8h] [rbp+1BB8h] BYREF
    int opaqueValue1286; // [rsp+1CC0h] [rbp+1BC0h]
    std::uint8_t stackStorage1287[8]; // [rsp+1CC8h] [rbp+1BC8h] BYREF
    std::int64_t opaqueValue1288; // [rsp+1CD0h] [rbp+1BD0h]
    std::uint8_t stackStorage1289[16]; // [rsp+1CD8h] [rbp+1BD8h] BYREF
    std::int64_t opaqueValue1290; // [rsp+1CE8h] [rbp+1BE8h]
    std::uint8_t stackStorage1291[8]; // [rsp+1CF0h] [rbp+1BF0h] BYREF
    std::int64_t opaqueValue1292; // [rsp+1CF8h] [rbp+1BF8h]
    std::int64_t opaqueValue1293; // [rsp+1D00h] [rbp+1C00h]
    char opaqueValue1294; // [rsp+1D08h] [rbp+1C08h]
    __int128 opaqueValue1295; // [rsp+1D10h] [rbp+1C10h]
    std::int64_t opaqueValue1296; // [rsp+1D20h] [rbp+1C20h]
    std::int16_t opaqueValue1297; // [rsp+1D28h] [rbp+1C28h]
    std::int64_t opaqueValue1298; // [rsp+1D30h] [rbp+1C30h]
    std::int64_t opaqueValue1299; // [rsp+1D38h] [rbp+1C38h]
    char opaqueValue1300; // [rsp+1D40h] [rbp+1C40h]
    int opaqueValue1301; // [rsp+1D44h] [rbp+1C44h]
    std::uint8_t stackStorage1302[8]; // [rsp+1D48h] [rbp+1C48h] BYREF
    std::int16_t opaqueValue1303; // [rsp+1D50h] [rbp+1C50h]
    std::uint8_t stackStorage1304[8]; // [rsp+1D58h] [rbp+1C58h] BYREF
    std::uint8_t stackStorage1305[8]; // [rsp+1D60h] [rbp+1C60h] BYREF
    std::uint8_t stackStorage1306[8]; // [rsp+1D68h] [rbp+1C68h] BYREF
    std::uint8_t stackStorage1307[8]; // [rsp+1D70h] [rbp+1C70h] BYREF
    std::uint8_t stackStorage1308[8]; // [rsp+1D78h] [rbp+1C78h] BYREF
    std::int64_t opaqueValue1309; // [rsp+1D80h] [rbp+1C80h]
    std::uint8_t stackStorage1310[8]; // [rsp+1D88h] [rbp+1C88h] BYREF
    std::uint8_t stackStorage1311[16]; // [rsp+1D90h] [rbp+1C90h] BYREF
    std::uint8_t stackStorage1312[8]; // [rsp+1DA0h] [rbp+1CA0h] BYREF
    std::int64_t opaqueValue1313; // [rsp+1DA8h] [rbp+1CA8h]
    std::uint8_t stackStorage1314[16]; // [rsp+1DB0h] [rbp+1CB0h] BYREF
    std::uint8_t stackStorage1315[16]; // [rsp+1DC0h] [rbp+1CC0h] BYREF
    std::uint8_t stackStorage1316[16]; // [rsp+1DD0h] [rbp+1CD0h] BYREF
    std::uint8_t stackStorage1317[16]; // [rsp+1DE0h] [rbp+1CE0h] BYREF
    std::uint8_t stackStorage1318[64]; // [rsp+1DF0h] [rbp+1CF0h] BYREF
    std::uint8_t stackStorage1319[64]; // [rsp+1E30h] [rbp+1D30h] BYREF
    std::uint8_t stackStorage1320[64]; // [rsp+1E70h] [rbp+1D70h] BYREF
    std::uint8_t stackStorage1321[64]; // [rsp+1EB0h] [rbp+1DB0h] BYREF
    std::uint8_t stackStorage1322[8]; // [rsp+1EF0h] [rbp+1DF0h] BYREF
    std::uint8_t stackStorage1323[344]; // [rsp+1EF8h] [rbp+1DF8h] BYREF
    std::uint8_t stackStorage1324[16]; // [rsp+2050h] [rbp+1F50h] BYREF
    std::uint8_t stackStorage1325[16]; // [rsp+2060h] [rbp+1F60h] BYREF
    char opaqueValue1326; // [rsp+2070h] [rbp+1F70h] BYREF
    char opaqueValue1327; // [rsp+2071h] [rbp+1F71h]
    char opaqueValue1328; // [rsp+2072h] [rbp+1F72h]
    std::uint32_t stackStorage1329[6]; // [rsp+2078h] [rbp+1F78h] BYREF
    std::uint8_t stackStorage1330[32]; // [rsp+2090h] [rbp+1F90h] BYREF
    std::uint8_t stackStorage1331[8]; // [rsp+20B0h] [rbp+1FB0h] BYREF
    std::uint8_t stackStorage1332[280]; // [rsp+20B8h] [rbp+1FB8h] BYREF
    std::uint8_t stackStorage1333[4]; // [rsp+21D0h] [rbp+20D0h] BYREF
    int opaqueValue1334; // [rsp+21D4h] [rbp+20D4h]
    std::uint8_t stackStorage1335[8]; // [rsp+21D8h] [rbp+20D8h] BYREF
    std::uint8_t stackStorage1336[128]; // [rsp+21E0h] [rbp+20E0h] BYREF
    std::uint8_t stackStorage1337[8]; // [rsp+2260h] [rbp+2160h] BYREF
    std::uint8_t stackStorage1338[8]; // [rsp+2268h] [rbp+2168h] BYREF
    std::uint8_t stackStorage1339[128]; // [rsp+2270h] [rbp+2170h] BYREF
    std::uint8_t stackStorage1340[24]; // [rsp+22F0h] [rbp+21F0h] BYREF
    std::uint8_t stackStorage1341[264]; // [rsp+2308h] [rbp+2208h] BYREF
    std::uint8_t stackStorage1342[32]; // [rsp+2410h] [rbp+2310h] BYREF
    std::uint8_t stackStorage1343[8]; // [rsp+2430h] [rbp+2330h] BYREF
    std::uint8_t stackStorage1344[280]; // [rsp+2438h] [rbp+2338h] BYREF
    std::uint8_t stackStorage1345[48]; // [rsp+2550h] [rbp+2450h] BYREF
    std::uint8_t stackStorage1346[8]; // [rsp+2580h] [rbp+2480h] BYREF
    std::uint8_t stackStorage1347[8]; // [rsp+2588h] [rbp+2488h] BYREF
    std::uint8_t stackStorage1348[128]; // [rsp+2590h] [rbp+2490h] BYREF
    std::uint8_t stackStorage1349[8]; // [rsp+2610h] [rbp+2510h] BYREF
    std::uint8_t stackStorage1350[8]; // [rsp+2618h] [rbp+2518h] BYREF
    std::uint8_t stackStorage1351[128]; // [rsp+2620h] [rbp+2520h] BYREF
    std::uint8_t stackStorage1352[8]; // [rsp+26A0h] [rbp+25A0h] BYREF
    std::uint8_t stackStorage1353[136]; // [rsp+26A8h] [rbp+25A8h] BYREF
    std::uint8_t stackStorage1354[72]; // [rsp+2730h] [rbp+2630h] BYREF
    std::uint8_t stackStorage1355[140]; // [rsp+2778h] [rbp+2678h] BYREF
    int opaqueValue1356; // [rsp+2804h] [rbp+2704h]
    std::int64_t opaqueValue1357; // [rsp+2868h] [rbp+2768h] BYREF
    std::uint8_t stackStorage1358[320]; // [rsp+2870h] [rbp+2770h] BYREF
    std::uint8_t stackStorage1359[4]; // [rsp+29B0h] [rbp+28B0h] BYREF
    int opaqueValue1360; // [rsp+29B4h] [rbp+28B4h]
    std::uint8_t stackStorage1361[136]; // [rsp+29B8h] [rbp+28B8h] BYREF
    std::uint8_t stackStorage1362[40]; // [rsp+2A40h] [rbp+2940h] BYREF
    std::uint8_t stackStorage1363[272]; // [rsp+2A68h] [rbp+2968h] BYREF
    std::int64_t opaqueValue1364; // [rsp+2B78h] [rbp+2A78h]
    std::uint8_t stackStorage1365[8]; // [rsp+2B80h] [rbp+2A80h] BYREF
    std::uint8_t stackStorage1366[136]; // [rsp+2B88h] [rbp+2A88h] BYREF
    std::uint8_t stackStorage1367[8]; // [rsp+2C10h] [rbp+2B10h] BYREF
    std::uint8_t stackStorage1368[136]; // [rsp+2C18h] [rbp+2B18h] BYREF
    std::uint8_t stackStorage1369[8]; // [rsp+2CA0h] [rbp+2BA0h] BYREF
    std::uint8_t stackStorage1370[136]; // [rsp+2CA8h] [rbp+2BA8h] BYREF
    std::uint8_t stackStorage1371[8]; // [rsp+2D30h] [rbp+2C30h] BYREF
    std::uint8_t stackStorage1372[136]; // [rsp+2D38h] [rbp+2C38h] BYREF
    std::uint8_t stackStorage1373[8]; // [rsp+2DC0h] [rbp+2CC0h] BYREF
    std::uint8_t stackStorage1374[328]; // [rsp+2DC8h] [rbp+2CC8h] BYREF
    std::uint8_t stackStorage1375[320]; // [rsp+2F10h] [rbp+2E10h] BYREF
    std::uint8_t stackStorage1376[288]; // [rsp+3050h] [rbp+2F50h] BYREF
    std::uint8_t stackStorage1377[32]; // [rsp+3170h] [rbp+3070h] BYREF
    std::uint8_t stackStorage1378[312]; // [rsp+3190h] [rbp+3090h] BYREF
    std::int64_t opaqueValue1379; // [rsp+32C8h] [rbp+31C8h]
    std::uint8_t stackStorage1380[320]; // [rsp+32D0h] [rbp+31D0h] BYREF
    std::uint8_t stackStorage1381[320]; // [rsp+3410h] [rbp+3310h] BYREF
    std::uint8_t stackStorage1382[312]; // [rsp+3550h] [rbp+3450h] BYREF
    std::int64_t opaqueValue1383; // [rsp+3688h] [rbp+3588h]
    std::uint8_t stackStorage1384[320]; // [rsp+3690h] [rbp+3590h] BYREF
    std::uint8_t stackStorage1385[320]; // [rsp+37D0h] [rbp+36D0h] BYREF
    std::uint8_t stackStorage1386[320]; // [rsp+3910h] [rbp+3810h] BYREF
    std::uint8_t stackStorage1387[8]; // [rsp+3A50h] [rbp+3950h] BYREF
    std::uint8_t stackStorage1388[328]; // [rsp+3A58h] [rbp+3958h] BYREF
    std::uint8_t stackStorage1389[320]; // [rsp+3BA0h] [rbp+3AA0h] BYREF
    std::uint8_t stackStorage1390[320]; // [rsp+3CE0h] [rbp+3BE0h] BYREF
    std::uint8_t stackStorage1391[320]; // [rsp+3E20h] [rbp+3D20h] BYREF
    std::uint8_t stackStorage1392[320]; // [rsp+3F60h] [rbp+3E60h] BYREF
    std::uint8_t stackStorage1393[320]; // [rsp+40A0h] [rbp+3FA0h] BYREF
    std::uint8_t stackStorage1394[320]; // [rsp+41E0h] [rbp+40E0h] BYREF
    std::uint8_t stackStorage1395[320]; // [rsp+4320h] [rbp+4220h] BYREF
    std::uint8_t stackStorage1396[320]; // [rsp+4460h] [rbp+4360h] BYREF
    std::uint8_t stackStorage1397[320]; // [rsp+45A0h] [rbp+44A0h] BYREF
    std::uint8_t stackStorage1398[320]; // [rsp+46E0h] [rbp+45E0h] BYREF
    std::uint8_t stackStorage1399[320]; // [rsp+4820h] [rbp+4720h] BYREF
    std::uint8_t stackStorage1400[320]; // [rsp+4960h] [rbp+4860h] BYREF
    std::uint8_t stackStorage1401[320]; // [rsp+4AA0h] [rbp+49A0h] BYREF
    std::uint8_t stackStorage1402[320]; // [rsp+4BE0h] [rbp+4AE0h] BYREF
    std::uint8_t stackStorage1403[320]; // [rsp+4D20h] [rbp+4C20h] BYREF
    std::uint8_t stackStorage1404[320]; // [rsp+4E60h] [rbp+4D60h] BYREF
    std::uint8_t stackStorage1405[320]; // [rsp+4FA0h] [rbp+4EA0h] BYREF
    std::uint8_t stackStorage1406[320]; // [rsp+50E0h] [rbp+4FE0h] BYREF
    char stackStorage1407[320]; // [rsp+5220h] [rbp+5120h] BYREF
    char stackStorage1408[8]; // [rsp+5360h] [rbp+5260h] BYREF
    char stackStorage1409[328]; // [rsp+5368h] [rbp+5268h] BYREF
    char stackStorage1410[8]; // [rsp+54B0h] [rbp+53B0h] BYREF
    std::uint8_t stackStorage1411[328]; // [rsp+54B8h] [rbp+53B8h] BYREF
    std::uint8_t stackStorage1412[320]; // [rsp+5600h] [rbp+5500h] BYREF
    std::uint8_t stackStorage1413[320]; // [rsp+5740h] [rbp+5640h] BYREF
    std::uint8_t stackStorage1414[320]; // [rsp+5880h] [rbp+5780h] BYREF
    std::uint8_t stackStorage1415[320]; // [rsp+59C0h] [rbp+58C0h] BYREF
    std::uint8_t stackStorage1416[320]; // [rsp+5B00h] [rbp+5A00h] BYREF

    opaqueValue2 = 0;
    opaqueValue3 = 0;
    opaqueValue633 = 0;
    if (**(std::uint8_t**)(*authManager + 1576) == 0)
    {
    label690:
        opaqueValue610 = sub_180011290 (authManager);
        sub_180024E50 (stackStorage867, opaqueValue610 + 1168);
        opaqueValue608 = sub_180011290 (authManager);
        p_lpCriticalSection = (LPCRITICAL_SECTION*)stackStorage867;
        goto label691;
    }
    while (1)
    {
        lpCriticalSection = (LPCRITICAL_SECTION)(*authManager + 1168);
        EnterCriticalSection (lpCriticalSection);
        if (*(std::uint64_t*)(*authManager + 384) == 0)
            break;
        opaqueValue4 = *(std::uint32_t*)sub_180372690 (*authManager + 352, 0);
        sub_180371DD0 (*authManager + 352);
        if (opaqueValue4 == 6)
        {
            *(std::uint8_t*)(*authManager + 1705) = 1;
            opaqueValue5 = *(std::uint64_t*)(*authManager + 1680);
            *(std::uint64_t*)(*authManager + 1712) = opaqueValue5;
            LeaveCriticalSection (lpCriticalSection);
            sub_180081080 (stackStorage664, authManager);
            sub_18002C900 (stackStorage644);
            sub_18002C900 (stackStorage643);
            sub_18002C900 (stackStorage642);
            sub_18002C900 (stackStorage641);
            opaqueValue6 = sub_180011290 (authManager);
            sub_180024E50 (stackStorage685, opaqueValue6 + 1168);
            opaqueValue7 = sub_180011290 (authManager);
            if ((std::uint8_t)sub_18000B5A0 (opaqueValue7 + 8) == 0)
            {
                opaqueValue8 = sub_180011290 (authManager);
                if ((std::uint8_t)sub_180097F90 (opaqueValue8 + 72, "FAD-AUTH-KEYSTORE-READ") == 0)
                {
                    opaqueValue9 = sub_180011290 (authManager);
                    if ((std::uint8_t)sub_180097F90 (opaqueValue9 + 72, "FAD-AUTH-STATE-SCHEMA") == 0)
                    {
                        opaqueValue10 = sub_180011290 (authManager);
                        if ((std::uint8_t)sub_180097F90 (opaqueValue10 + 72, "FAD-AUTH-STATE-CORRUPT") == 0)
                        {
                            opaqueValue11 = sub_180011290 (authManager);
                            if (sub_18007EF80 (opaqueValue11 + 1680, 2) == opaqueValue5)
                            {
                                opaqueValue12 = sub_180011290 (authManager);
                                sub_18008BD60 (stackStorage644, opaqueValue12 + 320);
                                opaqueValue13 = sub_180011290 (authManager);
                                sub_18008BD60 (stackStorage643, opaqueValue13 + 328);
                                opaqueValue14 = sub_180011290 (authManager);
                                sub_18008BD60 (stackStorage642, opaqueValue14 + 336);
                                opaqueValue15 = sub_180011290 (authManager);
                                sub_18008BD60 (stackStorage641, opaqueValue15 + 344);
                                sub_180024E40 (stackStorage685);
                                sub_1800783E0 (stackStorage637);
                                opaqueValue16 = sub_180011290 (stackStorage637);
                                sub_1800A3560 (stackStorage944, stackStorage641);
                                sub_180096D60 (stackStorage708, "inviteCode");
                                sub_1800A6D50 (opaqueValue16, stackStorage708, stackStorage944);
                                sub_18000B8D0 (stackStorage708);
                                sub_1800A3440 (stackStorage944);
                                opaqueValue17 = sub_180011290 (stackStorage637);
                                sub_1800A3560 (stackStorage945, stackStorage643);
                                sub_180096D60 (stackStorage759, "platform");
                                sub_1800A6D50 (opaqueValue17, stackStorage759, stackStorage945);
                                sub_18000B8D0 (stackStorage759);
                                sub_1800A3440 (stackStorage945);
                                opaqueValue18 = sub_180011290 (stackStorage637);
                                sub_1800A3560 (stackStorage946, stackStorage642);
                                sub_180096D60 (stackStorage760, "plugin_version");
                                sub_1800A6D50 (opaqueValue18, stackStorage760, stackStorage946);
                                sub_18000B8D0 (stackStorage760);
                                sub_1800A3440 (stackStorage946);
                                opaqueValue19 = sub_18007EE10 (stackStorage637);
                                opaqueValue20 = sub_1800A35C0 (stackStorage1314, opaqueValue19);
                                sub_1800A6950 (stackStorage646, opaqueValue20, 0, 15);
                                sub_1800A3440 (stackStorage1314);
                                sub_1800971D0 (stackStorage761, "Content-Type: application/json");
                                opaqueValue21 = sub_18008BD40 (stackStorage868, stackStorage644);
                                opaqueValue22 = sub_180098780 (stackStorage869, opaqueValue21, "/device/register");
                                sub_180362620 ((unsigned int)&opaqueValue665, (std::uint32_t)authManager, opaqueValue22, (unsigned int)stackStorage646, (std::int64_t)stackStorage761, 10000);
                                sub_18000B8D0 (stackStorage869);
                                sub_18000B8D0 (stackStorage761);
                                opaqueValue23 = sub_180011290 (authManager);
                                opaqueValue24 = sub_180011290 (opaqueValue23 + 1576);
                                if ((std::uint8_t)sub_180024DA0 (opaqueValue24, 2) == 0)
                                {
                                    sub_180051CF0 (&opaqueValue665);
                                    sub_18000B8D0 (stackStorage646);
                                    sub_180022890 (stackStorage637);
                                    sub_18000B8D0 (stackStorage641);
                                    sub_18000B8D0 (stackStorage642);
                                    sub_18000B8D0 (stackStorage643);
                                    sub_18000B8D0 (stackStorage644);
                                    return sub_180371830 (stackStorage664);
                                }
                                opaqueValue25 = sub_180011290 (authManager);
                                if (sub_18007EF80 (opaqueValue25 + 1680, 2) != opaqueValue5)
                                    goto label37;
                                if (stackStorage666[8] != 0)
                                {
                                    sub_1800971D0 (stackStorage682, "AuthManager: register failed - network error");
                                    juceLoggerWriteDefaultLog (stackStorage682);
                                    sub_18000B8D0 (stackStorage682);
                                    sub_1803552A0 (stackStorage1392);
                                    opaqueValue52 = sub_180011290 (authManager);
                                    sub_180024E50 (stackStorage684, opaqueValue52 + 1168);
                                    opaqueValue53 = sub_180011290 (authManager);
                                    if (sub_18007EF80 (opaqueValue53 + 1680, 2) != opaqueValue5)
                                    {
                                        sub_180024E40 (stackStorage684);
                                        sub_180058EA0 (stackStorage1392);
                                        goto label37;
                                    }
                                    sub_1800971D0 (stackStorage683, "FAD-REG-NETWORK");
                                    opaqueValue54 = sub_18009BD70 (stackStorage875, &unk_180F77540, 0xFFFFFFFFLL);
                                    opaqueValue55 = sub_180011290 (authManager);
                                    sub_18035AAD0 (opaqueValue55, opaqueValue54, stackStorage683, opaqueValue665);
                                    sub_18000B8D0 (stackStorage875);
                                    sub_18000B8D0 (stackStorage683);
                                    opaqueValue56 = sub_180011290 (authManager);
                                    authStateNextEventSeq (opaqueValue56);
                                    opaqueValue57 = sub_180011290 (authManager);
                                    sub_18035D830 (stackStorage1392, opaqueValue57);
                                    sub_180024E40 (stackStorage684);
                                    authEventsPersistAndDispatch (authManager, (std::int64_t)stackStorage1392, 0);
                                    sub_180058EA0 (stackStorage1392);
                                }
                                else
                                {
                                    sub_1800462D0 (stackStorage935, stackStorage666);
                                    opaqueValue26 = sub_1800A3750 (stackStorage935);
                                    if (opaqueValue26 != 0)
                                    {
                                        sub_180096D60 (stackStorage762, "code");
                                        opaqueValue27 = sub_1800A6D10 (opaqueValue26, stackStorage762);
                                        sub_1800A3700 (opaqueValue27, stackStorage651);
                                        sub_18000B8D0 (stackStorage762);
                                        sub_180096D60 (stackStorage763, "deviceSecret");
                                        opaqueValue28 = sub_1800A6D10 (opaqueValue26, stackStorage763);
                                        sub_1800A3700 (opaqueValue28, stackStorage660);
                                        sub_18000B8D0 (stackStorage763);
                                        if ((std::uint8_t)sub_18000B5A0 (stackStorage651) != 0)
                                        {
                                            sub_1803552A0 (stackStorage1389);
                                            opaqueValue29 = sub_180011290 (authManager);
                                            sub_180024E50 (stackStorage764, opaqueValue29 + 1168);
                                            opaqueValue30 = sub_180011290 (authManager);
                                            if (sub_18007EF80 (opaqueValue30 + 1680, 2) == opaqueValue5)
                                            {
                                                opaqueValue31 = sub_180011290 (authManager);
                                                sub_18008BD60 (opaqueValue31 + 8, stackStorage651);
                                                opaqueValue32 = sub_180011290 (authManager);
                                                sub_18008BD60 (opaqueValue32 + 16, stackStorage660);
                                                opaqueValue33 = sub_180011290 (authManager);
                                                sub_18035AB80 (opaqueValue33);
                                                opaqueValue34 = sub_180011290 (authManager);
                                                authStateNextEventSeq (opaqueValue34);
                                                opaqueValue35 = sub_180011290 (authManager);
                                                sub_18035D830 (stackStorage1389, opaqueValue35);
                                                sub_180024E40 (stackStorage764);
                                                authEventsPersistAndDispatch (authManager, (std::int64_t)stackStorage1389, 0);
                                                authManagerNotifyStateChangedAsync (authManager);
                                            }
                                            else
                                            {
                                                sub_180024E40 (stackStorage764);
                                            }
                                            sub_180058EA0 (stackStorage1389);
                                        label20:
                                            sub_18000B8D0 (stackStorage660);
                                            sub_18000B8D0 (stackStorage651);
                                            sub_1800A3440 (stackStorage935);
                                        label37:
                                            sub_180051CF0 (&opaqueValue665);
                                            sub_18000B8D0 (stackStorage646);
                                            sub_180022890 (stackStorage637);
                                        label38:
                                            sub_18000B8D0 (stackStorage641);
                                            sub_18000B8D0 (stackStorage642);
                                            sub_18000B8D0 (stackStorage643);
                                            sub_18000B8D0 (stackStorage644);
                                            sub_180371830 (stackStorage664);
                                            goto label679;
                                        }
                                        sub_1800971D0 (stackStorage676, "FAD-REG-SERVER");
                                        sub_1800971D0 (stackStorage765, "Registration failed");
                                        sub_18035AAB0 (stackStorage663, opaqueValue26, stackStorage765, stackStorage676);
                                        sub_18000B8D0 (stackStorage765);
                                        sub_18000B8D0 (stackStorage676);
                                        prefixedString36 = juceStringJoinUtf8Prefix (stackStorage870, "AuthManager: register failed: ", stackStorage663);
                                        juceLoggerWriteDefaultLog (prefixedString36);
                                        sub_18000B8D0 (stackStorage870);
                                        sub_1803552A0 (stackStorage1390);
                                        opaqueValue37 = sub_180011290 (authManager);
                                        sub_180024E50 (stackStorage678, opaqueValue37 + 1168);
                                        opaqueValue38 = sub_180011290 (authManager);
                                        if (sub_18007EF80 (opaqueValue38 + 1680, 2) != opaqueValue5)
                                        {
                                            sub_180024E40 (stackStorage678);
                                            sub_180058EA0 (stackStorage1390);
                                            sub_18000B8D0 (stackStorage663);
                                            goto label20;
                                        }
                                        sub_180096D60 (stackStorage677, "errorCode");
                                        opaqueValue39 = sub_1800A6D10 (opaqueValue26, stackStorage677);
                                        opaqueValue40 = sub_1800A3700 (opaqueValue39, stackStorage871);
                                        juceStringTrimWhitespace (opaqueValue40, stackStorage674);
                                        sub_18000B8D0 (stackStorage871);
                                        sub_18000B8D0 (stackStorage677);
                                        opaqueValue41 = opaqueValue665;
                                        if ((std::uint8_t)sub_18000B5A0 (stackStorage674) != 0)
                                        {
                                            opaqueValue42 = sub_18008BD40 (stackStorage873, stackStorage674);
                                            opaqueValue2 |= 0x8000u;
                                        }
                                        else
                                        {
                                            opaqueValue42 = sub_1800971D0 (stackStorage872, "FAD-REG-SERVER");
                                            opaqueValue2 |= 0x10000u;
                                        }
                                        opaqueValue43 = sub_180011290 (authManager);
                                        sub_18035AAD0 (opaqueValue43, stackStorage663, opaqueValue42, opaqueValue41);
                                        if ((opaqueValue2 & 0x10000) != 0)
                                        {
                                            opaqueValue2 &= ~0x10000u;
                                            sub_18000B8D0 (stackStorage872);
                                        }
                                        if ((opaqueValue2 & 0x8000) != 0)
                                        {
                                            opaqueValue2 &= ~0x8000u;
                                            sub_18000B8D0 (stackStorage873);
                                        }
                                        opaqueValue44 = sub_180011290 (authManager);
                                        authStateNextEventSeq (opaqueValue44);
                                        opaqueValue45 = sub_180011290 (authManager);
                                        sub_18035D830 (stackStorage1390, opaqueValue45);
                                        sub_18000B8D0 (stackStorage674);
                                        sub_180024E40 (stackStorage678);
                                        authEventsPersistAndDispatch (authManager, (std::int64_t)stackStorage1390, 0);
                                        sub_180058EA0 (stackStorage1390);
                                        sub_18000B8D0 (stackStorage663);
                                        sub_18000B8D0 (stackStorage660);
                                        sub_18000B8D0 (stackStorage651);
                                    }
                                    else
                                    {
                                        sub_1800971D0 (stackStorage679, "AuthManager: register failed - invalid response");
                                        juceLoggerWriteDefaultLog (stackStorage679);
                                        sub_18000B8D0 (stackStorage679);
                                        sub_1803552A0 (stackStorage1391);
                                        opaqueValue46 = sub_180011290 (authManager);
                                        sub_180024E50 (stackStorage681, opaqueValue46 + 1168);
                                        opaqueValue47 = sub_180011290 (authManager);
                                        if (sub_18007EF80 (opaqueValue47 + 1680, 2) != opaqueValue5)
                                        {
                                            sub_180024E40 (stackStorage681);
                                            sub_180058EA0 (stackStorage1391);
                                            sub_1800A3440 (stackStorage935);
                                            goto label37;
                                        }
                                        sub_1800971D0 (stackStorage680, "FAD-REG-BAD-JSON");
                                        opaqueValue48 = sub_18009BD70 (stackStorage874, &unk_180F77330, 0xFFFFFFFFLL);
                                        opaqueValue49 = sub_180011290 (authManager);
                                        sub_18035AAD0 (opaqueValue49, opaqueValue48, stackStorage680, opaqueValue665);
                                        sub_18000B8D0 (stackStorage874);
                                        sub_18000B8D0 (stackStorage680);
                                        opaqueValue50 = sub_180011290 (authManager);
                                        authStateNextEventSeq (opaqueValue50);
                                        opaqueValue51 = sub_180011290 (authManager);
                                        sub_18035D830 (stackStorage1391, opaqueValue51);
                                        sub_180024E40 (stackStorage681);
                                        authEventsPersistAndDispatch (authManager, (std::int64_t)stackStorage1391, 0);
                                        sub_180058EA0 (stackStorage1391);
                                    }
                                    sub_1800A3440 (stackStorage935);
                                }
                                authManagerNotifyStateChangedAsync (authManager);
                                goto label37;
                            }
                        }
                    }
                }
            }
            sub_180024E40 (stackStorage685);
            goto label38;
        }
        if (opaqueValue4 == 7)
        {
            *(std::uint8_t*)(*authManager + 1720) = 1;
            LeaveCriticalSection (lpCriticalSection);
            sub_180081080 (stackStorage647, authManager);
            sub_18002C900 (stackStorage624);
            sub_18002C900 (stackStorage626);
            sub_18002C900 (stackStorage621);
            sub_18002C900 (stackStorage623);
            opaqueValue58 = sub_180011290 (authManager);
            sub_180024E50 (stackStorage876, opaqueValue58 + 1168);
            opaqueValue59 = sub_180011290 (authManager);
            sub_18008BD60 (stackStorage624, opaqueValue59 + 8);
            opaqueValue60 = sub_180011290 (authManager);
            sub_18008BD60 (stackStorage626, opaqueValue60 + 320);
            opaqueValue61 = sub_180011290 (authManager);
            sub_18008BD60 (stackStorage621, opaqueValue61 + 24);
            opaqueValue62 = sub_180011290 (authManager);
            sub_18008BD60 (stackStorage623, opaqueValue62 + 16);
            opaqueValue63 = sub_180011290 (authManager);
            opaqueValue64 = sub_18007EF80 (opaqueValue63 + 1680, 2);
            sub_180024E40 (stackStorage876);
            if ((std::uint8_t)sub_18000B590 (stackStorage624) != 0)
                goto label192;
            sub_1800783E0 (stackStorage622);
            opaqueValue65 = sub_180011290 (stackStorage622);
            sub_1800A3560 (stackStorage947, stackStorage624);
            sub_180096D60 (stackStorage686, "code");
            sub_1800A6D50 (opaqueValue65, stackStorage686, stackStorage947);
            sub_18000B8D0 (stackStorage686);
            sub_1800A3440 (stackStorage947);
            if ((std::uint8_t)sub_18000B590 (stackStorage621) != 0 && (std::uint8_t)sub_18000B5A0 (stackStorage623) != 0)
            {
                opaqueValue66 = sub_180011290 (stackStorage622);
                sub_1800A3560 (stackStorage948, stackStorage623);
                sub_180096D60 (stackStorage687, "deviceSecret");
                sub_1800A6D50 (opaqueValue66, stackStorage687, stackStorage948);
                sub_18000B8D0 (stackStorage687);
                sub_1800A3440 (stackStorage948);
            }
            sub_1800971D0 (stackStorage627, "Content-Type: application/json");
            opaqueValue67 = sub_18000B5A0 (stackStorage621);
            opaqueValue615 = opaqueValue67;
            opaqueValue68 = sub_180011290 (authManager);
            sub_180024E50 (stackStorage877, opaqueValue68 + 1168);
            if (opaqueValue67 != 0 && *(std::uint8_t*)(sub_180011290 (authManager) + 224) != 0)
            {
                opaqueValue69 = sub_180011290 (authManager);
                if ((std::uint8_t)sub_18000B5A0 (opaqueValue69 + 88) != 0)
                {
                    opaqueValue70 = sub_180011290 (stackStorage622);
                    opaqueValue71 = sub_180011290 (authManager);
                    sub_1800A3560 (stackStorage949, opaqueValue71 + 88);
                    sub_180096D60 (stackStorage688, "tokenDeliveryNonce");
                    sub_1800A6D50 (opaqueValue70, stackStorage688, stackStorage949);
                    sub_18000B8D0 (stackStorage688);
                    sub_1800A3440 (stackStorage949);
                }
            }
            sub_180024E40 (stackStorage877);
            if (opaqueValue67 != 0)
            {
                prefixedString72 = juceStringJoinUtf8Prefix (stackStorage771, "\r\nAuthorization: Bearer ", stackStorage621);
                juceStringAppendString (stackStorage627, prefixedString72);
                sub_18000B8D0 (stackStorage771);
            }
            opaqueValue73 = sub_18007EE10 (stackStorage622);
            opaqueValue74 = sub_1800A35C0 (stackStorage1315, opaqueValue73);
            sub_1800A6950 (stackStorage628, opaqueValue74, 0, 15);
            sub_1800A3440 (stackStorage1315);
            opaqueValue75 = sub_18008BD40 (stackStorage772, stackStorage626);
            opaqueValue76 = sub_180098780 (stackStorage773, opaqueValue75, "/device/check");
            sub_180362620 ((unsigned int)&opaqueValue639, (std::uint32_t)authManager, opaqueValue76, (unsigned int)stackStorage628, (std::int64_t)stackStorage627, 10000);
            sub_18000B8D0 (stackStorage773);
            opaqueValue649 = (LPCRITICAL_SECTION)sub_180057FD0();
            opaqueValue77 = sub_180011290 (authManager);
            opaqueValue78 = sub_180011290 (opaqueValue77 + 1576);
            if ((std::uint8_t)sub_180024DA0 (opaqueValue78, 2) == 0)
            {
                sub_180051CF0 (&opaqueValue639);
                sub_18000B8D0 (stackStorage628);
                sub_18000B8D0 (stackStorage627);
                sub_180022890 (stackStorage622);
                sub_18000B8D0 (stackStorage623);
                sub_18000B8D0 (stackStorage621);
                sub_18000B8D0 (stackStorage626);
                sub_18000B8D0 (stackStorage624);
                return sub_1803717D0 (stackStorage647);
            }
            opaqueValue79 = sub_180011290 (authManager);
            if (sub_18007EF80 (opaqueValue79 + 1680, 2) != opaqueValue64)
                goto label191;
            if (stackStorage640[8] != 0)
            {
                sub_1803552A0 (stackStorage1393);
                opaqueValue80 = sub_180011290 (authManager);
                sub_180024E50 (stackStorage690, opaqueValue80 + 1168);
                opaqueValue81 = sub_180011290 (authManager);
                if (sub_18007EF80 (opaqueValue81 + 1680, 2) != opaqueValue64)
                {
                    sub_180024E40 (stackStorage690);
                    sub_180058EA0 (stackStorage1393);
                    goto label191;
                }
                if (opaqueValue67 != 0 && *(std::uint8_t*)(sub_180011290 (authManager) + 224) != 0)
                {
                    opaqueValue82 = sub_180011290 (authManager);
                    if ((std::uint8_t)sub_18000B5A0 (opaqueValue82 + 88) != 0)
                    {
                        opaqueValue83 = 1;
                        goto label61;
                    }
                }
                opaqueValue83 = 0;
                if (opaqueValue67 != 0)
                {
                label61:
                    if (*(std::uint8_t*)sub_180011290 (authManager) == 0)
                    {
                        opaqueValue84 = 1;
                    label64:
                        if (opaqueValue83 == 0 && opaqueValue84 == 0)
                        {
                            opaqueValue85 = sub_180011290 (authManager);
                            sub_18035A620 (opaqueValue85);
                        }
                        opaqueValue86 = sub_180011290 (authManager);
                        if ((std::uint8_t)sub_180359F70 (opaqueValue86 + 72) == 0)
                        {
                            sub_1800971D0 (stackStorage689, "FAD-CHK-NETWORK");
                            opaqueValue87 = sub_18009BD70 (stackStorage774, &unk_180F774E0, 0xFFFFFFFFLL);
                            opaqueValue88 = sub_180011290 (authManager);
                            sub_18035AAD0 (opaqueValue88, opaqueValue87, stackStorage689, opaqueValue639);
                            sub_18000B8D0 (stackStorage774);
                            sub_18000B8D0 (stackStorage689);
                        }
                        opaqueValue89 = sub_180011290 (authManager);
                        authStateNextEventSeq (opaqueValue89);
                        opaqueValue90 = sub_180011290 (authManager);
                        sub_18035D830 (stackStorage1393, opaqueValue90);
                        sub_180024E40 (stackStorage690);
                        authEventsPersistAndDispatch (authManager, (std::int64_t)stackStorage1393, 0);
                        authManagerNotifyStateChangedAsync (authManager);
                        sub_180058EA0 (stackStorage1393);
                    label191:
                        sub_180051CF0 (&opaqueValue639);
                        sub_18000B8D0 (stackStorage628);
                        sub_18000B8D0 (stackStorage627);
                        sub_180022890 (stackStorage622);
                    label192:
                        sub_18000B8D0 (stackStorage623);
                        sub_18000B8D0 (stackStorage621);
                        sub_18000B8D0 (stackStorage626);
                        sub_18000B8D0 (stackStorage624);
                        sub_1803717D0 (stackStorage647);
                        goto label679;
                    }
                }
                opaqueValue84 = 0;
                goto label64;
            }
            sub_1800462D0 (stackStorage928, stackStorage640);
            opaqueValue91 = sub_1800A3750 (stackStorage928);
            if (opaqueValue91 == 0)
            {
                sub_1803552A0 (stackStorage1394);
                opaqueValue92 = sub_180011290 (authManager);
                sub_180024E50 (stackStorage692, opaqueValue92 + 1168);
                opaqueValue93 = sub_180011290 (authManager);
                if (sub_18007EF80 (opaqueValue93 + 1680, 2) != opaqueValue64)
                {
                    sub_180024E40 (stackStorage692);
                    sub_180058EA0 (stackStorage1394);
                label190:
                    sub_1800A3440 (stackStorage928);
                    goto label191;
                }
                if (opaqueValue67 != 0 && *(std::uint8_t*)(sub_180011290 (authManager) + 224) != 0)
                {
                    opaqueValue94 = sub_180011290 (authManager);
                    if ((std::uint8_t)sub_18000B5A0 (opaqueValue94 + 88) != 0)
                    {
                        opaqueValue95 = 1;
                        goto label78;
                    }
                }
                opaqueValue95 = 0;
                if (opaqueValue67 != 0)
                {
                label78:
                    if (*(std::uint8_t*)sub_180011290 (authManager) == 0)
                    {
                        opaqueValue96 = 1;
                        goto label81;
                    }
                }
                opaqueValue96 = 0;
            label81:
                if (opaqueValue95 == 0 && opaqueValue96 == 0)
                {
                    opaqueValue97 = sub_180011290 (authManager);
                    sub_18035A620 (opaqueValue97);
                }
                opaqueValue98 = sub_180011290 (authManager);
                if ((std::uint8_t)sub_180359F70 (opaqueValue98 + 72) == 0)
                {
                    sub_1800971D0 (stackStorage691, "FAD-CHK-BAD-JSON");
                    opaqueValue99 = sub_18009BD70 (stackStorage775, &unk_180F77480, 0xFFFFFFFFLL);
                    opaqueValue100 = sub_180011290 (authManager);
                    sub_18035AAD0 (opaqueValue100, opaqueValue99, stackStorage691, opaqueValue639);
                    sub_18000B8D0 (stackStorage775);
                    sub_18000B8D0 (stackStorage691);
                }
                opaqueValue101 = sub_180011290 (authManager);
                authStateNextEventSeq (opaqueValue101);
                opaqueValue102 = sub_180011290 (authManager);
                sub_18035D830 (stackStorage1394, opaqueValue102);
                sub_180024E40 (stackStorage692);
                authEventsPersistAndDispatch (authManager, (std::int64_t)stackStorage1394, 0);
                authManagerNotifyStateChangedAsync (authManager);
                sub_180058EA0 (stackStorage1394);
                goto label190;
            }
            opaqueValue634 = 0;
            sub_180096D60 (stackStorage693, "serverNowMs");
            opaqueValue2 |= 0x20000u;
            conditionFlag103 = (std::uint8_t)sub_180352E20 (opaqueValue91, stackStorage693, &opaqueValue634) == 0 || opaqueValue634 <= 0;
            if ((opaqueValue2 & 0x20000) != 0)
            {
                opaqueValue2 &= ~0x20000u;
                sub_18000B8D0 (stackStorage693);
            }
            if (conditionFlag103)
                opaqueValue634 = 0;
            sub_18002C900 (stackStorage694);
            sub_18035A810 (stackStorage632, opaqueValue91, stackStorage694);
            sub_18000B8D0 (stackStorage694);
            if ((std::uint8_t)sub_18000B5A0 (stackStorage632) != 0)
            {
                sub_180096D60 (stackStorage695, "errorCode");
                opaqueValue104 = sub_1800A6D10 (opaqueValue91, stackStorage695);
                sub_1800A3700 (opaqueValue104, stackStorage636);
                sub_18000B8D0 (stackStorage695);
                sub_1803552A0 (stackStorage1395);
                opaqueValue105 = sub_180011290 (authManager);
                sub_180024E50 (stackStorage696, opaqueValue105 + 1168);
                opaqueValue106 = sub_180011290 (authManager);
                if (sub_18007EF80 (opaqueValue106 + 1680, 2) != opaqueValue64)
                {
                    sub_180024E40 (stackStorage696);
                    goto label137;
                }
                opaqueValue107 = sub_180011290 (authManager);
                sub_18035AAD0 (opaqueValue107, stackStorage632, stackStorage636, opaqueValue639);
                opaqueValue108 = sub_180359EC0 (stackStorage636);
                if (opaqueValue67 == 0 || *(std::uint8_t*)(sub_180011290 (authManager) + 224) == 0 || opaqueValue108 != 0)
                    goto label106;
                opaqueValue109 = opaqueValue639;
                if (opaqueValue639 == 401)
                    goto label105;
                if ((std::uint8_t)sub_180097F90 (stackStorage636, "FAD-CHK-TOKEN-RACE") != 0 || (std::uint8_t)sub_180097F90 (stackStorage636, "FAD-CHK-UNAUTHORIZED") != 0)
                {
                    opaqueValue109 = opaqueValue639;
                label105:
                    opaqueValue110 = 1;
                    opaqueValue111 = sub_180359F00 (stackStorage636, opaqueValue109);
                    opaqueValue112 = opaqueValue615;
                label107:
                    if (*(std::uint8_t*)(sub_180011290 (authManager) + 224) == 0 && opaqueValue108 == 0 && (opaqueValue639 == 401 || (std::uint8_t)sub_180097F90 (stackStorage636, "FAD-CHK-UNAUTHORIZED") != 0) && (std::uint8_t)sub_180097FC0 (stackStorage636, "FAD-CHK-TRIAL-EXPIRED") != 0 && opaqueValue111 == 0)
                    {
                        opaqueValue113 = 1;
                        opaqueValue114 = 0;
                        opaqueValue115 = sub_180011290 (authManager);
                        if ((std::uint8_t)sub_18000B5A0 (opaqueValue115 + 32) != 0)
                        {
                            opaqueValue116 = sub_180011290 (authManager);
                            opaqueValue114 = sub_18034F920 (opaqueValue116 + 1592);
                            if (opaqueValue114 == 0)
                            {
                                opaqueValue117 = sub_180011290 (authManager);
                                if ((std::uint8_t)sub_18034F910 (opaqueValue117 + 1592) != 0)
                                {
                                    opaqueValue118 = sub_180011290 (authManager);
                                    sub_180366280 (opaqueValue118, 9);
                                    opaqueValue114 = 1;
                                    goto label119;
                                }
                            }
                        }
                    label118:
                        if (opaqueValue112 != 0)
                        {
                        label119:
                            if (*(std::uint8_t*)sub_180011290 (authManager) == 0)
                            {
                                opaqueValue119 = 1;
                                goto label122;
                            }
                        }
                        opaqueValue119 = 0;
                    label122:
                        if ((std::uint8_t)sub_180097F90 (stackStorage636, "FAD-CHK-TRIAL-EXPIRED") != 0)
                        {
                            opaqueValue120 = sub_180011290 (authManager);
                            sub_18035A420 (opaqueValue120);
                        }
                        else
                        {
                            if ((std::uint8_t)sub_180359FE0 (stackStorage636) == 0 || *(std::uint8_t*)(sub_180011290 (authManager) + 225) != 0)
                            {
                                if (opaqueValue110 == 0 && opaqueValue111 == 0)
                                {
                                    if (opaqueValue114 != 0)
                                        goto label134;
                                    if (opaqueValue113 == 0)
                                    {
                                        if (opaqueValue119 == 0)
                                        {
                                            opaqueValue122 = sub_180011290 (authManager);
                                            sub_18035A620 (opaqueValue122);
                                        }
                                        goto label134;
                                    }
                                }
                                opaqueValue123 = sub_180011290 (authManager);
                                sub_18035A390 (opaqueValue123);
                                goto label134;
                            }
                            opaqueValue121 = sub_180011290 (authManager);
                            sub_18035A020 (opaqueValue121);
                        }
                    label134:
                        opaqueValue124 = opaqueValue634;
                        if (opaqueValue634 > 0)
                            *(std::uint64_t*)(sub_180011290 (authManager) + 176) = opaqueValue124;
                        opaqueValue125 = sub_180011290 (authManager);
                        authStateNextEventSeq (opaqueValue125);
                        opaqueValue126 = sub_180011290 (authManager);
                        sub_18035D830 (stackStorage1395, opaqueValue126);
                        sub_180024E40 (stackStorage696);
                        authEventsPersistAndDispatch (authManager, (std::int64_t)stackStorage1395, 0);
                        authManagerNotifyStateChangedAsync (authManager);
                    label137:
                        sub_180058EA0 (stackStorage1395);
                        sub_18000B8D0 (stackStorage636);
                    label189:
                        sub_18000B8D0 (stackStorage632);
                        goto label190;
                    }
                }
                else
                {
                label106:
                    opaqueValue111 = sub_180359F00 (stackStorage636, opaqueValue639);
                    opaqueValue110 = 0;
                    opaqueValue112 = opaqueValue615;
                    if (opaqueValue615 != 0)
                        goto label107;
                }
                opaqueValue113 = 0;
                opaqueValue114 = 0;
                goto label118;
            }
            if (opaqueValue639 - 200 <= 0x63)
            {
                sub_180096D60 (stackStorage697, "activated");
                opaqueValue127 = sub_1800A6D10 (opaqueValue91, stackStorage697);
                sub_1800A3460 (stackStorage930, opaqueValue127);
                sub_18000B8D0 (stackStorage697);
                if ((std::uint8_t)sub_1800A3610 (stackStorage930) != 0 && opaqueValue634 > 0)
                {
                    if ((std::uint8_t)sub_1800A36A0 (stackStorage930) != 0)
                    {
                        sub_180096D60 (stackStorage700, "token");
                        opaqueValue136 = sub_1800A6D10 (opaqueValue91, stackStorage700);
                        sub_1800A3700 (opaqueValue136, stackStorage654);
                        sub_18000B8D0 (stackStorage700);
                        sub_180096D60 (stackStorage701, "refreshToken");
                        opaqueValue137 = sub_1800A6D10 (opaqueValue91, stackStorage701);
                        sub_1800A3700 (opaqueValue137, stackStorage653);
                        sub_18000B8D0 (stackStorage701);
                        sub_180096D60 (stackStorage702, "tokenDeliveryNonce");
                        opaqueValue138 = sub_1800A6D10 (opaqueValue91, stackStorage702);
                        sub_1800A3700 (opaqueValue138, stackStorage652);
                        sub_18000B8D0 (stackStorage702);
                        opaqueValue139 = sub_18035A6B0 (opaqueValue91);
                        sub_180351D70 (stackStorage882, opaqueValue91);
                        if ((std::uint8_t)sub_180351C20 (stackStorage882, opaqueValue634) != 0)
                        {
                            sub_180096D60 (stackStorage706, "pendingFeedback");
                            opaqueValue153 = sub_1800A6D10 (opaqueValue91, stackStorage706);
                            sub_1800A3460 (stackStorage937, opaqueValue153);
                            sub_18000B8D0 (stackStorage706);
                            if ((std::uint8_t)sub_1800A3630 (stackStorage937) != 0)
                            {
                                opaqueValue154 = sub_1800A3700 (stackStorage937, stackStorage780);
                                opaqueValue2 |= 0x40000u;
                            }
                            else
                            {
                                opaqueValue154 = sub_18002C900 (stackStorage779);
                                opaqueValue2 |= 0x80000u;
                            }
                            sub_18008BDB0 (stackStorage667, opaqueValue154);
                            if ((opaqueValue2 & 0x80000) != 0)
                            {
                                opaqueValue2 &= ~0x80000u;
                                sub_18000B8D0 (stackStorage779);
                            }
                            if ((opaqueValue2 & 0x40000) != 0)
                            {
                                opaqueValue2 &= ~0x40000u;
                                sub_18000B8D0 (stackStorage780);
                            }
                            sub_1803552A0 (stackStorage1406);
                            opaqueValue155 = 0;
                            opaqueValue156 = sub_180011290 (authManager);
                            sub_180024E50 (stackStorage711, opaqueValue156 + 1168);
                            opaqueValue157 = sub_180011290 (authManager);
                            if (sub_18007EF80 (opaqueValue157 + 1680, 2) == opaqueValue64)
                            {
                                if ((std::uint8_t)sub_18000B5A0 (stackStorage654) != 0 && (std::uint8_t)sub_18000B5A0 (stackStorage653) != 0)
                                {
                                    *(std::uint8_t*)sub_180011290 (authManager) = 1;
                                    opaqueValue158 = sub_180011290 (authManager);
                                    sub_18008BD60 (opaqueValue158 + 24, stackStorage654);
                                    opaqueValue159 = sub_180011290 (authManager);
                                    sub_18008BD60 (opaqueValue159 + 32, stackStorage653);
                                    opaqueValue160 = sub_180011290 (authManager);
                                    juceStringClear (opaqueValue160 + 40);
                                    *(std::uint64_t*)(sub_180011290 (authManager) + 120) = opaqueValue139;
                                    sub_180096D60 (stackStorage707, "tier");
                                    opaqueValue161 = sub_1800A6D10 (opaqueValue91, stackStorage707);
                                    opaqueValue162 = sub_1800A3700 (opaqueValue161, stackStorage781);
                                    opaqueValue163 = sub_180011290 (authManager);
                                    sub_180092B90 (opaqueValue163 + 48, opaqueValue162);
                                    sub_18000B8D0 (stackStorage781);
                                    sub_18000B8D0 (stackStorage707);
                                    opaqueValue164 = sub_180011290 (authManager);
                                    juceStringClear (opaqueValue164 + 16);
                                    opaqueValue165 = sub_180011290 (authManager);
                                    sub_18008BD60 (opaqueValue165 + 88, stackStorage652);
                                    LOBYTE (opaqueValue162) = sub_18000B5A0 (stackStorage652);
                                    *(std::uint8_t*)(sub_180011290 (authManager) + 224) = opaqueValue162;
                                    *(std::uint32_t*)(sub_180011290 (authManager) + 1724) = 0;
                                    opaqueValue166 = opaqueValue634;
                                    opaqueValue167 = sub_180011290 (authManager);
                                    sub_180352400 (opaqueValue167, stackStorage882, opaqueValue166, opaqueValue649);
                                    opaqueValue168 = opaqueValue634;
                                    *(std::uint64_t*)(sub_180011290 (authManager) + 176) = opaqueValue168;
                                    *(std::uint8_t*)(sub_180011290 (authManager) + 184) = 1;
                                    *(std::uint8_t*)(sub_180011290 (authManager) + 185) = 0;
                                    opaqueValue169 = sub_18034F930();
                                    *(std::uint64_t*)(sub_180011290 (authManager) + 192) = opaqueValue169;
                                    opaqueValue170 = sub_180011290 (authManager);
                                    sub_18035AB80 (opaqueValue170);
                                    if (opaqueValue67 != 0)
                                        goto label171;
                                    opaqueValue675 = 7;
                                    opaqueValue171 = sub_180011290 (authManager);
                                    opaqueValue172 = sub_180372150 (opaqueValue171 + 352, stackStorage905);
                                    opaqueValue173 = sub_180011290 (authManager);
                                    opaqueValue174 = sub_180372170 (opaqueValue173 + 352, stackStorage906);
                                    opaqueValue175 = sub_180371550 (stackStorage907, opaqueValue174, opaqueValue172, &opaqueValue675);
                                    opaqueValue176 = sub_180011290 (authManager);
                                    opaqueValue177 = sub_180372150 (opaqueValue176 + 352, stackStorage908);
                                    if ((std::uint8_t)sub_180371DF0 (opaqueValue175, opaqueValue177) == 0)
                                    label171:
                                        opaqueValue155 = 0;
                                    else
                                        opaqueValue155 = 1;
                                }
                                else if (opaqueValue67 != 0)
                                {
                                    *(std::uint8_t*)sub_180011290 (authManager) = 1;
                                    *(std::uint8_t*)(sub_180011290 (authManager) + 224) = 0;
                                    *(std::uint32_t*)(sub_180011290 (authManager) + 1724) = 0;
                                    opaqueValue178 = opaqueValue634;
                                    opaqueValue179 = sub_180011290 (authManager);
                                    sub_180352400 (opaqueValue179, stackStorage882, opaqueValue178, opaqueValue649);
                                    opaqueValue180 = opaqueValue634;
                                    *(std::uint64_t*)(sub_180011290 (authManager) + 176) = opaqueValue180;
                                    *(std::uint8_t*)(sub_180011290 (authManager) + 184) = 1;
                                    *(std::uint8_t*)(sub_180011290 (authManager) + 185) = 0;
                                    opaqueValue181 = sub_18034F930();
                                    *(std::uint64_t*)(sub_180011290 (authManager) + 192) = opaqueValue181;
                                    opaqueValue182 = sub_180011290 (authManager);
                                    sub_18035AB80 (opaqueValue182);
                                }
                                if (*(std::uint8_t*)sub_180011290 (authManager) != 0)
                                {
                                    opaqueValue183 = sub_180057FD0();
                                    opaqueValue184 = sub_180011290 (authManager);
                                    if ((std::uint8_t)sub_18034F9C0 (opaqueValue184, opaqueValue183) != 0)
                                    {
                                        opaqueValue185 = sub_180011290 (authManager);
                                        sub_18035A420 (opaqueValue185);
                                        opaqueValue155 = 0;
                                    }
                                }
                                opaqueValue186 = sub_180011290 (authManager);
                                sub_18008BD60 (opaqueValue186 + 216, stackStorage667);
                                opaqueValue187 = sub_180350440 (stackStorage1316, opaqueValue91);
                                opaqueValue188 = sub_180011290 (authManager);
                                sub_1800A3A50 (opaqueValue188 + 104, opaqueValue187);
                                sub_1800A3440 (stackStorage1316);
                                sub_180096D60 (stackStorage709, "remaining");
                                opaqueValue189 = sub_1800A6D10 (opaqueValue91, stackStorage709);
                                sub_1800A3460 (stackStorage936, opaqueValue189);
                                sub_18000B8D0 (stackStorage709);
                                if ((std::uint8_t)sub_1800A35F0 (stackStorage936) != 0 || (std::uint8_t)sub_1800A3620 (stackStorage936) != 0)
                                {
                                    opaqueValue190 = sub_1800A3660 (stackStorage936);
                                    *(std::uint32_t*)(sub_180011290 (authManager) + 96) = opaqueValue190;
                                }
                                sub_180096D60 (stackStorage710, "quotaTotal");
                                opaqueValue191 = sub_1800A6D10 (opaqueValue91, stackStorage710);
                                sub_1800A3460 (stackStorage938, opaqueValue191);
                                sub_18000B8D0 (stackStorage710);
                                if ((std::uint8_t)sub_1800A35F0 (stackStorage938) != 0 || (std::uint8_t)sub_1800A3620 (stackStorage938) != 0)
                                {
                                    opaqueValue192 = sub_1800A3660 (stackStorage938);
                                    *(std::uint32_t*)(sub_180011290 (authManager) + 100) = opaqueValue192;
                                }
                                opaqueValue193 = sub_180011290 (authManager);
                                sub_180350400 (opaqueValue193);
                                if (opaqueValue155 != 0)
                                {
                                    opaqueValue194 = sub_180011290 (authManager);
                                    opaqueValue671 = 7;
                                    sub_180371FB0 (opaqueValue194 + 352, &opaqueValue671);
                                }
                                opaqueValue195 = sub_180011290 (authManager);
                                authStateNextEventSeq (opaqueValue195);
                                opaqueValue196 = sub_180011290 (authManager);
                                sub_18035D830 (stackStorage1406, opaqueValue196);
                                sub_1800A3440 (stackStorage938);
                                sub_1800A3440 (stackStorage936);
                                sub_180024E40 (stackStorage711);
                                authEventsPersistAndDispatch (authManager, (std::int64_t)stackStorage1406, 0);
                                authRecheckMaybeDispatch (authManager);
                                authManagerNotifyStateChangedAsync (authManager);
                            }
                            else
                            {
                                sub_180024E40 (stackStorage711);
                            }
                            sub_180058EA0 (stackStorage1406);
                            sub_18000B8D0 (stackStorage667);
                            sub_1800A3440 (stackStorage937);
                        }
                        else
                        {
                            sub_1803552A0 (stackStorage1397);
                            opaqueValue140 = stackStorage882[0];
                            opaqueValue141 = sub_180011290 (authManager);
                            sub_180024E50 (stackStorage705, opaqueValue141 + 1168);
                            opaqueValue142 = sub_180011290 (authManager);
                            if (sub_18007EF80 (opaqueValue142 + 1680, 2) == opaqueValue64)
                            {
                                if (opaqueValue140 != 0)
                                {
                                    opaqueValue143 = sub_180011290 (authManager);
                                    sub_18035A390 (opaqueValue143);
                                    sub_1800971D0 (stackStorage703, "FAD-CHK-NO-SUBSCRIPTION");
                                    opaqueValue144 = sub_18009BD70 (stackStorage777, &unk_180F77620, 0xFFFFFFFFLL);
                                    opaqueValue145 = sub_180011290 (authManager);
                                    sub_18035AAD0 (opaqueValue145, opaqueValue144, stackStorage703, 403);
                                    sub_18000B8D0 (stackStorage777);
                                    temporaryPointer146 = stackStorage703;
                                }
                                else
                                {
                                    if (opaqueValue67 == 0 || *(std::uint8_t*)sub_180011290 (authManager) != 0)
                                    {
                                        opaqueValue147 = sub_180011290 (authManager);
                                        sub_18035A620 (opaqueValue147);
                                    }
                                    sub_1800971D0 (stackStorage704, "FAD-CHK-BAD-JSON");
                                    opaqueValue148 = sub_18009BD70 (stackStorage778, &unk_180F77580, 0xFFFFFFFFLL);
                                    opaqueValue149 = sub_180011290 (authManager);
                                    sub_18035AAD0 (opaqueValue149, opaqueValue148, stackStorage704, opaqueValue639);
                                    sub_18000B8D0 (stackStorage778);
                                    temporaryPointer146 = stackStorage704;
                                }
                                sub_18000B8D0 (temporaryPointer146);
                                opaqueValue150 = opaqueValue634;
                                *(std::uint64_t*)(sub_180011290 (authManager) + 176) = opaqueValue150;
                                opaqueValue151 = sub_180011290 (authManager);
                                authStateNextEventSeq (opaqueValue151);
                                opaqueValue152 = sub_180011290 (authManager);
                                sub_18035D830 (stackStorage1397, opaqueValue152);
                                sub_180024E40 (stackStorage705);
                                authEventsPersistAndDispatch (authManager, (std::int64_t)stackStorage1397, 0);
                                authManagerNotifyStateChangedAsync (authManager);
                                sub_180058EA0 (stackStorage1397);
                            }
                            else
                            {
                                sub_180024E40 (stackStorage705);
                                sub_180058EA0 (stackStorage1397);
                            }
                        }
                        sub_180051CF0 (stackStorage882);
                        sub_18000B8D0 (stackStorage652);
                        sub_18000B8D0 (stackStorage653);
                        sub_18000B8D0 (stackStorage654);
                    }
                    else if (opaqueValue67 != 0)
                    {
                        sub_1803552A0 (stackStorage1396);
                        opaqueValue128 = sub_180011290 (authManager);
                        sub_180024E50 (stackStorage699, opaqueValue128 + 1168);
                        opaqueValue129 = sub_180011290 (authManager);
                        if (sub_18007EF80 (opaqueValue129 + 1680, 2) == opaqueValue64)
                        {
                            opaqueValue130 = sub_180011290 (authManager);
                            sub_18035A390 (opaqueValue130);
                            opaqueValue131 = opaqueValue634;
                            *(std::uint64_t*)(sub_180011290 (authManager) + 176) = opaqueValue131;
                            sub_1800971D0 (stackStorage698, "FAD-CHK-NOT-ACTIVATED");
                            opaqueValue132 = sub_18009BD70 (stackStorage776, &unk_180F775E0, 0xFFFFFFFFLL);
                            opaqueValue133 = sub_180011290 (authManager);
                            sub_18035AAD0 (opaqueValue133, opaqueValue132, stackStorage698, opaqueValue639);
                            sub_18000B8D0 (stackStorage776);
                            sub_18000B8D0 (stackStorage698);
                            opaqueValue134 = sub_180011290 (authManager);
                            authStateNextEventSeq (opaqueValue134);
                            opaqueValue135 = sub_180011290 (authManager);
                            sub_18035D830 (stackStorage1396, opaqueValue135);
                            sub_180024E40 (stackStorage699);
                            authEventsPersistAndDispatch (authManager, (std::int64_t)stackStorage1396, 0);
                            authManagerNotifyStateChangedAsync (authManager);
                        }
                        else
                        {
                            sub_180024E40 (stackStorage699);
                        }
                        sub_180058EA0 (stackStorage1396);
                    }
                }
                else
                {
                    sub_1803552A0 (stackStorage1405);
                    opaqueValue197 = sub_180011290 (authManager);
                    sub_180024E50 (stackStorage713, opaqueValue197 + 1168);
                    opaqueValue198 = sub_180011290 (authManager);
                    if (sub_18007EF80 (opaqueValue198 + 1680, 2) == opaqueValue64)
                    {
                        opaqueValue199 = sub_180011290 (authManager);
                        sub_18035A620 (opaqueValue199);
                        sub_1800971D0 (stackStorage712, "FAD-CHK-BAD-JSON");
                        opaqueValue200 = sub_18009BD70 (stackStorage782, &unk_180F77680, 0xFFFFFFFFLL);
                        opaqueValue201 = sub_180011290 (authManager);
                        sub_18035AAD0 (opaqueValue201, opaqueValue200, stackStorage712, opaqueValue639);
                        sub_18000B8D0 (stackStorage782);
                        sub_18000B8D0 (stackStorage712);
                        opaqueValue202 = sub_180011290 (authManager);
                        authStateNextEventSeq (opaqueValue202);
                        opaqueValue203 = sub_180011290 (authManager);
                        sub_18035D830 (stackStorage1405, opaqueValue203);
                        sub_180024E40 (stackStorage713);
                        authEventsPersistAndDispatch (authManager, (std::int64_t)stackStorage1405, 0);
                        authManagerNotifyStateChangedAsync (authManager);
                    }
                    else
                    {
                        sub_180024E40 (stackStorage713);
                    }
                    sub_180058EA0 (stackStorage1405);
                }
                sub_1800A3440 (stackStorage930);
                goto label189;
            }
            sub_1803552A0 (stackStorage1404);
            opaqueValue204 = sub_180011290 (authManager);
            sub_180024E50 (stackStorage715, opaqueValue204 + 1168);
            opaqueValue205 = sub_180011290 (authManager);
            if (sub_18007EF80 (opaqueValue205 + 1680, 2) != opaqueValue64)
            {
                sub_180024E40 (stackStorage715);
                sub_180058EA0 (stackStorage1404);
                goto label189;
            }
            sub_1800971D0 (stackStorage714, "FAD-CHK-HTTP-STATUS");
            opaqueValue206 = sub_18009BD70 (stackStorage783, &unk_180F77710, 0xFFFFFFFFLL);
            opaqueValue207 = sub_180011290 (authManager);
            sub_18035AAD0 (opaqueValue207, opaqueValue206, stackStorage714, opaqueValue639);
            sub_18000B8D0 (stackStorage783);
            sub_18000B8D0 (stackStorage714);
            if (opaqueValue67 != 0 && *(std::uint8_t*)(sub_180011290 (authManager) + 224) != 0 && opaqueValue639 == 401)
            {
                opaqueValue208 = 1;
                sub_18002C900 (stackStorage659);
                opaqueValue209 = sub_180359F00 (stackStorage659, opaqueValue639);
                sub_18000B8D0 (stackStorage659);
            label204:
                if (*(std::uint8_t*)(sub_180011290 (authManager) + 224) == 0 && opaqueValue639 == 401 && opaqueValue209 == 0)
                {
                    opaqueValue210 = 1;
                    opaqueValue211 = 0;
                    opaqueValue212 = sub_180011290 (authManager);
                    if ((std::uint8_t)sub_18000B5A0 (opaqueValue212 + 32) != 0)
                    {
                        opaqueValue213 = sub_180011290 (authManager);
                        opaqueValue211 = sub_18034F920 (opaqueValue213 + 1592);
                        if (opaqueValue211 == 0)
                        {
                            opaqueValue214 = sub_180011290 (authManager);
                            if ((std::uint8_t)sub_18034F910 (opaqueValue214 + 1592) != 0)
                            {
                                opaqueValue215 = sub_180011290 (authManager);
                                sub_180366280 (opaqueValue215, 9);
                                opaqueValue211 = 1;
                                goto label213;
                            }
                        }
                    }
                label212:
                    if (opaqueValue67 != 0)
                    {
                    label213:
                        if (*(std::uint8_t*)sub_180011290 (authManager) == 0)
                        {
                            opaqueValue216 = 1;
                        label216:
                            if (opaqueValue208 != 0 || opaqueValue209 != 0)
                                goto label222;
                            if (opaqueValue211 == 0)
                            {
                                if (opaqueValue210 == 0)
                                {
                                    if (opaqueValue216 == 0)
                                    {
                                        opaqueValue217 = sub_180011290 (authManager);
                                        sub_18035A620 (opaqueValue217);
                                    }
                                    goto label223;
                                }
                            label222:
                                opaqueValue218 = sub_180011290 (authManager);
                                sub_18035A390 (opaqueValue218);
                            }
                        label223:
                            opaqueValue219 = opaqueValue634;
                            if (opaqueValue634 > 0)
                                *(std::uint64_t*)(sub_180011290 (authManager) + 176) = opaqueValue219;
                            opaqueValue220 = sub_180011290 (authManager);
                            authStateNextEventSeq (opaqueValue220);
                            opaqueValue221 = sub_180011290 (authManager);
                            sub_18035D830 (stackStorage1404, opaqueValue221);
                            sub_180024E40 (stackStorage715);
                            authEventsPersistAndDispatch (authManager, (std::int64_t)stackStorage1404, 0);
                            authManagerNotifyStateChangedAsync (authManager);
                            sub_180058EA0 (stackStorage1404);
                            goto label189;
                        }
                    }
                    opaqueValue216 = 0;
                    goto label216;
                }
            }
            else
            {
                sub_18002C900 (stackStorage659);
                opaqueValue209 = sub_180359F00 (stackStorage659, opaqueValue639);
                sub_18000B8D0 (stackStorage659);
                opaqueValue208 = 0;
                if (opaqueValue67 != 0)
                    goto label204;
            }
            opaqueValue210 = 0;
            opaqueValue211 = 0;
            goto label212;
        }
        if (opaqueValue4 == 0 && *(std::uint64_t*)(*authManager + 432) != 0)
        {
            opaqueValue222 = *(std::uint64_t*)sub_180372590 (*authManager + 400, 0);
            sub_180371DD0 (*authManager + 400);
            LeaveCriticalSection (lpCriticalSection);
        label238:
            unknown_libname_3 (stackStorage879);
            opaqueValue616 = 0;
            opaqueValue612 = 0;
            opaqueValue227 = *authManager + 1376;
            stackStorage662[1] = opaqueValue227;
            sub_18002C790 (opaqueValue227);
            sub_1803552A0 (stackStorage1354);
            criticalSection228 = (struct _RTL_CRITICAL_SECTION*)(*authManager + 1168);
            opaqueValue649 = criticalSection228;
            EnterCriticalSection (criticalSection228);
            if (opaqueValue222 != 0 && *(std::uint64_t*)(sub_180011290 (authManager) + 1744) == opaqueValue222 && *(std::uint64_t*)(sub_180011290 (authManager) + 1736) == opaqueValue222)
            {
                opaqueValue229 = 1;
                opaqueValue230 = sub_180011290 (authManager);
                sub_18035D830 (stackStorage1354, opaqueValue230);
                if ((std::uint8_t)sub_180097F90 (stackStorage1355, "FAD-AUTH-KEYSTORE") != 0)
                    sub_18035AB80 ((std::int64_t)stackStorage1354);
                stackStorage1355[136] = 1;
                opaqueValue1356 = 6;
                opaqueValue231 = *authManager;
                opaqueValue1357 = ++*(std::uint64_t*)(opaqueValue231 + 1688);
            }
            else
            {
                opaqueValue229 = 0;
            }
            LeaveCriticalSection (criticalSection228);
            conditionFlag232 = opaqueValue229 != 0 && (std::uint8_t)authStorePersistState (stackStorage1354, 2) != 0;
            opaqueValue649 = (LPCRITICAL_SECTION)(*authManager + 1168);
            EnterCriticalSection (opaqueValue649);
            if (conditionFlag232)
            {
                opaqueValue233 = sub_180011290 (authManager);
                opaqueValue234 = *(std::uint64_t*)sub_180026360 (opaqueValue233 + 1696, &opaqueValue1357);
                *(std::uint64_t*)(sub_180011290 (authManager) + 1696) = opaqueValue234;
            }
            if (opaqueValue229 != 0 && *(std::uint64_t*)(sub_180011290 (authManager) + 1744) == opaqueValue222)
            {
                if (conditionFlag232 && *(std::uint64_t*)(sub_180011290 (authManager) + 1736) == opaqueValue222)
                {
                    opaqueValue616 = 1;
                    *(std::uint8_t*)(sub_180011290 (authManager) + 208) = 1;
                    *(std::uint32_t*)(sub_180011290 (authManager) + 212) = 6;
                    opaqueValue235 = sub_180011290 (authManager);
                    if ((std::uint8_t)sub_180097F90 (opaqueValue235 + 72, "FAD-AUTH-KEYSTORE") != 0)
                    {
                        opaqueValue236 = sub_180011290 (authManager);
                        sub_18035AB80 (opaqueValue236);
                    }
                    opaqueValue237 = sub_180011290 (authManager);
                    opaqueValue238 = *(std::uint64_t*)sub_180026360 (opaqueValue237 + 312, &opaqueValue1357);
                    *(std::uint64_t*)(sub_180011290 (authManager) + 312) = opaqueValue238;
                }
                else
                {
                    opaqueValue616 = 0;
                    if (!conditionFlag232)
                    {
                        opaqueValue239 = sub_180011290 (authManager);
                        if ((std::uint8_t)sub_18000B590 (opaqueValue239 + 64) != 0)
                        {
                            sub_1800971D0 (stackStorage716, "FAD-AUTH-KEYSTORE");
                            opaqueValue240 = sub_18009BD70 (stackStorage784, &unk_180F76650, 0xFFFFFFFFLL);
                            opaqueValue241 = sub_180011290 (authManager);
                            sub_18035AAD0 (opaqueValue241, opaqueValue240, stackStorage716, 0);
                            sub_18000B8D0 (stackStorage784);
                            sub_18000B8D0 (stackStorage716);
                        }
                    }
                }
                *(std::uint8_t*)(sub_180011290 (authManager) + 1729) = 0;
                *(std::uint64_t*)(sub_180011290 (authManager) + 1744) = 0;
                sub_1803721B0 (stackStorage879, *authManager + 528);
                opaqueValue612 = 1;
            }
            LeaveCriticalSection (opaqueValue649);
            sub_180058EA0 (stackStorage1354);
            mutexUnlock (opaqueValue227);
            if (opaqueValue612 != 0)
                authManagerNotifyStateChangedAsync (authManager);
            opaqueValue242 = sub_180372230 (stackStorage883, stackStorage879);
            sub_180361FB0 (authManager, opaqueValue242, opaqueValue616, opaqueValue222);
            sub_180371B00 (stackStorage879);
            goto label679;
        }
        opaqueValue222 = 0;
        LeaveCriticalSection (lpCriticalSection);
        switch (opaqueValue4)
        {
        case 8:
            sub_180365C60 (stackStorage1333);
            opaqueValue223 = *authManager;
            EnterCriticalSection ((LPCRITICAL_SECTION)(*authManager + 1168));
            temporaryPointer224 = (std::uint8_t*)*authManager;
            if (*(std::uint64_t*)(*authManager + 1672) == *(std::uint64_t*)(*authManager + 1680) && *temporaryPointer224 != 0 && temporaryPointer224[184] != 0 && (unixTimeMs225 = clockGetUnixTimeMilliseconds(), opaqueValue226 = sub_180011290 (authManager), entitlementIsTimeValid (opaqueValue226, unixTimeMs225) != 0))
            {
                stackStorage1333[0] = 1;
            }
            else
            {
                stackStorage1333[0] = 0;
                sub_18008BD60 (stackStorage1335, *authManager + 72);
                sub_18008BD60 (stackStorage1336, *authManager + 64);
                opaqueValue1334 = *(std::uint32_t*)(*authManager + 80);
            }
            LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue223 + 1168));
            sub_180365EC0 (authManager, stackStorage1333);
            sub_180365CD0 (stackStorage1333);
            break;
        case 0:
            goto label238;
        case 1:
            sub_1803552A0 (stackStorage1412);
            opaqueValue243 = sub_180011290 (authManager);
            sub_180024E50 (&opaqueValue785, opaqueValue243 + 1168);
            sub_18035D830 (stackStorage1412, *authManager);
            LeaveCriticalSection (opaqueValue785);
            authEventsPersistAndDispatch (authManager, (std::int64_t)stackStorage1412, 3u);
            temporaryPointer244 = stackStorage1412;
        label678:
            sub_180058EA0 (temporaryPointer244);
            break;
        case 2:
            authManagerLoadPersistentState (authManager, 0);
            opaqueValue245 = sub_180011290 (authManager);
            opaqueValue246 = sub_180011290 (opaqueValue245 + 1576);
            result = sub_180024DA0 (opaqueValue246, 2);
            if ((std::uint8_t)result == 0)
                return result;
            authManagerNotifyStateChangedAsync (authManager);
            break;
        case 3:
            sub_180081080 (stackStorage767, authManager);
            opaqueValue248 = sub_180011290 (authManager);
            sub_180024E50 (stackStorage717, opaqueValue248 + 1168);
            opaqueValue249 = sub_180011290 (authManager);
            opaqueValue250 = sub_180097F90 (opaqueValue249 + 72, "FAD-AUTH-KEYSTORE");
            if (opaqueValue250 == 0)
            {
                opaqueValue251 = sub_180011290 (authManager);
                if ((std::uint8_t)sub_180097FC0 (opaqueValue251 + 72, "FAD-AUTH-KEYSTORE-READ") != 0)
                {
                    sub_180024E40 (stackStorage717);
                label288:
                    sub_1803718B0 (stackStorage767);
                    break;
                }
            }
            sub_180024E40 (stackStorage717);
            if (opaqueValue250 != 0)
            {
                opaqueValue252 = sub_18002C900 (stackStorage786);
                sub_1800971D0 (stackStorage718, "auth_state");
                LOBYTE (opaqueValue253) = 1;
                sub_1807EECF0 (stackStorage880, stackStorage718, opaqueValue252, opaqueValue253);
                sub_18000B8D0 (stackStorage718);
                sub_18000B8D0 (stackStorage786);
                if (stackStorage880[0] != 2)
                {
                    sub_1803552A0 (stackStorage1382);
                    opaqueValue254 = sub_180011290 (authManager);
                    sub_180024E50 (stackStorage719, opaqueValue254 + 1168);
                    opaqueValue255 = sub_180011290 (authManager);
                    if ((std::uint8_t)sub_180097FC0 (opaqueValue255 + 72, "FAD-AUTH-KEYSTORE") != 0)
                    {
                        sub_180024E40 (stackStorage719);
                        sub_180058EA0 (stackStorage1382);
                    label287:
                        sub_180051CF0 (stackStorage880);
                        goto label288;
                    }
                    opaqueValue256 = sub_180011290 (authManager);
                    sub_18035D830 (stackStorage1382, opaqueValue256);
                    sub_180024E40 (stackStorage719);
                    if ((std::uint8_t)authEventsPersistAndDispatch (authManager, (std::int64_t)stackStorage1382, 0) != 0)
                    {
                        opaqueValue257 = sub_180011290 (authManager);
                        sub_180024E50 (stackStorage787, opaqueValue257 + 1168);
                        opaqueValue258 = sub_180011290 (authManager);
                        if ((std::uint8_t)sub_180097F90 (opaqueValue258 + 72, "FAD-AUTH-KEYSTORE") != 0)
                        {
                            opaqueValue259 = sub_180011290 (authManager);
                            if (*(std::uint64_t*)(opaqueValue259 + 312) == opaqueValue1383)
                            {
                                opaqueValue260 = sub_180011290 (authManager);
                                sub_18035AB80 (opaqueValue260);
                            }
                        }
                        opaqueValue261 = sub_180011290 (authManager);
                        if ((std::uint8_t)sub_18000B5A0 (opaqueValue261 + 8) != 0)
                        {
                            opaqueValue262 = sub_180011290 (authManager);
                            sub_180366280 (opaqueValue262, 7);
                        }
                        sub_180024E40 (stackStorage787);
                    }
                    sub_180058EA0 (stackStorage1382);
                }
                authManagerNotifyStateChangedAsync (authManager);
                goto label287;
            }
            authManagerLoadPersistentState (authManager, 1);
            sub_1803718B0 (stackStorage767);
            break;
        case 4:
            sub_18002C900 (stackStorage630);
            sub_1803552A0 (stackStorage1358);
            stackStorage662[0] = 0;
            opaqueValue263 = sub_180011290 (authManager);
            sub_180024E50 (stackStorage788, opaqueValue263 + 1168);
            opaqueValue264 = sub_180011290 (authManager);
            sub_18008BD60 (stackStorage630, opaqueValue264 + 832);
            opaqueValue265 = sub_180011290 (authManager);
            sub_18035D830 (stackStorage1358, opaqueValue265 + 840);
            opaqueValue266 = sub_180011290 (authManager);
            stackStorage662[0] = sub_18007EF80 (opaqueValue266 + 1680, 2);
            sub_180024E40 (stackStorage788);
            if ((std::uint8_t)sub_180352AC0 (stackStorage630) != 0)
            {
                sub_18036F850 (stackStorage881, authManager, stackStorage630, stackStorage662);
                opaqueValue267 = stackStorage662[0];
                opaqueValue268 = sub_180011290 (authManager) + 1680;
                opaqueValue269 = sub_180011290 (authManager);
                sub_180357C40 (stackStorage648, opaqueValue269 + 1576, opaqueValue268, opaqueValue267, 12000);
                opaqueValue270 = sub_180011290 (authManager);
                opaqueValue271 = sub_180011290 (opaqueValue270 + 1576);
                if ((std::uint8_t)sub_180024DA0 (opaqueValue271, 2) == 0)
                {
                    sub_180371BC0 (stackStorage648);
                    sub_180058EA0 (stackStorage1358);
                    return sub_18000B8D0 (stackStorage630);
                }
                if ((std::uint8_t)sub_1803711B0 (stackStorage648, 0) != 0)
                {
                    sub_1800971D0 (stackStorage720, "FAD-MAS-RESET-LOCK");
                    opaqueValue272 = sub_18009BD70 (stackStorage789, &unk_180F76C70, 0xFFFFFFFFLL);
                    LOBYTE (opaqueValue611) = 1;
                    sub_18036F6D0 (stackStorage881, opaqueValue272, stackStorage720, 0, opaqueValue611);
                    sub_18000B8D0 (stackStorage789);
                    sub_18000B8D0 (stackStorage720);
                }
                else
                {
                    opaqueValue273 = 0;
                    sub_1803552A0 (stackStorage1375);
                    sub_18007EEF0 (stackStorage959);
                    opaqueValue274 = sub_180011290 (authManager);
                    sub_180024E50 (stackStorage725, opaqueValue274 + 1168);
                    opaqueValue275 = sub_180011290 (authManager);
                    if ((std::uint8_t)sub_180097F50 (opaqueValue275 + 832, stackStorage630) != 0 || (opaqueValue276 = sub_180011290 (authManager), (opaqueValue277 = sub_18007EF80 (opaqueValue276 + 1680, 2)) != stackStorage662[0]))
                    {
                        sub_180024E40 (stackStorage725);
                    }
                    else
                    {
                        if (*(std::uint8_t*)(sub_180011290 (authManager) + 1164) != 0 || (unixTimeMs278 = clockGetUnixTimeMilliseconds(), (std::uint8_t)sub_180353740 (stackStorage630, unixTimeMs278) != 0))
                        {
                            opaqueValue279 = 1;
                            if (*(std::uint8_t*)(sub_180011290 (authManager) + 1164) == 0)
                            {
                                *(std::uint8_t*)(sub_180011290 (authManager) + 1164) = 1;
                                stackStorage1238[0] = 0;
                                sub_18002C900 (stackStorage1239);
                                sub_18002C900 (stackStorage1240);
                                sub_18002C900 (stackStorage1241);
                                sub_18002C900 (stackStorage1242);
                                sub_18002C900 (stackStorage1243);
                                sub_18002C900 (stackStorage1244);
                                sub_18002C900 (stackStorage1245);
                                sub_18002C900 (stackStorage1246);
                                sub_18002C900 (stackStorage1247);
                                opaqueValue1248 = 0;
                                sub_18002C900 (stackStorage1249);
                                opaqueValue1250 = 0;
                                sub_1800A3420 (stackStorage1251);
                                opaqueValue1252 = 0;
                                sub_18002C900 (stackStorage1253);
                                opaqueValue1254 = 0;
                                opaqueValue1255 = 0;
                                opaqueValue1256 = 0;
                                opaqueValue1257 = 0;
                                opaqueValue1258 = 0;
                                opaqueValue1259 = 0;
                                opaqueValue1260 = 0;
                                opaqueValue1261 = 0;
                                opaqueValue1262 = 0;
                                opaqueValue1263 = 0;
                                sub_18002C900 (stackStorage1264);
                                opaqueValue1265 = 0;
                                sub_18002C900 (stackStorage1266);
                                sub_18002C900 (stackStorage1267);
                                sub_18002C900 (stackStorage1268);
                                sub_18002C900 (stackStorage1269);
                                sub_18002C900 (stackStorage1270);
                                opaqueValue1271 = 0;
                                sub_18002C900 (stackStorage1272);
                                sub_18002C900 (stackStorage1273);
                                stackStorage1273[8] = 0;
                                sub_18002C900 (stackStorage1274);
                                opaqueValue1275 = 0;
                                opaqueValue280 = sub_180011290 (authManager);
                                sub_180360F60 (opaqueValue280, stackStorage1238);
                                sub_180058EA0 (stackStorage1238);
                                opaqueValue281 = sub_180011290 (authManager);
                                sub_18008BD60 (opaqueValue281 + 304, stackStorage630);
                                if (stackStorage1358[225] != 0)
                                {
                                    sub_1800971D0 (stackStorage721, "FAD-MAS-RESET-PENDING");
                                    opaqueValue282 = sub_18009BD70 (stackStorage790, &unk_180F77000, 0xFFFFFFFFLL);
                                    opaqueValue283 = sub_180011290 (authManager);
                                    sub_18035AAD0 (opaqueValue283, opaqueValue282, stackStorage721, 0);
                                    sub_18000B8D0 (stackStorage790);
                                    sub_18000B8D0 (stackStorage721);
                                }
                                opaqueValue284 = sub_180011290 (authManager);
                                authStateNextEventSeq (opaqueValue284);
                                opaqueValue285 = sub_180011290 (authManager);
                                sub_18035D830 (stackStorage1375, opaqueValue285);
                                opaqueValue273 = 1;
                                opaqueValue286 = sub_180011290 (authManager);
                                sub_1801EB280 (stackStorage959, opaqueValue286 + 744);
                            }
                        }
                        else
                        {
                            opaqueValue279 = 0;
                        }
                        sub_180024E40 (stackStorage725);
                        if (opaqueValue279 != 0)
                        {
                            if (opaqueValue273 != 0)
                            {
                                if ((std::uint8_t)sub_18007DD40 (stackStorage959) != 0)
                                    sub_18007DD20 (stackStorage959);
                                authEventsPersistAndDispatch (authManager, (std::int64_t)stackStorage1375, 4u);
                                authManagerNotifyStateChangedAsync (authManager);
                            }
                            if ((std::uint8_t)sub_180359250() != 0)
                            {
                                sub_1803552A0 (stackStorage1407);
                                opaqueValue289 = sub_180011290 (authManager);
                                sub_180024E50 (stackStorage724, opaqueValue289 + 1168);
                                opaqueValue290 = sub_180011290 (authManager);
                                if ((std::uint8_t)sub_180097F50 (opaqueValue290 + 832, stackStorage630) != 0 || (opaqueValue291 = sub_180011290 (authManager), (opaqueValue292 = sub_18007EF80 (opaqueValue291 + 1680, 2)) != stackStorage662[0]))
                                {
                                    sub_180024E40 (stackStorage724);
                                }
                                else
                                {
                                    opaqueValue293 = sub_180011290 (authManager);
                                    juceStringClear (opaqueValue293 + 832);
                                    stackStorage1200[0] = 0;
                                    sub_18002C900 (stackStorage1201);
                                    sub_18002C900 (stackStorage1202);
                                    sub_18002C900 (stackStorage1203);
                                    sub_18002C900 (stackStorage1204);
                                    sub_18002C900 (stackStorage1205);
                                    sub_18002C900 (stackStorage1206);
                                    sub_18002C900 (stackStorage1207);
                                    sub_18002C900 (stackStorage1208);
                                    sub_18002C900 (stackStorage1209);
                                    opaqueValue1210 = 0;
                                    sub_18002C900 (stackStorage1211);
                                    opaqueValue1212 = 0;
                                    sub_1800A3420 (stackStorage1213);
                                    opaqueValue1214 = 0;
                                    sub_18002C900 (stackStorage1215);
                                    opaqueValue1216 = 0;
                                    opaqueValue1217 = 0;
                                    opaqueValue1218 = 0;
                                    opaqueValue1219 = 0;
                                    opaqueValue1220 = 0;
                                    opaqueValue1221 = 0;
                                    opaqueValue1222 = 0;
                                    opaqueValue1223 = 0;
                                    opaqueValue1224 = 0;
                                    opaqueValue1225 = 0;
                                    sub_18002C900 (stackStorage1226);
                                    opaqueValue1227 = 0;
                                    sub_18002C900 (stackStorage1228);
                                    sub_18002C900 (stackStorage1229);
                                    sub_18002C900 (stackStorage1230);
                                    sub_18002C900 (stackStorage1231);
                                    sub_18002C900 (stackStorage1232);
                                    opaqueValue1233 = 0;
                                    sub_18002C900 (stackStorage1234);
                                    sub_18002C900 (stackStorage1235);
                                    stackStorage1235[8] = 0;
                                    sub_18002C900 (stackStorage1236);
                                    opaqueValue1237 = 0;
                                    opaqueValue294 = sub_180011290 (authManager);
                                    sub_180360F60 (opaqueValue294 + 840, stackStorage1200);
                                    sub_180058EA0 (stackStorage1200);
                                    *(std::uint32_t*)(sub_180011290 (authManager) + 1160) = 0;
                                    *(std::uint8_t*)(sub_180011290 (authManager) + 1164) = 0;
                                    opaqueValue295 = sub_180011290 (authManager);
                                    sub_18035AB80 (opaqueValue295);
                                    opaqueValue296 = sub_180011290 (authManager);
                                    authStateNextEventSeq (opaqueValue296);
                                    opaqueValue297 = sub_180011290 (authManager);
                                    sub_18035D830 (stackStorage1407, opaqueValue297);
                                    sub_180024E40 (stackStorage724);
                                    authEventsPersistAndDispatch (authManager, (std::int64_t)stackStorage1407, 0);
                                    authManagerNotifyStateChangedAsync (authManager);
                                }
                                sub_180058EA0 (stackStorage1407);
                            }
                            else
                            {
                                sub_1800971D0 (stackStorage723, "FAD-MAS-RESET-SAVE");
                                opaqueValue288 = sub_18009BD70 (stackStorage792, &unk_180F76EF0, 0xFFFFFFFFLL);
                                LOBYTE (opaqueValue611) = 1;
                                sub_18036F6D0 (stackStorage881, opaqueValue288, stackStorage723, 0, opaqueValue611);
                                sub_18000B8D0 (stackStorage792);
                                sub_18000B8D0 (stackStorage723);
                            }
                        }
                        else
                        {
                            sub_1800971D0 (stackStorage722, "FAD-MAS-RESET-SAVE");
                            opaqueValue287 = sub_18009BD70 (stackStorage791, &unk_180F76F90, 0xFFFFFFFFLL);
                            LOBYTE (opaqueValue611) = 1;
                            sub_18036F6D0 (stackStorage881, opaqueValue287, stackStorage722, 0, opaqueValue611);
                            sub_18000B8D0 (stackStorage791);
                            sub_18000B8D0 (stackStorage722);
                        }
                    }
                    sub_18000B560 (stackStorage959);
                    sub_180058EA0 (stackStorage1375);
                }
                sub_180371BC0 (stackStorage648);
            }
            sub_180058EA0 (stackStorage1358);
            sub_18000B8D0 (stackStorage630);
            break;
        case 5:
            sub_18036F860 (stackStorage939);
            opaqueValue658 = 0;
            opaqueValue298 = sub_180011290 (authManager);
            sub_180024E50 (stackStorage726, opaqueValue298 + 1168);
            opaqueValue299 = sub_180011290 (authManager);
            if ((std::uint8_t)sub_180371DC0 (opaqueValue299 + 440) != 0)
            {
                sub_180024E40 (stackStorage726);
                goto label368;
            }
            opaqueValue300 = sub_180011290 (authManager);
            opaqueValue301 = sub_180371DA0 (opaqueValue300 + 440);
            sub_180370F50 (stackStorage939, opaqueValue301);
            opaqueValue302 = sub_180011290 (authManager);
            sub_180371CC0 (opaqueValue302 + 440);
            opaqueValue303 = sub_180011290 (authManager);
            opaqueValue658 = sub_18007EF80 (opaqueValue303 + 1680, 2);
            sub_180024E40 (stackStorage726);
            opaqueValue304 = opaqueValue658;
            opaqueValue305 = sub_180011290 (authManager) + 1680;
            opaqueValue306 = sub_180011290 (authManager);
            sub_180357C40 (stackStorage638, opaqueValue306 + 1576, opaqueValue305, opaqueValue304, 12000);
            opaqueValue307 = sub_180011290 (authManager);
            opaqueValue308 = sub_180011290 (opaqueValue307 + 1576);
            if ((std::uint8_t)sub_180024DA0 (opaqueValue308, 2) == 0)
                goto label685;
            if ((std::uint8_t)sub_1803711B0 (stackStorage638, 0) != 0)
            {
                sub_1803552A0 (stackStorage1413);
                opaqueValue309 = sub_180011290 (authManager);
                sub_180024E50 (stackStorage794, opaqueValue309 + 1168);
                opaqueValue310 = sub_180011290 (authManager);
                opaqueValue311 = sub_18007EF80 (opaqueValue310 + 1680, 2);
                conditionFlag312 = opaqueValue311 != opaqueValue658;
                if (opaqueValue311 == opaqueValue658)
                {
                    sub_1800971D0 (stackStorage727, "FAD-MAS-REFRESH-LOCK");
                    opaqueValue313 = sub_18009BD70 (stackStorage793, &unk_180F76E80, 0xFFFFFFFFLL);
                    opaqueValue314 = sub_180011290 (authManager);
                    sub_18035AAD0 (opaqueValue314, opaqueValue313, stackStorage727, 0);
                    sub_18000B8D0 (stackStorage793);
                    sub_18000B8D0 (stackStorage727);
                    opaqueValue315 = sub_180011290 (authManager);
                    authStateNextEventSeq (opaqueValue315);
                    opaqueValue316 = sub_180011290 (authManager);
                    sub_18035D830 (stackStorage1413, opaqueValue316);
                }
                sub_180024E40 (stackStorage794);
                if (!conditionFlag312)
                    authEventsPersistAndDispatch (authManager, (std::int64_t)stackStorage1413, 0);
                opaqueValue317 = sub_180372190 (stackStorage926, stackStorage943);
                sub_180361BB0 (authManager, opaqueValue317, 0);
                sub_180058EA0 (stackStorage1413);
                goto label367;
            }
            sub_1800783E0 (stackStorage631);
            opaqueValue318 = sub_180011290 (stackStorage631);
            sub_1800A3560 (stackStorage950, stackStorage939);
            sub_180096D60 (stackStorage728, "productId");
            sub_1800A6D50 (opaqueValue318, stackStorage728, stackStorage950);
            sub_18000B8D0 (stackStorage728);
            sub_1800A3440 (stackStorage950);
            opaqueValue319 = sub_180011290 (stackStorage631);
            sub_1800A3560 (stackStorage951, stackStorage940);
            sub_180096D60 (stackStorage729, "transactionId");
            sub_1800A6D50 (opaqueValue319, stackStorage729, stackStorage951);
            sub_18000B8D0 (stackStorage729);
            sub_1800A3440 (stackStorage951);
            opaqueValue320 = sub_180011290 (stackStorage631);
            sub_1800A3560 (stackStorage952, stackStorage941);
            sub_180096D60 (stackStorage730, "appAccountToken");
            sub_1800A6D50 (opaqueValue320, stackStorage730, stackStorage952);
            sub_18000B8D0 (stackStorage730);
            sub_1800A3440 (stackStorage952);
            opaqueValue321 = sub_180011290 (stackStorage631);
            sub_1800A3560 (stackStorage953, stackStorage942);
            sub_180096D60 (stackStorage731, "deviceInstanceId");
            sub_1800A6D50 (opaqueValue321, stackStorage731, stackStorage953);
            sub_18000B8D0 (stackStorage731);
            sub_1800A3440 (stackStorage953);
            unixTimeMs800 = clockGetUnixTimeMilliseconds();
            opaqueValue322 = sub_18007EE10 (stackStorage631);
            opaqueValue323 = sub_1800A35C0 (stackStorage1317, opaqueValue322);
            sub_1800A6950 (stackStorage645, opaqueValue323, 0, 15);
            sub_1800A3440 (stackStorage1317);
            sub_18002C900 (stackStorage635);
            opaqueValue324 = sub_180011290 (authManager);
            sub_180024E50 (stackStorage795, opaqueValue324 + 1168);
            opaqueValue325 = sub_180011290 (authManager);
            if ((std::uint8_t)sub_180097F10 (opaqueValue325 + 240, stackStorage940) != 0)
            {
                opaqueValue326 = sub_180011290 (authManager);
                if ((std::uint8_t)sub_180097F10 (opaqueValue326 + 256, stackStorage942) != 0)
                {
                    opaqueValue327 = sub_180011290 (authManager);
                    if ((std::uint8_t)sub_180097F10 (opaqueValue327 + 248, stackStorage941) != 0)
                    {
                        opaqueValue328 = sub_180011290 (authManager);
                        sub_18008BD60 (stackStorage635, opaqueValue328 + 32);
                    }
                }
            }
            sub_180024E40 (stackStorage795);
            if ((std::uint8_t)sub_18000B5A0 (stackStorage635) != 0)
            {
                prefixedString329 = juceStringJoinUtf8Prefix (stackStorage799, "\r\nAuthorization: Bearer ", stackStorage635);
                opaqueValue2 |= 1u;
            }
            else
            {
                prefixedString329 = sub_18002C900 (stackStorage798);
                opaqueValue2 |= 2u;
            }
            prefixedString330 = juceStringJoinUtf8Prefix (stackStorage797, "Content-Type: application/json", prefixedString329);
            opaqueValue331 = sub_18034F880 (stackStorage796);
            sub_180362620 ((unsigned int)&opaqueValue655, (std::uint32_t)authManager, opaqueValue331, (unsigned int)stackStorage645, prefixedString330, 30000);
            sub_18000B8D0 (stackStorage796);
            sub_18000B8D0 (stackStorage797);
            if ((opaqueValue2 & 2) != 0)
            {
                opaqueValue2 &= ~2u;
                sub_18000B8D0 (stackStorage798);
            }
            if ((opaqueValue2 & 1) != 0)
            {
                opaqueValue2 &= ~1u;
                sub_18000B8D0 (stackStorage799);
            }
            opaqueValue332 = sub_180011290 (authManager);
            opaqueValue333 = sub_180011290 (opaqueValue332 + 1576);
            if ((std::uint8_t)sub_180024DA0 (opaqueValue333, 2) == 0)
            {
                sub_180051CF0 (&opaqueValue655);
                sub_18000B8D0 (stackStorage635);
                sub_18000B8D0 (stackStorage645);
                sub_180022890 (stackStorage631);
            label685:
                sub_180371BC0 (stackStorage638);
                return sub_180360820 (stackStorage939);
            }
            sub_18036FDD0 ((unsigned int)stackStorage878, (std::uint32_t)authManager, (unsigned int)&opaqueValue658, (unsigned int)stackStorage939, (std::int64_t)&unixTimeMs800);
            sub_1800462D0 (stackStorage929, stackStorage656);
            opaqueValue334 = sub_1800A3750 (stackStorage929);
            if (stackStorage656[8] != 0)
            {
                sub_1800971D0 (stackStorage732, "FAD-MAS-NETWORK");
                opaqueValue335 = sub_18009BD70 (stackStorage801, &unk_180F77160, 0xFFFFFFFFLL);
                sub_18036F890 ((unsigned int)stackStorage878, opaqueValue335, (unsigned int)stackStorage732, opaqueValue655, 0);
                sub_18000B8D0 (stackStorage801);
                sub_18000B8D0 (stackStorage732);
                goto label366;
            }
            if ((unsigned int)(opaqueValue655 - 200) > 0x63)
            {
                if (opaqueValue334 != 0)
                {
                    sub_180096D60 (stackStorage737, "errorCode");
                    opaqueValue367 = sub_1800A6D10 (opaqueValue334, stackStorage737);
                    opaqueValue368 = sub_1800A3700 (opaqueValue367, stackStorage815);
                    trimmedString369 = juceStringTrimWhitespace (opaqueValue368, stackStorage814);
                    opaqueValue370 = opaqueValue2 | 0x1C;
                }
                else
                {
                    trimmedString369 = sub_18002C900 (stackStorage813);
                    opaqueValue370 = opaqueValue2 | 0x20;
                }
                sub_18008BDB0 (stackStorage657, trimmedString369);
                if ((opaqueValue370 & 0x20) != 0)
                {
                    opaqueValue370 &= ~0x20u;
                    sub_18000B8D0 (stackStorage813);
                }
                if ((opaqueValue370 & 0x10) != 0)
                {
                    opaqueValue370 &= ~0x10u;
                    sub_18000B8D0 (stackStorage814);
                }
                if ((opaqueValue370 & 8) != 0)
                {
                    opaqueValue370 &= ~8u;
                    sub_18000B8D0 (stackStorage815);
                }
                if ((opaqueValue370 & 4) != 0)
                {
                    opaqueValue370 &= ~4u;
                    sub_18000B8D0 (stackStorage737);
                }
                if ((std::uint8_t)sub_18000B590 (stackStorage657) != 0)
                {
                    temporaryPointer371 = "FAD-MAS-EXCHANGE-FAILED";
                    if (opaqueValue655 >= 500)
                        temporaryPointer371 = "FAD-MAS-VERIFY-UNAVAILABLE";
                    sub_1800971D0 (stackStorage738, temporaryPointer371);
                    sub_180092B90 (stackStorage657, stackStorage738);
                    sub_18000B8D0 (stackStorage738);
                }
                if (opaqueValue334 != 0)
                {
                    opaqueValue372 = sub_18009BD70 (stackStorage818, &unk_180F77138, 0xFFFFFFFFLL);
                    opaqueValue373 = sub_18035A810 (stackStorage817, opaqueValue334, opaqueValue372);
                    opaqueValue2 = opaqueValue370 | 0xC0;
                }
                else
                {
                    opaqueValue373 = sub_18009BD70 (stackStorage816, &unk_180F77138, 0xFFFFFFFFLL);
                    opaqueValue2 = opaqueValue370 | 0x100;
                }
                sub_18008BDB0 (stackStorage739, opaqueValue373);
                if ((opaqueValue2 & 0x100) != 0)
                {
                    opaqueValue2 &= ~0x100u;
                    sub_18000B8D0 (stackStorage816);
                }
                if ((opaqueValue2 & 0x80u) != 0)
                {
                    opaqueValue2 &= ~0x80u;
                    sub_18000B8D0 (stackStorage817);
                }
                if ((opaqueValue2 & 0x40) != 0)
                {
                    opaqueValue2 &= ~0x40u;
                    sub_18000B8D0 (stackStorage818);
                }
                opaqueValue374 = opaqueValue655 == 403 || (std::uint8_t)sub_18035A550 (stackStorage657) != 0;
                sub_18036F890 ((unsigned int)stackStorage878, (unsigned int)stackStorage739, (unsigned int)stackStorage657, opaqueValue655, opaqueValue374);
                sub_18000B8D0 (stackStorage739);
                sub_18000B8D0 (stackStorage657);
                goto label366;
            }
            if (opaqueValue334 == 0)
            {
                sub_1800971D0 (stackStorage733, "FAD-MAS-BAD-JSON");
                opaqueValue336 = sub_18009BD70 (stackStorage802, &unk_180F770E0, 0xFFFFFFFFLL);
                sub_18036F890 ((unsigned int)stackStorage878, opaqueValue336, (unsigned int)stackStorage733, opaqueValue655, 0);
                sub_18000B8D0 (stackStorage802);
                sub_18000B8D0 (stackStorage733);
                goto label366;
            }
            sub_180353E10 ((unsigned int)stackStorage1343, opaqueValue334, (unsigned int)stackStorage939, (unsigned int)stackStorage941, (std::int64_t)stackStorage942);
            if (stackStorage1343[0] == 0)
            {
                sub_180351D70 (stackStorage884, opaqueValue334);
                if (stackStorage884[0] == 0 || (std::uint8_t)entitlementIsStatusAllowed ((std::int64_t)stackStorage885) != 0)
                {
                    opaqueValue337 = 0;
                    opaqueValue338 = opaqueValue655;
                    opaqueValue339 = sub_1800971D0 (stackStorage805, "FAD-MAS-BAD-JSON");
                    opaqueValue340 = sub_18009BD70 (stackStorage803, &unk_180F77080, 0xFFFFFFFFLL);
                    opaqueValue2 |= 0x1400u;
                }
                else
                {
                    opaqueValue337 = 1;
                    opaqueValue338 = opaqueValue655;
                    opaqueValue339 = sub_1800971D0 (stackStorage806, "FAD-MAS-AUTHORIZATION-DENIED");
                    opaqueValue340 = sub_18009BD70 (stackStorage804, &unk_180F77050, 0xFFFFFFFFLL);
                    opaqueValue2 |= 0xA00u;
                }
                sub_18036F890 ((unsigned int)stackStorage878, opaqueValue340, opaqueValue339, opaqueValue338, opaqueValue337);
                if ((opaqueValue2 & 0x1000) != 0)
                {
                    opaqueValue2 &= ~0x1000u;
                    sub_18000B8D0 (stackStorage803);
                }
                if ((opaqueValue2 & 0x800) != 0)
                {
                    opaqueValue2 &= ~0x800u;
                    sub_18000B8D0 (stackStorage804);
                }
                if ((opaqueValue2 & 0x400) != 0)
                {
                    opaqueValue2 &= ~0x400u;
                    sub_18000B8D0 (stackStorage805);
                }
                if ((opaqueValue2 & 0x200) != 0)
                {
                    opaqueValue2 &= ~0x200u;
                    sub_18000B8D0 (stackStorage806);
                }
                sub_180051CF0 (stackStorage884);
            label365:
                sub_1803553A0 (stackStorage1343);
            label366:
                sub_1800A3440 (stackStorage929);
                sub_180051CF0 (&opaqueValue655);
                sub_18000B8D0 (stackStorage635);
                sub_18000B8D0 (stackStorage645);
                sub_180022890 (stackStorage631);
            label367:
                sub_180371BC0 (stackStorage638);
            label368:
                sub_180360820 (stackStorage939);
                break;
            }
            sub_180353410 (&opaqueValue768);
            if (opaqueValue768 != 0)
            {
                if (opaqueValue769 == 0)
                {
                    sub_1800971D0 (stackStorage734, "FAD-MAS-RESET-EPOCH");
                    opaqueValue341 = sub_18009BD70 (stackStorage807, &unk_180F772E0, 0xFFFFFFFFLL);
                    sub_18036F890 ((unsigned int)stackStorage878, opaqueValue341, (unsigned int)stackStorage734, 0, 0);
                    sub_18000B8D0 (stackStorage807);
                    sub_18000B8D0 (stackStorage734);
                    sub_180051CF0 (&opaqueValue768);
                    goto label365;
                }
            label370:
                opaqueValue342 = sub_18008BD40 (stackStorage809, stackStorage770);
                opaqueValue2 |= 0x2000u;
            }
            else
            {
                if (opaqueValue769 != 0)
                    goto label370;
                opaqueValue342 = sub_18002C900 (stackStorage808);
                opaqueValue2 |= 0x4000u;
            }
            sub_18008BD60 (stackStorage1345, opaqueValue342);
            if ((opaqueValue2 & 0x4000) != 0)
            {
                opaqueValue2 &= ~0x4000u;
                sub_18000B8D0 (stackStorage808);
            }
            if ((opaqueValue2 & 0x2000) != 0)
            {
                opaqueValue2 &= ~0x2000u;
                sub_18000B8D0 (stackStorage809);
            }
            sub_1803552A0 (stackStorage1381);
            opaqueValue343 = 0;
            opaqueValue344 = 0;
            opaqueValue345 = sub_180011290 (authManager);
            sub_180024E50 (stackStorage810, opaqueValue345 + 1168);
            opaqueValue346 = sub_180011290 (authManager);
            opaqueValue347 = sub_18007EF80 (opaqueValue346 + 1680, 2);
            conditionFlag613 = opaqueValue347 != opaqueValue658;
            if (opaqueValue347 == opaqueValue658)
            {
                opaqueValue343 = sub_180357E60 (stackStorage1344);
                if (opaqueValue343 != 0)
                {
                    opaqueValue344 = sub_180357000 (stackStorage1344);
                    if (opaqueValue344 != 0)
                    {
                        opaqueValue348 = sub_180011290 (authManager);
                        sub_180359400 (opaqueValue348, stackStorage1343);
                        opaqueValue349 = sub_180011290 (authManager);
                        juceStringClear (opaqueValue349 + 832);
                        stackStorage1276[0] = 0;
                        sub_18002C900 (stackStorage1277);
                        sub_18002C900 (stackStorage1278);
                        sub_18002C900 (stackStorage1279);
                        sub_18002C900 (stackStorage1280);
                        sub_18002C900 (stackStorage1281);
                        sub_18002C900 (stackStorage1282);
                        sub_18002C900 (stackStorage1283);
                        sub_18002C900 (stackStorage1284);
                        sub_18002C900 (stackStorage1285);
                        opaqueValue1286 = 0;
                        sub_18002C900 (stackStorage1287);
                        opaqueValue1288 = 0;
                        sub_1800A3420 (stackStorage1289);
                        opaqueValue1290 = 0;
                        sub_18002C900 (stackStorage1291);
                        opaqueValue1292 = 0;
                        opaqueValue1293 = 0;
                        opaqueValue1294 = 0;
                        opaqueValue1295 = 0;
                        opaqueValue1296 = 0;
                        opaqueValue1297 = 0;
                        opaqueValue1298 = 0;
                        opaqueValue1299 = 0;
                        opaqueValue1300 = 0;
                        opaqueValue1301 = 0;
                        sub_18002C900 (stackStorage1302);
                        opaqueValue1303 = 0;
                        sub_18002C900 (stackStorage1304);
                        sub_18002C900 (stackStorage1305);
                        sub_18002C900 (stackStorage1306);
                        sub_18002C900 (stackStorage1307);
                        sub_18002C900 (stackStorage1308);
                        opaqueValue1309 = 0;
                        sub_18002C900 (stackStorage1310);
                        sub_18002C900 (stackStorage1311);
                        stackStorage1311[8] = 0;
                        sub_18002C900 (stackStorage1312);
                        opaqueValue1313 = 0;
                        opaqueValue350 = sub_180011290 (authManager);
                        sub_180360F60 (opaqueValue350 + 840, stackStorage1276);
                        sub_180058EA0 (stackStorage1276);
                        *(std::uint32_t*)(sub_180011290 (authManager) + 1160) = 0;
                        *(std::uint8_t*)(sub_180011290 (authManager) + 1164) = 0;
                        opaqueValue351 = sub_180011290 (authManager) + 352;
                        opaqueValue352 = sub_180011290 (authManager);
                        opaqueValue353 = sub_180372150 (opaqueValue352 + 352, stackStorage909);
                        opaqueValue354 = sub_180360F40 (stackStorage904, opaqueValue353);
                        opaqueValue669 = 4;
                        opaqueValue355 = sub_180011290 (authManager);
                        opaqueValue356 = sub_180372150 (opaqueValue355 + 352, stackStorage910);
                        opaqueValue357 = sub_180011290 (authManager);
                        opaqueValue358 = sub_180372170 (opaqueValue357 + 352, stackStorage911);
                        opaqueValue359 = sub_1803711C0 (stackStorage912, opaqueValue358, opaqueValue356, &opaqueValue669);
                        opaqueValue360 = sub_180360F40 (stackStorage913, opaqueValue359);
                        sub_180371E00 (opaqueValue351, stackStorage914, opaqueValue360, opaqueValue354);
                        opaqueValue361 = sub_180011290 (authManager);
                        authStateNextEventSeq (opaqueValue361);
                        opaqueValue362 = sub_180011290 (authManager);
                        sub_18035D830 (stackStorage1381, opaqueValue362);
                    }
                }
            }
            sub_180024E40 (stackStorage810);
            if (conditionFlag613)
            {
                opaqueValue363 = sub_180372190 (stackStorage925, stackStorage943);
                opaqueValue364 = 0;
                goto label387;
            }
            if (opaqueValue343 != 0)
            {
                if (opaqueValue344 != 0)
                {
                    authEventsPersistAndDispatch (authManager, (std::int64_t)stackStorage1381, 0);
                    opaqueValue363 = sub_180372190 (stackStorage927, stackStorage943);
                    opaqueValue364 = 1;
                label387:
                    sub_180361BB0 (authManager, opaqueValue363, opaqueValue364);
                }
                else
                {
                    sub_1800971D0 (stackStorage736, "FAD-MAS-REVOCATION-CLEAR");
                    opaqueValue366 = sub_18009BD70 (stackStorage812, &unk_180F77210, 0xFFFFFFFFLL);
                    sub_18036F890 ((unsigned int)stackStorage878, opaqueValue366, (unsigned int)stackStorage736, 0, 0);
                    sub_18000B8D0 (stackStorage812);
                    sub_18000B8D0 (stackStorage736);
                }
            }
            else
            {
                sub_1800971D0 (stackStorage735, "FAD-MAS-AUTH-SAVE");
                opaqueValue365 = sub_18009BD70 (stackStorage811, &unk_180F77280, 0xFFFFFFFFLL);
                sub_18036F890 ((unsigned int)stackStorage878, opaqueValue365, (unsigned int)stackStorage735, 0, 0);
                sub_18000B8D0 (stackStorage811);
                sub_18000B8D0 (stackStorage735);
            }
            sub_180058EA0 (stackStorage1381);
            sub_180051CF0 (&opaqueValue768);
            sub_1803553A0 (stackStorage1343);
            sub_1800A3440 (stackStorage929);
            sub_180051CF0 (&opaqueValue655);
            sub_18000B8D0 (stackStorage635);
            sub_18000B8D0 (stackStorage645);
            sub_180022890 (stackStorage631);
            sub_180371BC0 (stackStorage638);
            sub_180360820 (stackStorage939);
            break;
        case 9:
            sub_1803552A0 (stackStorage954);
            opaqueValue375 = 0;
            sub_18002C900 (stackStorage618);
            opaqueValue625 = 0;
            opaqueValue376 = sub_180011290 (authManager);
            sub_180024E50 (stackStorage821, opaqueValue376 + 1168);
            opaqueValue377 = sub_180011290 (authManager);
            sub_18035D830 (stackStorage954, opaqueValue377);
            opaqueValue378 = sub_180011290 (authManager);
            opaqueValue379 = sub_18008BD40 (stackStorage819, opaqueValue378 + 320);
            opaqueValue380 = sub_180098780 (stackStorage820, opaqueValue379, "/auth/refresh");
            sub_180092B90 (stackStorage618, opaqueValue380);
            sub_18000B8D0 (stackStorage820);
            opaqueValue381 = sub_180011290 (authManager);
            opaqueValue625 = sub_18007EF80 (opaqueValue381 + 1680, 2);
            sub_180024E40 (stackStorage821);
            opaqueValue382 = opaqueValue957;
            opaqueValue614 = opaqueValue957;
            unknown_libname_2 (stackStorage619);
            unknown_libname_2 (stackStorage620);
            sub_180259B80 (stackStorage629, qword_1814FED50, 0);
            sub_18002C900 (stackStorage617);
            sub_180011280 (stackStorage766, authManager, &opaqueValue625);
            sub_18009BDD0 (stackStorage754, authManager);
            if (opaqueValue382 != 0)
            {
                opaqueValue383 = opaqueValue625;
                opaqueValue384 = sub_180011290 (authManager) + 1680;
                opaqueValue385 = sub_180011290 (authManager);
                sub_180357750 ((unsigned int)stackStorage1322, (unsigned int)stackStorage954, opaqueValue385 + 1576, opaqueValue384, opaqueValue383);
                if (stackStorage1323[338] != 0)
                {
                    opaqueValue387 = sub_180011290 (authManager);
                    opaqueValue388 = sub_180011290 (opaqueValue387 + 1576);
                    if ((std::uint8_t)sub_180024DA0 (opaqueValue388, 2) == 0)
                    {
                        sub_180357BE0 (stackStorage1322);
                    label688:
                        sub_18000B8D0 (stackStorage617);
                        sub_180259B60 (stackStorage629);
                        sub_180371BC0 (stackStorage620);
                        sub_180371BC0 (stackStorage619);
                        sub_18000B8D0 (stackStorage618);
                        return sub_180058EA0 (stackStorage954);
                    }
                    opaqueValue1104 = 0;
                    opaqueValue1105 = 0;
                    opaqueValue1106 = 0;
                    sub_18002C900 (stackStorage1107);
                    sub_18002C900 (stackStorage1108);
                    sub_18002C900 (stackStorage1109);
                    sub_18002C900 (stackStorage1110);
                    sub_18002C900 (stackStorage1111);
                    opaqueValue1112 = 0;
                    sub_1800A3420 (stackStorage1113);
                    stackStorage1113[16] = 0;
                    sub_18002C900 (stackStorage1114);
                    opaqueValue1115 = 0;
                    opaqueValue1116 = 0;
                    opaqueValue1117 = 0;
                    opaqueValue1118 = 0;
                    opaqueValue1119 = 0;
                    sub_180365EC0 (authManager, &opaqueValue1104);
                    sub_180365CD0 (&opaqueValue1104);
                    goto label479;
                }
                if (stackStorage1323[340] != 0)
                {
                    sub_180365C60 (stackStorage1367);
                    sub_1800971D0 (stackStorage740, "FAD-MAS-AUTH-READ");
                    sub_180092B90 (stackStorage1368, stackStorage740);
                    sub_18000B8D0 (stackStorage740);
                    sub_180365EC0 (authManager, stackStorage1367);
                    sub_180365CD0 (stackStorage1367);
                label479:
                    sub_180357BE0 (stackStorage1322);
                    goto label658;
                }
                if (stackStorage1323[337] != 0)
                {
                    sub_1803552A0 (stackStorage1398);
                    sub_18007EEF0 (stackStorage1320);
                    opaqueValue389 = sub_180011290 (authManager);
                    sub_180024E50 (stackStorage823, opaqueValue389 + 1168);
                    opaqueValue390 = sub_180011290 (authManager);
                    opaqueValue391 = sub_18007EF80 (opaqueValue390 + 1680, 2);
                    conditionFlag392 = opaqueValue391 != opaqueValue625;
                    if (opaqueValue391 == opaqueValue625)
                    {
                        opaqueValue393 = sub_180011290 (authManager);
                        sub_18035A540 (opaqueValue393);
                        opaqueValue394 = sub_180011290 (authManager) + 352;
                        opaqueValue395 = sub_180011290 (authManager);
                        opaqueValue396 = sub_180372150 (opaqueValue395 + 352, stackStorage886);
                        opaqueValue397 = sub_180360F40 (stackStorage915, opaqueValue396);
                        opaqueValue670 = 7;
                        opaqueValue398 = sub_180011290 (authManager);
                        opaqueValue399 = sub_180372150 (opaqueValue398 + 352, stackStorage916);
                        opaqueValue400 = sub_180011290 (authManager);
                        opaqueValue401 = sub_180372170 (opaqueValue400 + 352, stackStorage917);
                        opaqueValue402 = sub_1803711C0 (stackStorage918, opaqueValue401, opaqueValue399, &opaqueValue670);
                        opaqueValue403 = sub_180360F40 (stackStorage919, opaqueValue402);
                        sub_180371E00 (opaqueValue394, stackStorage920, opaqueValue403, opaqueValue397);
                        opaqueValue404 = sub_180011290 (authManager);
                        sub_1801EB280 (stackStorage1320, opaqueValue404 + 744);
                        sub_1800971D0 (stackStorage741, "FAD-MAS-AUTH-RESET");
                        opaqueValue405 = sub_18009BD70 (stackStorage822, &unk_180F77940, 0xFFFFFFFFLL);
                        opaqueValue406 = sub_180011290 (authManager);
                        sub_18035AAD0 (opaqueValue406, opaqueValue405, stackStorage741, 0);
                        sub_18000B8D0 (stackStorage822);
                        sub_18000B8D0 (stackStorage741);
                        opaqueValue407 = sub_180011290 (authManager);
                        authStateNextEventSeq (opaqueValue407);
                        opaqueValue408 = sub_180011290 (authManager);
                        sub_18035D830 (stackStorage1398, opaqueValue408);
                    }
                    sub_180024E40 (stackStorage823);
                    if (conditionFlag392)
                    {
                        opaqueValue1056 = 0;
                        opaqueValue1057 = 0;
                        opaqueValue1058 = 0;
                        sub_18002C900 (stackStorage1059);
                        sub_18002C900 (stackStorage1060);
                        sub_18002C900 (stackStorage1061);
                        sub_18002C900 (stackStorage1062);
                        sub_18002C900 (stackStorage1063);
                        opaqueValue1064 = 0;
                        sub_1800A3420 (stackStorage1065);
                        stackStorage1065[16] = 0;
                        sub_18002C900 (stackStorage1066);
                        opaqueValue1067 = 0;
                        opaqueValue1068 = 0;
                        opaqueValue1069 = 0;
                        opaqueValue1070 = 0;
                        opaqueValue1071 = 0;
                        sub_180365EC0 (authManager, &opaqueValue1056);
                        temporaryPointer409 = &opaqueValue1056;
                    }
                    else
                    {
                        if ((std::uint8_t)sub_18007DD40 (stackStorage1320) != 0)
                            sub_18007DD20 (stackStorage1320);
                        authEventsPersistAndDispatch (authManager, (std::int64_t)stackStorage1398, 0);
                        sub_180365C60 (stackStorage1371);
                        sub_1800971D0 (stackStorage742, "FAD-MAS-AUTH-RESET");
                        sub_180092B90 (stackStorage1372, stackStorage742);
                        sub_18000B8D0 (stackStorage742);
                        sub_180365EC0 (authManager, stackStorage1371);
                        temporaryPointer409 = (std::int16_t*)stackStorage1371;
                    }
                    sub_180365CD0 (temporaryPointer409);
                    sub_18000B560 (stackStorage1320);
                    temporaryPointer410 = stackStorage1398;
                }
                else if (stackStorage1323[336] != 0)
                {
                    sub_1803552A0 (stackStorage1399);
                    sub_18007EEF0 (stackStorage1318);
                    opaqueValue411 = sub_180011290 (authManager);
                    sub_180024E50 (stackStorage825, opaqueValue411 + 1168);
                    opaqueValue412 = sub_180011290 (authManager);
                    opaqueValue413 = sub_18007EF80 (opaqueValue412 + 1680, 2);
                    conditionFlag414 = opaqueValue413 != opaqueValue625;
                    if (opaqueValue413 == opaqueValue625)
                    {
                        opaqueValue415 = sub_180011290 (authManager);
                        sub_18035A540 (opaqueValue415);
                        opaqueValue416 = sub_180011290 (authManager) + 352;
                        opaqueValue417 = sub_180011290 (authManager);
                        opaqueValue418 = sub_180372150 (opaqueValue417 + 352, stackStorage921);
                        opaqueValue419 = sub_180360F40 (stackStorage922, opaqueValue418);
                        opaqueValue668 = 7;
                        opaqueValue420 = sub_180011290 (authManager);
                        opaqueValue421 = sub_180372150 (opaqueValue420 + 352, stackStorage923);
                        opaqueValue422 = sub_180011290 (authManager);
                        opaqueValue423 = sub_180372170 (opaqueValue422 + 352, stackStorage924);
                        opaqueValue424 = sub_1803711C0 (stackStorage903, opaqueValue423, opaqueValue421, &opaqueValue668);
                        opaqueValue425 = sub_180360F40 (stackStorage887, opaqueValue424);
                        sub_180371E00 (opaqueValue416, stackStorage888, opaqueValue425, opaqueValue419);
                        opaqueValue426 = sub_180011290 (authManager);
                        sub_1801EB280 (stackStorage1318, opaqueValue426 + 744);
                        sub_1800971D0 (stackStorage743, "FAD-MAS-TRANSACTION-REVOKED");
                        opaqueValue427 = sub_18009BD70 (stackStorage824, &unk_180F77870, 0xFFFFFFFFLL);
                        opaqueValue428 = sub_180011290 (authManager);
                        sub_18035AAD0 (opaqueValue428, opaqueValue427, stackStorage743, 403);
                        sub_18000B8D0 (stackStorage824);
                        sub_18000B8D0 (stackStorage743);
                        opaqueValue429 = sub_180011290 (authManager);
                        authStateNextEventSeq (opaqueValue429);
                        opaqueValue430 = sub_180011290 (authManager);
                        sub_18035D830 (stackStorage1399, opaqueValue430);
                    }
                    sub_180024E40 (stackStorage825);
                    if (conditionFlag414)
                    {
                        opaqueValue1136 = 0;
                        opaqueValue1137 = 0;
                        opaqueValue1138 = 0;
                        sub_18002C900 (stackStorage1139);
                        sub_18002C900 (stackStorage1140);
                        sub_18002C900 (stackStorage1141);
                        sub_18002C900 (stackStorage1142);
                        sub_18002C900 (stackStorage1143);
                        opaqueValue1144 = 0;
                        sub_1800A3420 (stackStorage1145);
                        stackStorage1145[16] = 0;
                        sub_18002C900 (stackStorage1146);
                        opaqueValue1147 = 0;
                        opaqueValue1148 = 0;
                        opaqueValue1149 = 0;
                        opaqueValue1150 = 0;
                        opaqueValue1151 = 0;
                        sub_180365EC0 (authManager, &opaqueValue1136);
                        temporaryPointer431 = &opaqueValue1136;
                    }
                    else
                    {
                        if ((std::uint8_t)sub_18007DD40 (stackStorage1318) != 0)
                            sub_18007DD20 (stackStorage1318);
                        authEventsPersistAndDispatch (authManager, (std::int64_t)stackStorage1399, 0);
                        sub_180365C60 (stackStorage1359);
                        sub_1800971D0 (stackStorage744, "FAD-MAS-TRANSACTION-REVOKED");
                        sub_180092B90 (stackStorage1361, stackStorage744);
                        sub_18000B8D0 (stackStorage744);
                        opaqueValue1360 = 403;
                        sub_180365EC0 (authManager, stackStorage1359);
                        temporaryPointer431 = (std::int16_t*)stackStorage1359;
                    }
                    sub_180365CD0 (temporaryPointer431);
                    sub_18000B560 (stackStorage1318);
                    temporaryPointer410 = stackStorage1399;
                }
                else
                {
                    if (stackStorage1323[0] != 0)
                    {
                        LOBYTE (opaqueValue386) = stackStorage1323[304] == 0;
                        sub_180370130 (stackStorage766, stackStorage1323, opaqueValue386);
                        goto label479;
                    }
                    if ((std::uint8_t)sub_1803711B0 (stackStorage1322, 0) != 0)
                    {
                        sub_1803552A0 (stackStorage1414);
                        opaqueValue432 = sub_180011290 (authManager);
                        sub_180024E50 (stackStorage827, opaqueValue432 + 1168);
                        opaqueValue433 = sub_180011290 (authManager);
                        opaqueValue434 = sub_18007EF80 (opaqueValue433 + 1680, 2);
                        conditionFlag435 = opaqueValue434 != opaqueValue625;
                        if (opaqueValue434 == opaqueValue625)
                        {
                            sub_1800971D0 (stackStorage745, "FAD-MAS-REFRESH-LOCK");
                            opaqueValue436 = sub_18009BD70 (stackStorage826, &unk_180F778D0, 0xFFFFFFFFLL);
                            opaqueValue437 = sub_180011290 (authManager);
                            sub_18035AAD0 (opaqueValue437, opaqueValue436, stackStorage745, 0);
                            sub_18000B8D0 (stackStorage826);
                            sub_18000B8D0 (stackStorage745);
                            opaqueValue438 = sub_180011290 (authManager);
                            authStateNextEventSeq (opaqueValue438);
                            opaqueValue439 = sub_180011290 (authManager);
                            sub_18035D830 (stackStorage1414, opaqueValue439);
                        }
                        sub_180024E40 (stackStorage827);
                        if (!conditionFlag435)
                            authEventsPersistAndDispatch (authManager, (std::int64_t)stackStorage1414, 0);
                        sub_180365C60 (stackStorage1365);
                        sub_1800971D0 (stackStorage746, "FAD-MAS-REFRESH-LOCK");
                        sub_180092B90 (stackStorage1366, stackStorage746);
                        sub_18000B8D0 (stackStorage746);
                        sub_180365EC0 (authManager, stackStorage1365);
                        sub_180365CD0 (stackStorage1365);
                        temporaryPointer410 = stackStorage1414;
                    }
                    else
                    {
                        sub_180371140 (stackStorage619, stackStorage1322);
                        if (stackStorage958[8] != 0)
                        {
                            sub_1803704D0 (stackStorage754, stackStorage1387, stackStorage954);
                            conditionFlag440 = false;
                            opaqueValue441 = sub_180011290 (authManager);
                            sub_180024E50 (stackStorage828, opaqueValue441 + 1168);
                            opaqueValue442 = sub_180011290 (authManager);
                            opaqueValue443 = sub_18007EF80 (opaqueValue442 + 1680, 2);
                            conditionFlag444 = opaqueValue443 != opaqueValue625;
                            if (opaqueValue443 == opaqueValue625 && stackStorage1387[0] != 0)
                                conditionFlag440 = (std::uint8_t)sub_180357E60 (stackStorage1388) != 0 && (std::uint8_t)sub_180357000 (stackStorage1388) != 0;
                            sub_180024E40 (stackStorage828);
                            if (conditionFlag444)
                            {
                                opaqueValue1152 = 0;
                                opaqueValue1153 = 0;
                                opaqueValue1154 = 0;
                                sub_18002C900 (stackStorage1155);
                                sub_18002C900 (stackStorage1156);
                                sub_18002C900 (stackStorage1157);
                                sub_18002C900 (stackStorage1158);
                                sub_18002C900 (stackStorage1159);
                                opaqueValue1160 = 0;
                                sub_1800A3420 (stackStorage1161);
                                stackStorage1161[16] = 0;
                                sub_18002C900 (stackStorage1162);
                                opaqueValue1163 = 0;
                                opaqueValue1164 = 0;
                                opaqueValue1165 = 0;
                                opaqueValue1166 = 0;
                                opaqueValue1167 = 0;
                                sub_180365EC0 (authManager, &opaqueValue1152);
                                sub_180365CD0 (&opaqueValue1152);
                            }
                            else if (conditionFlag440)
                            {
                                LOBYTE (opaqueValue445) = 1;
                                sub_180370130 (stackStorage766, stackStorage1387, opaqueValue445);
                            }
                            else
                            {
                                stackStorage1408[0] = 1;
                                sub_1803513E0 (stackStorage1409, stackStorage954);
                                stackStorage1409[320] = 0;
                                sub_180370130 (stackStorage766, stackStorage1408, 0);
                                sub_1803553A0 (stackStorage1408);
                            }
                            sub_1803553A0 (stackStorage1387);
                            goto label479;
                        }
                        sub_18008BD60 (stackStorage617, stackStorage958);
                        if ((std::uint8_t)sub_180352AC0 (stackStorage617) == 0)
                        {
                            opaqueValue446 = sub_180092C80 (stackStorage1324);
                            opaqueValue447 = sub_180092EC0 (opaqueValue446, stackStorage829);
                            sub_180092B90 (stackStorage617, opaqueValue447);
                            sub_18000B8D0 (stackStorage829);
                        }
                        sub_1803513E0 (stackStorage1376, stackStorage954);
                        stackStorage1376[0] = 1;
                        sub_18008BD60 (stackStorage1377, stackStorage617);
                        stackStorage1377[8] = 0;
                        opaqueValue448 = 0;
                        opaqueValue449 = sub_180011290 (authManager);
                        sub_180024E50 (stackStorage830, opaqueValue449 + 1168);
                        opaqueValue450 = sub_180011290 (authManager);
                        opaqueValue451 = sub_18007EF80 (opaqueValue450 + 1680, 2);
                        conditionFlag452 = opaqueValue451 != opaqueValue625;
                        if (opaqueValue451 == opaqueValue625)
                        {
                            opaqueValue448 = sub_180357E60 (stackStorage1376);
                            if (opaqueValue448 != 0)
                            {
                                opaqueValue453 = sub_180011290 (authManager);
                                sub_18008BD60 (opaqueValue453 + 288, stackStorage617);
                            }
                        }
                        sub_180024E40 (stackStorage830);
                        if (conditionFlag452)
                        {
                            opaqueValue1168 = 0;
                            opaqueValue1169 = 0;
                            opaqueValue1170 = 0;
                            sub_18002C900 (stackStorage1171);
                            sub_18002C900 (stackStorage1172);
                            sub_18002C900 (stackStorage1173);
                            sub_18002C900 (stackStorage1174);
                            sub_18002C900 (stackStorage1175);
                            opaqueValue1176 = 0;
                            sub_1800A3420 (stackStorage1177);
                            stackStorage1177[16] = 0;
                            sub_18002C900 (stackStorage1178);
                            opaqueValue1179 = 0;
                            opaqueValue1180 = 0;
                            opaqueValue1181 = 0;
                            opaqueValue1182 = 0;
                            opaqueValue1183 = 0;
                            sub_180365EC0 (authManager, &opaqueValue1168);
                            sub_180365CD0 (&opaqueValue1168);
                        }
                        else
                        {
                            if (opaqueValue448 != 0)
                            {
                                opaqueValue462 = sub_180011290 (authManager);
                                sub_180024E50 (stackStorage833, opaqueValue462 + 1168);
                                opaqueValue463 = sub_180011290 (authManager);
                                sub_18035D830 (stackStorage954, opaqueValue463);
                                sub_180024E40 (stackStorage833);
                                sub_180058EA0 (stackStorage1376);
                                sub_180357BE0 (stackStorage1322);
                                goto label508;
                            }
                            sub_1803552A0 (stackStorage1415);
                            opaqueValue454 = sub_180011290 (authManager);
                            sub_180024E50 (stackStorage832, opaqueValue454 + 1168);
                            opaqueValue455 = sub_180011290 (authManager);
                            opaqueValue456 = sub_18007EF80 (opaqueValue455 + 1680, 2);
                            conditionFlag457 = opaqueValue456 != opaqueValue625;
                            if (opaqueValue456 == opaqueValue625)
                            {
                                sub_1800971D0 (stackStorage747, "FAD-MAS-AUTH-SAVE");
                                opaqueValue458 = sub_18009BD70 (stackStorage831, &unk_180F77818, 0xFFFFFFFFLL);
                                opaqueValue459 = sub_180011290 (authManager);
                                sub_18035AAD0 (opaqueValue459, opaqueValue458, stackStorage747, 0);
                                sub_18000B8D0 (stackStorage831);
                                sub_18000B8D0 (stackStorage747);
                                opaqueValue460 = sub_180011290 (authManager);
                                authStateNextEventSeq (opaqueValue460);
                                opaqueValue461 = sub_180011290 (authManager);
                                sub_18035D830 (stackStorage1415, opaqueValue461);
                            }
                            sub_180024E40 (stackStorage832);
                            if (!conditionFlag457)
                                authEventsPersistAndDispatch (authManager, (std::int64_t)stackStorage1415, 0);
                            sub_180365C60 (stackStorage1369);
                            sub_1800971D0 (stackStorage748, "FAD-MAS-AUTH-SAVE");
                            sub_180092B90 (stackStorage1370, stackStorage748);
                            sub_18000B8D0 (stackStorage748);
                            sub_180365EC0 (authManager, stackStorage1369);
                            sub_180365CD0 (stackStorage1369);
                            sub_180058EA0 (stackStorage1415);
                        }
                        temporaryPointer410 = stackStorage1376;
                    }
                }
                sub_180058EA0 (temporaryPointer410);
                goto label479;
            }
            sub_1803525F0 (stackStorage650);
            opaqueValue464 = opaqueValue625;
            opaqueValue465 = sub_180011290 (authManager) + 1680;
            opaqueValue466 = sub_180011290 (authManager);
            if ((std::uint8_t)sub_18035DDF0 (
                    (unsigned int)stackStorage629,
                    (unsigned int)stackStorage620,
                    opaqueValue466 + 1576,
                    opaqueValue465,
                    opaqueValue464,
                    (std::int64_t)stackStorage650) == 0)
            {
                sub_180365C60 (stackStorage1346);
                sub_1800971D0 (stackStorage749, "FAD-AUTH-REFRESH-LOCK");
                sub_180092B90 (stackStorage1347, stackStorage749);
                sub_18000B8D0 (stackStorage749);
                opaqueValue467 = sub_18009BD70 (stackStorage834, &unk_180F77760, 0xFFFFFFFFLL);
                sub_180092B90 (stackStorage1348, opaqueValue467);
                sub_18000B8D0 (stackStorage834);
                sub_180365EC0 (authManager, stackStorage1346);
                sub_180365CD0 (stackStorage1346);
                goto label506;
            }
            authStorageReadSecureRecord (&opaqueValue1326);
            if (opaqueValue1327 == 0 && opaqueValue1328 == 0 && stackStorage1329[0] != 2)
            {
                if (opaqueValue1326 != 0 && (std::uint8_t)sub_18035D070 (stackStorage954, stackStorage1330) != 0)
                {
                    opaqueValue375 = 1;
                    sub_18035D830 (stackStorage954, stackStorage1330);
                }
                else
                {
                    opaqueValue375 = 0;
                }
                if (opaqueValue1326 != 0 && (std::uint8_t)sub_180097F10 (stackStorage1331, stackStorage955) != 0 && (std::uint8_t)sub_180352AC0 (stackStorage1332) != 0)
                {
                    sub_18008BD60 (stackStorage956, stackStorage1332);
                }
                sub_18008BD60 (stackStorage617, stackStorage956);
                if ((std::uint8_t)sub_180352AC0 (stackStorage617) == 0)
                {
                    opaqueValue468 = sub_180092C80 (stackStorage1325);
                    opaqueValue469 = sub_180092EC0 (opaqueValue468, stackStorage835);
                    sub_180092B90 (stackStorage617, opaqueValue469);
                    sub_18000B8D0 (stackStorage835);
                }
                sub_1803552A0 (stackStorage1362);
                opaqueValue470 = sub_180011290 (authManager);
                sub_180024E50 (stackStorage836, opaqueValue470 + 1168);
                opaqueValue471 = sub_180011290 (authManager);
                opaqueValue472 = sub_18007EF80 (opaqueValue471 + 1680, 2);
                conditionFlag473 = opaqueValue472 != opaqueValue625;
                if (opaqueValue472 == opaqueValue625)
                {
                    opaqueValue474 = sub_180011290 (authManager);
                    if (opaqueValue375 != 0)
                    {
                        authStateNextEventSeq (opaqueValue474);
                        temporaryPointer476 = stackStorage954;
                    }
                    else
                    {
                        sub_18008BD60 (opaqueValue474 + 40, stackStorage617);
                        opaqueValue475 = sub_180011290 (authManager);
                        authStateNextEventSeq (opaqueValue475);
                        temporaryPointer476 = (std::uint8_t*)sub_180011290 (authManager);
                    }
                    sub_18035D830 (stackStorage1362, temporaryPointer476);
                    opaqueValue1364 = *(std::uint64_t*)(sub_180011290 (authManager) + 312);
                    sub_18008BD60 (stackStorage1363, stackStorage617);
                }
                sub_180024E40 (stackStorage836);
                if (conditionFlag473)
                {
                    opaqueValue1184 = 0;
                    opaqueValue1185 = 0;
                    opaqueValue1186 = 0;
                    sub_18002C900 (stackStorage1187);
                    sub_18002C900 (stackStorage1188);
                    sub_18002C900 (stackStorage1189);
                    sub_18002C900 (stackStorage1190);
                    sub_18002C900 (stackStorage1191);
                    opaqueValue1192 = 0;
                    sub_1800A3420 (stackStorage1193);
                    stackStorage1193[16] = 0;
                    sub_18002C900 (stackStorage1194);
                    opaqueValue1195 = 0;
                    opaqueValue1196 = 0;
                    opaqueValue1197 = 0;
                    opaqueValue1198 = 0;
                    opaqueValue1199 = 0;
                    sub_180365EC0 (authManager, &opaqueValue1184);
                    temporaryPointer477 = &opaqueValue1184;
                    goto label505;
                }
                if ((std::uint8_t)authEventsPersistAndDispatch (authManager, (std::int64_t)stackStorage1362, 0) == 0)
                {
                    sub_180365C60 (stackStorage1349);
                    sub_1800971D0 (stackStorage750, "FAD-AUTH-KEYSTORE");
                    sub_180092B90 (stackStorage1350, stackStorage750);
                    sub_18000B8D0 (stackStorage750);
                    opaqueValue478 = sub_18009BD70 (stackStorage837, &unk_180F77BD0, 0xFFFFFFFFLL);
                    sub_180092B90 (stackStorage1351, opaqueValue478);
                    sub_18000B8D0 (stackStorage837);
                    sub_180365EC0 (authManager, stackStorage1349);
                    temporaryPointer477 = (std::int16_t*)stackStorage1349;
                label505:
                    sub_180365CD0 (temporaryPointer477);
                    sub_180058EA0 (stackStorage1362);
                    sub_18035D020 (&opaqueValue1326);
                label506:
                    sub_18000B8D0 (stackStorage650);
                label658:
                    sub_18000B8D0 (stackStorage617);
                    sub_180259B60 (stackStorage629);
                    sub_180371BC0 (stackStorage620);
                    sub_180371BC0 (stackStorage619);
                    sub_18000B8D0 (stackStorage618);
                    sub_180058EA0 (stackStorage954);
                    break;
                }
                sub_18035D830 (stackStorage954, stackStorage1362);
                sub_180058EA0 (stackStorage1362);
                sub_18035D020 (&opaqueValue1326);
                sub_18000B8D0 (stackStorage650);
            label508:
                opaqueValue479 = sub_180011290 (authManager);
                opaqueValue480 = sub_18007EF80 (opaqueValue479 + 1680, 2);
                if (opaqueValue480 != opaqueValue625)
                {
                    opaqueValue960 = 0;
                    opaqueValue961 = 0;
                    opaqueValue962 = 0;
                    sub_18002C900 (stackStorage963);
                    sub_18002C900 (stackStorage964);
                    sub_18002C900 (stackStorage965);
                    sub_18002C900 (stackStorage966);
                    sub_18002C900 (stackStorage967);
                    opaqueValue968 = 0;
                    sub_1800A3420 (stackStorage969);
                    stackStorage969[16] = 0;
                    sub_18002C900 (stackStorage970);
                    opaqueValue971 = 0;
                    opaqueValue972 = 0;
                    opaqueValue973 = 0;
                    opaqueValue974 = 0;
                    opaqueValue975 = 0;
                    sub_180365EC0 (authManager, &opaqueValue960);
                    temporaryPointer481 = &opaqueValue960;
                label657:
                    sub_180365CD0 (temporaryPointer481);
                    goto label658;
                }
                unixTimeMs482 = clockGetUnixTimeMilliseconds();
                sub_180364C60 ((unsigned int)stackStorage931, (std::uint32_t)authManager, (unsigned int)stackStorage955, (unsigned int)stackStorage618, (std::int64_t)stackStorage617);
                opaqueValue483 = sub_180011290 (authManager);
                opaqueValue484 = sub_180011290 (opaqueValue483 + 1576);
                if ((std::uint8_t)sub_180024DA0 (opaqueValue484, 2) == 0)
                {
                    sub_180365CD0 (stackStorage931);
                    goto label688;
                }
                opaqueValue485 = sub_180011290 (authManager);
                opaqueValue486 = sub_18007EF80 (opaqueValue485 + 1680, 2);
                if (opaqueValue486 != opaqueValue625)
                {
                    opaqueValue976 = 0;
                    opaqueValue977 = 0;
                    opaqueValue978 = 0;
                    sub_18002C900 (stackStorage979);
                    sub_18002C900 (stackStorage980);
                    sub_18002C900 (stackStorage981);
                    sub_18002C900 (stackStorage982);
                    sub_18002C900 (stackStorage983);
                    opaqueValue984 = 0;
                    sub_1800A3420 (stackStorage985);
                    stackStorage985[16] = 0;
                    sub_18002C900 (stackStorage986);
                    opaqueValue987 = 0;
                    opaqueValue988 = 0;
                    opaqueValue989 = 0;
                    opaqueValue990 = 0;
                    opaqueValue991 = 0;
                    sub_180365EC0 (authManager, &opaqueValue976);
                    sub_180365CD0 (&opaqueValue976);
                label656:
                    temporaryPointer481 = (std::int16_t*)stackStorage931;
                    goto label657;
                }
                if (stackStorage931[0] != 0)
                {
                    sub_18009BDD0 (stackStorage838, stackStorage931);
                    sub_1803552A0 (stackStorage1380);
                    opaqueValue487 = 0;
                    opaqueValue488 = 0;
                    opaqueValue489 = sub_180011290 (authManager);
                    sub_180024E50 (stackStorage839, opaqueValue489 + 1168);
                    opaqueValue490 = sub_180011290 (authManager);
                    opaqueValue491 = sub_18007EF80 (opaqueValue490 + 1680, 2);
                    conditionFlag492 = opaqueValue491 != opaqueValue625;
                    if (opaqueValue491 == opaqueValue625)
                    {
                        if (opaqueValue375 != 0)
                            temporaryPointer493 = stackStorage954;
                        else
                            temporaryPointer493 = (std::uint8_t*)sub_180011290 (authManager);
                        sub_1803513E0 (stackStorage1378, temporaryPointer493);
                        opaqueValue1379 = *(std::uint64_t*)(sub_180011290 (authManager) + 312);
                        sub_180370CD0 (stackStorage838, stackStorage1378);
                        opaqueValue494 = sub_180057FD0();
                        opaqueValue487 = sub_18034F9C0 (stackStorage1378, opaqueValue494);
                        if (opaqueValue487 == 0)
                        {
                            if (stackStorage1378[225] == 0 || (std::uint8_t)sub_180357E60 (stackStorage1378) != 0)
                            {
                                opaqueValue488 = 0;
                                opaqueValue495 = sub_180011290 (authManager);
                                sub_18035D830 (opaqueValue495, stackStorage1378);
                                opaqueValue496 = sub_180011290 (authManager);
                                authStateNextEventSeq (opaqueValue496);
                                opaqueValue497 = sub_180011290 (authManager);
                                sub_18035D830 (stackStorage1380, opaqueValue497);
                            }
                            else
                            {
                                opaqueValue488 = 1;
                            }
                        }
                        sub_180058EA0 (stackStorage1378);
                    }
                    sub_180024E40 (stackStorage839);
                    if (conditionFlag492)
                    {
                        opaqueValue1120 = 0;
                        opaqueValue1121 = 0;
                        opaqueValue1122 = 0;
                        sub_18002C900 (stackStorage1123);
                        sub_18002C900 (stackStorage1124);
                        sub_18002C900 (stackStorage1125);
                        sub_18002C900 (stackStorage1126);
                        sub_18002C900 (stackStorage1127);
                        opaqueValue1128 = 0;
                        sub_1800A3420 (stackStorage1129);
                        stackStorage1129[16] = 0;
                        sub_18002C900 (stackStorage1130);
                        opaqueValue1131 = 0;
                        opaqueValue1132 = 0;
                        opaqueValue1133 = 0;
                        opaqueValue1134 = 0;
                        opaqueValue1135 = 0;
                        sub_180365EC0 (authManager, &opaqueValue1120);
                        sub_180365CD0 (&opaqueValue1120);
                        sub_180058EA0 (stackStorage1380);
                        goto label656;
                    }
                    if (opaqueValue487 == 0)
                    {
                        if (opaqueValue488 != 0)
                        {
                            sub_1803552A0 (stackStorage1416);
                            opaqueValue506 = sub_180011290 (authManager);
                            sub_180024E50 (stackStorage842, opaqueValue506 + 1168);
                            opaqueValue507 = sub_180011290 (authManager);
                            opaqueValue508 = sub_18007EF80 (opaqueValue507 + 1680, 2);
                            conditionFlag509 = opaqueValue508 != opaqueValue625;
                            if (opaqueValue508 == opaqueValue625)
                            {
                                sub_1800971D0 (stackStorage752, "FAD-MAS-AUTH-SAVE");
                                opaqueValue510 = sub_18009BD70 (stackStorage841, &unk_180F77AB0, 0xFFFFFFFFLL);
                                opaqueValue511 = sub_180011290 (authManager);
                                sub_18035AAD0 (opaqueValue511, opaqueValue510, stackStorage752, 0);
                                sub_18000B8D0 (stackStorage841);
                                sub_18000B8D0 (stackStorage752);
                                opaqueValue512 = sub_180011290 (authManager);
                                authStateNextEventSeq (opaqueValue512);
                                opaqueValue513 = sub_180011290 (authManager);
                                sub_18035D830 (stackStorage1416, opaqueValue513);
                            }
                            sub_180024E40 (stackStorage842);
                            if (!conditionFlag509)
                            {
                                authEventsPersistAndDispatch (authManager, (std::int64_t)stackStorage1416, 0);
                                authManagerNotifyStateChangedAsync (authManager);
                            }
                            sub_180371000 (stackStorage1352, stackStorage931);
                            stackStorage1352[0] = 0;
                            sub_1800971D0 (stackStorage753, "FAD-MAS-AUTH-SAVE");
                            sub_180092B90 (stackStorage1353, stackStorage753);
                            sub_18000B8D0 (stackStorage753);
                            sub_180365EC0 (authManager, stackStorage1352);
                            sub_180365CD0 (stackStorage1352);
                            sub_180058EA0 (stackStorage1416);
                            sub_180058EA0 (stackStorage1380);
                        }
                        else
                        {
                            authEventsPersistAndDispatch (authManager, (std::int64_t)stackStorage1380, 1u);
                            sub_180365EC0 (authManager, stackStorage931);
                            sub_180058EA0 (stackStorage1380);
                        }
                        goto label656;
                    }
                    stackStorage931[0] = 0;
                    opaqueValue932 = 403;
                    sub_1800971D0 (stackStorage751, "FAD-AUTH-TRIAL-EXPIRED");
                    sub_180092B90 (stackStorage933, stackStorage751);
                    sub_18000B8D0 (stackStorage751);
                    opaqueValue498 = sub_18009BD70 (stackStorage840, &unk_180F76C10, 0xFFFFFFFFLL);
                    sub_180092B90 (stackStorage934, opaqueValue498);
                    sub_18000B8D0 (stackStorage840);
                    sub_180058EA0 (stackStorage1380);
                    opaqueValue3 = opaqueValue633;
                }
                if (opaqueValue614 != 0)
                {
                    if ((std::uint8_t)sub_18035A5B0 (stackStorage933) != 0)
                    {
                        sub_1803552A0 (stackStorage1340);
                        opaqueValue499 = sub_180011290 (authManager);
                        sub_180024E50 (stackStorage843, opaqueValue499 + 1168);
                        opaqueValue500 = sub_180011290 (authManager);
                        sub_18035D830 (stackStorage1340, opaqueValue500);
                        sub_180024E40 (stackStorage843);
                        sub_1803704D0 (stackStorage754, stackStorage1373, stackStorage1340);
                        conditionFlag501 = false;
                        opaqueValue502 = sub_180011290 (authManager);
                        sub_180024E50 (stackStorage844, opaqueValue502 + 1168);
                        opaqueValue503 = sub_180011290 (authManager);
                        opaqueValue504 = sub_18007EF80 (opaqueValue503 + 1680, 2);
                        conditionFlag505 = opaqueValue504 != opaqueValue625;
                        if (opaqueValue504 == opaqueValue625 && stackStorage1373[0] != 0)
                            conditionFlag501 = (std::uint8_t)sub_180357E60 (stackStorage1374) != 0 && (std::uint8_t)sub_180357000 (stackStorage1374) != 0;
                        sub_180024E40 (stackStorage844);
                        if (conditionFlag505)
                        {
                            opaqueValue992 = 0;
                            opaqueValue993 = 0;
                            opaqueValue994 = 0;
                            sub_18002C900 (stackStorage995);
                            sub_18002C900 (stackStorage996);
                            sub_18002C900 (stackStorage997);
                            sub_18002C900 (stackStorage998);
                            sub_18002C900 (stackStorage999);
                            opaqueValue1000 = 0;
                            sub_1800A3420 (stackStorage1001);
                            stackStorage1001[16] = 0;
                            sub_18002C900 (stackStorage1002);
                            opaqueValue1003 = 0;
                            opaqueValue1004 = 0;
                            opaqueValue1005 = 0;
                            opaqueValue1006 = 0;
                            opaqueValue1007 = 0;
                            sub_180365EC0 (authManager, &opaqueValue992);
                            sub_180365CD0 (&opaqueValue992);
                        }
                        else if (conditionFlag501)
                        {
                            LOBYTE (opaqueValue514) = 1;
                            sub_180370130 (stackStorage766, stackStorage1373, opaqueValue514);
                        }
                        else
                        {
                            stackStorage1340[0] = 0;
                            juceStringClear (stackStorage1341);
                            stackStorage1342[8] = 1;
                            if ((std::uint8_t)sub_180352AC0 (stackStorage1342) == 0)
                                sub_18008BD60 (stackStorage1342, stackStorage617);
                            sub_1803552A0 (stackStorage1400);
                            sub_18007EEF0 (stackStorage1319);
                            opaqueValue515 = sub_180011290 (authManager);
                            sub_180024E50 (stackStorage845, opaqueValue515 + 1168);
                            opaqueValue516 = sub_180011290 (authManager);
                            opaqueValue517 = sub_18007EF80 (opaqueValue516 + 1680, 2);
                            conditionFlag518 = opaqueValue517 != opaqueValue625;
                            if (opaqueValue517 == opaqueValue625)
                            {
                                sub_180357E60 (stackStorage1340);
                                stackStorage1410[0] = 1;
                                sub_1803513E0 (stackStorage1411, stackStorage1340);
                                stackStorage1411[320] = 0;
                                opaqueValue519 = sub_180011290 (authManager);
                                sub_180359400 (opaqueValue519, stackStorage1410);
                                sub_1803553A0 (stackStorage1410);
                                opaqueValue520 = sub_180011290 (authManager) + 352;
                                opaqueValue521 = sub_180011290 (authManager);
                                opaqueValue522 = sub_180372150 (opaqueValue521 + 352, stackStorage889);
                                opaqueValue523 = sub_180360F40 (stackStorage890, opaqueValue522);
                                opaqueValue673 = 7;
                                opaqueValue524 = sub_180011290 (authManager);
                                opaqueValue525 = sub_180372150 (opaqueValue524 + 352, stackStorage891);
                                opaqueValue526 = sub_180011290 (authManager);
                                opaqueValue527 = sub_180372170 (opaqueValue526 + 352, stackStorage892);
                                opaqueValue528 = sub_1803711C0 (stackStorage893, opaqueValue527, opaqueValue525, &opaqueValue673);
                                opaqueValue529 = sub_180360F40 (stackStorage894, opaqueValue528);
                                sub_180371E00 (opaqueValue520, stackStorage895, opaqueValue529, opaqueValue523);
                                opaqueValue530 = sub_180011290 (authManager);
                                sub_1801EB280 (stackStorage1319, opaqueValue530 + 744);
                                opaqueValue531 = sub_180011290 (authManager);
                                authStateNextEventSeq (opaqueValue531);
                                opaqueValue532 = sub_180011290 (authManager);
                                sub_18035D830 (stackStorage1400, opaqueValue532);
                            }
                            sub_180024E40 (stackStorage845);
                            if (conditionFlag518)
                            {
                                opaqueValue1008 = 0;
                                opaqueValue1009 = 0;
                                opaqueValue1010 = 0;
                                sub_18002C900 (stackStorage1011);
                                sub_18002C900 (stackStorage1012);
                                sub_18002C900 (stackStorage1013);
                                sub_18002C900 (stackStorage1014);
                                sub_18002C900 (stackStorage1015);
                                opaqueValue1016 = 0;
                                sub_1800A3420 (stackStorage1017);
                                stackStorage1017[16] = 0;
                                sub_18002C900 (stackStorage1018);
                                opaqueValue1019 = 0;
                                opaqueValue1020 = 0;
                                opaqueValue1021 = 0;
                                opaqueValue1022 = 0;
                                opaqueValue1023 = 0;
                                sub_180365EC0 (authManager, &opaqueValue1008);
                                sub_180365CD0 (&opaqueValue1008);
                            }
                            else
                            {
                                if ((std::uint8_t)sub_18007DD40 (stackStorage1319) != 0)
                                    sub_18007DD20 (stackStorage1319);
                                authEventsPersistAndDispatch (authManager, (std::int64_t)stackStorage1400, 0);
                                authManagerNotifyStateChangedAsync (authManager);
                                sub_180365EC0 (authManager, stackStorage931);
                            }
                            sub_18000B560 (stackStorage1319);
                            sub_180058EA0 (stackStorage1400);
                        }
                        sub_1803553A0 (stackStorage1373);
                        sub_180058EA0 (stackStorage1340);
                        goto label656;
                    }
                    if ((std::uint8_t)sub_18035A550 (stackStorage933) != 0)
                    {
                        sub_1803552A0 (stackStorage1384);
                        opaqueValue533 = sub_180011290 (authManager);
                        sub_180024E50 (stackStorage846, opaqueValue533 + 1168);
                        opaqueValue534 = sub_180011290 (authManager);
                        sub_18035D830 (stackStorage1384, opaqueValue534);
                        sub_180024E40 (stackStorage846);
                        opaqueValue535 = sub_1803563D0 (stackStorage1384, stackStorage933, unixTimeMs482);
                        opaqueValue536 = sub_1803574E0 (stackStorage1384);
                        if (opaqueValue535 == 0 && opaqueValue536 == 0)
                        {
                            sub_1800971D0 (stackStorage755, "AuthManager: failed to persist MAS refresh revocation deny state");
                            sub_18000B8D0 (stackStorage755);
                        }
                        sub_1803552A0 (stackStorage1401);
                        sub_18007EEF0 (stackStorage1321);
                        opaqueValue537 = sub_180011290 (authManager);
                        sub_180024E50 (stackStorage849, opaqueValue537 + 1168);
                        opaqueValue538 = sub_180011290 (authManager);
                        opaqueValue539 = sub_18007EF80 (opaqueValue538 + 1680, 2);
                        conditionFlag540 = opaqueValue539 != opaqueValue625;
                        if (opaqueValue539 == opaqueValue625)
                        {
                            opaqueValue541 = sub_180011290 (authManager);
                            sub_18035A540 (opaqueValue541);
                            opaqueValue542 = sub_180011290 (authManager) + 352;
                            opaqueValue543 = sub_180011290 (authManager);
                            opaqueValue544 = sub_180372150 (opaqueValue543 + 352, stackStorage896);
                            opaqueValue545 = sub_180360F40 (stackStorage897, opaqueValue544);
                            opaqueValue672 = 7;
                            opaqueValue546 = sub_180011290 (authManager);
                            opaqueValue547 = sub_180372150 (opaqueValue546 + 352, stackStorage898);
                            opaqueValue548 = sub_180011290 (authManager);
                            opaqueValue549 = sub_180372170 (opaqueValue548 + 352, stackStorage899);
                            opaqueValue550 = sub_1803711C0 (stackStorage900, opaqueValue549, opaqueValue547, &opaqueValue672);
                            opaqueValue551 = sub_180360F40 (stackStorage901, opaqueValue550);
                            sub_180371E00 (opaqueValue542, stackStorage902, opaqueValue551, opaqueValue545);
                            opaqueValue552 = sub_180011290 (authManager);
                            sub_1801EB280 (stackStorage1321, opaqueValue552 + 744);
                            if ((std::uint8_t)sub_18000B5A0 (stackStorage934) != 0)
                            {
                                opaqueValue553 = sub_18008BD40 (stackStorage848, stackStorage934);
                                opaqueValue2 |= 0x1000000u;
                            }
                            else
                            {
                                opaqueValue553 = sub_18009BD70 (stackStorage847, &unk_180F77A58, 0xFFFFFFFFLL);
                                opaqueValue2 |= 0x2000000u;
                            }
                            opaqueValue554 = sub_180011290 (authManager);
                            sub_18035AAD0 (opaqueValue554, opaqueValue553, stackStorage933, opaqueValue932);
                            if ((opaqueValue2 & 0x2000000) != 0)
                            {
                                opaqueValue2 &= ~0x2000000u;
                                sub_18000B8D0 (stackStorage847);
                            }
                            if ((opaqueValue2 & 0x1000000) != 0)
                            {
                                opaqueValue2 &= ~0x1000000u;
                                sub_18000B8D0 (stackStorage848);
                            }
                            opaqueValue555 = sub_180011290 (authManager);
                            authStateNextEventSeq (opaqueValue555);
                            opaqueValue556 = sub_180011290 (authManager);
                            sub_18035D830 (stackStorage1401, opaqueValue556);
                        }
                        sub_180024E40 (stackStorage849);
                        if (conditionFlag540)
                        {
                            opaqueValue1024 = 0;
                            opaqueValue1025 = 0;
                            opaqueValue1026 = 0;
                            sub_18002C900 (stackStorage1027);
                            sub_18002C900 (stackStorage1028);
                            sub_18002C900 (stackStorage1029);
                            sub_18002C900 (stackStorage1030);
                            sub_18002C900 (stackStorage1031);
                            opaqueValue1032 = 0;
                            sub_1800A3420 (stackStorage1033);
                            stackStorage1033[16] = 0;
                            sub_18002C900 (stackStorage1034);
                            opaqueValue1035 = 0;
                            opaqueValue1036 = 0;
                            opaqueValue1037 = 0;
                            opaqueValue1038 = 0;
                            opaqueValue1039 = 0;
                            sub_180365EC0 (authManager, &opaqueValue1024);
                            sub_180365CD0 (&opaqueValue1024);
                        }
                        else
                        {
                            if ((std::uint8_t)sub_18007DD40 (stackStorage1321) != 0)
                                sub_18007DD20 (stackStorage1321);
                            authEventsPersistAndDispatch (authManager, (std::int64_t)stackStorage1401, 0);
                            sub_180365EC0 (authManager, stackStorage931);
                        }
                        sub_18000B560 (stackStorage1321);
                        sub_180058EA0 (stackStorage1401);
                        sub_180058EA0 (stackStorage1384);
                        goto label656;
                    }
                }
                if (stackStorage931[1] != 0)
                {
                    sub_1803552A0 (stackStorage1385);
                    opaqueValue557 = 0;
                    opaqueValue558 = sub_180011290 (authManager);
                    sub_180024E50 (stackStorage853, opaqueValue558 + 1168);
                    opaqueValue559 = sub_180011290 (authManager);
                    opaqueValue560 = sub_18007EF80 (opaqueValue559 + 1680, 2);
                    conditionFlag561 = opaqueValue560 != opaqueValue625;
                    if (opaqueValue560 == opaqueValue625)
                    {
                        if (*(std::uint8_t*)(sub_180011290 (authManager) + 224) != 0 && (opaqueValue562 = sub_180011290 (authManager), (std::uint8_t)sub_18000B5A0 (opaqueValue562 + 8) != 0) && (opaqueValue563 = sub_180011290 (authManager), (std::uint8_t)sub_18000B5A0 (opaqueValue563 + 24) != 0) && ((std::uint8_t)sub_18000B590 (stackStorage933) != 0 || (std::uint8_t)sub_180097F90 (stackStorage933, "FAD-AUTH-PENDING-TOKEN-DELIVERY") != 0 || (std::uint8_t)sub_180097F90 (stackStorage933, "FAD-CHK-TOKEN-RACE") != 0))
                        {
                            opaqueValue564 = sub_18009BD70 (stackStorage850, &unk_180F779B0, 0xFFFFFFFFLL);
                            opaqueValue565 = sub_180011290 (authManager);
                            sub_18035AAD0 (opaqueValue565, opaqueValue564, stackStorage933, opaqueValue932);
                            sub_18000B8D0 (stackStorage850);
                            opaqueValue566 = sub_180011290 (authManager);
                            sub_180366280 (opaqueValue566, 7);
                            opaqueValue557 = 1;
                        }
                        else
                        {
                            opaqueValue567 = sub_180011290 (authManager);
                            sub_18035A390 (opaqueValue567);
                            if ((std::uint8_t)sub_18000B5A0 (stackStorage934) != 0)
                            {
                                opaqueValue568 = sub_18008BD40 (stackStorage852, stackStorage934);
                                opaqueValue2 |= 0x4000000u;
                            }
                            else
                            {
                                opaqueValue568 = sub_18009BD70 (stackStorage851, &unk_180F76A90, 0xFFFFFFFFLL);
                                opaqueValue2 |= 0x8000000u;
                            }
                            opaqueValue569 = sub_180011290 (authManager);
                            sub_18035AAD0 (opaqueValue569, opaqueValue568, stackStorage933, opaqueValue932);
                            if ((opaqueValue2 & 0x8000000) != 0)
                            {
                                opaqueValue2 &= ~0x8000000u;
                                sub_18000B8D0 (stackStorage851);
                            }
                            if ((opaqueValue2 & 0x4000000) != 0)
                            {
                                opaqueValue2 &= ~0x4000000u;
                                sub_18000B8D0 (stackStorage852);
                            }
                        }
                        opaqueValue570 = sub_180011290 (authManager);
                        authStateNextEventSeq (opaqueValue570);
                        opaqueValue571 = sub_180011290 (authManager);
                        sub_18035D830 (stackStorage1385, opaqueValue571);
                    }
                    sub_180024E40 (stackStorage853);
                    if (conditionFlag561)
                    {
                        opaqueValue1040 = 0;
                        opaqueValue1041 = 0;
                        opaqueValue1042 = 0;
                        sub_18002C900 (stackStorage1043);
                        sub_18002C900 (stackStorage1044);
                        sub_18002C900 (stackStorage1045);
                        sub_18002C900 (stackStorage1046);
                        sub_18002C900 (stackStorage1047);
                        opaqueValue1048 = 0;
                        sub_1800A3420 (stackStorage1049);
                        stackStorage1049[16] = 0;
                        sub_18002C900 (stackStorage1050);
                        opaqueValue1051 = 0;
                        opaqueValue1052 = 0;
                        opaqueValue1053 = 0;
                        opaqueValue1054 = 0;
                        opaqueValue1055 = 0;
                        sub_180365EC0 (authManager, &opaqueValue1040);
                        sub_180365CD0 (&opaqueValue1040);
                        sub_180058EA0 (stackStorage1385);
                        goto label656;
                    }
                    authEventsPersistAndDispatch (authManager, (std::int64_t)stackStorage1385, 0);
                    if (opaqueValue557 != 0)
                    {
                        sub_180365EC0 (authManager, stackStorage931);
                        sub_1803663D0 (authManager);
                        sub_180058EA0 (stackStorage1385);
                        goto label656;
                    }
                    temporaryPointer572 = stackStorage1385;
                label654:
                    sub_180058EA0 (temporaryPointer572);
                }
                else
                {
                    if ((std::uint8_t)sub_180359F00 (stackStorage933, opaqueValue932) != 0)
                    {
                        sub_1803552A0 (stackStorage1402);
                        sub_1803552A0 (stackStorage1386);
                        opaqueValue573 = 0;
                        opaqueValue574 = sub_180011290 (authManager);
                        sub_180024E50 (stackStorage856, opaqueValue574 + 1168);
                        opaqueValue575 = sub_180011290 (authManager);
                        opaqueValue576 = sub_18007EF80 (opaqueValue575 + 1680, 2);
                        conditionFlag577 = opaqueValue576 != opaqueValue625;
                        if (opaqueValue576 == opaqueValue625)
                        {
                            opaqueValue573 = *(std::uint8_t*)(sub_180011290 (authManager) + 225);
                            if (opaqueValue573 != 0)
                            {
                                opaqueValue578 = sub_180011290 (authManager);
                                sub_18035D830 (stackStorage1386, opaqueValue578);
                            }
                            if ((std::uint8_t)sub_180359FE0 (stackStorage933) == 0 || opaqueValue573 != 0)
                            {
                                opaqueValue580 = sub_180011290 (authManager);
                                sub_18035A390 (opaqueValue580);
                            }
                            else
                            {
                                opaqueValue579 = sub_180011290 (authManager);
                                sub_18035A020 (opaqueValue579);
                            }
                            if ((std::uint8_t)sub_18000B5A0 (stackStorage934) != 0)
                            {
                                opaqueValue581 = sub_18008BD40 (stackStorage855, stackStorage934);
                                opaqueValue2 |= 0x10000000u;
                            }
                            else
                            {
                                opaqueValue581 = sub_18009BD70 (stackStorage854, &unk_180F77A00, 0xFFFFFFFFLL);
                                opaqueValue2 |= 0x20000000u;
                            }
                            opaqueValue582 = sub_180011290 (authManager);
                            sub_18035AAD0 (opaqueValue582, opaqueValue581, stackStorage933, opaqueValue932);
                            if ((opaqueValue2 & 0x20000000) != 0)
                            {
                                opaqueValue2 &= ~0x20000000u;
                                sub_18000B8D0 (stackStorage854);
                            }
                            if ((opaqueValue2 & 0x10000000) != 0)
                            {
                                opaqueValue2 &= ~0x10000000u;
                                sub_18000B8D0 (stackStorage855);
                            }
                            opaqueValue583 = sub_180011290 (authManager);
                            authStateNextEventSeq (opaqueValue583);
                            opaqueValue584 = sub_180011290 (authManager);
                            sub_18035D830 (stackStorage1402, opaqueValue584);
                        }
                        sub_180024E40 (stackStorage856);
                        if (conditionFlag577)
                        {
                            opaqueValue1072 = 0;
                            opaqueValue1073 = 0;
                            opaqueValue1074 = 0;
                            sub_18002C900 (stackStorage1075);
                            sub_18002C900 (stackStorage1076);
                            sub_18002C900 (stackStorage1077);
                            sub_18002C900 (stackStorage1078);
                            sub_18002C900 (stackStorage1079);
                            opaqueValue1080 = 0;
                            sub_1800A3420 (stackStorage1081);
                            stackStorage1081[16] = 0;
                            sub_18002C900 (stackStorage1082);
                            opaqueValue1083 = 0;
                            opaqueValue1084 = 0;
                            opaqueValue1085 = 0;
                            opaqueValue1086 = 0;
                            opaqueValue1087 = 0;
                            sub_180365EC0 (authManager, &opaqueValue1072);
                            sub_180365CD0 (&opaqueValue1072);
                            sub_180058EA0 (stackStorage1386);
                            sub_180058EA0 (stackStorage1402);
                            goto label656;
                        }
                        if (opaqueValue573 != 0)
                        {
                            if ((std::uint8_t)sub_18035A550 (stackStorage933) != 0)
                            {
                                opaqueValue585 = sub_18008BD40 (stackStorage858, stackStorage933);
                                opaqueValue2 |= 0x40000000u;
                            }
                            else
                            {
                                opaqueValue585 = sub_1800971D0 (stackStorage857, "FAD-MAS-AUTHORIZATION-DENIED");
                                opaqueValue2 |= 0x80000000;
                            }
                            sub_18008BDB0 (stackStorage757, opaqueValue585);
                            if (opaqueValue2 < 0)
                            {
                                opaqueValue2 &= ~0x80000000;
                                sub_18000B8D0 (stackStorage857);
                            }
                            if ((opaqueValue2 & 0x40000000) != 0)
                            {
                                opaqueValue2 &= ~0x40000000u;
                                sub_18000B8D0 (stackStorage858);
                            }
                            opaqueValue586 = sub_1803563D0 (stackStorage1386, stackStorage757, unixTimeMs482);
                            opaqueValue587 = sub_1803574E0 (stackStorage1386);
                            if (opaqueValue586 == 0 && opaqueValue587 == 0)
                            {
                                sub_1800971D0 (stackStorage756, "AuthManager: failed to persist MAS refresh denial");
                                sub_18000B8D0 (stackStorage756);
                            }
                            sub_18000B8D0 (stackStorage757);
                        }
                        authEventsPersistAndDispatch (authManager, (std::int64_t)stackStorage1402, 0);
                        authManagerNotifyStateChangedAsync (authManager);
                        sub_180058EA0 (stackStorage1386);
                        temporaryPointer572 = stackStorage1402;
                        goto label654;
                    }
                    if (stackStorage931[2] != 0 || (std::uint8_t)sub_18000B5A0 (stackStorage933) != 0)
                    {
                        sub_1803552A0 (stackStorage1403);
                        opaqueValue588 = sub_180011290 (authManager);
                        sub_180024E50 (stackStorage861, opaqueValue588 + 1168);
                        opaqueValue589 = sub_180011290 (authManager);
                        opaqueValue590 = sub_18007EF80 (opaqueValue589 + 1680, 2);
                        conditionFlag591 = opaqueValue590 != opaqueValue625;
                        if (opaqueValue590 == opaqueValue625)
                        {
                            conditionFlag593 = false;
                            if (*(std::uint8_t*)sub_180011290 (authManager) == 0)
                            {
                                opaqueValue592 = sub_180011290 (authManager);
                                if ((std::uint8_t)sub_18000B5A0 (opaqueValue592 + 32) != 0)
                                    conditionFlag593 = true;
                            }
                            if ((std::uint8_t)sub_180097F90 (stackStorage933, "FAD-AUTH-TRIAL-EXPIRED") != 0)
                            {
                                opaqueValue594 = sub_180011290 (authManager);
                                sub_18035A420 (opaqueValue594);
                            }
                            else if (!conditionFlag593)
                            {
                                opaqueValue595 = sub_180011290 (authManager);
                                sub_18035A620 (opaqueValue595);
                            }
                            if ((std::uint8_t)sub_180359F70 (stackStorage933) != 0 || (opaqueValue596 = sub_180011290 (authManager), (std::uint8_t)sub_180359F70 (opaqueValue596 + 72) == 0))
                            {
                                if ((std::uint8_t)sub_18000B5A0 (stackStorage934) != 0)
                                {
                                    opaqueValue597 = sub_18008BD40 (stackStorage860, stackStorage934);
                                    opaqueValue598 = opaqueValue3 | 1;
                                }
                                else
                                {
                                    opaqueValue597 = sub_18009BD70 (stackStorage859, &unk_180F77C60, 0xFFFFFFFFLL);
                                    opaqueValue598 = opaqueValue3 | 2;
                                }
                                opaqueValue633 = opaqueValue598;
                                opaqueValue599 = sub_180011290 (authManager);
                                sub_18035AAD0 (opaqueValue599, opaqueValue597, stackStorage933, opaqueValue932);
                                if ((opaqueValue598 & 2) != 0)
                                {
                                    opaqueValue598 &= ~2u;
                                    opaqueValue633 = opaqueValue598;
                                    sub_18000B8D0 (stackStorage859);
                                }
                                if ((opaqueValue598 & 1) != 0)
                                {
                                    opaqueValue633 = opaqueValue598 & 0xFFFFFFFE;
                                    sub_18000B8D0 (stackStorage860);
                                }
                            }
                            opaqueValue600 = sub_180011290 (authManager);
                            authStateNextEventSeq (opaqueValue600);
                            opaqueValue601 = sub_180011290 (authManager);
                            sub_18035D830 (stackStorage1403, opaqueValue601);
                        }
                        sub_180024E40 (stackStorage861);
                        if (conditionFlag591)
                        {
                            opaqueValue1088 = 0;
                            opaqueValue1089 = 0;
                            opaqueValue1090 = 0;
                            sub_18002C900 (stackStorage1091);
                            sub_18002C900 (stackStorage1092);
                            sub_18002C900 (stackStorage1093);
                            sub_18002C900 (stackStorage1094);
                            sub_18002C900 (stackStorage1095);
                            opaqueValue1096 = 0;
                            sub_1800A3420 (stackStorage1097);
                            stackStorage1097[16] = 0;
                            sub_18002C900 (stackStorage1098);
                            opaqueValue1099 = 0;
                            opaqueValue1100 = 0;
                            opaqueValue1101 = 0;
                            opaqueValue1102 = 0;
                            opaqueValue1103 = 0;
                            sub_180365EC0 (authManager, &opaqueValue1088);
                            sub_180365CD0 (&opaqueValue1088);
                            sub_180058EA0 (stackStorage1403);
                            goto label656;
                        }
                        authEventsPersistAndDispatch (authManager, (std::int64_t)stackStorage1403, 0);
                        authManagerNotifyStateChangedAsync (authManager);
                        temporaryPointer572 = stackStorage1403;
                        goto label654;
                    }
                }
                sub_180365EC0 (authManager, stackStorage931);
                goto label656;
            }
            sub_180365C60 (stackStorage1337);
            if (opaqueValue1327 != 0)
            {
                temporaryPointer602 = "FAD-AUTH-STATE-SCHEMA";
            }
            else
            {
                temporaryPointer602 = "FAD-AUTH-KEYSTORE-READ";
                if (opaqueValue1328 != 0)
                    temporaryPointer602 = "FAD-AUTH-STATE-CORRUPT";
            }
            sub_1800971D0 (stackStorage758, temporaryPointer602);
            sub_180092B90 (stackStorage1338, stackStorage758);
            sub_18000B8D0 (stackStorage758);
            if (opaqueValue1327 != 0)
            {
                opaqueValue603 = sub_18009BD70 (stackStorage865, &unk_180F777C0, 0xFFFFFFFFLL);
                opaqueValue2 |= 0x100000u;
            }
            else
            {
                if (opaqueValue1328 != 0)
                {
                    opaqueValue604 = sub_18009BD70 (stackStorage864, &unk_180F77B70, 0xFFFFFFFFLL);
                    opaqueValue605 = opaqueValue2 | 0x200000;
                }
                else
                {
                    opaqueValue604 = sub_18035B040 (stackStorage863, stackStorage1329);
                    opaqueValue605 = opaqueValue2 | 0x400000;
                }
                opaqueValue603 = sub_18008BDB0 (stackStorage862, opaqueValue604);
                opaqueValue2 = opaqueValue605 | 0x800000;
            }
            sub_180092B90 (stackStorage1339, opaqueValue603);
            if ((opaqueValue2 & 0x800000) != 0)
            {
                opaqueValue2 &= ~0x800000u;
                sub_18000B8D0 (stackStorage862);
            }
            if ((opaqueValue2 & 0x400000) != 0)
            {
                opaqueValue2 &= ~0x400000u;
                sub_18000B8D0 (stackStorage863);
            }
            if ((opaqueValue2 & 0x200000) != 0)
            {
                opaqueValue2 &= ~0x200000u;
                sub_18000B8D0 (stackStorage864);
            }
            if ((opaqueValue2 & 0x100000) != 0)
            {
                opaqueValue2 &= ~0x100000u;
                sub_18000B8D0 (stackStorage865);
            }
            opaqueValue606 = sub_180011290 (authManager);
            sub_180024E50 (stackStorage866, opaqueValue606 + 1168);
            opaqueValue607 = sub_180011290 (authManager);
            sub_18035AAD0 (opaqueValue607, stackStorage1339, stackStorage1338, 0);
            sub_180024E40 (stackStorage866);
            authManagerNotifyStateChangedAsync (authManager);
            sub_180365EC0 (authManager, stackStorage1337);
            sub_180365CD0 (stackStorage1337);
            sub_18035D020 (&opaqueValue1326);
            sub_18000B8D0 (stackStorage650);
            sub_18000B8D0 (stackStorage617);
            sub_180259B60 (stackStorage629);
            sub_180371BC0 (stackStorage620);
            sub_180371BC0 (stackStorage619);
            sub_18000B8D0 (stackStorage618);
            temporaryPointer244 = stackStorage954;
            goto label678;
        default:
            break;
        }
    label679:
        if (**(std::uint8_t**)(*authManager + 1576) == 0)
            goto label690;
        opaqueValue3 = opaqueValue633;
    }
    opaqueValue608 = sub_180011290 (authManager);
    p_lpCriticalSection = &lpCriticalSection;
label691:
    *(std::uint8_t*)(opaqueValue608 + 1704) = 0;
    return sub_180024E40 (p_lpCriticalSection);
}
