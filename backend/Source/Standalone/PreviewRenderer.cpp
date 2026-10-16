#include <cstdint>

// ===== Cli_RenderProbe @ 0x1808227a0 size=9964 =====
// render harness: peak<=1e-7 without silence-allowed -> UNEXPECTED_SILENCE; OUTPUT_IO_ERROR checks
std::uint64_t* cliRenderPreview (std::uint8_t* cliHost, std::uint64_t* outputResponse, const char* requestJson)
{
    int opaqueValue5; // esi
    std::int64_t opaqueValue6; // rax
    double scalarValue7; // xmm9_8
    LPCRITICAL_SECTION opaqueValue8; // xmm10_8
    double scalarValue9; // xmm11_8
    std::int64_t opaqueValue10; // r14
    volatile std::int32_t* temporaryPointer11; // r13
    std::int64_t opaqueValue12; // rbx
    std::int64_t opaqueValue13; // rax
    std::uint8_t* stringStorageToRelease14; // rcx
    void (***callbackFunction15) (std::uint64_t, std::int64_t); // r12
    ULONGLONG TickCount64; // rax
    std::int64_t opaqueValue18; // rcx
    std::int64_t opaqueValue19; // rax
    std::int64_t opaqueValue20; // rax
    std::int64_t opaqueValue21; // r8
    void* stringStorageToRelease22; // rcx
    std::int64_t opaqueValue23; // rdi
    std::int64_t opaqueValue24; // rax
    std::int64_t opaqueValue25; // r9
    std::int64_t opaqueValue26; // rcx
    std::uint8_t opaqueValue27; // al
    int opaqueValue28; // eax
    std::int64_t opaqueValue29; // r8
    std::int64_t opaqueValue30; // rdx
    std::int64_t opaqueValue31; // rcx
    std::uint8_t opaqueValue32; // al
    int opaqueValue33; // eax
    std::uint32_t* temporaryPointer34; // rdi
    int* temporaryPointer35; // rdi
    double scalarValue36; // xmm7_8
    double scalarValue37; // xmm8_8
    std::int64_t opaqueValue38; // rsi
    ULONGLONG currentTickMs39; // rax
    char* temporaryPointer41; // rcx
    std::int64_t opaqueValue42; // r9
    unsigned int opaqueValue43; // r10d
    std::int64_t opaqueValue44; // r8
    std::int64_t opaqueValue45; // rdx
    std::int64_t opaqueValue46; // rax
    std::int64_t opaqueValue47; // rcx
    std::int64_t* temporaryPointer48; // rdx
    std::int64_t opaqueValue49; // rdx
    int opaqueValue50; // ecx
    int opaqueValue51; // eax
    std::int64_t opaqueValue52; // rax
    std::uint64_t opaqueValue53; // rdx
    char* temporaryPointer54; // rax
    char* temporaryPointer55; // rax
    std::int64_t opaqueValue56; // r14
    std::int64_t opaqueValue57; // r12
    std::uint64_t* temporaryPointer58; // rbx
    std::int64_t opaqueValue59; // rcx
    std::int64_t opaqueValue60; // r12
    std::int64_t opaqueValue61; // r14
    bool conditionFlag62; // cf
    int* temporaryPointer63; // rcx
    int* temporaryPointer64; // rax
    int* temporaryPointer65; // rax
    std::int64_t* temporaryPointer66; // r11
    int opaqueValue67; // eax
    int opaqueValue68; // r8d
    int opaqueValue69; // r10d
    std::int64_t opaqueValue70; // r9
    int opaqueValue71; // r10d
    int* temporaryPointer72; // rax
    std::int64_t opaqueValue73; // rdx
    std::int64_t opaqueValue74; // r9
    std::int64_t opaqueValue75; // r8
    char opaqueValue76; // al
    char opaqueValue77; // al
    double scalarValue78; // xmm6_8
    char opaqueValue79; // al
    unsigned int opaqueValue80; // edi
    std::int64_t opaqueValue81; // rdx
    std::int64_t opaqueValue82; // rcx
    std::int64_t opaqueValue83; // rax
    std::int64_t opaqueValue84; // r9
    LPVOID opaqueValue85; // r10
    std::uint64_t* temporaryPointer86; // r8
    int opaqueValue87; // edi
    float* temporaryPointer88; // rax
    std::uint32_t opaqueValue89; // xmm9_4
    float scalarValue90; // xmm6_4
    std::int64_t opaqueValue91; // rcx
    std::int64_t opaqueValue92; // rdi
    std::int64_t opaqueValue93; // rcx
    std::int64_t opaqueValue94; // rdi
    std::int64_t opaqueValue95; // rdi
    std::int64_t opaqueValue96; // rdi
    std::int64_t opaqueValue97; // rdi
    std::int64_t opaqueValue98; // rdi
    std::int64_t opaqueValue99; // rcx
    volatile std::int32_t* stringStorageToRelease100; // rbx
    std::int64_t opaqueValue101; // rdx
    int opaqueValue102; // ecx
    std::int64_t opaqueValue103; // rdx
    std::uint8_t opaqueValue104; // al
    const char* temporaryPointer105; // rbx
    char opaqueValue106; // al
    volatile std::int32_t* temporaryPointer107; // rbx
    char* temporaryPointer108; // r12
    std::int64_t opaqueValue109; // rax
    std::int64_t opaqueValue110; // rax
    std::int64_t opaqueValue111; // rax
    unsigned int opaqueValue112; // esi
    std::int64_t opaqueValue113; // rax
    std::int64_t opaqueValue114; // rcx
    std::int64_t opaqueValue115; // rcx
    std::int64_t opaqueValue116; // rcx
    std::int64_t opaqueValue117; // rcx
    std::int64_t opaqueValue118; // rcx
    std::int64_t opaqueValue119; // rcx
    std::int64_t opaqueValue120; // rcx
    std::int64_t opaqueValue121; // rcx
    std::int64_t opaqueValue122; // rcx
    std::int64_t opaqueValue123; // rcx
    std::int64_t opaqueValue124; // rcx
    double scalarValue125; // xmm8_8
    double scalarValue126; // xmm6_8
    std::int64_t opaqueValue127; // rcx
    LPCRITICAL_SECTION opaqueValue128; // rcx
    std::int64_t opaqueValue129; // rcx
    std::int64_t allocatedObject130; // rsi
    char* temporaryPointer131; // r12
    std::uint64_t* temporaryPointer132; // rax
    void* temporaryPointer133; // rcx
    std::int64_t opaqueValue134; // rsi
    void (***callbackFunction135) (std::uint64_t, std::int64_t); // r12
    char opaqueValue136; // cl
    volatile std::int32_t* temporaryPointer137; // rbx
    void* temporaryPointer138; // rcx
    std::uint8_t* stringStorageToRelease139; // rcx
    volatile std::int32_t* temporaryPointer140; // rcx
    void* stringStorageToRelease141; // rcx
    void* stringStorageToRelease142; // rcx
    void* stringStorageToRelease143; // rcx
    std::uint8_t* stringStorageToRelease144; // rcx
    void* stringStorageToRelease145; // rcx
    volatile std::int32_t* temporaryPointer146; // rcx
    void* stringStorageToRelease147; // rcx
    std::int64_t opaqueValue149; // rax
    std::int64_t opaqueValue150; // rax
    std::int64_t opaqueValue151; // rax
    std::int64_t opaqueValue152; // rax
    std::int64_t opaqueValue153; // rax
    std::int64_t opaqueValue154; // rax
    std::int64_t opaqueValue155; // rax
    std::int64_t opaqueValue156; // rax
    std::int64_t opaqueValue157; // rax
    std::int64_t opaqueValue158; // rax
    std::int64_t opaqueValue159; // rax
    std::int64_t opaqueValue160; // rax
    std::int64_t opaqueValue161; // rax
    std::int64_t opaqueValue162; // rax
    std::int64_t opaqueValue163; // rax
    std::int64_t opaqueValue164; // rax
    std::int64_t opaqueValue165; // rax
    std::int64_t opaqueValue166; // rax
    int opaqueValue167; // ebx
    std::int64_t opaqueValue168; // rax
    std::int64_t opaqueValue169; // rax
    std::int64_t opaqueValue170; // rdx
    int opaqueValue171; // [rsp+78h] [rbp-88h]
    char opaqueValue172; // [rsp+78h] [rbp-88h]
    char opaqueValue173; // [rsp+78h] [rbp-88h]
    char opaqueValue174; // [rsp+78h] [rbp-88h]
    char opaqueValue175; // [rsp+78h] [rbp-88h]
    unsigned int opaqueValue176; // [rsp+80h] [rbp-80h]
    int opaqueValue177; // [rsp+80h] [rbp-80h]
    LPCRITICAL_SECTION stackStorage178[2]; // [rsp+90h] [rbp-70h] BYREF
    std::int64_t opaqueValue179; // [rsp+A0h] [rbp-60h]
    LPVOID stackStorage180[2]; // [rsp+B0h] [rbp-50h] BYREF
    int opaqueValue181; // [rsp+C0h] [rbp-40h]
    const char* temporaryPointer182; // [rsp+D0h] [rbp-30h] BYREF
    int opaqueValue183; // [rsp+D8h] [rbp-28h]
    const char* temporaryPointer184; // [rsp+E0h] [rbp-20h] BYREF
    LPCRITICAL_SECTION opaqueValue185; // [rsp+E8h] [rbp-18h] BYREF
    char opaqueValue186; // [rsp+F0h] [rbp-10h]
    std::uint64_t* opaqueValue187; // [rsp+F8h] [rbp-8h] BYREF
    std::int64_t opaqueValue188; // [rsp+100h] [rbp+0h] BYREF
    int opaqueValue189; // [rsp+108h] [rbp+8h]
    double scalarValue190; // [rsp+110h] [rbp+10h] BYREF
    std::int64_t opaqueValue191; // [rsp+118h] [rbp+18h]
    char* temporaryPointer192; // [rsp+120h] [rbp+20h] BYREF
    std::int64_t opaqueValue193; // [rsp+128h] [rbp+28h]
    std::uint64_t* temporaryPointer194; // [rsp+130h] [rbp+30h]
    double scalarValue195; // [rsp+138h] [rbp+38h]
    LPCRITICAL_SECTION lpCriticalSection; // [rsp+140h] [rbp+40h]
    std::int64_t opaqueValue197; // [rsp+148h] [rbp+48h] BYREF
    LPVOID opaqueValue198; // [rsp+150h] [rbp+50h] BYREF
    std::int64_t opaqueValue199; // [rsp+158h] [rbp+58h]
    char* temporaryPointer200; // [rsp+160h] [rbp+60h] BYREF
    char* temporaryPointer201; // [rsp+168h] [rbp+68h] BYREF
    std::int64_t opaqueValue202; // [rsp+170h] [rbp+70h] BYREF
    std::int64_t opaqueValue203; // [rsp+178h] [rbp+78h]
    LPVOID stackStorage204[2]; // [rsp+180h] [rbp+80h] BYREF
    std::int64_t opaqueValue205; // [rsp+190h] [rbp+90h]
    std::uint8_t* temporaryPointer206; // [rsp+198h] [rbp+98h] BYREF
    volatile std::int32_t* temporaryPointer207; // [rsp+1A0h] [rbp+A0h] BYREF
    std::uint8_t* temporaryPointer208; // [rsp+1A8h] [rbp+A8h] BYREF
    void (***callbackFunction209) (std::uint64_t, std::int64_t); // [rsp+1B0h] [rbp+B0h] BYREF
    char* temporaryPointer210; // [rsp+1B8h] [rbp+B8h]
    double scalarValue211; // [rsp+1C0h] [rbp+C0h]
    std::int64_t opaqueValue212; // [rsp+1C8h] [rbp+C8h]
    void (***callbackFunction213) (std::uint64_t, std::int64_t); // [rsp+1D0h] [rbp+D0h] BYREF
    unsigned int opaqueValue214; // [rsp+1D8h] [rbp+D8h]
    std::int64_t (**callbackFunction215)(); // [rsp+1E0h] [rbp+E0h] BYREF
    std::int64_t opaqueValue216; // [rsp+1E8h] [rbp+E8h]
    double scalarValue217; // [rsp+1F0h] [rbp+F0h]
    __m128i si128; // [rsp+1F8h] [rbp+F8h]
    int opaqueValue219; // [rsp+208h] [rbp+108h]
    int opaqueValue220; // [rsp+20Ch] [rbp+10Ch]
    volatile std::int32_t* temporaryPointer221; // [rsp+210h] [rbp+110h] BYREF
    std::int64_t opaqueValue222; // [rsp+218h] [rbp+118h] BYREF
    std::uint64_t stackStorage223[2]; // [rsp+220h] [rbp+120h] BYREF
    char* temporaryPointer224; // [rsp+230h] [rbp+130h] BYREF
    void** temporaryPointer225; // [rsp+238h] [rbp+138h] BYREF
    std::int64_t opaqueValue226; // [rsp+240h] [rbp+140h] BYREF
    LPVOID stackStorage227[2]; // [rsp+248h] [rbp+148h] BYREF
    volatile std::int32_t* temporaryPointer228; // [rsp+258h] [rbp+158h]
    struct _RTL_CRITICAL_SECTION* temporaryPointer229; // [rsp+260h] [rbp+160h] BYREF
    struct _RTL_CRITICAL_SECTION* temporaryPointer230; // [rsp+268h] [rbp+168h]
    const char* temporaryPointer231; // [rsp+278h] [rbp+178h]
    std::int64_t opaqueValue232; // [rsp+280h] [rbp+180h]
    volatile std::int32_t* temporaryPointer233; // [rsp+288h] [rbp+188h]
    std::int64_t opaqueValue234; // [rsp+290h] [rbp+190h]
    std::int64_t opaqueValue235; // [rsp+298h] [rbp+198h]
    std::int64_t opaqueValue236; // [rsp+2A0h] [rbp+1A0h]
    std::int64_t opaqueValue237; // [rsp+2A8h] [rbp+1A8h]
    int opaqueValue238; // [rsp+2B0h] [rbp+1B0h]
    std::int64_t opaqueValue239; // [rsp+2B8h] [rbp+1B8h]
    unsigned int opaqueValue240; // [rsp+2C4h] [rbp+1C4h]
    char stackStorage241[16]; // [rsp+2C8h] [rbp+1C8h] BYREF
    unsigned int opaqueValue242; // [rsp+2E0h] [rbp+1E0h]
    unsigned int opaqueValue243; // [rsp+2E4h] [rbp+1E4h]
    std::int64_t opaqueValue244; // [rsp+2F0h] [rbp+1F0h]
    std::uint64_t stackStorage245[2]; // [rsp+300h] [rbp+200h] BYREF
    LPVOID stackStorage246[2]; // [rsp+310h] [rbp+210h]
    __int128 opaqueValue247; // [rsp+320h] [rbp+220h]
    __int128 opaqueValue248; // [rsp+330h] [rbp+230h]
    __int128 opaqueValue249; // [rsp+340h] [rbp+240h] BYREF
    __int128 opaqueValue250; // [rsp+350h] [rbp+250h] BYREF
    std::uint64_t stackStorage251[4]; // [rsp+360h] [rbp+260h] BYREF
    __int128 opaqueValue252; // [rsp+380h] [rbp+280h]
    std::uint8_t* temporaryPointer253; // [rsp+390h] [rbp+290h]
    volatile std::int32_t* temporaryPointer254; // [rsp+398h] [rbp+298h]
    __m128i* vectorValue255; // [rsp+3A0h] [rbp+2A0h]
    std::uint64_t* temporaryPointer256; // [rsp+3A8h] [rbp+2A8h]
    std::int64_t opaqueValue257; // [rsp+3B0h] [rbp+2B0h]
    char stackStorage258[16]; // [rsp+3B8h] [rbp+2B8h] BYREF
    LPVOID lpMem; // [rsp+3C8h] [rbp+2C8h]
    char opaqueValue260; // [rsp+3F0h] [rbp+2F0h]
    char stackStorage261[16]; // [rsp+408h] [rbp+308h] BYREF
    char stackStorage262[48]; // [rsp+418h] [rbp+318h] BYREF
    char stackStorage263[16]; // [rsp+448h] [rbp+348h] BYREF
    LPVOID opaqueValue264; // [rsp+458h] [rbp+358h]
    char opaqueValue265; // [rsp+480h] [rbp+380h]
    char stackStorage266[16]; // [rsp+498h] [rbp+398h] BYREF
    char stackStorage267[48]; // [rsp+4A8h] [rbp+3A8h] BYREF
    char stackStorage268[16]; // [rsp+4D8h] [rbp+3D8h] BYREF
    LPVOID opaqueValue269; // [rsp+4E8h] [rbp+3E8h]
    char opaqueValue270; // [rsp+510h] [rbp+410h]
    char stackStorage271[16]; // [rsp+528h] [rbp+428h] BYREF
    char stackStorage272[56]; // [rsp+538h] [rbp+438h] BYREF
    std::uint8_t stackStorage273[16]; // [rsp+570h] [rbp+470h] BYREF
    LPVOID opaqueValue274; // [rsp+580h] [rbp+480h]
    char opaqueValue275; // [rsp+5A8h] [rbp+4A8h]
    char stackStorage276[16]; // [rsp+5C0h] [rbp+4C0h] BYREF
    char stackStorage277[48]; // [rsp+5D0h] [rbp+4D0h] BYREF
    std::int64_t opaqueValue278; // [rsp+600h] [rbp+500h] BYREF
    char stackStorage279[8]; // [rsp+608h] [rbp+508h] BYREF
    std::int64_t opaqueValue280; // [rsp+610h] [rbp+510h] BYREF
    char stackStorage281[8]; // [rsp+618h] [rbp+518h] BYREF
    char stackStorage282[8]; // [rsp+620h] [rbp+520h] BYREF
    void* temporaryPointer283; // [rsp+628h] [rbp+528h]
    std::int64_t succeededString284; // [rsp+630h] [rbp+530h] BYREF
    char stackStorage285[8]; // [rsp+638h] [rbp+538h] BYREF
    void* temporaryPointer286; // [rsp+640h] [rbp+540h]
    volatile std::int32_t* temporaryPointer287; // [rsp+648h] [rbp+548h]
    char stackStorage288[8]; // [rsp+650h] [rbp+550h] BYREF
    void* temporaryPointer289; // [rsp+658h] [rbp+558h]
    volatile std::int32_t* temporaryPointer290; // [rsp+660h] [rbp+560h]
    char stackStorage291[8]; // [rsp+668h] [rbp+568h] BYREF
    void* temporaryPointer292; // [rsp+670h] [rbp+570h]
    std::int64_t opaqueValue293; // [rsp+678h] [rbp+578h]
    char stackStorage294[8]; // [rsp+680h] [rbp+580h] BYREF
    void* temporaryPointer295; // [rsp+688h] [rbp+588h]
    std::int64_t opaqueValue296; // [rsp+690h] [rbp+590h]
    char stackStorage297[8]; // [rsp+698h] [rbp+598h] BYREF
    void* temporaryPointer298; // [rsp+6A0h] [rbp+5A0h]
    std::int64_t messageString299; // [rsp+6A8h] [rbp+5A8h] BYREF
    char stackStorage300[8]; // [rsp+6B0h] [rbp+5B0h] BYREF
    void* temporaryPointer301; // [rsp+6B8h] [rbp+5B8h]
    std::int64_t opaqueValue302; // [rsp+6C0h] [rbp+5C0h]
    char stackStorage303[8]; // [rsp+6C8h] [rbp+5C8h] BYREF
    void* temporaryPointer304; // [rsp+6D0h] [rbp+5D0h]
    char* temporaryPointer305; // [rsp+6D8h] [rbp+5D8h]
    char stackStorage306[8]; // [rsp+6E0h] [rbp+5E0h] BYREF
    void* temporaryPointer307; // [rsp+6E8h] [rbp+5E8h]
    std::int64_t opaqueValue308; // [rsp+6F0h] [rbp+5F0h]
    char stackStorage309[8]; // [rsp+6F8h] [rbp+5F8h] BYREF
    void* temporaryPointer310; // [rsp+700h] [rbp+600h]
    std::int64_t messageString311; // [rsp+708h] [rbp+608h] BYREF
    char stackStorage312[8]; // [rsp+710h] [rbp+610h] BYREF
    void* temporaryPointer313; // [rsp+718h] [rbp+618h]
    std::int64_t messageString314; // [rsp+720h] [rbp+620h] BYREF
    char stackStorage315[24]; // [rsp+728h] [rbp+628h] BYREF
    char stackStorage316[8]; // [rsp+740h] [rbp+640h] BYREF
    void* temporaryPointer317; // [rsp+748h] [rbp+648h]
    LPCRITICAL_SECTION opaqueValue318; // [rsp+750h] [rbp+650h]
    char stackStorage319[8]; // [rsp+758h] [rbp+658h] BYREF
    void* temporaryPointer320; // [rsp+760h] [rbp+660h]
    std::int64_t opaqueValue321; // [rsp+768h] [rbp+668h]
    char stackStorage322[8]; // [rsp+770h] [rbp+670h] BYREF
    void* temporaryPointer323; // [rsp+778h] [rbp+678h]
    std::int64_t opaqueValue324; // [rsp+780h] [rbp+680h] BYREF
    char stackStorage325[8]; // [rsp+788h] [rbp+688h] BYREF
    void* temporaryPointer326; // [rsp+790h] [rbp+690h]
    std::int64_t noneString327; // [rsp+798h] [rbp+698h] BYREF
    char stackStorage328[8]; // [rsp+7A0h] [rbp+6A0h] BYREF
    void* temporaryPointer329; // [rsp+7A8h] [rbp+6A8h]
    std::int64_t opaqueValue330; // [rsp+7B0h] [rbp+6B0h]
    char stackStorage331[8]; // [rsp+7B8h] [rbp+6B8h] BYREF
    void* temporaryPointer332; // [rsp+7C0h] [rbp+6C0h]
    std::int64_t opaqueValue333; // [rsp+7C8h] [rbp+6C8h]
    char stackStorage334[8]; // [rsp+7D0h] [rbp+6D0h] BYREF
    void* temporaryPointer335; // [rsp+7D8h] [rbp+6D8h]
    char* temporaryPointer336; // [rsp+7E0h] [rbp+6E0h]
    char stackStorage337[8]; // [rsp+7E8h] [rbp+6E8h] BYREF
    void* temporaryPointer338; // [rsp+7F0h] [rbp+6F0h]
    std::int64_t messageString339; // [rsp+7F8h] [rbp+6F8h] BYREF
    char stackStorage340[8]; // [rsp+800h] [rbp+700h] BYREF
    void* temporaryPointer341; // [rsp+808h] [rbp+708h]
    std::int64_t opaqueValue342; // [rsp+810h] [rbp+710h]
    char stackStorage343[8]; // [rsp+818h] [rbp+718h] BYREF
    void* temporaryPointer344; // [rsp+820h] [rbp+720h]
    char* temporaryPointer345; // [rsp+828h] [rbp+728h]
    char stackStorage346[8]; // [rsp+830h] [rbp+730h] BYREF
    void* temporaryPointer347; // [rsp+838h] [rbp+738h]
    std::int64_t opaqueValue348; // [rsp+840h] [rbp+740h]
    char stackStorage349[8]; // [rsp+848h] [rbp+748h] BYREF
    void* temporaryPointer350; // [rsp+850h] [rbp+750h]
    std::int64_t opaqueValue351; // [rsp+858h] [rbp+758h]
    char stackStorage352[8]; // [rsp+860h] [rbp+760h] BYREF
    void* temporaryPointer353; // [rsp+868h] [rbp+768h]
    std::int64_t messageString354; // [rsp+870h] [rbp+770h] BYREF
    char stackStorage355[8]; // [rsp+878h] [rbp+778h] BYREF
    char stackStorage356[16]; // [rsp+880h] [rbp+780h] BYREF
    char stackStorage357[8]; // [rsp+890h] [rbp+790h] BYREF
    void* temporaryPointer358; // [rsp+898h] [rbp+798h]
    std::int64_t opaqueValue359; // [rsp+8A0h] [rbp+7A0h]
    char stackStorage360[8]; // [rsp+8A8h] [rbp+7A8h] BYREF
    void* temporaryPointer361; // [rsp+8B0h] [rbp+7B0h]
    std::int64_t opaqueValue362; // [rsp+8B8h] [rbp+7B8h]
    char stackStorage363[8]; // [rsp+8C0h] [rbp+7C0h] BYREF
    void* temporaryPointer364; // [rsp+8C8h] [rbp+7C8h]
    std::int64_t messageString365; // [rsp+8D0h] [rbp+7D0h] BYREF
    char stackStorage366[8]; // [rsp+8D8h] [rbp+7D8h] BYREF
    void* temporaryPointer367; // [rsp+8E0h] [rbp+7E0h]
    std::int64_t opaqueValue368; // [rsp+8E8h] [rbp+7E8h]
    char stackStorage369[8]; // [rsp+8F0h] [rbp+7F0h] BYREF
    void* temporaryPointer370; // [rsp+8F8h] [rbp+7F8h]
    std::int64_t messageString371; // [rsp+900h] [rbp+800h] BYREF
    char stackStorage372[8]; // [rsp+908h] [rbp+808h] BYREF
    void* temporaryPointer373; // [rsp+910h] [rbp+810h]
    double scalarValue374; // [rsp+918h] [rbp+818h]
    char stackStorage375[8]; // [rsp+920h] [rbp+820h] BYREF
    void* temporaryPointer376; // [rsp+928h] [rbp+828h]
    double scalarValue377; // [rsp+930h] [rbp+830h]
    char stackStorage378[8]; // [rsp+938h] [rbp+838h] BYREF
    void* temporaryPointer379; // [rsp+940h] [rbp+840h]
    PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // [rsp+948h] [rbp+848h]
    char stackStorage381[8]; // [rsp+950h] [rbp+850h] BYREF
    void* temporaryPointer382; // [rsp+958h] [rbp+858h]
    std::int64_t opaqueValue383; // [rsp+960h] [rbp+860h]
    char stackStorage384[8]; // [rsp+968h] [rbp+868h] BYREF
    void* temporaryPointer385; // [rsp+970h] [rbp+870h]
    std::int64_t opaqueValue386; // [rsp+978h] [rbp+878h]
    int opaqueValue387; // [rsp+980h] [rbp+880h] BYREF
    int opaqueValue388; // [rsp+984h] [rbp+884h]
    std::uint64_t opaqueValue389; // [rsp+988h] [rbp+888h]
    std::uint64_t* temporaryPointer390; // [rsp+990h] [rbp+890h]
    LPVOID stackStorage391[33]; // [rsp+998h] [rbp+898h] BYREF
    char opaqueValue392; // [rsp+AA0h] [rbp+9A0h]
    int opaqueValue393; // [rsp+27B0h] [rbp+26B0h]
    __m128i vectorValue394; // [rsp+27C0h] [rbp+26C0h] BYREF
    std::int64_t stackStorage395[6]; // [rsp+27D0h] [rbp+26D0h] BYREF
    char opaqueValue396; // [rsp+2801h] [rbp+2701h]
    char opaqueValue397; // [rsp+2C08h] [rbp+2B08h]
    char stackStorage398[59980]; // [rsp+2D58h] [rbp+2C58h] BYREF
    int opaqueValue399; // [rsp+117A4h] [rbp+116A4h]
    char stackStorage400[7736]; // [rsp+117A8h] [rbp+116A8h] BYREF
    char stackStorage401[40600]; // [rsp+135E0h] [rbp+134E0h] BYREF
    int opaqueValue402; // [rsp+1D478h] [rbp+1D378h]
    int opaqueValue403; // [rsp+41FB8h] [rbp+41EB8h]
    std::int64_t opaqueValue404; // [rsp+76960h] [rbp+76860h]
    std::int64_t opaqueValue405; // [rsp+76A00h] [rbp+76900h]
    LPVOID stackStorage406[2]; // [rsp+76AE0h] [rbp+769E0h] BYREF
    __int128 opaqueValue407; // [rsp+76AF0h] [rbp+769F0h] BYREF
    std::uint64_t stackStorage408[2]; // [rsp+76B00h] [rbp+76A00h] BYREF

    temporaryPointer182 = requestJson;
    opaqueValue187 = outputResponse;
    temporaryPointer256 = outputResponse;
    opaqueValue5 = 0;
    temporaryPointer253 = cliHost;
    sub_180820D60 (cliHost, &temporaryPointer229);
    opaqueValue6 = sub_180821FA0 (cliHost, requestJson);
    if (opaqueValue6 < opaqueValue244)
    {
        opaqueValue151 = sub_1800971D0 (&opaqueValue187, "DISK_BUDGET_EXCEEDED");
        sub_1807FBD40 (opaqueValue151, 7);
    }
    scalarValue7 = *(double*)&temporaryPointer229;
    scalarValue190 = *(double*)&temporaryPointer229;
    opaqueValue185 = temporaryPointer229;
    opaqueValue8 = temporaryPointer230;
    lpCriticalSection = temporaryPointer230;
    scalarValue9 = *(double*)&temporaryPointer231;
    temporaryPointer184 = temporaryPointer231;
    opaqueValue10 = opaqueValue232;
    opaqueValue212 = opaqueValue232;
    stackStorage223[1] = opaqueValue232;
    if ((void*)(opaqueValue232 - 16) != &emptyJuceStringStorage)
        _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue232 - 16));
    temporaryPointer11 = temporaryPointer233;
    temporaryPointer228 = temporaryPointer233;
    temporaryPointer254 = temporaryPointer233;
    if (temporaryPointer233 - 4 != (volatile std::int32_t*)&emptyJuceStringStorage)
        _InterlockedIncrement (temporaryPointer233 - 4);
    opaqueValue12 = opaqueValue234;
    opaqueValue205 = opaqueValue234;
    opaqueValue257 = opaqueValue234;
    if ((void*)(opaqueValue234 - 16) != &emptyJuceStringStorage)
        _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue234 - 16));
    opaqueValue214 = opaqueValue242;
    opaqueValue13 = sub_1807FBDD0 (&temporaryPointer206, requestJson, "out", 0);
    sub_1809311D0 (cliHost + 8, &callbackFunction209, opaqueValue13);
    stringStorageToRelease14 = temporaryPointer206 - 16;
    if (temporaryPointer206 - 16 != (std::uint8_t*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease14) == -1)
        memoryFree (stringStorageToRelease14);
    callbackFunction15 = callbackFunction209;
    if (callbackFunction209 == nullptr)
    {
        opaqueValue152 = sub_1800971D0 (&opaqueValue187, "PATH_DENIED");
        sub_1807FBD40 (opaqueValue152, 3);
    }
    (*callbackFunction209)[1](callbackFunction209, (std::int64_t)&callbackFunction213);
    if (callbackFunction213 == nullptr)
    {
        opaqueValue153 = sub_1800971D0 (&opaqueValue187, "OUTPUT_IO_ERROR");
        sub_1807FBD40 (opaqueValue153, 7);
    }
    audioProcessorInitialize ((std::int64_t)&vectorValue394);
    opaqueValue396 = 1;
    LOBYTE (stackStorage204[1]) = 0;
    sub_180070200 (
        (unsigned int)&vectorValue394,
        (unsigned int)&temporaryPointer206,
        opaqueValue237,
        opaqueValue238,
        (std::int64_t)"captured host session state",
        0,
        0,
        1,
        (std::int64_t)stackStorage204,
        0,
        0,
        0,
        0,
        1);
    if (*temporaryPointer206 != 0)
    {
        opaqueValue154 = sub_1800971D0 (&opaqueValue187, "STATE_RESTORE_FAILED");
        sub_1807FBD40 (opaqueValue154, 7);
    }
    authManagerWaitForInitialVerification (opaqueValue404);
    TickCount64 = GetTickCount64();
    if (TickCount64 >= 0x7FFFFFFFFFFFFFFFLL)
        TickCount64 = 0x7FFFFFFFFFFFFFFFLL;
    if (opaqueValue405 != 0x7FFFFFFFFFFFFFFFLL && (opaqueValue405 <= 0 || (std::int64_t)TickCount64 >= opaqueValue405))
    {
        opaqueValue155 = sub_1800971D0 (&opaqueValue187, "ENTITLEMENT_DENIED");
        sub_1807FBD40 (opaqueValue155, 3);
    }
    callbackFunction215 = `anonymous namespace'::RenderPlayHead::`vftable';
    opaqueValue216 = 0;
    si128 = _mm_load_si128 ((const __m128i*)&xmmword_18133AC30);
    opaqueValue219 = 4;
    opaqueValue220 = 4;
    scalarValue217 = scalarValue7;
    _InterlockedExchange64 (stackStorage395, (std::int64_t)&callbackFunction215);
    vectorValue255 = &vectorValue394;
    if (opaqueValue396 == 0 || stackStorage400[7733] != 0 || (sub_1803F80D0 (&opaqueValue387), (std::uint8_t)sub_180402800 (stackStorage398, &opaqueValue387, 0) == 0))
    {
        opaqueValue150 = sub_1800971D0 (&temporaryPointer182, "RENDER_CONTEXT_BUSY");
        sub_1807FBD40 (opaqueValue150, 5);
    }
    opaqueValue393 = opaqueValue403;
    sub_1809E9680 (stackStorage400, &opaqueValue387, 7732);
    opaqueValue399 = (int)scalarValue9;
    stackStorage400[7732] = 1;
    if ((std::uint8_t)sub_180066B50 (&vectorValue394) == 0)
    {
        opaqueValue156 = sub_1800971D0 (&opaqueValue187, "RENDER_CONTEXT_BUSY");
        sub_1807FBD40 (opaqueValue156, 5);
    }
    audioProcessorPrepareToPlay ((std::int64_t)&vectorValue394, scalarValue7, (int)*(double*)&opaqueValue8);
    sub_180067760 (&vectorValue394);
    opaqueValue189 = opaqueValue402;
    if (opaqueValue402 < 0 || scalarValue7 * 10.0 < (double)opaqueValue402)
    {
        opaqueValue149 = sub_1800971D0 (&temporaryPointer182, "INVALID_LATENCY");
        sub_1807FBD40 (opaqueValue149, 7);
    }
    sub_1800742F0 (&vectorValue394, stackStorage204);
    *(_OWORD*)stackStorage406 = 0;
    opaqueValue407 = 0;
    sub_180471180 (stackStorage406, stackStorage204[0], stackStorage204[1]);
    sub_18009B4C0 (&opaqueValue222, stackStorage406, 32);
    opaqueValue19 = sub_18080C010 (opaqueValue18, &opaqueValue278, stackStorage204);
    opaqueValue20 = sub_1800A3E20 (opaqueValue19, "assets");
    sub_1807FA7E0 (&opaqueValue280, opaqueValue20);
    (*(void (**) (char*)) (opaqueValue278 + 88)) (stackStorage279);
    *(__m128i*)stackStorage180 = _mm_load_si128 ((const __m128i*)&xmmword_18133AD50);
    LODWORD (stackStorage180[0]) = 1;
    *(_OWORD*)stackStorage178 = *(_OWORD*)stackStorage180;
    LODWORD (stackStorage178[1]) = 15;
    sub_1800A64C0 (&opaqueValue197, &opaqueValue280, stackStorage178);
    *(_OWORD*)stackStorage406 = 0;
    opaqueValue407 = 0;
    opaqueValue21 = -1;
    do
        ++opaqueValue21;
    while (*(std::uint8_t*)(opaqueValue197 + opaqueValue21) != 0);
    sub_180471180 (stackStorage406, opaqueValue197, opaqueValue21);
    sub_18009B4C0 (&opaqueValue278, stackStorage406, 32);
    stringStorageToRelease22 = (void*)(opaqueValue197 - 16);
    if ((void*)(opaqueValue197 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease22) == -1)
        memoryFree (stringStorageToRelease22);
    opaqueValue23 = (unsigned int)(int)sub_1809DF080();
    opaqueValue179 = opaqueValue23;
    stackStorage178[0] = (LPCRITICAL_SECTION)(unsigned int)(int)sub_1809DF080();
    temporaryPointer210 = (char*)stackStorage178[0] + opaqueValue23;
    temporaryPointer225 = &juce::AudioFormat::`vftable';
    sub_1800B3260 (&opaqueValue226, "WAV file");
    sub_18009DC10 (stackStorage227, ".wav .bwf");
    temporaryPointer225 = &juce::WavAudioFormat::`vftable';
    *(_OWORD*)stackStorage246 = 0;
    opaqueValue247 = 0;
    opaqueValue248 = 0;
    opaqueValue249 = 0;
    opaqueValue250 = 0;
    memset (stackStorage251, 0, sizeof (stackStorage251));
    opaqueValue252 = 0;
    stackStorage245[0] = 0x40E7700000000000LL;
    stackStorage245[1] = 1;
    BYTE8 (opaqueValue248) = 0;
    LODWORD (opaqueValue249) = 16;
    sub_18046C500 ((char*)&opaqueValue249 + 8);
    *((std::uint64_t*)&opaqueValue252 + 1) = 0;
    opaqueValue24 = sub_180425800 (stackStorage245, stackStorage268);
    opaqueValue25 = sub_180425890 (opaqueValue24, stackStorage263);
    opaqueValue26 = 0;
    while (1)
    {
        opaqueValue27 = *(std::uint8_t*)(opaqueValue10 + opaqueValue26++);
        if (opaqueValue27 != aPcm24[opaqueValue26 - 1])
            break;
        if (opaqueValue26 == 6)
        {
            opaqueValue28 = 0;
            goto label38;
        }
    }
    opaqueValue28 = opaqueValue27 < (std::uint8_t)aPcm24[opaqueValue26 - 1] ? -1 : 1;
label38:
    opaqueValue29 = 32;
    if (opaqueValue28 == 0)
        opaqueValue29 = 24;
    opaqueValue30 = sub_180425910 (opaqueValue25, stackStorage258, opaqueValue29);
    opaqueValue31 = 0;
    while (1)
    {
        opaqueValue32 = *(std::uint8_t*)(opaqueValue10 + opaqueValue31++);
        if (opaqueValue32 != aPcm24[opaqueValue31 - 1])
            break;
        if (opaqueValue31 == 6)
        {
            opaqueValue33 = 0;
            goto label45;
        }
    }
    opaqueValue33 = opaqueValue32 < (std::uint8_t)aPcm24[opaqueValue31 - 1] ? -1 : 1;
label45:
    LOBYTE (opaqueValue5) = opaqueValue33 != 0;
    temporaryPointer34 = (std::uint32_t*)sub_1804259B0 (&opaqueValue387, opaqueValue30);
    stackStorage180[0] = temporaryPointer34;
    temporaryPointer34[35] = opaqueValue5 + 1;
    sub_180425A70 (stackStorage273, temporaryPointer34);
    sub_180425A30 (temporaryPointer34);
    sub_180024860 (stackStorage262);
    sub_18046C2C0 (stackStorage261);
    if (opaqueValue260 != 0)
        memoryFreeBuffer (lpMem);
    sub_180024860 (stackStorage267);
    sub_18046C2C0 (stackStorage266);
    if (opaqueValue265 != 0)
        memoryFreeBuffer (opaqueValue264);
    sub_180024860 (stackStorage272);
    sub_18046C2C0 (stackStorage271);
    if (opaqueValue270 != 0)
        memoryFreeBuffer (opaqueValue269);
    sub_180024860 (stackStorage251);
    sub_18046C2C0 (&opaqueValue250);
    if (BYTE8 (opaqueValue248) != 0)
        memoryFreeBuffer (stackStorage246[0]);
    sub_180469840 (&temporaryPointer225, &temporaryPointer224, &callbackFunction213, stackStorage273);
    temporaryPointer192 = temporaryPointer224;
    if (temporaryPointer224 == nullptr)
    {
        opaqueValue157 = sub_1800971D0 (&opaqueValue187, "OUTPUT_IO_ERROR");
        sub_1807FBD40 (opaqueValue157, 7);
    }
    opaqueValue387 = 2;
    opaqueValue388 = (int)*(double*)&opaqueValue8;
    temporaryPointer35 = nullptr;
    opaqueValue389 = 0;
    temporaryPointer390 = nullptr;
    stackStorage391[0] = nullptr;
    opaqueValue392 = 0;
    sub_180081430 (&opaqueValue387);
    opaqueValue198 = nullptr;
    opaqueValue199 = 0;
    sub_1800B9560 (&opaqueValue198, 1572872);
    opaqueValue171 = 0;
    scalarValue36 = 0.0;
    scalarValue211 = 0.0;
    scalarValue37 = 0.0;
    scalarValue195 = 0.0;
    opaqueValue186 = 0;
    opaqueValue38 = -1;
    opaqueValue202 = -1;
    opaqueValue191 = 0;
    if ((std::int64_t)&temporaryPointer210[opaqueValue189] > 0)
    {
        opaqueValue197 = 0;
        opaqueValue183 = (int)*(double*)&opaqueValue8;
        temporaryPointer194 = temporaryPointer390;
        while (1)
        {
            if (*cliHost != 0)
            {
                opaqueValue163 = sub_1800971D0 (&scalarValue190, "CANCELLED");
                sub_1807FBD40 (opaqueValue163, 6);
            }
            currentTickMs39 = GetTickCount64();
            if (currentTickMs39 >= 0x7FFFFFFFFFFFFFFFLL)
                currentTickMs39 = 0x7FFFFFFFFFFFFFFFLL;
            if (opaqueValue405 != 0x7FFFFFFFFFFFFFFFLL && (opaqueValue405 <= 0 || (std::int64_t)currentTickMs39 >= opaqueValue405))
            {
                opaqueValue162 = sub_1800971D0 (&scalarValue190, "ENTITLEMENT_DENIED");
                sub_1807FBD40 (opaqueValue162, 3);
            }
            temporaryPointer41 = &temporaryPointer210[opaqueValue189 - opaqueValue191];
            opaqueValue42 = opaqueValue183;
            if ((std::int64_t)temporaryPointer41 < opaqueValue183)
                opaqueValue42 = (unsigned int)temporaryPointer41;
            opaqueValue193 = opaqueValue42;
            opaqueValue43 = opaqueValue171;
            opaqueValue176 = opaqueValue171;
            opaqueValue44 = opaqueValue240;
            if (opaqueValue171 >= (int)opaqueValue240)
            {
                opaqueValue47 = opaqueValue191;
            }
            else
            {
                opaqueValue188 = opaqueValue191 + (int)opaqueValue42;
                opaqueValue45 = 8 * opaqueValue197;
                opaqueValue203 = 8 * opaqueValue197;
                while (1)
                {
                    if (opaqueValue43 < (unsigned int)opaqueValue44)
                        temporaryPointer35 = *(int**)(opaqueValue45 + opaqueValue239);
                    opaqueValue46 = sub_1809C72D0();
                    opaqueValue47 = opaqueValue191;
                    if (opaqueValue46 >= opaqueValue188)
                        break;
                    if (opaqueValue46 > opaqueValue191)
                    {
                        temporaryPointer48 = temporaryPointer35[4] <= 8 ? (std::int64_t*)temporaryPointer35 : *(std::int64_t**)temporaryPointer35;
                        if (*((std::uint8_t*)temporaryPointer48 + 1) == 81 && *(std::uint8_t*)temporaryPointer48 == 0xFF)
                            goto label84;
                        if (temporaryPointer35[4] > 8)
                            temporaryPointer35 = *(int**)temporaryPointer35;
                        if (*((std::uint8_t*)temporaryPointer35 + 1) == 88 && *(std::uint8_t*)temporaryPointer35 == 0xFF)
                        {
                        label84:
                            opaqueValue42 = (unsigned int)(opaqueValue46 - opaqueValue191);
                            opaqueValue193 = opaqueValue42;
                            opaqueValue44 = opaqueValue240;
                            temporaryPointer35 = nullptr;
                            goto label88;
                        }
                    }
                    opaqueValue43 = opaqueValue176 + 1;
                    opaqueValue176 = opaqueValue43;
                    opaqueValue45 = opaqueValue203 + 8;
                    opaqueValue203 += 8;
                    opaqueValue44 = opaqueValue240;
                    temporaryPointer35 = nullptr;
                    if ((int)opaqueValue43 >= (int)opaqueValue240)
                        goto label86;
                }
                opaqueValue44 = opaqueValue240;
                temporaryPointer35 = nullptr;
            label86:
                opaqueValue42 = opaqueValue193;
            }
        label88:
            opaqueValue49 = opaqueValue179;
            if (opaqueValue47 < opaqueValue179 && opaqueValue47 + (int)opaqueValue42 > opaqueValue179)
            {
                opaqueValue42 = (unsigned int)(opaqueValue179 - opaqueValue47);
                opaqueValue193 = opaqueValue42;
            }
            opaqueValue50 = opaqueValue388;
            if ((std::uint32_t)opaqueValue42 == opaqueValue388)
            {
                opaqueValue51 = opaqueValue387;
                if (opaqueValue387 == 2)
                    goto label100;
            }
            opaqueValue52 = (opaqueValue42 + 3) & 0xFFFFFFFCLL;
            opaqueValue188 = opaqueValue52;
            opaqueValue53 = 8 * opaqueValue52 + 64;
            if (opaqueValue389 < opaqueValue53)
                break;
            if (opaqueValue392 != 0)
            {
                memoryFillBytes (stackStorage391[0], 0, 8 * opaqueValue52 + 64);
                opaqueValue49 = (std::int64_t)temporaryPointer194;
                temporaryPointer54 = (char*)stackStorage391[0];
            label98:
                LODWORD (opaqueValue42) = opaqueValue193;
                goto label99;
            }
            opaqueValue49 = (std::int64_t)temporaryPointer194;
            temporaryPointer54 = (char*)stackStorage391[0];
        label99:
            temporaryPointer55 = temporaryPointer54 + 32;
            *(std::uint64_t*)opaqueValue49 = temporaryPointer55;
            *(std::uint64_t*)(opaqueValue49 + 8) = &temporaryPointer55[4 * opaqueValue188];
            *(std::uint64_t*)(opaqueValue49 + 16) = 0;
            opaqueValue50 = opaqueValue42;
            opaqueValue388 = opaqueValue42;
            opaqueValue51 = 2;
            opaqueValue387 = 2;
            opaqueValue44 = opaqueValue240;
        label100:
            if (opaqueValue392 == 0)
            {
                if (opaqueValue51 > 0)
                {
                    opaqueValue56 = 4LL * opaqueValue50;
                    opaqueValue57 = (unsigned int)opaqueValue51;
                    temporaryPointer58 = temporaryPointer194;
                    do
                    {
                        memoryFillBytes (*temporaryPointer58++, 0, opaqueValue56);
                        --opaqueValue57;
                    } while (opaqueValue57 != 0);
                    opaqueValue10 = opaqueValue212;
                    callbackFunction15 = callbackFunction209;
                    opaqueValue12 = opaqueValue205;
                    opaqueValue44 = opaqueValue240;
                    LODWORD (opaqueValue42) = opaqueValue193;
                }
                opaqueValue392 = 1;
            }
            HIDWORD (opaqueValue199) = 0;
            opaqueValue59 = (unsigned int)opaqueValue171;
            if (opaqueValue171 < (int)opaqueValue44)
            {
                opaqueValue60 = opaqueValue191;
                opaqueValue61 = opaqueValue191 + (int)opaqueValue42;
                conditionFlag62 = opaqueValue171 < (unsigned int)opaqueValue44;
                while (1)
                {
                    if (conditionFlag62)
                        temporaryPointer35 = *(int**)(opaqueValue239 + 8 * opaqueValue197);
                    opaqueValue49 = sub_1809C72D0();
                    if (opaqueValue49 >= opaqueValue61)
                    {
                    label150:
                        opaqueValue10 = opaqueValue212;
                        callbackFunction15 = callbackFunction209;
                        temporaryPointer11 = temporaryPointer228;
                        opaqueValue12 = opaqueValue205;
                        LODWORD (temporaryPointer35) = 0;
                        break;
                    }
                    if (temporaryPointer35[4] <= 8)
                        temporaryPointer63 = temporaryPointer35;
                    else
                        temporaryPointer63 = *(int**)temporaryPointer35;
                    if (*((std::uint8_t*)temporaryPointer63 + 1) == 81 && *(std::uint8_t*)temporaryPointer63 == 0xFF)
                    {
                        *(double*)si128.m128i_i64 = 60.0 / sub_1801996E0 (temporaryPointer35, opaqueValue49);
                    }
                    else
                    {
                        if (temporaryPointer35[4] <= 8)
                            temporaryPointer64 = temporaryPointer35;
                        else
                            temporaryPointer64 = *(int**)temporaryPointer35;
                        if (*((std::uint8_t*)temporaryPointer64 + 1) == 88 && *(std::uint8_t*)temporaryPointer64 == 0xFF)
                        {
                            if (temporaryPointer35[4] <= 8)
                                temporaryPointer65 = temporaryPointer35;
                            else
                                temporaryPointer65 = *(int**)temporaryPointer35;
                            if (*((std::uint8_t*)temporaryPointer65 + 1) == 88 && *(std::uint8_t*)temporaryPointer65 == 0xFF)
                            {
                                if (temporaryPointer35[4] <= 8)
                                    temporaryPointer66 = (std::int64_t*)temporaryPointer35;
                                else
                                    temporaryPointer66 = *(std::int64_t**)temporaryPointer35;
                                opaqueValue67 = temporaryPointer35[4] - 2;
                                temporaryPointer35 = nullptr;
                                opaqueValue68 = 0;
                                if (opaqueValue67 > 4)
                                    opaqueValue67 = 4;
                                opaqueValue69 = 0;
                                opaqueValue70 = 0;
                                if (opaqueValue67 <= 0)
                                {
                                label135:
                                    temporaryPointer194 = nullptr;
                                    opaqueValue71 = 0;
                                }
                                else
                                {
                                    while (1)
                                    {
                                        opaqueValue49 = *((std::uint8_t*)temporaryPointer66 + opaqueValue70 + 2);
                                        opaqueValue68 = (*((std::uint8_t*)temporaryPointer66 + opaqueValue70 + 2) & 0x7F) + (opaqueValue68 << 7);
                                        if ((opaqueValue49 & 0x80u) == 0LL)
                                            break;
                                        ++opaqueValue69;
                                        if (++opaqueValue70 >= opaqueValue67)
                                            goto label135;
                                    }
                                    LODWORD (temporaryPointer194) = opaqueValue68;
                                    opaqueValue71 = opaqueValue69 + 1;
                                }
                                opaqueValue219 = *((std::uint8_t*)temporaryPointer66 + opaqueValue71 + 2);
                                opaqueValue220 = 1 << *((std::uint8_t*)temporaryPointer66 + opaqueValue71 + 3);
                                goto label149;
                            }
                            opaqueValue219 = 4;
                            opaqueValue220 = 4;
                        }
                        else
                        {
                            if (temporaryPointer35[4] <= 8)
                                temporaryPointer72 = temporaryPointer35;
                            else
                                temporaryPointer72 = *(int**)temporaryPointer35;
                            if (*(std::uint8_t*)temporaryPointer72 != 0xFF)
                            {
                                opaqueValue73 = opaqueValue49 - opaqueValue60;
                                opaqueValue74 = 0;
                                if (opaqueValue73 > 0)
                                    opaqueValue74 = opaqueValue73;
                                opaqueValue75 = (unsigned int)temporaryPointer35[4];
                                if ((int)opaqueValue75 > 8)
                                    temporaryPointer35 = *(int**)temporaryPointer35;
                                sub_180198320 (&opaqueValue198, temporaryPointer35, opaqueValue75, opaqueValue74);
                            }
                        }
                    }
                    temporaryPointer35 = nullptr;
                label149:
                    opaqueValue59 = (unsigned int)(opaqueValue171 + 1);
                    opaqueValue171 = opaqueValue59;
                    ++opaqueValue197;
                    opaqueValue44 = opaqueValue240;
                    conditionFlag62 = (unsigned int)opaqueValue59 < opaqueValue240;
                    if ((int)opaqueValue59 >= (int)opaqueValue240)
                        goto label150;
                }
            }
            if (opaqueValue186 == 0 && opaqueValue191 >= opaqueValue179)
            {
                do
                {
                    if ((int)temporaryPointer35 >= 0)
                        opaqueValue76 = (char)temporaryPointer35;
                    else
                        opaqueValue76 = 0;
                    stackStorage406[1] = nullptr;
                    LODWORD (opaqueValue407) = 3;
                    LOBYTE (stackStorage406[0]) = opaqueValue76 | 0xB0;
                    *(std::uint16_t*)((char*)stackStorage406 + 1) = 64;
                    sub_180198320 (&opaqueValue198, stackStorage406, 3, 0);
                    if ((int)opaqueValue407 > 8)
                        memoryFreeBuffer (stackStorage406[0]);
                    if ((int)temporaryPointer35 >= 0)
                        opaqueValue77 = (char)temporaryPointer35;
                    else
                        opaqueValue77 = 0;
                    stackStorage180[1] = nullptr;
                    opaqueValue181 = 3;
                    LOBYTE (stackStorage180[0]) = opaqueValue77 | 0xB0;
                    *(std::uint16_t*)((char*)stackStorage180 + 1) = 123;
                    sub_180198320 (&opaqueValue198, stackStorage180, 3, 0);
                    if (opaqueValue181 > 8)
                        memoryFreeBuffer (stackStorage180[0]);
                    LODWORD (temporaryPointer35) = (std::uint32_t)temporaryPointer35 + 1;
                } while ((int)temporaryPointer35 <= 15);
                opaqueValue10 = opaqueValue212;
                opaqueValue12 = opaqueValue205;
                opaqueValue186 = 1;
            }
            opaqueValue216 = opaqueValue191;
            scalarValue78 = *(double*)si128.m128i_i64;
            if (opaqueValue396 != 0 && (std::int16_t)sub_1809C8FE0 (opaqueValue59, opaqueValue49, opaqueValue44) <= 0 && scalarValue78 >= 20.0 && scalarValue78 <= 400.0)
            {
                sub_1803D31F0 (stackStorage401);
                opaqueValue79 = 1;
            }
            else
            {
                opaqueValue79 = 0;
            }
            if (opaqueValue79 == 0)
            {
                opaqueValue161 = sub_1800971D0 (&scalarValue190, "RENDER_CONTEXT_BUSY");
                sub_1807FBD40 (opaqueValue161, 5);
            }
            opaqueValue80 = _mm_getcsr();
            stackStorage180[0] = (LPVOID)opaqueValue80;
            _mm_setcsr (opaqueValue80 | 0x8040);
            audioProcessorProcessBlock ((std::int64_t)&vectorValue394, (std::int64_t)&opaqueValue387, (std::uint64_t*)&opaqueValue198);
            _mm_setcsr (opaqueValue80);
            if (opaqueValue402 != opaqueValue189)
            {
                opaqueValue160 = sub_1800971D0 (&scalarValue190, "LATENCY_CHANGED");
                sub_1807FBD40 (opaqueValue160, 7);
            }
            opaqueValue81 = opaqueValue189 - opaqueValue191;
            opaqueValue82 = opaqueValue193;
            if (opaqueValue81 >= 0)
            {
                if ((int)opaqueValue193 < opaqueValue81)
                    opaqueValue81 = (int)opaqueValue193;
                temporaryPointer201 = (char*)opaqueValue81;
                opaqueValue83 = 0;
            }
            else
            {
                opaqueValue83 = 0;
                opaqueValue81 = 0;
                temporaryPointer201 = nullptr;
            }
            opaqueValue84 = 0;
            opaqueValue177 = 0;
            opaqueValue188 = 0;
            opaqueValue85 = (LPVOID)(int)opaqueValue81;
            stackStorage180[0] = (LPVOID)(int)opaqueValue81;
            temporaryPointer86 = temporaryPointer390;
            temporaryPointer194 = temporaryPointer390;
            do
            {
                opaqueValue87 = opaqueValue81;
                scalarValue36 = scalarValue211;
                scalarValue37 = scalarValue195;
                if ((int)opaqueValue81 < (int)opaqueValue82)
                {
                    temporaryPointer88 = (float*)(temporaryPointer86[opaqueValue83] + 4LL * (std::uint64_t)opaqueValue85);
                    temporaryPointer200 = (char*)temporaryPointer88;
                    opaqueValue89 = _mm_load_si128 ((const __m128i*)&xmmword_18133C3A0).m128i_u32[0];
                    do
                    {
                        scalarValue90 = *temporaryPointer88;
                        if ((std::int16_t)sub_1809DFD20 (opaqueValue82, opaqueValue81, temporaryPointer86, opaqueValue84) > 0)
                        {
                            opaqueValue158 = sub_1800971D0 (&scalarValue190, "INVALID_AUDIO");
                            sub_1807FBD40 (opaqueValue158, 7);
                        }
                        scalarValue36 = fmax (COERCE_FLOAT (LODWORD (scalarValue90) & opaqueValue89), scalarValue36);
                        scalarValue211 = scalarValue36;
                        scalarValue37 = scalarValue37 + scalarValue90 * scalarValue90;
                        scalarValue195 = scalarValue37;
                        if (COERCE_FLOAT (LODWORD (scalarValue90) & opaqueValue89) > 0.0000001)
                        {
                            if (opaqueValue38 < 0 || (opaqueValue81 = opaqueValue189, opaqueValue191 + opaqueValue87 - (std::int64_t)opaqueValue189 < opaqueValue38))
                            {
                                opaqueValue38 = opaqueValue191 + opaqueValue87 - (std::int64_t)opaqueValue189;
                                opaqueValue202 = opaqueValue38;
                            }
                        }
                        ++opaqueValue87;
                        temporaryPointer88 = (float*)(temporaryPointer200 + 4);
                        temporaryPointer200 += 4;
                        opaqueValue82 = opaqueValue193;
                    } while (opaqueValue87 < (int)opaqueValue193);
                    opaqueValue81 = (std::int64_t)temporaryPointer201;
                    temporaryPointer86 = temporaryPointer194;
                    opaqueValue83 = opaqueValue188;
                    LODWORD (opaqueValue84) = opaqueValue177;
                    opaqueValue85 = stackStorage180[0];
                }
                opaqueValue84 = (unsigned int)(opaqueValue84 + 1);
                opaqueValue177 = opaqueValue84;
                opaqueValue188 = ++opaqueValue83;
            } while (opaqueValue83 < 2);
            if ((int)opaqueValue82 > (int)opaqueValue81)
            {
                if ((std::uint8_t)sub_180427570 (temporaryPointer192, &opaqueValue387, (unsigned int)opaqueValue81, (unsigned int)(opaqueValue82 - opaqueValue81)) == 0)
                {
                    opaqueValue159 = sub_1800971D0 (&scalarValue190, "OUTPUT_IO_ERROR");
                    sub_1807FBD40 (opaqueValue159, 7);
                }
                temporaryPointer194 = temporaryPointer390;
                LODWORD (opaqueValue82) = opaqueValue193;
            }
            *(double*)&si128.m128i_i64[1] = *(double*)&si128.m128i_i64[1] + (double)(int)opaqueValue82 / scalarValue190 * *(double*)si128.m128i_i64 / 60.0;
            opaqueValue191 += (int)opaqueValue82;
            temporaryPointer35 = nullptr;
            if (opaqueValue191 >= (std::int64_t)&temporaryPointer210[opaqueValue189])
            {
                opaqueValue8 = lpCriticalSection;
                scalarValue9 = *(double*)&temporaryPointer184;
                goto label194;
            }
        }
        opaqueValue389 = 8 * opaqueValue52 + 64;
        LOBYTE (opaqueValue44) = opaqueValue392 != 0;
        sub_180029FF0 (stackStorage391, opaqueValue53, opaqueValue44);
        temporaryPointer54 = (char*)stackStorage391[0];
        opaqueValue49 = (std::int64_t)stackStorage391[0];
        temporaryPointer194 = stackStorage391[0];
        temporaryPointer390 = stackStorage391[0];
        goto label98;
    }
label194:
    opaqueValue397 = 1;
    temporaryPointer224 = nullptr;
    if (temporaryPointer192 != nullptr)
        (**(void (***) (char*, std::int64_t))temporaryPointer192) (temporaryPointer192, 1);
    if (scalarValue36 <= 0.0000001 && (unsigned int)utf8CompareStrings (temporaryPointer11, "silence-allowed") != 0)
    {
        opaqueValue164 = sub_1800971D0 (&temporaryPointer184, "UNEXPECTED_SILENCE");
        sub_1807FBD40 (opaqueValue164, 7);
    }
    (*callbackFunction15)[3](callbackFunction15, (std::int64_t)&temporaryPointer207);
    if (*(std::uint8_t*)temporaryPointer207 == 0)
    {
        opaqueValue165 = sub_1800971D0 (&temporaryPointer184, "OUTPUT_IO_ERROR");
        sub_1807FBD40 (opaqueValue165, 7);
    }
    (*callbackFunction15)[2](callbackFunction15, (std::int64_t)&temporaryPointer208);
    if (*temporaryPointer208 != 0)
    {
        opaqueValue166 = sub_1800288C0 (&temporaryPointer208);
        opaqueValue167 = (std::uint8_t)sub_180097F90 (opaqueValue166, "OUTPUT_EXISTS");
        opaqueValue168 = sub_1800288C0 (&temporaryPointer208);
        opaqueValue169 = sub_18008BD40 (&temporaryPointer184, opaqueValue168);
        opaqueValue170 = 7;
        if (opaqueValue167 != 0)
            opaqueValue170 = 5;
        sub_1807FBD40 (opaqueValue169, opaqueValue170);
    }
    opaqueValue92 = sub_18009EA20 (opaqueValue91);
    lpCriticalSection = (LPCRITICAL_SECTION)(opaqueValue92 + 16);
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue92 + 16));
    sub_18009E8C0 (opaqueValue92);
    *(double*)&temporaryPointer184 = COERCE_DOUBLE ("status");
    sub_1800B4BF0 (stackStorage282, opaqueValue92, &temporaryPointer184);
    LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue92 + 16));
    temporaryPointer283 = &unk_180F512B0;
    succeededString284 = 0;
    juceStringConstructFromUtf8 (&succeededString284, "succeeded");
    opaqueValue94 = sub_18009EA20 (opaqueValue93);
    lpCriticalSection = (LPCRITICAL_SECTION)(opaqueValue94 + 16);
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue94 + 16));
    sub_18009E8C0 (opaqueValue94);
    *(double*)&temporaryPointer184 = COERCE_DOUBLE ("artifactId");
    sub_1800B4BF0 (stackStorage285, opaqueValue94, &temporaryPointer184);
    LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue94 + 16));
    temporaryPointer286 = &unk_180F512B0;
    temporaryPointer287 = temporaryPointer207;
    if (temporaryPointer207 - 4 != (volatile std::int32_t*)&emptyJuceStringStorage)
        _InterlockedIncrement (temporaryPointer207 - 4);
    opaqueValue95 = sub_18009EA20 (&emptyJuceStringStorage);
    lpCriticalSection = (LPCRITICAL_SECTION)(opaqueValue95 + 16);
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue95 + 16));
    sub_18009E8C0 (opaqueValue95);
    *(double*)&temporaryPointer184 = COERCE_DOUBLE ("audioHash");
    sub_1800B4BF0 (stackStorage288, opaqueValue95, &temporaryPointer184);
    LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue95 + 16));
    temporaryPointer289 = &unk_180F512B0;
    temporaryPointer290 = temporaryPointer207;
    if (temporaryPointer207 - 4 != (volatile std::int32_t*)&emptyJuceStringStorage)
        _InterlockedIncrement (temporaryPointer207 - 4);
    opaqueValue96 = sub_18009EA20 (&emptyJuceStringStorage);
    lpCriticalSection = (LPCRITICAL_SECTION)(opaqueValue96 + 16);
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue96 + 16));
    sub_18009E8C0 (opaqueValue96);
    *(double*)&temporaryPointer184 = COERCE_DOUBLE ("stateHash");
    sub_1800B4BF0 (stackStorage291, opaqueValue96, &temporaryPointer184);
    LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue96 + 16));
    temporaryPointer292 = &unk_180F512B0;
    opaqueValue293 = opaqueValue222;
    if ((void*)(opaqueValue222 - 16) != &emptyJuceStringStorage)
        _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue222 - 16));
    opaqueValue97 = sub_18009EA20 (&emptyJuceStringStorage);
    lpCriticalSection = (LPCRITICAL_SECTION)(opaqueValue97 + 16);
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue97 + 16));
    sub_18009E8C0 (opaqueValue97);
    *(double*)&temporaryPointer184 = COERCE_DOUBLE ("assetsHash");
    sub_1800B4BF0 (stackStorage294, opaqueValue97, &temporaryPointer184);
    LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue97 + 16));
    temporaryPointer295 = &unk_180F512B0;
    opaqueValue98 = opaqueValue278;
    opaqueValue296 = opaqueValue278;
    if ((void*)(opaqueValue278 - 16) != &emptyJuceStringStorage)
        _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue278 - 16));
    temporaryPointer192 = (char*)sub_18009EA20 (&emptyJuceStringStorage);
    lpCriticalSection = (LPCRITICAL_SECTION)(temporaryPointer192 + 16);
    EnterCriticalSection ((LPCRITICAL_SECTION)(temporaryPointer192 + 16));
    sub_18009E8C0 (temporaryPointer192);
    *(double*)&temporaryPointer184 = COERCE_DOUBLE ("assetsHashPolicy");
    sub_1800B4BF0 (stackStorage297, temporaryPointer192, &temporaryPointer184);
    LeaveCriticalSection (lpCriticalSection);
    temporaryPointer298 = &unk_180F512B0;
    messageString299 = 0;
    juceStringConstructFromUtf8 (&messageString299, "canonical-redacted-native-asset-summary-v1");
    temporaryPointer192 = (char*)sub_18009EA20 (opaqueValue99);
    lpCriticalSection = (LPCRITICAL_SECTION)(temporaryPointer192 + 16);
    EnterCriticalSection ((LPCRITICAL_SECTION)(temporaryPointer192 + 16));
    sub_18009E8C0 (temporaryPointer192);
    *(double*)&temporaryPointer184 = COERCE_DOUBLE ("presetHash");
    sub_1800B4BF0 (stackStorage300, temporaryPointer192, &temporaryPointer184);
    LeaveCriticalSection (lpCriticalSection);
    temporaryPointer301 = &unk_180F512B0;
    opaqueValue302 = opaqueValue12;
    stringStorageToRelease100 = (volatile std::int32_t*)(opaqueValue12 - 16);
    if (stringStorageToRelease100 != (volatile std::int32_t*)&emptyJuceStringStorage)
        _InterlockedIncrement (stringStorageToRelease100);
    *(_OWORD*)stackStorage406 = 0;
    opaqueValue407 = 0;
    sub_180471180 (stackStorage406, opaqueValue235, opaqueValue236);
    sub_18009B4C0 (&temporaryPointer192, stackStorage406, 32);
    sub_180096D60 (stackStorage303, "midiHash");
    temporaryPointer304 = &unk_180F512B0;
    temporaryPointer305 = temporaryPointer192;
    temporaryPointer192 = &emptyJuceStringCharacters;
    sub_180096D60 (stackStorage306, "seed");
    temporaryPointer307 = &unk_180F51350;
    opaqueValue308 = (unsigned int)(int)scalarValue9;
    sub_180096D60 (stackStorage309, "seedPolicy");
    temporaryPointer310 = &unk_180F512B0;
    messageString311 = 0;
    juceStringConstructFromUtf8 (&messageString311, "voice-stream-v1");
    sub_180096D60 (stackStorage312, "seedScope");
    temporaryPointer313 = &unk_180F512B0;
    messageString314 = 0;
    juceStringConstructFromUtf8 (&messageString314, "voice-noise-unison-drift; native-phase-and-FX-fixed-resets");
    sub_1808259C0 (stackStorage315, opaqueValue101, &opaqueValue185);
    sub_180096D60 (stackStorage316, "blockSize");
    temporaryPointer317 = &unk_180F514D0;
    opaqueValue318 = opaqueValue8;
    sub_180096D60 (stackStorage319, "channels");
    temporaryPointer320 = &unk_180F51450;
    opaqueValue321 = 2;
    opaqueValue102 = 0;
    opaqueValue103 = 0;
    while (1)
    {
        opaqueValue104 = *(std::uint8_t*)(opaqueValue10 + opaqueValue103++);
        if (opaqueValue104 != aPcm24[opaqueValue103 - 1])
            break;
        if (opaqueValue103 == 6)
            goto label215;
    }
    opaqueValue102 = opaqueValue104 < (std::uint8_t)aPcm24[opaqueValue103 - 1] ? -1 : 1;
label215:
    temporaryPointer105 = "float32";
    if (opaqueValue102 == 0)
        temporaryPointer105 = "pcm24";
    sub_180096D60 (stackStorage322, "format");
    temporaryPointer323 = &unk_180F512B0;
    opaqueValue324 = 0;
    juceStringConstructFromUtf8 (&opaqueValue324, temporaryPointer105);
    sub_180096D60 (stackStorage325, "dither");
    temporaryPointer326 = &unk_180F512B0;
    noneString327 = 0;
    juceStringConstructFromUtf8 (&noneString327, "none");
    if (*(std::uint8_t*)temporaryPointer11 != 0)
    {
        temporaryPointer107 = temporaryPointer11;
        temporaryPointer221 = temporaryPointer11;
        if (temporaryPointer11 - 4 != (volatile std::int32_t*)&emptyJuceStringStorage)
            _InterlockedIncrement (temporaryPointer11 - 4);
        opaqueValue188 = (std::int64_t)&temporaryPointer221;
        opaqueValue106 = 2;
    }
    else
    {
        juceStringConstructFromUtf8 (stackStorage223, "non-silent");
        opaqueValue188 = (std::int64_t)stackStorage223;
        opaqueValue106 = 1;
        temporaryPointer107 = temporaryPointer221;
    }
    opaqueValue172 = opaqueValue106;
    sub_180096D60 (stackStorage328, "audioExpectation");
    temporaryPointer329 = &unk_180F512B0;
    opaqueValue330 = *(std::uint64_t*)opaqueValue188;
    if ((void*)(opaqueValue330 - 16) != &emptyJuceStringStorage)
        _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue330 - 16));
    temporaryPointer108 = temporaryPointer210;
    opaqueValue109 = sub_180097770 (stackStorage408, temporaryPointer210);
    juceStringConstructFromUtf8Span (&opaqueValue188, opaqueValue109, (char*)&opaqueValue407 - opaqueValue109 + 15);
    sub_180096D60 (stackStorage331, "renderedFrames");
    temporaryPointer332 = &unk_180F512B0;
    opaqueValue333 = opaqueValue188;
    opaqueValue188 = (std::int64_t)&emptyJuceStringCharacters;
    opaqueValue110 = sub_180097770 (stackStorage408, stackStorage178[0]);
    juceStringConstructFromUtf8Span (&temporaryPointer201, opaqueValue110, (char*)&opaqueValue407 - opaqueValue110 + 15);
    sub_180096D60 (stackStorage334, "tailFrames");
    temporaryPointer335 = &unk_180F512B0;
    temporaryPointer336 = temporaryPointer201;
    temporaryPointer201 = &emptyJuceStringCharacters;
    sub_180096D60 (stackStorage337, "tailPolicy");
    temporaryPointer338 = &unk_180F512B0;
    messageString339 = 0;
    juceStringConstructFromUtf8 (&messageString339, "fixed-duration-cap");
    opaqueValue111 = sub_180097770 (stackStorage408, opaqueValue202);
    juceStringConstructFromUtf8Span (&opaqueValue202, opaqueValue111, (char*)&opaqueValue407 - opaqueValue111 + 15);
    sub_180096D60 (stackStorage340, "contentStartFrame");
    temporaryPointer341 = &unk_180F512B0;
    opaqueValue342 = opaqueValue202;
    opaqueValue202 = (std::int64_t)&emptyJuceStringCharacters;
    opaqueValue112 = opaqueValue189;
    opaqueValue113 = sub_180097770 (stackStorage408, &temporaryPointer108[opaqueValue189]);
    juceStringConstructFromUtf8Span (&temporaryPointer200, opaqueValue113, (char*)&opaqueValue407 - opaqueValue113 + 15);
    sub_180096D60 (stackStorage343, "processedFrames");
    temporaryPointer344 = &unk_180F512B0;
    temporaryPointer345 = temporaryPointer200;
    temporaryPointer200 = &emptyJuceStringCharacters;
    opaqueValue179 = sub_18009EA20 (opaqueValue114);
    opaqueValue185 = (LPCRITICAL_SECTION)(opaqueValue179 + 16);
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue179 + 16));
    sub_18009E8C0 (opaqueValue179);
    stackStorage178[0] = (LPCRITICAL_SECTION) "latencySamples";
    sub_1800B4BF0 (stackStorage346, opaqueValue179, stackStorage178);
    LeaveCriticalSection (opaqueValue185);
    temporaryPointer347 = &unk_180F51450;
    opaqueValue348 = opaqueValue112;
    opaqueValue179 = sub_18009EA20 (opaqueValue115);
    opaqueValue185 = (LPCRITICAL_SECTION)(opaqueValue179 + 16);
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue179 + 16));
    sub_18009E8C0 (opaqueValue179);
    stackStorage178[0] = (LPCRITICAL_SECTION) "latencyCompensated";
    sub_1800B4BF0 (stackStorage349, opaqueValue179, stackStorage178);
    LeaveCriticalSection (opaqueValue185);
    temporaryPointer350 = &unk_180F51230;
    opaqueValue351 = 1;
    opaqueValue179 = sub_18009EA20 (opaqueValue116);
    opaqueValue185 = (LPCRITICAL_SECTION)(opaqueValue179 + 16);
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue179 + 16));
    sub_18009E8C0 (opaqueValue179);
    stackStorage178[0] = (LPCRITICAL_SECTION) "latencyPolicy";
    sub_1800B4BF0 (stackStorage352, opaqueValue179, stackStorage178);
    LeaveCriticalSection (opaqueValue185);
    temporaryPointer353 = &unk_180F512B0;
    messageString354 = 0;
    juceStringConstructFromUtf8 (&messageString354, "trim-start-extend-end");
    opaqueValue179 = sub_18009EA20 (opaqueValue117);
    opaqueValue185 = (LPCRITICAL_SECTION)(opaqueValue179 + 16);
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue179 + 16));
    sub_18009E8C0 (opaqueValue179);
    stackStorage178[0] = (LPCRITICAL_SECTION) "timeline";
    sub_1800B4BF0 (stackStorage355, opaqueValue179, stackStorage178);
    LeaveCriticalSection (opaqueValue185);
    sub_1800A34F0 (stackStorage356, stackStorage241);
    opaqueValue179 = sub_18009EA20 (opaqueValue118);
    opaqueValue185 = (LPCRITICAL_SECTION)(opaqueValue179 + 16);
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue179 + 16));
    sub_18009E8C0 (opaqueValue179);
    stackStorage178[0] = (LPCRITICAL_SECTION) "midiType";
    sub_1800B4BF0 (stackStorage357, opaqueValue179, stackStorage178);
    LeaveCriticalSection (opaqueValue185);
    temporaryPointer358 = &unk_180F51450;
    opaqueValue359 = opaqueValue214;
    opaqueValue179 = sub_18009EA20 (opaqueValue119);
    opaqueValue185 = (LPCRITICAL_SECTION)(opaqueValue179 + 16);
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue179 + 16));
    sub_18009E8C0 (opaqueValue179);
    stackStorage178[0] = (LPCRITICAL_SECTION) "ppq";
    sub_1800B4BF0 (stackStorage360, opaqueValue179, stackStorage178);
    LeaveCriticalSection (opaqueValue185);
    temporaryPointer361 = &unk_180F51450;
    opaqueValue362 = opaqueValue243;
    opaqueValue179 = sub_18009EA20 (opaqueValue120);
    opaqueValue185 = (LPCRITICAL_SECTION)(opaqueValue179 + 16);
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue179 + 16));
    sub_18009E8C0 (opaqueValue179);
    stackStorage178[0] = (LPCRITICAL_SECTION) "eventRounding";
    sub_1800B4BF0 (stackStorage363, opaqueValue179, stackStorage178);
    LeaveCriticalSection (opaqueValue185);
    temporaryPointer364 = &unk_180F512B0;
    messageString365 = 0;
    juceStringConstructFromUtf8 (&messageString365, "nearest-sample-half-away-from-zero");
    opaqueValue179 = sub_18009EA20 (opaqueValue121);
    opaqueValue185 = (LPCRITICAL_SECTION)(opaqueValue179 + 16);
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue179 + 16));
    sub_18009E8C0 (opaqueValue179);
    stackStorage178[0] = (LPCRITICAL_SECTION) "initialTempoBpm";
    sub_1800B4BF0 (stackStorage366, opaqueValue179, stackStorage178);
    LeaveCriticalSection (opaqueValue185);
    temporaryPointer367 = &unk_180F514D0;
    opaqueValue368 = 0x405E000000000000LL;
    opaqueValue179 = sub_18009EA20 (opaqueValue122);
    opaqueValue185 = (LPCRITICAL_SECTION)(opaqueValue179 + 16);
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue179 + 16));
    sub_18009E8C0 (opaqueValue179);
    stackStorage178[0] = (LPCRITICAL_SECTION) "initialTimeSignature";
    sub_1800B4BF0 (stackStorage369, opaqueValue179, stackStorage178);
    LeaveCriticalSection (opaqueValue185);
    temporaryPointer370 = &unk_180F512B0;
    messageString371 = 0;
    juceStringConstructFromUtf8 (&messageString371, "4/4");
    opaqueValue179 = sub_18009EA20 (opaqueValue123);
    opaqueValue185 = (LPCRITICAL_SECTION)(opaqueValue179 + 16);
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue179 + 16));
    sub_18009E8C0 (opaqueValue179);
    stackStorage178[0] = (LPCRITICAL_SECTION) "peak";
    sub_1800B4BF0 (stackStorage372, opaqueValue179, stackStorage178);
    opaqueValue173 = opaqueValue172 | 0xF8;
    LeaveCriticalSection (opaqueValue185);
    temporaryPointer373 = &unk_180F514D0;
    scalarValue374 = scalarValue36;
    scalarValue125 = scalarValue37 / ((double)(int)temporaryPointer108 * 2.0);
    if (scalarValue125 < 0.0)
        scalarValue126 = sub_1809D9280();
    else
        scalarValue126 = sqrt (scalarValue125);
    opaqueValue179 = sub_18009EA20 (opaqueValue124);
    opaqueValue185 = (LPCRITICAL_SECTION)(opaqueValue179 + 16);
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue179 + 16));
    sub_18009E8C0 (opaqueValue179);
    stackStorage178[0] = (LPCRITICAL_SECTION) "rms";
    sub_1800B4BF0 (stackStorage375, opaqueValue179, stackStorage178);
    LeaveCriticalSection (opaqueValue185);
    temporaryPointer376 = &unk_180F514D0;
    scalarValue377 = scalarValue126;
    opaqueValue185 = (LPCRITICAL_SECTION)sub_1807FBDD0 (&scalarValue190, temporaryPointer182, "out", 0);
    opaqueValue179 = sub_18009EA20 (opaqueValue127);
    stackStorage178[0] = (LPCRITICAL_SECTION)(opaqueValue179 + 16);
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue179 + 16));
    sub_18009E8C0 (opaqueValue179);
    temporaryPointer182 = "out";
    sub_1800B4BF0 (stackStorage378, opaqueValue179, &temporaryPointer182);
    LeaveCriticalSection (stackStorage178[0]);
    temporaryPointer379 = &unk_180F512B0;
    DebugInfo = nullptr;
    opaqueValue128 = opaqueValue185;
    DebugInfo = opaqueValue185->DebugInfo;
    opaqueValue185->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&emptyJuceStringCharacters;
    opaqueValue179 = sub_18009EA20 (opaqueValue128);
    stackStorage178[0] = (LPCRITICAL_SECTION)(opaqueValue179 + 16);
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue179 + 16));
    sub_18009E8C0 (opaqueValue179);
    temporaryPointer182 = "editorCreated";
    sub_1800B4BF0 (stackStorage381, opaqueValue179, &temporaryPointer182);
    LeaveCriticalSection (stackStorage178[0]);
    temporaryPointer382 = &unk_180F51230;
    opaqueValue383 = 0;
    opaqueValue179 = sub_18009EA20 (opaqueValue129);
    stackStorage178[0] = (LPCRITICAL_SECTION)(opaqueValue179 + 16);
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue179 + 16));
    sub_18009E8C0 (opaqueValue179);
    temporaryPointer182 = "audioDeviceOpened";
    sub_1800B4BF0 (stackStorage384, opaqueValue179, &temporaryPointer182);
    LeaveCriticalSection (stackStorage178[0]);
    temporaryPointer385 = &unk_180F51230;
    opaqueValue386 = 0;
    allocatedObject130 = memoryAllocateObject (32);
    temporaryPointer182 = (const char*)allocatedObject130;
    *(std::uint32_t*)(allocatedObject130 + 8) = 0;
    *(std::uint64_t*)allocatedObject130 = &juce::DynamicObject::`vftable';
    *(std::uint64_t*)(allocatedObject130 + 16) = 0;
    *(std::uint64_t*)(allocatedObject130 + 24) = 0;
    temporaryPointer131 = stackStorage282;
    do
    {
        sub_1800A6D50 (allocatedObject130, temporaryPointer131, temporaryPointer131 + 8);
        temporaryPointer131 += 24;
    } while (temporaryPointer131 != (char*)&opaqueValue387);
    temporaryPointer132 = opaqueValue187;
    *opaqueValue187 = &unk_180F513D0;
    temporaryPointer132[1] = allocatedObject130;
    _InterlockedIncrement ((volatile std::int32_t*)(allocatedObject130 + 8));
    opaqueValue174 = opaqueValue173 | 4;
    sub_1809A12FC (stackStorage282, 24, 36, sub_180211140);
    temporaryPointer133 = (void*)(*(std::uint64_t*)&scalarValue190 - 16LL);
    opaqueValue134 = opaqueValue222;
    callbackFunction135 = callbackFunction209;
    if ((void*)(*(std::uint64_t*)&scalarValue190 - 16LL) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)temporaryPointer133) == -1)
    {
        memoryFree (temporaryPointer133);
    }
    opaqueValue136 = opaqueValue174;
    if ((opaqueValue174 & 2) != 0)
    {
        opaqueValue136 = opaqueValue174 & 0xFD;
        opaqueValue175 = opaqueValue174 & 0xFD;
        temporaryPointer137 = temporaryPointer107 - 4;
        if (temporaryPointer137 != (volatile std::int32_t*)&emptyJuceStringStorage && _InterlockedDecrement (temporaryPointer137) == -1)
        {
            memoryFree ((LPVOID)temporaryPointer137);
            opaqueValue136 = opaqueValue175;
        }
    }
    if ((opaqueValue136 & 1) != 0)
    {
        temporaryPointer138 = (void*)(stackStorage223[0] - 16LL);
        if ((void*)(stackStorage223[0] - 16LL) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)temporaryPointer138) == -1)
            memoryFree (temporaryPointer138);
    }
    stringStorageToRelease139 = temporaryPointer208 - 16;
    if (temporaryPointer208 - 16 != (std::uint8_t*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease139) == -1)
        memoryFree (stringStorageToRelease139);
    temporaryPointer140 = temporaryPointer207 - 4;
    if (temporaryPointer207 - 4 != (volatile std::int32_t*)&emptyJuceStringStorage && _InterlockedDecrement (temporaryPointer140) == -1)
        memoryFree ((LPVOID)temporaryPointer140);
    HIDWORD (opaqueValue199) = 0;
    memoryFreeBuffer (opaqueValue198);
    memoryFreeBuffer (stackStorage391[0]);
    sub_180024860 (stackStorage277);
    sub_18046C2C0 (stackStorage276);
    if (opaqueValue275 != 0)
        memoryFreeBuffer (opaqueValue274);
    temporaryPointer225 = &juce::AudioFormat::`vftable';
    sub_180024DB0 (stackStorage227);
    memoryFreeBuffer (stackStorage227[0]);
    stringStorageToRelease141 = (void*)(opaqueValue226 - 16);
    if ((void*)(opaqueValue226 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease141) == -1)
        memoryFree (stringStorageToRelease141);
    stringStorageToRelease142 = (void*)(opaqueValue98 - 16);
    if ((void*)(opaqueValue98 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease142) == -1)
        memoryFree (stringStorageToRelease142);
    (*(void (**) (char*)) (opaqueValue280 + 88)) (stackStorage281);
    stringStorageToRelease143 = (void*)(opaqueValue134 - 16);
    if ((void*)(opaqueValue134 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease143) == -1)
        memoryFree (stringStorageToRelease143);
    memoryFreeBuffer (stackStorage204[0]);
    opaqueValue397 = 1;
    fadModel1AudioProcessorReleaseResources (&vectorValue394);
    _InterlockedExchange64 (stackStorage395, 0);
    stringStorageToRelease144 = temporaryPointer206 - 16;
    if (temporaryPointer206 - 16 != (std::uint8_t*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease144) == -1)
        memoryFree (stringStorageToRelease144);
    sub_1800656C0 (&vectorValue394);
    if (callbackFunction213 != nullptr)
        (**callbackFunction213) (callbackFunction213, 1);
    if (callbackFunction135 != nullptr)
        (**callbackFunction135) (callbackFunction135, 1);
    stringStorageToRelease145 = (void*)(opaqueValue205 - 16);
    if ((void*)(opaqueValue205 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease145) == -1)
        memoryFree (stringStorageToRelease145);
    temporaryPointer146 = temporaryPointer11 - 4;
    if (temporaryPointer11 - 4 != (volatile std::int32_t*)&emptyJuceStringStorage && _InterlockedDecrement (temporaryPointer146) == -1)
        memoryFree ((LPVOID)temporaryPointer146);
    stringStorageToRelease147 = (void*)(opaqueValue10 - 16);
    if ((void*)(opaqueValue10 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease147) == -1)
        memoryFree (stringStorageToRelease147);
    sub_180825080 (&temporaryPointer229);
    *cliHost = 0;
    return opaqueValue187;
}
