#include <cstdint>

// ===== Cli_CommandDispatcher @ 0x180814720 size=27995 =====
// commands: audio.enable/audition.start -> AuthManager_WaitReadyBlocking + RenderGate_IsAuthorized_readonly else ENTITLEMENT_DENIED; also params.*/preview.*/auth.*
std::uint64_t* cliDispatchCommand (std::int64_t cliHost, std::uint64_t* outputResponse, std::uint64_t* request, const char* commandName)
{
    const char* temporaryPointer4; // rdi
    std::uint64_t* temporaryPointer5; // rbx
    std::int64_t opaqueValue7; // r14
    int opaqueValue8; // esi
    char* temporaryPointer9; // rdi
    std::int64_t opaqueValue10; // rcx
    int opaqueValue11; // r11d
    std::int64_t opaqueValue12; // r10
    std::uint8_t* temporaryPointer13; // rcx
    int opaqueValue14; // edx
    int opaqueValue15; // r8d
    std::int64_t opaqueValue16; // rbx
    int opaqueValue17; // eax
    std::int64_t opaqueValue18; // rax
    std::uint64_t* temporaryPointer19; // rdx
    std::uint64_t* temporaryPointer20; // r8
    std::int64_t opaqueValue21; // rax
    char opaqueValue22; // cl
    void* stringStorageToRelease23; // rcx
    std::int64_t opaqueValue24; // rcx
    std::uint64_t** temporaryPointer25; // r15
    std::uint64_t* temporaryPointer26; // r12
    char* temporaryPointer27; // rbx
    char* temporaryPointer28; // rdi
    int opaqueValue29; // edx
    std::int64_t opaqueValue30; // rdx
    std::uint64_t* temporaryPointer31; // rcx
    void (**callbackFunction32) (std::uint64_t*); // rax
    std::int64_t opaqueValue33; // rax
    std::int64_t opaqueValue34; // rcx
    std::int64_t opaqueValue35; // rbx
    int opaqueValue36; // esi
    std::int64_t opaqueValue37; // rcx
    std::int64_t opaqueValue38; // rbx
    int opaqueValue39; // esi
    std::int64_t allocatedObject40; // rbx
    std::int64_t allocatedObject41; // rdi
    char* temporaryPointer42; // rbx
    int opaqueValue43; // edx
    std::int64_t opaqueValue44; // rdx
    std::uint64_t* temporaryPointer45; // rcx
    std::uint64_t* temporaryPointer46; // rax
    std::int64_t opaqueValue47; // rax
    void (*callbackFunction48) (std::int64_t*); // rdx
    std::int64_t opaqueValue49; // rbx
    std::int64_t allocatedObject50; // rbx
    std::int64_t opaqueValue51; // rcx
    std::int64_t opaqueValue52; // rbx
    std::int64_t opaqueValue53; // rcx
    std::int64_t opaqueValue54; // rbx
    std::int64_t opaqueValue55; // rcx
    std::int64_t opaqueValue56; // rbx
    double scalarValue58; // xmm0_8
    std::int64_t opaqueValue59; // rax
    int opaqueValue60; // r9d
    void* stringStorageToRelease61; // rcx
    double scalarValue62; // xmm0_8
    std::int64_t opaqueValue63; // rax
    std::int64_t opaqueValue64; // rdx
    std::int64_t opaqueValue65; // rdx
    std::uint64_t* opaqueValue66; // rdi
    void* stringStorageToRelease67; // rcx
    void* stringStorageToRelease68; // rcx
    void* temporaryPointer69; // rcx
    std::int64_t opaqueValue70; // rax
    std::int64_t processor71; // rax
    std::int64_t opaqueValue72; // r9
    int opaqueValue73; // ebx
    std::int64_t processor74; // rax
    std::int64_t opaqueValue75; // rax
    std::uint8_t* temporaryPointer76; // rcx
    std::int64_t opaqueValue77; // rdx
    std::int64_t opaqueValue78; // rcx
    char opaqueValue79; // al
    std::int64_t opaqueValue80; // rdx
    char opaqueValue81; // al
    std::int64_t processor82; // rax
    std::int64_t opaqueValue83; // rdi
    std::int64_t opaqueValue84; // rcx
    unsigned int* temporaryPointer85; // rcx
    unsigned int opaqueValue86; // ebx
    std::int64_t opaqueValue87; // rax
    std::int64_t opaqueValue88; // rdi
    unsigned int opaqueValue89; // r12d
    char* temporaryPointer90; // rbx
    char* temporaryPointer91; // rdi
    int opaqueValue92; // edx
    std::int64_t opaqueValue93; // rdx
    std::uint64_t* temporaryPointer94; // rcx
    std::uint64_t* temporaryPointer95; // rax
    std::int64_t opaqueValue96; // rax
    void (*callbackFunction97) (std::int64_t*); // rdx
    std::int64_t opaqueValue98; // rax
    std::int64_t opaqueValue99; // rax
    std::int64_t opaqueValue100; // rax
    std::int64_t opaqueValue101; // rax
    std::int64_t opaqueValue102; // rax
    std::int64_t opaqueValue103; // rcx
    std::int64_t opaqueValue104; // rax
    std::int64_t opaqueValue105; // rax
    void* stringStorageToRelease106; // rcx
    std::int64_t opaqueValue107; // rcx
    std::int64_t opaqueValue108; // r8
    char opaqueValue109; // al
    std::int64_t opaqueValue110; // rcx
    char opaqueValue111; // al
    std::int64_t opaqueValue112; // rax
    std::int64_t opaqueValue113; // rax
    bool conditionFlag114; // al
    double scalarValue115; // xmm8_8
    double scalarValue116; // xmm7_8
    std::int64_t* temporaryPointer117; // rax
    void* temporaryPointer118; // rdi
    std::int64_t opaqueValue119; // rbx
    std::int64_t opaqueValue120; // rcx
    char opaqueValue121; // al
    std::int64_t opaqueValue122; // rcx
    bool isAuthorizedReadonly; // al
    void** temporaryPointer124; // rdx
    void (**callbackFunction125) (std::uint64_t*, std::int64_t*); // rax
    void* temporaryPointer126; // rax
    std::int64_t (*callbackFunction127)(); // rdx
    std::int64_t (*callbackFunction128)(); // rdx
    char* temporaryPointer129; // rax
    char* temporaryPointer130; // rcx
    std::int64_t opaqueValue131; // rax
    char* temporaryPointer132; // rax
    std::int64_t opaqueValue133; // rbx
    std::int64_t opaqueValue134; // rcx
    bool isRenderAuthorized135; // al
    std::uint64_t* temporaryPointer136; // rax
    int opaqueValue137; // esi
    std::uint64_t* temporaryPointer138; // rcx
    void (**callbackFunction139) (std::uint64_t*); // rax
    std::int64_t opaqueValue140; // rax
    void** temporaryPointer141; // rdx
    void (**callbackFunction142) (std::uint64_t*, std::int64_t*); // rax
    void* temporaryPointer143; // rax
    std::int64_t (*callbackFunction144)(); // rdx
    std::int64_t opaqueValue145; // rbx
    std::int64_t opaqueValue146; // rcx
    bool isRenderAuthorized147; // al
    void (**callbackFunction148) (std::uint64_t*); // rcx
    void** temporaryPointer149; // rdx
    int opaqueValue150; // esi
    void* temporaryPointer151; // rax
    void** temporaryPointer152; // rdx
    void* temporaryPointer153; // rax
    std::int64_t (*callbackFunction154)(); // rdx
    bool conditionFlag155; // bl
    char* stringStorageToRelease156; // rcx
    std::int64_t opaqueValue157; // rdx
    std::int64_t opaqueValue158; // rax
    char* stringStorageToRelease159; // rcx
    std::int64_t (*callbackFunction160)(); // rdx
    void* stringStorageToRelease161; // rcx
    int i; // ebx
    std::int64_t opaqueValue163; // rax
    std::int64_t opaqueValue164; // rdx
    double scalarValue165; // xmm7_8
    std::int64_t* temporaryPointer166; // rax
    void** temporaryPointer167; // r8
    int opaqueValue168; // esi
    std::int64_t opaqueValue169; // rax
    int opaqueValue170; // esi
    void* stringStorageToRelease171; // rcx
    std::int64_t opaqueValue172; // rbx
    std::int64_t opaqueValue173; // r8
    __int128* temporaryPointer174; // rax
    std::int64_t opaqueValue175; // rbx
    double scalarValue176; // xmm8_8
    double scalarValue177; // xmm7_8
    std::uint64_t* temporaryPointer178; // r12
    std::uint64_t opaqueValue179; // rbx
    double scalarValue180; // xmm0_8
    double scalarValue181; // xmm7_8
    std::uint64_t opaqueValue182; // rdx
    std::uint64_t opaqueValue183; // rdx
    std::uint64_t opaqueValue184; // rax
    std::int64_t opaqueValue185; // rdi
    std::uint64_t opaqueValue186; // r14
    std::int64_t opaqueValue187; // rax
    std::int64_t opaqueValue188; // rdx
    std::int64_t* temporaryPointer189; // rax
    void** temporaryPointer190; // r8
    int opaqueValue191; // esi
    int opaqueValue192; // esi
    void* stringStorageToRelease193; // rcx
    std::int64_t opaqueValue194; // rax
    void* stringStorageToRelease195; // rcx
    std::int64_t opaqueValue196; // rax
    std::uint8_t* temporaryPointer197; // rax
    void* temporaryPointer198; // rbx
    char* processor199; // rbx
    std::int64_t opaqueValue200; // rax
    std::int64_t opaqueValue201; // rdi
    std::int64_t opaqueValue202; // rbx
    std::int64_t opaqueValue203; // r8
    __int128* temporaryPointer204; // rax
    std::int64_t opaqueValue205; // rbx
    double scalarValue206; // xmm0_8
    float scalarValue207; // xmm6_4
    __int128* temporaryPointer208; // rdx
    std::int64_t (*callbackFunction209) (std::int64_t, std::int64_t*, std::int64_t, std::int64_t); // rbx
    std::int64_t opaqueValue210; // r8
    std::int64_t opaqueValue211; // rax
    void* stringStorageToRelease212; // rcx
    void* stringStorageToRelease213; // rcx
    void* stringStorageToRelease214; // rcx
    void* temporaryPointer215; // rbx
    std::int64_t processor216; // rdx
    std::int64_t opaqueValue217; // rdx
    std::int64_t opaqueValue218; // rax
    std::int64_t opaqueValue219; // rax
    std::int64_t opaqueValue220; // rax
    std::int64_t opaqueValue221; // rax
    int opaqueValue222; // esi
    void* stringStorageToRelease223; // rcx
    std::uint8_t* stringStorageToRelease224; // rcx
    std::int64_t opaqueValue225; // rax
    std::int64_t opaqueValue226; // rax
    void* stringStorageToRelease227; // rcx
    std::int64_t opaqueValue228; // rax
    std::int64_t opaqueValue229; // rax
    void* stringStorageToRelease230; // rcx
    std::int64_t opaqueValue231; // rax
    std::int64_t opaqueValue232; // rax
    std::int64_t opaqueValue233; // rbx
    std::int64_t opaqueValue234; // rax
    std::int64_t opaqueValue235; // rdi
    std::int64_t opaqueValue236; // r8
    void* stringStorageToRelease237; // rcx
    std::int64_t opaqueValue238; // rax
    std::int64_t opaqueValue239; // r8
    std::int64_t opaqueValue240; // rax
    void* stringStorageToRelease241; // rcx
    void (***callbackFunction242) (std::uint64_t, std::int64_t); // rcx
    std::int64_t opaqueValue243; // rdx
    std::int64_t opaqueValue244; // rax
    std::int64_t opaqueValue245; // rdx
    std::int64_t opaqueValue246; // rax
    std::int64_t opaqueValue247; // rax
    void* stringStorageToRelease248; // rcx
    void* stringStorageToRelease249; // rcx
    void* stringStorageToRelease250; // rcx
    void* stringStorageToRelease251; // rcx
    std::int64_t processor252; // rax
    std::int64_t opaqueValue253; // rbx
    unsigned int opaqueValue254; // eax
    std::int64_t opaqueValue255; // rcx
    std::int64_t opaqueValue256; // rax
    std::int64_t opaqueValue257; // rdx
    std::int64_t opaqueValue258; // rax
    char* temporaryPointer259; // rax
    char* temporaryPointer260; // rcx
    std::int64_t opaqueValue261; // rdi
    std::int64_t opaqueValue262; // rax
    int opaqueValue263; // r9d
    std::int64_t opaqueValue264; // rax
    std::int64_t opaqueValue265; // rbx
    std::int64_t opaqueValue266; // rax
    std::int64_t opaqueValue267; // rax
    std::int64_t opaqueValue268; // rcx
    std::int64_t opaqueValue269; // rbx
    std::int64_t opaqueValue270; // rax
    std::int64_t opaqueValue271; // rax
    std::uint64_t* temporaryPointer272; // rax
    std::int64_t opaqueValue273; // rax
    std::int64_t opaqueValue274; // rcx
    void* stringStorageToRelease275; // rcx
    std::int64_t processor276; // rbx
    std::int64_t opaqueValue277; // rdx
    std::int64_t processor278; // rbx
    std::int64_t opaqueValue279; // rdx
    std::int64_t opaqueValue280; // rax
    std::int64_t opaqueValue281; // rax
    std::int64_t opaqueValue282; // rax
    std::int64_t opaqueValue283; // rdx
    std::int64_t opaqueValue284; // rcx
    const char* temporaryPointer285; // rax
    std::int64_t opaqueValue286; // rax
    std::int64_t opaqueValue287; // rax
    std::int64_t opaqueValue288; // rdx
    std::int64_t opaqueValue289; // rax
    std::int64_t opaqueValue290; // rdx
    char opaqueValue291; // bl
    std::int64_t opaqueValue292; // rcx
    std::int64_t opaqueValue293; // rax
    std::int64_t opaqueValue294; // rdx
    std::int64_t opaqueValue295; // rcx
    std::int64_t opaqueValue296; // rdx
    std::int64_t opaqueValue297; // rdx
    std::int64_t opaqueValue298; // rcx
    std::int64_t opaqueValue299; // rcx
    std::int64_t opaqueValue300; // rdx
    std::int64_t opaqueValue301; // rax
    std::int64_t opaqueValue302; // rax
    void* stringStorageToRelease303; // rcx
    void* stringStorageToRelease304; // rcx
    void* stringStorageToRelease305; // rcx
    std::int64_t opaqueValue306; // rdx
    char opaqueValue307; // cl
    char opaqueValue308; // cl
    std::int64_t opaqueValue309; // rax
    char opaqueValue310; // al
    const char* temporaryPointer311; // r8
    std::int64_t opaqueValue312; // rdx
    std::int64_t opaqueValue313; // rax
    void* stringStorageToRelease314; // rcx
    std::uint64_t* temporaryPointer315; // rdx
    std::int64_t opaqueValue316; // rax
    std::int64_t opaqueValue317; // rbx
    std::int64_t opaqueValue318; // rdx
    void* stringStorageToRelease319; // rcx
    void* stringStorageToRelease320; // rcx
    char* stringStorageToRelease321; // rcx
    std::int64_t opaqueValue322; // rdx
    std::int64_t opaqueValue323; // rcx
    std::int64_t opaqueValue324; // rdx
    std::int64_t Processor; // rbx
    std::int64_t opaqueValue326; // rcx
    std::uint64_t* allocatedObject327; // rax
    std::int64_t opaqueValue328; // rdi
    std::uint64_t* temporaryPointer329; // rbx
    std::uint64_t* temporaryPointer330; // rbx
    std::int64_t opaqueValue331; // rdx
    std::uint8_t* stringStorageToRelease332; // rcx
    std::int64_t opaqueValue333; // rax
    const char* temporaryPointer334; // r8
    std::int64_t opaqueValue335; // rax
    bool conditionFlag336; // bl
    std::int64_t opaqueValue337; // rax
    bool conditionFlag338; // bl
    std::int64_t* temporaryPointer339; // rbx
    std::uint8_t* stringStorageToRelease340; // rcx
    __m128i si128; // xmm0
    std::int64_t opaqueValue342; // rbx
    std::int64_t opaqueValue343; // rdi
    std::int64_t opaqueValue344; // rdi
    std::int64_t opaqueValue345; // rbx
    const char* temporaryPointer346; // rcx
    std::int64_t j; // r8
    int opaqueValue348; // eax
    std::uint64_t* temporaryPointer349; // rbx
    std::int64_t opaqueValue350; // r8
    char* temporaryPointer351; // rcx
    std::int64_t opaqueValue352; // rdx
    std::int64_t opaqueValue353; // r8
    int opaqueValue354; // eax
    void* stringStorageToRelease355; // rcx
    std::uint64_t* temporaryPointer356; // rcx
    void* stringStorageToRelease357; // rcx
    char* stringStorageToRelease358; // rcx
    std::int64_t opaqueValue359; // rbx
    std::int64_t opaqueValue360; // rcx
    std::int64_t opaqueValue361; // rbx
    std::int64_t opaqueValue362; // rcx
    std::int64_t opaqueValue363; // rbx
    std::int64_t opaqueValue364; // rbx
    void* stringStorageToRelease365; // rcx
    std::int64_t opaqueValue366; // rbx
    std::uint64_t* temporaryPointer367; // rcx
    void* stringStorageToRelease368; // rcx
    void* stringStorageToRelease369; // rcx
    void* stringStorageToRelease370; // rcx
    std::int64_t opaqueValue371; // rbx
    std::int64_t opaqueValue372; // r12
    std::int64_t opaqueValue373; // rax
    void* stringStorageToRelease374; // rcx
    std::int64_t opaqueValue375; // r8
    void (***callbackFunction376) (std::uint64_t, std::int64_t); // rbx
    void (*callbackFunction377) (std::uint64_t, std::int64_t); // rdi
    std::int64_t opaqueValue378; // rax
    int opaqueValue379; // esi
    void* stringStorageToRelease380; // rcx
    void (***callbackFunction381) (std::uint64_t, std::int64_t); // rcx
    std::int64_t opaqueValue382; // rax
    std::int64_t opaqueValue383; // rdx
    void* stringStorageToRelease384; // rcx
    std::uint8_t* stringStorageToRelease385; // rcx
    void* stringStorageToRelease386; // rcx
    std::int64_t opaqueValue387; // rax
    std::int64_t opaqueValue388; // rax
    std::int64_t opaqueValue389; // rax
    std::int64_t opaqueValue390; // rax
    std::int64_t opaqueValue391; // rax
    std::int64_t opaqueValue392; // rax
    std::int64_t opaqueValue393; // rax
    std::int64_t opaqueValue394; // rax
    std::int64_t opaqueValue395; // rax
    std::int64_t opaqueValue396; // rax
    std::int64_t opaqueValue397; // rax
    std::int64_t opaqueValue398; // rax
    std::int64_t opaqueValue399; // rax
    std::int64_t opaqueValue400; // rax
    std::int64_t opaqueValue401; // rax
    std::int64_t opaqueValue402; // rax
    std::int64_t opaqueValue403; // rax
    std::int64_t opaqueValue404; // rax
    std::int64_t opaqueValue405; // rax
    std::int64_t opaqueValue406; // rax
    std::int64_t opaqueValue407; // rax
    std::int64_t opaqueValue408; // rax
    int opaqueValue409; // ebx
    std::int64_t opaqueValue410; // r9
    std::int64_t opaqueValue411; // rax
    std::int64_t opaqueValue412; // rax
    std::int64_t opaqueValue413; // rax
    std::int64_t opaqueValue414; // rax
    std::int64_t opaqueValue415; // rax
    std::int64_t opaqueValue416; // rax
    std::int64_t opaqueValue417; // rax
    std::int64_t opaqueValue418; // rax
    std::int64_t opaqueValue419; // rax
    std::int64_t opaqueValue420; // rax
    std::int64_t opaqueValue421; // rax
    std::int64_t opaqueValue422; // rax
    std::int64_t opaqueValue423; // rax
    std::int64_t opaqueValue424; // rax
    std::int64_t opaqueValue425; // rcx
    std::int64_t opaqueValue426; // rax
    std::int64_t opaqueValue427; // rax
    std::int64_t opaqueValue428; // rax
    std::int64_t opaqueValue429; // rax
    std::int64_t opaqueValue430; // rax
    std::int64_t opaqueValue431; // rax
    std::uint8_t stackStorage432[4]; // [rsp+30h] [rbp-2E38h] BYREF
    int opaqueValue433; // [rsp+34h] [rbp-2E34h]
    LPVOID stackStorage434[2]; // [rsp+40h] [rbp-2E28h] BYREF
    std::int64_t stackStorage435[2]; // [rsp+50h] [rbp-2E18h] BYREF
    __int128 urlString436; // [rsp+60h] [rbp-2E08h] BYREF
    std::uint64_t* opaqueValue437; // [rsp+70h] [rbp-2DF8h]
    std::uint64_t* reusableString438; // [rsp+78h] [rbp-2DF0h] BYREF
    char* temporaryPointer439; // [rsp+80h] [rbp-2DE8h] BYREF
    std::int64_t opaqueValue440; // [rsp+88h] [rbp-2DE0h] BYREF
    std::int64_t nextString441; // [rsp+90h] [rbp-2DD8h] BYREF
    LPVOID lpMem; // [rsp+98h] [rbp-2DD0h]
    unsigned int* temporaryPointer443; // [rsp+A0h] [rbp-2DC8h]
    char* temporaryPointer444; // [rsp+A8h] [rbp-2DC0h] BYREF
    std::int64_t opaqueValue445; // [rsp+B0h] [rbp-2DB8h]
    LPVOID opaqueValue446; // [rsp+B8h] [rbp-2DB0h] BYREF
    std::int64_t opaqueValue447; // [rsp+C0h] [rbp-2DA8h]
    void (***callbackFunction448) (std::uint64_t, std::int64_t); // [rsp+C8h] [rbp-2DA0h] BYREF
    void (***callbackFunction449) (std::uint64_t, std::int64_t); // [rsp+D0h] [rbp-2D98h] BYREF
    LPVOID opaqueValue450; // [rsp+D8h] [rbp-2D90h] BYREF
    std::int64_t opaqueValue451; // [rsp+E0h] [rbp-2D88h]
    LPVOID opaqueValue452; // [rsp+E8h] [rbp-2D80h] BYREF
    std::int64_t opaqueValue453; // [rsp+F0h] [rbp-2D78h]
    LPVOID opaqueValue454; // [rsp+F8h] [rbp-2D70h] BYREF
    std::int64_t opaqueValue455; // [rsp+100h] [rbp-2D68h]
    std::int64_t opaqueValue456; // [rsp+108h] [rbp-2D60h] BYREF
    std::int64_t opaqueValue457; // [rsp+110h] [rbp-2D58h] BYREF
    std::int64_t opaqueValue458; // [rsp+118h] [rbp-2D50h] BYREF
    std::int64_t opaqueValue459; // [rsp+120h] [rbp-2D48h] BYREF
    __int128 opaqueValue460; // [rsp+130h] [rbp-2D38h] BYREF
    __int128 opaqueValue461; // [rsp+140h] [rbp-2D28h] BYREF
    char* messageString462; // [rsp+150h] [rbp-2D18h] BYREF
    std::uint8_t* temporaryPointer463; // [rsp+158h] [rbp-2D10h] BYREF
    std::uint8_t* temporaryPointer464; // [rsp+160h] [rbp-2D08h] BYREF
    std::uint8_t* temporaryPointer465; // [rsp+168h] [rbp-2D00h] BYREF
    std::int64_t opaqueValue466; // [rsp+170h] [rbp-2CF8h] BYREF
    LPVOID stackStorage467[2]; // [rsp+178h] [rbp-2CF0h] BYREF
    std::uint64_t stackStorage468[2]; // [rsp+188h] [rbp-2CE0h] BYREF
    LPVOID stackStorage469[2]; // [rsp+198h] [rbp-2CD0h] BYREF
    LPVOID stackStorage470[2]; // [rsp+1A8h] [rbp-2CC0h] BYREF
    char* messageString471; // [rsp+1B8h] [rbp-2CB0h] BYREF
    std::int64_t opaqueValue472; // [rsp+1C0h] [rbp-2CA8h] BYREF
    std::int64_t opaqueValue473; // [rsp+1C8h] [rbp-2CA0h] BYREF
    std::int64_t opaqueValue474; // [rsp+1D0h] [rbp-2C98h] BYREF
    std::int64_t opaqueValue475; // [rsp+1D8h] [rbp-2C90h] BYREF
    const char* temporaryPointer476; // [rsp+1E0h] [rbp-2C88h] BYREF
    const char* temporaryPointer477; // [rsp+1E8h] [rbp-2C80h] BYREF
    std::int64_t opaqueValue478; // [rsp+1F0h] [rbp-2C78h] BYREF
    const char* temporaryPointer479; // [rsp+1F8h] [rbp-2C70h] BYREF
    const char* temporaryPointer480; // [rsp+200h] [rbp-2C68h] BYREF
    std::int64_t opaqueValue481; // [rsp+208h] [rbp-2C60h] BYREF
    char* temporaryPointer482; // [rsp+210h] [rbp-2C58h] BYREF
    std::uint8_t* temporaryPointer483; // [rsp+218h] [rbp-2C50h] BYREF
    const char* temporaryPointer484; // [rsp+220h] [rbp-2C48h] BYREF
    char* temporaryPointer485; // [rsp+228h] [rbp-2C40h] BYREF
    char stackStorage486[8]; // [rsp+230h] [rbp-2C38h] BYREF
    std::uint8_t* temporaryPointer487; // [rsp+238h] [rbp-2C30h] BYREF
    std::int64_t opaqueValue488; // [rsp+240h] [rbp-2C28h] BYREF
    const char* temporaryPointer489; // [rsp+248h] [rbp-2C20h] BYREF
    std::int64_t opaqueValue490; // [rsp+250h] [rbp-2C18h] BYREF
    std::uint8_t* temporaryPointer491; // [rsp+258h] [rbp-2C10h] BYREF
    const char* temporaryPointer492; // [rsp+260h] [rbp-2C08h] BYREF
    char* messageString493; // [rsp+268h] [rbp-2C00h] BYREF
    std::int64_t opaqueValue494; // [rsp+270h] [rbp-2BF8h] BYREF
    const char* temporaryPointer495; // [rsp+278h] [rbp-2BF0h] BYREF
    std::int64_t opaqueValue496; // [rsp+280h] [rbp-2BE8h] BYREF
    std::uint8_t* temporaryPointer497; // [rsp+288h] [rbp-2BE0h] BYREF
    char* messageString498; // [rsp+290h] [rbp-2BD8h] BYREF
    char* messageString499; // [rsp+298h] [rbp-2BD0h] BYREF
    char* messageString500; // [rsp+2A0h] [rbp-2BC8h] BYREF
    LPVOID opaqueValue501; // [rsp+2A8h] [rbp-2BC0h] BYREF
    int opaqueValue502; // [rsp+2B4h] [rbp-2BB4h]
    LPVOID stackStorage503[2]; // [rsp+2B8h] [rbp-2BB0h] BYREF
    std::uint64_t stackStorage504[2]; // [rsp+2C8h] [rbp-2BA0h] BYREF
    LPVOID opaqueValue505; // [rsp+2D8h] [rbp-2B90h] BYREF
    int opaqueValue506; // [rsp+2E4h] [rbp-2B84h]
    LPVOID stackStorage507[2]; // [rsp+2E8h] [rbp-2B80h] BYREF
    const char* temporaryPointer508; // [rsp+2F8h] [rbp-2B70h] BYREF
    char stackStorage509[8]; // [rsp+300h] [rbp-2B68h] BYREF
    char stackStorage510[8]; // [rsp+308h] [rbp-2B60h] BYREF
    char stackStorage511[8]; // [rsp+310h] [rbp-2B58h] BYREF
    const char* temporaryPointer512; // [rsp+318h] [rbp-2B50h] BYREF
    const char* temporaryPointer513; // [rsp+320h] [rbp-2B48h] BYREF
    const char* temporaryPointer514; // [rsp+328h] [rbp-2B40h] BYREF
    const char* temporaryPointer515; // [rsp+330h] [rbp-2B38h] BYREF
    const char* temporaryPointer516; // [rsp+338h] [rbp-2B30h] BYREF
    const char* temporaryPointer517; // [rsp+340h] [rbp-2B28h] BYREF
    std::int64_t opaqueValue518; // [rsp+348h] [rbp-2B20h] BYREF
    std::int64_t opaqueValue519; // [rsp+350h] [rbp-2B18h] BYREF
    char stackStorage520[8]; // [rsp+358h] [rbp-2B10h] BYREF
    char stackStorage521[8]; // [rsp+360h] [rbp-2B08h] BYREF
    char stackStorage522[8]; // [rsp+368h] [rbp-2B00h] BYREF
    char stackStorage523[8]; // [rsp+370h] [rbp-2AF8h] BYREF
    char stackStorage524[8]; // [rsp+378h] [rbp-2AF0h] BYREF
    char stackStorage525[8]; // [rsp+380h] [rbp-2AE8h] BYREF
    std::int64_t opaqueValue526; // [rsp+388h] [rbp-2AE0h]
    std::int64_t opaqueValue527; // [rsp+390h] [rbp-2AD8h] BYREF
    std::uint8_t* temporaryPointer528; // [rsp+398h] [rbp-2AD0h] BYREF
    std::int64_t opaqueValue529; // [rsp+3A0h] [rbp-2AC8h] BYREF
    char stackStorage530[8]; // [rsp+3A8h] [rbp-2AC0h] BYREF
    char stackStorage531[8]; // [rsp+3B0h] [rbp-2AB8h] BYREF
    char stackStorage532[8]; // [rsp+3B8h] [rbp-2AB0h] BYREF
    std::int64_t opaqueValue533; // [rsp+3C0h] [rbp-2AA8h] BYREF
    char stackStorage534[8]; // [rsp+3C8h] [rbp-2AA0h] BYREF
    std::int64_t opaqueValue535; // [rsp+3D0h] [rbp-2A98h] BYREF
    char stackStorage536[8]; // [rsp+3D8h] [rbp-2A90h] BYREF
    char stackStorage537[8]; // [rsp+3E0h] [rbp-2A88h] BYREF
    char stackStorage538[8]; // [rsp+3E8h] [rbp-2A80h] BYREF
    char stackStorage539[8]; // [rsp+3F0h] [rbp-2A78h] BYREF
    std::int64_t opaqueValue540; // [rsp+3F8h] [rbp-2A70h] BYREF
    char stackStorage541[8]; // [rsp+400h] [rbp-2A68h] BYREF
    char stackStorage542[8]; // [rsp+408h] [rbp-2A60h] BYREF
    char stackStorage543[8]; // [rsp+410h] [rbp-2A58h] BYREF
    std::int64_t opaqueValue544; // [rsp+418h] [rbp-2A50h] BYREF
    char stackStorage545[8]; // [rsp+420h] [rbp-2A48h] BYREF
    char stackStorage546[8]; // [rsp+428h] [rbp-2A40h] BYREF
    std::int64_t opaqueValue547; // [rsp+430h] [rbp-2A38h] BYREF
    std::int64_t opaqueValue548; // [rsp+438h] [rbp-2A30h] BYREF
    char stackStorage549[8]; // [rsp+440h] [rbp-2A28h] BYREF
    char stackStorage550[8]; // [rsp+448h] [rbp-2A20h] BYREF
    char stackStorage551[8]; // [rsp+450h] [rbp-2A18h] BYREF
    char stackStorage552[8]; // [rsp+458h] [rbp-2A10h] BYREF
    char stackStorage553[8]; // [rsp+460h] [rbp-2A08h] BYREF
    char stackStorage554[8]; // [rsp+468h] [rbp-2A00h] BYREF
    char stackStorage555[8]; // [rsp+470h] [rbp-29F8h] BYREF
    char stackStorage556[8]; // [rsp+478h] [rbp-29F0h] BYREF
    char stackStorage557[8]; // [rsp+480h] [rbp-29E8h] BYREF
    char stackStorage558[8]; // [rsp+488h] [rbp-29E0h] BYREF
    char stackStorage559[8]; // [rsp+490h] [rbp-29D8h] BYREF
    char stackStorage560[8]; // [rsp+498h] [rbp-29D0h] BYREF
    char stackStorage561[8]; // [rsp+4A0h] [rbp-29C8h] BYREF
    char stackStorage562[8]; // [rsp+4A8h] [rbp-29C0h] BYREF
    char stackStorage563[8]; // [rsp+4B0h] [rbp-29B8h] BYREF
    std::int64_t opaqueValue564; // [rsp+4B8h] [rbp-29B0h] BYREF
    std::int64_t opaqueValue565; // [rsp+4C0h] [rbp-29A8h] BYREF
    std::int64_t opaqueValue566; // [rsp+4C8h] [rbp-29A0h] BYREF
    char stackStorage567[8]; // [rsp+4D0h] [rbp-2998h] BYREF
    std::int64_t opaqueValue568; // [rsp+4D8h] [rbp-2990h] BYREF
    char stackStorage569[8]; // [rsp+4E0h] [rbp-2988h] BYREF
    char stackStorage570[8]; // [rsp+4E8h] [rbp-2980h] BYREF
    char stackStorage571[8]; // [rsp+4F0h] [rbp-2978h] BYREF
    std::int64_t opaqueValue572; // [rsp+4F8h] [rbp-2970h] BYREF
    char stackStorage573[8]; // [rsp+500h] [rbp-2968h] BYREF
    std::uint8_t* temporaryPointer574; // [rsp+508h] [rbp-2960h] BYREF
    char stackStorage575[8]; // [rsp+510h] [rbp-2958h] BYREF
    char stackStorage576[8]; // [rsp+518h] [rbp-2950h] BYREF
    char stackStorage577[8]; // [rsp+520h] [rbp-2948h] BYREF
    std::int64_t opaqueValue578; // [rsp+528h] [rbp-2940h] BYREF
    const char* temporaryPointer579; // [rsp+530h] [rbp-2938h] BYREF
    const char* temporaryPointer580; // [rsp+538h] [rbp-2930h] BYREF
    const char* temporaryPointer581; // [rsp+540h] [rbp-2928h] BYREF
    std::int64_t opaqueValue582; // [rsp+548h] [rbp-2920h] BYREF
    std::int64_t opaqueValue583; // [rsp+550h] [rbp-2918h] BYREF
    char stackStorage584[8]; // [rsp+558h] [rbp-2910h] BYREF
    std::int64_t opaqueValue585; // [rsp+560h] [rbp-2908h] BYREF
    char stackStorage586[8]; // [rsp+568h] [rbp-2900h] BYREF
    std::int64_t opaqueValue587; // [rsp+570h] [rbp-28F8h] BYREF
    char stackStorage588[8]; // [rsp+578h] [rbp-28F0h] BYREF
    char stackStorage589[8]; // [rsp+580h] [rbp-28E8h] BYREF
    LPVOID opaqueValue590; // [rsp+588h] [rbp-28E0h] BYREF
    unsigned int opaqueValue591; // [rsp+590h] [rbp-28D8h]
    LPVOID stackStorage592[2]; // [rsp+598h] [rbp-28D0h] BYREF
    char stackStorage593[8]; // [rsp+5A8h] [rbp-28C0h] BYREF
    std::uint64_t stackStorage594[2]; // [rsp+5B0h] [rbp-28B8h] BYREF
    std::uint64_t stackStorage595[2]; // [rsp+5C0h] [rbp-28A8h] BYREF
    std::uint64_t stackStorage596[2]; // [rsp+5D0h] [rbp-2898h] BYREF
    std::uint64_t stackStorage597[2]; // [rsp+5E0h] [rbp-2888h] BYREF
    std::uint64_t stackStorage598[10]; // [rsp+5F0h] [rbp-2878h] BYREF
    __int128 opaqueValue599; // [rsp+640h] [rbp-2828h]
    __int128 opaqueValue600; // [rsp+650h] [rbp-2818h]
    __int128 opaqueValue601; // [rsp+660h] [rbp-2808h]
    __int128 opaqueValue602; // [rsp+670h] [rbp-27F8h]
    __int128 opaqueValue603; // [rsp+680h] [rbp-27E8h]
    __int128 opaqueValue604; // [rsp+690h] [rbp-27D8h]
    __int128 opaqueValue605; // [rsp+6A0h] [rbp-27C8h]
    LPVOID stackStorage606[2]; // [rsp+6B0h] [rbp-27B8h] BYREF
    __int128 opaqueValue607; // [rsp+6C0h] [rbp-27A8h]
    __int128 opaqueValue608; // [rsp+6D0h] [rbp-2798h]
    __int128 opaqueValue609; // [rsp+6E0h] [rbp-2788h]
    __int128 opaqueValue610; // [rsp+6F0h] [rbp-2778h]
    __int128 opaqueValue611; // [rsp+700h] [rbp-2768h]
    __int128 opaqueValue612; // [rsp+710h] [rbp-2758h]
    LPVOID stackStorage613[2]; // [rsp+720h] [rbp-2748h] BYREF
    __int128 opaqueValue614; // [rsp+730h] [rbp-2738h]
    __int128 opaqueValue615; // [rsp+740h] [rbp-2728h]
    __int128 opaqueValue616; // [rsp+750h] [rbp-2718h]
    __int128 opaqueValue617; // [rsp+760h] [rbp-2708h]
    __int128 opaqueValue618; // [rsp+770h] [rbp-26F8h]
    __int128 opaqueValue619; // [rsp+780h] [rbp-26E8h]
    __int128 opaqueValue620; // [rsp+790h] [rbp-26D8h]
    __int128 opaqueValue621; // [rsp+7A0h] [rbp-26C8h]
    __int128 opaqueValue622; // [rsp+7B0h] [rbp-26B8h]
    __int128 opaqueValue623; // [rsp+7C0h] [rbp-26A8h]
    __int128 opaqueValue624; // [rsp+7D0h] [rbp-2698h]
    __int128 opaqueValue625; // [rsp+7E0h] [rbp-2688h]
    __int128 opaqueValue626; // [rsp+7F0h] [rbp-2678h]
    __int128 opaqueValue627; // [rsp+800h] [rbp-2668h]
    __int128 opaqueValue628; // [rsp+810h] [rbp-2658h]
    __int128 opaqueValue629; // [rsp+820h] [rbp-2648h]
    __int128 opaqueValue630; // [rsp+830h] [rbp-2638h]
    __int128 opaqueValue631; // [rsp+840h] [rbp-2628h]
    __int128 opaqueValue632; // [rsp+850h] [rbp-2618h]
    __int128 opaqueValue633; // [rsp+860h] [rbp-2608h]
    __int128 opaqueValue634; // [rsp+870h] [rbp-25F8h]
    __int128 opaqueValue635; // [rsp+880h] [rbp-25E8h]
    __int128 opaqueValue636; // [rsp+890h] [rbp-25D8h]
    __int128 opaqueValue637; // [rsp+8A0h] [rbp-25C8h]
    __int128 opaqueValue638; // [rsp+8B0h] [rbp-25B8h]
    __int128 opaqueValue639; // [rsp+8C0h] [rbp-25A8h]
    __int128 opaqueValue640; // [rsp+8D0h] [rbp-2598h]
    __int128 opaqueValue641; // [rsp+8E0h] [rbp-2588h]
    __int128 opaqueValue642; // [rsp+8F0h] [rbp-2578h]
    unsigned int* temporaryPointer643; // [rsp+900h] [rbp-2568h] BYREF
    unsigned int* temporaryPointer644; // [rsp+908h] [rbp-2560h]
    LPVOID stackStorage645[2]; // [rsp+920h] [rbp-2548h] BYREF
    char stackStorage646[16]; // [rsp+930h] [rbp-2538h] BYREF
    char stackStorage647[16]; // [rsp+940h] [rbp-2528h] BYREF
    unsigned int opaqueValue648; // [rsp+958h] [rbp-2510h]
    unsigned int opaqueValue649; // [rsp+95Ch] [rbp-250Ch]
    std::uint64_t* temporaryPointer650; // [rsp+960h] [rbp-2508h]
    LPVOID stackStorage651[3]; // [rsp+968h] [rbp-2500h] BYREF
    LPVOID stackStorage652[4]; // [rsp+980h] [rbp-24E8h] BYREF
    std::uint8_t stackStorage653[32]; // [rsp+9A0h] [rbp-24C8h] BYREF
    char opaqueValue654; // [rsp+9C0h] [rbp-24A8h]
    std::uint8_t stackStorage655[88]; // [rsp+9C8h] [rbp-24A0h] BYREF
    std::uint8_t stackStorage656[80]; // [rsp+A20h] [rbp-2448h] BYREF
    std::uint8_t stackStorage657[80]; // [rsp+A70h] [rbp-23F8h] BYREF
    std::uint8_t stackStorage658[640]; // [rsp+AC0h] [rbp-23A8h] BYREF
    char opaqueValue659; // [rsp+D40h] [rbp-2128h]
    std::uint64_t stackStorage660[7]; // [rsp+D50h] [rbp-2118h] BYREF
    char opaqueValue661; // [rsp+D88h] [rbp-20E0h] BYREF
    std::uint64_t stackStorage662[13]; // [rsp+D90h] [rbp-20D8h] BYREF
    char opaqueValue663; // [rsp+DF8h] [rbp-2070h] BYREF
    void (**callbackFunction664) (std::uint64_t*, std::int64_t*); // [rsp+E00h] [rbp-2068h] BYREF
    std::int64_t opaqueValue665; // [rsp+E08h] [rbp-2060h] BYREF
    std::uint64_t* temporaryPointer666; // [rsp+E10h] [rbp-2058h]
    std::int64_t opaqueValue667; // [rsp+E18h] [rbp-2050h] BYREF
    std::uint64_t* temporaryPointer668; // [rsp+E20h] [rbp-2048h]
    std::int64_t opaqueValue669; // [rsp+E28h] [rbp-2040h] BYREF
    void (**callbackFunction670) (std::uint64_t*); // [rsp+E30h] [rbp-2038h]
    std::int64_t opaqueValue671; // [rsp+E38h] [rbp-2030h] BYREF
    std::int64_t opaqueValue672; // [rsp+E40h] [rbp-2028h] BYREF
    char stackStorage673[8]; // [rsp+E48h] [rbp-2020h] BYREF
    __int128 opaqueValue674; // [rsp+E50h] [rbp-2018h] BYREF
    std::int64_t opaqueValue675; // [rsp+E60h] [rbp-2008h]
    std::uint64_t opaqueValue676; // [rsp+E68h] [rbp-2000h]
    __int128 opaqueValue677; // [rsp+E70h] [rbp-1FF8h] BYREF
    std::int64_t opaqueValue678; // [rsp+E80h] [rbp-1FE8h]
    std::uint64_t opaqueValue679; // [rsp+E88h] [rbp-1FE0h]
    __int128 opaqueValue680; // [rsp+E90h] [rbp-1FD8h] BYREF
    std::int64_t opaqueValue681; // [rsp+EA0h] [rbp-1FC8h]
    std::uint64_t opaqueValue682; // [rsp+EA8h] [rbp-1FC0h]
    void (**callbackFunction683) (std::uint64_t*); // [rsp+EB0h] [rbp-1FB8h] BYREF
    std::int64_t opaqueValue684; // [rsp+EB8h] [rbp-1FB0h] BYREF
    void (**callbackFunction685) (std::uint64_t*); // [rsp+EC0h] [rbp-1FA8h] BYREF
    std::int64_t opaqueValue686; // [rsp+EC8h] [rbp-1FA0h] BYREF
    std::uint64_t* temporaryPointer687; // [rsp+ED0h] [rbp-1F98h] BYREF
    std::int64_t conditionFlag688; // [rsp+ED8h] [rbp-1F90h] BYREF
    std::uint64_t* temporaryPointer689; // [rsp+EE0h] [rbp-1F88h] BYREF
    std::int64_t opaqueValue690; // [rsp+EE8h] [rbp-1F80h] BYREF
    void (**callbackFunction691) (std::uint64_t*); // [rsp+EF0h] [rbp-1F78h] BYREF
    std::int64_t conditionFlag692; // [rsp+EF8h] [rbp-1F70h] BYREF
    std::uint64_t* temporaryPointer693; // [rsp+F00h] [rbp-1F68h] BYREF
    std::int64_t opaqueValue694; // [rsp+F08h] [rbp-1F60h] BYREF
    void (**callbackFunction695) (std::uint64_t*); // [rsp+F10h] [rbp-1F58h] BYREF
    std::int64_t opaqueValue696; // [rsp+F18h] [rbp-1F50h] BYREF
    __int128 opaqueValue697; // [rsp+F20h] [rbp-1F48h] BYREF
    std::int64_t opaqueValue698; // [rsp+F30h] [rbp-1F38h]
    std::uint64_t opaqueValue699; // [rsp+F38h] [rbp-1F30h]
    void (**callbackFunction700) (std::uint64_t*); // [rsp+F40h] [rbp-1F28h] BYREF
    void* temporaryPointer701; // [rsp+F48h] [rbp-1F20h] BYREF
    void (**callbackFunction702) (std::uint64_t*); // [rsp+F50h] [rbp-1F18h] BYREF
    std::int64_t opaqueValue703; // [rsp+F58h] [rbp-1F10h] BYREF
    void (**callbackFunction704) (std::uint64_t*); // [rsp+F60h] [rbp-1F08h] BYREF
    std::int64_t opaqueValue705; // [rsp+F68h] [rbp-1F00h] BYREF
    void (**callbackFunction706) (std::uint64_t*); // [rsp+F70h] [rbp-1EF8h] BYREF
    std::int64_t opaqueValue707; // [rsp+F78h] [rbp-1EF0h] BYREF
    std::uint64_t* temporaryPointer708; // [rsp+F80h] [rbp-1EE8h] BYREF
    std::int64_t opaqueValue709; // [rsp+F88h] [rbp-1EE0h] BYREF
    char stackStorage710[8]; // [rsp+F90h] [rbp-1ED8h] BYREF
    void* temporaryPointer711; // [rsp+F98h] [rbp-1ED0h]
    std::int64_t opaqueValue712; // [rsp+FA0h] [rbp-1EC8h]
    char stackStorage713[8]; // [rsp+FA8h] [rbp-1EC0h] BYREF
    void* temporaryPointer714; // [rsp+FB0h] [rbp-1EB8h]
    std::int64_t opaqueValue715; // [rsp+FB8h] [rbp-1EB0h]
    char stackStorage716[8]; // [rsp+FC0h] [rbp-1EA8h] BYREF
    void* temporaryPointer717; // [rsp+FC8h] [rbp-1EA0h]
    std::int64_t activation_requestedString718; // [rsp+FD0h] [rbp-1E98h] BYREF
    char stackStorage719[8]; // [rsp+FD8h] [rbp-1E90h] BYREF
    void* temporaryPointer720; // [rsp+FE0h] [rbp-1E88h]
    std::int64_t opaqueValue721; // [rsp+FE8h] [rbp-1E80h]
    char stackStorage722[8]; // [rsp+FF0h] [rbp-1E78h] BYREF
    void* temporaryPointer723; // [rsp+FF8h] [rbp-1E70h]
    std::int64_t opaqueValue724; // [rsp+1000h] [rbp-1E68h]
    char opaqueValue725; // [rsp+1008h] [rbp-1E60h] BYREF
    char stackStorage726[16]; // [rsp+1010h] [rbp-1E58h] BYREF
    char stackStorage727[8]; // [rsp+1020h] [rbp-1E48h] BYREF
    void* temporaryPointer728; // [rsp+1028h] [rbp-1E40h]
    std::int64_t opaqueValue729; // [rsp+1030h] [rbp-1E38h]
    char stackStorage730[8]; // [rsp+1038h] [rbp-1E30h] BYREF
    void* temporaryPointer731; // [rsp+1040h] [rbp-1E28h]
    std::int64_t opaqueValue732; // [rsp+1048h] [rbp-1E20h]
    char stackStorage733[8]; // [rsp+1050h] [rbp-1E18h] BYREF
    void* temporaryPointer734; // [rsp+1058h] [rbp-1E10h]
    std::int64_t opaqueValue735; // [rsp+1060h] [rbp-1E08h]
    char stackStorage736[8]; // [rsp+1068h] [rbp-1E00h] BYREF
    void* temporaryPointer737; // [rsp+1070h] [rbp-1DF8h]
    std::int64_t opaqueValue738; // [rsp+1078h] [rbp-1DF0h]
    char stackStorage739[8]; // [rsp+1080h] [rbp-1DE8h] BYREF
    void* temporaryPointer740; // [rsp+1088h] [rbp-1DE0h]
    std::int64_t authorizedString741; // [rsp+1090h] [rbp-1DD8h] BYREF
    char stackStorage742[8]; // [rsp+1098h] [rbp-1DD0h] BYREF
    void* temporaryPointer743; // [rsp+10A0h] [rbp-1DC8h]
    std::int64_t opaqueValue744; // [rsp+10A8h] [rbp-1DC0h]
    char stackStorage745[16]; // [rsp+10B0h] [rbp-1DB8h] BYREF
    char stackStorage746[8]; // [rsp+10C0h] [rbp-1DA8h] BYREF
    std::uint64_t stackStorage747[3]; // [rsp+10C8h] [rbp-1DA0h] BYREF
    char stackStorage748[16]; // [rsp+10E0h] [rbp-1D88h] BYREF
    char* temporaryPointer749; // [rsp+10F0h] [rbp-1D78h] BYREF
    int opaqueValue750; // [rsp+10F8h] [rbp-1D70h]
    std::int64_t opaqueValue751; // [rsp+1100h] [rbp-1D68h] BYREF
    char stackStorage752[8]; // [rsp+1108h] [rbp-1D60h] BYREF
    std::uint8_t stackStorage753[16]; // [rsp+1110h] [rbp-1D58h] BYREF
    void* temporaryPointer754; // [rsp+1120h] [rbp-1D48h]
    std::int64_t opaqueValue755; // [rsp+1128h] [rbp-1D40h]
    std::int64_t opaqueValue756; // [rsp+1130h] [rbp-1D38h] BYREF
    char stackStorage757[8]; // [rsp+1138h] [rbp-1D30h] BYREF
    std::int64_t opaqueValue758; // [rsp+1140h] [rbp-1D28h] BYREF
    char stackStorage759[8]; // [rsp+1148h] [rbp-1D20h] BYREF
    std::int64_t opaqueValue760; // [rsp+1150h] [rbp-1D18h] BYREF
    char stackStorage761[8]; // [rsp+1158h] [rbp-1D10h] BYREF
    std::int64_t opaqueValue762; // [rsp+1160h] [rbp-1D08h] BYREF
    char stackStorage763[8]; // [rsp+1168h] [rbp-1D00h] BYREF
    std::int64_t opaqueValue764; // [rsp+1170h] [rbp-1CF8h] BYREF
    char stackStorage765[8]; // [rsp+1178h] [rbp-1CF0h] BYREF
    std::int64_t opaqueValue766; // [rsp+1180h] [rbp-1CE8h] BYREF
    char stackStorage767[8]; // [rsp+1188h] [rbp-1CE0h] BYREF
    std::int64_t opaqueValue768; // [rsp+1190h] [rbp-1CD8h] BYREF
    char stackStorage769[8]; // [rsp+1198h] [rbp-1CD0h] BYREF
    std::int64_t opaqueValue770; // [rsp+11A0h] [rbp-1CC8h] BYREF
    char stackStorage771[8]; // [rsp+11A8h] [rbp-1CC0h] BYREF
    std::int64_t opaqueValue772; // [rsp+11B0h] [rbp-1CB8h] BYREF
    char stackStorage773[8]; // [rsp+11B8h] [rbp-1CB0h] BYREF
    char stackStorage774[8]; // [rsp+11C0h] [rbp-1CA8h] BYREF
    void* temporaryPointer775; // [rsp+11C8h] [rbp-1CA0h]
    std::int64_t handoff_writtenString776; // [rsp+11D0h] [rbp-1C98h] BYREF
    char stackStorage777[24]; // [rsp+11D8h] [rbp-1C90h] BYREF
    char stackStorage778[8]; // [rsp+11F0h] [rbp-1C78h] BYREF
    void* temporaryPointer779; // [rsp+11F8h] [rbp-1C70h]
    std::int64_t opaqueValue780; // [rsp+1200h] [rbp-1C68h]
    char stackStorage781[8]; // [rsp+1208h] [rbp-1C60h] BYREF
    void* temporaryPointer782; // [rsp+1210h] [rbp-1C58h]
    std::int64_t opaqueValue783; // [rsp+1218h] [rbp-1C50h]
    char stackStorage784[24]; // [rsp+1220h] [rbp-1C48h] BYREF
    char stackStorage785[8]; // [rsp+1238h] [rbp-1C30h] BYREF
    void* temporaryPointer786; // [rsp+1240h] [rbp-1C28h]
    std::int64_t opaqueValue787; // [rsp+1248h] [rbp-1C20h]
    char stackStorage788[8]; // [rsp+1250h] [rbp-1C18h] BYREF
    void* temporaryPointer789; // [rsp+1258h] [rbp-1C10h]
    std::int64_t opaqueValue790; // [rsp+1260h] [rbp-1C08h] BYREF
    char stackStorage791[8]; // [rsp+1268h] [rbp-1C00h] BYREF
    void* temporaryPointer792; // [rsp+1270h] [rbp-1BF8h]
    std::int64_t opaqueValue793; // [rsp+1278h] [rbp-1BF0h]
    char stackStorage794[8]; // [rsp+1280h] [rbp-1BE8h] BYREF
    void* temporaryPointer795; // [rsp+1288h] [rbp-1BE0h]
    std::int64_t opaqueValue796; // [rsp+1290h] [rbp-1BD8h]
    char stackStorage797[8]; // [rsp+1298h] [rbp-1BD0h] BYREF
    void (**callbackFunction798) (std::uint64_t*, std::int64_t*); // [rsp+12A0h] [rbp-1BC8h]
    std::int64_t opaqueValue799; // [rsp+12A8h] [rbp-1BC0h] BYREF
    char stackStorage800[24]; // [rsp+12B0h] [rbp-1BB8h] BYREF
    char opaqueValue801; // [rsp+12C8h] [rbp-1BA0h] BYREF
    char stackStorage802[24]; // [rsp+12D0h] [rbp-1B98h] BYREF
    char stackStorage803[8]; // [rsp+12E8h] [rbp-1B80h] BYREF
    void* temporaryPointer804; // [rsp+12F0h] [rbp-1B78h]
    std::int64_t conditionFlag805; // [rsp+12F8h] [rbp-1B70h]
    char stackStorage806[8]; // [rsp+1300h] [rbp-1B68h] BYREF
    void* temporaryPointer807; // [rsp+1308h] [rbp-1B60h]
    std::int64_t opaqueValue808; // [rsp+1310h] [rbp-1B58h]
    char stackStorage809[8]; // [rsp+1318h] [rbp-1B50h] BYREF
    void* temporaryPointer810; // [rsp+1320h] [rbp-1B48h]
    std::int64_t opaqueValue811; // [rsp+1328h] [rbp-1B40h]
    char stackStorage812[8]; // [rsp+1330h] [rbp-1B38h] BYREF
    void* temporaryPointer813; // [rsp+1338h] [rbp-1B30h]
    std::int64_t conditionFlag814; // [rsp+1340h] [rbp-1B28h]
    char stackStorage815[8]; // [rsp+1348h] [rbp-1B20h] BYREF
    void* temporaryPointer816; // [rsp+1350h] [rbp-1B18h]
    std::int64_t opaqueValue817; // [rsp+1358h] [rbp-1B10h]
    char stackStorage818[24]; // [rsp+1360h] [rbp-1B08h] BYREF
    char stackStorage819[8]; // [rsp+1378h] [rbp-1AF0h] BYREF
    void* temporaryPointer820; // [rsp+1380h] [rbp-1AE8h]
    std::int64_t opaqueValue821; // [rsp+1388h] [rbp-1AE0h]
    char stackStorage822[8]; // [rsp+1390h] [rbp-1AD8h] BYREF
    void* temporaryPointer823; // [rsp+1398h] [rbp-1AD0h]
    std::int64_t opaqueValue824; // [rsp+13A0h] [rbp-1AC8h]
    char opaqueValue825; // [rsp+13A8h] [rbp-1AC0h] BYREF
    std::uint8_t stackStorage826[24]; // [rsp+13B0h] [rbp-1AB8h] BYREF
    std::int64_t opaqueValue827; // [rsp+13C8h] [rbp-1AA0h] BYREF
    char stackStorage828[16]; // [rsp+13D0h] [rbp-1A98h] BYREF
    char stackStorage829[16]; // [rsp+13E0h] [rbp-1A88h] BYREF
    char stackStorage830[8]; // [rsp+13F0h] [rbp-1A78h] BYREF
    char stackStorage831[8]; // [rsp+13F8h] [rbp-1A70h] BYREF
    char stackStorage832[16]; // [rsp+1400h] [rbp-1A68h] BYREF
    char stackStorage833[8]; // [rsp+1410h] [rbp-1A58h] BYREF
    void* temporaryPointer834; // [rsp+1418h] [rbp-1A50h]
    std::int64_t auditioningString835; // [rsp+1420h] [rbp-1A48h] BYREF
    char stackStorage836[24]; // [rsp+1428h] [rbp-1A40h] BYREF
    char stackStorage837[24]; // [rsp+1440h] [rbp-1A28h] BYREF
    char opaqueValue838; // [rsp+1458h] [rbp-1A10h] BYREF
    char stackStorage839[24]; // [rsp+1460h] [rbp-1A08h] BYREF
    char stackStorage840[24]; // [rsp+1478h] [rbp-19F0h] BYREF
    char stackStorage841[8]; // [rsp+1490h] [rbp-19D8h] BYREF
    void* temporaryPointer842; // [rsp+1498h] [rbp-19D0h]
    double scalarValue843; // [rsp+14A0h] [rbp-19C8h]
    char stackStorage844[8]; // [rsp+14A8h] [rbp-19C0h] BYREF
    void* temporaryPointer845; // [rsp+14B0h] [rbp-19B8h]
    double scalarValue846; // [rsp+14B8h] [rbp-19B0h]
    char stackStorage847[8]; // [rsp+14C0h] [rbp-19A8h] BYREF
    char stackStorage848[16]; // [rsp+14C8h] [rbp-19A0h] BYREF
    char opaqueValue849; // [rsp+14D8h] [rbp-1990h] BYREF
    std::uint64_t stackStorage850[4]; // [rsp+14E0h] [rbp-1988h] BYREF
    std::uint8_t stackStorage851[16]; // [rsp+1500h] [rbp-1968h] BYREF
    char stackStorage852[16]; // [rsp+1510h] [rbp-1958h] BYREF
    char stackStorage853[8]; // [rsp+1520h] [rbp-1948h] BYREF
    char stackStorage854[16]; // [rsp+1528h] [rbp-1940h] BYREF
    char stackStorage855[24]; // [rsp+1538h] [rbp-1930h] BYREF
    char stackStorage856[8]; // [rsp+1550h] [rbp-1918h] BYREF
    void* temporaryPointer857; // [rsp+1558h] [rbp-1910h]
    std::int64_t opaqueValue858; // [rsp+1560h] [rbp-1908h]
    char stackStorage859[24]; // [rsp+1568h] [rbp-1900h] BYREF
    char stackStorage860[8]; // [rsp+1580h] [rbp-18E8h] BYREF
    void* temporaryPointer861; // [rsp+1588h] [rbp-18E0h]
    std::int64_t opaqueValue862; // [rsp+1590h] [rbp-18D8h]
    char stackStorage863[24]; // [rsp+1598h] [rbp-18D0h] BYREF
    char stackStorage864[8]; // [rsp+15B0h] [rbp-18B8h] BYREF
    void* temporaryPointer865; // [rsp+15B8h] [rbp-18B0h]
    std::int64_t opaqueValue866; // [rsp+15C0h] [rbp-18A8h]
    char stackStorage867[24]; // [rsp+15C8h] [rbp-18A0h] BYREF
    char stackStorage868[24]; // [rsp+15E0h] [rbp-1888h] BYREF
    char stackStorage869[8]; // [rsp+15F8h] [rbp-1870h] BYREF
    void* temporaryPointer870; // [rsp+1600h] [rbp-1868h]
    std::int64_t opaqueValue871; // [rsp+1608h] [rbp-1860h]
    char stackStorage872[24]; // [rsp+1610h] [rbp-1858h] BYREF
    char stackStorage873[24]; // [rsp+1628h] [rbp-1840h] BYREF
    char stackStorage874[24]; // [rsp+1640h] [rbp-1828h] BYREF
    char stackStorage875[24]; // [rsp+1658h] [rbp-1810h] BYREF
    char stackStorage876[8]; // [rsp+1670h] [rbp-17F8h] BYREF
    void* temporaryPointer877; // [rsp+1678h] [rbp-17F0h]
    std::int64_t opaqueValue878; // [rsp+1680h] [rbp-17E8h]
    char stackStorage879[24]; // [rsp+1688h] [rbp-17E0h] BYREF
    char stackStorage880[8]; // [rsp+16A0h] [rbp-17C8h] BYREF
    void* temporaryPointer881; // [rsp+16A8h] [rbp-17C0h]
    std::int64_t opaqueValue882; // [rsp+16B0h] [rbp-17B8h]
    char stackStorage883[24]; // [rsp+16B8h] [rbp-17B0h] BYREF
    char stackStorage884[24]; // [rsp+16D0h] [rbp-1798h] BYREF
    char stackStorage885[24]; // [rsp+16E8h] [rbp-1780h] BYREF
    char stackStorage886[24]; // [rsp+1700h] [rbp-1768h] BYREF
    char stackStorage887[8]; // [rsp+1718h] [rbp-1750h] BYREF
    void* temporaryPointer888; // [rsp+1720h] [rbp-1748h]
    std::int64_t opaqueValue889; // [rsp+1728h] [rbp-1740h]
    char stackStorage890[8]; // [rsp+1730h] [rbp-1738h] BYREF
    void* temporaryPointer891; // [rsp+1738h] [rbp-1730h]
    std::int64_t opaqueValue892; // [rsp+1740h] [rbp-1728h]
    char stackStorage893[24]; // [rsp+1748h] [rbp-1720h] BYREF
    char stackStorage894[24]; // [rsp+1760h] [rbp-1708h] BYREF
    char stackStorage895[8]; // [rsp+1778h] [rbp-16F0h] BYREF
    char stackStorage896[16]; // [rsp+1780h] [rbp-16E8h] BYREF
    char stackStorage897[24]; // [rsp+1790h] [rbp-16D8h] BYREF
    char stackStorage898[24]; // [rsp+17A8h] [rbp-16C0h] BYREF
    char stackStorage899[8]; // [rsp+17C0h] [rbp-16A8h] BYREF
    void* temporaryPointer900; // [rsp+17C8h] [rbp-16A0h]
    std::int64_t opaqueValue901; // [rsp+17D0h] [rbp-1698h]
    char opaqueValue902; // [rsp+17D8h] [rbp-1690h] BYREF
    char stackStorage903[24]; // [rsp+17E0h] [rbp-1688h] BYREF
    char stackStorage904[24]; // [rsp+17F8h] [rbp-1670h] BYREF
    char stackStorage905[8]; // [rsp+1810h] [rbp-1658h] BYREF
    char stackStorage906[16]; // [rsp+1818h] [rbp-1650h] BYREF
    char opaqueValue907; // [rsp+1828h] [rbp-1640h] BYREF
    char stackStorage908[8]; // [rsp+1830h] [rbp-1638h] BYREF
    char stackStorage909[16]; // [rsp+1838h] [rbp-1630h] BYREF
    char stackStorage910[24]; // [rsp+1848h] [rbp-1620h] BYREF
    char stackStorage911[24]; // [rsp+1860h] [rbp-1608h] BYREF
    char opaqueValue912; // [rsp+1878h] [rbp-15F0h] BYREF
    char stackStorage913[24]; // [rsp+1880h] [rbp-15E8h] BYREF
    char stackStorage914[24]; // [rsp+1898h] [rbp-15D0h] BYREF
    char stackStorage915[8]; // [rsp+18B0h] [rbp-15B8h] BYREF
    void* temporaryPointer916; // [rsp+18B8h] [rbp-15B0h]
    double scalarValue917; // [rsp+18C0h] [rbp-15A8h]
    char stackStorage918[24]; // [rsp+18C8h] [rbp-15A0h] BYREF
    char stackStorage919[24]; // [rsp+18E0h] [rbp-1588h] BYREF
    char opaqueValue920; // [rsp+18F8h] [rbp-1570h] BYREF
    char stackStorage921[24]; // [rsp+1900h] [rbp-1568h] BYREF
    char stackStorage922[24]; // [rsp+1918h] [rbp-1550h] BYREF
    char stackStorage923[24]; // [rsp+1930h] [rbp-1538h] BYREF
    char opaqueValue924; // [rsp+1948h] [rbp-1520h] BYREF
    char stackStorage925[24]; // [rsp+1950h] [rbp-1518h] BYREF
    char stackStorage926[24]; // [rsp+1968h] [rbp-1500h] BYREF
    char stackStorage927[24]; // [rsp+1980h] [rbp-14E8h] BYREF
    char opaqueValue928; // [rsp+1998h] [rbp-14D0h] BYREF
    char stackStorage929[8]; // [rsp+19A0h] [rbp-14C8h] BYREF
    char stackStorage930[16]; // [rsp+19A8h] [rbp-14C0h] BYREF
    char stackStorage931[24]; // [rsp+19B8h] [rbp-14B0h] BYREF
    char stackStorage932[24]; // [rsp+19D0h] [rbp-1498h] BYREF
    char stackStorage933[24]; // [rsp+19E8h] [rbp-1480h] BYREF
    char stackStorage934[8]; // [rsp+1A00h] [rbp-1468h] BYREF
    char stackStorage935[16]; // [rsp+1A08h] [rbp-1460h] BYREF
    char stackStorage936[24]; // [rsp+1A18h] [rbp-1450h] BYREF
    char stackStorage937[24]; // [rsp+1A30h] [rbp-1438h] BYREF
    char stackStorage938[24]; // [rsp+1A48h] [rbp-1420h] BYREF
    char stackStorage939[24]; // [rsp+1A60h] [rbp-1408h] BYREF
    char opaqueValue940; // [rsp+1A78h] [rbp-13F0h] BYREF
    char stackStorage941[24]; // [rsp+1A80h] [rbp-13E8h] BYREF
    char stackStorage942[24]; // [rsp+1A98h] [rbp-13D0h] BYREF
    char stackStorage943[24]; // [rsp+1AB0h] [rbp-13B8h] BYREF
    char stackStorage944[24]; // [rsp+1AC8h] [rbp-13A0h] BYREF
    char stackStorage945[24]; // [rsp+1AE0h] [rbp-1388h] BYREF
    char stackStorage946[24]; // [rsp+1AF8h] [rbp-1370h] BYREF
    char stackStorage947[24]; // [rsp+1B10h] [rbp-1358h] BYREF
    char stackStorage948[24]; // [rsp+1B28h] [rbp-1340h] BYREF
    char stackStorage949[24]; // [rsp+1B40h] [rbp-1328h] BYREF
    char opaqueValue950; // [rsp+1B58h] [rbp-1310h] BYREF
    std::uint8_t stackStorage951[32]; // [rsp+1B60h] [rbp-1308h] BYREF
    char stackStorage952[24]; // [rsp+1B80h] [rbp-12E8h] BYREF
    char stackStorage953[24]; // [rsp+1B98h] [rbp-12D0h] BYREF
    char stackStorage954[24]; // [rsp+1BB0h] [rbp-12B8h] BYREF
    char stackStorage955[24]; // [rsp+1BC8h] [rbp-12A0h] BYREF
    char stackStorage956[24]; // [rsp+1BE0h] [rbp-1288h] BYREF
    char stackStorage957[24]; // [rsp+1BF8h] [rbp-1270h] BYREF
    char stackStorage958[24]; // [rsp+1C10h] [rbp-1258h] BYREF
    char stackStorage959[24]; // [rsp+1C28h] [rbp-1240h] BYREF
    char stackStorage960[24]; // [rsp+1C40h] [rbp-1228h] BYREF
    char stackStorage961[24]; // [rsp+1C58h] [rbp-1210h] BYREF
    char stackStorage962[24]; // [rsp+1C70h] [rbp-11F8h] BYREF
    char stackStorage963[24]; // [rsp+1C88h] [rbp-11E0h] BYREF
    std::uint8_t stackStorage964[32]; // [rsp+1CA0h] [rbp-11C8h] BYREF
    std::uint8_t stackStorage965[32]; // [rsp+1CC0h] [rbp-11A8h] BYREF
    std::uint8_t stackStorage966[32]; // [rsp+1CE0h] [rbp-1188h] BYREF
    char stackStorage967[24]; // [rsp+1D00h] [rbp-1168h] BYREF
    char stackStorage968[24]; // [rsp+1D18h] [rbp-1150h] BYREF
    char stackStorage969[24]; // [rsp+1D30h] [rbp-1138h] BYREF
    char stackStorage970[24]; // [rsp+1D48h] [rbp-1120h] BYREF
    char stackStorage971[24]; // [rsp+1D60h] [rbp-1108h] BYREF
    char stackStorage972[24]; // [rsp+1D78h] [rbp-10F0h] BYREF
    char stackStorage973[24]; // [rsp+1D90h] [rbp-10D8h] BYREF
    char opaqueValue974; // [rsp+1DA8h] [rbp-10C0h] BYREF
    char stackStorage975[24]; // [rsp+1DB0h] [rbp-10B8h] BYREF
    char stackStorage976[24]; // [rsp+1DC8h] [rbp-10A0h] BYREF
    char stackStorage977[24]; // [rsp+1DE0h] [rbp-1088h] BYREF
    char stackStorage978[24]; // [rsp+1DF8h] [rbp-1070h] BYREF
    char stackStorage979[24]; // [rsp+1E10h] [rbp-1058h] BYREF
    char stackStorage980[24]; // [rsp+1E28h] [rbp-1040h] BYREF
    char stackStorage981[24]; // [rsp+1E40h] [rbp-1028h] BYREF
    char stackStorage982[24]; // [rsp+1E58h] [rbp-1010h] BYREF
    char stackStorage983[8]; // [rsp+1E70h] [rbp-FF8h] BYREF
    std::uint8_t* temporaryPointer984; // [rsp+1E78h] [rbp-FF0h] BYREF
    std::int64_t stackStorage985[31]; // [rsp+1EB8h] [rbp-FB0h] BYREF
    char stackStorage986[32]; // [rsp+1FB0h] [rbp-EB8h] BYREF
    char stackStorage987[32]; // [rsp+1FD0h] [rbp-E98h] BYREF
    char stackStorage988[32]; // [rsp+1FF0h] [rbp-E78h] BYREF
    char stackStorage989[32]; // [rsp+2010h] [rbp-E58h] BYREF
    char stackStorage990[144]; // [rsp+2030h] [rbp-E38h] BYREF
    float stackStorage991[56]; // [rsp+20C0h] [rbp-DA8h] BYREF
    char stackStorage992[72]; // [rsp+21A0h] [rbp-CC8h] BYREF
    char stackStorage993[56]; // [rsp+21E8h] [rbp-C80h] BYREF
    char stackStorage994[56]; // [rsp+2220h] [rbp-C48h] BYREF
    char stackStorage995[136]; // [rsp+2258h] [rbp-C10h] BYREF
    std::uint8_t stackStorage996[4]; // [rsp+22E0h] [rbp-B88h] BYREF
    unsigned int opaqueValue997; // [rsp+22E4h] [rbp-B84h]
    std::uint64_t stackStorage998[75]; // [rsp+2308h] [rbp-B60h] BYREF
    char stackStorage999[72]; // [rsp+2560h] [rbp-908h] BYREF
    char stackStorage1000[112]; // [rsp+25A8h] [rbp-8C0h] BYREF
    char stackStorage1001[136]; // [rsp+2618h] [rbp-850h] BYREF
    std::uint8_t stackStorage1002[64]; // [rsp+26A0h] [rbp-7C8h] BYREF
    std::int64_t opaqueValue1003; // [rsp+26E0h] [rbp-788h]
    int opaqueValue1004; // [rsp+26ECh] [rbp-77Ch]
    std::uint8_t stackStorage1005[640]; // [rsp+2A20h] [rbp-448h] BYREF
    std::uint64_t stackStorage1006[42]; // [rsp+2CA0h] [rbp-1C8h] BYREF
    std::int64_t opaqueValue1007; // [rsp+2DF0h] [rbp-78h] BYREF

    temporaryPointer4 = commandName;
    *(std::uint64_t*)&opaqueValue460 = commandName;
    temporaryPointer5 = request;
    reusableString438 = request;
    opaqueValue437 = outputResponse;
    temporaryPointer443 = (unsigned int*)cliHost;
    temporaryPointer650 = outputResponse;
    opaqueValue7 = 0;
    opaqueValue8 = 0;
    LODWORD (nextString441) = 0;
    opaqueValue433 = 0;
    if (*(std::uint64_t*)(cliHost + 96) != 0)
    {
        stackStorage662[0] = "version";
        stackStorage662[1] = "params.list";
        stackStorage662[2] = "params.describe";
        stackStorage662[3] = "params.get";
        stackStorage662[4] = "state.inspect";
        stackStorage662[5] = "state.document";
        stackStorage662[6] = "patch.propose";
        stackStorage662[7] = "patch.diff";
        stackStorage662[8] = "preview.begin";
        stackStorage662[9] = "preview.compare";
        stackStorage662[10] = "preview.keep";
        stackStorage662[11] = "preview.discard";
        stackStorage662[12] = "state.undo";
        opaqueValue454 = nullptr;
        opaqueValue455 = 0;
        sub_180086F40 (&opaqueValue454, 24);
        temporaryPointer9 = (char*)stackStorage662;
        do
        {
            opaqueValue10 = SHIDWORD (opaqueValue455);
            ++HIDWORD (opaqueValue455);
            juceStringConstructFromUtf8 ((char*)opaqueValue454 + 8 * opaqueValue10, *(std::uint64_t*)temporaryPointer9);
            temporaryPointer9 += 8;
        } while (temporaryPointer9 != &opaqueValue663);
        opaqueValue11 = 0;
        opaqueValue12 = 0;
        if (SHIDWORD (opaqueValue455) <= 0)
            goto label595;
        while (1)
        {
            temporaryPointer13 = (std::uint8_t*)*temporaryPointer5;
            do
            {
                opaqueValue14 = temporaryPointer13[*((std::uint64_t*)opaqueValue454 + opaqueValue12) - *temporaryPointer5];
                opaqueValue15 = *temporaryPointer13 - opaqueValue14;
                if (opaqueValue15 != 0)
                    break;
                ++temporaryPointer13;
            } while (opaqueValue14 != 0);
            if (opaqueValue15 == 0)
                break;
            ++opaqueValue11;
            if (++opaqueValue12 >= SHIDWORD (opaqueValue455))
                goto label595;
        }
        if (opaqueValue11 < 0)
        {
        label595:
            opaqueValue388 = sub_1800971D0 (stackStorage511, "DAW_OPERATION_UNAVAILABLE");
            sub_1807FBD40 (opaqueValue388, 4);
        }
        opaqueValue16 = sub_18009EA20 (temporaryPointer13);
        *(std::uint64_t*)&urlString436 = opaqueValue16 + 16;
        EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue16 + 16));
        sub_18009E8C0 (opaqueValue16);
        temporaryPointer508 = "preset";
        sub_1800B4BF0 (&opaqueValue456, opaqueValue16, &temporaryPointer508);
        opaqueValue8 = 0x8000000;
        LODWORD (nextString441) = 0x8000000;
        opaqueValue433 = 0x8000000;
        LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue16 + 16));
        temporaryPointer4 = (const char*)opaqueValue460;
        opaqueValue17 = (*(std::int64_t (**) (std::int64_t)) (*(std::uint64_t*)opaqueValue460 + 56LL)) (opaqueValue460 + 8);
        opaqueValue18 = cppRttiDynamicCast (
            opaqueValue17,
            0,
            (unsigned int)&juce::ReferenceCountedObject `RTTI Type Descriptor',
            (unsigned int)&juce::DynamicObject `RTTI Type Descriptor',
            0);
        if (opaqueValue18 != 0)
        {
            temporaryPointer19 = *(std::uint64_t**)(opaqueValue18 + 16);
            temporaryPointer20 = &temporaryPointer19[3 * *(int*)(opaqueValue18 + 28)];
            opaqueValue21 = opaqueValue456;
            if (temporaryPointer19 == temporaryPointer20)
                goto label16;
            while (*temporaryPointer19 != opaqueValue456)
            {
                temporaryPointer19 += 3;
                if (temporaryPointer19 == temporaryPointer20)
                    goto label16;
            }
            if (temporaryPointer19 == (std::uint64_t*)-8LL || *(std::uint8_t*)(temporaryPointer19[1] + 10LL) != 0)
            label16:
                opaqueValue22 = 0;
            else
                opaqueValue22 = 1;
            if (opaqueValue22 != 0)
            {
                opaqueValue389 = sub_1800971D0 (stackStorage509, "DAW_OPERATION_UNAVAILABLE");
                sub_1807FBD40 (opaqueValue389, 4);
            }
        }
        else
        {
            opaqueValue21 = opaqueValue456;
        }
        stringStorageToRelease23 = (void*)(opaqueValue21 - 16);
        if ((void*)(opaqueValue21 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease23) == -1)
            memoryFree (stringStorageToRelease23);
        temporaryPointer5 = reusableString438;
        if ((std::uint8_t)juceStringStartsWithUtf8 (reusableString438, "preview.") != 0 && (unsigned int)utf8CompareStrings (*reusableString438, "preview.begin") != 0 && *(std::uint8_t*)(cliHost + 120) == 0)
        {
            opaqueValue390 = sub_1800971D0 (stackStorage510, "PREVIEW_OWNED");
            sub_1807FBD40 (opaqueValue390, 5);
        }
        sub_180024DB0 (&opaqueValue454);
        memoryFreeBuffer (opaqueValue454);
    }
    if ((unsigned int)utf8CompareStrings (*temporaryPointer5, "auth.login") != 0 && (unsigned int)utf8CompareStrings (*temporaryPointer5, "auth.handoff") != 0 && (unsigned int)utf8CompareStrings (*temporaryPointer5, "auth.logout") != 0)
    {
        if ((unsigned int)utf8CompareStrings (*temporaryPointer5, "audio.devices") == 0)
        {
            *(_OWORD*)stackStorage434 = 0;
            sub_1807FC060 (temporaryPointer4, stackStorage434);
            sub_180770E90 (stackStorage1002);
            opaqueValue446 = nullptr;
            opaqueValue447 = 0;
            sub_1807743F0 (stackStorage1002);
            temporaryPointer25 = (std::uint64_t**)opaqueValue1003;
            stackStorage435[0] = opaqueValue1003;
            reusableString438 = (std::uint64_t*)(opaqueValue1003 + 8LL * opaqueValue1004);
            if ((std::uint64_t*)opaqueValue1003 != reusableString438)
            {
                do
                {
                    temporaryPointer26 = *temporaryPointer25;
                    opaqueValue440 = (std::int64_t)temporaryPointer26;
                    opaqueValue452 = nullptr;
                    opaqueValue453 = 0;
                    (*(void (**) (std::uint64_t*, LPVOID*, std::uint64_t)) (*temporaryPointer26 + 8LL)) (temporaryPointer26, &opaqueValue505, 0);
                    temporaryPointer27 = (char*)opaqueValue505;
                    temporaryPointer28 = (char*)opaqueValue505 + 8 * opaqueValue506;
                    if (opaqueValue505 != temporaryPointer28)
                    {
                        do
                        {
                            callbackFunction670 = (void (**) (std::uint64_t*))&unk_180F512B0;
                            opaqueValue671 = 0;
                            opaqueValue671 = *(std::uint64_t*)temporaryPointer27;
                            if ((void*)(opaqueValue671 - 16) != &emptyJuceStringStorage)
                                _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue671 - 16));
                            opaqueValue29 = HIDWORD (opaqueValue453);
                            if (HIDWORD (opaqueValue453) + 1 > (int)opaqueValue453)
                            {
                                sub_180088160 (&opaqueValue452, ((HIDWORD (opaqueValue453) + 1) / 2 + HIDWORD (opaqueValue453) + 9) & 0xFFFFFFF8);
                                opaqueValue29 = HIDWORD (opaqueValue453);
                            }
                            HIDWORD (opaqueValue453) = opaqueValue29 + 1;
                            opaqueValue30 = 2LL * opaqueValue29;
                            temporaryPointer31 = opaqueValue452;
                            callbackFunction32 = callbackFunction670;
                            callbackFunction670 = (void (**) (std::uint64_t*))&unk_180F51130;
                            *((std::uint64_t*)opaqueValue452 + opaqueValue30) = callbackFunction32;
                            opaqueValue33 = opaqueValue671;
                            opaqueValue671 = 0;
                            temporaryPointer31[opaqueValue30 + 1] = opaqueValue33;
                            callbackFunction670[11](&opaqueValue671);
                            temporaryPointer27 += 8;
                        } while (temporaryPointer27 != temporaryPointer28);
                        temporaryPointer25 = (std::uint64_t**)stackStorage435[0];
                        temporaryPointer26 = (std::uint64_t*)opaqueValue440;
                    }
                    sub_180024DB0 (&opaqueValue505);
                    memoryFreeBuffer (opaqueValue505);
                    opaqueValue35 = sub_18009EA20 (opaqueValue34);
                    *(std::uint64_t*)&urlString436 = opaqueValue35 + 16;
                    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue35 + 16));
                    sub_18009E8C0 (opaqueValue35);
                    temporaryPointer512 = "type";
                    sub_1800B4BF0 (stackStorage710, opaqueValue35, &temporaryPointer512);
                    opaqueValue36 = opaqueValue8 | 0x2000000;
                    opaqueValue433 = opaqueValue36;
                    LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue35 + 16));
                    temporaryPointer711 = &unk_180F512B0;
                    opaqueValue712 = 0;
                    opaqueValue712 = temporaryPointer26[1];
                    if ((void*)(opaqueValue712 - 16) != &emptyJuceStringStorage)
                        _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue712 - 16));
                    opaqueValue38 = sub_18009EA20 (opaqueValue37);
                    *(std::uint64_t*)&urlString436 = opaqueValue38 + 16;
                    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue38 + 16));
                    sub_18009E8C0 (opaqueValue38);
                    temporaryPointer513 = "outputs";
                    sub_1800B4BF0 (stackStorage713, opaqueValue38, &temporaryPointer513);
                    opaqueValue39 = opaqueValue36 | 0x4000000;
                    opaqueValue433 = opaqueValue39;
                    LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue38 + 16));
                    temporaryPointer714 = &unk_180F511B0;
                    opaqueValue715 = 0;
                    allocatedObject40 = memoryAllocateObject (32);
                    temporaryPointer443 = (unsigned int*)allocatedObject40;
                    *(std::uint32_t*)(allocatedObject40 + 8) = 0;
                    *(std::uint64_t*)allocatedObject40 = &juce::var::VariantType::RefCountedArray::`vftable';
                    sub_1800B60D0 (allocatedObject40 + 16, &opaqueValue452);
                    _InterlockedIncrement ((volatile std::int32_t*)(allocatedObject40 + 8));
                    opaqueValue715 = allocatedObject40;
                    allocatedObject41 = memoryAllocateObject (32);
                    *(std::uint64_t*)&urlString436 = allocatedObject41;
                    *(std::uint32_t*)(allocatedObject41 + 8) = 0;
                    *(std::uint64_t*)allocatedObject41 = &juce::DynamicObject::`vftable';
                    *(std::uint64_t*)(allocatedObject41 + 16) = 0;
                    *(std::uint64_t*)(allocatedObject41 + 24) = 0;
                    temporaryPointer42 = stackStorage710;
                    do
                    {
                        sub_1800A6D50 (allocatedObject41, temporaryPointer42, temporaryPointer42 + 8);
                        temporaryPointer42 += 24;
                    } while (temporaryPointer42 != stackStorage716);
                    temporaryPointer668 = &unk_180F513D0;
                    opaqueValue669 = allocatedObject41;
                    _InterlockedIncrement ((volatile std::int32_t*)(allocatedObject41 + 8));
                    opaqueValue8 = opaqueValue39 | 0x1000000;
                    opaqueValue433 = opaqueValue8;
                    opaqueValue43 = HIDWORD (opaqueValue447);
                    if (HIDWORD (opaqueValue447) + 1 > (int)opaqueValue447)
                    {
                        sub_180088160 (&opaqueValue446, ((HIDWORD (opaqueValue447) + 1) / 2 + HIDWORD (opaqueValue447) + 9) & 0xFFFFFFF8);
                        opaqueValue43 = HIDWORD (opaqueValue447);
                    }
                    HIDWORD (opaqueValue447) = opaqueValue43 + 1;
                    opaqueValue44 = 2LL * opaqueValue43;
                    temporaryPointer45 = opaqueValue446;
                    temporaryPointer46 = temporaryPointer668;
                    temporaryPointer668 = &unk_180F51130;
                    *((std::uint64_t*)opaqueValue446 + opaqueValue44) = temporaryPointer46;
                    opaqueValue47 = opaqueValue669;
                    opaqueValue669 = 0;
                    temporaryPointer45[opaqueValue44 + 1] = opaqueValue47;
                    callbackFunction48 = (void (*) (std::int64_t*))temporaryPointer668[11];
                    if ((char*)callbackFunction48 == (char*)sub_18000B9A0)
                    {
                        if (opaqueValue669 != 0)
                            sub_180089340();
                    }
                    else
                    {
                        callbackFunction48 (&opaqueValue669);
                    }
                    sub_1809A12FC (stackStorage710, 24, 2, sub_180211140);
                    sub_1800815D0 (&opaqueValue452);
                    memoryFreeBuffer (opaqueValue452);
                    stackStorage435[0] = (std::int64_t)++temporaryPointer25;
                } while (temporaryPointer25 != reusableString438);
            }
            opaqueValue49 = sub_18009EA20 (opaqueValue24);
            *(std::uint64_t*)&urlString436 = opaqueValue49 + 16;
            EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue49 + 16));
            sub_18009E8C0 (opaqueValue49);
            temporaryPointer514 = "devices";
            sub_1800B4BF0 (stackStorage727, opaqueValue49, &temporaryPointer514);
            LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue49 + 16));
            temporaryPointer728 = &unk_180F511B0;
            opaqueValue729 = 0;
            allocatedObject50 = memoryAllocateObject (32);
            *(std::uint64_t*)&urlString436 = allocatedObject50;
            *(std::uint32_t*)(allocatedObject50 + 8) = 0;
            *(std::uint64_t*)allocatedObject50 = &juce::var::VariantType::RefCountedArray::`vftable';
            sub_1800B60D0 (allocatedObject50 + 16, &opaqueValue446);
            _InterlockedIncrement ((volatile std::int32_t*)(allocatedObject50 + 8));
            opaqueValue729 = allocatedObject50;
            opaqueValue52 = sub_18009EA20 (opaqueValue51);
            *(std::uint64_t*)&urlString436 = opaqueValue52 + 16;
            EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue52 + 16));
            sub_18009E8C0 (opaqueValue52);
            temporaryPointer515 = "audioDeviceOpened";
            sub_1800B4BF0 (stackStorage730, opaqueValue52, &temporaryPointer515);
            LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue52 + 16));
            temporaryPointer731 = &unk_180F51230;
            opaqueValue732 = 0;
            opaqueValue54 = sub_18009EA20 (opaqueValue53);
            *(std::uint64_t*)&urlString436 = opaqueValue54 + 16;
            EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue54 + 16));
            sub_18009E8C0 (opaqueValue54);
            temporaryPointer516 = "inputDeviceOpened";
            sub_1800B4BF0 (stackStorage733, opaqueValue54, &temporaryPointer516);
            LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue54 + 16));
            temporaryPointer734 = &unk_180F51230;
            opaqueValue735 = 0;
            opaqueValue56 = sub_18009EA20 (opaqueValue55);
            *(std::uint64_t*)&urlString436 = opaqueValue56 + 16;
            EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue56 + 16));
            sub_18009E8C0 (opaqueValue56);
            temporaryPointer517 = "observed";
            sub_1800B4BF0 (stackStorage736, opaqueValue56, &temporaryPointer517);
            LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue56 + 16));
            temporaryPointer737 = &unk_180F51230;
            opaqueValue738 = 1;
            *(std::uint64_t*)&opaqueValue621 = stackStorage727;
            *((std::uint64_t*)&opaqueValue621 + 1) = stackStorage739;
            *(_OWORD*)stackStorage434 = opaqueValue621;
            sub_1803A3470 (opaqueValue437, stackStorage434);
            opaqueValue433 = opaqueValue8 | 0xF0000001;
            sub_1809A12FC (stackStorage727, 24, 4, sub_180211140);
            sub_1800815D0 (&opaqueValue446);
            memoryFreeBuffer (opaqueValue446);
            sub_180771260 (stackStorage1002);
            return opaqueValue437;
        }
        if ((unsigned int)utf8CompareStrings (*temporaryPointer5, "midi.inspect") == 0)
        {
            stackStorage594[0] = "file";
            stackStorage594[1] = "sampleRate";
            *(std::uint64_t*)&opaqueValue622 = stackStorage594;
            *((std::uint64_t*)&opaqueValue622 + 1) = stackStorage595;
            *(_OWORD*)stackStorage434 = opaqueValue622;
            sub_1807FC060 (temporaryPointer4, stackStorage434);
            scalarValue58 = sub_1807FC4B0 (temporaryPointer4, "sampleRate");
            opaqueValue440 = *(std::uint64_t*)&scalarValue58;
            if (scalarValue58 != 44100.0 && scalarValue58 != 48000.0 && scalarValue58 != 96000.0)
            {
                opaqueValue391 = sub_1800971D0 (stackStorage520, "UNSUPPORTED_SAMPLE_RATE");
                sub_1807FBD40 (opaqueValue391, 4);
            }
            opaqueValue59 = sub_1807FBDD0 (&opaqueValue518, temporaryPointer4, "file", 0);
            sub_1807FFCB0 (cliHost, stackStorage504, opaqueValue59, 0x800000);
            stringStorageToRelease61 = (void*)(opaqueValue518 - 16);
            if ((void*)(opaqueValue518 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease61) == -1)
                memoryFree (stringStorageToRelease61);
            sub_18081FD50 ((std::uint32_t)stringStorageToRelease61, (unsigned int)stackStorage646, (unsigned int)stackStorage504, opaqueValue60, 0);
            memset (stackStorage850, 0, sizeof (stackStorage850));
            sub_180471180 (stackStorage850, stackStorage504[0], stackStorage504[1]);
            sub_18009B4C0 (&opaqueValue494, stackStorage850, 32);
            sub_180338600 (stackStorage886, "midiHash", &opaqueValue494);
            sub_180096D60 (stackStorage887, "midiType");
            temporaryPointer888 = &unk_180F51450;
            opaqueValue889 = opaqueValue648;
            sub_180096D60 (stackStorage890, "ppq");
            temporaryPointer891 = &unk_180F51450;
            opaqueValue892 = opaqueValue649;
            scalarValue62 = sub_1809DF080();
            opaqueValue63 = sub_180097C20 (&opaqueValue519, (unsigned int)(int)scalarValue62);
            sub_180338600 (stackStorage893, "midiFrames", opaqueValue63);
            sub_1808259C0 (stackStorage894, opaqueValue64, &opaqueValue440);
            sub_180096D60 (stackStorage895, "timeline");
            sub_1800A34F0 (stackStorage896, stackStorage647);
            opaqueValue440 = 0x405E000000000000LL;
            sub_180825A50 (stackStorage897, opaqueValue65, &opaqueValue440);
            sub_180825AE0 (stackStorage898);
            sub_180096D60 (stackStorage899, "audioDeviceOpened");
            temporaryPointer900 = &unk_180F51230;
            opaqueValue901 = 0;
            *(std::uint64_t*)&opaqueValue623 = stackStorage886;
            *((std::uint64_t*)&opaqueValue623 + 1) = &opaqueValue902;
            *(_OWORD*)stackStorage434 = opaqueValue623;
            opaqueValue66 = opaqueValue437;
            sub_1803A3470 (opaqueValue437, stackStorage434);
            opaqueValue433 = opaqueValue8 | 1;
            sub_1809A12FC (stackStorage886, 24, 9, sub_180211140);
            stringStorageToRelease67 = (void*)(opaqueValue519 - 16);
            if ((void*)(opaqueValue519 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease67) == -1)
                memoryFree (stringStorageToRelease67);
            stringStorageToRelease68 = (void*)(opaqueValue494 - 16);
            if ((void*)(opaqueValue494 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease68) == -1)
                memoryFree (stringStorageToRelease68);
            sub_180825010 (stackStorage646);
            temporaryPointer69 = (void*)stackStorage504[0];
            goto label123;
        }
        if ((std::uint8_t)juceStringStartsWithUtf8 (temporaryPointer5, "artifact.") != 0)
        {
            sub_18080A230 (cliHost, opaqueValue437, temporaryPointer5, temporaryPointer4);
            return opaqueValue437;
        }
        if ((std::uint8_t)juceStringStartsWithUtf8 (temporaryPointer5, "alt.") != 0)
        {
            sub_18081CA10 (cliHost, opaqueValue437, temporaryPointer5, temporaryPointer4);
            return opaqueValue437;
        }
        if ((unsigned int)utf8CompareStrings (*temporaryPointer5, "audio.enable") == 0 || (unsigned int)utf8CompareStrings (*temporaryPointer5, "audio.stop") == 0 || (unsigned int)utf8CompareStrings (*temporaryPointer5, "audio.status") == 0)
        {
            *(_OWORD*)stackStorage434 = 0;
            sub_1807FC060 (temporaryPointer4, stackStorage434);
            if ((unsigned int)utf8CompareStrings (*temporaryPointer5, "audio.stop") == 0)
            {
                opaqueValue323 = *(std::uint64_t*)(cliHost + 136);
                if (opaqueValue323 != 0)
                    standaloneAudioCloseDevice (opaqueValue323);
                *(std::uint8_t*)cliHost = 0;
                sub_180825500 (stackStorage784, opaqueValue322, "stopped");
                sub_180096D60 (stackStorage785, "audioDeviceOpened");
                temporaryPointer786 = &unk_180F51230;
                opaqueValue787 = 0;
                *(std::uint64_t*)&opaqueValue637 = stackStorage784;
                *((std::uint64_t*)&opaqueValue637 + 1) = stackStorage788;
                *(_OWORD*)stackStorage434 = opaqueValue637;
                sub_1803A3470 (opaqueValue437, stackStorage434);
                opaqueValue433 = opaqueValue8 | 1;
                sub_1809A12FC (stackStorage784, 24, 2, sub_180211140);
                return opaqueValue437;
            }
            if ((unsigned int)utf8CompareStrings (*temporaryPointer5, "audio.enable") == 0)
            {
                if (*(std::uint8_t*)cliHost != 0)
                {
                    opaqueValue417 = sub_1800971D0 (stackStorage593, "CANCELLED");
                    sub_1807FBD40 (opaqueValue417, 6);
                }
                if (*(std::uint64_t*)(cliHost + 152) <= clockGetUnixTimeMilliseconds())
                {
                    opaqueValue418 = sub_1800971D0 (stackStorage569, "AUDIO_PERMISSION_REQUIRED");
                    sub_1807FBD40 (opaqueValue418, 3);
                }
                sub_18081BA10 (cliHost, temporaryPointer5, temporaryPointer4);
                if (*(std::uint64_t*)(cliHost + 152) <= clockGetUnixTimeMilliseconds())
                {
                    opaqueValue419 = sub_1800971D0 (stackStorage570, "AUDIO_PERMISSION_REQUIRED");
                    sub_1807FBD40 (opaqueValue419, 3);
                }
                Processor = cliHostGetProcessor (cliHost);
                *(std::uint64_t*)&urlString436 = Processor;
                authManagerWaitForInitialVerification (*(std::uint64_t*)(Processor + 475552));
                if (!audioGateIsRenderAuthorized (Processor))
                {
                    opaqueValue420 = sub_1800971D0 (stackStorage571, "ENTITLEMENT_DENIED");
                    sub_1807FBD40 (opaqueValue420, 3);
                }
                opaqueValue326 = *(std::uint64_t*)(cliHost + 136);
                if (opaqueValue326 != 0)
                    standaloneAudioCloseDevice (opaqueValue326);
                allocatedObject327 = (std::uint64_t*)memoryAllocateObject (1304);
                reusableString438 = allocatedObject327;
                opaqueValue328 = *(std::uint64_t*)(cliHost + 152);
                *allocatedObject327 = &juce::AudioIODeviceCallback::`vftable';
                temporaryPointer329 = allocatedObject327 + 1;
                sub_180193E00 (allocatedObject327 + 1);
                *reusableString438 = &fadmodel1::cli::NativeOutput::`vftable';
                *temporaryPointer329 = &fadmodel1::cli::NativeOutput::`vftable';
                temporaryPointer330 = reusableString438;
                reusableString438[6] = urlString436;
                temporaryPointer330[7] = cliHost;
                temporaryPointer330[8] = opaqueValue328;
                *(std::uint64_t*)&urlString436 = temporaryPointer330 + 9;
                *((std::uint32_t*)temporaryPointer330 + 18) = 2;
                *((std::uint32_t*)temporaryPointer330 + 19) = 4096;
                temporaryPointer330[10] = 0;
                temporaryPointer330[11] = 0;
                temporaryPointer330[12] = 0;
                *((std::uint8_t*)temporaryPointer330 + 360) = 0;
                sub_180081430 (temporaryPointer330 + 9);
                temporaryPointer330[46] = 0;
                temporaryPointer330[47] = 0;
                sub_180770E90 (temporaryPointer330 + 48);
                *((std::uint16_t*)temporaryPointer330 + 640) = 0;
                temporaryPointer330[161] = 0x40E7700000000000LL;
                *((std::uint8_t*)temporaryPointer330 + 1296) = 0;
                if (*((int*)temporaryPointer330 + 94) < 256)
                    sub_1800B9560 (temporaryPointer330 + 46, 392);
                opaqueValue572 = 0;
                opaqueValue331 = *(std::uint64_t*)(cliHost + 136);
                *(std::uint64_t*)(cliHost + 136) = temporaryPointer330;
                if (opaqueValue331 != 0)
                    sub_180827360();
                sub_180826460 (&opaqueValue572);
                standaloneAudioOpenDevice (*(std::uint64_t*)(cliHost + 136), &temporaryPointer483);
                if (*temporaryPointer483 != 0)
                {
                    opaqueValue421 = sub_1800288C0 (&temporaryPointer483);
                    opaqueValue422 = sub_18008BD40 (stackStorage573, opaqueValue421);
                    sub_1807FBD40 (opaqueValue422, 4);
                }
                stringStorageToRelease332 = temporaryPointer483 - 16;
                if (temporaryPointer483 - 16 != (std::uint8_t*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease332) == -1)
                    memoryFree (stringStorageToRelease332);
            }
            opaqueValue333 = *(std::uint64_t*)(cliHost + 136);
            if (opaqueValue333 == 0 || (temporaryPointer334 = "enabled", *(std::uint8_t*)(opaqueValue333 + 1280) == 0))
                temporaryPointer334 = "stopped";
            sub_180825500 (stackStorage802, opaqueValue324, temporaryPointer334);
            opaqueValue335 = *(std::uint64_t*)(cliHost + 136);
            conditionFlag336 = opaqueValue335 != 0 && *(std::uint8_t*)(opaqueValue335 + 1280) != 0;
            sub_180096D60 (stackStorage803, "audioDeviceOpened");
            temporaryPointer804 = &unk_180F51230;
            conditionFlag805 = conditionFlag336;
            sub_180096D60 (stackStorage806, "inputChannels");
            temporaryPointer807 = &unk_180F51450;
            opaqueValue808 = 0;
            sub_180096D60 (stackStorage809, "outputChannels");
            temporaryPointer810 = &unk_180F51450;
            opaqueValue811 = 2;
            opaqueValue337 = *(std::uint64_t*)(cliHost + 136);
            conditionFlag338 = opaqueValue337 != 0 && *(std::uint8_t*)(opaqueValue337 + 1281) != 0;
            sub_180096D60 (stackStorage812, "deviceFailure");
            temporaryPointer813 = &unk_180F51230;
            conditionFlag814 = conditionFlag338;
            temporaryPointer339 = (std::int64_t*)sub_180097C20 (&temporaryPointer574, *(std::uint64_t*)(cliHost + 152));
            sub_180096D60 (stackStorage815, "permissionExpiresUnixMs");
            temporaryPointer816 = &unk_180F512B0;
            opaqueValue817 = 0;
            opaqueValue817 = *temporaryPointer339;
            *temporaryPointer339 = (std::int64_t)&emptyJuceStringCharacters;
            *(std::uint64_t*)&opaqueValue616 = stackStorage802;
            *((std::uint64_t*)&opaqueValue616 + 1) = stackStorage818;
            *(_OWORD*)stackStorage434 = opaqueValue616;
            opaqueValue66 = opaqueValue437;
            sub_1803A3470 (opaqueValue437, stackStorage434);
            opaqueValue433 = opaqueValue8 | 1;
            sub_1809A12FC (stackStorage802, 24, 6, sub_180211140);
            temporaryPointer76 = temporaryPointer574;
            goto label510;
        }
        if ((unsigned int)utf8CompareStrings (*temporaryPointer5, "audition.start") == 0)
        {
            temporaryPointer495 = "pattern";
            *(std::uint64_t*)&opaqueValue624 = &temporaryPointer495;
            *((std::uint64_t*)&opaqueValue624 + 1) = &opaqueValue496;
            *(_OWORD*)stackStorage434 = opaqueValue624;
            sub_1807FC060 (temporaryPointer4, stackStorage434);
            if (*(std::uint64_t*)(cliHost + 152) <= clockGetUnixTimeMilliseconds())
            {
                opaqueValue392 = sub_1800971D0 (stackStorage521, "AUDIO_PERMISSION_REQUIRED");
                sub_1807FBD40 (opaqueValue392, 3);
            }
            opaqueValue70 = *(std::uint64_t*)(cliHost + 136);
            if (opaqueValue70 == 0 || *(std::uint8_t*)(opaqueValue70 + 1280) == 0)
            {
                opaqueValue396 = sub_1800971D0 (stackStorage525, "AUDIO_DEVICE_DISABLED");
                sub_1807FBD40 (opaqueValue396, 4);
            }
            if (*(std::uint8_t*)cliHost != 0)
            {
                opaqueValue393 = sub_1800971D0 (stackStorage522, "CANCELLED");
                sub_1807FBD40 (opaqueValue393, 6);
            }
            processor71 = cliHostGetProcessor (cliHost);
            if (!audioGateIsRenderAuthorized (processor71))
            {
                opaqueValue394 = sub_1800971D0 (stackStorage523, "ENTITLEMENT_DENIED");
                sub_1807FBD40 (opaqueValue394, 3);
            }
            LOBYTE (opaqueValue72) = 1;
            sub_1807FBDD0 (&temporaryPointer497, temporaryPointer4, "pattern", opaqueValue72);
            stackStorage660[0] = "bass";
            stackStorage660[1] = "lead";
            stackStorage660[2] = "pad";
            stackStorage660[3] = "keys";
            stackStorage660[4] = "arp";
            stackStorage660[5] = "percussion";
            stackStorage660[6] = "generic";
            stackStorage434[0] = stackStorage660;
            stackStorage434[1] = &opaqueValue661;
            sub_18009CD70 (stackStorage503, stackStorage434);
            if (*temporaryPointer497 != 0)
            {
                opaqueValue73 = sub_18009D280 (stackStorage503, temporaryPointer497, 0, 0);
                if (opaqueValue73 < 0)
                {
                    opaqueValue395 = sub_1800971D0 (stackStorage524, "INVALID_REQUEST");
                    sub_1807FBD40 (opaqueValue395, 2);
                }
            }
            else
            {
                opaqueValue73 = 6;
            }
            processor74 = cliHostGetProcessor (cliHost);
            sub_18039E2E0 (processor74 + 453712, (unsigned int)opaqueValue73);
            sub_180096D60 (stackStorage833, "status");
            temporaryPointer834 = &unk_180F512B0;
            auditioningString835 = 0;
            juceStringConstructFromUtf8 (&auditioningString835, "auditioning");
            opaqueValue75 = sub_18009D090 (stackStorage503, (unsigned int)opaqueValue73);
            sub_1803384A0 (stackStorage836, "pattern", opaqueValue75);
            stackStorage432[0] = 1;
            sub_180338B30 (stackStorage837, "audioDeviceOpened", stackStorage432);
            *(std::uint64_t*)&opaqueValue625 = stackStorage833;
            *((std::uint64_t*)&opaqueValue625 + 1) = &opaqueValue838;
            *(_OWORD*)stackStorage434 = opaqueValue625;
            opaqueValue66 = opaqueValue437;
            sub_1803A3470 (opaqueValue437, stackStorage434);
            opaqueValue433 = opaqueValue8 | 1;
            sub_1809A12FC (stackStorage833, 24, 3, sub_180211140);
            sub_180024DB0 (stackStorage503);
            memoryFreeBuffer (stackStorage503[0]);
            temporaryPointer76 = temporaryPointer497;
        label510:
            stringStorageToRelease340 = temporaryPointer76 - 16;
            if (stringStorageToRelease340 != (std::uint8_t*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease340) == -1)
                memoryFree (stringStorageToRelease340);
            return opaqueValue66;
        }
        if ((std::uint8_t)juceStringStartsWithUtf8 (temporaryPointer5, "project.") != 0)
        {
            sub_180804F00 (cliHost, opaqueValue437, temporaryPointer5, temporaryPointer4);
            return opaqueValue437;
        }
        opaqueValue77 = 0;
        opaqueValue78 = *temporaryPointer5;
        while (1)
        {
            opaqueValue79 = *(std::uint8_t*)(opaqueValue78 + opaqueValue77++);
            if (opaqueValue79 != aVersion[opaqueValue77 - 1])
                break;
            if (opaqueValue77 == 8)
                goto label100;
        }
        opaqueValue80 = 0;
        while (1)
        {
            opaqueValue81 = *(std::uint8_t*)(opaqueValue78 + opaqueValue80++);
            if (opaqueValue81 != aDoctor[opaqueValue80 - 1])
                break;
            if (opaqueValue80 == 7)
                goto label100;
        }
        if ((unsigned int)utf8CompareStrings (opaqueValue78, "auth.status") == 0 || (unsigned int)utf8CompareStrings (*temporaryPointer5, "state.inspect") == 0 || (unsigned int)utf8CompareStrings (*temporaryPointer5, "state.document") == 0 || (unsigned int)utf8CompareStrings (*temporaryPointer5, "audio.panic") == 0)
        {
        label100:
            *(_OWORD*)stackStorage434 = 0;
            sub_1807FC060 (temporaryPointer4, stackStorage434);
        }
        if ((unsigned int)utf8CompareStrings (*temporaryPointer5, "state.document") == 0)
        {
            processor82 = cliHostGetProcessor (cliHost);
            sub_1800742F0 (processor82, stackStorage434);
            stackStorage470[0] = nullptr;
            stackStorage470[1] = nullptr;
            opaqueValue83 = sub_1803B7740();
            *(std::uint64_t*)&urlString436 = opaqueValue83;
            sub_1803B8D20 (opaqueValue84, &temporaryPointer643);
            temporaryPointer85 = temporaryPointer643;
            reusableString438 = temporaryPointer643;
            temporaryPointer443 = temporaryPointer644;
            if (temporaryPointer643 != temporaryPointer644)
            {
                do
                {
                    opaqueValue86 = *temporaryPointer85;
                    LODWORD (stackStorage435[0]) = opaqueValue86;
                    opaqueValue87 = sub_1803B8C20 (opaqueValue83, opaqueValue86);
                    opaqueValue88 = opaqueValue87;
                    *(std::uint64_t*)&opaqueValue461 = opaqueValue87;
                    stackStorage469[0] = nullptr;
                    stackStorage469[1] = nullptr;
                    opaqueValue89 = 0;
                    LODWORD (opaqueValue460) = 0;
                    if (*(int*)(opaqueValue87 + 60) > 0)
                    {
                        opaqueValue440 = opaqueValue87 + 48;
                        opaqueValue526 = opaqueValue87 + 32;
                        do
                        {
                            sub_180055960 (stackStorage991, opaqueValue86, opaqueValue89);
                            opaqueValue450 = nullptr;
                            opaqueValue451 = 0;
                            sub_1802A42E0 (&opaqueValue501, opaqueValue86, opaqueValue89);
                            temporaryPointer90 = (char*)opaqueValue501;
                            temporaryPointer91 = (char*)opaqueValue501 + 8 * opaqueValue502;
                            if (opaqueValue501 != temporaryPointer91)
                            {
                                do
                                {
                                    temporaryPointer666 = &unk_180F512B0;
                                    opaqueValue667 = 0;
                                    opaqueValue667 = *(std::uint64_t*)temporaryPointer90;
                                    if ((void*)(opaqueValue667 - 16) != &emptyJuceStringStorage)
                                        _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue667 - 16));
                                    opaqueValue92 = HIDWORD (opaqueValue451);
                                    if (HIDWORD (opaqueValue451) + 1 > (int)opaqueValue451)
                                    {
                                        sub_180088160 (&opaqueValue450, ((HIDWORD (opaqueValue451) + 1) / 2 + HIDWORD (opaqueValue451) + 9) & 0xFFFFFFF8);
                                        opaqueValue92 = HIDWORD (opaqueValue451);
                                    }
                                    HIDWORD (opaqueValue451) = opaqueValue92 + 1;
                                    opaqueValue93 = 2LL * opaqueValue92;
                                    temporaryPointer94 = opaqueValue450;
                                    temporaryPointer95 = temporaryPointer666;
                                    temporaryPointer666 = &unk_180F51130;
                                    *((std::uint64_t*)opaqueValue450 + opaqueValue93) = temporaryPointer95;
                                    opaqueValue96 = opaqueValue667;
                                    opaqueValue667 = 0;
                                    temporaryPointer94[opaqueValue93 + 1] = opaqueValue96;
                                    callbackFunction97 = (void (*) (std::int64_t*))temporaryPointer666[11];
                                    if ((char*)callbackFunction97 == (char*)sub_18000B8D0)
                                        sub_18000B8D0 (&opaqueValue667);
                                    else
                                        callbackFunction97 (&opaqueValue667);
                                    temporaryPointer90 += 8;
                                } while (temporaryPointer90 != temporaryPointer91);
                                opaqueValue89 = opaqueValue460;
                            }
                            sub_180024DB0 (&opaqueValue501);
                            memoryFreeBuffer (opaqueValue501);
                            opaqueValue98 = sub_18009D090 (opaqueValue440, opaqueValue89);
                            sub_1803384A0 (stackStorage839, "id", opaqueValue98);
                            opaqueValue99 = sub_18009D090 (opaqueValue526, opaqueValue89);
                            sub_1803384A0 (stackStorage840, "name", opaqueValue99);
                            sub_180096D60 (stackStorage841, "minimum");
                            temporaryPointer842 = &unk_180F514D0;
                            scalarValue843 = stackStorage991[0];
                            sub_180096D60 (stackStorage844, "maximum");
                            temporaryPointer845 = &unk_180F514D0;
                            scalarValue846 = stackStorage991[1];
                            sub_180096D60 (stackStorage847, "choices");
                            sub_1800A34F0 (stackStorage848, &opaqueValue450);
                            *(std::uint64_t*)&opaqueValue626 = stackStorage839;
                            *((std::uint64_t*)&opaqueValue626 + 1) = &opaqueValue849;
                            opaqueValue460 = opaqueValue626;
                            opaqueValue100 = sub_1803A3470 (&opaqueValue762, &opaqueValue460);
                            sub_18007EE20 (stackStorage469, opaqueValue100);
                            (*(void (**) (char*)) (opaqueValue762 + 88)) (stackStorage763);
                            sub_1809A12FC (stackStorage839, 24, 5, sub_180211140);
                            sub_1800815D0 (&opaqueValue450);
                            memoryFreeBuffer (opaqueValue450);
                            sub_18002CA70 (stackStorage991);
                            LODWORD (opaqueValue460) = ++opaqueValue89;
                            opaqueValue88 = opaqueValue461;
                            opaqueValue86 = stackStorage435[0];
                        } while ((signed int)opaqueValue89 < *(std::uint32_t*)(opaqueValue461 + 60));
                    }
                    sub_1803384A0 (stackStorage903, "id", opaqueValue88 + 16);
                    sub_1803384A0 (stackStorage904, "name", opaqueValue88 + 8);
                    sub_180096D60 (stackStorage905, "parameters");
                    sub_1800A34F0 (stackStorage906, stackStorage469);
                    *(std::uint64_t*)&opaqueValue628 = stackStorage903;
                    *((std::uint64_t*)&opaqueValue628 + 1) = &opaqueValue907;
                    opaqueValue461 = opaqueValue628;
                    opaqueValue101 = sub_1803A3470 (&opaqueValue766, &opaqueValue461);
                    sub_18007EE20 (stackStorage470, opaqueValue101);
                    (*(void (**) (char*)) (opaqueValue766 + 88)) (stackStorage767);
                    sub_1809A12FC (stackStorage903, 24, 3, sub_180211140);
                    sub_1800815D0 (stackStorage469);
                    memoryFreeBuffer (stackStorage469[0]);
                    temporaryPointer85 = (unsigned int*)reusableString438 + 1;
                    reusableString438 = temporaryPointer85;
                    opaqueValue83 = urlString436;
                } while (temporaryPointer85 != temporaryPointer443);
                opaqueValue8 = nextString441;
            }
            sub_180024940 (&temporaryPointer643);
            opaqueValue102 = sub_1807FC6B0 (&opaqueValue527, stackStorage434);
            sub_180338600 (stackStorage921, "stateHash", opaqueValue102);
            opaqueValue104 = sub_18080C010 (opaqueValue103, &opaqueValue758, stackStorage434);
            sub_180338C70 (stackStorage922, "document", opaqueValue104);
            sub_180096D60 (stackStorage853, "fxTypes");
            sub_1800A34F0 (stackStorage854, stackStorage470);
            sub_1803386B0 (stackStorage855, "maxFxSlots", &unk_18131FBF0);
            *(std::uint64_t*)&opaqueValue630 = stackStorage853;
            *((std::uint64_t*)&opaqueValue630 + 1) = stackStorage856;
            urlString436 = opaqueValue630;
            opaqueValue105 = sub_1803A3470 (&opaqueValue760, &urlString436);
            sub_180338C70 (stackStorage923, "structure", opaqueValue105);
            *(std::uint64_t*)&opaqueValue631 = stackStorage921;
            *((std::uint64_t*)&opaqueValue631 + 1) = &opaqueValue924;
            urlString436 = opaqueValue631;
            opaqueValue66 = opaqueValue437;
            sub_1803A3470 (opaqueValue437, &urlString436);
            opaqueValue433 = opaqueValue8 | 1;
            sub_1809A12FC (stackStorage921, 24, 3, sub_180211140);
            (*(void (**) (char*)) (opaqueValue760 + 88)) (stackStorage761);
            sub_1809A12FC (stackStorage853, 24, 2, sub_180211140);
            (*(void (**) (char*)) (opaqueValue758 + 88)) (stackStorage759);
            stringStorageToRelease106 = (void*)(opaqueValue527 - 16);
            if ((void*)(opaqueValue527 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease106) == -1)
                memoryFree (stringStorageToRelease106);
            sub_1800815D0 (stackStorage470);
            memoryFreeBuffer (stackStorage470[0]);
            goto label122;
        }
        opaqueValue107 = 0;
        opaqueValue108 = *temporaryPointer5;
        while (1)
        {
            opaqueValue109 = *(std::uint8_t*)(opaqueValue108 + opaqueValue107++);
            if (opaqueValue109 != aVersion[opaqueValue107 - 1])
                break;
            if (opaqueValue107 == 8)
            {
                sub_1800A3460 (opaqueValue437, cliHost + 296);
                return opaqueValue437;
            }
        }
        opaqueValue110 = 0;
        while (1)
        {
            opaqueValue111 = *(std::uint8_t*)(opaqueValue108 + opaqueValue110++);
            if (opaqueValue111 != aDoctor[opaqueValue110 - 1])
                break;
            if (opaqueValue110 == 7)
            {
                opaqueValue112 = sub_1800AE110 (&temporaryPointer528, "doctor");
                sub_180338600 (stackStorage967, "platform", opaqueValue112);
                sub_180338760 (stackStorage968, "arch", "64-bit");
                opaqueValue113 = *(std::uint64_t*)(cliHost + 136);
                conditionFlag114 = opaqueValue113 != 0 && *(std::uint8_t*)(opaqueValue113 + 1280) != 0;
                stackStorage432[0] = conditionFlag114;
                sub_180338B30 (stackStorage969, "audioDeviceOpened", stackStorage432);
                stackStorage432[0] = 0;
                sub_180338B30 (stackStorage970, "editorCreated", stackStorage432);
                sub_180338760 (stackStorage971, "authorization", "unknown-until-runtime");
                stackStorage432[0] = 0;
                sub_180338B30 (stackStorage972, "testHooks", stackStorage432);
                stackStorage432[0] = 1;
                sub_180338B30 (stackStorage973, "commercialGate", stackStorage432);
                *(std::uint64_t*)&opaqueValue633 = stackStorage967;
                *((std::uint64_t*)&opaqueValue633 + 1) = &opaqueValue974;
                *(_OWORD*)stackStorage434 = opaqueValue633;
                opaqueValue66 = opaqueValue437;
                sub_1803A3470 (opaqueValue437, stackStorage434);
                opaqueValue433 = opaqueValue8 | 1;
                sub_1809A12FC (stackStorage967, 24, 7, sub_180211140);
                temporaryPointer76 = temporaryPointer528;
                goto label510;
            }
        }
        if ((unsigned int)utf8CompareStrings (*temporaryPointer5, "capabilities") != 0)
        {
            if ((unsigned int)utf8CompareStrings (*temporaryPointer5, "params.describe") == 0)
            {
                temporaryPointer492 = "id";
                *(std::uint64_t*)&opaqueValue600 = &temporaryPointer492;
                *((std::uint64_t*)&opaqueValue600 + 1) = &messageString493;
                *(_OWORD*)stackStorage434 = opaqueValue600;
                sub_1807FC060 (temporaryPointer4, stackStorage434);
                sub_1807FBDD0 (&temporaryPointer491, temporaryPointer4, "id", 0);
                opaqueValue172 = sub_1807A2D80();
                opaqueValue674 = 0;
                opaqueValue675 = 0;
                opaqueValue676 = 0;
                opaqueValue173 = -1;
                do
                    ++opaqueValue173;
                while (temporaryPointer491[opaqueValue173] != 0);
                sub_180024260 (&opaqueValue674, temporaryPointer491);
                temporaryPointer174 = &opaqueValue674;
                if (opaqueValue676 > 0xF)
                    temporaryPointer174 = (__int128*)opaqueValue674;
                *(std::uint64_t*)&opaqueValue601 = temporaryPointer174;
                *((std::uint64_t*)&opaqueValue601 + 1) = opaqueValue675;
                *(_OWORD*)stackStorage434 = opaqueValue601;
                opaqueValue175 = sub_1807ADB80 (opaqueValue172, stackStorage434);
                if (opaqueValue676 > 0xF)
                    sub_1800298D0 (&opaqueValue674, opaqueValue674);
                opaqueValue675 = 0;
                opaqueValue676 = 15;
                LOBYTE (opaqueValue674) = 0;
                if (opaqueValue175 == 0)
                {
                    opaqueValue398 = sub_1800971D0 (stackStorage531, "PARAMETER_UNKNOWN");
                    sub_1807FBD40 (opaqueValue398, 4);
                }
                opaqueValue66 = opaqueValue437;
                sub_1807FC720 (opaqueValue437, opaqueValue175);
                temporaryPointer76 = temporaryPointer491;
                goto label510;
            }
            if ((unsigned int)utf8CompareStrings (*temporaryPointer5, "params.list") == 0)
            {
                stackStorage596[0] = "offset";
                stackStorage596[1] = "limit";
                *(std::uint64_t*)&opaqueValue602 = stackStorage596;
                *((std::uint64_t*)&opaqueValue602 + 1) = stackStorage597;
                *(_OWORD*)stackStorage434 = opaqueValue602;
                sub_1807FC060 (temporaryPointer4, stackStorage434);
                scalarValue176 = sub_1807FC4B0 (temporaryPointer4, "offset");
                scalarValue177 = sub_1807FC4B0 (temporaryPointer4, "limit");
                if (scalarValue176 < 0.0 || sub_1809E18B0() != scalarValue176 || scalarValue177 < 1.0 || scalarValue177 > 128.0 || sub_1809E18B0() != scalarValue177)
                {
                    opaqueValue400 = sub_1800971D0 (stackStorage534, "INVALID_REQUEST");
                    sub_1807FBD40 (opaqueValue400, 2);
                }
                temporaryPointer178 = (std::uint64_t*)sub_1807A2D80();
                opaqueValue179 = 0x8F5C28F5C28F5C29uLL * ((std::int64_t)(temporaryPointer178[1] - *temporaryPointer178) >> 3);
                if ((opaqueValue179 & 0x8000000000000000uLL) != 0LL)
                    scalarValue180 = (double)(int)(opaqueValue179 & 1 | (opaqueValue179 >> 1)) + (double)(int)(opaqueValue179 & 1 | (opaqueValue179 >> 1));
                else
                    scalarValue180 = (double)(int)opaqueValue179;
                if (scalarValue180 < scalarValue176)
                {
                    opaqueValue399 = sub_1800971D0 (stackStorage532, "INVALID_REQUEST");
                    sub_1807FBD40 (opaqueValue399, 2);
                }
                scalarValue181 = scalarValue177 + scalarValue176;
                opaqueValue182 = 0;
                if (scalarValue181 >= 9.223372036854776e18)
                {
                    scalarValue181 = scalarValue181 - 9.223372036854776e18;
                    if (scalarValue181 < 9.223372036854776e18)
                        opaqueValue182 = 0x8000000000000000uLL;
                }
                if (opaqueValue182 + (unsigned int)(int)scalarValue181 < opaqueValue179)
                    opaqueValue179 = opaqueValue182 + (unsigned int)(int)scalarValue181;
                stackStorage468[0] = 0;
                stackStorage468[1] = 0;
                opaqueValue183 = 0;
                if (scalarValue176 >= 9.223372036854776e18)
                {
                    scalarValue176 = scalarValue176 - 9.223372036854776e18;
                    if (scalarValue176 < 9.223372036854776e18)
                        opaqueValue183 = 0x8000000000000000uLL;
                }
                opaqueValue184 = opaqueValue183 + (unsigned int)(int)scalarValue176;
                if (opaqueValue184 < opaqueValue179)
                {
                    opaqueValue185 = 200 * opaqueValue184;
                    opaqueValue186 = opaqueValue179 - opaqueValue184;
                    do
                    {
                        opaqueValue187 = sub_1807FC720 (&opaqueValue751, opaqueValue185 + *temporaryPointer178);
                        sub_18007EE20 (stackStorage468, opaqueValue187);
                        (*(void (**) (char*)) (opaqueValue751 + 88)) (stackStorage752);
                        opaqueValue185 += 200;
                        --opaqueValue186;
                    } while (opaqueValue186 != 0);
                }
                sub_180096D60 (stackStorage908, "parameters");
                sub_1800A34F0 (stackStorage909, stackStorage468);
                LODWORD (stackStorage435[0]) = -1030792151 * ((std::int64_t)(temporaryPointer178[1] - *temporaryPointer178) >> 3);
                sub_180825B70 (stackStorage910, opaqueValue188, stackStorage435);
                if (opaqueValue179 >= 0x8F5C28F5C28F5C29uLL * ((std::int64_t)(temporaryPointer178[1] - *temporaryPointer178) >> 3))
                {
                    callbackFunction706 = (void (**) (std::uint64_t*))&unk_180F51130;
                    opaqueValue707 = 0;
                    temporaryPointer190 = (void**)&callbackFunction706;
                    opaqueValue191 = opaqueValue8 | 0x20000;
                }
                else
                {
                    temporaryPointer189 = (std::int64_t*)sub_180097BD0 (&opaqueValue533, (unsigned int)opaqueValue179);
                    callbackFunction685 = (void (**) (std::uint64_t*))&unk_180F512B0;
                    opaqueValue686 = 0;
                    opaqueValue686 = *temporaryPointer189;
                    *temporaryPointer189 = (std::int64_t)&emptyJuceStringCharacters;
                    temporaryPointer190 = (void**)&callbackFunction685;
                    opaqueValue191 = opaqueValue8 | 0x18000;
                }
                sub_180338C70 (stackStorage911, "nextCursor", temporaryPointer190);
                *(std::uint64_t*)&opaqueValue604 = stackStorage908;
                *((std::uint64_t*)&opaqueValue604 + 1) = &opaqueValue912;
                *(_OWORD*)stackStorage434 = opaqueValue604;
                opaqueValue66 = opaqueValue437;
                sub_1803A3470 (opaqueValue437, stackStorage434);
                opaqueValue192 = opaqueValue191 | 1;
                opaqueValue433 = opaqueValue192;
                sub_1809A12FC (stackStorage908, 24, 3, sub_180211140);
                if ((opaqueValue192 & 0x20000) != 0)
                {
                    opaqueValue192 &= ~0x20000u;
                    opaqueValue433 = opaqueValue192;
                    callbackFunction706[11](&opaqueValue707);
                }
                if ((opaqueValue192 & 0x10000) != 0)
                {
                    opaqueValue192 &= ~0x10000u;
                    opaqueValue433 = opaqueValue192;
                    callbackFunction685[11](&opaqueValue686);
                }
                if ((opaqueValue192 & 0x8000) != 0)
                {
                    stringStorageToRelease193 = (void*)(opaqueValue533 - 16);
                    if ((void*)(opaqueValue533 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease193) == -1)
                        memoryFree (stringStorageToRelease193);
                }
                sub_1800815D0 (stackStorage468);
                temporaryPointer69 = (void*)stackStorage468[0];
            label123:
                memoryFreeBuffer (temporaryPointer69);
                return opaqueValue66;
            }
            if ((unsigned int)utf8CompareStrings (*temporaryPointer5, "presets.inspect") == 0 || (unsigned int)utf8CompareStrings (*temporaryPointer5, "presets.validate") == 0)
            {
                opaqueValue301 = sub_1807FBDD0 (&opaqueValue565, temporaryPointer4, "preset", 0);
                sub_18008C740 (&opaqueValue478, opaqueValue301);
                opaqueValue302 = sub_18008E950 (&opaqueValue478, &opaqueValue564);
                juceStringToLowerCase (opaqueValue302, &temporaryPointer464);
                stringStorageToRelease303 = (void*)(opaqueValue564 - 16);
                if ((void*)(opaqueValue564 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease303) == -1)
                    memoryFree (stringStorageToRelease303);
                stringStorageToRelease304 = (void*)(opaqueValue478 - 16);
                if ((void*)(opaqueValue478 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease304) == -1)
                    memoryFree (stringStorageToRelease304);
                stringStorageToRelease305 = (void*)(opaqueValue565 - 16);
                if ((void*)(opaqueValue565 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease305) == -1)
                    memoryFree (stringStorageToRelease305);
                opaqueValue306 = 0;
                while (1)
                {
                    opaqueValue307 = temporaryPointer464[opaqueValue306++];
                    if (opaqueValue307 != aVital[opaqueValue306 - 1])
                        break;
                    if (opaqueValue306 == 7)
                    {
                    label458:
                        temporaryPointer479 = "preset";
                        *(std::uint64_t*)&opaqueValue632 = &temporaryPointer479;
                        *((std::uint64_t*)&opaqueValue632 + 1) = &temporaryPointer480;
                        *(_OWORD*)stackStorage434 = opaqueValue632;
                        sub_1807FC060 (temporaryPointer4, stackStorage434);
                        sub_180801680 (cliHost, stackStorage829, temporaryPointer4, 0xFFFFFFFFLL);
                        sub_1803384A0 (stackStorage958, "name", stackStorage830);
                        sub_1803384A0 (stackStorage959, "presetHash", stackStorage831);
                        opaqueValue309 = sub_1800A3E20 (stackStorage832, "compatibilityOutcome");
                        opaqueValue310 = sub_1800A3C60 (opaqueValue309, "PARTIAL_COMPATIBLE");
                        temporaryPointer311 = "valid";
                        if (opaqueValue310 != 0)
                            temporaryPointer311 = "partial";
                        *(std::uint64_t*)&urlString436 = temporaryPointer311;
                        sub_1803B4440 (stackStorage960, "status", &urlString436);
                        sub_180825C00 (stackStorage961, opaqueValue312, stackStorage832);
                        stackStorage432[0] = 0;
                        sub_180338B30 (stackStorage962, "audibleStateChanged", stackStorage432);
                        stackStorage432[0] = 0;
                        sub_180338B30 (stackStorage963, "audioDeviceOpened", stackStorage432);
                        *(std::uint64_t*)&opaqueValue638 = stackStorage958;
                        *((std::uint64_t*)&opaqueValue638 + 1) = stackStorage964;
                        *(_OWORD*)stackStorage434 = opaqueValue638;
                        opaqueValue66 = opaqueValue437;
                        sub_1803A3470 (opaqueValue437, stackStorage434);
                        opaqueValue433 = opaqueValue8 | 1;
                        sub_1809A12FC (stackStorage958, 24, 6, sub_180211140);
                        sub_180824EC0 (stackStorage829);
                        temporaryPointer76 = temporaryPointer464;
                        goto label510;
                    }
                }
                while (1)
                {
                    opaqueValue308 = temporaryPointer464[opaqueValue7++];
                    if (opaqueValue308 != aFxp[opaqueValue7 - 1])
                        break;
                    if (opaqueValue7 == 5)
                        goto label458;
                }
                temporaryPointer480 = "preset";
                *(std::uint64_t*)&opaqueValue634 = &temporaryPointer480;
                *((std::uint64_t*)&opaqueValue634 + 1) = &opaqueValue481;
                *(_OWORD*)stackStorage434 = opaqueValue634;
                sub_1807FC060 (temporaryPointer4, stackStorage434);
                opaqueValue313 = sub_1807FBDD0 (&opaqueValue566, temporaryPointer4, "preset", 0);
                sub_1807FFCB0 (cliHost, stackStorage592, opaqueValue313, 0x2000000);
                stringStorageToRelease314 = (void*)(opaqueValue566 - 16);
                if ((void*)(opaqueValue566 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease314) == -1)
                    memoryFree (stringStorageToRelease314);
                sub_1807FFD60 (stringStorageToRelease314, stackStorage996, stackStorage592);
                temporaryPointer482 = &emptyJuceStringCharacters;
                sub_18061E9D0 (stackStorage653, stackStorage996, 0, &temporaryPointer482);
                if (opaqueValue654 == 0)
                {
                    opaqueValue416 = sub_1800971D0 (stackStorage567, "INVALID_PRESET");
                    sub_1807FBD40 (opaqueValue416, 4);
                }
                temporaryPointer315 = stackStorage998;
                if (stackStorage998[3] > 0xFu)
                    temporaryPointer315 = (std::uint64_t*)stackStorage998[0];
                juceStringConstructFromUtf8Span (&opaqueValue481, temporaryPointer315, stackStorage998[2]);
                sub_180338600 (stackStorage874, "name", &opaqueValue481);
                sub_1803386B0 (stackStorage875, "schemaVersion", stackStorage996);
                sub_180096D60 (stackStorage876, "contractVersion");
                temporaryPointer877 = &unk_180F51450;
                opaqueValue878 = opaqueValue997;
                opaqueValue316 = sub_1807FC6B0 (&opaqueValue568, stackStorage592);
                sub_180338600 (stackStorage879, "presetHash", opaqueValue316);
                opaqueValue317 = 0x34F72C234F72C235LL * ((std::int64_t)(stackStorage998[41] - stackStorage998[40]) >> 3);
                sub_180096D60 (stackStorage880, "assets");
                temporaryPointer881 = &unk_180F51450;
                opaqueValue882 = (unsigned int)opaqueValue317;
                sub_180825500 (stackStorage883, opaqueValue318, "valid");
                *(std::uint64_t*)&opaqueValue636 = stackStorage874;
                *((std::uint64_t*)&opaqueValue636 + 1) = stackStorage884;
                *(_OWORD*)stackStorage434 = opaqueValue636;
                opaqueValue66 = opaqueValue437;
                sub_1803A3470 (opaqueValue437, stackStorage434);
                opaqueValue433 = opaqueValue8 | 1;
                sub_1809A12FC (stackStorage874, 24, 6, sub_180211140);
                stringStorageToRelease319 = (void*)(opaqueValue568 - 16);
                if ((void*)(opaqueValue568 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease319) == -1)
                    memoryFree (stringStorageToRelease319);
                stringStorageToRelease320 = (void*)(opaqueValue481 - 16);
                if ((void*)(opaqueValue481 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease320) == -1)
                    memoryFree (stringStorageToRelease320);
                if (opaqueValue654 != 0)
                    sub_18020BA70 (stackStorage653);
                stringStorageToRelease321 = temporaryPointer482 - 16;
                if (temporaryPointer482 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease321) == -1)
                    memoryFree (stringStorageToRelease321);
                sub_18022DD90 (stackStorage996);
                memoryFreeBuffer (stackStorage592[0]);
                temporaryPointer76 = temporaryPointer464;
                goto label510;
            }
            if ((unsigned int)utf8CompareStrings (*temporaryPointer5, "params.get") == 0)
            {
                stackStorage597[0] = "id";
                stackStorage597[1] = "preset";
                *(std::uint64_t*)&opaqueValue605 = stackStorage597;
                *((std::uint64_t*)&opaqueValue605 + 1) = stackStorage598;
                *(_OWORD*)stackStorage434 = opaqueValue605;
                sub_1807FC060 (temporaryPointer4, stackStorage434);
                lpMem = nullptr;
                if (*(std::uint8_t*)(*(std::uint64_t*)sub_1800A3E20 (temporaryPointer4, "preset") + 6LL) != 0)
                {
                    opaqueValue194 = sub_1807FBDD0 (&opaqueValue535, temporaryPointer4, "preset", 0);
                    sub_1807FFCB0 (cliHost, stackStorage606, opaqueValue194, 0x2000000);
                    stringStorageToRelease195 = (void*)(opaqueValue535 - 16);
                    if ((void*)(opaqueValue535 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease195) == -1)
                        memoryFree (stringStorageToRelease195);
                    opaqueValue196 = sub_1807FFD60 (stringStorageToRelease195, stackStorage1005, stackStorage606);
                    sub_1807FFED0 (cliHost, &opaqueValue590, opaqueValue196, 0xFFFFFFFFLL);
                    sub_18022DD90 (stackStorage1005);
                    *(std::uint64_t*)&urlString436 = memoryAllocateObject (475936);
                    temporaryPointer197 = (std::uint8_t*)audioProcessorInitialize (urlString436);
                    temporaryPointer198 = lpMem;
                    lpMem = temporaryPointer197;
                    if (temporaryPointer198 != nullptr)
                    {
                        sub_1800656C0 (temporaryPointer198);
                        memoryFree (temporaryPointer198);
                        temporaryPointer197 = lpMem;
                    }
                    temporaryPointer197[65] = 1;
                    if (**(std::uint8_t**)sub_180074990 (lpMem, stackStorage537, opaqueValue590, opaqueValue591) != 0)
                    {
                        opaqueValue401 = sub_1800971D0 (stackStorage536, "STATE_RESTORE_FAILED");
                        sub_1807FBD40 (opaqueValue401, 7);
                    }
                    sub_18000B8D0 (stackStorage537);
                    memoryFreeBuffer (opaqueValue590);
                    memoryFreeBuffer (stackStorage606[0]);
                }
                else if (**(std::uint8_t**)sub_1800A3E20 (temporaryPointer4, "preset") == 0)
                {
                    opaqueValue403 = sub_1800971D0 (stackStorage538, "INVALID_REQUEST");
                    sub_1807FBD40 (opaqueValue403, 2);
                }
                processor199 = (char*)lpMem;
                if (lpMem == nullptr)
                    processor199 = (char*)cliHostGetProcessor (cliHost);
                sub_1807FBDD0 (&opaqueValue458, temporaryPointer4, "id", 0);
                opaqueValue200 = sub_1801F84D0 (processor199 + 1240, opaqueValue458);
                if (opaqueValue200 == 0 || (opaqueValue201 = *(std::uint64_t*)(opaqueValue200 + 40)) == 0)
                {
                    opaqueValue404 = sub_1800971D0 (stackStorage541, "PARAMETER_UNKNOWN");
                    sub_1807FBD40 (opaqueValue404, 4);
                }
                opaqueValue202 = sub_1807A2D80();
                opaqueValue680 = 0;
                opaqueValue681 = 0;
                opaqueValue682 = 0;
                opaqueValue203 = -1;
                do
                    ++opaqueValue203;
                while (*(std::uint8_t*)(opaqueValue458 + opaqueValue203) != 0);
                sub_180024260 (&opaqueValue680, opaqueValue458);
                temporaryPointer204 = &opaqueValue680;
                if (opaqueValue682 > 0xF)
                    temporaryPointer204 = (__int128*)opaqueValue680;
                *(std::uint64_t*)&opaqueValue607 = temporaryPointer204;
                *((std::uint64_t*)&opaqueValue607 + 1) = opaqueValue681;
                *(_OWORD*)stackStorage434 = opaqueValue607;
                opaqueValue205 = sub_1807ADB80 (opaqueValue202, stackStorage434);
                if (opaqueValue682 > 0xF)
                    sub_1800298D0 (&opaqueValue680, opaqueValue680);
                opaqueValue681 = 0;
                opaqueValue682 = 15;
                LOBYTE (opaqueValue680) = 0;
                if (opaqueValue205 == 0)
                {
                    opaqueValue402 = sub_1800971D0 (stackStorage539, "PARAMETER_UNKNOWN");
                    sub_1807FBD40 (opaqueValue402, 4);
                }
                sub_1803384A0 (stackStorage913, "id", &opaqueValue458);
                (*(void (**) (std::int64_t)) (*(std::uint64_t*)opaqueValue201 + 8LL)) (opaqueValue201);
                LODWORD (stackStorage435[0]) = sub_1801A0340 (opaqueValue201);
                sub_1803B4280 (stackStorage914, "plain", stackStorage435);
                scalarValue206 = (*(double (**) (std::int64_t)) (*(std::uint64_t*)opaqueValue201 + 8LL)) (opaqueValue201);
                scalarValue207 = *(float*)&scalarValue206;
                sub_180096D60 (stackStorage915, "normalized");
                temporaryPointer916 = &unk_180F514D0;
                scalarValue917 = scalarValue207;
                opaqueValue677 = 0;
                opaqueValue678 = 0;
                opaqueValue679 = 0;
                sub_180024260 (&opaqueValue677, *(std::uint64_t*)(opaqueValue205 + 96));
                temporaryPointer208 = &opaqueValue677;
                if (opaqueValue679 > 0xF)
                    temporaryPointer208 = (__int128*)opaqueValue677;
                juceStringConstructFromUtf8Span (&opaqueValue490, temporaryPointer208, opaqueValue678);
                sub_180338600 (stackStorage918, "unit", &opaqueValue490);
                callbackFunction209 = *(std::int64_t (**) (std::int64_t, std::int64_t*, std::int64_t, std::int64_t)) (*(std::uint64_t*)opaqueValue201 + 72LL);
                (*(void (**) (std::int64_t)) (*(std::uint64_t*)opaqueValue201 + 8LL)) (opaqueValue201);
                opaqueValue211 = callbackFunction209 (opaqueValue201, &opaqueValue540, opaqueValue210, 64);
                sub_180338600 (stackStorage919, "display", opaqueValue211);
                *(std::uint64_t*)&opaqueValue608 = stackStorage913;
                *((std::uint64_t*)&opaqueValue608 + 1) = &opaqueValue920;
                *(_OWORD*)stackStorage434 = opaqueValue608;
                opaqueValue66 = opaqueValue437;
                sub_1803A3470 (opaqueValue437, stackStorage434);
                opaqueValue433 = opaqueValue8 | 1;
                sub_1809A12FC (stackStorage913, 24, 5, sub_180211140);
                stringStorageToRelease212 = (void*)(opaqueValue540 - 16);
                if ((void*)(opaqueValue540 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease212) == -1)
                    memoryFree (stringStorageToRelease212);
                stringStorageToRelease213 = (void*)(opaqueValue490 - 16);
                if ((void*)(opaqueValue490 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease213) == -1)
                    memoryFree (stringStorageToRelease213);
                if (opaqueValue679 > 0xF)
                    sub_1800298D0 (&opaqueValue677, opaqueValue677);
                opaqueValue678 = 0;
                opaqueValue679 = 15;
                LOBYTE (opaqueValue677) = 0;
                stringStorageToRelease214 = (void*)(opaqueValue458 - 16);
                if ((void*)(opaqueValue458 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease214) == -1)
                    memoryFree (stringStorageToRelease214);
                temporaryPointer215 = lpMem;
                if (lpMem != nullptr)
                {
                    sub_1800656C0 (lpMem);
                    memoryFree (temporaryPointer215);
                }
                return opaqueValue66;
            }
            if ((unsigned int)utf8CompareStrings (*temporaryPointer5, "presets.export") == 0)
            {
                temporaryPointer489 = "out";
                *(std::uint64_t*)&opaqueValue609 = &temporaryPointer489;
                *((std::uint64_t*)&opaqueValue609 + 1) = &opaqueValue490;
                *(_OWORD*)stackStorage434 = opaqueValue609;
                sub_1807FC060 (temporaryPointer4, stackStorage434);
                processor216 = cliHostGetProcessor (cliHost);
                reusableString438 = (std::uint64_t*)processor216;
                if (*(std::uint8_t*)(processor216 + 1001) != 0)
                {
                    opaqueValue405 = sub_1800971D0 (stackStorage542, "PREVIEW_OWNED");
                    sub_1807FBD40 (opaqueValue405, 5);
                }
                sub_18024FB10 (stackStorage987, processor216);
                temporaryPointer443 = (unsigned int*)(opaqueValue217 + 1240);
                opaqueValue218 = sub_1801F87E0 (opaqueValue217 + 1240, stackStorage655);
                sub_180212950 (&opaqueValue672, opaqueValue218);
                sub_18020BA70 (stackStorage655);
                opaqueValue219 = sub_1800A3E20 (&opaqueValue672, "name");
                (*(void (**) (std::uint8_t**, std::int64_t)) (*(std::uint64_t*)opaqueValue219 + 40LL)) (&temporaryPointer487, opaqueValue219 + 8);
                if (*temporaryPointer487 != 0)
                {
                    opaqueValue220 = sub_1800A3E20 (&opaqueValue672, "name");
                    (*(void (**) (std::int64_t*, std::int64_t)) (*(std::uint64_t*)opaqueValue220 + 40LL)) (&opaqueValue488, opaqueValue220 + 8);
                    opaqueValue221 = sub_18009BA80 (&opaqueValue488, stackStorage951);
                    opaqueValue222 = opaqueValue8 | 0xC0000;
                }
                else
                {
                    opaqueValue221 = sub_18009BA80 (cliHost + 280, stackStorage964);
                    opaqueValue222 = opaqueValue8 | 0x100000;
                }
                opaqueValue433 = opaqueValue222;
                sub_1800262A0 (stackStorage987, opaqueValue221);
                if ((opaqueValue222 & 0x100000) != 0)
                {
                    opaqueValue222 &= ~0x100000u;
                    opaqueValue433 = opaqueValue222;
                    sub_180025E70 (stackStorage964);
                }
                if ((opaqueValue222 & 0x80000) != 0)
                {
                    opaqueValue222 &= ~0x80000u;
                    opaqueValue433 = opaqueValue222;
                    sub_180025E70 (stackStorage951);
                }
                if ((opaqueValue222 & 0x40000) != 0)
                {
                    opaqueValue222 &= ~0x40000u;
                    opaqueValue433 = opaqueValue222;
                    stringStorageToRelease223 = (void*)(opaqueValue488 - 16);
                    if ((void*)(opaqueValue488 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease223) == -1)
                        memoryFree (stringStorageToRelease223);
                }
                stringStorageToRelease224 = temporaryPointer487 - 16;
                if (temporaryPointer487 - 16 != (std::uint8_t*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease224) == -1)
                    memoryFree (stringStorageToRelease224);
                opaqueValue225 = sub_1800A3E20 (&opaqueValue672, "author");
                (*(void (**) (std::int64_t*, std::int64_t)) (*(std::uint64_t*)opaqueValue225 + 40LL)) (&opaqueValue496, opaqueValue225 + 8);
                opaqueValue226 = sub_18009BA80 (&opaqueValue496, stackStorage966);
                sub_1800262A0 (stackStorage988, opaqueValue226);
                sub_180025E70 (stackStorage966);
                stringStorageToRelease227 = (void*)(opaqueValue496 - 16);
                if ((void*)(opaqueValue496 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease227) == -1)
                    memoryFree (stringStorageToRelease227);
                opaqueValue228 = sub_1800A3E20 (&opaqueValue672, "category");
                (*(void (**) (std::int64_t*, std::int64_t)) (*(std::uint64_t*)opaqueValue228 + 40LL)) (&opaqueValue472, opaqueValue228 + 8);
                opaqueValue229 = sub_18009BA80 (&opaqueValue472, stackStorage965);
                sub_1800262A0 (stackStorage989, opaqueValue229);
                sub_180025E70 (stackStorage965);
                stringStorageToRelease230 = (void*)(opaqueValue472 - 16);
                if ((void*)(opaqueValue472 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease230) == -1)
                    memoryFree (stringStorageToRelease230);
                opaqueValue231 = sub_1800A3E20 (&opaqueValue672, "tags");
                opaqueValue232 = (*(std::int64_t (**) (std::int64_t)) (*(std::uint64_t*)opaqueValue231 + 64LL)) (opaqueValue231 + 8);
                if (opaqueValue232 != 0)
                {
                    opaqueValue233 = *(std::uint64_t*)opaqueValue232;
                    opaqueValue234 = *(std::uint64_t*)opaqueValue232 + 16LL * *(int*)(opaqueValue232 + 12);
                    if (opaqueValue233 != opaqueValue234)
                    {
                        opaqueValue235 = opaqueValue234;
                        do
                        {
                            (*(void (**) (std::int64_t*, std::int64_t)) (*(std::uint64_t*)opaqueValue233 + 40LL)) (&opaqueValue473, opaqueValue233 + 8);
                            opaqueValue697 = 0;
                            opaqueValue698 = 0;
                            opaqueValue699 = 0;
                            opaqueValue236 = -1;
                            do
                                ++opaqueValue236;
                            while (*(std::uint8_t*)(opaqueValue473 + opaqueValue236) != 0);
                            sub_180024260 (&opaqueValue697, opaqueValue473);
                            sub_18025B8E0 (stackStorage990, &opaqueValue697);
                            if (opaqueValue699 > 0xF)
                                sub_1800298D0 (&opaqueValue697, opaqueValue697);
                            opaqueValue698 = 0;
                            opaqueValue699 = 15;
                            LOBYTE (opaqueValue697) = 0;
                            stringStorageToRelease237 = (void*)(opaqueValue473 - 16);
                            if ((void*)(opaqueValue473 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease237) == -1)
                            {
                                memoryFree (stringStorageToRelease237);
                            }
                            opaqueValue233 += 16;
                        } while (opaqueValue233 != opaqueValue235);
                        temporaryPointer4 = (const char*)opaqueValue460;
                    }
                }
                opaqueValue238 = sub_1800755F0 (reusableString438);
                sub_1806194F0 (stackStorage658, temporaryPointer443, stackStorage987, opaqueValue238);
                if (opaqueValue659 == 0)
                {
                    opaqueValue406 = sub_1800971D0 (stackStorage543, "INVALID_STATE");
                    sub_1807FBD40 (opaqueValue406, 7);
                }
                LOBYTE (opaqueValue239) = 1;
                sub_180618A60 (&opaqueValue475, stackStorage658, opaqueValue239);
                opaqueValue240 = sub_1807FBDD0 (&opaqueValue544, temporaryPointer4, "out", 0);
                sub_1809311D0 (cliHost + 8, &opaqueValue459, opaqueValue240);
                stringStorageToRelease241 = (void*)(opaqueValue544 - 16);
                if ((void*)(opaqueValue544 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease241) == -1)
                    memoryFree (stringStorageToRelease241);
                if (opaqueValue459 == 0)
                {
                    opaqueValue407 = sub_1800971D0 (stackStorage545, "PATH_DENIED");
                    sub_1807FBD40 (opaqueValue407, 3);
                }
                (*(void (**) (std::int64_t, std::uint64_t*)) (*(std::uint64_t*)opaqueValue459 + 8LL)) (opaqueValue459, &callbackFunction448);
                if (callbackFunction448 == nullptr || ((std::uint8_t (*) (void (***) (std::uint64_t, std::int64_t), std::int64_t*, std::uint64_t, std::uint64_t, std::uint64_t)) (*callbackFunction448)[20]) (
                                                          callbackFunction448,
                                                          &opaqueValue475,
                                                          0,
                                                          0,
                                                          0) == 0)
                {
                    opaqueValue412 = sub_1800971D0 (stackStorage549, "OUTPUT_IO_ERROR");
                    sub_1807FBD40 (opaqueValue412, 7);
                }
                ((void (*) (void (***) (std::uint64_t, std::int64_t))) (*callbackFunction448)[1]) (callbackFunction448);
                callbackFunction242 = callbackFunction448;
                callbackFunction448 = nullptr;
                if (callbackFunction242 != nullptr)
                    (**callbackFunction242) (callbackFunction242, 1);
                (*(void (**) (std::int64_t, std::int64_t*)) (*(std::uint64_t*)opaqueValue459 + 24LL)) (opaqueValue459, &opaqueValue474);
                (*(void (**) (std::int64_t, std::uint8_t**)) (*(std::uint64_t*)opaqueValue459 + 16LL)) (opaqueValue459, &temporaryPointer463);
                if (*temporaryPointer463 != 0)
                {
                    opaqueValue408 = sub_1800288C0 (&temporaryPointer463);
                    opaqueValue409 = (std::uint8_t)sub_180097F90 (opaqueValue408, "OUTPUT_EXISTS");
                    opaqueValue411 = sub_18008BD40 (stackStorage546, opaqueValue410);
                    sub_1807FBD40 (opaqueValue411, 2 * (opaqueValue409 ^ 1u) + 5);
                }
                sub_180825500 (stackStorage941, opaqueValue243, "saved");
                sub_1803384A0 (stackStorage942, "presetHash", &opaqueValue474);
                opaqueValue244 = sub_1807FBDD0 (&opaqueValue548, temporaryPointer4, "out", 0);
                sub_1808255A0 (stackStorage943, opaqueValue245, opaqueValue244);
                opaqueValue246 = sub_1800742F0 (reusableString438, stackStorage651);
                opaqueValue247 = sub_1807FC6B0 (&opaqueValue547, opaqueValue246);
                sub_180338600 (stackStorage944, "stateHash", opaqueValue247);
                *(std::uint64_t*)&opaqueValue610 = stackStorage941;
                *((std::uint64_t*)&opaqueValue610 + 1) = stackStorage945;
                *(_OWORD*)stackStorage434 = opaqueValue610;
                opaqueValue66 = opaqueValue437;
                sub_1803A3470 (opaqueValue437, stackStorage434);
                opaqueValue433 = opaqueValue222 | 1;
                sub_1809A12FC (stackStorage941, 24, 4, sub_180211140);
                stringStorageToRelease248 = (void*)(opaqueValue547 - 16);
                if ((void*)(opaqueValue547 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease248) == -1)
                    memoryFree (stringStorageToRelease248);
                memoryFreeBuffer (stackStorage651[0]);
                stringStorageToRelease249 = (void*)(opaqueValue548 - 16);
                if ((void*)(opaqueValue548 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease249) == -1)
                    memoryFree (stringStorageToRelease249);
                sub_18000B8D0 (&temporaryPointer463);
                stringStorageToRelease250 = (void*)(opaqueValue474 - 16);
                if ((void*)(opaqueValue474 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease250) == -1)
                    memoryFree (stringStorageToRelease250);
                if (callbackFunction448 != nullptr)
                    (**callbackFunction448) (callbackFunction448, 1);
                if (opaqueValue459 != 0)
                    (**(void (***) (std::int64_t, std::int64_t))opaqueValue459) (opaqueValue459, 1);
                stringStorageToRelease251 = (void*)(opaqueValue475 - 16);
                if ((void*)(opaqueValue475 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease251) == -1)
                    memoryFree (stringStorageToRelease251);
                if (opaqueValue659 != 0)
                    sub_18022DD90 (stackStorage658);
                (*(void (**) (char*)) (opaqueValue672 + 88)) (stackStorage673);
                sub_18021D1D0 (stackStorage987);
                return opaqueValue66;
            }
            if ((unsigned int)utf8CompareStrings (*temporaryPointer5, "presets.import") != 0)
            {
                if ((std::uint8_t)sub_180097F90 (temporaryPointer5, "preset.load") != 0)
                {
                    sub_1808034A0 (cliHost, opaqueValue437, temporaryPointer4);
                    return opaqueValue437;
                }
                else if ((std::uint8_t)juceStringStartsWithUtf8 (temporaryPointer5, "patch.") != 0 || (std::uint8_t)juceStringStartsWithUtf8 (temporaryPointer5, "preview.") != 0 || (std::uint8_t)sub_180097F90 (temporaryPointer5, "state.undo") != 0)
                {
                    sub_180812260 (cliHost, opaqueValue437, temporaryPointer5, temporaryPointer4);
                    return opaqueValue437;
                }
                else if ((std::uint8_t)sub_180097F90 (temporaryPointer5, "auth.status") != 0)
                {
                    processor276 = cliHostGetProcessor (cliHost);
                    authManagerWaitForInitialVerification (*(std::uint64_t*)(processor276 + 475552));
                    authManagerCopyStateSnapshot (*(std::uint64_t*)(processor276 + 475552), (std::int64_t)stackStorage992);
                    sub_180338B30 (stackStorage952, "activated", stackStorage992);
                    stackStorage432[0] = authManagerIsInitialVerificationComplete (*(std::uint64_t*)(processor276 + 475552));
                    sub_180338B30 (stackStorage953, "initialStateLoaded", stackStorage432);
                    sub_180825CA0 (stackStorage954, opaqueValue277, stackStorage995);
                    stackStorage432[0] = audioGateIsRenderAuthorized (processor276);
                    sub_180338B30 (stackStorage955, "synthPermitted", stackStorage432);
                    sub_1803384A0 (stackStorage956, "status", stackStorage994);
                    sub_1803384A0 (stackStorage957, "errorCode", stackStorage993);
                    *(std::uint64_t*)&opaqueValue614 = stackStorage952;
                    *((std::uint64_t*)&opaqueValue614 + 1) = stackStorage958;
                    *(_OWORD*)stackStorage434 = opaqueValue614;
                    sub_1803A3470 (opaqueValue437, stackStorage434);
                    opaqueValue433 = opaqueValue8 | 1;
                    sub_1809A12FC (stackStorage952, 24, 6, sub_180211140);
                    sub_180058EA0 (stackStorage992);
                    return opaqueValue437;
                }
                else if ((std::uint8_t)sub_180097F90 (temporaryPointer5, "render.plan") != 0)
                {
                    sub_1808220A0 (cliHost, opaqueValue437, temporaryPointer4);
                    return opaqueValue437;
                }
                else if ((std::uint8_t)sub_180097F90 (temporaryPointer5, "render") != 0)
                {
                    cliRenderPreview ((std::uint8_t*)cliHost, opaqueValue437, temporaryPointer4);
                    return opaqueValue437;
                }
                else if ((std::uint8_t)sub_180097F90 (temporaryPointer5, "state.inspect") != 0)
                {
                    processor278 = cliHostGetProcessor (cliHost);
                    stackStorage507[0] = nullptr;
                    stackStorage507[1] = nullptr;
                    sub_18006FF70 (processor278, stackStorage507);
                    authManagerCopyStateSnapshot (*(std::uint64_t*)(processor278 + 475552), (std::int64_t)stackStorage999);
                    sub_180338B30 (stackStorage945, "activated", stackStorage999);
                    stackStorage432[0] = authManagerIsInitialVerificationComplete (*(std::uint64_t*)(processor278 + 475552));
                    sub_180338B30 (stackStorage946, "initialStateLoaded", stackStorage432);
                    sub_180825CA0 (stackStorage947, opaqueValue279, stackStorage1001);
                    stackStorage432[0] = audioGateIsRenderAuthorized (processor278);
                    sub_180338B30 (stackStorage948, "synthPermitted", stackStorage432);
                    sub_1803384A0 (stackStorage949, "errorCode", stackStorage1000);
                    *(std::uint64_t*)&opaqueValue615 = stackStorage945;
                    *((std::uint64_t*)&opaqueValue615 + 1) = &opaqueValue950;
                    *(_OWORD*)stackStorage434 = opaqueValue615;
                    sub_1803A3470 (stackStorage753, stackStorage434);
                    sub_1809A12FC (stackStorage945, 24, 5, sub_180211140);
                    opaqueValue280 = sub_1800742F0 (processor278, stackStorage645);
                    opaqueValue281 = sub_1807FC6B0 (stackStorage561, opaqueValue280);
                    sub_180338600 (stackStorage975, "stateHash", opaqueValue281);
                    opaqueValue282 = sub_1807FC6B0 (stackStorage560, stackStorage507);
                    sub_180825D30 (stackStorage976, opaqueValue283, opaqueValue282);
                    sub_1803384A0 (stackStorage977, "name", cliHost + 280);
                    stackStorage432[0] = *(std::uint8_t*)(processor278 + 1001);
                    sub_180338B30 (stackStorage978, "preview", stackStorage432);
                    opaqueValue284 = *(std::uint64_t*)(cliHost + 144);
                    if (opaqueValue284 != 0 && (std::uint8_t)sub_1803035A0 (*(std::uint64_t*)(opaqueValue284 + 48)) != 0)
                    {
                        temporaryPointer285 = "ALT";
                    }
                    else if (*(std::uint8_t*)(processor278 + 1001) != 0)
                    {
                        if (*(std::uint64_t*)(cliHost + 96) != 0)
                        {
                            temporaryPointer285 = "GUI/ALT";
                            if (*(std::uint8_t*)(cliHost + 120) != 0)
                                temporaryPointer285 = "DAW Agent";
                        }
                        else
                        {
                            temporaryPointer285 = "CLI";
                        }
                    }
                    else
                    {
                        temporaryPointer285 = "none";
                    }
                    stackStorage435[0] = (std::int64_t)temporaryPointer285;
                    sub_1803B4440 (stackStorage979, "previewOwner", stackStorage435);
                    opaqueValue286 = sub_18007EF80 (processor278 + 467112, 2);
                    opaqueValue287 = sub_180097C70 (stackStorage559, opaqueValue286);
                    sub_180825DD0 (stackStorage980, opaqueValue288, opaqueValue287);
                    opaqueValue289 = sub_180067F40 (processor278, stackStorage851);
                    sub_180338C70 (stackStorage981, "midiInput", opaqueValue289);
                    sub_180825E70 (stackStorage982, opaqueValue290, stackStorage753);
                    *(std::uint64_t*)&opaqueValue617 = stackStorage975;
                    *((std::uint64_t*)&opaqueValue617 + 1) = stackStorage983;
                    *(_OWORD*)stackStorage434 = opaqueValue617;
                    sub_1803A3470 (opaqueValue437, stackStorage434);
                    opaqueValue433 = opaqueValue8 | 1;
                    sub_1809A12FC (stackStorage975, 24, 8, sub_180211140);
                    sub_1800A3440 (stackStorage851);
                    sub_18000B8D0 (stackStorage559);
                    sub_18000B8D0 (stackStorage560);
                    sub_18000B8D0 (stackStorage561);
                    memoryFreeBuffer (stackStorage645[0]);
                    sub_1800A3440 (stackStorage753);
                    sub_180058EA0 (stackStorage999);
                    memoryFreeBuffer (stackStorage507[0]);
                    return opaqueValue437;
                }
                else if ((std::uint8_t)sub_180097F90 (temporaryPointer5, "job.cancel") != 0)
                {
                    temporaryPointer477 = "targetRequestId";
                    *(std::uint64_t*)&opaqueValue619 = &temporaryPointer477;
                    *((std::uint64_t*)&opaqueValue619 + 1) = &opaqueValue478;
                    *(_OWORD*)stackStorage434 = opaqueValue619;
                    sub_1807FC060 (temporaryPointer4, stackStorage434);
                    sub_180096D60 (&reusableString438, "targetRequestId");
                    opaqueValue291 = sub_1800A3F90 (temporaryPointer4, &reusableString438);
                    sub_18000B8D0 (&reusableString438);
                    if (opaqueValue291 != 0)
                    {
                        LOBYTE (opaqueValue292) = **(std::uint8_t**)sub_1807FBDD0 (stackStorage562, temporaryPointer4, "targetRequestId", 0) != 0;
                        sub_1807FBDA0 (opaqueValue292, "INVALID_REQUEST", 2);
                        sub_18000B8D0 (stackStorage562);
                        sub_180825F10 (stackStorage925);
                        opaqueValue293 = sub_1800A3E20 (temporaryPointer4, "targetRequestId");
                        sub_180338560 (stackStorage926, "targetRequestId", opaqueValue293);
                        stackStorage432[0] = 0;
                        sub_180825FA0 (stackStorage927, opaqueValue294, stackStorage432);
                        *(std::uint64_t*)&opaqueValue620 = stackStorage925;
                        *((std::uint64_t*)&opaqueValue620 + 1) = &opaqueValue928;
                        *(_OWORD*)stackStorage434 = opaqueValue620;
                        sub_1803A3470 (opaqueValue437, stackStorage434);
                        opaqueValue433 = opaqueValue8 | 1;
                        sub_1809A12FC (stackStorage925, 24, 3, sub_180211140);
                        return opaqueValue437;
                    }
                    else
                    {
                        opaqueValue295 = *(std::uint64_t*)(cliHost + 144);
                        if (opaqueValue295 != 0)
                            sub_1802FFB00 (*(std::uint64_t*)(opaqueValue295 + 48));
                        *(std::uint8_t*)cliHost = 0;
                        sub_180825F10 (stackStorage872);
                        stackStorage432[0] = 0;
                        sub_180825FA0 (stackStorage873, opaqueValue296, stackStorage432);
                        *(std::uint64_t*)&opaqueValue627 = stackStorage872;
                        *((std::uint64_t*)&opaqueValue627 + 1) = stackStorage874;
                        *(_OWORD*)stackStorage434 = opaqueValue627;
                        sub_1803A3470 (opaqueValue437, stackStorage434);
                        opaqueValue433 = opaqueValue8 | 1;
                        sub_1809A12FC (stackStorage872, 24, 2, sub_180211140);
                        return opaqueValue437;
                    }
                }
                else
                {
                    if ((std::uint8_t)sub_180097F90 (temporaryPointer5, "audio.panic") == 0)
                    {
                        opaqueValue415 = sub_1800971D0 (stackStorage563, "UNSUPPORTED_OPERATION");
                        sub_1807FBD40 (opaqueValue415, 4);
                    }
                    opaqueValue298 = *(std::uint64_t*)(cliHost + 136);
                    if (opaqueValue298 != 0)
                        standaloneAudioCloseDevice (opaqueValue298);
                    *(std::uint8_t*)cliHost = 0;
                    opaqueValue299 = *(std::uint64_t*)(cliHost + 88);
                    if (opaqueValue299 != 0)
                    {
                        sub_18039E540 (opaqueValue299 + 453712);
                        LOBYTE (opaqueValue300) = 1;
                        sub_18007ED80 (*(std::uint64_t*)(cliHost + 88) + 1096LL, opaqueValue300, 3);
                    }
                    sub_180825500 (stackStorage884, opaqueValue297, "stopped");
                    stackStorage432[0] = 0;
                    sub_180338B30 (stackStorage885, "audioDeviceOpened", stackStorage432);
                    *(std::uint64_t*)&opaqueValue629 = stackStorage884;
                    *((std::uint64_t*)&opaqueValue629 + 1) = stackStorage886;
                    *(_OWORD*)stackStorage434 = opaqueValue629;
                    sub_1803A3470 (opaqueValue437, stackStorage434);
                    opaqueValue433 = opaqueValue8 | 1;
                    sub_1809A12FC (stackStorage884, 24, 2, sub_180211140);
                    return opaqueValue437;
                }
            }
            temporaryPointer476 = "preset";
            *(std::uint64_t*)&opaqueValue611 = &temporaryPointer476;
            *((std::uint64_t*)&opaqueValue611 + 1) = &temporaryPointer477;
            *(_OWORD*)stackStorage434 = opaqueValue611;
            sub_1807FC060 (temporaryPointer4, stackStorage434);
            processor252 = cliHostGetProcessor (cliHost);
            opaqueValue253 = processor252;
            *(std::uint64_t*)&urlString436 = processor252;
            if (*(std::uint8_t*)(processor252 + 1001) != 0)
            {
                opaqueValue413 = sub_1800971D0 (stackStorage550, "PREVIEW_OWNED");
                sub_1807FBD40 (opaqueValue413, 5);
            }
            if (*(std::uint64_t*)(cliHost + 328) >= 0x20u)
            {
                opaqueValue414 = sub_1800971D0 (stackStorage551, "QUEUE_FULL");
                sub_1807FBD40 (opaqueValue414, 5);
            }
            sub_1800742F0 (processor252, stackStorage434);
            reusableString438 = *(std::uint64_t**)(opaqueValue253 + 467112);
            LODWORD (stackStorage435[0]) = *(std::uint32_t*)(sub_1800755F0 (opaqueValue253) + 272);
            authDiagnosticsBuildJson (cliHost, (const char*)&nextString441);
            opaqueValue254 = sub_18006BF50 (opaqueValue253);
            sub_180801680 (cliHost, stackStorage826, temporaryPointer4, opaqueValue254);
            sub_180092140 (stackStorage745, stackStorage826);
            sub_1807FC6B0 (stackStorage746, stackStorage434);
            stackStorage747[0] = opaqueValue827;
            if ((void*)(opaqueValue827 - 16) != &emptyJuceStringStorage)
                _InterlockedIncrement ((volatile std::int32_t*)(opaqueValue827 - 16));
            stackStorage747[1] = reusableString438;
            stackStorage747[2] = *(std::uint64_t*)(cliHost + 288);
            sub_180096D60 (stackStorage929, "op");
            sub_1800A3590 (stackStorage930, "preset.replace");
            sub_1803384A0 (stackStorage931, "sourceHash", &opaqueValue827);
            opaqueValue256 = sub_18080C010 (opaqueValue255, stackStorage852, stackStorage826);
            sub_180338C70 (stackStorage932, "after", opaqueValue256);
            sub_180825C00 (stackStorage933, opaqueValue257, stackStorage828);
            *(std::uint64_t*)&opaqueValue612 = stackStorage929;
            *((std::uint64_t*)&opaqueValue612 + 1) = stackStorage934;
            opaqueValue461 = opaqueValue612;
            sub_1803A3470 (stackStorage726, &opaqueValue461);
            *(std::uint64_t*)&opaqueValue461 = stackStorage726;
            *((std::uint64_t*)&opaqueValue461 + 1) = stackStorage727;
            opaqueValue258 = sub_1803B4330 (stackStorage613, &opaqueValue461);
            sub_1800A3AA0 (stackStorage748, opaqueValue258);
            sub_1800815D0 (stackStorage613);
            memoryFreeBuffer (stackStorage613[0]);
            sub_1809A12FC (stackStorage726, 16, 1, sub_1800A3440);
            sub_1809A12FC (stackStorage929, 24, 4, sub_180211140);
            sub_1800A3440 (stackStorage852);
            temporaryPointer749 = &emptyJuceStringCharacters;
            opaqueValue750 = 0;
            temporaryPointer259 = (char*)authDiagnosticsBuildJson (cliHost, stackStorage552);
            temporaryPointer260 = temporaryPointer749;
            temporaryPointer749 = *(char**)temporaryPointer259;
            *(std::uint64_t*)temporaryPointer259 = temporaryPointer260;
            sub_18000B8D0 (stackStorage552);
            opaqueValue261 = urlString436;
            opaqueValue262 = sub_1800755F0 (urlString436);
            opaqueValue750 = sub_18007EEE0 (opaqueValue262 + 272, 2);
            if ((std::uint8_t)sub_180097F10 (&temporaryPointer749, &nextString441) != 0 && opaqueValue263 == LODWORD (stackStorage435[0]) && (std::uint64_t*)(opaqueValue264 = sub_18007EF80 (opaqueValue261 + 467112, 2)) == reusableString438 && (opaqueValue265 = sub_1807FC6B0 (stackStorage554, stackStorage434), opaqueValue266 = sub_1800742F0 (opaqueValue261, stackStorage652), opaqueValue267 = sub_1807FC6B0 (stackStorage553, opaqueValue266), opaqueValue8 |= 0xE00000u, opaqueValue433 = opaqueValue8, (std::uint8_t)sub_180097F10 (opaqueValue267, opaqueValue265) != 0))
            {
                LOBYTE (opaqueValue268) = 1;
            }
            else
            {
                opaqueValue268 = 0;
            }
            sub_1807FBDA0 (opaqueValue268, "REVISION_CONFLICT", 5);
            if ((opaqueValue8 & 0x800000) != 0)
            {
                opaqueValue8 &= ~0x800000u;
                opaqueValue433 = opaqueValue8;
                sub_18000B8D0 (stackStorage553);
            }
            if ((opaqueValue8 & 0x400000) != 0)
            {
                opaqueValue8 &= ~0x400000u;
                opaqueValue433 = opaqueValue8;
                memoryFreeBuffer (stackStorage652[0]);
            }
            if ((opaqueValue8 & 0x200000) != 0)
            {
                opaqueValue433 = opaqueValue8 & 0xFFDFFFFF;
                sub_18000B8D0 (stackStorage554);
            }
            sub_18080CB20 (cliHost, stackStorage745);
            opaqueValue269 = sub_180097C20 (stackStorage558, *(std::uint64_t*)(cliHost + 288));
            opaqueValue270 = sub_1807FC6B0 (stackStorage555, stackStorage745);
            opaqueValue271 = sub_180098710 (stackStorage556, opaqueValue270, stackStorage747);
            temporaryPointer272 = (std::uint64_t*)sub_180098710 (stackStorage557, opaqueValue271, opaqueValue269);
            opaqueValue273 = sub_180471140 (stackStorage986, *temporaryPointer272);
            sub_1804712C0 (opaqueValue273, stackStorage435);
            sub_18000B8D0 (stackStorage557);
            sub_18000B8D0 (stackStorage558);
            sub_1808268A0 (cliHost + 320, &urlString436, stackStorage435, stackStorage745);
            if (*(std::uint8_t*)(cliHost + 72) != 0)
                sub_1808044F0 (cliHost);
            opaqueValue66 = opaqueValue437;
            sub_180809A80 (opaqueValue274, opaqueValue437, stackStorage435, stackStorage745);
            stringStorageToRelease275 = (void*)(stackStorage435[0] - 16);
            if ((void*)(stackStorage435[0] - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease275) == -1)
                memoryFree (stringStorageToRelease275);
            sub_180824F40 (stackStorage745);
            sub_180824EC0 (stackStorage826);
            sub_180097040 (nextString441);
        label122:
            temporaryPointer69 = stackStorage434[0];
            goto label123;
        }
        stackStorage595[0] = "offset";
        stackStorage595[1] = "limit";
        *(std::uint64_t*)&opaqueValue635 = stackStorage595;
        *((std::uint64_t*)&opaqueValue635 + 1) = stackStorage596;
        *(_OWORD*)stackStorage434 = opaqueValue635;
        sub_1807FC060 (temporaryPointer4, stackStorage434);
        scalarValue115 = sub_1807FC4B0 (temporaryPointer4, "offset");
        scalarValue116 = sub_1807FC4B0 (temporaryPointer4, "limit");
        if (scalarValue115 < 0.0 || scalarValue115 > 1000000.0 || sub_1809E18B0() != scalarValue115 || scalarValue116 < 1.0 || scalarValue116 > 128.0 || sub_1809E18B0() != scalarValue116)
        {
            opaqueValue397 = sub_1800971D0 (stackStorage530, "INVALID_REQUEST");
            sub_1807FBD40 (opaqueValue397, 2);
        }
        temporaryPointer444 = nullptr;
        opaqueValue445 = 0;
        stackStorage1006[0] = "audio.devices";
        stackStorage1006[1] = "auth.login";
        stackStorage1006[2] = "auth.logout";
        stackStorage1006[3] = "params.describe";
        stackStorage1006[4] = "params.list";
        stackStorage1006[5] = "params.get";
        stackStorage1006[6] = "presets.inspect";
        stackStorage1006[7] = "presets.validate";
        stackStorage1006[8] = "presets.import";
        stackStorage1006[9] = "presets.export";
        stackStorage1006[10] = "preset.load";
        stackStorage1006[11] = "patch.propose";
        stackStorage1006[12] = "patch.diff";
        stackStorage1006[13] = "patch.commit";
        stackStorage1006[14] = "preview.begin";
        stackStorage1006[15] = "preview.compare";
        stackStorage1006[16] = "preview.keep";
        stackStorage1006[17] = "preview.discard";
        stackStorage1006[18] = "state.inspect";
        stackStorage1006[19] = "state.document";
        stackStorage1006[20] = "state.undo";
        stackStorage1006[21] = "project.init";
        stackStorage1006[22] = "project.inspect";
        stackStorage1006[23] = "project.recover";
        stackStorage1006[24] = "project.save";
        stackStorage1006[25] = "render";
        stackStorage1006[26] = "render.plan";
        stackStorage1006[27] = "audio.enable";
        stackStorage1006[28] = "audio.stop";
        stackStorage1006[29] = "audio.status";
        stackStorage1006[30] = "audio.panic";
        stackStorage1006[31] = "audition.start";
        stackStorage1006[32] = "alt.status";
        stackStorage1006[33] = "alt.submit";
        stackStorage1006[34] = "alt.refine";
        stackStorage1006[35] = "alt.recover";
        stackStorage1006[36] = "alt.diff";
        stackStorage1006[37] = "alt.preview";
        stackStorage1006[38] = "alt.compare";
        stackStorage1006[39] = "alt.keep";
        stackStorage1006[40] = "alt.discard";
        stackStorage1006[41] = "alt.cancel";
        temporaryPointer117 = stackStorage1006;
        stackStorage435[0] = (std::int64_t)stackStorage1006;
        while (1)
        {
            juceStringConstructFromUtf8 (&opaqueValue457, *temporaryPointer117);
            temporaryPointer118 = &unk_180F51230;
            callbackFunction664 = (void (**) (std::uint64_t*, std::int64_t*))&unk_180F51230;
            opaqueValue665 = 1;
            temporaryPointer439 = &emptyJuceStringCharacters;
            opaqueValue119 = opaqueValue457;
            if ((unsigned int)utf8CompareStrings (opaqueValue457, "auth.login") != 0 && (unsigned int)utf8CompareStrings (opaqueValue119, "auth.logout") != 0)
                break;
            conditionFlag155 = *(std::uint8_t*)(cliHost + 176) != 0 && *(std::uint64_t*)(cliHost + 240) != 0;
            callbackFunction664 = (void (**) (std::uint64_t*, std::int64_t*))&unk_180F51230;
            LOBYTE (opaqueValue665) = conditionFlag155;
            juceStringConstructFromUtf8 (&messageString493, "Requires native user approval for this operation; not exposed through MCP");
            temporaryPointer129 = temporaryPointer439;
            temporaryPointer130 = messageString493;
            messageString493 = temporaryPointer439;
        label212:
            temporaryPointer439 = temporaryPointer130;
            stringStorageToRelease156 = temporaryPointer129 - 16;
            if (temporaryPointer129 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease156) == -1)
                memoryFree (stringStorageToRelease156);
        label215:
            sub_180096D60 (stackStorage788, "name");
            opaqueValue157 = *(std::uint64_t*)stackStorage435[0];
            temporaryPointer789 = &unk_180F512B0;
            opaqueValue790 = 0;
            juceStringConstructFromUtf8 (&opaqueValue790, opaqueValue157);
            sub_180096D60 (stackStorage791, "supported");
            temporaryPointer792 = &unk_180F51230;
            opaqueValue793 = 1;
            sub_180096D60 (stackStorage794, "available");
            temporaryPointer795 = &unk_180F51230;
            opaqueValue796 = 1;
            sub_180096D60 (stackStorage797, "permitted");
            callbackFunction798 = callbackFunction664;
            opaqueValue799 = 0;
            callbackFunction664[12](&opaqueValue799, &opaqueValue665);
            sub_1803384A0 (stackStorage800, "reason", &temporaryPointer439);
            *(std::uint64_t*)&opaqueValue639 = stackStorage788;
            *((std::uint64_t*)&opaqueValue639 + 1) = &opaqueValue801;
            *(_OWORD*)stackStorage434 = opaqueValue639;
            opaqueValue158 = sub_1803A3470 (&opaqueValue772, stackStorage434);
            sub_18007EE20 (&temporaryPointer444, opaqueValue158);
            (*(void (**) (char*)) (opaqueValue772 + 88)) (stackStorage773);
            sub_1809A12FC (stackStorage788, 24, 5, sub_180211140);
            stringStorageToRelease159 = temporaryPointer439 - 16;
            if (temporaryPointer439 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease159) == -1)
                memoryFree (stringStorageToRelease159);
            callbackFunction160 = (std::int64_t (*)())callbackFunction664[11];
            if (callbackFunction160 != guard_check_icall_nop)
                ((void (*) (std::int64_t*))callbackFunction160) (&opaqueValue665);
            stringStorageToRelease161 = (void*)(opaqueValue457 - 16);
            if ((void*)(opaqueValue457 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease161) == -1)
                memoryFree (stringStorageToRelease161);
            temporaryPointer117 = (std::int64_t*)(stackStorage435[0] + 8);
            stackStorage435[0] = (std::int64_t)temporaryPointer117;
            if (temporaryPointer117 == &opaqueValue1007)
            {
                sub_180826AC0 (temporaryPointer444, &temporaryPointer444[16 * SHIDWORD (opaqueValue445)], (16LL * SHIDWORD (opaqueValue445)) >> 4, stackStorage432[0]);
                stackStorage467[0] = nullptr;
                stackStorage467[1] = nullptr;
                for (i = (int)scalarValue115; i < SHIDWORD (opaqueValue445); ++i)
                {
                    if (scalarValue116 + scalarValue115 <= (double)i)
                        break;
                    opaqueValue163 = sub_180207FB0 (&temporaryPointer444, &opaqueValue768, (unsigned int)i);
                    sub_18007EE20 (stackStorage467, opaqueValue163);
                    (*(void (**) (char*)) (opaqueValue768 + 88)) (stackStorage769);
                }
                sub_180096D60 (stackStorage934, "capabilities");
                sub_1800A34F0 (stackStorage935, stackStorage467);
                LODWORD (stackStorage435[0]) = HIDWORD (opaqueValue445);
                sub_180825B70 (stackStorage936, opaqueValue164, stackStorage435);
                sub_180338760 (stackStorage937, "sort", "name-ascending");
                scalarValue165 = scalarValue116 + scalarValue115;
                if ((double)SHIDWORD (opaqueValue445) <= scalarValue165)
                {
                    callbackFunction704 = (void (**) (std::uint64_t*))&unk_180F51130;
                    opaqueValue705 = 0;
                    temporaryPointer167 = (void**)&callbackFunction704;
                    opaqueValue168 = opaqueValue8 | 0x4000;
                }
                else
                {
                    temporaryPointer166 = (std::int64_t*)sub_180097BD0 (&opaqueValue529, (unsigned int)(int)scalarValue165);
                    callbackFunction683 = (void (**) (std::uint64_t*))&unk_180F512B0;
                    opaqueValue684 = 0;
                    opaqueValue684 = *temporaryPointer166;
                    *temporaryPointer166 = (std::int64_t)&emptyJuceStringCharacters;
                    temporaryPointer167 = (void**)&callbackFunction683;
                    opaqueValue168 = opaqueValue8 | 0x3000;
                }
                sub_180338C70 (stackStorage938, "nextCursor", temporaryPointer167);
                sub_180096D60 (stackStorage856, "controlFrameBytes");
                temporaryPointer857 = &unk_180F51450;
                opaqueValue858 = 0x100000;
                LODWORD (stackStorage435[0]) = 32;
                sub_1803386B0 (stackStorage859, "pending", stackStorage435);
                sub_180096D60 (stackStorage860, "batchItems");
                temporaryPointer861 = &unk_180F51450;
                opaqueValue862 = 32;
                LODWORD (stackStorage435[0]) = 600;
                sub_1803386B0 (stackStorage863, "renderSeconds", stackStorage435);
                sub_180096D60 (stackStorage864, "midiEvents");
                temporaryPointer865 = &unk_180F51450;
                opaqueValue866 = 0x10000;
                LODWORD (stackStorage435[0]) = 2;
                sub_1803386B0 (stackStorage867, "channels", stackStorage435);
                LODWORD (stackStorage435[0]) = 0;
                sub_1803386B0 (stackStorage868, "seedMin", stackStorage435);
                sub_180096D60 (stackStorage869, "seedMax");
                temporaryPointer870 = &unk_180F51350;
                opaqueValue871 = 0xFFFFFFFFLL;
                *(std::uint64_t*)&opaqueValue641 = stackStorage856;
                *((std::uint64_t*)&opaqueValue641 + 1) = stackStorage872;
                *(_OWORD*)stackStorage434 = opaqueValue641;
                opaqueValue169 = sub_1803A3470 (&opaqueValue756, stackStorage434);
                sub_180338C70 (stackStorage939, "limits", opaqueValue169);
                *(std::uint64_t*)&opaqueValue642 = stackStorage934;
                *((std::uint64_t*)&opaqueValue642 + 1) = &opaqueValue940;
                *(_OWORD*)stackStorage434 = opaqueValue642;
                opaqueValue66 = opaqueValue437;
                sub_1803A3470 (opaqueValue437, stackStorage434);
                opaqueValue170 = opaqueValue168 | 1;
                opaqueValue433 = opaqueValue170;
                sub_1809A12FC (stackStorage934, 24, 5, sub_180211140);
                (*(void (**) (char*)) (opaqueValue756 + 88)) (stackStorage757);
                sub_1809A12FC (stackStorage856, 24, 8, sub_180211140);
                if ((opaqueValue170 & 0x4000) != 0)
                {
                    opaqueValue170 &= ~0x4000u;
                    opaqueValue433 = opaqueValue170;
                    callbackFunction704[11](&opaqueValue705);
                }
                if ((opaqueValue170 & 0x2000) != 0)
                {
                    opaqueValue170 &= ~0x2000u;
                    opaqueValue433 = opaqueValue170;
                    callbackFunction683[11](&opaqueValue684);
                }
                if ((opaqueValue170 & 0x1000) != 0)
                {
                    stringStorageToRelease171 = (void*)(opaqueValue529 - 16);
                    if ((void*)(opaqueValue529 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease171) == -1)
                        memoryFree (stringStorageToRelease171);
                }
                sub_1800815D0 (stackStorage467);
                memoryFreeBuffer (stackStorage467[0]);
                sub_1800815D0 (&temporaryPointer444);
                temporaryPointer69 = temporaryPointer444;
                goto label123;
            }
        }
        opaqueValue120 = 0;
        while (1)
        {
            opaqueValue121 = *(std::uint8_t*)(opaqueValue119 + opaqueValue120++);
            if (opaqueValue121 != aRender[opaqueValue120 - 1])
                break;
            if (opaqueValue120 == 7)
            {
                opaqueValue122 = *(std::uint64_t*)(cliHost + 88);
                if (opaqueValue122 != 0)
                {
                    isAuthorizedReadonly = audioGateIsRenderAuthorized (opaqueValue122);
                    temporaryPointer687 = &unk_180F51230;
                    conditionFlag688 = isAuthorizedReadonly;
                    temporaryPointer124 = (void**)&temporaryPointer687;
                    opaqueValue8 |= 4u;
                    callbackFunction125 = (void (**) (std::uint64_t*, std::int64_t*))&unk_180F51230;
                    temporaryPointer118 = callbackFunction664;
                }
                else
                {
                    callbackFunction125 = (void (**) (std::uint64_t*, std::int64_t*))&unk_180F51130;
                    temporaryPointer708 = &unk_180F51130;
                    opaqueValue709 = 0;
                    temporaryPointer124 = (void**)&temporaryPointer708;
                    opaqueValue8 |= 8u;
                }
                opaqueValue433 = opaqueValue8;
                callbackFunction664 = callbackFunction125;
                *temporaryPointer124 = temporaryPointer118;
                temporaryPointer126 = (void*)opaqueValue665;
                opaqueValue665 = (std::int64_t)temporaryPointer124[1];
                temporaryPointer124[1] = temporaryPointer126;
                if ((opaqueValue8 & 8) != 0)
                {
                    opaqueValue8 &= ~8u;
                    opaqueValue433 = opaqueValue8;
                    callbackFunction127 = (std::int64_t (*)())temporaryPointer708[11];
                    if (callbackFunction127 != guard_check_icall_nop)
                        ((void (*) (std::int64_t*))callbackFunction127) (&opaqueValue709);
                }
                if ((opaqueValue8 & 4) != 0)
                {
                    opaqueValue8 &= ~4u;
                    opaqueValue433 = opaqueValue8;
                    callbackFunction128 = (std::int64_t (*)())temporaryPointer687[11];
                    if (callbackFunction128 != guard_check_icall_nop)
                        ((void (*) (std::int64_t*))callbackFunction128) (&conditionFlag688);
                }
                juceStringConstructFromUtf8 (&messageString500, "Requires current product authorization and confined export permission");
                temporaryPointer129 = temporaryPointer439;
                temporaryPointer130 = messageString500;
                messageString500 = temporaryPointer439;
                goto label212;
            }
        }
        if ((unsigned int)utf8CompareStrings (opaqueValue119, "render.plan") == 0)
        {
            callbackFunction664 = (void (**) (std::uint64_t*, std::int64_t*))&unk_180F51130;
            temporaryPointer754 = &unk_180F51230;
            opaqueValue131 = opaqueValue665;
            opaqueValue665 = 0;
            opaqueValue755 = opaqueValue131;
            juceStringConstructFromUtf8 (&messageString471, "Confined read/export scope is checked for each input; no rendering or authorization grant");
            temporaryPointer129 = temporaryPointer439;
            temporaryPointer130 = messageString471;
            messageString471 = temporaryPointer439;
            goto label212;
        }
        if ((unsigned int)utf8CompareStrings (opaqueValue119, "audio.enable") == 0 || (unsigned int)utf8CompareStrings (opaqueValue119, "audition.start") == 0)
        {
            if (*(std::uint64_t*)(cliHost + 240) != 0)
            {
                opaqueValue145 = *(std::uint64_t*)(cliHost + 152);
                if (opaqueValue145 > clockGetUnixTimeMilliseconds())
                {
                    opaqueValue146 = *(std::uint64_t*)(cliHost + 88);
                    if (opaqueValue146 != 0)
                    {
                        isRenderAuthorized147 = audioGateIsRenderAuthorized (opaqueValue146);
                        callbackFunction148 = (void (**) (std::uint64_t*))&unk_180F51230;
                        callbackFunction691 = (void (**) (std::uint64_t*))&unk_180F51230;
                        conditionFlag692 = isRenderAuthorized147;
                        temporaryPointer149 = (void**)&callbackFunction691;
                        opaqueValue150 = opaqueValue8 | 0x10;
                    }
                    else
                    {
                        callbackFunction148 = (void (**) (std::uint64_t*))&unk_180F51130;
                        callbackFunction702 = (void (**) (std::uint64_t*))&unk_180F51130;
                        opaqueValue703 = 0;
                        temporaryPointer149 = (void**)&callbackFunction702;
                        opaqueValue150 = opaqueValue8 | 0x20;
                    }
                    *temporaryPointer149 = &unk_180F51130;
                    callbackFunction700 = callbackFunction148;
                    temporaryPointer151 = temporaryPointer149[1];
                    temporaryPointer149[1] = nullptr;
                    temporaryPointer701 = temporaryPointer151;
                    temporaryPointer152 = (void**)&callbackFunction700;
                    opaqueValue8 = opaqueValue150 | 0x40;
                    temporaryPointer118 = callbackFunction664;
                    goto label197;
                }
                temporaryPointer118 = callbackFunction664;
            }
            callbackFunction148 = (void (**) (std::uint64_t*))&unk_180F51230;
            temporaryPointer689 = &unk_180F51230;
            opaqueValue690 = 0;
            temporaryPointer152 = (void**)&temporaryPointer689;
            opaqueValue8 |= 0x80u;
        label197:
            opaqueValue433 = opaqueValue8;
            callbackFunction664 = (void (**) (std::uint64_t*, std::int64_t*))callbackFunction148;
            *temporaryPointer152 = temporaryPointer118;
            temporaryPointer153 = (void*)opaqueValue665;
            opaqueValue665 = (std::int64_t)temporaryPointer152[1];
            temporaryPointer152[1] = temporaryPointer153;
            if ((opaqueValue8 & 0x80u) != 0)
            {
                opaqueValue8 &= ~0x80u;
                opaqueValue433 = opaqueValue8;
                callbackFunction154 = (std::int64_t (*)())temporaryPointer689[11];
                if (callbackFunction154 != guard_check_icall_nop)
                    ((void (*) (std::int64_t*))callbackFunction154) (&opaqueValue690);
            }
            if ((opaqueValue8 & 0x40) != 0)
            {
                opaqueValue8 &= ~0x40u;
                opaqueValue433 = opaqueValue8;
                ((void (**) (void**))callbackFunction700)[11](&temporaryPointer701);
            }
            if ((opaqueValue8 & 0x20) != 0)
            {
                opaqueValue8 &= ~0x20u;
                opaqueValue433 = opaqueValue8;
                callbackFunction702[11](&opaqueValue703);
            }
            if ((opaqueValue8 & 0x10) != 0)
            {
                opaqueValue8 &= ~0x10u;
                opaqueValue433 = opaqueValue8;
                callbackFunction691[11](&conditionFlag692);
            }
            juceStringConstructFromUtf8 (&messageString498, "Requires native user approval, an output deadline and product authorization");
            temporaryPointer129 = temporaryPointer439;
            temporaryPointer130 = messageString498;
            messageString498 = temporaryPointer439;
            goto label212;
        }
        if ((unsigned int)utf8CompareStrings (opaqueValue119, "alt.submit") != 0 && (unsigned int)utf8CompareStrings (opaqueValue119, "alt.refine") != 0)
        {
            if ((std::uint8_t)juceStringStartsWithUtf8 (&opaqueValue457, "alt.") != 0 && (unsigned int)utf8CompareStrings (opaqueValue119, "alt.status") != 0 && (std::uint8_t)sub_180097FC0 (&opaqueValue457, "alt.cancel") != 0)
            {
                sub_1800A3830 (&callbackFunction664, *(std::uint8_t*)(cliHost + 72));
                juceStringConstructFromUtf8 (&messageString462, "Requires project-owned persisted ALT records; no cloud replay");
                temporaryPointer132 = temporaryPointer439;
                temporaryPointer439 = messageString462;
                messageString462 = temporaryPointer132;
                sub_18000B8D0 (&messageString462);
            }
            goto label215;
        }
        if (*(std::uint8_t*)(cliHost + 72) != 0)
        {
            opaqueValue133 = *(std::uint64_t*)(cliHost + 160);
            if (opaqueValue133 > clockGetUnixTimeMilliseconds() && *(std::uint64_t*)(cliHost + 168) == 32000000)
            {
                opaqueValue134 = *(std::uint64_t*)(cliHost + 88);
                if (opaqueValue134 != 0)
                {
                    isRenderAuthorized135 = audioGateIsRenderAuthorized (opaqueValue134);
                    temporaryPointer136 = (std::uint64_t*)sub_1800A34D0 (&opaqueValue764, isRenderAuthorized135);
                    opaqueValue137 = opaqueValue8 | 0x100;
                }
                else
                {
                    temporaryPointer136 = (std::uint64_t*)sub_1800A3420 (&opaqueValue770);
                    opaqueValue137 = opaqueValue8 | 0x200;
                }
                temporaryPointer138 = temporaryPointer136;
                callbackFunction139 = (void (**) (std::uint64_t*))*temporaryPointer136;
                *temporaryPointer138 = &unk_180F51130;
                callbackFunction695 = callbackFunction139;
                opaqueValue140 = temporaryPointer138[1];
                temporaryPointer138[1] = 0;
                opaqueValue696 = opaqueValue140;
                temporaryPointer141 = (void**)&callbackFunction695;
                opaqueValue8 = opaqueValue137 | 0x400;
                callbackFunction142 = (void (**) (std::uint64_t*, std::int64_t*))callbackFunction695;
                temporaryPointer118 = callbackFunction664;
                goto label179;
            }
            temporaryPointer118 = callbackFunction664;
        }
        callbackFunction142 = (void (**) (std::uint64_t*, std::int64_t*))&unk_180F51230;
        temporaryPointer693 = &unk_180F51230;
        opaqueValue694 = 0;
        temporaryPointer141 = (void**)&temporaryPointer693;
        opaqueValue8 |= 0x800u;
    label179:
        opaqueValue433 = opaqueValue8;
        callbackFunction664 = callbackFunction142;
        *temporaryPointer141 = temporaryPointer118;
        temporaryPointer143 = (void*)opaqueValue665;
        opaqueValue665 = (std::int64_t)temporaryPointer141[1];
        temporaryPointer141[1] = temporaryPointer143;
        if ((opaqueValue8 & 0x800) != 0)
        {
            opaqueValue8 &= ~0x800u;
            opaqueValue433 = opaqueValue8;
            callbackFunction144 = (std::int64_t (*)())temporaryPointer693[11];
            if (callbackFunction144 != guard_check_icall_nop)
                ((void (*) (std::int64_t*))callbackFunction144) (&opaqueValue694);
        }
        if ((opaqueValue8 & 0x400) != 0)
        {
            opaqueValue8 &= ~0x400u;
            opaqueValue433 = opaqueValue8;
            callbackFunction695[11](&opaqueValue696);
        }
        if ((opaqueValue8 & 0x200) != 0)
        {
            opaqueValue8 &= ~0x200u;
            opaqueValue433 = opaqueValue8;
            (*(void (**) (char*)) (opaqueValue770 + 88)) (stackStorage771);
        }
        if ((opaqueValue8 & 0x100) != 0)
        {
            opaqueValue8 &= ~0x100u;
            opaqueValue433 = opaqueValue8;
            (*(void (**) (char*)) (opaqueValue764 + 88)) (stackStorage765);
        }
        juceStringConstructFromUtf8 (&messageString499, "Requires project, explicit cloud scope, supported budget, product and AI entitlement");
        temporaryPointer129 = temporaryPointer439;
        temporaryPointer130 = messageString499;
        messageString499 = temporaryPointer439;
        goto label212;
    }
    if ((unsigned int)utf8CompareStrings (*temporaryPointer5, "auth.handoff") != 0)
    {
        si128 = 0;
    }
    else
    {
        temporaryPointer484 = "out";
        stackStorage434[0] = &temporaryPointer484;
        stackStorage434[1] = &temporaryPointer485;
        si128 = _mm_load_si128 ((const __m128i*)stackStorage434);
    }
    *(__m128i*)stackStorage434 = si128;
    sub_1807FC060 (temporaryPointer4, stackStorage434);
    if (*(std::uint8_t*)(cliHost + 176) == 0)
    {
        opaqueValue423 = sub_1800971D0 (stackStorage575, "APPROVAL_REQUIRED");
        sub_1807FBD40 (opaqueValue423, 3);
    }
    sub_18081BA10 (cliHost, temporaryPointer5, temporaryPointer4);
    stackStorage435[0] = cliHostGetProcessor (cliHost);
    opaqueValue342 = *(std::uint64_t*)(stackStorage435[0] + 475552);
    *(std::uint64_t*)&urlString436 = opaqueValue342;
    opaqueValue343 = *(std::uint64_t*)(opaqueValue342 + 40);
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue343 + 1168));
    LOBYTE (opaqueValue342) = *(std::uint8_t*)(*(std::uint64_t*)(opaqueValue342 + 40) + 1728LL);
    LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue343 + 1168));
    if ((std::uint8_t)opaqueValue342 == 0)
    {
        opaqueValue424 = sub_1800971D0 (stackStorage576, "AUTH_STATUS_PENDING");
        sub_1807FBD40 (opaqueValue424, 6);
    }
    opaqueValue344 = urlString436;
    opaqueValue345 = *(std::uint64_t*)(urlString436 + 40);
    EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue345 + 1168));
    authManagerSnapshotState ((std::int64_t)stackStorage983, *(std::uint64_t*)(opaqueValue344 + 40));
    LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue345 + 1168));
    temporaryPointer346 = "FAD-AUTH-KEYSTORE";
    for (j = 0;; ++j)
    {
        while (1)
        {
            opaqueValue348 = *(std::uint8_t*)temporaryPointer346++;
            if ((opaqueValue348 & 0x80u) == 0)
                break;
            if ((*temporaryPointer346 & 0xC0) != 0x80)
                goto label524;
            do
                ++temporaryPointer346;
            while ((*temporaryPointer346 & 0xC0) == 0x80);
            ++j;
        }
        if (opaqueValue348 == 0)
            break;
    label524:;
    }
    if ((unsigned int)sub_1800B3B00 (stackStorage985, "FAD-AUTH-KEYSTORE", j) == 0 || (unsigned int)utf8CompareStrings (stackStorage985[0], "FAD-AUTH-STATE-READ") == 0)
    {
        opaqueValue387 = sub_1800971D0 (stackStorage589, "AUTH_STORAGE_UNAVAILABLE");
        sub_1807FBD40 (opaqueValue387, 3);
    }
    temporaryPointer349 = reusableString438;
    if ((unsigned int)utf8CompareStrings (*reusableString438, "auth.logout") == 0)
    {
        if ((std::uint8_t)sub_18002CBA0 (cliHost + 136) != 0)
        {
            opaqueValue426 = sub_180011290 (opaqueValue425);
            standaloneAudioCloseDevice (opaqueValue426);
        }
        sub_1802C8BC0 (stackStorage435[0]);
        sub_180360960 (opaqueValue344);
        opaqueValue427 = sub_1800971D0 (stackStorage577, "RESULT_AMBIGUOUS");
        sub_1807FBD40 (opaqueValue427, 6);
    }
    if (stackStorage983[0] != 0 && audioGateIsRenderAuthorized (stackStorage435[0]))
    {
        sub_180096D60 (stackStorage739, "status");
        temporaryPointer740 = &unk_180F512B0;
        authorizedString741 = 0;
        juceStringConstructFromUtf8 (&authorizedString741, "authorized");
        sub_180096D60 (stackStorage742, "synthPermitted");
        temporaryPointer743 = &unk_180F51230;
        opaqueValue744 = 1;
        *(std::uint64_t*)&opaqueValue618 = stackStorage739;
        *((std::uint64_t*)&opaqueValue618 + 1) = stackStorage745;
        *(_OWORD*)stackStorage434 = opaqueValue618;
        sub_1803A3470 (opaqueValue437, stackStorage434);
        opaqueValue433 = opaqueValue8 | 1;
        opaqueValue350 = 2;
        temporaryPointer351 = stackStorage739;
        goto label531;
    }
    if ((unsigned int)utf8CompareStrings (*temporaryPointer349, "auth.login") == 0)
    {
        temporaryPointer485 = &emptyJuceStringCharacters;
        juceStringConstructFromUtf8 (stackStorage435, "1.1.2");
        juceStringConstructFromUtf8 (&reusableString438, "Windows");
        opaqueValue354 = sub_1800361E0 (&opaqueValue578);
        sub_180364150 (opaqueValue344, opaqueValue354, (unsigned int)&reusableString438, (unsigned int)stackStorage435, (std::int64_t)&temporaryPointer485);
        stringStorageToRelease355 = (void*)(opaqueValue578 - 16);
        if ((void*)(opaqueValue578 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease355) == -1)
            memoryFree (stringStorageToRelease355);
        temporaryPointer356 = reusableString438 - 2;
        if (reusableString438 - 2 != (std::uint64_t*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)temporaryPointer356) == -1)
            memoryFree (temporaryPointer356);
        stringStorageToRelease357 = (void*)(stackStorage435[0] - 16);
        if ((void*)(stackStorage435[0] - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease357) == -1)
            memoryFree (stringStorageToRelease357);
        stringStorageToRelease358 = temporaryPointer485 - 16;
        if (temporaryPointer485 - 16 != (char*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease358) == -1)
            memoryFree (stringStorageToRelease358);
        opaqueValue359 = sub_18009EA20 (stringStorageToRelease358);
        *(std::uint64_t*)&urlString436 = opaqueValue359 + 16;
        EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue359 + 16));
        sub_18009E8C0 (opaqueValue359);
        temporaryPointer579 = "status";
        sub_1800B4BF0 (stackStorage716, opaqueValue359, &temporaryPointer579);
        LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue359 + 16));
        temporaryPointer717 = &unk_180F512B0;
        activation_requestedString718 = 0;
        juceStringConstructFromUtf8 (&activation_requestedString718, "activation_requested");
        opaqueValue361 = sub_18009EA20 (opaqueValue360);
        *(std::uint64_t*)&urlString436 = opaqueValue361 + 16;
        EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue361 + 16));
        sub_18009E8C0 (opaqueValue361);
        temporaryPointer580 = "synthPermitted";
        sub_1800B4BF0 (stackStorage719, opaqueValue361, &temporaryPointer580);
        LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue361 + 16));
        temporaryPointer720 = &unk_180F51230;
        opaqueValue721 = 0;
        opaqueValue363 = sub_18009EA20 (opaqueValue362);
        *(std::uint64_t*)&urlString436 = opaqueValue363 + 16;
        EnterCriticalSection ((LPCRITICAL_SECTION)(opaqueValue363 + 16));
        sub_18009E8C0 (opaqueValue363);
        temporaryPointer581 = "automaticBrowserOpen";
        sub_1800B4BF0 (stackStorage722, opaqueValue363, &temporaryPointer581);
        LeaveCriticalSection ((LPCRITICAL_SECTION)(opaqueValue363 + 16));
        temporaryPointer723 = &unk_180F51230;
        opaqueValue724 = 0;
        *(std::uint64_t*)&opaqueValue603 = stackStorage716;
        *((std::uint64_t*)&opaqueValue603 + 1) = &opaqueValue725;
        *(_OWORD*)stackStorage434 = opaqueValue603;
        sub_1803A3470 (opaqueValue437, stackStorage434);
        opaqueValue433 = opaqueValue8 | 1;
        opaqueValue350 = 3;
        temporaryPointer351 = stackStorage716;
        goto label531;
    }
    if (*temporaryPointer984 != 0)
    {
        LOBYTE (opaqueValue353) = 1;
        opaqueValue364 = sub_1800B19E0 (&opaqueValue582, &temporaryPointer984, opaqueValue353);
        juceStringConstructFromUtf8 (stackStorage486, "/activate?code=");
        sub_180098710 (&opaqueValue440, stackStorage486, opaqueValue364);
        stringStorageToRelease365 = (void*)(opaqueValue582 - 16);
        if ((void*)(opaqueValue582 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease365) == -1)
            memoryFree (stringStorageToRelease365);
        juceStringConstructFromUtf8 (&urlString436, "https://fadrecords.com/login");
        opaqueValue366 = urlString436;
        stackStorage598[0] = urlString436;
        if ((void*)(urlString436 - 16) != &emptyJuceStringStorage)
            _InterlockedIncrement ((volatile std::int32_t*)(urlString436 - 16));
        memset (&stackStorage598[1], 0, 48);
        stackStorage598[7] = &emptyJuceStringCharacters;
        stackStorage598[8] = 0;
        stackStorage598[9] = 0;
        sub_1800AF3A0 (stackStorage598);
        juceStringConstructFromUtf8 (&nextString441, "next");
        sub_180089B70 (stackStorage657, stackStorage598);
        sub_1800AFD60 (stackStorage657, &nextString441, &opaqueValue440);
        juceStringConstructFromUtf8 (stackStorage435, "synth-onboarding");
        juceStringConstructFromUtf8 (&reusableString438, "from");
        sub_180089B70 (stackStorage656, stackStorage657);
        sub_1800AFD60 (stackStorage656, &reusableString438, stackStorage435);
        temporaryPointer367 = reusableString438 - 2;
        if (reusableString438 - 2 != (std::uint64_t*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)temporaryPointer367) == -1)
            memoryFree (temporaryPointer367);
        stringStorageToRelease368 = (void*)(stackStorage435[0] - 16);
        if ((void*)(stackStorage435[0] - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease368) == -1)
            memoryFree (stringStorageToRelease368);
        sub_18002C950 (stackStorage657);
        stringStorageToRelease369 = (void*)(nextString441 - 16);
        if ((void*)(nextString441 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease369) == -1)
            memoryFree (stringStorageToRelease369);
        sub_18002C950 (stackStorage598);
        stringStorageToRelease370 = (void*)(opaqueValue366 - 16);
        if ((void*)(opaqueValue366 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease370) == -1)
            memoryFree (stringStorageToRelease370);
        opaqueValue371 = cliHost + 8;
        opaqueValue372 = opaqueValue460;
        opaqueValue373 = sub_1807FBDD0 (&opaqueValue583, opaqueValue460, "out", 0);
        sub_1809311D0 (opaqueValue371, &opaqueValue466, opaqueValue373);
        stringStorageToRelease374 = (void*)(opaqueValue583 - 16);
        if ((void*)(opaqueValue583 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease374) == -1)
            memoryFree (stringStorageToRelease374);
        if (opaqueValue466 == 0)
        {
            opaqueValue428 = sub_1800971D0 (stackStorage584, "PATH_DENIED");
            sub_1807FBD40 (opaqueValue428, 3);
        }
        (*(void (**) (std::int64_t, std::uint64_t*)) (*(std::uint64_t*)opaqueValue466 + 8LL)) (opaqueValue466, &callbackFunction449);
        callbackFunction376 = callbackFunction449;
        if (callbackFunction449 == nullptr || (callbackFunction377 = (*callbackFunction449)[20],
                                               LOBYTE (opaqueValue375) = 1,
                                               opaqueValue378 = sub_1800AFE30 (stackStorage656, &opaqueValue585, opaqueValue375),
                                               opaqueValue379 = opaqueValue8 | 2,
                                               opaqueValue433 = opaqueValue379,
                                               ((std::uint8_t (*) (void (***) (std::uint64_t, std::int64_t), std::int64_t, std::uint64_t, std::uint64_t, std::uint64_t))callbackFunction377) (
                                                   callbackFunction376,
                                                   opaqueValue378,
                                                   0,
                                                   0,
                                                   0) == 0))
        {
            opaqueValue431 = sub_1800971D0 (stackStorage588, "OUTPUT_IO_ERROR");
            sub_1807FBD40 (opaqueValue431, 7);
        }
        if ((opaqueValue379 & 2) != 0)
        {
            opaqueValue379 &= ~2u;
            opaqueValue433 = opaqueValue379;
            stringStorageToRelease380 = (void*)(opaqueValue585 - 16);
            if ((void*)(opaqueValue585 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease380) == -1)
                memoryFree (stringStorageToRelease380);
        }
        ((void (*) (void (***) (std::uint64_t, std::int64_t))) (*callbackFunction449)[1]) (callbackFunction449);
        callbackFunction381 = callbackFunction449;
        callbackFunction449 = nullptr;
        if (callbackFunction381 != nullptr)
            (**callbackFunction381) (callbackFunction381, 1);
        (*(void (**) (std::int64_t, std::uint8_t**)) (*(std::uint64_t*)opaqueValue466 + 16LL)) (opaqueValue466, &temporaryPointer465);
        if (*temporaryPointer465 != 0)
        {
            opaqueValue429 = sub_1800288C0 (&temporaryPointer465);
            opaqueValue430 = sub_18008BD40 (stackStorage586, opaqueValue429);
            sub_1807FBD40 (opaqueValue430, 5);
        }
        sub_180096D60 (stackStorage774, "status");
        temporaryPointer775 = &unk_180F512B0;
        handoff_writtenString776 = 0;
        juceStringConstructFromUtf8 (&handoff_writtenString776, "handoff_written");
        opaqueValue382 = sub_1807FBDD0 (&opaqueValue587, opaqueValue372, "out", 0);
        sub_1808255A0 (stackStorage777, opaqueValue383, opaqueValue382);
        sub_180096D60 (stackStorage778, "synthPermitted");
        temporaryPointer779 = &unk_180F51230;
        opaqueValue780 = 0;
        sub_180096D60 (stackStorage781, "automaticBrowserOpen");
        temporaryPointer782 = &unk_180F51230;
        opaqueValue783 = 0;
        *(std::uint64_t*)&opaqueValue640 = stackStorage774;
        *((std::uint64_t*)&opaqueValue640 + 1) = stackStorage784;
        *(_OWORD*)stackStorage434 = opaqueValue640;
        opaqueValue66 = opaqueValue437;
        sub_1803A3470 (opaqueValue437, stackStorage434);
        opaqueValue433 = opaqueValue379 | 1;
        sub_1809A12FC (stackStorage774, 24, 4, sub_180211140);
        stringStorageToRelease384 = (void*)(opaqueValue587 - 16);
        if ((void*)(opaqueValue587 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease384) == -1)
            memoryFree (stringStorageToRelease384);
        stringStorageToRelease385 = temporaryPointer465 - 16;
        if (temporaryPointer465 - 16 != (std::uint8_t*)&emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease385) == -1)
            memoryFree (stringStorageToRelease385);
        if (callbackFunction449 != nullptr)
            (**callbackFunction449) (callbackFunction449, 1);
        if (opaqueValue466 != 0)
            (**(void (***) (std::int64_t, std::int64_t))opaqueValue466) (opaqueValue466, 1);
        sub_18002C950 (stackStorage656);
        stringStorageToRelease386 = (void*)(opaqueValue440 - 16);
        if ((void*)(opaqueValue440 - 16) != &emptyJuceStringStorage && _InterlockedDecrement ((volatile std::int32_t*)stringStorageToRelease386) == -1)
            memoryFree (stringStorageToRelease386);
        sub_180058EA0 (stackStorage983);
        return opaqueValue66;
    }
    sub_180825500 (stackStorage818, opaqueValue352, "pending");
    sub_180096D60 (stackStorage819, "synthPermitted");
    temporaryPointer820 = &unk_180F51230;
    opaqueValue821 = 0;
    sub_180096D60 (stackStorage822, "errorCode");
    temporaryPointer823 = &unk_180F512B0;
    opaqueValue824 = stackStorage985[0];
    if ((void*)(stackStorage985[0] - 16) != &emptyJuceStringStorage)
        _InterlockedIncrement ((volatile std::int32_t*)(stackStorage985[0] - 16));
    *(std::uint64_t*)&opaqueValue599 = stackStorage818;
    *((std::uint64_t*)&opaqueValue599 + 1) = &opaqueValue825;
    *(_OWORD*)stackStorage434 = opaqueValue599;
    sub_1803A3470 (opaqueValue437, stackStorage434);
    opaqueValue433 = opaqueValue8 | 1;
    opaqueValue350 = 3;
    temporaryPointer351 = stackStorage818;
label531:
    sub_1809A12FC (temporaryPointer351, 24, opaqueValue350, sub_180211140);
    sub_180058EA0 (stackStorage983);
    return opaqueValue437;
}
