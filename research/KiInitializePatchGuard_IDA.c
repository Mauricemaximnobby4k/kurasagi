char __fastcall sub_140BA70B0(unsigned int a1, unsigned int enumDpcExecutionMethod, unsigned int a3, __int64 a4, int a5)
{
  int v6; // edx
  int v7; // eax
  const char *LoadOptions; // rbx
  int v10; // eax
  int v11; // ebx
  int *v12; // rax
  int v13; // edx
  int *v14; // rax
  void *Pool2; // rdi
  __int64 v16; // rdx
  __int64 vExceptionTablePtr; // r15
  unsigned int *vUncompressedBufPool; // rbx
  int v19; // esi
  unsigned int UncompressedSize; // r14d
  unsigned __int64 v21; // rax
  unsigned __int128 v22; // rax
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int128 v26; // rax
  unsigned __int64 v27; // rbx
  unsigned __int64 v28; // rax
  int v29; // eax
  unsigned __int64 v30; // rax
  unsigned __int128 v31; // rax
  unsigned __int64 v32; // rbx
  unsigned __int64 v33; // rax
  unsigned int *v34; // rax
  unsigned int v35; // edx
  unsigned int i; // ecx
  unsigned __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rdx
  unsigned __int64 *v40; // rdx
  int v41; // ebx
  __int64 *v42; // rcx
  __int64 v43; // rdi
  int v44; // ebx
  __int64 *v45; // rcx
  unsigned __int64 *v46; // rdx
  __int64 v47; // rdi
  __int64 v48; // rax
  __int64 v49; // rax
  const void *INITKDBG_Section_Start; // rbx
  ULONG_PTR INITKDBG_SectionSize; // r13
  _DWORD *RtlLookupFunctionEntryEx_Offset; // rdx
  BOOL bIsSystemOnHv; // r14d
  int bIsSystemOnHv2; // edi
  unsigned __int64 v55; // rax
  unsigned __int128 v56; // rax
  unsigned __int64 v57; // rax
  unsigned __int128 v58; // rax
  unsigned __int64 v59; // rax
  unsigned __int128 v60; // rax
  unsigned int FsRtlUninitializeSmallMcb_OffsetFromINITKDBG; // r12d
  const void *v62; // r15
  __int64 v63; // rsi
  unsigned int v64; // edx
  __int64 v65; // r13
  __int64 FuncTable0; // rbx
  _DWORD *vUncompressedBufPool3; // r14
  __int64 UnwindInfoRoutineAddress; // rdx
  int FunctionStartRVA; // edx
  int Index; // r8d
  int CmpValue; // ebx
  __int64 UncompDataIndex; // rcx
  __int64 *TotalFunctionEntry; // r8
  bool v74; // cc
  unsigned int v75; // r13d
  int v76; // ecx
  __int64 v77; // rcx
  ULONG_PTR v78; // rdx
  unsigned __int64 v79; // rcx
  unsigned int v80; // ebx
  __int64 v81; // r14
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  unsigned __int64 v85; // r14
  unsigned __int64 *v86; // rdx
  unsigned __int64 v87; // rcx
  __int64 v88; // rbx
  int v89; // edx
  int v90; // r8d
  int v91; // ebx
  __int64 v92; // r13
  ULONG_PTR v93; // r14
  ULONG_PTR v94; // rbx
  unsigned int v95; // edx
  unsigned __int64 v96; // rax
  unsigned __int128 v97; // rax
  unsigned __int64 v98; // rbx
  int v99; // ebx
  int v100; // ebx
  __int64 v101; // rcx
  unsigned int v102; // edx
  ULONG_PTR v103; // rcx
  __int64 v104; // rax
  ULONG_PTR BeginAddress_Paged; // r14
  unsigned __int64 *v106; // rdx
  __int64 v107; // rbx
  unsigned __int64 v108; // rcx
  int v109; // edx
  int v110; // r8d
  int v111; // ebx
  __int64 v112; // r13
  ULONG_PTR v113; // r14
  unsigned __int64 v114; // rbx
  unsigned int v115; // edx
  unsigned __int64 v116; // rax
  unsigned __int128 v117; // rax
  unsigned __int64 v118; // rcx
  int v119; // ecx
  int v120; // ecx
  int v121; // ecx
  int v122; // ecx
  int v123; // ecx
  unsigned __int64 v124; // rax
  char *v125; // rsi
  _QWORD *v126; // rdx
  char *v127; // rbx
  unsigned int v128; // ecx
  unsigned __int64 v129; // r8
  signed __int64 v130; // rbx
  __int64 PteCounts; // rcx
  int v132; // ebx
  int v133; // ebx
  int v134; // ebx
  unsigned __int64 v135; // rax
  char *v136; // rsi
  _QWORD *v137; // rdx
  char *v138; // rbx
  unsigned int v139; // ecx
  unsigned __int64 v140; // r8
  signed __int64 v141; // rbx
  __int64 v142; // rcx
  int v143; // eax
  int v144; // edx
  unsigned __int64 v145; // rax
  __int64 v146; // rcx
  unsigned int v147; // r13d
  unsigned __int64 v148; // rax
  unsigned __int128 v149; // rax
  unsigned __int64 v150; // rbx
  unsigned __int64 v151; // rax
  unsigned __int64 v152; // rax
  __int64 v153; // rcx
  int v154; // esi
  unsigned __int64 v155; // rax
  unsigned __int128 v156; // rax
  unsigned __int64 v157; // r14
  __int64 PgContext0; // r9
  _OWORD *PgContextReal; // r14
  int v160; // r8d
  _QWORD *v161; // rbx
  unsigned __int64 v162; // r9
  unsigned __int64 v163; // rax
  unsigned __int128 v164; // rax
  unsigned __int64 v165; // rax
  unsigned __int128 v166; // rax
  unsigned __int64 v167; // rdx
  unsigned int v168; // esi
  _QWORD *v169; // rbx
  unsigned __int64 v170; // r8
  unsigned __int64 v171; // rax
  unsigned __int128 v172; // rax
  unsigned __int64 v173; // rax
  unsigned __int128 v174; // rax
  unsigned __int64 v175; // rdx
  int PgSize_c_2792; // esi
  unsigned int v177; // ecx
  char IsKernelCetEnabled; // al
  unsigned __int64 v179; // rdx
  unsigned int v180; // eax
  char *PgC_0; // rsi
  __int64 v182; // r13
  __int64 v183; // rbx
  _DWORD *v184; // rdi
  __int64 v185; // rdx
  int v186; // edx
  int v187; // r8d
  int v188; // ebx
  __int64 v189; // rcx
  __int64 *v190; // rdi
  unsigned int v191; // r13d
  int v192; // ecx
  __int64 v193; // rcx
  ULONG_PTR v194; // rdx
  unsigned __int64 v195; // rcx
  unsigned int v196; // ebx
  __int64 v197; // rdi
  __int64 v198; // rax
  __int64 v199; // rax
  __int64 v200; // rax
  unsigned __int64 v201; // rcx
  unsigned __int64 *v202; // rdx
  unsigned __int64 v203; // rcx
  __int64 v204; // rbx
  int v205; // edx
  int v206; // edi
  int v207; // ebx
  __int64 v208; // r13
  struct _KTIMER *v209; // rdi
  unsigned int v210; // edx
  unsigned __int64 v211; // rax
  unsigned __int128 v212; // rax
  unsigned __int64 v213; // rcx
  int v214; // ecx
  int v215; // ecx
  __int64 v216; // rcx
  unsigned int v217; // edx
  ULONG_PTR v218; // rcx
  __int64 v219; // rax
  unsigned __int64 v220; // r13
  unsigned __int64 *v221; // rdx
  __int64 v222; // rbx
  unsigned __int64 v223; // rcx
  int v224; // edx
  int v225; // edi
  int v226; // ebx
  __int64 v227; // rbx
  unsigned __int64 v228; // r13
  struct _KTIMER *v229; // rdi
  unsigned int v230; // edx
  unsigned __int64 v231; // rax
  unsigned __int128 v232; // rax
  unsigned __int64 v233; // rcx
  int v234; // ecx
  int v235; // ecx
  int v236; // ecx
  int v237; // ecx
  int v238; // ecx
  unsigned __int64 v239; // rax
  __int64 v240; // rax
  void *v241; // rsi
  _QWORD *v242; // rdx
  char *v243; // rbx
  unsigned int v244; // ecx
  unsigned __int64 v245; // rdi
  signed __int64 v246; // rbx
  __int64 v247; // rcx
  int v248; // ecx
  int v249; // ecx
  int v250; // ecx
  unsigned __int64 v251; // rax
  __int64 v252; // rax
  void *v253; // rsi
  _QWORD *v254; // rdx
  char *v255; // rbx
  unsigned int v256; // ecx
  unsigned __int64 v257; // rdi
  signed __int64 v258; // rbx
  __int64 v259; // rcx
  unsigned int v260; // r9d
  unsigned int *v261; // r11
  unsigned int v262; // eax
  unsigned __int64 v263; // r8
  char *v264; // rdi
  _QWORD **v265; // r9
  __int64 v266; // r10
  _QWORD *v267; // rax
  unsigned int v268; // ebx
  char *v269; // r9
  _QWORD *v270; // rcx
  unsigned __int64 v271; // r10
  signed __int64 v272; // r9
  __int64 v273; // rax
  _DWORD *v274; // rbx
  _DWORD *j; // rdx
  int v276; // eax
  _DWORD *v277; // rcx
  _DWORD *v278; // rax
  _DWORD *v279; // rcx
  int v280; // ecx
  unsigned __int64 v281; // rax
  unsigned __int128 v282; // rax
  unsigned __int64 v283; // rax
  unsigned __int128 v284; // rax
  __int64 v285; // rcx
  __int64 v286; // rcx
  unsigned __int64 v287; // rax
  unsigned __int128 v288; // rax
  __int64 v289; // rcx
  __int64 v290; // rdx
  _OWORD *TiASaved; // rcx
  __int64 v292; // rdx
  __int64 *v293; // rax
  __int128 v294; // xmm1
  __int64 (__fastcall *UnexpectedInterruptPtr)(); // rax
  unsigned __int64 v296; // rax
  unsigned __int128 v297; // rax
  unsigned __int64 v298; // rbx
  char v299; // cl
  int v300; // edi
  char v301; // cl
  int v302; // edi
  int v303; // edi
  unsigned int v304; // edi
  unsigned __int64 v305; // rax
  __int64 v306; // rcx
  unsigned __int64 v307; // rax
  unsigned __int128 v308; // rax
  __int64 v309; // rcx
  unsigned __int128 v310; // rax
  int v311; // ecx
  int v312; // ecx
  unsigned __int64 v313; // rax
  unsigned __int128 v314; // rax
  unsigned __int64 v315; // rax
  unsigned __int128 v316; // rax
  unsigned int enumDpcExecutionMethod1; // r13d
  unsigned __int64 v318; // rax
  unsigned __int128 v319; // rax
  unsigned __int64 v320; // rax
  unsigned __int128 v321; // rax
  unsigned __int64 v322; // rax
  unsigned __int128 v323; // rax
  unsigned __int64 v324; // rax
  unsigned __int128 v325; // rax
  unsigned __int64 v326; // rax
  unsigned __int128 v327; // rax
  char v328; // si
  unsigned __int64 v329; // rax
  unsigned __int128 v330; // rax
  unsigned __int64 v331; // rax
  unsigned __int128 v332; // rax
  __int64 v333; // rcx
  unsigned __int64 v334; // rax
  unsigned __int128 v335; // rax
  unsigned int v336; // eax
  unsigned __int64 v337; // rax
  unsigned __int128 v338; // rax
  unsigned __int64 v339; // rbx
  char v340; // cl
  int v341; // r8d
  char v342; // cl
  int v343; // r8d
  __int64 v344; // r8
  int v345; // r8d
  unsigned __int64 v346; // rax
  __int64 v347; // rcx
  unsigned int v348; // r8d
  __int64 ParallelSha256State; // rax
  unsigned __int64 v350; // rax
  unsigned __int128 v351; // rax
  unsigned __int64 v352; // rbx
  unsigned __int64 v353; // rdx
  _QWORD *v354; // rax
  __int64 v355; // rdx
  __int64 v356; // rcx
  unsigned int v362; // edi
  int v363; // ebx
  unsigned __int64 v364; // rax
  unsigned __int128 v365; // rax
  __int64 *v366; // rbx
  __int64 SignalState_high; // rcx
  struct _KTIMER *v368; // rdi
  struct _KTIMER *v369; // rsi
  __int64 v370; // r10
  PKTIMER v371; // r14
  __int64 *v372; // r13
  __int64 v373; // rax
  __int64 v374; // r8
  _QWORD *v375; // r12
  unsigned int v376; // edi
  __int64 v377; // rax
  int v378; // r9d
  _QWORD *v379; // r8
  const char *v380; // rax
  unsigned __int64 v381; // rcx
  unsigned int v382; // r11d
  __int64 v383; // rax
  __int64 v384; // rbx
  unsigned __int128 v385; // rax
  unsigned int v386; // edi
  unsigned __int64 v387; // rax
  __int64 v388; // rax
  int v389; // edx
  unsigned __int64 v390; // rax
  unsigned __int128 v391; // rax
  __int64 v392; // r8
  unsigned __int64 v393; // rax
  __int64 v394; // rcx
  int v395; // edi
  unsigned __int64 v396; // rax
  unsigned __int64 v397; // rbx
  unsigned __int64 v398; // rsi
  __int64 v399; // r10
  __int64 v400; // rax
  int v401; // r8d
  _QWORD *v402; // rbx
  unsigned __int64 v403; // r9
  unsigned __int64 v404; // rax
  unsigned __int128 v405; // rax
  unsigned __int64 v406; // rax
  unsigned __int128 v407; // rax
  unsigned __int64 v408; // rdx
  unsigned int v409; // edi
  _QWORD *v410; // rbx
  unsigned __int64 v411; // r8
  unsigned __int64 v412; // rax
  unsigned __int128 v413; // rax
  unsigned __int64 v414; // rax
  unsigned __int128 v415; // rax
  unsigned __int64 v416; // rdx
  unsigned __int64 v417; // rax
  unsigned __int128 v418; // rax
  __int64 v419; // r8
  unsigned __int64 v420; // rax
  __int64 v421; // rcx
  struct _KTIMER *v422; // rdi
  unsigned __int64 v423; // rax
  unsigned __int64 v424; // rbx
  unsigned __int64 v425; // rsi
  __int64 v426; // r10
  int v427; // r8d
  _QWORD *v428; // rbx
  unsigned __int64 v429; // r9
  unsigned __int64 v430; // rax
  unsigned __int128 v431; // rax
  unsigned __int64 v432; // rax
  unsigned __int128 v433; // rax
  unsigned __int64 v434; // rdx
  unsigned int v435; // edi
  _QWORD *v436; // rbx
  unsigned __int64 v437; // r8
  unsigned __int64 v438; // rax
  unsigned __int128 v439; // rax
  unsigned __int64 v440; // rax
  unsigned __int128 v441; // rax
  unsigned __int64 v442; // rdx
  __int64 v443; // rbx
  unsigned __int64 v444; // rax
  __int64 v445; // r10
  _BYTE *v446; // rcx
  unsigned __int128 v447; // rax
  unsigned int v448; // eax
  _BYTE *v449; // rdi
  unsigned __int8 v450; // r9
  char v451; // al
  _QWORD *v452; // rdi
  int v453; // r8d
  __int64 v454; // r9
  unsigned __int64 v455; // rax
  unsigned __int128 v456; // rax
  unsigned __int64 v457; // rax
  unsigned __int128 v458; // rax
  unsigned __int64 v459; // rdx
  unsigned __int64 v460; // rax
  unsigned __int128 v461; // rax
  unsigned int k; // edi
  unsigned __int64 v463; // rax
  unsigned __int128 v464; // rax
  unsigned __int64 v465; // rcx
  int v466; // ecx
  int v467; // ecx
  int v468; // ecx
  int v469; // ecx
  int v470; // ecx
  unsigned __int64 v471; // rax
  __int64 v472; // rax
  unsigned __int64 v473; // rax
  __int64 v474; // rcx
  unsigned int v475; // r12d
  __int64 v476; // rax
  PKTIMER *v477; // rcx
  PKTIMER v478; // rbx
  unsigned __int64 v479; // rsi
  char v480; // r13
  _QWORD *v481; // rdi
  unsigned __int64 v482; // rax
  unsigned __int64 v483; // rcx
  unsigned __int128 v484; // rax
  PKTIMER *v485; // rcx
  unsigned __int64 v486; // rax
  unsigned __int128 v487; // rax
  unsigned __int64 v488; // rbx
  unsigned __int64 v489; // rax
  __int64 v490; // rax
  unsigned __int64 v491; // rax
  unsigned __int128 v492; // rax
  __int64 v493; // r8
  unsigned __int64 v494; // rax
  __int64 v495; // rcx
  int v496; // edi
  unsigned __int64 v497; // rax
  unsigned __int64 v498; // rbx
  unsigned __int64 v499; // rsi
  __int64 v500; // rax
  __int64 v501; // r10
  int v502; // r8d
  _QWORD *v503; // rbx
  unsigned __int64 v504; // r9
  unsigned __int64 v505; // rax
  unsigned __int128 v506; // rax
  unsigned __int64 v507; // rax
  unsigned __int128 v508; // rax
  unsigned __int64 v509; // rdx
  unsigned int v510; // edi
  _QWORD *v511; // rbx
  unsigned __int64 v512; // r8
  unsigned __int64 v513; // rax
  unsigned __int128 v514; // rax
  unsigned __int64 v515; // rax
  unsigned __int128 v516; // rax
  unsigned __int64 v517; // rdx
  unsigned __int64 v518; // rax
  unsigned __int128 v519; // rax
  __int64 v520; // r8
  unsigned __int64 v521; // rax
  __int64 v522; // rcx
  int v523; // edi
  unsigned __int64 v524; // rax
  unsigned __int64 v525; // rbx
  unsigned __int64 v526; // rsi
  __int64 v527; // rax
  __int64 v528; // r10
  int v529; // r8d
  _QWORD *v530; // rbx
  unsigned __int64 v531; // r9
  unsigned __int64 v532; // rax
  unsigned __int128 v533; // rax
  unsigned __int64 v534; // rax
  unsigned __int128 v535; // rax
  unsigned __int64 v536; // rdx
  unsigned int v537; // edi
  _QWORD *v538; // rbx
  unsigned __int64 v539; // r8
  unsigned __int64 v540; // rax
  unsigned __int128 v541; // rax
  unsigned __int64 v542; // rax
  unsigned __int128 v543; // rax
  unsigned __int64 v544; // rdx
  PKTIMER v545; // rcx
  __int64 v546; // r8
  unsigned __int64 v547; // rax
  __int64 v548; // rcx
  int v549; // edi
  unsigned __int64 v550; // rax
  unsigned __int64 v551; // rbx
  unsigned __int64 v552; // rsi
  __int64 v553; // r10
  int v554; // r8d
  _QWORD *v555; // rbx
  unsigned __int64 v556; // r9
  unsigned __int64 v557; // rax
  unsigned __int128 v558; // rax
  unsigned __int64 v559; // rax
  unsigned __int128 v560; // rax
  unsigned __int64 v561; // rdx
  unsigned int v562; // edi
  _QWORD *v563; // rbx
  unsigned __int64 v564; // r8
  unsigned __int64 v565; // rax
  unsigned __int128 v566; // rax
  unsigned __int64 v567; // rax
  unsigned __int128 v568; // rax
  unsigned __int64 v569; // rdx
  __int64 v570; // rax
  unsigned __int64 v571; // rax
  __int64 v572; // rdx
  __int64 v573; // rax
  __int64 v574; // r8
  unsigned __int64 v575; // rax
  __int64 v576; // rcx
  int v577; // edi
  unsigned __int64 v578; // rax
  unsigned __int128 v579; // rax
  unsigned __int64 v580; // rsi
  __int64 v581; // r10
  _DWORD *v582; // rax
  int v583; // r8d
  _QWORD *v584; // rbx
  unsigned __int64 v585; // r9
  unsigned __int64 v586; // rax
  unsigned __int128 v587; // rax
  unsigned __int64 v588; // rax
  unsigned __int128 v589; // rax
  unsigned __int64 v590; // rdx
  unsigned int v591; // edi
  _QWORD *v592; // rbx
  unsigned __int64 v593; // r8
  unsigned __int64 v594; // rax
  unsigned __int128 v595; // rax
  unsigned __int64 v596; // rax
  unsigned __int128 v597; // rax
  unsigned __int64 v598; // rdx
  __int64 v599; // rdi
  __int64 v600; // rbx
  KIRQL v601; // al
  __int64 v602; // rax
  unsigned __int64 v603; // rax
  unsigned __int128 v604; // rax
  unsigned __int64 v605; // rax
  unsigned __int128 v606; // rax
  int v607; // eax
  unsigned __int64 v608; // rax
  unsigned __int128 v609; // rax
  unsigned __int64 v610; // rax
  unsigned __int128 v611; // rax
  __int64 v612; // r8
  unsigned __int64 v613; // rax
  __int64 v614; // rcx
  int v615; // edi
  unsigned __int64 v616; // rax
  unsigned __int128 v617; // rax
  unsigned __int64 v618; // r12
  __int64 v619; // r10
  int v620; // r8d
  _QWORD *v621; // rbx
  unsigned __int64 v622; // r9
  unsigned __int64 v623; // rax
  unsigned __int128 v624; // rax
  unsigned __int64 v625; // rax
  unsigned __int128 v626; // rax
  unsigned __int64 v627; // rdx
  unsigned int v628; // edi
  _QWORD *v629; // rbx
  unsigned __int64 v630; // r8
  unsigned __int64 v631; // rax
  unsigned __int128 v632; // rax
  unsigned __int64 v633; // rax
  unsigned __int128 v634; // rax
  unsigned __int64 v635; // rdx
  __int64 v636; // rbx
  ULONG_PTR v637; // rbx
  unsigned __int64 v638; // rax
  unsigned __int64 v639; // rdx
  unsigned __int128 v640; // rax
  _DWORD *v641; // rax
  _BYTE *v642; // rdi
  int v643; // r12d
  unsigned int v644; // r15d
  ULONG_PTR v645; // r14
  __int64 v646; // rax
  _DWORD *v647; // rcx
  __int64 v648; // rbx
  _DWORD *v649; // r15
  __int64 v650; // rdx
  int v651; // edx
  int v652; // r8d
  int v653; // ebx
  __int64 v654; // rcx
  __int64 *v655; // r8
  int v656; // ecx
  __int64 v657; // rcx
  ULONG_PTR v658; // rdx
  unsigned __int64 v659; // rcx
  unsigned int v660; // ebx
  __int64 v661; // r14
  __int64 v662; // rax
  __int64 v663; // rax
  __int64 v664; // r13
  unsigned int v665; // eax
  const char *v666; // r14
  __int64 v667; // rbx
  unsigned int *v668; // rax
  int v669; // ecx
  unsigned int v670; // eax
  __int64 v671; // r8
  int v672; // edx
  unsigned __int64 v673; // rcx
  int v674; // r15d
  struct _KTIMER *v675; // rdi
  __int64 v676; // r13
  __int64 v677; // r8
  ULONG_PTR v678; // r15
  unsigned int v679; // eax
  unsigned int v680; // r12d
  __int64 v681; // rbx
  int v682; // ecx
  unsigned int v683; // eax
  __int64 v684; // r8
  int v685; // edx
  unsigned __int64 v686; // rcx
  int v687; // r14d
  struct _KTIMER *v688; // rdi
  ULONG_PTR v689; // r10
  int v690; // ecx
  __int64 v691; // rdx
  _QWORD *v692; // rax
  ULONG_PTR v693; // rcx
  _QWORD *v694; // r8
  const char *v695; // rax
  int v696; // r9d
  __int64 v697; // r14
  unsigned __int64 v698; // rbx
  unsigned int v699; // r11d
  __int64 v700; // rax
  __int64 v701; // rbx
  unsigned __int128 v702; // rax
  unsigned int v703; // edx
  unsigned __int64 v704; // rax
  __int64 v705; // rax
  unsigned __int64 m; // rax
  int v707; // r12d
  __int64 v708; // r8
  int v709; // ecx
  __int64 v710; // rdx
  _QWORD *v711; // rax
  const char *v712; // rax
  int v713; // r9d
  unsigned __int64 v714; // rdx
  int v715; // ebx
  __int64 v716; // rax
  int v717; // r12d
  unsigned __int64 n; // rax
  struct _KTIMER *v719; // rcx
  __int64 v720; // r15
  unsigned int v721; // eax
  __int64 v722; // rbx
  int v723; // ecx
  unsigned int v724; // eax
  __int64 v725; // r8
  int v726; // edx
  unsigned __int64 v727; // rcx
  int v728; // r14d
  struct _KTIMER *v729; // rdi
  struct _KTIMER *v730; // r12
  _BYTE *v731; // rdi
  unsigned __int64 v732; // rax
  unsigned __int128 v733; // rax
  __int64 (__fastcall *PreferredDpcRoutine)(); // rdx
  __int64 v735; // rcx
  int v736; // edx
  __int64 v737; // rbx
  _QWORD *v738; // rax
  unsigned __int64 v739; // rdx
  unsigned __int64 ii; // rax
  ULONG_PTR v741; // r8
  int v742; // ebx
  unsigned __int64 v743; // rdx
  __int64 v744; // r9
  unsigned __int64 v745; // rax
  unsigned __int128 v746; // rax
  unsigned __int64 v747; // rax
  unsigned __int128 v748; // rax
  int v749; // ebx
  unsigned __int64 v750; // rax
  unsigned __int128 v751; // rax
  __int64 v752; // rcx
  __int64 v753; // rcx
  __int64 *v754; // r13
  ULONG_PTR v755; // rax
  __int64 v756; // rcx
  ULONG_PTR v757; // r15
  _QWORD *v758; // rax
  ULONG_PTR *v759; // rbx
  unsigned int jj; // r14d
  _QWORD *v761; // rax
  ULONG_PTR *v762; // rbx
  unsigned int kk; // r14d
  __int64 v764; // rcx
  __int64 v765; // rdx
  PVOID *mm; // rbx
  char *v767; // r14
  int v768; // edx
  int v769; // r13d
  __int64 (__fastcall *v770)(ULONG_PTR, char *, ULONG_PTR, __int64); // rax
  _BYTE *v771; // r13
  __int64 v772; // rax
  int v773; // r12d
  __int64 v774; // r14
  unsigned int *v775; // rcx
  int v776; // edx
  int v777; // eax
  unsigned int v778; // r11d
  unsigned int v779; // ecx
  unsigned int v780; // edx
  _DWORD *v781; // r10
  unsigned int v782; // r9d
  int *v783; // rbx
  __int64 v784; // r8
  __int64 v785; // rax
  int v786; // eax
  int v787; // eax
  int v788; // r14d
  struct _KTIMER *v789; // rbx
  __int64 (__fastcall *v790)(ULONG_PTR, char *); // rax
  __int64 v791; // rax
  int v792; // r12d
  struct _KTIMER *v793; // r14
  int v794; // ecx
  __int64 v795; // rdx
  int *v796; // rax
  unsigned int v797; // r11d
  int v798; // ecx
  int v799; // eax
  ULONG_PTR v800; // r8
  ULONG_PTR v801; // r14
  _BYTE *v802; // r10
  unsigned int v803; // r9d
  _BYTE *v804; // rbx
  __int64 v805; // r8
  __int64 v806; // rax
  int v807; // eax
  int v808; // eax
  unsigned int v809; // r12d
  ULONG_PTR v810; // r13
  char **v811; // r15
  _BYTE *v812; // rbx
  __int64 v813; // rcx
  __int64 v814; // rdx
  char *v815; // rdi
  __int64 v816; // r8
  ULONG_PTR v817; // rax
  int v818; // r15d
  __int64 v819; // rdx
  int v820; // eax
  __int64 v821; // rax
  __int64 v822; // rdx
  int v823; // ecx
  __int64 (__fastcall *v824)(ULONG_PTR, __int64, __int64, _DWORD *); // rax
  __int64 v825; // rdx
  __int64 v826; // rcx
  int v827; // eax
  __int64 v828; // rax
  int v829; // ecx
  __int64 (__fastcall *v830)(ULONG_PTR); // rax
  __int64 v831; // rdi
  int v832; // ecx
  __int64 v833; // rcx
  __int64 v834; // r9
  unsigned int v835; // eax
  __int64 v836; // r8
  __int64 *v837; // rdx
  unsigned __int64 v838; // rdi
  __int64 v839; // rax
  __int64 v840; // rax
  int v841; // ecx
  __int64 v842; // rax
  __int64 v843; // rcx
  __int64 v844; // rax
  __int64 v845; // r8
  __int64 v846; // r13
  unsigned int v847; // eax
  __int64 v848; // r10
  unsigned __int64 v849; // rax
  int v850; // edx
  unsigned int v851; // ecx
  __int64 v852; // r9
  int v853; // r8d
  struct _KTIMER *v854; // rdi
  int v855; // r14d
  int v856; // r15d
  __int64 v857; // rdx
  ULONG_PTR v858; // rdi
  ULONG_PTR v859; // rdi
  ULONG_PTR v860; // rsi
  const char **v861; // r12
  _DWORD *v862; // r13
  __int64 v863; // r14
  int v864; // ecx
  const char *v865; // r11
  _QWORD *v866; // rax
  const char *v867; // rax
  const char *v868; // rdi
  int v869; // r9d
  __int64 v870; // r10
  unsigned __int64 v871; // rbx
  unsigned int v872; // r8d
  __int64 v873; // rax
  __int64 v874; // rbx
  unsigned __int128 v875; // rax
  unsigned int v876; // edx
  unsigned __int64 v877; // rax
  __int64 v878; // rax
  unsigned __int64 i12; // rax
  ULONG_PTR v880; // rdi
  _DWORD *v881; // r15
  ULONG_PTR v882; // rbx
  int v883; // eax
  int v884; // ecx
  unsigned int v885; // r8d
  _DWORD *v886; // r13
  _QWORD *v887; // r14
  _DWORD *v888; // r12
  _QWORD *v889; // rax
  unsigned __int64 v890; // rcx
  _QWORD *v891; // r9
  const char *v892; // rax
  int v893; // r11d
  __int64 v894; // r15
  unsigned __int64 v895; // rbx
  unsigned int v896; // r10d
  __int64 v897; // rax
  __int64 v898; // rbx
  unsigned __int64 v899; // rcx
  __int64 v900; // r8
  unsigned __int64 v901; // rax
  __int64 v902; // rax
  unsigned __int64 i13; // rax
  _DWORD *v904; // rbx
  __int64 v905; // r13
  unsigned int v906; // eax
  __int64 v907; // r11
  int v908; // ecx
  unsigned int v909; // eax
  __int64 v910; // r9
  _QWORD *v911; // rcx
  int v912; // r8d
  unsigned __int64 v913; // rdx
  int v914; // r12d
  struct _KTIMER *v915; // rbx
  int v916; // r14d
  ULONG_PTR v917; // r15
  ULONG_PTR v918; // r13
  int v919; // ecx
  __int64 v920; // rdx
  _QWORD *v921; // rax
  const char *v922; // rax
  __int64 v923; // r15
  int v924; // r10d
  unsigned __int64 v925; // r11
  unsigned __int64 v926; // rbx
  unsigned int v927; // r9d
  __int64 v928; // rax
  __int64 v929; // rbx
  unsigned __int128 v930; // rax
  unsigned __int64 v931; // rax
  __int64 v932; // rax
  unsigned __int64 i14; // rax
  ULONG_PTR v934; // r10
  int v935; // r15d
  ULONG_PTR v936; // r12
  unsigned int *v937; // rdi
  __int64 v938; // r13
  __int64 v939; // rax
  _DWORD *v940; // rdi
  ULONG_PTR v941; // rbx
  int v942; // ecx
  _QWORD *v943; // rax
  _QWORD *v944; // rax
  ULONG_PTR v945; // rdi
  int v946; // ecx
  ULONG_PTR v947; // rax
  __int64 v948; // rcx
  __int64 v949; // r10
  unsigned int v950; // eax
  unsigned __int64 v951; // r9
  __int64 v952; // rax
  __int64 v953; // rax
  int v954; // ecx
  __int64 v955; // rax
  ULONG_PTR v956; // rcx
  __int64 v957; // r11
  unsigned int v958; // ecx
  _BYTE *v959; // rbx
  ULONG_PTR v960; // r8
  ULONG_PTR v961; // rdx
  ULONG_PTR v962; // r12
  int v963; // eax
  unsigned __int16 v964; // r15
  struct _KTIMER *v965; // r13
  ULONG_PTR v966; // r14
  int v967; // r9d
  ULONG_PTR v968; // r10
  ULONG_PTR v969; // r11
  unsigned int v970; // edx
  unsigned int v971; // eax
  unsigned int *v972; // rax
  int v973; // r12d
  ULONG_PTR v974; // r11
  ULONG_PTR v975; // r15
  unsigned int v976; // ecx
  unsigned int v977; // eax
  __int64 v978; // rax
  int v979; // r15d
  struct _KTIMER *v980; // r14
  ULONG_PTR v981; // r12
  ULONG_PTR v982; // r13
  int v983; // edx
  unsigned int v984; // ecx
  unsigned int v985; // eax
  __int64 (__fastcall *v986)(ULONG_PTR, ULONG_PTR); // rax
  unsigned int *v987; // r11
  ULONG_PTR v988; // r8
  int v989; // ecx
  PKTIMER v990; // rax
  __int64 v991; // rcx
  __int64 v992; // r10
  unsigned int v993; // eax
  __int64 v994; // r8
  __int64 *v995; // rdx
  unsigned __int64 v996; // r9
  __int64 v997; // rax
  __int64 v998; // rax
  int v999; // ecx
  __int64 v1000; // rax
  __int64 v1001; // rcx
  struct _KTIMER *v1002; // r14
  int v1003; // r15d
  ULONG_PTR v1004; // r12
  ULONG_PTR v1005; // r13
  _DWORD *v1006; // rax
  ULONG_PTR v1007; // rdx
  unsigned int v1008; // eax
  int v1009; // ecx
  __int64 v1010; // rcx
  __int64 v1011; // r10
  unsigned int v1012; // eax
  __int64 v1013; // r8
  __int64 *v1014; // rdx
  unsigned __int64 v1015; // r9
  __int64 v1016; // rax
  __int64 v1017; // rax
  int v1018; // ecx
  __int64 v1019; // rax
  __int64 v1020; // rcx
  int v1021; // ecx
  ULONG_PTR v1022; // rax
  __int64 v1023; // rcx
  __int64 v1024; // r15
  unsigned int v1025; // eax
  unsigned __int64 v1026; // r14
  __int64 v1027; // rax
  __int64 v1028; // rax
  int v1029; // ecx
  ULONG_PTR v1030; // rcx
  __int64 v1031; // rax
  int v1032; // ecx
  ULONG_PTR v1033; // rax
  __int64 v1034; // rcx
  __int64 v1035; // r15
  unsigned int v1036; // eax
  unsigned __int64 v1037; // r14
  __int64 v1038; // rax
  __int64 v1039; // rax
  int v1040; // ecx
  int v1041; // r13d
  struct _KTIMER *v1042; // rdi
  int v1043; // r12d
  ULONG_PTR v1044; // r10
  ULONG_PTR v1045; // r11
  int v1046; // ecx
  ULONG_PTR v1047; // rax
  __int64 v1048; // rcx
  __int64 v1049; // r15
  unsigned int v1050; // eax
  unsigned __int64 v1051; // r14
  __int64 v1052; // rax
  __int64 v1053; // rax
  int v1054; // ecx
  __int64 v1055; // rax
  ULONG_PTR v1056; // rcx
  int v1057; // edx
  unsigned int v1058; // r14d
  __int64 v1059; // r8
  unsigned int v1060; // ecx
  __int64 v1061; // rdi
  int v1062; // ecx
  unsigned int v1063; // eax
  __int64 v1064; // r8
  int v1065; // edx
  unsigned __int64 v1066; // rcx
  int v1067; // r13d
  int v1068; // r14d
  ULONG_PTR v1069; // r12
  struct _KTIMER *v1070; // rbx
  ULONG_PTR v1071; // r15
  __int64 v1072; // r8
  size_t v1073; // rbx
  _QWORD *v1074; // rax
  int v1075; // ecx
  __int64 v1076; // rdx
  unsigned __int64 v1077; // rcx
  unsigned __int64 i15; // rax
  ULONG_PTR v1079; // rax
  struct _KTIMER *v1080; // r9
  ULONG_PTR v1081; // r11
  ULONG_PTR v1082; // r14
  unsigned __int64 v1083; // r12
  ULONG_PTR v1084; // rdi
  __int64 v1085; // rax
  size_t v1086; // r13
  _DWORD *v1087; // rax
  __int64 v1088; // r15
  __int64 v1089; // rcx
  int v1090; // edi
  ULONG_PTR v1091; // r8
  __int64 v1092; // r10
  int v1093; // r15d
  int v1094; // edx
  ULONG_PTR v1095; // rcx
  __int16 v1096; // cx
  struct _KTIMER *v1097; // r11
  int v1098; // r14d
  char *v1099; // rdx
  char *v1100; // rdi
  int v1101; // r8d
  char *v1102; // r9
  ULONG_PTR v1103; // rbx
  char *v1104; // r10
  ULONG_PTR v1105; // rax
  char v1106; // cl
  char v1107; // al
  unsigned int v1108; // edx
  char *v1109; // rbx
  __int64 v1110; // rcx
  __int64 v1111; // rax
  char v1112; // cl
  char v1113; // al
  int v1114; // ebx
  ULONG_PTR v1115; // rdx
  char v1116; // cl
  char v1117; // al
  int v1118; // ebx
  ULONG_PTR v1119; // rdx
  char v1120; // cl
  char v1121; // al
  int v1122; // r12d
  struct _KTIMER *v1123; // rdx
  ULONG_PTR v1124; // r9
  int v1125; // r8d
  ULONG_PTR v1126; // r10
  size_t v1127; // r15
  __int64 v1128; // r11
  unsigned int v1129; // r13d
  unsigned int v1130; // r12d
  unsigned int v1131; // ebx
  unsigned int v1132; // eax
  unsigned int v1133; // ebx
  unsigned int v1134; // eax
  unsigned int v1135; // ecx
  bool v1136; // cf
  size_t v1137; // r13
  __int64 v1138; // rbx
  _DWORD *v1139; // r12
  char *v1140; // rbx
  unsigned int v1141; // edi
  char *v1142; // r12
  unsigned int v1143; // ebx
  int v1144; // eax
  size_t v1145; // rcx
  ULONG_PTR v1146; // r11
  struct _KTIMER *v1147; // r9
  ULONG_PTR v1148; // r14
  size_t v1149; // rdx
  __int64 v1150; // r15
  int v1151; // r10d
  _DWORD *v1152; // r13
  unsigned __int64 v1153; // r8
  const char *v1154; // r12
  const char *v1155; // r8
  const char *v1156; // rcx
  const char *v1157; // rax
  int v1158; // r10d
  unsigned __int64 v1159; // rbx
  unsigned int v1160; // r9d
  __int64 v1161; // rax
  __int64 v1162; // rbx
  unsigned __int128 v1163; // rax
  unsigned int v1164; // edi
  unsigned __int64 v1165; // rax
  __int64 v1166; // rax
  unsigned __int64 i16; // rax
  ULONG_PTR v1168; // r8
  unsigned int *v1169; // rax
  unsigned int v1170; // ecx
  int v1171; // r14d
  struct _KTIMER *v1172; // r9
  ULONG_PTR v1173; // r15
  ULONG_PTR v1174; // r12
  _DWORD *v1175; // rdx
  struct _KTIMER *v1176; // rdi
  ULONG_PTR v1177; // r10
  int v1178; // r9d
  __int64 v1179; // r14
  _DWORD *v1180; // r15
  size_t v1181; // rdx
  ULONG_PTR v1182; // r11
  char v1183; // bl
  unsigned int v1184; // ebx
  unsigned int v1185; // eax
  int v1186; // ecx
  ULONG_PTR v1187; // rax
  __int64 v1188; // rcx
  __int64 v1189; // r8
  unsigned int v1190; // eax
  __int64 *v1191; // rbx
  __int64 v1192; // r13
  __int64 *v1193; // r12
  int v1194; // edx
  __int64 v1195; // rax
  __int64 v1196; // rax
  int v1197; // ecx
  __int64 v1198; // rax
  __int64 v1199; // rcx
  unsigned int v1200; // edi
  ULONG_PTR v1201; // r8
  unsigned int i17; // ebx
  ULONG_PTR v1203; // rdx
  const char *v1204; // rdx
  const char *v1205; // r8
  int v1206; // r10d
  const char *v1207; // rax
  unsigned __int64 v1208; // r11
  const char *v1209; // rcx
  unsigned __int64 v1210; // rbx
  unsigned int v1211; // r9d
  __int64 v1212; // rax
  __int64 v1213; // rbx
  signed __int64 v1214; // rcx
  unsigned int v1215; // edi
  unsigned __int64 v1216; // rax
  __int64 v1217; // rax
  unsigned __int64 i18; // rax
  char *v1219; // rax
  __int64 v1220; // rax
  __int64 v1221; // r13
  unsigned int v1222; // edi
  _QWORD *v1223; // r13
  unsigned int i19; // edx
  struct _KTIMER *v1225; // r9
  int v1226; // r10d
  ULONG_PTR v1227; // r11
  ULONG_PTR v1228; // r14
  __int64 v1229; // r15
  _DWORD *v1230; // r12
  unsigned __int64 v1231; // rbx
  size_t v1232; // rax
  _QWORD *v1233; // r8
  unsigned __int64 v1234; // rbx
  unsigned __int64 v1235; // rdx
  const char *v1236; // rcx
  int v1237; // r10d
  unsigned int v1238; // r9d
  unsigned __int64 v1239; // r11
  __int64 v1240; // rax
  __int64 v1241; // rbx
  unsigned __int128 v1242; // rax
  unsigned int v1243; // edi
  unsigned __int64 v1244; // rax
  __int64 v1245; // rax
  unsigned __int64 i20; // rax
  __int64 v1247; // r12
  ULONG_PTR v1248; // rdi
  ULONG_PTR v1249; // rax
  ULONG_PTR v1250; // rcx
  __int64 v1251; // rax
  __int64 v1252; // rcx
  __int64 v1253; // rax
  ULONG_PTR v1254; // r15
  ULONG_PTR nn; // r14
  __int64 v1256; // rax
  __int64 v1257; // rdx
  int v1258; // eax
  ULONG_PTR v1259; // rbx
  __int64 (__fastcall *v1260)(ULONG_PTR, char *, ULONG_PTR, __int64); // rax
  void *v1261; // rax
  ULONG_PTR v1262; // r12
  PVOID v1263; // r15
  int v1264; // r14d
  struct _KTIMER *v1265; // rax
  int *v1266; // rcx
  unsigned int v1267; // r11d
  int v1268; // ecx
  _BYTE *v1269; // r10
  unsigned int v1270; // r9d
  _BYTE *v1271; // rbx
  __int64 v1272; // r8
  __int64 v1273; // rax
  int v1274; // eax
  int v1275; // eax
  int v1276; // ebx
  char **v1277; // r15
  unsigned int v1278; // r14d
  _BYTE *v1279; // rbx
  __int64 v1280; // rcx
  __int64 v1281; // rdx
  char *v1282; // rdx
  __int64 v1283; // r8
  ULONG_PTR v1284; // rax
  struct _KTIMER *v1285; // r15
  __int64 v1286; // rdx
  int v1287; // eax
  __int64 v1288; // rax
  __int64 v1289; // rdx
  int v1290; // ecx
  __int64 (__fastcall *v1291)(ULONG_PTR, __int64, __int64, int *); // rax
  __int64 v1292; // rdx
  __int64 v1293; // rcx
  int v1294; // eax
  __int64 v1295; // rax
  int v1296; // ecx
  __int64 (__fastcall *v1297)(ULONG_PTR); // rax
  __int64 v1298; // r14
  __int64 v1299; // rax
  __int64 v1300; // r13
  __int64 v1301; // r8
  unsigned int v1302; // eax
  int v1303; // ecx
  unsigned int v1304; // eax
  __int64 v1305; // r8
  int v1306; // edx
  unsigned __int64 v1307; // rcx
  int v1308; // r12d
  struct _KTIMER *v1309; // r14
  int v1310; // r15d
  int v1311; // ebx
  __int64 v1312; // rdx
  _BYTE *v1313; // r8
  const char **v1314; // r12
  _DWORD *v1315; // r13
  __int64 v1316; // r15
  int v1317; // ecx
  const char *v1318; // r11
  _QWORD *v1319; // rax
  const char *v1320; // rax
  const char *v1321; // r8
  int v1322; // r9d
  __int64 v1323; // r14
  unsigned __int64 v1324; // rbx
  unsigned int v1325; // r10d
  __int64 v1326; // rax
  __int64 v1327; // rbx
  unsigned __int128 v1328; // rax
  unsigned int v1329; // edx
  unsigned __int64 v1330; // rax
  __int64 v1331; // rax
  unsigned __int64 i1; // rax
  ULONG_PTR v1333; // r8
  ULONG_PTR v1334; // r13
  char *v1335; // rbx
  int v1336; // eax
  _BYTE *v1337; // r14
  ULONG_PTR v1338; // r13
  unsigned int v1339; // edi
  int v1340; // ecx
  char *v1341; // r11
  _DWORD *v1342; // r12
  __int64 v1343; // rdx
  _QWORD *v1344; // rax
  __int64 i2; // rdx
  unsigned __int64 v1346; // rcx
  _QWORD *v1347; // r8
  const char *v1348; // rax
  int v1349; // r9d
  __int64 v1350; // r15
  unsigned __int64 v1351; // rbx
  unsigned int v1352; // r10d
  __int64 v1353; // rax
  __int64 v1354; // rbx
  unsigned __int128 v1355; // rax
  char v1356; // r9
  unsigned int v1357; // edi
  unsigned __int64 v1358; // rax
  __int64 v1359; // rax
  unsigned __int64 i3; // rax
  LONG *p_LockNV; // rbx
  __int64 v1362; // r13
  unsigned int v1363; // eax
  int v1364; // ecx
  unsigned int v1365; // eax
  __int64 v1366; // r8
  int v1367; // edx
  unsigned __int64 v1368; // rcx
  int v1369; // r12d
  struct _KTIMER *v1370; // rbx
  int v1371; // r14d
  ULONG_PTR v1372; // r15
  struct _KTIMER *v1373; // r13
  int v1374; // ecx
  __int64 v1375; // rdx
  struct _KTIMER *v1376; // rax
  const char *v1377; // r12
  __int64 v1378; // r15
  int v1379; // r10d
  __int64 v1380; // r11
  const char *v1381; // rax
  unsigned __int64 v1382; // rbx
  unsigned int v1383; // r9d
  __int64 v1384; // rax
  __int64 v1385; // rbx
  unsigned __int64 v1386; // rcx
  unsigned __int64 v1387; // rax
  __int64 v1388; // rax
  unsigned __int64 i4; // rax
  struct _KTIMER *v1390; // r14
  __int64 v1391; // r15
  __int64 v1392; // rax
  __int64 v1393; // rbx
  int v1394; // edx
  unsigned __int64 v1395; // rbx
  _QWORD *v1396; // rax
  int v1397; // ecx
  _QWORD *v1398; // rax
  struct _KTIMER *v1399; // r13
  ULONG_PTR v1400; // r12
  int v1401; // r15d
  __int64 v1402; // rax
  __int64 v1403; // rbx
  ULONG_PTR v1404; // rcx
  __int16 v1405; // ax
  int v1406; // ecx
  PVOID v1407; // rax
  __int64 v1408; // rcx
  struct _KTIMER *v1409; // r11
  _QWORD *v1410; // rbx
  __int64 v1411; // r10
  unsigned int v1412; // eax
  int v1413; // r13d
  unsigned __int64 v1414; // r9
  struct _KTIMER *v1415; // r15
  __int64 v1416; // rax
  __int64 v1417; // rax
  int v1418; // ecx
  __int64 v1419; // rcx
  __int64 v1420; // rax
  unsigned __int16 v1421; // r12
  __int64 v1422; // r15
  unsigned int v1423; // ecx
  ULONG_PTR v1424; // r8
  ULONG_PTR v1425; // r13
  PKTIMER v1426; // rdx
  int v1427; // eax
  struct _KTIMER *v1428; // r14
  int v1429; // r10d
  struct _KTIMER *v1430; // r9
  ULONG_PTR v1431; // r11
  unsigned int v1432; // edx
  unsigned int v1433; // eax
  unsigned int *v1434; // rax
  struct _KTIMER *v1435; // r15
  ULONG_PTR v1436; // r12
  unsigned int v1437; // ecx
  struct _KTIMER *v1438; // r9
  unsigned int v1439; // eax
  __int64 v1440; // rax
  int v1441; // r12d
  ULONG_PTR v1442; // r13
  int v1443; // edx
  unsigned int v1444; // ecx
  unsigned int v1445; // eax
  __int64 (__fastcall *v1446)(__int64, PVOID); // rax
  unsigned int *v1447; // r10
  PVOID v1448; // r8
  int v1449; // ecx
  struct _KTIMER *v1450; // r9
  __int64 v1451; // rcx
  __int64 v1452; // r11
  unsigned int v1453; // eax
  __int64 v1454; // r8
  __int64 *v1455; // rdx
  unsigned __int64 v1456; // r10
  int v1457; // r9d
  __int64 v1458; // rax
  __int64 v1459; // rax
  int v1460; // ecx
  __int64 v1461; // rax
  __int64 v1462; // rcx
  char *v1463; // r8
  __int64 (__fastcall *v1464)(unsigned int *, PVOID, char *); // rax
  int v1465; // r12d
  ULONG_PTR v1466; // r13
  _DWORD *v1467; // rax
  PVOID v1468; // rdx
  unsigned int v1469; // eax
  int v1470; // ecx
  struct _KTIMER *v1471; // r9
  __int64 v1472; // rcx
  __int64 v1473; // r11
  unsigned int v1474; // eax
  __int64 v1475; // r8
  __int64 *v1476; // rdx
  unsigned __int64 v1477; // r10
  __int64 v1478; // rax
  __int64 v1479; // rax
  int v1480; // ecx
  __int64 v1481; // rax
  __int64 v1482; // rcx
  int v1483; // ecx
  PVOID v1484; // rax
  __int64 v1485; // rcx
  __int64 v1486; // r12
  unsigned int v1487; // eax
  unsigned __int64 v1488; // r15
  __int64 v1489; // rax
  __int64 v1490; // rax
  int v1491; // ecx
  int v1492; // ecx
  PVOID v1493; // rax
  __int64 v1494; // rcx
  __int64 v1495; // r12
  unsigned int v1496; // eax
  unsigned __int64 v1497; // r15
  __int64 v1498; // rax
  struct _KTIMER *v1499; // r9
  int v1500; // ecx
  PVOID v1501; // rax
  __int64 v1502; // rcx
  __int64 v1503; // r12
  unsigned int v1504; // eax
  unsigned __int64 v1505; // r15
  __int64 v1506; // rax
  int v1507; // edx
  unsigned int v1508; // r15d
  __int64 v1509; // r8
  unsigned int v1510; // ecx
  __int64 v1511; // r14
  int v1512; // ecx
  unsigned int v1513; // eax
  __int64 v1514; // r8
  int v1515; // edx
  unsigned __int64 v1516; // rcx
  struct _KTIMER *v1517; // rbx
  int v1518; // edi
  int v1519; // r13d
  ULONG_PTR v1520; // r15
  struct _KTIMER *v1521; // r12
  ULONG_PTR v1522; // rbx
  _QWORD *v1523; // rax
  int v1524; // ecx
  __int64 v1525; // rdx
  PVOID v1526; // r9
  unsigned __int64 v1527; // rcx
  unsigned __int64 i5; // rax
  struct _KTIMER *v1529; // rax
  struct _KTIMER *v1530; // r10
  ULONG_PTR v1531; // r14
  unsigned __int64 v1532; // rbx
  ULONG_PTR v1533; // rax
  struct _KTIMER *v1534; // r9
  _BYTE *v1535; // r15
  _DWORD *v1536; // rax
  __int64 v1537; // rcx
  ULONG_PTR v1538; // r12
  int v1539; // edi
  int v1540; // r13d
  int v1541; // edx
  ULONG_PTR v1542; // rcx
  __int16 v1543; // cx
  int v1544; // r11d
  struct _KTIMER *v1545; // r14
  char *v1546; // rdx
  int v1547; // r8d
  char *v1548; // rdi
  ULONG_PTR v1549; // rbx
  char *v1550; // r9
  char *v1551; // r10
  char v1552; // cl
  char v1553; // al
  unsigned int v1554; // edx
  char *v1555; // rbx
  __int64 v1556; // rcx
  __int64 v1557; // rax
  char v1558; // cl
  char v1559; // al
  int v1560; // ebx
  ULONG_PTR v1561; // rdx
  char v1562; // cl
  char v1563; // al
  int v1564; // ebx
  ULONG_PTR v1565; // rdx
  char v1566; // cl
  char v1567; // al
  int v1568; // r12d
  struct _KTIMER *v1569; // rdx
  ULONG_PTR v1570; // r9
  int v1571; // r8d
  struct _KTIMER *v1572; // r10
  ULONG_PTR v1573; // r11
  ULONG_PTR v1574; // r14
  ULONG_PTR v1575; // r12
  unsigned int v1576; // r13d
  unsigned int v1577; // ebx
  unsigned int v1578; // eax
  unsigned int v1579; // ebx
  unsigned int v1580; // eax
  unsigned int v1581; // ecx
  unsigned int v1582; // ebx
  _DWORD *v1583; // r13
  char *v1584; // r12
  unsigned int v1585; // edi
  unsigned int v1586; // ebx
  unsigned int v1587; // eax
  ULONG_PTR v1588; // rcx
  struct _KTIMER *v1589; // r10
  int v1590; // r11d
  ULONG_PTR v1591; // r14
  struct _KTIMER *v1592; // r9
  struct _KTIMER *v1593; // r15
  ULONG_PTR v1594; // rdx
  unsigned __int64 v1595; // r8
  _QWORD *v1596; // r8
  ULONG_PTR v1597; // rax
  int v1598; // r10d
  char *v1599; // rcx
  const char *v1600; // rax
  unsigned int v1601; // r9d
  ULONG_PTR i6; // rbx
  __int64 v1603; // rax
  __int64 v1604; // rbx
  unsigned __int128 v1605; // rax
  unsigned int v1606; // edi
  unsigned __int64 v1607; // rax
  __int64 v1608; // rax
  ULONG_PTR i7; // rax
  _DWORD *v1610; // r8
  unsigned int *v1611; // rax
  unsigned int v1612; // ecx
  int v1613; // edx
  struct _KTIMER *v1614; // r9
  ULONG_PTR v1615; // r13
  struct _KTIMER *v1616; // rdi
  struct _KTIMER *v1617; // r11
  int v1618; // r9d
  ULONG_PTR v1619; // r14
  ULONG_PTR v1620; // rdx
  ULONG_PTR v1621; // r15
  ULONG_PTR v1622; // r10
  char v1623; // bl
  unsigned int v1624; // ebx
  unsigned int v1625; // eax
  int v1626; // ecx
  PVOID v1627; // rax
  int v1628; // r12d
  ULONG_PTR v1629; // rax
  __int64 v1630; // rcx
  __int64 v1631; // r13
  unsigned int v1632; // eax
  __int64 v1633; // r8
  __int64 *v1634; // rbx
  unsigned __int64 v1635; // r12
  int v1636; // edx
  __int64 v1637; // rax
  ULONG_PTR v1638; // r12
  __int64 v1639; // rax
  int v1640; // ecx
  __int64 v1641; // rax
  __int64 v1642; // rcx
  unsigned int v1643; // edi
  char *v1644; // r10
  char *v1645; // r8
  int v1646; // edx
  unsigned __int64 v1647; // rbx
  ULONG_PTR v1648; // rbx
  _QWORD *v1649; // r8
  int v1650; // r11d
  const char *v1651; // rax
  unsigned __int64 v1652; // r14
  char *v1653; // rcx
  unsigned __int64 v1654; // rbx
  unsigned int v1655; // r9d
  __int64 v1656; // rax
  __int64 v1657; // rbx
  unsigned __int128 v1658; // rax
  unsigned int v1659; // edi
  unsigned __int64 v1660; // rax
  __int64 v1661; // rax
  unsigned __int64 i8; // rax
  ULONG_PTR v1663; // rax
  ULONG_PTR v1664; // r11
  __int64 v1665; // r10
  unsigned int v1666; // edi
  char *v1667; // r10
  unsigned int i9; // edx
  struct _KTIMER *v1669; // r9
  int v1670; // r14d
  ULONG_PTR v1671; // r15
  struct _KTIMER *v1672; // r12
  ULONG_PTR v1673; // r13
  unsigned __int64 v1674; // rbx
  ULONG_PTR v1675; // rax
  _QWORD *v1676; // r8
  int v1677; // r11d
  char *v1678; // rdx
  const char *v1679; // rcx
  unsigned int v1680; // r9d
  ULONG_PTR i10; // rbx
  __int64 v1682; // rax
  __int64 v1683; // rbx
  unsigned __int128 v1684; // rax
  unsigned int v1685; // edi
  unsigned __int64 v1686; // rax
  __int64 v1687; // rax
  ULONG_PTR i11; // rax
  ULONG_PTR v1689; // rdx
  ULONG_PTR v1690; // rax
  size_t v1691; // rcx
  int v1692; // ecx
  __int64 v1693; // rcx
  struct _KTIMER *v1694; // r11
  __int64 v1695; // r10
  unsigned int v1696; // eax
  __int64 v1697; // r8
  __int64 *v1698; // rdx
  unsigned __int64 v1699; // r9
  __int64 v1700; // rax
  __int64 v1701; // rax
  int v1702; // ecx
  __int64 v1703; // rax
  __int64 v1704; // rcx
  size_t v1705; // r13
  ULONG_PTR v1706; // r12
  __int64 HalExtensionModuleFromLinks; // rax
  __int64 v1708; // rcx
  ULONG_PTR v1709; // rbx
  __int64 v1710; // rax
  ULONG_PTR v1711; // r15
  int v1712; // r14d
  __int64 v1713; // rdx
  struct _KTIMER *v1714; // rax
  int *v1715; // rcx
  unsigned int v1716; // r11d
  int v1717; // ecx
  int v1718; // r8d
  _BYTE *v1719; // r9
  unsigned int v1720; // r10d
  _BYTE *v1721; // rbx
  __int64 v1722; // r8
  __int64 v1723; // rax
  int v1724; // eax
  int v1725; // eax
  char **v1726; // r14
  __int64 v1727; // rcx
  __int64 v1728; // rdx
  char *v1729; // rdx
  __int64 v1730; // r8
  ULONG_PTR v1731; // rax
  struct _KTIMER *v1732; // rdi
  __int64 v1733; // rdx
  int v1734; // eax
  __int64 v1735; // rax
  __int64 v1736; // rdx
  int v1737; // ecx
  __int64 (__fastcall *v1738)(ULONG_PTR, __int64, __int64, int *); // rax
  __int64 v1739; // rdx
  __int64 v1740; // rcx
  int v1741; // eax
  __int64 v1742; // rax
  int v1743; // ecx
  __int64 (__fastcall *v1744)(ULONG_PTR); // rax
  __int64 v1745; // r14
  __int64 v1746; // rax
  __int64 v1747; // r8
  __int64 v1748; // r15
  unsigned int v1749; // eax
  int v1750; // ecx
  unsigned int v1751; // eax
  __int64 v1752; // r8
  int v1753; // edx
  unsigned __int64 v1754; // rcx
  int v1755; // r14d
  struct _KTIMER *v1756; // rbx
  __int64 v1757; // rdx
  _BYTE *v1758; // rbx
  _QWORD *v1759; // r13
  _DWORD *v1760; // rsi
  __int64 v1761; // r15
  int v1762; // ecx
  _QWORD *v1763; // r11
  _QWORD *v1764; // rax
  _QWORD *v1765; // r8
  const char *v1766; // rax
  int v1767; // r9d
  __int64 v1768; // r14
  unsigned __int64 v1769; // rbx
  unsigned int v1770; // r10d
  __int64 v1771; // rax
  __int64 v1772; // rbx
  unsigned __int128 v1773; // rax
  unsigned int v1774; // edx
  unsigned __int64 v1775; // rax
  __int64 v1776; // rax
  unsigned __int64 i22; // rax
  size_t v1778; // rax
  ULONG_PTR v1779; // r12
  ULONG_PTR v1780; // r15
  int v1781; // eax
  _BYTE *v1782; // r14
  int v1783; // ecx
  ULONG_PTR v1784; // r13
  unsigned int v1785; // edi
  __int64 v1786; // rdx
  _QWORD *v1787; // r11
  _DWORD *v1788; // r12
  _QWORD *v1789; // rax
  __int64 i23; // rdx
  unsigned __int64 v1791; // rcx
  _QWORD *v1792; // r8
  const char *v1793; // rax
  int v1794; // r9d
  __int64 v1795; // r15
  unsigned __int64 v1796; // rbx
  unsigned int v1797; // r10d
  __int64 v1798; // rax
  __int64 v1799; // rbx
  unsigned __int64 v1800; // rcx
  unsigned int v1801; // edi
  unsigned __int64 v1802; // rax
  __int64 v1803; // rax
  unsigned __int64 i24; // rax
  _DWORD *v1805; // rbx
  __int64 v1806; // r13
  unsigned int v1807; // eax
  int v1808; // ecx
  unsigned int v1809; // eax
  __int64 v1810; // r8
  int v1811; // edx
  unsigned __int64 v1812; // rcx
  int v1813; // r15d
  struct _KTIMER *v1814; // rbx
  size_t v1815; // r14
  _BYTE *v1816; // r12
  int v1817; // ecx
  __int64 v1818; // rdx
  _QWORD *v1819; // rax
  const char *v1820; // rax
  __int64 v1821; // r15
  int v1822; // r10d
  __int64 v1823; // r11
  unsigned __int64 v1824; // rbx
  unsigned int v1825; // r9d
  __int64 v1826; // rax
  __int64 v1827; // rbx
  _QWORD *v1828; // r8
  __int64 v1829; // rbx
  unsigned __int64 v1830; // rcx
  unsigned __int64 v1831; // rax
  __int64 v1832; // rax
  unsigned __int64 i25; // rax
  __int64 v1834; // r15
  __int64 v1835; // rax
  __int64 v1836; // rbx
  ULONG_PTR v1837; // r8
  int v1838; // edx
  unsigned __int64 v1839; // rbx
  _QWORD *v1840; // rax
  int v1841; // ecx
  _QWORD *v1842; // rax
  size_t v1843; // r13
  __int64 v1844; // rax
  __int64 v1845; // rbx
  __int16 v1846; // ax
  int v1847; // ecx
  ULONG_PTR v1848; // rax
  __int64 v1849; // rcx
  _QWORD *v1850; // rbx
  __int64 v1851; // r10
  unsigned int v1852; // eax
  __int64 v1853; // r8
  __int64 *v1854; // rdx
  unsigned __int64 v1855; // r9
  __int64 v1856; // rax
  __int64 v1857; // rax
  int v1858; // ecx
  __int64 v1859; // rax
  __int64 v1860; // rcx
  unsigned __int16 v1861; // r12
  __int64 v1862; // r15
  unsigned int v1863; // ecx
  ULONG_PTR v1864; // rax
  struct _KTIMER *v1865; // rdx
  ULONG_PTR v1866; // r14
  ULONG_PTR v1867; // r11
  struct _KTIMER *v1868; // r9
  unsigned int v1869; // r8d
  unsigned int v1870; // edx
  unsigned int v1871; // eax
  unsigned int v1872; // edx
  unsigned int *v1873; // rax
  struct _KTIMER *v1874; // r14
  unsigned int v1875; // ecx
  struct _KTIMER *v1876; // r9
  unsigned int v1877; // eax
  __int64 v1878; // rax
  size_t v1879; // r12
  ULONG_PTR v1880; // r13
  int v1881; // edx
  unsigned int v1882; // ecx
  unsigned int v1883; // eax
  __int64 (__fastcall *v1884)(ULONG_PTR, ULONG_PTR); // rax
  unsigned int *v1885; // r11
  ULONG_PTR v1886; // r8
  int v1887; // ecx
  __int64 v1888; // rcx
  __int64 v1889; // r10
  unsigned int v1890; // eax
  __int64 v1891; // r8
  __int64 *v1892; // rdx
  unsigned __int64 v1893; // r9
  __int64 v1894; // rax
  __int64 v1895; // rax
  int v1896; // ecx
  __int64 v1897; // rax
  __int64 v1898; // rcx
  struct _KTIMER *v1899; // r15
  size_t v1900; // r12
  ULONG_PTR v1901; // r13
  _DWORD *v1902; // rax
  ULONG_PTR v1903; // rdx
  unsigned int v1904; // eax
  int v1905; // ecx
  __int64 v1906; // rcx
  __int64 v1907; // r10
  unsigned int v1908; // eax
  __int64 v1909; // r8
  __int64 *v1910; // rdx
  unsigned __int64 v1911; // r9
  __int64 v1912; // rax
  __int64 v1913; // rax
  int v1914; // ecx
  __int64 v1915; // rax
  __int64 v1916; // rcx
  int v1917; // ecx
  ULONG_PTR v1918; // rax
  __int64 v1919; // rcx
  __int64 v1920; // r15
  unsigned int v1921; // eax
  __int64 *v1922; // rdx
  unsigned __int64 v1923; // r14
  __int64 v1924; // rax
  __int64 v1925; // rax
  int v1926; // ecx
  int v1927; // ecx
  ULONG_PTR v1928; // rax
  __int64 v1929; // rcx
  __int64 v1930; // r15
  unsigned int v1931; // eax
  __int64 *v1932; // rdx
  unsigned __int64 v1933; // r14
  __int64 v1934; // rax
  struct _KTIMER *v1935; // r9
  ULONG_PTR v1936; // r15
  ULONG_PTR v1937; // r11
  int v1938; // ecx
  ULONG_PTR v1939; // rax
  __int64 v1940; // rcx
  __int64 v1941; // r15
  unsigned int v1942; // eax
  __int64 *v1943; // rdx
  unsigned __int64 v1944; // r14
  __int64 v1945; // rax
  __int64 v1946; // rax
  int v1947; // ecx
  int v1948; // edx
  __int64 v1949; // r13
  unsigned int v1950; // ecx
  __int64 v1951; // r14
  int v1952; // ecx
  unsigned int v1953; // eax
  __int64 v1954; // r8
  int v1955; // edx
  unsigned __int64 v1956; // rcx
  int v1957; // r12d
  struct _KTIMER *v1958; // rbx
  size_t v1959; // rdi
  __int64 v1960; // r10
  _QWORD *v1961; // rax
  int v1962; // ecx
  __int64 v1963; // rdx
  ULONG_PTR v1964; // r9
  unsigned __int64 v1965; // rcx
  unsigned __int64 i26; // rax
  ULONG_PTR v1967; // rax
  int v1968; // edx
  ULONG_PTR v1969; // r14
  struct _KTIMER *v1970; // r11
  size_t v1971; // r13
  unsigned __int64 v1972; // rbx
  ULONG_PTR v1973; // r8
  ULONG_PTR v1974; // rax
  _BYTE *v1975; // r15
  __int64 v1976; // rdx
  _DWORD *v1977; // rax
  ULONG_PTR v1978; // r12
  __int64 v1979; // rcx
  _DWORD *v1980; // rcx
  ULONG_PTR v1981; // r9
  int v1982; // r14d
  int v1983; // edx
  __int16 *v1984; // rax
  __int64 v1985; // rcx
  __int16 v1986; // cx
  _DWORD *v1987; // r11
  size_t v1988; // rbx
  int v1989; // r13d
  char *v1990; // rdx
  int v1991; // r8d
  __int64 *v1992; // rdi
  ULONG_PTR v1993; // rbx
  char *v1994; // r9
  char *v1995; // r10
  char v1996; // cl
  char v1997; // al
  unsigned int v1998; // edx
  char *v1999; // rbx
  __int64 v2000; // rcx
  __int64 v2001; // rax
  char v2002; // cl
  char v2003; // al
  int v2004; // ebx
  ULONG_PTR v2005; // rdx
  char v2006; // cl
  char v2007; // al
  int v2008; // ebx
  ULONG_PTR v2009; // rdx
  char v2010; // cl
  char v2011; // al
  PKTIMER v2012; // rcx
  size_t v2013; // rax
  ULONG_PTR v2014; // r11
  size_t v2015; // r8
  ULONG_PTR v2016; // r10
  __int64 v2017; // r14
  struct _KTIMER *v2018; // rdx
  _BYTE *v2019; // r12
  unsigned int v2020; // ebx
  unsigned int v2021; // edi
  unsigned int v2022; // eax
  unsigned int v2023; // edi
  unsigned int v2024; // eax
  unsigned int v2025; // ecx
  int v2026; // r13d
  unsigned int v2027; // ebx
  _DWORD *v2028; // r15
  ULONG_PTR v2029; // r9
  unsigned int v2030; // edi
  unsigned int v2031; // ebx
  unsigned int v2032; // eax
  size_t v2033; // rcx
  ULONG_PTR v2034; // r11
  PKTIMER v2035; // r8
  size_t v2036; // r14
  struct _KTIMER *v2037; // r10
  ULONG_PTR v2038; // r12
  ULONG_PTR v2039; // r8
  _QWORD *v2040; // r8
  ULONG_PTR v2041; // rax
  int v2042; // r11d
  ULONG_PTR v2043; // rcx
  const char *v2044; // rax
  unsigned int v2045; // r10d
  ULONG_PTR i27; // rbx
  __int64 v2047; // rax
  __int64 v2048; // rbx
  ULONG_PTR v2049; // rcx
  unsigned int v2050; // edi
  unsigned __int64 v2051; // rax
  __int64 v2052; // rax
  ULONG_PTR i28; // rax
  unsigned int *v2054; // rbx
  unsigned int *v2055; // rax
  unsigned int v2056; // ecx
  size_t v2057; // r12
  ULONG_PTR v2058; // r13
  __int64 v2059; // rdx
  ULONG_PTR v2060; // r8
  PKTIMER v2061; // r11
  struct _KTIMER *v2062; // rdi
  ULONG_PTR v2063; // r11
  size_t v2064; // r9
  ULONG_PTR v2065; // r10
  char v2066; // bl
  unsigned int v2067; // r8d
  unsigned int v2068; // ebx
  int v2069; // ecx
  ULONG_PTR v2070; // rax
  __int64 v2071; // rax
  __int64 v2072; // rcx
  __int64 v2073; // r13
  unsigned int v2074; // eax
  __int64 v2075; // r8
  __int64 *v2076; // rbx
  unsigned __int64 v2077; // r12
  __int64 v2078; // rax
  __int64 v2079; // rax
  int v2080; // ecx
  __int64 v2081; // rax
  __int64 v2082; // rcx
  ULONG_PTR v2083; // r10
  unsigned int v2084; // edi
  ULONG_PTR v2085; // r8
  int v2086; // edx
  ULONG_PTR v2087; // rbx
  ULONG_PTR v2088; // r9
  _QWORD *v2089; // r8
  int v2090; // r11d
  const char *v2091; // rax
  unsigned __int64 v2092; // r14
  ULONG_PTR v2093; // rcx
  unsigned __int64 v2094; // rbx
  unsigned int v2095; // r9d
  __int64 v2096; // rax
  __int64 v2097; // rbx
  unsigned __int64 v2098; // rcx
  unsigned int v2099; // edi
  unsigned __int64 v2100; // rax
  __int64 v2101; // rax
  unsigned __int64 i29; // rax
  ULONG_PTR v2103; // r9
  __int64 v2104; // r10
  unsigned int v2105; // edi
  _QWORD *v2106; // r10
  int v2107; // edx
  struct _KTIMER *v2108; // r11
  size_t v2109; // r14
  ULONG_PTR v2110; // r12
  ULONG_PTR v2111; // r13
  unsigned __int64 v2112; // r8
  _QWORD *v2113; // r8
  int v2114; // r9d
  unsigned __int64 v2115; // rdx
  const char *v2116; // rcx
  unsigned int v2117; // r11d
  ULONG_PTR i30; // rbx
  __int64 v2119; // rax
  __int64 v2120; // rbx
  unsigned __int128 v2121; // rax
  unsigned int v2122; // edi
  unsigned __int64 v2123; // rax
  __int64 v2124; // rax
  ULONG_PTR i31; // rax
  ULONG_PTR v2126; // rbx
  __int64 v2127; // rax
  ULONG_PTR v2128; // rcx
  int v2129; // ecx
  __int64 v2130; // rcx
  __int64 v2131; // r10
  unsigned int v2132; // eax
  __int64 *v2133; // rdx
  unsigned __int64 v2134; // r9
  __int64 v2135; // rax
  struct _KTIMER *v2136; // r14
  unsigned __int64 v2137; // rax
  unsigned __int128 v2138; // rax
  __int64 v2139; // rcx
  _DWORD *v2140; // rax
  int v2141; // r9d
  int v2142; // r10d
  __int64 v2143; // r13
  __int64 v2144; // r8
  _QWORD *v2145; // r15
  unsigned int v2146; // r12d
  unsigned int v2147; // eax
  _QWORD *v2148; // rbx
  int v2149; // ecx
  unsigned int v2150; // eax
  __int64 v2151; // r8
  struct _KTIMER *v2152; // r9
  int v2153; // edx
  unsigned __int64 v2154; // rcx
  int v2155; // r14d
  struct _KTIMER *v2156; // rdi
  char *v2157; // r14
  int v2158; // ecx
  __int64 v2159; // rdx
  _QWORD *v2160; // rax
  _QWORD *v2161; // r8
  const char *v2162; // rax
  int v2163; // r9d
  __int64 v2164; // r11
  unsigned __int64 v2165; // rcx
  unsigned __int64 v2166; // rdi
  unsigned int i32; // r10d
  __int64 v2168; // rax
  __int64 v2169; // rdi
  unsigned __int128 v2170; // rax
  unsigned int v2171; // edx
  unsigned __int64 v2172; // rax
  __int64 v2173; // rax
  unsigned __int64 i33; // rax
  PKTIMER v2175; // r15
  unsigned __int64 v2176; // r9
  int v2177; // edi
  __int64 v2178; // r13
  __int64 v2179; // r8
  unsigned int v2180; // eax
  int *v2181; // r14
  int v2182; // ecx
  unsigned int v2183; // eax
  __int64 v2184; // rdi
  PKTIMER v2185; // r12
  int v2186; // edx
  unsigned __int64 v2187; // rcx
  int v2188; // r15d
  _QWORD *v2189; // r11
  unsigned int *v2190; // rsi
  char *v2191; // r13
  __int64 v2192; // r12
  int v2193; // ecx
  _QWORD *v2194; // r15
  _QWORD *v2195; // rax
  __int64 v2196; // rdx
  _QWORD *v2197; // rdi
  int v2198; // r8d
  const char *v2199; // rax
  __int64 v2200; // r10
  unsigned __int64 v2201; // rbx
  unsigned int v2202; // r9d
  __int64 v2203; // rax
  __int64 v2204; // rbx
  unsigned __int128 v2205; // rax
  unsigned int v2206; // edx
  unsigned __int64 v2207; // rax
  __int64 v2208; // rax
  unsigned __int64 i34; // rax
  struct _KTIMER *v2210; // rdx
  ULONG_PTR v2211; // rax
  int v2212; // ecx
  int v2213; // r12d
  int *v2214; // rdi
  PKTIMER v2215; // rbx
  int *v2216; // r8
  unsigned int v2217; // r13d
  int *v2218; // r15
  int v2219; // ebx
  __int64 v2220; // rax
  int v2221; // r14d
  unsigned int v2222; // ecx
  int v2223; // ecx
  struct _KTIMER *v2224; // r13
  unsigned int v2225; // eax
  __int64 v2226; // r8
  int v2227; // edx
  unsigned __int64 v2228; // rcx
  int v2229; // r15d
  int v2230; // edx
  _BYTE *v2231; // rcx
  _QWORD *v2232; // rax
  __int64 v2233; // rbx
  unsigned __int64 v2234; // rdx
  unsigned __int64 i35; // rax
  _BYTE *v2236; // r14
  struct _KTIMER *v2237; // rbx
  unsigned int v2238; // r15d
  char *v2239; // r13
  _DWORD *v2240; // rsi
  const char *v2241; // rbx
  const char *v2242; // r9
  const char *v2243; // rax
  unsigned __int64 i36; // rdx
  int v2245; // r8d
  __int64 v2246; // rax
  unsigned __int64 i37; // rax
  struct _KTIMER *v2248; // r14
  __int64 v2249; // r15
  unsigned int v2250; // eax
  int *v2251; // rbx
  int v2252; // ecx
  struct _KTIMER *v2253; // r13
  unsigned int v2254; // eax
  __int64 v2255; // r8
  int v2256; // edx
  unsigned __int64 v2257; // rcx
  int v2258; // r14d
  _BYTE *v2259; // r14
  int v2260; // ecx
  __int64 v2261; // rdx
  _QWORD *v2262; // rax
  __int128 *v2263; // rdi
  int v2264; // ecx
  unsigned __int64 v2265; // rdx
  __int64 v2266; // rax
  __int64 v2267; // r8
  __int64 v2268; // rax
  unsigned __int64 i38; // rax
  int v2270; // edi
  ULONG_PTR v2271; // r15
  __int64 v2272; // rcx
  unsigned __int8 CurrentIrql; // r12
  unsigned int *v2274; // rcx
  unsigned __int64 v2275; // rdx
  int v2276; // ecx
  __int64 v2277; // rdx
  _QWORD *v2278; // rax
  __int64 v2279; // r13
  unsigned int v2280; // eax
  int *v2281; // rdi
  int v2282; // ecx
  struct _KTIMER *v2283; // r14
  unsigned int v2284; // eax
  __int64 v2285; // r8
  int v2286; // edx
  unsigned __int64 v2287; // rcx
  int v2288; // r15d
  _BYTE *v2289; // rdx
  _QWORD *v2290; // rax
  int v2291; // ecx
  __int64 v2292; // rbx
  unsigned __int64 v2293; // rcx
  unsigned __int64 i39; // rax
  __int64 v2295; // r13
  unsigned int v2296; // eax
  int *v2297; // r14
  int v2298; // ecx
  struct _KTIMER *v2299; // r15
  unsigned int v2300; // eax
  __int64 v2301; // r8
  int v2302; // edx
  unsigned __int64 v2303; // rcx
  int v2304; // edi
  _BYTE *v2305; // rdx
  int v2306; // ecx
  _QWORD *v2307; // rax
  __int64 v2308; // rbx
  unsigned __int64 v2309; // rcx
  unsigned __int64 i40; // rax
  __int64 v2311; // r13
  unsigned int v2312; // eax
  int *v2313; // rbx
  int v2314; // ecx
  unsigned int v2315; // eax
  __int64 v2316; // r8
  int v2317; // edx
  unsigned __int64 v2318; // rcx
  int v2319; // r14d
  _BYTE *v2320; // rdx
  int v2321; // ecx
  _QWORD *v2322; // rax
  __int64 v2323; // rdi
  unsigned __int64 v2324; // rcx
  unsigned __int64 i41; // rax
  unsigned int v2326; // r15d
  __int64 v2327; // r13
  unsigned int v2328; // r15d
  unsigned int v2329; // eax
  _BYTE *v2330; // rdi
  int v2331; // ecx
  unsigned int v2332; // eax
  __int64 v2333; // r8
  int v2334; // edx
  unsigned __int64 v2335; // rcx
  int v2336; // r14d
  _QWORD *v2337; // r11
  int v2338; // ecx
  _QWORD *v2339; // rax
  __int64 v2340; // rdx
  __int64 *v2341; // r8
  const char *v2342; // rax
  int v2343; // r9d
  __int64 v2344; // r14
  __int64 *v2345; // rcx
  unsigned __int64 v2346; // rbx
  unsigned int v2347; // r10d
  __int64 v2348; // rax
  __int64 v2349; // rbx
  unsigned __int128 v2350; // rax
  unsigned int v2351; // edx
  unsigned __int64 v2352; // rax
  __int64 v2353; // rax
  unsigned __int64 i42; // rax
  __int64 v2355; // r13
  _QWORD *v2356; // r15
  __int64 v2357; // r8
  unsigned int v2358; // eax
  __int64 v2359; // rbx
  int v2360; // ecx
  unsigned int v2361; // eax
  __int64 v2362; // r8
  int v2363; // edx
  unsigned __int64 v2364; // rcx
  int v2365; // r14d
  __int64 v2366; // r14
  _QWORD *v2367; // rax
  int v2368; // ecx
  __int64 v2369; // rdx
  __int64 v2370; // r13
  _QWORD *v2371; // r8
  int v2372; // r9d
  const char *v2373; // rax
  __int64 v2374; // r11
  unsigned __int64 v2375; // rbx
  unsigned int v2376; // r10d
  __int64 v2377; // rax
  __int64 v2378; // rbx
  unsigned __int128 v2379; // rax
  unsigned int v2380; // edx
  unsigned __int64 v2381; // rax
  __int64 v2382; // rax
  unsigned __int64 i43; // rax
  struct _KTIMER *v2384; // r14
  int v2385; // r9d
  int v2386; // r12d
  __int64 v2387; // rcx
  __int64 v2388; // r15
  __int64 v2389; // r8
  unsigned int v2390; // r13d
  unsigned int v2391; // eax
  _BYTE *v2392; // rbx
  int v2393; // ecx
  unsigned int v2394; // eax
  __int64 v2395; // r8
  struct _KTIMER *v2396; // r9
  int v2397; // edx
  unsigned __int64 v2398; // rcx
  int v2399; // r14d
  struct _KTIMER *v2400; // rdi
  _BYTE *v2401; // r14
  int v2402; // ecx
  _QWORD *v2403; // rax
  __int64 v2404; // rdx
  __int64 *v2405; // r8
  const char *v2406; // rax
  int v2407; // r9d
  __int64 v2408; // r11
  __int64 *v2409; // rcx
  unsigned __int64 v2410; // rdi
  unsigned int i44; // r10d
  __int64 v2412; // rax
  __int64 v2413; // rdi
  unsigned __int128 v2414; // rax
  unsigned int v2415; // edx
  unsigned __int64 v2416; // rax
  __int64 v2417; // rax
  unsigned __int64 i45; // rax
  int v2419; // edi
  unsigned int v2420; // r10d
  _BYTE *v2421; // rdx
  unsigned __int16 *v2422; // r14
  int v2423; // ecx
  __int64 v2424; // r13
  __int64 v2425; // r8
  unsigned int v2426; // ecx
  _QWORD *v2427; // r12
  __int64 v2428; // rdi
  int v2429; // ecx
  _QWORD *v2430; // r15
  unsigned int v2431; // eax
  __int64 v2432; // r8
  int v2433; // edx
  unsigned __int64 v2434; // rcx
  int v2435; // r15d
  struct _KTIMER *v2436; // rbx
  __int64 v2437; // r14
  int v2438; // ecx
  __int64 v2439; // rdx
  _QWORD *v2440; // rax
  _QWORD *v2441; // r8
  const char *v2442; // rax
  int v2443; // r9d
  __int64 v2444; // r11
  unsigned __int64 v2445; // rcx
  unsigned int v2446; // r10d
  unsigned __int64 i46; // rdi
  __int64 v2448; // rax
  __int64 v2449; // rdi
  unsigned __int128 v2450; // rax
  unsigned int v2451; // edx
  unsigned __int64 v2452; // rax
  __int64 v2453; // rax
  unsigned __int64 i47; // rax
  int v2455; // r8d
  __int16 v2456; // ax
  char *v2457; // rcx
  _QWORD *v2458; // rdx
  __int64 v2459; // r9
  const wchar_t *v2460; // rcx
  char v2461; // al
  unsigned int v2462; // edx
  char *v2463; // rdi
  _QWORD *v2464; // rcx
  unsigned __int64 v2465; // r8
  signed __int64 v2466; // rdi
  __int64 v2467; // r13
  unsigned int v2468; // r15d
  _QWORD *v2469; // r12
  __int64 v2470; // r8
  unsigned int v2471; // eax
  __int64 v2472; // rdi
  int v2473; // ecx
  unsigned int v2474; // eax
  __int64 v2475; // r8
  int v2476; // edx
  unsigned __int64 v2477; // rcx
  int v2478; // r15d
  struct _KTIMER *v2479; // rbx
  __int64 v2480; // r14
  int v2481; // ecx
  __int64 v2482; // rdx
  _QWORD *v2483; // rax
  _QWORD *v2484; // r8
  const char *v2485; // rax
  int v2486; // r9d
  __int64 v2487; // r11
  unsigned __int64 v2488; // rcx
  unsigned __int64 v2489; // rdi
  unsigned int v2490; // r10d
  __int64 v2491; // rax
  __int64 v2492; // rdi
  unsigned __int64 v2493; // rcx
  unsigned int v2494; // edx
  unsigned __int64 v2495; // rax
  __int64 v2496; // rax
  unsigned __int64 i48; // rax
  __int64 v2498; // r15
  unsigned int v2499; // eax
  _BYTE *v2500; // rdi
  int v2501; // ecx
  unsigned int v2502; // eax
  __int64 v2503; // r8
  int v2504; // edx
  unsigned __int64 v2505; // rcx
  int v2506; // r14d
  _BYTE *v2507; // r9
  int v2508; // ecx
  _QWORD *v2509; // rax
  __int64 v2510; // rdx
  unsigned __int64 v2511; // rcx
  unsigned __int64 i49; // rax
  __int64 v2513; // rax
  __int64 v2514; // rdx
  const char *v2515; // r14
  const char *v2516; // rcx
  int v2517; // r10d
  const char *v2518; // r8
  __int64 v2519; // r15
  const char *v2520; // rax
  __int64 v2521; // rbx
  unsigned int v2522; // r11d
  __int64 v2523; // rax
  __int64 v2524; // rbx
  unsigned __int128 v2525; // rax
  unsigned int v2526; // edx
  unsigned __int64 v2527; // rax
  __int64 v2528; // rax
  __int64 v2529; // r13
  __int64 v2530; // r8
  unsigned int v2531; // r14d
  unsigned int v2532; // eax
  _BYTE *v2533; // rbx
  int v2534; // ecx
  unsigned int v2535; // eax
  __int64 v2536; // r8
  int v2537; // edx
  unsigned __int64 v2538; // rcx
  int v2539; // r15d
  struct _KTIMER *v2540; // rdi
  _BYTE *v2541; // r10
  int v2542; // ecx
  _QWORD *v2543; // rax
  __int64 v2544; // rdx
  unsigned __int64 v2545; // rcx
  unsigned __int64 i50; // rax
  struct _KTIMER *v2547; // rdx
  int v2548; // r9d
  __int64 v2549; // r12
  _QWORD *v2550; // r8
  unsigned __int64 v2551; // rcx
  const char *v2552; // rax
  __int64 v2553; // rdi
  unsigned int v2554; // r11d
  __int64 v2555; // rax
  __int64 v2556; // rdi
  unsigned __int128 v2557; // rax
  unsigned int v2558; // r14d
  unsigned __int64 v2559; // rax
  __int64 v2560; // rax
  __int64 v2561; // r13
  __int64 v2562; // r8
  unsigned int v2563; // eax
  __int64 v2564; // rdi
  int v2565; // ecx
  PKTIMER v2566; // r14
  unsigned int v2567; // eax
  __int64 v2568; // r8
  int v2569; // edx
  unsigned __int64 v2570; // rcx
  int v2571; // r15d
  __int64 v2572; // r9
  int v2573; // ecx
  _QWORD *v2574; // rax
  __int64 v2575; // rdx
  unsigned __int64 v2576; // rcx
  unsigned __int64 i51; // rax
  __int64 v2578; // rax
  __int64 v2579; // r12
  struct _KTIMER *v2580; // rdx
  _QWORD *v2581; // r14
  unsigned __int64 v2582; // rcx
  int v2583; // r10d
  _QWORD *v2584; // r8
  __int64 v2585; // r15
  const char *v2586; // rax
  __int64 v2587; // rbx
  unsigned int v2588; // r11d
  __int64 v2589; // rax
  __int64 v2590; // rbx
  unsigned __int64 v2591; // rcx
  unsigned int v2592; // r12d
  unsigned __int64 v2593; // rax
  __int64 v2594; // rax
  unsigned __int64 v2595; // rax
  unsigned __int128 v2596; // rax
  unsigned __int64 v2597; // rbx
  unsigned __int64 v2598; // rax
  _QWORD *v2599; // r15
  unsigned __int64 v2600; // rax
  unsigned __int128 v2601; // rax
  unsigned __int64 v2602; // rbx
  unsigned __int64 v2603; // rax
  _DWORD *v2604; // rax
  unsigned int *v2605; // r12
  int v2606; // ecx
  char v2607; // r8
  unsigned int v2608; // r14d
  __int64 v2609; // rax
  __int64 v2610; // r14
  __int64 v2611; // r14
  __int64 v2612; // r14
  unsigned int *v2613; // rax
  unsigned int v2614; // edi
  __int64 v2615; // rbx
  __int64 v2616; // rbx
  _QWORD *v2617; // rax
  unsigned int v2618; // edi
  __int64 v2619; // rbx
  __int64 v2620; // rbx
  _QWORD *v2621; // rax
  unsigned int v2622; // edi
  __int64 v2623; // rbx
  __int64 v2624; // rbx
  unsigned int v2625; // edi
  __int64 v2626; // rbx
  __int64 v2627; // rbx
  _BYTE *v2628; // rbx
  int v2629; // r10d
  int v2630; // r9d
  __int64 v2631; // r13
  __int64 v2632; // r8
  unsigned int v2633; // eax
  __int64 v2634; // r15
  int v2635; // ecx
  unsigned int v2636; // eax
  __int64 v2637; // rdi
  int v2638; // edx
  unsigned __int64 v2639; // rcx
  int v2640; // r12d
  struct _KTIMER *v2641; // rbx
  size_t v2642; // rcx
  unsigned int *v2643; // rdi
  _QWORD *v2644; // r11
  int *v2645; // rdi
  _DWORD *v2646; // rbx
  __int64 v2647; // rsi
  unsigned int *v2648; // r14
  __int64 v2649; // r13
  int v2650; // ecx
  _QWORD *v2651; // r12
  _QWORD *v2652; // rax
  __int64 v2653; // rdx
  __int64 *v2654; // rax
  int v2655; // r8d
  _QWORD *v2656; // rdi
  unsigned __int64 v2657; // r10
  const char *v2658; // rax
  unsigned __int64 v2659; // rbx
  unsigned int v2660; // r9d
  __int64 v2661; // rax
  __int64 v2662; // rbx
  unsigned __int128 v2663; // rax
  unsigned int v2664; // edx
  unsigned __int64 v2665; // rax
  __int64 v2666; // rax
  unsigned __int64 i52; // rax
  __int64 v2668; // rdx
  unsigned __int64 v2669; // rcx
  _QWORD *v2670; // r8
  __int64 v2671; // r9
  int v2672; // r9d
  unsigned int v2673; // r10d
  __int64 v2674; // r13
  _QWORD *v2675; // r15
  __int64 v2676; // r12
  __int64 v2677; // r8
  unsigned int v2678; // eax
  __int64 v2679; // rbx
  unsigned int v2680; // ecx
  unsigned int v2681; // eax
  __int64 v2682; // r8
  unsigned int v2683; // edx
  unsigned __int64 v2684; // rcx
  int v2685; // r14d
  struct _KTIMER *v2686; // rdi
  __int64 v2687; // r14
  int v2688; // ecx
  _QWORD *v2689; // rax
  __int64 v2690; // rdx
  const char *v2691; // rax
  __int64 v2692; // r11
  unsigned __int64 v2693; // rbx
  unsigned int i53; // r10d
  __int64 v2695; // rax
  __int64 v2696; // rbx
  unsigned __int64 v2697; // rax
  __int64 v2698; // rax
  unsigned __int64 i54; // rax
  unsigned int v2700; // ebx
  int v2716; // eax
  unsigned int v2717; // r10d
  __int64 v2718; // r15
  __int64 v2719; // r9
  __int64 v2720; // r8
  __int64 v2721; // rax
  unsigned int v2722; // ebx
  unsigned int v2723; // eax
  unsigned int *v2724; // r14
  unsigned int v2725; // ecx
  unsigned int v2726; // eax
  __int64 v2727; // r8
  unsigned int v2728; // edx
  unsigned __int64 v2729; // rcx
  unsigned int v2730; // edi
  struct _KTIMER *v2731; // rbx
  PVOID **v2732; // r11
  unsigned int *v2733; // rsi
  _BYTE *v2734; // r13
  __int64 v2735; // r12
  int v2736; // ecx
  PVOID *v2737; // r15
  _QWORD *v2738; // rax
  __int64 v2739; // rdx
  unsigned __int64 v2740; // rcx
  _QWORD *v2741; // rdi
  unsigned int v2742; // r8d
  const char *v2743; // rax
  __int64 v2744; // r10
  unsigned __int64 v2745; // rbx
  unsigned int v2746; // r9d
  __int64 v2747; // rax
  __int64 v2748; // rbx
  unsigned int v2749; // edx
  unsigned __int64 v2750; // rax
  __int64 v2751; // rax
  unsigned __int64 v2752; // rax
  __int64 v2753; // r8
  _DWORD *v2754; // rdx
  _DWORD *v2755; // rax
  char v2756; // al
  unsigned __int64 v2757; // rax
  unsigned __int128 v2758; // rax
  unsigned __int64 v2759; // rbx
  unsigned __int64 v2760; // rax
  _QWORD *v2761; // r15
  unsigned __int64 v2762; // rax
  unsigned __int128 v2763; // rax
  unsigned __int64 v2764; // rbx
  unsigned __int64 v2765; // rax
  _DWORD *v2766; // rax
  _DWORD *v2767; // r13
  unsigned int v2768; // edi
  unsigned int i55; // r8d
  __int64 v2770; // rdx
  __int64 v2771; // rbx
  unsigned int v2772; // r10d
  int v2773; // r9d
  __int64 v2774; // r12
  __int64 v2775; // r8
  unsigned int v2776; // eax
  __int64 v2777; // rbx
  unsigned int v2778; // ecx
  unsigned int v2779; // eax
  __int64 v2780; // r8
  unsigned int v2781; // edx
  unsigned __int64 v2782; // rcx
  int v2783; // r15d
  struct _KTIMER *v2784; // r14
  __int64 v2785; // r12
  _QWORD *v2786; // r11
  ULONG_PTR v2787; // rax
  _DWORD *v2788; // rsi
  _DWORD *v2789; // rbx
  __int64 v2790; // r13
  int v2791; // ecx
  _QWORD *v2792; // r15
  _QWORD *v2793; // rax
  __int64 v2794; // rdx
  int *v2795; // rax
  _QWORD *v2796; // rdi
  int v2797; // r8d
  unsigned __int64 v2798; // r10
  const char *v2799; // rax
  unsigned __int64 v2800; // rbx
  unsigned int v2801; // r9d
  __int64 v2802; // rax
  __int64 v2803; // rbx
  unsigned __int64 v2804; // rcx
  unsigned int v2805; // edx
  unsigned __int64 v2806; // rax
  __int64 v2807; // rax
  unsigned __int64 i56; // rax
  __int64 v2809; // r15
  unsigned int v2810; // eax
  _BYTE *v2811; // rbx
  unsigned int v2812; // ecx
  unsigned int v2813; // eax
  __int64 v2814; // r8
  unsigned int v2815; // edx
  unsigned __int64 v2816; // rcx
  int v2817; // r14d
  _BYTE *v2818; // rdx
  int v2819; // ecx
  __int64 v2820; // rdi
  _QWORD *v2821; // rax
  unsigned __int64 v2822; // rcx
  unsigned __int64 i57; // rax
  __int64 v2824; // r15
  unsigned int v2825; // eax
  int v2826; // ecx
  unsigned int v2827; // eax
  __int64 v2828; // r8
  unsigned int v2829; // edx
  unsigned __int64 v2830; // rcx
  unsigned int v2831; // edi
  _BYTE *v2832; // rdx
  int v2833; // ecx
  _QWORD *v2834; // rax
  __int64 v2835; // rbx
  unsigned __int64 v2836; // rcx
  unsigned __int64 i58; // rax
  unsigned int v2838; // r13d
  __int64 (__fastcall *v2839)(); // r10
  __int64 v2840; // r15
  __int64 v2841; // r8
  int v2842; // r12d
  unsigned int v2843; // eax
  _BYTE *v2844; // rdi
  unsigned int v2845; // ecx
  unsigned int v2846; // eax
  __int64 v2847; // r8
  unsigned int v2848; // edx
  unsigned __int64 v2849; // rcx
  int v2850; // r14d
  struct _KTIMER *v2851; // rbx
  _BYTE *v2852; // r14
  int v2853; // ecx
  _QWORD *v2854; // rax
  __int64 v2855; // rdx
  char *v2856; // r9
  __int64 v2857; // r8
  const char *v2858; // rax
  __int64 i59; // r11
  int v2860; // r10d
  unsigned __int64 v2861; // rbx
  __int64 v2862; // rax
  __int64 v2863; // rbx
  unsigned __int128 v2864; // rax
  unsigned __int64 i60; // rax
  struct _KTIMER *v2866; // r15
  __int64 Prcb; // r9
  char *v2868; // rcx
  __int64 v2869; // rdx
  unsigned int v2875; // edx
  int v2876; // eax
  __int64 v2877; // rcx
  __int64 v2878; // rdx
  char v2879; // al
  __int64 v2880; // rcx
  unsigned int v2881; // ecx
  void (__fastcall *v2882)(_BYTE *); // r12
  _QWORD *v2883; // rbx
  int *v2884; // rdx
  __int64 v2885; // r8
  __int64 v2886; // rcx
  int v2887; // eax
  int v2888; // eax
  __int64 v2889; // r13
  _QWORD *v2890; // r15
  unsigned int v2891; // eax
  _BYTE *v2892; // rbx
  int v2893; // ecx
  unsigned int v2894; // eax
  __int64 v2895; // r8
  int v2896; // edx
  unsigned __int64 v2897; // rcx
  int v2898; // r14d
  struct _KTIMER *v2899; // rdi
  _BYTE *v2900; // r14
  _BYTE *v2901; // rdi
  int v2902; // ecx
  _QWORD *v2903; // rax
  __int64 v2904; // rdx
  const char *v2905; // rax
  int v2906; // r8d
  unsigned __int64 v2907; // rdx
  int v2908; // edi
  __int64 v2909; // rax
  __int64 v2910; // rax
  unsigned __int64 i61; // rax
  void (__fastcall *v2912)(_BYTE *); // r15
  unsigned int v2913; // r12d
  void (__fastcall *v2914)(_BYTE *); // rax
  __int64 v2915; // r13
  _QWORD *v2916; // r14
  __int64 v2917; // r8
  unsigned int v2918; // eax
  __int64 v2919; // rdi
  PVOID v2920; // r13
  _BYTE *v2921; // r14
  int v2922; // ecx
  unsigned int v2923; // eax
  __int64 v2924; // r8
  int v2925; // edx
  unsigned __int64 v2926; // rcx
  int v2927; // r15d
  struct _KTIMER *v2928; // rbx
  PVOID v2929; // r14
  size_t v2930; // r13
  _QWORD *v2931; // rax
  int v2932; // r10d
  __int64 v2933; // rdx
  int v2934; // ecx
  _QWORD *v2935; // r8
  const char *v2936; // rax
  int v2937; // r9d
  __int64 v2938; // r11
  unsigned __int64 v2939; // rbx
  __int64 v2940; // rax
  __int64 v2941; // rbx
  unsigned __int64 v2942; // rcx
  int v2943; // edx
  __int64 v2944; // rax
  __int64 v2945; // rax
  unsigned __int64 i62; // rax
  __int64 v2947; // rdx
  _QWORD *v2948; // rdx
  int v2949; // r8d
  const char *v2950; // rax
  unsigned __int64 v2951; // r12
  int v2952; // ebx
  __int64 v2953; // rax
  __int64 v2954; // rax
  unsigned __int64 i63; // rcx
  unsigned int v2956; // r9d
  unsigned int v2957; // r15d
  __int64 v2958; // rdi
  __int64 v2959; // r8
  unsigned int v2960; // eax
  _BYTE *v2961; // rbx
  int v2962; // ecx
  unsigned int v2963; // eax
  __int64 v2964; // r8
  int v2965; // edx
  unsigned __int64 v2966; // rcx
  struct _KTIMER *v2967; // rdi
  void *v2968; // r12
  int v2969; // r13d
  PVOID v2970; // r14
  size_t v2971; // r15
  _QWORD *v2972; // rdi
  _QWORD *v2973; // rax
  int v2974; // ecx
  __int64 v2975; // rdx
  unsigned __int64 v2976; // rcx
  unsigned __int64 i64; // rax
  unsigned __int64 v2978; // rdx
  struct _KTIMER *v2979; // rsi
  __int64 v2980; // r14
  __int64 v2981; // r10
  unsigned int *v2982; // r8
  __int64 v2983; // r9
  unsigned int v2984; // ecx
  unsigned __int64 v2985; // rax
  int v2986; // r12d
  __int64 v2987; // r8
  unsigned int v2988; // eax
  _BYTE *v2989; // r14
  int v2990; // ecx
  size_t v2991; // r13
  PVOID v2992; // r10
  PKTIMER v2993; // r8
  size_t v2994; // r11
  unsigned int v2995; // eax
  struct _KTIMER *v2996; // rcx
  ULONG_PTR v2997; // r8
  int v2998; // edx
  _QWORD *v2999; // r9
  PVOID v3000; // r12
  unsigned __int64 v3001; // rcx
  struct _KTIMER *v3002; // rbx
  ULONG_PTR v3003; // rdi
  ULONG_PTR v3004; // r15
  ULONG_PTR v3005; // r12
  __int64 v3006; // r13
  PVOID v3007; // r10
  _QWORD *v3008; // r15
  _QWORD *v3009; // rax
  int v3010; // ecx
  __int64 v3011; // rdx
  unsigned __int64 v3012; // rcx
  unsigned __int64 i65; // rax
  int v3014; // edx
  int v3015; // ebx
  __int64 v3016; // r8
  unsigned int v3017; // eax
  _BYTE *v3018; // rdi
  int v3019; // ecx
  ULONG_PTR v3020; // r9
  ULONG_PTR v3021; // r10
  ULONG_PTR v3022; // r11
  struct _KTIMER *v3023; // r13
  unsigned int v3024; // eax
  ULONG_PTR v3025; // r8
  __int64 v3026; // rcx
  int v3027; // edx
  unsigned __int64 v3028; // rcx
  int v3029; // eax
  ULONG_PTR v3030; // r15
  PVOID v3031; // r10
  ULONG_PTR v3032; // r12
  PVOID v3033; // r9
  ULONG_PTR v3034; // r14
  __int64 v3035; // r14
  _BYTE *v3036; // r14
  _QWORD *v3037; // rax
  int v3038; // ecx
  __int64 v3039; // rdx
  unsigned __int64 v3040; // rcx
  unsigned __int64 i66; // rax
  __int64 v3042; // rdx
  unsigned __int64 v3043; // rbx
  PVOID v3044; // r12
  ULONG_PTR v3045; // rax
  PVOID v3046; // r15
  __int64 v3047; // r8
  unsigned int v3048; // eax
  __int64 v3049; // rbx
  int v3050; // ecx
  ULONG_PTR v3051; // r8
  unsigned int v3052; // eax
  void *v3053; // rcx
  int v3054; // edx
  __int64 v3055; // r8
  ULONG_PTR v3056; // r9
  ULONG_PTR v3057; // r10
  ULONG_PTR v3058; // r11
  unsigned __int64 v3059; // rcx
  struct _KTIMER *v3060; // r14
  int v3061; // eax
  struct _KTIMER *v3062; // rdi
  _DWORD *v3063; // r14
  ULONG_PTR v3064; // r11
  __int64 v3065; // r15
  ULONG_PTR v3066; // r10
  ULONG_PTR v3067; // r12
  ULONG_PTR v3068; // r9
  ULONG_PTR v3069; // r13
  PVOID v3070; // r8
  __int64 v3071; // r14
  __int64 v3072; // r14
  _QWORD *v3073; // rax
  int v3074; // ecx
  __int64 v3075; // rdx
  unsigned __int64 v3076; // rcx
  unsigned __int64 i67; // rax
  unsigned int v3078; // r13d
  __int64 v3079; // rax
  __int64 v3080; // rdx
  __int64 v3081; // rdx
  void (__fastcall *v3082)(_BYTE *); // rax
  __int64 v3083; // rbx
  __int64 v3084; // rax
  int v3085; // r12d
  unsigned __int64 v3086; // rax
  __int64 v3087; // rcx
  int v3088; // r15d
  unsigned __int64 v3089; // rax
  __int64 v3090; // r14
  void *v3091; // r12
  __int64 v3092; // r8
  size_t v3093; // r15
  unsigned int v3094; // eax
  __int64 v3095; // rbx
  int v3096; // ecx
  unsigned int v3097; // eax
  int v3098; // edx
  unsigned __int64 v3099; // rcx
  int v3100; // eax
  ULONG_PTR v3101; // rcx
  PVOID v3102; // r8
  ULONG_PTR v3103; // r9
  ULONG_PTR v3104; // r10
  ULONG_PTR v3105; // r11
  struct _KTIMER *v3106; // rdi
  _DWORD *v3107; // r14
  __int64 v3108; // r15
  ULONG_PTR v3109; // r12
  ULONG_PTR v3110; // r13
  ULONG_PTR v3111; // r14
  int v3112; // ecx
  _QWORD *v3113; // rax
  __int64 v3114; // rdx
  unsigned __int64 v3115; // rcx
  unsigned __int64 i68; // rax
  struct _KTIMER *v3117; // rax
  int v3118; // eax
  __int64 v3119; // r8
  unsigned int v3120; // eax
  _BYTE *v3121; // rdi
  void *v3122; // r15
  int v3123; // ecx
  ULONG_PTR v3124; // r12
  size_t v3125; // r9
  size_t v3126; // r13
  ULONG_PTR v3127; // r10
  ULONG_PTR v3128; // r11
  ULONG_PTR v3129; // rdx
  unsigned int v3130; // eax
  ULONG_PTR v3131; // r13
  ULONG_PTR v3132; // r10
  ULONG_PTR v3133; // r12
  int v3134; // ecx
  _QWORD *v3135; // r11
  ULONG_PTR v3136; // r15
  void *v3137; // rcx
  PVOID v3138; // rdx
  ULONG_PTR v3139; // r8
  ULONG_PTR v3140; // r9
  _DWORD *v3141; // r14
  unsigned __int64 v3142; // rcx
  struct _KTIMER *v3143; // rbx
  int v3144; // eax
  __int64 v3145; // rbx
  _BYTE *v3146; // rbx
  _QWORD *v3147; // rax
  int v3148; // ecx
  __int64 v3149; // rdx
  const char *v3150; // r14
  const char *i69; // rax
  __int64 v3152; // rdx
  void *v3153; // r14
  unsigned __int64 v3154; // rdx
  ULONG_PTR v3155; // rcx
  unsigned __int64 v3156; // rax
  int v3157; // eax
  __int64 v3158; // r8
  unsigned int v3159; // eax
  _BYTE *v3160; // rbx
  int v3161; // ecx
  ULONG_PTR v3162; // r8
  ULONG_PTR v3163; // r10
  ULONG_PTR v3164; // rdx
  unsigned int v3165; // eax
  int v3166; // ecx
  ULONG_PTR v3167; // rdx
  ULONG_PTR v3168; // rcx
  size_t v3169; // r9
  _DWORD *v3170; // r14
  ULONG_PTR v3171; // r15
  PKTIMER v3172; // r12
  ULONG_PTR v3173; // r11
  unsigned __int64 v3174; // rcx
  struct _KTIMER *v3175; // rdi
  ULONG_PTR v3176; // r13
  ULONG_PTR v3177; // rdx
  ULONG_PTR v3178; // r10
  ULONG_PTR v3179; // r12
  ULONG_PTR v3180; // r11
  int v3181; // eax
  struct _KTIMER *v3182; // r14
  __int64 v3183; // rdi
  _BYTE *v3184; // rdi
  _QWORD *v3185; // rax
  int v3186; // ecx
  __int64 v3187; // rdx
  const char *v3188; // r15
  const char *i70; // rax
  __int64 v3190; // rdx
  PVOID v3191; // r15
  PVOID v3192; // r12
  ULONG_PTR v3193; // r13
  ULONG_PTR v3194; // r9
  ULONG_PTR v3195; // r10
  ULONG_PTR v3196; // r11
  unsigned __int64 v3197; // rdx
  ULONG_PTR v3198; // rcx
  unsigned __int64 v3199; // rax
  void *i71; // r14
  int v3201; // eax
  __int64 v3202; // r8
  unsigned int v3203; // eax
  __int64 v3204; // rdi
  int v3205; // ecx
  ULONG_PTR v3206; // r9
  _QWORD *v3207; // rdx
  unsigned int v3208; // eax
  int v3209; // ecx
  ULONG_PTR v3210; // rcx
  ULONG_PTR v3211; // r8
  ULONG_PTR v3212; // r10
  _DWORD *v3213; // r14
  struct _KTIMER *v3214; // r15
  PKTIMER v3215; // r12
  ULONG_PTR v3216; // r11
  ULONG_PTR v3217; // rdx
  unsigned __int64 v3218; // rcx
  PKTIMER v3219; // rbx
  ULONG_PTR v3220; // r13
  ULONG_PTR v3221; // rdx
  ULONG_PTR v3222; // r10
  ULONG_PTR v3223; // r12
  ULONG_PTR v3224; // r11
  int v3225; // eax
  struct _KTIMER *v3226; // r14
  __int64 v3227; // rbx
  __int64 v3228; // rbx
  _QWORD *v3229; // rax
  int v3230; // ecx
  __int64 v3231; // rdx
  const char *v3232; // r10
  const char *i72; // rax
  ULONG_PTR v3234; // r12
  struct _KTIMER *v3235; // r9
  ULONG_PTR v3236; // r11
  unsigned __int64 v3237; // rdx
  ULONG_PTR v3238; // rcx
  unsigned __int64 v3239; // rax
  _BYTE *v3240; // r14
  int v3241; // eax
  __int64 v3242; // r8
  unsigned int v3243; // eax
  __int64 v3244; // rbx
  _BYTE *v3245; // r15
  int v3246; // ecx
  ULONG_PTR v3247; // r9
  ULONG_PTR v3248; // r13
  ULONG_PTR v3249; // r10
  ULONG_PTR v3250; // rdx
  unsigned int v3251; // eax
  ULONG_PTR v3252; // r13
  _QWORD *v3253; // r12
  size_t v3254; // r15
  ULONG_PTR v3255; // r9
  ULONG_PTR v3256; // r10
  void *v3257; // rcx
  void *v3258; // rdx
  ULONG_PTR v3259; // r8
  ULONG_PTR v3260; // r11
  void *v3261; // r14
  unsigned __int64 v3262; // rcx
  ULONG_PTR v3263; // rdi
  int v3264; // eax
  __int64 v3265; // rdi
  ULONG_PTR v3266; // rdi
  _QWORD *v3267; // rax
  int v3268; // ecx
  __int64 v3269; // rdx
  const char *v3270; // r14
  const char *i73; // rax
  unsigned __int64 v3272; // rdx
  ULONG_PTR v3273; // r14
  ULONG_PTR v3274; // rcx
  unsigned __int64 v3275; // rax
  size_t v3276; // r8
  struct _KTIMER *v3277; // rax
  void *v3278; // rdx
  int v3279; // r8d
  ULONG_PTR v3280; // rdi
  int v3281; // eax
  __int64 v3282; // r8
  unsigned int v3283; // eax
  __int64 v3284; // rax
  ULONG_PTR v3285; // r11
  struct _KTIMER *v3286; // r10
  ULONG_PTR v3287; // rax
  ULONG_PTR v3288; // r9
  ULONG_PTR v3289; // r8
  int v3290; // ecx
  unsigned int v3291; // eax
  int v3292; // ecx
  ULONG_PTR v3293; // rcx
  _DWORD *v3294; // r8
  ULONG_PTR v3295; // r9
  PVOID v3296; // r14
  size_t v3297; // r15
  PKTIMER v3298; // r12
  _QWORD *v3299; // r13
  __int64 v3300; // rdx
  unsigned __int64 v3301; // rcx
  struct _KTIMER *v3302; // rbx
  void *v3303; // r12
  ULONG_PTR v3304; // r13
  ULONG_PTR v3305; // r9
  int v3306; // eax
  __int64 v3307; // r9
  _BYTE *v3308; // r9
  _QWORD *v3309; // rax
  int v3310; // ecx
  __int64 v3311; // rdx
  _QWORD *v3312; // r14
  int v3313; // r11d
  const char *v3314; // rax
  int v3315; // r8d
  unsigned __int64 v3316; // rdx
  int v3317; // ebx
  __int64 v3318; // rax
  __int64 v3319; // rax
  unsigned __int64 i75; // rax
  __int64 v3321; // r8
  int v3322; // eax
  unsigned int v3323; // eax
  __int64 v3324; // rax
  ULONG_PTR v3325; // r11
  struct _KTIMER *v3326; // r10
  ULONG_PTR v3327; // rax
  ULONG_PTR v3328; // r9
  ULONG_PTR v3329; // r8
  int v3330; // ecx
  unsigned int v3331; // eax
  int v3332; // ecx
  ULONG_PTR v3333; // rcx
  _DWORD *v3334; // r8
  ULONG_PTR v3335; // r9
  PVOID v3336; // r14
  size_t v3337; // r15
  PKTIMER v3338; // r12
  _QWORD *v3339; // r13
  __int64 v3340; // rdx
  unsigned __int64 v3341; // rcx
  struct _KTIMER *v3342; // rbx
  void *v3343; // r12
  ULONG_PTR v3344; // r13
  ULONG_PTR v3345; // r9
  int v3346; // eax
  __int64 v3347; // r9
  _QWORD *v3348; // rax
  int v3349; // ecx
  __int64 v3350; // rdx
  _QWORD *v3351; // r14
  const char *v3352; // rax
  int v3353; // r8d
  int v3354; // ebx
  __int64 v3355; // rax
  __int64 v3356; // rax
  unsigned __int64 i74; // rax
  unsigned int v3358; // eax
  ULONG_PTR v3359; // r15
  int v3360; // r10d
  int v3361; // r9d
  int v3362; // r14d
  __int64 v3363; // r8
  unsigned int v3364; // eax
  _BYTE *v3365; // rbx
  int v3366; // ecx
  unsigned int v3367; // eax
  int v3368; // edx
  unsigned __int64 v3369; // rcx
  ULONG_PTR v3370; // rcx
  _DWORD *v3371; // r8
  ULONG_PTR v3372; // r9
  ULONG_PTR v3373; // r10
  struct _KTIMER *v3374; // r11
  struct _KTIMER *v3375; // rdi
  PVOID v3376; // r14
  size_t v3377; // r15
  PVOID v3378; // r12
  ULONG_PTR v3379; // r13
  _BYTE *v3380; // r12
  int v3381; // ecx
  __int64 v3382; // rdx
  _QWORD *v3383; // rax
  _QWORD *v3384; // r8
  int v3385; // r9d
  const char *v3386; // rax
  unsigned __int64 v3387; // rdx
  int v3388; // edi
  __int64 v3389; // rax
  __int64 v3390; // rax
  unsigned __int64 i78; // rax
  int v3392; // r10d
  int v3393; // r9d
  int v3394; // r14d
  const char *v3395; // r15
  __int64 v3396; // r8
  unsigned int v3397; // eax
  int v3398; // ecx
  unsigned int v3399; // eax
  int v3400; // edx
  unsigned __int64 v3401; // rcx
  _DWORD *v3402; // rcx
  ULONG_PTR v3403; // r8
  ULONG_PTR v3404; // r9
  ULONG_PTR v3405; // r10
  ULONG_PTR v3406; // r11
  struct _KTIMER *v3407; // rbx
  PVOID v3408; // r14
  size_t v3409; // r15
  PVOID v3410; // r12
  ULONG_PTR v3411; // r13
  int v3412; // ecx
  _BYTE *v3413; // rbx
  _QWORD *v3414; // rax
  __int64 v3415; // rdx
  const char *i79; // rcx
  unsigned __int64 v3417; // rax
  unsigned __int64 i80; // rcx
  __int64 v3419; // r15
  int v3420; // r10d
  int v3421; // r9d
  int v3422; // r14d
  __int64 v3423; // r8
  unsigned int v3424; // eax
  _BYTE *v3425; // rbx
  int v3426; // ecx
  unsigned int v3427; // eax
  int v3428; // edx
  unsigned __int64 v3429; // rcx
  struct _KTIMER *v3430; // rdi
  PVOID v3431; // r14
  size_t v3432; // r15
  PVOID v3433; // r12
  struct _KEVENT *v3434; // r11
  int v3435; // ecx
  __int64 v3436; // rdx
  struct _KEVENT *v3437; // rax
  _QWORD *v3438; // r8
  const char *v3439; // rax
  int v3440; // r9d
  __int64 v3441; // r14
  unsigned __int64 v3442; // rdi
  int v3443; // r10d
  __int64 v3444; // rax
  __int64 v3445; // rdi
  unsigned __int128 v3446; // rax
  unsigned __int64 i76; // rax
  struct _KTIMER *v3448; // r14
  PVOID v3449; // r15
  int v3450; // r9d
  size_t v3451; // r12
  PVOID v3452; // r13
  __int64 v3453; // r8
  ULONG_PTR v3454; // r10
  unsigned int v3455; // eax
  int v3456; // ecx
  unsigned int v3457; // eax
  __int64 v3458; // r9
  PVOID v3459; // rcx
  int v3460; // edx
  unsigned __int64 v3461; // rcx
  int v3462; // r13d
  struct _KTIMER *v3463; // rbx
  void *v3464; // r14
  size_t v3465; // r15
  void *v3466; // r12
  __int64 v3467; // r14
  _BYTE *v3468; // r14
  _QWORD *v3469; // rax
  int v3470; // ecx
  __int64 v3471; // rdx
  _QWORD *v3472; // r8
  const char *v3473; // rax
  int v3474; // r9d
  __int64 v3475; // r11
  unsigned __int64 v3476; // rbx
  int v3477; // r10d
  __int64 v3478; // rax
  __int64 v3479; // rbx
  unsigned __int128 v3480; // rax
  unsigned __int64 i77; // rax
  __int64 v3482; // r15
  unsigned int v3483; // eax
  _BYTE *v3484; // r14
  int v3485; // ecx
  unsigned int v3486; // eax
  __int64 v3487; // r8
  int v3488; // edx
  unsigned __int64 v3489; // rcx
  int v3490; // edi
  _BYTE *v3491; // rdx
  int v3492; // ecx
  _QWORD *v3493; // rax
  __int64 v3494; // rbx
  unsigned __int64 v3495; // rcx
  unsigned __int64 i81; // rax
  __int64 v3497; // r13
  unsigned int v3498; // eax
  _BYTE *v3499; // rbx
  int v3500; // ecx
  struct _KTIMER *v3501; // rdi
  unsigned int v3502; // eax
  __int64 v3503; // r8
  int v3504; // edx
  unsigned __int64 v3505; // rcx
  int v3506; // r15d
  _BYTE *v3507; // rdx
  _QWORD *v3508; // rax
  int v3509; // ecx
  __int64 v3510; // r8
  unsigned __int64 v3511; // rcx
  unsigned __int64 i82; // rax
  int v3513; // r12d
  int v3514; // r9d
  __int64 v3515; // r13
  __int64 v3516; // r8
  struct _KTIMER *v3517; // r15
  unsigned int v3518; // eax
  _BYTE *v3519; // rdi
  int v3520; // ecx
  struct _KTIMER *v3521; // r14
  unsigned int v3522; // eax
  __int64 v3523; // r8
  int v3524; // edx
  unsigned __int64 v3525; // rcx
  int v3526; // r15d
  _BYTE *v3527; // rbx
  int v3528; // ecx
  _QWORD *v3529; // rax
  __int64 v3530; // rdx
  int v3531; // ecx
  unsigned __int64 v3532; // rdx
  unsigned __int64 i83; // rax
  __int64 v3534; // r15
  unsigned int v3535; // eax
  __int64 v3536; // rbx
  int v3537; // ecx
  unsigned int v3538; // eax
  __int64 v3539; // r8
  int v3540; // edx
  unsigned __int64 v3541; // rcx
  int v3542; // r14d
  __int64 v3543; // rdx
  int v3544; // ecx
  _QWORD *v3545; // rax
  __int64 v3546; // rbx
  unsigned __int64 v3547; // rcx
  unsigned __int64 i84; // rax
  __int64 v3549; // r15
  unsigned int v3550; // eax
  _BYTE *v3551; // rbx
  int v3552; // ecx
  unsigned int v3553; // eax
  __int64 v3554; // r8
  int v3555; // edx
  unsigned __int64 v3556; // rcx
  int v3557; // r14d
  _BYTE *v3558; // rdx
  int v3559; // ecx
  __int64 v3560; // rdi
  _QWORD *v3561; // rax
  unsigned __int64 v3562; // rcx
  unsigned __int64 i85; // rax
  int v3564; // r9d
  int v3565; // r10d
  const char *v3566; // r15
  __int64 v3567; // r13
  __int64 v3568; // r8
  unsigned int v3569; // eax
  __int64 v3570; // rdi
  int v3571; // ecx
  unsigned int v3572; // eax
  __int64 v3573; // r8
  int v3574; // edx
  unsigned __int64 v3575; // rcx
  int v3576; // r14d
  __int64 v3577; // r14
  int v3578; // ecx
  _QWORD *v3579; // rax
  __int64 v3580; // rdx
  const char *v3581; // rdx
  unsigned __int64 v3582; // rax
  unsigned __int64 v3583; // rcx
  int v3584; // r12d
  int v3585; // r9d
  __int64 v3586; // r13
  const char *v3587; // r15
  __int64 v3588; // r8
  unsigned int v3589; // eax
  __int64 v3590; // rdi
  int v3591; // ecx
  unsigned int v3592; // eax
  __int64 v3593; // r8
  int v3594; // edx
  unsigned __int64 v3595; // rcx
  int v3596; // r14d
  struct _KTIMER *v3597; // rbx
  __int64 v3598; // r14
  int v3599; // ecx
  __int64 v3600; // rdx
  _QWORD *v3601; // rax
  const char *v3602; // rdx
  unsigned __int64 v3603; // rax
  unsigned __int64 i86; // rcx
  int v3605; // edi
  int v3606; // r12d
  __int64 v3607; // r13
  __int64 v3608; // r8
  unsigned int v3609; // eax
  _BYTE *v3610; // r14
  int v3611; // ecx
  unsigned int v3612; // eax
  __int64 v3613; // rdi
  int v3614; // edx
  unsigned __int64 v3615; // rcx
  int v3616; // r15d
  struct _KTIMER *v3617; // rbx
  _BYTE *v3618; // r15
  int v3619; // ecx
  __int64 v3620; // rdx
  _QWORD *v3621; // rax
  __int64 *v3622; // rdi
  const char *v3623; // rax
  int v3624; // r8d
  __int64 v3625; // r10
  unsigned __int64 v3626; // rbx
  int v3627; // r9d
  __int64 v3628; // rax
  __int64 v3629; // rbx
  unsigned __int128 v3630; // rax
  int v3631; // edx
  __int64 v3632; // rax
  __int64 v3633; // rax
  unsigned __int64 i87; // rax
  __int64 v3635; // r10
  __int64 v3636; // r8
  unsigned int v3637; // r15d
  unsigned int v3638; // eax
  __int64 v3639; // rbx
  int v3640; // ecx
  struct _KTIMER *v3641; // rdi
  unsigned int v3642; // eax
  __int64 v3643; // r8
  int v3644; // edx
  unsigned __int64 v3645; // rcx
  int v3646; // r12d
  __int64 v3647; // r9
  int v3648; // ecx
  __int64 v3649; // r9
  _QWORD *v3650; // rax
  __int64 v3651; // rdx
  unsigned __int64 v3652; // rcx
  unsigned __int64 i88; // rax
  struct _KTIMER *v3654; // rdx
  _QWORD *v3655; // r10
  _QWORD *v3656; // rdi
  const char *v3657; // rax
  int v3658; // r8d
  __int64 v3659; // r12
  unsigned __int64 v3660; // rcx
  __int64 v3661; // rbx
  unsigned int i89; // r11d
  __int64 v3663; // rax
  __int64 v3664; // rbx
  unsigned __int128 v3665; // rax
  unsigned int v3666; // r15d
  unsigned __int64 v3667; // rax
  __int64 v3668; // rax
  unsigned int v3669; // edi
  __int64 v3670; // r13
  __int64 v3671; // rcx
  __int64 v3672; // rdx
  PVOID *v3673; // rbx
  const UNICODE_STRING *v3674; // r15
  char *v3675; // rdi
  __int64 v3676; // r12
  wchar_t *v3677; // r15
  unsigned int v3678; // ecx
  __int64 v3679; // rbx
  int v3680; // ecx
  unsigned int v3681; // eax
  __int64 v3682; // r8
  int v3683; // edx
  unsigned __int64 v3684; // rcx
  int v3685; // r14d
  struct _KTIMER *v3686; // rdi
  __int64 v3687; // rcx
  int v3688; // edx
  __int64 v3689; // rbx
  _QWORD *v3690; // rax
  unsigned __int64 v3691; // rdx
  unsigned __int64 i90; // rax
  char *v3693; // rdi
  unsigned int v3694; // ebx
  _QWORD *v3695; // rdx
  unsigned __int64 v3696; // r8
  signed __int64 v3697; // rdi
  __int64 v3698; // r15
  unsigned int v3699; // eax
  int v3700; // ecx
  unsigned int v3701; // eax
  __int64 v3702; // r8
  int v3703; // edx
  unsigned __int64 v3704; // rcx
  int v3705; // r14d
  struct _KTIMER *v3706; // rbx
  _BYTE *v3707; // rdx
  int v3708; // ecx
  _QWORD *v3709; // rax
  __int64 v3710; // rbx
  unsigned __int64 v3711; // rcx
  unsigned __int64 i91; // rax
  struct _KTIMER *v3713; // r14
  __int64 v3714; // r15
  unsigned int v3715; // eax
  __int64 v3716; // rbx
  int v3717; // ecx
  unsigned int v3718; // eax
  __int64 v3719; // r8
  struct _KTIMER *v3720; // r13
  int v3721; // edx
  unsigned __int64 v3722; // rcx
  int v3723; // r14d
  __int64 v3724; // rdx
  _QWORD *v3725; // rax
  int v3726; // ecx
  __int64 v3727; // rbx
  unsigned __int64 v3728; // rcx
  unsigned __int64 i92; // rax
  _BYTE *v3730; // r14
  __int64 v3731; // rax
  _QWORD *v3732; // r12
  int v3733; // r9d
  int v3734; // r10d
  __int64 v3735; // r15
  __int64 v3736; // r8
  unsigned int v3737; // r13d
  unsigned int v3738; // eax
  __int64 v3739; // rbx
  int v3740; // ecx
  unsigned int v3741; // eax
  __int64 v3742; // r8
  int v3743; // edx
  unsigned __int64 v3744; // rcx
  int v3745; // r15d
  struct _KTIMER *v3746; // rdi
  __int64 v3747; // r15
  int v3748; // ecx
  __int64 v3749; // rdx
  _QWORD *v3750; // rax
  _QWORD *v3751; // rdi
  const char *v3752; // rax
  int v3753; // r8d
  __int64 v3754; // r10
  unsigned __int64 v3755; // rcx
  unsigned __int64 v3756; // rbx
  unsigned int i93; // r9d
  __int64 v3758; // rax
  __int64 v3759; // rbx
  unsigned __int128 v3760; // rax
  unsigned int v3761; // edx
  unsigned __int64 v3762; // rax
  __int64 v3763; // rax
  unsigned __int64 i94; // rax
  struct _KTIMER *v3765; // r12
  int v3766; // r13d
  int v3767; // edi
  __int64 v3768; // r15
  __int64 v3769; // r8
  unsigned int v3770; // eax
  __int64 v3771; // rbx
  int v3772; // ecx
  unsigned int v3773; // eax
  __int64 v3774; // r8
  int v3775; // edx
  unsigned __int64 v3776; // rcx
  int v3777; // r14d
  __int64 v3778; // r15
  _QWORD *v3779; // rax
  int v3780; // ecx
  __int64 v3781; // rdx
  struct _KEVENT *v3782; // rbx
  struct _KEVENT *v3783; // rdi
  const char *v3784; // rax
  int v3785; // r8d
  unsigned __int64 v3786; // rdx
  int v3787; // ebx
  __int64 v3788; // rax
  __int64 Type; // rax
  unsigned __int64 i95; // rax
  ULONG_PTR v3791; // rax
  struct _KTIMER *v3792; // rcx
  int v3793; // edi
  int v3794; // r9d
  _QWORD *v3795; // r13
  __int64 v3796; // r15
  __int64 v3797; // r8
  unsigned int v3798; // r12d
  unsigned int v3799; // eax
  __int64 v3800; // rbx
  PKTIMER v3801; // r10
  int v3802; // ecx
  struct _KTIMER *v3803; // r11
  unsigned int v3804; // eax
  __int64 v3805; // r8
  int v3806; // edx
  unsigned __int64 v3807; // rcx
  int v3808; // r14d
  ULONG_PTR v3809; // rdi
  __int64 v3810; // r15
  int v3811; // ecx
  _QWORD *v3812; // rax
  __int64 v3813; // rdx
  _QWORD *v3814; // rdi
  const char *v3815; // rax
  int v3816; // r8d
  __int64 v3817; // r10
  unsigned __int64 v3818; // rcx
  unsigned __int64 v3819; // rbx
  unsigned int v3820; // r9d
  __int64 v3821; // rax
  __int64 v3822; // rbx
  unsigned __int128 v3823; // rax
  unsigned int v3824; // edx
  unsigned __int64 v3825; // rax
  __int64 v3826; // rax
  unsigned __int64 i96; // rax
  int v3828; // ebx
  int v3829; // edi
  __int64 v3830; // r13
  __int64 v3831; // r8
  unsigned int v3832; // eax
  __int64 v3833; // r15
  int v3834; // ecx
  PKTIMER v3835; // r12
  unsigned int v3836; // eax
  __int64 v3837; // rdi
  int v3838; // edx
  unsigned __int64 v3839; // rcx
  int v3840; // r14d
  __int64 v3841; // r14
  _QWORD *v3842; // rax
  int v3843; // ecx
  __int64 v3844; // rdx
  ULONG_PTR v3845; // rbx
  _QWORD *v3846; // rdi
  int v3847; // r8d
  const char *v3848; // rax
  unsigned __int64 v3849; // rdx
  int v3850; // ebx
  __int64 v3851; // rax
  __int64 v3852; // rax
  unsigned __int64 i97; // rax
  struct _KEVENT *v3854; // rcx
  int v3855; // r13d
  __int64 v3856; // rdi
  struct _KTIMER *v3857; // rbx
  _BYTE *v3858; // r9
  struct _KTIMER *v3859; // rdx
  PVOID v3860; // r8
  _BYTE *v3861; // r12
  unsigned int v3862; // esi
  int v3863; // ebx
  __int64 v3864; // rax
  struct _KEVENT *v3865; // r10
  __int64 v3866; // r15
  __int64 v3867; // r8
  unsigned int v3868; // ecx
  int v3869; // ecx
  unsigned int v3870; // eax
  __int64 v3871; // r9
  int v3872; // edx
  unsigned __int64 v3873; // rcx
  int v3874; // r12d
  int *v3875; // r15
  int v3876; // ecx
  _QWORD *v3877; // rax
  __int64 v3878; // rdx
  unsigned __int64 v3879; // rcx
  int *v3880; // r12
  struct _KTIMER *v3881; // r11
  __int64 v3882; // rbx
  int v3883; // esi
  _BYTE *v3884; // r14
  unsigned int v3885; // r15d
  const char *v3886; // r13
  int v3887; // r9d
  const char *v3888; // r8
  const char *v3889; // rax
  unsigned __int64 i98; // rdx
  __int64 v3891; // rax
  unsigned __int64 i99; // rax
  __int64 v3893; // rax
  int v3894; // ecx
  __int64 v3895; // rcx
  __int64 v3896; // r9
  __int64 v3897; // r8
  _QWORD *v3898; // rdx
  unsigned __int64 v3899; // rdi
  int v3900; // r13d
  struct _KTIMER *v3901; // r12
  struct _KEVENT *v3902; // rdx
  _QWORD *v3903; // r15
  unsigned int v3904; // esi
  int v3905; // ebx
  __int64 v3906; // rax
  ULONG_PTR v3907; // r9
  __int64 v3908; // r8
  unsigned int v3909; // ecx
  int v3910; // edx
  unsigned int v3911; // eax
  __int64 v3912; // r8
  int v3913; // edx
  unsigned __int64 v3914; // rdi
  __int64 v3915; // rdi
  int *v3916; // rdi
  int v3917; // ecx
  __int64 v3918; // rdx
  _QWORD *v3919; // rax
  unsigned __int64 v3920; // rcx
  int *v3921; // r12
  unsigned int v3922; // esi
  struct _KEVENT *v3923; // rdi
  const char *v3924; // r15
  const char *v3925; // r8
  const char *v3926; // rax
  unsigned __int64 i100; // rdx
  int v3928; // r9d
  __int64 v3929; // rax
  unsigned __int64 i101; // rax
  __int64 v3931; // rax
  int v3932; // ecx
  __int64 v3933; // rcx
  __int64 v3934; // r9
  _QWORD *v3935; // rdx
  unsigned __int64 v3936; // rdi
  __int64 v3937; // rax
  int v3938; // ecx
  __int64 v3939; // rax
  __int64 v3940; // rcx
  __int64 v3941; // rax
  ULONG_PTR v3942; // r15
  __int64 (__fastcall *v3943)(ULONG_PTR, char *); // rax
  ULONG_PTR v3944; // rax
  int v3945; // r13d
  ULONG_PTR v3946; // r12
  struct _KTIMER *v3947; // rbx
  int v3948; // ecx
  int *v3949; // rax
  unsigned int v3950; // r10d
  int v3951; // ecx
  unsigned int v3952; // edx
  int v3953; // r8d
  _BYTE *v3954; // r9
  unsigned int v3955; // r11d
  _BYTE *v3956; // rbx
  __int64 v3957; // r8
  __int64 v3958; // rax
  int v3959; // eax
  int v3960; // eax
  __int64 (__fastcall *v3961)(ULONG_PTR, char *); // rax
  __int64 v3962; // rax
  _BYTE *v3963; // r8
  ULONG_PTR v3964; // r12
  struct _KEVENT *v3965; // r13
  int v3966; // r11d
  int v3967; // ecx
  int *v3968; // rax
  __int64 v3969; // rdx
  __int64 v3970; // r9
  int v3971; // ecx
  int v3972; // edi
  unsigned int v3973; // r10d
  struct _KEVENT **v3974; // rbx
  __int64 v3975; // rdi
  __int64 v3976; // rax
  int v3977; // eax
  int v3978; // eax
  __int64 v3979; // rdx
  __int64 v3980; // rax
  char **v3981; // rdi
  __int64 v3982; // rcx
  __int64 v3983; // rdx
  char *v3984; // rdx
  __int64 v3985; // r8
  ULONG_PTR v3986; // rax
  struct _KTIMER *v3987; // r13
  struct _KTIMER *v3988; // rbx
  __int64 v3989; // rdx
  int v3990; // eax
  int v3991; // ecx
  __int64 v3992; // rax
  __int64 v3993; // rdx
  int v3994; // ecx
  __int64 (__fastcall *v3995)(ULONG_PTR, __int64, __int64, _DWORD *); // rax
  __int64 v3996; // rdx
  __int64 v3997; // rcx
  int v3998; // eax
  __int64 v3999; // rax
  int v4000; // ecx
  __int64 (__fastcall *v4001)(ULONG_PTR); // rax
  __int64 v4002; // rdi
  int v4003; // ecx
  __int64 v4004; // rcx
  __int64 v4005; // r9
  unsigned int v4006; // eax
  __int64 v4007; // r8
  __int64 *v4008; // rdx
  unsigned __int64 v4009; // rdi
  __int64 v4010; // rax
  __int64 v4011; // rax
  int v4012; // ecx
  __int64 v4013; // rax
  __int64 v4014; // rcx
  __int64 v4015; // rax
  __int64 v4016; // r15
  __int64 v4017; // r8
  unsigned int v4018; // eax
  int v4019; // ecx
  unsigned int v4020; // eax
  __int64 v4021; // r8
  int v4022; // edx
  unsigned __int64 v4023; // rcx
  int v4024; // r14d
  __int64 v4025; // rdx
  _QWORD *v4026; // rsi
  _BYTE *v4027; // r12
  _DWORD *v4028; // r14
  __int64 v4029; // r13
  int v4030; // ecx
  _QWORD *v4031; // r11
  _QWORD *v4032; // rax
  _QWORD *v4033; // r8
  const char *v4034; // rax
  int v4035; // r9d
  __int64 v4036; // r15
  unsigned __int64 v4037; // rbx
  unsigned int v4038; // r10d
  __int64 v4039; // rax
  __int64 v4040; // rbx
  unsigned __int128 v4041; // rax
  unsigned int v4042; // edx
  unsigned __int64 v4043; // rax
  __int64 v4044; // rax
  unsigned __int64 i102; // rax
  _QWORD *v4046; // r14
  ULONG_PTR v4047; // rbx
  int v4048; // eax
  int v4049; // eax
  _BYTE *v4050; // r15
  int v4051; // ecx
  char *v4052; // r13
  unsigned int v4053; // edi
  __int64 v4054; // rdx
  const char *v4055; // r10
  _DWORD *v4056; // r12
  _QWORD *v4057; // rax
  __int64 i103; // rdx
  unsigned __int64 v4059; // rcx
  unsigned __int64 v4060; // r8
  const char *v4061; // rax
  __int64 v4062; // r9
  __int64 v4063; // r14
  unsigned __int64 v4064; // rbx
  unsigned int v4065; // r11d
  __int64 v4066; // rax
  __int64 v4067; // rbx
  unsigned __int64 v4068; // rcx
  unsigned int v4069; // edi
  unsigned __int64 v4070; // rax
  __int64 v4071; // rax
  unsigned __int64 i104; // rax
  char *v4073; // r12
  __int64 v4074; // r13
  unsigned int v4075; // eax
  int v4076; // ecx
  unsigned int v4077; // eax
  __int64 v4078; // r8
  int v4079; // edx
  unsigned __int64 v4080; // rcx
  int v4081; // r15d
  struct _KTIMER *v4082; // rbx
  int v4083; // ecx
  _QWORD *v4084; // rax
  __int64 v4085; // rdx
  const char *v4086; // rax
  __int64 v4087; // r15
  __int64 v4088; // r11
  unsigned __int64 v4089; // rbx
  unsigned int v4090; // r10d
  __int64 v4091; // rax
  __int64 v4092; // rbx
  unsigned __int128 v4093; // rax
  unsigned __int64 v4094; // rax
  __int64 v4095; // rax
  unsigned __int64 i105; // rax
  struct _KTIMER *v4097; // r15
  ULONG_PTR v4098; // r12
  __int64 v4099; // r13
  __int64 v4100; // rax
  _QWORD *v4101; // rdi
  ULONG_PTR v4102; // rbx
  int v4103; // ecx
  _QWORD *v4104; // rax
  _QWORD *v4105; // rax
  __int64 (__fastcall *v4106)(ULONG_PTR, __int64, unsigned __int64, __int64); // rax
  ULONG_PTR v4107; // r14
  __int64 v4108; // rax
  unsigned __int16 v4109; // r11
  int v4110; // ecx
  __int64 v4111; // rcx
  _BYTE *v4112; // rbx
  __int64 v4113; // r10
  unsigned int v4114; // eax
  __int64 v4115; // r8
  __int64 *v4116; // rdx
  unsigned __int64 v4117; // r9
  __int64 v4118; // rax
  __int64 v4119; // rax
  int v4120; // ecx
  __int64 v4121; // rcx
  __int64 v4122; // r12
  unsigned int v4123; // ecx
  struct _KTIMER *v4124; // r13
  PVOID v4125; // r15
  __int64 v4126; // r10
  unsigned int v4127; // edx
  unsigned int v4128; // r8d
  unsigned int v4129; // edx
  unsigned int *v4130; // rax
  unsigned int v4131; // ecx
  unsigned int v4132; // eax
  __int64 v4133; // rax
  int v4134; // ecx
  struct _KTIMER *v4135; // r15
  unsigned int v4136; // r12d
  unsigned int v4137; // r12d
  unsigned int *v4138; // r13
  ULONG_PTR v4139; // r8
  int v4140; // ecx
  __int64 v4141; // rcx
  __int64 v4142; // r10
  unsigned int v4143; // eax
  __int64 v4144; // r8
  __int64 *v4145; // rdx
  unsigned __int64 v4146; // r9
  __int64 v4147; // rax
  __int64 v4148; // rax
  int v4149; // ecx
  __int64 v4150; // rax
  __int64 v4151; // rcx
  struct _KTIMER *v4152; // r15
  _DWORD *v4153; // rax
  ULONG_PTR v4154; // rdx
  unsigned int v4155; // eax
  int v4156; // ecx
  __int64 v4157; // rcx
  __int64 v4158; // r10
  unsigned int v4159; // eax
  __int64 v4160; // r8
  __int64 *v4161; // rdx
  unsigned __int64 v4162; // r9
  __int64 v4163; // rax
  __int64 v4164; // rax
  int v4165; // ecx
  __int64 v4166; // rax
  __int64 v4167; // rcx
  int v4168; // r10d
  _BYTE *v4169; // r13
  int v4170; // ecx
  __int64 v4171; // rcx
  struct _KTIMER *v4172; // r14
  __int64 v4173; // r11
  unsigned int v4174; // eax
  __int64 *v4175; // rdx
  unsigned __int64 v4176; // r10
  __int64 v4177; // rax
  __int64 v4178; // rax
  int v4179; // ecx
  int v4180; // ecx
  __int64 v4181; // rcx
  __int64 v4182; // r11
  unsigned int v4183; // eax
  __int64 *v4184; // rdx
  unsigned __int64 v4185; // r10
  __int64 v4186; // rax
  int v4187; // ecx
  __int64 v4188; // rcx
  __int64 v4189; // r11
  unsigned int v4190; // eax
  __int64 *v4191; // rdx
  unsigned __int64 v4192; // r10
  __int64 v4193; // rax
  unsigned int v4194; // edx
  __int64 v4195; // r12
  unsigned int v4196; // ecx
  int v4197; // ecx
  unsigned int v4198; // eax
  __int64 v4199; // rdi
  int v4200; // edx
  unsigned __int64 v4201; // rcx
  struct _KTIMER *v4202; // rbx
  int v4203; // r15d
  _BYTE *v4204; // rcx
  _QWORD *v4205; // rax
  int v4206; // edx
  __int64 v4207; // rbx
  struct _KEVENT *v4208; // r12
  unsigned __int64 v4209; // rdx
  unsigned __int64 i106; // rax
  ULONG_PTR v4211; // rax
  _BYTE *v4212; // rcx
  _DWORD *v4213; // r15
  size_t v4214; // rax
  struct _KTIMER *v4215; // r13
  _BYTE *v4216; // rbx
  __int64 v4217; // rdx
  _DWORD *v4218; // rax
  __int64 v4219; // rcx
  _DWORD *v4220; // r12
  _DWORD *v4221; // r10
  int v4222; // r14d
  int v4223; // edx
  __int16 v4224; // cx
  char *v4225; // rdx
  char *v4226; // r8
  __int64 v4227; // rdi
  char *v4228; // r9
  int v4229; // r11d
  char *v4230; // r10
  char v4231; // cl
  char v4232; // al
  int v4233; // edi
  unsigned int v4234; // edx
  char *v4235; // rdi
  __int64 v4236; // rcx
  __int64 v4237; // rax
  char v4238; // cl
  char v4239; // al
  int v4240; // edi
  __int64 v4241; // rdx
  char v4242; // cl
  char v4243; // al
  __int64 v4244; // rdx
  int v4245; // edi
  char v4246; // cl
  char v4247; // al
  struct _KTIMER *v4248; // rdx
  unsigned int v4249; // r13d
  __int64 v4250; // rdi
  struct _KEVENT *v4251; // r11
  unsigned int v4252; // r13d
  unsigned int LockNV; // eax
  unsigned int SignalState; // ecx
  unsigned int v4255; // r12d
  _QWORD *v4256; // r11
  unsigned int v4257; // r8d
  unsigned int v4258; // edi
  struct _KTIMER *v4259; // rax
  struct _KTIMER *v4260; // r14
  unsigned __int64 v4261; // r9
  _QWORD *v4262; // r9
  int v4263; // r10d
  const char *v4264; // rax
  unsigned __int64 v4265; // r13
  unsigned __int64 v4266; // rcx
  unsigned __int64 v4267; // rdi
  unsigned int i107; // r14d
  __int64 v4269; // rax
  __int64 v4270; // rdi
  unsigned __int128 v4271; // rax
  unsigned int v4272; // r8d
  unsigned __int64 v4273; // rax
  __int64 v4274; // rax
  unsigned __int64 i108; // rax
  int v4276; // ecx
  struct _KEVENT *v4277; // rdi
  unsigned int *v4278; // r15
  unsigned int v4279; // r12d
  char *v4280; // rax
  struct _KTIMER *v4281; // rcx
  struct _KTIMER *v4282; // r9
  char v4283; // di
  unsigned int v4284; // r13d
  __int64 v4285; // r14
  int v4286; // ecx
  ULONG_PTR v4287; // r11
  __int64 v4288; // rcx
  __int64 v4289; // r11
  __int64 v4290; // r8
  __int64 *v4291; // rdi
  unsigned __int64 v4292; // r10
  __int64 v4293; // rax
  __int64 v4294; // rax
  int v4295; // ecx
  _QWORD *v4296; // r11
  unsigned int v4297; // r8d
  unsigned int i109; // edx
  ULONG_PTR v4299; // r9
  _QWORD *v4300; // r9
  int v4301; // r10d
  const char *v4302; // rax
  __int64 v4303; // r15
  unsigned __int64 v4304; // rcx
  unsigned __int64 v4305; // rdi
  unsigned int i110; // r14d
  __int64 v4307; // rax
  __int64 v4308; // rdi
  unsigned __int128 v4309; // rax
  unsigned int v4310; // r8d
  unsigned __int64 v4311; // rax
  __int64 v4312; // rax
  unsigned __int64 i111; // rax
  unsigned int *v4314; // r15
  __int64 v4315; // r11
  unsigned int v4316; // r8d
  _QWORD *v4317; // r11
  int v4318; // edx
  struct _KTIMER *v4319; // r14
  unsigned __int64 v4320; // r9
  _QWORD *v4321; // r9
  int v4322; // r10d
  const char *v4323; // rcx
  unsigned __int64 v4324; // r15
  unsigned __int64 v4325; // rdx
  unsigned __int64 v4326; // rdi
  unsigned int v4327; // r14d
  __int64 v4328; // rax
  __int64 v4329; // rdi
  unsigned __int128 v4330; // rax
  unsigned int v4331; // r8d
  unsigned __int64 v4332; // rax
  __int64 v4333; // rax
  unsigned __int64 i112; // rax
  struct _KEVENT *v4335; // rdi
  __int64 v4336; // r9
  _BYTE *v4337; // rax
  __int64 v4338; // rax
  __int64 v4339; // rcx
  __int64 v4340; // rax
  ULONG_PTR v4341; // rdi
  ULONG_PTR i113; // rbx
  __int64 v4343; // rax
  __int64 v4344; // rdx
  int v4345; // eax
  __int64 v4346; // rax
  int v4347; // ecx
  __int64 v4348; // rcx
  __int64 v4349; // r9
  unsigned int v4350; // eax
  __int64 v4351; // r8
  __int64 *v4352; // rdx
  unsigned __int64 v4353; // rdi
  __int64 v4354; // rax
  __int64 v4355; // rax
  int v4356; // ecx
  __int64 v4357; // rax
  __int64 v4358; // rcx
  __int64 v4359; // r15
  unsigned int v4360; // r9d
  unsigned int v4361; // eax
  __int64 v4362; // rbx
  int v4363; // ecx
  unsigned int v4364; // eax
  __int64 v4365; // r8
  int v4366; // edx
  unsigned __int64 v4367; // rcx
  int v4368; // r14d
  __int64 v4369; // r10
  int v4370; // ecx
  __int64 v4371; // rdx
  _QWORD *v4372; // rax
  unsigned __int64 v4373; // rcx
  unsigned __int64 i114; // rax
  __int64 v4375; // rdx
  int v4376; // r8d
  __int64 v4377; // r15
  _QWORD *v4378; // r11
  _QWORD *v4379; // r9
  const char *v4380; // rax
  __int64 v4381; // rbx
  unsigned int v4382; // r14d
  __int64 v4383; // rax
  __int64 v4384; // rbx
  unsigned __int128 v4385; // rax
  unsigned int v4386; // edx
  unsigned __int64 v4387; // rax
  __int64 v4388; // rax
  unsigned __int64 v4389; // rax
  unsigned __int64 v4390; // rcx
  unsigned __int128 v4391; // rax
  unsigned int v4392; // eax
  bool v4393; // zf
  __int64 (__fastcall *v4394)(); // r9
  struct _KTIMER *v4395; // rbx
  unsigned int v4396; // eax
  unsigned int v4397; // eax
  unsigned __int64 v4398; // rax
  unsigned __int128 v4399; // rax
  unsigned __int64 v4400; // rcx
  int v4401; // eax
  ULONG_PTR v4402; // r15
  unsigned __int64 v4403; // r12
  __int64 v4404; // r9
  struct _KTIMER *v4405; // r13
  _DWORD *v4406; // r14
  __int64 v4407; // rdx
  int v4408; // edx
  bool v4409; // sf
  int v4410; // r8d
  __int64 v4411; // rcx
  __int64 *v4412; // r8
  ULONG_PTR v4413; // r14
  int v4414; // ecx
  __int64 v4415; // rcx
  ULONG_PTR v4416; // rdx
  unsigned __int64 v4417; // rcx
  unsigned int v4418; // ebx
  __int64 v4419; // rbx
  __int64 v4420; // rax
  __int64 v4421; // rax
  __int64 v4422; // rcx
  unsigned __int64 v4423; // r15
  __int64 v4424; // r8
  unsigned int v4425; // r10d
  unsigned __int64 v4426; // rax
  __int64 v4427; // rcx
  int v4428; // r14d
  unsigned __int64 v4429; // rax
  unsigned __int128 v4430; // rax
  unsigned __int64 v4431; // r13
  unsigned __int64 v4432; // rax
  unsigned __int64 v4433; // rbx
  __int64 (__fastcall *v4434)(ULONG_PTR, __int64, __int64, __int64); // rax
  ULONG_PTR *v4435; // rbx
  __int64 v4436; // rbx
  int v4437; // r9d
  _QWORD *v4438; // r8
  unsigned __int64 v4439; // r10
  unsigned __int64 v4440; // rax
  unsigned __int128 v4441; // rax
  unsigned __int64 v4442; // rax
  unsigned __int128 v4443; // rax
  unsigned __int64 v4444; // rdx
  unsigned int v4445; // r14d
  _QWORD *v4446; // r8
  unsigned __int64 v4447; // r9
  unsigned __int64 v4448; // rax
  unsigned __int128 v4449; // rax
  unsigned __int64 v4450; // rax
  unsigned __int128 v4451; // rax
  unsigned __int64 v4452; // rdx
  _QWORD *v4453; // rcx
  unsigned __int64 v4454; // rbx
  char *v4455; // rcx
  int v4456; // eax
  __int64 v4457; // r8
  unsigned int v4458; // r10d
  unsigned __int64 v4459; // rax
  __int64 v4460; // rcx
  int v4461; // r14d
  unsigned __int64 v4462; // rax
  unsigned __int128 v4463; // rax
  unsigned __int64 v4464; // r15
  unsigned __int64 v4465; // rax
  unsigned __int64 v4466; // rbx
  __int64 v4467; // r13
  _QWORD *v4468; // rbx
  unsigned __int64 v4469; // rax
  unsigned __int128 v4470; // rax
  unsigned int v4471; // eax
  unsigned int v4472; // eax
  unsigned int v4473; // eax
  int v4474; // r9d
  _QWORD *v4475; // r8
  unsigned __int64 v4476; // r10
  unsigned __int64 v4477; // rax
  unsigned __int128 v4478; // rax
  unsigned __int64 v4479; // rax
  unsigned __int128 v4480; // rax
  unsigned __int64 v4481; // rdx
  unsigned int v4482; // r14d
  _QWORD *v4483; // r8
  unsigned __int64 v4484; // r9
  unsigned __int64 v4485; // rax
  unsigned __int128 v4486; // rax
  unsigned __int64 v4487; // rax
  unsigned __int128 v4488; // rax
  unsigned __int64 v4489; // rdx
  char *v4490; // rdx
  int v4491; // r8d
  __int64 (__fastcall *v4492)(); // rcx
  _QWORD *v4493; // rbx
  __int64 v4494; // r9
  char v4495; // al
  unsigned __int64 v4496; // rax
  __int64 v4497; // rcx
  __int64 v4498; // r8
  unsigned int v4499; // ecx
  __int64 v4500; // rdx
  unsigned __int64 v4501; // r14
  int v4502; // ecx
  unsigned int v4503; // eax
  __int64 v4504; // r8
  int v4505; // ecx
  unsigned __int64 v4506; // rdx
  int v4507; // edi
  __int64 v4508; // rax
  int *v4509; // r13
  _QWORD *v4510; // r10
  __int64 v4511; // r8
  _QWORD *v4512; // rdi
  const char *v4513; // rax
  __int64 v4514; // r9
  __int64 v4515; // r15
  unsigned __int64 v4516; // rbx
  unsigned int v4517; // r11d
  __int64 v4518; // rdx
  __int64 v4519; // rax
  __int64 v4520; // rbx
  unsigned __int128 v4521; // rax
  char v4522; // r9
  __int64 v4523; // r8
  unsigned __int64 v4524; // rax
  __int64 v4525; // rax
  unsigned __int64 i115; // rax
  unsigned int v4527; // ebx
  BOOL v4528; // r12d
  __int64 v4529; // rcx
  unsigned __int8 v4530; // r15
  unsigned __int64 v4531; // rdi
  int v4532; // eax
  struct _KTIMER *v4533; // r15
  __int64 v4534; // rcx
  int v4535; // ecx
  __int64 v4536; // rcx
  unsigned int v4537; // eax
  unsigned __int64 v4538; // rdi
  __int64 v4539; // rax
  __int64 v4540; // rax
  int v4541; // ecx
  __int64 v4542; // rax
  __int64 v4543; // rcx
  unsigned __int64 v4544; // rcx
  unsigned __int64 i116; // rax
  unsigned __int64 v4546; // rax
  unsigned __int128 v4547; // rax
  __int64 v4548; // r8
  unsigned __int64 v4549; // rax
  __int64 v4550; // rcx
  int v4551; // edi
  unsigned __int64 v4552; // rax
  unsigned __int128 v4553; // rax
  unsigned __int64 v4554; // r15
  __int64 v4555; // r10
  int v4556; // r8d
  _QWORD *v4557; // rbx
  unsigned __int64 v4558; // r9
  unsigned __int64 v4559; // rax
  unsigned __int128 v4560; // rax
  unsigned __int64 v4561; // rax
  unsigned __int128 v4562; // rax
  unsigned __int64 v4563; // rdx
  unsigned int v4564; // edi
  _QWORD *v4565; // rbx
  unsigned __int64 v4566; // r8
  unsigned __int64 v4567; // rax
  unsigned __int128 v4568; // rax
  unsigned __int64 v4569; // rax
  unsigned __int128 v4570; // rax
  unsigned __int64 v4571; // rdx
  unsigned __int64 v4572; // rdi
  int v4573; // ebx
  char *v4574; // rcx
  _QWORD *v4575; // rdx
  __int64 v4576; // r8
  char v4577; // al
  int v4578; // eax
  unsigned __int64 v4579; // rax
  unsigned __int128 v4580; // rax
  signed __int64 v4581; // r11
  char *v4582; // rcx
  _BYTE *v4583; // r13
  _BYTE *v4584; // rbx
  int v4585; // edx
  __int64 v4586; // r8
  char v4587; // al
  int v4588; // ecx
  __int64 v4589; // rdx
  _QWORD *v4590; // rax
  __int64 v4591; // r10
  _QWORD *v4592; // r9
  const char *v4593; // rax
  int v4594; // r8d
  __int64 v4595; // r12
  __int64 v4596; // rbx
  unsigned int v4597; // r15d
  __int64 v4598; // rax
  __int64 v4599; // rbx
  unsigned __int128 v4600; // rax
  unsigned int v4601; // r10d
  unsigned __int64 v4602; // rax
  __int64 v4603; // rax
  int v4604; // ecx
  _QWORD *v4605; // rdx
  int v4606; // r8d
  char *v4607; // rcx
  __int64 v4608; // r9
  char v4609; // al
  unsigned int v4610; // r9d
  _QWORD *v4611; // rax
  unsigned int i117; // ecx
  struct _KTIMER *v4613; // rdx
  _QWORD *v4614; // rax
  int v4615; // ecx
  struct _KTIMER *v4616; // rbx
  unsigned __int64 v4617; // rax
  unsigned __int128 v4618; // rax
  __int64 v4619; // r11
  unsigned __int64 v4620; // r14
  unsigned __int64 v4621; // r10
  unsigned __int64 v4622; // rsi
  unsigned __int64 v4623; // r15
  __int64 v4624; // r8
  __int64 v4625; // rcx
  unsigned __int64 v4626; // rax
  __int64 v4627; // r8
  _QWORD *v4628; // r11
  __int64 v4629; // r9
  _QWORD *v4630; // r8
  const char *v4631; // rax
  int v4632; // edi
  __int64 v4633; // r15
  unsigned __int64 v4634; // rbx
  unsigned int v4635; // r10d
  __int64 v4636; // rax
  __int64 v4637; // rbx
  unsigned __int128 v4638; // rax
  unsigned int v4639; // r9d
  unsigned __int64 v4640; // rax
  __int64 v4641; // rax
  unsigned __int64 i118; // rax
  int v4643; // r10d
  _QWORD *v4644; // rdi
  const char *v4645; // rax
  int v4646; // r8d
  __int64 v4647; // r9
  __int64 v4648; // rbx
  int v4649; // esi
  __int64 v4650; // rax
  __int64 v4651; // rbx
  unsigned __int128 v4652; // rax
  int v4653; // edx
  __int64 v4654; // rax
  __int64 v4655; // rax
  int v4656; // ecx
  __int64 v4657; // rcx
  __int64 v4658; // r9
  _QWORD *v4659; // rdi
  unsigned __int64 v4660; // r8
  unsigned __int64 v4661; // rax
  unsigned __int128 v4662; // rax
  __int64 v4663; // rdx
  __int64 v4664; // rbx
  unsigned int v4665; // r12d
  unsigned int v4666; // r12d
  unsigned __int64 v4667; // rax
  unsigned __int128 v4668; // rax
  signed __int64 v4669; // r9
  char *v4670; // rcx
  __int64 v4671; // r13
  _BYTE *v4672; // rdx
  int v4673; // ebx
  __int64 v4674; // rdi
  char v4675; // al
  _QWORD *v4676; // rax
  int v4677; // ecx
  __int64 v4678; // rdx
  __int64 v4679; // r8
  _QWORD *v4680; // rdi
  const char *v4681; // rax
  int v4682; // r10d
  __int64 v4683; // r15
  __int64 v4684; // rbx
  unsigned int i119; // r11d
  __int64 v4686; // rax
  __int64 v4687; // rbx
  unsigned __int64 v4688; // rcx
  unsigned int v4689; // r8d
  unsigned __int64 v4690; // rax
  __int64 v4691; // rax
  int v4692; // ecx
  _QWORD *v4693; // rdx
  int v4694; // edi
  char *v4695; // rcx
  __int64 v4696; // r8
  char v4697; // al
  _QWORD *v4698; // rcx
  unsigned int v4699; // eax
  unsigned int v4700; // r10d
  unsigned int v4701; // ebx
  _QWORD *v4702; // rdx
  int v4703; // r15d
  unsigned __int64 v4704; // rax
  unsigned __int128 v4705; // rax
  unsigned __int64 v4706; // r13
  unsigned __int64 v4707; // rsi
  unsigned int v4708; // r9d
  unsigned __int64 v4709; // rdi
  __int64 *v4710; // r8
  __int64 v4711; // rax
  unsigned __int64 v4712; // rax
  __int64 v4713; // rdi
  unsigned int v4714; // eax
  unsigned int v4715; // edi
  void *v4716; // rbx
  SIZE_T PoolBlockSize; // rax
  unsigned int i120; // r8d
  unsigned __int64 v4719; // rax
  unsigned __int128 v4720; // rax
  unsigned __int64 v4721; // rcx
  int v4722; // ecx
  int v4723; // ecx
  unsigned int v4724; // edi
  int v4725; // ecx
  int v4726; // ecx
  int v4727; // ecx
  unsigned __int64 v4728; // rax
  __int64 v4729; // rcx
  __int64 v4730; // rax
  _QWORD *v4731; // rdi
  const char *v4732; // rax
  __int64 v4733; // r8
  __int64 v4734; // r9
  __int64 v4735; // r11
  unsigned int v4736; // r10d
  __int64 i121; // rbx
  __int64 v4738; // rax
  __int64 v4739; // rbx
  ULONG_PTR v4740; // rcx
  unsigned int v4741; // r8d
  unsigned __int64 v4742; // rax
  __int64 v4743; // rax
  unsigned int v4744; // r12d
  _BYTE *v4745; // rax
  int v4746; // ecx
  unsigned int v4747; // edi
  unsigned int v4748; // r11d
  int v4749; // r15d
  unsigned __int64 v4750; // r8
  unsigned int v4751; // r10d
  int *v4752; // rbx
  __int64 v4753; // r9
  __int64 v4754; // rax
  int v4755; // eax
  unsigned __int64 v4756; // rcx
  __int64 v4757; // rdx
  int *v4758; // rdx
  unsigned __int64 v4759; // rbx
  unsigned int v4760; // ecx
  unsigned __int64 v4761; // rax
  unsigned __int128 v4762; // rax
  unsigned __int64 v4763; // rbx
  char v4764; // cl
  int v4765; // r8d
  char v4766; // cl
  int v4767; // r8d
  int v4768; // r8d
  __int64 v4769; // r8
  unsigned __int64 v4770; // rax
  __int64 v4771; // rcx
  char *v4772; // r15
  unsigned __int64 v4773; // rax
  unsigned __int128 v4774; // rax
  unsigned __int64 v4775; // rax
  unsigned __int128 v4776; // rax
  int v4777; // eax
  __int64 v4778; // rdx
  __int64 v4779; // rcx
  __int64 v4780; // r8
  unsigned int v4781; // r9d
  int v4782; // eax
  unsigned int v4783; // edi
  _BYTE *v4784; // rax
  int v4785; // ecx
  unsigned int v4786; // ecx
  unsigned __int64 v4787; // r13
  PVOID v4788; // r11
  unsigned __int64 v4789; // r8
  int *v4790; // rbx
  __int64 v4791; // r10
  __int64 v4792; // rax
  int v4793; // eax
  int v4794; // eax
  __int64 v4795; // rdx
  unsigned __int64 v4796; // r8
  unsigned __int64 v4797; // rax
  unsigned int v4798; // edi
  unsigned __int64 v4799; // r8
  __int64 v4800; // rdx
  unsigned __int64 v4801; // rax
  char *v4802; // r9
  __int64 v4803; // r10
  const char *v4804; // rdi
  __int64 v4805; // r8
  const char *v4806; // rax
  unsigned __int64 v4807; // rcx
  __int64 v4808; // rbx
  unsigned int v4809; // edx
  unsigned __int64 v4810; // rax
  __int64 v4811; // rax
  unsigned __int64 v4812; // rax
  _DWORD *v4813; // r15
  unsigned __int128 v4814; // rax
  __int64 v4815; // r12
  unsigned __int64 v4816; // rax
  unsigned __int128 v4817; // rax
  int v4818; // ebx
  int *v4819; // rcx
  int *v4820; // rdx
  __int64 v4821; // rdi
  char v4822; // al
  unsigned __int64 v4823; // r8
  int v4824; // r9d
  unsigned __int64 v4825; // rax
  unsigned __int128 v4826; // rax
  int v4827; // edi
  unsigned __int64 v4828; // rax
  unsigned __int64 v4829; // rbx
  int v4830; // edx
  __int64 v4831; // r14
  char v4832; // al
  _BYTE *i122; // rdi
  __int64 v4834; // r8
  unsigned __int64 v4835; // r13
  __int64 v4836; // rax
  __int64 v4837; // r8
  unsigned __int128 v4838; // rax
  int v4839; // ecx
  __int64 v4840; // rdx
  _QWORD *v4841; // rax
  __int64 v4842; // rbx
  unsigned __int64 v4843; // rcx
  int v4844; // r9d
  __int64 v4845; // rbx
  _QWORD *v4846; // rax
  __int64 v4847; // rdx
  unsigned __int64 v4848; // rdx
  _QWORD *v4849; // r9
  __int64 v4850; // r9
  unsigned __int64 v4851; // rcx
  char *v4852; // r8
  char *v4853; // rdx
  __int64 v4854; // rcx
  char v4855; // al
  unsigned __int64 v4856; // rcx
  __int64 v4857; // r12
  __int64 v4858; // rax
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  void *v4860; // rax
  __int64 v4861; // r8
  __int64 v4862; // rax
  ULONG_PTR v4863; // r9
  ULONG_PTR v4864; // rax
  PHYSICAL_ADDRESS v4865; // rax
  _QWORD *v4866; // rdx
  unsigned int v4867; // r8d
  unsigned __int64 v4868; // rcx
  __int64 v4869; // rax
  __int64 v4870; // r12
  __int64 v4871; // rcx
  __int64 v4872; // rdx
  unsigned __int64 v4873; // rdx
  PVOID *v4874; // rcx
  __int64 v4875; // r9
  char *v4876; // r8
  unsigned __int64 v4877; // rax
  _BYTE *v4878; // rax
  int v4879; // ecx
  __int64 v4880; // r10
  unsigned int v4881; // r9d
  __int64 v4882; // rdx
  __int64 v4883; // rcx
  int *v4884; // rbx
  ULONG_PTR v4885; // r10
  __int64 v4886; // r14
  unsigned __int64 v4887; // rsi
  int v4888; // r9d
  unsigned __int64 v4889; // rcx
  char *v4890; // rdx
  char *v4891; // r8
  __int64 v4892; // rcx
  char v4893; // al
  int *v4894; // rcx
  int v4895; // edx
  __int64 v4896; // r8
  __int64 v4897; // rax
  int v4898; // eax
  unsigned __int64 v4899; // rdx
  char v4900; // cl
  __int16 v4901; // ax
  unsigned __int64 v4902; // rcx
  unsigned __int64 v4903; // rdx
  unsigned __int64 v4904; // rcx
  int v4905; // ebx
  unsigned __int64 v4906; // r8
  unsigned __int64 v4907; // rax
  __int64 v4908; // rcx
  unsigned __int128 v4909; // rax
  __int64 v4910; // rdx
  _QWORD *v4911; // rax
  __int64 v4912; // rdx
  unsigned __int64 v4913; // rcx
  unsigned __int64 v4914; // r10
  char v4915; // r9
  unsigned __int64 *v4916; // rbx
  _DWORD *v4917; // rbx
  unsigned __int64 v4918; // rax
  unsigned __int128 v4919; // rax
  __int64 v4920; // rcx
  __int64 v4921; // rax
  _BYTE *v4922; // rbx
  __int64 v4923; // rsi
  unsigned int v4924; // ebx
  int v4925; // edi
  __int64 *v4926; // rdx
  __int64 v4927; // r10
  __int64 v4928; // r8
  __int64 *v4929; // r9
  __int64 v4930; // rax
  unsigned __int64 v4931; // rax
  int *v4932; // rcx
  int v4933; // ebx
  int *v4934; // rdx
  char v4935; // al
  __int64 v4936; // rsi
  __int64 v4937; // rcx
  unsigned int v4938; // ebx
  int v4939; // r9d
  __int64 *v4940; // rdx
  __int64 v4941; // r11
  __int64 v4942; // r8
  __int64 *v4943; // r10
  __int64 v4944; // rax
  unsigned __int64 v4945; // rax
  int v4946; // ebx
  int *v4947; // rcx
  int *v4948; // rdx
  __int64 v4949; // rdi
  char v4950; // al
  unsigned __int64 v4951; // rax
  unsigned __int128 v4952; // rax
  unsigned __int64 v4953; // rsi
  unsigned __int128 v4954; // rax
  __int64 v4955; // rsi
  int v4956; // r14d
  int v4957; // r15d
  int v4958; // r12d
  struct _KPRCB *CurrentPrcb; // rbx
  char *v4960; // r13
  unsigned __int64 v4961; // rdx
  char *v4962; // rdi
  unsigned __int64 v4963; // rcx
  _OWORD *v4964; // r9
  _OWORD *v4965; // r10
  _QWORD *v4966; // rdi
  unsigned __int64 v4967; // rcx
  unsigned __int64 v4968; // rax
  __int64 v4969; // rsi
  unsigned __int64 v4970; // rbx
  _QWORD *v4971; // rcx
  unsigned __int64 v4972; // r8
  signed __int64 v4973; // rbx
  unsigned int v4974; // r12d
  unsigned __int64 v4975; // r10
  unsigned __int64 *v4976; // rcx
  __int64 v4977; // rdx
  unsigned __int64 v4978; // rax
  __int64 v4979; // r8
  _QWORD *v4980; // r15
  __int64 v4981; // rax
  unsigned __int64 v4982; // rdx
  unsigned __int64 v4983; // rcx
  unsigned int v4984; // r8d
  _QWORD *v4985; // r11
  unsigned int v4986; // r14d
  unsigned __int64 v4987; // r15
  char *v4988; // r11
  unsigned __int64 v4989; // rcx
  unsigned __int64 v4990; // rax
  unsigned __int64 v4991; // rdi
  char *v4992; // rbx
  unsigned __int64 *v4993; // rcx
  __int64 v4994; // rdx
  __int64 v4995; // r8
  unsigned __int64 v4996; // rax
  __int64 *v4997; // r9
  __int64 v4998; // rax
  unsigned __int64 v4999; // rdx
  unsigned __int64 v5000; // rcx
  unsigned __int64 v5001; // rdi
  struct _KEVENT *v5002; // rax
  _BYTE *v5003; // rax
  __int64 v5004; // rcx
  int v5005; // edx
  ULONG_PTR v5006; // r9
  ULONG_PTR v5007; // r9
  unsigned __int64 v5008; // rcx
  unsigned __int64 v5009; // rax
  int v5010; // ecx
  int v5011; // ecx
  int v5012; // ecx
  int v5013; // ecx
  int v5014; // ecx
  volatile signed __int32 *v5015; // rax
  signed __int32 v5016[8]; // [rsp+0h] [rbp-2568h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-2548h]
  PVOID HalExtensionList; // [rsp+50h] [rbp-2518h]
  __int64 sub_140B9FDF0_Offset; // [rsp+58h] [rbp-2510h]
  __int64 v5020; // [rsp+60h] [rbp-2508h]
  __int64 sub_140B9EDF0_Offset; // [rsp+68h] [rbp-2500h]
  _DWORD *v5022; // [rsp+70h] [rbp-24F8h]
  ULONG_PTR i21; // [rsp+78h] [rbp-24F0h]
  ULONG_PTR v5024; // [rsp+80h] [rbp-24E8h]
  ULONG_PTR v5025; // [rsp+88h] [rbp-24E0h]
  PVOID v5026; // [rsp+90h] [rbp-24D8h]
  size_t v5027; // [rsp+98h] [rbp-24D0h]
  __int64 v5028; // [rsp+A0h] [rbp-24C8h]
  struct _KEVENT *v5029; // [rsp+A8h] [rbp-24C0h]
  ULONG_PTR v5030; // [rsp+B0h] [rbp-24B8h]
  ULONG_PTR v5031; // [rsp+B8h] [rbp-24B0h]
  ULONG_PTR v5032; // [rsp+C0h] [rbp-24A8h]
  unsigned int *PgC_0_1; // [rsp+C8h] [rbp-24A0h]
  ULONG_PTR v5034; // [rsp+D0h] [rbp-2498h]
  ULONG_PTR v5035; // [rsp+D8h] [rbp-2490h]
  ULONG_PTR v5036; // [rsp+E0h] [rbp-2488h]
  _QWORD *v5037; // [rsp+E8h] [rbp-2480h]
  ULONG_PTR v5038; // [rsp+F0h] [rbp-2478h]
  ULONG_PTR v5039; // [rsp+F8h] [rbp-2470h]
  ULONG_PTR v5040; // [rsp+100h] [rbp-2468h]
  _DWORD *v5041; // [rsp+108h] [rbp-2460h]
  __int64 v5042; // [rsp+110h] [rbp-2458h]
  ULONG_PTR v5043; // [rsp+118h] [rbp-2450h]
  ULONG_PTR v5044; // [rsp+120h] [rbp-2448h]
  ULONG_PTR v5045; // [rsp+128h] [rbp-2440h]
  ULONG_PTR v5046; // [rsp+130h] [rbp-2438h]
  ULONG_PTR v5047; // [rsp+138h] [rbp-2430h]
  ULONG_PTR v5048; // [rsp+140h] [rbp-2428h]
  ULONG_PTR v5049; // [rsp+148h] [rbp-2420h]
  struct _KTIMER *v5050; // [rsp+150h] [rbp-2418h]
  PKTIMER Timer; // [rsp+158h] [rbp-2410h]
  size_t Size; // [rsp+160h] [rbp-2408h]
  ULONG_PTR v5053; // [rsp+168h] [rbp-2400h]
  _BYTE *v5054; // [rsp+170h] [rbp-23F8h]
  char v5055; // [rsp+178h] [rbp-23F0h] BYREF
  ULONG_PTR PgContextSize; // [rsp+180h] [rbp-23E8h]
  void *v5057; // [rsp+188h] [rbp-23E0h]
  BOOLEAN QuotaCharged[8]; // [rsp+190h] [rbp-23D8h] BYREF
  unsigned __int64 v5059; // [rsp+198h] [rbp-23D0h]
  PKTIMER v5060; // [rsp+1A0h] [rbp-23C8h]
  int v5061; // [rsp+1A8h] [rbp-23C0h]
  int v5062; // [rsp+1ACh] [rbp-23BCh]
  int v5063; // [rsp+1B0h] [rbp-23B8h]
  int v5064; // [rsp+1B4h] [rbp-23B4h]
  int v5065; // [rsp+1B8h] [rbp-23B0h]
  int v5066; // [rsp+1BCh] [rbp-23ACh]
  int v5067; // [rsp+1C0h] [rbp-23A8h]
  int v5068; // [rsp+1C4h] [rbp-23A4h]
  _DWORD TableSize[34]; // [rsp+1C8h] [rbp-23A0h] BYREF
  _DWORD v5070[22]; // [rsp+250h] [rbp-2318h] BYREF
  _DWORD v5071[2]; // [rsp+2A8h] [rbp-22C0h] BYREF
  int v5072; // [rsp+2B0h] [rbp-22B8h]
  int v5073; // [rsp+2B4h] [rbp-22B4h]
  int v5074; // [rsp+2B8h] [rbp-22B0h]
  int v5075; // [rsp+2BCh] [rbp-22ACh]
  int v5076; // [rsp+2C0h] [rbp-22A8h]
  int v5077; // [rsp+2C4h] [rbp-22A4h]
  int v5078; // [rsp+2C8h] [rbp-22A0h]
  int v5079; // [rsp+2CCh] [rbp-229Ch]
  int v5080; // [rsp+2D0h] [rbp-2298h]
  int v5081; // [rsp+2D4h] [rbp-2294h]
  int v5082; // [rsp+2D8h] [rbp-2290h]
  int v5083; // [rsp+2DCh] [rbp-228Ch]
  int v5084; // [rsp+2E0h] [rbp-2288h]
  int v5085; // [rsp+2E4h] [rbp-2284h]
  int v5086; // [rsp+2E8h] [rbp-2280h]
  int v5087; // [rsp+2ECh] [rbp-227Ch]
  int v5088; // [rsp+2F0h] [rbp-2278h]
  int v5089; // [rsp+2F4h] [rbp-2274h]
  int v5090; // [rsp+2F8h] [rbp-2270h]
  int v5091; // [rsp+2FCh] [rbp-226Ch]
  int v5092; // [rsp+300h] [rbp-2268h]
  int v5093; // [rsp+304h] [rbp-2264h]
  int v5094; // [rsp+308h] [rbp-2260h]
  int v5095; // [rsp+30Ch] [rbp-225Ch]
  int v5096; // [rsp+310h] [rbp-2258h]
  int v5097; // [rsp+314h] [rbp-2254h]
  int v5098; // [rsp+318h] [rbp-2250h]
  int v5099; // [rsp+31Ch] [rbp-224Ch]
  int v5100; // [rsp+320h] [rbp-2248h]
  int v5101; // [rsp+324h] [rbp-2244h]
  int v5102; // [rsp+328h] [rbp-2240h]
  _DWORD v5103[26]; // [rsp+32Ch] [rbp-223Ch] BYREF
  _DWORD v5104[3]; // [rsp+394h] [rbp-21D4h] BYREF
  ULONG_PTR v5105; // [rsp+3A0h] [rbp-21C8h]
  _DWORD v5106[3]; // [rsp+3A8h] [rbp-21C0h] BYREF
  unsigned int FinalUncSize; // [rsp+3B4h] [rbp-21B4h] BYREF
  int v5108; // [rsp+3B8h] [rbp-21B0h] BYREF
  unsigned int v5109; // [rsp+3BCh] [rbp-21ACh] BYREF
  unsigned int v5110; // [rsp+3C0h] [rbp-21A8h] BYREF
  ULONG CompressFragmentWorkSpaceSize[2]; // [rsp+3C4h] [rbp-21A4h] BYREF
  int v5112; // [rsp+3CCh] [rbp-219Ch] BYREF
  int v5113; // [rsp+3D0h] [rbp-2198h] BYREF
  _DWORD v5114[22]; // [rsp+3D4h] [rbp-2194h] BYREF
  int v5115; // [rsp+42Ch] [rbp-213Ch] BYREF
  int v5116; // [rsp+430h] [rbp-2138h] BYREF
  _DWORD v5117[10]; // [rsp+434h] [rbp-2134h] BYREF
  char v5118[4]; // [rsp+45Ch] [rbp-210Ch] BYREF
  int v5119; // [rsp+460h] [rbp-2108h]
  int v5120; // [rsp+464h] [rbp-2104h]
  int v5121; // [rsp+468h] [rbp-2100h]
  int v5122; // [rsp+46Ch] [rbp-20FCh]
  int v5123; // [rsp+470h] [rbp-20F8h]
  int v5124; // [rsp+474h] [rbp-20F4h]
  int v5125; // [rsp+478h] [rbp-20F0h]
  int v5126; // [rsp+47Ch] [rbp-20ECh]
  int v5127; // [rsp+480h] [rbp-20E8h]
  int v5128; // [rsp+484h] [rbp-20E4h]
  int v5129; // [rsp+488h] [rbp-20E0h]
  int v5130; // [rsp+48Ch] [rbp-20DCh]
  int v5131; // [rsp+490h] [rbp-20D8h]
  int v5132; // [rsp+494h] [rbp-20D4h]
  int v5133; // [rsp+498h] [rbp-20D0h]
  int v5134; // [rsp+49Ch] [rbp-20CCh]
  int v5135; // [rsp+4A0h] [rbp-20C8h]
  int v5136; // [rsp+4A4h] [rbp-20C4h]
  int v5137; // [rsp+4A8h] [rbp-20C0h]
  int v5138; // [rsp+4ACh] [rbp-20BCh]
  int v5139; // [rsp+4B0h] [rbp-20B8h]
  int v5140; // [rsp+4B4h] [rbp-20B4h]
  int v5141; // [rsp+4B8h] [rbp-20B0h]
  int v5142; // [rsp+4BCh] [rbp-20ACh]
  int v5143; // [rsp+4C0h] [rbp-20A8h]
  int v5144; // [rsp+4C4h] [rbp-20A4h]
  int v5145; // [rsp+4C8h] [rbp-20A0h]
  int v5146; // [rsp+4CCh] [rbp-209Ch]
  int v5147; // [rsp+4D0h] [rbp-2098h]
  int v5148; // [rsp+4D4h] [rbp-2094h]
  int v5149; // [rsp+4D8h] [rbp-2090h]
  int v5150; // [rsp+4DCh] [rbp-208Ch]
  int v5151; // [rsp+4E0h] [rbp-2088h]
  int v5152; // [rsp+4E4h] [rbp-2084h]
  int v5153; // [rsp+4E8h] [rbp-2080h]
  int v5154; // [rsp+4ECh] [rbp-207Ch]
  int v5155; // [rsp+4F0h] [rbp-2078h]
  int v5156; // [rsp+4F4h] [rbp-2074h]
  int v5157; // [rsp+4F8h] [rbp-2070h]
  int v5158; // [rsp+4FCh] [rbp-206Ch]
  int v5159; // [rsp+500h] [rbp-2068h]
  _DWORD v5160[2]; // [rsp+504h] [rbp-2064h] BYREF
  _DWORD v5161[2]; // [rsp+50Ch] [rbp-205Ch] BYREF
  int v5162; // [rsp+514h] [rbp-2054h] BYREF
  _DWORD v5163[8]; // [rsp+518h] [rbp-2050h] BYREF
  _DWORD v5164[13]; // [rsp+538h] [rbp-2030h] BYREF
  int v5165; // [rsp+56Ch] [rbp-1FFCh]
  int v5166; // [rsp+570h] [rbp-1FF8h]
  int v5167; // [rsp+574h] [rbp-1FF4h]
  int v5168; // [rsp+578h] [rbp-1FF0h]
  int v5169; // [rsp+57Ch] [rbp-1FECh]
  int v5170; // [rsp+580h] [rbp-1FE8h]
  int v5171; // [rsp+584h] [rbp-1FE4h]
  int v5172; // [rsp+588h] [rbp-1FE0h]
  int v5173; // [rsp+58Ch] [rbp-1FDCh]
  int v5174; // [rsp+590h] [rbp-1FD8h]
  int v5175; // [rsp+594h] [rbp-1FD4h] BYREF
  int v5176; // [rsp+598h] [rbp-1FD0h] BYREF
  _BYTE v5177[4]; // [rsp+59Ch] [rbp-1FCCh] BYREF
  int v5178; // [rsp+5A0h] [rbp-1FC8h]
  int v5179; // [rsp+5A4h] [rbp-1FC4h]
  int v5180; // [rsp+5A8h] [rbp-1FC0h]
  ULONG CompressBufferWorkSpaceSize[3]; // [rsp+5ACh] [rbp-1FBCh] BYREF
  __int64 v5182; // [rsp+5B8h] [rbp-1FB0h]
  unsigned int *v5183; // [rsp+5C0h] [rbp-1FA8h] BYREF
  int v5184; // [rsp+5C8h] [rbp-1FA0h]
  int v5185; // [rsp+5CCh] [rbp-1F9Ch]
  int v5186; // [rsp+5D0h] [rbp-1F98h]
  int v5187; // [rsp+5D4h] [rbp-1F94h]
  int v5188; // [rsp+5D8h] [rbp-1F90h]
  int v5189; // [rsp+5DCh] [rbp-1F8Ch]
  int v5190; // [rsp+5E0h] [rbp-1F88h]
  int v5191; // [rsp+5E4h] [rbp-1F84h]
  int v5192; // [rsp+5E8h] [rbp-1F80h]
  int v5193; // [rsp+5ECh] [rbp-1F7Ch]
  int v5194; // [rsp+5F0h] [rbp-1F78h]
  int v5195; // [rsp+5F4h] [rbp-1F74h]
  int v5196; // [rsp+5F8h] [rbp-1F70h]
  int v5197; // [rsp+5FCh] [rbp-1F6Ch]
  int v5198; // [rsp+600h] [rbp-1F68h]
  int v5199; // [rsp+604h] [rbp-1F64h]
  int v5200; // [rsp+608h] [rbp-1F60h]
  int v5201; // [rsp+60Ch] [rbp-1F5Ch]
  int v5202; // [rsp+610h] [rbp-1F58h]
  int v5203; // [rsp+614h] [rbp-1F54h]
  _BYTE *v5204; // [rsp+618h] [rbp-1F50h] BYREF
  _BYTE *v5205; // [rsp+620h] [rbp-1F48h] BYREF
  int v5206; // [rsp+628h] [rbp-1F40h]
  int v5207; // [rsp+62Ch] [rbp-1F3Ch]
  int v5208; // [rsp+630h] [rbp-1F38h]
  int v5209; // [rsp+634h] [rbp-1F34h]
  _BYTE *v5210; // [rsp+638h] [rbp-1F30h] BYREF
  _QWORD v5211[9]; // [rsp+640h] [rbp-1F28h] BYREF
  __int64 v5212; // [rsp+688h] [rbp-1EE0h]
  __int64 v5213; // [rsp+690h] [rbp-1ED8h]
  __int64 v5214; // [rsp+698h] [rbp-1ED0h]
  __int64 v5215; // [rsp+6A0h] [rbp-1EC8h]
  __int64 v5216; // [rsp+6A8h] [rbp-1EC0h]
  __int64 v5217; // [rsp+6B0h] [rbp-1EB8h]
  __int64 v5218; // [rsp+6B8h] [rbp-1EB0h]
  __int64 v5219; // [rsp+6C0h] [rbp-1EA8h]
  __int64 v5220; // [rsp+6C8h] [rbp-1EA0h]
  __int64 v5221; // [rsp+6D0h] [rbp-1E98h]
  __int64 v5222; // [rsp+6D8h] [rbp-1E90h]
  __int64 v5223; // [rsp+6E0h] [rbp-1E88h]
  __int64 v5224; // [rsp+6E8h] [rbp-1E80h]
  __int64 v5225; // [rsp+6F0h] [rbp-1E78h]
  __int64 v5226; // [rsp+6F8h] [rbp-1E70h]
  __int64 v5227; // [rsp+700h] [rbp-1E68h]
  __int64 v5228; // [rsp+708h] [rbp-1E60h]
  __int64 v5229; // [rsp+710h] [rbp-1E58h]
  _QWORD v5230[3]; // [rsp+718h] [rbp-1E50h] BYREF
  __int64 v5231; // [rsp+730h] [rbp-1E38h]
  __int64 v5232; // [rsp+738h] [rbp-1E30h]
  __int64 v5233; // [rsp+740h] [rbp-1E28h]
  __int64 v5234; // [rsp+748h] [rbp-1E20h]
  __int64 v5235; // [rsp+750h] [rbp-1E18h]
  __int64 v5236; // [rsp+758h] [rbp-1E10h]
  __int64 v5237; // [rsp+760h] [rbp-1E08h]
  __int64 v5238; // [rsp+768h] [rbp-1E00h]
  __int64 v5239; // [rsp+770h] [rbp-1DF8h]
  __int64 v5240; // [rsp+778h] [rbp-1DF0h]
  __int64 v5241; // [rsp+780h] [rbp-1DE8h]
  __int64 v5242; // [rsp+788h] [rbp-1DE0h]
  __int64 v5243; // [rsp+790h] [rbp-1DD8h]
  __int64 v5244; // [rsp+798h] [rbp-1DD0h]
  _QWORD v5245[6]; // [rsp+7A0h] [rbp-1DC8h]
  __int64 v5246; // [rsp+7D0h] [rbp-1D98h]
  __int64 v5247; // [rsp+7D8h] [rbp-1D90h]
  __int64 v5248; // [rsp+7E0h] [rbp-1D88h]
  __int64 v5249; // [rsp+7E8h] [rbp-1D80h]
  __int64 v5250; // [rsp+7F0h] [rbp-1D78h]
  __int64 v5251; // [rsp+7F8h] [rbp-1D70h]
  __int64 v5252; // [rsp+800h] [rbp-1D68h]
  __int64 v5253; // [rsp+808h] [rbp-1D60h]
  __int64 v5254; // [rsp+810h] [rbp-1D58h]
  __int64 v5255; // [rsp+818h] [rbp-1D50h]
  __int64 v5256; // [rsp+820h] [rbp-1D48h]
  __int64 v5257; // [rsp+828h] [rbp-1D40h]
  __int64 v5258; // [rsp+830h] [rbp-1D38h]
  __int64 v5259; // [rsp+838h] [rbp-1D30h]
  __int64 v5260; // [rsp+840h] [rbp-1D28h]
  __int64 v5261; // [rsp+848h] [rbp-1D20h]
  __int64 v5262; // [rsp+850h] [rbp-1D18h]
  __int64 v5263; // [rsp+858h] [rbp-1D10h]
  __int64 v5264; // [rsp+860h] [rbp-1D08h]
  __int64 v5265; // [rsp+868h] [rbp-1D00h]
  __int64 v5266; // [rsp+870h] [rbp-1CF8h]
  __int64 v5267; // [rsp+878h] [rbp-1CF0h]
  __int64 v5268; // [rsp+880h] [rbp-1CE8h]
  __int64 v5269; // [rsp+888h] [rbp-1CE0h]
  __int64 v5270; // [rsp+890h] [rbp-1CD8h]
  __int64 v5271; // [rsp+898h] [rbp-1CD0h]
  __int64 v5272; // [rsp+8A0h] [rbp-1CC8h]
  __int64 v5273; // [rsp+8A8h] [rbp-1CC0h]
  __int64 v5274; // [rsp+8B0h] [rbp-1CB8h]
  __int64 v5275; // [rsp+8B8h] [rbp-1CB0h]
  __int64 v5276; // [rsp+8C0h] [rbp-1CA8h]
  __int64 v5277; // [rsp+8C8h] [rbp-1CA0h]
  __int64 v5278; // [rsp+8D0h] [rbp-1C98h]
  __int64 v5279; // [rsp+8D8h] [rbp-1C90h]
  __int64 v5280; // [rsp+8E0h] [rbp-1C88h]
  __int64 v5281; // [rsp+8E8h] [rbp-1C80h]
  __int64 v5282; // [rsp+8F0h] [rbp-1C78h]
  __int64 v5283; // [rsp+8F8h] [rbp-1C70h]
  __int64 v5284; // [rsp+900h] [rbp-1C68h]
  __int64 v5285; // [rsp+908h] [rbp-1C60h]
  __int64 v5286; // [rsp+910h] [rbp-1C58h]
  __int64 v5287; // [rsp+918h] [rbp-1C50h]
  __int64 v5288; // [rsp+920h] [rbp-1C48h]
  __int64 v5289; // [rsp+928h] [rbp-1C40h]
  ULONG_PTR v5290; // [rsp+930h] [rbp-1C38h] BYREF
  _QWORD v5291[12]; // [rsp+938h] [rbp-1C30h] BYREF
  _QWORD v5292[2]; // [rsp+998h] [rbp-1BD0h] BYREF
  ULONG_PTR vFunctionExtentListPtr[11]; // [rsp+9A8h] [rbp-1BC0h] BYREF
  ULONG_PTR v5294; // [rsp+A00h] [rbp-1B68h] BYREF
  _QWORD v5295[2]; // [rsp+A08h] [rbp-1B60h] BYREF
  _BYTE *v5296; // [rsp+A18h] [rbp-1B50h] BYREF
  _QWORD NtOsKrnlBase[2]; // [rsp+A20h] [rbp-1B48h] BYREF
  int v5298; // [rsp+A30h] [rbp-1B38h] BYREF
  __int64 v5299; // [rsp+A38h] [rbp-1B30h]
  __int64 v5300; // [rsp+A40h] [rbp-1B28h]
  __int64 v5301; // [rsp+A48h] [rbp-1B20h]
  __int64 v5302; // [rsp+A50h] [rbp-1B18h]
  __int64 v5303; // [rsp+A60h] [rbp-1B08h]
  _QWORD FunctionEntryAddr[5]; // [rsp+A68h] [rbp-1B00h] BYREF
  __int64 v5305; // [rsp+A90h] [rbp-1AD8h]
  __int64 v5306; // [rsp+A98h] [rbp-1AD0h]
  __int64 v5307; // [rsp+AA0h] [rbp-1AC8h]
  __int64 v5308; // [rsp+AA8h] [rbp-1AC0h]
  __int64 v5309; // [rsp+AB0h] [rbp-1AB8h]
  __int64 v5310; // [rsp+AB8h] [rbp-1AB0h]
  __int64 v5311; // [rsp+AC0h] [rbp-1AA8h]
  int v5312; // [rsp+AC8h] [rbp-1AA0h] BYREF
  __int64 v5313; // [rsp+AD0h] [rbp-1A98h]
  __int64 v5314; // [rsp+AD8h] [rbp-1A90h]
  __int64 v5315; // [rsp+AE0h] [rbp-1A88h]
  __int64 v5316; // [rsp+AF0h] [rbp-1A78h]
  __int64 v5317; // [rsp+AF8h] [rbp-1A70h]
  __int64 v5318; // [rsp+B00h] [rbp-1A68h]
  size_t v5319; // [rsp+B08h] [rbp-1A60h]
  ULONG_PTR v5320; // [rsp+B10h] [rbp-1A58h]
  __int64 v5321; // [rsp+B18h] [rbp-1A50h]
  ULONG_PTR v5322; // [rsp+B20h] [rbp-1A48h]
  __int64 v5323; // [rsp+B28h] [rbp-1A40h]
  int v5324; // [rsp+B30h] [rbp-1A38h] BYREF
  __int64 v5325; // [rsp+B38h] [rbp-1A30h]
  __int64 v5326; // [rsp+B40h] [rbp-1A28h]
  __int64 v5327; // [rsp+B48h] [rbp-1A20h]
  __int64 v5328; // [rsp+B58h] [rbp-1A10h]
  __int64 v5329; // [rsp+B60h] [rbp-1A08h]
  __int64 v5330; // [rsp+B68h] [rbp-1A00h]
  __int64 v5331; // [rsp+B70h] [rbp-19F8h]
  __int64 v5332; // [rsp+B78h] [rbp-19F0h]
  __int64 v5333; // [rsp+B80h] [rbp-19E8h]
  _BYTE v5334[24]; // [rsp+B88h] [rbp-19E0h] BYREF
  __int64 v5335; // [rsp+BA0h] [rbp-19C8h]
  __int64 v5336; // [rsp+BB0h] [rbp-19B8h]
  __int64 v5337; // [rsp+BC0h] [rbp-19A8h]
  __int64 v5338; // [rsp+BC8h] [rbp-19A0h]
  __int64 v5339; // [rsp+BE0h] [rbp-1988h]
  __int64 v5340; // [rsp+BF8h] [rbp-1970h]
  __int64 v5341; // [rsp+C08h] [rbp-1960h]
  __int64 v5342; // [rsp+C18h] [rbp-1950h]
  __int64 v5343; // [rsp+C20h] [rbp-1948h]
  __int64 v5344; // [rsp+C28h] [rbp-1940h]
  __int64 v5345; // [rsp+C30h] [rbp-1938h]
  __int64 v5346; // [rsp+C38h] [rbp-1930h]
  unsigned int *v5347; // [rsp+C40h] [rbp-1928h] BYREF
  _QWORD v5348[2]; // [rsp+C48h] [rbp-1920h] BYREF
  __int64 v5349; // [rsp+C58h] [rbp-1910h]
  __int64 v5350; // [rsp+C60h] [rbp-1908h]
  __int64 v5351; // [rsp+C68h] [rbp-1900h]
  __int64 v5352; // [rsp+C70h] [rbp-18F8h]
  __int64 v5353; // [rsp+C78h] [rbp-18F0h]
  __int64 v5354; // [rsp+C80h] [rbp-18E8h]
  __int64 v5355; // [rsp+C88h] [rbp-18E0h]
  __int64 v5356; // [rsp+C90h] [rbp-18D8h]
  void *v5357; // [rsp+C98h] [rbp-18D0h]
  void *v5358; // [rsp+CA0h] [rbp-18C8h]
  size_t v5359; // [rsp+CA8h] [rbp-18C0h]
  _BYTE *v5360; // [rsp+CB0h] [rbp-18B8h]
  __int64 v5361; // [rsp+CB8h] [rbp-18B0h]
  ULONG_PTR v5362; // [rsp+D00h] [rbp-1868h]
  __int64 v5363; // [rsp+D08h] [rbp-1860h]
  __int64 v5364; // [rsp+D10h] [rbp-1858h]
  _BYTE *v5365; // [rsp+D18h] [rbp-1850h]
  _BYTE *v5366; // [rsp+D20h] [rbp-1848h]
  __int64 v5367; // [rsp+D28h] [rbp-1840h]
  __int64 v5368; // [rsp+D40h] [rbp-1828h]
  __int64 v5369; // [rsp+D80h] [rbp-17E8h]
  __int64 v5370; // [rsp+D88h] [rbp-17E0h]
  __int64 v5371; // [rsp+D98h] [rbp-17D0h]
  __int64 v5372; // [rsp+DA8h] [rbp-17C0h]
  __int64 v5373; // [rsp+DB0h] [rbp-17B8h]
  _BYTE v5374[16]; // [rsp+DB8h] [rbp-17B0h] BYREF
  _BYTE v5375[16]; // [rsp+DC8h] [rbp-17A0h] BYREF
  _QWORD v5376[2]; // [rsp+DD8h] [rbp-1790h] BYREF
  int v5377; // [rsp+DE8h] [rbp-1780h] BYREF
  __int64 v5378; // [rsp+DF0h] [rbp-1778h]
  __int64 v5379; // [rsp+DF8h] [rbp-1770h]
  __int64 v5380; // [rsp+E00h] [rbp-1768h]
  __int64 v5381; // [rsp+E18h] [rbp-1750h]
  __int64 v5382; // [rsp+E20h] [rbp-1748h]
  __int64 v5383; // [rsp+E28h] [rbp-1740h]
  __int64 v5384; // [rsp+E38h] [rbp-1730h]
  __int64 v5385; // [rsp+E40h] [rbp-1728h]
  __int64 v5386; // [rsp+E48h] [rbp-1720h]
  unsigned int *v5387; // [rsp+E50h] [rbp-1718h] BYREF
  __int64 v5388; // [rsp+E58h] [rbp-1710h]
  __int64 v5389; // [rsp+E60h] [rbp-1708h]
  __int64 v5390; // [rsp+E68h] [rbp-1700h]
  __int64 v5391; // [rsp+E70h] [rbp-16F8h]
  __int64 v5392; // [rsp+E78h] [rbp-16F0h]
  __int64 v5393; // [rsp+E80h] [rbp-16E8h]
  __int64 v5394; // [rsp+E88h] [rbp-16E0h]
  __int64 v5395; // [rsp+E90h] [rbp-16D8h]
  __int64 v5396; // [rsp+E98h] [rbp-16D0h]
  __int64 v5397; // [rsp+EA0h] [rbp-16C8h]
  __int64 v5398; // [rsp+EA8h] [rbp-16C0h]
  __int64 v5399; // [rsp+EB0h] [rbp-16B8h]
  __int64 v5400; // [rsp+EB8h] [rbp-16B0h]
  __int64 v5401; // [rsp+EC0h] [rbp-16A8h]
  __int64 v5402; // [rsp+EC8h] [rbp-16A0h]
  __int64 v5403; // [rsp+ED0h] [rbp-1698h]
  __int64 v5404; // [rsp+ED8h] [rbp-1690h]
  __int64 v5405; // [rsp+EE0h] [rbp-1688h]
  __int64 v5406; // [rsp+EE8h] [rbp-1680h]
  __int64 v5407; // [rsp+EF0h] [rbp-1678h]
  __int64 v5408; // [rsp+EF8h] [rbp-1670h]
  __int64 v5409; // [rsp+F00h] [rbp-1668h]
  __int64 v5410; // [rsp+F08h] [rbp-1660h]
  __int64 v5411; // [rsp+F10h] [rbp-1658h]
  __int64 v5412; // [rsp+F18h] [rbp-1650h]
  __int64 v5413; // [rsp+F20h] [rbp-1648h]
  signed __int64 v5414[6]; // [rsp+F28h] [rbp-1640h] BYREF
  __int64 v5415; // [rsp+F58h] [rbp-1610h]
  signed __int64 v5416[3]; // [rsp+F60h] [rbp-1608h] BYREF
  __int64 v5417; // [rsp+F78h] [rbp-15F0h]
  __int64 v5418; // [rsp+F80h] [rbp-15E8h]
  __int64 v5419; // [rsp+F88h] [rbp-15E0h]
  __int64 v5420; // [rsp+F90h] [rbp-15D8h]
  __int64 v5421; // [rsp+F98h] [rbp-15D0h]
  _QWORD v5422[2]; // [rsp+FA0h] [rbp-15C8h] BYREF
  char v5423[8]; // [rsp+FB0h] [rbp-15B8h] BYREF
  __int64 v5424; // [rsp+FB8h] [rbp-15B0h]
  __int64 v5425; // [rsp+FC0h] [rbp-15A8h]
  __int64 v5426; // [rsp+FC8h] [rbp-15A0h]
  __int64 v5427; // [rsp+FD0h] [rbp-1598h]
  __int64 v5428; // [rsp+FD8h] [rbp-1590h]
  __int64 v5429; // [rsp+FE0h] [rbp-1588h]
  __int64 v5430; // [rsp+FE8h] [rbp-1580h]
  __int64 v5431; // [rsp+FF0h] [rbp-1578h]
  __int64 v5432; // [rsp+FF8h] [rbp-1570h]
  char v5433; // [rsp+1000h] [rbp-1568h] BYREF
  char v5434[16]; // [rsp+1008h] [rbp-1560h] BYREF
  __int16 v5435; // [rsp+1018h] [rbp-1550h] BYREF
  _QWORD *v5436; // [rsp+101Ah] [rbp-154Eh]
  __int16 v5437; // [rsp+1028h] [rbp-1540h] BYREF
  __int64 v5438; // [rsp+102Ah] [rbp-153Eh]
  char v5439[16]; // [rsp+1038h] [rbp-1530h] BYREF
  __int64 v5440; // [rsp+1048h] [rbp-1520h]
  unsigned int v5441; // [rsp+1050h] [rbp-1518h] BYREF
  __int64 v5442; // [rsp+1058h] [rbp-1510h]
  int v5443; // [rsp+1060h] [rbp-1508h] BYREF
  __int64 v5444; // [rsp+1068h] [rbp-1500h]
  int v5445; // [rsp+1070h] [rbp-14F8h] BYREF
  __int64 v5446; // [rsp+1078h] [rbp-14F0h]
  int v5447; // [rsp+1080h] [rbp-14E8h] BYREF
  __int64 v5448; // [rsp+1088h] [rbp-14E0h]
  int v5449; // [rsp+1090h] [rbp-14D8h] BYREF
  __int64 v5450; // [rsp+1098h] [rbp-14D0h]
  int v5451; // [rsp+10A0h] [rbp-14C8h] BYREF
  __int64 v5452; // [rsp+10A8h] [rbp-14C0h]
  _DWORD v5453[6]; // [rsp+10B0h] [rbp-14B8h] BYREF
  _DWORD v5454[4]; // [rsp+10C8h] [rbp-14A0h] BYREF
  __int64 v5455; // [rsp+10D8h] [rbp-1490h] BYREF
  unsigned __int64 v5456; // [rsp+10E0h] [rbp-1488h]
  _DWORD v5457[4]; // [rsp+10E8h] [rbp-1480h] BYREF
  int v5458; // [rsp+10F8h] [rbp-1470h]
  unsigned __int64 v5459; // [rsp+10FCh] [rbp-146Ch]
  int v5460; // [rsp+1104h] [rbp-1464h]
  int v5461; // [rsp+1108h] [rbp-1460h]
  int v5462; // [rsp+110Ch] [rbp-145Ch]
  int v5463; // [rsp+1110h] [rbp-1458h]
  int v5464; // [rsp+1114h] [rbp-1454h]
  _BYTE v5465[16]; // [rsp+1118h] [rbp-1450h] BYREF
  _BYTE v5466[16]; // [rsp+1128h] [rbp-1440h] BYREF
  _BYTE v5467[16]; // [rsp+1138h] [rbp-1430h] BYREF
  _BYTE v5468[16]; // [rsp+1148h] [rbp-1420h] BYREF
  _BYTE v5469[16]; // [rsp+1158h] [rbp-1410h] BYREF
  _BYTE v5470[16]; // [rsp+1168h] [rbp-1400h] BYREF
  _BYTE v5471[16]; // [rsp+1178h] [rbp-13F0h] BYREF
  _BYTE v5472[16]; // [rsp+1188h] [rbp-13E0h] BYREF
  _BYTE v5473[16]; // [rsp+1198h] [rbp-13D0h] BYREF
  _BYTE v5474[16]; // [rsp+11A8h] [rbp-13C0h] BYREF
  _BYTE v5475[16]; // [rsp+11B8h] [rbp-13B0h] BYREF
  _BYTE v5476[16]; // [rsp+11C8h] [rbp-13A0h] BYREF
  _BYTE v5477[16]; // [rsp+11D8h] [rbp-1390h] BYREF
  _BYTE v5478[16]; // [rsp+11E8h] [rbp-1380h] BYREF
  unsigned __int64 ntoskrnlexe_Base; // [rsp+11F8h] [rbp-1370h] BYREF
  ULONG_PTR vUncompressedBufPool2; // [rsp+1200h] [rbp-1368h]
  unsigned int v5481; // [rsp+1208h] [rbp-1360h]
  char v5482[8]; // [rsp+1210h] [rbp-1358h] BYREF
  ULONG_PTR v5483; // [rsp+1218h] [rbp-1350h]
  int v5484; // [rsp+1224h] [rbp-1344h]
  char v5485[8]; // [rsp+1228h] [rbp-1340h] BYREF
  ULONG_PTR v5486; // [rsp+1230h] [rbp-1338h]
  int v5487; // [rsp+123Ch] [rbp-132Ch]
  _DWORD v5488[6]; // [rsp+1240h] [rbp-1328h] BYREF
  char v5489[8]; // [rsp+1258h] [rbp-1310h] BYREF
  ULONG_PTR v5490; // [rsp+1260h] [rbp-1308h]
  int v5491; // [rsp+126Ch] [rbp-12FCh]
  _DWORD v5492[6]; // [rsp+1270h] [rbp-12F8h] BYREF
  char v5493[8]; // [rsp+1288h] [rbp-12E0h] BYREF
  ULONG_PTR v5494; // [rsp+1290h] [rbp-12D8h]
  int v5495; // [rsp+129Ch] [rbp-12CCh]
  _DWORD v5496[6]; // [rsp+12A0h] [rbp-12C8h] BYREF
  char v5497[8]; // [rsp+12B8h] [rbp-12B0h] BYREF
  ULONG_PTR v5498; // [rsp+12C0h] [rbp-12A8h]
  int v5499; // [rsp+12CCh] [rbp-129Ch]
  char v5500[8]; // [rsp+12D0h] [rbp-1298h] BYREF
  ULONG_PTR v5501; // [rsp+12D8h] [rbp-1290h]
  int v5502; // [rsp+12E4h] [rbp-1284h]
  _DWORD v5503[6]; // [rsp+12E8h] [rbp-1280h] BYREF
  char v5504[8]; // [rsp+1300h] [rbp-1268h] BYREF
  __int64 v5505; // [rsp+1308h] [rbp-1260h]
  __int64 v5506; // [rsp+1318h] [rbp-1250h]
  PVOID P[2]; // [rsp+1320h] [rbp-1248h]
  __int64 v5508; // [rsp+1330h] [rbp-1238h]
  _QWORD PteAddressPtr[4]; // [rsp+1338h] [rbp-1230h] BYREF
  _QWORD v5510[4]; // [rsp+1358h] [rbp-1210h] BYREF
  char *PgC_0_2; // [rsp+1378h] [rbp-11F0h]
  PVOID v5512[2]; // [rsp+1380h] [rbp-11E8h]
  __int64 v5513; // [rsp+1390h] [rbp-11D8h]
  _QWORD v5514[4]; // [rsp+1398h] [rbp-11D0h] BYREF
  _QWORD v5515[4]; // [rsp+13B8h] [rbp-11B0h] BYREF
  _QWORD v5516[4]; // [rsp+13D8h] [rbp-1190h] BYREF
  PVOID *v5517; // [rsp+13F8h] [rbp-1170h] BYREF
  __int64 (__fastcall **v5518)(); // [rsp+1400h] [rbp-1168h]
  _BYTE v5519[32]; // [rsp+1418h] [rbp-1150h] BYREF
  _BYTE v5520[32]; // [rsp+1438h] [rbp-1130h] BYREF
  _QWORD v5521[4]; // [rsp+1458h] [rbp-1110h] BYREF
  _QWORD v5522[4]; // [rsp+1478h] [rbp-10F0h] BYREF
  int v5523; // [rsp+1498h] [rbp-10D0h] BYREF
  ULONG_PTR v5524; // [rsp+14A0h] [rbp-10C8h]
  ULONG_PTR v5525; // [rsp+14A8h] [rbp-10C0h]
  __int64 v5526; // [rsp+14B0h] [rbp-10B8h]
  struct _KEVENT *v5527; // [rsp+14B8h] [rbp-10B0h]
  _QWORD v5528[6]; // [rsp+14C0h] [rbp-10A8h] BYREF
  _QWORD v5529[6]; // [rsp+14F0h] [rbp-1078h] BYREF
  _QWORD v5530[6]; // [rsp+1520h] [rbp-1048h] BYREF
  _QWORD v5531[6]; // [rsp+1550h] [rbp-1018h] BYREF
  __int64 v5532; // [rsp+1580h] [rbp-FE8h]
  __int64 v5533; // [rsp+1588h] [rbp-FE0h]
  __int64 TempFunctionEntry; // [rsp+1590h] [rbp-FD8h]
  ULONG_PTR CriticalRoutineImageBase; // [rsp+1598h] [rbp-FD0h] BYREF
  __int64 FuncTable0_ENd; // [rsp+15A0h] [rbp-FC8h]
  __int64 *v5537; // [rsp+15A8h] [rbp-FC0h]
  ULONG_PTR UncSpecificBufferPtr; // [rsp+15B0h] [rbp-FB8h]
  unsigned __int64 InvalidFunctionEntry; // [rsp+15B8h] [rbp-FB0h]
  unsigned int v5540; // [rsp+15C0h] [rbp-FA8h]
  int v5541; // [rsp+15C4h] [rbp-FA4h]
  __int64 v5542; // [rsp+15D0h] [rbp-F98h]
  __int64 v5543; // [rsp+15D8h] [rbp-F90h]
  __int64 v5544; // [rsp+15E0h] [rbp-F88h]
  ULONG_PTR v5545; // [rsp+15E8h] [rbp-F80h] BYREF
  __int64 v5546; // [rsp+15F0h] [rbp-F78h]
  __int64 *v5547; // [rsp+15F8h] [rbp-F70h]
  ULONG_PTR v5548; // [rsp+1600h] [rbp-F68h]
  unsigned __int64 v5549; // [rsp+1608h] [rbp-F60h]
  unsigned int v5550; // [rsp+1610h] [rbp-F58h]
  int v5551; // [rsp+1614h] [rbp-F54h]
  __int64 v5552; // [rsp+1628h] [rbp-F40h] BYREF
  unsigned __int64 v5553; // [rsp+1638h] [rbp-F30h]
  __int64 v5554; // [rsp+1640h] [rbp-F28h]
  __int64 *v5555; // [rsp+1648h] [rbp-F20h]
  ULONG_PTR v5556; // [rsp+1670h] [rbp-EF8h]
  __int64 v5557; // [rsp+1678h] [rbp-EF0h]
  __int64 v5558; // [rsp+1680h] [rbp-EE8h]
  ULONG_PTR v5559; // [rsp+1688h] [rbp-EE0h] BYREF
  __int64 v5560; // [rsp+1690h] [rbp-ED8h]
  __int64 *v5561; // [rsp+1698h] [rbp-ED0h]
  ULONG_PTR v5562; // [rsp+16A0h] [rbp-EC8h]
  unsigned __int64 v5563; // [rsp+16A8h] [rbp-EC0h]
  unsigned int v5564; // [rsp+16B0h] [rbp-EB8h]
  int v5565; // [rsp+16B4h] [rbp-EB4h]
  __int64 (__fastcall *v5566)(); // [rsp+16C0h] [rbp-EA8h]
  __int64 v5567; // [rsp+16C8h] [rbp-EA0h]
  __int64 v5568; // [rsp+16D0h] [rbp-E98h]
  ULONG_PTR v5569; // [rsp+16D8h] [rbp-E90h] BYREF
  __int64 v5570; // [rsp+16E0h] [rbp-E88h]
  __int64 *v5571; // [rsp+16E8h] [rbp-E80h]
  ULONG_PTR v5572; // [rsp+16F0h] [rbp-E78h]
  unsigned __int64 v5573; // [rsp+16F8h] [rbp-E70h]
  unsigned int v5574; // [rsp+1700h] [rbp-E68h]
  int v5575; // [rsp+1704h] [rbp-E64h]
  _QWORD v5576[17]; // [rsp+1710h] [rbp-E58h] BYREF
  char v5577; // [rsp+1798h] [rbp-DD0h] BYREF
  _DWORD v5578[6]; // [rsp+17A0h] [rbp-DC8h] BYREF
  int v5579; // [rsp+17B8h] [rbp-DB0h]
  int v5580; // [rsp+17D0h] [rbp-D98h]
  int v5581; // [rsp+17E8h] [rbp-D80h]
  int v5582; // [rsp+1800h] [rbp-D68h]
  int v5583; // [rsp+1818h] [rbp-D50h]
  int v5584; // [rsp+1830h] [rbp-D38h]
  int v5585; // [rsp+1848h] [rbp-D20h]
  __int64 v5586; // [rsp+1850h] [rbp-D18h]
  int v5587; // [rsp+1860h] [rbp-D08h]
  int v5588; // [rsp+1878h] [rbp-CF0h]
  ULONG_PTR v5589[6]; // [rsp+18A0h] [rbp-CC8h]
  __int128 v5590; // [rsp+18D0h] [rbp-C98h]
  __int128 v5591; // [rsp+18E0h] [rbp-C88h]
  __int128 v5592; // [rsp+18F0h] [rbp-C78h]
  __int128 v5593; // [rsp+1900h] [rbp-C68h]
  __int128 v5594; // [rsp+1910h] [rbp-C58h]
  __int128 v5595; // [rsp+1920h] [rbp-C48h]
  __int128 v5596; // [rsp+1930h] [rbp-C38h]
  __int64 (__fastcall *v5597)(ULONG_PTR); // [rsp+1940h] [rbp-C28h]
  __int64 (__fastcall *v5598)(int, int, int, int, __int64); // [rsp+1948h] [rbp-C20h]
  __int128 v5599; // [rsp+1950h] [rbp-C18h]
  __int64 (__fastcall *v5600)(int, int, int, int, __int64); // [rsp+1960h] [rbp-C08h]
  KIRQL (__stdcall *v5601)(PKSPIN_LOCK); // [rsp+1968h] [rbp-C00h]
  void (__stdcall *v5602)(PKSPIN_LOCK, KIRQL); // [rsp+1970h] [rbp-BF8h]
  __int64 (__fastcall *v5603)(); // [rsp+1978h] [rbp-BF0h]
  void (__stdcall *v5604)(PGROUP_AFFINITY, PGROUP_AFFINITY); // [rsp+1980h] [rbp-BE8h]
  void (__stdcall *v5605)(PGROUP_AFFINITY); // [rsp+1988h] [rbp-BE0h]
  __int64 (__fastcall *v5606)(); // [rsp+1990h] [rbp-BD8h]
  void (__fastcall __noreturn *v5607)(); // [rsp+1998h] [rbp-BD0h]
  __int64 (__fastcall *v5608)(); // [rsp+19A0h] [rbp-BC8h]
  void *(__cdecl *v5609)(void *, const void *, size_t); // [rsp+19A8h] [rbp-BC0h]
  __int64 *v5610; // [rsp+19B0h] [rbp-BB8h]
  __int64 (__usercall *v5611)@<rax>(ULONG_PTR@<rcx>, int, __int64); // [rsp+19B8h] [rbp-BB0h]
  NTSTATUS (__stdcall *v5612)(KPROCESSOR_MODE, BOOLEAN, PLARGE_INTEGER); // [rsp+19C0h] [rbp-BA8h]
  NTSTATUS (__stdcall *v5613)(PVOID, KWAIT_REASON, KPROCESSOR_MODE, BOOLEAN, PLARGE_INTEGER); // [rsp+19C8h] [rbp-BA0h]
  __int64 (__fastcall *v5614)(ULONG_PTR); // [rsp+19D0h] [rbp-B98h]
  __int64 (__fastcall *v5615)(ULONG_PTR); // [rsp+19D8h] [rbp-B90h]
  __int64 (__fastcall *v5616)(struct _KPRCB *, ULONG_PTR); // [rsp+19E0h] [rbp-B88h]
  __int64 (__fastcall *v5617)(); // [rsp+19E8h] [rbp-B80h]
  __int64 (__fastcall *v5618)(); // [rsp+19F0h] [rbp-B78h]
  __int64 (__fastcall *v5619)(); // [rsp+19F8h] [rbp-B70h]
  ULONG_PTR (__stdcall *v5620)(PKIPI_BROADCAST_WORKER, ULONG_PTR); // [rsp+1A00h] [rbp-B68h]
  __int64 (__fastcall *v5621)(); // [rsp+1A08h] [rbp-B60h]
  __int64 (__fastcall *v5622)(); // [rsp+1A10h] [rbp-B58h]
  __int64 (__fastcall *v5623)(); // [rsp+1A18h] [rbp-B50h]
  __int64 (__fastcall *v5624)(int, int, int, int, __int64); // [rsp+1A20h] [rbp-B48h]
  __int64 (__fastcall *v5625)(); // [rsp+1A28h] [rbp-B40h]
  __int64 (__fastcall *v5626)(); // [rsp+1A30h] [rbp-B38h]
  _BYTE v5627[264]; // [rsp+1A40h] [rbp-B28h] BYREF
  void (__fastcall *v5628)(ULONG_PTR); // [rsp+1B48h] [rbp-A20h]
  __int64 v5629; // [rsp+1BA8h] [rbp-9C0h]
  void (__fastcall *v5630)(__int64, unsigned __int64, _QWORD, unsigned __int64, unsigned __int64); // [rsp+1C28h] [rbp-940h]
  unsigned __int64 v5631; // [rsp+1C68h] [rbp-900h]
  unsigned __int8 (__fastcall *v5632)(_BYTE *, _BYTE *, _QWORD, _QWORD); // [rsp+1D00h] [rbp-868h]
  void (__fastcall *v5633)(_QWORD, _QWORD, _QWORD); // [rsp+1DA0h] [rbp-7C8h]
  __int64 v5634; // [rsp+1DB0h] [rbp-7B8h]
  volatile signed __int32 *v5635; // [rsp+1F80h] [rbp-5E8h]
  volatile signed __int32 *v5636; // [rsp+1F90h] [rbp-5D8h]
  volatile signed __int32 *v5637; // [rsp+1F98h] [rbp-5D0h]
  unsigned __int64 v5638; // [rsp+1FC8h] [rbp-5A0h]
  __int64 v5639; // [rsp+1FF0h] [rbp-578h]
  __int64 v5640; // [rsp+2008h] [rbp-560h]
  __int64 v5641; // [rsp+2018h] [rbp-550h]
  unsigned int v5642; // [rsp+2038h] [rbp-530h]
  int v5643; // [rsp+203Ch] [rbp-52Ch]
  __int64 v5644; // [rsp+2078h] [rbp-4F0h]
  __int64 v5645; // [rsp+2080h] [rbp-4E8h]
  __int64 v5646; // [rsp+2088h] [rbp-4E0h]
  __int64 v5647; // [rsp+2090h] [rbp-4D8h]
  __int64 v5648; // [rsp+2098h] [rbp-4D0h]
  __int64 v5649; // [rsp+20C8h] [rbp-4A0h]
  __int64 v5650; // [rsp+20D8h] [rbp-490h]
  __int64 v5651; // [rsp+20E0h] [rbp-488h]
  __int64 v5652; // [rsp+20E8h] [rbp-480h]
  __int64 v5653; // [rsp+20F0h] [rbp-478h]
  __int64 v5654; // [rsp+20F8h] [rbp-470h]
  __int64 v5655; // [rsp+21C8h] [rbp-3A0h]
  __int64 v5656; // [rsp+21E8h] [rbp-380h]
  _BYTE *v5657; // [rsp+21F0h] [rbp-378h]
  __int64 v5658; // [rsp+2220h] [rbp-348h]
  _DWORD *v5659; // [rsp+2238h] [rbp-330h]
  int v5660; // [rsp+2244h] [rbp-324h]
  __int64 v5661; // [rsp+2278h] [rbp-2F0h]
  int v5662; // [rsp+2298h] [rbp-2D0h]
  int v5663; // [rsp+2358h] [rbp-210h] BYREF
  signed __int32 *v5664; // [rsp+2360h] [rbp-208h]
  __int64 v5665; // [rsp+2368h] [rbp-200h]
  __int64 v5666; // [rsp+2370h] [rbp-1F8h]
  __int64 v5667; // [rsp+2378h] [rbp-1F0h]
  char v5668; // [rsp+2380h] [rbp-1E8h]
  int v5669; // [rsp+2384h] [rbp-1E4h]
  int v5670; // [rsp+2388h] [rbp-1E0h]
  unsigned int v5671; // [rsp+2418h] [rbp-150h]
  unsigned int v5672; // [rsp+241Ch] [rbp-14Ch]
  __int64 v5673; // [rsp+2420h] [rbp-148h]
  _BYTE *v5674; // [rsp+2468h] [rbp-100h]
  __int64 v5675; // [rsp+2470h] [rbp-F8h]
  __int64 v5676; // [rsp+2478h] [rbp-F0h]
  int v5677; // [rsp+24B4h] [rbp-B4h]
  __int64 v5678; // [rsp+24B8h] [rbp-B0h]
  __int64 v5679; // [rsp+24C0h] [rbp-A8h]
  unsigned __int64 v5680; // [rsp+2520h] [rbp-48h]
  int v5681; // [rsp+2528h] [rbp-40h]
  unsigned int v5682; // [rsp+252Ch] [rbp-3Ch]
  _OWORD v5683[3]; // [rsp+2530h] [rbp-38h] BYREF
  unsigned int enumDpcExecutionMethod0; // [rsp+2578h] [rbp+10h]
  int v5686; // [rsp+2578h] [rbp+10h]
  char v5687; // [rsp+2578h] [rbp+10h]
  int v5688; // [rsp+2578h] [rbp+10h]
  PVOID v5691; // [rsp+2588h] [rbp+20h]
  __int16 v5692; // [rsp+2588h] [rbp+20h]
  unsigned int v5693; // [rsp+2588h] [rbp+20h]
  int v5694; // [rsp+2588h] [rbp+20h]
  _BYTE *v5695; // [rsp+2588h] [rbp+20h]
  __int64 v5696; // [rsp+2588h] [rbp+20h]

  //*1*--Start--*1*//
  
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  v5289 = 5LL;
  v6 = 41;

  /*
  KeSetCoalescableTimer = 0,
  Prcb.AcpiReserved = 1,
  Prcb.HalReserved = 2,
  PsCreateSystemThread = 3,
  KeInsertQueueApc = 4,
  KiBalanceSetManagerPeriodicDpc = 5
  */
  if ( a4 )
  {
    if ( enumDpcExecutionMethod > 5 || !_bittest(&v6, enumDpcExecutionMethod) )
      enumDpcExecutionMethod = 0;
    v7 = a5 | 4;
  }
  else
  {
    if ( ((enumDpcExecutionMethod - 3) & 0xFFFFFFFD) == 0 )
      enumDpcExecutionMethod = 0;
    v7 = a5;
  }
  LODWORD(v5105) = v7; // v5105 = a5 | 4 if a4 is true, else a5

  //*2*-- 디버깅·무결성 우회·테스트 서명 없이, 코드 패치가 정식으로 허용된 정상 부팅 환경인지 체크 --*2*//
  if ( enumDpcExecutionMethod != 7 )
  {
    if ( (unsigned int)KiAreCodePatchesAllowed(0LL, 41LL) )
    {
      if ( (int)KiSwInterruptPresent() >= 0
      {
        if ( (unsigned int)AntiDebug0() ) // Some lidt assembly check... it is always true.
        {
          LoadOptions = (const char *)KiGetLoadOptions();
          if ( !strstr(LoadOptions, "DISABLE_INTEGRITY_CHECKS") && !strstr(LoadOptions, "TESTSIGNING") )
            return 1;
        }
      }
    }
  }
  //*2*-- 디버깅·무결성 우회·테스트 서명 없이, 코드 패치가 정식으로 허용된 정상 부팅 환경인지 체크 --*2*//

  v10 = __26;
  if ( _bittest(&v10, enumDpcExecutionMethod) )
    enumDpcExecutionMethod = 0;
  enumDpcExecutionMethod0 = enumDpcExecutionMethod; // 
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();

  //*3*-- FunctionExtentList & .pdata 무결성 체크 --*3*//
  if ( KiInitData != 12 ) // idk this
  {
    v5106[1] = -402653175;
    KeBugCheckEx(__ROL4__(-402653175, 101), 2uLL, 0LL, KiInitData, 0xCuLL); // Critical Initialize Failure
  }
  v11 = 0;
  v12 = &_ts_83;
  if ( &_ts_83 == &_ts_z )
  {
    v13 = 0;
    v14 = &_ps_0;
    if ( &_ps_0 == &_ps_z )
      goto LABEL_29;
  }
  else
  {
    do
      v11 += *v12++;
    while ( v12 != &_ts_z );
    v13 = 0;
    v14 = &_ps_0;
  }
  do
    v13 += *v14++;
  while ( v14 != &_ps_z );
  if ( v11 != v13 ) // _ts_83 checksum != _ps_0 checksum
  {
    v5106[2] = -402653175;
    KeBugCheckEx(__ROL4__(-402653175, 101), 0xCuLL, v11, v13, 0LL);
  }
LABEL_29:
  if ( !__25 ) // Always true ig
  {
    ntoskrnlexe_Base = 0x140000000uLL;
    Pool2 = 0LL;
    v5182 = 1LL;
    if ( (int)LdrResFindResource(
                0x40000000u,
                10,
                (unsigned int)L"FUNCTIONEXTENTLIST",
                0,
                (__int64)vFunctionExtentListPtr,
                (__int64)v5292,
                0LL,
                0LL,
                0) >= 0
      && (unsigned __int64)(v5292[0] - 8LL) <= 0xFFFFFFF7 ) 
      // get "FUNCTIONEXTENTLIST" resource in ntoskrnl.exe
    {
      FinalUncSize = v5292[0];
      if ( RtlImageNtHeader(0x140000000uLL) ) // 신경쓸 필요 없음
      {
        LOBYTE(v16) = 1;
        vExceptionTablePtr = RtlImageDirectoryEntryToData(0x140000000uLL, v16, 3LL, &v5110);
        //Exception Table 위치 가져오기
        vUncompressedBufPool = 0LL;
        if ( !vExceptionTablePtr ) // Exception Table이 없으면..
        {
COULDNT_FIND_EXT_SIG:
          enumDpcExecutionMethod = enumDpcExecutionMethod0;
LABEL_122:
          vUncompressedBufPool2 = (ULONG_PTR)vUncompressedBufPool;
          v40 = &ntoskrnlexe_Base;
          v41 = 24;
          v42 = &__25;
          v43 = 3LL;
          do
          {
            v41 -= 8;
            *v42++ = *v40++;
            --v43;
          }
          while ( v43 );
          for ( ; v41; --v41 )
          {
            *(_BYTE *)v42 = *(_BYTE *)v40;
            v42 = (__int64 *)((char *)v42 + 1);
            v40 = (unsigned __int64 *)((char *)v40 + 1);
          }
          goto LABEL_131;
        }

        v19 = -1073741823;
        if ( *(_DWORD *)vFunctionExtentListPtr[0] != 1163416643 ) // EXTC signature
        {
          if ( *(_DWORD *)vFunctionExtentListPtr[0] != 1163416652 ) // EXTL signature
            goto COULDNT_FIND_EXT_SIG;
          goto EXTLSIGNATUREFOUND;
        }

        // EXTC signature found
        if ( RtlGetCompressionWorkSpaceSize(4u, CompressBufferWorkSpaceSize, CompressFragmentWorkSpaceSize) < 0 )
          goto COULDNT_FIND_EXT_SIG;
        
        UncompressedSize = *(_DWORD *)(vFunctionExtentListPtr[0] + 4);
        if ( UncompressedSize < 8 )
        {
          CompressBufferWorkSpaceSize[1] = -402653175;
          KeBugCheckEx(__ROL4__(-402653175, 101), 0xEuLL, vFunctionExtentListPtr[0], 0x140000000uLL, FinalUncSize); // Fuck them!
        }

        // Tag selection macro.
        v21 = __rdtsc();
        v22 = (__ROR8__(v21, 3) ^ v21) * (unsigned __int128)0x7010008004002001uLL;
        vFunctionExtentListPtr[2] = *((_QWORD *)&v22 + 1);
        v23 = ((unsigned __int64)v22 ^ *((_QWORD *)&v22 + 1)) % 0xB;
        if ( (unsigned int)v23 > 5 )
        {
          switch ( (_DWORD)v23 )
          {
            case 6:
              v5192 = __ROL4__(1464235086, 24) ^ 6;
              break;
            case 7:
              v5191 = __ROR4__(1666411585, 7);
              break;
            case 8:
              v5190 = __ROL4__(1113876033, 8);
              break;
            case 9:
              v5189 = __ROL4__(1480806214, 33) ^ 9;
              break;
            default:
              v24 = __rdtsc();
              vFunctionExtentListPtr[4] = ((__ROR8__(v24, 3) ^ v24) * (unsigned __int128)0x7010008004002001uLL) >> 64;
              break;
          }
        }
        else if ( (_DWORD)v23 == 5 )
        {
          v5188 = __ROL4__(1766089295, 5);
        }
        else if ( (_DWORD)v23 )
        {
          switch ( (_DWORD)v23 )
          {
            case 1:
              v5186 = __ROR4__(1700422467, 1);
              break;
            case 2:
              v5185 = __ROL4__(1634559043, 2);
              break;
            case 3:
              v5184 = __ROL4__(1920421956, 15) ^ 3;
              break;
            default:
              CompressBufferWorkSpaceSize[2] = __ROR4__(1886800198, v23);
              break;
          }
        }
        else
        {
          v5187 = __ROL4__(1665295171, 6);
        }
        //

        Pool2 = (void *)ExAllocatePool2(0x42uLL);
        // Flags: POOL_FLAG_NON_PAGED | POOL_FLAG_UNINITIALIZED 
        // Bytes: CompressBufferWorkSpaceSize /* XPRESS-HUFFMAN으로 ‘한 덩어리’ 압축/해제할 때 필요할 워크 메모리 크기 */
        // Tag: Random (previous r8d)

        if ( Pool2 )
        {
          // Tag selection macro
          v25 = __rdtsc();
          v26 = (__ROR8__(v25, 3) ^ v25) * (unsigned __int128)0x7010008004002001uLL;
          vFunctionExtentListPtr[6] = *((_QWORD *)&v26 + 1);
          v27 = ((unsigned __int64)v26 ^ *((_QWORD *)&v26 + 1)) % 0xB;
          if ( (unsigned int)v27 > 5 )
          {
            switch ( (_DWORD)v27 )
            {
              case 6:
                v5202 = __ROL4__(1464235086, 24) ^ 6;
                break;
              case 7:
                v5201 = __ROR4__(1666411585, 7);
                break;
              case 8:
                v5200 = __ROL4__(1113876033, 8);
                break;
              case 9:
                v5199 = __ROL4__(1480806214, 33) ^ 9;
                break;
              default:
                v28 = __rdtsc();
                vFunctionExtentListPtr[8] = ((__ROR8__(v28, 3) ^ v28) * (unsigned __int128)0x7010008004002001uLL) >> 64;
                break;
            }
          }
          else if ( (_DWORD)v27 == 5 )
          {
            v5198 = __ROL4__(1766089295, 5);
          }
          else if ( (_DWORD)v27 )
          {
            switch ( (_DWORD)v27 )
            {
              case 1:
                v5196 = __ROR4__(1700422467, 1);
                break;
              case 2:
                v5195 = __ROL4__(1634559043, 2);
                break;
              case 3:
                v5194 = __ROL4__(1920421956, 15) ^ 3;
                break;
              default:
                v5193 = __ROR4__(1886800198, v27);
                break;
            }
          }
          else
          {
            v5197 = __ROL4__(1665295171, 6);
          }
          //

          vUncompressedBufPool = (unsigned int *)ExAllocatePool2(0x42uLL);
          // Flags: POOL_FLAG_NON_PAGED | POOL_FLAG_UNINITIALIZED
          // Bytes: UncompressedSize /* 압축 해제할 크기 */
          // Tag: Random (previous r8d)

          if ( !vUncompressedBufPool )
            goto LABEL_117; // Goto COULDNT_FIND_EXT_SIG (with FreePool)
          
          
          
          v29 = RtlDecompressBufferEx(4LL, vUncompressedBufPool, UncompressedSize, vFunctionExtentListPtr[0] + 8, FinalUncSize - 8, &FinalUncSize, Pool2);
          // Flags: COMPRESSION_FORMAT_XPRESS_HUFFMAN
          // UncompressedBuffer: vUncompressedBufPool
          // UncompressedBufferSize: UncompressedSize
          // CompressedBuffer: vFunctionExtentListPtr[0] + 8 (i think this is the data)
          // CompressedBufferSize: FinalUncSize - 8
          // FinalUncompressedSize: FinalUncSize
          // WorkSpace: Pool2
          
          if ( v29 < 0 )
          {
            v5203 = -402653175;
            KeBugCheckEx(__ROL4__(-402653175, 101), 0xFuLL, vFunctionExtentListPtr[0], 0x140000000uLL, v29);
          }

EXTLSIGNATUREFOUND:

          if ( !vUncompressedBufPool )
          {
            // Pool tag selection macro
            v30 = __rdtsc();
            v31 = (__ROR8__(v30, 3) ^ v30) * (unsigned __int128)0x7010008004002001uLL;
            vFunctionExtentListPtr[10] = *((_QWORD *)&v31 + 1);
            v32 = ((unsigned __int64)v31 ^ *((_QWORD *)&v31 + 1)) % 0xB;
            if ( (unsigned int)v32 > 5 )
            {
              switch ( (_DWORD)v32 )
              {
                case 6:
                  TableSize[33] = __ROL4__(1464235086, 24) ^ 6;
                  break;
                case 7:
                  v5065 = __ROR4__(1666411585, 7);
                  break;
                case 8:
                  v5064 = __ROL4__(1113876033, 8);
                  break;
                case 9:
                  v5063 = __ROL4__(1480806214, 33) ^ 9;
                  break;
                default:
                  v33 = __rdtsc();
                  v5295[1] = ((__ROR8__(v33, 3) ^ v33) * (unsigned __int128)0x7010008004002001uLL) >> 64;
                  break;
              }
            }
            else if ( (_DWORD)v32 == 5 )
            {
              v5062 = __ROL4__(1766089295, 5);
            }
            else if ( (_DWORD)v32 )
            {
              switch ( (_DWORD)v32 )
              {
                case 1:
                  v5209 = __ROR4__(1700422467, 1);
                  break;
                case 2:
                  v5208 = __ROL4__(1634559043, 2);
                  break;
                case 3:
                  v5207 = __ROL4__(1920421956, 15) ^ 3;
                  break;
                default:
                  v5206 = __ROR4__(1886800198, v32);
                  break;
              }
            }
            else
            {
              v5061 = __ROL4__(1665295171, 6);
            }
            //

            v34 = (unsigned int *)ExAllocatePool2(0x42uLL);
            // idk

            vUncompressedBufPool = v34;
            // v34 = vUncompressedBufPool  if EXTL
            if ( !v34 )
              goto LABEL_116;
            memmove(v34, (const void *)(vFunctionExtentListPtr[0] + 4), FinalUncSize - 4LL);
            // yeah and move it
          }

          v35 = 0;
          for ( i = vExceptionTablePtr - 0x40000000; v35 < v5110; i += *(_DWORD *)(vExceptionTablePtr + 4 * (v37 >> 2)) )
          {
            v37 = v35;
            v35 += 4;
          }
          v38 = vUncompressedBufPool[1];
          if ( i != (_DWORD)v38 )
          {
            v5066 = -402653175;
            KeBugCheckEx(__ROL4__(-402653175, 101), 0x10uLL, (ULONG_PTR)vUncompressedBufPool, 0x140000000uLL, v38 ^ i);
          }
          v39 = *vUncompressedBufPool;
          if ( (unsigned int)v39 >= 0x1FFFFFFF || 8 * v39 > (unsigned __int64)FinalUncSize )
          {
            BugCheckParameter4 = *vUncompressedBufPool;
            v5067 = -402653175;
            KeBugCheckEx(__ROL4__(-402653175, 101), 0x11uLL, (ULONG_PTR)vUncompressedBufPool, 0x140000000uLL, BugCheckParameter4);
          }
          v5481 = FinalUncSize;
          v19 = 0;
          // validate checksum with vExceptionTablePtr (.pdata in ntoskrnl.exe) with FUNCTIONEXTENTLIST (compressed -> uncompressed)
          // if not, bugcheck boom
LABEL_116:
          if ( !Pool2 )
          {
LABEL_118:
            if ( vUncompressedBufPool && v19 < 0 )
            {
              ExFreePool(vUncompressedBufPool);
              vUncompressedBufPool = 0LL;
            }
            goto COULDNT_FIND_EXT_SIG;
          }
LABEL_117:
          ExFreePool(Pool2);
          goto LABEL_118;
        }
        enumDpcExecutionMethod = enumDpcExecutionMethod0;
      }
    }
    vUncompressedBufPool = 0LL;
    goto LABEL_122;
    // Free everything.
  }
  //*3*-- FunctionExtentList & .pdata 무결성 체크 --*3*//


  //*4*-- 중간 점검 --*4*//
  v44 = 24;
  v5182 = 1LL;
  v45 = &__25;
  v46 = &ntoskrnlexe_Base;
  v47 = 3LL;
  do
  {
    v44 -= 8;
    *v46++ = *v45++;
    --v47; // I think integrity check?
  }
  while ( v47 );
  for ( ; v44; --v44 )
  {
    *(_BYTE *)v46 = *(_BYTE *)v45;
    v46 = (unsigned __int64 *)((char *)v46 + 1);
    v45 = (__int64 *)((char *)v45 + 1);
  }
LABEL_131:
  // FsRtlUninitializeSmallMcb: It is likely a function that is used by PG
  // NtOsKrnlBase[0] is ntoskrnl.exe base address
  // v49 = INITKDBG Section
  if ( !RtlPcToFileHeader(FsRtlUninitializeSmallMcb, NtOsKrnlBase)
    || (v48 = RtlImageNtHeader(NtOsKrnlBase[0])) == 0
    || (v49 = RtlSectionTableFromVirtualAddress(
                v48,
                NtOsKrnlBase[0],
                (unsigned int)FsRtlUninitializeSmallMcb - LODWORD(NtOsKrnlBase[0]))) == 0 )
  {
    v5180 = -402653175;
    KeBugCheckEx(__ROL4__(-402653175, 101), 0x1CuLL, 0LL, 0LL, 0LL);
  }

  INITKDBG_Section_Start = (const void *)(NtOsKrnlBase[0] + *(unsigned int *)(v49 + 12));
  INITKDBG_SectionSize = *(unsigned int *)(v49 + 8);
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  sub_140B9EDF0_Offset = (unsigned int)sub_140B9EDF0 - (unsigned int)INITKDBG_Section_Start;
  RtlLookupFunctionEntryEx_Offset = (_DWORD *)((unsigned int)RtlLookupFunctionEntryEx - (unsigned int)INITKDBG_Section_Start);
  v5022 = RtlLookupFunctionEntryEx_Offset;
  sub_140B9FDF0_Offset = (unsigned int)sub_140B9FDF0 - (unsigned int)INITKDBG_Section_Start;

  // If it is invalid
  if ( (unsigned int)RtlLookupFunctionEntryEx_Offset > 0x7FFFFFFF )
  {
    v5068 = -402653175;
    KeBugCheckEx(
      __ROL4__(-402653175, 101),
      9uLL,
      (unsigned int)RtlLookupFunctionEntryEx_Offset,
      INITKDBG_SectionSize,
      (unsigned int)FsRtlUninitializeSmallMcb - (unsigned int)INITKDBG_Section_Start);
  }
  //*4*-- 중간 점검 --*4*//

  //*5*-- Critical Routine Protection --*5*//
  bIsSystemOnHv = 0;
  if ( (unsigned int)MmStrongCodeGuaranteesEnforced() ) // I think some Hypervisor flag??
    bIsSystemOnHv = ((__int64 (*)(void))sub_140BCED74)() != 0; // sub_140BCED74 is calling Errata something
  if ( enumDpcExecutionMethod == 7 ) // ??
  {
    bIsSystemOnHv2 = 1;
LABEL_141:
    v55 = __rdtsc();
    v56 = (__ROR8__(v55, 3) ^ v55) * (unsigned __int128)0x7010008004002001uLL;
    v5299 = *((_QWORD *)&v56 + 1);
    if ( ((unsigned __int64)v56 ^ *((_QWORD *)&v56 + 1)) % 0xA >= 2 )
    {
      LODWORD(v5020) = 0;
    }
    else
    {
      v57 = __rdtsc();
      v58 = (__ROR8__(v57, 3) ^ v57) * (unsigned __int128)0x7010008004002001uLL;
      v5303 = *((_QWORD *)&v58 + 1);
      v5020 = (BYTE8(v58) ^ (unsigned __int8)v58) & 1;
    }
    goto LABEL_147;
  }
  bIsSystemOnHv2 = bIsSystemOnHv;
  if ( enumDpcExecutionMethod != 3 )
    goto LABEL_141;
  v59 = __rdtsc();
  v60 = (__ROR8__(v59, 3) ^ v59) * (unsigned __int128)0x7010008004002001uLL;
  NtOsKrnlBase[1] = *((_QWORD *)&v60 + 1);
  if ( ((unsigned __int64)v60 ^ *((_QWORD *)&v60 + 1)) % 0xA >= 5 )
    goto LABEL_141;
  LODWORD(v5020) = 3;
LABEL_147:
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  LODWORD(v5043) = INITKDBG_SectionSize;
  FsRtlUninitializeSmallMcb_OffsetFromINITKDBG = (unsigned int)FsRtlUninitializeSmallMcb - (_DWORD)INITKDBG_Section_Start;
  v62 = INITKDBG_Section_Start;
  if ( bIsSystemOnHv2 )
  {
    LODWORD(v5020) = 0;
    LODWORD(v5043) = INITKDBG_SectionSize;
    if ( enumDpcExecutionMethod0 != 7 )
    {
      LODWORD(v5043) = INITKDBG_SectionSize;
      if ( enumDpcExecutionMethod0 - 3 <= 1 )
        enumDpcExecutionMethod0 = 0;
    }
  }
  CriticalRoutines[0] = (__int64)off_140E00748; // HaliHaltSystem, not xHalHaltSystem
  /*
  CriticalRoutines dq 0                    ; DATA XREF: sub_140BA70B0+E33↑w
.data:0000000140E00210                                         ; sub_140BA70B0+E8E↑r ...
.data:0000000140E00218                 dq offset KeBugCheckEx
.data:0000000140E00220                 dq offset KeBugCheck2
.data:0000000140E00228                 dq offset KiBugCheckDebugBreak
.data:0000000140E00230                 dq offset KiDebugTrapOrFault
.data:0000000140E00238                 dq offset DbgBreakPointWithStatus
.data:0000000140E00240                 dq offset RtlCaptureContext
.data:0000000140E00248                 dq offset KeQueryCurrentStackInformation
.data:0000000140E00250                 dq offset KiSaveProcessorControlState
.data:0000000140E00258                 dq offset memmove
.data:0000000140E00260                 dq offset IoSaveBugCheckProgress
.data:0000000140E00268                 dq offset KeIsEmptyAffinityEx
.data:0000000140E00270                 dq offset VfNotifyVerifierOfEvent
.data:0000000140E00278                 dq offset _guard_check_icall_no_overrides
.data:0000000140E00280                 dq offset KeGuardDispatchICall
  */
  *(_OWORD *)P = 0LL;
  v63 = 0LL;
  v5508 = 0LL;
  v64 = 0;
  v5506 = 0LL;
  LODWORD(PgContextSize) = 0;
  LODWORD(v5057) = 0;
  LODWORD(Size) = 0;
  do
  {
    v65 = CriticalRoutines[v64];
    FuncTable0 = RtlLookupFunctionTable(v65, &CriticalRoutineImageBase, TableSize);
    v5533 = FuncTable0;
    if ( !FuncTable0 )
    {
      TotalFunctionEntry = v5537;
      goto LABEL_170;
    }
    vUncompressedBufPool3 = (_DWORD *)vUncompressedBufPool2;
    UncSpecificBufferPtr = 0LL;
    if ( vUncompressedBufPool2 && ntoskrnlexe_Base == CriticalRoutineImageBase )
    {
      UncSpecificBufferPtr = vUncompressedBufPool2;
      InvalidFunctionEntry = 0LL;
      v5540 = v5481;
      v5541 = 0;
      UnwindInfoRoutineAddress = RtlLookupFunctionEntry(v65, &CriticalRoutineImageBase, 0LL);
      TempFunctionEntry = UnwindInfoRoutineAddress;
      if ( UnwindInfoRoutineAddress )
      {
        FunctionStartRVA = UnwindInfoRoutineAddress - CriticalRoutineImageBase;
        Index = 0;
        CmpValue = *vUncompressedBufPool3 - 1; // IntegrityCheckLength - 1
        UncompDataIndex = 0LL;
        if ( CmpValue < 0 )
        {
LABEL_167:
          v74 = CmpValue < Index;
          FuncTable0 = v5533;
          if ( !v74 )
            InvalidFunctionEntry = (unsigned __int64)&vUncompressedBufPool3[2 * UncompDataIndex + 2];
          goto LABEL_166;
        }
        do
        {
          UncompDataIndex = (unsigned int)((CmpValue + Index) >> 1); // UncompDataIndex = (CmpValue + Index) / 2;
          if ( FunctionStartRVA - vUncompressedBufPool3[2 * UncompDataIndex + 2] >= 0 )
          {
            if ( FunctionStartRVA - vUncompressedBufPool3[2 * UncompDataIndex + 2] <= 0 )
              goto LABEL_167;
            Index = UncompDataIndex + 1;
          }
          else
          {
            if ( !(_DWORD)UncompDataIndex )
              break;
            CmpValue = UncompDataIndex - 1;
          }
        }
        while ( CmpValue >= Index );
      }
      FuncTable0 = v5533;
    }

    //*5*-- Critical Routine Protection --*5*//

    //*6*-- Save PTE --*6*//

LABEL_166:
    TotalFunctionEntry = FunctionEntryAddr;
    v5532 = v65; // The routine. (HaliHaltSystem)
    v5537 = FunctionEntryAddr;
    TableSize[0] /= 0xCu;
    v5024 = CriticalRoutineImageBase;
    FuncTable0_ENd = FuncTable0 + 12LL * TableSize[0];
LABEL_170:
    v75 = (unsigned int)v5057; // Initially 0
LABEL_171:
    if ( FuncTable0 && FuncTable0 != FuncTable0_ENd )
    {
      if ( !UncSpecificBufferPtr ) // If PG is booted normally, it'll not run this.
      {
        while ( 1 )
        {
          v81 = FuncTable0;
          v82 = RtlpConvertFunctionEntry(FuncTable0, CriticalRoutineImageBase);
          v83 = RtlpSameFunction(v82, CriticalRoutineImageBase, v5532);
          FuncTable0 = v5533 + 12;
          v5533 += 12LL;
          if ( v83 )
            break;
          if ( FuncTable0 == FuncTable0_ENd )
            goto LABEL_186;
        }
        *v5537 = v81;
        goto LABEL_215;
      }
      if ( TempFunctionEntry ) // UnwindInfo
      {
        if ( InvalidFunctionEntry ) // Also this, would not run if there's no invalid functions.
        {
          v76 = *(_DWORD *)(InvalidFunctionEntry + 4);
          if ( (v76 & 1) != 0 )
          {
            *TotalFunctionEntry = CriticalRoutineImageBase + (v76 & 0xFFFFFFFE);
            InvalidFunctionEntry = 0LL;
          }
          else
          {
            v77 = (unsigned int)(v5541 + v76);
            v78 = (unsigned int)v77;
            v79 = v77 + 4;
            if ( v79 < v78 || v79 > v5540 )
            {
              TableSize[11] = -402653175;
              KeBugCheckEx(__ROL4__(-402653175, 101), 0x12uLL, UncSpecificBufferPtr, CriticalRoutineImageBase, v78);
            }
            v80 = *(_DWORD *)(UncSpecificBufferPtr + v78);
            v5541 += 4;
            InvalidFunctionEntry &= -(__int64)((v80 & 1) != 0);
            if ( (v80 & 1) != 0 )
              v80 &= ~1u;
            *TotalFunctionEntry = CriticalRoutineImageBase + v80; // 어떻게든 구해서 넣는듯?
          }
        }
        else
        {
          *TotalFunctionEntry = TempFunctionEntry;
          TempFunctionEntry = 0LL;
        }
LABEL_215:
        v101 = *(unsigned int *)FunctionEntryAddr[0];
        // v101 = FunctionStartRVA
        v102 = *(_DWORD *)(FunctionEntryAddr[0] + 4LL) - v101;
        // v102 = Function Size?
        v103 = v5024 + v101;
        // v103 = The function start in ptr..
        if ( v63 ) // Idk? Is it zero? It is skipped when I debugged.
        {
          v104 = 2LL * v75; // 0
          *(_DWORD *)(v63 + 8 * v104 + 16) = v102;
          *(_QWORD *)(v63 + 8 * v104 + 8) = v103;
        }
        HIDWORD(v5508) += v102; // Another Iterator. It adds the function size to this.
        BeginAddress_Paged = v103 & 0xFFFFFFFFFFFFF000uLL; // BeginAddress, as paged.
        LODWORD(v5057) = v75 + 1; //
        v5025 = v103 & 0xFFFFFFFFFFFFF000uLL; // BeginAddress_Paged
        PgC_0_1 = (unsigned int *)(v103 + v102); // BeginAddress + Function Size -> EndAddress
        while ( 1 )
        {
          v106 = PteAddressPtr;
          v107 = 4LL;
          v108 = MmPteBase + ((BeginAddress_Paged >> 9) & 0x7FFFFFFFF8LL);
          do
          {
            *v106++ = v108;
            v108 = MmPteBase + ((v108 >> 9) & 0x7FFFFFFFF8LL);
            --v107;
          }
          while ( v107 );

          // v106 = [ PTE, PDE, PDPTE, PML4E ] I think.
          // PteAddressPtr

          v109 = 3;
          LODWORD(v5037) = FsRtlUninitializeSmallMcb_OffsetFromINITKDBG;
          v110 = 0;
          do
          {
            v111 = v109;
            if ( v110 )
              goto LABEL_225;
            if ( !v109 )
              break;
            if ( (*(_DWORD *)PteAddressPtr[v109] & 0x80) != 0 )
            {
              --v109;
              v110 = 1;
              v111 = v109;
LABEL_225:
              PteAddressPtr[v109] = 0LL;
            }
            --v109;
          }
          while ( v111 );
          // Going from index 3, check if it is Large Page.
          // If is it PTE, check for PAT bit.

          FsRtlUninitializeSmallMcb_OffsetFromINITKDBG = (unsigned int)v5037;
          LODWORD(v112) = 4;
          v113 = v5025;
          do
          {
            v112 = (unsigned int)(v112 - 1);// starting from 3
            v114 = PteAddressPtr[v112];
            v5059 = v114;
            if ( !v114 )
              break;
            v115 = 0;
            if ( HIDWORD(P[1]) ) // Size > 0:
            {
              do
              {
                if ( v114 == *((_QWORD *)P[0] + v115) ) // If there's any containing PTE:
                  break;// get out
                ++v115;
              }
              while ( v115 < HIDWORD(P[1]) );
              v113 = v5025;
            }
            if ( v115 == HIDWORD(P[1]) ) // We searched but there was no existing PTE:
            {
              if ( HIDWORD(P[1]) == (_DWORD)Size ) // 포화 상태라면 Buffer 늘리기
              {
                LODWORD(Size) = 2 * Size + 64;
                v116 = __rdtsc();
                v117 = (__ROR8__(v116, 3) ^ v116) * (unsigned __int128)0x7010008004002001uLL;
                FunctionEntryAddr[1] = *((_QWORD *)&v117 + 1);
                v118 = ((unsigned __int64)v117 ^ *((_QWORD *)&v117 + 1)) % 0xB;
                if ( (unsigned int)v118 > 5 )
                {
                  v121 = v118 - 6;
                  if ( v121 )
                  {
                    v122 = v121 - 1;
                    if ( v122 )
                    {
                      v123 = v122 - 1;
                      if ( v123 )
                      {
                        if ( v123 == 1 )
                        {
                          TableSize[7] = -1333354875;
                        }
                        else
                        {
                          v124 = __rdtsc();
                          FunctionEntryAddr[2] = ((__ROR8__(v124, 3) ^ v124) * (unsigned __int128)0x7010008004002001uLL) >> 64;
                        }
                      }
                      else
                      {
                        TableSize[8] = 1684422978;
                      }
                    }
                    else
                    {
                      TableSize[9] = -2100910376;
                    }
                  }
                  else
                  {
                    TableSize[10] = 1314342514;
                  }
                }
                else if ( (_DWORD)v118 == 5 )
                {
                  TableSize[6] = 680282605;
                }
                else if ( (_DWORD)v118 )
                {
                  v119 = v118 - 1;
                  if ( v119 )
                  {
                    v120 = v119 - 1;
                    if ( v120 )
                    {
                      if ( v120 == 1 )
                        TableSize[2] = -1474152136;
                      else
                        TableSize[1] = 1728537748;
                    }
                    else
                    {
                      TableSize[3] = -2051698419;
                    }
                  }
                  else
                  {
                    TableSize[4] = -1297272415;
                  }
                }
                else
                {
                  TableSize[5] = -795291432;
                }
                v125 = (char *)ExAllocatePool2(0x40uLL); // Extended Pool?
                if ( !v125 )
                  goto LABEL_6576;
                v126 = P[0];
                if ( P[0] )
                {
                  v127 = v125;
                  v128 = 8 * HIDWORD(P[1]);
                  if ( (unsigned int)(8 * HIDWORD(P[1])) >= 8 )
                  {
                    v129 = (unsigned __int64)v128 >> 3;
                    do
                    {
                      v128 -= 8;
                      *(_QWORD *)v127 = *v126++;
                      v127 += 8;
                      --v129;
                    }
                    while ( v129 );
                    v113 = v5025;
                  }
                  if ( v128 )
                  {
                    v130 = v127 - (char *)v126;
                    do
                    {
                      *((_BYTE *)v126 + v130) = *(_BYTE *)v126;
                      v126 = (_QWORD *)((char *)v126 + 1);
                      --v128;
                    }
                    while ( v128 );
                    v113 = v5025;
                  }
                  ExFreePool(P[0]); // Size 늘리기.
                }
                v114 = v5059;
                LODWORD(P[1]) = Size;
                P[0] = v125; // 새롭게 늘어난 용량으로 설정
              }
              PteCounts = HIDWORD(P[1]);
              ++HIDWORD(P[1]); // == Lodword(v5508) = context+0x10
              HIDWORD(v5508) += 16; // 총 Function Size. but Why is it adding 16?
              *((_QWORD *)P[0] + PteCounts) = v114; 
            }
          }
          while ( (_DWORD)v112 );

          BeginAddress_Paged = v113 + 4096; // BeginAddress_Paged + PAGESIZE
          v5025 = BeginAddress_Paged; // 로 변경
          if ( BeginAddress_Paged >= (unsigned __int64)PgC_0_1 ) // >= EndAddress then (A)
          {
            v75 = (unsigned int)v5057;
            v63 = v5506;
            TotalFunctionEntry = v5537;
            FuncTable0 = v5533;
            LODWORD(v5508) = (_DWORD)v5057;
            goto LABEL_171;
          }
          // Do the same thing to the next page bruh
        }
      }
    }
LABEL_186:
    v64 = PgContextSize + 1;
    LODWORD(PgContextSize) = v64;
  }
  while ( v64 < 0xF );
  /*
  지금까지의 루틴을 정리해 보면,
  1. UnwindInfo가 정상적으로 있는 (근데 이건 모든 정상적인 컴퓨터면 항상 참임) CriticalRoutines의 루틴에 대해,
  2. PTE를 가져다가 모든 PTE에 대해 P 리스트에 넣는다.
  3. P 구조체는 다음과 같은 단일 구조로 되어 있는 것 같다.
  PteSavingContext:
    +0x0 = PVOID* PteAddressList
    +0x8 = ULONG Limit (<< 이거 Pool 늘릴 때 쓰는듯?)
    +0xC = ULONG Count (PteAddressList의 Size)
    +0x10 = ULONG RoutineCount (몇개의 개별 루틴이 들어있는지?)
    +0x14 = ULONG SumSize (총 함수의 바이트 수. +x를 더함. (Nesting))
  */

  if ( v63 ) // It was 0, it means there's no routine condition containing A
  {
    v84 = 2LL * v75;
    *(_DWORD *)(v63 + 8 * v84 + 16) = 8;
    *(_QWORD *)(v63 + 8 * v84 + 8) = &off_140E00748;
  }
  HIDWORD(v5508) += 8;
  v85 = (unsigned __int64)&off_140E00748 & 0xFFFFFFFFFFFFF000uLL; // from HaliHaltSystem
  LODWORD(v5057) = v75 + 1; // RoutineCounts.
  v5024 = (unsigned __int64)&off_140E00748 & 0xFFFFFFFFFFFFF000uLL;
  // 이제 똑같은 짓을 HaliHaltSystem에다가 함. 왜 굳이 나누는지는 의문.
  do
  {
    v86 = v5510;
    v87 = MmPteBase + ((v85 >> 9) & 0x7FFFFFFFF8LL);
    v88 = 4LL;
    do
    {
      *v86++ = v87;
      v87 = MmPteBase + ((v87 >> 9) & 0x7FFFFFFFF8LL);
      --v88;
    }
    while ( v88 );
    v89 = 3;
    LODWORD(v5037) = FsRtlUninitializeSmallMcb_OffsetFromINITKDBG;
    v90 = 0;
    do
    {
      v91 = v89;
      if ( v90 )
        goto LABEL_197;
      if ( !v89 )
        break;
      if ( (*(_DWORD *)v5510[v89] & 0x80) != 0 )
      {
        --v89;
        v90 = 1;
        v91 = v89;
LABEL_197:
        v5510[v89] = 0LL;
      }
      --v89;
    }
    while ( v91 );
    FsRtlUninitializeSmallMcb_OffsetFromINITKDBG = (unsigned int)v5037;
    LODWORD(v92) = 4;
    v93 = v5024;
    do
    {
      v92 = (unsigned int)(v92 - 1);
      v94 = v5510[v92];
      v5025 = v94;
      if ( !v94 )
        break;
      v95 = 0;
      if ( HIDWORD(P[1]) )
      {
        do
        {
          if ( v94 == *((_QWORD *)P[0] + v95) )
            break;
          ++v95;
        }
        while ( v95 < HIDWORD(P[1]) );
        v93 = v5024;
      }
      if ( v95 == HIDWORD(P[1]) )
      {
        if ( HIDWORD(P[1]) == (_DWORD)Size )
        {
          LODWORD(Size) = 2 * Size + 64;
          v96 = __rdtsc();
          v97 = (__ROR8__(v96, 3) ^ v96) * (unsigned __int128)0x7010008004002001uLL;
          FunctionEntryAddr[3] = *((_QWORD *)&v97 + 1);
          v98 = (*((_QWORD *)&v97 + 1) ^ (unsigned __int64)v97) % 0xB;
          if ( (unsigned int)v98 > 5 )
          {
            v132 = v98 - 6;
            if ( v132 )
            {
              v133 = v132 - 1;
              if ( v133 )
              {
                v134 = v133 - 1;
                if ( v134 )
                {
                  if ( v134 == 1 )
                  {
                    TableSize[18] = -1333354875;
                  }
                  else
                  {
                    v135 = __rdtsc();
                    FunctionEntryAddr[4] = ((__ROR8__(v135, 3) ^ v135) * (unsigned __int128)0x7010008004002001uLL) >> 64;
                  }
                }
                else
                {
                  TableSize[19] = 1684422978;
                }
              }
              else
              {
                TableSize[20] = -2100910376;
              }
            }
            else
            {
              TableSize[21] = 1314342514;
            }
          }
          else if ( (*((_QWORD *)&v97 + 1) ^ (unsigned __int64)v97) % 0xB == 5 )
          {
            TableSize[17] = 680282605;
          }
          else if ( (_DWORD)v98 )
          {
            v99 = v98 - 1;
            if ( v99 )
            {
              v100 = v99 - 1;
              if ( v100 )
              {
                if ( v100 == 1 )
                  TableSize[13] = -1474152136;
                else
                  TableSize[12] = 1728537748;
              }
              else
              {
                TableSize[14] = -2051698419;
              }
            }
            else
            {
              TableSize[15] = -1297272415;
            }
          }
          else
          {
            TableSize[16] = -795291432;
          }
          v136 = (char *)ExAllocatePool2(0x40uLL);
          if ( !v136 )
          {
LABEL_6576:
            TableSize[22] = -402653175;
            KeBugCheckEx(__ROL4__(-402653175, 101), 0x1BuLL, 0LL, 0LL, 0LL);
          }
          v137 = P[0];
          if ( P[0] )
          {
            v138 = v136;
            v139 = 8 * HIDWORD(P[1]);
            if ( (unsigned int)(8 * HIDWORD(P[1])) >= 8 )
            {
              v140 = (unsigned __int64)v139 >> 3;
              do
              {
                v139 -= 8;
                *(_QWORD *)v138 = *v137++;
                v138 += 8;
                --v140;
              }
              while ( v140 );
              v93 = v5024;
            }
            if ( v139 )
            {
              v141 = v138 - (char *)v137;
              do
              {
                *((_BYTE *)v137 + v141) = *(_BYTE *)v137;
                v137 = (_QWORD *)((char *)v137 + 1);
                --v139;
              }
              while ( v139 );
              v93 = v5024;
            }
            ExFreePool(P[0]);
          }
          v94 = v5025;
          LODWORD(P[1]) = Size;
          P[0] = v136;
        }
        v142 = HIDWORD(P[1]);
        ++HIDWORD(P[1]);
        HIDWORD(v5508) += 16;
        *((_QWORD *)P[0] + v142) = v94;
      }
    }
    while ( (_DWORD)v92 );
    v85 = v93 + 4096;
    v5024 = v85;
  }
  while ( v85 < (unsigned __int64)&qword_140E00750 );
  LODWORD(v5508) = (_DWORD)v5057;
  //*6*-- Save PTE --*6*//

  /*
  그래서, 이제 지금까지의 PteSavingConteSizext를 알려주자면
  PteSavingContext:
    +0x0 = PVOID* PteAddressList = ...
    +0x8 = ULONG Limit = 0x40
    +0xC = ULONG Count = 0x6
    +0x10 = ULONG RoutineCount = 0x10
    +0x14 = ULONG SumSize = 0x1c8f
  */

  _disable();
  v143 = 0;
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  v144 = 0;
  if ( !bIsSystemOnHv2 ) // if it is not on Hypervisor..
  {
    v144 = v5043;
    v143 = HIDWORD(v5508) + 8 + 16 * (_DWORD)v5057;
  }

  LODWORD(Size) = v144;
  LODWORD(v5057) = v143 + FunctionStartRVA; // Size?
  LODWORD(PgContextSize) = v144 + v143 + 2792; // HypervisorSize?
  /*
  SizeResult 는 다음과 같은 연산에 의한 사이즈 입니다.
    CriticalInformaiton.NestingSize
        CriticalRoutine 15(0xf)개에 대한 루틴 크기와 HaliHaltSystem 포인터 크기의 합
        CriticalInformation.CriticalRoutinePteList 개수를 의미하는 CurrentArrayCount * 0x10
    CriticalInformationSize
        NestingSize + RoutineCount * 0x10
    FixPgContextSize
        CriticalInformationSize + 0xAA8
    SizeResult
        FixPgContextSize + VirtualSize_INITKDBG
  */
  v145 = __rdtsc();
  v146 = __ROR8__(v145, 3);
  v5305 = ((v146 ^ v145) * (unsigned __int128)0x7010008004002001uLL) >> 64;
  v147 = PgContextSize + (((67117057 * (v146 ^ v145)) ^ v5305) & 0x7FF) + 0x100000;
  v148 = __rdtsc();
  v149 = (__ROR8__(v148, 3) ^ v148) * (unsigned __int128)0x7010008004002001uLL;
  v5306 = *((_QWORD *)&v149 + 1);
  v150 = ((unsigned __int64)v149 ^ *((_QWORD *)&v149 + 1)) % 0xB;
  if ( (unsigned int)v150 > 5 )
  {
    switch ( (_DWORD)v150 )
    {
      case 6:
        TableSize[32] = __ROL4__(1464235086, 24) ^ 6;
        break;
      case 7:
        TableSize[31] = __ROR4__(1666411585, 7);
        break;
      case 8:
        TableSize[30] = __ROL4__(1113876033, 8);
        break;
      case 9:
        TableSize[29] = __ROL4__(1480806214, 33) ^ 9;
        break;
      default:
        v151 = __rdtsc();
        v5307 = ((__ROR8__(v151, 3) ^ v151) * (unsigned __int128)0x7010008004002001uLL) >> 64;
        break;
    }
  }
  else if ( (_DWORD)v150 == 5 )
  {
    TableSize[28] = __ROL4__(1766089295, 5);
  }
  else if ( (_DWORD)v150 )
  {
    switch ( (_DWORD)v150 )
    {
      case 1:
        TableSize[26] = __ROR4__(1700422467, 1);
        break;
      case 2:
        TableSize[25] = __ROL4__(1634559043, 2);
        break;
      case 3:
        TableSize[24] = __ROL4__(1920421956, 15) ^ 3;
        break;
      default:
        TableSize[23] = __ROR4__(1886800198, v150);
        break;
    }
  }
  else
  {
    TableSize[27] = __ROL4__(1665295171, 6);
  }
  v152 = __rdtsc();
  v153 = __ROR8__(v152, 3);
  v5311 = ((v153 ^ v152) * (unsigned __int128)0x7010008004002001uLL) >> 64;
  v154 = ((67117057 * (v153 ^ v152)) ^ v5311) & 0x7FF;
  v155 = __rdtsc();
  v156 = (__ROR8__(v155, 3) ^ v155) * (unsigned __int128)0x7010008004002001uLL;
  v5323 = *((_QWORD *)&v156 + 1);
  v157 = (*((_QWORD *)&v156 + 1) ^ (unsigned __int64)v156) % (unsigned int)(v154 + 1);
  PgContext0 = ExAllocatePool2(0x82uLL);
  // First try: 0x11CD3A bytes allocation.
  // 0xFFFFBF0DB1010000
  // v157 -> 0x000000000000036B
  // v154 -> 0x7CB
  v5024 = PgContext0;
  if ( PgContext0 ) // If allocated:
  {
    v160 = v157;
    v161 = (_QWORD *)PgContext0;
    if ( (unsigned int)v157 >= 8 ) // Random value is upper than 8:
    {
      v162 = (unsigned __int64)(unsigned int)v157 >> 3; // Something
      do
      {
        v163 = __rdtsc();
        v160 -= 8;
        v164 = (__ROR8__(v163, 3) ^ v163) * (unsigned __int128)0x7010008004002001uLL;
        v5363 = *((_QWORD *)&v164 + 1);
        *v161++ = v164 ^ *((_QWORD *)&v164 + 1); // Random value what
        --v162;
      }
      while ( v162 );
      PgContext0 = v5024;
    }
    if ( v160 )
    {
      v165 = __rdtsc();
      v166 = (__ROR8__(v165, 3) ^ v165) * (unsigned __int128)0x7010008004002001uLL;
      v5364 = *((_QWORD *)&v166 + 1);
      v167 = v166 ^ *((_QWORD *)&v166 + 1);
      do
      {
        *(_BYTE *)v161 = v167;
        v161 = (_QWORD *)((char *)v161 + 1);
        v167 >>= 8;
        --v160;
      }
      while ( v160 );
    }
    // Random [v157] bytes are filled with random values.

    v168 = v154 - v157;
    v169 = (_QWORD *)(PgContext0 + (unsigned int)v157 + v147);
    if ( v168 >= 8 )
    {
      v170 = (unsigned __int64)v168 >> 3;
      do
      {
        v171 = __rdtsc();
        v168 -= 8;
        v172 = (__ROR8__(v171, 3) ^ v171) * (unsigned __int128)0x7010008004002001uLL;
        v5367 = *((_QWORD *)&v172 + 1);
        *v169++ = v172 ^ *((_QWORD *)&v172 + 1);
        --v170;
      }
      while ( v170 );
      PgContext0 = v5024;
    }
    if ( v168 )
    {
      v173 = __rdtsc();
      v174 = (__ROR8__(v173, 3) ^ v173) * (unsigned __int128)0x7010008004002001uLL;
      v5376[1] = *((_QWORD *)&v174 + 1);
      v175 = v174 ^ *((_QWORD *)&v174 + 1);
      do
      {
        *(_BYTE *)v169 = v175;
        v169 = (_QWORD *)((char *)v169 + 1);
        v175 >>= 8;
        --v168;
      }
      while ( v168 );
    }
    // Now the rest of the bytes are filled with random values.
    // == PgContext0[:v157], PgContext0[v154-v157:] = Random Values
    PgContextReal = (_OWORD *)(PgContext0 + (unsigned int)v157);
  }
  else
  {
    PgContextReal = 0LL;
    v5024 = v5362;
  }
  v5025 = (ULONG_PTR)PgContextReal;
  if ( !PgContextReal )
    return 0;
  PgSize_c_2792 = PgContextSize;
  memset_0(PgContextReal, 0, (unsigned int)(PgContextSize + 0x100000));
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  v177 = *((_DWORD *)PgContextReal + 630) & 0xF7FFFFFF | (bIsSystemOnHv2 != 0 ? 0x8000000 : 0);
  *((_DWORD *)PgContextReal + 630) = v177;
  // Hypervisor bit = + 630, + 631
  if ( bIsSystemOnHv2 )
  {
    *((_DWORD *)PgContextReal + 630) = v177 | 0x4000000;
    *((_DWORD *)PgContextReal + 631) |= 0x2000u;
  }
  IsKernelCetEnabled = KeIsKernelCetEnabled();
  v179 = 0LL;
  v180 = (IsKernelCetEnabled != 0) | *((_DWORD *)PgContextReal + 631) & 0xFFFFFFFE;
  *((_DWORD *)PgContextReal + 631) = v180;
  if ( __2c )
    *((_DWORD *)PgContextReal + 631) = v180 | 0x2000;
  if ( !bIsSystemOnHv2 ) // Not on HV then
  {
    PgC_0 = (char *)PgContextReal + 2792; // (DWORD*) PgContextReal + 698
    CriticalRoutines[0] = (__int64)off_140E00748;
    PgC_0_1 = (unsigned int *)PgContextReal + 698;
    *(_OWORD *)v5512 = 0LL;
    v5513 = 0LL;
    LODWORD(v5037) = 0;
    LODWORD(v5043) = 0;
    PgC_0_2 = (char *)PgContextReal + 2792;
    LODWORD(v5040) = 0;
    while ( 1 )
    {
      v182 = CriticalRoutines[(unsigned int)v179];
      v183 = RtlLookupFunctionTable(v182, &v5545, v5070);
      v5543 = v183;
      if ( v183 )
        break;
      v190 = v5547;
LABEL_368:
      v191 = v5043;
LABEL_369:
      if ( v183 && v183 != v5546 )
      {
        if ( !v5548 )
        {
          while ( 1 )
          {
            v197 = v183;
            v198 = RtlpConvertFunctionEntry(v183, v5545);
            v199 = RtlpSameFunction(v198, v5545, v5542);
            v183 = v5543 + 12;
            v5543 += 12LL;
            if ( v199 )
              break;
            if ( v183 == v5546 )
              goto LABEL_384;
          }
          *v5547 = v197;
          goto LABEL_413;
        }
        if ( v5544 )
        {
          if ( v5549 )
          {
            v192 = *(_DWORD *)(v5549 + 4);
            if ( (v192 & 1) != 0 )
            {
              *v190 = v5545 + (v192 & 0xFFFFFFFE);
              v5549 = 0LL;
            }
            else
            {
              v193 = (unsigned int)(v5551 + v192);
              v194 = (unsigned int)v193;
              v195 = v193 + 4;
              if ( v195 < v194 || v195 > v5550 )
              {
                v5070[10] = -402653175;
                KeBugCheckEx(__ROL4__(-402653175, 101), 0x12uLL, v5548, v5545, v194);
              }
              v196 = *(_DWORD *)(v194 + v5548);
              v5551 += 4;
              v5549 &= -(__int64)((v196 & 1) != 0);
              if ( (v196 & 1) != 0 )
                v196 &= ~1u;
              *v190 = v5545 + v196;
            }
          }
          else
          {
            *v190 = v5544;
            v5544 = 0LL;
          }
LABEL_413:
          v216 = *(unsigned int *)v5211[0];
          v217 = *(_DWORD *)(v5211[0] + 4LL) - v216;
          v218 = v5045 + v216;
          if ( PgC_0 )
          {
            v219 = 2LL * v191;
            *(_DWORD *)&PgC_0[8 * v219 + 16] = v217; // Function Size
            *(_QWORD *)&PgC_0[8 * v219 + 8] = v218; // Function Start
          }
          HIDWORD(v5513) += v217;
          LODWORD(v5043) = v191 + 1;
          v220 = v218 & 0xFFFFFFFFFFFFF000uLL;
          v5059 = v218 & 0xFFFFFFFFFFFFF000uLL;
          v5060 = (PKTIMER)(v218 + v217);
          while ( 1 )
          {
            v221 = v5514;
            v222 = 4LL;
            v223 = MmPteBase + ((v220 >> 9) & 0x7FFFFFFFF8LL);
            do
            {
              *v221++ = v223;
              v223 = MmPteBase + ((v223 >> 9) & 0x7FFFFFFFF8LL);
              --v222;
            }
            while ( v222 );
            v224 = 3;
            v225 = 0;
            do
            {
              v226 = v224;
              if ( v225 )
                goto LABEL_423;
              if ( !v224 )
                break;
              if ( (*(_DWORD *)v5514[v224] & 0x80) != 0 )
              {
                --v224;
                v225 = 1;
                v226 = v224;
LABEL_423:
                v5514[v224] = 0LL;
              }
              --v224;
            }
            while ( v226 );
            PgContextReal = (_OWORD *)v5025;
            LODWORD(v227) = 4;
            v228 = v5059;
            do
            {
              v227 = (unsigned int)(v227 - 1);
              LODWORD(v5059) = v227;
              v229 = (struct _KTIMER *)v5514[v227];
              Timer = v229;
              if ( !v229 )
                break;
              v230 = 0;
              if ( HIDWORD(v5512[1]) )
              {
                do
                {
                  if ( v229 == *((struct _KTIMER **)v5512[0] + v230) )
                    break;
                  ++v230;
                }
                while ( v230 < HIDWORD(v5512[1]) );
                PgContextReal = (_OWORD *)v5025;
              }
              if ( v230 == HIDWORD(v5512[1]) )
              {
                if ( HIDWORD(v5512[1]) == (_DWORD)v5040 )
                {
                  LODWORD(v5040) = 2 * v5040 + 64;
                  v231 = __rdtsc();
                  v232 = (__ROR8__(v231, 3) ^ v231) * (unsigned __int128)0x7010008004002001uLL;
                  v5211[1] = *((_QWORD *)&v232 + 1);
                  v233 = ((unsigned __int64)v232 ^ *((_QWORD *)&v232 + 1)) % 0xB;
                  if ( (unsigned int)v233 > 5 )
                  {
                    v236 = v233 - 6;
                    if ( v236 )
                    {
                      v237 = v236 - 1;
                      if ( v237 )
                      {
                        v238 = v237 - 1;
                        if ( v238 )
                        {
                          if ( v238 == 1 )
                          {
                            v5070[6] = -1333354875;
                          }
                          else
                          {
                            v239 = __rdtsc();
                            v5211[2] = ((__ROR8__(v239, 3) ^ v239) * (unsigned __int128)0x7010008004002001uLL) >> 64;
                          }
                        }
                        else
                        {
                          v5070[7] = 1684422978;
                        }
                      }
                      else
                      {
                        v5070[8] = -2100910376;
                      }
                    }
                    else
                    {
                      v5070[9] = 1314342514;
                    }
                  }
                  else if ( (_DWORD)v233 == 5 )
                  {
                    v5070[5] = 680282605;
                  }
                  else if ( (_DWORD)v233 )
                  {
                    v234 = v233 - 1;
                    if ( v234 )
                    {
                      v235 = v234 - 1;
                      if ( v235 )
                      {
                        if ( v235 == 1 )
                          v5070[2] = -1474152136;
                        else
                          v5070[1] = 1728537748;
                      }
                      else
                      {
                        v5070[3] = -2051698419;
                      }
                    }
                    else
                    {
                      v5070[4] = -1297272415;
                    }
                  }
                  else
                  {
                    CompressFragmentWorkSpaceSize[1] = -795291432;
                  }
                  v240 = ExAllocatePool2(0x40uLL);
                  v241 = (void *)v240;
                  if ( !v240 )
                    goto LABEL_6578;
                  v242 = v5512[0];
                  if ( v5512[0] )
                  {
                    v243 = (char *)v240;
                    v244 = 8 * HIDWORD(v5512[1]);
                    if ( (unsigned int)(8 * HIDWORD(v5512[1])) >= 8 )
                    {
                      v245 = (unsigned __int64)v244 >> 3;
                      do
                      {
                        v244 -= 8;
                        *(_QWORD *)v243 = *v242++;
                        v243 += 8;
                        --v245;
                      }
                      while ( v245 );
                      PgContextReal = (_OWORD *)v5025;
                      v229 = Timer;
                    }
                    if ( v244 )
                    {
                      v246 = v243 - (char *)v242;
                      do
                      {
                        *((_BYTE *)v242 + v246) = *(_BYTE *)v242;
                        v242 = (_QWORD *)((char *)v242 + 1);
                        --v244;
                      }
                      while ( v244 );
                      PgContextReal = (_OWORD *)v5025;
                    }
                    ExFreePool(v5512[0]);
                  }
                  LODWORD(v227) = v5059;
                  LODWORD(v5512[1]) = v5040;
                  v5512[0] = v241;
                }
                v247 = HIDWORD(v5512[1]);
                ++HIDWORD(v5512[1]);
                HIDWORD(v5513) += 16;
                *((_QWORD *)v5512[0] + v247) = v229;
              }
            }
            while ( (_DWORD)v227 );
            v220 = v228 + 4096;
            v5059 = v220;
            if ( v220 >= (unsigned __int64)v5060 )
            {
              v191 = v5043;
              PgC_0 = PgC_0_2;
              v190 = v5547;
              v183 = v5543;
              LODWORD(v5513) = v5043;
              goto LABEL_369;
            }
          }
        }
      }
LABEL_384:
      LODWORD(v179) = (_DWORD)v5037 + 1;
      LODWORD(v5037) = v179;
      if ( (unsigned int)v179 >= 0xF )
      {
        if ( PgC_0 )
        {
          v200 = 2LL * v191;
          *(_DWORD *)&PgC_0[8 * v200 + 16] = 8;
          *(_QWORD *)&PgC_0[8 * v200 + 8] = &off_140E00748;
        }
        HIDWORD(v5513) += 8;
        v179 = (unsigned __int64)&off_140E00748 & 0xFFFFFFFFFFFFF000uLL;
        LODWORD(v5059) = v191 + 1;
        Timer = (PKTIMER)((unsigned __int64)&off_140E00748 & 0xFFFFFFFFFFFFF000uLL);
        while ( 1 )
        {
          v201 = v179 >> 9;
          v202 = v5515;
          v203 = MmPteBase + (v201 & 0x7FFFFFFFF8LL);
          v204 = 4LL;
          do
          {
            *v202++ = v203;
            v203 = MmPteBase + ((v203 >> 9) & 0x7FFFFFFFF8LL);
            --v204;
          }
          while ( v204 );
          LODWORD(v5037) = FsRtlUninitializeSmallMcb_OffsetFromINITKDBG;
          v205 = 3;
          v206 = 0;
          do
          {
            v207 = v205;
            if ( v206 )
              goto LABEL_395;
            if ( !v205 )
              break;
            if ( (*(_DWORD *)v5515[v205] & 0x80) != 0 )
            {
              --v205;
              v206 = 1;
              v207 = v205;
LABEL_395:
              v5515[v205] = 0LL;
            }
            --v205;
          }
          while ( v207 );
          PgContextReal = (_OWORD *)v5025;
          LODWORD(v208) = 4;
          FsRtlUninitializeSmallMcb_OffsetFromINITKDBG = (unsigned int)v5037;
          do
          {
            v208 = (unsigned int)(v208 - 1);
            v209 = (struct _KTIMER *)v5515[v208];
            v5060 = v209;
            if ( !v209 )
              break;
            v210 = 0;
            if ( HIDWORD(v5512[1]) )
            {
              do
              {
                if ( v209 == *((struct _KTIMER **)v5512[0] + v210) )
                  break;
                ++v210;
              }
              while ( v210 < HIDWORD(v5512[1]) );
              PgContextReal = (_OWORD *)v5025;
            }
            if ( v210 == HIDWORD(v5512[1]) )
            {
              if ( HIDWORD(v5512[1]) == (_DWORD)v5040 )
              {
                LODWORD(v5040) = 2 * v5040 + 64;
                v211 = __rdtsc();
                v212 = (__ROR8__(v211, 3) ^ v211) * (unsigned __int128)0x7010008004002001uLL;
                v5211[3] = *((_QWORD *)&v212 + 1);
                v213 = ((unsigned __int64)v212 ^ *((_QWORD *)&v212 + 1)) % 0xB;
                if ( (unsigned int)v213 > 5 )
                {
                  v248 = v213 - 6;
                  if ( v248 )
                  {
                    v249 = v248 - 1;
                    if ( v249 )
                    {
                      v250 = v249 - 1;
                      if ( v250 )
                      {
                        if ( v250 == 1 )
                        {
                          v5070[17] = -1333354875;
                        }
                        else
                        {
                          v251 = __rdtsc();
                          v5211[4] = ((__ROR8__(v251, 3) ^ v251) * (unsigned __int128)0x7010008004002001uLL) >> 64;
                        }
                      }
                      else
                      {
                        v5070[18] = 1684422978;
                      }
                    }
                    else
                    {
                      v5070[19] = -2100910376;
                    }
                  }
                  else
                  {
                    v5070[20] = 1314342514;
                  }
                }
                else if ( (_DWORD)v213 == 5 )
                {
                  v5070[16] = 680282605;
                }
                else if ( (_DWORD)v213 )
                {
                  v214 = v213 - 1;
                  if ( v214 )
                  {
                    v215 = v214 - 1;
                    if ( v215 )
                    {
                      if ( v215 == 1 )
                        v5070[12] = -1474152136;
                      else
                        v5070[11] = 1728537748;
                    }
                    else
                    {
                      v5070[13] = -2051698419;
                    }
                  }
                  else
                  {
                    v5070[14] = -1297272415;
                  }
                }
                else
                {
                  v5070[15] = -795291432;
                }
                v252 = ExAllocatePool2(0x40uLL);
                v253 = (void *)v252;
                if ( !v252 )
                {
LABEL_6578:
                  v5070[21] = -402653175;
                  KeBugCheckEx(__ROL4__(-402653175, 101), 0x1BuLL, (ULONG_PTR)PgContextReal, (ULONG_PTR)PgContextReal + 2792, 1uLL);
                }
                v254 = v5512[0];
                if ( v5512[0] )
                {
                  v255 = (char *)v252;
                  v256 = 8 * HIDWORD(v5512[1]);
                  if ( (unsigned int)(8 * HIDWORD(v5512[1])) >= 8 )
                  {
                    v257 = (unsigned __int64)v256 >> 3;
                    do
                    {
                      v256 -= 8;
                      *(_QWORD *)v255 = *v254++;
                      v255 += 8;
                      --v257;
                    }
                    while ( v257 );
                    PgContextReal = (_OWORD *)v5025;
                    v209 = v5060;
                  }
                  if ( v256 )
                  {
                    v258 = v255 - (char *)v254;
                    do
                    {
                      *((_BYTE *)v254 + v258) = *(_BYTE *)v254;
                      v254 = (_QWORD *)((char *)v254 + 1);
                      --v256;
                    }
                    while ( v256 );
                    PgContextReal = (_OWORD *)v5025;
                  }
                  ExFreePool(v5512[0]);
                }
                v5512[0] = v253;
                LODWORD(v5512[1]) = v5040;
              }
              v259 = HIDWORD(v5512[1]);
              ++HIDWORD(v5512[1]);
              HIDWORD(v5513) += 16;
              *((_QWORD *)v5512[0] + v259) = v209;
            }
          }
          while ( (_DWORD)v208 );
          v179 = (unsigned __int64)&Timer[64];
          Timer = (PKTIMER)v179;
          if ( v179 >= (unsigned __int64)&qword_140E00750 )
          {
            v260 = v5059;
            v261 = (unsigned int *)PgContextReal + 698;
            LODWORD(v5513) = v5059;
            if ( PgContextReal != (_OWORD *)-2792LL )
            {
              v262 = HIDWORD(v5512[1]);
              v179 = (unsigned __int64)(PgContextReal + 175);
              *((_DWORD *)PgContextReal + 699) = HIDWORD(v5512[1]);
              v263 = (unsigned __int64)&PgContextReal[v260 + 175];
              v264 = (char *)v263;
              if ( v262 )
              {
                v265 = (_QWORD **)v5512[0];
                v266 = v262;
                do
                {
                  v267 = *v265++;
                  *(_QWORD *)v264 = v267;
                  *((_QWORD *)v264 + 1) = *v267;
                  v264 += 16;
                  --v266;
                }
                while ( v266 );
                PgContextReal = (_OWORD *)v5025;
                v260 = v5059;
              }
              if ( v179 < v263 )
              {
                do
                {
                  v268 = *(_DWORD *)(v179 + 8);
                  v269 = v264;
                  v270 = *(_QWORD **)v179;
                  if ( v268 >= 8 )
                  {
                    v271 = (unsigned __int64)v268 >> 3;
                    do
                    {
                      v268 -= 8;
                      *(_QWORD *)v269 = *v270++;
                      v269 += 8;
                      --v271;
                    }
                    while ( v271 );
                  }
                  if ( v268 )
                  {
                    v272 = v269 - (char *)v270;
                    do
                    {
                      *((_BYTE *)v270 + v272) = *(_BYTE *)v270;
                      v270 = (_QWORD *)((char *)v270 + 1);
                      --v268;
                    }
                    while ( v268 );
                  }
                  v273 = *(unsigned int *)(v179 + 8);
                  v179 += 16LL;
                  v264 += v273;
                }
                while ( v179 < v263 );
                v260 = v5513;
                PgContextReal = (_OWORD *)v5025;
                v261 = PgC_0_1;
              }
              *v261 = v260;
            }
            PgSize_c_2792 = PgContextSize;
            goto LABEL_515;
          }
        }
      }
    }

    // Save PTEs in PG context..


    v184 = (_DWORD *)vUncompressedBufPool2;
    v5548 = 0LL;
    if ( vUncompressedBufPool2 && ntoskrnlexe_Base == v5545 )
    {
      v5548 = vUncompressedBufPool2;
      v5549 = 0LL;
      v5550 = v5481;
      v5551 = 0;
      v185 = RtlLookupFunctionEntry(v182, &v5545, 0LL);
      v5544 = v185;
      if ( !v185 )
        goto LABEL_363;
      v186 = v185 - v5545;
      v187 = 0;
      v188 = *v184 - 1;
      v189 = 0LL;
      if ( v188 < 0 )
      {
LABEL_365:
        v74 = v188 < v187;
        v183 = v5543;
        if ( !v74 )
          v5549 = (unsigned __int64)&v184[2 * v189 + 2];
      }
      else
      {
        do
        {
          v189 = (unsigned int)((v188 + v187) >> 1);
          if ( v186 - v184[2 * v189 + 2] >= 0 )
          {
            if ( v186 - v184[2 * v189 + 2] <= 0 )
              goto LABEL_365;
            v187 = v189 + 1;
          }
          else
          {
            if ( !(_DWORD)v189 )
              break;
            v188 = v189 - 1;
          }
        }
        while ( v188 >= v187 );
LABEL_363:
        v183 = v5543;
      }
    }
    v190 = v5211;
    v5542 = v182;
    v5547 = v5211;
    v5070[0] /= 0xCu;
    v5045 = v5545;
    v5546 = v183 + 12LL * v5070[0];
    goto LABEL_368;
  }
LABEL_515:
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  LOBYTE(v179) = 1;
  // BaseOfImage = NTOSKRNL.exe, MappedAsImage = TRUE, DirectoryEntry = 6, 
  v274 = (_DWORD *)RtlImageDirectoryEntryToData(0x140000000uLL, v179, 6LL, v5071);
  // Get Debug Entry.. I think?
  if ( v274 )
  {
    for ( j = &v274[7 * (v5071[0] / 0x1CuLL)]; v274 < j; v274 += 7 )
    {
      v276 = v274[3];
      if ( v276 == 10 )
      {
        v277 = (_DWORD *)(0x140000000LL + (unsigned int)v274[5]);
        v278 = &v277[(unsigned __int64)(unsigned int)v274[4] >> 2];
        while ( v277 < v278 )
        {
          if ( *v277 == 1346849024 )
            goto LABEL_530;
          ++v277;
        }
      }
      else if ( v276 == 13 )
      {
        v279 = (_DWORD *)(0x140000000LL + (unsigned int)v274[5]);
        if ( v279 != &v279[(unsigned __int64)(unsigned int)v274[4] >> 2] && *v279 == 1346849024 )
        {
LABEL_530:
          *((_DWORD *)PgContextReal + 631) |= 0x10000u;
          break;
        }
      }
    }
  }
  if ( __2e )
    *((_DWORD *)PgContextReal + 631) |= 0x4000u;
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  *((_DWORD *)PgContextReal + 513) = PgSize_c_2792;
  *((_DWORD *)PgContextReal + 665) = PgSize_c_2792 + 0x100000;
  *((_QWORD *)PgContextReal + 253) = v5024;
  *((_DWORD *)PgContextReal + 593) = v5020;
  // Set flags..

  *PgContextReal = *(_OWORD *)CmpAppendDllSection;
  qmemcpy(PgContextReal + 1, "H1Q H1Q(H1Q0H1Q8H1Q@H1QHH1QPH1QXH1Q`H1QhH1QpH1Qx", 48);
  PgContextReal[4] = *((_OWORD *)CmpAppendDllSection + 4);
  PgContextReal[5] = *((_OWORD *)CmpAppendDllSection + 5);
  PgContextReal[6] = *((_OWORD *)CmpAppendDllSection + 6);
  PgContextReal[7] = *((_OWORD *)CmpAppendDllSection + 7);
  PgContextReal[8] = *((_OWORD *)CmpAppendDllSection + 8);
  PgContextReal[9] = *((_OWORD *)CmpAppendDllSection + 9);
  PgContextReal[10] = *((_OWORD *)CmpAppendDllSection + 10);
  PgContextReal[11] = *((_OWORD *)CmpAppendDllSection + 11);
  *((_DWORD *)PgContextReal + 48) = *((_DWORD *)CmpAppendDllSection + 48);
  v280 = (int)v5057; // CriticalRoutinesSize

  *((_DWORD *)PgContextReal + 516) = (_DWORD)v5057 + FsRtlUninitializeSmallMcb_OffsetFromINITKDBG;
  // All section size from 
  *((_DWORD *)PgContextReal + 518) = v280 + Size; 
  *((_DWORD *)PgContextReal + 514) = v280 + sub_140B9EDF0_Offset;
  *((_DWORD *)PgContextReal + 515) = v280 + (_DWORD)v5022;
  *((_DWORD *)PgContextReal + 517) = v280 + sub_140B9FDF0_Offset;
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  *((_QWORD *)PgContextReal + 28) = strnicmp;
  *((_QWORD *)PgContextReal + 29) = KiFreezeDataTableEntry;
  *((_QWORD *)PgContextReal + 30) = ExAcquireResourceSharedLite;
  *((_QWORD *)PgContextReal + 31) = ExAcquireResourceExclusiveLite;
  *((_QWORD *)PgContextReal + 32) = ExAllocatePool2;
  *((_QWORD *)PgContextReal + 33) = ExFreePool;
  *((_QWORD *)PgContextReal + 34) = ExMapHandleToPointer;
  *((_QWORD *)PgContextReal + 35) = ExGetHandlePointer;
  *((_QWORD *)PgContextReal + 36) = ExQueueWorkItem;
  *((_QWORD *)PgContextReal + 37) = ExReleaseResourceLite;
  *((_QWORD *)PgContextReal + 38) = ExUnlockHandleTableEntry;
  *((_QWORD *)PgContextReal + 39) = ExAcquirePushLockExclusiveEx;
  *((_QWORD *)PgContextReal + 40) = ExReleasePushLockExclusiveEx;
  *((_QWORD *)PgContextReal + 41) = ExAcquirePushLockSharedEx;
  *((_QWORD *)PgContextReal + 42) = ExReleasePushLockSharedEx;
  *((_QWORD *)PgContextReal + 43) = KeAcquireInStackQueuedSpinLockAtDpcLevel;
  *((_QWORD *)PgContextReal + 44) = ExAcquireSpinLockSharedAtDpcLevel;
  *((_QWORD *)PgContextReal + 45) = KeBugCheckEx;
  *((_QWORD *)PgContextReal + 46) = KeDelayExecutionThread;
  *((_QWORD *)PgContextReal + 47) = KeEnterCriticalRegionThread;
  *((_QWORD *)PgContextReal + 48) = KeLeaveCriticalRegion;
  *((_QWORD *)PgContextReal + 49) = KeEnterGuardedRegion;
  *((_QWORD *)PgContextReal + 50) = KeLeaveGuardedRegion;
  *((_QWORD *)PgContextReal + 51) = KeReleaseInStackQueuedSpinLockFromDpcLevel;
  *((_QWORD *)PgContextReal + 52) = ExReleaseSpinLockSharedFromDpcLevel;
  *((_QWORD *)PgContextReal + 53) = KeRevertToUserGroupAffinityThread;
  *((_QWORD *)PgContextReal + 54) = KeProcessorGroupAffinity;
  *((_QWORD *)PgContextReal + 55) = KeInitializeAffinityEx2;
  *((_QWORD *)PgContextReal + 56) = KeInitializeEnumerationContext;
  *((_QWORD *)PgContextReal + 57) = KeEnumerateNextProcessor;
  *((_QWORD *)PgContextReal + 58) = KeCountSetBitsAffinityEx;
  *((_QWORD *)PgContextReal + 59) = &KeQueryAffinityProcess;
  *((_QWORD *)PgContextReal + 60) = KeSetSystemGroupAffinityThread;
  *((_QWORD *)PgContextReal + 61) = KeSetCoalescableTimer;
  *((_QWORD *)PgContextReal + 65) = RtlImageNtHeader;
  *((_QWORD *)PgContextReal + 68) = RtlSectionTableFromVirtualAddress;
  *((_QWORD *)PgContextReal + 66) = RtlLookupFunctionTableEx;
  *((_QWORD *)PgContextReal + 67) = RtlPcToFileHeader;
  *((_QWORD *)PgContextReal + 62) = ObfDereferenceObject;
  *((_QWORD *)PgContextReal + 63) = ObReferenceObjectByName;
  *((_QWORD *)PgContextReal + 64) = RtlImageDirectoryEntryToData;
  *((_QWORD *)PgContextReal + 69) = DbgPrint;
  *((_QWORD *)PgContextReal + 70) = MmAllocateIndependentPages;
  *((_QWORD *)PgContextReal + 71) = MmFreeIndependentPages;
  *((_QWORD *)PgContextReal + 72) = MmSetPageProtection;
  *((_QWORD *)PgContextReal + 78) = RtlLookupFunctionEntry;
  *((_QWORD *)PgContextReal + 79) = KeAcquireSpinLockRaiseToDpc;
  *((_QWORD *)PgContextReal + 80) = KeReleaseSpinLock;
  *((_QWORD *)PgContextReal + 81) = PsGetSessionById;
  *((_QWORD *)PgContextReal + 82) = PsGetNextSession;
  *((_QWORD *)PgContextReal + 83) = PsQuitNextSession;
  *((_QWORD *)PgContextReal + 84) = PsAttachSession;
  *((_QWORD *)PgContextReal + 85) = PsDetachSession;
  *((_QWORD *)PgContextReal + 86) = PsGetSessionIdEx;
  *((_QWORD *)PgContextReal + 87) = MmIsAddressValid;
  *((_QWORD *)PgContextReal + 88) = KeInsertQueueApc;
  *((_QWORD *)PgContextReal + 89) = KeWaitForSingleObject;
  *((_QWORD *)PgContextReal + 91) = ExReferenceCallBackBlock;
  *((_QWORD *)PgContextReal + 92) = ExGetCallBackBlockRoutine;
  *((_QWORD *)PgContextReal + 93) = &ExDereferenceCallBackBlock;
  *((_QWORD *)PgContextReal + 94) = sub_1404C23B0;
  *((_QWORD *)PgContextReal + 95) = PspEnumerateCallback;
  *((_QWORD *)PgContextReal + 96) = CmpEnumerateCallback;
  *((_QWORD *)PgContextReal + 97) = DbgEnumerateCallback;
  *((_QWORD *)PgContextReal + 98) = ExpEnumerateCallback;
  *((_QWORD *)PgContextReal + 99) = ExpGetNextCallback;
  *((_QWORD *)PgContextReal + 100) = xHalTimerWatchdogStop;
  *((_QWORD *)PgContextReal + 101) = KiSchedulerApcTerminate;
  *((_QWORD *)PgContextReal + 102) = KiSchedulerApc;
  *((_QWORD *)PgContextReal + 103) = xHalTimerWatchdogStop;
  *((_QWORD *)PgContextReal + 104) = sub_1404C3D10;
  *((_QWORD *)PgContextReal + 105) = MmAllocatePagesForMdlEx;
  *((_QWORD *)PgContextReal + 106) = MmAllocateMappingAddress;
  *((_QWORD *)PgContextReal + 107) = MmMapLockedPagesWithReservedMapping;
  *((_QWORD *)PgContextReal + 108) = MmUnmapReservedMapping;
  *((_QWORD *)PgContextReal + 109) = sub_1404D2C10;
  *((_QWORD *)PgContextReal + 110) = sub_1404D2C80;
  *((_QWORD *)PgContextReal + 111) = MmAcquireLoadLock;
  *((_QWORD *)PgContextReal + 112) = MmReleaseLoadLock;
  *((_QWORD *)PgContextReal + 113) = KeEnumerateQueueApc;
  *((_QWORD *)PgContextReal + 114) = KeIsApcRunningThread;
  *((_QWORD *)PgContextReal + 115) = &sub_1404C3BE0;
  *((_QWORD *)PgContextReal + 116) = PsAcquireProcessExitSynchronization;
  *((_QWORD *)PgContextReal + 117) = ObDereferenceProcessHandleTable;
  *((_QWORD *)PgContextReal + 118) = PsGetNextProcess;
  *((_QWORD *)PgContextReal + 119) = PsQuitNextProcessThread;
  *((_QWORD *)PgContextReal + 120) = PsGetNextProcessEx;
  *((_QWORD *)PgContextReal + 121) = PsIsSessionLeaderProcess;
  *((_QWORD *)PgContextReal + 122) = PsInvokeWin32Callout;
  *((_QWORD *)PgContextReal + 123) = MmEnumerateAddressSpaceAndReferenceImages;
  *((_QWORD *)PgContextReal + 124) = PsGetProcessProtection;
  *((_QWORD *)PgContextReal + 125) = PsGetProcessSignatureLevel;
  *((_QWORD *)PgContextReal + 126) = PsGetProcessSectionBaseAddress;
  *((_QWORD *)PgContextReal + 127) = SeCompareSigningLevels;
  *((_QWORD *)PgContextReal + 133) = RtlIsMultiSessionSku;
  *((_QWORD *)PgContextReal + 134) = KiEnumerateCallback;
  *((_QWORD *)PgContextReal + 135) = KeStackAttachProcess;
  *((_QWORD *)PgContextReal + 136) = KeUnstackDetachProcess;
  *((_QWORD *)PgContextReal + 137) = KeIpiGenericCall;
  *((_QWORD *)PgContextReal + 138) = sub_1404D2A60;
  *((_QWORD *)PgContextReal + 139) = MmGetPhysicalAddress;
  *((_QWORD *)PgContextReal + 140) = MmUnlockPages;
  *((_QWORD *)PgContextReal + 128) = KeComputeSha256;
  *((_QWORD *)PgContextReal + 129) = KeComputeParallelSha256;
  *((_QWORD *)PgContextReal + 130) = KeSetEvent;
  *((_QWORD *)PgContextReal + 141) = VslVerifyPage;
  *((_QWORD *)PgContextReal + 144) = PsLookupProcessByProcessId;
  *((_QWORD *)PgContextReal + 145) = PsGetProcessId;
  *((_QWORD *)PgContextReal + 146) = MmCheckProcessShadow;
  *((_QWORD *)PgContextReal + 147) = MmGetImageRetpolineCodePage;
  if ( a4 ) // Pointer to the structure from ExpLicenseWatchInitWorker (4% chance)
    *((_QWORD *)PgContextReal + 90) = *(_QWORD *)(a4 + 8);
  *((_QWORD *)PgContextReal + 131) = RtlpConvertFunctionEntry;
  *((_QWORD *)PgContextReal + 132) = RtlpLookupPrimaryFunctionEntry;
  *((_QWORD *)PgContextReal + 142) = KiGetInterruptObjectAddress;
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  *((_DWORD *)PgContextReal + 608) = PgSize_c_2792; // PgContextSize.. 2792
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  _disable();
  _enable();
  v281 = __rdtsc();
  v282 = (__ROR8__(v281, 3) ^ v281) * (unsigned __int128)0x7010008004002001uLL;
  v5211[5] = *((_QWORD *)&v282 + 1);
  if ( ((unsigned __int64)v282 ^ *((_QWORD *)&v282 + 1)) % 0xA >= 3 ) // random value is greater than 3 ->
  {
    LODWORD(v286) = 0; // it is set to 0
  }
  else
  {
    *((_DWORD *)PgContextReal + 594) = 4; // it is set to 4.. idk what
    v283 = __rdtsc();
    v284 = (__ROR8__(v283, 3) ^ v283) * (unsigned __int128)0x7010008004002001uLL;
    v5211[6] = *((_QWORD *)&v284 + 1);
    v285 = v284 ^ *((_QWORD *)&v284 + 1);
    *((_QWORD *)&v284 + 1) = (((unsigned __int64)v284 ^ *((_QWORD *)&v284 + 1))
                            * (unsigned __int128)0x2492492492492493uLL) >> 64;
    v286 = v285 - 7 * ((*((_QWORD *)&v284 + 1) + ((unsigned __int64)(v285 - *((_QWORD *)&v284 + 1)) >> 1)) >> 2);
  }
  *((_DWORD *)PgContextReal + 594) = v286; // also random value.
  if ( qword_1410065F0 > 0x1F )
  {
    v5071[1] = -402653175;
    KeBugCheckEx(__ROL4__(-402653175, 101), 3uLL, 0LL, qword_1410065F0, 0LL);
  }
  *((_DWORD *)PgContextReal + 630) = *((_DWORD *)PgContextReal + 630) & 0xFFFFC1FF | ((qword_1410065F0 & 0x1F) << 9);
  *((_DWORD *)PgContextReal + 606) = dword_140E0EEC0++;
  *((_QWORD *)PgContextReal + 260) = 0LL;
  *((char **)PgContextReal + 298) = VfExcludeSections[0];
  *((char **)PgContextReal + 299) = off_140E09F60[0];
  *((char **)PgContextReal + 300) = off_140E09F68[0];
  *((_QWORD *)PgContextReal + 301) = off_140E09F70;
  *((_BYTE *)PgContextReal + 2416) = 119;
  *((_BYTE *)PgContextReal + 2417) = 105;
  *((_BYTE *)PgContextReal + 2418) = 110;
  *((_BYTE *)PgContextReal + 2419) = 51;
  *((_BYTE *)PgContextReal + 2420) = 50;
  *((_BYTE *)PgContextReal + 2421) = 0;
  v287 = __rdtsc();
  v288 = (__ROR8__(v287, 3) ^ v287) * (unsigned __int128)0x7010008004002001uLL;
  v5211[7] = *((_QWORD *)&v288 + 1);
  v289 = v288 ^ *((_QWORD *)&v288 + 1);
  v290 = (((unsigned __int64)v288 ^ *((_QWORD *)&v288 + 1)) * (unsigned __int128)0x624DD2F1A9FBE77uLL) >> 64;
  if ( v289 - 1000 * ((v290 + ((unsigned __int64)(v289 - v290) >> 1)) >> 9) < 3 )
    *((_DWORD *)PgContextReal + 631) |= 0x800000u;
  *((_QWORD *)PgContextReal + 252) = KeGetPrcb(0LL, v290, 0x2492492492492493LL);
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  *((_DWORD *)PgContextReal + 531) = 0x140000 / a3; // Random value used to determine the maximum size to be checked
  *((_QWORD *)PgContextReal + 151) = &qword_140E0A560;
  *((_QWORD *)PgContextReal + 152) = &qword_140E0EEE8;
  *((_QWORD *)PgContextReal + 153) = &qword_140E0EEF0;
  *((_QWORD *)PgContextReal + 154) = &qword_140E0EEF8;
  *((_QWORD *)PgContextReal + 155) = PsInitialSystemProcess;
  *((_QWORD *)PgContextReal + 156) = KiWaitAlways;
  *((_QWORD *)PgContextReal + 157) = &KiEntropyTimingRoutine;
  *((_QWORD *)PgContextReal + 158) = &KiProcessListHead;
  *((_QWORD *)PgContextReal + 159) = &KiProcessListLock;
  *((_QWORD *)PgContextReal + 160) = ObpTypeObjectType;
  *((_QWORD *)PgContextReal + 161) = IoDriverObjectType;
  *((_QWORD *)PgContextReal + 162) = PsProcessType;
  *((_QWORD *)PgContextReal + 163) = &PsActiveProcessHead;
  *((_QWORD *)PgContextReal + 164) = &PsInvertedFunctionTable;
  *((_QWORD *)PgContextReal + 165) = &PsLoadedModuleList;
  *((_QWORD *)PgContextReal + 166) = &PsLoadedModuleResource;
  *((_QWORD *)PgContextReal + 167) = &PsLoadedModuleSpinLock;
  *((_QWORD *)PgContextReal + 168) = &PspActiveProcessLock;
  *((_QWORD *)PgContextReal + 169) = &PspCidTable;
  *((_QWORD *)PgContextReal + 170) = &ExpUuidLock;
  *((_QWORD *)PgContextReal + 171) = &AlpcpPortListLock;
  *((_QWORD *)PgContextReal + 172) = &KeServiceDescriptorTable;
  *((_QWORD *)PgContextReal + 173) = &KeServiceDescriptorTableShadow;
  *((_QWORD *)PgContextReal + 174) = &KeServiceDescriptorTableFilter;
  *((_QWORD *)PgContextReal + 175) = &VfThunksExtended;
  *((_QWORD *)PgContextReal + 176) = &PsWin32CallBack;
  *((_QWORD *)PgContextReal + 177) = &qword_140E0EEC8;
  *((_QWORD *)PgContextReal + 178) = &KiTableInformation;
  *((_QWORD *)PgContextReal + 179) = &HandleTableListHead;
  *((_QWORD *)PgContextReal + 180) = &HandleTableListLock;
  *((_QWORD *)PgContextReal + 181) = ObpKernelHandleTable;
  *((_QWORD *)PgContextReal + 182) = MmWriteableSharedUserData;
  *((_QWORD *)PgContextReal + 183) = KiWaitNever;
  *((_QWORD *)PgContextReal + 184) = &SeProtectedMapping;
  *((_QWORD *)PgContextReal + 186) = &KiStackProtectNotifyEvent;
  *((_QWORD *)PgContextReal + 187) = MmPteBase;
  *((_QWORD *)PgContextReal + 188) = PsNtosImageBase;
  *((_QWORD *)PgContextReal + 189) = PsHalImageBase;
  *((_QWORD *)PgContextReal + 190) = &KeNumberProcessors_0;
  TiASaved = (_OWORD *)((char *)PgContextReal + 1592);
  v292 = 2LL;
  *((_DWORD *)PgContextReal + 382) = KeDpcStackSize;
  *((_DWORD *)PgContextReal + 383) = KeExceptionStackSize;
  *((_QWORD *)PgContextReal + 194) = &MaxDataSize;
  *((_QWORD *)PgContextReal + 195) = &qword_140FC4A50;
  *((_QWORD *)PgContextReal + 196) = &RtlpInvertedFunctionTable;
  *((_QWORD *)PgContextReal + 185) = KiInterruptThunk;
  v293 = &_ti_a;
  do
  {
    *TiASaved = *(_OWORD *)v293;
    TiASaved[1] = *((_OWORD *)v293 + 1);
    TiASaved[2] = *((_OWORD *)v293 + 2);
    TiASaved[3] = *((_OWORD *)v293 + 3);
    TiASaved[4] = *((_OWORD *)v293 + 4);
    TiASaved[5] = *((_OWORD *)v293 + 5);
    TiASaved[6] = *((_OWORD *)v293 + 6);
    TiASaved += 8;
    v294 = *((_OWORD *)v293 + 7);
    v293 += 16;
    *(TiASaved - 1) = v294;
    --v292;
  }
  while ( v292 );
  *TiASaved = *(_OWORD *)v293;
  TiASaved[1] = *((_OWORD *)v293 + 1);
  TiASaved[2] = *((_OWORD *)v293 + 2);
  TiASaved[3] = *((_OWORD *)v293 + 3);
  TiASaved[4] = *((_OWORD *)v293 + 4);
  *((_QWORD *)TiASaved + 10) = v293[10];

  // KxUnexpectedInterrupt0는 “예상하지 못한 인터럽트(unexpected interrupt)가 발생했을 때 호출되는 기본 핸들러” 함수의 주소(또는 그 진입점)입니다.
  UnexpectedInterruptPtr = KxUnexpectedInterrupt0;
  if ( KiKvaShadow )
    UnexpectedInterruptPtr = KiIsrThunkShadow;
  *((_QWORD *)PgContextReal + 197) = UnexpectedInterruptPtr;
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  *((_DWORD *)PgContextReal + 522) = PgSize_c_2792; // PgS
  *((_DWORD *)PgContextReal + 669) = PgSize_c_2792;
  v296 = __rdtsc();
  v297 = (__ROR8__(v296, 3) ^ v296) * (unsigned __int128)0x7010008004002001uLL;
  v5211[8] = *((_QWORD *)&v297 + 1);
  v298 = ((unsigned __int64)v297 ^ *((_QWORD *)&v297 + 1)) % 0xB;
  if ( (unsigned int)v298 <= 5 )
  {
    if ( (_DWORD)v298 == 5 )
    {
      v301 = 5;
      v5077 = __ROL4__(1766089295, 5);
      v303 = v5077;
      goto LABEL_580;
    }
    if ( !(_DWORD)v298 )
    {
      v301 = 6;
      v5076 = __ROL4__(1665295171, 6);
      v302 = v5076;
      goto LABEL_579;
    }
    if ( (_DWORD)v298 != 1 )
    {
      if ( (_DWORD)v298 == 2 )
      {
        v301 = 2;
        v5074 = __ROL4__(1634559043, 2);
        v303 = v5074;
      }
      else
      {
        if ( (_DWORD)v298 != 3 )
        {
          v299 = ((unsigned __int64)v297 ^ *((_QWORD *)&v297 + 1)) % 0xB;
          v5072 = __ROR4__(1886800198, v298);
          v300 = v5072;
          goto LABEL_567;
        }
        v301 = 15;
        v5073 = __ROL4__(1920421956, 15) ^ 3;
        v302 = v5073;
LABEL_579:
        v303 = v298 ^ v302;
      }
LABEL_580:
      v304 = __ROR4__(v303, v301);
      goto LABEL_581;
    }
    v299 = 1;
    v5075 = __ROR4__(1700422467, 1);
    v300 = v5075;
LABEL_567:
    v304 = __ROL4__(v300, v299);
    goto LABEL_581;
  }
  switch ( (_DWORD)v298 )
  {
    case 6:
      v301 = 24;
      v5081 = __ROL4__(1464235086, 24) ^ 6;
      v302 = v5081;
      goto LABEL_579;
    case 7:
      v299 = 7;
      v5080 = __ROR4__(1666411585, 7);
      v300 = v5080;
      goto LABEL_567;
    case 8:
      v301 = 8;
      v5079 = __ROL4__(1113876033, 8);
      v303 = v5079;
      goto LABEL_580;
    case 9:
      v301 = 33;
      v5078 = __ROL4__(1480806214, 33) ^ 9;
      v302 = v5078;
      goto LABEL_579;
  }
  v305 = __rdtsc();
  v306 = __ROR8__(v305, 3);
  v5212 = ((v306 ^ v305) * (unsigned __int128)0x7010008004002001uLL) >> 64;
  v304 = ((((((((unsigned int)v5212 ^ (67117057 * ((unsigned int)v306 ^ (unsigned int)v305))) % 0x1A + 97) << 8) | ((((unsigned int)v5212 ^ (67117057 * ((unsigned int)v306 ^ (unsigned int)v305))) >> 5) % 0x1A + 65)) << 8) | ((((unsigned int)v5212 ^ (67117057 * ((unsigned int)v306 ^ (unsigned int)v305))) >> 10) % 0x1A + 97)) << 8) | ((((unsigned int)v5212 ^ (67117057 * ((unsigned int)v306 ^ (unsigned int)v305))) >> 15) % 0x1A + 65);
LABEL_581:
  *((_DWORD *)PgContextReal + 524) = v304; // random value
  v307 = __rdtsc();
  v308 = (__ROR8__(v307, 3) ^ v307) * (unsigned __int128)0x7010008004002001uLL;
  v5213 = *((_QWORD *)&v308 + 1);
  v309 = v308 ^ *((_QWORD *)&v308 + 1);
  *((_QWORD *)&v308 + 1) = (((unsigned __int64)v308 ^ *((_QWORD *)&v308 + 1)) * (unsigned __int128)0x410410410410411uLL) >> 64;
  *((_DWORD *)PgContextReal + 525) = v309
                          - 63
                          * ((*((_QWORD *)&v308 + 1) + ((unsigned __int64)(v309 - *((_QWORD *)&v308 + 1)) >> 1)) >> 5)
                          + 1; // random value 2
  *(_QWORD *)&v308 = __rdtsc();
  v310 = (__ROR8__(v308, 3) ^ (unsigned __int64)v308) * (unsigned __int128)0x7010008004002001uLL;
  v311 = 700 - PgSize_c_2792;
  v5214 = *((_QWORD *)&v310 + 1);
  *((_QWORD *)&v310 + 1) ^= v310;
  *((_QWORD *)PgContextReal + 263) = *((_QWORD *)&v310 + 1);
  if ( (DWORD2(v310) & 0x80000000) != 0 )
    v311 = 724 - PgSize_c_2792;
  v312 = *((_DWORD *)PgContextReal + 608) + v311;
  *((_DWORD *)PgContextReal + 608) = v312;
  *((_DWORD *)PgContextReal + 608) = v312 ^ 0xBC2A27DB; // random value
  v313 = __rdtsc();
  v314 = (__ROR8__(v313, 3) ^ v313) * (unsigned __int128)0x7010008004002001uLL;
  v5215 = *((_QWORD *)&v314 + 1);
  if ( ((unsigned __int64)v314 ^ *((_QWORD *)&v314 + 1)) % 0xA < 3 )
    *((_DWORD *)PgContextReal + 630) |= 4u;
  v315 = __rdtsc();
  v316 = (__ROR8__(v315, 3) ^ v315) * (unsigned __int128)0x7010008004002001uLL;
  v5216 = *((_QWORD *)&v316 + 1);
  if ( ((unsigned __int64)v316 ^ *((_QWORD *)&v316 + 1)) % 0xA < 3 )
    *((_DWORD *)PgContextReal + 630) |= 0x2000000u;
  enumDpcExecutionMethod1 = enumDpcExecutionMethod0;
  if ( enumDpcExecutionMethod0 == 7
    || (v318 = __rdtsc(),
        v319 = (__ROR8__(v318, 3) ^ v318) * (unsigned __int128)0x7010008004002001uLL,
        v5217 = *((_QWORD *)&v319 + 1),
        ((unsigned __int64)v319 ^ *((_QWORD *)&v319 + 1)) % 0xA < 2) )
  {
    *((_DWORD *)PgContextReal + 631) |= 8u;
  }
  v320 = __rdtsc();
  v321 = (__ROR8__(v320, 3) ^ v320) * (unsigned __int128)0x7010008004002001uLL;
  v5218 = *((_QWORD *)&v321 + 1);
  if ( !(((unsigned __int64)v321 ^ *((_QWORD *)&v321 + 1)) % 0xA) )
    *((_DWORD *)PgContextReal + 630) |= 0x4000u;
  v322 = __rdtsc();
  v323 = (__ROR8__(v322, 3) ^ v322) * (unsigned __int128)0x7010008004002001uLL;
  v5219 = *((_QWORD *)&v323 + 1);
  if ( ((unsigned __int64)v323 ^ *((_QWORD *)&v323 + 1)) % 0xA < 3 )
    *((_DWORD *)PgContextReal + 630) |= 0x200000u;
  // Set Random flag to +630

  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  v324 = __rdtsc();
  v325 = (__ROR8__(v324, 3) ^ v324) * (unsigned __int128)0x7010008004002001uLL;
  v5220 = *((_QWORD *)&v325 + 1);
  if ( !(((unsigned __int64)v325 ^ *((_QWORD *)&v325 + 1)) % 0xA) )
    *((_DWORD *)PgContextReal + 630) |= 0x4000000u;
  v326 = __rdtsc();
  v327 = (__ROR8__(v326, 3) ^ v326) * (unsigned __int128)0x7010008004002001uLL;
  v5221 = *((_QWORD *)&v327 + 1);
  if ( ((unsigned __int64)v327 ^ *((_QWORD *)&v327 + 1)) % 0xA < 3 )
    *((_DWORD *)PgContextReal + 630) |= 0x400000u;
  v328 = v5105;
  if ( a4 )
  {
    if ( (v5105 & 1) != 0 && enumDpcExecutionMethod0 != 4 )
    {
      v329 = __rdtsc();
      v330 = (__ROR8__(v329, 3) ^ v329) * (unsigned __int128)0x7010008004002001uLL;
      v5222 = *((_QWORD *)&v330 + 1);
      if ( ((unsigned __int64)v330 ^ *((_QWORD *)&v330 + 1)) % 0xA < 6 )
        *((_DWORD *)PgContextReal + 631) |= 2u;
    }
  }
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  v331 = __rdtsc();
  v332 = (__ROR8__(v331, 3) ^ v331) * (unsigned __int128)0x7010008004002001uLL;
  v5223 = *((_QWORD *)&v332 + 1);
  v333 = v332 ^ *((_QWORD *)&v332 + 1);
  *((_QWORD *)&v332 + 1) = (((unsigned __int64)v332 ^ *((_QWORD *)&v332 + 1)) * (unsigned __int128)0x47AE147AE147AE15uLL) >> 64;
  if ( v333 == 100 * ((*((_QWORD *)&v332 + 1) + ((unsigned __int64)(v333 - *((_QWORD *)&v332 + 1)) >> 1)) >> 6) )
    *((_DWORD *)PgContextReal + 631) |= 0x20000u;
  if ( (*((unsigned __int8 (**)(void))PgContextReal + 133))() )
    *((_DWORD *)PgContextReal + 631) |= 4u;
  if ( (unsigned int)HvlIsHypervisorPresent() )
    *((_DWORD *)PgContextReal + 631) |= 0x40000u;
  if ( (unsigned __int8)MiIsRetpolineEnabled() )
    *((_DWORD *)PgContextReal + 631) |= 0x100000u;
  v334 = __rdtsc();
  v335 = (__ROR8__(v334, 3) ^ v334) * (unsigned __int128)0x7010008004002001uLL;
  v5224 = *((_QWORD *)&v335 + 1);
  if ( !(((unsigned __int64)v335 ^ *((_QWORD *)&v335 + 1)) % 0xA) )
    *((_DWORD *)PgContextReal + 631) |= 0x80u;
  if ( enumDpcExecutionMethod0 == 7 )
  {
    v336 = *((_DWORD *)PgContextReal + 630) & 0xFFFFFFFB;
    *((_DWORD *)PgContextReal + 630) = v336;
    v336 &= ~0x2000000u;
    *((_DWORD *)PgContextReal + 630) = v336;
    *((_DWORD *)PgContextReal + 630) = v336 | 0x20000000;
  }
  if ( (int)KiSwInterruptPresent() >= 0 )
  {
    *((_DWORD *)PgContextReal + 630) |= 0x40000000u;
    *((_DWORD *)PgContextReal + 631) |= 0x2000u;
  }
  *((_QWORD *)PgContextReal + 347) = KeComputeParallelSha256StateSize(); // 137F
  v337 = __rdtsc();
  v338 = (__ROR8__(v337, 3) ^ v337) * (unsigned __int128)0x7010008004002001uLL;
  v5225 = *((_QWORD *)&v338 + 1);
  v339 = ((unsigned __int64)v338 ^ *((_QWORD *)&v338 + 1)) % 0xB;
  if ( (unsigned int)v339 > 5 )
  {
    switch ( (_DWORD)v339 )
    {
      case 6:
        v342 = 24;
        v5091 = __ROL4__(1464235086, 24) ^ 6;
        v345 = v5091;
        break;
      case 7:
        v340 = 7;
        v5090 = __ROR4__(1666411585, 7);
        v341 = v5090;
        goto LABEL_631;
      case 8:
        v342 = 8;
        v5089 = __ROL4__(1113876033, 8);
        v343 = v5089;
        goto LABEL_644;
      case 9:
        v342 = 33;
        v5088 = __ROL4__(1480806214, 33) ^ 9;
        v345 = v5088;
        break;
      default:
        v346 = __rdtsc();
        v347 = __ROR8__(v346, 3);
        v5226 = ((v347 ^ v346) * (unsigned __int128)0x7010008004002001uLL) >> 64;
        v348 = (67117057 * (v347 ^ v346)) ^ v5226;
        v344 = ((((((v348 % 0x1A + 97) << 8) | ((v348 >> 5)
                                              - 26
                                              * ((unsigned int)((1321528399 * (unsigned __int64)(v348 >> 5)) >> 32) >> 3)
                                              + 65)) << 8) | ((v348 >> 10) % 0x1A + 97)) << 8) | ((v348 >> 15) % 0x1A
                                                                                                + 65);
        goto LABEL_645;
    }
LABEL_643:
    v343 = v339 ^ v345;
    goto LABEL_644;
  }
  switch ( (_DWORD)v339 )
  {
    case 5:
      v342 = 5;
      v5087 = __ROL4__(1766089295, 5);
      v343 = v5087;
      break;
    case 0:
      v342 = 6;
      v5086 = __ROL4__(1665295171, 6);
      v345 = v5086;
      goto LABEL_643;
    case 1:
      v340 = 1;
      v5085 = __ROR4__(1700422467, 1);
      v341 = v5085;
LABEL_631:
      v344 = (unsigned int)__ROL4__(v341, v340);
      goto LABEL_645;
    case 2:
      v342 = 2;
      v5084 = __ROL4__(1634559043, 2);
      v343 = v5084;
      break;
    case 3:
      v342 = 15;
      v5083 = __ROL4__(1920421956, 15) ^ 3;
      v343 = v5083 ^ 3;
      break;
    default:
      v340 = ((unsigned __int64)v338 ^ *((_QWORD *)&v338 + 1)) % 0xB;
      v5082 = __ROR4__(1886800198, v339);
      v341 = v5082;
      goto LABEL_631;
  }
LABEL_644:
  v344 = (unsigned int)__ROR4__(v343, v342);
LABEL_645:
  // ExAllocatePool2(64, KeComputeParallelSha256StateSize, flags)
  ParallelSha256State = (*((__int64 (__fastcall **)(__int64, _QWORD, __int64))PgContextReal + 32))(64LL, *((_QWORD *)PgContextReal + 347), v344);
  //
  *((_QWORD *)PgContextReal + 346) = ParallelSha256State;
  if ( !ParallelSha256State )
    return 0;
  if ( __27 )
    goto LABEL_670;
  v350 = __rdtsc();
  v351 = (__ROR8__(v350, 3) ^ v350) * (unsigned __int128)0x7010008004002001uLL;
  v5227 = *((_QWORD *)&v351 + 1);
  v352 = ((unsigned __int64)v351 ^ *((_QWORD *)&v351 + 1)) % 0xB;
  if ( (unsigned int)v352 > 5 )
  {
    switch ( (_DWORD)v352 )
    {
      case 6:
        v5101 = __ROL4__(1464235086, 24) ^ 6;
        break;
      case 7:
        v5100 = __ROR4__(1666411585, 7);
        break;
      case 8:
        v5099 = __ROL4__(1113876033, 8);
        break;
      case 9:
        v5098 = __ROL4__(1480806214, 33) ^ 9;
        break;
      default:
        v353 = __rdtsc();
        v5228 = ((__ROR8__(v353, 3) ^ v353) * (unsigned __int128)0x7010008004002001uLL) >> 64;
        break;
    }
  }
  else if ( (_DWORD)v352 == 5 )
  {
    v5097 = __ROL4__(1766089295, 5);
  }
  else if ( (_DWORD)v352 )
  {
    switch ( (_DWORD)v352 )
    {
      case 1:
        v5095 = __ROR4__(1700422467, 1);
        break;
      case 2:
        v5094 = __ROL4__(1634559043, 2);
        break;
      case 3:
        v5093 = __ROL4__(1920421956, 15) ^ 3;
        break;
      default:
        v5092 = __ROR4__(1886800198, v352);
        break;
    }
  }
  else
  {
    v5096 = __ROL4__(1665295171, 6);
  }
  v354 = (_QWORD *)(*((__int64 (__fastcall **)(__int64))PgContextReal + 32))(64LL);
  __27 = (__int64)v354;
  if ( !v354 )
    return 0;
  *v354 = 0LL;
LABEL_670:
  *((_QWORD *)PgContextReal + 329) = __27;
  if ( (unsigned int)KiIsKernelCfgActive() )
    *((_DWORD *)PgContextReal + 631) |= 0x10u;
  if ( (unsigned int)KiAreCodePatchesAllowed(v356, v355) )
    *((_DWORD *)PgContextReal + 631) |= 0x40u;
  *((_DWORD *)PgContextReal + 534) = enumDpcExecutionMethod0;
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  _RAX = 2147483656LL;
  __asm { cpuid }
  v5453[3] = _RBX;
  v362 = (unsigned int)_RAX >> 8;
  *((_BYTE *)PgContextReal + 2368) = BYTE1(_RAX);// Largest Virtual and Physical Address sizes.
  v363 = *((_DWORD *)PgContextReal + 631);
  v5453[2] = _RAX;
  v5453[4] = _RCX;
  v5453[5] = _RDX;
  if ( (v363 & 1) == 0 )
  {
    v364 = __rdtsc();
    v365 = (__ROR8__(v364, 3) ^ v364) * (unsigned __int128)0x7010008004002001uLL;
    v5229 = *((_QWORD *)&v365 + 1);
    if ( ((unsigned __int64)v365 ^ *((_QWORD *)&v365 + 1)) % 0xA < 3 )
      *((_DWORD *)PgContextReal + 631) = v363 | 0x100;
  }
  if ( (unsigned __int8)v362 > 0x3Fu )
  {
    v5102 = -402653175;
    KeBugCheckEx(__ROL4__(-402653175, 101), 0LL, 0LL, 0LL, 0LL);
  }
  if ( (v328 & 1) != 0 )
  {
    v366 = &qword_140E0EF00;
    LODWORD(v5059) = (unsigned __int64)&qword_140E0EF00 & 0x3F;
    Timer = (PKTIMER)RtlImageNtHeader(0x140000000uLL);
    SignalState_high = HIWORD(Timer->Header.SignalState);
    v368 = (struct _KTIMER *)((char *)&Timer->DueTime + WORD2(Timer->Header.WaitListHead.Blink));
    v5060 = 0LL;
    v369 = (struct _KTIMER *)((char *)v368 + 40 * SignalState_high);
    if ( (int)KiSwInterruptPresent() >= 0 )
    {
      while ( v368 != v369 )
      {
        if ( v368->Header.LockNV == 1346589515 && !v368->Header.SignalState )
        {
          v5060 = v368;
          break;
        }
        v368 = (struct _KTIMER *)((char *)v368 + 40);
      }
    }
    RtlImageNtHeader(0x140000000uLL);
    RtlCaptureImageExceptionValues(0x140000000uLL, &v5552, v5103);
    v370 = v5552;
    v371 = Timer;
    v5553 = 0x140000000uLL;
    v5103[0] /= 0xCu;
    v5554 = v5552 + 12LL * v5103[0];
    v5555 = v5230;
    while ( 1 )
    {
      v372 = v366;
      if ( !v370 || v370 == v5554 )
        break;
      v373 = RtlpConvertFunctionEntry(v370, v5553);
      *v5555 = v373;
      v370 = v5552 + 12;
      v5552 += 12LL;
      v374 = *(unsigned int *)v5230[0];
      v375 = (_QWORD *)(0x140000000LL + v374);
      v376 = *(_DWORD *)(v5230[0] + 4LL) - v374;
      if ( v5060 )
      {
        v377 = RtlSectionTableFromVirtualAddress(v371, 0x140000000uLL, v374);
        v370 = v5552;
        if ( (PKTIMER)v377 == v5060 )
          continue;
      }
      LOBYTE(v378) = v5059;
      v379 = v375;
      v380 = (const char *)v375;
      v381 = (unsigned __int64)v375 + v376;
      if ( (unsigned __int64)v375 < v381 )
      {
        do
        {
          _mm_prefetch(v380, 0);
          v380 += 64;
        }
        while ( (unsigned __int64)v380 < v381 );
      }
      v382 = v376 >> 7;
      if ( v376 >> 7 )
      {
        do
        {
          v383 = 8LL;
          do
          {
            v384 = v379[1] ^ __ROL8__(*v379 ^ (unsigned __int64)v366, v378);
            v379 += 2;
            v366 = (__int64 *)__ROL8__(v384, v378);
            --v383;
          }
          while ( v383 );
          v385 = (__ROL8__((unsigned __int64)v372 ^ ((char *)v379 - (char *)v375), 17) ^ (unsigned __int64)v372 ^ ((char *)v379 - (char *)v375))
               * (unsigned __int128)0x7010008004002001uLL;
          v5230[1] = *((_QWORD *)&v385 + 1);
          v378 = ((unsigned __int8)(v385 ^ BYTE8(v385)) ^ (unsigned __int8)v378) & 0x3F;
          if ( !v378 )
            LOBYTE(v378) = 1;
          --v382;
        }
        while ( v382 );
        v370 = v5552;
        v371 = Timer;
      }
      v386 = v376 & 0x7F;
      if ( v386 >= 8 )
      {
        v387 = (unsigned __int64)v386 >> 3;
        do
        {
          v366 = (__int64 *)__ROL8__(*v379++ ^ (unsigned __int64)v366, v378);
          v386 -= 8;
          --v387;
        }
        while ( v387 );
        v371 = Timer;
      }
      if ( v386 )
      {
        do
        {
          v388 = *(unsigned __int8 *)v379;
          v379 = (_QWORD *)((char *)v379 + 1);
          v366 = (__int64 *)__ROL8__(v388 ^ (unsigned __int64)v366, v378);
          --v386;
        }
        while ( v386 );
        v371 = Timer;
      }
    }
    PgContextReal = (_OWORD *)v5025;
    enumDpcExecutionMethod1 = enumDpcExecutionMethod0;
    v389 = v366 != (__int64 *)qword_140E0EF00;
    *(_DWORD *)(v5025 + 2520) = *(_DWORD *)(v5025 + 2520) & 0xFFFDFFFF | -v389 & 0x20000;
    if ( v389 && !*((_DWORD *)PgContextReal + 582) )
      *(_QWORD *)(*((_QWORD *)PgContextReal + 177) + 24LL) = qword_140E0EF00 ^ (unsigned __int64)v366;
  }
  v390 = __rdtsc();
  v391 = (__ROR8__(v390, 3) ^ v390) * (unsigned __int128)0x7010008004002001uLL;
  v5230[2] = *((_QWORD *)&v391 + 1);
  if ( ((unsigned __int64)v391 ^ *((_QWORD *)&v391 + 1)) % 0xA < 2 && enumDpcExecutionMethod1 != 3 )
  {
    v392 = *((unsigned int *)PgContextReal + 524);
    v393 = __rdtsc();
    v394 = __ROR8__(v393, 3);
    v5231 = ((v394 ^ v393) * (unsigned __int128)0x7010008004002001uLL) >> 64;
    v395 = ((unsigned __int16)(8193 * (v394 ^ v393)) ^ (unsigned __int16)v5231) & 0x7FF;
    v396 = __rdtsc();
    v397 = __ROR8__(v396, 3) ^ v396;
    v5232 = (v397 * (unsigned __int128)0x7010008004002001uLL) >> 64;
    v398 = (v5232 ^ (0x7010008004002001LL * v397)) % (unsigned int)(v395 + 1);
    v399 = (*((__int64 (__fastcall **)(__int64, _QWORD, __int64))PgContextReal + 32))(66LL, (unsigned int)(v395 + 32), v392);
    v400 = 0LL;
    if ( v399 )
    {
      v401 = v398;
      v402 = (_QWORD *)v399;
      if ( (unsigned int)v398 >= 8 )
      {
        v403 = (unsigned __int64)(unsigned int)v398 >> 3;
        do
        {
          v404 = __rdtsc();
          v401 -= 8;
          v405 = (__ROR8__(v404, 3) ^ v404) * (unsigned __int128)0x7010008004002001uLL;
          v5233 = *((_QWORD *)&v405 + 1);
          *v402++ = v405 ^ *((_QWORD *)&v405 + 1);
          --v403;
        }
        while ( v403 );
        PgContextReal = (_OWORD *)v5025;
      }
      if ( v401 )
      {
        v406 = __rdtsc();
        v407 = (__ROR8__(v406, 3) ^ v406) * (unsigned __int128)0x7010008004002001uLL;
        v5234 = *((_QWORD *)&v407 + 1);
        v408 = v407 ^ *((_QWORD *)&v407 + 1);
        do
        {
          *(_BYTE *)v402 = v408;
          v402 = (_QWORD *)((char *)v402 + 1);
          v408 >>= 8;
          --v401;
        }
        while ( v401 );
      }
      v409 = v395 - v398;
      v410 = (_QWORD *)(v399 + (unsigned int)v398 + 32LL);
      if ( v409 >= 8 )
      {
        v411 = (unsigned __int64)v409 >> 3;
        do
        {
          v412 = __rdtsc();
          v409 -= 8;
          v413 = (__ROR8__(v412, 3) ^ v412) * (unsigned __int128)0x7010008004002001uLL;
          v5235 = *((_QWORD *)&v413 + 1);
          *v410++ = v413 ^ *((_QWORD *)&v413 + 1);
          --v411;
        }
        while ( v411 );
        PgContextReal = (_OWORD *)v5025;
      }
      if ( v409 )
      {
        v414 = __rdtsc();
        v415 = (__ROR8__(v414, 3) ^ v414) * (unsigned __int128)0x7010008004002001uLL;
        v5236 = *((_QWORD *)&v415 + 1);
        v416 = v415 ^ *((_QWORD *)&v415 + 1);
        do
        {
          *(_BYTE *)v410 = v416;
          v410 = (_QWORD *)((char *)v410 + 1);
          v416 >>= 8;
          --v409;
        }
        while ( v409 );
      }
      v400 = v399 + (unsigned int)v398;
    }
    else
    {
      ++*((_DWORD *)PgContextReal + 664);
    }
    *((_QWORD *)PgContextReal + 330) = v400;
    if ( !v400 )
      return 0;
  }
  v417 = __rdtsc();
  v418 = (__ROR8__(v417, 3) ^ v417) * (unsigned __int128)0x7010008004002001uLL;
  v5237 = *((_QWORD *)&v418 + 1);
  if ( ((unsigned __int64)v418 ^ *((_QWORD *)&v418 + 1)) % 0xA < 2 && (*((_DWORD *)PgContextReal + 630) & 0x20000000) == 0 )
  {
    v419 = *((unsigned int *)PgContextReal + 524);
    v420 = __rdtsc();
    v421 = __ROR8__(v420, 3);
    v5238 = ((v421 ^ v420) * (unsigned __int128)0x7010008004002001uLL) >> 64;
    v422 = (struct _KTIMER *)(((unsigned __int16)(8193 * (v421 ^ v420)) ^ (unsigned __int16)v5238) & 0x7FF);
    Timer = v422;
    v423 = __rdtsc();
    v424 = __ROR8__(v423, 3) ^ v423;
    v5239 = (v424 * (unsigned __int128)0x7010008004002001uLL) >> 64;
    v425 = (v5239 ^ (0x7010008004002001LL * v424)) % (unsigned int)((_DWORD)v422 + 1);
    v426 = (*((__int64 (__fastcall **)(__int64, _QWORD, __int64))PgContextReal + 32))(
             66LL,
             (unsigned int)((_DWORD)v422 + 514),
             v419);
    if ( !v426 )
    {
      ++*((_DWORD *)PgContextReal + 664);
      goto LABEL_6581;
    }
    v427 = v425;
    v428 = (_QWORD *)v426;
    if ( (unsigned int)v425 >= 8 )
    {
      v429 = (unsigned __int64)(unsigned int)v425 >> 3;
      do
      {
        v430 = __rdtsc();
        v427 -= 8;
        v431 = (__ROR8__(v430, 3) ^ v430) * (unsigned __int128)0x7010008004002001uLL;
        v5240 = *((_QWORD *)&v431 + 1);
        *v428++ = v431 ^ *((_QWORD *)&v431 + 1);
        --v429;
      }
      while ( v429 );
      PgContextReal = (_OWORD *)v5025;
      LODWORD(v422) = (_DWORD)Timer;
    }
    if ( v427 )
    {
      v432 = __rdtsc();
      v433 = (__ROR8__(v432, 3) ^ v432) * (unsigned __int128)0x7010008004002001uLL;
      v5241 = *((_QWORD *)&v433 + 1);
      v434 = v433 ^ *((_QWORD *)&v433 + 1);
      do
      {
        *(_BYTE *)v428 = v434;
        v428 = (_QWORD *)((char *)v428 + 1);
        v434 >>= 8;
        --v427;
      }
      while ( v427 );
    }
    v435 = (_DWORD)v422 - v425;
    v436 = (_QWORD *)(v426 + (unsigned int)v425 + 514LL);
    if ( v435 >= 8 )
    {
      v437 = (unsigned __int64)v435 >> 3;
      do
      {
        v438 = __rdtsc();
        v435 -= 8;
        v439 = (__ROR8__(v438, 3) ^ v438) * (unsigned __int128)0x7010008004002001uLL;
        v5242 = *((_QWORD *)&v439 + 1);
        *v436++ = v439 ^ *((_QWORD *)&v439 + 1);
        --v437;
      }
      while ( v437 );
      PgContextReal = (_OWORD *)v5025;
    }
    if ( v435 )
    {
      v440 = __rdtsc();
      v441 = (__ROR8__(v440, 3) ^ v440) * (unsigned __int128)0x7010008004002001uLL;
      v5243 = *((_QWORD *)&v441 + 1);
      v442 = v441 ^ *((_QWORD *)&v441 + 1);
      do
      {
        *(_BYTE *)v436 = v442;
        v436 = (_QWORD *)((char *)v436 + 1);
        v442 >>= 8;
        --v435;
      }
      while ( v435 );
    }
    v443 = v426 + (unsigned int)v425;
    if ( !v443 )
    {
LABEL_6581:
      v5103[1] = -402653175;
      KeBugCheckEx(__ROL4__(-402653175, 101), 0x1AuLL, (ULONG_PTR)PgContextReal, 0LL, 0LL);
    }
    v444 = __rdtsc();
    v445 = 256LL;
    v446 = (_BYTE *)(v443 + 2);
    v447 = (__ROR8__(v444, 3) ^ v444) * (unsigned __int128)0x7010008004002001uLL;
    v5244 = *((_QWORD *)&v447 + 1);
    *((_QWORD *)&v447 + 1) ^= v447;
    v448 = 0;
    v5245[0] = *((_QWORD *)&v447 + 1);
    do
      *v446++ = v448++;
    while ( v448 < 0x100 );
    v449 = (_BYTE *)(v443 + 2);
    v450 = 0;
    do
    {
      v450 += *((_BYTE *)v5245 + ((-2 - (_BYTE)v443 + (_BYTE)v449) & 7)) + *v449;
      v451 = *(_BYTE *)(v450 + v443 + 2);
      *(_BYTE *)(v450 + v443 + 2) = *v449;
      *v449++ = v451;
      --v445;
    }
    while ( v445 );
    PgContextReal = (_OWORD *)v5025;
    v452 = (_QWORD *)(v443 + 258);
    v453 = 256;
    v454 = 32LL;
    do
    {
      v455 = __rdtsc();
      v453 -= 8;
      v456 = (__ROR8__(v455, 3) ^ v455) * (unsigned __int128)0x7010008004002001uLL;
      v5245[1] = *((_QWORD *)&v456 + 1);
      *v452++ = v456 ^ *((_QWORD *)&v456 + 1);
      --v454;
    }
    while ( v454 );
    if ( v453 )
    {
      v457 = __rdtsc();
      v458 = (__ROR8__(v457, 3) ^ v457) * (unsigned __int128)0x7010008004002001uLL;
      v5245[2] = *((_QWORD *)&v458 + 1);
      v459 = v458 ^ *((_QWORD *)&v458 + 1);
      do
      {
        *(_BYTE *)v452 = v459;
        v452 = (_QWORD *)((char *)v452 + 1);
        v459 >>= 8;
        --v453;
      }
      while ( v453 );
    }
    *((_QWORD *)PgContextReal + 343) = v443;
  }
  v460 = __rdtsc();
  v461 = (__ROR8__(v460, 3) ^ v460) * (unsigned __int128)0x7010008004002001uLL;
  v5245[3] = *((_QWORD *)&v461 + 1);
  if ( !(((unsigned __int64)v461 ^ *((_QWORD *)&v461 + 1)) % 0xA) && (((enumDpcExecutionMethod1 - 3) & 0xFFFFFFFA) != 0 || enumDpcExecutionMethod1 == 8) )
  {
    for ( k = 0; k < 0x10; ++k )
    {
      v463 = __rdtsc();
      v464 = (__ROR8__(v463, 3) ^ v463) * (unsigned __int128)0x7010008004002001uLL;
      v5245[4] = *((_QWORD *)&v464 + 1);
      v465 = ((unsigned __int64)v464 ^ *((_QWORD *)&v464 + 1)) % 0xB;
      if ( (unsigned int)v465 > 5 )
      {
        v468 = v465 - 6;
        if ( v468 )
        {
          v469 = v468 - 1;
          if ( v469 )
          {
            v470 = v469 - 1;
            if ( v470 )
            {
              if ( v470 == 1 )
              {
                v5103[8] = -1333354875;
              }
              else
              {
                v471 = __rdtsc();
                v5245[5] = ((__ROR8__(v471, 3) ^ v471) * (unsigned __int128)0x7010008004002001uLL) >> 64;
              }
            }
            else
            {
              v5103[9] = 1684422978;
            }
          }
          else
          {
            v5103[10] = -2100910376;
          }
        }
        else
        {
          v5103[11] = 1314342514;
        }
      }
      else if ( (_DWORD)v465 == 5 )
      {
        v5103[7] = 680282605;
      }
      else if ( (_DWORD)v465 )
      {
        v466 = v465 - 1;
        if ( v466 )
        {
          v467 = v466 - 1;
          if ( v467 )
          {
            if ( v467 == 1 )
              v5103[3] = -1474152136;
            else
              v5103[2] = 1728537748;
          }
          else
          {
            v5103[4] = -2051698419;
          }
        }
        else
        {
          v5103[5] = -1297272415;
        }
      }
      else
      {
        v5103[6] = -795291432;
      }
      v472 = ExAllocatePool2(0x42uLL);
      v5576[k] = v472;
      if ( !v472 )
        goto LABEL_6582;
    }
    v473 = __rdtsc();
    v474 = __ROR8__(v473, 3);
    v475 = 15;
    v5246 = ((v474 ^ v473) * (unsigned __int128)0x7010008004002001uLL) >> 64;
    v476 = ((unsigned int)v5246 ^ (67117057 * ((unsigned int)v474 ^ (unsigned int)v473))) & 0xF;
    v477 = (PKTIMER *)&v5576[v476];
    Timer = *v477;
    v478 = Timer;
    memmove(v477, &v5576[(unsigned int)(v476 + 1)], 8LL * (unsigned int)(15 - v476));
    v479 = (unsigned __int64)&qword_140E0EEC8 ^ (((unsigned __int64)v478 ^ (((unsigned __int64)v478 ^ 0xE04C2400) >> 4)) >> 4);
    v480 = v479 & 0xF;
    if ( (v479 & 0xF) == 0 )
      v480 = 1;
    do
    {
      v481 = (_QWORD *)((char *)&v478->Header.Lock + (v479 & 0xF));
      v482 = __rdtsc();
      v483 = v475;
      v484 = (__ROR8__(v482, 3) ^ v482) * (unsigned __int128)0x7010008004002001uLL;
      --v475;
      v5247 = *((_QWORD *)&v484 + 1);
      DWORD2(v484) = (*((_QWORD *)&v484 + 1) ^ (unsigned __int64)v484) % v483;
      v485 = (PKTIMER *)&v5576[DWORD2(v484)];
      v478 = *v485;
      memmove(v485, &v5576[DWORD2(v484) + 1], 8LL * (v475 - DWORD2(v484)));
      *v481 = v478;
      v479 ^= ((unsigned __int64)v478 ^ (((unsigned __int64)v478 ^ 0x1DF400) >> 4)) >> 4;
      --v480;
    }
    while ( v480 );
    v486 = __rdtsc();
    v487 = (__ROR8__(v486, 3) ^ v486) * (unsigned __int128)0x7010008004002001uLL;
    v5248 = *((_QWORD *)&v487 + 1);
    v488 = ((unsigned __int64)v487 ^ *((_QWORD *)&v487 + 1)) % 0xB;
    if ( (unsigned int)v488 > 5 )
    {
      switch ( (_DWORD)v488 )
      {
        case 6:
          v5103[21] = __ROL4__(1464235086, 24) ^ 6;
          break;
        case 7:
          v5103[20] = __ROR4__(1666411585, 7);
          break;
        case 8:
          v5103[19] = __ROL4__(1113876033, 8);
          break;
        case 9:
          v5103[18] = __ROL4__(1480806214, 33) ^ 9;
          break;
        default:
          v489 = __rdtsc();
          v5249 = ((__ROR8__(v489, 3) ^ v489) * (unsigned __int128)0x7010008004002001uLL) >> 64;
          break;
      }
    }
    else if ( (_DWORD)v488 == 5 )
    {
      v5103[17] = __ROL4__(1766089295, 5);
    }
    else if ( (_DWORD)v488 )
    {
      switch ( (_DWORD)v488 )
      {
        case 1:
          v5103[15] = __ROR4__(1700422467, 1);
          break;
        case 2:
          v5103[14] = __ROL4__(1634559043, 2);
          break;
        case 3:
          v5103[13] = __ROL4__(1920421956, 15) ^ 3;
          break;
        default:
          v5103[12] = __ROR4__(1886800198, v488);
          break;
      }
    }
    else
    {
      v5103[16] = __ROL4__(1665295171, 6);
    }
    v490 = ExAllocatePool2(0x42uLL);
    PgContextReal = (_OWORD *)v5025;
    if ( !v490 )
    {
LABEL_6582:
      v5103[22] = -402653175;
      KeBugCheckEx(__ROL4__(-402653175, 101), 0x19uLL, (ULONG_PTR)PgContextReal, 0LL, 0LL);
    }
    *(_BYTE *)v490 = 19;
    *(_BYTE *)(v490 + 1) = 1;
    *(_WORD *)(v490 + 2) = 0;
    *(_QWORD *)(v490 + 24) = sub_1404C3C30;
    *(_QWORD *)(v490 + 32) = Timer;
    *(_QWORD *)(v490 + 56) = 0LL;
    *(_QWORD *)(v490 + 16) = 0LL;
    *((_QWORD *)PgContextReal + 348) = v490;
  }
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  v491 = __rdtsc();
  v492 = (__ROR8__(v491, 3) ^ v491) * (unsigned __int128)0x7010008004002001uLL;
  v5250 = *((_QWORD *)&v492 + 1);
  if ( ((unsigned __int64)v492 ^ *((_QWORD *)&v492 + 1)) % 0xA < 5 )
    *((_DWORD *)PgContextReal + 630) |= 0x800000u;
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  v493 = *((unsigned int *)PgContextReal + 524);
  v494 = __rdtsc();
  v495 = __ROR8__(v494, 3);
  v5251 = ((v495 ^ v494) * (unsigned __int128)0x7010008004002001uLL) >> 64;
  v496 = ((unsigned __int16)(8193 * (v495 ^ v494)) ^ (unsigned __int16)v5251) & 0x7FF;
  v497 = __rdtsc();
  v498 = __ROR8__(v497, 3) ^ v497;
  v5252 = (v498 * (unsigned __int128)0x7010008004002001uLL) >> 64;
  v499 = (v5252 ^ (0x7010008004002001LL * v498)) % (unsigned int)(v496 + 1);
  v500 = (*((__int64 (__fastcall **)(__int64, _QWORD, __int64))PgContextReal + 32))(66LL, (unsigned int)(v496 + 136), v493);
  v501 = v500;
  if ( !v500 )
  {
LABEL_823:
    ++*((_DWORD *)PgContextReal + 664);
    return 0;
  }
  v502 = v499;
  v503 = (_QWORD *)v500;
  if ( (unsigned int)v499 >= 8 )
  {
    v504 = (unsigned __int64)(unsigned int)v499 >> 3;
    do
    {
      v505 = __rdtsc();
      v502 -= 8;
      v506 = (__ROR8__(v505, 3) ^ v505) * (unsigned __int128)0x7010008004002001uLL;
      v5253 = *((_QWORD *)&v506 + 1);
      *v503++ = v506 ^ *((_QWORD *)&v506 + 1);
      --v504;
    }
    while ( v504 );
    PgContextReal = (_OWORD *)v5025;
  }
  if ( v502 )
  {
    v507 = __rdtsc();
    v508 = (__ROR8__(v507, 3) ^ v507) * (unsigned __int128)0x7010008004002001uLL;
    v5254 = *((_QWORD *)&v508 + 1);
    v509 = v508 ^ *((_QWORD *)&v508 + 1);
    do
    {
      *(_BYTE *)v503 = v509;
      v503 = (_QWORD *)((char *)v503 + 1);
      v509 >>= 8;
      --v502;
    }
    while ( v502 );
  }
  v510 = v496 - v499;
  v511 = (_QWORD *)(v501 + (unsigned int)v499 + 136LL);
  if ( v510 >= 8 )
  {
    v512 = (unsigned __int64)v510 >> 3;
    do
    {
      v513 = __rdtsc();
      v510 -= 8;
      v514 = (__ROR8__(v513, 3) ^ v513) * (unsigned __int128)0x7010008004002001uLL;
      v5255 = *((_QWORD *)&v514 + 1);
      *v511++ = v514 ^ *((_QWORD *)&v514 + 1);
      --v512;
    }
    while ( v512 );
    PgContextReal = (_OWORD *)v5025;
  }
  if ( v510 )
  {
    v515 = __rdtsc();
    v516 = (__ROR8__(v515, 3) ^ v515) * (unsigned __int128)0x7010008004002001uLL;
    v5256 = *((_QWORD *)&v516 + 1);
    v517 = v516 ^ *((_QWORD *)&v516 + 1);
    do
    {
      *(_BYTE *)v511 = v517;
      v511 = (_QWORD *)((char *)v511 + 1);
      v517 >>= 8;
      --v510;
    }
    while ( v510 );
  }
  Timer = (PKTIMER)(v501 + (unsigned int)v499);
  if ( !Timer )
    return 0;
  *((_QWORD *)PgContextReal + 245) = v501 + (unsigned int)v499;
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  v518 = __rdtsc();
  v519 = (__ROR8__(v518, 3) ^ v518) * (unsigned __int128)0x7010008004002001uLL;
  v5257 = *((_QWORD *)&v519 + 1);
  if ( ((unsigned __int64)v519 ^ *((_QWORD *)&v519 + 1)) % 0xA >= 3 )
  {
    v545 = Timer + 1;
    v5060 = Timer + 1;
    goto LABEL_861;
  }
  v520 = *((unsigned int *)PgContextReal + 524);
  v521 = __rdtsc();
  v522 = __ROR8__(v521, 3);
  v5258 = ((v522 ^ v521) * (unsigned __int128)0x7010008004002001uLL) >> 64;
  v523 = ((unsigned __int16)(8193 * (v522 ^ v521)) ^ (unsigned __int16)v5258) & 0x7FF;
  v524 = __rdtsc();
  v525 = __ROR8__(v524, 3) ^ v524;
  v5259 = (v525 * (unsigned __int128)0x7010008004002001uLL) >> 64;
  v526 = (v5259 ^ (0x7010008004002001LL * v525)) % (unsigned int)(v523 + 1);
  v527 = (*((__int64 (__fastcall **)(__int64, _QWORD, __int64))PgContextReal + 32))(66LL, (unsigned int)(v523 + 72), v520);
  v528 = v527;
  if ( !v527 )
    goto LABEL_823;
  v529 = v526;
  v530 = (_QWORD *)v527;
  if ( (unsigned int)v526 >= 8 )
  {
    v531 = (unsigned __int64)(unsigned int)v526 >> 3;
    do
    {
      v532 = __rdtsc();
      v529 -= 8;
      v533 = (__ROR8__(v532, 3) ^ v532) * (unsigned __int128)0x7010008004002001uLL;
      v5260 = *((_QWORD *)&v533 + 1);
      *v530++ = v533 ^ *((_QWORD *)&v533 + 1);
      --v531;
    }
    while ( v531 );
    PgContextReal = (_OWORD *)v5025;
  }
  if ( v529 )
  {
    v534 = __rdtsc();
    v535 = (__ROR8__(v534, 3) ^ v534) * (unsigned __int128)0x7010008004002001uLL;
    v5261 = *((_QWORD *)&v535 + 1);
    v536 = v535 ^ *((_QWORD *)&v535 + 1);
    do
    {
      *(_BYTE *)v530 = v536;
      v530 = (_QWORD *)((char *)v530 + 1);
      v536 >>= 8;
      --v529;
    }
    while ( v529 );
  }
  v537 = v523 - v526;
  v538 = (_QWORD *)(v528 + (unsigned int)v526 + 72LL);
  if ( v537 >= 8 )
  {
    v539 = (unsigned __int64)v537 >> 3;
    do
    {
      v540 = __rdtsc();
      v537 -= 8;
      v541 = (__ROR8__(v540, 3) ^ v540) * (unsigned __int128)0x7010008004002001uLL;
      v5262 = *((_QWORD *)&v541 + 1);
      *v538++ = v541 ^ *((_QWORD *)&v541 + 1);
      --v539;
    }
    while ( v539 );
    PgContextReal = (_OWORD *)v5025;
  }
  if ( v537 )
  {
    v542 = __rdtsc();
    v543 = (__ROR8__(v542, 3) ^ v542) * (unsigned __int128)0x7010008004002001uLL;
    v5263 = *((_QWORD *)&v543 + 1);
    v544 = v543 ^ *((_QWORD *)&v543 + 1);
    do
    {
      *(_BYTE *)v538 = v544;
      v538 = (_QWORD *)((char *)v538 + 1);
      v544 >>= 8;
      --v537;
    }
    while ( v537 );
  }
  v545 = (PKTIMER)(v528 + (unsigned int)v526);
  v5060 = v545;
  if ( !v545 )
    return 0;
LABEL_861:
  *((_QWORD *)PgContextReal + 246) = v545;
  if ( enumDpcExecutionMethod0 == 4 ) // **중요** - Insert 4
  {
    v546 = *((unsigned int *)PgContextReal + 524);
    v547 = __rdtsc();
    v548 = __ROR8__(v547, 3);
    v5264 = ((v548 ^ v547) * (unsigned __int128)0x7010008004002001uLL) >> 64;
    v549 = ((unsigned __int16)(8193 * (v548 ^ v547)) ^ (unsigned __int16)v5264) & 0x7FF;
    v550 = __rdtsc();
    v551 = __ROR8__(v550, 3) ^ v550;
    v5265 = (v551 * (unsigned __int128)0x7010008004002001uLL) >> 64;
    v552 = (v5265 ^ (0x7010008004002001LL * v551)) % (unsigned int)(v549 + 1);
    v553 = (*((__int64 (__fastcall **)(__int64, _QWORD, __int64))PgContextReal + 32))(66LL, (unsigned int)(v549 + 88), v546);
    if ( !v553 )
    {
      ++*((_DWORD *)PgContextReal + 664);
      goto LABEL_6583;
    }
    v554 = v552;
    v555 = (_QWORD *)v553;
    if ( (unsigned int)v552 >= 8 )
    {
      v556 = (unsigned __int64)(unsigned int)v552 >> 3;
      do
      {
        v557 = __rdtsc();
        v554 -= 8;
        v558 = (__ROR8__(v557, 3) ^ v557) * (unsigned __int128)0x7010008004002001uLL;
        v5266 = *((_QWORD *)&v558 + 1);
        *v555++ = v558 ^ *((_QWORD *)&v558 + 1);
        --v556;
      }
      while ( v556 );
      PgContextReal = (_OWORD *)v5025;
    }
    if ( v554 )
    {
      v559 = __rdtsc();
      v560 = (__ROR8__(v559, 3) ^ v559) * (unsigned __int128)0x7010008004002001uLL;
      v5267 = *((_QWORD *)&v560 + 1);
      v561 = v560 ^ *((_QWORD *)&v560 + 1);
      do
      {
        *(_BYTE *)v555 = v561;
        v555 = (_QWORD *)((char *)v555 + 1);
        v561 >>= 8;
        --v554;
      }
      while ( v554 );
    }
    v562 = v549 - v552;
    v563 = (_QWORD *)(v553 + (unsigned int)v552 + 88LL);
    if ( v562 >= 8 )
    {
      v564 = (unsigned __int64)v562 >> 3;
      do
      {
        v565 = __rdtsc();
        v562 -= 8;
        v566 = (__ROR8__(v565, 3) ^ v565) * (unsigned __int128)0x7010008004002001uLL;
        v5268 = *((_QWORD *)&v566 + 1);
        *v563++ = v566 ^ *((_QWORD *)&v566 + 1);
        --v564;
      }
      while ( v564 );
      PgContextReal = (_OWORD *)v5025;
    }
    if ( v562 )
    {
      v567 = __rdtsc();
      v568 = (__ROR8__(v567, 3) ^ v567) * (unsigned __int128)0x7010008004002001uLL;
      v5269 = *((_QWORD *)&v568 + 1);
      v569 = v568 ^ *((_QWORD *)&v568 + 1);
      do
      {
        *(_BYTE *)v563 = v569;
        v563 = (_QWORD *)((char *)v563 + 1);
        v569 >>= 8;
        --v562;
      }
      while ( v562 );
    }
    v570 = v553 + (unsigned int)v552;
    if ( !v570 )
      goto LABEL_6583;
    *((_QWORD *)PgContextReal + 325) = v570;
    *((_DWORD *)PgContextReal + 630) |= 4u;
    v571 = __rdtsc();
    v572 = ((__ROR8__(v571, 3) ^ v571) * (unsigned __int128)0x7010008004002001uLL) >> 64;
    *((_QWORD *)PgContextReal + 316) = 0LL;
    v573 = *((_QWORD *)PgContextReal + 203);
    v5270 = v572;
    PsEnumProcessThreads(
      *(_QWORD *)(*((_QWORD *)PgContextReal + 215)
                + *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + v573)
                + *((_QWORD *)PgContextReal + 211)),
      sub_140BCED20,
      PgContextReal);
    if ( !*((_QWORD *)PgContextReal + 316) )
    {
LABEL_6583:
      v5103[23] = -402653175;
      KeBugCheckEx(__ROL4__(-402653175, 101), 0x16uLL, (ULONG_PTR)PgContextReal, 0LL, 0LL);
    }
    *((_QWORD *)PgContextReal + 326) = KiDispatchCallout;
    *((_QWORD *)PgContextReal + 327) = xHalTimerWatchdogStop;
    *((_DWORD *)PgContextReal + 607) = 1996515564;
  }
  else if ( enumDpcExecutionMethod0 == 5 )
  {
    v574 = *((unsigned int *)PgContextReal + 524);
    v575 = __rdtsc();
    v576 = __ROR8__(v575, 3);
    v5271 = ((v576 ^ v575) * (unsigned __int128)0x7010008004002001uLL) >> 64;
    v577 = ((unsigned __int16)v5271 ^ (unsigned __int16)(8193 * (v576 ^ v575))) & 0x7FF;
    v578 = __rdtsc();
    v579 = (__ROR8__(v578, 3) ^ v578) * (unsigned __int128)0x7010008004002001uLL;
    v5272 = *((_QWORD *)&v579 + 1);
    v580 = (*((_QWORD *)&v579 + 1) ^ (unsigned __int64)v579) % (unsigned int)(v577 + 1);
    v581 = (*((__int64 (__fastcall **)(__int64, _QWORD, __int64))PgContextReal + 32))(66LL, (unsigned int)(v577 + 80), v574);
    v582 = 0LL;
    if ( v581 )
    {
      v583 = v580;
      v584 = (_QWORD *)v581;
      if ( (unsigned int)v580 >= 8 )
      {
        v585 = (unsigned __int64)(unsigned int)v580 >> 3;
        do
        {
          v586 = __rdtsc();
          v583 -= 8;
          v587 = (__ROR8__(v586, 3) ^ v586) * (unsigned __int128)0x7010008004002001uLL;
          v5273 = *((_QWORD *)&v587 + 1);
          *v584++ = v587 ^ *((_QWORD *)&v587 + 1);
          --v585;
        }
        while ( v585 );
        PgContextReal = (_OWORD *)v5025;
      }
      if ( v583 )
      {
        v588 = __rdtsc();
        v589 = (__ROR8__(v588, 3) ^ v588) * (unsigned __int128)0x7010008004002001uLL;
        v5274 = *((_QWORD *)&v589 + 1);
        v590 = v589 ^ *((_QWORD *)&v589 + 1);
        do
        {
          *(_BYTE *)v584 = v590;
          v584 = (_QWORD *)((char *)v584 + 1);
          v590 >>= 8;
          --v583;
        }
        while ( v583 );
      }
      v591 = v577 - v580;
      v592 = (_QWORD *)(v581 + (unsigned int)v580 + 80LL);
      if ( v591 >= 8 )
      {
        v593 = (unsigned __int64)v591 >> 3;
        do
        {
          v594 = __rdtsc();
          v591 -= 8;
          v595 = (__ROR8__(v594, 3) ^ v594) * (unsigned __int128)0x7010008004002001uLL;
          v5275 = *((_QWORD *)&v595 + 1);
          *v592++ = v595 ^ *((_QWORD *)&v595 + 1);
          --v593;
        }
        while ( v593 );
        PgContextReal = (_OWORD *)v5025;
      }
      if ( v591 )
      {
        v596 = __rdtsc();
        v597 = (__ROR8__(v596, 3) ^ v596) * (unsigned __int128)0x7010008004002001uLL;
        v5276 = *((_QWORD *)&v597 + 1);
        v598 = v597 ^ *((_QWORD *)&v597 + 1);
        do
        {
          *(_BYTE *)v592 = v598;
          v592 = (_QWORD *)((char *)v592 + 1);
          v598 >>= 8;
          --v591;
        }
        while ( v591 );
      }
      v582 = (_DWORD *)(v581 + (unsigned int)v580);
    }
    else
    {
      ++*((_DWORD *)PgContextReal + 664);
    }
    *((_QWORD *)PgContextReal + 316) = v582;
    if ( !v582 )
    {
      v5103[24] = -402653175;
      KeBugCheckEx(__ROL4__(-402653175, 101), 0x18uLL, (ULONG_PTR)PgContextReal, 0LL, 0LL);
    }
    *v582 = 0;
    v599 = *((_QWORD *)PgContextReal + 316);
    v600 = *(_QWORD *)(a4 + 24);
    *(_OWORD *)(v599 + 8) = *(_OWORD *)v600;
    *(_OWORD *)(v599 + 24) = *(_OWORD *)(v600 + 16);
    *(_OWORD *)(v599 + 40) = *(_OWORD *)(v600 + 32);
    *(_OWORD *)(v599 + 56) = *(_OWORD *)(v600 + 48);
    v601 = KeAcquireSpinLockRaiseToDpc(&KiHardwareTriggerLock);
    _InterlockedExchange64((volatile __int64 *)(v600 + 24), (__int64)sub_1404D2AD0);
    *(_QWORD *)(v600 + 32) = v599;
    KeReleaseSpinLock(&KiHardwareTriggerLock, v601);
    v602 = *((_QWORD *)PgContextReal + 316);
    *(_OWORD *)((char *)PgContextReal + 2536) = *(_OWORD *)(v602 + 8);
    *(_OWORD *)((char *)PgContextReal + 2552) = *(_OWORD *)(v602 + 24);
    *(_OWORD *)((char *)PgContextReal + 2568) = *(_OWORD *)(v602 + 40);
    *(_OWORD *)((char *)PgContextReal + 2584) = *(_OWORD *)(v602 + 56);
  }
  v603 = __rdtsc();
  v604 = (__ROR8__(v603, 3) ^ v603) * (unsigned __int128)0x7010008004002001uLL;
  v5277 = *((_QWORD *)&v604 + 1);
  if ( !(((unsigned __int64)v604 ^ *((_QWORD *)&v604 + 1)) % 0xA) )
    *((_DWORD *)PgContextReal + 630) |= 1u;
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  v605 = __rdtsc();
  v606 = (__ROR8__(v605, 3) ^ v605) * (unsigned __int128)0x7010008004002001uLL;
  v5278 = *((_QWORD *)&v606 + 1);
  if ( ((unsigned __int64)v606 ^ *((_QWORD *)&v606 + 1)) % 0xA < 7 )
  {
    v607 = *((_DWORD *)PgContextReal + 630);
    if ( (v607 & 0x20000000) == 0 )
      *((_DWORD *)PgContextReal + 630) = v607 | 0x40;
  }
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  v608 = __rdtsc();
  v609 = (__ROR8__(v608, 3) ^ v608) * (unsigned __int128)0x7010008004002001uLL;
  v5279 = *((_QWORD *)&v609 + 1);
  if ( ((unsigned __int64)v609 ^ *((_QWORD *)&v609 + 1)) % 0xA < 7 )
  {
    v610 = __rdtsc();
    v611 = (__ROR8__(v610, 3) ^ v610) * (unsigned __int128)0x7010008004002001uLL;
    v5280 = *((_QWORD *)&v611 + 1);
    if ( ((unsigned __int64)v611 ^ *((_QWORD *)&v611 + 1)) % 0xA >= 7 )
    {
      v637 = ExAllocateTimer(0LL, 0LL, 8LL);
      if ( v637 )
      {
        *((_QWORD *)PgContextReal + 328) = v637;
        v638 = __rdtsc();
        v5287 = ((__ROR8__(v638, 3) ^ v638) * (unsigned __int128)0x7010008004002001uLL) >> 64;
        ExSetTimer(v637);
        goto LABEL_932;
      }
    }
    else
    {
      v612 = *((unsigned int *)PgContextReal + 524);
      v613 = __rdtsc();
      v614 = __ROR8__(v613, 3);
      v5281 = ((v614 ^ v613) * (unsigned __int128)0x7010008004002001uLL) >> 64;
      v615 = ((unsigned __int16)v5281 ^ (unsigned __int16)(8193 * (v614 ^ v613))) & 0x7FF;
      v616 = __rdtsc();
      v617 = (__ROR8__(v616, 3) ^ v616) * (unsigned __int128)0x7010008004002001uLL;
      v5282 = *((_QWORD *)&v617 + 1);
      v618 = (*((_QWORD *)&v617 + 1) ^ (unsigned __int64)v617) % (unsigned int)(v615 + 1);
      v619 = (*((__int64 (__fastcall **)(__int64, _QWORD, __int64))PgContextReal + 32))(66LL, (unsigned int)(v615 + 24), v612);
      if ( !v619 )
      {
        ++*((_DWORD *)PgContextReal + 664);
        goto LABEL_6585;
      }
      v620 = v618;
      v621 = (_QWORD *)v619;
      if ( (unsigned int)v618 >= 8 )
      {
        v622 = (unsigned __int64)(unsigned int)v618 >> 3;
        do
        {
          v623 = __rdtsc();
          v620 -= 8;
          v624 = (__ROR8__(v623, 3) ^ v623) * (unsigned __int128)0x7010008004002001uLL;
          v5283 = *((_QWORD *)&v624 + 1);
          *v621++ = v624 ^ *((_QWORD *)&v624 + 1);
          --v622;
        }
        while ( v622 );
        PgContextReal = (_OWORD *)v5025;
      }
      if ( v620 )
      {
        v625 = __rdtsc();
        v626 = (__ROR8__(v625, 3) ^ v625) * (unsigned __int128)0x7010008004002001uLL;
        v5284 = *((_QWORD *)&v626 + 1);
        v627 = v626 ^ *((_QWORD *)&v626 + 1);
        do
        {
          *(_BYTE *)v621 = v627;
          v621 = (_QWORD *)((char *)v621 + 1);
          v627 >>= 8;
          --v620;
        }
        while ( v620 );
      }
      v628 = v615 - v618;
      v629 = (_QWORD *)(v619 + (unsigned int)v618 + 24LL);
      if ( v628 >= 8 )
      {
        v630 = (unsigned __int64)v628 >> 3;
        do
        {
          v631 = __rdtsc();
          v628 -= 8;
          v632 = (__ROR8__(v631, 3) ^ v631) * (unsigned __int128)0x7010008004002001uLL;
          v5285 = *((_QWORD *)&v632 + 1);
          *v629++ = v632 ^ *((_QWORD *)&v632 + 1);
          --v630;
        }
        while ( v630 );
        PgContextReal = (_OWORD *)v5025;
      }
      if ( v628 )
      {
        v633 = __rdtsc();
        v634 = (__ROR8__(v633, 3) ^ v633) * (unsigned __int128)0x7010008004002001uLL;
        v5286 = *((_QWORD *)&v634 + 1);
        v635 = v634 ^ *((_QWORD *)&v634 + 1);
        do
        {
          *(_BYTE *)v629 = v635;
          v629 = (_QWORD *)((char *)v629 + 1);
          v635 >>= 8;
          --v628;
        }
        while ( v628 );
      }
      v636 = v619 + (unsigned int)v618;
      if ( v636 )
      {
        KeInitializeEvent((PRKEVENT)(v619 + (unsigned int)v618), NotificationEvent, 0);
        *((_QWORD *)PgContextReal + 328) = v636;
        goto LABEL_932;
      }
    }
LABEL_6585:
    v5103[25] = -402653175;
    KeBugCheckEx(__ROL4__(-402653175, 101), 0x17uLL, (ULONG_PTR)PgContextReal, 0LL, 0LL);
  }
LABEL_932:
  v639 = __rdtsc();
  v640 = (__ROR8__(v639, 3) ^ v639) * (unsigned __int128)0x7010008004002001uLL;
  v5288 = *((_QWORD *)&v640 + 1);
  if ( ((unsigned __int64)v640 ^ *((_QWORD *)&v640 + 1)) % 0xA < 2 && (*((_DWORD *)PgContextReal + 630) & 0x40000000) == 0 )
    *((_DWORD *)PgContextReal + 631) |= 0x200u;
  memmove((char *)PgContextReal + (unsigned int)v5057, v62, (unsigned int)Size);
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  v641 = (_DWORD *)InitializePGContextPerCpu(PgContextReal, v62, (char *)PgContextReal + (unsigned int)v5057, (unsigned int)Size);
  v642 = v641;
  if ( !v641 )
    return 0;
  if ( (_DWORD)KeNumberProcessors_0 == 1 )
    v641[630] |= 0x20u;
  if ( (*(_BYTE *)(((unsigned int)v641[608] ^ 0xBC2A27DBLL) - 0x88000000000LL) & 2) != 0 )
    v641[513] += 4096;
  v4393 = v641[534] == 7;
  v5183 = v641;
  if ( v4393 )
    goto LABEL_1095;
  v5589[0] = (ULONG_PTR)ExQueueWorkItem;
  v5590 = 0LL;
  v5589[1] = (ULONG_PTR)ExpWorkerThread;
  v5589[2] = (ULONG_PTR)KiDebugTrapOrFault;
  v5589[3] = (ULONG_PTR)&KiExceptionDispatch;
  v5589[4] = (ULONG_PTR)KiDispatchException;
  v5589[5] = 0LL;
  v5597 = RtlDispatchException;
  v5598 = KeContextToKframes;
  v5600 = sub_1404C3D10;
  v5601 = KeAcquireSpinLockRaiseToDpc;
  v5602 = KeReleaseSpinLock;
  v5603 = KeProcessorGroupAffinity;
  v5604 = KeSetSystemGroupAffinityThread;
  v5605 = KeRevertToUserGroupAffinityThread;
  v5606 = PsGetSessionIdEx;
  v5607 = sub_140665850;
  v5608 = sub_1404C23B0;
  v5609 = memmove;
  v5610 = qword_1404D2BC0;
  v5611 = KiCommitThreadWait;
  v5612 = KeDelayExecutionThread;
  v5613 = KeWaitForSingleObject;
  v5614 = KeRemovePriQueue;
  v5615 = KiAttemptFastRemovePriQueue;
  v5616 = KiExitThreadWait;
  v5617 = EtwTraceThreadWorkItem;
  v5618 = ExIsSafeWorkItem;
  v5619 = sub_1404D2A60;
  v5620 = KeIpiGenericCall;
  v5621 = _guard_dispatch_icall_fptr[0];
  v5622 = guard_wrap_icall_retpoline_exit;
  v5623 = guard_wrap_icall_jmp;
  v5624 = PerfInfoLogIpiSend;
  v5625 = PerfInfoLogIpiReceive;
  v5626 = ExGetHandlePointer;
  v5591 = 0LL;
  v5592 = 0LL;
  v5593 = 0LL;
  v5594 = 0LL;
  v5595 = 0LL;
  v5596 = 0LL;
  v5599 = 0LL;
  v643 = 0;
  LODWORD(v5059) = 0;
  v644 = 0;
  LODWORD(v5040) = 0;
  while ( 2 )
  {
    v645 = v5589[v644];
    if ( v645 )
    {
      RtlPcToFileHeader(v5589[v644], &v5290);
      v646 = RtlImageNtHeader(v5290);
      v647 = (_DWORD *)(*((__int64 (__fastcall **)(__int64, ULONG_PTR, _QWORD))v642 + 68))(
                         v646,
                         v5290,
                         (unsigned int)(v645 - v5290));
      if ( v647 )
      {
        if ( *v647 == 1414090313 && v647[1] == 1195525195 )
        {
          if ( (*((_DWORD *)v642 + 631) & 0x2000) == 0 )
            goto LABEL_6586;
        }
        else if ( (v647[9] & 0x2000000) != 0 || (unsigned int)MmImageSectionPagable() )
        {
LABEL_6586:
          v5104[1] = -402653175;
          KeBugCheckEx(__ROL4__(-402653175, 101), 1uLL, v644, v645, v5290);
        }
      }
      LODWORD(v5037) = 0;
      v648 = RtlLookupFunctionTable(v645, &v5559, v5104);
      v5557 = v648;
      if ( !v648 )
      {
        v655 = v5561;
        goto LABEL_968;
      }
      v649 = (_DWORD *)vUncompressedBufPool2;
      v5562 = 0LL;
      if ( vUncompressedBufPool2 && ntoskrnlexe_Base == v5559 )
      {
        v5562 = vUncompressedBufPool2;
        v5563 = 0LL;
        v5564 = v5481;
        v5565 = 0;
        v650 = RtlLookupFunctionEntry(v645, &v5559, 0LL);
        v5558 = v650;
        if ( !v650 )
          goto LABEL_963;
        v651 = v650 - v5559;
        v652 = 0;
        v653 = *v649 - 1;
        v654 = 0LL;
        if ( v653 < 0 )
        {
LABEL_965:
          v74 = v653 < v652;
          v648 = v5557;
          if ( !v74 )
            v5563 = (unsigned __int64)&v649[2 * v654 + 2];
        }
        else
        {
          do
          {
            v654 = (unsigned int)((v653 + v652) >> 1);
            if ( v651 - v649[2 * v654 + 2] >= 0 )
            {
              if ( v651 - v649[2 * v654 + 2] <= 0 )
                goto LABEL_965;
              v652 = v654 + 1;
            }
            else
            {
              if ( !(_DWORD)v654 )
                break;
              v653 = v654 - 1;
            }
          }
          while ( v653 >= v652 );
LABEL_963:
          v648 = v5557;
        }
      }
      v655 = v5291;
      v5556 = v645;
      v5561 = v5291;
      v5104[0] /= 0xCu;
      v5290 = v5559;
      v5560 = v648 + 12LL * v5104[0];
LABEL_968:
      while ( v648 && v648 != v5560 )
      {
        if ( v5562 )
        {
          if ( !v5558 )
            break;
          if ( v5563 )
          {
            v656 = *(_DWORD *)(v5563 + 4);
            if ( (v656 & 1) != 0 )
            {
              *v655 = v5559 + (v656 & 0xFFFFFFFE);
              v5563 = 0LL;
            }
            else
            {
              v657 = (unsigned int)(v5565 + v656);
              v658 = (unsigned int)v657;
              v659 = v657 + 4;
              if ( v659 < v658 || v659 > v5564 )
              {
                v5104[2] = -402653175;
                KeBugCheckEx(__ROL4__(-402653175, 101), 0x12uLL, v5562, v5559, v658);
              }
              v660 = *(_DWORD *)(v5562 + v658);
              v5565 += 4;
              v5563 &= -(__int64)((v660 & 1) != 0);
              if ( (v660 & 1) != 0 )
                v660 &= ~1u;
              *v655 = v5559 + v660;
            }
          }
          else
          {
            *v655 = v5558;
            v5558 = 0LL;
          }
        }
        else
        {
          while ( 1 )
          {
            v661 = v648;
            v662 = RtlpConvertFunctionEntry(v648, v5559);
            v663 = RtlpSameFunction(v662, v5559, v5556);
            v648 = v5557 + 12;
            v5557 += 12LL;
            if ( v663 )
              break;
            if ( v648 == v5560 )
              goto LABEL_983;
          }
          *v5561 = v661;
        }
        _disable();
        if ( !(_BYTE)KdDebuggerNotPresent )
        {
          while ( 1 )
            ;
        }
        _enable();
        v676 = *((unsigned int *)v642 + 513);
        v677 = *((unsigned int *)v642 + 593);
        LODWORD(v5037) = 1;
        v678 = v5290 + *(unsigned int *)v5291[0];
        v679 = v676 + 48;
        v680 = *(_DWORD *)(v5291[0] + 4LL) - *(_DWORD *)v5291[0];
        if ( (unsigned int)(v676 + 48) <= *((_DWORD *)v642 + 665) )
        {
          v681 = (__int64)v642; // 원본 버퍼 그냥 그대로 저장
          *((_DWORD *)v642 + 513) = v679;
        }
        else
        {
          v681 = GetRandomizedSafeContext(v642, v679, v677);
          if ( !v681 )
            goto LABEL_1073;
          v682 = *((_DWORD *)v642 + 630);
          if ( (v682 & 2) == 0 )
          {
            v683 = *((_DWORD *)v642 + 513);
            v684 = *((_QWORD *)v642 + 253);
            v685 = (v682 & 0x10000000) != 0 ? *((_DWORD *)v642 + 593) : 0;
            if ( v683 >= 8 )
            {
              v686 = (unsigned __int64)v683 >> 3;
              do
              {
                *(_QWORD *)v642 = 0LL;
                v683 -= 8;
                v642 += 8;
                --v686;
              }
              while ( v686 );
            }
            for ( ; v683; --v683 )
              *v642++ = 0;
            v687 = *(_DWORD *)(v681 + 2372);
            v688 = Timer;
            *(_DWORD *)(v681 + 2372) = v685;
            if ( v685 == 3 )
            {
              (*(void (__fastcall **)(__int64))(v681 + 872))(v684);
            }
            else if ( (*(_DWORD *)(v681 + 2520) & 0x8000000) != 0 || (Timer = v688, !v685) )
            {
              (*(void (__fastcall **)(__int64))(v681 + 264))(v684);
            }
            else
            {
              (*(void (__fastcall **)(__int64, _QWORD))(v681 + 568))(v684 - 8, *(_QWORD *)(v684 - 8));
              Timer = v688;
            }
            *(_DWORD *)(v681 + 2372) = v687;
          }
          *(_DWORD *)(v681 + 2520) &= ~2u;
        }
        ++*(_DWORD *)(v681 + 2092);
        v689 = v681 + v676;
        v5045 = v681 + v676;
        v642 = (_BYTE *)v681;
        if ( !v681 )
          goto LABEL_1073;
        v690 = 48;
        v691 = 6LL;
        v692 = (_QWORD *)(v681 + v676);
        do
        {
          *v692 = 0LL;
          v690 -= 8;
          ++v692;
          --v691;
        }
        while ( v691 );
        for ( ; v690; --v690 )
        {
          *(_BYTE *)v692 = 0;
          v692 = (_QWORD *)((char *)v692 + 1);
        }
        *(_DWORD *)v689 = 0;
        v693 = v678 + v680;
        *(_QWORD *)(v689 + 8) = v678;
        v694 = (_QWORD *)v678;
        *(_DWORD *)(v689 + 16) = v680;
        v695 = (const char *)v678;
        *(_DWORD *)(v681 + 2120) += v680;
        v696 = *(_DWORD *)(v681 + 2100);
        v697 = *(_QWORD *)(v681 + 2104);
        if ( v678 < v693 )
        {
          do
          {
            _mm_prefetch(v695, 0);
            v695 += 64;
          }
          while ( (unsigned __int64)v695 < v693 );
        }
        v698 = *(_QWORD *)(v681 + 2104);
        v699 = v680 >> 7;
        if ( v680 >> 7 )
        {
          do
          {
            v700 = 8LL;
            do
            {
              v701 = v694[1] ^ __ROL8__(*v694 ^ v698, v696);
              v694 += 2;
              v698 = __ROL8__(v701, v696);
              --v700;
            }
            while ( v700 );
            v702 = (__ROL8__(v697 ^ ((unsigned __int64)v694 - v678), 17) ^ v697 ^ ((unsigned __int64)v694 - v678))
                 * (unsigned __int128)0x7010008004002001uLL;
            v5291[1] = *((_QWORD *)&v702 + 1);
            v696 = (BYTE8(v702) ^ (unsigned __int8)(v702 ^ v696)) & 0x3F;
            if ( !v696 )
              LOBYTE(v696) = 1;
            --v699;
          }
          while ( v699 );
          v689 = v5045;
        }
        v703 = v680 & 0x7F;
        if ( v703 >= 8 )
        {
          v704 = (unsigned __int64)(v680 & 0x7F) >> 3;
          do
          {
            v698 = __ROL8__(*v694++ ^ v698, v696);
            v703 -= 8;
            --v704;
          }
          while ( v704 );
        }
        for ( ; v703; --v703 )
        {
          v705 = *(unsigned __int8 *)v694;
          v694 = (_QWORD *)((char *)v694 + 1);
          v698 = __ROL8__(v705 ^ v698, v696);
        }
        for ( m = v698; ; LODWORD(v698) = m ^ v698 )
        {
          m >>= 31;
          if ( !m )
            break;
        }
        *(_DWORD *)(v689 + 20) = v698 & 0x7FFFFFFF;
        *((_DWORD *)v642 + 530) += v680;
        if ( !v642 )
          goto LABEL_1073;
        v707 = v5059;
        *(_DWORD *)(v689 + 24) = 1;
        v643 = v707 + 1;
        v655 = v5561;
        v648 = v5557;
        LODWORD(v5059) = v643;
      }
LABEL_983:
      if ( (_DWORD)v5037 )
      {
        v644 = v5040;
      }
      else
      {
        v664 = *((unsigned int *)v642 + 513);
        v644 = v5040;
        v665 = v664 + 48;
        v666 = (const char *)v5589[(unsigned int)v5040];
        if ( (unsigned int)(v664 + 48) <= *((_DWORD *)v642 + 665) )
        {
          v667 = (__int64)v642;
          *((_DWORD *)v642 + 513) = v665;
        }
        else
        {
          v667 = GetRandomizedSafeContext(v642, v665, *((unsigned int *)v642 + 593));
          v668 = 0LL;
          if ( !v667 )
            goto LABEL_2930;
          v669 = *((_DWORD *)v642 + 630);
          if ( (v669 & 2) == 0 )
          {
            v670 = *((_DWORD *)v642 + 513);
            v671 = *((_QWORD *)v642 + 253);
            v672 = (v669 & 0x10000000) != 0 ? *((_DWORD *)v642 + 593) : 0;
            if ( v670 >= 8 )
            {
              v673 = (unsigned __int64)v670 >> 3;
              do
              {
                *(_QWORD *)v642 = 0LL;
                v670 -= 8;
                v642 += 8;
                --v673;
              }
              while ( v673 );
            }
            for ( ; v670; --v670 )
              *v642++ = 0;
            v674 = *(_DWORD *)(v667 + 2372);
            v675 = Timer;
            *(_DWORD *)(v667 + 2372) = v672;
            if ( v672 == 3 )
            {
              (*(void (__fastcall **)(__int64))(v667 + 872))(v671);
            }
            else if ( (*(_DWORD *)(v667 + 2520) & 0x8000000) != 0 || (Timer = v675, !v672) )
            {
              (*(void (__fastcall **)(__int64))(v667 + 264))(v671);
            }
            else
            {
              (*(void (__fastcall **)(__int64, _QWORD))(v667 + 568))(v671 - 8, *(_QWORD *)(v671 - 8));
              Timer = v675;
            }
            *(_DWORD *)(v667 + 2372) = v674;
            v644 = v5040;
          }
          *(_DWORD *)(v667 + 2520) &= ~2u;
        }
        ++*(_DWORD *)(v667 + 2092);
        v708 = v667 + v664;
        v668 = 0LL;
        v642 = (_BYTE *)v667;
        if ( !v667 )
          goto LABEL_2930;
        v709 = 48;
        v710 = 6LL;
        v711 = (_QWORD *)(v667 + v664);
        do
        {
          *v711 = 0LL;
          v709 -= 8;
          ++v711;
          --v710;
        }
        while ( v710 );
        for ( ; v709; --v709 )
        {
          *(_BYTE *)v711 = 0;
          v711 = (_QWORD *)((char *)v711 + 1);
        }
        *(_DWORD *)v708 = 0;
        *(_QWORD *)(v708 + 8) = v666;
        v712 = v666;
        *(_DWORD *)(v708 + 16) = 4;
        *(_DWORD *)(v667 + 2120) += 4;
        v713 = *(_DWORD *)(v667 + 2100);
        v714 = *(_QWORD *)(v667 + 2104);
        if ( v666 < v666 + 4 )
        {
          do
          {
            _mm_prefetch(v712, 0);
            v712 += 64;
          }
          while ( v712 < v666 + 4 );
        }
        v715 = 4;
        do
        {
          v716 = *(unsigned __int8 *)v666++;
          v714 = __ROL8__(v716 ^ v714, v713);
          --v715;
        }
        while ( v715 );
        v717 = v5059;
        for ( n = v714; ; LODWORD(v714) = n ^ v714 )
        {
          n >>= 31;
          if ( !n )
            break;
        }
        v719 = Timer;
        *(_DWORD *)(v708 + 20) = v714 & 0x7FFFFFFF;
        v668 = 0LL;
        *((_DWORD *)v642 + 530) += 4;
        if ( !v642 )
          goto LABEL_2930;
        v643 = v717 + 1;
        *(_DWORD *)(v708 + 24) = 1;
        LODWORD(v5059) = v643;
        Timer = v719;
      }
    }
    LODWORD(v5040) = ++v644;
    if ( v644 < 0x33 )
      continue;
    break;
  }
  if ( (*((_DWORD *)v642 + 630) & 0x20000000) != 0 )
    goto LABEL_1094;
  v720 = *((unsigned int *)v642 + 513);
  v721 = v720 + 48;
  if ( (unsigned int)(v720 + 48) <= *((_DWORD *)v642 + 665) )
  {
    v722 = (__int64)v642;
    *((_DWORD *)v642 + 513) = v721;
    goto LABEL_1085;
  }
  v722 = GetRandomizedSafeContext(v642, v721, *((unsigned int *)v642 + 593));
  v668 = 0LL;
  if ( !v722 )
    goto LABEL_2930;
  v723 = *((_DWORD *)v642 + 630);
  if ( (v723 & 2) == 0 )
  {
    v724 = *((_DWORD *)v642 + 513);
    v725 = *((_QWORD *)v642 + 253);
    v726 = (v723 & 0x10000000) != 0 ? *((_DWORD *)v642 + 593) : 0;
    if ( v724 >= 8 )
    {
      v727 = (unsigned __int64)v724 >> 3;
      do
      {
        *(_QWORD *)v642 = 0LL;
        v724 -= 8;
        v642 += 8;
        --v727;
      }
      while ( v727 );
    }
    for ( ; v724; --v724 )
      *v642++ = 0;
    v728 = *(_DWORD *)(v722 + 2372);
    v729 = Timer;
    *(_DWORD *)(v722 + 2372) = v726;
    if ( v726 == 3 )
    {
      (*(void (__fastcall **)(__int64))(v722 + 872))(v725);
    }
    else if ( (*(_DWORD *)(v722 + 2520) & 0x8000000) != 0 || (Timer = v729, !v726) )
    {
      (*(void (__fastcall **)(__int64))(v722 + 264))(v725);
    }
    else
    {
      (*(void (__fastcall **)(__int64, _QWORD))(v722 + 568))(v725 - 8, *(_QWORD *)(v725 - 8));
      Timer = v729;
    }
    *(_DWORD *)(v722 + 2372) = v728;
  }
  *(_DWORD *)(v722 + 2520) &= ~2u;
LABEL_1085:
  ++*(_DWORD *)(v722 + 2092);
  v735 = v722 + v720;
  v668 = 0LL;
  v642 = (_BYTE *)v722;
  if ( !v722 )
  {
LABEL_2930:
    v5183 = v668;
    goto LABEL_1074;
  }
  v736 = 48;
  v737 = 6LL;
  v738 = (_QWORD *)v735;
  do
  {
    *v738 = 0LL;
    v736 -= 8;
    ++v738;
    --v737;
  }
  while ( v737 );
  for ( ; v736; --v736 )
  {
    *(_BYTE *)v738 = 0;
    v738 = (_QWORD *)((char *)v738 + 1);
  }
  *(_DWORD *)v735 = 0;
  *(_QWORD *)(v735 + 8) = 0LL;
  *(_DWORD *)(v735 + 16) = 0;
  v739 = *((_QWORD *)v642 + 263);
  for ( ii = v739; ; LODWORD(v739) = ii ^ v739 )
  {
    ii >>= 31;
    if ( !ii )
      break;
  }
  v5291[6] = v735;
  *(_DWORD *)(v735 + 20) = v739 & 0x7FFFFFFF;
  *((_DWORD *)v642 + 668) = v735 - (_DWORD)v642;
  *((_DWORD *)v642 + 669) += 48;
LABEL_1094:
  *((_DWORD *)v642 + 512) = v643;
  *((_DWORD *)v642 + 669) += 48 * v643;
LABEL_1095:
  v741 = (ULONG_PTR)Timer;
  v5183 = (unsigned int *)v642;
  if ( !v642 )
    goto LABEL_1074;
  v742 = *((_DWORD *)v642 + 630);
  v743 = (unsigned int)v5105;
  LODWORD(v5059) = *((_DWORD *)v642 + 513);
  LODWORD(v5040) = 0;
  v744 = 0LL;
  if ( (v742 & 0x20000000) == 0 && (v5105 & 1) == 0 )
  {
    v745 = __rdtsc();
    v746 = (__ROR8__(v745, 3) ^ v745) * (unsigned __int128)0x7010008004002001uLL;
    v5291[7] = *((_QWORD *)&v746 + 1);
    if ( ((unsigned __int64)v746 ^ *((_QWORD *)&v746 + 1)) % 0xA
      || (v747 = __rdtsc(),
          v744 = 1LL,
          LODWORD(v5040) = 1,
          v748 = (__ROR8__(v747, 3) ^ v747) * (unsigned __int128)0x7010008004002001uLL,
          v5291[8] = *((_QWORD *)&v748 + 1),
          ((unsigned __int64)v748 ^ *((_QWORD *)&v748 + 1)) % 0xA >= 3) )
    {
      v743 = (unsigned int)v5105;
    }
    else
    {
      v749 = v742 | 0x8000;
      *((_DWORD *)v642 + 630) = v749;
      v750 = __rdtsc();
      LODWORD(v5040) = 1;
      Timer = (PKTIMER)v741;
      v751 = (__ROR8__(v750, 3) ^ v750) * (unsigned __int128)0x7010008004002001uLL;
      v5291[9] = *((_QWORD *)&v751 + 1);
      v752 = v751 ^ *((_QWORD *)&v751 + 1);
      *(_QWORD *)&v751 = 5 * (((unsigned __int64)v751 ^ *((_QWORD *)&v751 + 1)) / 0xA);
      v743 = (unsigned int)v5105;
      if ( (unsigned __int64)(v752 - 2 * v751) < 3 )
      {
        LODWORD(v5040) = 1;
        *((_DWORD *)v642 + 630) = v749 | 0x80000;
        Timer = (PKTIMER)v741;
      }
    }
  }
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  LODWORD(v753) = 0;
  LODWORD(v5037) = 0;
  v5045 = v5291[10];
  v5050 = (struct _KTIMER *)v5291[11];
  v5049 = v5292[1];
  v5046 = vFunctionExtentListPtr[1];
  v5048 = vFunctionExtentListPtr[3];
  v5047 = vFunctionExtentListPtr[5];
  v5041 = (_DWORD *)vFunctionExtentListPtr[7];
  v5042 = vFunctionExtentListPtr[9];
  while ( 2 )
  {
    v754 = &qword_140C37580[3 * (unsigned int)v753];
    v753 = 0x80000000LL;
    if ( (v754[2] & 0xE0000000) == 0x80000000 || !(_DWORD)v744 )
    {
      v755 = v754[1];
      v756 = 0LL;
      v5294 = v755;
      if ( v755 )
      {
        switch ( v755 )
        {
          case 1uLL:
            v757 = PsHalImageBase;
            break;
          case 2uLL:
            v5294 = 0LL;
            v757 = 0LL;
            if ( (v743 & 6) != 0 )
              goto LABEL_1140;
            v758 = (_QWORD *)PspPicoProviderRanges;
            if ( !PspPicoProviderRanges )
              goto LABEL_1140;
            v759 = 0LL;
            for ( jj = 0; (unsigned __int64)jj < *(_QWORD *)(PspPicoProviderRanges + 8); v756 = ++jj )
            {
              v759 = (ULONG_PTR *)(*v758 + 16 * v756);
              if ( v759[1] )
              {
                (*((void (__fastcall **)(ULONG_PTR, ULONG_PTR *, ULONG_PTR, __int64))v642 + 67))(
                  *v759,
                  &v5294,
                  v741,
                  v744);
                v757 = v5294;
                if ( v5294 )
                  break;
              }
              v758 = (_QWORD *)PspPicoProviderRanges;
            }
            if ( !v757 )
            {
              v741 = PspPicoProviderRanges;
              if ( *(_QWORD *)(PspPicoProviderRanges + 8) )
              {
                v5006 = *v759;
                v5114[1] = -402653175;
                KeBugCheckEx(__ROL4__(-402653175, 101), 0x13uLL, PspPicoProviderRanges, v5006, (ULONG_PTR)v759);
              }
              goto LABEL_1140;
            }
            goto LABEL_1141;
          case 3uLL:
            v5294 = 0LL;
            v757 = 0LL;
            if ( (v743 & 6) != 0 )
              goto LABEL_1140;
            v761 = (_QWORD *)__24;
            if ( !__24 )
              goto LABEL_1140;
            v762 = 0LL;
            for ( kk = 0; (unsigned __int64)kk < *(_QWORD *)(__24 + 8); v756 = ++kk )
            {
              v762 = (ULONG_PTR *)(*v761 + 16 * v756);
              if ( v762[1] )
              {
                (*((void (__fastcall **)(ULONG_PTR, ULONG_PTR *, ULONG_PTR, __int64))v642 + 67))(
                  *v762,
                  &v5294,
                  v741,
                  v744);
                v757 = v5294;
                if ( v5294 )
                  break;
              }
              v761 = (_QWORD *)__24;
            }
            if ( !v757 )
            {
              v741 = __24;
              if ( *(_QWORD *)(__24 + 8) )
              {
                v5007 = *v762;
                v5114[2] = -402653175;
                KeBugCheckEx(__ROL4__(-402653175, 101), 0x14uLL, __24, v5007, (ULONG_PTR)v762);
              }
              goto LABEL_1140;
            }
            goto LABEL_1141;
          default:
            v757 = 0LL;
            _disable();
            v642 = v5183;
            v764 = *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *((_QWORD *)v5183 + 203));
            _enable();
            (*((void (__fastcall **)(__int64, unsigned __int64, ULONG_PTR, __int64))v642 + 47))(v764, v743, v741, v744);
            LOBYTE(v765) = 1;
            (*((void (__fastcall **)(_QWORD, __int64))v642 + 30))(*((_QWORD *)v642 + 166), v765);
            for ( mm = (PVOID *)PsLoadedModuleList; ; mm = (PVOID *)*mm )
            {
              if ( mm == &PsLoadedModuleList )
                goto LABEL_1138;
              v767 = (char *)mm - *((_QWORD *)v642 + 235);
              if ( RtlEqualUnicodeString((PCUNICODE_STRING)v754, (PCUNICODE_STRING)&v767[*((_QWORD *)v642 + 238)], 1u) )
                break;
            }
            v757 = *(_QWORD *)&v767[*((_QWORD *)v642 + 236)];
LABEL_1138:
            (*((void (__fastcall **)(_QWORD))v642 + 37))(*((_QWORD *)v642 + 166));
            (*((void (**)(void))v642 + 48))();
            break;
        }
        v5294 = v757;
        goto LABEL_1140;
      }
      v757 = 0x140000000uLL;
      v5294 = 0x140000000uLL;
LABEL_1140:
      if ( !v757 )
        goto LABEL_2274;
LABEL_1141:
      v768 = *((_DWORD *)v754 + 4);
      LODWORD(PgContextSize) = v768 & 1;
      if ( (v768 & 4) != 0 )
      {
        v4393 = (*((_DWORD *)v642 + 631) & 0x400) == 0;
        LODWORD(PgContextSize) = v768 & 1;
        if ( !v4393 )
          LODWORD(PgContextSize) = v768 & 1 | 0x10;
      }
      v769 = v5040;
      if ( (v768 & 2) == 0 || (_DWORD)v5040 )
        goto LABEL_1753;
      v770 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))*((_QWORD *)v642 + 66);
      v5295[0] = v642;
      v771 = v642;
      v772 = v770(v757, v5482, v741, v744);
      v773 = v5484;
      v774 = v772;
      sub_140B9EDF0_Offset = v772;
      LODWORD(v5043) = v5484;
      v5053 = v5483;
      if ( !v5483 )
      {
        if ( (*((_DWORD *)v642 + 630) & 0x100000) == 0 )
        {
          v5114[12] = -402653175;
          KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, v757, 5uLL, 0LL);
        }
        goto LABEL_1074;
      }
      v775 = &v5441;
      v5440 = 0LL;
      v776 = 4;
      v777 = v5040;
      do
      {
        *(_BYTE *)v775 = 0;
        v775 = (unsigned int *)((char *)v775 + 1);
        --v776;
      }
      while ( v776 );
      v778 = 0;
      if ( !*((_DWORD *)v642 + 523) )
        goto LABEL_1188;
      v779 = v5441;
      v780 = HIDWORD(v5440);
      LODWORD(v741) = v5440;
      LODWORD(v5040) = v777;
      while ( 2 )
      {
        v781 = v642;
        if ( *((_QWORD *)v642 + 344) )
          v781 = (_DWORD *)*((_QWORD *)v642 + 344);
        v5022 = v781;
        v782 = 0;
        v783 = (_DWORD *)((char *)v781 + (unsigned int)v781[522]);
        if ( (_DWORD)v741 && v780 <= v778 )
        {
          v782 = v780;
          v783 = (_DWORD *)((char *)v781 + v779);
        }
        if ( v782 != v778 )
        {
          v784 = v778 - v782;
          v782 = v778;
          while ( 1 )
          {
            if ( *v783 == 1 )
            {
LABEL_1174:
              v785 = 4 * (v783[4] / 0xCu) + 48;
              goto LABEL_1175;
            }
            if ( *v783 == 7 )
            {
              v785 = (unsigned int)(24 * (v783[6] + 2));
              goto LABEL_1175;
            }
            if ( *v783 == 8 )
              break;
            switch ( *v783 )
            {
              case 10:
                v785 = (unsigned int)(16 * (v783[7] + 3));
                break;
              case 28:
                v786 = *((unsigned __int16 *)v783 + 20);
LABEL_1172:
                v785 = (v786 + 55) & 0xFFFFFFF8;
                break;
              case 30:
                v785 = (((v783[9] != 0 ? v783[9] - 1 : 0) / 0xCu + 7) & 0xFFFFFFF8)
                     + 24 * (*((unsigned __int16 *)v783 + 20) + 2);
                break;
              case 33:
                v785 = 20 * (unsigned int)(((v783[8] & 0xFFF) + (unsigned __int64)(unsigned int)v783[10] + 4095) >> 12)
                     + 48;
                break;
              case 43:
                goto LABEL_1174;
              default:
                v785 = 48LL;
                break;
            }
LABEL_1175:
            v783 = (int *)((char *)v783 + v785);
            if ( !--v784 )
            {
              LODWORD(v781) = (_DWORD)v5022;
              v774 = sub_140B9EDF0_Offset;
              v773 = v5043;
              goto LABEL_1177;
            }
          }
          v786 = *((unsigned __int16 *)v783 + 16);
          goto LABEL_1172;
        }
LABEL_1177:
        v741 = 1LL;
        v780 = v782;
        LODWORD(v5440) = 1;
        v779 = (_DWORD)v783 - (_DWORD)v781;
        HIDWORD(v5440) = v782;
        v5441 = (_DWORD)v783 - (_DWORD)v781;
        v744 = 1LL;
        v787 = *v783;
        if ( (*v783 != 1 && v787 != 12 && v787 != 43 || *((_QWORD *)v783 + 1) != v774 || v783[4] != v773)
          && ((unsigned int)(v787 - 33) > 1 || *((_QWORD *)v783 + 4) != v5053) )
        {
          if ( ++v778 >= *((_DWORD *)v642 + 523) )
            goto LABEL_1187;
          continue;
        }
        break;
      }
      if ( v783 )
      {
LABEL_1775:
        v769 = v5040;
        goto LABEL_1753;
      }
LABEL_1187:
      v777 = v5040;
LABEL_1188:
      v788 = v777;
      LODWORD(v5040) = v777;
      v789 = Timer;
      LODWORD(v5043) = PgContextSize;
      v790 = (__int64 (__fastcall *)(_QWORD, _QWORD))*((_QWORD *)v642 + 66);
      v5296 = v642;
      v791 = v790(v757, v5485);
      v792 = v5487;
      v5044 = v791;
      LODWORD(PgC_0_1) = v5487;
      v5106[0] = v5487;
      v5036 = v5486;
      if ( !v5486 )
      {
        if ( (*((_DWORD *)v642 + 630) & 0x100000) == 0 )
        {
          v5114[3] = -402653175;
          KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, v757, 5uLL, 0LL);
        }
        v5183 = (unsigned int *)v642;
        v793 = Timer;
        goto LABEL_1529;
      }
      v794 = 4;
      v5442 = 0LL;
      v795 = 0LL;
      v796 = &v5443;
      do
      {
        *(_BYTE *)v796 = 0;
        v796 = (int *)((char *)v796 + 1);
        --v794;
      }
      while ( v794 );
      v797 = 0;
      if ( !*((_DWORD *)v642 + 523) )
        goto LABEL_1229;
      v798 = v5443;
      v799 = v788;
      LODWORD(v795) = HIDWORD(v5442);
      LODWORD(v800) = v5442;
      v801 = v5044;
      LODWORD(v5040) = v799;
      Timer = v789;
      while ( 2 )
      {
        v802 = v642;
        if ( *((_QWORD *)v642 + 344) )
          v802 = (_BYTE *)*((_QWORD *)v642 + 344);
        sub_140B9EDF0_Offset = (__int64)v802;
        v803 = 0;
        v804 = &v802[*((unsigned int *)v802 + 522)];
        if ( (_DWORD)v800 && (unsigned int)v795 <= v797 )
        {
          v803 = v795;
          v804 = &v802[v798];
        }
        if ( v803 != v797 )
        {
          v805 = v797 - v803;
          v803 = v797;
          while ( 1 )
          {
            if ( *(_DWORD *)v804 == 1 )
            {
LABEL_1218:
              v806 = 4 * (*((_DWORD *)v804 + 4) / 0xCu) + 48;
              goto LABEL_1219;
            }
            if ( *(_DWORD *)v804 == 7 )
            {
              v806 = (unsigned int)(24 * (*((_DWORD *)v804 + 6) + 2));
              goto LABEL_1219;
            }
            if ( *(_DWORD *)v804 == 8 )
              break;
            switch ( *(_DWORD *)v804 )
            {
              case 0xA:
                v806 = (unsigned int)(16 * (*((_DWORD *)v804 + 7) + 3));
                break;
              case 0x1C:
                v807 = *((unsigned __int16 *)v804 + 20);
LABEL_1216:
                v806 = (v807 + 55) & 0xFFFFFFF8;
                break;
              case 0x1E:
                v806 = (((*((_DWORD *)v804 + 9) != 0 ? *((_DWORD *)v804 + 9) - 1 : 0) / 0xCu + 7) & 0xFFFFFFF8)
                     + 24 * (*((unsigned __int16 *)v804 + 20) + 2);
                break;
              case 0x21:
                v806 = 20
                     * (unsigned int)(((*((_DWORD *)v804 + 8) & 0xFFF)
                                     + (unsigned __int64)*((unsigned int *)v804 + 10)
                                     + 4095) >> 12)
                     + 48;
                break;
              case 0x2B:
                goto LABEL_1218;
              default:
                v806 = 48LL;
                break;
            }
LABEL_1219:
            v804 += v806;
            if ( !--v805 )
            {
              LODWORD(v802) = sub_140B9EDF0_Offset;
              v792 = (int)PgC_0_1;
              v801 = v5044;
              goto LABEL_1221;
            }
          }
          v807 = *((unsigned __int16 *)v804 + 16);
          goto LABEL_1216;
        }
LABEL_1221:
        LODWORD(v5442) = 1;
        v798 = (_DWORD)v804 - (_DWORD)v802;
        v795 = v803;
        v5443 = (_DWORD)v804 - (_DWORD)v802;
        v800 = 1LL;
        HIDWORD(v5442) = v803;
        v808 = *(_DWORD *)v804;
        if ( (*(_DWORD *)v804 != 1 && v808 != 12 && v808 != 43
           || *((_QWORD *)v804 + 1) != v801
           || *((_DWORD *)v804 + 4) != v792)
          && ((unsigned int)(v808 - 33) > 1 || *((_QWORD *)v804 + 4) != v5036) )
        {
          if ( ++v797 >= *((_DWORD *)v642 + 523) )
            goto LABEL_1229;
          continue;
        }
        break;
      }
      if ( v804 )
      {
        v5183 = (unsigned int *)v642;
        goto LABEL_1743;
      }
LABEL_1229:
      LODWORD(PgC_0_1) = v5106[0];
      if ( (PgContextSize & 0x10) == 0 || (*((_DWORD *)v642 + 631) & 0x400) != 0 )
      {
        v809 = v5043;
      }
      else
      {
        v809 = PgContextSize & 0xFFFFFFEF;
        LODWORD(v5043) = PgContextSize & 0xFFFFFFEF;
      }
      v810 = v5036;
      if ( (v809 & 0x10) != 0 && !(unsigned int)sub_140B9ED30(v642, v5036) )
      {
        v809 &= ~0x10u;
        LODWORD(v5043) = v809;
      }
      v811 = (char **)*((_QWORD *)v642 + 165);
      LODWORD(v5025) = v809 & 1;
      _disable();
      v812 = v5183;
      v813 = *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *((_QWORD *)v5183 + 203));
      _enable();
      (*((void (__fastcall **)(__int64, __int64))v812 + 47))(v813, v795);
      LOBYTE(v814) = 1;
      (*((void (__fastcall **)(_QWORD, __int64))v812 + 31))(*((_QWORD *)v812 + 166), v814);
      v815 = *v811;
      if ( *v811 != (char *)v811 )
      {
        v816 = *((_QWORD *)v812 + 235);
        while ( 1 )
        {
          v817 = *(_QWORD *)&v815[*((_QWORD *)v812 + 236) - v816];
          if ( v5036 >= v817 && v5036 < v817 + *(unsigned int *)&v815[*((_QWORD *)v812 + 237) - v816] )
            break;
          v815 = *(char **)v815;
          if ( v815 == (char *)v811 )
            goto LABEL_1245;
        }
        (*((void (__fastcall **)(char *, _QWORD))v812 + 29))(&v815[-v816], (unsigned int)!(v809 & 1) + 1);
      }
LABEL_1245:
      v793 = Timer;
      v818 = v5040;
      (*((void (__fastcall **)(_QWORD))v812 + 37))(*((_QWORD *)v812 + 166));
      (*((void (**)(void))v812 + 48))();
      if ( (*((_DWORD *)v812 + 630) & 0x20000000) != 0 )
      {
        v820 = sub_140BA596C(v5295, v5036, v809);
        v771 = (_BYTE *)v5295[0];
        v642 = (_BYTE *)v5295[0];
        v795 = v5042;
        v5183 = (unsigned int *)v5295[0];
        if ( v820 < 0 )
        {
LABEL_1528:
          if ( v820 != -1073741554 )
            goto LABEL_1529;
        }
LABEL_1743:
        v1251 = (*((__int64 (__fastcall **)(ULONG_PTR, __int64, ULONG_PTR))v771 + 65))(v5053, v795, v800);
        v1252 = *(unsigned int *)(v1251 + 148);
        if ( (unsigned int)v1252 >= 0x14 )
        {
          v1253 = *(unsigned int *)(v1251 + 144);
          v1254 = v1253 + v5053 + v1252;
          for ( nn = v5053 + v1253; nn != v1254; nn += 20LL )
          {
            if ( !*(_DWORD *)(nn + 12) )
              goto LABEL_1775;
            v1256 = *(unsigned int *)(nn + 16);
            if ( !(_DWORD)v1256 )
              break;
            v1257 = *(_QWORD *)(v1256 + v5053);
            if ( v1257 )
            {
              v1258 = sub_140B99A04(v5295, v1257, PgContextSize & 0x7FFFFFEF | 0x80000000);
              v642 = (_BYTE *)v5295[0];
              v5183 = (unsigned int *)v5295[0];
              if ( (int)(v1258 + 0x80000000) >= 0 && v1258 != -1073741554 )
                goto LABEL_1074;
            }
          }
        }
        v769 = v5040;
LABEL_1753:
        LODWORD(v5040) = v769;
        _disable();
        if ( !(_BYTE)KdDebuggerNotPresent )
        {
          while ( 1 )
            ;
        }
        _enable();
        v1259 = v5294;
        v1260 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))*((_QWORD *)v642 + 66);
        v5204 = v642;
        v1261 = (void *)v1260(v5294, v5489, v741, v744);
        v1262 = v5490;
        v1263 = v1261;
        v1264 = v5491;
        HalExtensionList = v1261;
        LODWORD(sub_140B9EDF0_Offset) = v5491;
        v5112 = v5491;
        v5026 = (PVOID)v5490;
        if ( !v5490 )
        {
          if ( (*((_DWORD *)v642 + 630) & 0x100000) == 0 )
          {
            v5114[21] = -402653175;
            KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, v1259, 5uLL, 0LL);
          }
          goto LABEL_1074;
        }
        v5444 = 0LL;
        LODWORD(v743) = 4;
        v1265 = Timer;
        v1266 = &v5445;
        do
        {
          *(_BYTE *)v1266 = 0;
          v1266 = (int *)((char *)v1266 + 1);
          v4393 = (_DWORD)v743 == 1;
          v743 = (unsigned int)(v743 - 1);
        }
        while ( !v4393 );
        v1267 = 0;
        if ( !*((_DWORD *)v642 + 523) )
          goto LABEL_1796;
        v1268 = v5445;
        LODWORD(v743) = HIDWORD(v5444);
        LODWORD(v741) = v5444;
        LODWORD(v5040) = v769;
        Timer = v1265;
        while ( 2 )
        {
          v1269 = v642;
          if ( *((_QWORD *)v642 + 344) )
            v1269 = (_BYTE *)*((_QWORD *)v642 + 344);
          v1270 = 0;
          v1271 = &v1269[*((unsigned int *)v1269 + 522)];
          if ( (_DWORD)v741 && (unsigned int)v743 <= v1267 )
          {
            v1270 = v743;
            v1271 = &v1269[v1268];
          }
          if ( v1270 != v1267 )
          {
            v1272 = v1267 - v1270;
            v1270 = v1267;
            while ( 1 )
            {
              if ( *(_DWORD *)v1271 == 1 )
              {
LABEL_1783:
                v1273 = 4 * (*((_DWORD *)v1271 + 4) / 0xCu) + 48;
                goto LABEL_1784;
              }
              if ( *(_DWORD *)v1271 == 7 )
              {
                v1273 = (unsigned int)(24 * (*((_DWORD *)v1271 + 6) + 2));
                goto LABEL_1784;
              }
              if ( *(_DWORD *)v1271 == 8 )
                break;
              switch ( *(_DWORD *)v1271 )
              {
                case 0xA:
                  v1273 = (unsigned int)(16 * (*((_DWORD *)v1271 + 7) + 3));
                  break;
                case 0x1C:
                  v1274 = *((unsigned __int16 *)v1271 + 20);
LABEL_1781:
                  v1273 = (v1274 + 55) & 0xFFFFFFF8;
                  break;
                case 0x1E:
                  v1273 = (((*((_DWORD *)v1271 + 9) != 0 ? *((_DWORD *)v1271 + 9) - 1 : 0) / 0xCu + 7) & 0xFFFFFFF8)
                        + 24 * (*((unsigned __int16 *)v1271 + 20) + 2);
                  break;
                case 0x21:
                  v1273 = 20
                        * (unsigned int)(((*((_DWORD *)v1271 + 8) & 0xFFF)
                                        + (unsigned __int64)*((unsigned int *)v1271 + 10)
                                        + 4095) >> 12)
                        + 48;
                  break;
                case 0x2B:
                  goto LABEL_1783;
                default:
                  v1273 = 48LL;
                  break;
              }
LABEL_1784:
              v1271 += v1273;
              if ( !--v1272 )
              {
                v1264 = sub_140B9EDF0_Offset;
                v1262 = (ULONG_PTR)v5026;
                v1263 = HalExtensionList;
                goto LABEL_1786;
              }
            }
            v1274 = *((unsigned __int16 *)v1271 + 16);
            goto LABEL_1781;
          }
LABEL_1786:
          v741 = 1LL;
          v743 = v1270;
          LODWORD(v5444) = 1;
          v1268 = (_DWORD)v1271 - (_DWORD)v1269;
          HIDWORD(v5444) = v1270;
          v5445 = (_DWORD)v1271 - (_DWORD)v1269;
          v1275 = *(_DWORD *)v1271;
          if ( (*(_DWORD *)v1271 != 1 && v1275 != 12 && v1275 != 43
             || *((PVOID *)v1271 + 1) != v1263
             || *((_DWORD *)v1271 + 4) != v1264)
            && ((unsigned int)(v1275 - 33) > 1 || *((_QWORD *)v1271 + 4) != v1262) )
          {
            if ( ++v1267 >= *((_DWORD *)v642 + 523) )
              goto LABEL_1796;
            continue;
          }
          break;
        }
        if ( v1271 )
          goto LABEL_2274;
LABEL_1796:
        v1276 = PgContextSize;
        LODWORD(sub_140B9EDF0_Offset) = v5112;
        if ( (PgContextSize & 0x10) != 0 )
        {
          if ( (*((_DWORD *)v642 + 631) & 0x400) == 0 )
          {
            v1276 = PgContextSize & 0xFFFFFFEF;
            LODWORD(PgContextSize) = PgContextSize & 0xFFFFFFEF;
          }
          if ( (v1276 & 0x10) != 0 && !(unsigned int)sub_140B9ED30(v642, v1262) )
          {
            v1276 &= ~0x10u;
            LODWORD(PgContextSize) = v1276;
          }
        }
        v1277 = (char **)*((_QWORD *)v642 + 165);
        LODWORD(v5022) = v1276 & 1;
        v1278 = !(v1276 & 1) + 1;
        _disable();
        v1279 = v5183;
        v1280 = *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *((_QWORD *)v5183 + 203));
        _enable();
        (*((void (__fastcall **)(__int64, unsigned __int64))v1279 + 47))(v1280, v743);
        LOBYTE(v1281) = 1;
        (*((void (__fastcall **)(_QWORD, __int64))v1279 + 31))(*((_QWORD *)v1279 + 166), v1281);
        v1282 = *v1277;
        if ( *v1277 != (char *)v1277 )
        {
          v1283 = *((_QWORD *)v1279 + 235);
          while ( 1 )
          {
            v1284 = *(_QWORD *)&v1282[*((_QWORD *)v1279 + 236) - v1283];
            if ( v1262 >= v1284 && v1262 < v1284 + *(unsigned int *)&v1282[*((_QWORD *)v1279 + 237) - v1283] )
              break;
            v1282 = *(char **)v1282;
            if ( v1282 == (char *)v1277 )
              goto LABEL_1809;
          }
          (*((void (__fastcall **)(char *, _QWORD))v1279 + 29))(&v1282[-v1283], v1278);
        }
LABEL_1809:
        v1285 = Timer;
        (*((void (__fastcall **)(_QWORD))v1279 + 37))(*((_QWORD *)v1279 + 166));
        (*((void (**)(void))v1279 + 48))();
        if ( (*((_DWORD *)v1279 + 630) & 0x20000000) != 0 )
        {
          v1287 = sub_140BA596C(&v5183, v1262, (unsigned int)PgContextSize);
          v642 = v5183;
          if ( v1287 < 0 )
            goto LABEL_2063;
          goto LABEL_2274;
        }
        v5529[4] = 0LL;
        v5492[4] = 0;
        LOBYTE(v1286) = 1;
        v1288 = (*((__int64 (__fastcall **)(ULONG_PTR, __int64, _QWORD, int *))v1279 + 64))(v1262, v1286, 0LL, &v5112);
        v1290 = 0;
        if ( v1288 )
          v1290 = v5112;
        else
          v5112 = 0;
        v5529[1] = v1288;
        v1291 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))*((_QWORD *)v1279 + 64);
        v5492[1] = v1290;
        LOBYTE(v1289) = 1;
        v1293 = v1291(v1262, v1289, 12LL, &v5112);
        v5027 = v1293;
        v1294 = 0;
        if ( v1293 )
          v1294 = v5112;
        else
          v5112 = 0;
        LODWORD(sub_140B9FDF0_Offset) = v1294;
        v5529[2] = v1293;
        v5492[2] = v1294;
        LOBYTE(v1292) = 1;
        v1295 = (*((__int64 (__fastcall **)(ULONG_PTR, __int64, __int64, int *))v1279 + 64))(v1262, v1292, 10LL, &v5112);
        v1296 = 0;
        if ( v1295 )
          v1296 = v5112;
        else
          v5112 = 0;
        v5529[3] = v1295;
        v1297 = (__int64 (__fastcall *)(_QWORD))*((_QWORD *)v1279 + 65);
        v5492[3] = v1296;
        v1298 = v1297(v1262);
        if ( v1298 )
        {
          v1299 = (*((__int64 (__fastcall **)(ULONG_PTR, int *))v1279 + 147))(v1262, &v5312);
          v1300 = *((unsigned int *)v1279 + 513);
          v1301 = *((unsigned int *)v1279 + 593);
          v5529[5] = v1299;
          v5492[0] = *(_DWORD *)(v1298 + 84);
          v1302 = v1300 + 288;
          v5492[5] = v5312;
          v5529[0] = v1262;
          if ( (unsigned int)(v1300 + 288) <= *((_DWORD *)v1279 + 665) )
          {
            v642 = v1279;
            *((_DWORD *)v1279 + 513) = v1302;
            goto LABEL_1839;
          }
          v642 = (_BYTE *)GetRandomizedSafeContext(v1279, v1302, v1301);
          if ( !v642 )
            goto LABEL_2281;
          v1303 = *((_DWORD *)v1279 + 630);
          if ( (v1303 & 2) == 0 )
          {
            v1304 = *((_DWORD *)v1279 + 513);
            v1305 = *((_QWORD *)v1279 + 253);
            v1306 = (v1303 & 0x10000000) != 0 ? *((_DWORD *)v1279 + 593) : 0;
            if ( v1304 >= 8 )
            {
              v1307 = (unsigned __int64)v1304 >> 3;
              do
              {
                *(_QWORD *)v1279 = 0LL;
                v1304 -= 8;
                v1279 += 8;
                --v1307;
              }
              while ( v1307 );
            }
            for ( ; v1304; --v1304 )
              *v1279++ = 0;
            v1308 = *((_DWORD *)v642 + 593);
            v1309 = v1285;
            v1310 = v5040;
            v1311 = PgContextSize;
            *((_DWORD *)v642 + 593) = v1306;
            if ( v1306 == 3 )
            {
              (*((void (__fastcall **)(__int64))v642 + 109))(v1305);
            }
            else if ( (*((_DWORD *)v642 + 630) & 0x8000000) != 0
                   || (LODWORD(v5040) = v1310, Timer = v1309, LODWORD(PgContextSize) = v1311, !v1306) )
            {
              (*((void (__fastcall **)(__int64))v642 + 33))(v1305);
            }
            else
            {
              (*((void (__fastcall **)(__int64, _QWORD))v642 + 71))(v1305 - 8, *(_QWORD *)(v1305 - 8));
              LODWORD(v5040) = v1310;
              Timer = v1309;
              LODWORD(PgContextSize) = v1311;
            }
            *((_DWORD *)v642 + 593) = v1308;
          }
          *((_DWORD *)v642 + 630) &= ~2u;
LABEL_1839:
          v1312 = 6LL;
          v1313 = &v642[v1300];
          *((_DWORD *)v642 + 523) += 6;
          v5045 = (ULONG_PTR)&v642[v1300];
          if ( !v642 )
          {
LABEL_2281:
            v5204 = 0LL;
            goto LABEL_1074;
          }
          i21 = (ULONG_PTR)&v642[v1300];
          v1314 = (const char **)v5529;
          v1315 = v5492;
          v5028 = 6LL;
          do
          {
            v1316 = (unsigned int)*v1315;
            v1317 = 48;
            v1318 = *v1314;
            v1319 = v1313;
            LODWORD(v5020) = *v1315;
            do
            {
              *v1319 = 0LL;
              v1317 -= 8;
              ++v1319;
              --v1312;
            }
            while ( v1312 );
            for ( ; v1317; --v1317 )
            {
              *(_BYTE *)v1319 = 0;
              v1319 = (_QWORD *)((char *)v1319 + 1);
            }
            *(_DWORD *)v1313 = 0;
            v1320 = v1318;
            *((_QWORD *)v1313 + 1) = v1318;
            *((_DWORD *)v1313 + 4) = v1316;
            v1321 = v1318;
            *((_DWORD *)v642 + 530) += v1316;
            v1322 = *((_DWORD *)v642 + 525);
            v1323 = *((_QWORD *)v642 + 263);
            if ( v1318 < &v1318[v1316] )
            {
              do
              {
                _mm_prefetch(v1320, 0);
                v1320 += 64;
              }
              while ( v1320 < &v1318[v1316] );
            }
            v1324 = *((_QWORD *)v642 + 263);
            v1325 = (unsigned int)v1316 >> 7;
            if ( (unsigned int)v1316 >> 7 )
            {
              do
              {
                v1326 = 8LL;
                do
                {
                  v1327 = *((_QWORD *)v1321 + 1) ^ __ROL8__(*(_QWORD *)v1321 ^ v1324, v1322);
                  v1321 += 16;
                  v1324 = __ROL8__(v1327, v1322);
                  --v1326;
                }
                while ( v1326 );
                v1328 = (__ROL8__(v1323 ^ (v1321 - v1318), 17) ^ v1323 ^ (unsigned __int64)(v1321 - v1318))
                      * (unsigned __int128)0x7010008004002001uLL;
                v5313 = *((_QWORD *)&v1328 + 1);
                v1322 = ((unsigned __int8)v1328 ^ (unsigned __int8)(BYTE8(v1328) ^ v1322)) & 0x3F;
                if ( !v1322 )
                  LOBYTE(v1322) = 1;
                --v1325;
              }
              while ( v1325 );
              LODWORD(v1316) = v5020;
            }
            v1329 = v1316 & 0x7F;
            if ( v1329 >= 8 )
            {
              v1330 = (unsigned __int64)(v1316 & 0x7F) >> 3;
              do
              {
                v1324 = __ROL8__(*(_QWORD *)v1321 ^ v1324, v1322);
                v1321 += 8;
                v1329 -= 8;
                --v1330;
              }
              while ( v1330 );
            }
            for ( ; v1329; --v1329 )
            {
              v1331 = *(unsigned __int8 *)v1321++;
              v1324 = __ROL8__(v1331 ^ v1324, v1322);
            }
            for ( i1 = v1324 >> 31; i1; i1 >>= 31 )
              LODWORD(v1324) = i1 ^ v1324;
            v1333 = v5045;
            v1312 = 6LL;
            ++v1315;
            ++v1314;
            *(_DWORD *)(v5045 + 20) = v1324 & 0x7FFFFFFF;
            v1313 = (_BYTE *)(v1333 + 48);
            *((_DWORD *)v642 + 530) += v1316;
            v4393 = v5028-- == 1;
            v5045 = (ULONG_PTR)v1313;
          }
          while ( !v4393 );
          v1334 = i21;
          v1335 = (char *)v5026;
          *(_DWORD *)i21 = 44;
          *(_QWORD *)(v1334 + 24) = v1335;
          v1336 = *((_DWORD *)v642 + 630);
          if ( (v1336 & 0x8000000) == 0 && (v1336 & 0x100000) == 0 && (*((_DWORD *)v642 + 631) & 0x8000) != 0 )
          {
            *(_DWORD *)(v1334 + 32) |= 1u;
            if ( (unsigned int)sub_140B9ED30(v642, v1335) )
              *(_DWORD *)(v1334 + 32) |= 4u;
          }
          v5204 = v642;
          v5183 = (unsigned int *)v642;
          v1287 = sub_140B9C0B0(
                    (unsigned int)&v5204,
                    (_DWORD)HalExtensionList,
                    sub_140B9EDF0_Offset,
                    (_DWORD)v1335,
                    PgContextSize,
                    (__int64)v5114,
                    (__int64)&v5113);
          v741 = 0LL;
          if ( v1287 < 0 )
          {
            v743 = (unsigned int)v5040;
            goto LABEL_2063;
          }
          v1337 = v5204;
          v1338 = (ULONG_PTR)&v5204[v1334 - (_QWORD)v642];
          v1339 = v5113 - v5114[0];
          v1340 = 48;
          v1341 = &v1335[v5114[0]];
          i21 = v1338;
          v1342 = (_DWORD *)(v1338 + 192);
          v1343 = 6LL;
          v1344 = (_QWORD *)(v1338 + 192);
          v5183 = (unsigned int *)v5204;
          do
          {
            *v1344 = 0LL;
            v1340 -= 8;
            ++v1344;
            --v1343;
          }
          while ( v1343 );
          for ( i2 = 1LL; v1340; --v1340 )
          {
            *(_BYTE *)v1344 = 0;
            v1344 = (_QWORD *)((char *)v1344 + 1);
          }
          *v1342 = 0;
          v1346 = (unsigned __int64)&v1341[v1339];
          *(_QWORD *)(v1338 + 200) = v1341;
          v1347 = v1341;
          *(_DWORD *)(v1338 + 208) = v1339;
          v1348 = v1341;
          *((_DWORD *)v1337 + 530) += v1339;
          v1349 = *((_DWORD *)v1337 + 525);
          v1350 = *((_QWORD *)v1337 + 263);
          if ( (unsigned __int64)v1341 < v1346 )
          {
            do
            {
              _mm_prefetch(v1348, 0);
              v1348 += 64;
            }
            while ( (unsigned __int64)v1348 < v1346 );
          }
          v1351 = *((_QWORD *)v1337 + 263);
          v1352 = v1339 >> 7;
          if ( v1339 >> 7 )
          {
            do
            {
              v1353 = 8LL;
              do
              {
                v1354 = v1347[1] ^ __ROL8__(*v1347 ^ v1351, v1349);
                v1347 += 2;
                v1351 = __ROL8__(v1354, v1349);
                --v1353;
              }
              while ( v1353 );
              v1355 = (__ROL8__(v1350 ^ ((char *)v1347 - v1341), 17) ^ v1350 ^ (unsigned __int64)((char *)v1347 - v1341))
                    * (unsigned __int128)0x7010008004002001uLL;
              v5314 = *((_QWORD *)&v1355 + 1);
              v1356 = BYTE8(v1355) ^ v1355 ^ v1349;
              i2 = 1LL;
              v1349 = v1356 & 0x3F;
              if ( !v1349 )
                LOBYTE(v1349) = 1;
              --v1352;
            }
            while ( v1352 );
            v1338 = i21;
          }
          v1357 = v1339 & 0x7F;
          if ( v1357 >= 8 )
          {
            v1358 = (unsigned __int64)v1357 >> 3;
            do
            {
              v1351 = __ROL8__(*v1347++ ^ v1351, v1349);
              v1357 -= 8;
              --v1358;
            }
            while ( v1358 );
          }
          for ( ; v1357; --v1357 )
          {
            v1359 = *(unsigned __int8 *)v1347;
            v1347 = (_QWORD *)((char *)v1347 + 1);
            v1351 = __ROL8__(v1359 ^ v1351, v1349);
          }
          for ( i3 = v1351; ; LODWORD(v1351) = i3 ^ v1351 )
          {
            i3 >>= 31;
            if ( !i3 )
              break;
          }
          v5183 = (unsigned int *)v1337;
          v1342[5] = v1351 & 0x7FFFFFFF;
          p_LockNV = (LONG *)(v1338 + 96);
          *(_DWORD *)(v1338 + 240) = 48;
          if ( v1338 == -96LL )
          {
            v1362 = *((unsigned int *)v1337 + 513);
            v1363 = v1362 + 48;
            if ( (unsigned int)(v1362 + 48) <= *((_DWORD *)v1337 + 665) )
            {
              v642 = v1337;
              *((_DWORD *)v1337 + 513) = v1363;
              goto LABEL_1909;
            }
            v642 = (_BYTE *)GetRandomizedSafeContext(v1337, v1363, *((unsigned int *)v1337 + 593));
            if ( !v642 )
              goto LABEL_2278;
            v1364 = *((_DWORD *)v1337 + 630);
            if ( (v1364 & 2) == 0 )
            {
              v1365 = *((_DWORD *)v1337 + 513);
              v1366 = *((_QWORD *)v1337 + 253);
              v1367 = (v1364 & 0x10000000) != 0 ? *((_DWORD *)v1337 + 593) : 0;
              if ( v1365 >= 8 )
              {
                v1368 = (unsigned __int64)v1365 >> 3;
                do
                {
                  *(_QWORD *)v1337 = p_LockNV;
                  v1365 -= 8;
                  v1337 += 8;
                  --v1368;
                }
                while ( v1368 );
              }
              for ( ; v1365; --v1365 )
                *v1337++ = 0;
              v1369 = *((_DWORD *)v642 + 593);
              v1370 = Timer;
              v1371 = v5040;
              v1372 = v5045;
              *((_DWORD *)v642 + 593) = v1367;
              if ( v1367 == 3 )
              {
                (*((void (__fastcall **)(__int64))v642 + 109))(v1366);
              }
              else if ( (*((_DWORD *)v642 + 630) & 0x8000000) != 0
                     || (v5045 = v1372, LODWORD(v5040) = v1371, Timer = v1370, !v1367) )
              {
                (*((void (__fastcall **)(__int64))v642 + 33))(v1366);
              }
              else
              {
                (*((void (__fastcall **)(__int64, _QWORD))v642 + 71))(v1366 - 8, *(_QWORD *)(v1366 - 8));
                v5045 = v1372;
                LODWORD(v5040) = v1371;
                Timer = v1370;
              }
              *((_DWORD *)v642 + 593) = v1369;
            }
            *((_DWORD *)v642 + 630) &= ~2u;
LABEL_1909:
            v1373 = (struct _KTIMER *)&v642[v1362];
            ++*((_DWORD *)v642 + 523);
            v5050 = v1373;
            if ( !v642 )
            {
LABEL_2278:
              v5204 = 0LL;
              goto LABEL_1074;
            }
            v1374 = 48;
            v1375 = 6LL;
            v1376 = v1373;
            do
            {
              *(_QWORD *)&v1376->Header.Lock = 0LL;
              v1374 -= 8;
              v1376 = (struct _KTIMER *)((char *)v1376 + 8);
              --v1375;
            }
            while ( v1375 );
            for ( ; v1374; --v1374 )
            {
              v1376->Header.Type = 0;
              v1376 = (struct _KTIMER *)((char *)v1376 + 1);
            }
            v1377 = (const char *)v5027;
            v1378 = (unsigned int)sub_140B9FDF0_Offset;
            v1347 = (_QWORD *)v5027;
            v1373->Header.LockNV = 13;
            v1373->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v1347;
            LODWORD(v1373->Header.WaitListHead.Blink) = v1378;
            *((_DWORD *)v642 + 530) += v1378;
            v1379 = *((_DWORD *)v642 + 525);
            v1380 = *((_QWORD *)v642 + 263);
            if ( v1347 < (_QWORD *)((char *)v1347 + v1378) )
            {
              v1381 = v1377;
              do
              {
                _mm_prefetch(v1381, 0);
                v1381 += 64;
              }
              while ( v1381 < (const char *)v1347 + v1378 );
            }
            v1382 = *((_QWORD *)v642 + 263);
            v1383 = (unsigned int)v1378 >> 7;
            if ( (unsigned int)v1378 >> 7 )
            {
              do
              {
                v1384 = 8LL;
                do
                {
                  v1385 = v1347[1] ^ __ROL8__(*v1347 ^ v1382, v1379);
                  v1347 += 2;
                  v1382 = __ROL8__(v1385, v1379);
                  --v1384;
                }
                while ( v1384 );
                v1386 = __ROL8__(v1380 ^ ((char *)v1347 - v1377), 17) ^ v1380 ^ ((char *)v1347 - v1377);
                v5315 = (v1386 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                v1379 = ((unsigned __int8)(v5315 ^ v1386) ^ (unsigned __int8)v1379) & 0x3F;
                if ( !v1379 )
                  LOBYTE(v1379) = 1;
                --v1383;
              }
              while ( v1383 );
              v1373 = v5050;
            }
            i2 = v1378 & 0x7F;
            if ( (unsigned int)i2 >= 8 )
            {
              v1387 = (unsigned __int64)(v1378 & 0x7F) >> 3;
              do
              {
                v1382 = __ROL8__(*v1347++ ^ v1382, v1379);
                i2 = (unsigned int)(i2 - 8);
                --v1387;
              }
              while ( v1387 );
            }
            if ( (_DWORD)i2 )
            {
              do
              {
                v1388 = *(unsigned __int8 *)v1347;
                v1347 = (_QWORD *)((char *)v1347 + 1);
                v1382 = __ROL8__(v1388 ^ v1382, v1379);
                v4393 = (_DWORD)i2 == 1;
                i2 = (unsigned int)(i2 - 1);
              }
              while ( !v4393 );
            }
            for ( i4 = v1382; ; LODWORD(v1382) = i4 ^ v1382 )
            {
              i4 >>= 31;
              if ( !i4 )
                break;
            }
            HIDWORD(v1373->Header.WaitListHead.Blink) = v1382 & 0x7FFFFFFF;
            p_LockNV = &v1373->Header.LockNV;
            v1338 = i21;
            *((_DWORD *)v642 + 530) += v1378;
          }
          else
          {
            LODWORD(v1378) = sub_140B9FDF0_Offset;
            v642 = v1337;
            v1377 = (const char *)v5027;
            *p_LockNV = 13;
          }
          v1390 = Timer;
          if ( (*((_DWORD *)v642 + 630) & 0x20000000) != 0 && (_DWORD)v1378 )
            sub_1404D2D9C(v642, v1377, (unsigned int)v1378, p_LockNV + 7);
          p_LockNV[6] = 0;
          if ( (_DWORD)v5022 )
            p_LockNV[6] = 1;
          v5204 = v642;
          if ( !v642 )
            goto LABEL_1074;
          *(_DWORD *)(v1338 + 144) = 35;
          v1136 = *(_DWORD *)(v1338 + 160) < 0x94u;
          v5183 = (unsigned int *)v642;
          if ( v1136 )
          {
            v741 = (ULONG_PTR)v5026;
          }
          else
          {
            v1391 = *(_QWORD *)(v1338 + 152);
            v1392 = (*((__int64 (__fastcall **)(PVOID, __int64, _QWORD *))v642 + 65))(v5026, i2, v1347);
            if ( !v1392 )
            {
              v5204 = 0LL;
              goto LABEL_2280;
            }
            v1393 = *(unsigned int *)(v1392 + 80);
            v741 = (ULONG_PTR)v5026;
            v1394 = *(_DWORD *)(v1338 + 184) | 2;
            *(_DWORD *)(v1338 + 184) = v1394;
            v1395 = v741 + v1393;
            v1396 = *(_QWORD **)(v1391 + 112);
            v1397 = v1394;
            if ( (unsigned __int64)v1396 >= v741 && (unsigned __int64)v1396 < v1395 )
            {
              v1397 = v1394 | 4;
              *(_QWORD *)(v1338 + 168) = *v1396;
              *(_DWORD *)(v1338 + 184) = v1394 | 4;
            }
            v1398 = *(_QWORD **)(v1391 + 120);
            if ( (unsigned __int64)v1398 >= v741 && (unsigned __int64)v1398 < v1395 )
            {
              *(_QWORD *)(v1338 + 176) = *v1398;
              *(_DWORD *)(v1338 + 184) = v1397 | 8;
            }
          }
          v4393 = (*((_DWORD *)v642 + 630) & 0x200000) == 0;
          v743 = v5045;
          v1399 = v5050;
          v1400 = v5045;
          v1401 = v5040;
          v5183 = (unsigned int *)v642;
          if ( v4393 )
          {
            Timer = v1390;
            goto LABEL_2273;
          }
          v1402 = (*((__int64 (__fastcall **)(ULONG_PTR))v642 + 65))(v741);
          v5027 = v1402;
          v1403 = v1402;
          if ( !v1402 )
          {
            v743 = (unsigned int)v5040;
            v1287 = -1073741701;
            v741 = (ULONG_PTR)v5050;
            Timer = v1390;
            v1404 = v5045;
            goto LABEL_2062;
          }
          v1405 = *(_WORD *)(v1402 + 6);
          v743 = (unsigned int)sub_140B9EDF0_Offset / 0xCuLL;
          i21 = v743;
          LOWORD(v5043) = v1405;
          if ( !v1405 )
          {
            v1406 = *((_DWORD *)v642 + 630);
            if ( (v1406 & 0x100000) == 0 )
            {
              v5114[13] = -402653175;
              KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, (ULONG_PTR)v5026, 0LL, 0LL);
            }
            Timer = v1390;
            if ( *((_DWORD *)v642 + 582) )
              goto LABEL_1969;
            *((_QWORD *)v642 + 292) = v642 - 0x5C5FC0A76E374B18LL;
            v743 = 1LL;
            LODWORD(v5040) = v1401;
            *((_QWORD *)v642 + 293) = 0LL;
            v1407 = v5026;
            *((_QWORD *)v642 + 294) = 271LL;
            *((_QWORD *)v642 + 295) = v1407;
            *((_DWORD *)v642 + 582) = 1;
            if ( (v1406 & 0x20000000) != 0 )
              goto LABEL_1969;
            v4393 = (*((_DWORD *)v642 + 631) & 0x200000) == 0;
            v5050 = v1399;
            v5045 = v1400;
            LODWORD(v5040) = v1401;
            Timer = v1390;
            if ( v4393 )
              goto LABEL_1969;
            v5050 = v1399;
            v5045 = v1400;
            LODWORD(v5040) = v1401;
            Timer = v1390;
            if ( (v1406 & 1) == 0 )
              goto LABEL_1969;
            v1408 = *((unsigned int *)v642 + 669);
            v1409 = v1399;
            v1410 = v642;
            v1411 = *((_QWORD *)v642 + 263);
            v1412 = *((_DWORD *)v642 + 513) - v1408;
            v741 = *((_QWORD *)v642 + 335);
            v743 = (unsigned __int64)&v642[v1408];
            v5050 = v1399;
            v1413 = v1401;
            v5045 = v1400;
            LODWORD(v5040) = v1401;
            Timer = v1390;
            v1414 = (unsigned __int64)&v642[8 * ((unsigned __int64)v1412 >> 3) + v1408];
            if ( &v642[v1408] == (_BYTE *)v1414 )
            {
              v1415 = v1390;
            }
            else
            {
              LODWORD(v5040) = v1401;
              v1415 = v1390;
              v5050 = v1409;
              v5045 = v1400;
              Timer = v1390;
              do
              {
                *(_QWORD *)v743 ^= v741;
                v1416 = *(_QWORD *)v743;
                v743 += 8LL;
                v741 = ((v1411 ^ v1416) + __ROR8__(v741, v741 & 0x3F)) ^ 0xEFA;
              }
              while ( v743 != v1414 );
            }
            *((_DWORD *)v642 + 631) &= ~0x200000u;
            if ( v741 == *((_QWORD *)v642 + 336) )
              goto LABEL_1969;
            v1417 = *((_QWORD *)v642 + 177);
            v1418 = *((_DWORD *)v642 + 513);
            *(_QWORD *)v1417 = v642;
            *(_DWORD *)(v1417 + 16) = v1418;
            v1419 = *((_QWORD *)v642 + 336);
            if ( !*((_DWORD *)v642 + 582) )
            {
              v5050 = v1409;
              v5045 = v1400;
              goto LABEL_1967;
            }
            goto LABEL_1968;
          }
          v1421 = v5043;
          v1422 = v1403 + 24 + *(unsigned __int16 *)(v1403 + 20);
          v5028 = (__int64)HalExtensionList;
          v1410 = v642;
          v5035 = v1422;
          v5031 = (ULONG_PTR)HalExtensionList + 12 * (unsigned int)v743;
          LODWORD(v5022) = 0;
          v1423 = 0;
          v1424 = v5045;
          v1425 = v5031;
          v1426 = v1390;
          v1427 = v5040;
          Timer = v1390;
          while ( 2 )
          {
            v1428 = v5050;
            v1429 = v1427;
            v1430 = v1426;
            v1431 = v1424;
            v741 = *(unsigned int *)(v1422 + 40LL * v1423 + 12);
            v1432 = *(_DWORD *)(v1422 + 40LL * v1423 + 16);
            v5030 = 5LL * v1423;
            v1433 = *(_DWORD *)(v1422 + 40LL * v1423 + 8);
            LODWORD(sub_140B9FDF0_Offset) = v741;
            if ( v1432 <= v1433 )
              v1432 = v1433;
            v743 = (unsigned int)v741 + v1432;
            LODWORD(v5020) = v743;
            if ( v1423 )
            {
              if ( (unsigned int)v743 < *(_DWORD *)(v1422 + 40LL * (v1423 - 1) + 12) )
              {
                v1483 = *((_DWORD *)v642 + 630);
                if ( (v1483 & 0x100000) == 0 )
                {
                  v5114[14] = -402653175;
                  KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, (ULONG_PTR)v5026, 1uLL, 0LL);
                }
                if ( *((_DWORD *)v642 + 582) )
                  goto LABEL_1969;
                v5045 = v1431;
                *((_QWORD *)v642 + 292) = v642 - 0x5C5FC0A76E374B18LL;
                v743 = 1LL;
                LODWORD(v5040) = v1429;
                *((_QWORD *)v642 + 293) = 0LL;
                v1484 = v5026;
                *((_QWORD *)v642 + 294) = 271LL;
                *((_QWORD *)v642 + 295) = v1484;
                *((_DWORD *)v642 + 582) = 1;
                Timer = v1430;
                if ( (v1483 & 0x20000000) != 0 )
                  goto LABEL_1969;
                v4393 = (*((_DWORD *)v642 + 631) & 0x200000) == 0;
                v5050 = v1428;
                v5045 = v1431;
                LODWORD(v5040) = v1429;
                Timer = v1430;
                if ( v4393 )
                  goto LABEL_1969;
                v5050 = v1428;
                v5045 = v1431;
                LODWORD(v5040) = v1429;
                Timer = v1430;
                if ( (v1483 & 1) == 0 )
                  goto LABEL_1969;
                v1485 = *((unsigned int *)v642 + 669);
                v1413 = v1429;
                v1486 = *((_QWORD *)v642 + 263);
                v1487 = *((_DWORD *)v642 + 513) - v1485;
                v741 = *((_QWORD *)v642 + 335);
                v743 = (unsigned __int64)&v642[v1485];
                v5050 = v1428;
                v5045 = v1431;
                LODWORD(v5040) = v1429;
                Timer = v1430;
                v1488 = (unsigned __int64)&v642[8 * ((unsigned __int64)v1487 >> 3) + v1485];
                if ( &v642[v1485] != (_BYTE *)v1488 )
                {
                  v5050 = v1428;
                  v5045 = v1431;
                  LODWORD(v5040) = v1429;
                  Timer = v1430;
                  do
                  {
                    *(_QWORD *)v743 ^= v741;
                    v1489 = *(_QWORD *)v743;
                    v743 += 8LL;
                    v741 = ((v1486 ^ v1489) + __ROR8__(v741, v741 & 0x3F)) ^ 0xEFA;
                  }
                  while ( v743 != v1488 );
                }
LABEL_2034:
                *((_DWORD *)v642 + 631) &= ~0x200000u;
                if ( v741 == *((_QWORD *)v642 + 336) )
                {
LABEL_1969:
                  v1287 = -1073741701;
                  goto LABEL_2063;
                }
                v1490 = *((_QWORD *)v642 + 177);
                v1491 = *((_DWORD *)v642 + 513);
                *(_QWORD *)v1490 = v642;
                *(_DWORD *)(v1490 + 16) = v1491;
                v1419 = *((_QWORD *)v642 + 336);
                if ( !*((_DWORD *)v642 + 582) )
                {
                  v1415 = Timer;
                  v5050 = v1428;
                  v5045 = v1431;
LABEL_1967:
                  v1420 = v1410[177];
                  LODWORD(v5040) = v1413;
                  Timer = v1415;
                  *(_QWORD *)(v1420 + 24) = v741 ^ v1419;
                }
LABEL_1968:
                sub_140B9E384(v1410, 0LL, v741, 256LL);
                goto LABEL_1969;
              }
              v1423 = (unsigned int)v5022;
            }
            v1434 = (unsigned int *)v5028;
            if ( v5028 == v1425 )
              goto LABEL_2024;
            v1413 = v5040;
            v1435 = Timer;
            v1436 = v5045;
            while ( 2 )
            {
              v1437 = *v1434;
              v1438 = v1435;
              v1428 = v5050;
              v1431 = v1436;
              v1439 = v1434[1];
              if ( v1437 < (unsigned int)v743 && v1439 > (unsigned int)v741 )
              {
                if ( v1437 < (unsigned int)v741 || v1439 > (unsigned int)v743 )
                {
                  v1492 = *((_DWORD *)v642 + 630);
                  if ( (v1492 & 0x100000) == 0 )
                  {
                    v5114[17] = -402653175;
                    KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, (ULONG_PTR)v5026, 2uLL, 0LL);
                  }
                  if ( !*((_DWORD *)v642 + 582) )
                  {
                    v5045 = v1436;
                    *((_QWORD *)v642 + 292) = v642 - 0x5C5FC0A76E374B18LL;
                    v743 = 1LL;
                    LODWORD(v5040) = v1413;
                    *((_QWORD *)v642 + 293) = 0LL;
                    v1493 = v5026;
                    *((_QWORD *)v642 + 294) = 271LL;
                    *((_QWORD *)v642 + 295) = v1493;
                    *((_DWORD *)v642 + 582) = 1;
                    Timer = v1435;
                    if ( (v1492 & 0x20000000) == 0 )
                    {
                      v4393 = (*((_DWORD *)v642 + 631) & 0x200000) == 0;
                      v5050 = v1428;
                      v5045 = v1436;
                      LODWORD(v5040) = v1413;
                      Timer = v1435;
                      if ( !v4393 )
                      {
                        v5050 = v1428;
                        v5045 = v1436;
                        LODWORD(v5040) = v1413;
                        Timer = v1435;
                        if ( (v1492 & 1) != 0 )
                        {
                          v1494 = *((unsigned int *)v642 + 669);
                          v1495 = *((_QWORD *)v642 + 263);
                          v1496 = *((_DWORD *)v642 + 513) - v1494;
                          v741 = *((_QWORD *)v642 + 335);
                          v743 = (unsigned __int64)&v642[v1494];
                          v5050 = v1428;
                          v5045 = v1431;
                          LODWORD(v5040) = v1413;
                          Timer = v1435;
                          v1497 = (unsigned __int64)&v642[8 * ((unsigned __int64)v1496 >> 3) + v1494];
                          if ( &v642[v1494] != (_BYTE *)v1497 )
                          {
                            v5050 = v1428;
                            v5045 = v1431;
                            LODWORD(v5040) = v1413;
                            Timer = v1438;
                            do
                            {
                              *(_QWORD *)v743 ^= v741;
                              v1498 = *(_QWORD *)v743;
                              v743 += 8LL;
                              v741 = ((v1495 ^ v1498) + __ROR8__(v741, v741 & 0x3F)) ^ 0xEFA;
                            }
                            while ( v743 != v1497 );
                          }
                          goto LABEL_2034;
                        }
                      }
                    }
                  }
                  goto LABEL_1969;
                }
                v1440 = *(unsigned int *)(v5028 + 8);
                if ( (v1440 & 1) == 0 && (*((_BYTE *)v5026 + v1440) & 0x20) == 0 )
                  goto LABEL_2022;
                v5032 = (ULONG_PTR)v5050;
                v1441 = v1413;
                v1442 = v5045;
                v1443 = *(_DWORD *)(v5035 + 8 * v5030 + 12);
                v1444 = *(_DWORD *)(v5035 + 8 * v5030 + 16);
                v1445 = *(_DWORD *)(v5035 + 8 * v5030 + 8);
                LODWORD(v5024) = v1443;
                if ( v1444 <= v1445 )
                  v1444 = v1445;
                v1446 = (__int64 (__fastcall *)(_QWORD, _QWORD))*((_QWORD *)v642 + 131);
                LODWORD(v5025) = v1443 + v1444;
                v1447 = (unsigned int *)v1446(v5028, v5026);
                v5034 = (ULONG_PTR)v1447;
                if ( *v1447 < (unsigned int)v5024 || v1447[1] > (unsigned int)v5025 )
                {
                  v1448 = v5026;
                  v1449 = *((_DWORD *)v642 + 630);
                  if ( (v1449 & 0x100000) == 0 )
                  {
                    v5114[16] = -402653175;
                    KeBugCheckEx(
                      __ROL4__(-402653175, 101),
                      0xAuLL,
                      (ULONG_PTR)v5026,
                      ((_DWORD)v1447 - (_DWORD)v5026) | 0x80000000,
                      0LL);
                  }
                  if ( !*((_DWORD *)v642 + 582) )
                  {
                    v1450 = (struct _KTIMER *)v5032;
                    v5050 = (struct _KTIMER *)v5032;
                    *((_QWORD *)v642 + 292) = v642 - 0x5C5FC0A76E374B18LL;
                    *((_QWORD *)v642 + 293) = 0LL;
                    *((_QWORD *)v642 + 294) = 271LL;
                    *((_QWORD *)v642 + 295) = v1448;
                    v5045 = v1442;
                    *((_DWORD *)v642 + 582) = 1;
                    LODWORD(v5040) = v1441;
                    Timer = v1435;
                    if ( (v1449 & 0x20000000) == 0 )
                    {
                      v4393 = (*((_DWORD *)v642 + 631) & 0x200000) == 0;
                      v5050 = v1450;
                      v5045 = v1442;
                      LODWORD(v5040) = v1441;
                      Timer = v1435;
                      if ( !v4393 )
                      {
                        v5050 = v1450;
                        v5045 = v1442;
                        LODWORD(v5040) = v1441;
                        Timer = v1435;
                        if ( (v1449 & 1) != 0 )
                        {
                          v1451 = *((unsigned int *)v642 + 669);
                          v1452 = *((_QWORD *)v642 + 263);
                          v1453 = *((_DWORD *)v642 + 513) - v1451;
                          v1454 = *((_QWORD *)v642 + 335);
                          v1455 = (__int64 *)&v642[v1451];
                          v5050 = v1450;
                          v5045 = v1442;
                          LODWORD(v5040) = v1441;
                          Timer = v1435;
                          v1456 = (unsigned __int64)&v642[8 * ((unsigned __int64)v1453 >> 3) + v1451];
                          if ( &v642[v1451] == (_BYTE *)v1456 )
                          {
                            v1457 = v1441;
                          }
                          else
                          {
                            v5050 = v1450;
                            v1457 = v1441;
                            v5045 = v1442;
                            LODWORD(v5040) = v1441;
                            Timer = v1435;
                            do
                            {
                              *v1455 ^= v1454;
                              v1458 = *v1455++;
                              v1454 = ((v1452 ^ v1458) + __ROR8__(v1454, v1454 & 0x3F)) ^ 0xEFA;
                            }
                            while ( v1455 != (__int64 *)v1456 );
                          }
                          *((_DWORD *)v642 + 631) &= ~0x200000u;
                          if ( v1454 != *((_QWORD *)v642 + 336) )
                          {
                            v1459 = *((_QWORD *)v642 + 177);
                            v1460 = *((_DWORD *)v642 + 513);
                            *(_QWORD *)v1459 = v642;
                            *(_DWORD *)(v1459 + 16) = v1460;
                            if ( !*((_DWORD *)v642 + 582) )
                            {
                              v1461 = *((_QWORD *)v642 + 177);
                              v1462 = v1454 ^ *((_QWORD *)v642 + 336);
                              v5045 = v1442;
                              LODWORD(v5040) = v1457;
                              Timer = v1435;
                              *(_QWORD *)(v1461 + 24) = v1462;
                            }
                            sub_140B9E384(v642, 0LL, v1454, 256LL);
                          }
                          v1447 = (unsigned int *)v5034;
                        }
                      }
                    }
                  }
                }
                v1463 = (char *)v5026 + *v1447;
                v1464 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))*((_QWORD *)v642 + 132);
                v1435 = Timer;
                v1465 = v5040;
                v1466 = v5045;
                v5032 = (ULONG_PTR)v5050;
                v1467 = (_DWORD *)v1464(v1447, v5026, v1463);
                if ( *v1467 >= (unsigned int)v5024 && v1467[1] <= (unsigned int)v5025 )
                  goto LABEL_2019;
                v1468 = v5026;
                v1469 = ((_DWORD)v1467 - (_DWORD)v5026) | 0x80000000;
                v1470 = *((_DWORD *)v642 + 630);
                if ( (v1470 & 0x100000) == 0 )
                {
                  v5114[15] = -402653175;
                  KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, (ULONG_PTR)v5026, v1469, 0LL);
                }
                if ( *((_DWORD *)v642 + 582) )
                  goto LABEL_2019;
                v1471 = (struct _KTIMER *)v5032;
                v5050 = (struct _KTIMER *)v5032;
                *((_QWORD *)v642 + 292) = v642 - 0x5C5FC0A76E374B18LL;
                *((_QWORD *)v642 + 293) = 0LL;
                *((_QWORD *)v642 + 294) = 271LL;
                *((_QWORD *)v642 + 295) = v1468;
                v5045 = v1466;
                *((_DWORD *)v642 + 582) = 1;
                LODWORD(v5040) = v1465;
                Timer = v1435;
                if ( (v1470 & 0x20000000) != 0 )
                  goto LABEL_2019;
                v4393 = (*((_DWORD *)v642 + 631) & 0x200000) == 0;
                v5050 = v1471;
                v5045 = v1466;
                LODWORD(v5040) = v1465;
                Timer = v1435;
                if ( v4393 || (v5050 = v1471, v5045 = v1466, LODWORD(v5040) = v1465, Timer = v1435, (v1470 & 1) == 0) )
                {
LABEL_2019:
                  v1413 = v1465;
                }
                else
                {
                  v1472 = *((unsigned int *)v642 + 669);
                  v1473 = *((_QWORD *)v642 + 263);
                  v1474 = *((_DWORD *)v642 + 513) - v1472;
                  v1475 = *((_QWORD *)v642 + 335);
                  v1476 = (__int64 *)&v642[v1472];
                  v5050 = v1471;
                  v5045 = v1466;
                  LODWORD(v5040) = v1465;
                  Timer = v1435;
                  v1477 = (unsigned __int64)&v642[8 * ((unsigned __int64)v1474 >> 3) + v1472];
                  if ( &v642[v1472] == (_BYTE *)v1477 )
                  {
                    v1413 = v1465;
                  }
                  else
                  {
                    v5045 = v1466;
                    v1413 = v1465;
                    v5050 = v1471;
                    LODWORD(v5040) = v1465;
                    Timer = v1435;
                    do
                    {
                      *v1476 ^= v1475;
                      v1478 = *v1476++;
                      v1475 = ((v1473 ^ v1478) + __ROR8__(v1475, v1475 & 0x3F)) ^ 0xEFA;
                    }
                    while ( v1476 != (__int64 *)v1477 );
                  }
                  *((_DWORD *)v642 + 631) &= ~0x200000u;
                  if ( v1475 != *((_QWORD *)v642 + 336) )
                  {
                    v1479 = *((_QWORD *)v642 + 177);
                    v1480 = *((_DWORD *)v642 + 513);
                    v1436 = v5045;
                    *(_QWORD *)v1479 = v642;
                    *(_DWORD *)(v1479 + 16) = v1480;
                    if ( !*((_DWORD *)v642 + 582) )
                    {
                      v1481 = *((_QWORD *)v642 + 177);
                      v1482 = v1475 ^ *((_QWORD *)v642 + 336);
                      v5050 = v1471;
                      v5045 = v1436;
                      LODWORD(v5040) = v1413;
                      *(_QWORD *)(v1481 + 24) = v1482;
                      Timer = v1435;
                    }
                    sub_140B9E384(v642, 0LL, v1475, 256LL);
LABEL_2021:
                    v743 = (unsigned int)v5020;
LABEL_2022:
                    v741 = (unsigned int)sub_140B9FDF0_Offset;
                    v1434 = (unsigned int *)(v5028 + 12);
                    v5028 = (__int64)v1434;
                    if ( v1434 == (unsigned int *)v5031 )
                      break;
                    continue;
                  }
                }
                v1436 = v5045;
                goto LABEL_2021;
              }
              break;
            }
            v1423 = (unsigned int)v5022;
            v1421 = v5043;
            v1422 = v5035;
            v1425 = v5031;
LABEL_2024:
            LODWORD(v5022) = ++v1423;
            if ( v1423 < v1421 )
            {
              v1427 = v5040;
              v1426 = Timer;
              v1424 = v5045;
              continue;
            }
            break;
          }
          v741 = v5028;
          v743 = i21;
          v1499 = Timer;
          v1413 = v5040;
          v1431 = v5045;
          v1428 = v5050;
          if ( v5028 != v5031 )
          {
            v1500 = *((_DWORD *)v642 + 630);
            if ( (v1500 & 0x100000) == 0 )
            {
              v5114[18] = -402653175;
              KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, (ULONG_PTR)v5026, 3uLL, 0LL);
            }
            if ( !*((_DWORD *)v642 + 582) )
            {
              *((_QWORD *)v642 + 292) = v642 - 0x5C5FC0A76E374B18LL;
              v743 = 1LL;
              LODWORD(v5040) = v1413;
              *((_QWORD *)v642 + 293) = 0LL;
              v1501 = v5026;
              *((_QWORD *)v642 + 294) = 271LL;
              *((_QWORD *)v642 + 295) = v1501;
              *((_DWORD *)v642 + 582) = 1;
              Timer = v1499;
              if ( (v1500 & 0x20000000) == 0 )
              {
                v4393 = (*((_DWORD *)v642 + 631) & 0x200000) == 0;
                v5050 = v1428;
                v5045 = v1431;
                LODWORD(v5040) = v1413;
                Timer = v1499;
                if ( !v4393 )
                {
                  v5050 = v1428;
                  v5045 = v1431;
                  LODWORD(v5040) = v1413;
                  Timer = v1499;
                  if ( (v1500 & 1) != 0 )
                  {
                    v1502 = *((unsigned int *)v642 + 669);
                    v1503 = *((_QWORD *)v642 + 263);
                    v1504 = *((_DWORD *)v642 + 513) - v1502;
                    v741 = *((_QWORD *)v642 + 335);
                    v743 = (unsigned __int64)&v642[v1502];
                    v5050 = v1428;
                    v5045 = v1431;
                    LODWORD(v5040) = v1413;
                    Timer = v1499;
                    v1505 = (unsigned __int64)&v642[8 * ((unsigned __int64)v1504 >> 3) + v1502];
                    if ( &v642[v1502] != (_BYTE *)v1505 )
                    {
                      v5050 = v1428;
                      v5045 = v1431;
                      LODWORD(v5040) = v1413;
                      Timer = v1499;
                      do
                      {
                        *(_QWORD *)v743 ^= v741;
                        v1506 = *(_QWORD *)v743;
                        v743 += 8LL;
                        v741 = ((v1503 ^ v1506) + __ROR8__(v741, v741 & 0x3F)) ^ 0xEFA;
                      }
                      while ( v743 != v1505 );
                    }
                    goto LABEL_2034;
                  }
                }
              }
            }
            goto LABEL_1969;
          }
          if ( (_DWORD)i21 )
            v1507 = (i21 + 6) & 0xFFFFFFF8;
          else
            v1507 = 0;
          v1508 = *((_DWORD *)v642 + 513);
          v1509 = *((unsigned int *)v642 + 593);
          LODWORD(v5022) = v1508;
          v1510 = v1507 + 24 * v1421 + v1508 + 48;
          if ( v1510 <= *((_DWORD *)v642 + 665) )
          {
            v1511 = (__int64)v642;
            *((_DWORD *)v642 + 513) = v1510;
          }
          else
          {
            v1511 = GetRandomizedSafeContext(v642, v1510, v1509);
            if ( !v1511 )
            {
              v1287 = -1073741670;
              v743 = (unsigned __int64)Timer;
              v1404 = v5045;
LABEL_2062:
              v5045 = v1404;
LABEL_2063:
              if ( v1287 != -1073741554 )
                goto LABEL_1074;
LABEL_2274:
              v753 = (unsigned int)((_DWORD)v5037 + 1);
              LODWORD(v5037) = v753;
              if ( (unsigned int)v753 < 0x11 )
              {
                v744 = (unsigned int)v5040;
                v743 = (unsigned int)v5105;
                continue;
              }
              break;
            }
            v1512 = *((_DWORD *)v642 + 630);
            if ( (v1512 & 2) == 0 )
            {
              v1513 = *((_DWORD *)v642 + 513);
              v1514 = *((_QWORD *)v642 + 253);
              v1515 = (v1512 & 0x10000000) != 0 ? *((_DWORD *)v642 + 593) : 0;
              if ( v1513 >= 8 )
              {
                v1516 = (unsigned __int64)v1513 >> 3;
                do
                {
                  *v1410 = 0LL;
                  v1513 -= 8;
                  ++v1410;
                  --v1516;
                }
                while ( v1516 );
              }
              for ( ; v1513; --v1513 )
              {
                *(_BYTE *)v1410 = 0;
                v1410 = (_QWORD *)((char *)v1410 + 1);
              }
              v1517 = Timer;
              v1518 = v1413;
              v1519 = *(_DWORD *)(v1511 + 2372);
              v1520 = v5045;
              v1521 = v5050;
              *(_DWORD *)(v1511 + 2372) = v1515;
              if ( v1515 == 3 )
              {
                (*(void (__fastcall **)(__int64))(v1511 + 872))(v1514);
              }
              else if ( (*(_DWORD *)(v1511 + 2520) & 0x8000000) != 0
                     || (v5050 = v1521, v5045 = v1520, LODWORD(v5040) = v1518, Timer = v1517, !v1515) )
              {
                (*(void (__fastcall **)(__int64))(v1511 + 264))(v1514);
              }
              else
              {
                (*(void (__fastcall **)(__int64, _QWORD))(v1511 + 568))(v1514 - 8, *(_QWORD *)(v1514 - 8));
                v5050 = v1521;
                v5045 = v1520;
                LODWORD(v5040) = v1518;
                Timer = v1517;
              }
              v1508 = (unsigned int)v5022;
              v1421 = v5043;
              *(_DWORD *)(v1511 + 2372) = v1519;
              v1413 = v5040;
            }
            *(_DWORD *)(v1511 + 2520) &= ~2u;
          }
          ++*(_DWORD *)(v1511 + 2092);
          v1522 = v1511 + v1508;
          v5049 = v1522;
          v642 = (_BYTE *)v1511;
          v1523 = (_QWORD *)v1522;
          v1524 = 48;
          v1525 = 6LL;
          do
          {
            *v1523 = 0LL;
            v1524 -= 8;
            ++v1523;
            --v1525;
          }
          while ( v1525 );
          for ( ; v1524; --v1524 )
          {
            *(_BYTE *)v1523 = 0;
            v1523 = (_QWORD *)((char *)v1523 + 1);
          }
          v1526 = HalExtensionList;
          *(_DWORD *)v1522 = 30;
          *(_QWORD *)(v1522 + 8) = v1526;
          *(_DWORD *)(v1522 + 16) = 0;
          v1527 = *(_QWORD *)(v1511 + 2104);
          for ( i5 = v1527; ; LODWORD(v1527) = i5 ^ v1527 )
          {
            i5 >>= 31;
            if ( !i5 )
              break;
          }
          v1529 = v5050;
          v743 = i21;
          v1530 = Timer;
          v1531 = v5045;
          *(_DWORD *)(v1522 + 20) = v1527 & 0x7FFFFFFF;
          v5050 = v1529;
          *(_QWORD *)(v1522 + 24) = v5026;
          Timer = v1530;
          LODWORD(v5040) = v1413;
          v5045 = v1531;
          *(_DWORD *)(v1522 + 32) = *(_DWORD *)(v5027 + 80);
          *(_DWORD *)(v1522 + 36) = sub_140B9EDF0_Offset;
          *(_WORD *)(v1522 + 40) = v1421;
          v5046 = v1522;
          v5204 = v642;
          v5027 = v1522 + 48;
          if ( (_DWORD)v743 )
            v1532 = v1522 + 48 + (((unsigned int)(v743 - 1) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL);
          else
            v1532 = v1522 + 48;
          i21 = v1532;
          v741 = v1532 + 24LL * v1421;
          v5028 = v741;
          v1533 = (ULONG_PTR)v1526 + 12;
          if ( !(_DWORD)v743 )
            v1533 = v5031;
          v1534 = v5050;
          v1535 = v642;
          v5030 = v1533;
          v5032 = (ULONG_PTR)v642;
          if ( v1421 )
          {
            v1536 = (_DWORD *)(v1532 + 8);
            v743 = v1421;
            v5046 = v5049;
            v5032 = (ULONG_PTR)v642;
            v5045 = v1531;
            LODWORD(v5040) = v1413;
            Timer = v1530;
            do
            {
              v1537 = 2LL;
              do
              {
                *(v1536 - 2) = 0;
                *(v1536 - 1) = 0;
                *v1536 = 0x80000000;
                v1536 += 3;
                --v1537;
              }
              while ( v1537 );
              --v743;
            }
            while ( v743 );
          }
          if ( v1532 == v741 )
          {
LABEL_2273:
            v5183 = (unsigned int *)v642;
            goto LABEL_2274;
          }
          v1538 = v5035;
          v5034 = (ULONG_PTR)(v642 + 2524);
          while ( 2 )
          {
            v4393 = (*(_DWORD *)(v1538 + 36) & 0x2000000) == 0;
            v1539 = v1413;
            v1540 = 0;
            LODWORD(sub_140B9EDF0_Offset) = 0;
            if ( !v4393
              || (v1541 = *(_DWORD *)v1538, *(_DWORD *)v1538 == 1414090313) && *(_DWORD *)(v1538 + 4) == 1195525195 )
            {
              v1545 = Timer;
              v1544 = v5040;
LABEL_2132:
              v1540 = 1;
              LODWORD(sub_140B9EDF0_Offset) = 1;
            }
            else
            {
              Timer = v1530;
              v1542 = v1531;
              v5045 = v1531;
              LODWORD(v5040) = v1539;
              v5050 = v1534;
              v5032 = (ULONG_PTR)v1535;
              if ( v1541 == 1162297680 )
              {
                v1543 = *(_WORD *)(v1538 + 4);
                if ( v1543 == 30839 || v1543 == 29303 || v1543 == 30583 )
                {
                  v1544 = v1539;
                  v5045 = v1531;
                  v1545 = v1530;
                  v5032 = (ULONG_PTR)v1535;
                  v5050 = v1534;
                  LODWORD(v5040) = v1539;
                  Timer = v1530;
                  goto LABEL_2132;
                }
                v1542 = v1531;
              }
              if ( v1541 == 1095914053 && *(_WORD *)(v1538 + 4) == 16724 )
              {
                v1544 = v1539;
                v1545 = v1530;
                goto LABEL_2132;
              }
              v1546 = (char *)*((_QWORD *)v1535 + 298);
              v1545 = Timer;
              v1544 = v5040;
              v1547 = 7;
              v1548 = (char *)*((_QWORD *)v1535 + 299);
              v1549 = v1538 - (_QWORD)v1546;
              v1550 = (char *)*((_QWORD *)v1535 + 300);
              v1551 = (char *)*((_QWORD *)v1535 + 301);
              v5032 = (ULONG_PTR)v1535;
              v5045 = v1542;
              while ( 1 )
              {
                v1552 = v1546[v1549];
                v1553 = *v1546;
                v1546 += v5182;
                if ( v1552 != v1553 )
                  break;
                if ( !--v1547 )
                {
LABEL_2115:
                  v1540 = 1;
                  LODWORD(sub_140B9EDF0_Offset) = 1;
                  goto LABEL_2133;
                }
              }
              v1554 = 8;
              v1555 = (char *)v1538;
              v5032 = (ULONG_PTR)v1535;
              while ( 1 )
              {
                v1556 = *(_QWORD *)v1555;
                v1555 += 8;
                v1557 = *(_QWORD *)v1548;
                v1548 += 8;
                if ( v1556 != v1557 )
                  break;
                v1554 -= 8;
                if ( v1554 < 8 )
                {
                  if ( !v1554 )
                    goto LABEL_2115;
                  while ( 1 )
                  {
                    v1558 = *v1555++;
                    v1559 = *v1548++;
                    if ( v1558 != v1559 )
                      goto LABEL_2123;
                    if ( !--v1554 )
                      goto LABEL_2115;
                  }
                }
              }
LABEL_2123:
              v1560 = 4;
              v1561 = v1538 - (_QWORD)v1550;
              while ( 1 )
              {
                v1562 = v1550[v1561];
                v1563 = *v1550++;
                if ( v1562 != v1563 )
                  break;
                if ( !--v1560 )
                  goto LABEL_2115;
              }
              v1564 = 6;
              v1565 = v1538 - (_QWORD)v1551;
              v5032 = (ULONG_PTR)v1535;
              while ( 1 )
              {
                v1566 = v1551[v1565];
                v1567 = *v1551++;
                if ( v1566 != v1567 )
                  break;
                if ( !--v1564 )
                  goto LABEL_2115;
              }
            }
LABEL_2133:
            v1568 = *(_DWORD *)(v1538 + 36);
            if ( v1568 < 0 )
            {
              v1540 = 1;
              LODWORD(sub_140B9EDF0_Offset) = 1;
              goto LABEL_2136;
            }
            if ( v1540 )
            {
LABEL_2136:
              if ( *(_DWORD *)v5035 == 1414090313 && *(_DWORD *)(v5035 + 4) == 1195525195 )
              {
                LODWORD(sub_140B9EDF0_Offset) = v1540;
                v4393 = (*((_DWORD *)v1535 + 631) & 0x2000) == 0;
                v5034 = (ULONG_PTR)(v1535 + 2524);
                v5032 = (ULONG_PTR)v1535;
                LODWORD(v5040) = v1544;
                Timer = v1545;
                if ( !v4393 )
                {
                  v5032 = (ULONG_PTR)v1535;
                  LODWORD(sub_140B9EDF0_Offset) = 0;
                  LODWORD(v5040) = v1544;
                  Timer = v1545;
                }
              }
            }
            v1569 = v1545;
            v1570 = v5045;
            v1571 = v1544;
            v1572 = v5050;
            v1573 = v5046;
            v1574 = v5049;
            if ( (*(_DWORD *)v5034 & 0x4000) != 0 )
            {
              v1136 = (v1568 & 0x20000000) != 0;
              v1575 = v5032;
              if ( v1136 && (v5026 == *(PVOID *)(v5032 + 1504) || v5026 == *(PVOID *)(v5032 + 1512)) )
                LODWORD(sub_140B9EDF0_Offset) = 1;
            }
            else
            {
              v1575 = v5032;
            }
            v1576 = *(_DWORD *)(v5035 + 12);
            v1577 = *(_DWORD *)(v5035 + 16);
            v1578 = *(_DWORD *)(v5035 + 8);
            LODWORD(v5022) = v1576;
            if ( v1577 <= v1578 )
              v1577 = v1578;
            LODWORD(v5024) = v1576;
            v1579 = v1576 + v1577;
            LODWORD(sub_140B9FDF0_Offset) = v1579;
            if ( HalExtensionList == (PVOID)v5031 )
            {
              v1580 = 0;
              LODWORD(v5020) = 0;
            }
            else
            {
              v1580 = *(_DWORD *)HalExtensionList;
              v1575 = (ULONG_PTR)v1535;
              v1581 = *((_DWORD *)HalExtensionList + 1);
              LODWORD(v5020) = v1581;
              v5032 = (ULONG_PTR)v1535;
              LODWORD(v5040) = v1571;
              Timer = v1569;
              if ( v1580 > v1576 )
              {
                LODWORD(v5020) = v1581;
                LODWORD(v5024) = v1576;
                v5032 = (ULONG_PTR)v1535;
                LODWORD(v5040) = v1571;
                Timer = v1569;
                if ( v1581 > v1579 )
                  goto LABEL_2175;
                LODWORD(v5024) = v1576;
                v5032 = (ULONG_PTR)v1535;
                LODWORD(v5040) = v1571;
                Timer = v1569;
                if ( (_DWORD)sub_140B9EDF0_Offset )
                {
                  v1610 = HalExtensionList;
                  goto LABEL_2182;
                }
                v1582 = v1576;
                v1583 = (_DWORD *)i21;
                v1584 = (char *)v5026 + v1582;
                LODWORD(v5024) = v1580;
                LODWORD(v5020) = v1581;
                *(_DWORD *)i21 = v1582;
                v1583[1] = v1580;
                v1585 = v1580 - *v1583;
                v5050 = v1572;
                v5049 = v1574;
                v1586 = 0;
                v5046 = v1573;
                v1587 = v1581;
                v5045 = v1570;
                v1588 = (ULONG_PTR)v1535;
                LODWORD(v5040) = v1571;
                v5032 = (ULONG_PTR)v1535;
                v1589 = v1569;
                Timer = v1569;
                while ( 1 )
                {
                  v1590 = v1571;
                  v1591 = v5045;
                  v1592 = v1589;
                  v1593 = v5050;
                  v5036 = v5046;
                  LODWORD(v5025) = v1587;
                  v5044 = v5049;
                  v1594 = v1588;
                  v1595 = v5529[v1586];
                  if ( (unsigned __int64)v1584 < v1595 + (unsigned int)v5492[v1586]
                    && (unsigned __int64)&v1584[v1585] > v1595 )
                  {
                    break;
                  }
                  v1587 = v5020;
                  ++v1586;
                  v1588 = v5032;
                  v1571 = v5040;
                  if ( v1586 >= 6 )
                  {
                    *(_DWORD *)(v1594 + 2120) += v1585;
                    v1596 = v1584;
                    v1597 = *(_QWORD *)(v1594 + 2104);
                    v1598 = *(_DWORD *)(v1594 + 2100);
                    v1599 = &v1584[v1585];
                    LODWORD(v5020) = v5025;
                    v5053 = v1597;
                    v1600 = v1584;
                    v5032 = v1594;
                    v5049 = v5044;
                    v5046 = v5036;
                    v5050 = v1593;
                    v5045 = v1591;
                    LODWORD(v5040) = v1590;
                    Timer = v1592;
                    if ( v1584 < v1599 )
                    {
                      LODWORD(v5020) = v5025;
                      v5046 = v5036;
                      v5032 = v1594;
                      v5049 = v5044;
                      v5050 = v1593;
                      v5045 = v1591;
                      LODWORD(v5040) = v1590;
                      Timer = v1592;
                      do
                      {
                        _mm_prefetch(v1600, 0);
                        v1600 += 64;
                      }
                      while ( v1600 < v1599 );
                    }
                    v1601 = v1585 >> 7;
                    for ( i6 = v5053; v1601; --v1601 )
                    {
                      v1603 = 8LL;
                      do
                      {
                        v1604 = v1596[1] ^ __ROL8__(*v1596 ^ i6, v1598);
                        v1596 += 2;
                        i6 = __ROL8__(v1604, v1598);
                        --v1603;
                      }
                      while ( v1603 );
                      v1605 = (__ROL8__(v5053 ^ ((char *)v1596 - v1584), 17) ^ v5053 ^ ((char *)v1596 - v1584))
                            * (unsigned __int128)0x7010008004002001uLL;
                      v5316 = *((_QWORD *)&v1605 + 1);
                      v1598 = ((unsigned __int8)v1605 ^ (unsigned __int8)(BYTE8(v1605) ^ v1598)) & 0x3F;
                      if ( !v1598 )
                        LOBYTE(v1598) = 1;
                    }
                    v1606 = v1585 & 0x7F;
                    if ( v1606 >= 8 )
                    {
                      v1607 = (unsigned __int64)v1606 >> 3;
                      do
                      {
                        i6 = __ROL8__(*v1596++ ^ i6, v1598);
                        v1606 -= 8;
                        --v1607;
                      }
                      while ( v1607 );
                    }
                    for ( ; v1606; --v1606 )
                    {
                      v1608 = *(unsigned __int8 *)v1596;
                      v1596 = (_QWORD *)((char *)v1596 + 1);
                      i6 = __ROL8__(v1608 ^ i6, v1598);
                    }
                    for ( i7 = i6; ; LODWORD(i6) = i7 ^ i6 )
                    {
                      i7 >>= 31;
                      if ( !i7 )
                        break;
                    }
                    *(_DWORD *)(i21 + 8) = i6 & 0x7FFFFFFF;
                    break;
                  }
                }
                v1579 = sub_140B9FDF0_Offset;
                v1576 = v5024;
                v1575 = v5032;
LABEL_2175:
                if ( (unsigned int)v5020 <= v1579 )
                {
                  v1610 = HalExtensionList;
                  if ( HalExtensionList != (PVOID)v5031 )
                  {
LABEL_2182:
                    v1611 = (unsigned int *)v5030;
                    if ( v5030 != v5031 )
                    {
                      v1612 = *(_DWORD *)(v5030 + 4);
                      LODWORD(v5020) = v1612;
                      if ( v1612 <= v1579 )
                      {
                        v1613 = v5040;
                        v1614 = Timer;
                        v1615 = v5045;
                        while ( 1 )
                        {
                          v1616 = v1614;
                          v1617 = v5050;
                          v1618 = v1613;
                          v1619 = v5046;
                          v1620 = v1575;
                          v1621 = v5049;
                          v1622 = v1615;
                          if ( v1611 == (unsigned int *)v5031 )
                            goto LABEL_2238;
                          if ( (_DWORD)sub_140B9EDF0_Offset )
                          {
                            v1613 = v5040;
                            v1623 = 0x80;
                            v1614 = Timer;
                            v1615 = v5045;
                            goto LABEL_2235;
                          }
                          v1624 = v1610[1];
                          v1625 = *v1611;
                          LODWORD(v5025) = v1624;
                          LODWORD(v5024) = v1625;
                          if ( v1625 < v1624 )
                          {
                            v1626 = *(_DWORD *)(v1575 + 2520);
                            if ( (v1626 & 0x100000) == 0 )
                            {
                              v5114[19] = -402653175;
                              KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, (ULONG_PTR)v5026, 6uLL, 0LL);
                            }
                            if ( !*(_DWORD *)(v1575 + 2328) )
                            {
                              *(_QWORD *)(v1575 + 2336) = v1575 - 0x5C5FC0A76E374B18LL;
                              v5050 = v1617;
                              *(_QWORD *)(v1575 + 2344) = 0LL;
                              v1627 = v5026;
                              *(_QWORD *)(v1575 + 2352) = 271LL;
                              *(_QWORD *)(v1575 + 2360) = v1627;
                              *(_DWORD *)(v1575 + 2328) = 1;
                              v1628 = v1618;
                              v5045 = v1615;
                              LODWORD(v5040) = v1618;
                              Timer = v1616;
                              if ( (v1626 & 0x20000000) != 0 )
                              {
                                v1629 = v1620;
                                goto LABEL_2205;
                              }
                              v5049 = v1621;
                              v5046 = v1619;
                              v5050 = v1617;
                              v4393 = (*(_DWORD *)v5034 & 0x200000) == 0;
                              v1629 = v1620;
                              v5045 = v1615;
                              LODWORD(v5040) = v1618;
                              Timer = v1616;
                              if ( v4393 )
                                goto LABEL_2205;
                              v5049 = v1621;
                              v5046 = v1619;
                              v5050 = v1617;
                              v5045 = v1615;
                              LODWORD(v5040) = v1618;
                              Timer = v1616;
                              if ( (v1626 & 1) == 0 )
                                goto LABEL_2205;
                              v1630 = *(unsigned int *)(v1620 + 2676);
                              v1631 = *(_QWORD *)(v1620 + 2104);
                              v1632 = *(_DWORD *)(v1620 + 2052) - v1630;
                              v1633 = *(_QWORD *)(v1620 + 2680);
                              v1634 = (__int64 *)(v1620 + v1630);
                              v5032 = v1620;
                              v5049 = v1621;
                              v5046 = v1619;
                              v5050 = v1617;
                              v1635 = v1620 + v1630 + 8 * ((unsigned __int64)v1632 >> 3);
                              v5045 = v1622;
                              LODWORD(v5040) = v1618;
                              Timer = v1616;
                              if ( v1620 + v1630 == v1635 )
                              {
                                v1636 = v1618;
                              }
                              else
                              {
                                v5032 = v1620;
                                v1636 = v1618;
                                LODWORD(v5040) = v1618;
                                v5049 = v1621;
                                v5046 = v1619;
                                v5050 = v1617;
                                v5045 = v1622;
                                Timer = v1616;
                                do
                                {
                                  *v1634 ^= v1633;
                                  v1637 = *v1634++;
                                  v1633 = ((v1631 ^ v1637) + __ROR8__(v1633, v1633 & 0x3F)) ^ 0xEFA;
                                }
                                while ( v1634 != (__int64 *)v1635 );
                              }
                              v1638 = v5032;
                              *(_DWORD *)v5034 &= ~0x200000u;
                              if ( v1633 == *(_QWORD *)(v1638 + 2688) )
                              {
                                v1624 = v5025;
                                v1629 = v1638;
                                goto LABEL_2204;
                              }
                              v1639 = *(_QWORD *)(v1638 + 1416);
                              v1640 = *(_DWORD *)(v1638 + 2052);
                              *(_QWORD *)v1639 = v1638;
                              *(_DWORD *)(v1639 + 16) = v1640;
                              if ( !*(_DWORD *)(v1638 + 2328) )
                              {
                                v1641 = *(_QWORD *)(v1638 + 1416);
                                v1642 = v1633 ^ *(_QWORD *)(v1638 + 2688);
                                v5032 = v1638;
                                v5049 = v1621;
                                v5046 = v1619;
                                *(_QWORD *)(v1641 + 24) = v1642;
                                v5050 = v1617;
                                v5045 = v1622;
                                LODWORD(v5040) = v1636;
                                Timer = v1616;
                              }
                              sub_140B9E384(v1638, 0LL, v1633, 256LL);
                              v1624 = v5025;
                            }
                          }
                          v1629 = v5032;
LABEL_2204:
                          v1628 = v5040;
LABEL_2205:
                          v1643 = v5024 - v1624;
                          v1644 = (char *)v5026 + v1624;
                          v1645 = &v1644[(unsigned int)v5024 - v1624];
                          v1646 = 0;
                          while ( 1 )
                          {
                            v1614 = Timer;
                            v5036 = v1629;
                            v5032 = v1629;
                            v1647 = v5529[v1646];
                            if ( (unsigned __int64)v1644 < v1647 + (unsigned int)v5492[v1646]
                              && (unsigned __int64)v1645 > v1647 )
                            {
                              v1613 = v1628;
                              v1615 = v5045;
                              v1575 = v5036;
                              v5032 = v5036;
LABEL_2233:
                              v1623 = 0x80;
                              LODWORD(v5040) = v1613;
                              goto LABEL_2234;
                            }
                            if ( (unsigned int)++v1646 >= 6 )
                              break;
                            v1629 = v5032;
                            v1628 = v5040;
                          }
                          v1575 = v5032;
                          v1648 = v5049;
                          v1615 = v5045;
                          v1613 = v5040;
                          if ( v1643 < 4 )
                            goto LABEL_2233;
                          *(_DWORD *)(v5032 + 2120) += v1643;
                          v1649 = v1644;
                          v1650 = *(_DWORD *)(v1575 + 2100);
                          v1651 = v1644;
                          v1652 = *(_QWORD *)(v1575 + 2104);
                          v1653 = &v1644[v1643];
                          if ( v1644 < v1653 )
                          {
                            v5049 = v1648;
                            v5032 = v1575;
                            v5045 = v1615;
                            LODWORD(v5040) = v1613;
                            Timer = v1614;
                            do
                            {
                              _mm_prefetch(v1651, 0);
                              v1651 += 64;
                            }
                            while ( v1651 < v1653 );
                          }
                          v1654 = v1652;
                          v1655 = v1643 >> 7;
                          if ( v1643 >> 7 )
                          {
                            do
                            {
                              v1656 = 8LL;
                              do
                              {
                                v1657 = v1649[1] ^ __ROL8__(*v1649 ^ v1654, v1650);
                                v1649 += 2;
                                v1654 = __ROL8__(v1657, v1650);
                                --v1656;
                              }
                              while ( v1656 );
                              v1658 = (__ROL8__(v1652 ^ ((char *)v1649 - v1644), 17) ^ v1652 ^ ((char *)v1649 - v1644))
                                    * (unsigned __int128)0x7010008004002001uLL;
                              v5317 = *((_QWORD *)&v1658 + 1);
                              v1650 = ((unsigned __int8)(v1658 ^ BYTE8(v1658)) ^ (unsigned __int8)v1650) & 0x3F;
                              if ( !v1650 )
                                LOBYTE(v1650) = 1;
                              --v1655;
                            }
                            while ( v1655 );
                            v1613 = v5040;
                            v1615 = v5045;
                          }
                          v1659 = v1643 & 0x7F;
                          if ( v1659 >= 8 )
                          {
                            v1660 = (unsigned __int64)v1659 >> 3;
                            do
                            {
                              v1654 = __ROL8__(*v1649++ ^ v1654, v1650);
                              v1659 -= 8;
                              --v1660;
                            }
                            while ( v1660 );
                          }
                          for ( ; v1659; --v1659 )
                          {
                            v1661 = *(unsigned __int8 *)v1649;
                            v1649 = (_QWORD *)((char *)v1649 + 1);
                            v1654 = __ROL8__(v1661 ^ v1654, v1650);
                          }
                          for ( i8 = v1654; ; LOBYTE(v1654) = i8 ^ v1654 )
                          {
                            i8 >>= 7;
                            if ( !i8 )
                              break;
                          }
                          v1614 = Timer;
                          v1623 = v1654 & 0x7F;
LABEL_2234:
                          v1610 = HalExtensionList;
                          v1612 = v5020;
LABEL_2235:
                          *(_BYTE *)v5027 = v1623;
                          v1610 += 3;
                          ++v5027;
                          v1611 = (unsigned int *)(v5030 + 12);
                          HalExtensionList = v1610;
                          v5030 = (ULONG_PTR)v1611;
                          if ( v1611 != (unsigned int *)v5031 )
                          {
                            v1612 = v1611[1];
                            LODWORD(v5020) = v1612;
                          }
                          v1579 = sub_140B9FDF0_Offset;
                          if ( v1612 > (unsigned int)sub_140B9FDF0_Offset )
                          {
LABEL_2238:
                            v1576 = v5024;
                            break;
                          }
                        }
                      }
                    }
                  }
                }
LABEL_2239:
                if ( (_DWORD)sub_140B9EDF0_Offset || v1576 == v1579 )
                {
LABEL_2264:
                  v1689 = i21;
                }
                else
                {
                  v1663 = i21;
                  v1664 = v5032;
                  *(_DWORD *)(i21 + 12) = v1576;
                  *(_DWORD *)(v1663 + 16) = v1579;
                  v1665 = *(unsigned int *)(v1663 + 12);
                  v1666 = v1579 - v1665;
                  v1667 = (char *)v5026 + v1665;
                  for ( i9 = 0; i9 < 6; ++i9 )
                  {
                    v1669 = Timer;
                    v1670 = v5040;
                    v1671 = v5045;
                    v1672 = v5050;
                    v1673 = v5046;
                    v5036 = v5049;
                    v1674 = v5529[i9];
                    if ( (unsigned __int64)v1667 < v1674 + (unsigned int)v5492[i9]
                      && (unsigned __int64)&v1667[v1666] > v1674 )
                    {
                      v1579 = sub_140B9FDF0_Offset;
                      goto LABEL_2264;
                    }
                    v1675 = v1664;
                  }
                  *(_DWORD *)(v1664 + 2120) += v1666;
                  v1676 = v1667;
                  v1677 = *(_DWORD *)(v1664 + 2100);
                  v1678 = &v1667[v1666];
                  v5044 = *(_QWORD *)(v1675 + 2104);
                  v5032 = v1675;
                  v1679 = v1667;
                  v5049 = v5036;
                  v5046 = v1673;
                  v5050 = v1672;
                  v5045 = v1671;
                  LODWORD(v5040) = v1670;
                  Timer = v1669;
                  if ( v1667 < v1678 )
                  {
                    v5032 = v1675;
                    v5049 = v5036;
                    v5046 = v1673;
                    v5050 = v1672;
                    v5045 = v1671;
                    LODWORD(v5040) = v1670;
                    Timer = v1669;
                    do
                    {
                      _mm_prefetch(v1679, 0);
                      v1679 += 64;
                    }
                    while ( v1679 < v1678 );
                  }
                  v1680 = v1666 >> 7;
                  for ( i10 = v5044; v1680; --v1680 )
                  {
                    v1682 = 8LL;
                    do
                    {
                      v1683 = v1676[1] ^ __ROL8__(*v1676 ^ i10, v1677);
                      v1676 += 2;
                      i10 = __ROL8__(v1683, v1677);
                      --v1682;
                    }
                    while ( v1682 );
                    v1684 = (__ROL8__(v5044 ^ ((char *)v1676 - v1667), 17) ^ v5044 ^ ((char *)v1676 - v1667))
                          * (unsigned __int128)0x7010008004002001uLL;
                    v5318 = *((_QWORD *)&v1684 + 1);
                    v1677 = (BYTE8(v1684) ^ (unsigned __int8)(v1684 ^ v1677)) & 0x3F;
                    if ( !v1677 )
                      LOBYTE(v1677) = 1;
                  }
                  v1685 = v1666 & 0x7F;
                  if ( v1685 >= 8 )
                  {
                    v1686 = (unsigned __int64)v1685 >> 3;
                    do
                    {
                      i10 = __ROL8__(*v1676++ ^ i10, v1677);
                      v1685 -= 8;
                      --v1686;
                    }
                    while ( v1686 );
                  }
                  for ( ; v1685; --v1685 )
                  {
                    v1687 = *(unsigned __int8 *)v1676;
                    v1676 = (_QWORD *)((char *)v1676 + 1);
                    i10 = __ROL8__(v1687 ^ i10, v1677);
                  }
                  for ( i11 = i10; ; LODWORD(i10) = i11 ^ i10 )
                  {
                    i11 >>= 31;
                    if ( !i11 )
                      break;
                  }
                  v1689 = i21;
                  *(_DWORD *)(i21 + 20) = i10 & 0x7FFFFFFF;
                  v1579 = sub_140B9FDF0_Offset;
                }
                v741 = (ULONG_PTR)HalExtensionList;
                if ( HalExtensionList != (PVOID)v5031
                  && *(_DWORD *)HalExtensionList >= (unsigned int)v5022
                  && *((_DWORD *)HalExtensionList + 1) <= v1579 )
                {
                  v1690 = v5030;
                  if ( v5030 != v5031 )
                  {
                    v1691 = v5027;
                    *(_BYTE *)v5027 = 0x80;
                    v5027 = v1691 + 1;
                    v5030 = v1690 + 12;
                  }
                  v741 += 12LL;
                  HalExtensionList = (PVOID)v741;
                }
                v743 = v1689 + 24;
                v1535 = (_BYTE *)v5032;
                v1538 = v5035 + 40;
                v1531 = v5045;
                i21 = v743;
                v5035 += 40LL;
                if ( v743 == v5028 )
                {
                  v642 = v5204;
                  goto LABEL_2273;
                }
                v1413 = v5040;
                v1530 = Timer;
                v1534 = v5050;
                continue;
              }
            }
            break;
          }
          if ( v1580 >= (unsigned int)v5022 )
            goto LABEL_2175;
          goto LABEL_2239;
        }
        if ( (*((_DWORD *)v1279 + 630) & 0x100000) == 0 )
        {
          v5114[20] = -402653175;
          KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, v1262, 7uLL, 0LL);
        }
        if ( *((_DWORD *)v1279 + 582) )
          goto LABEL_1074;
        *((_QWORD *)v1279 + 292) = v1279 - 0x5C5FC0A76E374B18LL;
        *((_QWORD *)v1279 + 293) = 0LL;
        *((_QWORD *)v1279 + 294) = 271LL;
        *((_QWORD *)v1279 + 295) = v1262;
        *((_DWORD *)v1279 + 582) = 1;
        v1692 = *((_DWORD *)v1279 + 630);
        if ( (v1692 & 0x20000000) != 0 )
          goto LABEL_1074;
        v4393 = (*((_DWORD *)v1279 + 631) & 0x200000) == 0;
        Timer = v1285;
        if ( v4393 )
          goto LABEL_1074;
        Timer = v1285;
        if ( (v1692 & 1) == 0 )
          goto LABEL_1074;
        v1693 = *((unsigned int *)v1279 + 669);
        v1694 = v1285;
        v1695 = *((_QWORD *)v1279 + 263);
        v1696 = *((_DWORD *)v1279 + 513) - v1693;
        v1697 = *((_QWORD *)v1279 + 335);
        v1698 = (__int64 *)&v1279[v1693];
        Timer = v1285;
        v1699 = (unsigned __int64)&v1279[8 * ((unsigned __int64)v1696 >> 3) + v1693];
        if ( &v1279[v1693] != (_BYTE *)v1699 )
        {
          Timer = v1285;
          do
          {
            *v1698 ^= v1697;
            v1700 = *v1698++;
            v1697 = ((v1695 ^ v1700) + __ROR8__(v1697, v1697 & 0x3F)) ^ 0xEFA;
          }
          while ( v1698 != (__int64 *)v1699 );
        }
LABEL_2290:
        *((_DWORD *)v1279 + 631) &= ~0x200000u;
        if ( v1697 != *((_QWORD *)v1279 + 336) )
        {
          v1701 = *((_QWORD *)v1279 + 177);
          v1702 = *((_DWORD *)v1279 + 513);
          *(_QWORD *)v1701 = v1279;
          *(_DWORD *)(v1701 + 16) = v1702;
          if ( !*((_DWORD *)v1279 + 582) )
          {
            v1703 = *((_QWORD *)v1279 + 177);
            v1704 = v1697 ^ *((_QWORD *)v1279 + 336);
            Timer = v1694;
            *(_QWORD *)(v1703 + 24) = v1704;
          }
          sub_140B9E384(v1279, 0LL, v1697, 256LL);
        }
        goto LABEL_1074;
      }
      v5528[4] = 0LL;
      v5488[4] = 0;
      LOBYTE(v819) = 1;
      v821 = (*((__int64 (__fastcall **)(ULONG_PTR, __int64, _QWORD, _DWORD *))v812 + 64))(v5036, v819, 0LL, v5106);
      v823 = 0;
      if ( v821 )
        v823 = v5106[0];
      else
        v5106[0] = 0;
      v5528[1] = v821;
      v824 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))*((_QWORD *)v812 + 64);
      v5488[1] = v823;
      LOBYTE(v822) = 1;
      v826 = v824(v5036, v822, 12LL, v5106);
      sub_140B9EDF0_Offset = v826;
      v827 = 0;
      if ( v826 )
        v827 = v5106[0];
      else
        v5106[0] = 0;
      LODWORD(v5024) = v827;
      v5528[2] = v826;
      v5488[2] = v827;
      LOBYTE(v825) = 1;
      v828 = (*((__int64 (__fastcall **)(ULONG_PTR, __int64, __int64, _DWORD *))v812 + 64))(v5036, v825, 10LL, v5106);
      v829 = 0;
      if ( v828 )
        v829 = v5106[0];
      else
        v5106[0] = 0;
      v5528[3] = v828;
      v830 = (__int64 (__fastcall *)(_QWORD))*((_QWORD *)v812 + 65);
      v5488[3] = v829;
      v831 = v830(v5036);
      if ( !v831 )
      {
        if ( (*((_DWORD *)v812 + 630) & 0x100000) == 0 )
        {
          v5114[4] = -402653175;
          KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, v5036, 7uLL, 0LL);
        }
        if ( !*((_DWORD *)v812 + 582) )
        {
          *((_QWORD *)v812 + 292) = v812 - 0x5C5FC0A76E374B18LL;
          *((_QWORD *)v812 + 293) = 0LL;
          *((_QWORD *)v812 + 294) = 271LL;
          *((_QWORD *)v812 + 295) = v810;
          *((_DWORD *)v812 + 582) = 1;
          v832 = *((_DWORD *)v812 + 630);
          if ( (v832 & 0x20000000) == 0 )
          {
            v4393 = (*((_DWORD *)v812 + 631) & 0x200000) == 0;
            Timer = v793;
            if ( !v4393 )
            {
              Timer = v793;
              if ( (v832 & 1) != 0 )
              {
                v833 = *((unsigned int *)v812 + 669);
                v834 = *((_QWORD *)v812 + 263);
                v835 = *((_DWORD *)v812 + 513) - v833;
                v836 = *((_QWORD *)v812 + 335);
                v837 = (__int64 *)&v812[v833];
                LODWORD(v5040) = v818;
                Timer = v793;
                v838 = (unsigned __int64)&v812[8 * ((unsigned __int64)v835 >> 3) + v833];
                if ( &v812[v833] != (_BYTE *)v838 )
                {
                  LODWORD(v5040) = v818;
                  Timer = v793;
                  do
                  {
                    *v837 ^= v836;
                    v839 = *v837++;
                    v836 = ((v834 ^ v839) + __ROR8__(v836, v836 & 0x3F)) ^ 0xEFA;
                  }
                  while ( v837 != (__int64 *)v838 );
                }
                *((_DWORD *)v812 + 631) &= ~0x200000u;
                if ( v836 != *((_QWORD *)v812 + 336) )
                {
                  v840 = *((_QWORD *)v812 + 177);
                  v841 = *((_DWORD *)v812 + 513);
                  *(_QWORD *)v840 = v812;
                  *(_DWORD *)(v840 + 16) = v841;
                  if ( !*((_DWORD *)v812 + 582) )
                  {
                    v842 = *((_QWORD *)v812 + 177);
                    v843 = v836 ^ *((_QWORD *)v812 + 336);
                    LODWORD(v5040) = v818;
                    *(_QWORD *)(v842 + 24) = v843;
                  }
                  sub_140B9E384(v812, 0LL, v836, 256LL);
                }
              }
            }
          }
        }
        v793 = Timer;
        v5183 = (unsigned int *)v5295[0];
        goto LABEL_1529;
      }
      v844 = (*((__int64 (__fastcall **)(ULONG_PTR, int *))v812 + 147))(v5036, &v5298);
      v845 = *((unsigned int *)v812 + 593);
      v5528[5] = v844;
      v5488[5] = v5298;
      LODWORD(v844) = *(_DWORD *)(v831 + 84);
      v5528[0] = v5036;
      v846 = *((unsigned int *)v812 + 513);
      v5488[0] = v844;
      v847 = v846 + 288;
      if ( (unsigned int)(v846 + 288) <= *((_DWORD *)v812 + 665) )
      {
        v848 = (__int64)v812;
        v5034 = (ULONG_PTR)v812;
        *((_DWORD *)v812 + 513) = v847;
        goto LABEL_1289;
      }
      v848 = GetRandomizedSafeContext(v812, v847, v845);
      v5034 = v848;
      LOBYTE(v849) = 0;
      if ( !v848 )
        goto LABEL_1290;
      v850 = *((_DWORD *)v812 + 630);
      if ( (v850 & 2) == 0 )
      {
        v851 = *((_DWORD *)v812 + 513);
        v852 = *((_QWORD *)v812 + 253);
        v853 = (v850 & 0x10000000) != 0 ? *((_DWORD *)v812 + 593) : 0;
        if ( v851 >= 8 )
        {
          v849 = (unsigned __int64)v851 >> 3;
          do
          {
            *(_QWORD *)v812 = 0LL;
            v851 -= 8;
            v812 += 8;
            --v849;
          }
          while ( v849 );
        }
        for ( ; v851; --v851 )
          *v812++ = v849;
        v854 = v793;
        v855 = v818;
        v856 = *(_DWORD *)(v848 + 2372);
        *(_DWORD *)(v848 + 2372) = v853;
        if ( v853 == 3 )
        {
          (*(void (__fastcall **)(__int64))(v848 + 872))(v852);
        }
        else if ( (*(_DWORD *)(v848 + 2520) & 0x8000000) != 0
               || (LODWORD(v5040) = v855, Timer = v854, LODWORD(v5043) = v809, !v853) )
        {
          (*(void (__fastcall **)(__int64))(v848 + 264))(v852);
        }
        else
        {
          (*(void (__fastcall **)(__int64, _QWORD))(v848 + 568))(v852 - 8, *(_QWORD *)(v852 - 8));
          LODWORD(v5040) = v855;
          Timer = v854;
          LODWORD(v5043) = v809;
        }
        v848 = v5034;
        *(_DWORD *)(v5034 + 2372) = v856;
      }
      *(_DWORD *)(v848 + 2520) &= ~2u;
LABEL_1289:
      v857 = 6LL;
      v858 = v848 + v846;
      *(_DWORD *)(v848 + 2092) += 6;
      v5048 = v848 + v846;
      if ( !v848 )
      {
LABEL_1290:
        v859 = v5295[0];
        goto LABEL_1291;
      }
      v860 = v5034;
      v861 = (const char **)v5528;
      v5022 = (_DWORD *)(v848 + v846);
      v862 = v5488;
      sub_140B9FDF0_Offset = 6LL;
      v5048 = v858;
      do
      {
        v863 = (unsigned int)*v862;
        v864 = 48;
        v865 = *v861;
        v866 = (_QWORD *)v858;
        LODWORD(v5020) = *v862;
        do
        {
          *v866 = 0LL;
          v864 -= 8;
          ++v866;
          --v857;
        }
        while ( v857 );
        for ( ; v864; --v864 )
        {
          *(_BYTE *)v866 = 0;
          v866 = (_QWORD *)((char *)v866 + 1);
        }
        *(_DWORD *)v858 = 0;
        v867 = v865;
        *(_QWORD *)(v858 + 8) = v865;
        *(_DWORD *)(v858 + 16) = v863;
        v868 = v865;
        *(_DWORD *)(v860 + 2120) += v863;
        v869 = *(_DWORD *)(v860 + 2100);
        v870 = *(_QWORD *)(v860 + 2104);
        if ( v865 < &v865[v863] )
        {
          do
          {
            _mm_prefetch(v867, 0);
            v867 += 64;
          }
          while ( v867 < &v865[v863] );
        }
        v871 = *(_QWORD *)(v860 + 2104);
        v872 = (unsigned int)v863 >> 7;
        if ( (unsigned int)v863 >> 7 )
        {
          do
          {
            v873 = 8LL;
            do
            {
              v874 = *((_QWORD *)v868 + 1) ^ __ROL8__(*(_QWORD *)v868 ^ v871, v869);
              v868 += 16;
              v871 = __ROL8__(v874, v869);
              --v873;
            }
            while ( v873 );
            v875 = (__ROL8__(v870 ^ (v868 - v865), 17) ^ v870 ^ (unsigned __int64)(v868 - v865))
                 * (unsigned __int128)0x7010008004002001uLL;
            v5300 = *((_QWORD *)&v875 + 1);
            v869 = ((unsigned __int8)(v875 ^ BYTE8(v875)) ^ (unsigned __int8)v869) & 0x3F;
            if ( !v869 )
              LOBYTE(v869) = 1;
            --v872;
          }
          while ( v872 );
          LODWORD(v863) = v5020;
        }
        v876 = v863 & 0x7F;
        if ( v876 >= 8 )
        {
          v877 = (unsigned __int64)(v863 & 0x7F) >> 3;
          do
          {
            v871 = __ROL8__(*(_QWORD *)v868 ^ v871, v869);
            v868 += 8;
            v876 -= 8;
            --v877;
          }
          while ( v877 );
        }
        for ( ; v876; --v876 )
        {
          v878 = *(unsigned __int8 *)v868++;
          v871 = __ROL8__(v878 ^ v871, v869);
        }
        for ( i12 = v871 >> 31; i12; i12 >>= 31 )
          LODWORD(v871) = i12 ^ v871;
        v880 = v5048;
        v857 = 6LL;
        ++v861;
        *(_DWORD *)(v5048 + 20) = v871 & 0x7FFFFFFF;
        v858 = v880 + 48;
        *(_DWORD *)(v860 + 2120) += v863;
        ++v862;
        v5048 = v858;
        --sub_140B9FDF0_Offset;
      }
      while ( sub_140B9FDF0_Offset );
      v881 = v5022;
      v771 = (_BYTE *)v5034;
      v882 = v5036;
      *v5022 = 44;
      *((_QWORD *)v881 + 3) = v882;
      v883 = *((_DWORD *)v771 + 630);
      if ( (v883 & 0x8000000) == 0 && (v883 & 0x100000) == 0 && (*((_DWORD *)v771 + 631) & 0x8000) != 0 )
      {
        v881[8] |= 1u;
        if ( (unsigned int)sub_140B9ED30(v771, v882) )
          v881[8] |= 4u;
      }
      v5296 = v771;
      v5295[0] = v771;
      v820 = sub_140B9C0B0((unsigned int)&v5296, v5044, (_DWORD)PgC_0_1, v882, v5043, (__int64)&v5109, (__int64)&v5108);
      if ( v820 < 0 )
      {
LABEL_1525:
        v793 = Timer;
LABEL_1526:
        Timer = v793;
LABEL_1527:
        v5183 = (unsigned int *)v771;
        v642 = v771;
        goto LABEL_1528;
      }
      v859 = (ULONG_PTR)v5296;
      v884 = 48;
      v885 = v5108 - v5109;
      v886 = &v5296[(_QWORD)v881 - v5034];
      v795 = 6LL;
      v887 = (_QWORD *)(v882 + v5109);
      v5022 = v886;
      v888 = v886 + 48;
      v889 = v886 + 48;
      v5295[0] = v5296;
      v5034 = (ULONG_PTR)(v886 + 48);
      do
      {
        *v889 = 0LL;
        v884 -= 8;
        ++v889;
        --v795;
      }
      while ( v795 );
      for ( ; v884; --v884 )
      {
        *(_BYTE *)v889 = 0;
        v889 = (_QWORD *)((char *)v889 + 1);
      }
      *v888 = 0;
      v890 = (unsigned __int64)v887 + v885;
      *((_QWORD *)v886 + 25) = v887;
      v891 = v887;
      v886[52] = v885;
      v892 = (const char *)v887;
      *(_DWORD *)(v859 + 2120) += v885;
      v893 = *(_DWORD *)(v859 + 2100);
      v894 = *(_QWORD *)(v859 + 2104);
      if ( (unsigned __int64)v887 < v890 )
      {
        do
        {
          _mm_prefetch(v892, 0);
          v892 += 64;
        }
        while ( (unsigned __int64)v892 < v890 );
      }
      v895 = *(_QWORD *)(v859 + 2104);
      v896 = v885 >> 7;
      if ( v885 >> 7 )
      {
        do
        {
          v897 = 8LL;
          do
          {
            v898 = v891[1] ^ __ROL8__(*v891 ^ v895, v893);
            v891 += 2;
            v895 = __ROL8__(v898, v893);
            --v897;
          }
          while ( v897 );
          v899 = __ROL8__(v894 ^ ((char *)v891 - (char *)v887), 17) ^ v894 ^ ((char *)v891 - (char *)v887);
          v795 = (v899 * (unsigned __int128)0x7010008004002001uLL) >> 64;
          v5301 = v795;
          v893 = ((unsigned __int8)(v795 ^ v899) ^ (unsigned __int8)v893) & 0x3F;
          if ( !v893 )
            LOBYTE(v893) = 1;
          --v896;
        }
        while ( v896 );
        v888 = (_DWORD *)v5034;
        v886 = v5022;
      }
      v900 = v885 & 0x7F;
      if ( (unsigned int)v900 >= 8 )
      {
        v901 = (unsigned __int64)(unsigned int)v900 >> 3;
        do
        {
          v895 = __ROL8__(*v891++ ^ v895, v893);
          v900 = (unsigned int)(v900 - 8);
          --v901;
        }
        while ( v901 );
        v888 = v886 + 48;
      }
      if ( (_DWORD)v900 )
      {
        do
        {
          v902 = *(unsigned __int8 *)v891;
          v891 = (_QWORD *)((char *)v891 + 1);
          v895 = __ROL8__(v902 ^ v895, v893);
          v4393 = (_DWORD)v900 == 1;
          v900 = (unsigned int)(v900 - 1);
        }
        while ( !v4393 );
        v888 = v886 + 48;
      }
      for ( i13 = v895; ; LODWORD(v895) = i13 ^ v895 )
      {
        i13 >>= 31;
        if ( !i13 )
          break;
      }
      v5295[0] = v859;
      v888[5] = v895 & 0x7FFFFFFF;
      v904 = v886 + 24;
      v886[60] = 48;
      if ( v886 != (_DWORD *)-96LL )
      {
        v934 = v859;
        v5034 = v859;
        *v904 = 13;
        goto LABEL_1389;
      }
      v905 = *(unsigned int *)(v859 + 2052);
      v906 = v905 + 48;
      if ( (unsigned int)(v905 + 48) <= *(_DWORD *)(v859 + 2660) )
      {
        v907 = v859;
        v5034 = v859;
        *(_DWORD *)(v859 + 2052) = v906;
        goto LABEL_1363;
      }
      v907 = GetRandomizedSafeContext(v859, v906, *(unsigned int *)(v859 + 2372));
      v5034 = v907;
      if ( !v907 )
        goto LABEL_1291;
      v908 = *(_DWORD *)(v859 + 2520);
      if ( (v908 & 2) == 0 )
      {
        v909 = *(_DWORD *)(v859 + 2052);
        v910 = *(_QWORD *)(v859 + 2024);
        v1136 = (v908 & 0x10000000) != 0;
        v911 = (_QWORD *)v859;
        v912 = v1136 ? *(_DWORD *)(v859 + 2372) : 0;
        if ( v909 >= 8 )
        {
          v913 = (unsigned __int64)v909 >> 3;
          do
          {
            *v911 = v904;
            v909 -= 8;
            ++v911;
            --v913;
          }
          while ( v913 );
        }
        for ( ; v909; --v909 )
        {
          *(_BYTE *)v911 = 0;
          v911 = (_QWORD *)((char *)v911 + 1);
        }
        v914 = *(_DWORD *)(v907 + 2372);
        v915 = Timer;
        v916 = v5040;
        v917 = v5048;
        *(_DWORD *)(v907 + 2372) = v912;
        if ( v912 == 3 )
        {
          (*(void (__fastcall **)(__int64, _QWORD))(v907 + 872))(v910, 0LL);
        }
        else if ( (*(_DWORD *)(v907 + 2520) & 0x8000000) != 0
               || (v5048 = v917, LODWORD(v5040) = v916, Timer = v915, !v912) )
        {
          (*(void (__fastcall **)(__int64, _QWORD))(v907 + 264))(v910, 0LL);
        }
        else
        {
          (*(void (__fastcall **)(__int64, _QWORD))(v907 + 568))(v910 - 8, *(_QWORD *)(v910 - 8));
          v5048 = v917;
          LODWORD(v5040) = v916;
          Timer = v915;
        }
        v907 = v5034;
        *(_DWORD *)(v5034 + 2372) = v914;
      }
      *(_DWORD *)(v907 + 2520) &= ~2u;
LABEL_1363:
      ++*(_DWORD *)(v907 + 2092);
      v918 = v907 + v905;
      v5047 = v918;
      if ( v907 )
      {
        v919 = 48;
        v5047 = v918;
        v920 = 6LL;
        v921 = (_QWORD *)v918;
        do
        {
          *v921 = 0LL;
          v919 -= 8;
          ++v921;
          --v920;
        }
        while ( v920 );
        for ( ; v919; --v919 )
        {
          *(_BYTE *)v921 = 0;
          v921 = (_QWORD *)((char *)v921 + 1);
        }
        v922 = (const char *)sub_140B9EDF0_Offset;
        v923 = (unsigned int)v5024;
        v900 = sub_140B9EDF0_Offset;
        *(_DWORD *)v918 = 13;
        *(_QWORD *)(v918 + 8) = v900;
        *(_DWORD *)(v918 + 16) = v923;
        *(_DWORD *)(v907 + 2120) += v923;
        v924 = *(_DWORD *)(v907 + 2100);
        v925 = *(_QWORD *)(v907 + 2104);
        while ( (unsigned __int64)v922 < v900 + v923 )
        {
          _mm_prefetch(v922, 0);
          v922 += 64;
        }
        v926 = v925;
        v927 = (unsigned int)v923 >> 7;
        if ( (unsigned int)v923 >> 7 )
        {
          do
          {
            v928 = 8LL;
            do
            {
              v929 = *(_QWORD *)(v900 + 8) ^ __ROL8__(*(_QWORD *)v900 ^ v926, v924);
              v900 += 16LL;
              v926 = __ROL8__(v929, v924);
              --v928;
            }
            while ( v928 );
            v930 = (__ROL8__(v925 ^ (v900 - sub_140B9EDF0_Offset), 17) ^ v925 ^ (v900 - sub_140B9EDF0_Offset))
                 * (unsigned __int128)0x7010008004002001uLL;
            v5302 = *((_QWORD *)&v930 + 1);
            v924 = ((unsigned __int8)(v930 ^ BYTE8(v930)) ^ (unsigned __int8)v924) & 0x3F;
            if ( !v924 )
              LOBYTE(v924) = 1;
            --v927;
          }
          while ( v927 );
          LODWORD(v923) = v5024;
        }
        v795 = v923 & 0x7F;
        if ( (unsigned int)v795 >= 8 )
        {
          v931 = (unsigned __int64)(v923 & 0x7F) >> 3;
          do
          {
            v926 = __ROL8__(*(_QWORD *)v900 ^ v926, v924);
            v900 += 8LL;
            v795 = (unsigned int)(v795 - 8);
            --v931;
          }
          while ( v931 );
        }
        if ( (_DWORD)v795 )
        {
          do
          {
            v932 = *(unsigned __int8 *)v900++;
            v926 = __ROL8__(v932 ^ v926, v924);
            v4393 = (_DWORD)v795 == 1;
            v795 = (unsigned int)(v795 - 1);
          }
          while ( !v4393 );
          LODWORD(v923) = v5024;
        }
        for ( i14 = v926; ; LODWORD(v926) = i14 ^ v926 )
        {
          i14 >>= 31;
          if ( !i14 )
            break;
        }
        v934 = v5034;
        *(_DWORD *)(v918 + 20) = v926 & 0x7FFFFFFF;
        v904 = (_DWORD *)v918;
        v886 = v5022;
        *(_DWORD *)(v934 + 2120) += v923;
LABEL_1389:
        v793 = Timer;
        v935 = v5040;
        v936 = v5048;
        if ( (*(_DWORD *)(v934 + 2520) & 0x20000000) != 0 )
        {
          v900 = (unsigned int)v5024;
          if ( (_DWORD)v5024 )
          {
            sub_1404D2D9C(v934, sub_140B9EDF0_Offset, (unsigned int)v5024, v904 + 7);
            v934 = v5034;
          }
        }
        v904[6] = 0;
        if ( (_DWORD)v5025 )
          v904[6] = 1;
        v5296 = (_BYTE *)v934;
        if ( v934 )
        {
          v886[36] = 35;
          v937 = (unsigned int *)v934;
          v1136 = v886[40] < 0x94u;
          v5295[0] = v934;
          if ( v1136 )
          {
            v800 = v5036;
          }
          else
          {
            v938 = *((_QWORD *)v886 + 19);
            v939 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, __int64))(v934 + 520))(v5036, v795, v900);
            if ( !v939 )
            {
              v5296 = 0LL;
              v5183 = v937;
              goto LABEL_1529;
            }
            v940 = v5022;
            v800 = v5036;
            v941 = v5036 + *(unsigned int *)(v939 + 80);
            v795 = v5022[46] | 2u;
            v5022[46] = v795;
            v942 = v795;
            v943 = *(_QWORD **)(v938 + 112);
            if ( (unsigned __int64)v943 >= v800 && (unsigned __int64)v943 < v941 )
            {
              v942 = v795 | 4;
              *((_QWORD *)v940 + 21) = *v943;
              v940[46] = v795 | 4;
            }
            v944 = *(_QWORD **)(v938 + 120);
            if ( (unsigned __int64)v944 >= v800 && (unsigned __int64)v944 < v941 )
            {
              *((_QWORD *)v940 + 22) = *v944;
              v940[46] = v942 | 8;
            }
          }
          v771 = (_BYTE *)v5034;
          v945 = v5047;
          v5295[0] = v5034;
          if ( (*(_DWORD *)(v5034 + 2520) & 0x200000) == 0 )
          {
            v5048 = v936;
            LODWORD(v5040) = v935;
            Timer = v793;
            goto LABEL_1742;
          }
          sub_140B9EDF0_Offset = (*(__int64 (__fastcall **)(ULONG_PTR))(v5034 + 520))(v800);
          if ( !sub_140B9EDF0_Offset )
          {
            v795 = v5047;
            v5048 = v936;
            v820 = -1073741701;
            LODWORD(v5040) = v935;
            goto LABEL_1526;
          }
          v795 = *(unsigned __int16 *)(sub_140B9EDF0_Offset + 6);
          v5032 = (unsigned int)PgC_0_1 / 0xCuLL;
          LOWORD(v5043) = v795;
          if ( !(_WORD)v795 )
          {
            v771 = (_BYTE *)v5034;
            v946 = *(_DWORD *)(v5034 + 2520);
            if ( (v946 & 0x100000) == 0 )
            {
              v5114[5] = -402653175;
              KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, v5036, 0LL, 0LL);
            }
            v5048 = v936;
            LODWORD(v5040) = v935;
            Timer = v793;
            if ( *(_DWORD *)(v5034 + 2328) )
            {
              v795 = v5047;
            }
            else
            {
              *(_QWORD *)(v5034 + 2336) = v5034 - 0x5C5FC0A76E374B18LL;
              *((_QWORD *)v771 + 293) = 0LL;
              v947 = v5036;
              *((_QWORD *)v771 + 294) = 271LL;
              *((_QWORD *)v771 + 295) = v947;
              *((_DWORD *)v771 + 582) = 1;
              if ( (v946 & 0x20000000) == 0 )
              {
                v4393 = (*((_DWORD *)v771 + 631) & 0x200000) == 0;
                v5047 = v945;
                v5048 = v936;
                LODWORD(v5040) = v935;
                Timer = v793;
                if ( !v4393 )
                {
                  v5047 = v945;
                  v5048 = v936;
                  LODWORD(v5040) = v935;
                  Timer = v793;
                  if ( (v946 & 1) != 0 )
                  {
                    v948 = *((unsigned int *)v771 + 669);
                    v949 = *((_QWORD *)v771 + 263);
                    v950 = *((_DWORD *)v771 + 513) - v948;
                    v800 = *((_QWORD *)v771 + 335);
                    v795 = (__int64)&v771[v948];
                    v5048 = v936;
                    v5047 = v945;
                    LODWORD(v5040) = v935;
                    Timer = v793;
                    v951 = (unsigned __int64)&v771[8 * ((unsigned __int64)v950 >> 3) + v948];
                    if ( &v771[v948] != (_BYTE *)v951 )
                    {
                      v5047 = v945;
                      v5048 = v936;
                      LODWORD(v5040) = v935;
                      Timer = v793;
                      do
                      {
                        *(_QWORD *)v795 ^= v800;
                        v952 = *(_QWORD *)v795;
                        v795 += 8LL;
                        v800 = ((v949 ^ v952) + __ROR8__(v800, v800 & 0x3F)) ^ 0xEFA;
                      }
                      while ( v795 != v951 );
                    }
                    *((_DWORD *)v771 + 631) &= ~0x200000u;
                    if ( v800 != *((_QWORD *)v771 + 336) )
                    {
                      v953 = *((_QWORD *)v771 + 177);
                      v954 = *((_DWORD *)v771 + 513);
                      *(_QWORD *)v953 = v771;
                      *(_DWORD *)(v953 + 16) = v954;
                      if ( !*((_DWORD *)v771 + 582) )
                      {
                        v955 = *((_QWORD *)v771 + 177);
                        v956 = v800 ^ *((_QWORD *)v771 + 336);
                        v5047 = v945;
                        v5048 = v936;
                        LODWORD(v5040) = v935;
                        *(_QWORD *)(v955 + 24) = v956;
                      }
                      sub_140B9E384(v771, 0LL, v800, 256LL);
                    }
                  }
                }
              }
            }
            v793 = Timer;
            v820 = -1073741701;
            goto LABEL_1527;
          }
          v957 = sub_140B9EDF0_Offset + 24 + *(unsigned __int16 *)(sub_140B9EDF0_Offset + 20);
          v5030 = v5044;
          v5031 = v957;
          v5035 = v5044 + 12LL * ((unsigned int)PgC_0_1 / 0xC);
          v958 = 0;
          LODWORD(v5020) = 0;
          v959 = (_BYTE *)v5034;
          v960 = v5047;
          v961 = v936;
          v962 = v5035;
          v963 = v935;
          v964 = v5043;
          v965 = v793;
          Timer = v793;
          v966 = v957;
          v5048 = v961;
          LODWORD(v5040) = v963;
LABEL_1425:
          v967 = v963;
          v968 = v961;
          v969 = v960;
          v800 = *(unsigned int *)(v966 + 40LL * v958 + 12);
          v970 = *(_DWORD *)(v966 + 40LL * v958 + 16);
          v5028 = 5LL * v958;
          v971 = *(_DWORD *)(v966 + 40LL * v958 + 8);
          LODWORD(v5024) = v800;
          if ( v970 <= v971 )
            v970 = v971;
          v795 = (unsigned int)v800 + v970;
          LODWORD(v5025) = v795;
          if ( v958 )
          {
            if ( (unsigned int)v795 < *(_DWORD *)(v966 + 40LL * (v958 - 1) + 12) )
            {
              v1021 = *((_DWORD *)v959 + 630);
              if ( (v1021 & 0x100000) == 0 )
              {
                v5114[6] = -402653175;
                KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, v5036, 1uLL, 0LL);
              }
              if ( *((_DWORD *)v959 + 582) )
                goto LABEL_1493;
              v5047 = v969;
              v5048 = v968;
              *((_QWORD *)v959 + 292) = v959 - 0x5C5FC0A76E374B18LL;
              v793 = v965;
              LODWORD(v5040) = v967;
              *((_QWORD *)v959 + 293) = 0LL;
              v1022 = v5036;
              *((_QWORD *)v959 + 294) = 271LL;
              *((_QWORD *)v959 + 295) = v1022;
              *((_DWORD *)v959 + 582) = 1;
              Timer = v965;
              if ( (v1021 & 0x20000000) == 0 )
              {
                v4393 = (*((_DWORD *)v959 + 631) & 0x200000) == 0;
                v5047 = v969;
                v5048 = v968;
                LODWORD(v5040) = v967;
                Timer = v965;
                if ( !v4393 )
                {
                  v5047 = v969;
                  v5048 = v968;
                  LODWORD(v5040) = v967;
                  Timer = v965;
                  if ( (v1021 & 1) != 0 )
                  {
                    v1023 = *((unsigned int *)v959 + 669);
                    v973 = v967;
                    v1024 = *((_QWORD *)v959 + 263);
                    v1025 = *((_DWORD *)v959 + 513) - v1023;
                    v800 = *((_QWORD *)v959 + 335);
                    v795 = (__int64)&v959[v1023];
                    v5047 = v969;
                    v5048 = v968;
                    LODWORD(v5040) = v967;
                    Timer = v965;
                    v1026 = (unsigned __int64)&v959[8 * ((unsigned __int64)v1025 >> 3) + v1023];
                    if ( &v959[v1023] != (_BYTE *)v1026 )
                    {
                      v5047 = v969;
                      v5048 = v968;
                      LODWORD(v5040) = v967;
                      Timer = v965;
                      do
                      {
                        *(_QWORD *)v795 ^= v800;
                        v1027 = *(_QWORD *)v795;
                        v795 += 8LL;
                        v800 = ((v1024 ^ v1027) + __ROR8__(v800, v800 & 0x3F)) ^ 0xEFA;
                      }
                      while ( v795 != v1026 );
                    }
                    *((_DWORD *)v959 + 631) &= ~0x200000u;
                    if ( v800 != *((_QWORD *)v959 + 336) )
                    {
                      v1028 = *((_QWORD *)v959 + 177);
                      v1029 = *((_DWORD *)v959 + 513);
                      *(_QWORD *)v1028 = v959;
                      *(_DWORD *)(v1028 + 16) = v1029;
                      if ( !*((_DWORD *)v959 + 582) )
                      {
                        v1030 = *((_QWORD *)v959 + 336) ^ v800;
                        goto LABEL_1491;
                      }
LABEL_1492:
                      sub_140B9E384(v959, 0LL, v800, 256LL);
                    }
LABEL_1493:
                    v793 = Timer;
                  }
                }
              }
LABEL_1494:
              v771 = (_BYTE *)v5034;
              v820 = -1073741701;
              goto LABEL_1527;
            }
            v958 = v5020;
          }
          v972 = (unsigned int *)v5030;
          if ( v5030 == v962 )
            goto LABEL_1472;
          v973 = v5040;
          v974 = v5048;
          v975 = v5047;
          while ( 1 )
          {
            v976 = *v972;
            v968 = v974;
            v977 = v972[1];
            v969 = v975;
            if ( v976 >= (unsigned int)v795 || v977 <= (unsigned int)v800 )
            {
LABEL_1471:
              v958 = v5020;
              v964 = v5043;
              v966 = v5031;
              v962 = v5035;
LABEL_1472:
              LODWORD(v5020) = ++v958;
              if ( v958 >= v964 )
              {
                v800 = v5030;
                v1041 = v5032;
                v793 = Timer;
                v1042 = Timer;
                v1043 = v5040;
                v1044 = v5048;
                v1045 = v5047;
                if ( v5030 != v5035 )
                {
                  v1046 = *((_DWORD *)v959 + 630);
                  if ( (v1046 & 0x100000) == 0 )
                  {
                    v5114[10] = -402653175;
                    KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, v5036, 3uLL, 0LL);
                  }
                  if ( !*((_DWORD *)v959 + 582) )
                  {
                    *((_QWORD *)v959 + 292) = v959 - 0x5C5FC0A76E374B18LL;
                    *((_QWORD *)v959 + 293) = 0LL;
                    v1047 = v5036;
                    *((_QWORD *)v959 + 294) = 271LL;
                    *((_QWORD *)v959 + 295) = v1047;
                    *((_DWORD *)v959 + 582) = 1;
                    LODWORD(v5040) = v1043;
                    Timer = v793;
                    if ( (v1046 & 0x20000000) == 0 )
                    {
                      v4393 = (*((_DWORD *)v959 + 631) & 0x200000) == 0;
                      v5047 = v1045;
                      v5048 = v1044;
                      LODWORD(v5040) = v1043;
                      Timer = v793;
                      if ( !v4393 )
                      {
                        v5047 = v1045;
                        v5048 = v1044;
                        LODWORD(v5040) = v1043;
                        Timer = v793;
                        if ( (v1046 & 1) != 0 )
                        {
                          v1048 = *((unsigned int *)v959 + 669);
                          v1049 = *((_QWORD *)v959 + 263);
                          v1050 = *((_DWORD *)v959 + 513) - v1048;
                          v800 = *((_QWORD *)v959 + 335);
                          v795 = (__int64)&v959[v1048];
                          v5047 = v1045;
                          v5048 = v1044;
                          LODWORD(v5040) = v1043;
                          Timer = v1042;
                          v1051 = (unsigned __int64)&v959[8 * ((unsigned __int64)v1050 >> 3) + v1048];
                          if ( &v959[v1048] != (_BYTE *)v1051 )
                          {
                            v5047 = v1045;
                            v5048 = v1044;
                            LODWORD(v5040) = v1043;
                            Timer = v1042;
                            do
                            {
                              *(_QWORD *)v795 ^= v800;
                              v1052 = *(_QWORD *)v795;
                              v795 += 8LL;
                              v800 = ((v1049 ^ v1052) + __ROR8__(v800, v800 & 0x3F)) ^ 0xEFA;
                            }
                            while ( v795 != v1051 );
                          }
                          *((_DWORD *)v959 + 631) &= ~0x200000u;
                          if ( v800 == *((_QWORD *)v959 + 336) )
                            goto LABEL_1493;
                          v1053 = *((_QWORD *)v959 + 177);
                          v1054 = *((_DWORD *)v959 + 513);
                          v793 = Timer;
                          *(_QWORD *)v1053 = v959;
                          *(_DWORD *)(v1053 + 16) = v1054;
                          if ( !*((_DWORD *)v959 + 582) )
                          {
                            v1055 = *((_QWORD *)v959 + 177);
                            v1056 = v800 ^ *((_QWORD *)v959 + 336);
                            v5047 = v1045;
                            v5048 = v1044;
                            LODWORD(v5040) = v1043;
                            *(_QWORD *)(v1055 + 24) = v1056;
                            Timer = v793;
                          }
                          sub_140B9E384(v959, 0LL, v800, 256LL);
                        }
                      }
                    }
                  }
                  goto LABEL_1494;
                }
                if ( (_DWORD)v5032 )
                  v1057 = (v5032 + 6) & 0xFFFFFFF8;
                else
                  v1057 = 0;
                v1058 = *((_DWORD *)v959 + 513);
                v1059 = *((unsigned int *)v959 + 593);
                LODWORD(v5022) = v1058;
                v1060 = v1057 + 24 * v964 + v1058 + 48;
                if ( v1060 <= *((_DWORD *)v959 + 665) )
                {
                  v1061 = (__int64)v959;
                  *((_DWORD *)v959 + 513) = v1060;
                }
                else
                {
                  v1061 = GetRandomizedSafeContext(v959, v1060, v1059);
                  if ( !v1061 )
                  {
                    v820 = -1073741670;
                    v771 = (_BYTE *)v5034;
                    goto LABEL_1525;
                  }
                  v1062 = *((_DWORD *)v959 + 630);
                  if ( (v1062 & 2) == 0 )
                  {
                    v1063 = *((_DWORD *)v959 + 513);
                    v1064 = *((_QWORD *)v959 + 253);
                    v1065 = (v1062 & 0x10000000) != 0 ? *((_DWORD *)v959 + 593) : 0;
                    if ( v1063 >= 8 )
                    {
                      v1066 = (unsigned __int64)v1063 >> 3;
                      do
                      {
                        *(_QWORD *)v959 = 0LL;
                        v1063 -= 8;
                        v959 += 8;
                        --v1066;
                      }
                      while ( v1066 );
                    }
                    for ( ; v1063; --v1063 )
                      *v959++ = 0;
                    v1067 = *(_DWORD *)(v1061 + 2372);
                    v1068 = v1043;
                    v1069 = v5047;
                    v1070 = Timer;
                    v1071 = v5048;
                    *(_DWORD *)(v1061 + 2372) = v1065;
                    if ( v1065 == 3 )
                    {
                      (*(void (__fastcall **)(__int64))(v1061 + 872))(v1064);
LABEL_1542:
                      v1043 = v1068;
                    }
                    else
                    {
                      if ( (*(_DWORD *)(v1061 + 2520) & 0x8000000) == 0 )
                      {
                        v5047 = v1069;
                        v5048 = v1071;
                        LODWORD(v5040) = v1068;
                        Timer = v1070;
                        if ( v1065 )
                        {
                          (*(void (__fastcall **)(__int64, _QWORD))(v1061 + 568))(v1064 - 8, *(_QWORD *)(v1064 - 8));
                          v5047 = v1069;
                          v5048 = v1071;
                          Timer = v1070;
                          goto LABEL_1542;
                        }
                      }
                      (*(void (__fastcall **)(__int64))(v1061 + 264))(v1064);
                      v1043 = v5040;
                    }
                    v1058 = (unsigned int)v5022;
                    v964 = v5043;
                    *(_DWORD *)(v1061 + 2372) = v1067;
                    v1041 = v5032;
                  }
                  *(_DWORD *)(v1061 + 2520) &= ~2u;
                }
                ++*(_DWORD *)(v1061 + 2092);
                v1072 = v1061 + v1058;
                v1073 = v1061;
                v5041 = (_DWORD *)v1072;
                v5034 = v1061;
                v1074 = (_QWORD *)v1072;
                v1075 = 48;
                v1076 = 6LL;
                do
                {
                  *v1074 = 0LL;
                  v1075 -= 8;
                  ++v1074;
                  --v1076;
                }
                while ( v1076 );
                for ( ; v1075; --v1075 )
                {
                  *(_BYTE *)v1074 = 0;
                  v1074 = (_QWORD *)((char *)v1074 + 1);
                }
                v795 = v5044;
                *(_DWORD *)v1072 = 30;
                *(_QWORD *)(v1072 + 8) = v795;
                *(_DWORD *)(v1072 + 16) = 0;
                v1077 = *(_QWORD *)(v1061 + 2104);
                for ( i15 = v1077; ; LODWORD(v1077) = i15 ^ v1077 )
                {
                  i15 >>= 31;
                  if ( !i15 )
                    break;
                }
                v1079 = v5036;
                v1080 = Timer;
                v1081 = v5048;
                v1082 = v5047;
                *(_DWORD *)(v1072 + 20) = v1077 & 0x7FFFFFFF;
                *(_QWORD *)(v1072 + 24) = v1079;
                Timer = v1080;
                LODWORD(v5040) = v1043;
                v5048 = v1081;
                *(_DWORD *)(v1072 + 32) = *(_DWORD *)(sub_140B9EDF0_Offset + 80);
                *(_DWORD *)(v1072 + 36) = (_DWORD)PgC_0_1;
                *(_WORD *)(v1072 + 40) = v964;
                v5047 = v1082;
                v5042 = v1072;
                v5296 = (_BYTE *)v1061;
                i21 = v1072 + 48;
                if ( v1041 )
                  v1083 = v1072 + 48 + (((unsigned int)(v1041 - 1) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL);
                else
                  v1083 = v1072 + 48;
                v5028 = v1083;
                v1084 = v1083 + 24LL * v964;
                v5030 = v1084;
                v1085 = v795 + 12;
                if ( !v1041 )
                  v1085 = v5035;
                v5032 = v1085;
                v1086 = v1073;
                v5027 = v1073;
                if ( v964 )
                {
                  v795 = v964;
                  v1087 = (_DWORD *)(v1083 + 8);
                  v1088 = v1072;
                  v5041 = (_DWORD *)v1072;
                  v5042 = v1072;
                  v800 = (unsigned int)v5040;
                  v5027 = v1073;
                  v5047 = v1082;
                  v5048 = v1081;
                  Timer = v1080;
                  do
                  {
                    v1089 = 2LL;
                    do
                    {
                      *(v1087 - 2) = 0;
                      *(v1087 - 1) = 0;
                      *v1087 = 0x80000000;
                      v1087 += 3;
                      --v1089;
                    }
                    while ( v1089 );
                    --v795;
                  }
                  while ( v795 );
                }
                else
                {
                  v800 = (unsigned int)v5040;
                  v1088 = v5042;
                }
                if ( v1083 == v1084 )
                {
                  v771 = (_BYTE *)v5034;
LABEL_1742:
                  v5295[0] = v771;
                  v642 = v771;
                  v5183 = (unsigned int *)v771;
                  goto LABEL_1743;
                }
                v5034 = v1073 + 2524;
                while ( 2 )
                {
                  v1090 = v800;
                  LODWORD(v5022) = 0;
                  v1091 = v1081;
                  v1092 = v1088;
                  v1093 = 0;
                  if ( (*(_DWORD *)(v5031 + 36) & 0x2000000) != 0
                    || (v1094 = *(_DWORD *)v5031, *(_DWORD *)v5031 == 1414090313)
                    && *(_DWORD *)(v5031 + 4) == 1195525195 )
                  {
                    v1097 = Timer;
                    v1098 = v5040;
                  }
                  else
                  {
                    Timer = v1080;
                    v1095 = v1081;
                    v5048 = v1081;
                    LODWORD(v5040) = v1090;
                    v5047 = v1082;
                    v5042 = v1092;
                    v5027 = v1086;
                    if ( v1094 == 1162297680 )
                    {
                      v1096 = *(_WORD *)(v5031 + 4);
                      if ( v1096 == 30839 || v1096 == 29303 || v1096 == 30583 )
                      {
                        v1097 = v1080;
                        v5047 = v1082;
                        v1098 = v1090;
                        v5027 = v1086;
                        v5042 = v1092;
                        v5048 = v1091;
                        LODWORD(v5040) = v1090;
                        Timer = v1080;
                        break;
                      }
                      v1095 = v1081;
                    }
                    if ( v1094 == 1095914053 && *(_WORD *)(v5031 + 4) == 16724 )
                    {
                      v1098 = v1090;
                      v1097 = v1080;
                      break;
                    }
                    v1099 = *(char **)(v1086 + 2384);
                    v1097 = Timer;
                    v1100 = *(char **)(v1086 + 2392);
                    v1101 = 7;
                    v1102 = *(char **)(v1086 + 2400);
                    v1103 = v5031 - (_QWORD)v1099;
                    v1104 = *(char **)(v1086 + 2408);
                    v1105 = v1082;
                    v1098 = v5040;
                    v5047 = v1105;
                    v5027 = v1086;
                    v5048 = v1095;
                    while ( 1 )
                    {
                      v1106 = v1099[v1103];
                      v1107 = *v1099;
                      v1099 += v5182;
                      if ( v1106 != v1107 )
                        break;
                      if ( !--v1101 )
                        goto LABEL_1600;
                    }
                    v1108 = 8;
                    v1109 = (char *)v5031;
                    v5027 = v1086;
                    do
                    {
                      v1110 = *(_QWORD *)v1109;
                      v1109 += 8;
                      v1111 = *(_QWORD *)v1100;
                      v1100 += 8;
                      if ( v1110 != v1111 )
                        goto LABEL_1591;
                      v1108 -= 8;
                    }
                    while ( v1108 >= 8 );
                    if ( v1108 )
                    {
                      while ( 1 )
                      {
                        v1112 = *v1109++;
                        v1113 = *v1100++;
                        if ( v1112 != v1113 )
                          break;
                        if ( !--v1108 )
                          goto LABEL_1600;
                      }
LABEL_1591:
                      v1114 = 4;
                      v1115 = v5031 - (_QWORD)v1102;
                      while ( 1 )
                      {
                        v1116 = v1102[v1115];
                        v1117 = *v1102++;
                        if ( v1116 != v1117 )
                          break;
                        if ( !--v1114 )
                          goto LABEL_1600;
                      }
                      v1118 = 6;
                      v1119 = v5031 - (_QWORD)v1104;
                      v5027 = v1086;
                      while ( 1 )
                      {
                        v1120 = v1104[v1119];
                        v1121 = *v1104++;
                        if ( v1120 != v1121 )
                          break;
                        if ( !--v1118 )
                          goto LABEL_1600;
                      }
LABEL_1601:
                      v1122 = *(_DWORD *)(v5031 + 36);
                      if ( v1122 < 0 )
                      {
                        v1093 = 1;
                        LODWORD(v5022) = 1;
                        goto LABEL_1604;
                      }
                      if ( v1093 )
                      {
LABEL_1604:
                        if ( *(_DWORD *)v5031 == 1414090313 && *(_DWORD *)(v5031 + 4) == 1195525195 )
                        {
                          LODWORD(v5022) = v1093;
                          v4393 = (*(_DWORD *)(v1086 + 2524) & 0x2000) == 0;
                          v5034 = v1086 + 2524;
                          v5027 = v1086;
                          LODWORD(v5040) = v1098;
                          Timer = v1097;
                          if ( !v4393 )
                          {
                            v5027 = v1086;
                            LODWORD(v5022) = 0;
                            LODWORD(v5040) = v1098;
                            Timer = v1097;
                          }
                        }
                        else
                        {
                          v1097 = Timer;
                        }
                      }
                      v1123 = v1097;
                      v1124 = v5048;
                      v1125 = v1098;
                      v1126 = v5047;
                      v1127 = v1086;
                      v1128 = v5042;
                      if ( (*(_DWORD *)v5034 & 0x4000) != 0
                        && (v1122 & 0x20000000) != 0
                        && (v5036 == *(_QWORD *)(v1086 + 1504) || v5036 == *(_QWORD *)(v1086 + 1512)) )
                      {
                        LODWORD(v5022) = 1;
                      }
                      v1129 = *(_DWORD *)(v5031 + 12);
                      v1130 = v1129;
                      v1131 = *(_DWORD *)(v5031 + 16);
                      v1132 = *(_DWORD *)(v5031 + 8);
                      LODWORD(sub_140B9FDF0_Offset) = v1129;
                      if ( v1131 <= v1132 )
                        v1131 = v1132;
                      LODWORD(v5025) = v1129;
                      v1133 = v1129 + v1131;
                      LODWORD(v5020) = v1133;
                      if ( v5044 == v5035 )
                      {
                        LODWORD(v5024) = 0;
                        v1136 = v1129 != 0;
                      }
                      else
                      {
                        v1134 = *(_DWORD *)v5044;
                        v1135 = *(_DWORD *)(v5044 + 4);
                        LODWORD(v5024) = v1135;
                        v5027 = v1127;
                        LODWORD(v5040) = v1098;
                        Timer = v1123;
                        v1136 = v1134 < v1129;
                        if ( v1134 > v1129 )
                        {
                          LODWORD(v5025) = v1129;
                          v1137 = v1127;
                          LODWORD(v5024) = v1135;
                          v5027 = v1127;
                          LODWORD(v5040) = v1098;
                          Timer = v1123;
                          if ( v1135 > v1133 )
                            goto LABEL_1646;
                          LODWORD(v5025) = v1130;
                          v5027 = v1127;
                          LODWORD(v5040) = v1098;
                          Timer = v1123;
                          if ( (_DWORD)v5022 )
                          {
                            v1168 = v5044;
                            goto LABEL_1653;
                          }
                          v1138 = v1130;
                          v1139 = (_DWORD *)v5028;
                          LODWORD(v5025) = v1134;
                          LODWORD(v5024) = v1135;
                          *(_DWORD *)v5028 = v1138;
                          v1140 = (char *)(v5036 + v1138);
                          v1139[1] = v1134;
                          v1141 = v1134 - *v1139;
                          v1142 = &v1140[v1141];
                          v5026 = v1140;
                          LODWORD(PgC_0_1) = v1141;
                          v1143 = 0;
                          v5042 = v1128;
                          v1144 = v1135;
                          v5047 = v1126;
                          v1145 = v1127;
                          v5048 = v1124;
                          v5027 = v1127;
                          LODWORD(v5040) = v1098;
                          for ( Timer = v1123; ; v1123 = Timer )
                          {
                            v1146 = v5048;
                            v1147 = v1123;
                            v1148 = v5047;
                            v1149 = v1145;
                            v1150 = v5042;
                            v1151 = v1125;
                            v1152 = v5041;
                            LODWORD(v5043) = v1144;
                            v1153 = v5528[v1143];
                            if ( (unsigned __int64)v5026 < v1153 + (unsigned int)v5488[v1143]
                              && (unsigned __int64)v1142 > v1153 )
                            {
                              goto LABEL_1644;
                            }
                            v1144 = v5024;
                            ++v1143;
                            v1145 = v5027;
                            v1125 = v5040;
                            if ( v1143 >= 6 )
                              break;
                          }
                          v1154 = (const char *)v5026;
                          *(_DWORD *)(v1149 + 2120) += v1141;
                          v1155 = v1154;
                          LODWORD(sub_140B9EDF0_Offset) = *(_DWORD *)(v1149 + 2100);
                          v1156 = &v1154[v1141];
                          HalExtensionList = *(PVOID *)(v1149 + 2104);
                          LODWORD(v5024) = v5043;
                          v1157 = v1154;
                          v5027 = v1149;
                          v5041 = v1152;
                          v5042 = v1150;
                          v5047 = v1148;
                          v5048 = v1146;
                          LODWORD(v5040) = v1151;
                          Timer = v1147;
                          if ( v1154 < v1156 )
                          {
                            LODWORD(v5024) = v5043;
                            v5027 = v1149;
                            v5041 = v1152;
                            v5042 = v1150;
                            v5047 = v1148;
                            v5048 = v1146;
                            LODWORD(v5040) = v1151;
                            Timer = v1147;
                            do
                            {
                              _mm_prefetch(v1157, 0);
                              v1157 += 64;
                            }
                            while ( v1157 < v1156 );
                          }
                          LOBYTE(v1158) = sub_140B9EDF0_Offset;
                          v1159 = (unsigned __int64)HalExtensionList;
                          v1160 = v1141 >> 7;
                          if ( v1141 >> 7 )
                          {
                            do
                            {
                              v1161 = 8LL;
                              do
                              {
                                v1162 = *((_QWORD *)v1155 + 1) ^ __ROL8__(*(_QWORD *)v1155 ^ v1159, v1158);
                                v1155 += 16;
                                v1159 = __ROL8__(v1162, v1158);
                                --v1161;
                              }
                              while ( v1161 );
                              v1163 = (__ROL8__((unsigned __int64)HalExtensionList ^ (v1155 - v1154), 17) ^ (unsigned __int64)HalExtensionList ^ (v1155 - v1154))
                                    * (unsigned __int128)0x7010008004002001uLL;
                              v5308 = *((_QWORD *)&v1163 + 1);
                              v1158 = ((unsigned __int8)v1163 ^ (unsigned __int8)(BYTE8(v1163) ^ v1158)) & 0x3F;
                              if ( !v1158 )
                                LOBYTE(v1158) = 1;
                              --v1160;
                            }
                            while ( v1160 );
                            LOBYTE(v1141) = (_BYTE)PgC_0_1;
                          }
                          v1164 = v1141 & 0x7F;
                          if ( v1164 >= 8 )
                          {
                            v1165 = (unsigned __int64)v1164 >> 3;
                            do
                            {
                              v1159 = __ROL8__(*(_QWORD *)v1155 ^ v1159, v1158);
                              v1155 += 8;
                              v1164 -= 8;
                              --v1165;
                            }
                            while ( v1165 );
                          }
                          for ( ; v1164; --v1164 )
                          {
                            v1166 = *(unsigned __int8 *)v1155++;
                            v1159 = __ROL8__(v1166 ^ v1159, v1158);
                          }
                          for ( i16 = v1159; ; LODWORD(v1159) = i16 ^ v1159 )
                          {
                            i16 >>= 31;
                            if ( !i16 )
                              break;
                          }
                          *(_DWORD *)(v5028 + 8) = v1159 & 0x7FFFFFFF;
LABEL_1644:
                          v1133 = v5020;
                          v1130 = v5025;
LABEL_1645:
                          v1137 = v5027;
LABEL_1646:
                          if ( (unsigned int)v5024 <= v1133 )
                          {
                            v1168 = v5044;
                            if ( v5044 != v5035 )
                            {
LABEL_1653:
                              v1169 = (unsigned int *)v5032;
                              if ( v5032 != v5035 )
                              {
                                v1170 = *(_DWORD *)(v5032 + 4);
                                LODWORD(sub_140B9EDF0_Offset) = v1170;
                                if ( v1170 <= v1133 )
                                {
                                  v1171 = v5040;
                                  v1172 = Timer;
                                  v1173 = v5048;
                                  v1174 = v5047;
                                  v1175 = v5041;
                                  while ( 1 )
                                  {
                                    v1176 = v1172;
                                    v1177 = v1173;
                                    v1178 = v1171;
                                    v1179 = v5042;
                                    v1180 = v1175;
                                    v1181 = v1137;
                                    v1182 = v1174;
                                    if ( v1169 == (unsigned int *)v5035 )
                                      goto LABEL_1705;
                                    if ( (_DWORD)v5022 )
                                    {
                                      v1171 = v5040;
                                      v1183 = 0x80;
                                      v1172 = Timer;
                                      v1173 = v5048;
                                      v1174 = v5047;
                                      v1175 = v5041;
                                      goto LABEL_1702;
                                    }
                                    v1184 = *(_DWORD *)(v1168 + 4);
                                    v1185 = *v1169;
                                    LODWORD(v5024) = v1184;
                                    LODWORD(v5025) = v1185;
                                    if ( v1185 < v1184 )
                                    {
                                      v1186 = *(_DWORD *)(v1137 + 2520);
                                      if ( (v1186 & 0x100000) == 0 )
                                      {
                                        v5114[11] = -402653175;
                                        KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, v5036, 6uLL, 0LL);
                                      }
                                      if ( !*(_DWORD *)(v1137 + 2328) )
                                      {
                                        v5027 = v1137;
                                        v5041 = v1180;
                                        *(_QWORD *)(v1137 + 2336) = v1137 - 0x5C5FC0A76E374B18LL;
                                        *(_QWORD *)(v1137 + 2344) = 0LL;
                                        v1187 = v5036;
                                        *(_QWORD *)(v1137 + 2352) = 271LL;
                                        *(_QWORD *)(v1137 + 2360) = v1187;
                                        *(_DWORD *)(v1137 + 2328) = 1;
                                        v5042 = v1179;
                                        v5047 = v1174;
                                        v5048 = v1177;
                                        LODWORD(v5040) = v1178;
                                        Timer = v1176;
                                        if ( (v1186 & 0x20000000) == 0 )
                                        {
                                          v5027 = v1137;
                                          v5041 = v1180;
                                          v5042 = v1179;
                                          v4393 = (*(_DWORD *)v5034 & 0x200000) == 0;
                                          v5047 = v1174;
                                          v5048 = v1177;
                                          LODWORD(v5040) = v1178;
                                          Timer = v1176;
                                          if ( !v4393 )
                                          {
                                            v5027 = v1137;
                                            v5041 = v1180;
                                            v5042 = v1179;
                                            v5047 = v1174;
                                            v5048 = v1177;
                                            LODWORD(v5040) = v1178;
                                            Timer = v1176;
                                            if ( (v1186 & 1) != 0 )
                                            {
                                              v1188 = *(unsigned int *)(v1137 + 2676);
                                              v1189 = *(_QWORD *)(v1137 + 2680);
                                              v1190 = *(_DWORD *)(v1137 + 2052) - v1188;
                                              v5027 = v1137;
                                              v1191 = (__int64 *)(v1137 + v1188);
                                              v5041 = v1180;
                                              v1192 = *(_QWORD *)(v1137 + 2104);
                                              v5042 = v1179;
                                              v5047 = v1174;
                                              v5048 = v1177;
                                              v1193 = &v1191[(unsigned __int64)v1190 >> 3];
                                              LODWORD(v5040) = v1178;
                                              Timer = v1176;
                                              if ( v1191 == v1193 )
                                              {
                                                v1194 = v1178;
                                              }
                                              else
                                              {
                                                v5027 = v1181;
                                                v1194 = v1178;
                                                LODWORD(v5040) = v1178;
                                                v5041 = v1180;
                                                v5042 = v1179;
                                                v5047 = v1182;
                                                v5048 = v1177;
                                                Timer = v1176;
                                                do
                                                {
                                                  *v1191 ^= v1189;
                                                  v1195 = *v1191++;
                                                  v1189 = ((v1192 ^ v1195) + __ROR8__(v1189, v1189 & 0x3F)) ^ 0xEFA;
                                                }
                                                while ( v1191 != v1193 );
                                              }
                                              v1137 = v5027;
                                              *(_DWORD *)v5034 &= ~0x200000u;
                                              if ( v1189 != *(_QWORD *)(v1137 + 2688) )
                                              {
                                                v1196 = *(_QWORD *)(v1137 + 1416);
                                                v1197 = *(_DWORD *)(v1137 + 2052);
                                                *(_QWORD *)v1196 = v1137;
                                                *(_DWORD *)(v1196 + 16) = v1197;
                                                if ( !*(_DWORD *)(v1137 + 2328) )
                                                {
                                                  v1198 = *(_QWORD *)(v1137 + 1416);
                                                  v1199 = v1189 ^ *(_QWORD *)(v1137 + 2688);
                                                  v5027 = v1137;
                                                  v5041 = v1180;
                                                  v5042 = v1179;
                                                  *(_QWORD *)(v1198 + 24) = v1199;
                                                  v5047 = v1182;
                                                  v5048 = v1177;
                                                  LODWORD(v5040) = v1194;
                                                  Timer = v1176;
                                                }
                                                sub_140B9E384(v1137, 0LL, v1189, 256LL);
                                              }
                                              v1184 = v5024;
                                            }
                                          }
                                        }
                                      }
                                    }
                                    v1200 = v5025 - v1184;
                                    v1201 = v5036 + v1184 + (unsigned int)v5025 - v1184;
                                    HalExtensionList = (PVOID)(v5036 + v1184);
                                    for ( i17 = 0; i17 < 6; ++i17 )
                                    {
                                      v1172 = Timer;
                                      v1203 = v5528[i17];
                                      if ( (unsigned __int64)HalExtensionList < v1203 + (unsigned int)v5488[i17]
                                        && v1201 > v1203 )
                                      {
                                        v1175 = v5041;
                                        v1174 = v5047;
                                        v1171 = v5040;
                                        v1173 = v5048;
LABEL_1700:
                                        v1183 = 0x80;
                                        v5041 = v1175;
                                        v5027 = v1137;
                                        goto LABEL_1701;
                                      }
                                      v1137 = v5027;
                                    }
                                    v1175 = v5041;
                                    v1174 = v5047;
                                    v1171 = v5040;
                                    v1173 = v5048;
                                    if ( v1200 < 4 )
                                      goto LABEL_1700;
                                    v1204 = (const char *)HalExtensionList;
                                    *(_DWORD *)(v5027 + 2120) += v1200;
                                    v1205 = v1204;
                                    v1206 = *(_DWORD *)(v1137 + 2100);
                                    v1207 = v1204;
                                    v1208 = *(_QWORD *)(v1137 + 2104);
                                    v1209 = &v1204[v1200];
                                    if ( v1204 < v1209 )
                                    {
                                      v5027 = v1137;
                                      v5047 = v1174;
                                      v5048 = v1173;
                                      LODWORD(v5040) = v1171;
                                      Timer = v1172;
                                      do
                                      {
                                        _mm_prefetch(v1207, 0);
                                        v1207 += 64;
                                      }
                                      while ( v1207 < v1209 );
                                    }
                                    v1210 = v1208;
                                    v1211 = v1200 >> 7;
                                    if ( v1200 >> 7 )
                                    {
                                      do
                                      {
                                        v1212 = 8LL;
                                        do
                                        {
                                          v1213 = *((_QWORD *)v1205 + 1) ^ __ROL8__(*(_QWORD *)v1205 ^ v1210, v1206);
                                          v1205 += 16;
                                          v1210 = __ROL8__(v1213, v1206);
                                          --v1212;
                                        }
                                        while ( v1212 );
                                        v1214 = __ROL8__(v1208 ^ (v1205 - v1204), 17) ^ v1208 ^ (v1205 - v1204);
                                        v5309 = ((unsigned __int64)v1214 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                                        v1206 = ((unsigned __int8)(v5309 ^ v1214) ^ (unsigned __int8)v1206) & 0x3F;
                                        if ( !v1206 )
                                          LOBYTE(v1206) = 1;
                                        --v1211;
                                      }
                                      while ( v1211 );
                                      v1174 = v5047;
                                    }
                                    v1215 = v1200 & 0x7F;
                                    if ( v1215 >= 8 )
                                    {
                                      v1216 = (unsigned __int64)v1215 >> 3;
                                      do
                                      {
                                        v1210 = __ROL8__(*(_QWORD *)v1205 ^ v1210, v1206);
                                        v1205 += 8;
                                        v1215 -= 8;
                                        --v1216;
                                      }
                                      while ( v1216 );
                                    }
                                    for ( ; v1215; --v1215 )
                                    {
                                      v1217 = *(unsigned __int8 *)v1205++;
                                      v1210 = __ROL8__(v1217 ^ v1210, v1206);
                                    }
                                    for ( i18 = v1210; ; LOBYTE(v1210) = i18 ^ v1210 )
                                    {
                                      i18 >>= 7;
                                      if ( !i18 )
                                        break;
                                    }
                                    v1172 = Timer;
                                    v1183 = v1210 & 0x7F;
                                    v1173 = v5048;
                                    v1175 = v5041;
LABEL_1701:
                                    v1168 = v5044;
                                    v1170 = sub_140B9EDF0_Offset;
LABEL_1702:
                                    v1219 = (char *)i21++;
                                    *v1219 = v1183;
                                    v1168 += 12LL;
                                    v1169 = (unsigned int *)(v5032 + 12);
                                    v5044 = v1168;
                                    v5032 = (ULONG_PTR)v1169;
                                    if ( v1169 != (unsigned int *)v5035 )
                                    {
                                      v1170 = v1169[1];
                                      LODWORD(sub_140B9EDF0_Offset) = v1170;
                                    }
                                    v1133 = v5020;
                                    if ( v1170 > (unsigned int)v5020 )
                                    {
LABEL_1705:
                                      v1130 = v5025;
                                      break;
                                    }
                                  }
                                }
                              }
                            }
                          }
LABEL_1706:
                          if ( (_DWORD)v5022 || v1130 == v1133 )
                            goto LABEL_1732;
                          v1220 = v5028;
                          *(_DWORD *)(v5028 + 12) = v1130;
                          *(_DWORD *)(v1220 + 16) = v1133;
                          v1221 = *(unsigned int *)(v1220 + 12);
                          v1222 = v1133 - v1221;
                          v1223 = (_QWORD *)(v5036 + v1221);
                          for ( i19 = 0; i19 < 6; ++i19 )
                          {
                            v1225 = Timer;
                            v1226 = v5040;
                            v1227 = v5048;
                            v1228 = v5047;
                            v1229 = v5042;
                            v1230 = v5041;
                            v1231 = v5528[i19];
                            if ( (unsigned __int64)v1223 < v1231 + (unsigned int)v5488[i19]
                              && (unsigned __int64)v1223 + v1222 > v1231 )
                            {
                              v1133 = v5020;
LABEL_1732:
                              v1247 = v5028;
                              goto LABEL_1733;
                            }
                            v1232 = v5027;
                          }
                          *(_DWORD *)(v5027 + 2120) += v1222;
                          v1233 = v1223;
                          v1234 = *(_QWORD *)(v1232 + 2104);
                          v1235 = (unsigned __int64)v1223 + v1222;
                          LODWORD(sub_140B9EDF0_Offset) = *(_DWORD *)(v1232 + 2100);
                          v5027 = v1232;
                          v1236 = (const char *)v1223;
                          v5041 = v1230;
                          v5042 = v1229;
                          v5047 = v1228;
                          v5048 = v1227;
                          LODWORD(v5040) = v1226;
                          Timer = v1225;
                          if ( (unsigned __int64)v1223 < v1235 )
                          {
                            v5027 = v1232;
                            v5041 = v1230;
                            v5042 = v1229;
                            v5047 = v1228;
                            v5048 = v1227;
                            LODWORD(v5040) = v1226;
                            Timer = v1225;
                            do
                            {
                              _mm_prefetch(v1236, 0);
                              v1236 += 64;
                            }
                            while ( (unsigned __int64)v1236 < v1235 );
                          }
                          LOBYTE(v1237) = sub_140B9EDF0_Offset;
                          v1238 = v1222 >> 7;
                          if ( v1222 >> 7 )
                          {
                            v1239 = v1234;
                            do
                            {
                              v1240 = 8LL;
                              do
                              {
                                v1241 = v1233[1] ^ __ROL8__(*v1233 ^ v1234, v1237);
                                v1233 += 2;
                                v1234 = __ROL8__(v1241, v1237);
                                --v1240;
                              }
                              while ( v1240 );
                              v1242 = (__ROL8__(v1239 ^ ((char *)v1233 - (char *)v1223), 17) ^ v1239 ^ ((char *)v1233 - (char *)v1223))
                                    * (unsigned __int128)0x7010008004002001uLL;
                              v5310 = *((_QWORD *)&v1242 + 1);
                              v1237 = ((unsigned __int8)v1242 ^ (unsigned __int8)(BYTE8(v1242) ^ v1237)) & 0x3F;
                              if ( !v1237 )
                                LOBYTE(v1237) = 1;
                              --v1238;
                            }
                            while ( v1238 );
                          }
                          v1243 = v1222 & 0x7F;
                          if ( v1243 >= 8 )
                          {
                            v1244 = (unsigned __int64)v1243 >> 3;
                            do
                            {
                              v1234 = __ROL8__(*v1233++ ^ v1234, v1237);
                              v1243 -= 8;
                              --v1244;
                            }
                            while ( v1244 );
                          }
                          for ( ; v1243; --v1243 )
                          {
                            v1245 = *(unsigned __int8 *)v1233;
                            v1233 = (_QWORD *)((char *)v1233 + 1);
                            v1234 = __ROL8__(v1245 ^ v1234, v1237);
                          }
                          for ( i20 = v1234; ; LODWORD(v1234) = i20 ^ v1234 )
                          {
                            i20 >>= 31;
                            if ( !i20 )
                              break;
                          }
                          v1247 = v5028;
                          *(_DWORD *)(v5028 + 20) = v1234 & 0x7FFFFFFF;
                          v1133 = v5020;
LABEL_1733:
                          v795 = v5035;
                          v1248 = v5044;
                          if ( v5044 != v5035
                            && *(_DWORD *)v5044 >= (unsigned int)sub_140B9FDF0_Offset
                            && *(_DWORD *)(v5044 + 4) <= v1133 )
                          {
                            v1249 = v5032;
                            if ( v5032 != v5035 )
                            {
                              v1250 = i21;
                              *(_BYTE *)i21 = 0x80;
                              i21 = v1250 + 1;
                              v5032 = v1249 + 12;
                            }
                            v5044 = v1248 + 12;
                          }
                          v5031 += 40LL;
                          v1086 = v5027;
                          v800 = (unsigned int)v5040;
                          v1081 = v5048;
                          v5028 = v1247 + 24;
                          if ( v1247 + 24 == v5030 )
                          {
                            v771 = v5296;
                            goto LABEL_1742;
                          }
                          v1080 = Timer;
                          v1082 = v5047;
                          v1088 = v5042;
                          continue;
                        }
                      }
                      if ( !v1136 )
                        goto LABEL_1645;
                      goto LABEL_1706;
                    }
                  }
                  break;
                }
LABEL_1600:
                v1093 = 1;
                LODWORD(v5022) = 1;
                goto LABEL_1601;
              }
              v963 = v5040;
              v961 = v5048;
              v960 = v5047;
              goto LABEL_1425;
            }
            if ( v976 < (unsigned int)v800 || v977 > (unsigned int)v795 )
            {
              v1032 = *((_DWORD *)v959 + 630);
              if ( (v1032 & 0x100000) == 0 )
              {
                v5114[9] = -402653175;
                KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, v5036, 2uLL, 0LL);
              }
              if ( *((_DWORD *)v959 + 582) )
                goto LABEL_1493;
              v5047 = v975;
              v5048 = v968;
              *((_QWORD *)v959 + 292) = v959 - 0x5C5FC0A76E374B18LL;
              v793 = v965;
              LODWORD(v5040) = v973;
              *((_QWORD *)v959 + 293) = 0LL;
              v1033 = v5036;
              *((_QWORD *)v959 + 294) = 271LL;
              *((_QWORD *)v959 + 295) = v1033;
              *((_DWORD *)v959 + 582) = 1;
              Timer = v965;
              if ( (v1032 & 0x20000000) == 0 )
              {
                v4393 = (*((_DWORD *)v959 + 631) & 0x200000) == 0;
                v5047 = v975;
                v5048 = v968;
                LODWORD(v5040) = v973;
                Timer = v965;
                if ( !v4393 )
                {
                  v5047 = v975;
                  v5048 = v968;
                  LODWORD(v5040) = v973;
                  Timer = v965;
                  if ( (v1032 & 1) != 0 )
                  {
                    v1034 = *((unsigned int *)v959 + 669);
                    v1035 = *((_QWORD *)v959 + 263);
                    v1036 = *((_DWORD *)v959 + 513) - v1034;
                    v800 = *((_QWORD *)v959 + 335);
                    v795 = (__int64)&v959[v1034];
                    v5047 = v969;
                    v5048 = v968;
                    LODWORD(v5040) = v973;
                    Timer = v965;
                    v1037 = (unsigned __int64)&v959[8 * ((unsigned __int64)v1036 >> 3) + v1034];
                    if ( &v959[v1034] != (_BYTE *)v1037 )
                    {
                      v5047 = v969;
                      v5048 = v968;
                      LODWORD(v5040) = v973;
                      Timer = v965;
                      do
                      {
                        *(_QWORD *)v795 ^= v800;
                        v1038 = *(_QWORD *)v795;
                        v795 += 8LL;
                        v800 = ((v1035 ^ v1038) + __ROR8__(v800, v800 & 0x3F)) ^ 0xEFA;
                      }
                      while ( v795 != v1037 );
                    }
                    *((_DWORD *)v959 + 631) &= ~0x200000u;
                    if ( v800 != *((_QWORD *)v959 + 336) )
                    {
                      v1039 = *((_QWORD *)v959 + 177);
                      v1040 = *((_DWORD *)v959 + 513);
                      *(_QWORD *)v1039 = v959;
                      *(_DWORD *)(v1039 + 16) = v1040;
                      if ( !*((_DWORD *)v959 + 582) )
                      {
                        v1030 = v800 ^ *((_QWORD *)v959 + 336);
LABEL_1491:
                        v1031 = *((_QWORD *)v959 + 177);
                        v5047 = v969;
                        v5048 = v968;
                        LODWORD(v5040) = v973;
                        *(_QWORD *)(v1031 + 24) = v1030;
                        Timer = v965;
                      }
                      goto LABEL_1492;
                    }
                    goto LABEL_1493;
                  }
                }
              }
              goto LABEL_1494;
            }
            v978 = *(unsigned int *)(v5030 + 8);
            if ( (v978 & 1) != 0 || (*(_BYTE *)(v5036 + v978) & 0x20) != 0 )
            {
              v979 = v973;
              v980 = Timer;
              v981 = v5048;
              v982 = v5047;
              v983 = *(_DWORD *)(v5031 + 8 * v5028 + 12);
              v984 = *(_DWORD *)(v5031 + 8 * v5028 + 16);
              v985 = *(_DWORD *)(v5031 + 8 * v5028 + 8);
              LODWORD(sub_140B9FDF0_Offset) = v983;
              if ( v984 <= v985 )
                v984 = v985;
              v986 = (__int64 (__fastcall *)(_QWORD, _QWORD))*((_QWORD *)v959 + 131);
              LODWORD(v5022) = v983 + v984;
              v987 = (unsigned int *)v986(v5030, v5036);
              i21 = (ULONG_PTR)v987;
              if ( *v987 >= (unsigned int)sub_140B9FDF0_Offset && v987[1] <= (unsigned int)v5022 )
                goto LABEL_1474;
              v988 = v5036;
              v989 = *(_DWORD *)(v5034 + 2520);
              if ( (v989 & 0x100000) == 0 )
              {
                v5114[8] = -402653175;
                KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, v5036, ((_DWORD)v987 - (_DWORD)v5036) | 0x80000000, 0LL);
              }
              if ( *((_DWORD *)v959 + 582) )
              {
LABEL_1474:
                v990 = Timer;
              }
              else
              {
                *((_QWORD *)v959 + 292) = v959 - 0x5C5FC0A76E374B18LL;
                *((_QWORD *)v959 + 293) = 0LL;
                v990 = v980;
                *((_QWORD *)v959 + 294) = 271LL;
                *((_QWORD *)v959 + 295) = v988;
                *((_DWORD *)v959 + 582) = 1;
                Timer = v980;
                LODWORD(v5040) = v979;
                if ( (v989 & 0x20000000) == 0 )
                {
                  v4393 = (*((_DWORD *)v959 + 631) & 0x200000) == 0;
                  v5047 = v982;
                  v5048 = v981;
                  LODWORD(v5040) = v979;
                  Timer = v980;
                  if ( !v4393 )
                  {
                    v5047 = v982;
                    v5048 = v981;
                    LODWORD(v5040) = v979;
                    Timer = v980;
                    if ( (v989 & 1) != 0 )
                    {
                      v991 = *((unsigned int *)v959 + 669);
                      v992 = *((_QWORD *)v959 + 263);
                      v993 = *((_DWORD *)v959 + 513) - v991;
                      v994 = *((_QWORD *)v959 + 335);
                      v995 = (__int64 *)&v959[v991];
                      v5047 = v982;
                      v5048 = v981;
                      LODWORD(v5040) = v979;
                      Timer = v980;
                      v996 = (unsigned __int64)&v959[8 * ((unsigned __int64)v993 >> 3) + v991];
                      if ( &v959[v991] != (_BYTE *)v996 )
                      {
                        v5047 = v982;
                        v5048 = v981;
                        LODWORD(v5040) = v979;
                        Timer = v980;
                        do
                        {
                          *v995 ^= v994;
                          v997 = *v995++;
                          v994 = ((v992 ^ v997) + __ROR8__(v994, v994 & 0x3F)) ^ 0xEFA;
                        }
                        while ( v995 != (__int64 *)v996 );
                      }
                      *((_DWORD *)v959 + 631) &= ~0x200000u;
                      if ( v994 != *((_QWORD *)v959 + 336) )
                      {
                        v998 = *((_QWORD *)v959 + 177);
                        v999 = *((_DWORD *)v959 + 513);
                        *(_QWORD *)v998 = v959;
                        *(_DWORD *)(v998 + 16) = v999;
                        if ( !*((_DWORD *)v959 + 582) )
                        {
                          v1000 = *((_QWORD *)v959 + 177);
                          v1001 = v994 ^ *((_QWORD *)v959 + 336);
                          v5047 = v982;
                          v5048 = v981;
                          LODWORD(v5040) = v979;
                          *(_QWORD *)(v1000 + 24) = v1001;
                        }
                        sub_140B9E384(v959, 0LL, v994, 256LL);
                        v987 = (unsigned int *)i21;
                      }
                      v990 = Timer;
                    }
                  }
                }
              }
              v1002 = v990;
              v1003 = v5040;
              v1004 = v5048;
              v1005 = v5047;
              v1006 = (_DWORD *)(*((__int64 (__fastcall **)(unsigned int *, ULONG_PTR, ULONG_PTR))v959 + 132))(
                                  v987,
                                  v5036,
                                  v5036 + *v987);
              if ( *v1006 >= (unsigned int)sub_140B9FDF0_Offset && v1006[1] <= (unsigned int)v5022 )
                goto LABEL_1476;
              v1007 = v5036;
              v1008 = ((_DWORD)v1006 - v5036) | 0x80000000;
              v1009 = *(_DWORD *)(v5034 + 2520);
              if ( (v1009 & 0x100000) == 0 )
              {
                v5114[7] = -402653175;
                KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, v5036, v1008, 0LL);
              }
              if ( *((_DWORD *)v959 + 582) )
              {
LABEL_1476:
                v795 = (unsigned int)v5025;
                v973 = v5040;
                v975 = v5047;
                v965 = Timer;
              }
              else
              {
                *((_QWORD *)v959 + 292) = v959 - 0x5C5FC0A76E374B18LL;
                v974 = v1004;
                LODWORD(v5040) = v1003;
                *((_QWORD *)v959 + 293) = 0LL;
                *((_QWORD *)v959 + 294) = 271LL;
                *((_QWORD *)v959 + 295) = v1007;
                *((_DWORD *)v959 + 582) = 1;
                Timer = v1002;
                if ( (v1009 & 0x20000000) != 0 )
                  goto LABEL_1477;
                v4393 = (*((_DWORD *)v959 + 631) & 0x200000) == 0;
                v5047 = v1005;
                v5048 = v1004;
                LODWORD(v5040) = v1003;
                Timer = v1002;
                if ( v4393 || (v5047 = v1005, v5048 = v1004, LODWORD(v5040) = v1003, Timer = v1002, (v1009 & 1) == 0) )
                {
LABEL_1477:
                  v973 = v1003;
                  v965 = v1002;
LABEL_1478:
                  v795 = (unsigned int)v5025;
                  v975 = v5047;
                  goto LABEL_1470;
                }
                v1010 = *((unsigned int *)v959 + 669);
                v1011 = *((_QWORD *)v959 + 263);
                v1012 = *((_DWORD *)v959 + 513) - v1010;
                v1013 = *((_QWORD *)v959 + 335);
                v1014 = (__int64 *)&v959[v1010];
                v5048 = v1004;
                v973 = v1003;
                v5047 = v1005;
                LODWORD(v5040) = v1003;
                Timer = v1002;
                v1015 = (unsigned __int64)&v959[8 * ((unsigned __int64)v1012 >> 3) + v1010];
                if ( &v959[v1010] != (_BYTE *)v1015 )
                {
                  v5047 = v1005;
                  v5048 = v974;
                  LODWORD(v5040) = v1003;
                  Timer = v1002;
                  do
                  {
                    *v1014 ^= v1013;
                    v1016 = *v1014++;
                    v1013 = ((v1011 ^ v1016) + __ROR8__(v1013, v1013 & 0x3F)) ^ 0xEFA;
                  }
                  while ( v1014 != (__int64 *)v1015 );
                }
                *((_DWORD *)v959 + 631) &= ~0x200000u;
                if ( v1013 == *((_QWORD *)v959 + 336) )
                {
                  v965 = Timer;
                  goto LABEL_1478;
                }
                v1017 = *((_QWORD *)v959 + 177);
                v1018 = *((_DWORD *)v959 + 513);
                v975 = v5047;
                *(_QWORD *)v1017 = v959;
                *(_DWORD *)(v1017 + 16) = v1018;
                if ( !*((_DWORD *)v959 + 582) )
                {
                  v1019 = *((_QWORD *)v959 + 177);
                  v1020 = v1013 ^ *((_QWORD *)v959 + 336);
                  v5047 = v975;
                  v5048 = v974;
                  LODWORD(v5040) = v973;
                  *(_QWORD *)(v1019 + 24) = v1020;
                }
                sub_140B9E384(v959, 0LL, v1013, 256LL);
                v795 = (unsigned int)v5025;
                v965 = Timer;
              }
            }
            v974 = v5048;
LABEL_1470:
            v800 = (unsigned int)v5024;
            v972 = (unsigned int *)(v5030 + 12);
            v5030 = (ULONG_PTR)v972;
            if ( v972 == (unsigned int *)v5035 )
              goto LABEL_1471;
          }
        }
      }
      else
      {
LABEL_1291:
        v5296 = 0LL;
      }
      v793 = Timer;
      v5183 = (unsigned int *)v859;
LABEL_1529:
      Timer = v793;
      goto LABEL_1074;
    }
    break;
  }
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  HalExtensionList = (PVOID)KiGetHalExtensionList(v753, v743, v741);
  v5026 = *(PVOID *)HalExtensionList;
  if ( v5026 != HalExtensionList )
  {
    v1705 = v5319;
    v1706 = v5320;
    v5028 = v5321;
    v5031 = v5322;
    v5027 = v5319;
    for ( i21 = v5320; ; v1706 = i21 )
    {
      HalExtensionModuleFromLinks = KiGetHalExtensionModuleFromLinks();
      if ( !HalExtensionModuleFromLinks )
        goto LABEL_2811;
      v1708 = *((_QWORD *)v642 + 236);
      v5205 = v642;
      v1709 = *(_QWORD *)(HalExtensionModuleFromLinks + v1708);
      v1710 = (*((__int64 (__fastcall **)(ULONG_PTR, char *))v642 + 66))(v1709, v5493);
      v1711 = v5494;
      v1712 = v5495;
      v5035 = v1710;
      LODWORD(sub_140B9EDF0_Offset) = v5495;
      v5115 = v5495;
      v5030 = v5494;
      if ( !v5494 )
      {
        if ( (*((_DWORD *)v642 + 630) & 0x100000) == 0 )
        {
          v5117[9] = -402653175;
          KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, v1709, 5uLL, 0LL);
        }
        goto LABEL_1074;
      }
      v5446 = 0LL;
      LODWORD(v1713) = 4;
      v1714 = Timer;
      v1715 = &v5447;
      do
      {
        *(_BYTE *)v1715 = 0;
        v1715 = (int *)((char *)v1715 + 1);
        v4393 = (_DWORD)v1713 == 1;
        v1713 = (unsigned int)(v1713 - 1);
      }
      while ( !v4393 );
      v1716 = 0;
      if ( !*((_DWORD *)v642 + 523) )
        goto LABEL_2343;
      v1717 = v5447;
      LODWORD(v1713) = HIDWORD(v5446);
      v1718 = v5446;
      Timer = v1714;
      while ( 1 )
      {
        v1719 = v642;
        if ( *((_QWORD *)v642 + 344) )
          v1719 = (_BYTE *)*((_QWORD *)v642 + 344);
        v1720 = 0;
        v1721 = &v1719[*((unsigned int *)v1719 + 522)];
        if ( v1718 && (unsigned int)v1713 <= v1716 )
        {
          v1720 = v1713;
          v1721 = &v1719[v1717];
        }
        if ( v1720 != v1716 )
        {
          v1722 = v1716 - v1720;
          v1720 = v1716;
          while ( 1 )
          {
            if ( *(_DWORD *)v1721 == 1 )
            {
LABEL_2330:
              v1723 = 4 * (*((_DWORD *)v1721 + 4) / 0xCu) + 48;
              goto LABEL_2331;
            }
            if ( *(_DWORD *)v1721 == 7 )
            {
              v1723 = (unsigned int)(24 * (*((_DWORD *)v1721 + 6) + 2));
              goto LABEL_2331;
            }
            if ( *(_DWORD *)v1721 == 8 )
              break;
            switch ( *(_DWORD *)v1721 )
            {
              case 0xA:
                v1723 = (unsigned int)(16 * (*((_DWORD *)v1721 + 7) + 3));
                break;
              case 0x1C:
                v1724 = *((unsigned __int16 *)v1721 + 20);
LABEL_2328:
                v1723 = (v1724 + 55) & 0xFFFFFFF8;
                break;
              case 0x1E:
                v1723 = (((*((_DWORD *)v1721 + 9) != 0 ? *((_DWORD *)v1721 + 9) - 1 : 0) / 0xCu + 7) & 0xFFFFFFF8)
                      + 24 * (*((unsigned __int16 *)v1721 + 20) + 2);
                break;
              case 0x21:
                v1723 = 20
                      * (unsigned int)(((*((_DWORD *)v1721 + 8) & 0xFFF)
                                      + (unsigned __int64)*((unsigned int *)v1721 + 10)
                                      + 4095) >> 12)
                      + 48;
                break;
              case 0x2B:
                goto LABEL_2330;
              default:
                v1723 = 48LL;
                break;
            }
LABEL_2331:
            v1721 += v1723;
            if ( !--v1722 )
            {
              v1712 = sub_140B9EDF0_Offset;
              v1705 = v5027;
              v1711 = v5030;
              goto LABEL_2333;
            }
          }
          v1724 = *((unsigned __int16 *)v1721 + 16);
          goto LABEL_2328;
        }
LABEL_2333:
        v1718 = 1;
        v1713 = v1720;
        LODWORD(v5446) = 1;
        v1717 = (_DWORD)v1721 - (_DWORD)v1719;
        HIDWORD(v5446) = v1720;
        v5447 = (_DWORD)v1721 - (_DWORD)v1719;
        v1725 = *(_DWORD *)v1721;
        if ( (*(_DWORD *)v1721 == 1 || v1725 == 12 || v1725 == 43)
          && *((_QWORD *)v1721 + 1) == v5035
          && *((_DWORD *)v1721 + 4) == v1712 )
        {
          break;
        }
        if ( (unsigned int)(v1725 - 33) <= 1 && *((_QWORD *)v1721 + 4) == v1711 )
          break;
        if ( ++v1716 >= *((_DWORD *)v642 + 523) )
          goto LABEL_2343;
      }
      if ( v1721 )
        goto LABEL_2811;
LABEL_2343:
      v1726 = (char **)*((_QWORD *)v642 + 165);
      LODWORD(sub_140B9EDF0_Offset) = v5115;
      _disable();
      v1279 = v5183;
      v1727 = *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *((_QWORD *)v5183 + 203));
      _enable();
      (*((void (__fastcall **)(__int64, __int64))v1279 + 47))(v1727, v1713);
      LOBYTE(v1728) = 1;
      (*((void (__fastcall **)(_QWORD, __int64))v1279 + 31))(*((_QWORD *)v1279 + 166), v1728);
      v1729 = *v1726;
      if ( *v1726 != (char *)v1726 )
      {
        v1730 = *((_QWORD *)v1279 + 235);
        while ( 1 )
        {
          v1731 = *(_QWORD *)&v1729[*((_QWORD *)v1279 + 236) - v1730];
          if ( v1711 >= v1731 && v1711 < v1731 + *(unsigned int *)&v1729[*((_QWORD *)v1279 + 237) - v1730] )
            break;
          v1729 = *(char **)v1729;
          if ( v1729 == (char *)v1726 )
            goto LABEL_2350;
        }
        (*((void (__fastcall **)(char *, __int64))v1279 + 29))(&v1729[-v1730], 2LL);
      }
LABEL_2350:
      v1732 = Timer;
      (*((void (__fastcall **)(_QWORD))v1279 + 37))(*((_QWORD *)v1279 + 166));
      (*((void (**)(void))v1279 + 48))();
      if ( (*((_DWORD *)v1279 + 630) & 0x20000000) != 0 )
      {
        v1734 = sub_140BA596C(&v5183, v1711, 0LL);
        v642 = v5183;
        v5027 = v1705;
        i21 = v1706;
        if ( v1734 < 0 )
          goto LABEL_2601;
        goto LABEL_2811;
      }
      v5530[4] = 0LL;
      v5496[4] = 0;
      LOBYTE(v1733) = 1;
      v1735 = (*((__int64 (__fastcall **)(ULONG_PTR, __int64, _QWORD, int *))v1279 + 64))(v1711, v1733, 0LL, &v5115);
      v1737 = 0;
      if ( v1735 )
        v1737 = v5115;
      else
        v5115 = 0;
      v5530[1] = v1735;
      v1738 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))*((_QWORD *)v1279 + 64);
      v5496[1] = v1737;
      LOBYTE(v1736) = 1;
      v1740 = v1738(v1711, v1736, 12LL, &v5115);
      v5032 = v1740;
      v1741 = 0;
      if ( v1740 )
        v1741 = v5115;
      else
        v5115 = 0;
      LODWORD(v5022) = v1741;
      v5530[2] = v1740;
      v5496[2] = v1741;
      LOBYTE(v1739) = 1;
      v1742 = (*((__int64 (__fastcall **)(ULONG_PTR, __int64, __int64, int *))v1279 + 64))(v1711, v1739, 10LL, &v5115);
      v1743 = 0;
      if ( v1742 )
        v1743 = v5115;
      else
        v5115 = 0;
      v5530[3] = v1742;
      v1744 = (__int64 (__fastcall *)(_QWORD))*((_QWORD *)v1279 + 65);
      v5496[3] = v1743;
      v1745 = v1744(v1711);
      if ( !v1745 )
      {
        if ( (*((_DWORD *)v1279 + 630) & 0x100000) == 0 )
        {
          v5117[8] = -402653175;
          KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, v1711, 7uLL, 0LL);
        }
        if ( *((_DWORD *)v1279 + 582) )
          goto LABEL_1074;
        *((_QWORD *)v1279 + 292) = v1279 - 0x5C5FC0A76E374B18LL;
        *((_QWORD *)v1279 + 293) = 0LL;
        *((_QWORD *)v1279 + 294) = 271LL;
        *((_QWORD *)v1279 + 295) = v1711;
        *((_DWORD *)v1279 + 582) = 1;
        v2129 = *((_DWORD *)v1279 + 630);
        if ( (v2129 & 0x20000000) != 0 )
          goto LABEL_1074;
        v4393 = (*((_DWORD *)v1279 + 631) & 0x200000) == 0;
        Timer = v1732;
        if ( v4393 )
          goto LABEL_1074;
        Timer = v1732;
        if ( (v2129 & 1) == 0 )
          goto LABEL_1074;
        v2130 = *((unsigned int *)v1279 + 669);
        v1694 = v1732;
        v2131 = *((_QWORD *)v1279 + 263);
        v2132 = *((_DWORD *)v1279 + 513) - v2130;
        v1697 = *((_QWORD *)v1279 + 335);
        v2133 = (__int64 *)&v1279[v2130];
        Timer = v1732;
        v2134 = (unsigned __int64)&v1279[8 * ((unsigned __int64)v2132 >> 3) + v2130];
        if ( &v1279[v2130] != (_BYTE *)v2134 )
        {
          Timer = v1732;
          do
          {
            *v2133 ^= v1697;
            v2135 = *v2133++;
            v1697 = ((v2131 ^ v2135) + __ROR8__(v1697, v1697 & 0x3F)) ^ 0xEFA;
          }
          while ( v2133 != (__int64 *)v2134 );
        }
        goto LABEL_2290;
      }
      v1746 = (*((__int64 (__fastcall **)(ULONG_PTR, int *))v1279 + 147))(v1711, &v5324);
      v1747 = *((unsigned int *)v1279 + 593);
      v5530[5] = v1746;
      LODWORD(v1746) = *(_DWORD *)(v1745 + 84);
      v5530[0] = v1711;
      v1748 = *((unsigned int *)v1279 + 513);
      v5496[0] = v1746;
      v5496[5] = v5324;
      v1749 = v1748 + 288;
      if ( (unsigned int)(v1748 + 288) <= *((_DWORD *)v1279 + 665) )
      {
        v642 = v1279;
        *((_DWORD *)v1279 + 513) = v1749;
        goto LABEL_2380;
      }
      v642 = (_BYTE *)GetRandomizedSafeContext(v1279, v1749, v1747);
      if ( !v642 )
        goto LABEL_2815;
      v1750 = *((_DWORD *)v1279 + 630);
      if ( (v1750 & 2) == 0 )
      {
        v1751 = *((_DWORD *)v1279 + 513);
        v1752 = *((_QWORD *)v1279 + 253);
        v1753 = (v1750 & 0x10000000) != 0 ? *((_DWORD *)v1279 + 593) : 0;
        if ( v1751 >= 8 )
        {
          v1754 = (unsigned __int64)v1751 >> 3;
          do
          {
            *(_QWORD *)v1279 = 0LL;
            v1751 -= 8;
            v1279 += 8;
            --v1754;
          }
          while ( v1754 );
        }
        for ( ; v1751; --v1751 )
          *v1279++ = 0;
        v1755 = *((_DWORD *)v642 + 593);
        v1756 = Timer;
        *((_DWORD *)v642 + 593) = v1753;
        if ( v1753 == 3 )
        {
          (*((void (__fastcall **)(__int64))v642 + 109))(v1752);
        }
        else if ( (*((_DWORD *)v642 + 630) & 0x8000000) != 0 || (Timer = v1756, !v1753) )
        {
          (*((void (__fastcall **)(__int64))v642 + 33))(v1752);
        }
        else
        {
          (*((void (__fastcall **)(__int64, _QWORD))v642 + 71))(v1752 - 8, *(_QWORD *)(v1752 - 8));
          Timer = v1756;
        }
        *((_DWORD *)v642 + 593) = v1755;
      }
      *((_DWORD *)v642 + 630) &= ~2u;
LABEL_2380:
      v1757 = 6LL;
      v1758 = &v642[v1748];
      *((_DWORD *)v642 + 523) += 6;
      v5027 = (size_t)&v642[v1748];
      if ( !v642 )
      {
LABEL_2815:
        v5205 = 0LL;
        goto LABEL_1074;
      }
      v5034 = (ULONG_PTR)&v642[v1748];
      v1759 = v5530;
      v1760 = v5496;
      v5036 = 6LL;
      do
      {
        v1761 = (unsigned int)*v1760;
        v1762 = 48;
        v1763 = (_QWORD *)*v1759;
        v1764 = v1758;
        LODWORD(sub_140B9FDF0_Offset) = *v1760;
        do
        {
          *v1764 = 0LL;
          v1762 -= 8;
          ++v1764;
          --v1757;
        }
        while ( v1757 );
        for ( ; v1762; --v1762 )
        {
          *(_BYTE *)v1764 = 0;
          v1764 = (_QWORD *)((char *)v1764 + 1);
        }
        *(_DWORD *)v1758 = 0;
        v1765 = v1763;
        *((_QWORD *)v1758 + 1) = v1763;
        v1766 = (const char *)v1763;
        *((_DWORD *)v1758 + 4) = v1761;
        *((_DWORD *)v642 + 530) += v1761;
        v1767 = *((_DWORD *)v642 + 525);
        v1768 = *((_QWORD *)v642 + 263);
        if ( v1763 < (_QWORD *)((char *)v1763 + v1761) )
        {
          do
          {
            _mm_prefetch(v1766, 0);
            v1766 += 64;
          }
          while ( v1766 < (const char *)v1763 + v1761 );
        }
        v1769 = *((_QWORD *)v642 + 263);
        v1770 = (unsigned int)v1761 >> 7;
        if ( (unsigned int)v1761 >> 7 )
        {
          do
          {
            v1771 = 8LL;
            do
            {
              v1772 = v1765[1] ^ __ROL8__(*v1765 ^ v1769, v1767);
              v1765 += 2;
              v1769 = __ROL8__(v1772, v1767);
              --v1771;
            }
            while ( v1771 );
            v1773 = (__ROL8__(v1768 ^ ((char *)v1765 - (char *)v1763), 17) ^ v1768 ^ (unsigned __int64)((char *)v1765 - (char *)v1763))
                  * (unsigned __int128)0x7010008004002001uLL;
            v5325 = *((_QWORD *)&v1773 + 1);
            v1767 = (BYTE8(v1773) ^ (unsigned __int8)(v1773 ^ v1767)) & 0x3F;
            if ( !v1767 )
              LOBYTE(v1767) = 1;
            --v1770;
          }
          while ( v1770 );
          LODWORD(v1761) = sub_140B9FDF0_Offset;
        }
        v1774 = v1761 & 0x7F;
        if ( v1774 >= 8 )
        {
          v1775 = (unsigned __int64)(v1761 & 0x7F) >> 3;
          do
          {
            v1769 = __ROL8__(*v1765++ ^ v1769, v1767);
            v1774 -= 8;
            --v1775;
          }
          while ( v1775 );
        }
        for ( ; v1774; --v1774 )
        {
          v1776 = *(unsigned __int8 *)v1765;
          v1765 = (_QWORD *)((char *)v1765 + 1);
          v1769 = __ROL8__(v1776 ^ v1769, v1767);
        }
        for ( i22 = v1769 >> 31; i22; i22 >>= 31 )
          LODWORD(v1769) = i22 ^ v1769;
        v1778 = v5027;
        ++v1759;
        ++v1760;
        *(_DWORD *)(v5027 + 20) = v1769 & 0x7FFFFFFF;
        *((_DWORD *)v642 + 530) += v1761;
        v1757 = 6LL;
        v1758 = (_BYTE *)(v1778 + 48);
        v4393 = v5036-- == 1;
        v5027 = v1778 + 48;
      }
      while ( !v4393 );
      v1779 = v5034;
      v1780 = v5030;
      *(_DWORD *)v5034 = 44;
      *(_QWORD *)(v1779 + 24) = v1780;
      v1781 = *((_DWORD *)v642 + 630);
      if ( (v1781 & 0x8000000) == 0 && (v1781 & 0x100000) == 0 && (*((_DWORD *)v642 + 631) & 0x8000) != 0 )
      {
        *(_DWORD *)(v1779 + 32) |= 1u;
        if ( (unsigned int)sub_140B9ED30(v642, v1780) )
          *(_DWORD *)(v1779 + 32) |= 4u;
      }
      v5205 = v642;
      v5183 = (unsigned int *)v642;
      v1734 = sub_140B9C0B0((unsigned int)&v5205, v5035, sub_140B9EDF0_Offset, v1780, 0, (__int64)v5117, (__int64)&v5116);
      if ( v1734 < 0 )
      {
        v1390 = Timer;
LABEL_2411:
        Timer = v1390;
        goto LABEL_2601;
      }
      v1782 = v5205;
      v1783 = 48;
      v5027 = (size_t)v1758;
      v1784 = v1779 + v5205 - v642;
      v1785 = v5116 - v5117[0];
      v1786 = 6LL;
      v1787 = (_QWORD *)(v1780 + v5117[0]);
      v5034 = v1784;
      v1788 = (_DWORD *)(v1784 + 192);
      v5183 = (unsigned int *)v5205;
      v1789 = (_QWORD *)(v1784 + 192);
      do
      {
        *v1789 = 0LL;
        v1783 -= 8;
        ++v1789;
        --v1786;
      }
      while ( v1786 );
      for ( i23 = 1LL; v1783; --v1783 )
      {
        *(_BYTE *)v1789 = 0;
        v1789 = (_QWORD *)((char *)v1789 + 1);
      }
      *v1788 = 0;
      v1791 = (unsigned __int64)v1787 + v1785;
      *(_QWORD *)(v1784 + 200) = v1787;
      v1792 = v1787;
      *(_DWORD *)(v1784 + 208) = v1785;
      v1793 = (const char *)v1787;
      *((_DWORD *)v1782 + 530) += v1785;
      v1794 = *((_DWORD *)v1782 + 525);
      v1795 = *((_QWORD *)v1782 + 263);
      if ( (unsigned __int64)v1787 < v1791 )
      {
        do
        {
          _mm_prefetch(v1793, 0);
          v1793 += 64;
        }
        while ( (unsigned __int64)v1793 < v1791 );
      }
      v1796 = *((_QWORD *)v1782 + 263);
      v1797 = v1785 >> 7;
      if ( v1785 >> 7 )
      {
        do
        {
          v1798 = 8LL;
          do
          {
            v1799 = v1792[1] ^ __ROL8__(*v1792 ^ v1796, v1794);
            v1792 += 2;
            v1796 = __ROL8__(v1799, v1794);
            --v1798;
          }
          while ( v1798 );
          v1800 = __ROL8__(v1795 ^ ((char *)v1792 - (char *)v1787), 17) ^ v1795 ^ ((char *)v1792 - (char *)v1787);
          v5326 = (v1800 * (unsigned __int128)0x7010008004002001uLL) >> 64;
          i23 = 1LL;
          v1794 = ((unsigned __int8)(v5326 ^ v1800) ^ (unsigned __int8)v1794) & 0x3F;
          if ( !v1794 )
            LOBYTE(v1794) = 1;
          --v1797;
        }
        while ( v1797 );
        v1784 = v5034;
      }
      v1801 = v1785 & 0x7F;
      if ( v1801 >= 8 )
      {
        v1802 = (unsigned __int64)v1801 >> 3;
        do
        {
          v1796 = __ROL8__(*v1792++ ^ v1796, v1794);
          v1801 -= 8;
          --v1802;
        }
        while ( v1802 );
      }
      for ( ; v1801; --v1801 )
      {
        v1803 = *(unsigned __int8 *)v1792;
        v1792 = (_QWORD *)((char *)v1792 + 1);
        v1796 = __ROL8__(v1803 ^ v1796, v1794);
      }
      for ( i24 = v1796; ; LODWORD(v1796) = i24 ^ v1796 )
      {
        i24 >>= 31;
        if ( !i24 )
          break;
      }
      v5183 = (unsigned int *)v1782;
      v1788[5] = v1796 & 0x7FFFFFFF;
      v1805 = (_DWORD *)(v1784 + 96);
      *(_DWORD *)(v1784 + 240) = 48;
      if ( v1784 != -96LL )
      {
        v1816 = (_BYTE *)i21;
        v642 = v1782;
        LODWORD(v1821) = (_DWORD)v5022;
        *v1805 = 13;
        goto LABEL_2476;
      }
      v1806 = *((unsigned int *)v1782 + 513);
      v1807 = v1806 + 48;
      if ( (unsigned int)(v1806 + 48) <= *((_DWORD *)v1782 + 665) )
      {
        v642 = v1782;
        *((_DWORD *)v1782 + 513) = v1807;
        goto LABEL_2451;
      }
      v642 = (_BYTE *)GetRandomizedSafeContext(v1782, v1807, *((unsigned int *)v1782 + 593));
      if ( !v642 )
        goto LABEL_2813;
      v1808 = *((_DWORD *)v1782 + 630);
      if ( (v1808 & 2) == 0 )
      {
        v1809 = *((_DWORD *)v1782 + 513);
        v1810 = *((_QWORD *)v1782 + 253);
        v1811 = (v1808 & 0x10000000) != 0 ? *((_DWORD *)v1782 + 593) : 0;
        if ( v1809 >= 8 )
        {
          v1812 = (unsigned __int64)v1809 >> 3;
          do
          {
            *(_QWORD *)v1782 = v1805;
            v1809 -= 8;
            v1782 += 8;
            --v1812;
          }
          while ( v1812 );
        }
        for ( ; v1809; --v1809 )
          *v1782++ = 0;
        v1813 = *((_DWORD *)v642 + 593);
        v1814 = Timer;
        v1815 = v5027;
        *((_DWORD *)v642 + 593) = v1811;
        if ( v1811 == 3 )
        {
          (*((void (__fastcall **)(__int64))v642 + 109))(v1810);
        }
        else if ( (*((_DWORD *)v642 + 630) & 0x8000000) != 0 || (v5027 = v1815, Timer = v1814, !v1811) )
        {
          (*((void (__fastcall **)(__int64))v642 + 33))(v1810);
        }
        else
        {
          (*((void (__fastcall **)(__int64, _QWORD))v642 + 71))(v1810 - 8, *(_QWORD *)(v1810 - 8));
          v5027 = v1815;
          Timer = v1814;
        }
        *((_DWORD *)v642 + 593) = v1813;
      }
      *((_DWORD *)v642 + 630) &= ~2u;
LABEL_2451:
      v1816 = &v642[v1806];
      ++*((_DWORD *)v642 + 523);
      if ( !v642 )
      {
LABEL_2813:
        v5205 = 0LL;
        goto LABEL_1074;
      }
      v1817 = 48;
      v1818 = 6LL;
      v1819 = &v642[v1806];
      do
      {
        *v1819 = 0LL;
        v1817 -= 8;
        ++v1819;
        --v1818;
      }
      while ( v1818 );
      for ( ; v1817; --v1817 )
      {
        *(_BYTE *)v1819 = 0;
        v1819 = (_QWORD *)((char *)v1819 + 1);
      }
      v1820 = (const char *)v5032;
      v1821 = (unsigned int)v5022;
      v1792 = (_QWORD *)v5032;
      *(_DWORD *)v1816 = 13;
      *((_QWORD *)v1816 + 1) = v1792;
      *((_DWORD *)v1816 + 4) = v1821;
      *((_DWORD *)v642 + 530) += v1821;
      v1822 = *((_DWORD *)v642 + 525);
      v1823 = *((_QWORD *)v642 + 263);
      while ( v1820 < (const char *)v1792 + v1821 )
      {
        _mm_prefetch(v1820, 0);
        v1820 += 64;
      }
      v1824 = *((_QWORD *)v642 + 263);
      v1825 = (unsigned int)v1821 >> 7;
      if ( (unsigned int)v1821 >> 7 )
      {
        do
        {
          v1826 = 8LL;
          do
          {
            v1827 = *v1792 ^ v1824;
            v1828 = v1792 + 1;
            v1829 = *v1828 ^ __ROL8__(v1827, v1822);
            v1792 = v1828 + 1;
            v1824 = __ROL8__(v1829, v1822);
            --v1826;
          }
          while ( v1826 );
          v1830 = __ROL8__(v1823 ^ ((unsigned __int64)v1792 - v5032), 17) ^ v1823 ^ ((unsigned __int64)v1792 - v5032);
          v5327 = (v1830 * (unsigned __int128)0x7010008004002001uLL) >> 64;
          v1822 = ((unsigned __int8)(v5327 ^ v1830) ^ (unsigned __int8)v1822) & 0x3F;
          if ( !v1822 )
            LOBYTE(v1822) = 1;
          --v1825;
        }
        while ( v1825 );
        LODWORD(v1821) = (_DWORD)v5022;
      }
      i23 = v1821 & 0x7F;
      if ( (unsigned int)i23 >= 8 )
      {
        v1831 = (unsigned __int64)(v1821 & 0x7F) >> 3;
        do
        {
          v1824 = __ROL8__(*v1792++ ^ v1824, v1822);
          i23 = (unsigned int)(i23 - 8);
          --v1831;
        }
        while ( v1831 );
      }
      if ( (_DWORD)i23 )
      {
        do
        {
          v1832 = *(unsigned __int8 *)v1792;
          v1792 = (_QWORD *)((char *)v1792 + 1);
          v1824 = __ROL8__(v1832 ^ v1824, v1822);
          v4393 = (_DWORD)i23 == 1;
          i23 = (unsigned int)(i23 - 1);
        }
        while ( !v4393 );
      }
      for ( i25 = v1824; ; LODWORD(v1824) = i25 ^ v1824 )
      {
        i25 >>= 31;
        if ( !i25 )
          break;
      }
      v1784 = v5034;
      *((_DWORD *)v1816 + 5) = v1824 & 0x7FFFFFFF;
      v1805 = v1816;
      *((_DWORD *)v642 + 530) += v1821;
LABEL_2476:
      v1390 = Timer;
      v4393 = (*((_DWORD *)v642 + 630) & 0x20000000) == 0;
      i21 = (ULONG_PTR)v1816;
      if ( !v4393 && (_DWORD)v1821 )
        sub_1404D2D9C(v642, v5032, (unsigned int)v1821, v1805 + 7);
      v1805[6] = 0;
      v5205 = v642;
      if ( !v642 )
        goto LABEL_1074;
      *(_DWORD *)(v1784 + 144) = 35;
      v1136 = *(_DWORD *)(v1784 + 160) < 0x94u;
      v5183 = (unsigned int *)v642;
      if ( v1136 )
      {
        v1837 = v5030;
        goto LABEL_2489;
      }
      v1834 = *(_QWORD *)(v1784 + 152);
      v1835 = (*((__int64 (__fastcall **)(ULONG_PTR, __int64, _QWORD *))v642 + 65))(v5030, i23, v1792);
      if ( !v1835 )
      {
        v5205 = 0LL;
LABEL_2280:
        Timer = v1390;
        goto LABEL_1074;
      }
      v1836 = *(unsigned int *)(v1835 + 80);
      v1837 = v5030;
      v1838 = *(_DWORD *)(v1784 + 184) | 2;
      *(_DWORD *)(v1784 + 184) = v1838;
      v1839 = v1837 + v1836;
      v1840 = *(_QWORD **)(v1834 + 112);
      v1841 = v1838;
      if ( (unsigned __int64)v1840 >= v1837 && (unsigned __int64)v1840 < v1839 )
      {
        v1841 = v1838 | 4;
        *(_QWORD *)(v1784 + 168) = *v1840;
        *(_DWORD *)(v1784 + 184) = v1838 | 4;
      }
      v1842 = *(_QWORD **)(v1834 + 120);
      if ( (unsigned __int64)v1842 >= v1837 && (unsigned __int64)v1842 < v1839 )
      {
        *(_QWORD *)(v1784 + 176) = *v1842;
        *(_DWORD *)(v1784 + 184) = v1841 | 8;
      }
LABEL_2489:
      v4393 = (*((_DWORD *)v642 + 630) & 0x200000) == 0;
      v1843 = v5027;
      v5183 = (unsigned int *)v642;
      if ( v4393 )
      {
        i21 = (ULONG_PTR)v1816;
        Timer = v1390;
        goto LABEL_2810;
      }
      v1844 = (*((__int64 (__fastcall **)(ULONG_PTR))v642 + 65))(v1837);
      v5032 = v1844;
      v1845 = v1844;
      if ( !v1844 )
      {
        i21 = (ULONG_PTR)v1816;
        v1734 = -1073741701;
        goto LABEL_2411;
      }
      v1846 = *(_WORD *)(v1844 + 6);
      v5034 = (unsigned int)sub_140B9EDF0_Offset / 0xCuLL;
      LOWORD(v5043) = v1846;
      if ( !v1846 )
      {
        v1847 = *((_DWORD *)v642 + 630);
        if ( (v1847 & 0x100000) == 0 )
        {
          v5117[1] = -402653175;
          KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, v5030, 0LL, 0LL);
        }
        Timer = v1390;
        if ( *((_DWORD *)v642 + 582) )
        {
          i21 = (ULONG_PTR)v1816;
          goto LABEL_2508;
        }
        i21 = (ULONG_PTR)v1816;
        *((_QWORD *)v642 + 292) = v642 - 0x5C5FC0A76E374B18LL;
        *((_QWORD *)v642 + 293) = 0LL;
        v1848 = v5030;
        *((_QWORD *)v642 + 294) = 271LL;
        *((_QWORD *)v642 + 295) = v1848;
        *((_DWORD *)v642 + 582) = 1;
        if ( (v1847 & 0x20000000) == 0 )
        {
          v4393 = (*((_DWORD *)v642 + 631) & 0x200000) == 0;
          i21 = (ULONG_PTR)v1816;
          v5027 = v1843;
          Timer = v1390;
          if ( !v4393 )
          {
            i21 = (ULONG_PTR)v1816;
            v5027 = v1843;
            Timer = v1390;
            if ( (v1847 & 1) != 0 )
            {
              v1849 = *((unsigned int *)v642 + 669);
              v1850 = v642;
              v1851 = *((_QWORD *)v642 + 263);
              v1852 = *((_DWORD *)v642 + 513) - v1849;
              v1853 = *((_QWORD *)v642 + 335);
              v1854 = (__int64 *)&v642[v1849];
              i21 = (ULONG_PTR)v1816;
              v5027 = v1843;
              Timer = v1390;
              v1855 = (unsigned __int64)&v642[8 * ((unsigned __int64)v1852 >> 3) + v1849];
              if ( &v642[v1849] != (_BYTE *)v1855 )
              {
                i21 = (ULONG_PTR)v1816;
                v5027 = v1843;
                Timer = v1390;
                do
                {
                  *v1854 ^= v1853;
                  v1856 = *v1854++;
                  v1853 = ((v1851 ^ v1856) + __ROR8__(v1853, v1853 & 0x3F)) ^ 0xEFA;
                }
                while ( v1854 != (__int64 *)v1855 );
              }
              *((_DWORD *)v642 + 631) &= ~0x200000u;
              if ( v1853 != *((_QWORD *)v642 + 336) )
              {
                v1857 = *((_QWORD *)v642 + 177);
                v1858 = *((_DWORD *)v642 + 513);
                *(_QWORD *)v1857 = v642;
                *(_DWORD *)(v1857 + 16) = v1858;
                if ( !*((_DWORD *)v642 + 582) )
                {
                  v1859 = *((_QWORD *)v642 + 177);
                  v1860 = v1853 ^ *((_QWORD *)v642 + 336);
                  v5027 = v1843;
                  Timer = v1390;
                  *(_QWORD *)(v1859 + 24) = v1860;
                  goto LABEL_2506;
                }
                goto LABEL_2507;
              }
            }
          }
        }
        goto LABEL_2508;
      }
      v1861 = v5043;
      v1862 = v1845 + 24 + *(unsigned __int16 *)(v1845 + 20);
      v5036 = v5035;
      v1850 = v642;
      v5053 = v1862;
      v5044 = v5035 + 12LL * ((unsigned int)sub_140B9EDF0_Offset / 0xC);
      LODWORD(v5022) = 0;
      v1863 = 0;
      v1864 = i21;
      v1865 = v1390;
      v1866 = v5044;
      Timer = v1865;
      while ( 2 )
      {
        v1867 = v1864;
        v1868 = v1865;
        v1869 = *(_DWORD *)(v1862 + 40LL * v1863 + 12);
        v1870 = *(_DWORD *)(v1862 + 40LL * v1863 + 16);
        v5042 = 5LL * v1863;
        v1871 = *(_DWORD *)(v1862 + 40LL * v1863 + 8);
        LODWORD(sub_140B9FDF0_Offset) = v1869;
        if ( v1870 <= v1871 )
          v1870 = v1871;
        v1872 = v1869 + v1870;
        LODWORD(v5020) = v1872;
        if ( v1863 )
        {
          if ( v1872 < *(_DWORD *)(v1862 + 40LL * (v1863 - 1) + 12) )
          {
            v1917 = *((_DWORD *)v642 + 630);
            if ( (v1917 & 0x100000) == 0 )
            {
              v5117[2] = -402653175;
              KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, v5030, 1uLL, 0LL);
            }
            if ( !*((_DWORD *)v642 + 582) )
            {
              i21 = v1867;
              v5027 = v1843;
              *((_QWORD *)v642 + 292) = v642 - 0x5C5FC0A76E374B18LL;
              Timer = v1868;
              *((_QWORD *)v642 + 293) = 0LL;
              v1918 = v5030;
              *((_QWORD *)v642 + 294) = 271LL;
              *((_QWORD *)v642 + 295) = v1918;
              *((_DWORD *)v642 + 582) = 1;
              if ( (v1917 & 0x20000000) == 0 )
              {
                v4393 = (*((_DWORD *)v642 + 631) & 0x200000) == 0;
                i21 = v1867;
                v5027 = v1843;
                Timer = v1868;
                if ( !v4393 )
                {
                  i21 = v1867;
                  v5027 = v1843;
                  Timer = v1868;
                  if ( (v1917 & 1) != 0 )
                  {
                    v1919 = *((unsigned int *)v642 + 669);
                    v1816 = (_BYTE *)v1867;
                    v1920 = *((_QWORD *)v642 + 263);
                    v1921 = *((_DWORD *)v642 + 513) - v1919;
                    v1853 = *((_QWORD *)v642 + 335);
                    v1922 = (__int64 *)&v642[v1919];
                    i21 = v1867;
                    v5027 = v1843;
                    Timer = v1868;
                    v1923 = (unsigned __int64)&v642[8 * ((unsigned __int64)v1921 >> 3) + v1919];
                    if ( &v642[v1919] != (_BYTE *)v1923 )
                    {
                      i21 = v1867;
                      v5027 = v1843;
                      Timer = v1868;
                      do
                      {
                        *v1922 ^= v1853;
                        v1924 = *v1922++;
                        v1853 = ((v1920 ^ v1924) + __ROR8__(v1853, v1853 & 0x3F)) ^ 0xEFA;
                      }
                      while ( v1922 != (__int64 *)v1923 );
                    }
LABEL_2570:
                    *((_DWORD *)v642 + 631) &= ~0x200000u;
                    if ( v1853 != *((_QWORD *)v642 + 336) )
                    {
                      v1925 = *((_QWORD *)v642 + 177);
                      v1926 = *((_DWORD *)v642 + 513);
                      *(_QWORD *)v1925 = v642;
                      *(_DWORD *)(v1925 + 16) = v1926;
                      if ( !*((_DWORD *)v642 + 582) )
                      {
                        *(_QWORD *)(*((_QWORD *)v642 + 177) + 24LL) = v1853 ^ *((_QWORD *)v642 + 336);
                        goto LABEL_2573;
                      }
                      goto LABEL_2507;
                    }
                  }
                }
              }
            }
LABEL_2508:
            v1734 = -1073741701;
            goto LABEL_2601;
          }
          v1863 = (unsigned int)v5022;
        }
        v1873 = (unsigned int *)v5036;
        if ( v5036 == v1866 )
          goto LABEL_2560;
        v1816 = (_BYTE *)i21;
        v1874 = Timer;
        while ( 2 )
        {
          v1875 = *v1873;
          v1876 = v1874;
          v1877 = v1873[1];
          if ( v1875 < v1872 && v1877 > v1869 )
          {
            if ( v1875 < v1869 || v1877 > v1872 )
            {
              v1927 = *((_DWORD *)v642 + 630);
              if ( (v1927 & 0x100000) == 0 )
              {
                v5117[5] = -402653175;
                KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, v5030, 2uLL, 0LL);
              }
              if ( !*((_DWORD *)v642 + 582) )
              {
                i21 = (ULONG_PTR)v1816;
                v5027 = v1843;
                *((_QWORD *)v642 + 292) = v642 - 0x5C5FC0A76E374B18LL;
                Timer = v1874;
                *((_QWORD *)v642 + 293) = 0LL;
                v1928 = v5030;
                *((_QWORD *)v642 + 294) = 271LL;
                *((_QWORD *)v642 + 295) = v1928;
                *((_DWORD *)v642 + 582) = 1;
                if ( (v1927 & 0x20000000) == 0 )
                {
                  v4393 = (*((_DWORD *)v642 + 631) & 0x200000) == 0;
                  i21 = (ULONG_PTR)v1816;
                  v5027 = v1843;
                  Timer = v1874;
                  if ( !v4393 )
                  {
                    i21 = (ULONG_PTR)v1816;
                    v5027 = v1843;
                    Timer = v1874;
                    if ( (v1927 & 1) != 0 )
                    {
                      v1929 = *((unsigned int *)v642 + 669);
                      v1930 = *((_QWORD *)v642 + 263);
                      v1931 = *((_DWORD *)v642 + 513) - v1929;
                      v1853 = *((_QWORD *)v642 + 335);
                      v1932 = (__int64 *)&v642[v1929];
                      i21 = (ULONG_PTR)v1816;
                      v5027 = v1843;
                      Timer = v1874;
                      v1933 = (unsigned __int64)&v642[8 * ((unsigned __int64)v1931 >> 3) + v1929];
                      if ( &v642[v1929] != (_BYTE *)v1933 )
                      {
                        i21 = (ULONG_PTR)v1816;
                        v5027 = v1843;
                        Timer = v1876;
                        do
                        {
                          *v1932 ^= v1853;
                          v1934 = *v1932++;
                          v1853 = ((v1930 ^ v1934) + __ROR8__(v1853, v1853 & 0x3F)) ^ 0xEFA;
                        }
                        while ( v1932 != (__int64 *)v1933 );
                      }
                      goto LABEL_2570;
                    }
                  }
                }
              }
              goto LABEL_2508;
            }
            v1878 = *(unsigned int *)(v5036 + 8);
            if ( (v1878 & 1) == 0 && (*(_BYTE *)(v5030 + v1878) & 0x20) == 0 )
              goto LABEL_2558;
            v1879 = v1843;
            v1880 = i21;
            v1881 = *(_DWORD *)(v5053 + 8 * v5042 + 12);
            v1882 = *(_DWORD *)(v5053 + 8 * v5042 + 16);
            v1883 = *(_DWORD *)(v5053 + 8 * v5042 + 8);
            LODWORD(v5024) = v1881;
            if ( v1882 <= v1883 )
              v1882 = v1883;
            v1884 = (__int64 (__fastcall *)(_QWORD, _QWORD))*((_QWORD *)v642 + 131);
            LODWORD(v5025) = v1881 + v1882;
            v1885 = (unsigned int *)v1884(v5036, v5030);
            v5041 = v1885;
            if ( *v1885 < (unsigned int)v5024 || v1885[1] > (unsigned int)v5025 )
            {
              v1886 = v5030;
              v1887 = *((_DWORD *)v642 + 630);
              if ( (v1887 & 0x100000) == 0 )
              {
                v5117[4] = -402653175;
                KeBugCheckEx(
                  __ROL4__(-402653175, 101),
                  0xAuLL,
                  v5030,
                  ((_DWORD)v1885 - (_DWORD)v5030) | 0x80000000,
                  0LL);
              }
              if ( !*((_DWORD *)v642 + 582) )
              {
                v5027 = v1879;
                *((_QWORD *)v642 + 292) = v642 - 0x5C5FC0A76E374B18LL;
                *((_QWORD *)v642 + 293) = 0LL;
                *((_QWORD *)v642 + 294) = 271LL;
                *((_QWORD *)v642 + 295) = v1886;
                Timer = v1874;
                *((_DWORD *)v642 + 582) = 1;
                if ( (v1887 & 0x20000000) == 0 )
                {
                  v4393 = (*((_DWORD *)v642 + 631) & 0x200000) == 0;
                  i21 = v1880;
                  v5027 = v1879;
                  Timer = v1874;
                  if ( !v4393 )
                  {
                    i21 = v1880;
                    v5027 = v1879;
                    Timer = v1874;
                    if ( (v1887 & 1) != 0 )
                    {
                      v1888 = *((unsigned int *)v642 + 669);
                      v1889 = *((_QWORD *)v642 + 263);
                      v1890 = *((_DWORD *)v642 + 513) - v1888;
                      v1891 = *((_QWORD *)v642 + 335);
                      v1892 = (__int64 *)&v642[v1888];
                      i21 = v1880;
                      v5027 = v1879;
                      Timer = v1874;
                      v1893 = (unsigned __int64)&v642[8 * ((unsigned __int64)v1890 >> 3) + v1888];
                      if ( &v642[v1888] != (_BYTE *)v1893 )
                      {
                        i21 = v1880;
                        v5027 = v1879;
                        Timer = v1874;
                        do
                        {
                          *v1892 ^= v1891;
                          v1894 = *v1892++;
                          v1891 = ((v1889 ^ v1894) + __ROR8__(v1891, v1891 & 0x3F)) ^ 0xEFA;
                        }
                        while ( v1892 != (__int64 *)v1893 );
                      }
                      *((_DWORD *)v642 + 631) &= ~0x200000u;
                      if ( v1891 != *((_QWORD *)v642 + 336) )
                      {
                        v1895 = *((_QWORD *)v642 + 177);
                        v1896 = *((_DWORD *)v642 + 513);
                        *(_QWORD *)v1895 = v642;
                        *(_DWORD *)(v1895 + 16) = v1896;
                        if ( !*((_DWORD *)v642 + 582) )
                        {
                          v1897 = *((_QWORD *)v642 + 177);
                          v1898 = v1891 ^ *((_QWORD *)v642 + 336);
                          i21 = v1880;
                          v5027 = v1879;
                          Timer = v1874;
                          *(_QWORD *)(v1897 + 24) = v1898;
                        }
                        sub_140B9E384(v642, 0LL, v1891, 256LL);
                        v1885 = v5041;
                      }
                    }
                  }
                }
              }
            }
            v1899 = Timer;
            v1900 = v5027;
            v1901 = i21;
            v1902 = (_DWORD *)(*((__int64 (__fastcall **)(unsigned int *, ULONG_PTR, ULONG_PTR))v642 + 132))(
                                v1885,
                                v5030,
                                v5030 + *v1885);
            if ( *v1902 >= (unsigned int)v5024 && v1902[1] <= (unsigned int)v5025 )
              goto LABEL_2555;
            v1903 = v5030;
            v1904 = ((_DWORD)v1902 - v5030) | 0x80000000;
            v1905 = *((_DWORD *)v642 + 630);
            if ( (v1905 & 0x100000) == 0 )
            {
              v5117[3] = -402653175;
              KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, v5030, v1904, 0LL);
            }
            if ( *((_DWORD *)v642 + 582) )
              goto LABEL_2555;
            *((_QWORD *)v642 + 292) = v642 - 0x5C5FC0A76E374B18LL;
            *((_QWORD *)v642 + 293) = 0LL;
            *((_QWORD *)v642 + 294) = 271LL;
            *((_QWORD *)v642 + 295) = v1903;
            Timer = v1899;
            *((_DWORD *)v642 + 582) = 1;
            if ( (v1905 & 0x20000000) != 0
              || (v4393 = (*((_DWORD *)v642 + 631) & 0x200000) == 0, i21 = v1901, v5027 = v1900, Timer = v1899, v4393)
              || (i21 = v1901, v5027 = v1900, Timer = v1899, (v1905 & 1) == 0) )
            {
LABEL_2555:
              v1874 = v1899;
              v1843 = v1900;
            }
            else
            {
              v1906 = *((unsigned int *)v642 + 669);
              v1874 = v1899;
              v1907 = *((_QWORD *)v642 + 263);
              v1908 = *((_DWORD *)v642 + 513) - v1906;
              v1909 = *((_QWORD *)v642 + 335);
              v1910 = (__int64 *)&v642[v1906];
              i21 = v1901;
              v5027 = v1900;
              Timer = v1899;
              v1911 = (unsigned __int64)&v642[8 * ((unsigned __int64)v1908 >> 3) + v1906];
              if ( &v642[v1906] == (_BYTE *)v1911 )
              {
                v1843 = v1900;
              }
              else
              {
                i21 = v1901;
                v1843 = v1900;
                v5027 = v1900;
                Timer = v1899;
                do
                {
                  *v1910 ^= v1909;
                  v1912 = *v1910++;
                  v1909 = ((v1907 ^ v1912) + __ROR8__(v1909, v1909 & 0x3F)) ^ 0xEFA;
                }
                while ( v1910 != (__int64 *)v1911 );
              }
              *((_DWORD *)v642 + 631) &= ~0x200000u;
              if ( v1909 != *((_QWORD *)v642 + 336) )
              {
                v1913 = *((_QWORD *)v642 + 177);
                v1914 = *((_DWORD *)v642 + 513);
                v1816 = (_BYTE *)i21;
                *(_QWORD *)v1913 = v642;
                *(_DWORD *)(v1913 + 16) = v1914;
                if ( !*((_DWORD *)v642 + 582) )
                {
                  v1915 = *((_QWORD *)v642 + 177);
                  v1916 = v1909 ^ *((_QWORD *)v642 + 336);
                  i21 = (ULONG_PTR)v1816;
                  v5027 = v1843;
                  Timer = v1899;
                  *(_QWORD *)(v1915 + 24) = v1916;
                }
                sub_140B9E384(v642, 0LL, v1909, 256LL);
LABEL_2557:
                v1872 = v5020;
LABEL_2558:
                v1869 = sub_140B9FDF0_Offset;
                v1873 = (unsigned int *)(v5036 + 12);
                v5036 = (ULONG_PTR)v1873;
                if ( v1873 == (unsigned int *)v5044 )
                  break;
                continue;
              }
            }
            v1816 = (_BYTE *)i21;
            goto LABEL_2557;
          }
          break;
        }
        v1863 = (unsigned int)v5022;
        v1861 = v5043;
        v1862 = v5053;
        v1866 = v5044;
LABEL_2560:
        LODWORD(v5022) = ++v1863;
        if ( v1863 < v1861 )
        {
          v1864 = i21;
          v1865 = Timer;
          continue;
        }
        break;
      }
      v1935 = Timer;
      v1936 = i21;
      v1937 = i21;
      if ( v5036 != v5044 )
      {
        v1938 = *((_DWORD *)v642 + 630);
        if ( (v1938 & 0x100000) == 0 )
        {
          v5117[6] = -402653175;
          KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, v5030, 3uLL, 0LL);
        }
        if ( *((_DWORD *)v642 + 582) )
          goto LABEL_2508;
        v5027 = v1843;
        *((_QWORD *)v642 + 292) = v642 - 0x5C5FC0A76E374B18LL;
        Timer = v1935;
        *((_QWORD *)v642 + 293) = 0LL;
        v1939 = v5030;
        *((_QWORD *)v642 + 294) = 271LL;
        *((_QWORD *)v642 + 295) = v1939;
        *((_DWORD *)v642 + 582) = 1;
        if ( (v1938 & 0x20000000) != 0 )
          goto LABEL_2508;
        v4393 = (*((_DWORD *)v642 + 631) & 0x200000) == 0;
        i21 = v1936;
        v5027 = v1843;
        Timer = v1935;
        if ( v4393 )
          goto LABEL_2508;
        i21 = v1936;
        v5027 = v1843;
        Timer = v1935;
        if ( (v1938 & 1) == 0 )
          goto LABEL_2508;
        v1940 = *((unsigned int *)v642 + 669);
        v1816 = (_BYTE *)v1937;
        v1941 = *((_QWORD *)v642 + 263);
        v1942 = *((_DWORD *)v642 + 513) - v1940;
        v1853 = *((_QWORD *)v642 + 335);
        v1943 = (__int64 *)&v642[v1940];
        i21 = v1937;
        v5027 = v1843;
        Timer = v1935;
        v1944 = (unsigned __int64)&v642[8 * ((unsigned __int64)v1942 >> 3) + v1940];
        if ( &v642[v1940] != (_BYTE *)v1944 )
        {
          i21 = v1937;
          v5027 = v1843;
          Timer = v1935;
          do
          {
            *v1943 ^= v1853;
            v1945 = *v1943++;
            v1853 = ((v1941 ^ v1945) + __ROR8__(v1853, v1853 & 0x3F)) ^ 0xEFA;
          }
          while ( v1943 != (__int64 *)v1944 );
        }
        *((_DWORD *)v642 + 631) &= ~0x200000u;
        if ( v1853 == *((_QWORD *)v642 + 336) )
          goto LABEL_2508;
        v1946 = *((_QWORD *)v642 + 177);
        v1947 = *((_DWORD *)v642 + 513);
        *(_QWORD *)v1946 = v642;
        *(_DWORD *)(v1946 + 16) = v1947;
        if ( !*((_DWORD *)v642 + 582) )
        {
          *(_QWORD *)(*((_QWORD *)v642 + 177) + 24LL) = *((_QWORD *)v642 + 336) ^ v1853;
LABEL_2573:
          v5027 = v1843;
LABEL_2506:
          i21 = (ULONG_PTR)v1816;
        }
LABEL_2507:
        sub_140B9E384(v1850, 0LL, v1853, 256LL);
        goto LABEL_2508;
      }
      if ( (_DWORD)v5034 )
        v1948 = (v5034 + 6) & 0xFFFFFFF8;
      else
        v1948 = 0;
      v1949 = *((unsigned int *)v642 + 513);
      v1950 = v1948 + 24 * v1861 + v1949 + 48;
      if ( v1950 <= *((_DWORD *)v642 + 665) )
      {
        v1951 = (__int64)v642;
        *((_DWORD *)v642 + 513) = v1950;
        goto LABEL_2618;
      }
      v1951 = GetRandomizedSafeContext(v642, v1950, *((unsigned int *)v642 + 593));
      if ( v1951 )
        break;
      v1734 = -1073741670;
LABEL_2601:
      if ( v1734 != -1073741554 )
        goto LABEL_1074;
LABEL_2811:
      v5026 = *(PVOID *)v5026;
      if ( v5026 == HalExtensionList )
        goto LABEL_2827;
      v1705 = v5027;
    }
    v1952 = *((_DWORD *)v642 + 630);
    if ( (v1952 & 2) == 0 )
    {
      v1953 = *((_DWORD *)v642 + 513);
      v1954 = *((_QWORD *)v642 + 253);
      v1955 = (v1952 & 0x10000000) != 0 ? *((_DWORD *)v642 + 593) : 0;
      if ( v1953 >= 8 )
      {
        v1956 = (unsigned __int64)v1953 >> 3;
        do
        {
          *v1850 = 0LL;
          v1953 -= 8;
          ++v1850;
          --v1956;
        }
        while ( v1956 );
      }
      for ( ; v1953; --v1953 )
      {
        *(_BYTE *)v1850 = 0;
        v1850 = (_QWORD *)((char *)v1850 + 1);
      }
      v1957 = *(_DWORD *)(v1951 + 2372);
      v1958 = Timer;
      v1959 = v5027;
      *(_DWORD *)(v1951 + 2372) = v1955;
      if ( v1955 == 3 )
      {
        (*(void (__fastcall **)(__int64))(v1951 + 872))(v1954);
      }
      else if ( (*(_DWORD *)(v1951 + 2520) & 0x8000000) != 0 || (i21 = v1936, v5027 = v1959, Timer = v1958, !v1955) )
      {
        (*(void (__fastcall **)(__int64))(v1951 + 264))(v1954);
        v1936 = i21;
      }
      else
      {
        (*(void (__fastcall **)(__int64, _QWORD))(v1951 + 568))(v1954 - 8, *(_QWORD *)(v1954 - 8));
        v5027 = v1959;
        Timer = v1958;
      }
      *(_DWORD *)(v1951 + 2372) = v1957;
      v1861 = v5043;
    }
    *(_DWORD *)(v1951 + 2520) &= ~2u;
LABEL_2618:
    v1960 = v1951 + v1949;
    ++*(_DWORD *)(v1951 + 2092);
    v642 = (_BYTE *)v1951;
    v5028 = v1951 + v1949;
    v1961 = (_QWORD *)(v1951 + v1949);
    v1962 = 48;
    v1963 = 6LL;
    do
    {
      *v1961 = 0LL;
      v1962 -= 8;
      ++v1961;
      --v1963;
    }
    while ( v1963 );
    for ( ; v1962; --v1962 )
    {
      *(_BYTE *)v1961 = 0;
      v1961 = (_QWORD *)((char *)v1961 + 1);
    }
    v1964 = v5035;
    *(_DWORD *)v1960 = 30;
    *(_QWORD *)(v1960 + 8) = v1964;
    *(_DWORD *)(v1960 + 16) = 0;
    v1965 = *(_QWORD *)(v1951 + 2104);
    for ( i26 = v1965; ; LODWORD(v1965) = i26 ^ v1965 )
    {
      i26 >>= 31;
      if ( !i26 )
        break;
    }
    v1967 = v5030;
    v1968 = v5034;
    v1969 = v1951 + v1949;
    v1970 = Timer;
    v1971 = v5027;
    *(_DWORD *)(v1960 + 20) = v1965 & 0x7FFFFFFF;
    *(_QWORD *)(v1960 + 24) = v1967;
    Timer = v1970;
    v5027 = v1971;
    i21 = v1936;
    *(_DWORD *)(v1960 + 32) = *(_DWORD *)(v5032 + 80);
    *(_DWORD *)(v1960 + 36) = sub_140B9EDF0_Offset;
    *(_WORD *)(v1960 + 40) = v1861;
    v5031 = v1960;
    v5205 = v642;
    v5032 = v1960 + 48;
    if ( v1968 )
      v1972 = v1960 + 48 + (((unsigned int)(v1968 - 1) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL);
    else
      v1972 = v1960 + 48;
    v5034 = v1972;
    v1973 = v1972 + 24LL * v1861;
    v5036 = v1973;
    v1974 = v1964 + 12;
    if ( !v1968 )
      v1974 = v5044;
    v5042 = v1974;
    v1975 = v642;
    if ( v1861 )
    {
      v1976 = v1861;
      v1977 = (_DWORD *)(v1972 + 8);
      v1978 = i21;
      v5028 = v1960;
      v5031 = v1960;
      v5027 = v1971;
      Timer = v1970;
      do
      {
        v1979 = 2LL;
        do
        {
          *(v1977 - 2) = 0;
          *(v1977 - 1) = 0;
          *v1977 = 0x80000000;
          v1977 += 3;
          --v1979;
        }
        while ( v1979 );
        --v1976;
      }
      while ( v1976 );
    }
    else
    {
      v1978 = i21;
    }
    if ( v1972 == v1973 )
    {
LABEL_2810:
      v5183 = (unsigned int *)v642;
      goto LABEL_2811;
    }
    v1980 = (_DWORD *)v5053;
    v5041 = v642 + 2524;
    while ( 2 )
    {
      v1981 = v1969;
      v4393 = (v1980[9] & 0x2000000) == 0;
      v1982 = 0;
      LODWORD(sub_140B9EDF0_Offset) = 0;
      if ( !v4393
        || (v1983 = *v1980, v1984 = (__int16 *)(v1980 + 1), *v1980 == 1414090313) && *(_DWORD *)v1984 == 1195525195 )
      {
LABEL_2648:
        v1987 = (_DWORD *)v5053;
      }
      else
      {
        Timer = v1970;
        v1985 = v1960;
        v5028 = v1960;
        v5027 = v1971;
        i21 = v1978;
        v5031 = v1981;
        if ( v1983 == 1162297680 )
        {
          v1986 = *v1984;
          if ( *v1984 == 30839 || v1986 == 29303 || v1986 == 30583 )
          {
            v5028 = v1960;
            v5031 = v1981;
            i21 = v1978;
            v5027 = v1971;
            Timer = v1970;
            goto LABEL_2648;
          }
          v1985 = v1960;
        }
        v1987 = (_DWORD *)v5053;
        if ( v1983 != 1095914053 || *(_WORD *)(v5053 + 4) != 16724 )
        {
          v1990 = (char *)*((_QWORD *)v1975 + 298);
          v1991 = 7;
          v1992 = (__int64 *)*((_QWORD *)v1975 + 299);
          v1993 = v5053 - (_QWORD)v1990;
          v1994 = (char *)*((_QWORD *)v1975 + 300);
          v1995 = (char *)*((_QWORD *)v1975 + 301);
          v5028 = v1985;
          i21 = v1978;
          v5027 = v1971;
          while ( 1 )
          {
            v1996 = v1990[v1993];
            v1997 = *v1990;
            v1990 += v5182;
            if ( v1996 != v1997 )
              break;
            if ( !--v1991 )
              goto LABEL_2649;
          }
          v1998 = 8;
          v1999 = (char *)v5053;
          i21 = v1978;
          v5027 = v1971;
          while ( 1 )
          {
            v2000 = *(_QWORD *)v1999;
            v1999 += 8;
            v2001 = *v1992++;
            if ( v2000 != v2001 )
              break;
            v1998 -= 8;
            if ( v1998 < 8 )
            {
              if ( !v1998 )
                goto LABEL_2649;
              while ( 1 )
              {
                v2002 = *v1999++;
                v2003 = *(_BYTE *)v1992;
                v1992 = (__int64 *)((char *)v1992 + v5182);
                if ( v2002 != v2003 )
                  goto LABEL_2666;
                if ( !--v1998 )
                  goto LABEL_2649;
              }
            }
          }
LABEL_2666:
          v2004 = 4;
          v2005 = v5053 - (_QWORD)v1994;
          while ( 1 )
          {
            v2006 = v1994[v2005];
            v2007 = *v1994++;
            if ( v2006 != v2007 )
              break;
            if ( !--v2004 )
              goto LABEL_2649;
          }
          v2008 = 6;
          v2009 = v5053 - (_QWORD)v1995;
          i21 = v1978;
          v5027 = v1971;
          while ( 1 )
          {
            v2010 = v1995[v2009];
            v2011 = *v1995++;
            if ( v2010 != v2011 )
              break;
            if ( !--v2008 )
              goto LABEL_2649;
          }
LABEL_2650:
          v1988 = v1971;
          v1989 = v1987[9];
          if ( v1989 >= 0 )
          {
            if ( v1982 )
              goto LABEL_2675;
          }
          else
          {
            v1982 = 1;
            LODWORD(sub_140B9EDF0_Offset) = 1;
LABEL_2675:
            if ( *v1987 == 1414090313 && v1987[1] == 1195525195 )
            {
              LODWORD(sub_140B9EDF0_Offset) = v1982;
              v4393 = (*((_DWORD *)v1975 + 631) & 0x2000) == 0;
              v2012 = Timer;
              v5041 = v1975 + 2524;
              i21 = v1978;
              v5027 = v1988;
              if ( !v4393 )
              {
                LODWORD(sub_140B9EDF0_Offset) = 0;
                i21 = v1978;
                v5027 = v1988;
              }
              v2013 = v1988;
LABEL_2681:
              v2014 = v5031;
              v2015 = v2013;
              v2016 = v1978;
              v2017 = v5028;
              v2018 = v2012;
              v2019 = v1975;
              if ( (*v5041 & 0x4000) != 0
                && (v1989 & 0x20000000) != 0
                && (v5030 == *((_QWORD *)v1975 + 188) || v5030 == *((_QWORD *)v1975 + 189)) )
              {
                LODWORD(sub_140B9EDF0_Offset) = 1;
              }
              v2020 = *(_DWORD *)(v5053 + 12);
              v2021 = *(_DWORD *)(v5053 + 16);
              v2022 = *(_DWORD *)(v5053 + 8);
              LODWORD(v5022) = v2020;
              if ( v2021 <= v2022 )
                v2021 = v2022;
              LODWORD(v5024) = v2020;
              v2023 = v2020 + v2021;
              LODWORD(sub_140B9FDF0_Offset) = v2023;
              if ( v5035 == v5044 )
              {
                v2024 = 0;
                LODWORD(v5020) = 0;
              }
              else
              {
                v2024 = *(_DWORD *)v5035;
                v2025 = *(_DWORD *)(v5035 + 4);
                LODWORD(v5020) = v2025;
                i21 = v2016;
                v5027 = v2015;
                Timer = v2018;
                if ( v2024 > v2020 )
                {
                  v2026 = (int)v5022;
                  v2027 = v2025;
                  LODWORD(v5024) = (_DWORD)v5022;
                  i21 = v2016;
                  v5027 = v2015;
                  Timer = v2018;
                  if ( v2025 > v2023 )
                    goto LABEL_2716;
                  LODWORD(v5024) = (_DWORD)v5022;
                  i21 = v2016;
                  v5027 = v2015;
                  Timer = v2018;
                  if ( (_DWORD)sub_140B9EDF0_Offset )
                  {
                    v2054 = (unsigned int *)v5044;
                    goto LABEL_2723;
                  }
                  v2028 = (_DWORD *)v5034;
                  LODWORD(v5024) = v2024;
                  v2029 = v5030 + (unsigned int)v5022;
                  LODWORD(v5020) = v2025;
                  *(_DWORD *)v5034 = (_DWORD)v5022;
                  v2028[1] = v2024;
                  v2030 = v2024 - *v2028;
                  v1975 = v2019;
                  v5031 = v2014;
                  v5028 = v2017;
                  v2031 = 0;
                  i21 = v2016;
                  v2032 = v2025;
                  Timer = v2018;
                  v2033 = v2015;
                  v2034 = v2016;
                  v5027 = v2015;
                  v2035 = v2018;
                  while ( 1 )
                  {
                    v2036 = v2033;
                    LODWORD(v5025) = v2032;
                    v2037 = v2035;
                    v5047 = v5031;
                    v2038 = v2034;
                    v5048 = v5028;
                    v2039 = v5530[v2031];
                    if ( v2029 < v2039 + (unsigned int)v5496[v2031] && v2029 + v2030 > v2039 )
                      break;
                    v2032 = v5020;
                    ++v2031;
                    v2033 = v5027;
                    v2035 = Timer;
                    if ( v2031 >= 6 )
                    {
                      *((_DWORD *)v1975 + 530) += v2030;
                      v2040 = (_QWORD *)v2029;
                      v2041 = *((_QWORD *)v1975 + 263);
                      v2042 = *((_DWORD *)v1975 + 525);
                      v2043 = v2029 + v2030;
                      LODWORD(v5020) = v5025;
                      v5046 = v2041;
                      v2044 = (const char *)v2029;
                      v5028 = v5048;
                      v5031 = v5047;
                      i21 = v2038;
                      v5027 = v2036;
                      Timer = v2037;
                      if ( v2029 < v2043 )
                      {
                        LODWORD(v5020) = v5025;
                        v5028 = v5048;
                        v5031 = v5047;
                        i21 = v2038;
                        v5027 = v2036;
                        Timer = v2037;
                        do
                        {
                          _mm_prefetch(v2044, 0);
                          v2044 += 64;
                        }
                        while ( (unsigned __int64)v2044 < v2043 );
                      }
                      v2045 = v2030 >> 7;
                      for ( i27 = v5046; v2045; --v2045 )
                      {
                        v2047 = 8LL;
                        do
                        {
                          v2048 = v2040[1] ^ __ROL8__(*v2040 ^ i27, v2042);
                          v2040 += 2;
                          i27 = __ROL8__(v2048, v2042);
                          --v2047;
                        }
                        while ( v2047 );
                        v2049 = __ROL8__(v5046 ^ ((unsigned __int64)v2040 - v2029), 17) ^ v5046 ^ ((unsigned __int64)v2040
                                                                                                 - v2029);
                        v5328 = (v2049 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                        v2042 = ((unsigned __int8)(v5328 ^ v2049) ^ (unsigned __int8)v2042) & 0x3F;
                        if ( !v2042 )
                          LOBYTE(v2042) = 1;
                      }
                      v2050 = v2030 & 0x7F;
                      if ( v2050 >= 8 )
                      {
                        v2051 = (unsigned __int64)v2050 >> 3;
                        do
                        {
                          i27 = __ROL8__(*v2040++ ^ i27, v2042);
                          v2050 -= 8;
                          --v2051;
                        }
                        while ( v2051 );
                      }
                      for ( ; v2050; --v2050 )
                      {
                        v2052 = *(unsigned __int8 *)v2040;
                        v2040 = (_QWORD *)((char *)v2040 + 1);
                        i27 = __ROL8__(v2052 ^ i27, v2042);
                      }
                      for ( i28 = i27; ; LODWORD(i27) = i28 ^ i27 )
                      {
                        i28 >>= 31;
                        if ( !i28 )
                          break;
                      }
                      *(_DWORD *)(v5034 + 8) = i27 & 0x7FFFFFFF;
                      break;
                    }
                  }
                  v2023 = sub_140B9FDF0_Offset;
                  v2026 = v5024;
LABEL_2715:
                  v2027 = v5020;
LABEL_2716:
                  if ( v2027 <= v2023 )
                  {
                    v2054 = (unsigned int *)v5044;
                    if ( v5035 != v5044 )
                    {
LABEL_2723:
                      v2055 = (unsigned int *)v5042;
                      if ( (unsigned int *)v5042 != v2054 )
                      {
                        v2056 = *(_DWORD *)(v5042 + 4);
                        LODWORD(v5020) = v2056;
                        if ( v2056 <= v2023 )
                        {
                          v2057 = v5027;
                          v2058 = i21;
                          v2059 = v5028;
                          v2060 = v5031;
                          v2061 = Timer;
                          while ( 1 )
                          {
                            v2062 = v2061;
                            v2063 = v2060;
                            v2064 = v2057;
                            v2065 = v2058;
                            if ( v2055 == v2054 )
                            {
                              v2023 = sub_140B9FDF0_Offset;
                              goto LABEL_2777;
                            }
                            if ( (_DWORD)sub_140B9EDF0_Offset )
                            {
                              v2059 = v5028;
                              v2066 = 0x80;
                              v2061 = Timer;
                              goto LABEL_2772;
                            }
                            v2067 = *v2055;
                            LODWORD(v5024) = v2067;
                            v2068 = *(_DWORD *)(v5035 + 4);
                            LODWORD(v5025) = v2068;
                            if ( v2067 < v2068 )
                            {
                              v2069 = *((_DWORD *)v1975 + 630);
                              if ( (v2069 & 0x100000) == 0 )
                              {
                                v5117[7] = -402653175;
                                KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, v5030, 6uLL, 0LL);
                              }
                              if ( !*((_DWORD *)v1975 + 582) )
                              {
                                v5031 = v2063;
                                i21 = v2058;
                                *((_QWORD *)v1975 + 292) = v1975 - 0x5C5FC0A76E374B18LL;
                                *((_QWORD *)v1975 + 293) = 0LL;
                                v2070 = v5030;
                                *((_QWORD *)v1975 + 294) = 271LL;
                                *((_QWORD *)v1975 + 295) = v2070;
                                v2071 = v2059;
                                v5028 = v2059;
                                *((_DWORD *)v1975 + 582) = 1;
                                v5027 = v2057;
                                Timer = v2062;
                                if ( (v2069 & 0x20000000) != 0 )
                                  goto LABEL_2744;
                                v5028 = v2059;
                                v5031 = v2063;
                                i21 = v2058;
                                v4393 = (*v5041 & 0x200000) == 0;
                                v2071 = v2059;
                                v5027 = v2057;
                                Timer = v2062;
                                if ( v4393 )
                                  goto LABEL_2744;
                                v5028 = v2059;
                                v5031 = v2063;
                                i21 = v2058;
                                v5027 = v2057;
                                Timer = v2062;
                                if ( (v2069 & 1) == 0 )
                                  goto LABEL_2744;
                                v2072 = *((unsigned int *)v1975 + 669);
                                v2073 = *((_QWORD *)v1975 + 263);
                                v2074 = *((_DWORD *)v1975 + 513) - v2072;
                                v2075 = *((_QWORD *)v1975 + 335);
                                v2076 = (__int64 *)&v1975[v2072];
                                v5028 = v2059;
                                v5031 = v2063;
                                i21 = v2065;
                                v5027 = v2057;
                                v2077 = (unsigned __int64)&v1975[8 * ((unsigned __int64)v2074 >> 3) + v2072];
                                Timer = v2062;
                                if ( &v1975[v2072] != (_BYTE *)v2077 )
                                {
                                  v5028 = v2059;
                                  v5031 = v2063;
                                  i21 = v2065;
                                  v5027 = v2064;
                                  Timer = v2062;
                                  do
                                  {
                                    *v2076 ^= v2075;
                                    v2078 = *v2076++;
                                    v2075 = ((v2073 ^ v2078) + __ROR8__(v2075, v2075 & 0x3F)) ^ 0xEFA;
                                  }
                                  while ( v2076 != (__int64 *)v2077 );
                                }
                                v2058 = i21;
                                v2057 = v5027;
                                *v5041 &= ~0x200000u;
                                if ( v2075 != *((_QWORD *)v1975 + 336) )
                                {
                                  v2079 = *((_QWORD *)v1975 + 177);
                                  v2080 = *((_DWORD *)v1975 + 513);
                                  *(_QWORD *)v2079 = v1975;
                                  *(_DWORD *)(v2079 + 16) = v2080;
                                  if ( !*((_DWORD *)v1975 + 582) )
                                  {
                                    v2081 = *((_QWORD *)v1975 + 177);
                                    v2082 = v2075 ^ *((_QWORD *)v1975 + 336);
                                    v5028 = v2059;
                                    v5031 = v2063;
                                    i21 = v2058;
                                    *(_QWORD *)(v2081 + 24) = v2082;
                                    v5027 = v2057;
                                    Timer = v2062;
                                  }
                                  sub_140B9E384(v1975, 0LL, v2075, 256LL);
                                }
                                v2067 = v5024;
                                v2068 = v5025;
                              }
                            }
                            v2071 = v5028;
LABEL_2744:
                            v2083 = v5030 + v2068;
                            v2084 = v2067 - v2068;
                            v2085 = v2083 + v2067 - v2068;
                            v2086 = 0;
                            while ( 1 )
                            {
                              v2087 = v5530[v2086];
                              if ( v2083 < v2087 + (unsigned int)v5496[v2086] && v2085 > v2087 )
                              {
                                v2059 = v2071;
                                v5027 = v2057;
                                v2061 = Timer;
                                i21 = v2058;
LABEL_2770:
                                v5028 = v2059;
                                v2066 = 0x80;
                                goto LABEL_2771;
                              }
                              v2058 = i21;
                              if ( (unsigned int)++v2086 >= 6 )
                                break;
                              v2057 = v5027;
                              v2071 = v5028;
                            }
                            v2059 = v5028;
                            v2088 = v5031;
                            v2061 = Timer;
                            v2057 = v5027;
                            if ( v2084 < 4 )
                              goto LABEL_2770;
                            *((_DWORD *)v1975 + 530) += v2084;
                            v2089 = (_QWORD *)v2083;
                            v2090 = *((_DWORD *)v1975 + 525);
                            v2091 = (const char *)v2083;
                            v2092 = *((_QWORD *)v1975 + 263);
                            v2093 = v2083 + v2084;
                            if ( v2083 < v2093 )
                            {
                              v5028 = v2059;
                              v5031 = v2088;
                              i21 = v2058;
                              v5027 = v2057;
                              do
                              {
                                _mm_prefetch(v2091, 0);
                                v2091 += 64;
                              }
                              while ( (unsigned __int64)v2091 < v2093 );
                            }
                            v2094 = v2092;
                            v2095 = v2084 >> 7;
                            if ( v2084 >> 7 )
                            {
                              do
                              {
                                v2096 = 8LL;
                                do
                                {
                                  v2097 = v2089[1] ^ __ROL8__(*v2089 ^ v2094, v2090);
                                  v2089 += 2;
                                  v2094 = __ROL8__(v2097, v2090);
                                  --v2096;
                                }
                                while ( v2096 );
                                v2098 = __ROL8__(v2092 ^ ((unsigned __int64)v2089 - v2083), 17) ^ v2092 ^ ((unsigned __int64)v2089 - v2083);
                                v5329 = (v2098 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                                v2090 = ((unsigned __int8)(v5329 ^ v2098) ^ (unsigned __int8)v2090) & 0x3F;
                                if ( !v2090 )
                                  LOBYTE(v2090) = 1;
                                --v2095;
                              }
                              while ( v2095 );
                              v2057 = v5027;
                              v2059 = v5028;
                            }
                            v2099 = v2084 & 0x7F;
                            if ( v2099 >= 8 )
                            {
                              v2100 = (unsigned __int64)v2099 >> 3;
                              do
                              {
                                v2094 = __ROL8__(*v2089++ ^ v2094, v2090);
                                v2099 -= 8;
                                --v2100;
                              }
                              while ( v2100 );
                            }
                            for ( ; v2099; --v2099 )
                            {
                              v2101 = *(unsigned __int8 *)v2089;
                              v2089 = (_QWORD *)((char *)v2089 + 1);
                              v2094 = __ROL8__(v2101 ^ v2094, v2090);
                            }
                            for ( i29 = v2094; ; LOBYTE(v2094) = i29 ^ v2094 )
                            {
                              i29 >>= 7;
                              if ( !i29 )
                                break;
                            }
                            v2061 = Timer;
                            v2066 = v2094 & 0x7F;
LABEL_2771:
                            v2060 = v5031;
                            v2056 = v5020;
LABEL_2772:
                            *(_BYTE *)v5032 = v2066;
                            v5035 += 12LL;
                            v2055 = (unsigned int *)(v5042 + 12);
                            v2054 = (unsigned int *)v5044;
                            ++v5032;
                            v5042 = (__int64)v2055;
                            if ( v2055 != (unsigned int *)v5044 )
                            {
                              v2056 = v2055[1];
                              LODWORD(v5020) = v2056;
                            }
                            v2023 = sub_140B9FDF0_Offset;
                            if ( v2056 > (unsigned int)sub_140B9FDF0_Offset )
                            {
LABEL_2777:
                              v2026 = v5024;
                              break;
                            }
                          }
                        }
                      }
                    }
                  }
LABEL_2778:
                  v2103 = v5034;
                  if ( !(_DWORD)sub_140B9EDF0_Offset && v2026 != v2023 )
                  {
                    *(_DWORD *)(v5034 + 12) = v2026;
                    *(_DWORD *)(v2103 + 16) = v2023;
                    v2104 = *(unsigned int *)(v2103 + 12);
                    v2105 = v2023 - v2104;
                    v2106 = (_QWORD *)(v5030 + v2104);
                    v2107 = 0;
                    while ( 1 )
                    {
                      v2108 = Timer;
                      v2109 = v5027;
                      v2110 = i21;
                      v2111 = v5031;
                      v5047 = v5028;
                      v2112 = v5530[v2107];
                      if ( (unsigned __int64)v2106 < v2112 + (unsigned int)v5496[v2107]
                        && (unsigned __int64)v2106 + v2105 > v2112 )
                      {
                        break;
                      }
                      if ( (unsigned int)++v2107 >= 6 )
                      {
                        *((_DWORD *)v1975 + 530) += v2105;
                        v2113 = v2106;
                        v2114 = *((_DWORD *)v1975 + 525);
                        v2115 = (unsigned __int64)v2106 + v2105;
                        v5048 = *((_QWORD *)v1975 + 263);
                        v5028 = v5047;
                        v2116 = (const char *)v2106;
                        v5031 = v2111;
                        i21 = v2110;
                        v5027 = v2109;
                        Timer = v2108;
                        if ( (unsigned __int64)v2106 < v2115 )
                        {
                          v5028 = v5047;
                          v5031 = v2111;
                          i21 = v2110;
                          v5027 = v2109;
                          Timer = v2108;
                          do
                          {
                            _mm_prefetch(v2116, 0);
                            v2116 += 64;
                          }
                          while ( (unsigned __int64)v2116 < v2115 );
                        }
                        v2117 = v2105 >> 7;
                        for ( i30 = v5048; v2117; --v2117 )
                        {
                          v2119 = 8LL;
                          do
                          {
                            v2120 = v2113[1] ^ __ROL8__(*v2113 ^ i30, v2114);
                            v2113 += 2;
                            i30 = __ROL8__(v2120, v2114);
                            --v2119;
                          }
                          while ( v2119 );
                          v2121 = (__ROL8__(v5048 ^ ((char *)v2113 - (char *)v2106), 17) ^ v5048 ^ ((char *)v2113
                                                                                                  - (char *)v2106))
                                * (unsigned __int128)0x7010008004002001uLL;
                          v5330 = *((_QWORD *)&v2121 + 1);
                          v2114 = (BYTE8(v2121) ^ (unsigned __int8)(v2121 ^ v2114)) & 0x3F;
                          if ( !v2114 )
                            LOBYTE(v2114) = 1;
                        }
                        v2122 = v2105 & 0x7F;
                        if ( v2122 >= 8 )
                        {
                          v2123 = (unsigned __int64)v2122 >> 3;
                          do
                          {
                            i30 = __ROL8__(*v2113++ ^ i30, v2114);
                            v2122 -= 8;
                            --v2123;
                          }
                          while ( v2123 );
                        }
                        for ( ; v2122; --v2122 )
                        {
                          v2124 = *(unsigned __int8 *)v2113;
                          v2113 = (_QWORD *)((char *)v2113 + 1);
                          i30 = __ROL8__(v2124 ^ i30, v2114);
                        }
                        for ( i31 = i30; ; LODWORD(i30) = i31 ^ i30 )
                        {
                          i31 >>= 31;
                          if ( !i31 )
                            break;
                        }
                        v2103 = v5034;
                        *(_DWORD *)(v5034 + 20) = i30 & 0x7FFFFFFF;
                        break;
                      }
                    }
                  }
                  v2126 = v5035;
                  if ( v5035 != v5044
                    && *(_DWORD *)v5035 >= (unsigned int)v5022
                    && *(_DWORD *)(v5035 + 4) <= (unsigned int)sub_140B9FDF0_Offset )
                  {
                    v2127 = v5042;
                    if ( v5042 != v5044 )
                    {
                      v2128 = v5032;
                      *(_BYTE *)v5032 = 0x80;
                      v5032 = v2128 + 1;
                      v5042 = v2127 + 12;
                    }
                    v5035 = v2126 + 12;
                  }
                  v1971 = v5027;
                  v1980 = (_DWORD *)(v5053 + 40);
                  v1978 = i21;
                  v5034 = v2103 + 24;
                  v5053 += 40LL;
                  if ( v2103 + 24 == v5036 )
                  {
                    v642 = v5205;
                    goto LABEL_2810;
                  }
                  v1960 = v5028;
                  v1969 = v5031;
                  v1970 = Timer;
                  continue;
                }
              }
              v2026 = v2020;
              if ( v2024 >= v2020 )
                goto LABEL_2715;
              goto LABEL_2778;
            }
          }
          v2013 = v5027;
          v2012 = Timer;
          goto LABEL_2681;
        }
      }
      break;
    }
LABEL_2649:
    v1982 = 1;
    LODWORD(sub_140B9EDF0_Offset) = 1;
    goto LABEL_2650;
  }
LABEL_2827:
  v2136 = Timer;
  v2137 = __rdtsc();
  v2138 = (__ROR8__(v2137, 3) ^ v2137) * (unsigned __int128)0x7010008004002001uLL;
  v5331 = *((_QWORD *)&v2138 + 1);
  v2139 = v2138 ^ *((_QWORD *)&v2138 + 1);
  *((_QWORD *)&v2138 + 1) = (((unsigned __int64)v2138 ^ *((_QWORD *)&v2138 + 1))
                           * (unsigned __int128)0x47AE147AE147AE15uLL) >> 64;
  if ( v2139 - 100 * ((*((_QWORD *)&v2138 + 1) + ((unsigned __int64)(v2139 - *((_QWORD *)&v2138 + 1)) >> 1)) >> 6) < 2 )
    *((_DWORD *)v642 + 630) |= 0x10000u;
  v2140 = (_DWORD *)*((_QWORD *)v642 + 172);
  v2141 = 32;
  v2142 = *((_DWORD *)v642 + 534);
  v2143 = *((unsigned int *)v642 + 513);
  v2144 = *((unsigned int *)v642 + 593);
  v2145 = *(_QWORD **)v2140;
  v2146 = 4 * v2140[4];
  HalExtensionList = v2140;
  LODWORD(sub_140B9EDF0_Offset) = v2142;
  if ( v2142 != 7 )
    v2141 = 0;
  v2147 = v2143 + 48;
  LODWORD(v5022) = v2141;
  if ( (unsigned int)(v2143 + 48) <= *((_DWORD *)v642 + 665) )
  {
    v2148 = v642;
    *((_DWORD *)v642 + 513) = v2147;
    Timer = v2136;
  }
  else
  {
    v2148 = (_QWORD *)GetRandomizedSafeContext(v642, v2147, v2144);
    Timer = v2136;
    if ( !v2148 )
      goto LABEL_1074;
    v2149 = *((_DWORD *)v642 + 630);
    if ( (v2149 & 2) == 0 )
    {
      v2150 = *((_DWORD *)v642 + 513);
      v2151 = *((_QWORD *)v642 + 253);
      v2152 = v2136;
      Timer = v2136;
      v2153 = (v2149 & 0x10000000) != 0 ? *((_DWORD *)v642 + 593) : 0;
      if ( v2150 >= 8 )
      {
        Timer = v2136;
        v2154 = (unsigned __int64)v2150 >> 3;
        do
        {
          *(_QWORD *)v642 = 0LL;
          v2150 -= 8;
          v642 += 8;
          --v2154;
        }
        while ( v2154 );
      }
      for ( ; v2150; --v2150 )
        *v642++ = 0;
      v2155 = *((_DWORD *)v2148 + 593);
      v2156 = v2152;
      *((_DWORD *)v2148 + 593) = v2153;
      if ( v2153 == 3 )
      {
        ((void (__fastcall *)(__int64))v2148[109])(v2151);
      }
      else if ( (v2148[315] & 0x8000000) != 0 || (Timer = v2152, !v2153) )
      {
        ((void (__fastcall *)(__int64))v2148[33])(v2151);
      }
      else
      {
        ((void (__fastcall *)(__int64, _QWORD))v2148[71])(v2151 - 8, *(_QWORD *)(v2151 - 8));
        Timer = v2156;
      }
      *((_DWORD *)v2148 + 593) = v2155;
    }
    *((_DWORD *)v2148 + 630) &= ~2u;
    v2141 = (int)v5022;
    v2142 = sub_140B9EDF0_Offset;
  }
  ++*((_DWORD *)v2148 + 523);
  v2157 = (char *)v2148 + v2143;
  if ( !v2148 )
  {
LABEL_1074:
    v730 = Timer;
    goto LABEL_1075;
  }
  v2158 = 48;
  v2159 = 6LL;
  v2160 = (_QWORD *)((char *)v2148 + v2143);
  do
  {
    *v2160 = 0LL;
    v2158 -= 8;
    ++v2160;
    --v2159;
  }
  while ( v2159 );
  for ( ; v2158; --v2158 )
  {
    *(_BYTE *)v2160 = 0;
    v2160 = (_QWORD *)((char *)v2160 + 1);
  }
  *(_DWORD *)v2157 = v2141;
  *((_QWORD *)v2157 + 1) = v2145;
  if ( v2142 == 7 && v2146 )
    sub_1404D2D9C(v2148, v2145, v2146, v2157 + 24);
  *((_DWORD *)v2157 + 4) = v2146;
  v2161 = v2145;
  *((_DWORD *)v2148 + 530) += v2146;
  v2162 = (const char *)v2145;
  v2163 = *((_DWORD *)v2148 + 525);
  v2164 = v2148[263];
  v2165 = (unsigned __int64)v2145 + v2146;
  if ( (unsigned __int64)v2145 < v2165 )
  {
    do
    {
      _mm_prefetch(v2162, 0);
      v2162 += 64;
    }
    while ( (unsigned __int64)v2162 < v2165 );
  }
  v2166 = v2148[263];
  for ( i32 = v2146 >> 7; i32; --i32 )
  {
    v2168 = 8LL;
    do
    {
      v2169 = v2161[1] ^ __ROL8__(*v2161 ^ v2166, v2163);
      v2161 += 2;
      v2166 = __ROL8__(v2169, v2163);
      --v2168;
    }
    while ( v2168 );
    v2170 = (__ROL8__(v2164 ^ ((char *)v2161 - (char *)v2145), 17) ^ v2164 ^ (unsigned __int64)((char *)v2161
                                                                                              - (char *)v2145))
          * (unsigned __int128)0x7010008004002001uLL;
    v5332 = *((_QWORD *)&v2170 + 1);
    v2163 = (BYTE8(v2170) ^ (unsigned __int8)(v2170 ^ v2163)) & 0x3F;
    if ( !v2163 )
      LOBYTE(v2163) = 1;
  }
  v2171 = v2146 & 0x7F;
  if ( v2171 >= 8 )
  {
    v2172 = (unsigned __int64)(v2146 & 0x7F) >> 3;
    do
    {
      v2166 = __ROL8__(*v2161++ ^ v2166, v2163);
      v2171 -= 8;
      --v2172;
    }
    while ( v2172 );
  }
  for ( ; v2171; --v2171 )
  {
    v2173 = *(unsigned __int8 *)v2161;
    v2161 = (_QWORD *)((char *)v2161 + 1);
    v2166 = __ROL8__(v2173 ^ v2166, v2163);
  }
  for ( i33 = v2166; ; LODWORD(v2166) = i33 ^ v2166 )
  {
    i33 >>= 31;
    if ( !i33 )
      break;
  }
  v2175 = Timer;
  v5516[0] = &KeServiceDescriptorTable;
  *((_DWORD *)v2157 + 5) = v2166 & 0x7FFFFFFF;
  *((_DWORD *)v2148 + 530) += v2146;
  LODWORD(v2176) = 32;
  v2177 = *((_DWORD *)v2148 + 534);
  v2178 = *((unsigned int *)v2148 + 513);
  v2179 = *((unsigned int *)v2148 + 593);
  v5516[1] = &xmmword_1412018E0;
  v5516[2] = &KeServiceDescriptorTableShadow;
  v5516[3] = &KeServiceDescriptorTableFilter;
  if ( v2177 != 7 )
    LODWORD(v2176) = 0;
  v5183 = (unsigned int *)v2148;
  v2180 = v2178 + 192;
  v5454[0] = 32;
  v5454[1] = 32;
  v5454[2] = 32;
  v5454[3] = 32;
  LODWORD(sub_140B9EDF0_Offset) = 4;
  LODWORD(v5022) = v2177;
  LODWORD(sub_140B9FDF0_Offset) = v2176;
  if ( (unsigned int)(v2178 + 192) <= *((_DWORD *)v2148 + 665) )
  {
    v2181 = (int *)v2148;
    v5026 = v2148;
    *((_DWORD *)v2148 + 513) = v2180;
    v5027 = (size_t)v2175;
  }
  else
  {
    v2181 = (int *)GetRandomizedSafeContext(v2148, v2180, v2179);
    v5026 = v2181;
    if ( !v2181 )
      goto LABEL_1074;
    v2182 = *((_DWORD *)v2148 + 630);
    v5027 = (size_t)v2175;
    if ( (v2182 & 2) == 0 )
    {
      v2183 = *((_DWORD *)v2148 + 513);
      v2184 = v2148[253];
      v2185 = v2175;
      v5027 = (size_t)v2175;
      v2186 = (v2182 & 0x10000000) != 0 ? *((_DWORD *)v2148 + 593) : 0;
      if ( v2183 >= 8 )
      {
        v5027 = (size_t)v2175;
        v2187 = (unsigned __int64)v2183 >> 3;
        do
        {
          *v2148 = 0LL;
          v2183 -= 8;
          ++v2148;
          --v2187;
        }
        while ( v2187 );
      }
      for ( ; v2183; --v2183 )
      {
        *(_BYTE *)v2148 = 0;
        v2148 = (_QWORD *)((char *)v2148 + 1);
      }
      v2188 = v2181[593];
      v2181[593] = v2186;
      if ( v2186 == 3 )
      {
        (*((void (__fastcall **)(__int64))v2181 + 109))(v2184);
      }
      else if ( (v2181[630] & 0x8000000) != 0 || (v5027 = (size_t)v2185, !v2186) )
      {
        (*((void (__fastcall **)(__int64))v2181 + 33))(v2184);
      }
      else
      {
        (*((void (__fastcall **)(__int64, _QWORD))v2181 + 71))(v2184 - 8, *(_QWORD *)(v2184 - 8));
        v5027 = (size_t)v2185;
      }
      v2177 = (int)v5022;
      v2181[593] = v2188;
    }
    v2181[630] &= ~2u;
    LODWORD(v2176) = sub_140B9FDF0_Offset;
  }
  v2181[523] += 4;
  v2189 = v5516;
  i21 = (ULONG_PTR)v2181 + v2178;
  v5028 = (__int64)v5516;
  v2190 = v5454;
  v2191 = (char *)v2181 + v2178;
  v5031 = 4LL;
  do
  {
    v2192 = *v2190;
    v2193 = 48;
    v2194 = (_QWORD *)*v2189;
    v2195 = v2191;
    v2196 = 6LL;
    do
    {
      *v2195 = 0LL;
      v2193 -= 8;
      ++v2195;
      --v2196;
    }
    while ( v2196 );
    for ( ; v2193; --v2193 )
    {
      *(_BYTE *)v2195 = 0;
      v2195 = (_QWORD *)((char *)v2195 + 1);
    }
    *(_DWORD *)v2191 = v2176;
    *((_QWORD *)v2191 + 1) = v2194;
    if ( v2177 == 7 && (_DWORD)v2192 )
    {
      sub_1404D2D9C(v2181, v2194, (unsigned int)v2192, v2191 + 24);
      v2189 = (_QWORD *)v5028;
    }
    *((_DWORD *)v2191 + 4) = v2192;
    v2181[530] += v2192;
    v2197 = v2194;
    v2198 = v2181[525];
    v2199 = (const char *)v2194;
    v2200 = *((_QWORD *)v2181 + 263);
    if ( v2194 < (_QWORD *)((char *)v2194 + v2192) )
    {
      do
      {
        _mm_prefetch(v2199, 0);
        v2199 += 64;
      }
      while ( v2199 < (const char *)v2194 + v2192 );
    }
    v2201 = *((_QWORD *)v2181 + 263);
    v2202 = (unsigned int)v2192 >> 7;
    if ( (unsigned int)v2192 >> 7 )
    {
      do
      {
        v2203 = 8LL;
        do
        {
          v2204 = v2197[1] ^ __ROL8__(*v2197 ^ v2201, v2198);
          v2197 += 2;
          v2201 = __ROL8__(v2204, v2198);
          --v2203;
        }
        while ( v2203 );
        v2205 = (__ROL8__(v2200 ^ ((char *)v2197 - (char *)v2194), 17) ^ v2200 ^ (unsigned __int64)((char *)v2197
                                                                                                  - (char *)v2194))
              * (unsigned __int128)0x7010008004002001uLL;
        v5333 = *((_QWORD *)&v2205 + 1);
        v2198 = ((unsigned __int8)(v2205 ^ BYTE8(v2205)) ^ (unsigned __int8)v2198) & 0x3F;
        if ( !v2198 )
          LOBYTE(v2198) = 1;
        --v2202;
      }
      while ( v2202 );
      v2181 = (int *)v5026;
      v2189 = (_QWORD *)v5028;
    }
    v2206 = v2192 & 0x7F;
    if ( v2206 >= 8 )
    {
      v2207 = (unsigned __int64)(v2192 & 0x7F) >> 3;
      do
      {
        v2201 = __ROL8__(*v2197++ ^ v2201, v2198);
        v2206 -= 8;
        --v2207;
      }
      while ( v2207 );
    }
    for ( ; v2206; --v2206 )
    {
      v2208 = *(unsigned __int8 *)v2197;
      v2197 = (_QWORD *)((char *)v2197 + 1);
      v2201 = __ROL8__(v2208 ^ v2201, v2198);
    }
    for ( i34 = v2201 >> 31; i34; i34 >>= 31 )
      LODWORD(v2201) = i34 ^ v2201;
    v2177 = (int)v5022;
    v2176 = (unsigned int)sub_140B9FDF0_Offset;
    ++v2189;
    *((_DWORD *)v2191 + 5) = v2201 & 0x7FFFFFFF;
    ++v2190;
    v2181[530] += v2192;
    v2191 += 48;
    v4393 = v5031-- == 1;
    v5028 = (__int64)v2189;
  }
  while ( !v4393 );
  v2210 = (struct _KTIMER *)v5027;
  if ( v2177 == 7 )
  {
    v2211 = i21;
    v2212 = sub_140B9EDF0_Offset;
    do
    {
      *(_DWORD *)(v2211 + 40) |= 1u;
      v2211 += 48LL;
      --v2212;
    }
    while ( v2212 );
  }
  v4393 = (v2181[630] & 0x20000000) == 0;
  v2213 = 0;
  v5183 = (unsigned int *)v2181;
  v2214 = v2181;
  v2215 = v2210;
  v2216 = *(int **)HalExtensionList;
  v5026 = *(PVOID *)HalExtensionList;
  if ( v4393 )
  {
    v2217 = 0;
    if ( *((_DWORD *)HalExtensionList + 4) )
    {
      v2218 = v2181;
      do
      {
        v2219 = v2213;
        Timer = v2210;
        v2220 = (*((__int64 (__fastcall **)(__int64, _BYTE *, _QWORD, unsigned __int64))v2181 + 78))(
                  (__int64)v2216 + ((__int64)v2216[v2217] >> 4),
                  v5334,
                  0LL,
                  v2176);
        v2176 = (unsigned __int64)HalExtensionList;
        ++v2213;
        v2216 = (int *)v5026;
        if ( v2220 )
          v2213 = v2219;
        v2215 = Timer;
        ++v2217;
        v2210 = Timer;
      }
      while ( v2217 < *((_DWORD *)HalExtensionList + 4) );
      if ( v2213 )
      {
        v2221 = v2181[513];
        v2222 = 16 * v2213 + v2221 + 48;
        if ( v2222 <= v2218[665] )
        {
          v2218[513] = v2222;
          v2224 = v2215;
        }
        else
        {
          v2214 = (int *)GetRandomizedSafeContext(v2218, v2222, (unsigned int)v2218[593]);
          if ( !v2214 )
          {
            v668 = (unsigned int *)v2218;
            goto LABEL_2930;
          }
          v2223 = v2218[630];
          v2224 = Timer;
          if ( (v2223 & 2) == 0 )
          {
            v2225 = v2218[513];
            v2226 = *((_QWORD *)v2218 + 253);
            v2227 = (v2223 & 0x10000000) != 0 ? v2218[593] : 0;
            if ( v2225 >= 8 )
            {
              v2228 = (unsigned __int64)v2225 >> 3;
              do
              {
                *(_QWORD *)v2218 = 0LL;
                v2225 -= 8;
                v2218 += 2;
                --v2228;
              }
              while ( v2228 );
            }
            for ( ; v2225; --v2225 )
            {
              *(_BYTE *)v2218 = 0;
              v2218 = (int *)((char *)v2218 + 1);
            }
            v2229 = v2214[593];
            v2214[593] = v2227;
            if ( v2227 == 3 )
            {
              (*((void (__fastcall **)(__int64))v2214 + 109))(v2226);
            }
            else if ( (v2214[630] & 0x8000000) != 0 || !v2227 )
            {
              (*((void (__fastcall **)(__int64))v2214 + 33))(v2226);
            }
            else
            {
              (*((void (__fastcall **)(__int64, _QWORD))v2214 + 71))(v2226 - 8, *(_QWORD *)(v2226 - 8));
            }
            v2214[593] = v2229;
          }
          v2214[630] &= ~2u;
          v2176 = (unsigned __int64)HalExtensionList;
        }
        ++v2214[523];
        v2230 = 48;
        v2231 = (char *)v2214 + (unsigned int)v2221;
        v2232 = v2231;
        v2233 = 6LL;
        do
        {
          *v2232 = 0LL;
          v2230 -= 8;
          ++v2232;
          --v2233;
        }
        while ( v2233 );
        for ( ; v2230; --v2230 )
        {
          *(_BYTE *)v2232 = 0;
          v2232 = (_QWORD *)((char *)v2232 + 1);
        }
        *(_DWORD *)v2231 = 10;
        *((_QWORD *)v2231 + 1) = 0LL;
        *((_DWORD *)v2231 + 4) = 0;
        v2234 = *((_QWORD *)v2214 + 263);
        for ( i35 = v2234; ; LODWORD(v2234) = i35 ^ v2234 )
        {
          i35 >>= 31;
          if ( !i35 )
            break;
        }
        v2236 = v2231 + 48;
        *((_DWORD *)v2231 + 5) = v2234 & 0x7FFFFFFF;
        v2237 = v2224;
        *((_DWORD *)v2231 + 6) = 0;
        v2238 = 0;
        *((_DWORD *)v2231 + 7) = v2213;
        Timer = v2224;
        if ( !*(_DWORD *)(v2176 + 16) )
          goto LABEL_2967;
        v2239 = (char *)v5026;
        v2240 = HalExtensionList;
        Timer = v2237;
        do
        {
          v2241 = &v2239[(__int64)*(int *)&v2239[4 * v2238] >> 4];
          if ( !(*((__int64 (__fastcall **)(const char *, _BYTE *, _QWORD))v2214 + 78))(v2241, v5334, 0LL) )
          {
            v2242 = v2241;
            v2214[530] += 4;
            v2243 = v2241;
            for ( i36 = *((_QWORD *)v2214 + 263); v2243 < v2241 + 4; v2243 += 64 )
              _mm_prefetch(v2243, 0);
            v2245 = 4;
            do
            {
              v2246 = *(unsigned __int8 *)v2242++;
              i36 = __ROL8__(v2246 ^ i36, v2214[525]);
              --v2245;
            }
            while ( v2245 );
            v2240 = HalExtensionList;
            for ( i37 = i36; ; LODWORD(i36) = i37 ^ i36 )
            {
              i37 >>= 31;
              if ( !i37 )
                break;
            }
            *(_DWORD *)v2236 ^= (i36 ^ *(_DWORD *)v2236) & 0x7FFFFFFF;
            *((_DWORD *)v2236 + 1) = 4;
            *((_QWORD *)v2236 + 1) = v2241;
            v2236 += 16;
            if ( !--v2213 )
              break;
          }
          ++v2238;
        }
        while ( v2238 < v2240[4] );
        if ( v2213 )
        {
LABEL_2967:
          v5183 = (unsigned int *)v2214;
          goto LABEL_1074;
        }
        v2215 = Timer;
      }
    }
  }
  v5183 = (unsigned int *)v2214;
  v2248 = v2215;
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  _disable();
  _enable();
  v2249 = (unsigned int)v2214[513];
  v2250 = v2249 + 48;
  if ( (int)v2249 + 48 <= (unsigned int)v2214[665] )
  {
    v2251 = v2214;
    v2214[513] = v2250;
    v2253 = v2248;
    Timer = v2248;
    goto LABEL_2988;
  }
  v2251 = (int *)GetRandomizedSafeContext(v2214, v2250, (unsigned int)v2214[593]);
  Timer = v2248;
  if ( !v2251 )
    goto LABEL_1073;
  v2252 = v2214[630];
  v2253 = v2248;
  if ( (v2252 & 2) == 0 )
  {
    v2254 = v2214[513];
    v2255 = *((_QWORD *)v2214 + 253);
    Timer = v2248;
    v2256 = (v2252 & 0x10000000) != 0 ? v2214[593] : 0;
    if ( v2254 >= 8 )
    {
      Timer = v2248;
      v2257 = (unsigned __int64)v2254 >> 3;
      do
      {
        *(_QWORD *)v2214 = 0LL;
        v2254 -= 8;
        v2214 += 2;
        --v2257;
      }
      while ( v2257 );
    }
    for ( ; v2254; --v2254 )
    {
      *(_BYTE *)v2214 = 0;
      v2214 = (int *)((char *)v2214 + 1);
    }
    v2258 = v2251[593];
    v2251[593] = v2256;
    if ( v2256 == 3 )
    {
      (*((void (__fastcall **)(__int64))v2251 + 109))(v2255);
    }
    else if ( (v2251[630] & 0x8000000) != 0 || (Timer = v2253, !v2256) )
    {
      (*((void (__fastcall **)(__int64))v2251 + 33))(v2255);
    }
    else
    {
      (*((void (__fastcall **)(__int64, _QWORD))v2251 + 71))(v2255 - 8, *(_QWORD *)(v2255 - 8));
      Timer = v2253;
    }
    v2251[593] = v2258;
  }
  v2251[630] &= ~2u;
LABEL_2988:
  v2259 = (char *)v2251 + v2249;
  ++v2251[523];
  if ( !v2251 )
    goto LABEL_1073;
  v2260 = 48;
  v2261 = 6LL;
  v2262 = (_QWORD *)((char *)v2251 + v2249);
  do
  {
    *v2262 = 0LL;
    v2260 -= 8;
    ++v2262;
    --v2261;
  }
  while ( v2261 );
  for ( ; v2260; --v2260 )
  {
    *(_BYTE *)v2262 = 0;
    v2262 = (_QWORD *)((char *)v2262 + 1);
  }
  *(_DWORD *)v2259 = 36;
  *((_QWORD *)v2259 + 1) = &xmmword_141200030;
  v2263 = &xmmword_141200030;
  *((_DWORD *)v2259 + 4) = 24;
  v2251[530] += 24;
  v2264 = v2251[525];
  v2265 = *((_QWORD *)v2251 + 263);
  _mm_prefetch((const char *)&xmmword_141200030, 0);
  v2266 = 3LL;
  LODWORD(v2267) = 24;
  do
  {
    v2267 = (unsigned int)(v2267 - 8);
    v2265 = __ROL8__(*(_QWORD *)v2263 ^ v2265, v2264);
    v2263 = (__int128 *)((char *)v2263 + 8);
    --v2266;
  }
  while ( v2266 );
  if ( (_DWORD)v2267 )
  {
    do
    {
      v2268 = *(unsigned __int8 *)v2263;
      v2263 = (__int128 *)((char *)v2263 + 1);
      v2265 = __ROL8__(v2268 ^ v2265, v2264);
      v4393 = (_DWORD)v2267 == 1;
      v2267 = (unsigned int)(v2267 - 1);
    }
    while ( !v4393 );
  }
  for ( i38 = v2265; ; v2265 = (unsigned int)i38 ^ (unsigned int)v2265 )
  {
    i38 >>= 31;
    if ( !i38 )
      break;
  }
  LODWORD(v2265) = v2265 & 0x7FFFFFFF;
  Timer = v2253;
  *((_DWORD *)v2259 + 5) = v2265;
  v2270 = -1073741275;
  v2251[530] += 24;
  v2271 = PsHalImageBase;
  v2272 = *((_QWORD *)v2251 + 167);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  (*((void (__fastcall **)(__int64, unsigned __int64, __int64))v2251 + 44))(v2272, v2265, v2267);
  v2274 = (unsigned int *)**((_QWORD **)v2251 + 196);
  v2275 = (unsigned __int64)(v2274 + 4);
  while ( *(_QWORD *)(v2275 + 8) != v2271 )
  {
    v2275 += 24LL;
    if ( v2275 >= (unsigned __int64)&v2274[6 * *v2274 + 4] )
      goto LABEL_3005;
  }
  v2270 = 0;
  *(_OWORD *)(v2259 + 24) = *(_OWORD *)v2275;
  *((_QWORD *)v2259 + 5) = *(_QWORD *)(v2275 + 16);
LABEL_3005:
  (*((void (__fastcall **)(_QWORD))v2251 + 52))(*((_QWORD *)v2251 + 167));
  __writecr8(CurrentIrql);
  if ( v2270 < 0 )
  {
    v2276 = 24;
    v2277 = 3LL;
    v2278 = v2259 + 24;
    do
    {
      *v2278 = 0LL;
      v2276 -= 8;
      ++v2278;
      --v2277;
    }
    while ( v2277 );
    for ( ; v2276; --v2276 )
    {
      *(_BYTE *)v2278 = 0;
      v2278 = (_QWORD *)((char *)v2278 + 1);
    }
    *((_QWORD *)v2259 + 3) = 1LL;
  }
  v5183 = (unsigned int *)v2251;
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  v2279 = (unsigned int)v2251[513];
  v2280 = v2279 + 48;
  if ( (int)v2279 + 48 <= (unsigned int)v2251[665] )
  {
    v2283 = Timer;
    v2281 = v2251;
    v2251[513] = v2280;
    goto LABEL_3030;
  }
  v2281 = (int *)GetRandomizedSafeContext(v2251, v2280, (unsigned int)v2251[593]);
  if ( !v2281 )
    goto LABEL_1073;
  v2282 = v2251[630];
  v2283 = Timer;
  if ( (v2282 & 2) == 0 )
  {
    v2284 = v2251[513];
    v2285 = *((_QWORD *)v2251 + 253);
    v2286 = (v2282 & 0x10000000) != 0 ? v2251[593] : 0;
    if ( v2284 >= 8 )
    {
      v2287 = (unsigned __int64)v2284 >> 3;
      do
      {
        *(_QWORD *)v2251 = 0LL;
        v2284 -= 8;
        v2251 += 2;
        --v2287;
      }
      while ( v2287 );
    }
    for ( ; v2284; --v2284 )
    {
      *(_BYTE *)v2251 = 0;
      v2251 = (int *)((char *)v2251 + 1);
    }
    v2288 = v2281[593];
    v2281[593] = v2286;
    if ( v2286 == 3 )
    {
      (*((void (__fastcall **)(__int64))v2281 + 109))(v2285);
    }
    else if ( (v2281[630] & 0x8000000) != 0 || !v2286 )
    {
      (*((void (__fastcall **)(__int64))v2281 + 33))(v2285);
    }
    else
    {
      (*((void (__fastcall **)(__int64, _QWORD))v2281 + 71))(v2285 - 8, *(_QWORD *)(v2285 - 8));
    }
    v2281[593] = v2288;
  }
  v2281[630] &= ~2u;
LABEL_3030:
  v2289 = (char *)v2281 + v2279;
  ++v2281[523];
  v2290 = (_QWORD *)((char *)v2281 + v2279);
  v2291 = 48;
  v2292 = 6LL;
  do
  {
    *v2290 = 0LL;
    v2291 -= 8;
    ++v2290;
    --v2292;
  }
  while ( v2292 );
  for ( ; v2291; --v2291 )
  {
    *(_BYTE *)v2290 = 0;
    v2290 = (_QWORD *)((char *)v2290 + 1);
  }
  *(_DWORD *)v2289 = 4;
  *((_QWORD *)v2289 + 1) = 0LL;
  *((_DWORD *)v2289 + 4) = 0;
  v2293 = *((_QWORD *)v2281 + 263);
  for ( i39 = v2293 >> 31; i39; i39 >>= 31 )
    LODWORD(v2293) = i39 ^ v2293;
  Timer = v2283;
  *((_DWORD *)v2289 + 5) = v2293 & 0x7FFFFFFF;
  v730 = v2283;
  v5183 = (unsigned int *)v2281;
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  v2295 = (unsigned int)v2281[513];
  v2296 = v2295 + 48;
  if ( (int)v2295 + 48 <= (unsigned int)v2281[665] )
  {
    v2297 = v2281;
    v2281[513] = v2296;
    v2299 = v730;
  }
  else
  {
    v2297 = (int *)GetRandomizedSafeContext(v2281, v2296, (unsigned int)v2281[593]);
    if ( !v2297 )
      goto LABEL_3041;
    v2298 = v2281[630];
    v2299 = v730;
    if ( (v2298 & 2) == 0 )
    {
      v2300 = v2281[513];
      v2301 = *((_QWORD *)v2281 + 253);
      v2302 = (v2298 & 0x10000000) != 0 ? v2281[593] : 0;
      if ( v2300 >= 8 )
      {
        v2303 = (unsigned __int64)v2300 >> 3;
        do
        {
          *(_QWORD *)v2281 = 0LL;
          v2300 -= 8;
          v2281 += 2;
          --v2303;
        }
        while ( v2303 );
      }
      for ( ; v2300; --v2300 )
      {
        *(_BYTE *)v2281 = 0;
        v2281 = (int *)((char *)v2281 + 1);
      }
      v2304 = v2297[593];
      v2297[593] = v2302;
      if ( v2302 == 3 )
      {
        (*((void (__fastcall **)(__int64))v2297 + 109))(v2301);
      }
      else if ( (v2297[630] & 0x8000000) != 0 || !v2302 )
      {
        (*((void (__fastcall **)(__int64))v2297 + 33))(v2301);
      }
      else
      {
        (*((void (__fastcall **)(__int64, _QWORD))v2297 + 71))(v2301 - 8, *(_QWORD *)(v2301 - 8));
      }
      v2297[593] = v2304;
    }
    v2297[630] &= ~2u;
  }
  ++v2297[523];
  v2305 = (char *)v2297 + v2295;
  v2306 = 48;
  v2307 = (_QWORD *)((char *)v2297 + v2295);
  v731 = 0LL;
  v2308 = 6LL;
  do
  {
    *v2307 = 0LL;
    v2306 -= 8;
    ++v2307;
    --v2308;
  }
  while ( v2308 );
  for ( ; v2306; --v2306 )
  {
    *(_BYTE *)v2307 = 0;
    v2307 = (_QWORD *)((char *)v2307 + 1);
  }
  *(_DWORD *)v2305 = 5;
  *((_QWORD *)v2305 + 1) = 0LL;
  *((_DWORD *)v2305 + 4) = 0;
  v2309 = *((_QWORD *)v2297 + 263);
  for ( i40 = v2309; ; LODWORD(v2309) = i40 ^ v2309 )
  {
    i40 >>= 31;
    if ( !i40 )
      break;
  }
  Timer = v2299;
  *((_DWORD *)v2305 + 5) = v2309 & 0x7FFFFFFF;
  v730 = v2299;
  v5183 = (unsigned int *)v2297;
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  v2311 = (unsigned int)v2297[513];
  v2312 = v2311 + 48;
  if ( (int)v2311 + 48 <= (unsigned int)v2297[665] )
  {
    v2313 = v2297;
    v2297[513] = v2312;
  }
  else
  {
    v2313 = (int *)GetRandomizedSafeContext(v2297, v2312, (unsigned int)v2297[593]);
    if ( !v2313 )
      goto LABEL_3068;
    v2314 = v2297[630];
    if ( (v2314 & 2) == 0 )
    {
      v2315 = v2297[513];
      v2316 = *((_QWORD *)v2297 + 253);
      v2317 = (v2314 & 0x10000000) != 0 ? v2297[593] : 0;
      if ( v2315 >= 8 )
      {
        v2318 = (unsigned __int64)v2315 >> 3;
        do
        {
          *(_QWORD *)v2297 = 0LL;
          v2315 -= 8;
          v2297 += 2;
          --v2318;
        }
        while ( v2318 );
      }
      for ( ; v2315; --v2315 )
      {
        *(_BYTE *)v2297 = 0;
        v2297 = (int *)((char *)v2297 + 1);
      }
      v2319 = v2313[593];
      v2313[593] = v2317;
      if ( v2317 == 3 )
      {
        (*((void (__fastcall **)(__int64))v2313 + 109))(v2316);
      }
      else if ( (v2313[630] & 0x8000000) != 0 || !v2317 )
      {
        (*((void (__fastcall **)(__int64))v2313 + 33))(v2316);
      }
      else
      {
        (*((void (__fastcall **)(__int64, _QWORD))v2313 + 71))(v2316 - 8, *(_QWORD *)(v2316 - 8));
      }
      v2313[593] = v2319;
    }
    v2313[630] &= ~2u;
  }
  ++v2313[523];
  v2320 = (char *)v2313 + v2311;
  v2321 = 48;
  v2322 = (_QWORD *)((char *)v2313 + v2311);
  v2323 = 6LL;
  do
  {
    *v2322 = 0LL;
    v2321 -= 8;
    ++v2322;
    --v2323;
  }
  while ( v2323 );
  for ( ; v2321; --v2321 )
  {
    *(_BYTE *)v2322 = 0;
    v2322 = (_QWORD *)((char *)v2322 + 1);
  }
  *(_DWORD *)v2320 = 25;
  *((_QWORD *)v2320 + 1) = 0LL;
  *((_DWORD *)v2320 + 4) = 0;
  v2324 = *((_QWORD *)v2313 + 263);
  for ( i41 = v2324; ; LODWORD(v2324) = i41 ^ v2324 )
  {
    i41 >>= 31;
    if ( !i41 )
      break;
  }
  Timer = v2299;
  *((_DWORD *)v2320 + 5) = v2324 & 0x7FFFFFFF;
  v730 = v2299;
  v5183 = (unsigned int *)v2313;
  v2326 = 0;
  if ( ExpInitializeCallback[0] )
  {
    Timer = v730;
    do
      ++v2326;
    while ( ExpInitializeCallback[2 * v2326] );
  }
  v2327 = (unsigned int)v2313[513];
  v2328 = 16 * v2326;
  v2329 = v2327 + 48;
  if ( (int)v2327 + 48 <= (unsigned int)v2313[665] )
  {
    v2330 = v2313;
    v2313[513] = v2329;
    goto LABEL_3111;
  }
  v2330 = (_BYTE *)GetRandomizedSafeContext(v2313, v2329, (unsigned int)v2313[593]);
  if ( !v2330 )
    goto LABEL_3041;
  v2331 = v2313[630];
  if ( (v2331 & 2) == 0 )
  {
    v2332 = v2313[513];
    v2333 = *((_QWORD *)v2313 + 253);
    v2334 = (v2331 & 0x10000000) != 0 ? v2313[593] : 0;
    if ( v2332 >= 8 )
    {
      v2335 = (unsigned __int64)v2332 >> 3;
      do
      {
        *(_QWORD *)v2313 = 0LL;
        v2332 -= 8;
        v2313 += 2;
        --v2335;
      }
      while ( v2335 );
    }
    for ( ; v2332; --v2332 )
    {
      *(_BYTE *)v2313 = 0;
      v2313 = (int *)((char *)v2313 + 1);
    }
    v2336 = *((_DWORD *)v2330 + 593);
    *((_DWORD *)v2330 + 593) = v2334;
    if ( v2334 == 3 )
    {
      (*((void (__fastcall **)(__int64))v2330 + 109))(v2333);
    }
    else if ( (*((_DWORD *)v2330 + 630) & 0x8000000) != 0 || !v2334 )
    {
      (*((void (__fastcall **)(__int64))v2330 + 33))(v2333);
    }
    else
    {
      (*((void (__fastcall **)(__int64, _QWORD))v2330 + 71))(v2333 - 8, *(_QWORD *)(v2333 - 8));
    }
    *((_DWORD *)v2330 + 593) = v2336;
  }
  *((_DWORD *)v2330 + 630) &= ~2u;
LABEL_3111:
  ++*((_DWORD *)v2330 + 523);
  v2337 = &v2330[v2327];
  v2338 = 48;
  HalExtensionList = &v2330[v2327];
  v2339 = &v2330[v2327];
  v2340 = 6LL;
  do
  {
    *v2339 = 0LL;
    v2338 -= 8;
    ++v2339;
    --v2340;
  }
  while ( v2340 );
  for ( ; v2338; --v2338 )
  {
    *(_BYTE *)v2339 = 0;
    v2339 = (_QWORD *)((char *)v2339 + 1);
  }
  *(_DWORD *)v2337 = 29;
  v2341 = ExpInitializeCallback;
  v2337[1] = ExpInitializeCallback;
  v2342 = (const char *)ExpInitializeCallback;
  *((_DWORD *)v2337 + 4) = v2328;
  *((_DWORD *)v2330 + 530) += v2328;
  v2343 = *((_DWORD *)v2330 + 525);
  v2344 = *((_QWORD *)v2330 + 263);
  v2345 = &ExpInitializeCallback[v2328 / 8];
  if ( ExpInitializeCallback < v2345 )
  {
    do
    {
      _mm_prefetch(v2342, 0);
      v2342 += 64;
    }
    while ( v2342 < (const char *)v2345 );
  }
  v2346 = *((_QWORD *)v2330 + 263);
  v2347 = v2328 >> 7;
  if ( v2328 >> 7 )
  {
    do
    {
      v2348 = 8LL;
      do
      {
        v2349 = v2341[1] ^ __ROL8__(*v2341 ^ v2346, v2343);
        v2341 += 2;
        v2346 = __ROL8__(v2349, v2343);
        --v2348;
      }
      while ( v2348 );
      v2350 = (__ROL8__(v2344 ^ ((char *)v2341 - (char *)ExpInitializeCallback), 17) ^ v2344 ^ (unsigned __int64)((char *)v2341 - (char *)ExpInitializeCallback))
            * (unsigned __int128)0x7010008004002001uLL;
      v5335 = *((_QWORD *)&v2350 + 1);
      v2343 = ((unsigned __int8)(v2350 ^ BYTE8(v2350)) ^ (unsigned __int8)v2343) & 0x3F;
      if ( !v2343 )
        LOBYTE(v2343) = 1;
      --v2347;
    }
    while ( v2347 );
    v2337 = HalExtensionList;
  }
  v2351 = v2328 & 0x7F;
  if ( v2351 >= 8 )
  {
    v2352 = (unsigned __int64)(v2328 & 0x7F) >> 3;
    do
    {
      v2346 = __ROL8__(*v2341++ ^ v2346, v2343);
      v2351 -= 8;
      --v2352;
    }
    while ( v2352 );
  }
  for ( ; v2351; --v2351 )
  {
    v2353 = *(unsigned __int8 *)v2341;
    v2341 = (__int64 *)((char *)v2341 + 1);
    v2346 = __ROL8__(v2353 ^ v2346, v2343);
  }
  for ( i42 = v2346 >> 31; i42; i42 >>= 31 )
    LODWORD(v2346) = i42 ^ v2346;
  Timer = v730;
  *((_DWORD *)v2337 + 5) = v2346 & 0x7FFFFFFF;
  *((_DWORD *)v2330 + 530) += v2328;
  if ( (*((_DWORD *)v2330 + 630) & 0x20000000) == 0 )
  {
    LOBYTE(i43) = 0;
    goto LABEL_3175;
  }
  v2355 = *((unsigned int *)v2330 + 513);
  v2356 = (_QWORD *)v2337[1];
  v2357 = *((unsigned int *)v2330 + 593);
  LODWORD(sub_140B9EDF0_Offset) = *((_DWORD *)v2337 + 4);
  v2358 = v2355 + 48;
  if ( (unsigned int)(v2355 + 48) <= *((_DWORD *)v2330 + 665) )
  {
    v2359 = (__int64)v2330;
    *((_DWORD *)v2330 + 513) = v2358;
    goto LABEL_3150;
  }
  v2359 = GetRandomizedSafeContext(v2330, v2358, v2357);
  if ( !v2359 )
  {
LABEL_3041:
    v5183 = 0LL;
    goto LABEL_1075;
  }
  v2360 = *((_DWORD *)v2330 + 630);
  if ( (v2360 & 2) == 0 )
  {
    v2361 = *((_DWORD *)v2330 + 513);
    v2362 = *((_QWORD *)v2330 + 253);
    v2363 = (v2360 & 0x10000000) != 0 ? *((_DWORD *)v2330 + 593) : 0;
    if ( v2361 >= 8 )
    {
      v2364 = (unsigned __int64)v2361 >> 3;
      do
      {
        *(_QWORD *)v2330 = 0LL;
        v2361 -= 8;
        v2330 += 8;
        --v2364;
      }
      while ( v2364 );
    }
    for ( ; v2361; --v2361 )
      *v2330++ = 0;
    v2365 = *(_DWORD *)(v2359 + 2372);
    *(_DWORD *)(v2359 + 2372) = v2363;
    if ( v2363 == 3 )
    {
      (*(void (__fastcall **)(__int64))(v2359 + 872))(v2362);
    }
    else if ( (*(_DWORD *)(v2359 + 2520) & 0x8000000) != 0 || !v2363 )
    {
      (*(void (__fastcall **)(__int64))(v2359 + 264))(v2362);
    }
    else
    {
      (*(void (__fastcall **)(__int64, _QWORD))(v2359 + 568))(v2362 - 8, *(_QWORD *)(v2362 - 8));
    }
    *(_DWORD *)(v2359 + 2372) = v2365;
  }
  *(_DWORD *)(v2359 + 2520) &= ~2u;
LABEL_3150:
  v2366 = v2359 + v2355;
  ++*(_DWORD *)(v2359 + 2092);
  v2330 = (_BYTE *)v2359;
  v2367 = (_QWORD *)(v2359 + v2355);
  v2368 = 48;
  v2369 = 6LL;
  do
  {
    *v2367 = 0LL;
    v2368 -= 8;
    ++v2367;
    --v2369;
  }
  while ( v2369 );
  for ( ; v2368; --v2368 )
  {
    *(_BYTE *)v2367 = 0;
    v2367 = (_QWORD *)((char *)v2367 + 1);
  }
  v2370 = (unsigned int)sub_140B9EDF0_Offset;
  *(_DWORD *)v2366 = 32;
  *(_QWORD *)(v2366 + 8) = v2356;
  if ( (_DWORD)v2370 )
    sub_1404D2D9C(v2359, v2356, (unsigned int)v2370, v2366 + 24);
  *(_DWORD *)(v2366 + 16) = v2370;
  *(_DWORD *)(v2359 + 2120) += v2370;
  v2371 = v2356;
  v2372 = *(_DWORD *)(v2359 + 2100);
  v2373 = (const char *)v2356;
  v2374 = *(_QWORD *)(v2359 + 2104);
  if ( v2356 < (_QWORD *)((char *)v2356 + v2370) )
  {
    do
    {
      _mm_prefetch(v2373, 0);
      v2373 += 64;
    }
    while ( v2373 < (const char *)v2356 + v2370 );
  }
  v2375 = *(_QWORD *)(v2359 + 2104);
  v2376 = (unsigned int)v2370 >> 7;
  if ( (unsigned int)v2370 >> 7 )
  {
    do
    {
      v2377 = 8LL;
      do
      {
        v2378 = v2371[1] ^ __ROL8__(*v2371 ^ v2375, v2372);
        v2371 += 2;
        v2375 = __ROL8__(v2378, v2372);
        --v2377;
      }
      while ( v2377 );
      v2379 = (__ROL8__(v2374 ^ ((char *)v2371 - (char *)v2356), 17) ^ v2374 ^ (unsigned __int64)((char *)v2371
                                                                                                - (char *)v2356))
            * (unsigned __int128)0x7010008004002001uLL;
      v5336 = *((_QWORD *)&v2379 + 1);
      v2372 = ((unsigned __int8)(v2379 ^ BYTE8(v2379)) ^ (unsigned __int8)v2372) & 0x3F;
      if ( !v2372 )
        LOBYTE(v2372) = 1;
      --v2376;
    }
    while ( v2376 );
    LODWORD(v2370) = sub_140B9EDF0_Offset;
  }
  v2380 = v2370 & 0x7F;
  if ( v2380 >= 8 )
  {
    v2381 = (unsigned __int64)(v2370 & 0x7F) >> 3;
    do
    {
      v2375 = __ROL8__(*v2371++ ^ v2375, v2372);
      v2380 -= 8;
      --v2381;
    }
    while ( v2381 );
  }
  for ( ; v2380; --v2380 )
  {
    v2382 = *(unsigned __int8 *)v2371;
    v2371 = (_QWORD *)((char *)v2371 + 1);
    v2375 = __ROL8__(v2382 ^ v2375, v2372);
  }
  for ( i43 = v2375; ; LODWORD(v2375) = i43 ^ v2375 )
  {
    i43 >>= 31;
    if ( !i43 )
      break;
  }
  *(_DWORD *)(v2366 + 20) = v2375 & 0x7FFFFFFF;
  *((_DWORD *)v2330 + 530) += v2370;
  *(_DWORD *)(v2366 + 40) = 0;
LABEL_3175:
  v2384 = v730;
  Timer = v730;
  v5183 = (unsigned int *)v2330;
  _disable();
  if ( (_BYTE)KdDebuggerNotPresent == (_BYTE)i43 )
  {
    while ( 1 )
      ;
  }
  _enable();
  v2386 = 32;
  v2387 = *((_QWORD *)v2330 + 223);
  v2388 = *((unsigned int *)v2330 + 513);
  v2389 = *((unsigned int *)v2330 + 593);
  LODWORD(v5022) = *((_DWORD *)v2330 + 534);
  v2385 = (int)v5022;
  LODWORD(sub_140B9EDF0_Offset) = *(_DWORD *)((char *)ObpTypeObjectType + v2387);
  v2390 = 8 * sub_140B9EDF0_Offset;
  if ( (_DWORD)v5022 != 7 )
    v2386 = 0;
  v2391 = v2388 + 48;
  if ( (unsigned int)(v2388 + 48) <= *((_DWORD *)v2330 + 665) )
  {
    v2392 = v2330;
    *((_DWORD *)v2330 + 513) = v2391;
    HalExtensionList = v2384;
    goto LABEL_3196;
  }
  v2392 = (_BYTE *)GetRandomizedSafeContext(v2330, v2391, v2389);
  if ( !v2392 )
    goto LABEL_1073;
  v2393 = *((_DWORD *)v2330 + 630);
  HalExtensionList = v2384;
  if ( (v2393 & 2) == 0 )
  {
    v2394 = *((_DWORD *)v2330 + 513);
    v2395 = *((_QWORD *)v2330 + 253);
    v2396 = v2384;
    HalExtensionList = v2384;
    v2397 = (v2393 & 0x10000000) != 0 ? *((_DWORD *)v2330 + 593) : 0;
    if ( v2394 >= 8 )
    {
      HalExtensionList = v2384;
      v2398 = (unsigned __int64)v2394 >> 3;
      do
      {
        *(_QWORD *)v2330 = 0LL;
        v2394 -= 8;
        v2330 += 8;
        --v2398;
      }
      while ( v2398 );
    }
    for ( ; v2394; --v2394 )
      *v2330++ = 0;
    v2399 = *((_DWORD *)v2392 + 593);
    v2400 = v2396;
    *((_DWORD *)v2392 + 593) = v2397;
    if ( v2397 == 3 )
    {
      (*((void (__fastcall **)(__int64))v2392 + 109))(v2395);
    }
    else if ( (*((_DWORD *)v2392 + 630) & 0x8000000) != 0 || (HalExtensionList = v2396, !v2397) )
    {
      (*((void (__fastcall **)(__int64))v2392 + 33))(v2395);
    }
    else
    {
      (*((void (__fastcall **)(__int64, _QWORD))v2392 + 71))(v2395 - 8, *(_QWORD *)(v2395 - 8));
      HalExtensionList = v2400;
    }
    *((_DWORD *)v2392 + 593) = v2399;
  }
  *((_DWORD *)v2392 + 630) &= ~2u;
  v2385 = (int)v5022;
LABEL_3196:
  ++*((_DWORD *)v2392 + 523);
  v2401 = &v2392[v2388];
  v2402 = 48;
  v2403 = &v2392[v2388];
  v2404 = 6LL;
  do
  {
    *v2403 = 0LL;
    v2402 -= 8;
    ++v2403;
    --v2404;
  }
  while ( v2404 );
  for ( ; v2402; --v2402 )
  {
    *(_BYTE *)v2403 = 0;
    v2403 = (_QWORD *)((char *)v2403 + 1);
  }
  *(_DWORD *)v2401 = v2386;
  *((_QWORD *)v2401 + 1) = ObpObjectTypes;
  if ( v2385 == 7 && v2390 )
    sub_1404D2D9C(v2392, ObpObjectTypes, v2390, v2401 + 24);
  *((_DWORD *)v2401 + 4) = v2390;
  v2405 = ObpObjectTypes;
  *((_DWORD *)v2392 + 530) += v2390;
  v2406 = (const char *)ObpObjectTypes;
  v2407 = *((_DWORD *)v2392 + 525);
  v2408 = *((_QWORD *)v2392 + 263);
  v2409 = &ObpObjectTypes[v2390 / 8];
  if ( ObpObjectTypes < v2409 )
  {
    do
    {
      _mm_prefetch(v2406, 0);
      v2406 += 64;
    }
    while ( v2406 < (const char *)v2409 );
  }
  v2410 = *((_QWORD *)v2392 + 263);
  for ( i44 = v2390 >> 7; i44; --i44 )
  {
    v2412 = 8LL;
    do
    {
      v2413 = v2405[1] ^ __ROL8__(*v2405 ^ v2410, v2407);
      v2405 += 2;
      v2410 = __ROL8__(v2413, v2407);
      --v2412;
    }
    while ( v2412 );
    v2414 = (__ROL8__(v2408 ^ ((char *)v2405 - (char *)ObpObjectTypes), 17) ^ v2408 ^ (unsigned __int64)((char *)v2405 - (char *)ObpObjectTypes))
          * (unsigned __int128)0x7010008004002001uLL;
    v5337 = *((_QWORD *)&v2414 + 1);
    v2407 = ((unsigned __int8)(v2414 ^ BYTE8(v2414)) ^ (unsigned __int8)v2407) & 0x3F;
    if ( !v2407 )
      LOBYTE(v2407) = 1;
  }
  v2415 = v2390 & 0x7F;
  if ( v2415 >= 8 )
  {
    v2416 = (unsigned __int64)(v2390 & 0x7F) >> 3;
    do
    {
      v2410 = __ROL8__(*v2405++ ^ v2410, v2407);
      v2415 -= 8;
      --v2416;
    }
    while ( v2416 );
  }
  for ( ; v2415; --v2415 )
  {
    v2417 = *(unsigned __int8 *)v2405;
    v2405 = (__int64 *)((char *)v2405 + 1);
    v2410 = __ROL8__(v2417 ^ v2410, v2407);
  }
  for ( i45 = v2410 >> 31; i45; i45 >>= 31 )
    LODWORD(v2410) = i45 ^ v2410;
  v730 = (struct _KTIMER *)HalExtensionList;
  *((_DWORD *)v2401 + 5) = v2410 & 0x7FFFFFFF;
  *((_DWORD *)v2392 + 530) += v2390;
  v2419 = *((_DWORD *)v2392 + 454);
  v2420 = *((_DWORD *)v2392 + 456);
  Timer = v730;
  LODWORD(v5022) = v2419;
  LODWORD(sub_140B9FDF0_Offset) = v2420;
  LODWORD(v5020) = 0;
  if ( (_DWORD)sub_140B9EDF0_Offset )
  {
    Timer = v730;
    do
    {
      v2421 = (_BYTE *)ObpObjectTypes[(unsigned int)i45];
      HalExtensionList = v2421;
      if ( v2421 )
      {
        if ( (*(v2421 - 22) & 2) != 0 )
        {
          v2422 = (unsigned __int16 *)&v2421[-ObpInfoMaskToOffset[*(v2421 - 22) & 3] - 48];
          if ( v2422 )
          {
            v2423 = v2422[4];
            if ( (_WORD)v2423 )
            {
              if ( v2421[40] != v2392[1832] )
              {
                v2424 = *((unsigned int *)v2392 + 513);
                v2425 = *((unsigned int *)v2392 + 593);
                LODWORD(v5024) = v2423 + 26;
                v2426 = v2424 + ((v2423 + 33) & 0xFFFFFFF8) + 48;
                v2427 = &v2421[v2419];
                if ( v2426 <= *((_DWORD *)v2392 + 665) )
                {
                  v2428 = (__int64)v2392;
                  *((_DWORD *)v2392 + 513) = v2426;
                  v2430 = v2422;
                }
                else
                {
                  v2428 = GetRandomizedSafeContext(v2392, v2426, v2425);
                  v668 = 0LL;
                  if ( !v2428 )
                    goto LABEL_2930;
                  v2429 = *((_DWORD *)v2392 + 630);
                  v2430 = v2422;
                  if ( (v2429 & 2) == 0 )
                  {
                    v2431 = *((_DWORD *)v2392 + 513);
                    v2432 = *((_QWORD *)v2392 + 253);
                    v5026 = v2422;
                    v2433 = (v2429 & 0x10000000) != 0 ? *((_DWORD *)v2392 + 593) : 0;
                    if ( v2431 >= 8 )
                    {
                      v5026 = v2422;
                      v2434 = (unsigned __int64)v2431 >> 3;
                      do
                      {
                        *(_QWORD *)v2392 = 0LL;
                        v2431 -= 8;
                        v2392 += 8;
                        --v2434;
                      }
                      while ( v2434 );
                    }
                    for ( ; v2431; --v2431 )
                      *v2392++ = 0;
                    v2435 = *(_DWORD *)(v2428 + 2372);
                    v2436 = Timer;
                    *(_DWORD *)(v2428 + 2372) = v2433;
                    if ( v2433 == 3 )
                    {
                      (*(void (__fastcall **)(__int64))(v2428 + 872))(v2432);
                    }
                    else if ( (*(_DWORD *)(v2428 + 2520) & 0x8000000) != 0 || (v5026 = v2422, Timer = v2436, !v2433) )
                    {
                      (*(void (__fastcall **)(__int64))(v2428 + 264))(v2432);
                    }
                    else
                    {
                      (*(void (__fastcall **)(__int64, _QWORD))(v2428 + 568))(v2432 - 8, *(_QWORD *)(v2432 - 8));
                      v5026 = v2422;
                      Timer = v2436;
                    }
                    *(_DWORD *)(v2428 + 2372) = v2435;
                    v2430 = v5026;
                  }
                  *(_DWORD *)(v2428 + 2520) &= ~2u;
                  v2420 = sub_140B9FDF0_Offset;
                }
                ++*(_DWORD *)(v2428 + 2092);
                v2437 = v2428 + v2424;
                v2392 = (_BYTE *)v2428;
                v2438 = 48;
                v2439 = 6LL;
                v2440 = (_QWORD *)(v2428 + v2424);
                do
                {
                  *v2440 = 0LL;
                  v2438 -= 8;
                  ++v2440;
                  --v2439;
                }
                while ( v2439 );
                for ( ; v2438; --v2438 )
                {
                  *(_BYTE *)v2440 = 0;
                  v2440 = (_QWORD *)((char *)v2440 + 1);
                }
                *(_DWORD *)v2437 = 8;
                v2441 = v2427;
                *(_QWORD *)(v2437 + 8) = v2427;
                v2442 = (const char *)v2427;
                *(_DWORD *)(v2437 + 16) = v2420;
                *(_DWORD *)(v2428 + 2120) += v2420;
                v2443 = *(_DWORD *)(v2428 + 2100);
                v2444 = *(_QWORD *)(v2428 + 2104);
                v2445 = (unsigned __int64)v2427 + v2420;
                if ( (unsigned __int64)v2427 < v2445 )
                {
                  do
                  {
                    _mm_prefetch(v2442, 0);
                    v2442 += 64;
                  }
                  while ( (unsigned __int64)v2442 < v2445 );
                }
                v2446 = v2420 >> 7;
                for ( i46 = *(_QWORD *)(v2428 + 2104); v2446; --v2446 )
                {
                  v2448 = 8LL;
                  do
                  {
                    v2449 = v2441[1] ^ __ROL8__(*v2441 ^ i46, v2443);
                    v2441 += 2;
                    i46 = __ROL8__(v2449, v2443);
                    --v2448;
                  }
                  while ( v2448 );
                  v2450 = (__ROL8__(v2444 ^ ((char *)v2441 - (char *)v2427), 17) ^ v2444 ^ (unsigned __int64)((char *)v2441 - (char *)v2427))
                        * (unsigned __int128)0x7010008004002001uLL;
                  v5338 = *((_QWORD *)&v2450 + 1);
                  v2443 = ((unsigned __int8)(v2450 ^ BYTE8(v2450)) ^ (unsigned __int8)v2443) & 0x3F;
                  if ( !v2443 )
                    LOBYTE(v2443) = 1;
                }
                v2420 = sub_140B9FDF0_Offset;
                v2451 = sub_140B9FDF0_Offset & 0x7F;
                if ( v2451 >= 8 )
                {
                  v2452 = (unsigned __int64)(sub_140B9FDF0_Offset & 0x7F) >> 3;
                  do
                  {
                    i46 = __ROL8__(*v2441++ ^ i46, v2443);
                    v2451 -= 8;
                    --v2452;
                  }
                  while ( v2452 );
                }
                for ( ; v2451; --v2451 )
                {
                  v2453 = *(unsigned __int8 *)v2441;
                  v2441 = (_QWORD *)((char *)v2441 + 1);
                  i46 = __ROL8__(v2453 ^ i46, v2443);
                }
                for ( i47 = i46; ; LODWORD(i46) = i47 ^ i46 )
                {
                  i47 >>= 31;
                  if ( !i47 )
                    break;
                }
                *(_DWORD *)(v2437 + 20) = i46 & 0x7FFFFFFF;
                *((_DWORD *)v2392 + 530) += v2420;
                v2455 = 26;
                v2456 = v5024;
                v2457 = (char *)HalExtensionList + *((_QWORD *)v2392 + 224);
                *(_QWORD *)(v2437 + 24) = HalExtensionList;
                v2458 = (_QWORD *)(v2437 + 48);
                *(_WORD *)(v2437 + 32) = v2456;
                v2459 = 3LL;
                *(_WORD *)(v2437 + 34) = *(_WORD *)&v2457[*((_QWORD *)v2392 + 230)];
                v2460 = L"\\ObjectTypes\\";
                do
                {
                  v2455 -= 8;
                  *v2458 = *(_QWORD *)v2460;
                  v2460 += 4;
                  ++v2458;
                  --v2459;
                }
                while ( v2459 );
                for ( ; v2455; --v2455 )
                {
                  v2461 = *(_BYTE *)v2460;
                  v2460 = (const wchar_t *)((char *)v2460 + 1);
                  *(_BYTE *)v2458 = v2461;
                  v2458 = (_QWORD *)((char *)v2458 + 1);
                }
                v2462 = *((unsigned __int16 *)v2430 + 4);
                v2463 = (char *)(v2437 + 74);
                v2464 = (_QWORD *)v2430[2];
                if ( v2462 >= 8 )
                {
                  v2465 = (unsigned __int64)*((unsigned __int16 *)v2430 + 4) >> 3;
                  do
                  {
                    v2462 -= 8;
                    *(_QWORD *)v2463 = *v2464++;
                    v2463 += 8;
                    --v2465;
                  }
                  while ( v2465 );
                }
                if ( v2462 )
                {
                  v2466 = v2463 - (char *)v2464;
                  do
                  {
                    *((_BYTE *)v2464 + v2466) = *(_BYTE *)v2464;
                    v2464 = (_QWORD *)((char *)v2464 + 1);
                    --v2462;
                  }
                  while ( v2462 );
                }
                if ( (*((_DWORD *)v2392 + 630) & 0x20000000) != 0 )
                {
                  v2467 = *((unsigned int *)v2392 + 513);
                  v2468 = *(_DWORD *)(v2437 + 16);
                  v2469 = *(_QWORD **)(v2437 + 8);
                  v2470 = *((unsigned int *)v2392 + 593);
                  v2471 = v2467 + 48;
                  LODWORD(v5024) = v2468;
                  if ( (unsigned int)(v2467 + 48) <= *((_DWORD *)v2392 + 665) )
                  {
                    v2472 = (__int64)v2392;
                    *((_DWORD *)v2392 + 513) = v2471;
                  }
                  else
                  {
                    v2472 = GetRandomizedSafeContext(v2392, v2471, v2470);
                    v668 = 0LL;
                    if ( !v2472 )
                      goto LABEL_2930;
                    v2473 = *((_DWORD *)v2392 + 630);
                    if ( (v2473 & 2) == 0 )
                    {
                      v2474 = *((_DWORD *)v2392 + 513);
                      v2475 = *((_QWORD *)v2392 + 253);
                      v2476 = (v2473 & 0x10000000) != 0 ? *((_DWORD *)v2392 + 593) : 0;
                      if ( v2474 >= 8 )
                      {
                        v2477 = (unsigned __int64)v2474 >> 3;
                        do
                        {
                          *(_QWORD *)v2392 = 0LL;
                          v2474 -= 8;
                          v2392 += 8;
                          --v2477;
                        }
                        while ( v2477 );
                      }
                      for ( ; v2474; --v2474 )
                        *v2392++ = 0;
                      v2478 = *(_DWORD *)(v2472 + 2372);
                      v2479 = Timer;
                      *(_DWORD *)(v2472 + 2372) = v2476;
                      if ( v2476 == 3 )
                      {
                        (*(void (__fastcall **)(__int64))(v2472 + 872))(v2475);
                      }
                      else if ( (*(_DWORD *)(v2472 + 2520) & 0x8000000) != 0 || (Timer = v2479, !v2476) )
                      {
                        (*(void (__fastcall **)(__int64))(v2472 + 264))(v2475);
                      }
                      else
                      {
                        (*(void (__fastcall **)(__int64, _QWORD))(v2472 + 568))(v2475 - 8, *(_QWORD *)(v2475 - 8));
                        Timer = v2479;
                      }
                      *(_DWORD *)(v2472 + 2372) = v2478;
                      v2468 = v5024;
                    }
                    *(_DWORD *)(v2472 + 2520) &= ~2u;
                  }
                  ++*(_DWORD *)(v2472 + 2092);
                  v2480 = v2472 + v2467;
                  v2392 = (_BYTE *)v2472;
                  v2481 = 48;
                  v2482 = 6LL;
                  v2483 = (_QWORD *)(v2472 + v2467);
                  do
                  {
                    *v2483 = 0LL;
                    v2481 -= 8;
                    ++v2483;
                    --v2482;
                  }
                  while ( v2482 );
                  for ( ; v2481; --v2481 )
                  {
                    *(_BYTE *)v2483 = 0;
                    v2483 = (_QWORD *)((char *)v2483 + 1);
                  }
                  *(_DWORD *)v2480 = 32;
                  *(_QWORD *)(v2480 + 8) = v2469;
                  if ( v2468 )
                    sub_1404D2D9C(v2472, v2469, v2468, v2480 + 24);
                  *(_DWORD *)(v2480 + 16) = v2468;
                  v2484 = v2469;
                  *(_DWORD *)(v2472 + 2120) += v2468;
                  v2485 = (const char *)v2469;
                  v2486 = *(_DWORD *)(v2472 + 2100);
                  v2487 = *(_QWORD *)(v2472 + 2104);
                  v2488 = (unsigned __int64)v2469 + v2468;
                  if ( (unsigned __int64)v2469 < v2488 )
                  {
                    do
                    {
                      _mm_prefetch(v2485, 0);
                      v2485 += 64;
                    }
                    while ( (unsigned __int64)v2485 < v2488 );
                  }
                  v2489 = *(_QWORD *)(v2472 + 2104);
                  v2490 = v2468 >> 7;
                  if ( v2468 >> 7 )
                  {
                    do
                    {
                      v2491 = 8LL;
                      do
                      {
                        v2492 = v2484[1] ^ __ROL8__(*v2484 ^ v2489, v2486);
                        v2484 += 2;
                        v2489 = __ROL8__(v2492, v2486);
                        --v2491;
                      }
                      while ( v2491 );
                      v2493 = __ROL8__(v2487 ^ ((char *)v2484 - (char *)v2469), 17) ^ v2487 ^ ((char *)v2484
                                                                                             - (char *)v2469);
                      v5339 = (v2493 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                      v2486 = ((unsigned __int8)(v5339 ^ v2493) ^ (unsigned __int8)v2486) & 0x3F;
                      if ( !v2486 )
                        LOBYTE(v2486) = 1;
                      --v2490;
                    }
                    while ( v2490 );
                    v2468 = v5024;
                  }
                  v2494 = v2468 & 0x7F;
                  if ( v2494 >= 8 )
                  {
                    v2495 = (unsigned __int64)(v2468 & 0x7F) >> 3;
                    do
                    {
                      v2489 = __ROL8__(*v2484++ ^ v2489, v2486);
                      v2494 -= 8;
                      --v2495;
                    }
                    while ( v2495 );
                  }
                  for ( ; v2494; --v2494 )
                  {
                    v2496 = *(unsigned __int8 *)v2484;
                    v2484 = (_QWORD *)((char *)v2484 + 1);
                    v2489 = __ROL8__(v2496 ^ v2489, v2486);
                  }
                  for ( i48 = v2489; ; LODWORD(v2489) = i48 ^ v2489 )
                  {
                    i48 >>= 31;
                    if ( !i48 )
                      break;
                  }
                  *(_DWORD *)(v2480 + 20) = v2489 & 0x7FFFFFFF;
                  *((_DWORD *)v2392 + 530) += v2468;
                  v2420 = sub_140B9FDF0_Offset;
                  *(_DWORD *)(v2480 + 40) = 1;
                }
                v2419 = (int)v5022;
              }
            }
          }
        }
      }
      LODWORD(i45) = v5020 + 1;
      LODWORD(v5020) = i45;
    }
    while ( (unsigned int)i45 < (unsigned int)sub_140B9EDF0_Offset );
    v730 = Timer;
  }
  v5183 = (unsigned int *)v2392;
  v2498 = *((unsigned int *)v2392 + 513);
  v2499 = v2498 + 48;
  if ( (unsigned int)(v2498 + 48) <= *((_DWORD *)v2392 + 665) )
  {
    v2500 = v2392;
    *((_DWORD *)v2392 + 513) = v2499;
  }
  else
  {
    v2500 = (_BYTE *)GetRandomizedSafeContext(v2392, v2499, *((unsigned int *)v2392 + 593));
    if ( !v2500 )
    {
      v2500 = 0LL;
      Timer = v730;
      goto LABEL_3359;
    }
    v2501 = *((_DWORD *)v2392 + 630);
    if ( (v2501 & 2) == 0 )
    {
      v2502 = *((_DWORD *)v2392 + 513);
      v2503 = *((_QWORD *)v2392 + 253);
      v2504 = (v2501 & 0x10000000) != 0 ? *((_DWORD *)v2392 + 593) : 0;
      if ( v2502 >= 8 )
      {
        v2505 = (unsigned __int64)v2502 >> 3;
        do
        {
          *(_QWORD *)v2392 = 0LL;
          v2502 -= 8;
          v2392 += 8;
          --v2505;
        }
        while ( v2505 );
      }
      for ( ; v2502; --v2502 )
        *v2392++ = 0;
      v2506 = *((_DWORD *)v2500 + 593);
      *((_DWORD *)v2500 + 593) = v2504;
      if ( v2504 == 3 )
      {
        (*((void (__fastcall **)(__int64))v2500 + 109))(v2503);
      }
      else if ( (*((_DWORD *)v2500 + 630) & 0x8000000) != 0 || !v2504 )
      {
        (*((void (__fastcall **)(__int64))v2500 + 33))(v2503);
      }
      else
      {
        (*((void (__fastcall **)(__int64, _QWORD))v2500 + 71))(v2503 - 8, *(_QWORD *)(v2503 - 8));
      }
      *((_DWORD *)v2500 + 593) = v2506;
    }
    *((_DWORD *)v2500 + 630) &= ~2u;
  }
  ++*((_DWORD *)v2500 + 523);
  v2507 = &v2500[v2498];
  v2508 = 48;
  v2509 = &v2500[v2498];
  v2510 = 6LL;
  do
  {
    *v2509 = 0LL;
    v2508 -= 8;
    ++v2509;
    --v2510;
  }
  while ( v2510 );
  for ( ; v2508; --v2508 )
  {
    *(_BYTE *)v2509 = 0;
    v2509 = (_QWORD *)((char *)v2509 + 1);
  }
  *(_DWORD *)v2507 = 39;
  *((_QWORD *)v2507 + 1) = 0LL;
  *((_DWORD *)v2507 + 4) = 0;
  v2511 = *((_QWORD *)v2500 + 263);
  for ( i49 = v2511; ; LODWORD(v2511) = i49 ^ v2511 )
  {
    i49 >>= 31;
    if ( !i49 )
      break;
  }
  v2513 = (unsigned int)v5057;
  v2514 = (unsigned int)Size;
  *((_DWORD *)v2507 + 5) = v2511 & 0x7FFFFFFF;
  *((_DWORD *)v2507 + 8) = v2513;
  v2515 = &v2500[v2513];
  *((_DWORD *)v2507 + 9) = v2514;
  *((_DWORD *)v2500 + 530) += v2514;
  v2516 = &v2500[v2513 + v2514];
  v2517 = *((_DWORD *)v2500 + 525);
  v2518 = v2515;
  v2519 = *((_QWORD *)v2500 + 263);
  v2520 = &v2500[v2513];
  Timer = v730;
  if ( v2515 < v2516 )
  {
    Timer = v730;
    do
    {
      _mm_prefetch(v2520, 0);
      v2520 += 64;
    }
    while ( v2520 < v2516 );
  }
  v2521 = v2519;
  v2522 = (unsigned int)v2514 >> 7;
  if ( (unsigned int)v2514 >> 7 )
  {
    do
    {
      v2523 = 8LL;
      do
      {
        v2524 = *((_QWORD *)v2518 + 1) ^ __ROL8__(*(_QWORD *)v2518 ^ v2521, v2517);
        v2518 += 16;
        v2521 = __ROL8__(v2524, v2517);
        --v2523;
      }
      while ( v2523 );
      v2525 = (__ROL8__(v2519 ^ (v2518 - v2515), 17) ^ v2519 ^ (unsigned __int64)(v2518 - v2515))
            * (unsigned __int128)0x7010008004002001uLL;
      v5340 = *((_QWORD *)&v2525 + 1);
      v2517 = ((unsigned __int8)(v2525 ^ BYTE8(v2525)) ^ (unsigned __int8)v2517) & 0x3F;
      if ( !v2517 )
        LOBYTE(v2517) = 1;
      --v2522;
    }
    while ( v2522 );
    LOBYTE(v2514) = Size;
  }
  v2526 = v2514 & 0x7F;
  if ( v2526 >= 8 )
  {
    v2527 = (unsigned __int64)v2526 >> 3;
    do
    {
      v2521 = __ROL8__(*(_QWORD *)v2518 ^ v2521, v2517);
      v2518 += 8;
      v2526 -= 8;
      --v2527;
    }
    while ( v2527 );
  }
  for ( ; v2526; --v2526 )
  {
    v2528 = *(unsigned __int8 *)v2518++;
    v2521 = __ROL8__(v2528 ^ v2521, v2517);
  }
  *((_QWORD *)v2507 + 3) = v2521;
LABEL_3359:
  v5183 = (unsigned int *)v2500;
  if ( !v2500 )
    goto LABEL_1075;
  if ( (*((_DWORD *)v2500 + 630) & 0x4000000) != 0 )
    goto LABEL_3442;
  v2529 = *((unsigned int *)v2500 + 513);
  v2530 = *((unsigned int *)v2500 + 593);
  v2531 = 16 * *((_DWORD *)v2500 + 698) + 8;
  LODWORD(sub_140B9EDF0_Offset) = 16 * *((_DWORD *)v2500 + 698) + 2800;
  LODWORD(v5022) = 16 * *((_DWORD *)v2500 + 699);
  v2532 = v2529 + 48;
  if ( (unsigned int)(v2529 + 48) <= *((_DWORD *)v2500 + 665) )
  {
    v2533 = v2500;
    *((_DWORD *)v2500 + 513) = v2532;
  }
  else
  {
    v2533 = (_BYTE *)GetRandomizedSafeContext(v2500, v2532, v2530);
    if ( !v2533 )
      goto LABEL_3363;
    v2534 = *((_DWORD *)v2500 + 630);
    if ( (v2534 & 2) == 0 )
    {
      v2535 = *((_DWORD *)v2500 + 513);
      v2536 = *((_QWORD *)v2500 + 253);
      v2537 = (v2534 & 0x10000000) != 0 ? *((_DWORD *)v2500 + 593) : 0;
      if ( v2535 >= 8 )
      {
        v2538 = (unsigned __int64)v2535 >> 3;
        do
        {
          *(_QWORD *)v2500 = 0LL;
          v2535 -= 8;
          v2500 += 8;
          --v2538;
        }
        while ( v2538 );
      }
      for ( ; v2535; --v2535 )
        *v2500++ = 0;
      v2539 = *((_DWORD *)v2533 + 593);
      v2540 = Timer;
      *((_DWORD *)v2533 + 593) = v2537;
      if ( v2537 == 3 )
      {
        (*((void (__fastcall **)(__int64))v2533 + 109))(v2536);
      }
      else if ( (*((_DWORD *)v2533 + 630) & 0x8000000) != 0 || (Timer = v2540, !v2537) )
      {
        (*((void (__fastcall **)(__int64))v2533 + 33))(v2536);
      }
      else
      {
        (*((void (__fastcall **)(__int64, _QWORD))v2533 + 71))(v2536 - 8, *(_QWORD *)(v2536 - 8));
        Timer = v2540;
      }
      *((_DWORD *)v2533 + 593) = v2539;
    }
    *((_DWORD *)v2533 + 630) &= ~2u;
  }
  ++*((_DWORD *)v2533 + 523);
  v2541 = &v2533[v2529];
  v2542 = 48;
  v2543 = &v2533[v2529];
  v2544 = 6LL;
  do
  {
    *v2543 = 0LL;
    v2542 -= 8;
    ++v2543;
    --v2544;
  }
  while ( v2544 );
  for ( ; v2542; --v2542 )
  {
    *(_BYTE *)v2543 = 0;
    v2543 = (_QWORD *)((char *)v2543 + 1);
  }
  *(_DWORD *)v2541 = 40;
  *((_QWORD *)v2541 + 1) = 0LL;
  *((_DWORD *)v2541 + 4) = 0;
  v2545 = *((_QWORD *)v2533 + 263);
  for ( i50 = v2545; ; LODWORD(v2545) = i50 ^ v2545 )
  {
    i50 >>= 31;
    if ( !i50 )
      break;
  }
  v2547 = Timer;
  *((_DWORD *)v2541 + 5) = v2545 & 0x7FFFFFFF;
  *((_DWORD *)v2541 + 8) = 2792;
  *((_DWORD *)v2541 + 9) = v2531;
  *((_DWORD *)v2533 + 530) += v2531;
  v2548 = *((_DWORD *)v2533 + 525);
  v2549 = *((_QWORD *)v2533 + 263);
  v2550 = v2533 + 2792;
  v2551 = (unsigned __int64)&v2533[v2531 + 2792];
  Timer = v2547;
  v2552 = v2533 + 2792;
  if ( (unsigned __int64)(v2533 + 2792) < v2551 )
  {
    Timer = v2547;
    do
    {
      _mm_prefetch(v2552, 0);
      v2552 += 64;
    }
    while ( (unsigned __int64)v2552 < v2551 );
  }
  v2553 = v2549;
  v2554 = v2531 >> 7;
  if ( v2531 >> 7 )
  {
    do
    {
      v2555 = 8LL;
      do
      {
        v2556 = v2550[1] ^ __ROL8__(*v2550 ^ v2553, v2548);
        v2550 += 2;
        v2553 = __ROL8__(v2556, v2548);
        --v2555;
      }
      while ( v2555 );
      v2557 = (__ROL8__(v2549 ^ ((char *)v2550 - (v2533 + 2792)), 17) ^ v2549 ^ (unsigned __int64)((char *)v2550
                                                                                                 - (v2533
                                                                                                  + 2792)))
            * (unsigned __int128)0x7010008004002001uLL;
      v5341 = *((_QWORD *)&v2557 + 1);
      v2548 = ((unsigned __int8)v2557 ^ (unsigned __int8)(BYTE8(v2557) ^ v2548)) & 0x3F;
      if ( !v2548 )
        LOBYTE(v2548) = 1;
      --v2554;
    }
    while ( v2554 );
    v2547 = Timer;
  }
  v2558 = v2531 & 0x7F;
  if ( v2558 >= 8 )
  {
    v2559 = (unsigned __int64)v2558 >> 3;
    do
    {
      v2553 = __ROL8__(*v2550++ ^ v2553, v2548);
      v2558 -= 8;
      --v2559;
    }
    while ( v2559 );
  }
  for ( ; v2558; --v2558 )
  {
    v2560 = *(unsigned __int8 *)v2550;
    v2550 = (_QWORD *)((char *)v2550 + 1);
    v2553 = __ROL8__(v2560 ^ v2553, v2548);
  }
  *((_QWORD *)v2541 + 3) = v2553;
  v2561 = *((unsigned int *)v2533 + 513);
  v2562 = *((unsigned int *)v2533 + 593);
  v5183 = (unsigned int *)v2533;
  v2563 = v2561 + 48;
  if ( (unsigned int)(v2561 + 48) <= *((_DWORD *)v2533 + 665) )
  {
    v2564 = (__int64)v2533;
    *((_DWORD *)v2533 + 513) = v2563;
    v2566 = v2547;
    goto LABEL_3419;
  }
  v2564 = GetRandomizedSafeContext(v2533, v2563, v2562);
  if ( !v2564 )
  {
LABEL_1073:
    v5183 = 0LL;
    goto LABEL_1074;
  }
  v2565 = *((_DWORD *)v2533 + 630);
  v2566 = Timer;
  if ( (v2565 & 2) == 0 )
  {
    v2567 = *((_DWORD *)v2533 + 513);
    v2568 = *((_QWORD *)v2533 + 253);
    v2569 = (v2565 & 0x10000000) != 0 ? *((_DWORD *)v2533 + 593) : 0;
    if ( v2567 >= 8 )
    {
      v2570 = (unsigned __int64)v2567 >> 3;
      do
      {
        *(_QWORD *)v2533 = 0LL;
        v2567 -= 8;
        v2533 += 8;
        --v2570;
      }
      while ( v2570 );
    }
    for ( ; v2567; --v2567 )
      *v2533++ = 0;
    v2571 = *(_DWORD *)(v2564 + 2372);
    *(_DWORD *)(v2564 + 2372) = v2569;
    if ( v2569 == 3 )
    {
      (*(void (__fastcall **)(__int64))(v2564 + 872))(v2568);
    }
    else if ( (*(_DWORD *)(v2564 + 2520) & 0x8000000) != 0 || !v2569 )
    {
      (*(void (__fastcall **)(__int64))(v2564 + 264))(v2568);
    }
    else
    {
      (*(void (__fastcall **)(__int64, _QWORD))(v2564 + 568))(v2568 - 8, *(_QWORD *)(v2568 - 8));
    }
    *(_DWORD *)(v2564 + 2372) = v2571;
  }
  *(_DWORD *)(v2564 + 2520) &= ~2u;
LABEL_3419:
  ++*(_DWORD *)(v2564 + 2092);
  v2572 = v2564 + v2561;
  v2573 = 48;
  v2574 = (_QWORD *)(v2564 + v2561);
  v2575 = 6LL;
  do
  {
    *v2574 = 0LL;
    v2573 -= 8;
    ++v2574;
    --v2575;
  }
  while ( v2575 );
  for ( ; v2573; --v2573 )
  {
    *(_BYTE *)v2574 = 0;
    v2574 = (_QWORD *)((char *)v2574 + 1);
  }
  *(_DWORD *)v2572 = 41;
  *(_QWORD *)(v2572 + 8) = 0LL;
  *(_DWORD *)(v2572 + 16) = 0;
  v2576 = *(_QWORD *)(v2564 + 2104);
  for ( i51 = v2576; ; LODWORD(v2576) = i51 ^ v2576 )
  {
    i51 >>= 31;
    if ( !i51 )
      break;
  }
  v2578 = (unsigned int)sub_140B9EDF0_Offset;
  v2579 = (unsigned int)v5022;
  v2580 = v2566;
  *(_DWORD *)(v2572 + 20) = v2576 & 0x7FFFFFFF;
  *(_DWORD *)(v2572 + 32) = v2578;
  v2581 = (_QWORD *)(v2564 + v2578);
  *(_DWORD *)(v2572 + 36) = v2579;
  *(_DWORD *)(v2564 + 2120) += v2579;
  v2582 = v2564 + v2578 + v2579;
  v2583 = *(_DWORD *)(v2564 + 2100);
  v2584 = v2581;
  v2585 = *(_QWORD *)(v2564 + 2104);
  v2586 = (const char *)(v2564 + v2578);
  Timer = v2580;
  if ( (unsigned __int64)v2581 < v2582 )
  {
    Timer = v2580;
    do
    {
      _mm_prefetch(v2586, 0);
      v2586 += 64;
    }
    while ( (unsigned __int64)v2586 < v2582 );
  }
  v2587 = v2585;
  v2588 = (unsigned int)v2579 >> 7;
  if ( (unsigned int)v2579 >> 7 )
  {
    do
    {
      v2589 = 8LL;
      do
      {
        v2590 = v2584[1] ^ __ROL8__(*v2584 ^ v2587, v2583);
        v2584 += 2;
        v2587 = __ROL8__(v2590, v2583);
        --v2589;
      }
      while ( v2589 );
      v2591 = __ROL8__(v2585 ^ ((char *)v2584 - (char *)v2581), 17) ^ v2585 ^ ((char *)v2584 - (char *)v2581);
      v5342 = (v2591 * (unsigned __int128)0x7010008004002001uLL) >> 64;
      v2583 = ((unsigned __int8)(v5342 ^ v2591) ^ (unsigned __int8)v2583) & 0x3F;
      if ( !v2583 )
        LOBYTE(v2583) = 1;
      --v2588;
    }
    while ( v2588 );
    LOBYTE(v2579) = (_BYTE)v5022;
  }
  v2592 = v2579 & 0x7F;
  if ( v2592 >= 8 )
  {
    v2593 = (unsigned __int64)v2592 >> 3;
    do
    {
      v2587 = __ROL8__(*v2584++ ^ v2587, v2583);
      v2592 -= 8;
      --v2593;
    }
    while ( v2593 );
  }
  for ( ; v2592; --v2592 )
  {
    v2594 = *(unsigned __int8 *)v2584;
    v2584 = (_QWORD *)((char *)v2584 + 1);
    v2587 = __ROL8__(v2594 ^ v2587, v2583);
  }
  *(_QWORD *)(v2572 + 24) = v2587;
  v5183 = (unsigned int *)v2564;
LABEL_3442:
  if ( ((int (__fastcall *)(__int64, __int64, __int64 *, char *))off_140E00638[0])(37LL, 16LL, &v5455, v5118) < 0 )
    v5456 = 0LL;
  v2595 = __rdtsc();
  v2596 = (__ROR8__(v2595, 3) ^ v2595) * (unsigned __int128)0x7010008004002001uLL;
  v5343 = *((_QWORD *)&v2596 + 1);
  v2597 = (*((_QWORD *)&v2596 + 1) ^ (unsigned __int64)v2596) % 0xB;
  if ( (unsigned int)v2597 > 5 )
  {
    if ( (_DWORD)v2597 == 6 )
    {
      v5128 = __ROL4__(1464235086, 24) ^ 6;
      goto LABEL_3466;
    }
    if ( (_DWORD)v2597 != 7 )
    {
      if ( (_DWORD)v2597 == 8 )
      {
        v5126 = __ROL4__(1113876033, 8);
      }
      else
      {
        if ( (_DWORD)v2597 != 9 )
        {
          v2598 = __rdtsc();
          v730 = Timer;
          v5344 = ((__ROR8__(v2598, 3) ^ v2598) * (unsigned __int128)0x7010008004002001uLL) >> 64;
          goto LABEL_3467;
        }
        v5125 = __ROL4__(1480806214, 33) ^ 9;
      }
      goto LABEL_3466;
    }
    v5127 = __ROR4__(1666411585, 7);
LABEL_3454:
    v730 = Timer;
    goto LABEL_3467;
  }
  switch ( (_DWORD)v2597 )
  {
    case 5:
      v5124 = __ROL4__(1766089295, 5);
      goto LABEL_3466;
    case 0:
      v5123 = __ROL4__(1665295171, 6);
      goto LABEL_3466;
    case 1:
      v5122 = __ROR4__(1700422467, 1);
      goto LABEL_3454;
    case 2:
      v5121 = __ROL4__(1634559043, 2);
LABEL_3466:
      v730 = Timer;
      goto LABEL_3467;
  }
  v730 = Timer;
  if ( (_DWORD)v2597 == 3 )
    v5120 = __ROL4__(1920421956, 15) ^ 3;
  else
    v5119 = __ROR4__(1886800198, v2597);
LABEL_3467:
  v2599 = (_QWORD *)ExAllocatePool2(0x40uLL);
  HalExtensionList = v2599;
  if ( !v2599 )
    goto LABEL_1075;
  v2600 = __rdtsc();
  v2601 = (__ROR8__(v2600, 3) ^ v2600) * (unsigned __int128)0x7010008004002001uLL;
  v5345 = *((_QWORD *)&v2601 + 1);
  v2602 = ((unsigned __int64)v2601 ^ *((_QWORD *)&v2601 + 1)) % 0xB;
  if ( (unsigned int)v2602 > 5 )
  {
    if ( (_DWORD)v2602 == 6 )
    {
      v5138 = __ROL4__(1464235086, 24) ^ 6;
      goto LABEL_3490;
    }
    if ( (_DWORD)v2602 != 7 )
    {
      if ( (_DWORD)v2602 == 8 )
      {
        v5136 = __ROL4__(1113876033, 8);
      }
      else
      {
        if ( (_DWORD)v2602 != 9 )
        {
          v2603 = __rdtsc();
          v5346 = ((__ROR8__(v2603, 3) ^ v2603) * (unsigned __int128)0x7010008004002001uLL) >> 64;
          goto LABEL_3491;
        }
        v5135 = __ROL4__(1480806214, 33) ^ 9;
      }
      goto LABEL_3490;
    }
    v5137 = __ROR4__(1666411585, 7);
LABEL_3478:
    Timer = v730;
    goto LABEL_3491;
  }
  switch ( (_DWORD)v2602 )
  {
    case 5:
      v5134 = __ROL4__(1766089295, 5);
      goto LABEL_3490;
    case 0:
      v5133 = __ROL4__(1665295171, 6);
      goto LABEL_3490;
    case 1:
      v5132 = __ROR4__(1700422467, 1);
      goto LABEL_3478;
    case 2:
      v5131 = __ROL4__(1634559043, 2);
LABEL_3490:
      Timer = v730;
      goto LABEL_3491;
  }
  Timer = v730;
  if ( (_DWORD)v2602 == 3 )
    v5130 = __ROL4__(1920421956, 15) ^ 3;
  else
    v5129 = __ROR4__(1886800198, v2602);
LABEL_3491:
  v2604 = (_DWORD *)ExAllocatePool2(0x40uLL);
  v5026 = v2604;
  v2605 = v2604;
  if ( !v2604 )
  {
    ExFreePool(v2599);
    goto LABEL_1074;
  }
  v2606 = dword_1410065C8;
  v2607 = v5105;
  v2608 = 1;
  *v2599 = (unsigned int)dword_1410065C8 - 0x88000000000LL;
  *v2604 = 4096 - v2606;
  if ( (v2607 & 2) == 0 )
  {
    v2608 = 2;
    v2599[1] = &InitSafeBootMode;
    v2604[1] = 4;
  }
  v2609 = v2608;
  v2610 = v2608 + 1;
  v2599[v2609] = &RtlpUnwindHistoryTable;
  v2605[v2609] = 216;
  v2599[v2610] = &xmmword_141200030;
  v2605[v2610] = 24;
  v2611 = (unsigned int)(v2610 + 1);
  LODWORD(sub_140B9EDF0_Offset) = v2611;
  if ( (v2607 & 6) != 0 )
  {
    v5348[0] = 0LL;
    v5347 = 0LL;
  }
  else
  {
    MmQueryApiSetSchema(v5348, &v5347);
    v2607 = v5105;
    v2599[v2611] = v5348[0];
    v2605[v2611] = 8;
    v2612 = (unsigned int)(v2611 + 1);
    v2599[v2612] = v5347;
    v2613 = v5183;
    v2605[v2612] = 8;
    v2611 = (unsigned int)(v2612 + 1);
    LODWORD(sub_140B9EDF0_Offset) = v2611;
    if ( (v2613[630] & 0x20000000) == 0 )
    {
      v2599[v2611] = *(_QWORD *)v5348[0];
      v2605[v2611] = *v5347;
      v2611 = (unsigned int)(v2611 + 1);
      LODWORD(sub_140B9EDF0_Offset) = v2611;
    }
  }
  v2614 = 0;
  if ( v5456 )
  {
    v2615 = 0LL;
    do
    {
      v2616 = 2 * v2615;
      ++v2614;
      v2599[v2611] = *(_QWORD *)(v5455 + 8 * v2616);
      v2605[v2611] = *(_DWORD *)(v5455 + 8 * v2616 + 8);
      v2611 = (unsigned int)(v2611 + 1);
      v2615 = v2614;
    }
    while ( v2614 < v5456 );
    LODWORD(sub_140B9EDF0_Offset) = v2611;
  }
  if ( (v2607 & 6) == 0 )
  {
    v2617 = (_QWORD *)PspPicoProviderRanges;
    if ( PspPicoProviderRanges )
    {
      v2618 = 0;
      if ( *(_QWORD *)(PspPicoProviderRanges + 8) )
      {
        v2619 = 0LL;
        do
        {
          v2620 = 2 * v2619;
          ++v2618;
          v2599[v2611] = *(_QWORD *)(*v2617 + 8 * v2620);
          v2605[v2611] = *(_DWORD *)(*(_QWORD *)PspPicoProviderRanges + 8 * v2620 + 8);
          v2611 = (unsigned int)(v2611 + 1);
          v2617 = (_QWORD *)PspPicoProviderRanges;
          v2619 = v2618;
        }
        while ( (unsigned __int64)v2618 < *(_QWORD *)(PspPicoProviderRanges + 8) );
        LODWORD(sub_140B9EDF0_Offset) = v2611;
      }
    }
    v2621 = (_QWORD *)__24;
    if ( __24 )
    {
      v2622 = 0;
      if ( *(_QWORD *)(__24 + 8) )
      {
        v2623 = 0LL;
        do
        {
          v2624 = 2 * v2623;
          ++v2622;
          v2599[v2611] = *(_QWORD *)(*v2621 + 8 * v2624);
          v2605[v2611] = *(_DWORD *)(*(_QWORD *)__24 + 8 * v2624 + 8);
          v2611 = (unsigned int)(v2611 + 1);
          v2621 = (_QWORD *)__24;
          v2623 = v2622;
        }
        while ( (unsigned __int64)v2622 < *(_QWORD *)(__24 + 8) );
        LODWORD(sub_140B9EDF0_Offset) = v2611;
      }
    }
    v2625 = 0;
    if ( qword_140E08550 )
    {
      v2626 = 0LL;
      do
      {
        v2627 = 2 * v2626;
        ++v2625;
        v2599[v2611] = PspKernelRanges[v2627];
        v2605[v2611] = (unsigned int)PspKernelRanges[v2627 + 1];
        v2611 = (unsigned int)(v2611 + 1);
        v2626 = v2625;
      }
      while ( v2625 < (unsigned __int64)qword_140E08550 );
      LODWORD(sub_140B9EDF0_Offset) = v2611;
    }
  }
  v2628 = v5183;
  if ( (*(_BYTE *)((v5183[608] ^ 0xBC2A27DBLL) - 0x88000000000LL) & 2) != 0 )
    v5183[513] += 4096;
  v2630 = 32;
  v2631 = *((unsigned int *)v2628 + 513);
  v2632 = *((unsigned int *)v2628 + 593);
  LODWORD(v5022) = *((_DWORD *)v2628 + 534);
  v2629 = (int)v5022;
  if ( (_DWORD)v5022 != 7 )
    v2630 = 0;
  v2633 = v2631 + 48 * v2611;
  LODWORD(sub_140B9FDF0_Offset) = v2630;
  if ( v2633 <= *((_DWORD *)v2628 + 665) )
  {
    v2634 = (__int64)v2628;
    *((_DWORD *)v2628 + 513) = v2633;
    goto LABEL_3539;
  }
  v2634 = GetRandomizedSafeContext(v2628, v2633, v2632);
  if ( !v2634 )
    goto LABEL_3540;
  v2635 = *((_DWORD *)v2628 + 630);
  if ( (v2635 & 2) == 0 )
  {
    v2636 = *((_DWORD *)v2628 + 513);
    v2637 = *((_QWORD *)v2628 + 253);
    v2638 = (v2635 & 0x10000000) != 0 ? *((_DWORD *)v2628 + 593) : 0;
    if ( v2636 >= 8 )
    {
      v2639 = (unsigned __int64)v2636 >> 3;
      do
      {
        *(_QWORD *)v2628 = 0LL;
        v2636 -= 8;
        v2628 += 8;
        --v2639;
      }
      while ( v2639 );
    }
    for ( ; v2636; --v2636 )
      *v2628++ = 0;
    v2640 = *(_DWORD *)(v2634 + 2372);
    v2641 = Timer;
    *(_DWORD *)(v2634 + 2372) = v2638;
    if ( v2638 == 3 )
    {
      (*(void (__fastcall **)(__int64))(v2634 + 872))(v2637);
    }
    else if ( (*(_DWORD *)(v2634 + 2520) & 0x8000000) != 0 || (Timer = v2641, !v2638) )
    {
      (*(void (__fastcall **)(__int64))(v2634 + 264))(v2637);
    }
    else
    {
      (*(void (__fastcall **)(__int64, _QWORD))(v2634 + 568))(v2637 - 8, *(_QWORD *)(v2637 - 8));
      Timer = v2641;
    }
    *(_DWORD *)(v2634 + 2372) = v2640;
    v2605 = (unsigned int *)v5026;
  }
  *(_DWORD *)(v2634 + 2520) &= ~2u;
  v2630 = sub_140B9FDF0_Offset;
  v2629 = (int)v5022;
LABEL_3539:
  *(_DWORD *)(v2634 + 2092) += v2611;
  v2642 = v2634 + v2631;
  v5027 = v2634 + v2631;
  if ( v2634 )
  {
    if ( (_DWORD)v2611 )
    {
      v2644 = HalExtensionList;
      v5028 = v2634 + 2104;
      v2645 = (int *)(v2634 + 2100);
      v2646 = (_DWORD *)(v2634 + 2120);
      v5032 = (unsigned int)v2611;
      v2647 = v2634 + v2631;
      i21 = v2634 + 2100;
      v2648 = v2605;
      v5031 = v2634 + 2120;
      v5035 = (ULONG_PTR)HalExtensionList;
      v5030 = (ULONG_PTR)v2605;
      do
      {
        v2649 = *v2648;
        v2650 = 48;
        v2651 = (_QWORD *)*v2644;
        v2652 = (_QWORD *)v2647;
        v2653 = 6LL;
        do
        {
          *v2652 = 0LL;
          v2650 -= 8;
          ++v2652;
          --v2653;
        }
        while ( v2653 );
        for ( ; v2650; --v2650 )
        {
          *(_BYTE *)v2652 = 0;
          v2652 = (_QWORD *)((char *)v2652 + 1);
        }
        *(_DWORD *)v2647 = v2630;
        *(_QWORD *)(v2647 + 8) = v2651;
        if ( v2629 == 7 && (_DWORD)v2649 )
        {
          sub_1404D2D9C(v2634, v2651, (unsigned int)v2649, v2647 + 24);
          v2644 = (_QWORD *)v5035;
        }
        v2654 = (__int64 *)v5028;
        *(_DWORD *)(v2647 + 16) = v2649;
        *v2646 += v2649;
        v2655 = *v2645;
        v2656 = v2651;
        v2657 = *v2654;
        v2658 = (const char *)v2651;
        if ( v2651 < (_QWORD *)((char *)v2651 + v2649) )
        {
          do
          {
            _mm_prefetch(v2658, 0);
            v2658 += 64;
          }
          while ( v2658 < (const char *)v2651 + v2649 );
        }
        v2659 = v2657;
        v2660 = (unsigned int)v2649 >> 7;
        if ( (unsigned int)v2649 >> 7 )
        {
          do
          {
            v2661 = 8LL;
            do
            {
              v2662 = v2656[1] ^ __ROL8__(*v2656 ^ v2659, v2655);
              v2656 += 2;
              v2659 = __ROL8__(v2662, v2655);
              --v2661;
            }
            while ( v2661 );
            v2663 = (__ROL8__(v2657 ^ ((char *)v2656 - (char *)v2651), 17) ^ v2657 ^ ((char *)v2656 - (char *)v2651))
                  * (unsigned __int128)0x7010008004002001uLL;
            v5348[1] = *((_QWORD *)&v2663 + 1);
            v2655 = (BYTE8(v2663) ^ (unsigned __int8)(v2663 ^ v2655)) & 0x3F;
            if ( !v2655 )
              LOBYTE(v2655) = 1;
            --v2660;
          }
          while ( v2660 );
          v2644 = (_QWORD *)v5035;
          v2648 = (unsigned int *)v5030;
        }
        v2664 = v2649 & 0x7F;
        if ( v2664 >= 8 )
        {
          v2665 = (unsigned __int64)(v2649 & 0x7F) >> 3;
          do
          {
            v2659 = __ROL8__(*v2656++ ^ v2659, v2655);
            v2664 -= 8;
            --v2665;
          }
          while ( v2665 );
        }
        for ( ; v2664; --v2664 )
        {
          v2666 = *(unsigned __int8 *)v2656;
          v2656 = (_QWORD *)((char *)v2656 + 1);
          v2659 = __ROL8__(v2666 ^ v2659, v2655);
        }
        for ( i52 = v2659; ; LODWORD(v2659) = i52 ^ v2659 )
        {
          i52 >>= 31;
          if ( !i52 )
            break;
        }
        v2645 = (int *)i21;
        v2630 = sub_140B9FDF0_Offset;
        ++v2648;
        v2629 = (int)v5022;
        ++v2644;
        *(_DWORD *)(v2647 + 20) = v2659 & 0x7FFFFFFF;
        v2647 += 48LL;
        v2646 = (_DWORD *)v5031;
        v5030 = (ULONG_PTR)v2648;
        v5035 = (ULONG_PTR)v2644;
        *(_DWORD *)v5031 += v2649;
        --v5032;
      }
      while ( v5032 );
      LODWORD(v2611) = sub_140B9EDF0_Offset;
      v2642 = v5027;
    }
    v2643 = (unsigned int *)v2634;
    if ( (_DWORD)v5022 == 7 && (_DWORD)v2611 )
    {
      do
      {
        *(_DWORD *)(v2642 + 40) |= 1u;
        v2642 += 48LL;
        LODWORD(v2611) = v2611 - 1;
      }
      while ( (_DWORD)v2611 );
    }
  }
  else
  {
LABEL_3540:
    v2643 = 0LL;
  }
  v5183 = v2643;
  ExFreePool(v5026);
  ExFreePool(HalExtensionList);
  if ( !v2643 )
    goto LABEL_1074;
  if ( (v2643[630] & 0x20000000) == 0 )
    goto LABEL_3618;
  v2669 = v5348[0];
  if ( !v5348[0] )
    goto LABEL_3618;
  v2672 = 32;
  v2673 = v2643[534];
  v2674 = v2643[513];
  v2675 = *(_QWORD **)v5348[0];
  v2676 = *v5347;
  v2677 = v2643[593];
  if ( v2673 != 7 )
    v2672 = 0;
  v2678 = v2674 + 48;
  LODWORD(sub_140B9EDF0_Offset) = v2643[534];
  LODWORD(v5022) = v2672;
  if ( (int)v2674 + 48 <= v2643[665] )
  {
    v2679 = (__int64)v2643;
    v2643[513] = v2678;
    goto LABEL_3594;
  }
  v2679 = GetRandomizedSafeContext(v2643, v2678, v2677);
  if ( !v2679 )
  {
LABEL_3363:
    v730 = Timer;
LABEL_3364:
    v5183 = 0LL;
    Timer = v730;
    goto LABEL_1075;
  }
  v2680 = v2643[630];
  if ( (v2680 & 2) == 0 )
  {
    v2681 = v2643[513];
    v2682 = *((_QWORD *)v2643 + 253);
    v2683 = (v2680 & 0x10000000) != 0 ? v2643[593] : 0;
    if ( v2681 >= 8 )
    {
      v2684 = (unsigned __int64)v2681 >> 3;
      do
      {
        *(_QWORD *)v2643 = 0LL;
        v2681 -= 8;
        v2643 += 2;
        --v2684;
      }
      while ( v2684 );
    }
    for ( ; v2681; --v2681 )
    {
      *(_BYTE *)v2643 = 0;
      v2643 = (unsigned int *)((char *)v2643 + 1);
    }
    v2685 = *(_DWORD *)(v2679 + 2372);
    v2686 = Timer;
    *(_DWORD *)(v2679 + 2372) = v2683;
    if ( v2683 == 3 )
    {
      (*(void (__fastcall **)(__int64))(v2679 + 872))(v2682);
    }
    else if ( (*(_DWORD *)(v2679 + 2520) & 0x8000000) != 0 || (Timer = v2686, !v2683) )
    {
      (*(void (__fastcall **)(__int64))(v2679 + 264))(v2682);
    }
    else
    {
      (*(void (__fastcall **)(__int64, _QWORD))(v2679 + 568))(v2682 - 8, *(_QWORD *)(v2682 - 8));
      Timer = v2686;
    }
    *(_DWORD *)(v2679 + 2372) = v2685;
  }
  *(_DWORD *)(v2679 + 2520) &= ~2u;
  v2672 = (int)v5022;
  v2673 = sub_140B9EDF0_Offset;
LABEL_3594:
  ++*(_DWORD *)(v2679 + 2092);
  v2687 = v2679 + v2674;
  v2688 = 48;
  v2643 = (unsigned int *)v2679;
  v2689 = (_QWORD *)(v2679 + v2674);
  v2690 = 6LL;
  do
  {
    *v2689 = 0LL;
    v2688 -= 8;
    ++v2689;
    --v2690;
  }
  while ( v2690 );
  for ( ; v2688; --v2688 )
  {
    *(_BYTE *)v2689 = 0;
    v2689 = (_QWORD *)((char *)v2689 + 1);
  }
  *(_DWORD *)v2687 = v2672;
  *(_QWORD *)(v2687 + 8) = v2675;
  if ( v2673 == 7 && (_DWORD)v2676 )
    sub_1404D2D9C(v2679, v2675, (unsigned int)v2676, v2687 + 24);
  *(_DWORD *)(v2687 + 16) = v2676;
  v2669 = (unsigned __int64)v2675 + v2676;
  *(_DWORD *)(v2679 + 2120) += v2676;
  v2670 = v2675;
  v2671 = *(unsigned int *)(v2679 + 2100);
  v2691 = (const char *)v2675;
  v2692 = *(_QWORD *)(v2679 + 2104);
  if ( v2675 < (_QWORD *)((char *)v2675 + v2676) )
  {
    do
    {
      _mm_prefetch(v2691, 0);
      v2691 += 64;
    }
    while ( (unsigned __int64)v2691 < v2669 );
  }
  v2693 = *(_QWORD *)(v2679 + 2104);
  for ( i53 = (unsigned int)v2676 >> 7; i53; --i53 )
  {
    v2695 = 8LL;
    do
    {
      v2696 = v2670[1] ^ __ROL8__(*v2670 ^ v2693, v2671);
      v2670 += 2;
      v2693 = __ROL8__(v2696, v2671);
      --v2695;
    }
    while ( v2695 );
    v2669 = __ROL8__(v2692 ^ ((char *)v2670 - (char *)v2675), 17) ^ v2692 ^ ((char *)v2670 - (char *)v2675);
    v5349 = (v2669 * (unsigned __int128)0x7010008004002001uLL) >> 64;
    v2671 = ((unsigned __int8)(v5349 ^ v2669) ^ (unsigned __int8)v2671) & 0x3F;
    if ( !(_DWORD)v2671 )
      v2671 = 1LL;
  }
  v2668 = v2676 & 0x7F;
  if ( (unsigned int)v2668 >= 8 )
  {
    v2697 = (unsigned __int64)(v2676 & 0x7F) >> 3;
    do
    {
      v2669 = (unsigned int)v2671;
      v2693 = __ROL8__(*v2670++ ^ v2693, v2671);
      v2668 = (unsigned int)(v2668 - 8);
      --v2697;
    }
    while ( v2697 );
  }
  if ( (_DWORD)v2668 )
  {
    do
    {
      v2698 = *(unsigned __int8 *)v2670;
      v2669 = (unsigned int)v2671;
      v2670 = (_QWORD *)((char *)v2670 + 1);
      v2693 = __ROL8__(v2698 ^ v2693, v2671);
      v4393 = (_DWORD)v2668 == 1;
      v2668 = (unsigned int)(v2668 - 1);
    }
    while ( !v4393 );
  }
  for ( i54 = v2693; ; LODWORD(v2693) = i54 ^ v2693 )
  {
    i54 >>= 31;
    if ( !i54 )
      break;
  }
  v5183 = v2643;
  *(_DWORD *)(v2687 + 20) = v2693 & 0x7FFFFFFF;
  v2643[530] += v2676;
LABEL_3618:
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  v5457[0] = 8;
  v5517 = &HvlpHypercallCodeVa;
  LODWORD(sub_140B9EDF0_Offset) = -1;
  v2700 = 1;
  if ( !HvlpHypercallCodeVa )
  {
    v5518 = HvlpInterruptCallback;
    v2716 = dword_1410065F8;
    goto LABEL_3633;
  }
  if ( v2643[534] == 7
    || (v2643[630] & 0x40000000) == 0 && !(unsigned __int8)HvlIsHypercallOverlayLocked(v2669, v2668, v2670, v2671) )
  {
    _RAX = 0x40000000LL;
    v5518 = (__int64 (__fastcall **)())HvlpHypercallCodeVa;
    __asm { cpuid }
    v5459 = __PAIR64__(_RCX, _RBX);
    v5458 = _RAX;
    v5460 = _RDX;
    if ( __PAIR64__(_RCX, _RBX) != 0x666F736F7263694DLL )
      goto LABEL_3630;
    if ( (_DWORD)_RDX != 1984438388 )
      goto LABEL_3630;
    if ( (unsigned int)_RAX < 0x40000002 )
      goto LABEL_3630;
    _RAX = 1073741825LL;
    __asm { cpuid }
    v5458 = _RAX;
    v5459 = __PAIR64__(_RCX, _RBX);
    v5460 = _RDX;
    if ( (_DWORD)_RAX != 824407624 )
      goto LABEL_3630;
    _RAX = 1073741826LL;
    __asm { cpuid }
    v5458 = _RAX;
    v5459 = __PAIR64__(_RCX, _RBX);
    v5460 = _RDX;
    if ( (_RBX & 0xFFFF0000) != 0x60000 || (v2716 = 4, (unsigned __int16)_RBX != 1) )
LABEL_3630:
      v2716 = 4096;
    LODWORD(sub_140B9EDF0_Offset) = 1;
LABEL_3633:
    v2700 = 2;
    v5457[1] = v2716;
  }
  v2717 = v2643[534];
  v2718 = v2643[513];
  LODWORD(v2719) = 32;
  v2720 = v2643[593];
  v2721 = v2700;
  v2722 = v2700 + 1;
  LODWORD(v5022) = v2722;
  LODWORD(sub_140B9FDF0_Offset) = v2717;
  (&v5517)[v2721] = (PVOID *)&HvlpVsmVtlCallVa;
  v5457[v2721] = 8;
  if ( v2717 != 7 )
    LODWORD(v2719) = 0;
  v2723 = v2718 + 48 * v2722;
  LODWORD(v5020) = v2719;
  if ( v2723 <= v2643[665] )
  {
    v2724 = v2643;
    HalExtensionList = v2643;
    v2643[513] = v2723;
    goto LABEL_3653;
  }
  v2724 = (unsigned int *)GetRandomizedSafeContext(v2643, v2723, v2720);
  HalExtensionList = v2724;
  if ( !v2724 )
  {
LABEL_3654:
    v730 = Timer;
    v731 = 0LL;
    goto LABEL_1076;
  }
  v2725 = v2643[630];
  if ( (v2725 & 2) == 0 )
  {
    v2726 = v2643[513];
    v2727 = *((_QWORD *)v2643 + 253);
    v2728 = (v2725 & 0x10000000) != 0 ? v2643[593] : 0;
    if ( v2726 >= 8 )
    {
      v2729 = (unsigned __int64)v2726 >> 3;
      do
      {
        *(_QWORD *)v2643 = 0LL;
        v2726 -= 8;
        v2643 += 2;
        --v2729;
      }
      while ( v2729 );
    }
    for ( ; v2726; --v2726 )
    {
      *(_BYTE *)v2643 = 0;
      v2643 = (unsigned int *)((char *)v2643 + 1);
    }
    v2730 = v2724[593];
    v2731 = Timer;
    v2724[593] = v2728;
    if ( v2728 == 3 )
    {
      (*((void (__fastcall **)(__int64))v2724 + 109))(v2727);
    }
    else if ( (v2724[630] & 0x8000000) != 0 || (Timer = v2731, !v2728) )
    {
      (*((void (__fastcall **)(__int64))v2724 + 33))(v2727);
    }
    else
    {
      (*((void (__fastcall **)(__int64, _QWORD))v2724 + 71))(v2727 - 8, *(_QWORD *)(v2727 - 8));
      Timer = v2731;
    }
    v2722 = (unsigned int)v5022;
    v2724[593] = v2730;
  }
  v2724[630] &= ~2u;
  LODWORD(v2719) = v5020;
  v2717 = sub_140B9FDF0_Offset;
LABEL_3653:
  v2724[523] += v2722;
  v5026 = (char *)v2724 + v2718;
  v2732 = &v5517;
  v5027 = (size_t)&v5517;
  v2733 = v5457;
  i21 = v2722;
  v2734 = (char *)v2724 + v2718;
  do
  {
    v2735 = *v2733;
    v2736 = 48;
    v2737 = *v2732;
    v2738 = v2734;
    v2739 = 6LL;
    do
    {
      *v2738 = 0LL;
      v2736 -= 8;
      ++v2738;
      --v2739;
    }
    while ( v2739 );
    for ( ; v2736; --v2736 )
    {
      *(_BYTE *)v2738 = 0;
      v2738 = (_QWORD *)((char *)v2738 + 1);
    }
    *(_DWORD *)v2734 = v2719;
    *((_QWORD *)v2734 + 1) = v2737;
    if ( v2717 == 7 && (_DWORD)v2735 )
    {
      sub_1404D2D9C(v2724, v2737, (unsigned int)v2735, v2734 + 24);
      v2732 = (PVOID **)v5027;
    }
    *((_DWORD *)v2734 + 4) = v2735;
    v2740 = (unsigned __int64)v2737 + v2735;
    v2724[530] += v2735;
    v2741 = v2737;
    v2742 = v2724[525];
    v2743 = (const char *)v2737;
    v2744 = *((_QWORD *)v2724 + 263);
    if ( v2737 < (PVOID *)((char *)v2737 + v2735) )
    {
      do
      {
        _mm_prefetch(v2743, 0);
        v2743 += 64;
      }
      while ( (unsigned __int64)v2743 < v2740 );
    }
    v2745 = *((_QWORD *)v2724 + 263);
    v2746 = (unsigned int)v2735 >> 7;
    if ( (unsigned int)v2735 >> 7 )
    {
      do
      {
        v2747 = 8LL;
        do
        {
          v2748 = v2741[1] ^ __ROL8__(*v2741 ^ v2745, v2742);
          v2741 += 2;
          v2745 = __ROL8__(v2748, v2742);
          --v2747;
        }
        while ( v2747 );
        v2740 = __ROL8__(v2744 ^ ((char *)v2741 - (char *)v2737), 17) ^ v2744 ^ ((char *)v2741 - (char *)v2737);
        v5350 = (v2740 * (unsigned __int128)0x7010008004002001uLL) >> 64;
        v2742 = ((unsigned __int8)v5350 ^ (unsigned __int8)(v2740 ^ v2742)) & 0x3F;
        if ( !v2742 )
          v2742 = 1;
        --v2746;
      }
      while ( v2746 );
      v2724 = (unsigned int *)HalExtensionList;
      v2732 = (PVOID **)v5027;
    }
    v2749 = v2735 & 0x7F;
    if ( v2749 >= 8 )
    {
      v2750 = (unsigned __int64)(v2735 & 0x7F) >> 3;
      do
      {
        v2740 = v2742;
        v2745 = __ROL8__(*v2741++ ^ v2745, v2742);
        v2749 -= 8;
        --v2750;
      }
      while ( v2750 );
    }
    for ( ; v2749; --v2749 )
    {
      v2751 = *(unsigned __int8 *)v2741;
      v2740 = v2742;
      v2741 = (_QWORD *)((char *)v2741 + 1);
      v2745 = __ROL8__(v2751 ^ v2745, v2742);
    }
    v2752 = v2745 >> 31;
    v2753 = 0LL;
    while ( v2752 )
    {
      LODWORD(v2745) = v2752 ^ v2745;
      v2752 >>= 31;
    }
    v2719 = (unsigned int)v5020;
    v2717 = sub_140B9FDF0_Offset;
    *((_DWORD *)v2734 + 5) = v2745 & 0x7FFFFFFF;
    ++v2732;
    v2724[530] += v2735;
    ++v2733;
    v5027 = (size_t)v2732;
    v2734 += 48;
    --i21;
  }
  while ( i21 );
  v730 = Timer;
  v2754 = v5026;
  if ( v2717 == 7 )
  {
    LODWORD(v2740) = (_DWORD)v5022;
    v2755 = v5026;
    do
    {
      v2755[10] |= 1u;
      v2755 += 12;
      v2740 = (unsigned int)(v2740 - 1);
    }
    while ( (_DWORD)v2740 );
  }
  if ( (_DWORD)sub_140B9EDF0_Offset != -1 )
  {
    v2740 = 6LL * (unsigned int)sub_140B9EDF0_Offset;
    if ( v2754[12 * (unsigned int)sub_140B9EDF0_Offset] == 32 )
      v2754[12 * (unsigned int)sub_140B9EDF0_Offset + 10] |= 4u;
  }
  v5183 = v2724;
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  v2756 = v5105;
  if ( (v5105 & 2) != 0 )
    goto LABEL_3796;
  v2757 = __rdtsc();
  v2758 = (__ROR8__(v2757, 3) ^ v2757) * (unsigned __int128)0x7010008004002001uLL;
  v5351 = *((_QWORD *)&v2758 + 1);
  v2759 = ((unsigned __int64)v2758 ^ *((_QWORD *)&v2758 + 1)) % 0xB;
  if ( (unsigned int)v2759 > 5 )
  {
    switch ( (_DWORD)v2759 )
    {
      case 6:
        v5148 = __ROL4__(1464235086, 24) ^ 6;
        break;
      case 7:
        v5147 = __ROR4__(1666411585, 7);
        goto LABEL_3700;
      case 8:
        v5146 = __ROL4__(1113876033, 8);
        goto LABEL_3698;
      case 9:
        v5145 = __ROL4__(1480806214, 33) ^ 9;
        break;
      default:
        v2760 = __rdtsc();
        Timer = v730;
        v5352 = ((__ROR8__(v2760, 3) ^ v2760) * (unsigned __int128)0x7010008004002001uLL) >> 64;
        goto LABEL_3714;
    }
LABEL_3712:
    Timer = v730;
    goto LABEL_3713;
  }
  switch ( (_DWORD)v2759 )
  {
    case 5:
      v5144 = __ROL4__(1766089295, 5);
      goto LABEL_3698;
    case 0:
      v5143 = __ROL4__(1665295171, 6);
      goto LABEL_3712;
    case 1:
      v5142 = __ROR4__(1700422467, 1);
LABEL_3700:
      Timer = v730;
      goto LABEL_3713;
    case 2:
      v5141 = __ROL4__(1634559043, 2);
LABEL_3698:
      Timer = v730;
      goto LABEL_3713;
  }
  Timer = v730;
  if ( (_DWORD)v2759 == 3 )
    v5140 = __ROL4__(1920421956, 15) ^ 3;
  else
    v5139 = __ROR4__(1886800198, v2759);
LABEL_3713:
  v2724 = v5183;
LABEL_3714:
  v2761 = (_QWORD *)ExAllocatePool2(0x40uLL);
  HalExtensionList = v2761;
  if ( !v2761 )
  {
LABEL_1075:
    v731 = 0LL;
    goto LABEL_1076;
  }
  v2762 = __rdtsc();
  v2763 = (__ROR8__(v2762, 3) ^ v2762) * (unsigned __int128)0x7010008004002001uLL;
  v5353 = *((_QWORD *)&v2763 + 1);
  v2764 = ((unsigned __int64)v2763 ^ *((_QWORD *)&v2763 + 1)) % 0xB;
  if ( (unsigned int)v2764 > 5 )
  {
    switch ( (_DWORD)v2764 )
    {
      case 6:
        v5158 = __ROL4__(1464235086, 24) ^ 6;
        break;
      case 7:
        v5157 = __ROR4__(1666411585, 7);
        goto LABEL_3726;
      case 8:
        v5156 = __ROL4__(1113876033, 8);
        goto LABEL_3724;
      case 9:
        v5155 = __ROL4__(1480806214, 33) ^ 9;
        break;
      default:
        v2765 = __rdtsc();
        v5354 = ((__ROR8__(v2765, 3) ^ v2765) * (unsigned __int128)0x7010008004002001uLL) >> 64;
        goto LABEL_3740;
    }
LABEL_3738:
    Timer = v730;
    goto LABEL_3739;
  }
  switch ( (_DWORD)v2764 )
  {
    case 5:
      v5154 = __ROL4__(1766089295, 5);
      goto LABEL_3724;
    case 0:
      v5153 = __ROL4__(1665295171, 6);
      goto LABEL_3738;
    case 1:
      v5152 = __ROR4__(1700422467, 1);
LABEL_3726:
      Timer = v730;
      goto LABEL_3739;
    case 2:
      v5151 = __ROL4__(1634559043, 2);
LABEL_3724:
      Timer = v730;
      goto LABEL_3739;
  }
  Timer = v730;
  if ( (_DWORD)v2764 == 3 )
    v5150 = __ROL4__(1920421956, 15) ^ 3;
  else
    v5149 = __ROR4__(1886800198, v2764);
LABEL_3739:
  v2724 = v5183;
LABEL_3740:
  v2766 = (_DWORD *)ExAllocatePool2(0x40uLL);
  v5026 = v2766;
  v2767 = v2766;
  if ( !v2766 )
  {
    ExFreePool(v2761);
    goto LABEL_1075;
  }
  v2768 = 4;
  *v2761 = &SeCiCallbacks;
  *v2766 = dword_1410065D0;
  v2761[1] = &SeMsMinTCBList;
  v2766[1] = dword_141006600;
  v2761[2] = RtlProtectedAccess;
  v2766[2] = dword_141006608;
  v2761[3] = &SeProtectedMapping;
  v2766[3] = dword_141006610;
  if ( (v5105 & 4) == 0 )
  {
    v2761[4] = SeSecureBootPolicyBlobHeader;
    v2768 = 7;
    v2766[4] = SeSecureBootPolicyBlobHeaderSize;
    v2761[5] = &SeILSigningPolicy;
    v2766[5] = 1;
    v2761[6] = &SeCiDebugOptions;
    v2766[6] = 4;
    for ( i55 = 0; i55 < SeCiStateElementCount; v2766[v2770] = *(_DWORD *)(SeCiStateElements + 8 * v2771 + 8) )
    {
      v2770 = v2768++;
      v2771 = i55++;
      v2771 *= 2LL;
      v2761[v2770] = *(_QWORD *)(SeCiStateElements + 8 * v2771);
    }
  }
  v2772 = v2724[534];
  v2773 = 32;
  v2774 = v2724[513];
  v2775 = v2724[593];
  if ( v2772 != 7 )
    v2773 = 0;
  LODWORD(sub_140B9EDF0_Offset) = v2724[534];
  LODWORD(v5022) = v2773;
  v2776 = v2774 + 48 * v2768;
  if ( v2776 <= v2724[665] )
  {
    v2777 = (__int64)v2724;
    v2724[513] = v2776;
    goto LABEL_3764;
  }
  v2777 = GetRandomizedSafeContext(v2724, v2776, v2775);
  if ( !v2777 )
    goto LABEL_3765;
  v2778 = v2724[630];
  if ( (v2778 & 2) == 0 )
  {
    v2779 = v2724[513];
    v2780 = *((_QWORD *)v2724 + 253);
    v2781 = (v2778 & 0x10000000) != 0 ? v2724[593] : 0;
    if ( v2779 >= 8 )
    {
      v2782 = (unsigned __int64)v2779 >> 3;
      do
      {
        *(_QWORD *)v2724 = 0LL;
        v2779 -= 8;
        v2724 += 2;
        --v2782;
      }
      while ( v2782 );
    }
    for ( ; v2779; --v2779 )
    {
      *(_BYTE *)v2724 = 0;
      v2724 = (unsigned int *)((char *)v2724 + 1);
    }
    v2783 = *(_DWORD *)(v2777 + 2372);
    v2784 = Timer;
    *(_DWORD *)(v2777 + 2372) = v2781;
    if ( v2781 == 3 )
    {
      (*(void (__fastcall **)(__int64))(v2777 + 872))(v2780);
    }
    else if ( (*(_DWORD *)(v2777 + 2520) & 0x8000000) != 0 || (Timer = v2784, !v2781) )
    {
      (*(void (__fastcall **)(__int64))(v2777 + 264))(v2780);
    }
    else
    {
      (*(void (__fastcall **)(__int64, _QWORD))(v2777 + 568))(v2780 - 8, *(_QWORD *)(v2780 - 8));
      Timer = v2784;
    }
    *(_DWORD *)(v2777 + 2372) = v2783;
    v2761 = HalExtensionList;
  }
  *(_DWORD *)(v2777 + 2520) &= ~2u;
  v2773 = (int)v5022;
  v2772 = sub_140B9EDF0_Offset;
LABEL_3764:
  *(_DWORD *)(v2777 + 2092) += v2768;
  v2785 = v2777 + v2774;
  v2724 = (unsigned int *)v2777;
  if ( v2777 )
  {
    if ( v2768 )
    {
      v5031 = (ULONG_PTR)v2761;
      v5027 = v2777 + 2100;
      v2786 = v2761;
      v2787 = v2777 + 2104;
      v2788 = v2767;
      v2789 = (_DWORD *)(v2777 + 2120);
      i21 = v2787;
      v5035 = v2768;
      v5028 = (__int64)v2789;
      do
      {
        v2790 = (unsigned int)*v2788;
        v2791 = 48;
        v2792 = (_QWORD *)*v2786;
        v2793 = (_QWORD *)v2785;
        LODWORD(sub_140B9FDF0_Offset) = *v2788;
        v2794 = 6LL;
        do
        {
          *v2793 = 0LL;
          v2791 -= 8;
          ++v2793;
          --v2794;
        }
        while ( v2794 );
        for ( ; v2791; --v2791 )
        {
          *(_BYTE *)v2793 = 0;
          v2793 = (_QWORD *)((char *)v2793 + 1);
        }
        *(_DWORD *)v2785 = v2773;
        *(_QWORD *)(v2785 + 8) = v2792;
        if ( v2772 == 7 && (_DWORD)v2790 )
        {
          sub_1404D2D9C(v2724, v2792, (unsigned int)v2790, v2785 + 24);
          v2786 = (_QWORD *)v5031;
        }
        v2795 = (int *)v5027;
        *(_DWORD *)(v2785 + 16) = v2790;
        v2796 = v2792;
        *v2789 += v2790;
        v2797 = *v2795;
        v2798 = *(_QWORD *)i21;
        v2799 = (const char *)v2792;
        if ( v2792 < (_QWORD *)((char *)v2792 + v2790) )
        {
          do
          {
            _mm_prefetch(v2799, 0);
            v2799 += 64;
          }
          while ( v2799 < (const char *)v2792 + v2790 );
        }
        v2800 = *(_QWORD *)i21;
        v2801 = (unsigned int)v2790 >> 7;
        if ( (unsigned int)v2790 >> 7 )
        {
          do
          {
            v2802 = 8LL;
            do
            {
              v2803 = v2796[1] ^ __ROL8__(*v2796 ^ v2800, v2797);
              v2796 += 2;
              v2800 = __ROL8__(v2803, v2797);
              --v2802;
            }
            while ( v2802 );
            v2804 = __ROL8__(v2798 ^ ((char *)v2796 - (char *)v2792), 17) ^ v2798 ^ ((char *)v2796 - (char *)v2792);
            v5355 = (v2804 * (unsigned __int128)0x7010008004002001uLL) >> 64;
            v2797 = ((unsigned __int8)(v5355 ^ v2804) ^ (unsigned __int8)v2797) & 0x3F;
            if ( !v2797 )
              LOBYTE(v2797) = 1;
            --v2801;
          }
          while ( v2801 );
          LODWORD(v2790) = sub_140B9FDF0_Offset;
          v2786 = (_QWORD *)v5031;
        }
        v2805 = v2790 & 0x7F;
        if ( v2805 >= 8 )
        {
          v2806 = (unsigned __int64)(v2790 & 0x7F) >> 3;
          do
          {
            v2800 = __ROL8__(*v2796++ ^ v2800, v2797);
            v2805 -= 8;
            --v2806;
          }
          while ( v2806 );
        }
        for ( ; v2805; --v2805 )
        {
          v2807 = *(unsigned __int8 *)v2796;
          v2796 = (_QWORD *)((char *)v2796 + 1);
          v2800 = __ROL8__(v2807 ^ v2800, v2797);
        }
        for ( i56 = v2800 >> 31; i56; i56 >>= 31 )
          LODWORD(v2800) = i56 ^ v2800;
        v2772 = sub_140B9EDF0_Offset;
        *(_DWORD *)(v2785 + 20) = v2800 & 0x7FFFFFFF;
        ++v2786;
        v2789 = (_DWORD *)v5028;
        v2785 += 48LL;
        ++v2788;
        v5031 = (ULONG_PTR)v2786;
        *(_DWORD *)v5028 += v2790;
        v4393 = v5035-- == 1;
        v2773 = (int)v5022;
      }
      while ( !v4393 );
      v2767 = v5026;
    }
  }
  else
  {
LABEL_3765:
    v2724 = 0LL;
  }
  ExFreePool(v2767);
  ExFreePool(HalExtensionList);
  v730 = Timer;
  if ( !v2724 )
    goto LABEL_1075;
  v5183 = v2724;
  v2756 = v5105;
LABEL_3796:
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  if ( (v2756 & 6) == 0 && !(unsigned int)SeMinTcbLowering(v2740, v2754, v2753, v2719) )
  {
    _disable();
    if ( !(_BYTE)KdDebuggerNotPresent )
    {
      while ( 1 )
        ;
    }
    _enable();
    v2809 = v2724[513];
    v2810 = v2809 + 48;
    if ( (int)v2809 + 48 <= v2724[665] )
    {
      v2811 = v2724;
      v2724[513] = v2810;
    }
    else
    {
      v2811 = (_BYTE *)GetRandomizedSafeContext(v2724, v2810, v2724[593]);
      if ( !v2811 )
        goto LABEL_3825;
      v2812 = v2724[630];
      if ( (v2812 & 2) == 0 )
      {
        v2813 = v2724[513];
        v2814 = *((_QWORD *)v2724 + 253);
        v2815 = (v2812 & 0x10000000) != 0 ? v2724[593] : 0;
        if ( v2813 >= 8 )
        {
          v2816 = (unsigned __int64)v2813 >> 3;
          do
          {
            *(_QWORD *)v2724 = 0LL;
            v2813 -= 8;
            v2724 += 2;
            --v2816;
          }
          while ( v2816 );
        }
        for ( ; v2813; --v2813 )
        {
          *(_BYTE *)v2724 = 0;
          v2724 = (unsigned int *)((char *)v2724 + 1);
        }
        v2817 = *((_DWORD *)v2811 + 593);
        *((_DWORD *)v2811 + 593) = v2815;
        if ( v2815 == 3 )
        {
          (*((void (__fastcall **)(__int64))v2811 + 109))(v2814);
        }
        else if ( (*((_DWORD *)v2811 + 630) & 0x8000000) != 0 || (Timer = v730, !v2815) )
        {
          (*((void (__fastcall **)(__int64))v2811 + 33))(v2814);
        }
        else
        {
          (*((void (__fastcall **)(__int64, _QWORD))v2811 + 71))(v2814 - 8, *(_QWORD *)(v2814 - 8));
          Timer = v730;
        }
        *((_DWORD *)v2811 + 593) = v2817;
      }
      *((_DWORD *)v2811 + 630) &= ~2u;
    }
    v2818 = &v2811[v2809];
    ++*((_DWORD *)v2811 + 523);
    if ( !v2811 )
      goto LABEL_3825;
    v2819 = 48;
    v2820 = 6LL;
    v2821 = &v2811[v2809];
    do
    {
      *v2821 = 0LL;
      v2819 -= 8;
      ++v2821;
      --v2820;
    }
    while ( v2820 );
    for ( ; v2819; --v2819 )
    {
      *(_BYTE *)v2821 = 0;
      v2821 = (_QWORD *)((char *)v2821 + 1);
    }
    *(_DWORD *)v2818 = 31;
    *((_QWORD *)v2818 + 1) = 0LL;
    *((_DWORD *)v2818 + 4) = 0;
    v2822 = *((_QWORD *)v2811 + 263);
    for ( i57 = v2822; ; LODWORD(v2822) = i57 ^ v2822 )
    {
      i57 >>= 31;
      if ( !i57 )
        break;
    }
    v5183 = (unsigned int *)v2811;
    *((_DWORD *)v2818 + 5) = v2822 & 0x7FFFFFFF;
    Timer = v730;
    _disable();
    if ( !(_BYTE)KdDebuggerNotPresent )
    {
      while ( 1 )
        ;
    }
    _enable();
    v2824 = *((unsigned int *)v2811 + 513);
    v2825 = v2824 + 48;
    if ( (unsigned int)(v2824 + 48) <= *((_DWORD *)v2811 + 665) )
    {
      v2724 = (unsigned int *)v2811;
      *((_DWORD *)v2811 + 513) = v2825;
      Timer = v730;
    }
    else
    {
      v2724 = (unsigned int *)GetRandomizedSafeContext(v2811, v2825, *((unsigned int *)v2811 + 593));
      if ( !v2724 )
        goto LABEL_3825;
      v2826 = *((_DWORD *)v2811 + 630);
      Timer = v730;
      if ( (v2826 & 2) == 0 )
      {
        v2827 = *((_DWORD *)v2811 + 513);
        v2828 = *((_QWORD *)v2811 + 253);
        Timer = v730;
        v2829 = (v2826 & 0x10000000) != 0 ? *((_DWORD *)v2811 + 593) : 0;
        if ( v2827 >= 8 )
        {
          Timer = v730;
          v2830 = (unsigned __int64)v2827 >> 3;
          do
          {
            *(_QWORD *)v2811 = 0LL;
            v2827 -= 8;
            v2811 += 8;
            --v2830;
          }
          while ( v2830 );
        }
        for ( ; v2827; --v2827 )
          *v2811++ = 0;
        v2831 = v2724[593];
        v2724[593] = v2829;
        if ( v2829 == 3 )
        {
          (*((void (__fastcall **)(__int64))v2724 + 109))(v2828);
        }
        else if ( (v2724[630] & 0x8000000) != 0 || (Timer = v730, !v2829) )
        {
          (*((void (__fastcall **)(__int64))v2724 + 33))(v2828);
        }
        else
        {
          (*((void (__fastcall **)(__int64, _QWORD))v2724 + 71))(v2828 - 8, *(_QWORD *)(v2828 - 8));
          Timer = v730;
        }
        v2724[593] = v2831;
      }
      v2724[630] &= ~2u;
    }
    ++v2724[523];
    v2832 = (char *)v2724 + v2824;
    v2833 = 48;
    v2834 = (_QWORD *)((char *)v2724 + v2824);
    v2835 = 6LL;
    do
    {
      *v2834 = 0LL;
      v2833 -= 8;
      ++v2834;
      --v2835;
    }
    while ( v2835 );
    for ( ; v2833; --v2833 )
    {
      *(_BYTE *)v2834 = 0;
      v2834 = (_QWORD *)((char *)v2834 + 1);
    }
    *(_DWORD *)v2832 = 37;
    *((_QWORD *)v2832 + 1) = 0LL;
    *((_DWORD *)v2832 + 4) = 0;
    v2836 = *((_QWORD *)v2724 + 263);
    for ( i58 = v2836; ; LODWORD(v2836) = i58 ^ v2836 )
    {
      i58 >>= 31;
      if ( !i58 )
        break;
    }
    v5183 = v2724;
    *((_DWORD *)v2832 + 5) = v2836 & 0x7FFFFFFF;
  }
  v2838 = v2724[534];
  v2839 = KxUnexpectedInterrupt0;
  v2840 = v2724[513];
  if ( KiKvaShadow )
    v2839 = KiIsrThunkShadow;
  v2841 = v2724[593];
  v2842 = 32;
  HalExtensionList = v2839;
  if ( v2838 != 7 )
    v2842 = 0;
  v2843 = v2840 + 48;
  if ( (int)v2840 + 48 <= v2724[665] )
  {
    v2844 = v2724;
    v2724[513] = v2843;
    goto LABEL_3877;
  }
  v2844 = (_BYTE *)GetRandomizedSafeContext(v2724, v2843, v2841);
  if ( !v2844 )
    goto LABEL_3878;
  v2845 = v2724[630];
  if ( (v2845 & 2) == 0 )
  {
    v2846 = v2724[513];
    v2847 = *((_QWORD *)v2724 + 253);
    v2848 = (v2845 & 0x10000000) != 0 ? v2724[593] : 0;
    if ( v2846 >= 8 )
    {
      v2849 = (unsigned __int64)v2846 >> 3;
      do
      {
        *(_QWORD *)v2724 = 0LL;
        v2846 -= 8;
        v2724 += 2;
        --v2849;
      }
      while ( v2849 );
    }
    for ( ; v2846; --v2846 )
    {
      *(_BYTE *)v2724 = 0;
      v2724 = (unsigned int *)((char *)v2724 + 1);
    }
    v2850 = *((_DWORD *)v2844 + 593);
    v2851 = Timer;
    *((_DWORD *)v2844 + 593) = v2848;
    if ( v2848 == 3 )
    {
      (*((void (__fastcall **)(__int64))v2844 + 109))(v2847);
    }
    else if ( (*((_DWORD *)v2844 + 630) & 0x8000000) != 0 || (Timer = v2851, !v2848) )
    {
      (*((void (__fastcall **)(__int64))v2844 + 33))(v2847);
    }
    else
    {
      (*((void (__fastcall **)(__int64, _QWORD))v2844 + 71))(v2847 - 8, *(_QWORD *)(v2847 - 8));
      Timer = v2851;
    }
    *((_DWORD *)v2844 + 593) = v2850;
  }
  *((_DWORD *)v2844 + 630) &= ~2u;
  v2839 = (__int64 (__fastcall *)())HalExtensionList;
LABEL_3877:
  v2852 = &v2844[v2840];
  ++*((_DWORD *)v2844 + 523);
  if ( !v2844 )
  {
LABEL_3878:
    v2844 = 0LL;
LABEL_4493:
    v730 = Timer;
    goto LABEL_4494;
  }
  v2853 = 48;
  v2854 = &v2844[v2840];
  v2855 = 6LL;
  do
  {
    *v2854 = 0LL;
    v2853 -= 8;
    ++v2854;
    --v2855;
  }
  while ( v2855 );
  for ( ; v2853; --v2853 )
  {
    *(_BYTE *)v2854 = 0;
    v2854 = (_QWORD *)((char *)v2854 + 1);
  }
  *(_DWORD *)v2852 = v2842;
  *((_QWORD *)v2852 + 1) = v2839;
  if ( v2838 == 7 )
  {
    sub_1404D2D9C(v2844, v2839, 2048LL, v2852 + 24);
    v2839 = (__int64 (__fastcall *)())HalExtensionList;
  }
  *((_DWORD *)v2852 + 4) = 2048;
  *((_DWORD *)v2844 + 530) += 2048;
  v2856 = (char *)v2839;
  LODWORD(v2857) = *((_DWORD *)v2844 + 525);
  v2858 = (const char *)v2839;
  for ( i59 = *((_QWORD *)v2844 + 263); v2858 < (const char *)v2839 + 2048; v2858 += 64 )
    _mm_prefetch(v2858, 0);
  v2860 = 16;
  v2861 = *((_QWORD *)v2844 + 263);
  do
  {
    v2862 = 8LL;
    do
    {
      v2863 = *((_QWORD *)v2856 + 1) ^ __ROL8__(*(_QWORD *)v2856 ^ v2861, v2857);
      v2856 += 16;
      v2861 = __ROL8__(v2863, v2857);
      --v2862;
    }
    while ( v2862 );
    v2864 = (__ROL8__(i59 ^ (v2856 - (_BYTE *)HalExtensionList), 17) ^ i59 ^ (unsigned __int64)(v2856
                                                                                              - (_BYTE *)HalExtensionList))
          * (unsigned __int128)0x7010008004002001uLL;
    v5356 = *((_QWORD *)&v2864 + 1);
    v2857 = (BYTE8(v2864) ^ (unsigned __int8)(v2864 ^ v2857)) & 0x3F;
    if ( !(_DWORD)v2857 )
      v2857 = 1LL;
    --v2860;
  }
  while ( v2860 );
  for ( i60 = v2861; ; LODWORD(v2861) = i60 ^ v2861 )
  {
    i60 >>= 31;
    if ( !i60 )
      break;
  }
  v2866 = Timer;
  *((_DWORD *)v2852 + 5) = v2861 & 0x7FFFFFFF;
  *((_DWORD *)v2844 + 530) += 2048;
  *((_QWORD *)v2844 + 331) = qword_141006090;
  *((_DWORD *)v2844 + 580) = -1;
  v4393 = (*((_DWORD *)v2844 + 630) & 0x8000) == 0;
  Timer = v2866;
  if ( !v4393 )
  {
    v730 = v2866;
    goto LABEL_4494;
  }
  Prcb = KeGetPrcb(0LL, *((_QWORD *)&v2864 + 1), v2857);
  Timer = v2866;
  v2868 = &v5577;
  v2869 = 11LL;
  do
  {
    *((_QWORD *)v2868 - 1) = -1LL;
    *(_QWORD *)v2868 = 0LL;
    v2868 += 24;
    --v2869;
  }
  while ( v2869 );
  v5578[0] = -1073741694;
  _RAX = 2147483649LL;
  v5579 = -1073741695;
  __asm { cpuid }
  v5464 = _RDX;
  v2875 = ((unsigned int)_RDX >> 27) & 1;
  v5461 = _RAX;
  v2876 = v5588;
  v5463 = _RCX;
  if ( v2875 )
    v2876 = -1073741565;
  v5580 = -1073741693;
  v2877 = *((_QWORD *)v2844 + 207);
  v2878 = v2875 + 9;
  v5588 = v2876;
  v2879 = v2844[1664];
  v5581 = 27;
  v5582 = 372;
  v5583 = 373;
  v5584 = 374;
  v5585 = -1073741692;
  v5587 = -1073741696;
  v5586 = -4097LL;
  v5462 = _RBX;
  LODWORD(sub_140B9EDF0_Offset) = v2878;
  if ( *(_BYTE *)(Prcb + v2877) == v2879 )
  {
    v2880 = 3 * v2878;
    v5578[2 * v2880] = 416;
    v5576[v2880 + 16] = 0x400440000LL;
    LODWORD(sub_140B9EDF0_Offset) = v2878 + 1;
  }
  v2881 = 0;
  LODWORD(v5022) = 0;
  if ( !(_DWORD)KeNumberProcessors_0 )
    goto LABEL_4493;
  HalExtensionList = v5357;
  v5026 = v5358;
  v5027 = v5359;
  while ( 2 )
  {
    v2882 = (void (__fastcall *)(_QWORD))*((_QWORD *)v2844 + 53);
    (*((void (__fastcall **)(_BYTE *, _QWORD))v2844 + 54))(v5465, v2881);
    (*((void (__fastcall **)(_BYTE *, _BYTE *))v2844 + 60))(v5465, v5466);
    KiGetGdtIdt(&v5435, v5434);
    v2883 = v5436;
    v2884 = &dword_14001959C;
    v2885 = 7LL;
    do
    {
      v2886 = *(unsigned __int8 *)v2884;
      v2887 = *(_DWORD *)((char *)v2883 + v2886 + 4);
      if ( (v2887 & 0x100) == 0 )
        *(_DWORD *)((char *)v2883 + v2886 + 4) = v2887 | 0x100;
      v2884 = (int *)((char *)v2884 + 1);
      --v2885;
    }
    while ( v2885 );
    v2888 = *((_DWORD *)v2883 + 17);
    if ( (v2888 & 0x200) == 0 )
      *((_DWORD *)v2883 + 17) = v2888 | 0x200;
    v2889 = *((unsigned int *)v2844 + 513);
    v2890 = v5436;
    v2891 = v2889 + 48;
    if ( (unsigned int)(v2889 + 48) <= *((_DWORD *)v2844 + 665) )
    {
      v2892 = v2844;
      *((_DWORD *)v2844 + 513) = v2891;
      goto LABEL_3929;
    }
    v2892 = (_BYTE *)GetRandomizedSafeContext(v2844, v2891, *((unsigned int *)v2844 + 593));
    if ( v2892 )
    {
      v2893 = *((_DWORD *)v2844 + 630);
      if ( (v2893 & 2) == 0 )
      {
        v2894 = *((_DWORD *)v2844 + 513);
        v2895 = *((_QWORD *)v2844 + 253);
        v2896 = (v2893 & 0x10000000) != 0 ? *((_DWORD *)v2844 + 593) : 0;
        if ( v2894 >= 8 )
        {
          v2897 = (unsigned __int64)v2894 >> 3;
          do
          {
            *(_QWORD *)v2844 = 0LL;
            v2894 -= 8;
            v2844 += 8;
            --v2897;
          }
          while ( v2897 );
        }
        for ( ; v2894; --v2894 )
          *v2844++ = 0;
        v2898 = *((_DWORD *)v2892 + 593);
        v2899 = Timer;
        *((_DWORD *)v2892 + 593) = v2896;
        if ( v2896 == 3 )
        {
          (*((void (__fastcall **)(__int64))v2892 + 109))(v2895);
        }
        else if ( (*((_DWORD *)v2892 + 630) & 0x8000000) != 0 || (Timer = v2899, !v2896) )
        {
          (*((void (__fastcall **)(__int64))v2892 + 33))(v2895);
        }
        else
        {
          (*((void (__fastcall **)(__int64, _QWORD))v2892 + 71))(v2895 - 8, *(_QWORD *)(v2895 - 8));
          Timer = v2899;
        }
        *((_DWORD *)v2892 + 593) = v2898;
      }
      *((_DWORD *)v2892 + 630) &= ~2u;
LABEL_3929:
      v2900 = &v2892[v2889];
      ++*((_DWORD *)v2892 + 523);
      v2902 = 48;
      HalExtensionList = &v2892[v2889];
      v2903 = &v2892[v2889];
      v2904 = 6LL;
      do
      {
        *v2903 = 0LL;
        v2902 -= 8;
        ++v2903;
        --v2904;
      }
      while ( v2904 );
      for ( ; v2902; --v2902 )
      {
        *(_BYTE *)v2903 = 0;
        v2903 = (_QWORD *)((char *)v2903 + 1);
      }
      *(_DWORD *)v2900 = 3;
      *((_QWORD *)v2900 + 1) = v2890;
      *((_DWORD *)v2900 + 4) = 80;
      v2905 = (const char *)v2890;
      *((_DWORD *)v2892 + 530) += 80;
      v2906 = *((_DWORD *)v2892 + 525);
      v2907 = *((_QWORD *)v2892 + 263);
      if ( v2890 < v2890 + 10 )
      {
        do
        {
          _mm_prefetch(v2905, 0);
          v2905 += 64;
        }
        while ( v2905 < (const char *)v2890 + 80 );
      }
      v2908 = 80;
      v2909 = 10LL;
      do
      {
        v2907 = __ROL8__(*v2890++ ^ v2907, v2906);
        v2908 -= 8;
        --v2909;
      }
      while ( v2909 );
      for ( ; v2908; --v2908 )
      {
        v2910 = *(unsigned __int8 *)v2890;
        v2890 = (_QWORD *)((char *)v2890 + 1);
        v2907 = __ROL8__(v2910 ^ v2907, v2906);
      }
      for ( i61 = v2907; ; LODWORD(v2907) = i61 ^ v2907 )
      {
        i61 >>= 31;
        if ( !i61 )
          break;
      }
      v5360 = &v2892[v2889];
      *((_DWORD *)v2900 + 5) = v2907 & 0x7FFFFFFF;
      v2901 = &v2892[v2889];
      *((_DWORD *)v2892 + 530) += 80;
    }
    else
    {
      v2901 = v5360;
      v2892 = 0LL;
    }
    v2882(v5466);
    if ( !v2892 )
      goto LABEL_3878;
    *((_DWORD *)v2901 + 10) = (_DWORD)v5022;
    *((_WORD *)v2901 + 22) = v5435;
    v2912 = (void (__fastcall *)(_QWORD))*((_QWORD *)v2892 + 53);
    v2913 = 0;
    v2914 = (void (__fastcall *)(_QWORD))*((_QWORD *)v2892 + 54);
    i21 = (ULONG_PTR)v2912;
    v2914(v5467);
    (*((void (__fastcall **)(_BYTE *, _BYTE *))v2892 + 60))(v5467, v5468);
    KiGetGdtIdt(v5439, &v5437);
    v2915 = *((unsigned int *)v2892 + 513);
    v2916 = (_QWORD *)v5438;
    v2917 = *((unsigned int *)v2892 + 593);
    v5028 = v5438;
    v2918 = v2915 + 48;
    if ( (unsigned int)(v2915 + 48) <= *((_DWORD *)v2892 + 665) )
    {
      v2919 = (__int64)v2892;
      *((_DWORD *)v2892 + 513) = v2918;
    }
    else
    {
      v2919 = GetRandomizedSafeContext(v2892, v2918, v2917);
      if ( !v2919 )
      {
        v2920 = v5026;
        v2921 = 0LL;
        goto LABEL_3993;
      }
      v2922 = *((_DWORD *)v2892 + 630);
      if ( (v2922 & 2) == 0 )
      {
        v2923 = *((_DWORD *)v2892 + 513);
        v2924 = *((_QWORD *)v2892 + 253);
        v2925 = (v2922 & 0x10000000) != 0 ? *((_DWORD *)v2892 + 593) : 0;
        if ( v2923 >= 8 )
        {
          v2926 = (unsigned __int64)v2923 >> 3;
          do
          {
            *(_QWORD *)v2892 = 0LL;
            v2923 -= 8;
            v2892 += 8;
            --v2926;
          }
          while ( v2926 );
        }
        for ( ; v2923; --v2923 )
          *v2892++ = 0;
        v2927 = *(_DWORD *)(v2919 + 2372);
        v2928 = Timer;
        v2929 = HalExtensionList;
        *(_DWORD *)(v2919 + 2372) = v2925;
        if ( v2925 == 3 )
        {
          (*(void (__fastcall **)(__int64))(v2919 + 872))(v2924);
        }
        else if ( (*(_DWORD *)(v2919 + 2520) & 0x8000000) != 0 || (HalExtensionList = v2929, Timer = v2928, !v2925) )
        {
          (*(void (__fastcall **)(__int64))(v2919 + 264))(v2924);
        }
        else
        {
          (*(void (__fastcall **)(__int64, _QWORD))(v2919 + 568))(v2924 - 8, *(_QWORD *)(v2924 - 8));
          HalExtensionList = v2929;
          Timer = v2928;
        }
        v2916 = (_QWORD *)v5028;
        *(_DWORD *)(v2919 + 2372) = v2927;
      }
      *(_DWORD *)(v2919 + 2520) &= ~2u;
    }
    v2930 = v2919 + v2915;
    ++*(_DWORD *)(v2919 + 2092);
    v2931 = (_QWORD *)v2930;
    v5027 = v2930;
    v2932 = 6;
    v2933 = 6LL;
    v2934 = 48;
    do
    {
      *v2931 = 0LL;
      v2934 -= 8;
      ++v2931;
      --v2933;
    }
    while ( v2933 );
    for ( ; v2934; --v2934 )
    {
      *(_BYTE *)v2931 = 0;
      v2931 = (_QWORD *)((char *)v2931 + 1);
    }
    *(_DWORD *)v2930 = 2;
    *(_QWORD *)(v2930 + 8) = v2916;
    *(_DWORD *)(v2930 + 16) = 848;
    v2935 = v2916;
    *(_DWORD *)(v2919 + 2120) += 848;
    v2936 = (const char *)v2916;
    v2937 = *(_DWORD *)(v2919 + 2100);
    v2938 = *(_QWORD *)(v2919 + 2104);
    if ( v2916 < v2916 + 106 )
    {
      do
      {
        _mm_prefetch(v2936, 0);
        v2936 += 64;
      }
      while ( v2936 < (const char *)v2916 + 848 );
    }
    v2939 = *(_QWORD *)(v2919 + 2104);
    do
    {
      v2940 = 8LL;
      do
      {
        v2941 = v2935[1] ^ __ROL8__(*v2935 ^ v2939, v2937);
        v2935 += 2;
        v2939 = __ROL8__(v2941, v2937);
        --v2940;
      }
      while ( v2940 );
      v2942 = __ROL8__(v2938 ^ ((char *)v2935 - (char *)v2916), 17) ^ v2938 ^ ((char *)v2935 - (char *)v2916);
      v5361 = (v2942 * (unsigned __int128)0x7010008004002001uLL) >> 64;
      v2937 = ((unsigned __int8)(v5361 ^ v2942) ^ (unsigned __int8)v2937) & 0x3F;
      if ( !v2937 )
        LOBYTE(v2937) = 1;
      --v2932;
    }
    while ( v2932 );
    v2912 = (void (__fastcall *)(_QWORD))i21;
    v2943 = 80;
    v2920 = (PVOID)v5027;
    v2944 = 10LL;
    do
    {
      v2939 = __ROL8__(*v2935++ ^ v2939, v2937);
      v2943 -= 8;
      --v2944;
    }
    while ( v2944 );
    for ( ; v2943; --v2943 )
    {
      v2945 = *(unsigned __int8 *)v2935;
      v2935 = (_QWORD *)((char *)v2935 + 1);
      v2939 = __ROL8__(v2945 ^ v2939, v2937);
    }
    for ( i62 = v2939; ; LODWORD(v2939) = i62 ^ v2939 )
    {
      i62 >>= 31;
      if ( !i62 )
        break;
    }
    v5026 = (PVOID)v5027;
    v2921 = (_BYTE *)v2919;
    *(_DWORD *)(v5027 + 20) = v2939 & 0x7FFFFFFF;
    *(_DWORD *)(v2919 + 2120) += 848;
    v2947 = v5438;
    *(_DWORD *)(v2919 + 2120) += 16;
    v2948 = (_QWORD *)(v2947 + 3600);
    v2949 = *(_DWORD *)(v2919 + 2100);
    v2950 = (const char *)v2948;
    v2951 = *(_QWORD *)(v2919 + 2104);
    v5026 = v2920;
    if ( v2948 < v2948 + 2 )
    {
      v5026 = v2920;
      do
      {
        _mm_prefetch(v2950, 0);
        v2950 += 64;
      }
      while ( v2950 < (const char *)v2948 + 16 );
    }
    v2952 = 16;
    v2953 = 2LL;
    do
    {
      v2951 = __ROL8__(*v2948++ ^ v2951, v2949);
      v2952 -= 8;
      --v2953;
    }
    while ( v2953 );
    for ( ; v2952; --v2952 )
    {
      v2954 = *(unsigned __int8 *)v2948;
      v2948 = (_QWORD *)((char *)v2948 + 1);
      v2951 = __ROL8__(v2954 ^ v2951, v2949);
    }
    for ( i63 = v2951; ; LODWORD(v2951) = i63 ^ v2951 )
    {
      i63 >>= 31;
      if ( !i63 )
        break;
    }
    v2913 = v2951 & 0x7FFFFFFF;
LABEL_3993:
    v2912(v5468);
    if ( !v2921 )
      goto LABEL_3878;
    v2956 = (unsigned int)v5022;
    v2957 = sub_140B9EDF0_Offset;
    *((_QWORD *)v2920 + 3) = v2913;
    *((_DWORD *)v2920 + 10) = v2956;
    *((_WORD *)v2920 + 22) = v5437;
    v2958 = *((unsigned int *)v2921 + 513);
    v2959 = *((unsigned int *)v2921 + 593);
    LODWORD(sub_140B9FDF0_Offset) = v2958;
    v2960 = v2958 + 24 * (v2957 + 2);
    if ( v2960 <= *((_DWORD *)v2921 + 665) )
    {
      v2961 = v2921;
      *((_DWORD *)v2921 + 513) = v2960;
    }
    else
    {
      v2961 = (_BYTE *)GetRandomizedSafeContext(v2921, v2960, v2959);
      if ( !v2961 )
        goto LABEL_4492;
      v2962 = *((_DWORD *)v2921 + 630);
      if ( (v2962 & 2) == 0 )
      {
        v2963 = *((_DWORD *)v2921 + 513);
        v2964 = *((_QWORD *)v2921 + 253);
        v2965 = (v2962 & 0x10000000) != 0 ? *((_DWORD *)v2921 + 593) : 0;
        if ( v2963 >= 8 )
        {
          v2966 = (unsigned __int64)v2963 >> 3;
          do
          {
            *(_QWORD *)v2921 = 0LL;
            v2963 -= 8;
            v2921 += 8;
            --v2966;
          }
          while ( v2966 );
        }
        for ( ; v2963; --v2963 )
          *v2921++ = 0;
        v2967 = Timer;
        v2968 = v2920;
        v2969 = *((_DWORD *)v2961 + 593);
        v2970 = HalExtensionList;
        v2971 = v5027;
        *((_DWORD *)v2961 + 593) = v2965;
        if ( v2965 == 3 )
        {
          (*((void (__fastcall **)(__int64))v2961 + 109))(v2964);
        }
        else if ( (*((_DWORD *)v2961 + 630) & 0x8000000) != 0
               || (v5026 = v2968, v5027 = v2971, HalExtensionList = v2970, Timer = v2967, !v2965) )
        {
          (*((void (__fastcall **)(__int64))v2961 + 33))(v2964);
        }
        else
        {
          (*((void (__fastcall **)(__int64, _QWORD))v2961 + 71))(v2964 - 8, *(_QWORD *)(v2964 - 8));
          v5026 = v2968;
          v5027 = v2971;
          HalExtensionList = v2970;
          Timer = v2967;
        }
        v2958 = (unsigned int)sub_140B9FDF0_Offset;
        v2957 = sub_140B9EDF0_Offset;
        *((_DWORD *)v2961 + 593) = v2969;
      }
      *((_DWORD *)v2961 + 630) &= ~2u;
      v2956 = (unsigned int)v5022;
    }
    v2972 = &v2961[v2958];
    ++*((_DWORD *)v2961 + 523);
    v2973 = v2972;
    v2974 = 48;
    v2975 = 6LL;
    do
    {
      *v2973 = 0LL;
      v2974 -= 8;
      ++v2973;
      --v2975;
    }
    while ( v2975 );
    for ( ; v2974; --v2974 )
    {
      *(_BYTE *)v2973 = 0;
      v2973 = (_QWORD *)((char *)v2973 + 1);
    }
    *(_DWORD *)v2972 = 7;
    v2972[1] = 0LL;
    *((_DWORD *)v2972 + 4) = 0;
    v2976 = *((_QWORD *)v2961 + 263);
    for ( i64 = v2976; ; LODWORD(v2976) = i64 ^ v2976 )
    {
      i64 >>= 31;
      if ( !i64 )
        break;
    }
    *((_DWORD *)v2972 + 5) = v2976 & 0x7FFFFFFF;
    *((_DWORD *)v2972 + 6) = v2957;
    *((_DWORD *)v2972 + 7) = v2956;
    (*((void (__fastcall **)(_BYTE *, _QWORD, _QWORD))v2961 + 54))(v5469, v2956, 0LL);
    (*((void (__fastcall **)(_BYTE *, _BYTE *))v2961 + 60))(v5469, v5470);
    v2979 = Timer;
    v2980 = (char *)(v2972 + 6) - (char *)v5578;
    v2981 = v2957;
    v2982 = v5578;
    do
    {
      v2983 = *((_QWORD *)v2982 - 2);
      v2984 = *v2982;
      *(_QWORD *)((char *)v2982 + v2980) = v2983;
      *(unsigned int *)((char *)v2982 + v2980 + 16) = v2984;
      if ( (v2961[2203] & 2) != 0 && v2984 == -1073741694 && KeGetPcr()->Prcb.Number == *((_DWORD *)v2961 + 580) )
      {
        v2985 = *((_QWORD *)v2961 + 289);
      }
      else
      {
        v2985 = __readmsr(v2984);
        v2978 = (unsigned __int64)HIDWORD(v2985) << 32;
      }
      *(_QWORD *)((char *)v2982 + v2980 + 8) = v2985 & v2983;
      v2982 += 6;
      --v2981;
    }
    while ( v2981 );
    (*((void (__fastcall **)(_BYTE *, unsigned __int64, unsigned int *))v2961 + 53))(v5470, v2978, v2982);
    Timer = v2979;
    v2986 = *((_DWORD *)v2961 + 513);
    v2987 = *((unsigned int *)v2961 + 593);
    LODWORD(sub_140B9FDF0_Offset) = v2986;
    v2988 = v2986 + 48;
    if ( (unsigned int)(v2986 + 48) <= *((_DWORD *)v2961 + 665) )
    {
      v3007 = v5026;
      v2989 = v2961;
      *((_DWORD *)v2961 + 513) = v2988;
      v2991 = (size_t)v2972;
      v2993 = v2979;
      v5035 = v5027;
      v5030 = (ULONG_PTR)HalExtensionList;
      i21 = (ULONG_PTR)v2972;
      v5028 = (__int64)v2972;
      v5031 = (ULONG_PTR)v3007;
      Timer = v2979;
    }
    else
    {
      v2989 = (_BYTE *)GetRandomizedSafeContext(v2961, v2988, v2987);
      Timer = v2979;
      if ( !v2989 )
        goto LABEL_4492;
      v2990 = *((_DWORD *)v2961 + 630);
      v2991 = (size_t)v2972;
      v2992 = v5026;
      v2993 = v2979;
      v2994 = v5027;
      v5031 = (ULONG_PTR)v5026;
      v5035 = v5027;
      v5030 = (ULONG_PTR)HalExtensionList;
      i21 = (ULONG_PTR)v2972;
      v5028 = (__int64)v2972;
      if ( (v2990 & 2) == 0 )
      {
        v1136 = (v2990 & 0x10000000) != 0;
        v2995 = *((_DWORD *)v2961 + 513);
        v2996 = v2979;
        v5032 = *((_QWORD *)v2961 + 253);
        v2997 = (ULONG_PTR)v2972;
        i21 = (ULONG_PTR)v2972;
        v2998 = v1136 ? *((_DWORD *)v2961 + 593) : 0;
        v2999 = v2972;
        v5028 = (__int64)v2972;
        v3000 = HalExtensionList;
        v5031 = (ULONG_PTR)v5026;
        v5035 = v5027;
        v5030 = (ULONG_PTR)HalExtensionList;
        Timer = v2979;
        if ( v2995 >= 8 )
        {
          i21 = (ULONG_PTR)v2972;
          v3001 = (unsigned __int64)v2995 >> 3;
          v5028 = (__int64)v2972;
          v5031 = (ULONG_PTR)v5026;
          v5035 = v5027;
          v5030 = (ULONG_PTR)HalExtensionList;
          Timer = v2979;
          do
          {
            *(_QWORD *)v2961 = 0LL;
            v2995 -= 8;
            v2961 += 8;
            --v3001;
          }
          while ( v3001 );
          v2996 = v2979;
        }
        for ( ; v2995; --v2995 )
          *v2961++ = 0;
        v3002 = v2996;
        LODWORD(v5020) = *((_DWORD *)v2989 + 593);
        HalExtensionList = v2972;
        v3003 = (ULONG_PTR)v3000;
        *((_DWORD *)v2989 + 593) = v2998;
        v3004 = v2994;
        v3005 = (ULONG_PTR)v2992;
        v3006 = (__int64)v2999;
        if ( v2998 == 3 )
        {
          (*((void (__fastcall **)(ULONG_PTR))v2989 + 109))(v5032);
        }
        else
        {
          if ( (*((_DWORD *)v2989 + 630) & 0x8000000) == 0 )
          {
            i21 = v2997;
            v5028 = (__int64)v2999;
            v5031 = (ULONG_PTR)v2992;
            v5035 = v2994;
            v5030 = v3003;
            Timer = v2996;
            if ( v2998 )
            {
              (*((void (__fastcall **)(ULONG_PTR, _QWORD))v2989 + 71))(v5032 - 8, *(_QWORD *)(v5032 - 8));
              i21 = (ULONG_PTR)HalExtensionList;
              v2993 = v3002;
              v5028 = v3006;
              v5031 = v3005;
              v5035 = v3004;
              v5030 = v3003;
              Timer = v3002;
              goto LABEL_4041;
            }
          }
          (*((void (__fastcall **)(ULONG_PTR))v2989 + 33))(v5032);
        }
        v2993 = Timer;
LABEL_4041:
        v2991 = i21;
        v2986 = sub_140B9FDF0_Offset;
        *((_DWORD *)v2989 + 593) = v5020;
      }
      *((_DWORD *)v2989 + 630) &= ~2u;
    }
    ++*((_DWORD *)v2989 + 523);
    v3008 = &v2989[v2986];
    v3009 = v3008;
    v3010 = 48;
    v3011 = 6LL;
    do
    {
      *v3009 = 0LL;
      v3010 -= 8;
      ++v3009;
      --v3011;
    }
    while ( v3011 );
    for ( ; v3010; --v3010 )
    {
      *(_BYTE *)v3009 = 0;
      v3009 = (_QWORD *)((char *)v3009 + 1);
    }
    *(_DWORD *)v3008 = 21;
    v3008[1] = 0LL;
    *((_DWORD *)v3008 + 4) = 0;
    v3012 = *((_QWORD *)v2989 + 263);
    for ( i65 = v3012; ; LODWORD(v3012) = i65 ^ v3012 )
    {
      i65 >>= 31;
      if ( !i65 )
        break;
    }
    v730 = v2993;
    *((_DWORD *)v3008 + 5) = v3012 & 0x7FFFFFFF;
    v3014 = (int)v5022;
    *((_DWORD *)v3008 + 10) = 0;
    v3008[3] = 2147549185LL;
    *((_DWORD *)v3008 + 11) = v3014;
    (*((void (__fastcall **)(_BYTE *))v2989 + 54))(v5471);
    (*((void (__fastcall **)(_BYTE *, _BYTE *))v2989 + 60))(v5471, v5472);
    v3015 = __readcr0();
    (*((void (__fastcall **)(_BYTE *))v2989 + 53))(v5472);
    Timer = v730;
    v3008[4] = v3015 & 0x80010001;
    v3016 = *((unsigned int *)v2989 + 593);
    LODWORD(sub_140B9FDF0_Offset) = *((_DWORD *)v2989 + 513);
    v3017 = sub_140B9FDF0_Offset + 48;
    if ( (unsigned int)(sub_140B9FDF0_Offset + 48) <= *((_DWORD *)v2989 + 665) )
    {
      *((_DWORD *)v2989 + 513) = v3017;
      v3018 = v2989;
      v5027 = v2991;
      v3023 = v730;
      HalExtensionList = v3008;
      v5026 = v3008;
    }
    else
    {
      v3018 = (_BYTE *)GetRandomizedSafeContext(v2989, v3017, v3016);
      if ( !v3018 )
        goto LABEL_4496;
      v3019 = *((_DWORD *)v2989 + 630);
      v3020 = v5031;
      v3021 = v5035;
      v3022 = v5030;
      v5027 = v2991;
      v3023 = v730;
      HalExtensionList = v3008;
      v5026 = v3008;
      if ( (v3019 & 2) == 0 )
      {
        v3024 = *((_DWORD *)v2989 + 513);
        v1136 = (v3019 & 0x10000000) != 0;
        v3025 = i21;
        v3026 = v5028;
        v5032 = *((_QWORD *)v2989 + 253);
        v3027 = v1136 ? *((_DWORD *)v2989 + 593) : 0;
        HalExtensionList = v3008;
        v5026 = v3008;
        v5027 = i21;
        if ( v3024 >= 8 )
        {
          v3028 = (unsigned __int64)v3024 >> 3;
          HalExtensionList = v3008;
          v5026 = v3008;
          v5027 = i21;
          do
          {
            *(_QWORD *)v2989 = 0LL;
            v3024 -= 8;
            v2989 += 8;
            --v3028;
          }
          while ( v3028 );
          v3026 = v5028;
        }
        for ( ; v3024; --v3024 )
          *v2989++ = 0;
        v3029 = *((_DWORD *)v3018 + 593);
        v3030 = v3021;
        v3031 = HalExtensionList;
        v3032 = v3020;
        v3033 = v5026;
        v3034 = v3022;
        v5036 = (ULONG_PTR)v5026;
        v5044 = (ULONG_PTR)HalExtensionList;
        i21 = v3026;
        v5034 = v3025;
        LODWORD(v5020) = v3029;
        *((_DWORD *)v3018 + 593) = v3027;
        if ( v3027 == 3 )
        {
          (*((void (__fastcall **)(ULONG_PTR))v3018 + 109))(v5032);
        }
        else if ( (*((_DWORD *)v3018 + 630) & 0x8000000) != 0
               || (HalExtensionList = v3031,
                   v5026 = v3033,
                   v5027 = v3025,
                   v5028 = v3026,
                   v5031 = v3032,
                   v5035 = v3030,
                   v5030 = v3022,
                   !v3027) )
        {
          (*((void (__fastcall **)(ULONG_PTR))v3018 + 33))(v5032);
        }
        else
        {
          (*((void (__fastcall **)(ULONG_PTR, _QWORD))v3018 + 71))(v5032 - 8, *(_QWORD *)(v5032 - 8));
          HalExtensionList = (PVOID)v5044;
          v5026 = (PVOID)v5036;
          v5027 = v5034;
          v5028 = i21;
          v5031 = v3032;
          v5035 = v3030;
          v5030 = v3034;
        }
        *((_DWORD *)v3018 + 593) = v5020;
      }
      *((_DWORD *)v3018 + 630) &= ~2u;
    }
    v3035 = (unsigned int)sub_140B9FDF0_Offset;
    ++*((_DWORD *)v3018 + 523);
    v3036 = &v3018[v3035];
    v3037 = v3036;
    v3038 = 48;
    v3039 = 6LL;
    do
    {
      *v3037 = 0LL;
      v3038 -= 8;
      ++v3037;
      --v3039;
    }
    while ( v3039 );
    for ( ; v3038; --v3038 )
    {
      *(_BYTE *)v3037 = 0;
      v3037 = (_QWORD *)((char *)v3037 + 1);
    }
    *(_DWORD *)v3036 = 21;
    *((_QWORD *)v3036 + 1) = 0LL;
    *((_DWORD *)v3036 + 4) = 0;
    v3040 = *((_QWORD *)v3018 + 263);
    for ( i66 = v3040; ; LODWORD(v3040) = i66 ^ v3040 )
    {
      i66 >>= 31;
      if ( !i66 )
        break;
    }
    *((_DWORD *)v3036 + 5) = v3040 & 0x7FFFFFFF;
    v3042 = (unsigned int)v5022;
    *((_DWORD *)v3036 + 10) = 4;
    *((_QWORD *)v3036 + 3) = -8641LL;
    *((_DWORD *)v3036 + 11) = v3042;
    (*((void (__fastcall **)(_BYTE *, __int64, _QWORD))v3018 + 54))(v5473, v3042, 0LL);
    (*((void (__fastcall **)(_BYTE *, _BYTE *))v3018 + 60))(v5473, v5474);
    v3043 = __readcr4();
    (*((void (__fastcall **)(_BYTE *))v3018 + 53))(v5474);
    v3044 = v5026;
    v5036 = v5027;
    v5044 = v5028;
    v5053 = v5031;
    v3045 = v5035;
    *((_QWORD *)v3036 + 4) = v3043;
    v3046 = HalExtensionList;
    v5042 = v3045;
    v5041 = (_DWORD *)v5030;
    *((_QWORD *)v3036 + 4) = v3043 & 0xFFFFFFFFFFFFDE3FuLL;
    i21 = (ULONG_PTR)v3036;
    v5032 = (ULONG_PTR)v3036;
    v5034 = (ULONG_PTR)v3046;
    v5026 = v3044;
    Timer = v3023;
    if ( RtlGetEnabledExtendedFeatures(0xFFFFFFFFFFFFFFFFuLL) )
    {
      v3047 = *((unsigned int *)v3018 + 593);
      LODWORD(sub_140B9FDF0_Offset) = *((_DWORD *)v3018 + 513);
      v3048 = sub_140B9FDF0_Offset + 48;
      if ( (unsigned int)(sub_140B9FDF0_Offset + 48) <= *((_DWORD *)v3018 + 665) )
      {
        *((_DWORD *)v3018 + 513) = v3048;
        v3049 = (__int64)v3018;
        v5036 = v5027;
        v5044 = v5028;
        v5053 = v5031;
        v5042 = v5035;
        v5041 = (_DWORD *)v5030;
        i21 = (ULONG_PTR)v3036;
        v5032 = (ULONG_PTR)v3036;
        v5034 = (ULONG_PTR)v3046;
        v5026 = v3044;
        Timer = v3023;
      }
      else
      {
        v3049 = GetRandomizedSafeContext(v3018, v3048, v3047);
        Timer = v3023;
        if ( !v3049 )
        {
          v730 = v3023;
LABEL_4496:
          v2844 = 0LL;
          goto LABEL_4494;
        }
        v3050 = *((_DWORD *)v3018 + 630);
        v3051 = v5027;
        v5036 = v5027;
        v5044 = v5028;
        v5053 = v5031;
        v5042 = v5035;
        v5041 = (_DWORD *)v5030;
        i21 = (ULONG_PTR)v3036;
        v5032 = (ULONG_PTR)v3036;
        v5034 = (ULONG_PTR)v3046;
        v5026 = v3044;
        if ( (v3050 & 2) == 0 )
        {
          v3052 = *((_DWORD *)v3018 + 513);
          v1136 = (v3050 & 0x10000000) != 0;
          v5027 = *((_QWORD *)v3018 + 253);
          v3053 = (void *)v3051;
          v5034 = (ULONG_PTR)v3046;
          v3054 = v1136 ? *((_DWORD *)v3018 + 593) : 0;
          v5041 = (_DWORD *)v5030;
          i21 = (ULONG_PTR)v3036;
          v5032 = (ULONG_PTR)v3036;
          v5026 = v3044;
          v5036 = v3051;
          v5044 = v5028;
          v5053 = v5031;
          v5042 = v5035;
          Timer = v3023;
          if ( v3052 < 8 )
          {
            v3055 = v5028;
            v3060 = v3023;
            v3056 = v5031;
            v3057 = v5035;
            v3058 = v5030;
          }
          else
          {
            v5036 = v3051;
            v3055 = v5028;
            v5044 = v5028;
            v3056 = v5031;
            v5053 = v5031;
            v3057 = v5035;
            v5042 = v5035;
            v3058 = v5030;
            v3059 = (unsigned __int64)v3052 >> 3;
            i21 = (ULONG_PTR)v3036;
            v5032 = (ULONG_PTR)v3036;
            v3060 = v3023;
            v5034 = (ULONG_PTR)HalExtensionList;
            v5041 = (_DWORD *)v5030;
            v5026 = v3044;
            Timer = v3023;
            do
            {
              *(_QWORD *)v3018 = 0LL;
              v3052 -= 8;
              v3018 += 8;
              --v3059;
            }
            while ( v3059 );
            v3053 = (void *)v5036;
          }
          for ( ; v3052; --v3052 )
            *v3018++ = 0;
          v3061 = *(_DWORD *)(v3049 + 2372);
          v3062 = v3060;
          HalExtensionList = v3053;
          v3063 = (_DWORD *)v3058;
          v3064 = i21;
          v3065 = v3057;
          v3066 = v5032;
          v3067 = v3056;
          v3068 = v5034;
          v3069 = v3055;
          v3070 = v5026;
          v5030 = i21;
          v5028 = (__int64)v5026;
          v5031 = v5034;
          v5035 = v5032;
          LODWORD(v5020) = v3061;
          *(_DWORD *)(v3049 + 2372) = v3054;
          if ( v3054 == 3 )
          {
            (*(void (__fastcall **)(size_t))(v3049 + 872))(v5027);
          }
          else
          {
            if ( (*(_DWORD *)(v3049 + 2520) & 0x8000000) != 0 )
              goto LABEL_4091;
            i21 = v3064;
            v5032 = v3066;
            v5034 = v3068;
            v5026 = v3070;
            v5036 = (ULONG_PTR)v3053;
            v5044 = v3069;
            v5053 = v3067;
            v5042 = v3065;
            v5041 = v3063;
            Timer = v3062;
            if ( !v3054 )
            {
LABEL_4091:
              (*(void (__fastcall **)(size_t))(v3049 + 264))(v5027);
            }
            else
            {
              (*(void (__fastcall **)(size_t, _QWORD))(v3049 + 568))(v5027 - 8, *(_QWORD *)(v5027 - 8));
              i21 = v5030;
              v5032 = v5035;
              v5034 = v5031;
              v5026 = (PVOID)v5028;
              v5036 = (ULONG_PTR)HalExtensionList;
              v5044 = v3069;
              v5053 = v3067;
              v5042 = v3065;
              v5041 = v3063;
              Timer = v3062;
            }
          }
          *(_DWORD *)(v3049 + 2372) = v5020;
        }
        *(_DWORD *)(v3049 + 2520) &= ~2u;
      }
      v3071 = (unsigned int)sub_140B9FDF0_Offset;
      ++*(_DWORD *)(v3049 + 2092);
      v3018 = (_BYTE *)v3049;
      v3072 = v3049 + v3071;
      v3073 = (_QWORD *)v3072;
      v3074 = 48;
      v3075 = 6LL;
      do
      {
        *v3073 = 0LL;
        v3074 -= 8;
        ++v3073;
        --v3075;
      }
      while ( v3075 );
      for ( ; v3074; --v3074 )
      {
        *(_BYTE *)v3073 = 0;
        v3073 = (_QWORD *)((char *)v3073 + 1);
      }
      *(_DWORD *)v3072 = 38;
      *(_QWORD *)(v3072 + 8) = 0LL;
      *(_DWORD *)(v3072 + 16) = 0;
      v3076 = *(_QWORD *)(v3049 + 2104);
      for ( i67 = v3076; ; LODWORD(v3076) = i67 ^ v3076 )
      {
        i67 >>= 31;
        if ( !i67 )
          break;
      }
      v3078 = (unsigned int)v5022;
      *(_DWORD *)(v3072 + 20) = v3076 & 0x7FFFFFFF;
      *(_DWORD *)(v3072 + 40) = 0;
      *(_QWORD *)(v3072 + 24) = -1LL;
      *(_DWORD *)(v3072 + 44) = v3078;
      (*(void (__fastcall **)(_BYTE *, _QWORD))(v3049 + 432))(v5475, v3078);
      v3079 = (*(__int64 (__fastcall **)(_BYTE *, _BYTE *))(v3049 + 480))(v5475, v5476);
      __asm { xgetbv }
      v3081 = v3079 | (v3080 << 32);
      v3082 = *(void (__fastcall **)(_QWORD))(v3049 + 424);
      v3083 = v3081;
      v3082(v5476);
      *(_QWORD *)(v3072 + 32) = v3083;
      *(_QWORD *)(v3072 + 32) = v3083;
    }
    else
    {
      v3078 = (unsigned int)v5022;
    }
    (*((void (__fastcall **)(_BYTE *, _QWORD))v3018 + 54))(v5477, v3078);
    (*((void (__fastcall **)(_BYTE *, _BYTE *))v3018 + 60))(v5477, v5478);
    v3084 = *((_QWORD *)v3018 + 331);
    if ( v3084 )
    {
      v3085 = *(_DWORD *)(v3084 + 800);
    }
    else
    {
      v3086 = __readmsr(0x832u);
      v3085 = v3086;
    }
    v3087 = *((_QWORD *)v3018 + 331);
    if ( v3087 )
    {
      v3088 = *(_DWORD *)(v3087 + 832);
    }
    else
    {
      v3089 = __readmsr(0x834u);
      v3088 = v3089;
    }
    (*((void (__fastcall **)(_BYTE *))v3018 + 53))(v5478);
    v3090 = *((unsigned int *)v3018 + 513);
    v3091 = (void *)(v3085 & 0xFFFCEF00);
    v3092 = *((unsigned int *)v3018 + 593);
    v3093 = v3088 & 0xFFFEE800;
    HalExtensionList = v3091;
    v5027 = v3093;
    v3094 = v3090 + 48;
    LODWORD(sub_140B9FDF0_Offset) = v3090;
    if ( (unsigned int)(v3090 + 48) <= *((_DWORD *)v3018 + 665) )
    {
      v3095 = (__int64)v3018;
      *((_DWORD *)v3018 + 513) = v3094;
    }
    else
    {
      v3095 = GetRandomizedSafeContext(v3018, v3094, v3092);
      if ( !v3095 )
        goto LABEL_4492;
      v3096 = *((_DWORD *)v3018 + 630);
      if ( (v3096 & 2) == 0 )
      {
        v3097 = *((_DWORD *)v3018 + 513);
        v5028 = *((_QWORD *)v3018 + 253);
        v3098 = (v3096 & 0x10000000) != 0 ? *((_DWORD *)v3018 + 593) : 0;
        if ( v3097 >= 8 )
        {
          v3099 = (unsigned __int64)v3097 >> 3;
          do
          {
            *(_QWORD *)v3018 = 0LL;
            v3097 -= 8;
            v3018 += 8;
            --v3099;
          }
          while ( v3099 );
        }
        for ( ; v3097; --v3097 )
          *v3018++ = 0;
        v3100 = *(_DWORD *)(v3095 + 2372);
        v3101 = v5036;
        v3102 = v5026;
        v3103 = v5034;
        v3104 = v5032;
        v3105 = i21;
        v3106 = Timer;
        v3107 = v5041;
        v3108 = v5042;
        v3109 = v5053;
        v3110 = v5044;
        v5031 = v5036;
        v5035 = (ULONG_PTR)v5026;
        v5030 = v5034;
        v5047 = v5032;
        v5048 = i21;
        LODWORD(v5020) = v3100;
        *(_DWORD *)(v3095 + 2372) = v3098;
        if ( v3098 == 3 )
        {
          (*(void (__fastcall **)(__int64))(v3095 + 872))(v5028);
        }
        else
        {
          if ( (*(_DWORD *)(v3095 + 2520) & 0x8000000) != 0 )
            goto LABEL_4123;
          i21 = v3105;
          v5032 = v3104;
          v5034 = v3103;
          v5026 = v3102;
          v5036 = v3101;
          v5044 = v3110;
          v5053 = v3109;
          v5042 = v3108;
          v5041 = v3107;
          Timer = v3106;
          if ( !v3098 )
          {
LABEL_4123:
            (*(void (__fastcall **)(__int64))(v3095 + 264))(v5028);
          }
          else
          {
            (*(void (__fastcall **)(__int64, _QWORD))(v3095 + 568))(v5028 - 8, *(_QWORD *)(v5028 - 8));
            i21 = v5048;
            v5032 = v5047;
            v5034 = v5030;
            v5026 = (PVOID)v5035;
            v5036 = v5031;
            v5044 = v3110;
            v5053 = v3109;
            v5042 = v3108;
            v5041 = v3107;
            Timer = v3106;
          }
        }
        v3090 = (unsigned int)sub_140B9FDF0_Offset;
        LODWORD(v3093) = v5027;
        LODWORD(v3091) = (_DWORD)HalExtensionList;
        v3078 = (unsigned int)v5022;
        *(_DWORD *)(v3095 + 2372) = v5020;
      }
      *(_DWORD *)(v3095 + 2520) &= ~2u;
    }
    v3111 = v3095 + v3090;
    ++*(_DWORD *)(v3095 + 2092);
    v3112 = 48;
    v3113 = (_QWORD *)v3111;
    v3114 = 6LL;
    do
    {
      *v3113 = 0LL;
      v3112 -= 8;
      ++v3113;
      --v3114;
    }
    while ( v3114 );
    for ( ; v3112; --v3112 )
    {
      *(_BYTE *)v3113 = 0;
      v3113 = (_QWORD *)((char *)v3113 + 1);
    }
    *(_DWORD *)v3111 = 23;
    *(_QWORD *)(v3111 + 8) = 0LL;
    *(_DWORD *)(v3111 + 16) = 0;
    v3115 = *(_QWORD *)(v3095 + 2104);
    for ( i68 = v3115; ; LODWORD(v3115) = i68 ^ v3115 )
    {
      i68 >>= 31;
      if ( !i68 )
        break;
    }
    v3117 = Timer;
    *(_DWORD *)(v3111 + 20) = v3115 & 0x7FFFFFFF;
    *(_DWORD *)(v3111 + 24) = (_DWORD)v3091;
    *(_DWORD *)(v3111 + 28) = -200960;
    *(_DWORD *)(v3111 + 32) = v3093;
    *(_DWORD *)(v3111 + 36) = -71680;
    *(_DWORD *)(v3111 + 40) = v3078;
    Timer = v3117;
    v5028 = KeGetPrcb(v3078, 0LL, 0LL) - 384;
    HalExtensionList = (PVOID)(v5028 + 264);
    if ( (NtBuildNumber & 0xF0000000) == 0xF0000000 )
      *(_QWORD *)(v5028 + 264) = 0LL;
    else
      HalExtensionList = (PVOID)(v5028 + 264);
    v3118 = 32;
    v3119 = *(unsigned int *)(v3095 + 2372);
    LODWORD(sub_140B9FDF0_Offset) = *(_DWORD *)(v3095 + 2136);
    if ( (_DWORD)sub_140B9FDF0_Offset != 7 )
      v3118 = 0;
    LODWORD(v5020) = v3118;
    LODWORD(v5024) = *(_DWORD *)(v3095 + 2052);
    v3120 = v5024 + 48;
    if ( (unsigned int)(v5024 + 48) <= *(_DWORD *)(v3095 + 2660) )
    {
      v3125 = v5032;
      v3121 = (_BYTE *)v3095;
      v3127 = v5034;
      v3122 = (void *)v3111;
      v3128 = (ULONG_PTR)v5026;
      v3124 = v3111;
      v3126 = i21;
      *(_DWORD *)(v3095 + 2052) = v3120;
      v5030 = v5036;
      v5047 = v5044;
      v5048 = v5053;
      v5046 = v5042;
      v5049 = (ULONG_PTR)v5041;
      v5050 = Timer;
      v5027 = v3125;
      v5031 = v3127;
      v5035 = v3128;
    }
    else
    {
      v3121 = (_BYTE *)GetRandomizedSafeContext(v3095, v3120, v3119);
      if ( !v3121 )
        goto LABEL_3878;
      v3122 = (void *)v3111;
      v3123 = *(_DWORD *)(v3095 + 2520);
      v3124 = v3111;
      v3125 = v5032;
      v3126 = i21;
      v3127 = v5034;
      v3128 = (ULONG_PTR)v5026;
      v5030 = v5036;
      v5047 = v5044;
      v5048 = v5053;
      v5046 = v5042;
      v5049 = (ULONG_PTR)v5041;
      v5050 = Timer;
      v5027 = v5032;
      v5031 = v5034;
      v5035 = (ULONG_PTR)v5026;
      if ( (v3123 & 2) == 0 )
      {
        v3129 = *(_QWORD *)(v3095 + 2024);
        v3130 = *(_DWORD *)(v3095 + 2052);
        v3131 = v5044;
        v3132 = i21;
        v3133 = v5053;
        v3134 = (v3123 & 0x10000000) != 0 ? *(_DWORD *)(v3095 + 2372) : 0;
        v3135 = (_QWORD *)v3111;
        v3136 = v5042;
        v5027 = v5032;
        v5049 = (ULONG_PTR)v5041;
        LODWORD(v5025) = v3134;
        v3137 = (void *)v5036;
        v5045 = v3129;
        v3138 = v5026;
        Size = i21;
        v3139 = v5034;
        v5050 = Timer;
        v3140 = v5032;
        v5030 = v5036;
        v5040 = v3111;
        v5037 = (_QWORD *)v3111;
        v5031 = v5034;
        v5035 = (ULONG_PTR)v5026;
        v5047 = v5044;
        v5048 = v5053;
        v5046 = v5042;
        if ( v3130 < 8 )
        {
          v3141 = (_DWORD *)v5049;
        }
        else
        {
          v5040 = v3111;
          v5037 = (_QWORD *)v3111;
          v5027 = v5032;
          v5030 = v5036;
          v3141 = v5041;
          v5050 = Timer;
          v5049 = (ULONG_PTR)v5041;
          v3142 = (unsigned __int64)v3130 >> 3;
          Size = i21;
          v5031 = v5034;
          v5035 = (ULONG_PTR)v5026;
          v5047 = v5044;
          v5048 = v5053;
          v5046 = v5042;
          do
          {
            *(_QWORD *)v3095 = 0LL;
            v3130 -= 8;
            v3095 += 8LL;
            v3142 -= v5182;
          }
          while ( v3142 );
          v3137 = (void *)v5030;
        }
        for ( ; v3130; --v3130 )
        {
          *(_BYTE *)v3095 = 0;
          v3095 += v5182;
        }
        v3143 = v5050;
        v5053 = v5040;
        LODWORD(PgC_0_1) = *((_DWORD *)v3121 + 593);
        v3144 = v5025;
        v5026 = v3137;
        i21 = (ULONG_PTR)v3138;
        v5032 = v3139;
        v5034 = v3140;
        v5036 = v3132;
        v5044 = (ULONG_PTR)v3135;
        *((_DWORD *)v3121 + 593) = v5025;
        if ( v3144 == 3 )
        {
          (*((void (__fastcall **)(ULONG_PTR))v3121 + 109))(v5045);
        }
        else
        {
          if ( (*((_DWORD *)v3121 + 630) & 0x8000000) == 0 )
          {
            v5040 = v5053;
            v5037 = v3135;
            Size = v3132;
            v5027 = v3140;
            v5031 = v3139;
            v5035 = (ULONG_PTR)v3138;
            v5030 = (ULONG_PTR)v3137;
            v5047 = v3131;
            v5048 = v3133;
            v5046 = v3136;
            v5049 = (ULONG_PTR)v3141;
            v5050 = v3143;
            if ( (_DWORD)v5025 )
            {
              (*((void (__fastcall **)(ULONG_PTR, _QWORD))v3121 + 71))(v5045 - 8, *(_QWORD *)(v5045 - 8));
              v3125 = v5034;
              v5040 = v5053;
              v5037 = (_QWORD *)v5044;
              v3128 = i21;
              Size = v5036;
              v3127 = v5032;
              v5031 = v5032;
              v5035 = i21;
              v5030 = (ULONG_PTR)v5026;
              v5027 = v5034;
              v5047 = v3131;
              v5048 = v3133;
              v5046 = v3136;
              v5049 = (ULONG_PTR)v3141;
              v5050 = v3143;
              goto LABEL_4157;
            }
          }
          (*((void (__fastcall **)(ULONG_PTR))v3121 + 33))(v5045);
        }
        v3128 = v5035;
        v3127 = v5031;
        v3125 = v5027;
LABEL_4157:
        v3122 = (void *)v5040;
        v3124 = (ULONG_PTR)v5037;
        v3126 = Size;
        *((_DWORD *)v3121 + 593) = (_DWORD)PgC_0_1;
      }
      *((_DWORD *)v3121 + 630) &= ~2u;
    }
    v3145 = (unsigned int)v5024;
    ++*((_DWORD *)v3121 + 523);
    v3146 = &v3121[v3145];
    v3147 = v3146;
    v3148 = 48;
    v3149 = 6LL;
    do
    {
      *v3147 = 0LL;
      v3148 -= 8;
      ++v3147;
      --v3149;
    }
    while ( v3149 );
    for ( ; v3148; --v3148 )
    {
      *(_BYTE *)v3147 = 0;
      v3147 = (_QWORD *)((char *)v3147 + 1);
    }
    v4393 = (_DWORD)sub_140B9FDF0_Offset == 7;
    v3150 = (const char *)HalExtensionList;
    *(_DWORD *)v3146 = v5020;
    *((_QWORD *)v3146 + 1) = v3150;
    if ( v4393 )
    {
      sub_1404D2D9C(v3121, v3150, 8LL, v3146 + 24);
      v3125 = v5027;
      v3127 = v5031;
      v3128 = v5035;
    }
    *((_DWORD *)v3146 + 4) = 8;
    *((_DWORD *)v3121 + 530) += 8;
    for ( i69 = v3150; i69 < v3150 + 8; i69 += 64 )
      _mm_prefetch(i69, 0);
    v3152 = *(_QWORD *)v3150 ^ *((_QWORD *)v3121 + 263);
    v3153 = v3146;
    v3154 = __ROL8__(v3152, *((_DWORD *)v3121 + 525));
    v3155 = v5030;
    Timer = v5050;
    v3156 = v3154 >> 31;
    if ( v3154 >> 31 )
    {
      v5027 = v3125;
      v5031 = v3127;
      v5035 = v3128;
      do
      {
        LODWORD(v3154) = v3156 ^ v3154;
        v3156 >>= 31;
      }
      while ( v3156 );
    }
    v3157 = 32;
    *((_DWORD *)v3146 + 5) = v3154 & 0x7FFFFFFF;
    *((_DWORD *)v3121 + 530) += 8;
    v4393 = *((_DWORD *)v3121 + 534) == 7;
    v3158 = *((unsigned int *)v3121 + 593);
    LODWORD(sub_140B9FDF0_Offset) = *((_DWORD *)v3121 + 534);
    if ( !v4393 )
      v3157 = 0;
    LODWORD(v5020) = v3157;
    LODWORD(v5024) = *((_DWORD *)v3121 + 513);
    v3159 = v5024 + 48;
    if ( (unsigned int)(v5024 + 48) <= *((_DWORD *)v3121 + 665) )
    {
      *((_DWORD *)v3121 + 513) = v3159;
      v3160 = v3121;
      v5044 = v5047;
      v5053 = v5048;
      v5042 = v5046;
      HalExtensionList = v3153;
      v3182 = Timer;
      v5041 = (_DWORD *)v5049;
      v5026 = v3122;
      i21 = v3124;
      v5032 = v3126;
      v5034 = v3125;
      v5036 = v3127;
      v5035 = v3128;
      v5030 = v3155;
    }
    else
    {
      v3160 = (_BYTE *)GetRandomizedSafeContext(v3121, v3159, v3158);
      if ( !v3160 )
        goto LABEL_3878;
      v3161 = *((_DWORD *)v3121 + 630);
      v3162 = v5031;
      v3163 = v5035;
      v5044 = v5047;
      v5053 = v5048;
      v5042 = v5046;
      v5041 = (_DWORD *)v5049;
      HalExtensionList = v3153;
      v5026 = v3122;
      i21 = v3124;
      v5032 = v3126;
      v5034 = v5027;
      v5036 = v5031;
      v5050 = Timer;
      if ( (v3161 & 2) == 0 )
      {
        v3164 = *((_QWORD *)v3121 + 253);
        v3165 = *((_DWORD *)v3121 + 513);
        v5034 = v5027;
        v3166 = (v3161 & 0x10000000) != 0 ? *((_DWORD *)v3121 + 593) : 0;
        v5053 = v5048;
        v5042 = v5046;
        v5041 = (_DWORD *)v5049;
        v5045 = v3164;
        v3167 = v5047;
        LODWORD(v5025) = v3166;
        v3168 = v5030;
        v5050 = Timer;
        v3169 = v5027;
        HalExtensionList = v3153;
        v5026 = v3122;
        i21 = v3124;
        v5032 = v3126;
        v5036 = v5031;
        v5044 = v5047;
        if ( v3165 < 8 )
        {
          v3173 = v5048;
          v3171 = v5046;
          v3170 = (_DWORD *)v5049;
          v3172 = v5050;
        }
        else
        {
          HalExtensionList = v3153;
          v3170 = (_DWORD *)v5049;
          v5026 = v3122;
          v3171 = v5046;
          i21 = v3124;
          v3172 = Timer;
          v3173 = v5048;
          v3174 = (unsigned __int64)v3165 >> 3;
          v5032 = v3126;
          v5034 = v5027;
          v5036 = v5031;
          v5044 = v5047;
          v5053 = v5048;
          v5042 = v5046;
          v5041 = (_DWORD *)v5049;
          v5050 = Timer;
          do
          {
            *(_QWORD *)v3121 = 0LL;
            v3165 -= 8;
            v3121 += 8;
            --v3174;
          }
          while ( v3174 );
          v3168 = v5030;
        }
        for ( ; v3165; --v3165 )
          *v3121++ = 0;
        v3175 = v3172;
        Timer = (PKTIMER)v5026;
        v3176 = v3167;
        v3177 = v3163;
        v3178 = v5032;
        v3179 = v3173;
        v3180 = i21;
        v5040 = (ULONG_PTR)HalExtensionList;
        LODWORD(PgC_0_1) = *((_DWORD *)v3160 + 593);
        v3181 = v5025;
        v5027 = v3168;
        v5031 = v3177;
        v5047 = v3162;
        v5048 = v3169;
        v5046 = v5032;
        v5049 = i21;
        *((_DWORD *)v3160 + 593) = v5025;
        if ( v3181 == 3 )
        {
          (*((void (__fastcall **)(ULONG_PTR))v3160 + 109))(v5045);
        }
        else
        {
          if ( (*((_DWORD *)v3160 + 630) & 0x8000000) != 0 )
            goto LABEL_4187;
          HalExtensionList = (PVOID)v5040;
          v5026 = Timer;
          i21 = v3180;
          v5032 = v3178;
          v5034 = v3169;
          v5036 = v3162;
          v5035 = v3177;
          v5030 = v3168;
          v5044 = v3176;
          v5053 = v3179;
          v5042 = v3171;
          v5041 = v3170;
          v5050 = v3175;
          if ( !(_DWORD)v5025 )
          {
LABEL_4187:
            (*((void (__fastcall **)(ULONG_PTR))v3160 + 33))(v5045);
          }
          else
          {
            (*((void (__fastcall **)(ULONG_PTR, _QWORD))v3160 + 71))(v5045 - 8, *(_QWORD *)(v5045 - 8));
            HalExtensionList = (PVOID)v5040;
            v5026 = Timer;
            i21 = v5049;
            v5032 = v5046;
            v5034 = v5048;
            v5036 = v5047;
            v5030 = v5027;
            v5035 = v5031;
            v5044 = v3176;
            v5053 = v3179;
            v5042 = v3171;
            v5041 = v3170;
            v5050 = v3175;
          }
        }
        *((_DWORD *)v3160 + 593) = (_DWORD)PgC_0_1;
      }
      *((_DWORD *)v3160 + 630) &= ~2u;
      v3182 = v5050;
    }
    v3183 = (unsigned int)v5024;
    ++*((_DWORD *)v3160 + 523);
    v3184 = &v3160[v3183];
    v3185 = v3184;
    v3186 = 48;
    v3187 = 6LL;
    do
    {
      *v3185 = 0LL;
      v3186 -= 8;
      ++v3185;
      --v3187;
    }
    while ( v3187 );
    for ( ; v3186; --v3186 )
    {
      *(_BYTE *)v3185 = 0;
      v3185 = (_QWORD *)((char *)v3185 + 1);
    }
    v3188 = (const char *)(v5028 + 56);
    v4393 = (_DWORD)sub_140B9FDF0_Offset == 7;
    *(_DWORD *)v3184 = v5020;
    *((_QWORD *)v3184 + 1) = v3188;
    if ( v4393 )
      sub_1404D2D9C(v3160, v3188, 8LL, v3184 + 24);
    *((_DWORD *)v3184 + 4) = 8;
    *((_DWORD *)v3160 + 530) += 8;
    for ( i70 = v3188; i70 < v3188 + 8; i70 += 64 )
      _mm_prefetch(i70, 0);
    v3190 = *(_QWORD *)v3188 ^ *((_QWORD *)v3160 + 263);
    v3191 = HalExtensionList;
    v3192 = v5026;
    v3193 = i21;
    v3194 = v5034;
    v3195 = v5036;
    v3196 = v5035;
    v3197 = __ROL8__(v3190, *((_DWORD *)v3160 + 525));
    v3198 = v5032;
    v3199 = v3197 >> 31;
    Timer = v3182;
    for ( i71 = v3184; v3199; v3199 >>= 31 )
      LODWORD(v3197) = v3199 ^ v3197;
    v3201 = 32;
    *((_DWORD *)v3184 + 5) = v3197 & 0x7FFFFFFF;
    *((_DWORD *)v3160 + 530) += 8;
    v4393 = *((_DWORD *)v3160 + 534) == 7;
    v3202 = *((unsigned int *)v3160 + 593);
    LODWORD(sub_140B9FDF0_Offset) = *((_DWORD *)v3160 + 534);
    if ( !v4393 )
      v3201 = 0;
    LODWORD(v5020) = v3201;
    LODWORD(v5024) = *((_DWORD *)v3160 + 513);
    v3203 = v5024 + 48;
    if ( (unsigned int)(v5024 + 48) <= *((_DWORD *)v3160 + 665) )
    {
      *((_DWORD *)v3160 + 513) = v3203;
      v3204 = (__int64)v3160;
      v5048 = v5030;
      v5046 = v5044;
      v5049 = v5053;
      v5050 = (struct _KTIMER *)v5042;
      HalExtensionList = i71;
      v3226 = Timer;
      v5045 = (ULONG_PTR)v5041;
      v5026 = v3191;
      v5027 = (size_t)v3192;
      i21 = v3193;
      v5031 = v3198;
      v5047 = v3194;
      v5036 = v3195;
      v5035 = v3196;
    }
    else
    {
      v3204 = GetRandomizedSafeContext(v3160, v3203, v3202);
      if ( !v3204 )
        goto LABEL_3878;
      v3205 = *((_DWORD *)v3160 + 630);
      v3206 = v5034;
      v5048 = v5030;
      v5046 = v5044;
      v5049 = v5053;
      v5050 = (struct _KTIMER *)v5042;
      v5045 = (ULONG_PTR)v5041;
      HalExtensionList = i71;
      v5026 = v3191;
      v5027 = (size_t)v3192;
      i21 = v3193;
      v5031 = v5032;
      v5047 = v5034;
      v5040 = (ULONG_PTR)Timer;
      if ( (v3205 & 2) == 0 )
      {
        v3207 = (_QWORD *)*((_QWORD *)v3160 + 253);
        v3208 = *((_DWORD *)v3160 + 513);
        v5031 = v5032;
        v3209 = (v3205 & 0x10000000) != 0 ? *((_DWORD *)v3160 + 593) : 0;
        v5046 = v5044;
        v5049 = v5053;
        v5050 = (struct _KTIMER *)v5042;
        v5045 = (ULONG_PTR)v5041;
        v5037 = v3207;
        v5040 = (ULONG_PTR)Timer;
        LODWORD(v5025) = v3209;
        v3210 = v5030;
        HalExtensionList = i71;
        v5026 = v3191;
        v5027 = (size_t)v3192;
        i21 = v3193;
        v5047 = v5034;
        v5048 = v5030;
        if ( v3208 < 8 )
        {
          v3217 = v5044;
          v3211 = v5036;
          v3214 = (struct _KTIMER *)v5042;
          v3212 = v5035;
          v3216 = v5053;
          v3213 = v5041;
          v3215 = (PKTIMER)v5040;
        }
        else
        {
          v5031 = v5032;
          v3211 = v5036;
          v3212 = v5035;
          HalExtensionList = i71;
          v3213 = v5041;
          v5026 = v3191;
          v3214 = (struct _KTIMER *)v5042;
          v5027 = (size_t)v3192;
          v3215 = Timer;
          v3216 = v5053;
          v5048 = v5030;
          v3217 = v5044;
          v3218 = (unsigned __int64)v3208 >> 3;
          i21 = v3193;
          v5049 = v5053;
          v5047 = v5034;
          v5046 = v5044;
          v5050 = (struct _KTIMER *)v5042;
          v5045 = (ULONG_PTR)v5041;
          v5040 = (ULONG_PTR)Timer;
          do
          {
            *(_QWORD *)v3160 = 0LL;
            v3208 -= 8;
            v3160 += 8;
            --v3218;
          }
          while ( v3218 );
          v3210 = v5048;
        }
        for ( ; v3208; --v3208 )
          *v3160++ = 0;
        v3219 = v3215;
        v5041 = (_DWORD *)v5027;
        v3220 = v3217;
        v3221 = v3212;
        v3222 = v5031;
        v3223 = v3216;
        v3224 = i21;
        Timer = (PKTIMER)v5026;
        Size = (size_t)HalExtensionList;
        LODWORD(PgC_0_1) = *(_DWORD *)(v3204 + 2372);
        v3225 = v5025;
        v5030 = v3210;
        v5032 = v3221;
        v5034 = v3211;
        v5044 = v3206;
        v5053 = v5031;
        v5042 = i21;
        *(_DWORD *)(v3204 + 2372) = v5025;
        if ( v3225 == 3 )
        {
          (*(void (__fastcall **)(_QWORD *))(v3204 + 872))(v5037);
        }
        else
        {
          if ( (*(_DWORD *)(v3204 + 2520) & 0x8000000) != 0 )
            goto LABEL_4218;
          HalExtensionList = (PVOID)Size;
          v5026 = Timer;
          v5027 = (size_t)v5041;
          i21 = v3224;
          v5031 = v3222;
          v5047 = v3206;
          v5036 = v3211;
          v5035 = v3221;
          v5048 = v3210;
          v5046 = v3220;
          v5049 = v3223;
          v5050 = v3214;
          v5045 = (ULONG_PTR)v3213;
          v5040 = (ULONG_PTR)v3219;
          if ( !(_DWORD)v5025 )
          {
LABEL_4218:
            (*(void (__fastcall **)(_QWORD *))(v3204 + 264))(v5037);
          }
          else
          {
            (*(void (__fastcall **)(_QWORD *, _QWORD))(v3204 + 568))(v5037 - 1, *(v5037 - 1));
            HalExtensionList = (PVOID)Size;
            v5026 = Timer;
            v5027 = (size_t)v5041;
            i21 = v5042;
            v5031 = v5053;
            v5047 = v5044;
            v5036 = v5034;
            v5035 = v5032;
            v5048 = v5030;
            v5046 = v3220;
            v5049 = v3223;
            v5050 = v3214;
            v5045 = (ULONG_PTR)v3213;
            v5040 = (ULONG_PTR)v3219;
          }
        }
        *(_DWORD *)(v3204 + 2372) = (_DWORD)PgC_0_1;
      }
      *(_DWORD *)(v3204 + 2520) &= ~2u;
      v3191 = v5026;
      v3193 = i21;
      v3226 = (struct _KTIMER *)v5040;
    }
    v3227 = (unsigned int)v5024;
    ++*(_DWORD *)(v3204 + 2092);
    v3228 = v3204 + v3227;
    v3229 = (_QWORD *)v3228;
    v3230 = 48;
    v3231 = 6LL;
    do
    {
      *v3229 = 0LL;
      v3230 -= 8;
      ++v3229;
      --v3231;
    }
    while ( v3231 );
    for ( ; v3230; --v3230 )
    {
      *(_BYTE *)v3229 = 0;
      v3229 = (_QWORD *)((char *)v3229 + 1);
    }
    v4393 = (_DWORD)sub_140B9FDF0_Offset == 7;
    v3232 = (const char *)v5028;
    *(_DWORD *)v3228 = v5020;
    *(_QWORD *)(v3228 + 8) = v3232;
    if ( v4393 )
    {
      sub_1404D2D9C(v3204, v3232, 8LL, v3228 + 24);
      v3232 = (const char *)v5028;
    }
    *(_DWORD *)(v3228 + 16) = 8;
    *(_DWORD *)(v3204 + 2120) += 8;
    for ( i72 = v3232; i72 < v3232 + 8; i72 += 64 )
      _mm_prefetch(i72, 0);
    v3234 = (ULONG_PTR)HalExtensionList;
    v3235 = v3226;
    v3236 = v5031;
    v3237 = __ROL8__(*(_QWORD *)v3232 ^ *(_QWORD *)(v3204 + 2104), *(_DWORD *)(v3204 + 2100));
    v3238 = v5027;
    v3239 = v3237 >> 31;
    Timer = v3226;
    v3240 = (_BYTE *)v3228;
    if ( v3237 >> 31 )
    {
      v5026 = v3191;
      i21 = v3193;
      Timer = v3235;
      do
      {
        LODWORD(v3237) = v3239 ^ v3237;
        v3239 >>= 31;
      }
      while ( v3239 );
    }
    v3241 = 32;
    *(_DWORD *)(v3228 + 20) = v3237 & 0x7FFFFFFF;
    *(_DWORD *)(v3204 + 2120) += 8;
    v4393 = *(_DWORD *)(v3204 + 2136) == 7;
    v3242 = *(unsigned int *)(v3204 + 2372);
    LODWORD(sub_140B9FDF0_Offset) = *(_DWORD *)(v3204 + 2136);
    if ( !v4393 )
      v3241 = 0;
    LODWORD(v5020) = v3241;
    LODWORD(v5024) = *(_DWORD *)(v3204 + 2052);
    v3243 = v5024 + 48;
    if ( (unsigned int)(v5024 + 48) <= *(_DWORD *)(v3204 + 2660) )
    {
      v3249 = i21;
      v3244 = v3204;
      v3248 = (ULONG_PTR)v5026;
      v3245 = v3240;
      *(_DWORD *)(v3204 + 2052) = v3243;
      v3247 = v3238;
      v5044 = v5047;
      v5053 = v5036;
      v5042 = v5035;
      v5041 = (_DWORD *)v5048;
      v5040 = v5046;
      v5037 = (_QWORD *)v5049;
      Size = (size_t)v5050;
      v5057 = (void *)v5045;
      PgContextSize = (ULONG_PTR)Timer;
      v5030 = v3238;
      v5032 = v3249;
      v5034 = v3236;
    }
    else
    {
      v3244 = GetRandomizedSafeContext(v3204, v3243, v3242);
      if ( !v3244 )
        goto LABEL_3878;
      v3245 = v3240;
      v3246 = *(_DWORD *)(v3204 + 2520);
      v3247 = v5027;
      v3248 = (ULONG_PTR)v5026;
      v3249 = i21;
      v3236 = v5031;
      v5044 = v5047;
      v5053 = v5036;
      v5042 = v5035;
      v5041 = (_DWORD *)v5048;
      v5040 = v5046;
      v5037 = (_QWORD *)v5049;
      Size = (size_t)v5050;
      v5057 = (void *)v5045;
      PgContextSize = (ULONG_PTR)Timer;
      v5030 = v5027;
      v5032 = i21;
      v5034 = v5031;
      if ( (v3246 & 2) == 0 )
      {
        v3250 = *(_QWORD *)(v3204 + 2024);
        v3251 = *(_DWORD *)(v3204 + 2052);
        v3252 = v5046;
        v3253 = (_QWORD *)v5049;
        v3254 = (size_t)v5050;
        LODWORD(v5025) = (v3246 & 0x10000000) != 0 ? *(_DWORD *)(v3204 + 2372) : 0;
        v5038 = (ULONG_PTR)HalExtensionList;
        v3255 = v5047;
        v5057 = (void *)v5045;
        v5032 = i21;
        v3256 = v5031;
        v5030 = v5027;
        v3257 = (void *)v5048;
        v5043 = v3250;
        v3258 = (void *)v5035;
        v5039 = (ULONG_PTR)v5026;
        v3259 = v5036;
        PgContextSize = (ULONG_PTR)Timer;
        v3260 = i21;
        v5041 = (_DWORD *)v5048;
        v5054 = v3240;
        v5034 = v5031;
        v5044 = v5047;
        v5053 = v5036;
        v5042 = v5035;
        v5040 = v5046;
        v5037 = (_QWORD *)v5049;
        Size = (size_t)v5050;
        if ( v3251 < 8 )
        {
          v3261 = v5057;
        }
        else
        {
          v5038 = (ULONG_PTR)HalExtensionList;
          v5039 = (ULONG_PTR)v5026;
          v5054 = v3240;
          v5030 = v5027;
          v3258 = (void *)v5035;
          v5041 = (_DWORD *)v5048;
          v3261 = (void *)v5045;
          PgContextSize = (ULONG_PTR)Timer;
          v5042 = v5035;
          v3262 = (unsigned __int64)v3251 >> 3;
          v5034 = v5031;
          v5044 = v5047;
          v5053 = v5036;
          v5040 = v5046;
          v5037 = (_QWORD *)v5049;
          Size = (size_t)v5050;
          v5057 = (void *)v5045;
          do
          {
            *(_QWORD *)v3204 = 0LL;
            v3251 -= 8;
            v3204 += 8LL;
            v3262 -= v5182;
          }
          while ( v3262 );
          v3257 = v5041;
        }
        for ( ; v3251; --v3251 )
        {
          *(_BYTE *)v3204 = 0;
          v3204 += v5182;
        }
        v3263 = PgContextSize;
        v5036 = v5030;
        v5047 = v5039;
        v5048 = v5038;
        v5046 = (ULONG_PTR)v5054;
        LODWORD(PgC_0_1) = *(_DWORD *)(v3244 + 2372);
        v3264 = v5025;
        HalExtensionList = v3257;
        v5026 = v3258;
        v5027 = v3259;
        i21 = v3255;
        v5031 = v3256;
        v5035 = v3260;
        *(_DWORD *)(v3244 + 2372) = v5025;
        if ( v3264 == 3 )
        {
          (*(void (__fastcall **)(ULONG_PTR))(v3244 + 872))(v5043);
        }
        else
        {
          if ( (*(_DWORD *)(v3244 + 2520) & 0x8000000) == 0 )
          {
            v5054 = (_BYTE *)v5046;
            v5038 = v5048;
            v5039 = v5047;
            v5030 = v5036;
            v5032 = v3260;
            v5034 = v3256;
            v5044 = v3255;
            v5053 = v3259;
            v5042 = (__int64)v3258;
            v5041 = v3257;
            v5040 = v3252;
            v5037 = v3253;
            Size = v3254;
            v5057 = v3261;
            PgContextSize = v3263;
            if ( (_DWORD)v5025 )
            {
              (*(void (__fastcall **)(ULONG_PTR, _QWORD))(v3244 + 568))(v5043 - 8, *(_QWORD *)(v5043 - 8));
              v3247 = v5036;
              v3249 = v5035;
              v3236 = v5031;
              v5054 = (_BYTE *)v5046;
              v5038 = v5048;
              v5039 = v5047;
              v5044 = i21;
              v5053 = v5027;
              v5042 = (__int64)v5026;
              v5041 = HalExtensionList;
              v5030 = v5036;
              v5032 = v5035;
              v5034 = v5031;
              v5040 = v3252;
              v5037 = v3253;
              Size = v3254;
              v5057 = v3261;
              PgContextSize = v3263;
              goto LABEL_4253;
            }
          }
          (*(void (__fastcall **)(ULONG_PTR))(v3244 + 264))(v5043);
        }
        v3236 = v5034;
        v3249 = v5032;
        v3247 = v5030;
LABEL_4253:
        v3245 = v5054;
        v3234 = v5038;
        v3248 = v5039;
        *(_DWORD *)(v3244 + 2372) = (_DWORD)PgC_0_1;
      }
      *(_DWORD *)(v3244 + 2520) &= ~2u;
    }
    v3265 = (unsigned int)v5024;
    ++*(_DWORD *)(v3244 + 2092);
    v3266 = v3244 + v3265;
    v3267 = (_QWORD *)v3266;
    v3268 = 48;
    v3269 = 6LL;
    do
    {
      *v3267 = 0LL;
      v3268 -= 8;
      ++v3267;
      --v3269;
    }
    while ( v3269 );
    for ( ; v3268; --v3268 )
    {
      *(_BYTE *)v3267 = 0;
      v3267 = (_QWORD *)((char *)v3267 + 1);
    }
    v3270 = (const char *)(v5028 + 8);
    v4393 = (_DWORD)sub_140B9FDF0_Offset == 7;
    *(_DWORD *)v3266 = v5020;
    *(_QWORD *)(v3266 + 8) = v3270;
    if ( v4393 )
    {
      sub_1404D2D9C(v3244, v3270, 8LL, v3266 + 24);
      v3247 = v5030;
      v3249 = v5032;
      v3236 = v5034;
    }
    *(_DWORD *)(v3266 + 16) = 8;
    *(_DWORD *)(v3244 + 2120) += 8;
    for ( i73 = v3270; i73 < v3270 + 8; i73 += 64 )
      _mm_prefetch(i73, 0);
    v3272 = __ROL8__(*(_QWORD *)v3270 ^ *(_QWORD *)(v3244 + 2104), *(_DWORD *)(v3244 + 2100));
    v3273 = v3266;
    v3274 = v5044;
    v3275 = v3272 >> 31;
    if ( v3272 >> 31 )
    {
      v5030 = v3247;
      v3276 = Size;
      v5032 = v3249;
      v5034 = v3236;
      do
      {
        LODWORD(v3272) = v3275 ^ v3272;
        v3275 >>= 31;
      }
      while ( v3275 );
    }
    else
    {
      v3276 = Size;
    }
    v3277 = (struct _KTIMER *)PgContextSize;
    *(_DWORD *)(v3266 + 20) = v3272 & 0x7FFFFFFF;
    *(_DWORD *)(v3244 + 2120) += 8;
    v4393 = (*(_BYTE *)(v3244 + 2203) & 8) == 0;
    v3278 = v5037;
    Timer = v3277;
    HalExtensionList = v5057;
    v5027 = v3276;
    v3279 = *(_DWORD *)(v3244 + 2136);
    v5026 = v5037;
    v3280 = *(_QWORD *)(v5028 + 8);
    v5039 = v3280;
    LODWORD(sub_140B9FDF0_Offset) = v3279;
    if ( v4393 )
    {
      v4393 = v3279 == 7;
      v3321 = *(unsigned int *)(v3244 + 2372);
      v5039 = v3280 + 12;
      v3322 = 32;
      if ( !v4393 )
        v3322 = 0;
      LODWORD(v5020) = v3322;
      LODWORD(v5024) = *(_DWORD *)(v3244 + 2052);
      v3323 = v5024 + 48;
      if ( (unsigned int)(v5024 + 48) <= *(_DWORD *)(v3244 + 2660) )
      {
        *(_DWORD *)(v3244 + 2052) = v3323;
        v2844 = (_BYTE *)v3244;
        v5044 = v5053;
        v5053 = v5042;
        v5047 = (ULONG_PTR)v5041;
        v5048 = v5040;
        v5027 = Size;
        HalExtensionList = v5057;
        Timer = (PKTIMER)PgContextSize;
        v5038 = v3273;
        v5054 = v3245;
        i21 = v3234;
        v5031 = v3248;
        v5035 = v3247;
        v5032 = v3249;
        v5034 = v3236;
        v5036 = v3274;
        v5026 = v3278;
      }
      else
      {
        v3324 = GetRandomizedSafeContext(v3244, v3323, v3321);
        v3325 = v5032;
        v2844 = (_BYTE *)v3324;
        v3326 = (struct _KTIMER *)v5034;
        v5038 = v3273;
        v5054 = v3245;
        i21 = v3234;
        v5031 = v3248;
        if ( !v3324 )
        {
          v2844 = 0LL;
          v5035 = v5030;
          v3327 = v5044;
          v5044 = v5053;
          v5053 = v5042;
          v5047 = (ULONG_PTR)v5041;
          v5048 = v5040;
          v5026 = v5037;
          HalExtensionList = v5057;
          Timer = (PKTIMER)PgContextSize;
          v5036 = v3327;
          v5027 = Size;
          goto LABEL_4346;
        }
        v3328 = v5053;
        v3329 = v5044;
        v3330 = *(_DWORD *)(v3244 + 2520);
        v5053 = v5042;
        v5047 = (ULONG_PTR)v5041;
        v5048 = v5040;
        v5026 = v5037;
        v5027 = Size;
        HalExtensionList = v5057;
        Timer = (PKTIMER)PgContextSize;
        v5035 = v5030;
        v5036 = v5044;
        v5044 = v3328;
        if ( (v3330 & 2) == 0 )
        {
          v3331 = *(_DWORD *)(v3244 + 2052);
          v5046 = *(_QWORD *)(v3244 + 2024);
          v3332 = (v3330 & 0x10000000) != 0 ? *(_DWORD *)(v3244 + 2372) : 0;
          v5035 = v5030;
          v5048 = v5040;
          v5026 = v5037;
          v5027 = Size;
          LODWORD(v5025) = v3332;
          HalExtensionList = v5057;
          v5053 = v5042;
          v3333 = (ULONG_PTR)v5041;
          Timer = (PKTIMER)PgContextSize;
          v5038 = v3273;
          v5054 = v3245;
          i21 = v3234;
          v5031 = v3248;
          v5036 = v3329;
          v5044 = v3328;
          v5047 = (ULONG_PTR)v5041;
          if ( v3331 < 8 )
          {
            v3340 = v5042;
            v3334 = (_DWORD *)v3328;
            v3335 = v5040;
            v3339 = v5037;
            v3336 = HalExtensionList;
            v3337 = v5027;
            v3338 = Timer;
          }
          else
          {
            v5044 = v3328;
            v5036 = v3329;
            v3334 = (_DWORD *)v3328;
            v5047 = (ULONG_PTR)v5041;
            v3335 = v5040;
            v5038 = v3273;
            v3336 = v5057;
            v5054 = v3245;
            v3337 = Size;
            i21 = v3234;
            v3338 = (PKTIMER)PgContextSize;
            v5031 = v3248;
            v3339 = v5037;
            v5035 = v5030;
            v3340 = v5042;
            v5048 = v5040;
            v3341 = (unsigned __int64)v3331 >> 3;
            v5053 = v5042;
            v5026 = v5037;
            v5027 = Size;
            HalExtensionList = v5057;
            Timer = (PKTIMER)PgContextSize;
            do
            {
              *(_QWORD *)v3244 = 0LL;
              v3331 -= 8;
              v3244 += 8LL;
              v3341 -= v5182;
            }
            while ( v3341 );
            v3333 = v5047;
          }
          for ( ; v3331; --v3331 )
          {
            *(_BYTE *)v3244 = 0;
            v3244 += v5182;
          }
          v3342 = v3338;
          v5040 = v5035;
          v3343 = v3339;
          v3344 = v3335;
          v3345 = v5036;
          v5037 = (_QWORD *)v5031;
          Size = i21;
          v5057 = v5054;
          PgContextSize = v5038;
          LODWORD(PgC_0_1) = *((_DWORD *)v2844 + 593);
          v3346 = v5025;
          v5030 = v3333;
          v5042 = v3340;
          v5041 = v3334;
          v5049 = v5036;
          v5050 = v3326;
          v5045 = v3325;
          *((_DWORD *)v2844 + 593) = v5025;
          if ( v3346 == 3 )
          {
            (*((void (__fastcall **)(ULONG_PTR))v2844 + 109))(v5046);
          }
          else
          {
            if ( (*((_DWORD *)v2844 + 630) & 0x8000000) != 0 )
              goto LABEL_4325;
            v5038 = PgContextSize;
            v5054 = v5057;
            i21 = Size;
            v5031 = (ULONG_PTR)v5037;
            v5035 = v5040;
            v5032 = v3325;
            v5034 = (ULONG_PTR)v3326;
            v5036 = v3345;
            v5044 = (ULONG_PTR)v3334;
            v5053 = v3340;
            v5047 = v3333;
            v5048 = v3344;
            v5026 = v3343;
            v5027 = v3337;
            HalExtensionList = v3336;
            Timer = v3342;
            if ( !(_DWORD)v5025 )
            {
LABEL_4325:
              (*((void (__fastcall **)(ULONG_PTR))v2844 + 33))(v5046);
            }
            else
            {
              (*((void (__fastcall **)(ULONG_PTR, _QWORD))v2844 + 71))(v5046 - 8, *(_QWORD *)(v5046 - 8));
              v5038 = PgContextSize;
              v5054 = v5057;
              i21 = Size;
              v5031 = (ULONG_PTR)v5037;
              v5035 = v5040;
              v5032 = v5045;
              v5034 = (ULONG_PTR)v5050;
              v5036 = v5049;
              v5044 = (ULONG_PTR)v5041;
              v5053 = v5042;
              v5047 = v5030;
              v5048 = v3344;
              v5026 = v3343;
              v5027 = v3337;
              HalExtensionList = v3336;
              Timer = v3342;
            }
          }
          *((_DWORD *)v2844 + 593) = (_DWORD)PgC_0_1;
        }
        *((_DWORD *)v2844 + 630) &= ~2u;
      }
      v3347 = (unsigned int)v5024;
      ++*((_DWORD *)v2844 + 523);
      v3308 = &v2844[v3347];
      v5366 = v3308;
      v3348 = v3308;
      v3349 = 48;
      v3350 = 6LL;
      do
      {
        *v3348 = 0LL;
        v3349 -= 8;
        ++v3348;
        --v3350;
      }
      while ( v3350 );
      for ( ; v3349; --v3349 )
      {
        *(_BYTE *)v3348 = 0;
        v3348 = (_QWORD *)((char *)v3348 + 1);
      }
      v4393 = (_DWORD)sub_140B9FDF0_Offset == 7;
      v3351 = (_QWORD *)v5039;
      *(_DWORD *)v3308 = v5020;
      *((_QWORD *)v3308 + 1) = v3351;
      if ( v4393 )
      {
        sub_1404D2D9C(v2844, v3351, 92LL, v3308 + 24);
        v3308 = v5366;
      }
      v3313 = 92;
      *((_DWORD *)v3308 + 4) = 92;
      v3352 = (const char *)v3351;
      *((_DWORD *)v2844 + 530) += 92;
      v3353 = *((_DWORD *)v2844 + 525);
      v3316 = *((_QWORD *)v2844 + 263);
      if ( v3351 < (_QWORD *)((char *)v3351 + 92) )
      {
        do
        {
          _mm_prefetch(v3352, 0);
          v3352 += 64;
        }
        while ( v3352 < (const char *)v3351 + 92 );
      }
      v3354 = 92;
      v3355 = 11LL;
      do
      {
        v3316 = __ROL8__(*v3351++ ^ v3316, v3353);
        v3354 -= 8;
        --v3355;
      }
      while ( v3355 );
      for ( ; v3354; --v3354 )
      {
        v3356 = *(unsigned __int8 *)v3351;
        v3351 = (_QWORD *)((char *)v3351 + 1);
        v3316 = __ROL8__(v3356 ^ v3316, v3353);
      }
      for ( i74 = v3316; ; LODWORD(v3316) = i74 ^ v3316 )
      {
        i74 >>= 31;
        if ( !i74 )
          break;
      }
      goto LABEL_4345;
    }
    v4393 = v3279 == 7;
    v3281 = 32;
    v3282 = *(unsigned int *)(v3244 + 2372);
    if ( !v4393 )
      v3281 = 0;
    LODWORD(v5020) = v3281;
    LODWORD(v5024) = *(_DWORD *)(v3244 + 2052);
    v3283 = v5024 + 48;
    if ( (unsigned int)(v5024 + 48) <= *(_DWORD *)(v3244 + 2660) )
    {
      *(_DWORD *)(v3244 + 2052) = v3283;
      v2844 = (_BYTE *)v3244;
      v5044 = v5053;
      v5053 = v5042;
      v5047 = (ULONG_PTR)v5041;
      v5048 = v5040;
      v5027 = Size;
      HalExtensionList = v5057;
      Timer = (PKTIMER)PgContextSize;
      v5038 = v3273;
      v5054 = v3245;
      i21 = v3234;
      v5031 = v3248;
      v5035 = v3247;
      v5032 = v3249;
      v5034 = v3236;
      v5036 = v3274;
      v5026 = v3278;
    }
    else
    {
      v3284 = GetRandomizedSafeContext(v3244, v3283, v3282);
      v3285 = v5032;
      v2844 = (_BYTE *)v3284;
      v3286 = (struct _KTIMER *)v5034;
      v5038 = v3273;
      v5054 = v3245;
      i21 = v3234;
      v5031 = v3248;
      if ( !v3284 )
      {
        v2844 = 0LL;
        v5035 = v5030;
        v3287 = v5044;
        v5044 = v5053;
        v5053 = v5042;
        v5047 = (ULONG_PTR)v5041;
        v5048 = v5040;
        v5036 = v3287;
        goto LABEL_4346;
      }
      v3288 = v5053;
      v3289 = v5044;
      v3290 = *(_DWORD *)(v3244 + 2520);
      v5053 = v5042;
      v5047 = (ULONG_PTR)v5041;
      v5048 = v5040;
      v5026 = v5037;
      v5027 = Size;
      HalExtensionList = v5057;
      Timer = (PKTIMER)PgContextSize;
      v5035 = v5030;
      v5036 = v5044;
      v5044 = v3288;
      if ( (v3290 & 2) == 0 )
      {
        v3291 = *(_DWORD *)(v3244 + 2052);
        v5046 = *(_QWORD *)(v3244 + 2024);
        v3292 = (v3290 & 0x10000000) != 0 ? *(_DWORD *)(v3244 + 2372) : 0;
        v5035 = v5030;
        v5048 = v5040;
        v5026 = v5037;
        v5027 = Size;
        LODWORD(v5025) = v3292;
        HalExtensionList = v5057;
        v5053 = v5042;
        v3293 = (ULONG_PTR)v5041;
        Timer = (PKTIMER)PgContextSize;
        v5038 = v3273;
        v5054 = v3245;
        i21 = v3234;
        v5031 = v3248;
        v5036 = v3289;
        v5044 = v3288;
        v5047 = (ULONG_PTR)v5041;
        if ( v3291 < 8 )
        {
          v3300 = v5042;
          v3294 = (_DWORD *)v3288;
          v3295 = v5040;
          v3299 = v5037;
          v3296 = HalExtensionList;
          v3297 = v5027;
          v3298 = Timer;
        }
        else
        {
          v5044 = v3288;
          v5036 = v3289;
          v3294 = (_DWORD *)v3288;
          v5047 = (ULONG_PTR)v5041;
          v3295 = v5040;
          v5038 = v3273;
          v3296 = v5057;
          v5054 = v3245;
          v3297 = Size;
          i21 = v3234;
          v3298 = (PKTIMER)PgContextSize;
          v5031 = v3248;
          v3299 = v5037;
          v5035 = v5030;
          v3300 = v5042;
          v5048 = v5040;
          v3301 = (unsigned __int64)v3291 >> 3;
          v5053 = v5042;
          v5026 = v5037;
          v5027 = Size;
          HalExtensionList = v5057;
          Timer = (PKTIMER)PgContextSize;
          do
          {
            *(_QWORD *)v3244 = 0LL;
            v3291 -= 8;
            v3244 += 8LL;
            v3301 -= v5182;
          }
          while ( v3301 );
          v3293 = v5047;
        }
        for ( ; v3291; --v3291 )
        {
          *(_BYTE *)v3244 = 0;
          v3244 += v5182;
        }
        v3302 = v3298;
        v5040 = v5035;
        v3303 = v3299;
        v3304 = v3295;
        v3305 = v5036;
        v5037 = (_QWORD *)v5031;
        Size = i21;
        v5057 = v5054;
        PgContextSize = v5038;
        LODWORD(PgC_0_1) = *((_DWORD *)v2844 + 593);
        v3306 = v5025;
        v5030 = v3293;
        v5042 = v3300;
        v5041 = v3294;
        v5049 = v5036;
        v5050 = v3286;
        v5045 = v3285;
        *((_DWORD *)v2844 + 593) = v5025;
        if ( v3306 == 3 )
        {
          (*((void (__fastcall **)(ULONG_PTR))v2844 + 109))(v5046);
        }
        else
        {
          if ( (*((_DWORD *)v2844 + 630) & 0x8000000) != 0 )
            goto LABEL_4287;
          v5038 = PgContextSize;
          v5054 = v5057;
          i21 = Size;
          v5031 = (ULONG_PTR)v5037;
          v5035 = v5040;
          v5032 = v3285;
          v5034 = (ULONG_PTR)v3286;
          v5036 = v3305;
          v5044 = (ULONG_PTR)v3294;
          v5053 = v3300;
          v5047 = v3293;
          v5048 = v3304;
          v5026 = v3303;
          v5027 = v3297;
          HalExtensionList = v3296;
          Timer = v3302;
          if ( !(_DWORD)v5025 )
          {
LABEL_4287:
            (*((void (__fastcall **)(ULONG_PTR))v2844 + 33))(v5046);
          }
          else
          {
            (*((void (__fastcall **)(ULONG_PTR, _QWORD))v2844 + 71))(v5046 - 8, *(_QWORD *)(v5046 - 8));
            v5038 = PgContextSize;
            v5054 = v5057;
            i21 = Size;
            v5031 = (ULONG_PTR)v5037;
            v5035 = v5040;
            v5032 = v5045;
            v5034 = (ULONG_PTR)v5050;
            v5036 = v5049;
            v5044 = (ULONG_PTR)v5041;
            v5053 = v5042;
            v5047 = v5030;
            v5048 = v3304;
            v5026 = v3303;
            v5027 = v3297;
            HalExtensionList = v3296;
            Timer = v3302;
          }
        }
        *((_DWORD *)v2844 + 593) = (_DWORD)PgC_0_1;
      }
      *((_DWORD *)v2844 + 630) &= ~2u;
    }
    v3307 = (unsigned int)v5024;
    ++*((_DWORD *)v2844 + 523);
    v3308 = &v2844[v3307];
    v5365 = v3308;
    v3309 = v3308;
    v3310 = 48;
    v3311 = 6LL;
    do
    {
      *v3309 = 0LL;
      v3310 -= 8;
      ++v3309;
      --v3311;
    }
    while ( v3311 );
    for ( ; v3310; --v3310 )
    {
      *(_BYTE *)v3309 = 0;
      v3309 = (_QWORD *)((char *)v3309 + 1);
    }
    v4393 = (_DWORD)sub_140B9FDF0_Offset == 7;
    v3312 = (_QWORD *)v5039;
    *(_DWORD *)v3308 = v5020;
    *((_QWORD *)v3308 + 1) = v3312;
    if ( v4393 )
    {
      sub_1404D2D9C(v2844, v3312, 104LL, v3308 + 24);
      v3308 = v5365;
    }
    v3313 = 104;
    *((_DWORD *)v3308 + 4) = 104;
    v3314 = (const char *)v3312;
    *((_DWORD *)v2844 + 530) += 104;
    v3315 = *((_DWORD *)v2844 + 525);
    v3316 = *((_QWORD *)v2844 + 263);
    if ( v3312 < v3312 + 13 )
    {
      do
      {
        _mm_prefetch(v3314, 0);
        v3314 += 64;
      }
      while ( v3314 < (const char *)v3312 + 104 );
    }
    v3317 = 104;
    v3318 = 13LL;
    do
    {
      v3316 = __ROL8__(*v3312++ ^ v3316, v3315);
      v3317 -= 8;
      --v3318;
    }
    while ( v3318 );
    for ( ; v3317; --v3317 )
    {
      v3319 = *(unsigned __int8 *)v3312;
      v3312 = (_QWORD *)((char *)v3312 + 1);
      v3316 = __ROL8__(v3319 ^ v3316, v3315);
    }
    for ( i75 = v3316; ; LODWORD(v3316) = i75 ^ v3316 )
    {
      i75 >>= 31;
      if ( !i75 )
        break;
    }
LABEL_4345:
    *((_DWORD *)v3308 + 5) = v3316 & 0x7FFFFFFF;
    *((_DWORD *)v2844 + 530) += v3313;
LABEL_4346:
    if ( !v2844 )
    {
      v2844 = 0LL;
      goto LABEL_4493;
    }
    if ( (v2844[2203] & 8) == 0 )
    {
LABEL_4415:
      v3419 = qword_141006080;
      v5029 = (struct _KEVENT *)qword_141006080;
      if ( qword_141006080 )
      {
        v3420 = *((_DWORD *)v2844 + 534);
        v3421 = 32;
        v3422 = *((_DWORD *)v2844 + 513);
        v3423 = *((unsigned int *)v2844 + 593);
        if ( v3420 != 7 )
          v3421 = 0;
        LODWORD(sub_140B9FDF0_Offset) = *((_DWORD *)v2844 + 534);
        LODWORD(v5020) = v3421;
        v3424 = v3422 + 48;
        LODWORD(v5024) = v3422;
        if ( (unsigned int)(v3422 + 48) <= *((_DWORD *)v2844 + 665) )
        {
          v3425 = v2844;
          *((_DWORD *)v2844 + 513) = v3424;
        }
        else
        {
          v3425 = (_BYTE *)GetRandomizedSafeContext(v2844, v3424, v3423);
          if ( !v3425 )
          {
LABEL_4492:
            v2844 = 0LL;
            goto LABEL_4493;
          }
          v3426 = *((_DWORD *)v2844 + 630);
          if ( (v3426 & 2) == 0 )
          {
            v3427 = *((_DWORD *)v2844 + 513);
            v5039 = *((_QWORD *)v2844 + 253);
            v3428 = (v3426 & 0x10000000) != 0 ? *((_DWORD *)v2844 + 593) : 0;
            if ( v3427 >= 8 )
            {
              v3429 = (unsigned __int64)v3427 >> 3;
              do
              {
                *(_QWORD *)v2844 = 0LL;
                v3427 -= 8;
                v2844 += 8;
                --v3429;
              }
              while ( v3429 );
            }
            for ( ; v3427; --v3427 )
              *v2844++ = 0;
            v3430 = Timer;
            v3431 = HalExtensionList;
            v3432 = v5027;
            v3433 = v5026;
            LODWORD(v5025) = *((_DWORD *)v3425 + 593);
            *((_DWORD *)v3425 + 593) = v3428;
            if ( v3428 == 3 )
            {
              (*((void (__fastcall **)(ULONG_PTR))v3425 + 109))(v5039);
            }
            else if ( (*((_DWORD *)v3425 + 630) & 0x8000000) != 0
                   || (v5026 = v3433, v5027 = v3432, HalExtensionList = v3431, Timer = v3430, !v3428) )
            {
              (*((void (__fastcall **)(ULONG_PTR))v3425 + 33))(v5039);
            }
            else
            {
              (*((void (__fastcall **)(ULONG_PTR, _QWORD))v3425 + 71))(v5039 - 8, *(_QWORD *)(v5039 - 8));
              v5026 = v3433;
              v5027 = v3432;
              HalExtensionList = v3431;
              Timer = v3430;
            }
            v3422 = v5024;
            v3419 = (__int64)v5029;
            *((_DWORD *)v3425 + 593) = v5025;
          }
          *((_DWORD *)v3425 + 630) &= ~2u;
          v3421 = v5020;
          v3420 = sub_140B9FDF0_Offset;
        }
        ++*((_DWORD *)v3425 + 523);
        v3434 = (struct _KEVENT *)&v3425[v3422];
        v5029 = v3434;
        v3435 = 48;
        v3436 = 6LL;
        v3437 = v3434;
        do
        {
          *(_QWORD *)&v3437->Header.Lock = 0LL;
          v3435 -= 8;
          v3437 = (struct _KEVENT *)((char *)v3437 + 8);
          --v3436;
        }
        while ( v3436 );
        for ( ; v3435; --v3435 )
        {
          v3437->Header.Type = 0;
          v3437 = (struct _KEVENT *)((char *)v3437 + 1);
        }
        v3434->Header.LockNV = v3421;
        v3434->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v3419;
        if ( v3420 == 7 )
        {
          sub_1404D2D9C(v3425, v3419, 512LL, &v3434[1]);
          v3434 = v5029;
        }
        LODWORD(v3434->Header.WaitListHead.Blink) = 512;
        v3438 = (_QWORD *)v3419;
        *((_DWORD *)v3425 + 530) += 512;
        v3439 = (const char *)v3419;
        v3440 = *((_DWORD *)v3425 + 525);
        v3441 = *((_QWORD *)v3425 + 263);
        if ( v3419 < (unsigned __int64)(v3419 + 512) )
        {
          do
          {
            _mm_prefetch(v3439, 0);
            v3439 += 64;
          }
          while ( (unsigned __int64)v3439 < v3419 + 512 );
        }
        v3442 = *((_QWORD *)v3425 + 263);
        v3443 = 4;
        do
        {
          v3444 = 8LL;
          do
          {
            v3445 = v3438[1] ^ __ROL8__(*v3438 ^ v3442, v3440);
            v3438 += 2;
            v3442 = __ROL8__(v3445, v3440);
            --v3444;
          }
          while ( v3444 );
          v3446 = (__ROL8__(v3441 ^ ((unsigned __int64)v3438 - v3419), 17) ^ v3441 ^ ((unsigned __int64)v3438 - v3419))
                * (unsigned __int128)0x7010008004002001uLL;
          v5368 = *((_QWORD *)&v3446 + 1);
          v3440 = ((unsigned __int8)(v3446 ^ BYTE8(v3446)) ^ (unsigned __int8)v3440) & 0x3F;
          if ( !v3440 )
            LOBYTE(v3440) = 1;
          --v3443;
        }
        while ( v3443 );
        for ( i76 = v3442; ; LODWORD(v3442) = i76 ^ v3442 )
        {
          i76 >>= 31;
          if ( !i76 )
            break;
        }
        v3448 = Timer;
        v3449 = HalExtensionList;
        v3450 = 32;
        v3451 = v5027;
        v3452 = v5026;
        HIDWORD(v3434->Header.WaitListHead.Blink) = v3442 & 0x7FFFFFFF;
        *((_DWORD *)v3425 + 530) += 512;
        v3453 = *((unsigned int *)v3425 + 593);
        v3454 = qword_141006080 + 512;
        v4393 = *((_DWORD *)v3425 + 534) == 7;
        LODWORD(sub_140B9FDF0_Offset) = *((_DWORD *)v3425 + 534);
        Timer = v3448;
        if ( !v4393 )
          v3450 = 0;
        v5039 = qword_141006080 + 512;
        LODWORD(v5024) = *((_DWORD *)v3425 + 513);
        v3455 = v5024 + 48;
        LODWORD(v5020) = v3450;
        if ( (unsigned int)(v5024 + 48) <= *((_DWORD *)v3425 + 665) )
        {
          v2844 = v3425;
          *((_DWORD *)v3425 + 513) = v3455;
          v5026 = v3452;
          v5027 = v3451;
          HalExtensionList = v3449;
          Timer = v3448;
        }
        else
        {
          v2844 = (_BYTE *)GetRandomizedSafeContext(v3425, v3455, v3453);
          if ( !v2844 )
          {
            v730 = v3448;
            goto LABEL_4496;
          }
          v3456 = *((_DWORD *)v3425 + 630);
          v5026 = v3452;
          v5027 = v3451;
          HalExtensionList = v3449;
          Timer = v3448;
          if ( (v3456 & 2) == 0 )
          {
            v3457 = *((_DWORD *)v3425 + 513);
            v3458 = *((_QWORD *)v3425 + 253);
            v1136 = (v3456 & 0x10000000) != 0;
            v3459 = v3452;
            v5027 = v3451;
            v5026 = v3452;
            v3460 = v1136 ? *((_DWORD *)v3425 + 593) : 0;
            HalExtensionList = v3449;
            Timer = v3448;
            if ( v3457 >= 8 )
            {
              v5026 = v3452;
              v3461 = (unsigned __int64)v3457 >> 3;
              v5027 = v3451;
              HalExtensionList = v3449;
              Timer = v3448;
              do
              {
                *(_QWORD *)v3425 = 0LL;
                v3457 -= 8;
                v3425 += 8;
                --v3461;
              }
              while ( v3461 );
              v3459 = v5026;
            }
            for ( ; v3457; --v3457 )
              *v3425++ = 0;
            v3462 = *((_DWORD *)v2844 + 593);
            v3463 = v3448;
            *((_DWORD *)v2844 + 593) = v3460;
            v3464 = v3449;
            v3465 = v3451;
            v3466 = v3459;
            if ( v3460 == 3 )
            {
              (*((void (__fastcall **)(__int64))v2844 + 109))(v3458);
            }
            else if ( (*((_DWORD *)v2844 + 630) & 0x8000000) != 0
                   || (v5026 = v3459, v5027 = v3465, HalExtensionList = v3464, Timer = v3463, !v3460) )
            {
              (*((void (__fastcall **)(__int64))v2844 + 33))(v3458);
            }
            else
            {
              (*((void (__fastcall **)(__int64, _QWORD))v2844 + 71))(v3458 - 8, *(_QWORD *)(v3458 - 8));
              v5026 = v3466;
              v5027 = v3465;
              HalExtensionList = v3464;
              Timer = v3463;
            }
            *((_DWORD *)v2844 + 593) = v3462;
          }
          *((_DWORD *)v2844 + 630) &= ~2u;
          v3454 = v5039;
          v3450 = v5020;
        }
        v3467 = (unsigned int)v5024;
        ++*((_DWORD *)v2844 + 523);
        v3468 = &v2844[v3467];
        v3469 = v3468;
        v3470 = 48;
        v3471 = 6LL;
        do
        {
          *v3469 = 0LL;
          v3470 -= 8;
          ++v3469;
          --v3471;
        }
        while ( v3471 );
        for ( ; v3470; --v3470 )
        {
          *(_BYTE *)v3469 = 0;
          v3469 = (_QWORD *)((char *)v3469 + 1);
        }
        v4393 = (_DWORD)sub_140B9FDF0_Offset == 7;
        *(_DWORD *)v3468 = v3450;
        *((_QWORD *)v3468 + 1) = v3454;
        if ( v4393 )
        {
          sub_1404D2D9C(v2844, v3454, 512LL, v3468 + 24);
          v3454 = v5039;
        }
        *((_DWORD *)v3468 + 4) = 512;
        v3472 = (_QWORD *)v3454;
        *((_DWORD *)v2844 + 530) += 512;
        v3473 = (const char *)v3454;
        v3474 = *((_DWORD *)v2844 + 525);
        v3475 = *((_QWORD *)v2844 + 263);
        if ( v3454 < v3454 + 512 )
        {
          do
          {
            _mm_prefetch(v3473, 0);
            v3473 += 64;
          }
          while ( (unsigned __int64)v3473 < v3454 + 512 );
        }
        v3476 = *((_QWORD *)v2844 + 263);
        v3477 = 4;
        do
        {
          v3478 = 8LL;
          do
          {
            v3479 = v3472[1] ^ __ROL8__(*v3472 ^ v3476, v3474);
            v3472 += 2;
            v3476 = __ROL8__(v3479, v3474);
            --v3478;
          }
          while ( v3478 );
          v3480 = (__ROL8__(v3475 ^ ((unsigned __int64)v3472 - v5039), 17) ^ v3475 ^ ((unsigned __int64)v3472 - v5039))
                * (unsigned __int128)0x7010008004002001uLL;
          v5369 = *((_QWORD *)&v3480 + 1);
          v3474 = ((unsigned __int8)(v3480 ^ BYTE8(v3480)) ^ (unsigned __int8)v3474) & 0x3F;
          if ( !v3474 )
            LOBYTE(v3474) = 1;
          --v3477;
        }
        while ( v3477 );
        for ( i77 = v3476; ; LODWORD(v3476) = i77 ^ v3476 )
        {
          i77 >>= 31;
          if ( !i77 )
            break;
        }
        *((_DWORD *)v3468 + 5) = v3476 & 0x7FFFFFFF;
        *((_DWORD *)v2844 + 530) += 512;
      }
      v2881 = (_DWORD)v5022 + 1;
      LODWORD(v5022) = v2881;
      if ( v2881 >= (unsigned int)KeNumberProcessors_0 )
        goto LABEL_4493;
      continue;
    }
    break;
  }
  v3358 = 1;
  LODWORD(sub_140B9FDF0_Offset) = 1;
  while ( 2 )
  {
    v3359 = *(_QWORD *)(*(_QWORD *)(v5028 + 8) + 8LL * v3358 + 28);
    v5039 = v3359;
    if ( !v3359 )
      goto LABEL_4414;
    v3360 = *((_DWORD *)v2844 + 534);
    v3361 = 32;
    v3362 = *((_DWORD *)v2844 + 513);
    v3363 = *((unsigned int *)v2844 + 593);
    if ( v3360 != 7 )
      v3361 = 0;
    LODWORD(v5020) = *((_DWORD *)v2844 + 534);
    LODWORD(v5024) = v3361;
    v3364 = v3362 + 48;
    LODWORD(v5025) = v3362;
    if ( (unsigned int)(v3362 + 48) <= *((_DWORD *)v2844 + 665) )
    {
      v3365 = v2844;
      *((_DWORD *)v2844 + 513) = v3364;
    }
    else
    {
      v3365 = (_BYTE *)GetRandomizedSafeContext(v2844, v3364, v3363);
      if ( !v3365 )
        goto LABEL_4492;
      v3366 = *((_DWORD *)v2844 + 630);
      if ( (v3366 & 2) == 0 )
      {
        v3367 = *((_DWORD *)v2844 + 513);
        v5030 = *((_QWORD *)v2844 + 253);
        v3368 = (v3366 & 0x10000000) != 0 ? *((_DWORD *)v2844 + 593) : 0;
        if ( v3367 >= 8 )
        {
          v3369 = (unsigned __int64)v3367 >> 3;
          do
          {
            *(_QWORD *)v2844 = 0LL;
            v3367 -= 8;
            v2844 += 8;
            --v3369;
          }
          while ( v3369 );
        }
        for ( ; v3367; --v3367 )
          *v2844++ = 0;
        v3370 = v5047;
        v3371 = (_DWORD *)v5053;
        v3372 = v5044;
        v3373 = v5036;
        v3374 = (struct _KTIMER *)v5034;
        v3375 = Timer;
        v3376 = HalExtensionList;
        v3377 = v5027;
        v3378 = v5026;
        v3379 = v5048;
        v5045 = v5032;
        v5040 = v5035;
        v5037 = (_QWORD *)v5031;
        Size = i21;
        v5057 = v5054;
        PgContextSize = v5038;
        LODWORD(PgC_0_1) = *((_DWORD *)v3365 + 593);
        *((_DWORD *)v3365 + 593) = v3368;
        v5042 = v3370;
        v5041 = v3371;
        v5046 = v3372;
        v5049 = v3373;
        v5050 = v3374;
        if ( v3368 == 3 )
        {
          (*((void (__fastcall **)(ULONG_PTR))v3365 + 109))(v5030);
        }
        else
        {
          if ( (*((_DWORD *)v3365 + 630) & 0x8000000) != 0 )
            goto LABEL_4364;
          v5038 = PgContextSize;
          v5054 = v5057;
          i21 = Size;
          v5031 = (ULONG_PTR)v5037;
          v5035 = v5040;
          v5032 = v5045;
          v5034 = (ULONG_PTR)v3374;
          v5036 = v3373;
          v5044 = v3372;
          v5053 = (ULONG_PTR)v3371;
          v5047 = v3370;
          v5048 = v3379;
          v5026 = v3378;
          v5027 = v3377;
          HalExtensionList = v3376;
          Timer = v3375;
          if ( !v3368 )
          {
LABEL_4364:
            (*((void (__fastcall **)(ULONG_PTR))v3365 + 33))(v5030);
          }
          else
          {
            (*((void (__fastcall **)(ULONG_PTR, _QWORD))v3365 + 71))(v5030 - 8, *(_QWORD *)(v5030 - 8));
            v5038 = PgContextSize;
            v5054 = v5057;
            i21 = Size;
            v5031 = (ULONG_PTR)v5037;
            v5035 = v5040;
            v5032 = v5045;
            v5034 = (ULONG_PTR)v5050;
            v5036 = v5049;
            v5044 = v5046;
            v5053 = (ULONG_PTR)v5041;
            v5047 = v5042;
            v5048 = v3379;
            v5026 = v3378;
            v5027 = v3377;
            HalExtensionList = v3376;
            Timer = v3375;
          }
        }
        v3362 = v5025;
        v3359 = v5039;
        *((_DWORD *)v3365 + 593) = (_DWORD)PgC_0_1;
      }
      *((_DWORD *)v3365 + 630) &= ~2u;
      v3361 = v5024;
      v3360 = v5020;
    }
    ++*((_DWORD *)v3365 + 523);
    v3380 = &v3365[v3362];
    v3381 = 48;
    v3382 = 6LL;
    v3383 = v3380;
    do
    {
      *v3383 = 0LL;
      v3381 -= 8;
      ++v3383;
      --v3382;
    }
    while ( v3382 );
    for ( ; v3381; --v3381 )
    {
      *(_BYTE *)v3383 = 0;
      v3383 = (_QWORD *)((char *)v3383 + 1);
    }
    *(_DWORD *)v3380 = v3361;
    *((_QWORD *)v3380 + 1) = v3359;
    if ( v3360 == 7 )
      sub_1404D2D9C(v3365, v3359, 16LL, v3380 + 24);
    *((_DWORD *)v3380 + 4) = 16;
    *((_DWORD *)v3365 + 530) += 16;
    v3384 = (_QWORD *)v3359;
    v3385 = *((_DWORD *)v3365 + 525);
    v3386 = (const char *)v3359;
    v3387 = *((_QWORD *)v3365 + 263);
    if ( v3359 < v3359 + 16 )
    {
      do
      {
        _mm_prefetch(v3386, 0);
        v3386 += 64;
      }
      while ( (unsigned __int64)v3386 < v3359 + 16 );
    }
    v3388 = 16;
    v3389 = 2LL;
    do
    {
      v3387 = __ROL8__(*v3384++ ^ v3387, v3385);
      v3388 -= 8;
      --v3389;
    }
    while ( v3389 );
    for ( ; v3388; --v3388 )
    {
      v3390 = *(unsigned __int8 *)v3384;
      v3384 = (_QWORD *)((char *)v3384 + 1);
      v3387 = __ROL8__(v3390 ^ v3387, v3385);
    }
    for ( i78 = v3387; ; LODWORD(v3387) = i78 ^ v3387 )
    {
      i78 >>= 31;
      if ( !i78 )
        break;
    }
    *((_DWORD *)v3380 + 5) = v3387 & 0x7FFFFFFF;
    *((_DWORD *)v3365 + 530) += 16;
    v3392 = *((_DWORD *)v3365 + 534);
    v3393 = 32;
    v3394 = *((_DWORD *)v3365 + 513);
    v3395 = *(const char **)(v3359 + 8);
    v3396 = *((unsigned int *)v3365 + 593);
    if ( v3392 != 7 )
      v3393 = 0;
    v5030 = (ULONG_PTR)v3395;
    v3397 = v3394 + 48;
    LODWORD(v5020) = v3392;
    LODWORD(v5024) = v3393;
    LODWORD(v5025) = v3394;
    if ( (unsigned int)(v3394 + 48) <= *((_DWORD *)v3365 + 665) )
    {
      v2844 = v3365;
      *((_DWORD *)v3365 + 513) = v3397;
      goto LABEL_4403;
    }
    v2844 = (_BYTE *)GetRandomizedSafeContext(v3365, v3397, v3396);
    if ( v2844 )
    {
      v3398 = *((_DWORD *)v3365 + 630);
      if ( (v3398 & 2) == 0 )
      {
        v3399 = *((_DWORD *)v3365 + 513);
        v5042 = *((_QWORD *)v3365 + 253);
        v3400 = (v3398 & 0x10000000) != 0 ? *((_DWORD *)v3365 + 593) : 0;
        if ( v3399 >= 8 )
        {
          v3401 = (unsigned __int64)v3399 >> 3;
          do
          {
            *(_QWORD *)v3365 = 0LL;
            v3399 -= 8;
            v3365 += 8;
            --v3401;
          }
          while ( v3401 );
        }
        for ( ; v3399; --v3399 )
          *v3365++ = 0;
        v3402 = (_DWORD *)v5047;
        v3403 = v5053;
        v3404 = v5044;
        v3405 = v5036;
        v3406 = v5034;
        v3407 = Timer;
        v3408 = HalExtensionList;
        v3409 = v5027;
        v3410 = v5026;
        v3411 = v5048;
        v5040 = v5032;
        v5037 = (_QWORD *)v5035;
        Size = v5031;
        v5057 = (void *)i21;
        PgContextSize = (ULONG_PTR)v5054;
        v5043 = v5038;
        LODWORD(PgC_0_1) = *((_DWORD *)v2844 + 593);
        *((_DWORD *)v2844 + 593) = v3400;
        v5041 = v3402;
        v5046 = v3403;
        v5049 = v3404;
        v5050 = (struct _KTIMER *)v3405;
        v5045 = v3406;
        if ( v3400 == 3 )
        {
          (*((void (__fastcall **)(__int64))v2844 + 109))(v5042);
        }
        else
        {
          if ( (*((_DWORD *)v2844 + 630) & 0x8000000) != 0 )
            goto LABEL_4398;
          v5038 = v5043;
          v5054 = (_BYTE *)PgContextSize;
          i21 = (ULONG_PTR)v5057;
          v5031 = Size;
          v5035 = (ULONG_PTR)v5037;
          v5032 = v5040;
          v5034 = v3406;
          v5036 = v3405;
          v5044 = v3404;
          v5053 = v3403;
          v5047 = (ULONG_PTR)v3402;
          v5048 = v3411;
          v5026 = v3410;
          v5027 = v3409;
          HalExtensionList = v3408;
          Timer = v3407;
          if ( !v3400 )
          {
LABEL_4398:
            (*((void (__fastcall **)(__int64))v2844 + 33))(v5042);
          }
          else
          {
            (*((void (__fastcall **)(__int64, _QWORD))v2844 + 71))(v5042 - 8, *(_QWORD *)(v5042 - 8));
            v5038 = v5043;
            v5054 = (_BYTE *)PgContextSize;
            i21 = (ULONG_PTR)v5057;
            v5031 = Size;
            v5035 = (ULONG_PTR)v5037;
            v5032 = v5040;
            v5034 = v5045;
            v5036 = (ULONG_PTR)v5050;
            v5044 = v5049;
            v5053 = v5046;
            v5047 = (ULONG_PTR)v5041;
            v5048 = v3411;
            v5026 = v3410;
            v5027 = v3409;
            HalExtensionList = v3408;
            Timer = v3407;
          }
        }
        v3394 = v5025;
        v3395 = (const char *)v5030;
        *((_DWORD *)v2844 + 593) = (_DWORD)PgC_0_1;
      }
      *((_DWORD *)v2844 + 630) &= ~2u;
      v3393 = v5024;
      v3392 = v5020;
LABEL_4403:
      ++*((_DWORD *)v2844 + 523);
      v3412 = 48;
      v3413 = &v2844[v3394];
      v3414 = v3413;
      v3415 = 6LL;
      do
      {
        *v3414 = 0LL;
        v3412 -= 8;
        ++v3414;
        --v3415;
      }
      while ( v3415 );
      for ( ; v3412; --v3412 )
      {
        *(_BYTE *)v3414 = 0;
        v3414 = (_QWORD *)((char *)v3414 + 1);
      }
      *(_DWORD *)v3413 = v3393;
      *((_QWORD *)v3413 + 1) = v3395;
      if ( v3392 == 7 )
        sub_1404D2D9C(v2844, v3395, 8LL, v3413 + 24);
      *((_DWORD *)v3413 + 4) = 8;
      *((_DWORD *)v2844 + 530) += 8;
      for ( i79 = v3395; i79 < v3395 + 8; i79 += 64 )
        _mm_prefetch(i79, 0);
      v3417 = __ROL8__(*(_QWORD *)v3395 ^ *((_QWORD *)v2844 + 263), *((_DWORD *)v2844 + 525));
      for ( i80 = v3417 >> 31; i80; i80 >>= 31 )
        LODWORD(v3417) = i80 ^ v3417;
      *((_DWORD *)v3413 + 5) = v3417 & 0x7FFFFFFF;
      *((_DWORD *)v2844 + 530) += 8;
LABEL_4414:
      v3358 = sub_140B9FDF0_Offset + 1;
      LODWORD(sub_140B9FDF0_Offset) = v3358;
      if ( v3358 >= 8 )
        goto LABEL_4415;
      continue;
    }
    break;
  }
  v730 = Timer;
  v2844 = 0LL;
LABEL_4494:
  v5183 = (unsigned int *)v2844;
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  if ( !v2844 )
  {
LABEL_3826:
    v731 = 0LL;
    goto LABEL_1076;
  }
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  v3482 = *((unsigned int *)v2844 + 513);
  v3483 = v3482 + 48;
  if ( (unsigned int)(v3482 + 48) <= *((_DWORD *)v2844 + 665) )
  {
    v3484 = v2844;
    *((_DWORD *)v2844 + 513) = v3483;
  }
  else
  {
    v3484 = (_BYTE *)GetRandomizedSafeContext(v2844, v3483, *((unsigned int *)v2844 + 593));
    if ( !v3484 )
    {
LABEL_4506:
      v731 = 0LL;
      v5183 = 0LL;
      Timer = v730;
      goto LABEL_1076;
    }
    v3485 = *((_DWORD *)v2844 + 630);
    if ( (v3485 & 2) == 0 )
    {
      v3486 = *((_DWORD *)v2844 + 513);
      v3487 = *((_QWORD *)v2844 + 253);
      v3488 = (v3485 & 0x10000000) != 0 ? *((_DWORD *)v2844 + 593) : 0;
      if ( v3486 >= 8 )
      {
        v3489 = (unsigned __int64)v3486 >> 3;
        do
        {
          *(_QWORD *)v2844 = 0LL;
          v3486 -= 8;
          v2844 += 8;
          --v3489;
        }
        while ( v3489 );
      }
      for ( ; v3486; --v3486 )
        *v2844++ = 0;
      v3490 = *((_DWORD *)v3484 + 593);
      *((_DWORD *)v3484 + 593) = v3488;
      if ( v3488 == 3 )
      {
        (*((void (__fastcall **)(__int64))v3484 + 109))(v3487);
      }
      else if ( (*((_DWORD *)v3484 + 630) & 0x8000000) != 0 || !v3488 )
      {
        (*((void (__fastcall **)(__int64))v3484 + 33))(v3487);
      }
      else
      {
        (*((void (__fastcall **)(__int64, _QWORD))v3484 + 71))(v3487 - 8, *(_QWORD *)(v3487 - 8));
      }
      *((_DWORD *)v3484 + 593) = v3490;
    }
    *((_DWORD *)v3484 + 630) &= ~2u;
  }
  ++*((_DWORD *)v3484 + 523);
  v3491 = &v3484[v3482];
  v3492 = 48;
  v3493 = &v3484[v3482];
  v731 = 0LL;
  v3494 = 6LL;
  do
  {
    *v3493 = 0LL;
    v3492 -= 8;
    ++v3493;
    --v3494;
  }
  while ( v3494 );
  for ( ; v3492; --v3492 )
  {
    *(_BYTE *)v3493 = 0;
    v3493 = (_QWORD *)((char *)v3493 + 1);
  }
  *(_DWORD *)v3491 = 26;
  *((_QWORD *)v3491 + 1) = 0LL;
  *((_DWORD *)v3491 + 4) = 0;
  v3495 = *((_QWORD *)v3484 + 263);
  for ( i81 = v3495; ; LODWORD(v3495) = i81 ^ v3495 )
  {
    i81 >>= 31;
    if ( !i81 )
      break;
  }
  Timer = v730;
  *((_DWORD *)v3491 + 5) = v3495 & 0x7FFFFFFF;
  v5183 = (unsigned int *)v3484;
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  v3497 = *((unsigned int *)v3484 + 513);
  v3498 = v3497 + 48;
  if ( (unsigned int)(v3497 + 48) <= *((_DWORD *)v3484 + 665) )
  {
    v3499 = v3484;
    *((_DWORD *)v3484 + 513) = v3498;
    v3501 = v730;
    goto LABEL_4548;
  }
  v3499 = (_BYTE *)GetRandomizedSafeContext(v3484, v3498, *((unsigned int *)v3484 + 593));
  if ( !v3499 )
  {
LABEL_3068:
    v5183 = 0LL;
    goto LABEL_1076;
  }
  v3500 = *((_DWORD *)v3484 + 630);
  v3501 = v730;
  if ( (v3500 & 2) == 0 )
  {
    v3502 = *((_DWORD *)v3484 + 513);
    v3503 = *((_QWORD *)v3484 + 253);
    v3504 = (v3500 & 0x10000000) != 0 ? *((_DWORD *)v3484 + 593) : 0;
    if ( v3502 >= 8 )
    {
      v3505 = (unsigned __int64)v3502 >> 3;
      do
      {
        *(_QWORD *)v3484 = 0LL;
        v3502 -= 8;
        v3484 += 8;
        --v3505;
      }
      while ( v3505 );
    }
    for ( ; v3502; --v3502 )
      *v3484++ = 0;
    v3506 = *((_DWORD *)v3499 + 593);
    *((_DWORD *)v3499 + 593) = v3504;
    if ( v3504 == 3 )
    {
      (*((void (__fastcall **)(__int64))v3499 + 109))(v3503);
    }
    else if ( (*((_DWORD *)v3499 + 630) & 0x8000000) != 0 || !v3504 )
    {
      (*((void (__fastcall **)(__int64))v3499 + 33))(v3503);
    }
    else
    {
      (*((void (__fastcall **)(__int64, _QWORD))v3499 + 71))(v3503 - 8, *(_QWORD *)(v3503 - 8));
    }
    *((_DWORD *)v3499 + 593) = v3506;
  }
  *((_DWORD *)v3499 + 630) &= ~2u;
LABEL_4548:
  v3507 = &v3499[v3497];
  ++*((_DWORD *)v3499 + 523);
  v3508 = &v3499[v3497];
  v3509 = 48;
  v3510 = 6LL;
  do
  {
    *v3508 = 0LL;
    v3509 -= 8;
    ++v3508;
    --v3510;
  }
  while ( v3510 );
  for ( ; v3509; --v3509 )
  {
    *(_BYTE *)v3508 = 0;
    v3508 = (_QWORD *)((char *)v3508 + 1);
  }
  *(_DWORD *)v3507 = 27;
  *((_QWORD *)v3507 + 1) = 0LL;
  *((_DWORD *)v3507 + 4) = 0;
  v3511 = *((_QWORD *)v3499 + 263);
  for ( i82 = v3511 >> 31; i82; i82 >>= 31 )
    LODWORD(v3511) = i82 ^ v3511;
  Timer = v3501;
  *((_DWORD *)v3507 + 5) = v3511 & 0x7FFFFFFF;
  v3513 = 32;
  v3514 = *((_DWORD *)v3499 + 534);
  v3515 = *((unsigned int *)v3499 + 513);
  v3516 = *((unsigned int *)v3499 + 593);
  v3517 = v3501;
  if ( v3514 != 7 )
    v3513 = 0;
  v5183 = (unsigned int *)v3499;
  LODWORD(sub_140B9EDF0_Offset) = v3514;
  v3518 = v3515 + 48;
  if ( (unsigned int)(v3515 + 48) <= *((_DWORD *)v3499 + 665) )
  {
    v3519 = v3499;
    *((_DWORD *)v3499 + 513) = v3518;
    v3521 = v3517;
  }
  else
  {
    v3519 = (_BYTE *)GetRandomizedSafeContext(v3499, v3518, v3516);
    if ( !v3519 )
    {
      v5183 = 0LL;
      v730 = v3517;
      goto LABEL_1075;
    }
    v3520 = *((_DWORD *)v3499 + 630);
    v3521 = v3517;
    if ( (v3520 & 2) == 0 )
    {
      v3522 = *((_DWORD *)v3499 + 513);
      v3523 = *((_QWORD *)v3499 + 253);
      v3524 = (v3520 & 0x10000000) != 0 ? *((_DWORD *)v3499 + 593) : 0;
      if ( v3522 >= 8 )
      {
        v3525 = (unsigned __int64)v3522 >> 3;
        do
        {
          *(_QWORD *)v3499 = 0LL;
          v3522 -= 8;
          v3499 += 8;
          --v3525;
        }
        while ( v3525 );
      }
      for ( ; v3522; --v3522 )
        *v3499++ = 0;
      v3526 = *((_DWORD *)v3519 + 593);
      *((_DWORD *)v3519 + 593) = v3524;
      if ( v3524 == 3 )
      {
        (*((void (__fastcall **)(__int64))v3519 + 109))(v3523);
      }
      else if ( (*((_DWORD *)v3519 + 630) & 0x8000000) != 0 || !v3524 )
      {
        (*((void (__fastcall **)(__int64))v3519 + 33))(v3523);
      }
      else
      {
        (*((void (__fastcall **)(__int64, _QWORD))v3519 + 71))(v3523 - 8, *(_QWORD *)(v3523 - 8));
      }
      *((_DWORD *)v3519 + 593) = v3526;
    }
    *((_DWORD *)v3519 + 630) &= ~2u;
    v3514 = sub_140B9EDF0_Offset;
  }
  ++*((_DWORD *)v3519 + 523);
  v3527 = &v3519[v3515];
  v3528 = 48;
  v3529 = &v3519[v3515];
  v3530 = 6LL;
  do
  {
    *v3529 = 0LL;
    v3528 -= 8;
    ++v3529;
    --v3530;
  }
  while ( v3530 );
  for ( ; v3528; --v3528 )
  {
    *(_BYTE *)v3529 = 0;
    v3529 = (_QWORD *)((char *)v3529 + 1);
  }
  *(_DWORD *)v3527 = v3513;
  *((_QWORD *)v3527 + 1) = &KiKvaShadow;
  if ( v3514 == 7 )
    sub_1404D2D9C(v3519, &KiKvaShadow, 1LL, v3527 + 24);
  *((_DWORD *)v3527 + 4) = 1;
  ++*((_DWORD *)v3519 + 530);
  v3531 = *((_DWORD *)v3519 + 525);
  _mm_prefetch(&KiKvaShadow, 0);
  v3532 = __ROL8__(*((_QWORD *)v3519 + 263) ^ (unsigned __int8)KiKvaShadow, v3531);
  for ( i83 = v3532; ; LODWORD(v3532) = i83 ^ v3532 )
  {
    i83 >>= 31;
    if ( !i83 )
      break;
  }
  v5183 = (unsigned int *)v3519;
  *((_DWORD *)v3527 + 5) = v3532 & 0x7FFFFFFF;
  v730 = v3521;
  ++*((_DWORD *)v3519 + 530);
  v4393 = (v3519[2203] & 8) == 0;
  Timer = v3521;
  if ( !v4393 )
  {
    _disable();
    if ( !(_BYTE)KdDebuggerNotPresent )
    {
      while ( 1 )
        ;
    }
    _enable();
    v3534 = *((unsigned int *)v3519 + 513);
    v3535 = v3534 + 48;
    if ( (unsigned int)(v3534 + 48) <= *((_DWORD *)v3519 + 665) )
    {
      v3536 = (__int64)v3519;
      *((_DWORD *)v3519 + 513) = v3535;
      Timer = v3521;
    }
    else
    {
      v3536 = GetRandomizedSafeContext(v3519, v3535, *((unsigned int *)v3519 + 593));
      Timer = v3521;
      if ( !v3536 )
        goto LABEL_3825;
      v3537 = *((_DWORD *)v3519 + 630);
      if ( (v3537 & 2) == 0 )
      {
        v3538 = *((_DWORD *)v3519 + 513);
        v3539 = *((_QWORD *)v3519 + 253);
        Timer = v3521;
        v3540 = (v3537 & 0x10000000) != 0 ? *((_DWORD *)v3519 + 593) : 0;
        if ( v3538 >= 8 )
        {
          Timer = v3521;
          v3541 = (unsigned __int64)v3538 >> 3;
          do
          {
            *(_QWORD *)v3519 = 0LL;
            v3538 -= 8;
            v3519 += 8;
            --v3541;
          }
          while ( v3541 );
        }
        for ( ; v3538; --v3538 )
          *v3519++ = 0;
        v3542 = *(_DWORD *)(v3536 + 2372);
        *(_DWORD *)(v3536 + 2372) = v3540;
        if ( v3540 == 3 )
        {
          (*(void (__fastcall **)(__int64))(v3536 + 872))(v3539);
        }
        else if ( (*(_DWORD *)(v3536 + 2520) & 0x8000000) != 0 || (Timer = v730, !v3540) )
        {
          (*(void (__fastcall **)(__int64))(v3536 + 264))(v3539);
        }
        else
        {
          (*(void (__fastcall **)(__int64, _QWORD))(v3536 + 568))(v3539 - 8, *(_QWORD *)(v3539 - 8));
          Timer = v730;
        }
        *(_DWORD *)(v3536 + 2372) = v3542;
      }
      *(_DWORD *)(v3536 + 2520) &= ~2u;
    }
    ++*(_DWORD *)(v3536 + 2092);
    v3543 = v3536 + v3534;
    v3544 = 48;
    v3519 = (_BYTE *)v3536;
    v3545 = (_QWORD *)(v3536 + v3534);
    v3546 = 6LL;
    do
    {
      *v3545 = 0LL;
      v3544 -= 8;
      ++v3545;
      --v3546;
    }
    while ( v3546 );
    for ( ; v3544; --v3544 )
    {
      *(_BYTE *)v3545 = 0;
      v3545 = (_QWORD *)((char *)v3545 + 1);
    }
    *(_DWORD *)v3543 = 47;
    *(_QWORD *)(v3543 + 8) = 0LL;
    *(_DWORD *)(v3543 + 16) = 0;
    v3547 = *((_QWORD *)v3519 + 263);
    for ( i84 = v3547; ; LODWORD(v3547) = i84 ^ v3547 )
    {
      i84 >>= 31;
      if ( !i84 )
        break;
    }
    v5183 = (unsigned int *)v3519;
    *(_DWORD *)(v3543 + 20) = v3547 & 0x7FFFFFFF;
  }
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  v3549 = *((unsigned int *)v3519 + 513);
  v3550 = v3549 + 48;
  if ( (unsigned int)(v3549 + 48) <= *((_DWORD *)v3519 + 665) )
  {
    v3551 = v3519;
    *((_DWORD *)v3519 + 513) = v3550;
  }
  else
  {
    v3551 = (_BYTE *)GetRandomizedSafeContext(v3519, v3550, *((unsigned int *)v3519 + 593));
    if ( !v3551 )
      goto LABEL_3825;
    v3552 = *((_DWORD *)v3519 + 630);
    if ( (v3552 & 2) == 0 )
    {
      v3553 = *((_DWORD *)v3519 + 513);
      v3554 = *((_QWORD *)v3519 + 253);
      v3555 = (v3552 & 0x10000000) != 0 ? *((_DWORD *)v3519 + 593) : 0;
      if ( v3553 >= 8 )
      {
        v3556 = (unsigned __int64)v3553 >> 3;
        do
        {
          *(_QWORD *)v3519 = 0LL;
          v3553 -= 8;
          v3519 += 8;
          --v3556;
        }
        while ( v3556 );
      }
      for ( ; v3553; --v3553 )
        *v3519++ = 0;
      v3557 = *((_DWORD *)v3551 + 593);
      *((_DWORD *)v3551 + 593) = v3555;
      if ( v3555 == 3 )
      {
        (*((void (__fastcall **)(__int64))v3551 + 109))(v3554);
      }
      else if ( (*((_DWORD *)v3551 + 630) & 0x8000000) != 0 || (Timer = v730, !v3555) )
      {
        (*((void (__fastcall **)(__int64))v3551 + 33))(v3554);
      }
      else
      {
        (*((void (__fastcall **)(__int64, _QWORD))v3551 + 71))(v3554 - 8, *(_QWORD *)(v3554 - 8));
        Timer = v730;
      }
      *((_DWORD *)v3551 + 593) = v3557;
    }
    *((_DWORD *)v3551 + 630) &= ~2u;
  }
  ++*((_DWORD *)v3551 + 523);
  v3558 = &v3551[v3549];
  v3559 = 48;
  v3560 = 6LL;
  v3561 = &v3551[v3549];
  do
  {
    *v3561 = 0LL;
    v3559 -= 8;
    ++v3561;
    --v3560;
  }
  while ( v3560 );
  for ( ; v3559; --v3559 )
  {
    *(_BYTE *)v3561 = 0;
    v3561 = (_QWORD *)((char *)v3561 + 1);
  }
  *(_DWORD *)v3558 = 46;
  *((_QWORD *)v3558 + 1) = 0LL;
  *((_DWORD *)v3558 + 4) = 0;
  v3562 = *((_QWORD *)v3551 + 263);
  for ( i85 = v3562; ; LODWORD(v3562) = i85 ^ v3562 )
  {
    i85 >>= 31;
    if ( !i85 )
      break;
  }
  Timer = v730;
  *((_DWORD *)v3558 + 5) = v3562 & 0x7FFFFFFF;
  v5183 = (unsigned int *)v3551;
  if ( (__26 & 2) == 0 )
    goto LABEL_4670;
  v3564 = 32;
  *(_QWORD *)(*((_QWORD *)v3551 + 252) + *((_QWORD *)v3551 + 199)) = 0LL;
  v3565 = *((_DWORD *)v3551 + 534);
  v3566 = (const char *)(*((_QWORD *)v3551 + 199) + *((_QWORD *)v3551 + 252));
  v3567 = *((unsigned int *)v3551 + 513);
  v3568 = *((unsigned int *)v3551 + 593);
  if ( v3565 != 7 )
    v3564 = 0;
  LODWORD(sub_140B9EDF0_Offset) = *((_DWORD *)v3551 + 534);
  LODWORD(v5022) = v3564;
  v3569 = v3567 + 48;
  if ( (unsigned int)(v3567 + 48) <= *((_DWORD *)v3551 + 665) )
  {
    v3570 = (__int64)v3551;
    *((_DWORD *)v3551 + 513) = v3569;
    goto LABEL_4658;
  }
  v3570 = GetRandomizedSafeContext(v3551, v3569, v3568);
  if ( !v3570 )
    goto LABEL_3364;
  v3571 = *((_DWORD *)v3551 + 630);
  if ( (v3571 & 2) == 0 )
  {
    v3572 = *((_DWORD *)v3551 + 513);
    v3573 = *((_QWORD *)v3551 + 253);
    v3574 = (v3571 & 0x10000000) != 0 ? *((_DWORD *)v3551 + 593) : 0;
    if ( v3572 >= 8 )
    {
      v3575 = (unsigned __int64)v3572 >> 3;
      do
      {
        *(_QWORD *)v3551 = 0LL;
        v3572 -= 8;
        v3551 += 8;
        --v3575;
      }
      while ( v3575 );
    }
    for ( ; v3572; --v3572 )
      *v3551++ = 0;
    v3576 = *(_DWORD *)(v3570 + 2372);
    *(_DWORD *)(v3570 + 2372) = v3574;
    if ( v3574 == 3 )
    {
      (*(void (__fastcall **)(__int64))(v3570 + 872))(v3573);
    }
    else if ( (*(_DWORD *)(v3570 + 2520) & 0x8000000) != 0 || !v3574 )
    {
      (*(void (__fastcall **)(__int64))(v3570 + 264))(v3573);
    }
    else
    {
      (*(void (__fastcall **)(__int64, _QWORD))(v3570 + 568))(v3573 - 8, *(_QWORD *)(v3573 - 8));
    }
    *(_DWORD *)(v3570 + 2372) = v3576;
  }
  *(_DWORD *)(v3570 + 2520) &= ~2u;
  v3564 = (int)v5022;
  v3565 = sub_140B9EDF0_Offset;
LABEL_4658:
  ++*(_DWORD *)(v3570 + 2092);
  v3577 = v3570 + v3567;
  v3578 = 48;
  v3551 = (_BYTE *)v3570;
  v3579 = (_QWORD *)(v3570 + v3567);
  v3580 = 6LL;
  do
  {
    *v3579 = 0LL;
    v3578 -= 8;
    ++v3579;
    --v3580;
  }
  while ( v3580 );
  for ( ; v3578; --v3578 )
  {
    *(_BYTE *)v3579 = 0;
    v3579 = (_QWORD *)((char *)v3579 + 1);
  }
  *(_DWORD *)v3577 = v3564;
  *(_QWORD *)(v3577 + 8) = v3566;
  if ( v3565 == 7 )
    sub_1404D2D9C(v3570, v3566, 8LL, v3577 + 24);
  *(_DWORD *)(v3577 + 16) = 8;
  v3581 = v3566;
  *(_DWORD *)(v3570 + 2120) += 8;
  if ( v3566 < v3566 + 8 )
  {
    do
    {
      _mm_prefetch(v3581, 0);
      v3581 += 64;
    }
    while ( v3581 < v3566 + 8 );
  }
  v3582 = __ROL8__(*(_QWORD *)v3566 ^ *(_QWORD *)(v3570 + 2104), *(_DWORD *)(v3570 + 2100));
  Timer = v730;
  v3583 = v3582 >> 31;
  if ( v3582 >> 31 )
  {
    Timer = v730;
    do
    {
      LODWORD(v3582) = v3583 ^ v3582;
      v3583 >>= 31;
    }
    while ( v3583 );
  }
  v5183 = (unsigned int *)v3570;
  *(_DWORD *)(v3577 + 20) = v3582 & 0x7FFFFFFF;
  *(_DWORD *)(v3570 + 2120) += 8;
LABEL_4670:
  if ( (__26 & 4) == 0 )
    goto LABEL_4701;
  v3584 = 32;
  *(_QWORD *)(*((_QWORD *)v3551 + 252) + 128LL) = 0LL;
  v3586 = *((unsigned int *)v3551 + 513);
  v3587 = (const char *)(*((_QWORD *)v3551 + 252) + 128LL);
  v3588 = *((unsigned int *)v3551 + 593);
  LODWORD(sub_140B9EDF0_Offset) = *((_DWORD *)v3551 + 534);
  v3585 = sub_140B9EDF0_Offset;
  if ( (_DWORD)sub_140B9EDF0_Offset != 7 )
    v3584 = 0;
  v3589 = v3586 + 48;
  if ( (unsigned int)(v3586 + 48) <= *((_DWORD *)v3551 + 665) )
  {
    v3590 = (__int64)v3551;
    *((_DWORD *)v3551 + 513) = v3589;
    goto LABEL_4690;
  }
  v3590 = GetRandomizedSafeContext(v3551, v3589, v3588);
  if ( !v3590 )
    goto LABEL_1073;
  v3591 = *((_DWORD *)v3551 + 630);
  if ( (v3591 & 2) == 0 )
  {
    v3592 = *((_DWORD *)v3551 + 513);
    v3593 = *((_QWORD *)v3551 + 253);
    v3594 = (v3591 & 0x10000000) != 0 ? *((_DWORD *)v3551 + 593) : 0;
    if ( v3592 >= 8 )
    {
      v3595 = (unsigned __int64)v3592 >> 3;
      do
      {
        *(_QWORD *)v3551 = 0LL;
        v3592 -= 8;
        v3551 += 8;
        --v3595;
      }
      while ( v3595 );
    }
    for ( ; v3592; --v3592 )
      *v3551++ = 0;
    v3596 = *(_DWORD *)(v3590 + 2372);
    v3597 = Timer;
    *(_DWORD *)(v3590 + 2372) = v3594;
    if ( v3594 == 3 )
    {
      (*(void (__fastcall **)(__int64))(v3590 + 872))(v3593);
    }
    else if ( (*(_DWORD *)(v3590 + 2520) & 0x8000000) != 0 || (Timer = v3597, !v3594) )
    {
      (*(void (__fastcall **)(__int64))(v3590 + 264))(v3593);
    }
    else
    {
      (*(void (__fastcall **)(__int64, _QWORD))(v3590 + 568))(v3593 - 8, *(_QWORD *)(v3593 - 8));
      Timer = v3597;
    }
    *(_DWORD *)(v3590 + 2372) = v3596;
  }
  *(_DWORD *)(v3590 + 2520) &= ~2u;
  v3585 = sub_140B9EDF0_Offset;
LABEL_4690:
  v3598 = v3590 + v3586;
  ++*(_DWORD *)(v3590 + 2092);
  v3551 = (_BYTE *)v3590;
  v3599 = 48;
  v3600 = 6LL;
  v3601 = (_QWORD *)(v3590 + v3586);
  do
  {
    *v3601 = 0LL;
    v3599 -= 8;
    ++v3601;
    --v3600;
  }
  while ( v3600 );
  for ( ; v3599; --v3599 )
  {
    *(_BYTE *)v3601 = 0;
    v3601 = (_QWORD *)((char *)v3601 + 1);
  }
  *(_DWORD *)v3598 = v3584;
  *(_QWORD *)(v3598 + 8) = v3587;
  if ( v3585 == 7 )
    sub_1404D2D9C(v3590, v3587, 8LL, v3598 + 24);
  *(_DWORD *)(v3598 + 16) = 8;
  v3602 = v3587;
  *(_DWORD *)(v3590 + 2120) += 8;
  if ( v3587 < v3587 + 8 )
  {
    do
    {
      _mm_prefetch(v3602, 0);
      v3602 += 64;
    }
    while ( v3602 < v3587 + 8 );
  }
  v3603 = __ROL8__(*(_QWORD *)v3587 ^ *(_QWORD *)(v3590 + 2104), *(_DWORD *)(v3590 + 2100));
  for ( i86 = v3603 >> 31; i86; i86 >>= 31 )
    LODWORD(v3603) = i86 ^ v3603;
  v5183 = (unsigned int *)v3590;
  *(_DWORD *)(v3598 + 20) = v3603 & 0x7FFFFFFF;
  *(_DWORD *)(v3590 + 2120) += 8;
LABEL_4701:
  v3606 = 32;
  v3607 = *((unsigned int *)v3551 + 513);
  v3608 = *((unsigned int *)v3551 + 593);
  LODWORD(sub_140B9EDF0_Offset) = *((_DWORD *)v3551 + 534);
  v3605 = sub_140B9EDF0_Offset;
  if ( (_DWORD)sub_140B9EDF0_Offset != 7 )
    v3606 = 0;
  v3609 = v3607 + 48;
  if ( (unsigned int)(v3607 + 48) <= *((_DWORD *)v3551 + 665) )
  {
    v3610 = v3551;
    *((_DWORD *)v3551 + 513) = v3609;
    goto LABEL_4720;
  }
  v3610 = (_BYTE *)GetRandomizedSafeContext(v3551, v3609, v3608);
  if ( !v3610 )
    goto LABEL_1073;
  v3611 = *((_DWORD *)v3551 + 630);
  if ( (v3611 & 2) == 0 )
  {
    v3612 = *((_DWORD *)v3551 + 513);
    v3613 = *((_QWORD *)v3551 + 253);
    v3614 = (v3611 & 0x10000000) != 0 ? *((_DWORD *)v3551 + 593) : 0;
    if ( v3612 >= 8 )
    {
      v3615 = (unsigned __int64)v3612 >> 3;
      do
      {
        *(_QWORD *)v3551 = 0LL;
        v3612 -= 8;
        v3551 += 8;
        --v3615;
      }
      while ( v3615 );
    }
    for ( ; v3612; --v3612 )
      *v3551++ = 0;
    v3616 = *((_DWORD *)v3610 + 593);
    v3617 = Timer;
    *((_DWORD *)v3610 + 593) = v3614;
    if ( v3614 == 3 )
    {
      (*((void (__fastcall **)(__int64))v3610 + 109))(v3613);
    }
    else if ( (*((_DWORD *)v3610 + 630) & 0x8000000) != 0 || (Timer = v3617, !v3614) )
    {
      (*((void (__fastcall **)(__int64))v3610 + 33))(v3613);
    }
    else
    {
      (*((void (__fastcall **)(__int64, _QWORD))v3610 + 71))(v3613 - 8, *(_QWORD *)(v3613 - 8));
      Timer = v3617;
    }
    v3605 = sub_140B9EDF0_Offset;
    *((_DWORD *)v3610 + 593) = v3616;
  }
  *((_DWORD *)v3610 + 630) &= ~2u;
LABEL_4720:
  ++*((_DWORD *)v3610 + 523);
  v3618 = &v3610[v3607];
  v3619 = 48;
  v3620 = 6LL;
  v3621 = &v3610[v3607];
  do
  {
    *v3621 = 0LL;
    v3619 -= 8;
    ++v3621;
    --v3620;
  }
  while ( v3620 );
  for ( ; v3619; --v3619 )
  {
    *(_BYTE *)v3621 = 0;
    v3621 = (_QWORD *)((char *)v3621 + 1);
  }
  *(_DWORD *)v3618 = v3606;
  *((_QWORD *)v3618 + 1) = &_ti_a;
  if ( v3605 == 7 )
    sub_1404D2D9C(v3610, &_ti_a, 344LL, v3618 + 24);
  *((_DWORD *)v3618 + 4) = 344;
  v3622 = &_ti_a;
  *((_DWORD *)v3610 + 530) += 344;
  v3623 = (const char *)&_ti_a;
  v3624 = *((_DWORD *)v3610 + 525);
  v3625 = *((_QWORD *)v3610 + 263);
  do
  {
    _mm_prefetch(v3623, 0);
    v3623 += 64;
  }
  while ( v3623 < (const char *)&GUID_EM_CPU_TYPE_INTEL_DTT_DISABLE );
  v3626 = *((_QWORD *)v3610 + 263);
  v3627 = 2;
  do
  {
    v3628 = 8LL;
    do
    {
      v3629 = v3622[1] ^ __ROL8__(*v3622 ^ v3626, v3624);
      v3622 += 2;
      v3626 = __ROL8__(v3629, v3624);
      --v3628;
    }
    while ( v3628 );
    v3630 = (__ROL8__(v3625 ^ ((char *)v3622 - (char *)&_ti_a), 17) ^ v3625 ^ (unsigned __int64)((char *)v3622
                                                                                               - (char *)&_ti_a))
          * (unsigned __int128)0x7010008004002001uLL;
    v5370 = *((_QWORD *)&v3630 + 1);
    v3624 = ((unsigned __int8)v3630 ^ (unsigned __int8)(BYTE8(v3630) ^ v3624)) & 0x3F;
    if ( !v3624 )
      LOBYTE(v3624) = 1;
    --v3627;
  }
  while ( v3627 );
  v3631 = 88;
  v3632 = 11LL;
  do
  {
    v3626 = __ROL8__(*v3622++ ^ v3626, v3624);
    v3631 -= 8;
    --v3632;
  }
  while ( v3632 );
  for ( ; v3631; --v3631 )
  {
    v3633 = *(unsigned __int8 *)v3622;
    v3622 = (__int64 *)((char *)v3622 + 1);
    v3626 = __ROL8__(v3633 ^ v3626, v3624);
  }
  for ( i87 = v3626; ; LODWORD(v3626) = i87 ^ v3626 )
  {
    i87 >>= 31;
    if ( !i87 )
      break;
  }
  v730 = Timer;
  *((_DWORD *)v3618 + 5) = v3626 & 0x7FFFFFFF;
  *((_DWORD *)v3610 + 530) += 344;
  v4393 = (*((_DWORD *)v3610 + 630) & 0x20000000) == 0;
  Timer = v730;
  v5183 = (unsigned int *)v3610;
  LODWORD(sub_140B9EDF0_Offset) = 0;
  LODWORD(v5022) = 0;
  if ( v4393 )
  {
    v3635 = (unsigned int)v5059;
    v3636 = *((unsigned int *)v3610 + 593);
    v3637 = *((_DWORD *)v3610 + 513) - v5059;
    LODWORD(sub_140B9EDF0_Offset) = *((_DWORD *)v3610 + 513);
    v3638 = sub_140B9EDF0_Offset + 48;
    if ( (unsigned int)(sub_140B9EDF0_Offset + 48) <= *((_DWORD *)v3610 + 665) )
    {
      v3639 = (__int64)v3610;
      *((_DWORD *)v3610 + 513) = v3638;
      v3641 = v730;
    }
    else
    {
      v3639 = GetRandomizedSafeContext(v3610, v3638, v3636);
      if ( !v3639 )
        goto LABEL_4506;
      v3640 = *((_DWORD *)v3610 + 630);
      v3641 = v730;
      if ( (v3640 & 2) == 0 )
      {
        v3642 = *((_DWORD *)v3610 + 513);
        v3643 = *((_QWORD *)v3610 + 253);
        v3644 = (v3640 & 0x10000000) != 0 ? *((_DWORD *)v3610 + 593) : 0;
        if ( v3642 >= 8 )
        {
          v3645 = (unsigned __int64)v3642 >> 3;
          do
          {
            *(_QWORD *)v3610 = 0LL;
            v3642 -= 8;
            v3610 += 8;
            --v3645;
          }
          while ( v3645 );
        }
        for ( ; v3642; --v3642 )
          *v3610++ = 0;
        v3646 = *(_DWORD *)(v3639 + 2372);
        *(_DWORD *)(v3639 + 2372) = v3644;
        if ( v3644 == 3 )
        {
          (*(void (__fastcall **)(__int64))(v3639 + 872))(v3643);
        }
        else if ( (*(_DWORD *)(v3639 + 2520) & 0x8000000) != 0 || !v3644 )
        {
          (*(void (__fastcall **)(__int64))(v3639 + 264))(v3643);
        }
        else
        {
          (*(void (__fastcall **)(__int64, _QWORD))(v3639 + 568))(v3643 - 8, *(_QWORD *)(v3643 - 8));
        }
        *(_DWORD *)(v3639 + 2372) = v3646;
      }
      *(_DWORD *)(v3639 + 2520) &= ~2u;
      v3635 = (unsigned int)v5059;
    }
    v3647 = (unsigned int)sub_140B9EDF0_Offset;
    v3648 = 48;
    ++*(_DWORD *)(v3639 + 2092);
    v3649 = v3639 + v3647;
    v3610 = (_BYTE *)v3639;
    v3650 = (_QWORD *)v3649;
    v3651 = 6LL;
    do
    {
      *v3650 = 0LL;
      v3648 -= 8;
      ++v3650;
      --v3651;
    }
    while ( v3651 );
    for ( ; v3648; --v3648 )
    {
      *(_BYTE *)v3650 = 0;
      v3650 = (_QWORD *)((char *)v3650 + 1);
    }
    *(_DWORD *)v3649 = 42;
    *(_QWORD *)(v3649 + 8) = 0LL;
    *(_DWORD *)(v3649 + 16) = 0;
    v3652 = *(_QWORD *)(v3639 + 2104);
    for ( i88 = v3652; ; LODWORD(v3652) = i88 ^ v3652 )
    {
      i88 >>= 31;
      if ( !i88 )
        break;
    }
    v3654 = v3641;
    *(_DWORD *)(v3649 + 20) = v3652 & 0x7FFFFFFF;
    *(_DWORD *)(v3649 + 32) = v3635;
    v3655 = (_QWORD *)(v3639 + v3635);
    *(_DWORD *)(v3649 + 36) = v3637;
    v3656 = v3655;
    *(_DWORD *)(v3639 + 2120) += v3637;
    v3657 = (const char *)v3655;
    v3658 = *(_DWORD *)(v3639 + 2100);
    v3659 = *(_QWORD *)(v3639 + 2104);
    v3660 = (unsigned __int64)v3655 + v3637;
    Timer = v3654;
    if ( (unsigned __int64)v3655 < v3660 )
    {
      Timer = v3654;
      do
      {
        _mm_prefetch(v3657, 0);
        v3657 += 64;
      }
      while ( (unsigned __int64)v3657 < v3660 );
    }
    v3661 = v3659;
    for ( i89 = v3637 >> 7; i89; --i89 )
    {
      v3663 = 8LL;
      do
      {
        v3664 = v3656[1] ^ __ROL8__(*v3656 ^ v3661, v3658);
        v3656 += 2;
        v3661 = __ROL8__(v3664, v3658);
        --v3663;
      }
      while ( v3663 );
      v3665 = (__ROL8__(v3659 ^ ((char *)v3656 - (char *)v3655), 17) ^ v3659 ^ (unsigned __int64)((char *)v3656
                                                                                                - (char *)v3655))
            * (unsigned __int128)0x7010008004002001uLL;
      v5371 = *((_QWORD *)&v3665 + 1);
      v3658 = (BYTE8(v3665) ^ (unsigned __int8)(v3665 ^ v3658)) & 0x3F;
      if ( !v3658 )
        LOBYTE(v3658) = 1;
    }
    v3666 = v3637 & 0x7F;
    if ( v3666 >= 8 )
    {
      v3667 = (unsigned __int64)v3666 >> 3;
      do
      {
        v3661 = __ROL8__(*v3656++ ^ v3661, v3658);
        v3666 -= 8;
        --v3667;
      }
      while ( v3667 );
    }
    for ( ; v3666; --v3666 )
    {
      v3668 = *(unsigned __int8 *)v3656;
      v3656 = (_QWORD *)((char *)v3656 + 1);
      v3661 = __ROL8__(v3668 ^ v3661, v3658);
    }
    *(_QWORD *)(v3649 + 24) = v3661;
    LODWORD(v5022) = *((_DWORD *)v3610 + 513);
    v5183 = (unsigned int *)v3610;
  }
  v3669 = 0;
  LODWORD(sub_140B9FDF0_Offset) = 0;
  while ( 2 )
  {
    v3670 = 0LL;
    _disable();
    v3671 = *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *((_QWORD *)v3610 + 203));
    _enable();
    (*((void (__fastcall **)(__int64))v3610 + 47))(v3671);
    LOBYTE(v3672) = 1;
    (*((void (__fastcall **)(_QWORD, __int64))v3610 + 30))(*((_QWORD *)v3610 + 166), v3672);
    v3673 = (PVOID *)PsLoadedModuleList;
    if ( PsLoadedModuleList != &PsLoadedModuleList )
    {
      v3674 = (const UNICODE_STRING *)((char *)&unk_140E00288 + 16 * v3669);
      while ( 1 )
      {
        v3675 = (char *)v3673 - *((_QWORD *)v3610 + 235);
        if ( RtlEqualUnicodeString(v3674, (PCUNICODE_STRING)&v3675[*((_QWORD *)v3610 + 238)], 1u) )
          break;
        v3673 = (PVOID *)*v3673;
        if ( v3673 == &PsLoadedModuleList )
          goto LABEL_4788;
      }
      v3670 = *(_QWORD *)&v3675[*((_QWORD *)v3610 + 236)];
LABEL_4788:
      v3669 = sub_140B9FDF0_Offset;
    }
    (*((void (__fastcall **)(_QWORD))v3610 + 37))(*((_QWORD *)v3610 + 166));
    (*((void (**)(void))v3610 + 48))();
    if ( !v3670 )
      goto LABEL_4821;
    v3676 = *((unsigned int *)v3610 + 513);
    v3677 = &asc_140E002A8[8 * v3669];
    v3678 = v3676 + ((*v3677 + 7) & 0xFFFFFFF8) + 48;
    if ( v3678 <= *((_DWORD *)v3610 + 665) )
    {
      v3679 = (__int64)v3610;
      *((_DWORD *)v3610 + 513) = v3678;
      goto LABEL_4807;
    }
    v3679 = GetRandomizedSafeContext(v3610, v3678, *((unsigned int *)v3610 + 593));
    if ( !v3679 )
    {
      v5183 = 0LL;
      goto LABEL_3654;
    }
    v3680 = *((_DWORD *)v3610 + 630);
    if ( (v3680 & 2) == 0 )
    {
      v3681 = *((_DWORD *)v3610 + 513);
      v3682 = *((_QWORD *)v3610 + 253);
      v3683 = (v3680 & 0x10000000) != 0 ? *((_DWORD *)v3610 + 593) : 0;
      if ( v3681 >= 8 )
      {
        v3684 = (unsigned __int64)v3681 >> 3;
        do
        {
          *(_QWORD *)v3610 = 0LL;
          v3681 -= 8;
          v3610 += 8;
          --v3684;
        }
        while ( v3684 );
      }
      for ( ; v3681; --v3681 )
        *v3610++ = 0;
      v3685 = *(_DWORD *)(v3679 + 2372);
      v3686 = Timer;
      *(_DWORD *)(v3679 + 2372) = v3683;
      if ( v3683 == 3 )
      {
        (*(void (__fastcall **)(__int64))(v3679 + 872))(v3682);
      }
      else if ( (*(_DWORD *)(v3679 + 2520) & 0x8000000) != 0 || (Timer = v3686, !v3683) )
      {
        (*(void (__fastcall **)(__int64))(v3679 + 264))(v3682);
      }
      else
      {
        (*(void (__fastcall **)(__int64, _QWORD))(v3679 + 568))(v3682 - 8, *(_QWORD *)(v3682 - 8));
        Timer = v3686;
      }
      *(_DWORD *)(v3679 + 2372) = v3685;
    }
    *(_DWORD *)(v3679 + 2520) &= ~2u;
LABEL_4807:
    v3687 = v3679 + v3676;
    ++*(_DWORD *)(v3679 + 2092);
    v3610 = (_BYTE *)v3679;
    v3688 = 48;
    v3689 = 6LL;
    v3690 = (_QWORD *)v3687;
    do
    {
      *v3690 = 0LL;
      v3688 -= 8;
      ++v3690;
      --v3689;
    }
    while ( v3689 );
    for ( ; v3688; --v3688 )
    {
      *(_BYTE *)v3690 = 0;
      v3690 = (_QWORD *)((char *)v3690 + 1);
    }
    *(_DWORD *)v3687 = 28;
    *(_QWORD *)(v3687 + 8) = 0LL;
    *(_DWORD *)(v3687 + 16) = 0;
    v3691 = *((_QWORD *)v3610 + 263);
    for ( i90 = v3691; ; LODWORD(v3691) = i90 ^ v3691 )
    {
      i90 >>= 31;
      if ( !i90 )
        break;
    }
    *(_DWORD *)(v3687 + 20) = v3691 & 0x7FFFFFFF;
    *(_QWORD *)(v3687 + 24) = v3670;
    v3693 = (char *)(v3687 + 48);
    *(_WORD *)(v3687 + 40) = *v3677;
    v3694 = *v3677;
    v3695 = (_QWORD *)*((_QWORD *)v3677 + 1);
    if ( v3694 >= 8 )
    {
      v3696 = (unsigned __int64)*v3677 >> 3;
      do
      {
        v3694 -= 8;
        *(_QWORD *)v3693 = *v3695++;
        v3693 += 8;
        --v3696;
      }
      while ( v3696 );
    }
    if ( v3694 )
    {
      v3697 = v3693 - (char *)v3695;
      do
      {
        *((_BYTE *)v3695 + v3697) = *(_BYTE *)v3695;
        v3695 = (_QWORD *)((char *)v3695 + 1);
        --v3694;
      }
      while ( v3694 );
    }
    v3669 = sub_140B9FDF0_Offset;
LABEL_4821:
    LODWORD(sub_140B9FDF0_Offset) = ++v3669;
    if ( v3669 < 2 )
      continue;
    break;
  }
  v5183 = (unsigned int *)v3610;
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  v3698 = *((unsigned int *)v3610 + 513);
  v3699 = v3698 + 48;
  if ( (unsigned int)(v3698 + 48) <= *((_DWORD *)v3610 + 665) )
  {
    v731 = v3610;
    *((_DWORD *)v3610 + 513) = v3699;
  }
  else
  {
    v731 = (_BYTE *)GetRandomizedSafeContext(v3610, v3699, *((unsigned int *)v3610 + 593));
    if ( !v731 )
    {
      v730 = Timer;
      goto LABEL_4506;
    }
    v3700 = *((_DWORD *)v3610 + 630);
    if ( (v3700 & 2) == 0 )
    {
      v3701 = *((_DWORD *)v3610 + 513);
      v3702 = *((_QWORD *)v3610 + 253);
      v3703 = (v3700 & 0x10000000) != 0 ? *((_DWORD *)v3610 + 593) : 0;
      if ( v3701 >= 8 )
      {
        v3704 = (unsigned __int64)v3701 >> 3;
        do
        {
          *(_QWORD *)v3610 = 0LL;
          v3701 -= 8;
          v3610 += 8;
          --v3704;
        }
        while ( v3704 );
      }
      for ( ; v3701; --v3701 )
        *v3610++ = 0;
      v3705 = *((_DWORD *)v731 + 593);
      v3706 = Timer;
      *((_DWORD *)v731 + 593) = v3703;
      if ( v3703 == 3 )
      {
        (*((void (__fastcall **)(__int64))v731 + 109))(v3702);
      }
      else if ( (*((_DWORD *)v731 + 630) & 0x8000000) != 0 || (Timer = v3706, !v3703) )
      {
        (*((void (__fastcall **)(__int64))v731 + 33))(v3702);
      }
      else
      {
        (*((void (__fastcall **)(__int64, _QWORD))v731 + 71))(v3702 - 8, *(_QWORD *)(v3702 - 8));
        Timer = v3706;
      }
      *((_DWORD *)v731 + 593) = v3705;
    }
    *((_DWORD *)v731 + 630) &= ~2u;
  }
  ++*((_DWORD *)v731 + 523);
  v3707 = &v731[v3698];
  v3708 = 48;
  v3709 = &v731[v3698];
  v3710 = 6LL;
  do
  {
    *v3709 = 0LL;
    v3708 -= 8;
    ++v3709;
    --v3710;
  }
  while ( v3710 );
  for ( ; v3708; --v3708 )
  {
    *(_BYTE *)v3709 = 0;
    v3709 = (_QWORD *)((char *)v3709 + 1);
  }
  *(_DWORD *)v3707 = 24;
  *((_QWORD *)v3707 + 1) = 0LL;
  *((_DWORD *)v3707 + 4) = 0;
  v3711 = *((_QWORD *)v731 + 263);
  for ( i91 = v3711; ; LODWORD(v3711) = i91 ^ v3711 )
  {
    i91 >>= 31;
    if ( !i91 )
      break;
  }
  v3713 = Timer;
  *((_DWORD *)v3707 + 5) = v3711 & 0x7FFFFFFF;
  v4393 = (*((_DWORD *)v731 + 630) & 0x20000000) == 0;
  v5183 = (unsigned int *)v731;
  Timer = v3713;
  if ( v4393 )
  {
    _disable();
    if ( !(_BYTE)KdDebuggerNotPresent )
    {
      while ( 1 )
        ;
    }
    _enable();
    v3714 = *((unsigned int *)v731 + 513);
    v3715 = v3714 + 48;
    if ( (unsigned int)(v3714 + 48) <= *((_DWORD *)v731 + 665) )
    {
      v3716 = (__int64)v731;
      *((_DWORD *)v731 + 513) = v3715;
      Timer = v3713;
    }
    else
    {
      v3716 = GetRandomizedSafeContext(v731, v3715, *((unsigned int *)v731 + 593));
      Timer = v3713;
      if ( !v3716 )
      {
        v5183 = 0LL;
        v731 = 0LL;
        v730 = v3713;
        goto LABEL_1076;
      }
      v3717 = *((_DWORD *)v731 + 630);
      if ( (v3717 & 2) == 0 )
      {
        v3718 = *((_DWORD *)v731 + 513);
        v3719 = *((_QWORD *)v731 + 253);
        v3720 = v3713;
        Timer = v3713;
        v3721 = (v3717 & 0x10000000) != 0 ? *((_DWORD *)v731 + 593) : 0;
        if ( v3718 >= 8 )
        {
          Timer = v3713;
          v3722 = (unsigned __int64)v3718 >> 3;
          do
          {
            *(_QWORD *)v731 = 0LL;
            v3718 -= 8;
            v731 += 8;
            --v3722;
          }
          while ( v3722 );
        }
        for ( ; v3718; --v3718 )
          *v731++ = 0;
        v3723 = *(_DWORD *)(v3716 + 2372);
        *(_DWORD *)(v3716 + 2372) = v3721;
        if ( v3721 == 3 )
        {
          (*(void (__fastcall **)(__int64))(v3716 + 872))(v3719);
        }
        else if ( (*(_DWORD *)(v3716 + 2520) & 0x8000000) != 0 || (Timer = v3720, !v3721) )
        {
          (*(void (__fastcall **)(__int64))(v3716 + 264))(v3719);
        }
        else
        {
          (*(void (__fastcall **)(__int64, _QWORD))(v3716 + 568))(v3719 - 8, *(_QWORD *)(v3719 - 8));
          Timer = v3720;
        }
        *(_DWORD *)(v3716 + 2372) = v3723;
      }
      *(_DWORD *)(v3716 + 2520) &= ~2u;
    }
    v3724 = v3716 + v3714;
    ++*(_DWORD *)(v3716 + 2092);
    v731 = (_BYTE *)v3716;
    v3725 = (_QWORD *)(v3716 + v3714);
    v3726 = 48;
    v3727 = 6LL;
    do
    {
      *v3725 = 0LL;
      v3726 -= 8;
      ++v3725;
      --v3727;
    }
    while ( v3727 );
    for ( ; v3726; --v3726 )
    {
      *(_BYTE *)v3725 = 0;
      v3725 = (_QWORD *)((char *)v3725 + 1);
    }
    *(_DWORD *)v3724 = 15;
    *(_QWORD *)(v3724 + 8) = 0LL;
    *(_DWORD *)(v3724 + 16) = 0;
    v3728 = *((_QWORD *)v731 + 263);
    for ( i92 = v3728; ; LODWORD(v3728) = i92 ^ v3728 )
    {
      i92 >>= 31;
      if ( !i92 )
        break;
    }
    v5183 = (unsigned int *)v731;
    *(_DWORD *)(v3724 + 20) = v3728 & 0x7FFFFFFF;
  }
  v3730 = v731;
  v3731 = *((_QWORD *)v731 + 173) + 32LL;
  v5029 = (struct _KEVENT *)v3731;
  v3732 = *(_QWORD **)v3731;
  if ( !*(_QWORD *)v3731 )
  {
    v730 = Timer;
    goto LABEL_5744;
  }
  v3733 = 32;
  v3734 = *((_DWORD *)v731 + 534);
  v3735 = *((unsigned int *)v731 + 513);
  v3736 = *((unsigned int *)v731 + 593);
  v3737 = 4 * *(_DWORD *)(v3731 + 16);
  v5039 = *((_QWORD *)v731 + 174) + 32LL;
  LODWORD(sub_140B9FDF0_Offset) = v3734;
  if ( v3734 != 7 )
    v3733 = 0;
  LODWORD(v5024) = v3735;
  v3738 = v3735 + 48;
  LODWORD(v5020) = v3733;
  if ( (unsigned int)(v3735 + 48) <= *((_DWORD *)v731 + 665) )
  {
    *((_DWORD *)v731 + 513) = v3738;
    v3739 = (__int64)v731;
    goto LABEL_4900;
  }
  v3739 = GetRandomizedSafeContext(v731, v3738, v3736);
  if ( !v3739 )
    goto LABEL_5152;
  v3740 = *((_DWORD *)v731 + 630);
  if ( (v3740 & 2) == 0 )
  {
    v3741 = *((_DWORD *)v731 + 513);
    v3742 = *((_QWORD *)v731 + 253);
    v3743 = (v3740 & 0x10000000) != 0 ? *((_DWORD *)v731 + 593) : 0;
    if ( v3741 >= 8 )
    {
      v3744 = (unsigned __int64)v3741 >> 3;
      do
      {
        *(_QWORD *)v731 = 0LL;
        v3741 -= 8;
        v731 += 8;
        --v3744;
      }
      while ( v3744 );
    }
    for ( ; v3741; --v3741 )
      *v731++ = 0;
    v3745 = *(_DWORD *)(v3739 + 2372);
    v3746 = Timer;
    *(_DWORD *)(v3739 + 2372) = v3743;
    if ( v3743 == 3 )
    {
      (*(void (__fastcall **)(__int64))(v3739 + 872))(v3742);
    }
    else if ( (*(_DWORD *)(v3739 + 2520) & 0x8000000) != 0 || (Timer = v3746, !v3743) )
    {
      (*(void (__fastcall **)(__int64))(v3739 + 264))(v3742);
    }
    else
    {
      (*(void (__fastcall **)(__int64, _QWORD))(v3739 + 568))(v3742 - 8, *(_QWORD *)(v3742 - 8));
      Timer = v3746;
    }
    *(_DWORD *)(v3739 + 2372) = v3745;
    v3735 = (unsigned int)v5024;
  }
  *(_DWORD *)(v3739 + 2520) &= ~2u;
  v3733 = v5020;
  v3734 = sub_140B9FDF0_Offset;
LABEL_4900:
  v3747 = v3739 + v3735;
  ++*(_DWORD *)(v3739 + 2092);
  v3748 = 48;
  v3730 = (_BYTE *)v3739;
  v3749 = 6LL;
  v3750 = (_QWORD *)v3747;
  do
  {
    *v3750 = 0LL;
    v3748 -= 8;
    ++v3750;
    --v3749;
  }
  while ( v3749 );
  for ( ; v3748; --v3748 )
  {
    *(_BYTE *)v3750 = 0;
    v3750 = (_QWORD *)((char *)v3750 + 1);
  }
  *(_DWORD *)v3747 = v3733;
  *(_QWORD *)(v3747 + 8) = v3732;
  if ( v3734 == 7 && v3737 )
    sub_1404D2D9C(v3739, v3732, v3737, v3747 + 24);
  *(_DWORD *)(v3747 + 16) = v3737;
  v3751 = v3732;
  *(_DWORD *)(v3739 + 2120) += v3737;
  v3752 = (const char *)v3732;
  v3753 = *(_DWORD *)(v3739 + 2100);
  v3754 = *(_QWORD *)(v3739 + 2104);
  v3755 = (unsigned __int64)v3732 + v3737;
  if ( (unsigned __int64)v3732 < v3755 )
  {
    do
    {
      _mm_prefetch(v3752, 0);
      v3752 += 64;
    }
    while ( (unsigned __int64)v3752 < v3755 );
  }
  v3756 = *(_QWORD *)(v3739 + 2104);
  for ( i93 = v3737 >> 7; i93; --i93 )
  {
    v3758 = 8LL;
    do
    {
      v3759 = v3751[1] ^ __ROL8__(*v3751 ^ v3756, v3753);
      v3751 += 2;
      v3756 = __ROL8__(v3759, v3753);
      --v3758;
    }
    while ( v3758 );
    v3760 = (__ROL8__(v3754 ^ ((char *)v3751 - (char *)v3732), 17) ^ v3754 ^ (unsigned __int64)((char *)v3751
                                                                                              - (char *)v3732))
          * (unsigned __int128)0x7010008004002001uLL;
    v5372 = *((_QWORD *)&v3760 + 1);
    v3753 = (BYTE8(v3760) ^ (unsigned __int8)(v3760 ^ v3753)) & 0x3F;
    if ( !v3753 )
      LOBYTE(v3753) = 1;
  }
  v3761 = v3737 & 0x7F;
  if ( v3761 >= 8 )
  {
    v3762 = (unsigned __int64)(v3737 & 0x7F) >> 3;
    do
    {
      v3756 = __ROL8__(*v3751++ ^ v3756, v3753);
      v3761 -= 8;
      --v3762;
    }
    while ( v3762 );
  }
  for ( ; v3761; --v3761 )
  {
    v3763 = *(unsigned __int8 *)v3751;
    v3751 = (_QWORD *)((char *)v3751 + 1);
    v3756 = __ROL8__(v3763 ^ v3756, v3753);
  }
  for ( i94 = v3756 >> 31; i94; i94 >>= 31 )
    LODWORD(v3756) = i94 ^ v3756;
  v3765 = Timer;
  *(_DWORD *)(v3747 + 20) = v3756 & 0x7FFFFFFF;
  *((_DWORD *)v3730 + 530) += v3737;
  v3766 = 32;
  v3767 = *((_DWORD *)v3730 + 534);
  v3768 = *((unsigned int *)v3730 + 513);
  v3769 = *((unsigned int *)v3730 + 593);
  if ( v3767 != 7 )
    v3766 = 0;
  Timer = v3765;
  LODWORD(sub_140B9FDF0_Offset) = v3767;
  v3770 = v3768 + 48;
  if ( (unsigned int)(v3768 + 48) <= *((_DWORD *)v3730 + 665) )
  {
    v3771 = (__int64)v3730;
    *((_DWORD *)v3730 + 513) = v3770;
    goto LABEL_4942;
  }
  v3771 = GetRandomizedSafeContext(v3730, v3770, v3769);
  if ( !v3771 )
    goto LABEL_5152;
  v3772 = *((_DWORD *)v3730 + 630);
  if ( (v3772 & 2) == 0 )
  {
    v3773 = *((_DWORD *)v3730 + 513);
    v3774 = *((_QWORD *)v3730 + 253);
    v3775 = (v3772 & 0x10000000) != 0 ? *((_DWORD *)v3730 + 593) : 0;
    if ( v3773 >= 8 )
    {
      v3776 = (unsigned __int64)v3773 >> 3;
      do
      {
        *(_QWORD *)v3730 = 0LL;
        v3773 -= 8;
        v3730 += 8;
        --v3776;
      }
      while ( v3776 );
    }
    for ( ; v3773; --v3773 )
      *v3730++ = 0;
    v3777 = *(_DWORD *)(v3771 + 2372);
    *(_DWORD *)(v3771 + 2372) = v3775;
    if ( v3775 == 3 )
    {
      (*(void (__fastcall **)(__int64))(v3771 + 872))(v3774);
    }
    else if ( (*(_DWORD *)(v3771 + 2520) & 0x8000000) != 0 || !v3775 )
    {
      (*(void (__fastcall **)(__int64))(v3771 + 264))(v3774);
    }
    else
    {
      (*(void (__fastcall **)(__int64, _QWORD))(v3771 + 568))(v3774 - 8, *(_QWORD *)(v3774 - 8));
    }
    v3767 = sub_140B9FDF0_Offset;
    *(_DWORD *)(v3771 + 2372) = v3777;
  }
  *(_DWORD *)(v3771 + 2520) &= ~2u;
LABEL_4942:
  v3778 = v3771 + v3768;
  ++*(_DWORD *)(v3771 + 2092);
  v3730 = (_BYTE *)v3771;
  v3779 = (_QWORD *)v3778;
  v3780 = 48;
  v3781 = 6LL;
  do
  {
    *v3779 = 0LL;
    v3780 -= 8;
    ++v3779;
    --v3781;
  }
  while ( v3781 );
  for ( ; v3780; --v3780 )
  {
    *(_BYTE *)v3779 = 0;
    v3779 = (_QWORD *)((char *)v3779 + 1);
  }
  v3782 = v5029;
  *(_DWORD *)v3778 = v3766;
  *(_QWORD *)(v3778 + 8) = v3782;
  if ( v3767 == 7 )
    sub_1404D2D9C(v3730, v3782, 32LL, v3778 + 24);
  *(_DWORD *)(v3778 + 16) = 32;
  v3783 = v3782;
  *((_DWORD *)v3730 + 530) += 32;
  v3784 = (const char *)v3782;
  v3785 = *((_DWORD *)v3730 + 525);
  v3786 = *((_QWORD *)v3730 + 263);
  if ( v3782 < (struct _KEVENT *)&v3782[1].Header.WaitListHead )
  {
    do
    {
      _mm_prefetch(v3784, 0);
      v3784 += 64;
    }
    while ( v3784 < (const char *)&v3782[1].Header.WaitListHead );
  }
  v3787 = 32;
  v3788 = 4LL;
  do
  {
    v3786 = __ROL8__(*(_QWORD *)&v3783->Header.Lock ^ v3786, v3785);
    v3783 = (struct _KEVENT *)((char *)v3783 + 8);
    v3787 -= 8;
    --v3788;
  }
  while ( v3788 );
  for ( ; v3787; --v3787 )
  {
    Type = v3783->Header.Type;
    v3783 = (struct _KEVENT *)((char *)v3783 + 1);
    v3786 = __ROL8__(Type ^ v3786, v3785);
  }
  for ( i95 = v3786; ; LODWORD(v3786) = i95 ^ v3786 )
  {
    i95 >>= 31;
    if ( !i95 )
      break;
  }
  v3791 = v5039;
  *(_DWORD *)(v3778 + 20) = v3786 & 0x7FFFFFFF;
  v3792 = v3765;
  *((_DWORD *)v3730 + 530) += 32;
  v3793 = 32;
  v3794 = *((_DWORD *)v3730 + 534);
  v3795 = *(_QWORD **)v3791;
  v3796 = *((unsigned int *)v3730 + 513);
  v3797 = *((unsigned int *)v3730 + 593);
  v3798 = 4 * *(_DWORD *)(v3791 + 16);
  Timer = v3792;
  LODWORD(sub_140B9FDF0_Offset) = v3794;
  if ( v3794 != 7 )
    v3793 = 0;
  v3799 = v3796 + 48;
  LODWORD(v5020) = v3793;
  if ( (unsigned int)(v3796 + 48) <= *((_DWORD *)v3730 + 665) )
  {
    v3800 = (__int64)v3730;
    *((_DWORD *)v3730 + 513) = v3799;
    v3803 = v3792;
    v5038 = (ULONG_PTR)v3792;
    goto LABEL_4977;
  }
  v3800 = GetRandomizedSafeContext(v3730, v3799, v3797);
  if ( !v3800 )
    goto LABEL_5152;
  v3801 = Timer;
  v3802 = *((_DWORD *)v3730 + 630);
  v3803 = Timer;
  v5038 = (ULONG_PTR)Timer;
  if ( (v3802 & 2) == 0 )
  {
    v3804 = *((_DWORD *)v3730 + 513);
    v3805 = *((_QWORD *)v3730 + 253);
    v5038 = (ULONG_PTR)Timer;
    v3806 = (v3802 & 0x10000000) != 0 ? *((_DWORD *)v3730 + 593) : 0;
    if ( v3804 >= 8 )
    {
      v5038 = (ULONG_PTR)Timer;
      v3807 = (unsigned __int64)v3804 >> 3;
      do
      {
        *(_QWORD *)v3730 = 0LL;
        v3804 -= 8;
        v3730 += 8;
        --v3807;
      }
      while ( v3807 );
    }
    for ( ; v3804; --v3804 )
      *v3730++ = 0;
    v3808 = *(_DWORD *)(v3800 + 2372);
    v3809 = (ULONG_PTR)v3801;
    *(_DWORD *)(v3800 + 2372) = v3806;
    if ( v3806 == 3 )
    {
      (*(void (__fastcall **)(__int64))(v3800 + 872))(v3805);
    }
    else
    {
      if ( (*(_DWORD *)(v3800 + 2520) & 0x8000000) == 0 )
      {
        v5038 = (ULONG_PTR)v3801;
        if ( v3806 )
        {
          (*(void (__fastcall **)(__int64, _QWORD))(v3800 + 568))(v3805 - 8, *(_QWORD *)(v3805 - 8));
          v3803 = (struct _KTIMER *)v3809;
          v5038 = v3809;
          goto LABEL_4974;
        }
      }
      (*(void (__fastcall **)(__int64))(v3800 + 264))(v3805);
    }
    v3803 = (struct _KTIMER *)v5038;
LABEL_4974:
    v3793 = v5020;
    *(_DWORD *)(v3800 + 2372) = v3808;
  }
  *(_DWORD *)(v3800 + 2520) &= ~2u;
  v3794 = sub_140B9FDF0_Offset;
LABEL_4977:
  ++*(_DWORD *)(v3800 + 2092);
  v3810 = v3800 + v3796;
  v3811 = 48;
  v3730 = (_BYTE *)v3800;
  v3812 = (_QWORD *)v3810;
  v3813 = 6LL;
  do
  {
    *v3812 = 0LL;
    v3811 -= 8;
    ++v3812;
    --v3813;
  }
  while ( v3813 );
  for ( ; v3811; --v3811 )
  {
    *(_BYTE *)v3812 = 0;
    v3812 = (_QWORD *)((char *)v3812 + 1);
  }
  *(_DWORD *)v3810 = v3793;
  *(_QWORD *)(v3810 + 8) = v3795;
  if ( v3794 == 7 && v3798 )
  {
    sub_1404D2D9C(v3800, v3795, v3798, v3810 + 24);
    v3803 = (struct _KTIMER *)v5038;
  }
  *(_DWORD *)(v3810 + 16) = v3798;
  v3814 = v3795;
  *(_DWORD *)(v3800 + 2120) += v3798;
  v3815 = (const char *)v3795;
  v3816 = *(_DWORD *)(v3800 + 2100);
  v3817 = *(_QWORD *)(v3800 + 2104);
  v3818 = (unsigned __int64)v3795 + v3798;
  if ( (unsigned __int64)v3795 < v3818 )
  {
    do
    {
      _mm_prefetch(v3815, 0);
      v3815 += 64;
    }
    while ( (unsigned __int64)v3815 < v3818 );
  }
  v3819 = *(_QWORD *)(v3800 + 2104);
  v3820 = v3798 >> 7;
  if ( v3798 >> 7 )
  {
    do
    {
      v3821 = 8LL;
      do
      {
        v3822 = v3814[1] ^ __ROL8__(*v3814 ^ v3819, v3816);
        v3814 += 2;
        v3819 = __ROL8__(v3822, v3816);
        --v3821;
      }
      while ( v3821 );
      v3823 = (__ROL8__(v3817 ^ ((char *)v3814 - (char *)v3795), 17) ^ v3817 ^ (unsigned __int64)((char *)v3814
                                                                                                - (char *)v3795))
            * (unsigned __int128)0x7010008004002001uLL;
      v5373 = *((_QWORD *)&v3823 + 1);
      v3816 = (BYTE8(v3823) ^ (unsigned __int8)(v3823 ^ v3816)) & 0x3F;
      if ( !v3816 )
        LOBYTE(v3816) = 1;
      --v3820;
    }
    while ( v3820 );
    v3803 = (struct _KTIMER *)v5038;
  }
  v3824 = v3798 & 0x7F;
  if ( v3824 >= 8 )
  {
    v3825 = (unsigned __int64)(v3798 & 0x7F) >> 3;
    do
    {
      v3819 = __ROL8__(*v3814++ ^ v3819, v3816);
      v3824 -= 8;
      --v3825;
    }
    while ( v3825 );
  }
  for ( ; v3824; --v3824 )
  {
    v3826 = *(unsigned __int8 *)v3814;
    v3814 = (_QWORD *)((char *)v3814 + 1);
    v3819 = __ROL8__(v3826 ^ v3819, v3816);
  }
  for ( i96 = v3819 >> 31; i96; i96 >>= 31 )
    LODWORD(v3819) = i96 ^ v3819;
  *(_DWORD *)(v3810 + 20) = v3819 & 0x7FFFFFFF;
  v3828 = 32;
  *((_DWORD *)v3730 + 530) += v3798;
  v3829 = *((_DWORD *)v3730 + 534);
  v3830 = *((unsigned int *)v3730 + 513);
  v3831 = *((unsigned int *)v3730 + 593);
  if ( v3829 != 7 )
    v3828 = 0;
  Timer = v3803;
  LODWORD(sub_140B9FDF0_Offset) = v3829;
  v3832 = v3830 + 48;
  LODWORD(v5020) = v3828;
  if ( (unsigned int)(v3830 + 48) <= *((_DWORD *)v3730 + 665) )
  {
    v3833 = (__int64)v3730;
    *((_DWORD *)v3730 + 513) = v3832;
    v3835 = v3803;
    v5038 = (ULONG_PTR)v3803;
    goto LABEL_5020;
  }
  v3833 = GetRandomizedSafeContext(v3730, v3832, v3831);
  if ( !v3833 )
    goto LABEL_5152;
  v3834 = *((_DWORD *)v3730 + 630);
  v3835 = Timer;
  v5038 = (ULONG_PTR)Timer;
  if ( (v3834 & 2) == 0 )
  {
    v3836 = *((_DWORD *)v3730 + 513);
    v3837 = *((_QWORD *)v3730 + 253);
    v5038 = (ULONG_PTR)Timer;
    v3838 = (v3834 & 0x10000000) != 0 ? *((_DWORD *)v3730 + 593) : 0;
    if ( v3836 >= 8 )
    {
      v5038 = (ULONG_PTR)Timer;
      v3839 = (unsigned __int64)v3836 >> 3;
      do
      {
        *(_QWORD *)v3730 = 0LL;
        v3836 -= 8;
        v3730 += 8;
        --v3839;
      }
      while ( v3839 );
    }
    for ( ; v3836; --v3836 )
      *v3730++ = 0;
    v3840 = *(_DWORD *)(v3833 + 2372);
    *(_DWORD *)(v3833 + 2372) = v3838;
    if ( v3838 == 3 )
    {
      (*(void (__fastcall **)(__int64))(v3833 + 872))(v3837);
    }
    else if ( (*(_DWORD *)(v3833 + 2520) & 0x8000000) != 0 || (v5038 = (ULONG_PTR)v3835, !v3838) )
    {
      (*(void (__fastcall **)(__int64))(v3833 + 264))(v3837);
    }
    else
    {
      (*(void (__fastcall **)(__int64, _QWORD))(v3833 + 568))(v3837 - 8, *(_QWORD *)(v3837 - 8));
      v5038 = (ULONG_PTR)v3835;
    }
    v3828 = v5020;
    v3829 = sub_140B9FDF0_Offset;
    *(_DWORD *)(v3833 + 2372) = v3840;
  }
  *(_DWORD *)(v3833 + 2520) &= ~2u;
LABEL_5020:
  v3841 = v3833 + v3830;
  ++*(_DWORD *)(v3833 + 2092);
  v3842 = (_QWORD *)(v3833 + v3830);
  v3843 = 48;
  v3844 = 6LL;
  do
  {
    *v3842 = 0LL;
    v3843 -= 8;
    ++v3842;
    --v3844;
  }
  while ( v3844 );
  for ( ; v3843; --v3843 )
  {
    *(_BYTE *)v3842 = 0;
    v3842 = (_QWORD *)((char *)v3842 + 1);
  }
  *(_DWORD *)v3841 = v3828;
  v3845 = v5039;
  *(_QWORD *)(v3841 + 8) = v5039;
  if ( v3829 == 7 )
    sub_1404D2D9C(v3833, v3845, 32LL, v3841 + 24);
  *(_DWORD *)(v3841 + 16) = 32;
  *(_DWORD *)(v3833 + 2120) += 32;
  v3846 = (_QWORD *)v3845;
  v3847 = *(_DWORD *)(v3833 + 2100);
  v3848 = (const char *)v3845;
  v3849 = *(_QWORD *)(v3833 + 2104);
  if ( v3845 < v3845 + 32 )
  {
    do
    {
      _mm_prefetch(v3848, 0);
      v3848 += 64;
    }
    while ( (unsigned __int64)v3848 < v3845 + 32 );
  }
  v3850 = 32;
  v3851 = 4LL;
  do
  {
    v3849 = __ROL8__(*v3846++ ^ v3849, v3847);
    v3850 -= 8;
    --v3851;
  }
  while ( v3851 );
  for ( ; v3850; --v3850 )
  {
    v3852 = *(unsigned __int8 *)v3846;
    v3846 = (_QWORD *)((char *)v3846 + 1);
    v3849 = __ROL8__(v3852 ^ v3849, v3847);
  }
  for ( i97 = v3849; ; LODWORD(v3849) = i97 ^ v3849 )
  {
    i97 >>= 31;
    if ( !i97 )
      break;
  }
  v3854 = v5029;
  *(_DWORD *)(v3841 + 20) = v3849 & 0x7FFFFFFF;
  v3855 = 0;
  *(_DWORD *)(v3833 + 2120) += 32;
  v3856 = v3833;
  v4393 = (*(_DWORD *)(v3833 + 2520) & 0x20000000) == 0;
  v3857 = v3835;
  v3858 = *(_BYTE **)&v3854->Header.Lock;
  v5054 = *(_BYTE **)&v3854->Header.Lock;
  if ( !v4393 || !LODWORD(v3854->Header.WaitListHead.Blink) )
    goto LABEL_5091;
  v3859 = (struct _KTIMER *)v5038;
  v3860 = (PVOID)(v3833 + 624);
  HalExtensionList = (PVOID)(v3833 + 624);
  v3861 = (_BYTE *)v3833;
  v3862 = 0;
  do
  {
    v3863 = v3855;
    Timer = v3859;
    v3730 = (_BYTE *)v3833;
    v3864 = (*(__int64 (__fastcall **)(_BYTE *, _BYTE *, _QWORD))v3860)(
              &v3858[(__int64)*(int *)&v3858[4 * v3862] >> 4],
              v5374,
              0LL);
    v3865 = v5029;
    ++v3855;
    v3860 = HalExtensionList;
    v3858 = v5054;
    if ( v3864 )
      v3855 = v3863;
    v3857 = Timer;
    ++v3862;
    v3859 = Timer;
  }
  while ( v3862 < LODWORD(v5029->Header.WaitListHead.Blink) );
  LODWORD(i97) = 0;
  if ( !v3855 )
    goto LABEL_5091;
  v3866 = *(unsigned int *)(v3833 + 2052);
  v3867 = *((unsigned int *)v3861 + 593);
  LODWORD(sub_140B9FDF0_Offset) = v3866;
  v3868 = v3866 + 16 * v3855 + 48;
  if ( v3868 <= *((_DWORD *)v3861 + 665) )
  {
    *((_DWORD *)v3861 + 513) = v3868;
    LODWORD(v5020) = v3855;
    goto LABEL_5059;
  }
  v3856 = GetRandomizedSafeContext(v3861, v3868, v3867);
  if ( !v3856 )
    goto LABEL_5152;
  v3869 = *((_DWORD *)v3861 + 630);
  LODWORD(v5020) = v3855;
  if ( (v3869 & 2) == 0 )
  {
    v3870 = *((_DWORD *)v3861 + 513);
    v3871 = *((_QWORD *)v3861 + 253);
    LODWORD(v5020) = v3855;
    v3872 = (v3869 & 0x10000000) != 0 ? *((_DWORD *)v3861 + 593) : 0;
    if ( v3870 >= 8 )
    {
      LODWORD(v5020) = v3855;
      v3873 = (unsigned __int64)v3870 >> 3;
      do
      {
        *(_QWORD *)v3861 = 0LL;
        v3870 -= 8;
        v3861 += 8;
        --v3873;
      }
      while ( v3873 );
    }
    for ( ; v3870; --v3870 )
      *v3861++ = 0;
    v3874 = *(_DWORD *)(v3856 + 2372);
    *(_DWORD *)(v3856 + 2372) = v3872;
    if ( v3872 == 3 )
    {
      (*(void (__fastcall **)(__int64))(v3856 + 872))(v3871);
    }
    else if ( (*(_DWORD *)(v3856 + 2520) & 0x8000000) != 0 || (LODWORD(v5020) = v3855, !v3872) )
    {
      (*(void (__fastcall **)(__int64))(v3856 + 264))(v3871);
    }
    else
    {
      (*(void (__fastcall **)(__int64, _QWORD))(v3856 + 568))(v3871 - 8, *(_QWORD *)(v3871 - 8));
      LODWORD(v5020) = v3855;
    }
    *(_DWORD *)(v3856 + 2372) = v3874;
    v3866 = (unsigned int)v3866;
  }
  *(_DWORD *)(v3856 + 2520) &= ~2u;
  v3865 = v5029;
LABEL_5059:
  ++*(_DWORD *)(v3856 + 2092);
  v3875 = (int *)(v3856 + v3866);
  v3876 = 48;
  v3877 = v3875;
  v3878 = 6LL;
  do
  {
    *v3877 = 0LL;
    v3876 -= 8;
    ++v3877;
    --v3878;
  }
  while ( v3878 );
  for ( ; v3876; --v3876 )
  {
    *(_BYTE *)v3877 = 0;
    v3877 = (_QWORD *)((char *)v3877 + 1);
  }
  *v3875 = 10;
  *((_QWORD *)v3875 + 1) = 0LL;
  v3875[4] = 0;
  v3879 = *(_QWORD *)(v3856 + 2104);
  for ( i97 = v3879; ; LODWORD(v3879) = i97 ^ v3879 )
  {
    i97 >>= 31;
    if ( !i97 )
      break;
  }
  Timer = v3857;
  v3875[5] = v3879 & 0x7FFFFFFF;
  v3875[6] = 1;
  v3880 = v3875 + 12;
  v3875[7] = v3855;
  v3881 = v3857;
  v3730 = (_BYTE *)v3856;
  v3882 = v3856;
  if ( !LODWORD(v3865->Header.WaitListHead.Blink) )
  {
LABEL_5079:
    if ( *(_DWORD *)(v3856 + 2328) == (_DWORD)i97 )
    {
      Timer = v3881;
      *(_QWORD *)(v3856 + 2336) = v3856 - 0x5C5FC0A76E374B18LL;
      v3893 = 0LL;
      if ( v3875 )
      {
        *(_QWORD *)(v3856 + 2344) = (char *)v3875 - 0x4C48B4211BBACBEBLL;
        v3893 = *v3875;
      }
      else
      {
        *(_QWORD *)(v3856 + 2344) = 0LL;
        Timer = v3881;
      }
      *(_QWORD *)(v3856 + 2352) = v3893;
      *(_QWORD *)(v3856 + 2360) = 0LL;
      *(_DWORD *)(v3856 + 2328) = 1;
      v3894 = *(_DWORD *)(v3856 + 2520);
      if ( (v3894 & 0x20000000) == 0 && (*(_DWORD *)(v3856 + 2524) & 0x200000) != 0 && (v3894 & 1) != 0 )
      {
        v3895 = *(unsigned int *)(v3856 + 2676);
        v3896 = *(_QWORD *)(v3856 + 2104);
        v3897 = *(_QWORD *)(v3856 + 2680);
        v3898 = (_QWORD *)(v3856 + v3895);
        v3899 = v3856 + v3895 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v3856 + 2052) - v3895) >> 3);
        while ( v3898 != (_QWORD *)v3899 )
        {
          *v3898 ^= v3897;
          v3897 = ((v3896 ^ *v3898++) + __ROR8__(v3897, v3897 & 0x3F)) ^ 0xEFA;
        }
        goto LABEL_5148;
      }
    }
LABEL_5152:
    LODWORD(i97) = -1073741267;
    goto LABEL_5153;
  }
  v3883 = v5020;
  v3884 = v5054;
  HalExtensionList = v3875;
  v3885 = 0;
  Timer = v3881;
  do
  {
    v3886 = &v3884[(__int64)*(int *)&v3884[4 * v3885] >> 4];
    if ( !(*(__int64 (__fastcall **)(const char *, _BYTE *, _QWORD))(v3856 + 624))(v3886, v5374, 0LL) )
    {
      v3887 = 4;
      v3888 = v3886;
      *(_DWORD *)(v3856 + 2120) += 4;
      v3889 = v3886;
      for ( i98 = *(_QWORD *)(v3856 + 2104); v3889 < v3886 + 4; v3889 += 64 )
        _mm_prefetch(v3889, 0);
      do
      {
        v3891 = *(unsigned __int8 *)v3888++;
        i98 = __ROL8__(v3891 ^ i98, *(_DWORD *)(v3856 + 2100));
        --v3887;
      }
      while ( v3887 );
      for ( i99 = i98; ; LODWORD(i98) = i99 ^ i98 )
      {
        i99 >>= 31;
        if ( !i99 )
          break;
      }
      *v3880 ^= (i98 ^ *v3880) & 0x7FFFFFFF;
      v3880[1] = 4;
      *((_QWORD *)v3880 + 1) = v3886;
      v3880 += 4;
      if ( !--v3883 )
        break;
    }
    ++v3885;
  }
  while ( v3885 < LODWORD(v5029->Header.WaitListHead.Blink) );
  v3875 = (int *)HalExtensionList;
  LODWORD(i97) = 0;
  v3730 = (_BYTE *)v3856;
  if ( v3883 )
  {
    v3881 = Timer;
    goto LABEL_5079;
  }
  v3857 = Timer;
LABEL_5091:
  v3900 = i97;
  LODWORD(i97) = 0;
  Timer = v3857;
  v4393 = (*(_DWORD *)(v3856 + 2520) & 0x20000000) == 0;
  v3901 = v3857;
  v3730 = (_BYTE *)v3856;
  v3902 = *(struct _KEVENT **)v5039;
  v5029 = *(struct _KEVENT **)v5039;
  if ( !v4393 )
    goto LABEL_5153;
  Timer = v3857;
  if ( !*(_DWORD *)(v5039 + 16) )
    goto LABEL_5153;
  v3903 = (_QWORD *)v3856;
  v3904 = 0;
  do
  {
    v3905 = v3900;
    v3906 = (*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD))(v3856 + 624))(
              (__int64)v3902 + ((__int64)*((int *)&v3902->Header.Lock + v3904) >> 4),
              v5375,
              0LL);
    v3907 = v5039;
    ++v3900;
    v3902 = v5029;
    if ( v3906 )
      v3900 = v3905;
    ++v3904;
  }
  while ( v3904 < *(_DWORD *)(v5039 + 16) );
  LODWORD(i97) = 0;
  Timer = v3901;
  if ( !v3900 )
    goto LABEL_5153;
  v3908 = *(unsigned int *)(v3856 + 2372);
  LODWORD(sub_140B9FDF0_Offset) = *(_DWORD *)(v3856 + 2052);
  v3909 = 16 * v3900 + sub_140B9FDF0_Offset + 48;
  if ( v3909 <= *(_DWORD *)(v3856 + 2660) )
  {
    v3882 = v3856;
    *(_DWORD *)(v3856 + 2052) = v3909;
    Timer = v3901;
    v3881 = v3901;
  }
  else
  {
    Timer = v3901;
    v3882 = GetRandomizedSafeContext(v3856, v3909, v3908);
    if ( !v3882 )
    {
      v3730 = (_BYTE *)v3856;
      goto LABEL_5152;
    }
    v3910 = *(_DWORD *)(v3856 + 2520);
    v3881 = v3901;
    if ( (v3910 & 2) == 0 )
    {
      v3911 = *(_DWORD *)(v3856 + 2052);
      v3912 = *(_QWORD *)(v3856 + 2024);
      Timer = v3901;
      v3913 = (v3910 & 0x10000000) != 0 ? *(_DWORD *)(v3856 + 2372) : 0;
      if ( v3911 >= 8 )
      {
        Timer = v3901;
        v3914 = (unsigned __int64)v3911 >> 3;
        do
        {
          *v3903 = 0LL;
          v3911 -= 8;
          ++v3903;
          --v3914;
        }
        while ( v3914 );
      }
      for ( ; v3911; --v3911 )
      {
        *(_BYTE *)v3903 = 0;
        v3903 = (_QWORD *)((char *)v3903 + 1);
      }
      LODWORD(v5020) = *(_DWORD *)(v3882 + 2372);
      *(_DWORD *)(v3882 + 2372) = v3913;
      if ( v3913 == 3 )
      {
        (*(void (__fastcall **)(__int64))(v3882 + 872))(v3912);
      }
      else
      {
        if ( (*(_DWORD *)(v3882 + 2520) & 0x8000000) == 0 )
        {
          Timer = v3901;
          if ( v3913 )
          {
            (*(void (__fastcall **)(__int64, _QWORD))(v3882 + 568))(v3912 - 8, *(_QWORD *)(v3912 - 8));
            v3881 = v3901;
            Timer = v3901;
            goto LABEL_5114;
          }
        }
        (*(void (__fastcall **)(__int64))(v3882 + 264))(v3912);
      }
      v3881 = Timer;
LABEL_5114:
      *(_DWORD *)(v3882 + 2372) = v5020;
    }
    *(_DWORD *)(v3882 + 2520) &= ~2u;
    v3907 = v5039;
  }
  v3915 = (unsigned int)sub_140B9FDF0_Offset;
  ++*(_DWORD *)(v3882 + 2092);
  v3916 = (int *)(v3882 + v3915);
  v3917 = 48;
  v3730 = (_BYTE *)v3882;
  v3918 = 6LL;
  v3919 = v3916;
  do
  {
    *v3919 = 0LL;
    v3917 -= 8;
    ++v3919;
    --v3918;
  }
  while ( v3918 );
  for ( ; v3917; --v3917 )
  {
    *(_BYTE *)v3919 = 0;
    v3919 = (_QWORD *)((char *)v3919 + 1);
  }
  *v3916 = 10;
  *((_QWORD *)v3916 + 1) = 0LL;
  v3916[4] = 0;
  v3920 = *(_QWORD *)(v3882 + 2104);
  for ( i97 = v3920; ; LODWORD(v3920) = i97 ^ v3920 )
  {
    i97 >>= 31;
    if ( !i97 )
      break;
  }
  Timer = v3881;
  v3916[5] = v3920 & 0x7FFFFFFF;
  v3921 = v3916 + 12;
  v3916[6] = 1;
  v3916[7] = v3900;
  if ( !*(_DWORD *)(v3907 + 16) )
  {
LABEL_5138:
    if ( *(_DWORD *)(v3882 + 2328) == (_DWORD)i97 )
    {
      Timer = v3881;
      *(_QWORD *)(v3882 + 2336) = v3882 - 0x5C5FC0A76E374B18LL;
      v3931 = 0LL;
      if ( v3916 )
      {
        *(_QWORD *)(v3882 + 2344) = (char *)v3916 - 0x4C48B4211BBACBEBLL;
        v3931 = *v3916;
      }
      else
      {
        *(_QWORD *)(v3882 + 2344) = 0LL;
        Timer = v3881;
      }
      *(_QWORD *)(v3882 + 2352) = v3931;
      *(_QWORD *)(v3882 + 2360) = 0LL;
      *(_DWORD *)(v3882 + 2328) = 1;
      v3932 = *(_DWORD *)(v3882 + 2520);
      if ( (v3932 & 0x20000000) == 0 && (*(_DWORD *)(v3882 + 2524) & 0x200000) != 0 && (v3932 & 1) != 0 )
      {
        v3933 = *(unsigned int *)(v3882 + 2676);
        v3934 = *(_QWORD *)(v3882 + 2104);
        v3897 = *(_QWORD *)(v3882 + 2680);
        v3935 = (_QWORD *)(v3882 + v3933);
        v3936 = v3882 + v3933 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v3882 + 2052) - v3933) >> 3);
        while ( v3935 != (_QWORD *)v3936 )
        {
          *v3935 ^= v3897;
          v3897 = ((v3934 ^ *v3935++) + __ROR8__(v3897, v3897 & 0x3F)) ^ 0xEFA;
        }
LABEL_5148:
        *(_DWORD *)(v3882 + 2524) &= ~0x200000u;
        if ( v3897 != *(_QWORD *)(v3882 + 2688) )
        {
          v3937 = *(_QWORD *)(v3882 + 1416);
          v3938 = *(_DWORD *)(v3882 + 2052);
          *(_QWORD *)v3937 = v3882;
          *(_DWORD *)(v3937 + 16) = v3938;
          if ( !*(_DWORD *)(v3882 + 2328) )
          {
            v3939 = *(_QWORD *)(v3882 + 1416);
            v3940 = v3897 ^ *(_QWORD *)(v3882 + 2688);
            Timer = v3881;
            *(_QWORD *)(v3939 + 24) = v3940;
          }
          sub_140B9E384(v3882, 0LL, v3897, 256LL);
        }
        goto LABEL_5152;
      }
    }
    goto LABEL_5152;
  }
  v5038 = (ULONG_PTR)v3916;
  v3922 = 0;
  v3923 = v5029;
  Timer = v3881;
  do
  {
    v3924 = (char *)v3923 + ((__int64)*((int *)&v3923->Header.Lock + v3922) >> 4);
    if ( !(*(__int64 (__fastcall **)(const char *, _BYTE *, _QWORD))(v3882 + 624))(v3924, v5375, 0LL) )
    {
      v3925 = v3924;
      *(_DWORD *)(v3882 + 2120) += 4;
      v3926 = v3924;
      for ( i100 = *(_QWORD *)(v3882 + 2104); v3926 < v3924 + 4; v3926 += 64 )
        _mm_prefetch(v3926, 0);
      v3928 = 4;
      do
      {
        v3929 = *(unsigned __int8 *)v3925++;
        i100 = __ROL8__(v3929 ^ i100, *(_DWORD *)(v3882 + 2100));
        --v3928;
      }
      while ( v3928 );
      v3923 = v5029;
      for ( i101 = i100; ; LODWORD(i100) = i101 ^ i100 )
      {
        i101 >>= 31;
        if ( !i101 )
          break;
      }
      *v3921 ^= (*v3921 ^ i100) & 0x7FFFFFFF;
      v3921[1] = 4;
      *((_QWORD *)v3921 + 1) = v3924;
      v3921 += 4;
      if ( !--v3900 )
        break;
    }
    ++v3922;
  }
  while ( v3922 < *(_DWORD *)(v5039 + 16) );
  v3916 = (int *)v5038;
  LODWORD(i97) = 0;
  if ( v3900 )
  {
    v3881 = Timer;
    goto LABEL_5138;
  }
LABEL_5153:
  v5183 = (unsigned int *)v3730;
  v731 = v3730;
  if ( (i97 & 0x80000000) != 0LL )
  {
LABEL_5740:
    v730 = Timer;
    goto LABEL_3826;
  }
  v3941 = *((_QWORD *)v3730 + 173);
  v5376[0] = v3730;
  v3942 = *(_QWORD *)(v3941 + 32);
  v3943 = (__int64 (__fastcall *)(_QWORD, _QWORD))*((_QWORD *)v3730 + 66);
  v5029 = (struct _KEVENT *)v3942;
  v3944 = v3943(v3942, v5497);
  v3945 = v5499;
  v3946 = v3944;
  v5039 = v3944;
  LODWORD(sub_140B9FDF0_Offset) = v5499;
  v5038 = v5498;
  if ( !v5498 )
  {
    if ( (*((_DWORD *)v3730 + 630) & 0x100000) == 0 )
    {
      v5159 = -402653175;
      KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, v3942, 5uLL, v5498);
    }
    v730 = Timer;
    v5183 = (unsigned int *)v3730;
    goto LABEL_3826;
  }
  v3947 = Timer;
  v5448 = 0LL;
  v3948 = 4;
  v3949 = &v5449;
  do
  {
    *(_BYTE *)v3949 = 0;
    v3949 = (int *)((char *)v3949 + 1);
    --v3948;
  }
  while ( v3948 );
  v3950 = 0;
  if ( !*((_DWORD *)v3730 + 523) )
    goto LABEL_5198;
  v3951 = v5449;
  v3952 = HIDWORD(v5448);
  v3953 = v5448;
  Timer = v3947;
  while ( 2 )
  {
    v3954 = v3730;
    if ( *((_QWORD *)v3730 + 344) )
      v3954 = (_BYTE *)*((_QWORD *)v3730 + 344);
    v3955 = 0;
    v3956 = &v3954[*((unsigned int *)v3954 + 522)];
    if ( v3953 && v3952 <= v3950 )
    {
      v3955 = v3952;
      v3956 = &v3954[v3951];
    }
    if ( v3955 != v3950 )
    {
      v3957 = v3950 - v3955;
      v3955 = v3950;
      while ( 1 )
      {
        if ( *(_DWORD *)v3956 == 1 )
        {
LABEL_5184:
          v3958 = 4 * (*((_DWORD *)v3956 + 4) / 0xCu) + 48;
          goto LABEL_5185;
        }
        if ( *(_DWORD *)v3956 == 7 )
        {
          v3958 = (unsigned int)(24 * (*((_DWORD *)v3956 + 6) + 2));
          goto LABEL_5185;
        }
        if ( *(_DWORD *)v3956 == 8 )
          break;
        switch ( *(_DWORD *)v3956 )
        {
          case 0xA:
            v3958 = (unsigned int)(16 * (*((_DWORD *)v3956 + 7) + 3));
            break;
          case 0x1C:
            v3959 = *((unsigned __int16 *)v3956 + 20);
LABEL_5182:
            v3958 = (v3959 + 55) & 0xFFFFFFF8;
            break;
          case 0x1E:
            v3958 = (((*((_DWORD *)v3956 + 9) != 0 ? *((_DWORD *)v3956 + 9) - 1 : 0) / 0xCu + 7) & 0xFFFFFFF8)
                  + 24 * (*((unsigned __int16 *)v3956 + 20) + 2);
            break;
          case 0x21:
            v3958 = 20
                  * (unsigned int)(((*((_DWORD *)v3956 + 8) & 0xFFF)
                                  + (unsigned __int64)*((unsigned int *)v3956 + 10)
                                  + 4095) >> 12)
                  + 48;
            break;
          case 0x2B:
            goto LABEL_5184;
          default:
            v3958 = 48LL;
            break;
        }
LABEL_5185:
        v3956 += v3958;
        if ( !--v3957 )
        {
          v3942 = (ULONG_PTR)v5029;
          v3946 = v5039;
          v3945 = sub_140B9FDF0_Offset;
          goto LABEL_5187;
        }
      }
      v3959 = *((unsigned __int16 *)v3956 + 16);
      goto LABEL_5182;
    }
LABEL_5187:
    v3953 = 1;
    v3951 = (_DWORD)v3956 - (_DWORD)v3954;
    LODWORD(v5448) = 1;
    v3952 = v3955;
    v5449 = (_DWORD)v3956 - (_DWORD)v3954;
    HIDWORD(v5448) = v3955;
    v3960 = *(_DWORD *)v3956;
    if ( (*(_DWORD *)v3956 != 1 && v3960 != 12 && v3960 != 43
       || *((_QWORD *)v3956 + 1) != v3946
       || *((_DWORD *)v3956 + 4) != v3945)
      && ((unsigned int)(v3960 - 33) > 1 || *((_QWORD *)v3956 + 4) != v5038) )
    {
      if ( ++v3950 >= *((_DWORD *)v3730 + 523) )
        goto LABEL_5197;
      continue;
    }
    break;
  }
  if ( v3956 )
  {
LABEL_5725:
    v5183 = (unsigned int *)v3730;
    goto LABEL_5726;
  }
LABEL_5197:
  v3947 = Timer;
LABEL_5198:
  v3961 = (__int64 (__fastcall *)(_QWORD, _QWORD))*((_QWORD *)v3730 + 66);
  v5210 = v3730;
  v3962 = v3961(v3942, v5500);
  v3964 = v5501;
  v3965 = (struct _KEVENT *)v3962;
  v3966 = v5502;
  v5029 = (struct _KEVENT *)v3962;
  v5160[0] = v5502;
  v5039 = v5501;
  if ( !v5501 )
  {
    if ( (*((_DWORD *)v3730 + 630) & 0x100000) == 0 )
    {
      v5160[1] = -402653175;
      KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, v3942, 5uLL, 0LL);
    }
    v730 = v3947;
LABEL_5512:
    Timer = v730;
    v5183 = (unsigned int *)v731;
    goto LABEL_3826;
  }
  v3967 = 4;
  v5450 = 0LL;
  v3968 = &v5451;
  Timer = v3947;
  v3969 = 0LL;
  do
  {
    *(_BYTE *)v3968 = 0;
    v3968 = (int *)((char *)v3968 + 1);
    --v3967;
  }
  while ( v3967 );
  v3970 = 0LL;
  if ( *((_DWORD *)v3730 + 523) )
  {
    v3971 = v5451;
    LODWORD(v3969) = HIDWORD(v5450);
    v3972 = v5450;
    Timer = v3947;
    while ( 1 )
    {
      v3963 = v3730;
      if ( *((_QWORD *)v3730 + 344) )
        v3963 = (_BYTE *)*((_QWORD *)v3730 + 344);
      v3973 = 0;
      v3974 = (struct _KEVENT **)&v3963[*((unsigned int *)v3963 + 522)];
      if ( v3972 && (unsigned int)v3969 <= (unsigned int)v3970 )
      {
        v3973 = v3969;
        v3974 = (struct _KEVENT **)&v3963[v3971];
      }
      if ( v3973 != (_DWORD)v3970 )
        break;
LABEL_5231:
      LODWORD(v5450) = 1;
      v3971 = (_DWORD)v3974 - (_DWORD)v3963;
      v3969 = v3973;
      v5451 = (_DWORD)v3974 - (_DWORD)v3963;
      v3972 = 1;
      HIDWORD(v5450) = v3973;
      v3978 = *(_DWORD *)v3974;
      if ( (*(_DWORD *)v3974 == 1 || v3978 == 12 || v3978 == 43) && v3974[1] == v3965 && *((_DWORD *)v3974 + 4) == v3966
        || (unsigned int)(v3978 - 33) <= 1 && v3974[4] == (struct _KEVENT *)v3964 )
      {
        if ( !v3974 )
          goto LABEL_5241;
LABEL_5713:
        v731 = v3730;
        goto LABEL_5714;
      }
      v3970 = (unsigned int)(v3970 + 1);
      if ( (unsigned int)v3970 >= *((_DWORD *)v3730 + 523) )
        goto LABEL_5241;
    }
    v3975 = (unsigned int)v3970 - v3973;
    v3973 = v3970;
    while ( 2 )
    {
      if ( *(_DWORD *)v3974 == 1 )
        goto LABEL_5228;
      if ( *(_DWORD *)v3974 != 7 )
      {
        switch ( *(_DWORD *)v3974 )
        {
          case 8:
            v3977 = *((unsigned __int16 *)v3974 + 16);
            break;
          case 0xA:
            v3976 = (unsigned int)(16 * (*((_DWORD *)v3974 + 7) + 3));
            goto LABEL_5229;
          case 0x1C:
            v3977 = *((unsigned __int16 *)v3974 + 20);
            break;
          default:
            switch ( *(_DWORD *)v3974 )
            {
              case 0x1E:
                v3976 = (((*((_DWORD *)v3974 + 9) != 0 ? *((_DWORD *)v3974 + 9) - 1 : 0) / 0xCu + 7) & 0xFFFFFFF8)
                      + 24 * (*((unsigned __int16 *)v3974 + 20) + 2);
                break;
              case 0x21:
                v3976 = 20
                      * (unsigned int)((((_DWORD)v3974[4] & 0xFFF)
                                      + (unsigned __int64)*((unsigned int *)v3974 + 10)
                                      + 4095) >> 12)
                      + 48;
                break;
              case 0x2B:
LABEL_5228:
                v3976 = 4 * (*((_DWORD *)v3974 + 4) / 0xCu) + 48;
                break;
              default:
                v3976 = 48LL;
                break;
            }
LABEL_5229:
            v3974 = (struct _KEVENT **)((char *)v3974 + v3976);
            if ( !--v3975 )
            {
              v3964 = v5039;
              v3965 = v5029;
              goto LABEL_5231;
            }
            continue;
        }
        v3976 = (v3977 + 55) & 0xFFFFFFF8;
        goto LABEL_5229;
      }
      break;
    }
    v3976 = (unsigned int)(24 * (*((_DWORD *)v3974 + 6) + 2));
    goto LABEL_5229;
  }
LABEL_5241:
  LODWORD(sub_140B9FDF0_Offset) = v5160[0];
  (*((void (__fastcall **)(ULONG_PTR, __int64, _BYTE *, __int64))v3730 + 65))(v3964, v3969, v3963, v3970);
  LOBYTE(v3979) = 1;
  v3980 = (*((__int64 (__fastcall **)(ULONG_PTR, __int64, _QWORD, _DWORD *))v3730 + 64))(v3964, v3979, 0LL, v5161);
  if ( !v3980
    || v5161[0] < 0x28u
    || (*((unsigned int (__fastcall **)(ULONG_PTR, _BYTE *, __int64))v3730 + 28))(
         v3964 + *(unsigned int *)(v3980 + 12),
         v3730 + 2416,
         5LL) )
  {
    goto LABEL_5713;
  }
  v3981 = (char **)*((_QWORD *)v3730 + 165);
  _disable();
  v3982 = *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *((_QWORD *)v3730 + 203));
  _enable();
  (*((void (__fastcall **)(__int64))v3730 + 47))(v3982);
  LOBYTE(v3983) = 1;
  (*((void (__fastcall **)(_QWORD, __int64))v3730 + 31))(*((_QWORD *)v3730 + 166), v3983);
  v3984 = *v3981;
  if ( *v3981 != (char *)v3981 )
  {
    v3985 = *((_QWORD *)v3730 + 235);
    while ( 1 )
    {
      v3986 = *(_QWORD *)&v3984[*((_QWORD *)v3730 + 236) - v3985];
      if ( v3964 >= v3986 && v3964 < v3986 + *(unsigned int *)&v3984[*((_QWORD *)v3730 + 237) - v3985] )
        break;
      v3984 = *(char **)v3984;
      if ( v3984 == (char *)v3981 )
        goto LABEL_5251;
    }
    (*((void (__fastcall **)(char *, __int64))v3730 + 29))(&v3984[-v3985], 1LL);
  }
LABEL_5251:
  v3987 = Timer;
  v3988 = Timer;
  (*((void (__fastcall **)(_QWORD))v3730 + 37))(*((_QWORD *)v3730 + 166));
  (*((void (**)(void))v3730 + 48))();
  if ( (*((_DWORD *)v3730 + 630) & 0x20000000) != 0 )
  {
    v3990 = sub_140BA596C(v5376, v3964, 15LL);
    v3730 = (_BYTE *)v5376[0];
    v3991 = v3990;
    v731 = (_BYTE *)v5376[0];
    if ( v3990 < 0 )
      goto LABEL_5510;
    goto LABEL_5714;
  }
  v5531[4] = 0LL;
  v5503[4] = 0;
  LOBYTE(v3989) = 1;
  v3992 = (*((__int64 (__fastcall **)(ULONG_PTR, __int64, _QWORD, _DWORD *))v3730 + 64))(v3964, v3989, 0LL, v5160);
  v3994 = 0;
  if ( v3992 )
    v3994 = v5160[0];
  else
    v5160[0] = 0;
  v5531[1] = v3992;
  v3995 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))*((_QWORD *)v3730 + 64);
  v5503[1] = v3994;
  LOBYTE(v3993) = 1;
  v3997 = v3995(v3964, v3993, 12LL, v5160);
  v5054 = (_BYTE *)v3997;
  v3998 = 0;
  if ( v3997 )
    v3998 = v5160[0];
  else
    v5160[0] = 0;
  LODWORD(v5020) = v3998;
  v5531[2] = v3997;
  v5503[2] = v3998;
  LOBYTE(v3996) = 1;
  v3999 = (*((__int64 (__fastcall **)(ULONG_PTR, __int64, __int64, _DWORD *))v3730 + 64))(v3964, v3996, 10LL, v5160);
  v4000 = 0;
  if ( v3999 )
    v4000 = v5160[0];
  else
    v5160[0] = 0;
  v5531[3] = v3999;
  v4001 = (__int64 (__fastcall *)(_QWORD))*((_QWORD *)v3730 + 65);
  v5503[3] = v4000;
  v4002 = v4001(v3964);
  if ( !v4002 )
  {
    v4003 = *((_DWORD *)v3730 + 630);
    if ( (v4003 & 0x100000) == 0 )
    {
      v5161[1] = -402653175;
      KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, v3964, 7uLL, 0LL);
    }
    if ( !*((_DWORD *)v3730 + 582) )
    {
      *((_QWORD *)v3730 + 292) = v3730 - 0x5C5FC0A76E374B18LL;
      *((_QWORD *)v3730 + 293) = 0LL;
      *((_QWORD *)v3730 + 294) = 271LL;
      *((_QWORD *)v3730 + 295) = v3964;
      *((_DWORD *)v3730 + 582) = 1;
      if ( (v4003 & 0x20000000) == 0 )
      {
        v4393 = (*((_DWORD *)v3730 + 631) & 0x200000) == 0;
        Timer = v3988;
        if ( !v4393 )
        {
          Timer = v3988;
          if ( (v4003 & 1) != 0 )
          {
            v4004 = *((unsigned int *)v3730 + 669);
            v4005 = *((_QWORD *)v3730 + 263);
            v4006 = *((_DWORD *)v3730 + 513) - v4004;
            v4007 = *((_QWORD *)v3730 + 335);
            v4008 = (__int64 *)&v3730[v4004];
            Timer = v3988;
            v4009 = (unsigned __int64)&v3730[8 * ((unsigned __int64)v4006 >> 3) + v4004];
            if ( &v3730[v4004] != (_BYTE *)v4009 )
            {
              Timer = v3988;
              do
              {
                *v4008 ^= v4007;
                v4010 = *v4008++;
                v4007 = ((v4005 ^ v4010) + __ROR8__(v4007, v4007 & 0x3F)) ^ 0xEFA;
              }
              while ( v4008 != (__int64 *)v4009 );
            }
            *((_DWORD *)v3730 + 631) &= ~0x200000u;
            if ( v4007 != *((_QWORD *)v3730 + 336) )
            {
              v4011 = *((_QWORD *)v3730 + 177);
              v4012 = *((_DWORD *)v3730 + 513);
              *(_QWORD *)v4011 = v3730;
              *(_DWORD *)(v4011 + 16) = v4012;
              if ( !*((_DWORD *)v3730 + 582) )
              {
                v4013 = *((_QWORD *)v3730 + 177);
                v4014 = v4007 ^ *((_QWORD *)v3730 + 336);
                Timer = v3988;
                *(_QWORD *)(v4013 + 24) = v4014;
              }
              sub_140B9E384(v3730, 0LL, v4007, 256LL);
            }
          }
        }
      }
    }
    v731 = (_BYTE *)v5376[0];
    goto LABEL_5511;
  }
  v4015 = (*((__int64 (__fastcall **)(ULONG_PTR, int *))v3730 + 147))(v3964, &v5377);
  v4016 = *((unsigned int *)v3730 + 513);
  v4017 = *((unsigned int *)v3730 + 593);
  v5531[5] = v4015;
  v5503[5] = v5377;
  v5503[0] = *(_DWORD *)(v4002 + 84);
  v4018 = v4016 + 288;
  v5531[0] = v3964;
  if ( (unsigned int)(v4016 + 288) <= *((_DWORD *)v3730 + 665) )
  {
    v731 = v3730;
    *((_DWORD *)v3730 + 513) = v4018;
  }
  else
  {
    v731 = (_BYTE *)GetRandomizedSafeContext(v3730, v4018, v4017);
    if ( !v731 )
    {
      v731 = (_BYTE *)v5376[0];
      v5210 = 0LL;
      goto LABEL_5511;
    }
    v4019 = *((_DWORD *)v3730 + 630);
    if ( (v4019 & 2) == 0 )
    {
      v4020 = *((_DWORD *)v3730 + 513);
      v4021 = *((_QWORD *)v3730 + 253);
      v4022 = (v4019 & 0x10000000) != 0 ? *((_DWORD *)v3730 + 593) : 0;
      if ( v4020 >= 8 )
      {
        v4023 = (unsigned __int64)v4020 >> 3;
        do
        {
          *(_QWORD *)v3730 = 0LL;
          v4020 -= 8;
          v3730 += 8;
          --v4023;
        }
        while ( v4023 );
      }
      for ( ; v4020; --v4020 )
        *v3730++ = 0;
      v4024 = *((_DWORD *)v731 + 593);
      *((_DWORD *)v731 + 593) = v4022;
      if ( v4022 == 3 )
      {
        (*((void (__fastcall **)(__int64))v731 + 109))(v4021);
      }
      else if ( (*((_DWORD *)v731 + 630) & 0x8000000) != 0 || (Timer = v3987, !v4022) )
      {
        (*((void (__fastcall **)(__int64))v731 + 33))(v4021);
      }
      else
      {
        (*((void (__fastcall **)(__int64, _QWORD))v731 + 71))(v4021 - 8, *(_QWORD *)(v4021 - 8));
        Timer = v3987;
      }
      *((_DWORD *)v731 + 593) = v4024;
    }
    *((_DWORD *)v731 + 630) &= ~2u;
  }
  v4025 = 6LL;
  *((_DWORD *)v731 + 523) += 6;
  HalExtensionList = &v731[v4016];
  v4026 = v5531;
  v5027 = 6LL;
  v4027 = &v731[v4016];
  v5026 = v5531;
  v4028 = v5503;
  do
  {
    v4029 = (unsigned int)*v4028;
    v4030 = 48;
    v4031 = (_QWORD *)*v4026;
    v4032 = v4027;
    LODWORD(v5024) = *v4028;
    do
    {
      *v4032 = 0LL;
      v4030 -= 8;
      ++v4032;
      --v4025;
    }
    while ( v4025 );
    for ( ; v4030; --v4030 )
    {
      *(_BYTE *)v4032 = 0;
      v4032 = (_QWORD *)((char *)v4032 + 1);
    }
    *(_DWORD *)v4027 = 0;
    v4033 = v4031;
    *((_QWORD *)v4027 + 1) = v4031;
    v4034 = (const char *)v4031;
    *((_DWORD *)v4027 + 4) = v4029;
    *((_DWORD *)v731 + 530) += v4029;
    v4035 = *((_DWORD *)v731 + 525);
    v4036 = *((_QWORD *)v731 + 263);
    if ( v4031 < (_QWORD *)((char *)v4031 + v4029) )
    {
      do
      {
        _mm_prefetch(v4034, 0);
        v4034 += 64;
      }
      while ( v4034 < (const char *)v4031 + v4029 );
    }
    v4037 = *((_QWORD *)v731 + 263);
    v4038 = (unsigned int)v4029 >> 7;
    if ( (unsigned int)v4029 >> 7 )
    {
      do
      {
        v4039 = 8LL;
        do
        {
          v4040 = v4033[1] ^ __ROL8__(*v4033 ^ v4037, v4035);
          v4033 += 2;
          v4037 = __ROL8__(v4040, v4035);
          --v4039;
        }
        while ( v4039 );
        v4041 = (__ROL8__(v4036 ^ ((char *)v4033 - (char *)v4031), 17) ^ v4036 ^ (unsigned __int64)((char *)v4033
                                                                                                  - (char *)v4031))
              * (unsigned __int128)0x7010008004002001uLL;
        v5378 = *((_QWORD *)&v4041 + 1);
        v4035 = ((unsigned __int8)(v4041 ^ BYTE8(v4041)) ^ (unsigned __int8)v4035) & 0x3F;
        if ( !v4035 )
          LOBYTE(v4035) = 1;
        --v4038;
      }
      while ( v4038 );
      LODWORD(v4029) = v5024;
      v4026 = v5026;
    }
    v4042 = v4029 & 0x7F;
    if ( v4042 >= 8 )
    {
      v4043 = (unsigned __int64)(v4029 & 0x7F) >> 3;
      do
      {
        v4037 = __ROL8__(*v4033++ ^ v4037, v4035);
        v4042 -= 8;
        --v4043;
      }
      while ( v4043 );
    }
    for ( ; v4042; --v4042 )
    {
      v4044 = *(unsigned __int8 *)v4033;
      v4033 = (_QWORD *)((char *)v4033 + 1);
      v4037 = __ROL8__(v4044 ^ v4037, v4035);
    }
    for ( i102 = v4037 >> 31; i102; i102 >>= 31 )
      LODWORD(v4037) = i102 ^ v4037;
    v4025 = 6LL;
    *((_DWORD *)v4027 + 5) = v4037 & 0x7FFFFFFF;
    ++v4026;
    *((_DWORD *)v731 + 530) += v4029;
    v4027 += 48;
    v5026 = v4026;
    ++v4028;
    --v5027;
  }
  while ( v5027 );
  v4046 = HalExtensionList;
  v4047 = v5039;
  *(_DWORD *)HalExtensionList = 44;
  v4046[3] = v4047;
  v4048 = *((_DWORD *)v731 + 630);
  if ( (v4048 & 0x8000000) == 0 && (v4048 & 0x100000) == 0 && (*((_DWORD *)v731 + 631) & 0x8000) != 0 )
  {
    *((_DWORD *)v4046 + 8) |= 1u;
    if ( (unsigned int)sub_140B9ED30(v731, v4047) )
      *((_DWORD *)v4046 + 8) |= 4u;
  }
  v5210 = v731;
  v5376[0] = v731;
  v4049 = sub_140B9C0B0((unsigned int)&v5210, (_DWORD)v5029, sub_140B9FDF0_Offset, v4047, 15, (__int64)v5163, (__int64)&v5162);
  if ( v4049 < 0 )
  {
    v3991 = v4049;
    goto LABEL_5509;
  }
  v4050 = v5210;
  v4051 = 48;
  v5376[0] = v5210;
  v4052 = (char *)v4046 + v5210 - v731;
  v4053 = v5162 - v5163[0];
  v4054 = 6LL;
  v4055 = (const char *)(v4047 + v5163[0]);
  HalExtensionList = v4052;
  v4056 = v4052 + 192;
  v4057 = v4052 + 192;
  do
  {
    *v4057 = 0LL;
    v4051 -= 8;
    ++v4057;
    --v4054;
  }
  while ( v4054 );
  for ( i103 = 1LL; v4051; --v4051 )
  {
    *(_BYTE *)v4057 = 0;
    v4057 = (_QWORD *)((char *)v4057 + 1);
  }
  *v4056 = 0;
  v4059 = (unsigned __int64)&v4055[v4053];
  *((_QWORD *)v4052 + 25) = v4055;
  v4060 = (unsigned __int64)v4055;
  *((_DWORD *)v4052 + 52) = v4053;
  v4061 = v4055;
  *((_DWORD *)v4050 + 530) += v4053;
  v4062 = *((unsigned int *)v4050 + 525);
  v4063 = *((_QWORD *)v4050 + 263);
  if ( (unsigned __int64)v4055 < v4059 )
  {
    do
    {
      _mm_prefetch(v4061, 0);
      v4061 += 64;
    }
    while ( (unsigned __int64)v4061 < v4059 );
  }
  v4064 = *((_QWORD *)v4050 + 263);
  v4065 = v4053 >> 7;
  if ( v4053 >> 7 )
  {
    do
    {
      v4066 = 8LL;
      do
      {
        v4067 = *(_QWORD *)(v4060 + 8) ^ __ROL8__(*(_QWORD *)v4060 ^ v4064, v4062);
        v4060 += 16LL;
        v4064 = __ROL8__(v4067, v4062);
        --v4066;
      }
      while ( v4066 );
      v4068 = __ROL8__(v4063 ^ (v4060 - (_QWORD)v4055), 17) ^ v4063 ^ (v4060 - (_QWORD)v4055);
      v5379 = (v4068 * (unsigned __int128)0x7010008004002001uLL) >> 64;
      i103 = 1LL;
      v4062 = ((unsigned __int8)(v5379 ^ v4068) ^ (unsigned __int8)v4062) & 0x3F;
      if ( !(_DWORD)v4062 )
        v4062 = 1LL;
      --v4065;
    }
    while ( v4065 );
    v4052 = (char *)HalExtensionList;
  }
  v4069 = v4053 & 0x7F;
  if ( v4069 >= 8 )
  {
    v4070 = (unsigned __int64)v4069 >> 3;
    do
    {
      v4064 = __ROL8__(*(_QWORD *)v4060 ^ v4064, v4062);
      v4060 += 8LL;
      v4069 -= 8;
      --v4070;
    }
    while ( v4070 );
  }
  for ( ; v4069; --v4069 )
  {
    v4071 = *(unsigned __int8 *)v4060++;
    v4064 = __ROL8__(v4071 ^ v4064, v4062);
  }
  for ( i104 = v4064; ; LODWORD(v4064) = i104 ^ v4064 )
  {
    i104 >>= 31;
    if ( !i104 )
      break;
  }
  v5376[0] = v4050;
  v4056[5] = v4064 & 0x7FFFFFFF;
  v731 = v4050;
  v4073 = v4052 + 96;
  *((_DWORD *)v4052 + 60) = 48;
  if ( v4052 == (char *)-96LL )
  {
    v4074 = *((unsigned int *)v4050 + 513);
    v4075 = v4074 + 48;
    if ( (unsigned int)(v4074 + 48) <= *((_DWORD *)v4050 + 665) )
    {
      v3730 = v4050;
      *((_DWORD *)v4050 + 513) = v4075;
      goto LABEL_5365;
    }
    v3730 = (_BYTE *)GetRandomizedSafeContext(v4050, v4075, *((unsigned int *)v4050 + 593));
    if ( !v3730 )
      goto LABEL_5366;
    v4076 = *((_DWORD *)v4050 + 630);
    if ( (v4076 & 2) == 0 )
    {
      v4077 = *((_DWORD *)v4050 + 513);
      v4078 = *((_QWORD *)v4050 + 253);
      v4079 = (v4076 & 0x10000000) != 0 ? *((_DWORD *)v4050 + 593) : 0;
      if ( v4077 >= 8 )
      {
        v4080 = (unsigned __int64)v4077 >> 3;
        do
        {
          *(_QWORD *)v4050 = 0LL;
          v4077 -= 8;
          v4050 += 8;
          --v4080;
        }
        while ( v4080 );
      }
      for ( ; v4077; --v4077 )
        *v4050++ = 0;
      v4081 = *((_DWORD *)v3730 + 593);
      v4082 = Timer;
      *((_DWORD *)v3730 + 593) = v4079;
      if ( v4079 == 3 )
      {
        (*((void (__fastcall **)(__int64))v3730 + 109))(v4078);
      }
      else if ( (*((_DWORD *)v3730 + 630) & 0x8000000) != 0 || (Timer = v4082, !v4079) )
      {
        (*((void (__fastcall **)(__int64))v3730 + 33))(v4078);
      }
      else
      {
        (*((void (__fastcall **)(__int64, _QWORD))v3730 + 71))(v4078 - 8, *(_QWORD *)(v4078 - 8));
        Timer = v4082;
      }
      *((_DWORD *)v3730 + 593) = v4081;
    }
    *((_DWORD *)v3730 + 630) &= ~2u;
LABEL_5365:
    ++*((_DWORD *)v3730 + 523);
    v4073 = &v3730[v4074];
    if ( !v3730 )
    {
LABEL_5366:
      v5210 = 0LL;
      goto LABEL_5511;
    }
    v4083 = 48;
    v4084 = &v3730[v4074];
    v4085 = 6LL;
    do
    {
      *v4084 = 0LL;
      v4083 -= 8;
      ++v4084;
      --v4085;
    }
    while ( v4085 );
    for ( ; v4083; --v4083 )
    {
      *(_BYTE *)v4084 = 0;
      v4084 = (_QWORD *)((char *)v4084 + 1);
    }
    v4086 = v5054;
    v4087 = (unsigned int)v5020;
    v4060 = (unsigned __int64)v5054;
    *(_DWORD *)v4073 = 13;
    *((_QWORD *)v4073 + 1) = v4060;
    *((_DWORD *)v4073 + 4) = v4087;
    *((_DWORD *)v3730 + 530) += v4087;
    v4062 = *((unsigned int *)v3730 + 525);
    v4088 = *((_QWORD *)v3730 + 263);
    while ( (unsigned __int64)v4086 < v4060 + v4087 )
    {
      _mm_prefetch(v4086, 0);
      v4086 += 64;
    }
    v4089 = *((_QWORD *)v3730 + 263);
    v4090 = (unsigned int)v4087 >> 7;
    if ( (unsigned int)v4087 >> 7 )
    {
      do
      {
        v4091 = 8LL;
        do
        {
          v4092 = *(_QWORD *)(v4060 + 8) ^ __ROL8__(*(_QWORD *)v4060 ^ v4089, v4062);
          v4060 += 16LL;
          v4089 = __ROL8__(v4092, v4062);
          --v4091;
        }
        while ( v4091 );
        v4093 = (__ROL8__(v4088 ^ (v4060 - (_QWORD)v5054), 17) ^ v4088 ^ (v4060 - (unsigned __int64)v5054))
              * (unsigned __int128)0x7010008004002001uLL;
        v5380 = *((_QWORD *)&v4093 + 1);
        v4062 = ((unsigned __int8)v4093 ^ (unsigned __int8)(BYTE8(v4093) ^ v4062)) & 0x3F;
        if ( !(_DWORD)v4062 )
          v4062 = 1LL;
        --v4090;
      }
      while ( v4090 );
      LODWORD(v4087) = v5020;
    }
    i103 = v4087 & 0x7F;
    if ( (unsigned int)i103 >= 8 )
    {
      v4094 = (unsigned __int64)(v4087 & 0x7F) >> 3;
      do
      {
        v4089 = __ROL8__(*(_QWORD *)v4060 ^ v4089, v4062);
        v4060 += 8LL;
        i103 = (unsigned int)(i103 - 8);
        --v4094;
      }
      while ( v4094 );
    }
    if ( (_DWORD)i103 )
    {
      do
      {
        v4095 = *(unsigned __int8 *)v4060++;
        v4089 = __ROL8__(v4095 ^ v4089, v4062);
        v4393 = (_DWORD)i103 == 1;
        i103 = (unsigned int)(i103 - 1);
      }
      while ( !v4393 );
    }
    for ( i105 = v4089; ; LODWORD(v4089) = i105 ^ v4089 )
    {
      i105 >>= 31;
      if ( !i105 )
        break;
    }
    v4052 = (char *)HalExtensionList;
    *((_DWORD *)v4073 + 5) = v4089 & 0x7FFFFFFF;
    *((_DWORD *)v3730 + 530) += v4087;
  }
  else
  {
    v3730 = v4050;
    *(_DWORD *)v4073 = 13;
  }
  v4097 = Timer;
  if ( (*((_DWORD *)v3730 + 630) & 0x20000000) != 0 )
  {
    v4060 = (unsigned int)v5020;
    if ( (_DWORD)v5020 )
      sub_1404D2D9C(v3730, v5054, (unsigned int)v5020, v4073 + 28);
  }
  *((_DWORD *)v4073 + 6) = 1;
  v5210 = v3730;
  if ( !v3730 )
    goto LABEL_5511;
  *((_DWORD *)v4052 + 36) = 35;
  v731 = v3730;
  v1136 = *((_DWORD *)v4052 + 40) < 0x94u;
  v5376[0] = v3730;
  if ( !v1136 )
  {
    v4098 = v5039;
    v4099 = *((_QWORD *)v4052 + 19);
    v4100 = (*((__int64 (__fastcall **)(ULONG_PTR, __int64, unsigned __int64, __int64))v3730 + 65))(
              v5039,
              i103,
              v4060,
              v4062);
    if ( !v4100 )
    {
      v5210 = 0LL;
      v730 = v4097;
      goto LABEL_5512;
    }
    v4101 = HalExtensionList;
    v4102 = v5039 + *(unsigned int *)(v4100 + 80);
    i103 = *((_DWORD *)HalExtensionList + 46) | 2u;
    *((_DWORD *)HalExtensionList + 46) = i103;
    v4103 = i103;
    v4104 = *(_QWORD **)(v4099 + 112);
    if ( (unsigned __int64)v4104 >= v4098 && (unsigned __int64)v4104 < v4102 )
    {
      v4103 = i103 | 4;
      v4101[21] = *v4104;
      *((_DWORD *)v4101 + 46) = i103 | 4;
    }
    v4105 = *(_QWORD **)(v4099 + 120);
    if ( (unsigned __int64)v4105 >= v4098 && (unsigned __int64)v4105 < v4102 )
    {
      v4101[22] = *v4105;
      *((_DWORD *)v4101 + 46) = v4103 | 8;
    }
  }
  v1136 = _bittest((const signed __int32 *)v3730 + 630, 0x15u);
  v5376[0] = v3730;
  v731 = v3730;
  if ( !v1136 )
  {
    Timer = v4097;
    goto LABEL_5712;
  }
  v4106 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))*((_QWORD *)v3730 + 65);
  v4107 = v5039;
  v4108 = v4106(v5039, i103, v4060, v4062);
  v5054 = (_BYTE *)v4108;
  if ( !v4108 )
  {
    v3991 = -1073741701;
    goto LABEL_5508;
  }
  v4109 = *(_WORD *)(v4108 + 6);
  LOWORD(v5043) = v4109;
  HalExtensionList = (PVOID)((unsigned int)sub_140B9FDF0_Offset / 0xCuLL);
  if ( !v4109 )
  {
    v4110 = *((_DWORD *)v731 + 630);
    if ( (v4110 & 0x100000) == 0 )
    {
      v5163[1] = -402653175;
      KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, v5039, 0LL, 0LL);
    }
    Timer = v4097;
    if ( *((_DWORD *)v731 + 582) )
      goto LABEL_5422;
    *((_QWORD *)v731 + 292) = v731 - 0x5C5FC0A76E374B18LL;
    *((_QWORD *)v731 + 293) = 0LL;
    *((_QWORD *)v731 + 294) = 271LL;
    *((_QWORD *)v731 + 295) = v4107;
    *((_DWORD *)v731 + 582) = 1;
    if ( (v4110 & 0x20000000) != 0 )
      goto LABEL_5422;
    Timer = v4097;
    if ( !_bittest((const signed __int32 *)v731 + 631, 0x15u) )
      goto LABEL_5422;
    Timer = v4097;
    if ( (v4110 & 1) == 0 )
      goto LABEL_5422;
    v4111 = *((unsigned int *)v731 + 669);
    v4112 = v731;
    v4113 = *((_QWORD *)v731 + 263);
    v4114 = *((_DWORD *)v731 + 513) - v4111;
    v4115 = *((_QWORD *)v731 + 335);
    v4116 = (__int64 *)&v731[v4111];
    Timer = v4097;
    v4117 = (unsigned __int64)&v731[8 * ((unsigned __int64)v4114 >> 3) + v4111];
    if ( &v731[v4111] != (_BYTE *)v4117 )
    {
      Timer = v4097;
      do
      {
        *v4116 ^= v4115;
        v4118 = *v4116++;
        v4115 = ((v4113 ^ v4118) + __ROR8__(v4115, v4115 & 0x3F)) ^ 0xEFA;
      }
      while ( v4116 != (__int64 *)v4117 );
    }
    *((_DWORD *)v731 + 631) &= ~0x200000u;
    if ( v4115 == *((_QWORD *)v731 + 336) )
      goto LABEL_5422;
    v4119 = *((_QWORD *)v731 + 177);
    v4120 = *((_DWORD *)v731 + 513);
    *(_QWORD *)v4119 = v731;
    *(_DWORD *)(v4119 + 16) = v4120;
    v4121 = *((_QWORD *)v731 + 336);
    if ( !*((_DWORD *)v731 + 582) )
    {
      Timer = v4097;
      goto LABEL_5420;
    }
    goto LABEL_5421;
  }
  v4112 = v731;
  v4122 = v4108 + *(unsigned __int16 *)(v4108 + 20) + 24LL;
  v5026 = v5029;
  i21 = v4122;
  v5027 = (size_t)v5029 + 12 * ((unsigned int)sub_140B9FDF0_Offset / 0xC);
  LODWORD(v5020) = 0;
  v4123 = 0;
  v4124 = v4097;
  Timer = v4097;
  v4125 = (PVOID)v5027;
  do
  {
    v4126 = 5LL * v4123;
    v4127 = *(_DWORD *)(v4122 + 40LL * v4123 + 16);
    v4128 = *(_DWORD *)(v4122 + 40LL * v4123 + 12);
    if ( v4127 <= *(_DWORD *)(v4122 + 40LL * v4123 + 8) )
      v4127 = *(_DWORD *)(v4122 + 40LL * v4123 + 8);
    v5028 = 5LL * v4123;
    v4129 = v4128 + v4127;
    LODWORD(v5024) = v4128;
    LODWORD(v5025) = v4129;
    if ( v4123 )
    {
      if ( v4129 < *(_DWORD *)(v4122 + 40LL * (v4123 - 1) + 12) )
      {
        v4170 = *((_DWORD *)v731 + 630);
        if ( (v4170 & 0x100000) == 0 )
        {
          v5163[2] = -402653175;
          KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, v4107, 1uLL, 0LL);
        }
        if ( *((_DWORD *)v731 + 582) )
          goto LABEL_5422;
        Timer = v4124;
        *((_QWORD *)v731 + 292) = v731 - 0x5C5FC0A76E374B18LL;
        *((_QWORD *)v731 + 293) = 0LL;
        *((_QWORD *)v731 + 294) = 271LL;
        *((_QWORD *)v731 + 295) = v4107;
        *((_DWORD *)v731 + 582) = 1;
        if ( (v4170 & 0x20000000) != 0 )
          goto LABEL_5422;
        v4393 = (*((_DWORD *)v731 + 631) & 0x200000) == 0;
        Timer = v4124;
        if ( v4393 )
          goto LABEL_5422;
        Timer = v4124;
        if ( (v4170 & 1) == 0 )
          goto LABEL_5422;
        v4171 = *((unsigned int *)v731 + 669);
        v4172 = v4124;
        v4173 = *((_QWORD *)v731 + 263);
        v4174 = *((_DWORD *)v731 + 513) - v4171;
        v4115 = *((_QWORD *)v731 + 335);
        v4175 = (__int64 *)&v731[v4171];
        Timer = v4124;
        v4176 = (unsigned __int64)&v731[8 * ((unsigned __int64)v4174 >> 3) + v4171];
        if ( &v731[v4171] != (_BYTE *)v4176 )
        {
          Timer = v4124;
          do
          {
            *v4175 ^= v4115;
            v4177 = *v4175++;
            v4115 = ((v4173 ^ v4177) + __ROR8__(v4115, v4115 & 0x3F)) ^ 0xEFA;
          }
          while ( v4175 != (__int64 *)v4176 );
        }
LABEL_5480:
        *((_DWORD *)v731 + 631) &= ~0x200000u;
        if ( v4115 == *((_QWORD *)v731 + 336) )
        {
LABEL_5422:
          v3991 = -1073741701;
          goto LABEL_5509;
        }
        v4178 = *((_QWORD *)v731 + 177);
        v4179 = *((_DWORD *)v731 + 513);
        *(_QWORD *)v4178 = v731;
        *(_DWORD *)(v4178 + 16) = v4179;
        v4121 = *((_QWORD *)v731 + 336);
        if ( !*((_DWORD *)v731 + 582) )
        {
          Timer = v4172;
LABEL_5420:
          *(_QWORD *)(*((_QWORD *)v4112 + 177) + 24LL) = v4115 ^ v4121;
        }
LABEL_5421:
        sub_140B9E384(v4112, 0LL, v4115, 256LL);
        goto LABEL_5422;
      }
      v4123 = v5020;
    }
    v4130 = (unsigned int *)v5026;
    if ( v5026 != v4125 )
    {
      do
      {
        v4131 = *v4130;
        v4132 = v4130[1];
        if ( v4131 >= v4129 || v4132 <= v4128 )
          break;
        if ( v4131 < v4128 || v4132 > v4129 )
        {
          v4180 = *((_DWORD *)v731 + 630);
          if ( (v4180 & 0x100000) == 0 )
          {
            v5163[5] = -402653175;
            KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, v4107, 2uLL, 0LL);
          }
          if ( !*((_DWORD *)v731 + 582) )
          {
            Timer = v4124;
            *((_QWORD *)v731 + 292) = v731 - 0x5C5FC0A76E374B18LL;
            *((_QWORD *)v731 + 293) = 0LL;
            *((_QWORD *)v731 + 294) = 271LL;
            *((_QWORD *)v731 + 295) = v4107;
            *((_DWORD *)v731 + 582) = 1;
            if ( (v4180 & 0x20000000) == 0 )
            {
              v4393 = (*((_DWORD *)v731 + 631) & 0x200000) == 0;
              Timer = v4124;
              if ( !v4393 )
              {
                Timer = v4124;
                if ( (v4180 & 1) != 0 )
                {
                  v4181 = *((unsigned int *)v731 + 669);
                  v4172 = v4124;
                  v4182 = *((_QWORD *)v731 + 263);
                  v4183 = *((_DWORD *)v731 + 513) - v4181;
                  v4115 = *((_QWORD *)v731 + 335);
                  v4184 = (__int64 *)&v731[v4181];
                  Timer = v4124;
                  v4185 = (unsigned __int64)&v731[8 * ((unsigned __int64)v4183 >> 3) + v4181];
                  if ( &v731[v4181] != (_BYTE *)v4185 )
                  {
                    Timer = v4124;
                    do
                    {
                      *v4184 ^= v4115;
                      v4186 = *v4184++;
                      v4115 = ((v4182 ^ v4186) + __ROR8__(v4115, v4115 & 0x3F)) ^ 0xEFA;
                    }
                    while ( v4184 != (__int64 *)v4185 );
                  }
                  goto LABEL_5480;
                }
              }
            }
          }
          goto LABEL_5422;
        }
        v4133 = *((unsigned int *)v5026 + 2);
        if ( (v4133 & 1) != 0 || (*(_BYTE *)(v4133 + v4107) & 0x20) != 0 )
        {
          v4134 = *(_DWORD *)(v4122 + 8 * v4126 + 12);
          v4135 = v4124;
          v4136 = *(_DWORD *)(v4122 + 8 * v4126 + 16);
          LODWORD(PgC_0_1) = v4134;
          if ( v4136 <= *(_DWORD *)(i21 + 8 * v4126 + 8) )
            v4136 = *(_DWORD *)(i21 + 8 * v4126 + 8);
          v4137 = v4134 + v4136;
          v4138 = (unsigned int *)(*((__int64 (__fastcall **)(PVOID, ULONG_PTR))v731 + 131))(v5026, v5039);
          if ( *v4138 < (unsigned int)PgC_0_1 || v4138[1] > v4137 )
          {
            v4139 = v5039;
            v4140 = *((_DWORD *)v731 + 630);
            if ( (v4140 & 0x100000) == 0 )
            {
              v5163[4] = -402653175;
              KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, v5039, ((_DWORD)v4138 - (_DWORD)v5039) | 0x80000000, 0LL);
            }
            if ( !*((_DWORD *)v731 + 582) )
            {
              Timer = v4135;
              *((_QWORD *)v731 + 292) = v731 - 0x5C5FC0A76E374B18LL;
              *((_QWORD *)v731 + 293) = 0LL;
              *((_QWORD *)v731 + 294) = 271LL;
              *((_QWORD *)v731 + 295) = v4139;
              *((_DWORD *)v731 + 582) = 1;
              if ( (v4140 & 0x20000000) == 0 )
              {
                v4393 = (*((_DWORD *)v731 + 631) & 0x200000) == 0;
                Timer = v4135;
                if ( !v4393 )
                {
                  Timer = v4135;
                  if ( (v4140 & 1) != 0 )
                  {
                    v4141 = *((unsigned int *)v731 + 669);
                    v4142 = *((_QWORD *)v731 + 263);
                    v4143 = *((_DWORD *)v731 + 513) - v4141;
                    v4144 = *((_QWORD *)v731 + 335);
                    v4145 = (__int64 *)&v731[v4141];
                    Timer = v4135;
                    v4146 = (unsigned __int64)&v731[8 * ((unsigned __int64)v4143 >> 3) + v4141];
                    if ( &v731[v4141] != (_BYTE *)v4146 )
                    {
                      Timer = v4135;
                      do
                      {
                        *v4145 ^= v4144;
                        v4147 = *v4145++;
                        v4144 = ((v4142 ^ v4147) + __ROR8__(v4144, v4144 & 0x3F)) ^ 0xEFA;
                      }
                      while ( v4145 != (__int64 *)v4146 );
                    }
                    *((_DWORD *)v731 + 631) &= ~0x200000u;
                    if ( v4144 != *((_QWORD *)v731 + 336) )
                    {
                      v4148 = *((_QWORD *)v731 + 177);
                      v4149 = *((_DWORD *)v731 + 513);
                      *(_QWORD *)v4148 = v731;
                      *(_DWORD *)(v4148 + 16) = v4149;
                      if ( !*((_DWORD *)v731 + 582) )
                      {
                        v4150 = *((_QWORD *)v731 + 177);
                        v4151 = v4144 ^ *((_QWORD *)v731 + 336);
                        Timer = v4135;
                        *(_QWORD *)(v4150 + 24) = v4151;
                      }
                      sub_140B9E384(v731, 0LL, v4144, 256LL);
                    }
                  }
                }
              }
            }
          }
          v4152 = Timer;
          v4153 = (_DWORD *)(*((__int64 (__fastcall **)(unsigned int *, ULONG_PTR, ULONG_PTR))v731 + 132))(
                              v4138,
                              v5039,
                              v5039 + *v4138);
          if ( *v4153 >= (unsigned int)PgC_0_1 && v4153[1] <= v4137 )
          {
            v4124 = Timer;
          }
          else
          {
            v4154 = v5039;
            v4155 = ((_DWORD)v4153 - v5039) | 0x80000000;
            v4156 = *((_DWORD *)v731 + 630);
            if ( (v4156 & 0x100000) == 0 )
            {
              v5163[3] = -402653175;
              KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, v5039, v4155, 0LL);
            }
            v4124 = Timer;
            if ( !*((_DWORD *)v731 + 582) )
            {
              *((_QWORD *)v731 + 292) = v731 - 0x5C5FC0A76E374B18LL;
              *((_QWORD *)v731 + 293) = 0LL;
              *((_QWORD *)v731 + 294) = 271LL;
              *((_QWORD *)v731 + 295) = v4154;
              *((_DWORD *)v731 + 582) = 1;
              if ( (v4156 & 0x20000000) == 0 )
              {
                v4393 = (*((_DWORD *)v731 + 631) & 0x200000) == 0;
                Timer = v4152;
                if ( !v4393 )
                {
                  Timer = v4152;
                  if ( (v4156 & 1) != 0 )
                  {
                    v4157 = *((unsigned int *)v731 + 669);
                    v4158 = *((_QWORD *)v731 + 263);
                    v4159 = *((_DWORD *)v731 + 513) - v4157;
                    v4160 = *((_QWORD *)v731 + 335);
                    v4161 = (__int64 *)&v731[v4157];
                    Timer = v4152;
                    v4162 = (unsigned __int64)&v731[8 * ((unsigned __int64)v4159 >> 3) + v4157];
                    if ( &v731[v4157] != (_BYTE *)v4162 )
                    {
                      Timer = v4152;
                      do
                      {
                        *v4161 ^= v4160;
                        v4163 = *v4161++;
                        v4160 = ((v4158 ^ v4163) + __ROR8__(v4160, v4160 & 0x3F)) ^ 0xEFA;
                      }
                      while ( v4161 != (__int64 *)v4162 );
                    }
                    *((_DWORD *)v731 + 631) &= ~0x200000u;
                    if ( v4160 != *((_QWORD *)v731 + 336) )
                    {
                      v4164 = *((_QWORD *)v731 + 177);
                      v4165 = *((_DWORD *)v731 + 513);
                      *(_QWORD *)v4164 = v731;
                      *(_DWORD *)(v4164 + 16) = v4165;
                      if ( !*((_DWORD *)v731 + 582) )
                      {
                        v4166 = *((_QWORD *)v731 + 177);
                        v4167 = v4160 ^ *((_QWORD *)v731 + 336);
                        Timer = v4152;
                        *(_QWORD *)(v4166 + 24) = v4167;
                      }
                      sub_140B9E384(v731, 0LL, v4160, 256LL);
                    }
                  }
                }
              }
            }
          }
          v4129 = v5025;
          v4126 = v5028;
          v4122 = i21;
          v4107 = v5039;
        }
        v4128 = v5024;
        v4130 = (unsigned int *)((char *)v5026 + 12);
        v5026 = v4130;
      }
      while ( v4130 != (unsigned int *)v5027 );
      v4123 = v5020;
      v4109 = v5043;
      v4125 = (PVOID)v5027;
    }
    LODWORD(v5020) = ++v4123;
  }
  while ( v4123 < v4109 );
  v4168 = (int)HalExtensionList;
  v4169 = v5054;
  v4097 = Timer;
  if ( v5026 != (PVOID)v5027 )
  {
    v4187 = *((_DWORD *)v731 + 630);
    if ( (v4187 & 0x100000) == 0 )
    {
      v5163[6] = -402653175;
      KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, v4107, 3uLL, 0LL);
    }
    if ( !*((_DWORD *)v731 + 582) )
    {
      *((_QWORD *)v731 + 292) = v731 - 0x5C5FC0A76E374B18LL;
      *((_QWORD *)v731 + 293) = 0LL;
      *((_QWORD *)v731 + 294) = 271LL;
      *((_QWORD *)v731 + 295) = v4107;
      *((_DWORD *)v731 + 582) = 1;
      if ( (v4187 & 0x20000000) == 0 )
      {
        v4393 = (*((_DWORD *)v731 + 631) & 0x200000) == 0;
        Timer = v4097;
        if ( !v4393 )
        {
          Timer = v4097;
          if ( (v4187 & 1) != 0 )
          {
            v4188 = *((unsigned int *)v731 + 669);
            v4172 = v4097;
            v4189 = *((_QWORD *)v731 + 263);
            v4190 = *((_DWORD *)v731 + 513) - v4188;
            v4115 = *((_QWORD *)v731 + 335);
            v4191 = (__int64 *)&v731[v4188];
            Timer = v4097;
            v4192 = (unsigned __int64)&v731[8 * ((unsigned __int64)v4190 >> 3) + v4188];
            if ( &v731[v4188] != (_BYTE *)v4192 )
            {
              Timer = v4097;
              do
              {
                *v4191 ^= v4115;
                v4193 = *v4191++;
                v4115 = ((v4189 ^ v4193) + __ROR8__(v4115, v4115 & 0x3F)) ^ 0xEFA;
              }
              while ( v4191 != (__int64 *)v4192 );
            }
            goto LABEL_5480;
          }
        }
      }
    }
    goto LABEL_5422;
  }
  if ( (_DWORD)HalExtensionList )
    v4194 = ((_DWORD)HalExtensionList + 6) & 0xFFFFFFF8;
  else
    v4194 = 0;
  v4195 = *((unsigned int *)v731 + 513);
  v4196 = v4194 + 24 * v4109 + v4195 + 48;
  if ( v4196 <= *((_DWORD *)v731 + 665) )
  {
    v3730 = v731;
    *((_DWORD *)v731 + 513) = v4196;
LABEL_5528:
    v4204 = &v3730[v4195];
    ++*((_DWORD *)v3730 + 523);
    v4205 = &v3730[v4195];
    v4206 = 48;
    v4207 = 6LL;
    do
    {
      *v4205 = 0LL;
      v4206 -= 8;
      ++v4205;
      --v4207;
    }
    while ( v4207 );
    for ( ; v4206; --v4206 )
    {
      *(_BYTE *)v4205 = 0;
      v4205 = (_QWORD *)((char *)v4205 + 1);
    }
    v4208 = v5029;
    *(_DWORD *)v4204 = 30;
    *((_QWORD *)v4204 + 1) = v4208;
    *((_DWORD *)v4204 + 4) = 0;
    v4209 = *((_QWORD *)v3730 + 263);
    for ( i106 = v4209; ; LODWORD(v4209) = i106 ^ v4209 )
    {
      i106 >>= 31;
      if ( !i106 )
        break;
    }
    v4211 = v5039;
    *((_DWORD *)v4204 + 5) = v4209 & 0x7FFFFFFF;
    *((_QWORD *)v4204 + 3) = v4211;
    *((_DWORD *)v4204 + 8) = *((_DWORD *)v4169 + 20);
    *((_DWORD *)v4204 + 9) = sub_140B9FDF0_Offset;
    *((_WORD *)v4204 + 20) = v4109;
    v4212 = v4204 + 48;
    Timer = v4097;
    v5210 = v3730;
    v5054 = v4212;
    if ( v4168 )
      v4213 = &v4212[((unsigned int)(v4168 - 1) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL];
    else
      v4213 = v4212;
    HalExtensionList = v4213;
    v5026 = &v4213[6 * v4109];
    v4214 = (size_t)&v4208->Header.WaitListHead.Flink + 4;
    if ( !v4168 )
      v4214 = v5027;
    v4215 = Timer;
    v4216 = v3730;
    v5028 = v4214;
    if ( v4109 )
    {
      v4217 = v4109;
      v4218 = v4213 + 2;
      do
      {
        v4219 = 2LL;
        do
        {
          *(v4218 - 2) = 0;
          *(v4218 - 1) = 0;
          *v4218 = 0x80000000;
          v4218 += 3;
          --v4219;
        }
        while ( v4219 );
        --v4217;
      }
      while ( v4217 );
    }
    if ( v4213 == &v4213[6 * v4109] )
    {
LABEL_5712:
      v5376[0] = v3730;
      goto LABEL_5713;
    }
    v4220 = (_DWORD *)i21;
    v4221 = v3730 + 2524;
    v5031 = (ULONG_PTR)(v3730 + 2524);
    while ( 1 )
    {
      v4393 = (v4220[9] & 0x2000000) == 0;
      v4222 = 0;
      LODWORD(sub_140B9FDF0_Offset) = 0;
      if ( !v4393 )
        goto LABEL_5555;
      v4223 = *v4220;
      if ( *v4220 == 1414090313 && v4220[1] == 1195525195 )
        goto LABEL_5555;
      Timer = v4215;
      if ( v4223 == 1162297680 )
      {
        v4224 = *((_WORD *)v4220 + 2);
        if ( v4224 == 30839 || v4224 == 29303 || v4224 == 30583 )
          break;
      }
      if ( v4223 == 1095914053 && *((_WORD *)v4220 + 2) == 16724 )
        goto LABEL_5555;
      v4225 = (char *)*((_QWORD *)v4216 + 298);
      v4226 = (char *)*((_QWORD *)v4216 + 299);
      v4227 = (char *)v4220 - v4225;
      v4228 = (char *)*((_QWORD *)v4216 + 300);
      v4229 = 7;
      v4230 = (char *)*((_QWORD *)v4216 + 301);
      Timer = v4215;
      while ( 1 )
      {
        v4231 = v4225[v4227];
        v4232 = *v4225;
        v4225 += v5182;
        if ( v4231 != v4232 )
          break;
        if ( !--v4229 )
        {
LABEL_5561:
          v4222 = 1;
          LODWORD(sub_140B9FDF0_Offset) = 1;
          goto LABEL_5562;
        }
      }
      v4234 = 8;
      Timer = v4215;
      v4235 = (char *)v4220;
      while ( 1 )
      {
        v4236 = *(_QWORD *)v4235;
        v4235 += 8;
        v4237 = *(_QWORD *)v4226;
        v4226 += 8;
        if ( v4236 != v4237 )
          break;
        v4234 -= 8;
        if ( v4234 < 8 )
        {
          if ( !v4234 )
            goto LABEL_5561;
          while ( 1 )
          {
            v4238 = *v4235++;
            v4239 = *v4226++;
            if ( v4238 != v4239 )
              goto LABEL_5572;
            if ( !--v4234 )
              goto LABEL_5561;
          }
        }
      }
LABEL_5572:
      v4240 = 4;
      v4241 = (char *)v4220 - v4228;
      while ( 1 )
      {
        v4242 = v4228[v4241];
        v4243 = *v4228++;
        if ( v4242 != v4243 )
          break;
        if ( !--v4240 )
          goto LABEL_5561;
      }
      Timer = v4215;
      v4244 = (char *)v4220 - v4230;
      v4245 = 6;
      while ( 1 )
      {
        v4246 = v4230[v4244];
        v4247 = *v4230++;
        if ( v4246 != v4247 )
          break;
        if ( !--v4245 )
          goto LABEL_5561;
      }
LABEL_5562:
      v4221 = (_DWORD *)v5031;
LABEL_5563:
      v4233 = v4220[9];
      if ( v4233 >= 0 )
      {
        if ( !v4222 )
          goto LABEL_5585;
      }
      else
      {
        v4222 = 1;
        LODWORD(sub_140B9FDF0_Offset) = 1;
      }
      if ( *v4220 == 1414090313 && v4220[1] == 1195525195 )
      {
        v4221 = v4216 + 2524;
        LODWORD(sub_140B9FDF0_Offset) = v4222;
        v4393 = (*((_DWORD *)v4216 + 631) & 0x2000) == 0;
        v5031 = (ULONG_PTR)(v4216 + 2524);
        Timer = v4215;
        if ( !v4393 )
        {
          v4222 = 0;
          LODWORD(sub_140B9FDF0_Offset) = 0;
          Timer = v4215;
        }
      }
LABEL_5585:
      v4248 = v4215;
      if ( (*v4221 & 0x4000) != 0
        && (v4233 & 0x20000000) != 0
        && (v5039 == *((_QWORD *)v4216 + 188) || v5039 == *((_QWORD *)v4216 + 189)) )
      {
        v4222 = 1;
        LODWORD(sub_140B9FDF0_Offset) = 1;
      }
      v4249 = v4220[4];
      v4250 = (unsigned int)v4220[3];
      v4251 = (struct _KEVENT *)v5027;
      if ( v4249 <= v4220[2] )
        v4249 = v4220[2];
      v4252 = v4250 + v4249;
      LODWORD(v5020) = v4220[3];
      LODWORD(v5024) = v4252;
      if ( v5029 == (struct _KEVENT *)v5027 )
      {
        LockNV = 0;
        v4255 = 0;
        v4276 = v4250;
        LODWORD(v5025) = v4250;
        goto LABEL_5621;
      }
      LockNV = v5029->Header.LockNV;
      SignalState = v5029->Header.SignalState;
      v4255 = SignalState;
      LODWORD(v5025) = v4250;
      Timer = v4248;
      if ( LockNV <= (unsigned int)v4250 )
      {
        v4276 = v4250;
LABEL_5621:
        if ( LockNV < (unsigned int)v4250 )
          goto LABEL_5675;
        goto LABEL_5624;
      }
      LODWORD(v5025) = v4250;
      Timer = v4248;
      if ( SignalState > v4252 )
      {
        v4276 = v4250;
      }
      else
      {
        LODWORD(v5025) = v4250;
        Timer = v4248;
        if ( v4222 )
        {
          v4276 = v4250;
          v4277 = v5029;
          goto LABEL_5627;
        }
        v4256 = (_QWORD *)(v5039 + v4250);
        *v4213 = v4250;
        v4213[1] = LockNV;
        v4257 = LockNV - *v4213;
        LODWORD(v5025) = LockNV;
        Timer = v4248;
        v4258 = 0;
        v4259 = v4248;
        while ( 1 )
        {
          v4260 = v4259;
          v4261 = v5531[v4258];
          if ( (unsigned __int64)v4256 < v4261 + (unsigned int)v5503[v4258] && (unsigned __int64)v4256 + v4257 > v4261 )
            break;
          ++v4258;
          v4259 = v4248;
          if ( v4258 >= 6 )
          {
            *((_DWORD *)v4216 + 530) += v4257;
            v4262 = v4256;
            v4263 = *((_DWORD *)v4216 + 525);
            v4264 = (const char *)v4256;
            v4265 = *((_QWORD *)v4216 + 263);
            v4266 = (unsigned __int64)v4256 + v4257;
            Timer = v4260;
            if ( (unsigned __int64)v4256 < v4266 )
            {
              Timer = v4260;
              do
              {
                _mm_prefetch(v4264, 0);
                v4264 += 64;
              }
              while ( (unsigned __int64)v4264 < v4266 );
            }
            v4267 = v4265;
            for ( i107 = v4257 >> 7; i107; --i107 )
            {
              v4269 = 8LL;
              do
              {
                v4270 = v4262[1] ^ __ROL8__(*v4262 ^ v4267, v4263);
                v4262 += 2;
                v4267 = __ROL8__(v4270, v4263);
                --v4269;
              }
              while ( v4269 );
              v4271 = (__ROL8__(v4265 ^ ((char *)v4262 - (char *)v4256), 17) ^ v4265 ^ ((char *)v4262 - (char *)v4256))
                    * (unsigned __int128)0x7010008004002001uLL;
              v5381 = *((_QWORD *)&v4271 + 1);
              v4263 = (BYTE8(v4271) ^ (unsigned __int8)(v4271 ^ v4263)) & 0x3F;
              if ( !v4263 )
                LOBYTE(v4263) = 1;
            }
            v4272 = v4257 & 0x7F;
            if ( v4272 >= 8 )
            {
              v4273 = (unsigned __int64)v4272 >> 3;
              do
              {
                v4267 = __ROL8__(*v4262++ ^ v4267, v4263);
                v4272 -= 8;
                --v4273;
              }
              while ( v4273 );
            }
            for ( ; v4272; --v4272 )
            {
              v4274 = *(unsigned __int8 *)v4262;
              v4262 = (_QWORD *)((char *)v4262 + 1);
              v4267 = __ROL8__(v4274 ^ v4267, v4263);
            }
            for ( i108 = v4267; ; LODWORD(v4267) = i108 ^ v4267 )
            {
              i108 >>= 31;
              if ( !i108 )
                break;
            }
            v4252 = v5024;
            *((_DWORD *)HalExtensionList + 2) = v4267 & 0x7FFFFFFF;
            break;
          }
        }
        v4276 = v5025;
        v4221 = (_DWORD *)v5031;
        v4251 = (struct _KEVENT *)v5027;
      }
LABEL_5624:
      if ( v4255 > v4252 )
        goto LABEL_5675;
      v4277 = v5029;
      if ( v5029 == v4251 )
        goto LABEL_5675;
      v4222 = sub_140B9FDF0_Offset;
LABEL_5627:
      v4278 = (unsigned int *)v5028;
      if ( (struct _KEVENT *)v5028 != v4251 )
      {
        v4279 = *(_DWORD *)(v5028 + 4);
        if ( v4279 <= v4252 )
        {
          v4280 = v5054;
          v4281 = Timer;
          do
          {
            v4282 = v4281;
            if ( v4278 == (unsigned int *)v4251 )
              break;
            if ( v4222 )
            {
              v4283 = 0x80;
            }
            else
            {
              v4284 = *v4278;
              v4285 = (unsigned int)v4277->Header.SignalState;
              LODWORD(v5025) = v4284;
              if ( v4284 < (unsigned int)v4285 )
              {
                v4286 = *((_DWORD *)v4216 + 630);
                if ( (v4286 & 0x100000) == 0 )
                {
                  v5163[7] = -402653175;
                  KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, v5039, 6uLL, 0LL);
                }
                if ( *((_DWORD *)v4216 + 582) )
                {
                  v4281 = Timer;
                }
                else
                {
                  v4287 = v5039;
                  *((_QWORD *)v4216 + 292) = v4216 - 0x5C5FC0A76E374B18LL;
                  *((_QWORD *)v4216 + 293) = 0LL;
                  *((_QWORD *)v4216 + 294) = 271LL;
                  *((_QWORD *)v4216 + 295) = v4287;
                  *((_DWORD *)v4216 + 582) = 1;
                  if ( (v4286 & 0x20000000) == 0 && (*v4221 & 0x200000) != 0 && (v4286 & 1) != 0 )
                  {
                    v4288 = *((unsigned int *)v4216 + 669);
                    v4289 = *((_QWORD *)v4216 + 263);
                    v4290 = *((_QWORD *)v4216 + 335);
                    v4291 = (__int64 *)&v4216[v4288];
                    v4292 = (unsigned __int64)&v4216[8
                                                   * ((unsigned __int64)(unsigned int)(*((_DWORD *)v4216 + 513) - v4288) >> 3)
                                                   + v4288];
                    v4281 = v4282;
                    Timer = v4282;
                    if ( v4291 != (__int64 *)v4292 )
                    {
                      Timer = v4282;
                      do
                      {
                        *v4291 ^= v4290;
                        v4293 = *v4291++;
                        v4290 = ((v4289 ^ v4293) + __ROR8__(v4290, v4290 & 0x3F)) ^ 0xEFA;
                      }
                      while ( v4291 != (__int64 *)v4292 );
                      v4281 = v4282;
                    }
                    *(_DWORD *)v5031 &= ~0x200000u;
                    if ( v4290 != *((_QWORD *)v4216 + 336) )
                    {
                      v4294 = *((_QWORD *)v4216 + 177);
                      v4295 = *((_DWORD *)v4216 + 513);
                      *(_QWORD *)v4294 = v4216;
                      *(_DWORD *)(v4294 + 16) = v4295;
                      if ( !*((_DWORD *)v4216 + 582) )
                        *(_QWORD *)(*((_QWORD *)v4216 + 177) + 24LL) = v4290 ^ *((_QWORD *)v4216 + 336);
                      sub_140B9E384(v4216, 0LL, v4290, 256LL);
                      v4281 = Timer;
                    }
                  }
                  else
                  {
                    v4281 = v4282;
                  }
                }
              }
              v4296 = (_QWORD *)(v5039 + v4285);
              v4297 = v4284 - v4285;
              for ( i109 = 0; i109 < 6; ++i109 )
              {
                v4299 = v5531[i109];
                if ( (unsigned __int64)v4296 < v4299 + (unsigned int)v5503[i109]
                  && v5039 + v4285 + v4284 - (unsigned int)v4285 > v4299 )
                {
                  goto LABEL_5669;
                }
              }
              Timer = v4281;
              if ( v4297 < 4 )
              {
LABEL_5669:
                Timer = v4281;
                v4283 = 0x80;
                goto LABEL_5670;
              }
              *((_DWORD *)v4216 + 530) += v4297;
              v4300 = v4296;
              v4301 = *((_DWORD *)v4216 + 525);
              v4302 = (const char *)v4296;
              v4303 = *((_QWORD *)v4216 + 263);
              v4304 = (unsigned __int64)v4296 + v4297;
              if ( (unsigned __int64)v4296 < v4304 )
              {
                do
                {
                  _mm_prefetch(v4302, 0);
                  v4302 += 64;
                }
                while ( (unsigned __int64)v4302 < v4304 );
              }
              v4305 = *((_QWORD *)v4216 + 263);
              for ( i110 = v4297 >> 7; i110; --i110 )
              {
                v4307 = 8LL;
                do
                {
                  v4308 = v4300[1] ^ __ROL8__(*v4300 ^ v4305, v4301);
                  v4300 += 2;
                  v4305 = __ROL8__(v4308, v4301);
                  --v4307;
                }
                while ( v4307 );
                v4309 = (__ROL8__(v4303 ^ ((char *)v4300 - (char *)v4296), 17) ^ v4303 ^ (unsigned __int64)((char *)v4300 - (char *)v4296))
                      * (unsigned __int128)0x7010008004002001uLL;
                v5382 = *((_QWORD *)&v4309 + 1);
                v4301 = (BYTE8(v4309) ^ (unsigned __int8)(v4309 ^ v4301)) & 0x3F;
                if ( !v4301 )
                  LOBYTE(v4301) = 1;
              }
              v4310 = v4297 & 0x7F;
              if ( v4310 >= 8 )
              {
                v4311 = (unsigned __int64)v4310 >> 3;
                do
                {
                  v4305 = __ROL8__(*v4300++ ^ v4305, v4301);
                  v4310 -= 8;
                  --v4311;
                }
                while ( v4311 );
              }
              for ( ; v4310; --v4310 )
              {
                v4312 = *(unsigned __int8 *)v4300;
                v4300 = (_QWORD *)((char *)v4300 + 1);
                v4305 = __ROL8__(v4312 ^ v4305, v4301);
              }
              for ( i111 = v4305; ; LOBYTE(v4305) = i111 ^ v4305 )
              {
                i111 >>= 7;
                if ( !i111 )
                  break;
              }
              v4278 = (unsigned int *)v5028;
              v4283 = v4305 & 0x7F;
              v4281 = Timer;
LABEL_5670:
              v4280 = v5054;
              v4251 = (struct _KEVENT *)v5027;
              v4222 = sub_140B9FDF0_Offset;
              v4252 = v5024;
            }
            *v4280 = v4283;
            v4278 += 3;
            v4277 = (struct _KEVENT *)((char *)&v5029->Header.WaitListHead.Flink + 4);
            v4280 = v5054 + 1;
            v5029 = (struct _KEVENT *)((char *)v5029 + 12);
            ++v5054;
            v5028 = (__int64)v4278;
            if ( v4278 != (unsigned int *)v4251 )
              v4279 = v4278[1];
            v4221 = (_DWORD *)v5031;
          }
          while ( v4279 <= v4252 );
          v4276 = v5025;
        }
      }
LABEL_5675:
      v4314 = (unsigned int *)HalExtensionList;
      if ( !(_DWORD)sub_140B9FDF0_Offset && v4276 != v4252 )
      {
        *((_DWORD *)HalExtensionList + 3) = v4276;
        v4314[4] = v4252;
        v4315 = v4314[3];
        v4316 = v4252 - v4315;
        v4317 = (_QWORD *)(v5039 + v4315);
        v4318 = 0;
        while ( 1 )
        {
          v4319 = Timer;
          v4320 = v5531[v4318];
          if ( (unsigned __int64)v4317 < v4320 + (unsigned int)v5503[v4318] && (unsigned __int64)v4317 + v4316 > v4320 )
            break;
          if ( (unsigned int)++v4318 >= 6 )
          {
            *((_DWORD *)v4216 + 530) += v4316;
            v4321 = v4317;
            v4322 = *((_DWORD *)v4216 + 525);
            v4323 = (const char *)v4317;
            v4324 = *((_QWORD *)v4216 + 263);
            v4325 = (unsigned __int64)v4317 + v4316;
            Timer = v4319;
            if ( (unsigned __int64)v4317 < v4325 )
            {
              Timer = v4319;
              do
              {
                _mm_prefetch(v4323, 0);
                v4323 += 64;
              }
              while ( (unsigned __int64)v4323 < v4325 );
            }
            v4326 = v4324;
            v4327 = v4316 >> 7;
            if ( v4316 >> 7 )
            {
              do
              {
                v4328 = 8LL;
                do
                {
                  v4329 = v4321[1] ^ __ROL8__(*v4321 ^ v4326, v4322);
                  v4321 += 2;
                  v4326 = __ROL8__(v4329, v4322);
                  --v4328;
                }
                while ( v4328 );
                v4330 = (__ROL8__(v4324 ^ ((char *)v4321 - (char *)v4317), 17) ^ v4324 ^ ((char *)v4321 - (char *)v4317))
                      * (unsigned __int128)0x7010008004002001uLL;
                v5383 = *((_QWORD *)&v4330 + 1);
                v4322 = (BYTE8(v4330) ^ (unsigned __int8)(v4330 ^ v4322)) & 0x3F;
                if ( !v4322 )
                  LOBYTE(v4322) = 1;
                --v4327;
              }
              while ( v4327 );
              v4252 = v5024;
            }
            v4331 = v4316 & 0x7F;
            if ( v4331 >= 8 )
            {
              v4332 = (unsigned __int64)v4331 >> 3;
              do
              {
                v4326 = __ROL8__(*v4321++ ^ v4326, v4322);
                v4331 -= 8;
                --v4332;
              }
              while ( v4332 );
            }
            for ( ; v4331; --v4331 )
            {
              v4333 = *(unsigned __int8 *)v4321;
              v4321 = (_QWORD *)((char *)v4321 + 1);
              v4326 = __ROL8__(v4333 ^ v4326, v4322);
            }
            for ( i112 = v4326; ; LODWORD(v4326) = i112 ^ v4326 )
            {
              i112 >>= 31;
              if ( !i112 )
                break;
            }
            v4314 = (unsigned int *)HalExtensionList;
            *((_DWORD *)HalExtensionList + 5) = v4326 & 0x7FFFFFFF;
            break;
          }
        }
      }
      v4335 = v5029;
      if ( v5029 != (struct _KEVENT *)v5027
        && v5029->Header.LockNV >= (unsigned int)v5020
        && v5029->Header.SignalState <= v4252 )
      {
        v4336 = v5028;
        if ( v5028 != v5027 )
        {
          v4337 = v5054;
          *v5054 = 0x80;
          v5054 = v4337 + 1;
          v5028 = v4336 + 12;
        }
        v5029 = (struct _KEVENT *)((char *)&v4335->Header.WaitListHead.Flink + 4);
      }
      v4213 = v4314 + 6;
      v4220 = (_DWORD *)(i21 + 40);
      HalExtensionList = v4213;
      i21 += 40LL;
      if ( v4213 == v5026 )
      {
        v3730 = v5210;
        goto LABEL_5712;
      }
      v4221 = (_DWORD *)v5031;
      v4215 = Timer;
    }
    Timer = v4215;
LABEL_5555:
    v4222 = 1;
    LODWORD(sub_140B9FDF0_Offset) = 1;
    goto LABEL_5563;
  }
  v3730 = (_BYTE *)GetRandomizedSafeContext(v731, v4196, *((unsigned int *)v731 + 593));
  if ( v3730 )
  {
    v4197 = *((_DWORD *)v731 + 630);
    if ( (v4197 & 2) == 0 )
    {
      v4198 = *((_DWORD *)v731 + 513);
      v4199 = *((_QWORD *)v731 + 253);
      v4200 = (v4197 & 0x10000000) != 0 ? *((_DWORD *)v4112 + 593) : 0;
      if ( v4198 >= 8 )
      {
        v4201 = (unsigned __int64)v4198 >> 3;
        do
        {
          *(_QWORD *)v4112 = 0LL;
          v4198 -= 8;
          v4112 += 8;
          --v4201;
        }
        while ( v4201 );
      }
      for ( ; v4198; --v4198 )
        *v4112++ = 0;
      v4202 = v4097;
      v4203 = *((_DWORD *)v3730 + 593);
      *((_DWORD *)v3730 + 593) = v4200;
      if ( v4200 == 3 )
      {
        (*((void (__fastcall **)(__int64))v3730 + 109))(v4199);
      }
      else if ( (*((_DWORD *)v3730 + 630) & 0x8000000) != 0 || (Timer = v4202, !v4200) )
      {
        (*((void (__fastcall **)(__int64))v3730 + 33))(v4199);
      }
      else
      {
        (*((void (__fastcall **)(__int64, _QWORD))v3730 + 71))(v4199 - 8, *(_QWORD *)(v4199 - 8));
        Timer = v4202;
      }
      *((_DWORD *)v3730 + 593) = v4203;
      v4097 = Timer;
    }
    *((_DWORD *)v3730 + 630) &= ~2u;
    v4168 = (int)HalExtensionList;
    v4109 = v5043;
    goto LABEL_5528;
  }
  v3991 = -1073741670;
LABEL_5508:
  Timer = v4097;
LABEL_5509:
  v3730 = v731;
LABEL_5510:
  if ( v3991 != -1073741554 )
  {
LABEL_5511:
    v730 = Timer;
    goto LABEL_5512;
  }
LABEL_5714:
  v4338 = (*((__int64 (__fastcall **)(ULONG_PTR))v731 + 65))(v5038);
  v4339 = *(unsigned int *)(v4338 + 148);
  if ( (unsigned int)v4339 >= 0x14 )
  {
    v4340 = *(unsigned int *)(v4338 + 144);
    v4341 = v5038 + v4340 + v4339;
    for ( i113 = v4340 + v5038; ; i113 += 20LL )
    {
      if ( i113 == v4341 || !*(_DWORD *)(i113 + 12) || (v4343 = *(unsigned int *)(i113 + 16), !(_DWORD)v4343) )
      {
        v731 = v3730;
        goto LABEL_5725;
      }
      v4344 = *(_QWORD *)(v4343 + v5038);
      if ( v4344 )
      {
        v4345 = sub_140B99A04(v5376, v4344, 2147483663LL);
        v3730 = (_BYTE *)v5376[0];
        if ( (int)(v4345 + 0x80000000) >= 0 && v4345 != -1073741554 )
          break;
      }
    }
    v5183 = (unsigned int *)v5376[0];
    goto LABEL_5740;
  }
  v5183 = (unsigned int *)v731;
LABEL_5726:
  v730 = Timer;
  (*((void (__fastcall **)(_QWORD, char *))v3730 + 66))(*(_QWORD *)(*((_QWORD *)v3730 + 173) + 32LL), v5504);
  if ( !v5505
    || (*((_QWORD *)v3730 + 313) = v5505, (v4346 = (*((__int64 (__fastcall **)(__int64))v3730 + 65))(v5505)) == 0) )
  {
    if ( !*((_DWORD *)v3730 + 582) )
    {
      Timer = v730;
      *((_QWORD *)v3730 + 292) = v3730 - 0x5C5FC0A76E374B18LL;
      *((_QWORD *)v3730 + 293) = 0LL;
      *((_QWORD *)v3730 + 294) = 261LL;
      *((_QWORD *)v3730 + 295) = -1073741701LL;
      *((_DWORD *)v3730 + 582) = 1;
      v4347 = *((_DWORD *)v3730 + 630);
      if ( (v4347 & 0x20000000) == 0 )
      {
        v4393 = (*((_DWORD *)v3730 + 631) & 0x200000) == 0;
        Timer = v730;
        if ( !v4393 )
        {
          Timer = v730;
          if ( (v4347 & 1) != 0 )
          {
            v4348 = *((unsigned int *)v3730 + 669);
            v4349 = *((_QWORD *)v3730 + 263);
            v4350 = *((_DWORD *)v3730 + 513) - v4348;
            v4351 = *((_QWORD *)v3730 + 335);
            v4352 = (__int64 *)&v3730[v4348];
            Timer = v730;
            v4353 = (unsigned __int64)&v3730[8 * ((unsigned __int64)v4350 >> 3) + v4348];
            if ( &v3730[v4348] != (_BYTE *)v4353 )
            {
              Timer = v730;
              do
              {
                *v4352 ^= v4351;
                v4354 = *v4352++;
                v4351 = ((v4349 ^ v4354) + __ROR8__(v4351, v4351 & 0x3F)) ^ 0xEFA;
              }
              while ( v4352 != (__int64 *)v4353 );
            }
            *((_DWORD *)v3730 + 631) &= ~0x200000u;
            if ( v4351 != *((_QWORD *)v3730 + 336) )
            {
              v4355 = *((_QWORD *)v3730 + 177);
              v4356 = *((_DWORD *)v3730 + 513);
              *(_QWORD *)v4355 = v3730;
              *(_DWORD *)(v4355 + 16) = v4356;
              if ( !*((_DWORD *)v3730 + 582) )
              {
                v4357 = *((_QWORD *)v3730 + 177);
                v4358 = v4351 ^ *((_QWORD *)v3730 + 336);
                Timer = v730;
                *(_QWORD *)(v4357 + 24) = v4358;
              }
              sub_140B9E384(v3730, 0LL, v4351, 256LL);
            }
          }
        }
      }
    }
    goto LABEL_3826;
  }
  *((_DWORD *)v3730 + 624) = *(_DWORD *)(v4346 + 80);
  Timer = v730;
LABEL_5744:
  if ( (*((_DWORD *)v731 + 630) & 0x20000000) == 0 && (*((_DWORD *)v731 + 631) & 0x80u) != 0 )
  {
    v4359 = *((unsigned int *)v731 + 513);
    v4360 = sub_140B9EDF0_Offset;
    LODWORD(v5022) = (_DWORD)v5022 - sub_140B9EDF0_Offset;
    v4361 = v4359 + 48;
    if ( (unsigned int)(v4359 + 48) <= *((_DWORD *)v731 + 665) )
    {
      v4362 = (__int64)v731;
      *((_DWORD *)v731 + 513) = v4361;
      goto LABEL_5763;
    }
    v4362 = GetRandomizedSafeContext(v731, v4361, *((unsigned int *)v731 + 593));
    if ( v4362 )
    {
      v4363 = *((_DWORD *)v731 + 630);
      if ( (v4363 & 2) == 0 )
      {
        v4364 = *((_DWORD *)v731 + 513);
        v4365 = *((_QWORD *)v731 + 253);
        v4366 = (v4363 & 0x10000000) != 0 ? *((_DWORD *)v731 + 593) : 0;
        if ( v4364 >= 8 )
        {
          v4367 = (unsigned __int64)v4364 >> 3;
          do
          {
            *(_QWORD *)v731 = 0LL;
            v4364 -= 8;
            v731 += 8;
            --v4367;
          }
          while ( v4367 );
        }
        for ( ; v4364; --v4364 )
          *v731++ = 0;
        v4368 = *(_DWORD *)(v4362 + 2372);
        *(_DWORD *)(v4362 + 2372) = v4366;
        if ( v4366 == 3 )
        {
          (*(void (__fastcall **)(__int64))(v4362 + 872))(v4365);
        }
        else if ( (*(_DWORD *)(v4362 + 2520) & 0x8000000) != 0 || (Timer = v730, !v4366) )
        {
          (*(void (__fastcall **)(__int64))(v4362 + 264))(v4365);
        }
        else
        {
          (*(void (__fastcall **)(__int64, _QWORD))(v4362 + 568))(v4365 - 8, *(_QWORD *)(v4365 - 8));
          Timer = v730;
        }
        *(_DWORD *)(v4362 + 2372) = v4368;
      }
      *(_DWORD *)(v4362 + 2520) &= ~2u;
      v4360 = sub_140B9EDF0_Offset;
LABEL_5763:
      v4369 = v4362 + v4359;
      ++*(_DWORD *)(v4362 + 2092);
      v731 = (_BYTE *)v4362;
      if ( v4362 )
      {
        v4370 = 48;
        v4371 = 6LL;
        v4372 = (_QWORD *)(v4362 + v4359);
        do
        {
          *v4372 = 0LL;
          v4370 -= 8;
          ++v4372;
          --v4371;
        }
        while ( v4371 );
        for ( ; v4370; --v4370 )
        {
          *(_BYTE *)v4372 = 0;
          v4372 = (_QWORD *)((char *)v4372 + 1);
        }
        *(_DWORD *)v4369 = 42;
        *(_QWORD *)(v4369 + 8) = 0LL;
        *(_DWORD *)(v4369 + 16) = 0;
        v4373 = *(_QWORD *)(v4362 + 2104);
        for ( i114 = v4373; ; LODWORD(v4373) = i114 ^ v4373 )
        {
          i114 >>= 31;
          if ( !i114 )
            break;
        }
        v4375 = (unsigned int)v5022;
        *(_DWORD *)(v4369 + 20) = v4373 & 0x7FFFFFFF;
        *(_DWORD *)(v4369 + 32) = v4360;
        *(_DWORD *)(v4369 + 36) = v4375;
        *(_DWORD *)(v4362 + 2120) += v4375;
        v4376 = *(_DWORD *)(v4362 + 2100);
        v4377 = *(_QWORD *)(v4362 + 2104);
        v4378 = (_QWORD *)(v4362 + v4360);
        Timer = v730;
        v4379 = v4378;
        v4380 = (const char *)v4378;
        if ( v4378 < (_QWORD *)((char *)v4378 + v4375) )
        {
          Timer = v730;
          do
          {
            _mm_prefetch(v4380, 0);
            v4380 += 64;
          }
          while ( v4380 < (const char *)v4378 + v4375 );
        }
        v4381 = v4377;
        v4382 = (unsigned int)v4375 >> 7;
        if ( (unsigned int)v4375 >> 7 )
        {
          do
          {
            v4383 = 8LL;
            do
            {
              v4384 = v4379[1] ^ __ROL8__(*v4379 ^ v4381, v4376);
              v4379 += 2;
              v4381 = __ROL8__(v4384, v4376);
              --v4383;
            }
            while ( v4383 );
            v4385 = (__ROL8__(v4377 ^ ((char *)v4379 - (char *)v4378), 17) ^ v4377 ^ (unsigned __int64)((char *)v4379 - (char *)v4378))
                  * (unsigned __int128)0x7010008004002001uLL;
            v5182 = *((_QWORD *)&v4385 + 1);
            v4376 = (BYTE8(v4385) ^ (unsigned __int8)(v4385 ^ v4376)) & 0x3F;
            if ( !v4376 )
              LOBYTE(v4376) = 1;
            --v4382;
          }
          while ( v4382 );
          LOBYTE(v4375) = (_BYTE)v5022;
        }
        v4386 = v4375 & 0x7F;
        if ( v4386 >= 8 )
        {
          v4387 = (unsigned __int64)v4386 >> 3;
          do
          {
            v4381 = __ROL8__(*v4379++ ^ v4381, v4376);
            v4386 -= 8;
            --v4387;
          }
          while ( v4387 );
        }
        for ( ; v4386; --v4386 )
        {
          v4388 = *(unsigned __int8 *)v4379;
          v4379 = (_QWORD *)((char *)v4379 + 1);
          v4381 = __ROL8__(v4388 ^ v4381, v4376);
        }
        *(_QWORD *)(v4369 + 24) = v4381;
        v5183 = (unsigned int *)v731;
        goto LABEL_5787;
      }
    }
LABEL_3825:
    v5183 = 0LL;
    goto LABEL_3826;
  }
LABEL_5787:
  if ( a3 > 1 )
  {
    v4389 = __rdtsc();
    v4390 = *((unsigned int *)v731 + 523);
    v4391 = (__ROR8__(v4389, 3) ^ v4389) * (unsigned __int128)0x7010008004002001uLL;
    v5384 = *((_QWORD *)&v4391 + 1);
    *((_DWORD *)v731 + 528) = (*((_QWORD *)&v4391 + 1) ^ (unsigned __int64)v4391) % v4390;
  }
LABEL_1076:
  if ( !v731 )
    return 0;
  if ( (*((_DWORD *)v731 + 630) & 0x8000000) != 0 )
  {
    v732 = __rdtsc();
    v733 = (__ROR8__(v732, 3) ^ v732) * (unsigned __int128)0x7010008004002001uLL;
    v5385 = *((_QWORD *)&v733 + 1);
    PreferredDpcRoutine = (__int64 (__fastcall *)())(*((_QWORD *)v731 + 185) + 16LL * (((unsigned __int8)v733 ^ BYTE8(v733)) & 0xF));
    goto LABEL_5928;
  }
  v4392 = a1;
  v4393 = a1 == 6;
  if ( a1 <= 6 )
  {
LABEL_5886:
    if ( v4393 )
    {
      PreferredDpcRoutine = IopTimerDispatch;
    }
    else
    {
      if ( !v4392 )
      {
        PreferredDpcRoutine = (__int64 (__fastcall *)())CmpEnableLazyFlushDpcRoutine;
        v4456 = 536898948;
        goto LABEL_5926;
      }
      v4471 = v4392 - 1;
      if ( !v4471 )
      {
        PreferredDpcRoutine = (__int64 (__fastcall *)())CmpLazyFlushDpcRoutine;
        v4456 = -536843356;
        goto LABEL_5926;
      }
      v4472 = v4471 - 1;
      if ( !v4472 )
      {
        PreferredDpcRoutine = ExpTimeRefreshDpcRoutine;
        v4456 = -1610585659;
        goto LABEL_5926;
      }
      v4473 = v4472 - 1;
      if ( !v4473 )
      {
        PreferredDpcRoutine = ExpTimeZoneDpcRoutine;
        v4456 = -905942692;
        goto LABEL_5926;
      }
      if ( v4473 == 1 )
      {
        PreferredDpcRoutine = ExpCenturyDpcRoutine;
        v4456 = -503289568;
        goto LABEL_5926;
      }
      PreferredDpcRoutine = (__int64 (__fastcall *)())ExpTimerDpcRoutine;
    }
    v4456 = 30672;
    goto LABEL_5926;
  }
  while ( 2 )
  {
    v4394 = KiTimerDispatch;
    v4395 = v730;
    v4396 = v4392 - 7;
    if ( v4396 )
    {
      v4397 = v4396 - 1;
      if ( !v4397 )
      {
        PreferredDpcRoutine = (__int64 (__fastcall *)())&KiBalanceSetManagerDeferredRoutine;
        v4456 = 1476422265;
        goto LABEL_5926;
      }
      if ( v4397 == 1 )
      {
        PreferredDpcRoutine = PopThermalZoneDpc;
        v4456 = 28755;
        goto LABEL_5926;
      }
      v4398 = __rdtsc();
      v4399 = (__ROR8__(v4398, 3) ^ v4398) * (unsigned __int128)0x7010008004002001uLL;
      v5386 = *((_QWORD *)&v4399 + 1);
      v4400 = ((unsigned __int64)v4399 ^ *((_QWORD *)&v4399 + 1)) % 0xA;
      v4401 = *((_DWORD *)v731 + 534);
      if ( v4400 < 8 )
      {
        if ( v4401 == 3 || v4401 == 4 || v4401 == 7 )
        {
          Timer = v730;
        }
        else
        {
          v4402 = 0LL;
          v4403 = -1LL;
          v5567 = RtlLookupFunctionTable(KiTimerDispatch, &v5569, v5164);
          v4405 = v4395;
          Timer = v4395;
          if ( v5567 )
          {
            v4406 = (_DWORD *)vUncompressedBufPool2;
            v5572 = 0LL;
            Timer = v4395;
            if ( vUncompressedBufPool2 )
            {
              Timer = v4395;
              if ( ntoskrnlexe_Base == v5569 )
              {
                v5572 = vUncompressedBufPool2;
                v5573 = 0LL;
                v5574 = v5481;
                v5575 = 0;
                v4407 = RtlLookupFunctionEntry(KiTimerDispatch, &v5569, 0LL);
                v5568 = v4407;
                Timer = v4395;
                if ( v4407 )
                {
                  v4408 = v4407 - v5569;
                  v4404 = 0LL;
                  v4409 = *v4406 - 1 < 0;
                  v4410 = *v4406 - 1;
                  v4411 = 0LL;
                  Timer = v4395;
                  if ( v4409 )
                  {
LABEL_5810:
                    if ( v4410 >= (int)v4404 )
                      v5573 = (unsigned __int64)&v4406[2 * v4411 + 2];
                  }
                  else
                  {
                    Timer = v4395;
                    do
                    {
                      v4411 = (unsigned int)((v4410 + (int)v4404) >> 1);
                      if ( v4408 - v4406[2 * v4411 + 2] >= 0 )
                      {
                        if ( v4408 - v4406[2 * v4411 + 2] <= 0 )
                          goto LABEL_5810;
                        v4404 = (unsigned int)(v4411 + 1);
                      }
                      else
                      {
                        if ( !(_DWORD)v4411 )
                          break;
                        v4410 = v4411 - 1;
                      }
                    }
                    while ( v4410 >= (int)v4404 );
                  }
                }
              }
            }
            v4412 = (__int64 *)&v5387;
            v4413 = v5569;
            v5571 = (__int64 *)&v5387;
            v5164[0] /= 0xCu;
            v5029 = (struct _KEVENT *)v5569;
            v5570 = v5567 + 12LL * v5164[0];
            v5566 = KiTimerDispatch;
            goto LABEL_5815;
          }
          v4413 = (ULONG_PTR)v5029;
          while ( 1 )
          {
            v4412 = v5571;
LABEL_5815:
            if ( !v5567 || v5567 == v5570 )
              break;
            if ( v5572 )
            {
              if ( !v5568 )
                break;
              if ( v5573 )
              {
                v4414 = *(_DWORD *)(v5573 + 4);
                if ( (v4414 & 1) != 0 )
                {
                  *v4412 = v5569 + (v4414 & 0xFFFFFFFE);
                  v5573 = 0LL;
                }
                else
                {
                  v4415 = (unsigned int)(v5575 + v4414);
                  v4416 = (unsigned int)v4415;
                  v4417 = v4415 + 4;
                  if ( v4417 < v4416 || v4417 > v5574 )
                  {
                    v5164[1] = -402653175;
                    KeBugCheckEx(__ROL4__(-402653175, 101), 0x12uLL, v5572, v5569, v4416);
                  }
                  v4404 = (unsigned int)(v5575 + 4);
                  v4418 = *(_DWORD *)(v4416 + v5572);
                  v5575 += 4;
                  v5573 &= -(__int64)((v4418 & 1) != 0);
                  if ( (v4418 & 1) != 0 )
                    v4418 &= ~1u;
                  *v4412 = v5569 + v4418;
                }
              }
              else
              {
                *v4412 = v5568;
                v5568 = 0LL;
              }
            }
            else
            {
              while ( 1 )
              {
                v4419 = v5567;
                v4420 = RtlpConvertFunctionEntry(v5567, v5569);
                v4421 = RtlpSameFunction(v4420, v5569, v5566);
                v4422 = v5567 + 12;
                v5567 += 12LL;
                if ( v4421 )
                  break;
                if ( v4422 == v5570 )
                  goto LABEL_5830;
              }
              *v5571 = v4419;
            }
            if ( v4403 > v4413 + *v5387 )
              v4403 = v4413 + *v5387;
            if ( v4402 < v4413 + v5387[1] )
              v4402 = v4413 + v5387[1];
          }
LABEL_5830:
          if ( v4402 )
          {
            v4423 = v4402 - v4403;
            if ( v4423 <= 0x1000 )
            {
              v4424 = 0LL;
              if ( (*((_DWORD *)v731 + 630) & 0x8000000) != 0 )
              {
                LOBYTE(v4404) = 0;
              }
              else
              {
                v4424 = *((unsigned int *)v731 + 593);
                LOBYTE(v4404) = 1;
                Timer = v4405;
              }
              v4425 = *((_DWORD *)v731 + 524);
              v4426 = __rdtsc();
              v4427 = __ROR8__(v4426, 3);
              v5388 = ((v4427 ^ v4426) * (unsigned __int128)0x7010008004002001uLL) >> 64;
              v4428 = ((unsigned __int16)v5388 ^ (unsigned __int16)(8193 * (v4427 ^ v4426))) & 0x7FF;
              v4429 = __rdtsc();
              v4430 = (__ROR8__(v4429, 3) ^ v4429) * (unsigned __int128)0x7010008004002001uLL;
              v5389 = *((_QWORD *)&v4430 + 1);
              v4431 = (*((_QWORD *)&v4430 + 1) ^ (unsigned __int64)v4430) % (unsigned int)(v4428 + 1);
              if ( (_DWORD)v4424 )
              {
                v4432 = __rdtsc();
                v4433 = __ROR8__(v4432, 3) ^ v4432;
                v5390 = (v4433 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                v4428 += ((((unsigned __int8)v5390 ^ (unsigned __int8)v4433) & 1) << 12) + 4096;
                v5039 = (unsigned int)(v4423 + v4428);
                v4434 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))*((_QWORD *)v731 + 70);
                v5038 = v5039 + 8;
                v4435 = (ULONG_PTR *)v4434(v5039 + 8, 0xFFFFFFFFLL, v4424, v4404);
                if ( !v4435 )
                  goto LABEL_5848;
                if ( !(*((unsigned __int8 (__fastcall **)(ULONG_PTR *, _QWORD, __int64))v731 + 72))(
                        v4435,
                        ((_DWORD)v5039 + 4095) & 0xFFFFF000,
                        64LL) )
                {
                  (*((void (__fastcall **)(ULONG_PTR *, ULONG_PTR))v731 + 71))(v4435, v5039);
                  goto LABEL_5848;
                }
                *v4435 = v5038;
                v4436 = (__int64)(v4435 + 1);
              }
              else
              {
                LOBYTE(v4404) = -(char)v4404;
                v4436 = (*((__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))v731 + 32))(
                          (_BYTE)v4404 != 0 ? 130LL : 66LL,
                          (unsigned int)(v4423 + v4428),
                          v4425,
                          v4404);
              }
              if ( v4436 )
              {
                v4437 = v4431;
                v4438 = (_QWORD *)v4436;
                if ( (unsigned int)v4431 >= 8 )
                {
                  v4439 = (unsigned __int64)(unsigned int)v4431 >> 3;
                  do
                  {
                    v4440 = __rdtsc();
                    v4437 -= 8;
                    v4441 = (__ROR8__(v4440, 3) ^ v4440) * (unsigned __int128)0x7010008004002001uLL;
                    v5391 = *((_QWORD *)&v4441 + 1);
                    *v4438++ = v4441 ^ *((_QWORD *)&v4441 + 1);
                    --v4439;
                  }
                  while ( v4439 );
                }
                if ( v4437 )
                {
                  v4442 = __rdtsc();
                  v4443 = (__ROR8__(v4442, 3) ^ v4442) * (unsigned __int128)0x7010008004002001uLL;
                  v5392 = *((_QWORD *)&v4443 + 1);
                  v4444 = v4443 ^ *((_QWORD *)&v4443 + 1);
                  do
                  {
                    *(_BYTE *)v4438 = v4444;
                    v4438 = (_QWORD *)((char *)v4438 + 1);
                    v4444 >>= 8;
                    --v4437;
                  }
                  while ( v4437 );
                }
                v4445 = v4428 - v4431;
                v4446 = (_QWORD *)(v4436 + (unsigned int)v4423 + (unsigned int)v4431);
                if ( v4445 >= 8 )
                {
                  v4447 = (unsigned __int64)v4445 >> 3;
                  do
                  {
                    v4448 = __rdtsc();
                    v4445 -= 8;
                    v4449 = (__ROR8__(v4448, 3) ^ v4448) * (unsigned __int128)0x7010008004002001uLL;
                    v5393 = *((_QWORD *)&v4449 + 1);
                    *v4446++ = v4449 ^ *((_QWORD *)&v4449 + 1);
                    --v4447;
                  }
                  while ( v4447 );
                }
                if ( v4445 )
                {
                  v4450 = __rdtsc();
                  v4451 = (__ROR8__(v4450, 3) ^ v4450) * (unsigned __int128)0x7010008004002001uLL;
                  v5394 = *((_QWORD *)&v4451 + 1);
                  v4452 = v4451 ^ *((_QWORD *)&v4451 + 1);
                  do
                  {
                    *(_BYTE *)v4446 = v4452;
                    v4446 = (_QWORD *)((char *)v4446 + 1);
                    v4452 >>= 8;
                    --v4445;
                  }
                  while ( v4445 );
                }
                PreferredDpcRoutine = (__int64 (__fastcall *)())(v4436 + (unsigned int)v4431);
                if ( PreferredDpcRoutine )
                {
                  v4453 = (_QWORD *)(v4436 + (unsigned int)v4431);
                  if ( (unsigned int)v4423 >= 8 )
                  {
                    v4454 = (unsigned __int64)(unsigned int)v4423 >> 3;
                    do
                    {
                      LODWORD(v4423) = v4423 - 8;
                      *v4453 = *(_QWORD *)v4403;
                      v4403 += 8LL;
                      ++v4453;
                      --v4454;
                    }
                    while ( v4454 );
                  }
                  if ( (_DWORD)v4423 )
                  {
                    v4455 = (char *)v4453 - v4403;
                    do
                    {
                      v4455[v4403] = *(_BYTE *)v4403;
                      ++v4403;
                      LODWORD(v4423) = v4423 - 1;
                    }
                    while ( (_DWORD)v4423 );
                  }
                  v4456 = 0;
                  *((_DWORD *)v731 + 630) |= 0x100u;
                  goto LABEL_5915;
                }
              }
              else
              {
LABEL_5848:
                ++*((_DWORD *)v731 + 664);
              }
            }
          }
        }
LABEL_5883:
        v730 = Timer;
LABEL_5884:
        v4469 = __rdtsc();
        v4470 = (__ROR8__(v4469, 3) ^ v4469) * (unsigned __int128)0x7010008004002001uLL;
        v5402 = *((_QWORD *)&v4470 + 1);
        v4392 = ((unsigned __int64)v4470 ^ *((_QWORD *)&v4470 + 1)) % 0xA;
        if ( v4392 <= 6 )
        {
          v4393 = v4392 == 6;
          goto LABEL_5886;
        }
        continue;
      }
      if ( v4401 == 3 || v4401 == 4 || v4401 == 7 )
      {
        Timer = v730;
        goto LABEL_5884;
      }
      Timer = v730;
      v4457 = 0LL;
      if ( (*((_DWORD *)v731 + 630) & 0x8000000) != 0 )
      {
        LOBYTE(v4394) = 0;
        Timer = v730;
      }
      else
      {
        v4457 = *((unsigned int *)v731 + 593);
        LOBYTE(v4394) = 1;
      }
      v4458 = *((_DWORD *)v731 + 524);
      v4459 = __rdtsc();
      v4460 = __ROR8__(v4459, 3);
      v5395 = ((v4460 ^ v4459) * (unsigned __int128)0x7010008004002001uLL) >> 64;
      v4461 = ((unsigned __int16)v5395 ^ (unsigned __int16)(8193 * (v4460 ^ v4459))) & 0x7FF;
      v4462 = __rdtsc();
      v4463 = (__ROR8__(v4462, 3) ^ v4462) * (unsigned __int128)0x7010008004002001uLL;
      v5396 = *((_QWORD *)&v4463 + 1);
      v4464 = (*((_QWORD *)&v4463 + 1) ^ (unsigned __int64)v4463) % (unsigned int)(v4461 + 1);
      if ( (_DWORD)v4457 )
      {
        v4465 = __rdtsc();
        v4466 = __ROR8__(v4465, 3) ^ v4465;
        v5397 = (v4466 * (unsigned __int128)0x7010008004002001uLL) >> 64;
        v4461 += ((((unsigned int)v5397 ^ (67117057 * (_DWORD)v4466)) & 1) << 12) + 4096;
        v4467 = (unsigned int)(v4461 + 272);
        v4468 = (_QWORD *)(*((__int64 (__fastcall **)(__int64, __int64, __int64, __int64 (__fastcall *)()))v731 + 70))(
                            v4467 + 8,
                            0xFFFFFFFFLL,
                            v4457,
                            v4394);
        if ( v4468 )
        {
          if ( !(*((unsigned __int8 (__fastcall **)(_QWORD *, unsigned __int64, __int64))v731 + 72))(
                  v4468,
                  (v4467 + 4095) & 0xFFFFFFFFFFFFF000uLL,
                  64LL) )
          {
            (*((void (__fastcall **)(_QWORD *, _QWORD))v731 + 71))(v4468, (unsigned int)v4467);
            goto LABEL_5882;
          }
          *v4468++ = (unsigned int)(v4461 + 272) + 8LL;
        }
      }
      else
      {
        LOBYTE(v4394) = -(char)v4394;
        v4468 = (_QWORD *)(*((__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 (__fastcall *)()))v731 + 32))(
                            (_BYTE)v4394 != 0 ? 130LL : 66LL,
                            (unsigned int)(v4461 + 272),
                            v4458,
                            v4394);
      }
      if ( v4468 )
      {
        v4474 = v4464;
        v4475 = v4468;
        if ( (unsigned int)v4464 >= 8 )
        {
          v4476 = (unsigned __int64)(unsigned int)v4464 >> 3;
          do
          {
            v4477 = __rdtsc();
            v4474 -= 8;
            v4478 = (__ROR8__(v4477, 3) ^ v4477) * (unsigned __int128)0x7010008004002001uLL;
            v5398 = *((_QWORD *)&v4478 + 1);
            *v4475++ = v4478 ^ *((_QWORD *)&v4478 + 1);
            --v4476;
          }
          while ( v4476 );
        }
        if ( v4474 )
        {
          v4479 = __rdtsc();
          v4480 = (__ROR8__(v4479, 3) ^ v4479) * (unsigned __int128)0x7010008004002001uLL;
          v5399 = *((_QWORD *)&v4480 + 1);
          v4481 = v4480 ^ *((_QWORD *)&v4480 + 1);
          do
          {
            *(_BYTE *)v4475 = v4481;
            v4475 = (_QWORD *)((char *)v4475 + 1);
            v4481 >>= 8;
            --v4474;
          }
          while ( v4474 );
        }
        v4482 = v4461 - v4464;
        v4483 = (_QWORD *)((char *)v4468 + (unsigned int)v4464 + 272);
        if ( v4482 >= 8 )
        {
          v4484 = (unsigned __int64)v4482 >> 3;
          do
          {
            v4485 = __rdtsc();
            v4482 -= 8;
            v4486 = (__ROR8__(v4485, 3) ^ v4485) * (unsigned __int128)0x7010008004002001uLL;
            v5400 = *((_QWORD *)&v4486 + 1);
            *v4483++ = v4486 ^ *((_QWORD *)&v4486 + 1);
            --v4484;
          }
          while ( v4484 );
        }
        if ( v4482 )
        {
          v4487 = __rdtsc();
          v4488 = (__ROR8__(v4487, 3) ^ v4487) * (unsigned __int128)0x7010008004002001uLL;
          v5401 = *((_QWORD *)&v4488 + 1);
          v4489 = v4488 ^ *((_QWORD *)&v4488 + 1);
          do
          {
            *(_BYTE *)v4483 = v4489;
            v4483 = (_QWORD *)((char *)v4483 + 1);
            v4489 >>= 8;
            --v4482;
          }
          while ( v4482 );
        }
        v4490 = (char *)v4468 + (unsigned int)v4464;
        if ( v4490 )
        {
          v4491 = 200;
          v4492 = KiDpcDispatch;
          v4493 = v4490 + 72;
          v4494 = 25LL;
          do
          {
            v4491 -= 8;
            *v4493 = *(_QWORD *)v4492;
            v4492 = (__int64 (__fastcall *)())((char *)v4492 + 8);
            ++v4493;
            --v4494;
          }
          while ( v4494 );
          for ( ; v4491; --v4491 )
          {
            v4495 = *(_BYTE *)v4492;
            v4492 = (__int64 (__fastcall *)())((char *)v4492 + 1);
            *(_BYTE *)v4493 = v4495;
            v4493 = (_QWORD *)((char *)v4493 + 1);
          }
          *v4490 = 19;
          v4490[1] = 1;
          *((_WORD *)v4490 + 1) = 0;
          *((_QWORD *)v4490 + 3) = v4490 + 72;
          v4456 = 0;
          *((_QWORD *)v4490 + 4) = 0LL;
          *((_QWORD *)v4490 + 7) = 0LL;
          *((_QWORD *)v4490 + 2) = 0LL;
          PreferredDpcRoutine = (__int64 (__fastcall *)())(v4490 + 72);
          if ( PreferredDpcRoutine )
          {
            *((_DWORD *)v731 + 630) |= 0x80u;
LABEL_5915:
            v730 = Timer;
            goto LABEL_5926;
          }
        }
        goto LABEL_5883;
      }
LABEL_5882:
      ++*((_DWORD *)v731 + 664);
      goto LABEL_5883;
    }
    break;
  }
  PreferredDpcRoutine = IopIrpStackProfilerDpcRoutine;
  v4456 = -2147453935;
LABEL_5926:
  if ( !*((_DWORD *)v731 + 607) )
    *((_DWORD *)v731 + 607) = v4456;
LABEL_5928:
  *((_QWORD *)v731 + 255) = PreferredDpcRoutine;
  *((_DWORD *)v731 + 623) = -1;
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  v4496 = __rdtsc();
  v4497 = __ROR8__(v4496, 3);
  v5403 = ((v4497 ^ v4496) * (unsigned __int128)0x7010008004002001uLL) >> 64;
  *((_DWORD *)v731 + 608) = v5403 ^ (67117057 * (v4497 ^ v4496));
  if ( enumDpcExecutionMethod0 == 3 ) // Make KEvent?
  {
    v5029 = (struct _KEVENT *)sub_140BCE6B4(v731, a4);
    if ( !v5029 )
    {
      v5164[2] = -402653175;
      KeBugCheckEx(__ROL4__(-402653175, 101), 0x1EuLL, (ULONG_PTR)v731, 0LL, 0LL);
    }
  }
  else
  {
    v5029 = 0LL;
  }
  v4498 = *((unsigned int *)v731 + 593);
  *((_DWORD *)v731 + 665) = 0;
  v4499 = *((_DWORD *)v731 + 513);
  v4500 = v4499 + 4095;
  if ( *((_DWORD *)v731 + 534) != 7 )
    v4500 = v4499;
  v4501 = GetRandomizedSafeContext(v731, v4500, v4498);
  v5039 = v4501;
  if ( v4501 )
  {
    v4502 = *((_DWORD *)v731 + 630);
    if ( (v4502 & 2) == 0 )
    {
      v4503 = *((_DWORD *)v731 + 513);
      v4504 = *((_QWORD *)v731 + 253);
      v4505 = (v4502 & 0x10000000) != 0 ? *((_DWORD *)v731 + 593) : 0;
      if ( v4503 >= 8 )
      {
        v4506 = (unsigned __int64)v4503 >> 3;
        do
        {
          *(_QWORD *)v731 = 0LL;
          v4503 -= 8;
          v731 += 8;
          --v4506;
        }
        while ( v4506 );
      }
      for ( ; v4503; --v4503 )
        *v731++ = 0;
      v4507 = *(_DWORD *)(v4501 + 2372);
      *(_DWORD *)(v4501 + 2372) = v4505;
      if ( v4505 == 3 )
      {
        (*(void (__fastcall **)(__int64, _QWORD))(v4501 + 872))(v4504, 0LL);
      }
      else if ( (*(_DWORD *)(v4501 + 2520) & 0x8000000) != 0 || (Timer = v730, !v4505) )
      {
        (*(void (__fastcall **)(__int64, _QWORD))(v4501 + 264))(v4504, 0LL); // SavePoint
      }
      else
      {
        (*(void (__fastcall **)(__int64, _QWORD))(v4501 + 568))(v4504 - 8, *(_QWORD *)(v4504 - 8));
        Timer = v730;
      }
      *(_DWORD *)(v4501 + 2372) = v4507;
    }
    *(_DWORD *)(v4501 + 2520) &= ~2u;
  }
  else
  {
    v4501 = 0LL;
    v5039 = 0LL;
  }
  if ( !v4501 )
    return 0;
  v5038 = *(_QWORD *)(v4501 + 2768);
  *(_QWORD *)(v4501 + 2768) = 0LL;
  v4508 = *(unsigned int *)(v4501 + 2672);
  if ( (_DWORD)v4508 )
  {
    v4509 = (int *)(v4501 + v4508);
    v4510 = *(_QWORD **)(v4501 + v4508 + 8);
    v5054 = (_BYTE *)(v4501 + v4508);
    if ( v4510 )
    {
      v4511 = (unsigned int)v4509[4];
      v4512 = v4510;
      *(_DWORD *)(v4501 + 2120) += v4511;
      v4513 = (const char *)v4510;
      v4514 = *(unsigned int *)(v4501 + 2100);
      v4515 = *(_QWORD *)(v4501 + 2104);
      if ( v4510 < (_QWORD *)((char *)v4510 + v4511) )
      {
        do
        {
          _mm_prefetch(v4513, 0);
          v4513 += 64;
        }
        while ( v4513 < (const char *)v4510 + v4511 );
      }
      v4516 = *(_QWORD *)(v4501 + 2104);
      v4517 = (unsigned int)v4511 >> 7;
      v4518 = 1LL;
      if ( (unsigned int)v4511 >> 7 )
      {
        do
        {
          v4519 = 8LL;
          do
          {
            v4520 = v4512[1] ^ __ROL8__(*v4512 ^ v4516, v4514);
            v4512 += 2;
            v4516 = __ROL8__(v4520, v4514);
            --v4519;
          }
          while ( v4519 );
          v4521 = (__ROL8__(v4515 ^ ((char *)v4512 - (char *)v4510), 17) ^ v4515 ^ (unsigned __int64)((char *)v4512 - (char *)v4510))
                * (unsigned __int128)0x7010008004002001uLL;
          v5404 = *((_QWORD *)&v4521 + 1);
          v4522 = BYTE8(v4521) ^ v4521 ^ v4514;
          v4518 = 1LL;
          v4514 = v4522 & 0x3F;
          if ( !(_DWORD)v4514 )
            v4514 = 1LL;
          --v4517;
        }
        while ( v4517 );
        v4501 = v5039;
      }
      v4523 = v4511 & 0x7F;
      if ( (unsigned int)v4523 >= 8 )
      {
        v4524 = (unsigned __int64)(unsigned int)v4523 >> 3;
        do
        {
          v4516 = __ROL8__(*v4512++ ^ v4516, v4514);
          v4523 = (unsigned int)(v4523 - 8);
          --v4524;
        }
        while ( v4524 );
      }
      if ( (_DWORD)v4523 )
      {
        do
        {
          v4525 = *(unsigned __int8 *)v4512;
          v4512 = (_QWORD *)((char *)v4512 + 1);
          v4516 = __ROL8__(v4525 ^ v4516, v4514);
          v4393 = (_DWORD)v4523 == 1;
          v4523 = (unsigned int)(v4523 - 1);
        }
        while ( !v4393 );
      }
      for ( i115 = v4516; ; LODWORD(v4516) = i115 ^ v4516 )
      {
        i115 >>= 31;
        if ( !i115 )
          break;
      }
      v4527 = v4516 & 0x7FFFFFFF;
      v4528 = 0;
      if ( v4527 != v4509[5] )
      {
        if ( !*v4509 )
          v4528 = v4509[6] != 0;
        v4529 = (unsigned int)v4509[4];
        v4518 = *((_QWORD *)v4509 + 1);
        if ( v4509[4] && (*(_DWORD *)(v4501 + 2524) & 0x40) != 0 )
        {
          v4530 = KeGetCurrentIrql();
          __writecr8(2uLL);
          v4531 = v4518 & 0xFFFFFFFFFFFFF000uLL;
          v5691 = (PVOID)((v4518 + v4529 - 1) | 0xFFF);
          HalExtensionList = (PVOID)((v4518 & 0xFFFFFFFFFFFFF000uLL) - 1);
          while ( 1 )
          {
            while ( 1 )
            {
              v4532 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, __int64))(v4501 + 1128))(
                        v4531,
                        0LL,
                        v4523,
                        v4514);
              if ( v4532 == -1073741267 )
                break;
              if ( v4532 < 0 )
              {
LABEL_5985:
                __writecr8(v4530);
                goto LABEL_5986;
              }
LABEL_5983:
              v4531 += 4096LL;
              HalExtensionList = (char *)HalExtensionList + 4096;
              if ( HalExtensionList == v5691 )
              {
                __writecr8(v4530);
                goto LABEL_5999;
              }
            }
            if ( v4528 )
              goto LABEL_5985;
            if ( v4530 > 1u )
              goto LABEL_5983;
            __writecr8(v4530);
            KeGetCurrentIrql();
            __writecr8(2uLL);
          }
        }
LABEL_5986:
        v4533 = Timer;
        if ( !*(_DWORD *)(v4501 + 2328) )
          *(_QWORD *)(*(_QWORD *)(v4501 + 1416) + 24LL) = (unsigned int)v4509[5] ^ (unsigned __int64)v4527;
        v4534 = *((_QWORD *)v4509 + 1);
        if ( !*(_DWORD *)(v4501 + 2328) )
        {
          Timer = v4533;
          v4518 = 1LL;
          *(_QWORD *)(v4501 + 2336) = v4501 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v4501 + 2344) = (char *)v4509 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v4501 + 2352) = *v4509;
          *(_QWORD *)(v4501 + 2360) = v4534;
          *(_DWORD *)(v4501 + 2328) = 1;
          v4535 = *(_DWORD *)(v4501 + 2520);
          if ( (v4535 & 0x20000000) == 0 )
          {
            v4393 = (*(_DWORD *)(v4501 + 2524) & 0x200000) == 0;
            Timer = v4533;
            if ( !v4393 )
            {
              Timer = v4533;
              if ( (v4535 & 1) != 0 )
              {
                v4536 = *(unsigned int *)(v4501 + 2676);
                v4514 = *(_QWORD *)(v4501 + 2104);
                v4537 = *(_DWORD *)(v4501 + 2052) - v4536;
                v4523 = *(_QWORD *)(v4501 + 2680);
                v4518 = v4501 + v4536;
                Timer = v4533;
                v4538 = v4501 + v4536 + 8 * ((unsigned __int64)v4537 >> 3);
                if ( v4501 + v4536 != v4538 )
                {
                  Timer = v4533;
                  do
                  {
                    *(_QWORD *)v4518 ^= v4523;
                    v4539 = *(_QWORD *)v4518;
                    v4518 += 8LL;
                    v4523 = ((v4514 ^ v4539) + __ROR8__(v4523, v4523 & 0x3F)) ^ 0xEFA;
                  }
                  while ( v4518 != v4538 );
                }
                *(_DWORD *)(v4501 + 2524) &= ~0x200000u;
                if ( v4523 != *(_QWORD *)(v4501 + 2688) )
                {
                  v4540 = *(_QWORD *)(v4501 + 1416);
                  v4541 = *(_DWORD *)(v4501 + 2052);
                  *(_QWORD *)v4540 = v4501;
                  *(_DWORD *)(v4540 + 16) = v4541;
                  if ( !*(_DWORD *)(v4501 + 2328) )
                  {
                    v4542 = *(_QWORD *)(v4501 + 1416);
                    v4543 = v4523 ^ *(_QWORD *)(v4501 + 2688);
                    Timer = v4533;
                    *(_QWORD *)(v4542 + 24) = v4543;
                  }
                  sub_140B9E384(v4501, 0LL, v4523, 256LL);
                }
              }
            }
          }
        }
      }
LABEL_5999:
      (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(v4501 + 264))(
        *((_QWORD *)v4509 + 3),
        v4518,
        v4523,
        v4514);
      *((_QWORD *)v4509 + 1) = 0LL;
      v4509[4] = 0;
      *(_DWORD *)(v4501 + 2120) = *(_DWORD *)(v4501 + 2120);
      v4544 = *(_QWORD *)(v4501 + 2104);
      for ( i116 = v4544; ; LODWORD(v4544) = i116 ^ v4544 )
      {
        i116 >>= 31;
        if ( !i116 )
          break;
      }
      v4509[5] = v4544 & 0x7FFFFFFF;
    }
    v4546 = __rdtsc();
    v4547 = (__ROR8__(v4546, 3) ^ v4546) * (unsigned __int128)0x7010008004002001uLL;
    v5405 = *((_QWORD *)&v4547 + 1);
    if ( ((unsigned __int64)v4547 ^ *((_QWORD *)&v4547 + 1)) == 3
                                                              * (((unsigned __int64)v4547 ^ *((_QWORD *)&v4547 + 1))
                                                               / 3) )
    {
      v4548 = *(unsigned int *)(v4501 + 2096);
      v4549 = __rdtsc();
      v4550 = __ROR8__(v4549, 3);
      v5406 = ((v4550 ^ v4549) * (unsigned __int128)0x7010008004002001uLL) >> 64;
      v4551 = ((unsigned __int16)v5406 ^ (unsigned __int16)(8193 * (v4550 ^ v4549))) & 0x7FF;
      v4552 = __rdtsc();
      v4553 = (__ROR8__(v4552, 3) ^ v4552) * (unsigned __int128)0x7010008004002001uLL;
      v5407 = *((_QWORD *)&v4553 + 1);
      v4554 = (*((_QWORD *)&v4553 + 1) ^ (unsigned __int64)v4553) % (unsigned int)(v4551 + 1);
      v4555 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64))(v4501 + 256))(
                (-(__int64)((*(_DWORD *)(v4501 + 2520) & 0x8000000) != 0) & 0xFFFFFFFFFFFFFFC0uLL) + 130,
                (unsigned int)(v4551 + 2792),
                v4548);
      if ( v4555 )
      {
        v4556 = v4554;
        v4557 = (_QWORD *)v4555;
        if ( (unsigned int)v4554 >= 8 )
        {
          v4558 = (unsigned __int64)(unsigned int)v4554 >> 3;
          do
          {
            v4559 = __rdtsc();
            v4556 -= 8;
            v4560 = (__ROR8__(v4559, 3) ^ v4559) * (unsigned __int128)0x7010008004002001uLL;
            v5408 = *((_QWORD *)&v4560 + 1);
            *v4557++ = v4560 ^ *((_QWORD *)&v4560 + 1);
            --v4558;
          }
          while ( v4558 );
          v4501 = v5039;
        }
        if ( v4556 )
        {
          v4561 = __rdtsc();
          v4562 = (__ROR8__(v4561, 3) ^ v4561) * (unsigned __int128)0x7010008004002001uLL;
          v5409 = *((_QWORD *)&v4562 + 1);
          v4563 = v4562 ^ *((_QWORD *)&v4562 + 1);
          do
          {
            *(_BYTE *)v4557 = v4563;
            v4557 = (_QWORD *)((char *)v4557 + 1);
            v4563 >>= 8;
            --v4556;
          }
          while ( v4556 );
        }
        v4564 = v4551 - v4554;
        v4565 = (_QWORD *)(v4555 + (unsigned int)v4554 + 2792LL);
        if ( v4564 >= 8 )
        {
          v4566 = (unsigned __int64)v4564 >> 3;
          do
          {
            v4567 = __rdtsc();
            v4564 -= 8;
            v4568 = (__ROR8__(v4567, 3) ^ v4567) * (unsigned __int128)0x7010008004002001uLL;
            v5410 = *((_QWORD *)&v4568 + 1);
            *v4565++ = v4568 ^ *((_QWORD *)&v4568 + 1);
            --v4566;
          }
          while ( v4566 );
        }
        if ( v4564 )
        {
          v4569 = __rdtsc();
          v4570 = (__ROR8__(v4569, 3) ^ v4569) * (unsigned __int128)0x7010008004002001uLL;
          v5411 = *((_QWORD *)&v4570 + 1);
          v4571 = v4570 ^ *((_QWORD *)&v4570 + 1);
          do
          {
            *(_BYTE *)v4565 = v4571;
            v4565 = (_QWORD *)((char *)v4565 + 1);
            v4571 >>= 8;
            --v4564;
          }
          while ( v4564 );
        }
        if ( v4509 != (int *)-24LL )
          *((_QWORD *)v4509 + 3) = v4555;
        v4572 = v4555 + (unsigned int)v4554;
        if ( v4572 )
        {
          *((_QWORD *)v4509 + 1) = v4572;
          v4509[4] = 2792;
          v4573 = 2792;
          v4574 = (char *)v4501;
          v4575 = (_QWORD *)(v4555 + (unsigned int)v4554);
          v4576 = 349LL;
          do
          {
            v4573 -= 8;
            *v4575 = *(_QWORD *)v4574;
            v4574 += 8;
            ++v4575;
            --v4576;
          }
          while ( v4576 );
          for ( ; v4573; --v4573 )
          {
            v4577 = *v4574++;
            *(_BYTE *)v4575 = v4577;
            v4575 = (_QWORD *)((char *)v4575 + 1);
          }
          v4578 = *(_DWORD *)(v4572 + 2520) | 0x40000;
          *(_DWORD *)(v4572 + 2520) = v4578;
          v4578 &= ~1u;
          *(_DWORD *)(v4572 + 2052) = 2792;
          *(_DWORD *)(v4572 + 2088) = 2792;
          *(_DWORD *)(v4572 + 2520) = v4578;
          *(_DWORD *)(v4572 + 2676) = 2792;
          v5692 = v4578;
          LODWORD(sub_140B9EDF0_Offset) = *(_DWORD *)(v4572 + 2428);
          HalExtensionList = *(PVOID *)(v4572 + 1248);
          v5026 = *(PVOID *)(v4572 + 1464);
          *(_DWORD *)(v4572 + 196) = 324;
          do
          {
            v4579 = __rdtsc();
            v4580 = (__ROR8__(v4579, 3) ^ v4579) * (unsigned __int128)0x7010008004002001uLL;
            v5412 = *((_QWORD *)&v4580 + 1);
            v4581 = v4580 ^ *((_QWORD *)&v4580 + 1);
          }
          while ( (unsigned __int64)v4580 == *((_QWORD *)&v4580 + 1) );
          v4582 = (char *)(v4572 + 1976);
          v4583 = v5054;
          v4584 = v5519;
          v4585 = 32;
          v5027 = *(_QWORD *)(v4572 + 2008);
          LODWORD(v5022) = *(_DWORD *)(v4572 + 2120);
          v4586 = 4LL;
          do
          {
            v4585 -= 8;
            *(_QWORD *)v4584 = *(_QWORD *)v4582;
            v4582 += 8;
            v4584 += 8;
            --v4586;
          }
          while ( v4586 );
          for ( ; v4585; --v4585 )
          {
            v4587 = *v4582++;
            *v4584++ = v4587;
          }
          *(_QWORD *)(v4572 + 2008) = 0LL;
          v4588 = 32;
          *(_DWORD *)(v4572 + 2120) = 0;
          v4589 = 4LL;
          v4590 = (_QWORD *)(v4572 + 1976);
          do
          {
            *v4590 = 0LL;
            v4588 -= 8;
            ++v4590;
            --v4589;
          }
          while ( v4589 );
          for ( ; v4588; --v4588 )
          {
            *(_BYTE *)v4590 = 0;
            v4590 = (_QWORD *)((char *)v4590 + 1);
          }
          v4591 = *(unsigned int *)(v4572 + 2052);
          v4592 = (_QWORD *)v4572;
          *(_DWORD *)(v4572 + 2120) += v4591;
          v4593 = (const char *)v4572;
          v4594 = *(_DWORD *)(v4572 + 2100);
          v4595 = *(_QWORD *)(v4572 + 2104);
          if ( v4572 < v4572 + v4591 )
          {
            do
            {
              _mm_prefetch(v4593, 0);
              v4593 += 64;
            }
            while ( (unsigned __int64)v4593 < v4572 + v4591 );
          }
          v4596 = *(_QWORD *)(v4572 + 2104);
          v4597 = (unsigned int)v4591 >> 7;
          if ( (unsigned int)v4591 >> 7 )
          {
            do
            {
              v4598 = 8LL;
              do
              {
                v4599 = v4592[1] ^ __ROL8__(*v4592 ^ v4596, v4594);
                v4592 += 2;
                v4596 = __ROL8__(v4599, v4594);
                --v4598;
              }
              while ( v4598 );
              v4600 = (__ROL8__(v4595 ^ ((unsigned __int64)v4592 - v4572), 17) ^ v4595 ^ ((unsigned __int64)v4592 - v4572))
                    * (unsigned __int128)0x7010008004002001uLL;
              v5413 = *((_QWORD *)&v4600 + 1);
              v4594 = (BYTE8(v4600) ^ (unsigned __int8)(v4600 ^ v4594)) & 0x3F;
              if ( !v4594 )
                LOBYTE(v4594) = 1;
              --v4597;
            }
            while ( v4597 );
            v4501 = v5039;
            v4583 = v5054;
          }
          v4601 = v4591 & 0x7F;
          if ( v4601 >= 8 )
          {
            v4602 = (unsigned __int64)v4601 >> 3;
            do
            {
              v4596 = __ROL8__(*v4592++ ^ v4596, v4594);
              v4601 -= 8;
              --v4602;
            }
            while ( v4602 );
          }
          for ( ; v4601; --v4601 )
          {
            v4603 = *(unsigned __int8 *)v4592;
            v4592 = (_QWORD *)((char *)v4592 + 1);
            v4596 = __ROL8__(v4603 ^ v4596, v4594);
          }
          v4604 = (int)v5022;
          v4605 = (_QWORD *)(v4572 + 1976);
          v4606 = 32;
          *(_QWORD *)(v4572 + 2008) = v5027;
          *(_DWORD *)(v4572 + 2120) += v4604;
          v4607 = v5519;
          v4608 = 4LL;
          do
          {
            v4606 -= 8;
            *v4605 = *(_QWORD *)v4607;
            v4607 += 8;
            ++v4605;
            --v4608;
          }
          while ( v4608 );
          for ( ; v4606; --v4606 )
          {
            v4609 = *v4607++;
            *(_BYTE *)v4605 = v4609;
            v4605 = (_QWORD *)((char *)v4605 + 1);
          }
          *(_QWORD *)(v4572 + 2008) = v4596;
          if ( (*(_DWORD *)(v4572 + 2520) & 0x20000000) == 0 )
          {
            v4610 = 0;
            v4611 = (_QWORD *)v4572;
            for ( i117 = 0; i117 < 0x19; ++i117 )
              *v4611++ ^= v4581;
            v4613 = Timer;
            v4614 = v4611 + 323;
            v4615 = 324;
            while ( 1 )
            {
              *v4614-- ^= v4581;
              v5414[0] = __ROR8__(v4581, v4615);
              v4616 = v4613;
              _bittestandcomplement64(v5414, v5414[0] & 0x3F);
              if ( !--v4615 )
                break;
              v4581 = v5414[0];
            }
            v4617 = __rdtsc();
            Timer = v4613;
            v4618 = (__ROR8__(v4617, 3) ^ v4617) * (unsigned __int128)0x7010008004002001uLL;
            v5414[1] = *((_QWORD *)&v4618 + 1);
            if ( ((unsigned __int64)v4618 ^ *((_QWORD *)&v4618 + 1)) == 3
                                                                      * (((unsigned __int64)v4618 ^ *((_QWORD *)&v4618 + 1))
                                                                       / 3) )
            {
              v4619 = (unsigned int)sub_140B9EDF0_Offset;
              v4620 = (unsigned __int64)v5026;
              v4621 = v4572;
              v4622 = (unsigned __int64)HalExtensionList;
              v4623 = v4572;
              v4624 = __ROR8__(v4572, v4572);
              do
              {
                *(_QWORD *)v4572 -= v4621 + v4610;
                v4625 = *(_QWORD *)v4572;
                if ( (v5692 & 0x100) != 0 )
                  v4626 = v4625 ^ v4624;
                else
                  v4626 = v4620 ^ __ROR8__(v4624 ^ _byteswap_uint64(v4625 ^ v4622), v4620);
                *(_QWORD *)v4572 = v4626;
                v4627 = __ROL8__(
                          __ROR8__(v4610 ^ (unsigned __int64)(200 - v4610), ~*(_BYTE *)v4572) ^ v4624,
                          *(_BYTE *)v4572 ^ 0xFAu);
                v4572 += 8LL;
                ++v4610;
                v4624 = v4619 ^ (v4623 + v4627);
              }
              while ( v4610 <= 0x18 );
              v4501 = v5039;
              v4583 = v5054;
            }
            else
            {
              Timer = v4616;
            }
          }
          v4628 = (_QWORD *)*((_QWORD *)v4583 + 1);
          v4629 = *((unsigned int *)v4583 + 4);
          v4630 = v4628;
          *(_DWORD *)(v4501 + 2120) += v4629;
          v4631 = (const char *)v4628;
          v4632 = *(_DWORD *)(v4501 + 2100);
          v4633 = *(_QWORD *)(v4501 + 2104);
          if ( v4628 < (_QWORD *)((char *)v4628 + v4629) )
          {
            do
            {
              _mm_prefetch(v4631, 0);
              v4631 += 64;
            }
            while ( v4631 < (const char *)v4628 + v4629 );
          }
          v4634 = *(_QWORD *)(v4501 + 2104);
          v4635 = (unsigned int)v4629 >> 7;
          if ( (unsigned int)v4629 >> 7 )
          {
            do
            {
              v4636 = 8LL;
              do
              {
                v4637 = v4630[1] ^ __ROL8__(*v4630 ^ v4634, v4632);
                v4630 += 2;
                v4634 = __ROL8__(v4637, v4632);
                --v4636;
              }
              while ( v4636 );
              v4638 = (__ROL8__(v4633 ^ ((char *)v4630 - (char *)v4628), 17) ^ v4633 ^ (unsigned __int64)((char *)v4630 - (char *)v4628))
                    * (unsigned __int128)0x7010008004002001uLL;
              v5414[2] = *((_QWORD *)&v4638 + 1);
              v4632 = (BYTE8(v4638) ^ (unsigned __int8)(v4638 ^ v4632)) & 0x3F;
              if ( !v4632 )
                LOBYTE(v4632) = 1;
              --v4635;
            }
            while ( v4635 );
            v4583 = v5054;
          }
          v4639 = v4629 & 0x7F;
          if ( v4639 >= 8 )
          {
            v4640 = (unsigned __int64)v4639 >> 3;
            do
            {
              v4634 = __ROL8__(*v4630++ ^ v4634, v4632);
              v4639 -= 8;
              --v4640;
            }
            while ( v4640 );
          }
          for ( ; v4639; --v4639 )
          {
            v4641 = *(unsigned __int8 *)v4630;
            v4630 = (_QWORD *)((char *)v4630 + 1);
            v4634 = __ROL8__(v4641 ^ v4634, v4632);
          }
          for ( i118 = v4634; ; LODWORD(v4634) = i118 ^ v4634 )
          {
            i118 >>= 31;
            if ( !i118 )
              break;
          }
          *((_DWORD *)v4583 + 5) = v4634 & 0x7FFFFFFF;
        }
      }
      else
      {
        ++*(_DWORD *)(v4501 + 2656);
      }
    }
  }
  *(_DWORD *)(v4501 + 2520) |= 0x100000u;
  v4643 = *(_DWORD *)(v4501 + 196);
  v4644 = (_QWORD *)v4501;
  *(_DWORD *)(v4501 + 196) = 0;
  v4645 = (const char *)v4501;
  *(_DWORD *)(v4501 + 2120) += 1584;
  v4646 = *(_DWORD *)(v4501 + 2100);
  v4647 = *(_QWORD *)(v4501 + 2104);
  if ( v4501 < v4501 + 1584 )
  {
    do
    {
      _mm_prefetch(v4645, 0);
      v4645 += 64;
    }
    while ( (unsigned __int64)v4645 < v4501 + 1584 );
  }
  v4648 = *(_QWORD *)(v4501 + 2104);
  v4649 = 12;
  do
  {
    v4650 = 8LL;
    do
    {
      v4651 = v4644[1] ^ __ROL8__(*v4644 ^ v4648, v4646);
      v4644 += 2;
      v4648 = __ROL8__(v4651, v4646);
      --v4650;
    }
    while ( v4650 );
    v4652 = (__ROL8__(v4647 ^ ((unsigned __int64)v4644 - v4501), 17) ^ v4647 ^ ((unsigned __int64)v4644 - v4501))
          * (unsigned __int128)0x7010008004002001uLL;
    v5414[3] = *((_QWORD *)&v4652 + 1);
    v4646 = (BYTE8(v4652) ^ (unsigned __int8)(v4652 ^ v4646)) & 0x3F;
    if ( !v4646 )
      LOBYTE(v4646) = 1;
    --v4649;
  }
  while ( v4649 );
  v4653 = 48;
  v4654 = 6LL;
  do
  {
    v4648 = __ROL8__(*v4644++ ^ v4648, v4646);
    v4653 -= 8;
    --v4654;
  }
  while ( v4654 );
  for ( ; v4653; --v4653 )
  {
    v4655 = *(unsigned __int8 *)v4644;
    v4644 = (_QWORD *)((char *)v4644 + 1);
    v4648 = __ROL8__(v4655 ^ v4648, v4646);
  }
  *(_DWORD *)(v4501 + 196) = v4643;
  *(_QWORD *)(v4501 + 2664) = v4648;
  *(_DWORD *)(v4501 + 2120) = 0;
  *(_DWORD *)(v4501 + 2656) = 0;
  v5054 = *(_BYTE **)(v4501 + 2024);
  memmove(v5627, (const void *)v4501, 0xAE8uLL);
  v4656 = *(_DWORD *)(v4501 + 2520);
  if ( (v4656 & 0x20000000) == 0 && (*(_DWORD *)(v4501 + 2524) & 0x200000) == 0 && (v4656 & 1) != 0 )
  {
    v4657 = *(unsigned int *)(v4501 + 2676);
    v4658 = *(_QWORD *)(v4501 + 2104);
    v4659 = (_QWORD *)(v4501 + v4657);
    v4660 = v4501 + v4657 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v4501 + 2052) - v4657) >> 3);
    v4661 = __rdtsc();
    v4662 = (__ROR8__(v4661, 3) ^ v4661) * (unsigned __int128)0x7010008004002001uLL;
    v5414[4] = *((_QWORD *)&v4662 + 1);
    v4663 = v4662 ^ *((_QWORD *)&v4662 + 1);
    *(_QWORD *)(v4501 + 2680) = v4663;
    while ( v4659 != (_QWORD *)v4660 )
    {
      v4664 = v4658 ^ *v4659;
      *v4659 ^= v4663;
      v4663 = (v4664 + __ROR8__(v4663, v4663 & 0x3F)) ^ 0xEFA;
      ++v4659;
    }
    *(_DWORD *)(v4501 + 2524) |= 0x200000u;
    *(_QWORD *)(v4501 + 2688) = v4663;
  }
  v5693 = *(_DWORD *)(v4501 + 2428);
  v4665 = *(_DWORD *)(v4501 + 2676) - 200;
  LODWORD(sub_140B9EDF0_Offset) = *(_DWORD *)(v4501 + 2520);
  HalExtensionList = *(PVOID *)(v4501 + 1248);
  v4666 = v4665 >> 3;
  v5026 = *(PVOID *)(v4501 + 1464);
  *(_DWORD *)(v4501 + 196) = v4666;
  do
  {
    v4667 = __rdtsc();
    v4668 = (__ROR8__(v4667, 3) ^ v4667) * (unsigned __int128)0x7010008004002001uLL;
    v5414[5] = *((_QWORD *)&v4668 + 1);
    v4669 = v4668 ^ *((_QWORD *)&v4668 + 1);
  }
  while ( (unsigned __int64)v4668 == *((_QWORD *)&v4668 + 1) );
  v4670 = (char *)(v4501 + 1976);
  v4671 = *(_QWORD *)(v4501 + 2008);
  v4672 = v5520;
  v4673 = 32;
  LODWORD(v5022) = *(_DWORD *)(v4501 + 2120);
  v4674 = 4LL;
  do
  {
    v4673 -= 8;
    *(_QWORD *)v4672 = *(_QWORD *)v4670;
    v4670 += 8;
    v4672 += 8;
    --v4674;
  }
  while ( v4674 );
  for ( ; v4673; --v4673 )
  {
    v4675 = *v4670++;
    *v4672++ = v4675;
  }
  *(_QWORD *)(v4501 + 2008) = 0LL;
  v4676 = (_QWORD *)(v4501 + 1976);
  *(_DWORD *)(v4501 + 2120) = 0;
  v4677 = 32;
  v4678 = 4LL;
  do
  {
    *v4676 = 0LL;
    v4677 -= 8;
    ++v4676;
    --v4678;
  }
  while ( v4678 );
  for ( ; v4677; --v4677 )
  {
    *(_BYTE *)v4676 = 0;
    v4676 = (_QWORD *)((char *)v4676 + 1);
  }
  v4679 = *(unsigned int *)(v4501 + 2052);
  v4680 = (_QWORD *)v4501;
  *(_DWORD *)(v4501 + 2120) += v4679;
  v4681 = (const char *)v4501;
  v4682 = *(_DWORD *)(v4501 + 2100);
  v4683 = *(_QWORD *)(v4501 + 2104);
  if ( v4501 < v4501 + v4679 )
  {
    do
    {
      _mm_prefetch(v4681, 0);
      v4681 += 64;
    }
    while ( (unsigned __int64)v4681 < v4501 + v4679 );
  }
  v4684 = *(_QWORD *)(v4501 + 2104);
  for ( i119 = (unsigned int)v4679 >> 7; i119; --i119 )
  {
    v4686 = 8LL;
    do
    {
      v4687 = v4680[1] ^ __ROL8__(*v4680 ^ v4684, v4682);
      v4680 += 2;
      v4684 = __ROL8__(v4687, v4682);
      --v4686;
    }
    while ( v4686 );
    v4688 = __ROL8__(v4683 ^ ((unsigned __int64)v4680 - v4501), 17) ^ v4683 ^ ((unsigned __int64)v4680 - v4501);
    v5415 = (v4688 * (unsigned __int128)0x7010008004002001uLL) >> 64;
    v4682 = ((unsigned __int8)(v5415 ^ v4688) ^ (unsigned __int8)v4682) & 0x3F;
    if ( !v4682 )
      LOBYTE(v4682) = 1;
  }
  v4689 = v4679 & 0x7F;
  if ( v4689 >= 8 )
  {
    v4690 = (unsigned __int64)v4689 >> 3;
    do
    {
      v4684 = __ROL8__(*v4680++ ^ v4684, v4682);
      v4689 -= 8;
      --v4690;
    }
    while ( v4690 );
  }
  for ( ; v4689; --v4689 )
  {
    v4691 = *(unsigned __int8 *)v4680;
    v4680 = (_QWORD *)((char *)v4680 + 1);
    v4684 = __ROL8__(v4691 ^ v4684, v4682);
  }
  v4692 = (int)v5022;
  v4693 = (_QWORD *)(v4501 + 1976);
  v4694 = 32;
  *(_QWORD *)(v4501 + 2008) = v4671;
  *(_DWORD *)(v4501 + 2120) += v4692;
  v4695 = v5520;
  v4696 = 4LL;
  do
  {
    v4694 -= 8;
    *v4693 = *(_QWORD *)v4695;
    v4695 += 8;
    ++v4693;
    --v4696;
  }
  while ( v4696 );
  for ( ; v4694; --v4694 )
  {
    v4697 = *v4695++;
    *(_BYTE *)v4693 = v4697;
    v4693 = (_QWORD *)((char *)v4693 + 1);
  }
  *(_QWORD *)(v4501 + 2008) = v4684;
  if ( (*(_DWORD *)(v4501 + 2520) & 0x20000000) == 0 )
  {
    v4698 = (_QWORD *)v4501;
    v4699 = 0;
    v4700 = 25;
    do
    {
      *v4698 ^= v4669;
      ++v4699;
      ++v4698;
    }
    while ( v4699 < 0x19 );
    v5416[0] = v4669;
    v4701 = v4666;
    if ( v4666 )
    {
      v4702 = &v4698[v4666 - 1];
      while ( 1 )
      {
        *v4702-- ^= v4669;
        v5416[0] = __ROR8__(v4669, v4701);
        _bittestandcomplement64(v5416, v5416[0] & 0x3F);
        if ( !--v4701 )
          break;
        v4669 = v5416[0];
      }
    }
    v4703 = sub_140B9EDF0_Offset;
    if ( (sub_140B9EDF0_Offset & 0x40000) != 0 )
    {
      v4704 = __rdtsc();
      v4705 = (__ROR8__(v4704, 3) ^ v4704) * (unsigned __int128)0x7010008004002001uLL;
      v5416[1] = *((_QWORD *)&v4705 + 1);
      if ( ((unsigned __int64)v4705 ^ *((_QWORD *)&v4705 + 1)) != 3
                                                                * (((unsigned __int64)v4705 ^ *((_QWORD *)&v4705 + 1))
                                                                 / 3) )
        goto LABEL_6152;
    }
    else if ( (sub_140B9EDF0_Offset & 0x80u) != 0LL )
    {
      goto LABEL_6152;
    }
    v4706 = (unsigned __int64)v5026;
    v4707 = (unsigned __int64)HalExtensionList;
    v4708 = 0;
    v4709 = __ROR8__(v4501, v4501);
    v4710 = (__int64 *)v4501;
    do
    {
      *v4710 -= v4501 + v4708;
      v4711 = *v4710;
      if ( (v4703 & 0x100) != 0 )
        v4712 = v4709 ^ v4711;
      else
        v4712 = v4706 ^ __ROR8__(v4709 ^ _byteswap_uint64(v4707 ^ v4711), v4706);
      *v4710 = v4712;
      v4713 = __ROL8__(
                __ROR8__(v4708 ^ (unsigned __int64)(200 - v4708), ~*(_BYTE *)v4710) ^ v4709,
                *(_BYTE *)v4710 ^ 0xFAu);
      ++v4710;
      ++v4708;
      v4709 = v5693 ^ (v4501 + v4713);
      if ( v4708 == 25 )
      {
        v4714 = 0;
        if ( (v4703 & 0x40000) == 0 )
          v4714 = v4666;
        v4700 += v4714;
      }
    }
    while ( v4708 < v4700 );
  }
LABEL_6152:
  KeInitializeTimer(Timer);
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  if ( enumDpcExecutionMethod0 == 7 )
  {
    v4715 = 32;
    if ( (*(_DWORD *)(v4501 + 2520) & 0x8000000) != 0 )
      v4715 = 2;
    if ( *(_DWORD *)(v4501 + 2372) )
    {
      MmSetPageProtection(*(_QWORD *)(v4501 + 2024) - 8LL, **(_QWORD **)(v4501 + 2024), v4715);
    }
    else
    {
      v4716 = *(void **)(v4501 + 2024);
      PoolBlockSize = ExQueryPoolBlockSize(v4716, QuotaCharged);
      CmpProtectPool(v4716, PoolBlockSize, v4715);
    }
    for ( i120 = 0; i120 < 0x10; ++i120 )
    {
      v4719 = __rdtsc();
      v4720 = (__ROR8__(v4719, 3) ^ v4719) * (unsigned __int128)0x7010008004002001uLL;
      v5416[2] = *((_QWORD *)&v4720 + 1);
      v4721 = ((unsigned __int64)v4720 ^ *((_QWORD *)&v4720 + 1)) % 0xB;
      if ( (unsigned int)v4721 > 5 )
      {
        v4725 = v4721 - 6;
        if ( v4725 )
        {
          v4726 = v4725 - 1;
          if ( v4726 )
          {
            v4727 = v4726 - 1;
            if ( v4727 )
            {
              if ( v4727 == 1 )
              {
                v5164[9] = -1333354875;
                v4724 = __ROR4__(-1333354868, 33);
              }
              else
              {
                v4728 = __rdtsc();
                v4729 = __ROR8__(v4728, 3);
                v5417 = ((v4729 ^ v4728) * (unsigned __int128)0x7010008004002001uLL) >> 64;
                v4724 = ((((((((unsigned int)v5417 ^ (67117057 * ((unsigned int)v4729 ^ (unsigned int)v4728))) % 0x1A
                            + 97) << 8) | ((((unsigned int)v5417 ^ (67117057
                                                                  * ((unsigned int)v4729 ^ (unsigned int)v4728))) >> 5)
                                         % 0x1A
                                         + 65)) << 8) | ((((unsigned int)v5417 ^ (67117057
                                                                                * ((unsigned int)v4729 ^ (unsigned int)v4728))) >> 10)
                                                       % 0x1A
                                                       + 97)) << 8) | ((((unsigned int)v5417 ^ (67117057
                                                                                              * ((unsigned int)v4729 ^ (unsigned int)v4728))) >> 15)
                                                                     % 0x1A
                                                                     + 65);
              }
            }
            else
            {
              v5164[10] = 1684422978;
              v4724 = __ROR4__(1684422978, 8);
            }
          }
          else
          {
            v5164[11] = -2100910376;
            v4724 = __ROL4__(-2100910376, 7);
          }
        }
        else
        {
          v5164[12] = 1314342514;
          v4724 = __ROR4__(1314342516, 24);
        }
      }
      else if ( (_DWORD)v4721 == 5 )
      {
        v5164[8] = 680282605;
        v4724 = __ROR4__(680282605, 5);
      }
      else if ( (_DWORD)v4721 )
      {
        v4722 = v4721 - 1;
        if ( v4722 )
        {
          v4723 = v4722 - 1;
          if ( v4723 )
          {
            if ( v4723 == 1 )
            {
              v5164[4] = -1474152136;
              v4724 = __ROR4__(-1474152133, 15);
            }
            else
            {
              v5164[3] = 1728537748;
              v4724 = __ROL4__(1728537748, 4);
            }
          }
          else
          {
            v5164[5] = -2051698419;
            v4724 = __ROR4__(-2051698419, 2);
          }
        }
        else
        {
          v5164[6] = -1297272415;
          v4724 = __ROL4__(-1297272415, 1);
        }
      }
      else
      {
        v5164[7] = -795291432;
        v4724 = __ROR4__(-795291432, 6);
      }
      v4730 = i120;
      dword_140E0EF10[v4730] = v4724;
    }
    v4501 = v5039;
    v4731 = (_QWORD *)v5039;
    v4732 = (const char *)v5039;
    v4733 = *(unsigned int *)(v5039 + 2052);
    v4734 = *(unsigned int *)(v5039 + 2100);
    v4735 = *(_QWORD *)(v5039 + 2104);
    if ( v5039 < v5039 + v4733 )
    {
      do
      {
        _mm_prefetch(v4732, 0);
        v4732 += 64;
      }
      while ( (unsigned __int64)v4732 < v5039 + v4733 );
    }
    v4736 = (unsigned int)v4733 >> 7;
    for ( i121 = *(_QWORD *)(v5039 + 2104); v4736; --v4736 )
    {
      v4738 = 8LL;
      do
      {
        v4739 = v4731[1] ^ __ROL8__(*v4731 ^ i121, v4734);
        v4731 += 2;
        i121 = __ROL8__(v4739, v4734);
        --v4738;
      }
      while ( v4738 );
      v4740 = __ROL8__(v4735 ^ ((unsigned __int64)v4731 - v5039), 17) ^ v4735 ^ ((unsigned __int64)v4731 - v5039);
      v5418 = (v4740 * (unsigned __int128)0x7010008004002001uLL) >> 64;
      v4734 = ((unsigned __int8)(v5418 ^ v4740) ^ (unsigned __int8)v4734) & 0x3F;
      if ( !(_DWORD)v4734 )
        v4734 = 1LL;
    }
    v4741 = v4733 & 0x7F;
    if ( v4741 >= 8 )
    {
      v4742 = (unsigned __int64)v4741 >> 3;
      do
      {
        i121 = __ROL8__(*v4731++ ^ i121, v4734);
        v4741 -= 8;
        --v4742;
      }
      while ( v4742 );
    }
    for ( ; v4741; --v4741 )
    {
      v4743 = *(unsigned __int8 *)v4731;
      v4731 = (_QWORD *)((char *)v4731 + 1);
      i121 = __ROL8__(v4743 ^ i121, v4734);
    }
    v4744 = 4;
    qword_140FC4A50 = i121;
    v5694 = 4;
    v4745 = v5453;
    v4746 = 4;
    v5452 = 0LL;
    do
    {
      *v4745++ = 0;
      --v4746;
    }
    while ( v4746 );
    v4747 = 0;
    v5686 = 0;
    if ( *(_DWORD *)(v4501 + 2092) )
    {
      LODWORD(v4734) = v5453[0];
      v4748 = HIDWORD(v5452);
      v4749 = v5452;
      while ( 1 )
      {
        v4750 = v4501;
        v4751 = 0;
        if ( *(_QWORD *)(v4501 + 2752) )
          v4750 = *(_QWORD *)(v4501 + 2752);
        v4752 = (int *)(v4750 + *(unsigned int *)(v4750 + 2088));
        if ( v4749 && v4748 <= v4747 )
        {
          v4751 = v4748;
          v4752 = (int *)(v4750 + (unsigned int)v4734);
        }
        if ( v4751 != v4747 )
        {
          v4753 = v4747 - v4751;
          v4751 = v4747;
          while ( 1 )
          {
            if ( *v4752 == 1 )
            {
LABEL_6223:
              v4754 = 4 * (v4752[4] / 0xCu) + 48;
              goto LABEL_6224;
            }
            if ( *v4752 == 7 )
            {
              v4754 = (unsigned int)(24 * (v4752[6] + 2));
              goto LABEL_6224;
            }
            if ( *v4752 == 8 )
              break;
            switch ( *v4752 )
            {
              case 10:
                v4754 = (unsigned int)(16 * (v4752[7] + 3));
                break;
              case 28:
                v4755 = *((unsigned __int16 *)v4752 + 20);
LABEL_6221:
                v4754 = (v4755 + 55) & 0xFFFFFFF8;
                break;
              case 30:
                v4754 = (((v4752[9] != 0 ? v4752[9] - 1 : 0) / 0xCu + 7) & 0xFFFFFFF8)
                      + 24 * (*((unsigned __int16 *)v4752 + 20) + 2);
                break;
              case 33:
                v4754 = 20
                      * (unsigned int)(((v4752[8] & 0xFFF) + (unsigned __int64)(unsigned int)v4752[10] + 4095) >> 12)
                      + 48;
                break;
              case 43:
                goto LABEL_6223;
              default:
                v4754 = 48LL;
                break;
            }
LABEL_6224:
            v4752 = (int *)((char *)v4752 + v4754);
            if ( !--v4753 )
            {
              v4501 = v5039;
              v4747 = v5686;
              goto LABEL_6226;
            }
          }
          v4755 = *((unsigned __int16 *)v4752 + 16);
          goto LABEL_6221;
        }
LABEL_6226:
        LODWORD(v5452) = 1;
        v4734 = (unsigned int)((_DWORD)v4752 - v4750);
        HIDWORD(v5452) = v4751;
        v5453[0] = (_DWORD)v4752 - v4750;
        v4749 = 1;
        v4756 = *v4752;
        v4748 = v4751;
        if ( (_DWORD)v4756 == 3 || (unsigned int)v4756 <= 0x26 && (v4757 = 0x4000200204LL, _bittest64(&v4757, v4756)) )
        {
          ++v4744;
          if ( (_DWORD)v4756 == 2 )
            goto LABEL_6242;
        }
        else
        {
          if ( (_DWORD)v4756 != 32 )
          {
            if ( (_DWORD)v4756 == 7 )
            {
              v4744 += v4752[6];
            }
            else if ( (_DWORD)v4756 == 33 )
            {
              v4758 = v4752 + 12;
              v4759 = (unsigned __int64)&v4752[5
                                             * (((unsigned int)v4752[10] + 4095LL + (*((_QWORD *)v4752 + 4) & 0xFFFuLL)) >> 12)
                                             + 12];
              while ( v4758 != (int *)v4759 )
              {
                v4760 = v4744++;
                if ( *((char *)v4758 + 15) < 0 )
                  v4744 = v4760;
                v4758 += 5;
              }
            }
            goto LABEL_6243;
          }
          if ( (v4752[10] & 1) != 0 )
LABEL_6242:
            ++v4744;
        }
LABEL_6243:
        v5686 = ++v4747;
        if ( v4747 >= *(_DWORD *)(v4501 + 2092) )
        {
          v5694 = v4744;
          break;
        }
      }
    }
    v4761 = __rdtsc();
    v4762 = (__ROR8__(v4761, 3) ^ v4761) * (unsigned __int128)0x7010008004002001uLL;
    v5419 = *((_QWORD *)&v4762 + 1);
    v4763 = ((unsigned __int64)v4762 ^ *((_QWORD *)&v4762 + 1)) % 0xB;
    if ( (unsigned int)v4763 <= 5 )
    {
      if ( (_DWORD)v4763 == 5 )
      {
        v4766 = 5;
        v5170 = __ROL4__(1766089295, 5);
        v4768 = v5170;
        goto LABEL_6268;
      }
      if ( !(_DWORD)v4763 )
      {
        v4766 = 6;
        v5169 = __ROL4__(1665295171, 6);
        v4767 = v5169;
        goto LABEL_6267;
      }
      if ( (_DWORD)v4763 != 1 )
      {
        if ( (_DWORD)v4763 == 2 )
        {
          v4766 = 2;
          v5167 = __ROL4__(1634559043, 2);
          v4768 = v5167;
        }
        else
        {
          if ( (_DWORD)v4763 != 3 )
          {
            v4764 = ((unsigned __int64)v4762 ^ *((_QWORD *)&v4762 + 1)) % 0xB;
            v5165 = __ROR4__(1886800198, v4763);
            v4765 = v5165;
            goto LABEL_6255;
          }
          v4766 = 15;
          v5166 = __ROL4__(1920421956, 15) ^ 3;
          v4767 = v5166;
LABEL_6267:
          v4768 = v4763 ^ v4767;
        }
LABEL_6268:
        v4769 = (unsigned int)__ROR4__(v4768, v4766);
        goto LABEL_6269;
      }
      v4764 = 1;
      v5168 = __ROR4__(1700422467, 1);
      v4765 = v5168;
LABEL_6255:
      v4769 = (unsigned int)__ROL4__(v4765, v4764);
      goto LABEL_6269;
    }
    switch ( (_DWORD)v4763 )
    {
      case 6:
        v4766 = 24;
        v5174 = __ROL4__(1464235086, 24) ^ 6;
        v4767 = v5174;
        goto LABEL_6267;
      case 7:
        v4764 = 7;
        v5173 = __ROR4__(1666411585, 7);
        v4765 = v5173;
        goto LABEL_6255;
      case 8:
        v4766 = 8;
        v5172 = __ROL4__(1113876033, 8);
        v4768 = v5172;
        goto LABEL_6268;
      case 9:
        v4766 = 33;
        v5171 = __ROL4__(1480806214, 33) ^ 9;
        v4767 = v5171;
        goto LABEL_6267;
    }
    v4770 = __rdtsc();
    v4734 = 1321528399LL;
    v4771 = __ROR8__(v4770, 3);
    v5420 = ((v4771 ^ v4770) * (unsigned __int128)0x7010008004002001uLL) >> 64;
    v4769 = ((((((((unsigned int)v5420 ^ (67117057 * ((unsigned int)v4771 ^ (unsigned int)v4770))) % 0x1A + 97) << 8) | ((((unsigned int)v5420 ^ (67117057 * ((unsigned int)v4771 ^ (unsigned int)v4770))) >> 5) % 0x1A + 65)) << 8) | ((((unsigned int)v5420 ^ (67117057 * ((unsigned int)v4771 ^ (unsigned int)v4770))) >> 10) % 0x1A + 97)) << 8) | ((((unsigned int)v5420 ^ (67117057 * ((unsigned int)v4771 ^ (unsigned int)v4770))) >> 15) % 0x1A + 65);
LABEL_6269:
    HalExtensionList = (PVOID)(*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64, __int64))(v4501 + 256))(
                                64LL,
                                (unsigned __int64)v4744 << 6,
                                v4769,
                                v4734);
    v4772 = (char *)HalExtensionList;
    if ( !HalExtensionList )
      goto LABEL_6631;
    v4773 = __rdtsc();
    v4774 = (__ROR8__(v4773, 3) ^ v4773) * (unsigned __int128)0x7010008004002001uLL;
    v5421 = *((_QWORD *)&v4774 + 1);
    v5422[0] = v4774 ^ *((_QWORD *)&v4774 + 1) ^ (unsigned int)ExGenRandom(0LL);
    v4775 = __rdtsc();
    v4776 = (__ROR8__(v4775, 3) ^ v4775) * (unsigned __int128)0x7010008004002001uLL;
    v5422[1] = *((_QWORD *)&v4776 + 1);
    v5175 = ((unsigned __int64)v4776 ^ *((_QWORD *)&v4776 + 1) ^ (unsigned int)ExGenRandom(0LL)) % 0x3F + 1;
    *((_QWORD *)HalExtensionList + 1) = 0LL;
    *((_QWORD *)v4772 + 2) = 0LL;
    *((_WORD *)v4772 + 12) = 4096;
    *((_QWORD *)v4772 + 4) = v5422[0];
    *((_DWORD *)v4772 + 10) = v5175;
    *((_DWORD *)v4772 + 11) = 0;
    v4777 = MmStrongCodeGuaranteesEnforced();
    v4781 = 0;
    if ( v4777 )
    {
      v4782 = sub_140BCED74(v4779, v4778, v4780, 0LL);
      v4781 = 0;
      if ( v4782 )
        *((_DWORD *)v4772 + 11) |= 1u;
    }
    if ( (v5105 & 0x10) != 0 )
      *((_DWORD *)v4772 + 11) |= 4u;
    v4783 = 1;
    v5452 = 0LL;
    v4784 = v5453;
    v4785 = 4;
    do
    {
      *v4784++ = 0;
      --v4785;
    }
    while ( v4785 );
    v5176 = 0;
    v4786 = 0;
    v4787 = 0LL;
    LODWORD(v5022) = 0;
    v4788 = 0LL;
    v5026 = 0LL;
    LODWORD(sub_140B9EDF0_Offset) = 0;
    if ( *(_DWORD *)(v4501 + 2092) )
    {
      while ( 1 )
      {
        v4789 = v4501;
        if ( *(_QWORD *)(v4501 + 2752) )
          v4789 = *(_QWORD *)(v4501 + 2752);
        v4790 = (int *)(v4789 + *(unsigned int *)(v4789 + 2088));
        if ( (_DWORD)v5452 && HIDWORD(v5452) <= v4786 )
        {
          v4781 = HIDWORD(v5452);
          v4790 = (int *)(v4789 + v5453[0]);
        }
        if ( v4781 != v4786 )
        {
          v4791 = v4786 - v4781;
          v4781 = v4786;
          while ( 1 )
          {
            if ( *v4790 == 1 )
            {
LABEL_6301:
              v4792 = 4 * (v4790[4] / 0xCu) + 48;
              goto LABEL_6302;
            }
            if ( *v4790 == 7 )
            {
              v4792 = (unsigned int)(24 * (v4790[6] + 2));
              goto LABEL_6302;
            }
            if ( *v4790 == 8 )
              break;
            switch ( *v4790 )
            {
              case 10:
                v4792 = (unsigned int)(16 * (v4790[7] + 3));
                break;
              case 28:
                v4793 = *((unsigned __int16 *)v4790 + 20);
LABEL_6299:
                v4792 = (v4793 + 55) & 0xFFFFFFF8;
                break;
              case 30:
                v4792 = (((v4790[9] != 0 ? v4790[9] - 1 : 0) / 0xCu + 7) & 0xFFFFFFF8)
                      + 24 * (*((unsigned __int16 *)v4790 + 20) + 2);
                break;
              case 33:
                v4792 = 20
                      * (unsigned int)(((v4790[8] & 0xFFF) + (unsigned __int64)(unsigned int)v4790[10] + 4095) >> 12)
                      + 48;
                break;
              case 43:
                goto LABEL_6301;
              default:
                v4792 = 48LL;
                break;
            }
LABEL_6302:
            v4790 = (int *)((char *)v4790 + v4792);
            if ( !--v4791 )
            {
              v4501 = v5039;
              v4772 = (char *)HalExtensionList;
              v4786 = (unsigned int)v5022;
              goto LABEL_6304;
            }
          }
          v4793 = *((unsigned __int16 *)v4790 + 16);
          goto LABEL_6299;
        }
LABEL_6304:
        LODWORD(v5452) = 1;
        HIDWORD(v5452) = v4781;
        v5453[0] = (_DWORD)v4790 - v4789;
        v4794 = *v4790;
        if ( *v4790 == 3 || v4794 == 2 )
        {
          v4903 = (unsigned __int64)v4783 << 6;
          *(_QWORD *)&v4772[v4903 + 8] = *((_QWORD *)v4790 + 1);
          *(_QWORD *)&v4772[v4903 + 16] = (unsigned int)v4790[4];
          *(_WORD *)&v4772[v4903 + 24] = 4101 - (*v4790 != 3);
          *(_DWORD *)&v4772[v4903 + 48] = v4790[10];
          *(_WORD *)&v4772[v4903 + 52] = *((_WORD *)v4790 + 22);
          sub_1404D2D9C(v4501, *(_QWORD *)&v4772[v4903 + 8], *(unsigned int *)&v4772[v4903 + 16], &v4772[v4903 + 32]);
          v4788 = v5026;
          v4781 = 0;
          ++v4783;
          if ( *v4790 == 2 )
          {
            v4904 = (unsigned __int64)v4783 << 6;
            *(_QWORD *)&v4772[v4904 + 8] = 0LL;
            *(_QWORD *)&v4772[v4904 + 16] = 0LL;
            *(_WORD *)&v4772[v4904 + 24] = 4107;
            *(_DWORD *)&v4772[v4904 + 32] = v4790[10];
            goto LABEL_6426;
          }
LABEL_6427:
          v4786 = (unsigned int)v5022;
          goto LABEL_6309;
        }
        if ( v4794 == 9 )
          break;
        if ( v4794 == 32 )
        {
          if ( (v4790[10] & 1) != 0 )
          {
            LODWORD(v4850) = 16;
            v4851 = (unsigned __int64)v4783 << 6;
            *(_QWORD *)&v4772[v4851 + 8] = *((_QWORD *)v4790 + 1);
            v4852 = &v4772[v4851 + 32];
            *(_QWORD *)&v4772[v4851 + 16] = (unsigned int)v4790[4];
            *(_WORD *)&v4772[v4851 + 24] = 4097;
            v4853 = (char *)(v4790 + 6);
            v4854 = 2LL;
            do
            {
              v4850 = (unsigned int)(v4850 - 8);
              *(_QWORD *)v4852 = *(_QWORD *)v4853;
              v4853 += 8;
              v4852 += 8;
              --v4854;
            }
            while ( v4854 );
            if ( (_DWORD)v4850 )
            {
              do
              {
                v4855 = *v4853++;
                *v4852++ = v4855;
                v4393 = (_DWORD)v4850 == 1;
                v4850 = (unsigned int)(v4850 - 1);
              }
              while ( !v4393 );
            }
            v4856 = *((_QWORD *)v4790 + 1);
            if ( v4856 )
            {
              if ( v4856 < v4787 || v4856 >= (unsigned __int64)v4788 )
              {
                v4858 = (*(__int64 (__fastcall **)(unsigned __int64, char *, char *, __int64))(v4501 + 536))(
                          v4856,
                          v5423,
                          v4852,
                          v4850);
                v4788 = v5026;
                v4857 = v4858;
              }
              else
              {
                v4857 = v4787;
              }
            }
            else
            {
              v4857 = 0LL;
            }
            if ( (v4790[10] & 4) != 0 )
            {
              *(_WORD *)&v4772[64 * (unsigned __int64)v4783 + 24] = 4106;
              PhysicalAddress = MmGetPhysicalAddress(*((PVOID *)v4790 + 1));
              v4788 = v5026;
              *(_QWORD *)&v4772[64 * (unsigned __int64)v4783 + 48] = (unsigned __int64)PhysicalAddress.QuadPart >> 12;
            }
            else if ( v4857 )
            {
              v4860 = (void *)(*(__int64 (__fastcall **)(__int64, char *, char *, __int64))(v4501 + 520))(
                                v4857,
                                v4853,
                                v4852,
                                v4850);
              v4861 = (unsigned int)(v4790[2] - v4857);
              v5026 = v4860;
              v4862 = RtlSectionTableFromVirtualAddress(v4860, v4857, v4861);
              if ( v4862 && (*(_DWORD *)(v4862 + 36) & 0x20000000) != 0 )
                v4772[64 * (unsigned __int64)v4783 + 47] |= 0x80u;
              v4787 = v4857;
              v4788 = (PVOID)(v4857 + *((unsigned int *)v5026 + 20));
              v5026 = v4788;
            }
            else
            {
              v4863 = *((_QWORD *)v4790 + 1);
              if ( v4863 < 0xFFFFF78000000000uLL || v4863 >= 0xFFFFF78000001000uLL )
              {
                v4864 = (unsigned int)v4790[4];
                if ( (_DWORD)v4864 )
                {
                  if ( (unsigned int)v4864 > 0x1000 )
                  {
                    v5178 = -402653175;
                    KeBugCheckEx(__ROL4__(-402653175, 101), 0xDuLL, v4501, v4863, v4864);
                  }
                  *(_WORD *)&v4772[64 * (unsigned __int64)v4783 + 24] = 4105;
                  *(_QWORD *)&v4772[64 * (unsigned __int64)v4783 + 48] = (unsigned __int64)MmGetPhysicalAddress(*((PVOID *)v4790 + 1)).QuadPart >> 12;
                  v4865 = MmGetPhysicalAddress((PVOID)(*((_QWORD *)v4790 + 1) + (unsigned int)(v4790[4] - 1)));
                  v4788 = v5026;
                  *(_QWORD *)&v4772[64 * (unsigned __int64)v4783 + 56] = (unsigned __int64)v4865.QuadPart >> 12;
                }
              }
            }
            v4786 = (unsigned int)v5022;
            ++v4783;
          }
          goto LABEL_6308;
        }
        if ( v4794 != 7 )
        {
          if ( v4794 == 21 || v4794 == 38 )
          {
            v4901 = 4108;
            v4902 = (unsigned __int64)v4783 << 6;
            v4781 = 0;
            *(_QWORD *)&v4772[v4902 + 8] = 0LL;
            *(_QWORD *)&v4772[v4902 + 16] = 0LL;
            if ( *v4790 != 38 )
              v4901 = 4102;
            *(_WORD *)&v4772[v4902 + 24] = v4901;
            *(_DWORD *)&v4772[v4902 + 52] = v4790[11];
            *(_QWORD *)&v4772[v4902 + 32] = *((_QWORD *)v4790 + 3);
            *(_QWORD *)&v4772[v4902 + 40] = *((_QWORD *)v4790 + 4);
            *(_DWORD *)&v4772[v4902 + 48] = v4790[10];
LABEL_6426:
            ++v4783;
            goto LABEL_6427;
          }
          if ( v4794 == 33 )
          {
            v4787 = *((_QWORD *)v4790 + 4);
            i21 = ((v4787 & 0xFFF) + 4095 + (unsigned int)v4790[10]) >> 12;
            v5028 = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(v4501 + 520))(v4787, 4097LL);
            v4870 = 0LL;
            v5687 = 0;
            v5026 = (PVOID)(v4787 + (unsigned int)v4790[10]);
            _disable();
            v4871 = *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *(_QWORD *)(v4501 + 1624));
            _enable();
            (*(void (__fastcall **)(__int64))(v4501 + 376))(v4871);
            LOBYTE(v4872) = 1;
            (*(void (__fastcall **)(_QWORD, __int64))(v4501 + 240))(*(_QWORD *)(v4501 + 1328), v4872);
            v4874 = (PVOID *)PsLoadedModuleList;
            if ( PsLoadedModuleList != &PsLoadedModuleList )
            {
              v4875 = *(_QWORD *)(v4501 + 1880);
              while ( 1 )
              {
                v4876 = (char *)v4874 - v4875;
                v4877 = *(unsigned __int64 *)((char *)v4874 + *(_QWORD *)(v4501 + 1888) - v4875);
                v4873 = v4877 + *(unsigned int *)((char *)v4874 + *(_QWORD *)(v4501 + 1896) - v4875);
                if ( v4787 >= v4877 && v4787 < v4873 )
                  break;
                v4874 = (PVOID *)*v4874;
                if ( v4874 == &PsLoadedModuleList )
                  goto LABEL_6397;
              }
              v4878 = v5177;
              v5687 = 1;
              v4879 = 4;
              do
              {
                *v4878++ = 0;
                --v4879;
              }
              while ( v4879 );
              v4880 = *(_QWORD *)(v4501 + 1904);
              v4881 = 0;
              do
              {
                if ( v4881 >= *(unsigned __int16 *)&v4876[v4880] >> 1 )
                  break;
                v4882 = v4881++;
                v5177[v4882] = *(_BYTE *)(*(_QWORD *)&v4876[v4880 + 8] + 2 * v4882);
              }
              while ( v4881 < 4 );
              LODWORD(v4873) = 4;
              v4883 = 0LL;
              do
              {
                v5177[v4883 - 4] = v5177[v4883];
                ++v4883;
                v4393 = (_DWORD)v4873 == 1;
                v4873 = (unsigned int)(v4873 - 1);
              }
              while ( !v4393 );
            }
LABEL_6397:
            (*(void (__fastcall **)(_QWORD, unsigned __int64))(v4501 + 296))(*(_QWORD *)(v4501 + 1328), v4873);
            (*(void (**)(void))(v4501 + 384))();
            v4781 = 0;
            if ( !v5687 )
              v5176 = 0;
            v4884 = v4790 + 12;
            v4885 = (ULONG_PTR)&v4884[5 * i21];
            i21 = v4885;
            if ( v4884 != (int *)v4885 )
            {
              v4886 = v5028;
              v4887 = v4787;
              do
              {
                if ( *((char *)v4884 + 15) >= 0 )
                {
                  if ( v4884[4] < 0 )
                    *(_WORD *)&v4772[64 * (unsigned __int64)v4783 + 26] |= 1u;
                  v4888 = 16;
                  v4889 = (unsigned __int64)v4783 << 6;
                  v4890 = (char *)v4884;
                  *(_QWORD *)&v4772[v4889 + 8] = v4887;
                  *(_QWORD *)&v4772[v4889 + 16] = 4096LL;
                  *(_WORD *)&v4772[v4889 + 24] = 4098;
                  *(_QWORD *)&v4772[v4889 + 48] = v4787;
                  v4891 = &v4772[v4889 + 32];
                  *(_DWORD *)&v4772[v4889 + 56] = (__int64)(v4887 - v4787) / 4096;
                  v4892 = 2LL;
                  do
                  {
                    v4888 -= 8;
                    *(_QWORD *)v4891 = *(_QWORD *)v4890;
                    v4890 += 8;
                    v4891 += 8;
                    --v4892;
                  }
                  while ( v4892 );
                  for ( ; v4888; --v4888 )
                  {
                    v4893 = *v4890++;
                    *v4891++ = v4893;
                  }
                  v4894 = &v5176;
                  v4895 = 4;
                  do
                  {
                    v4772[((unsigned __int64)v4783 << 6) - (_QWORD)&v5176 + 60 + (_QWORD)v4894] = *(_BYTE *)v4894;
                    v4894 = (int *)((char *)v4894 + 1);
                    --v4895;
                  }
                  while ( v4895 );
                  v4781 = 0;
                  v4896 = (unsigned int)(*(_DWORD *)&v4772[64 * (unsigned __int64)v4783 + 56] << 12);
                  if ( !v4870 || (unsigned int)v4896 >= (unsigned int)sub_140B9EDF0_Offset )
                  {
                    v4897 = RtlSectionTableFromVirtualAddress(v4886, v4787, v4896);
                    v4885 = i21;
                    v4781 = 0;
                    v4870 = v4897;
                    if ( v4897 )
                      v4898 = *(_DWORD *)(v4897 + 8) + *(_DWORD *)(v4897 + 12);
                    else
                      v4898 = *(_DWORD *)(*(unsigned __int16 *)(v4886 + 20) + v4886 + 36);
                    LODWORD(sub_140B9EDF0_Offset) = v4898;
                  }
                  v4899 = (unsigned __int64)v4783 << 6;
                  v4900 = v4772[v4899 + 47] & 0x7F;
                  v4772[v4899 + 47] = v4900;
                  if ( v4870 && (*(_DWORD *)(v4870 + 36) & 0x20000000) != 0 )
                    v4772[v4899 + 47] = v4900 | 0x80;
                  ++v4783;
                }
                v4884 += 5;
                v4887 += 4096LL;
              }
              while ( v4884 != (int *)v4885 );
              v4501 = v5039;
            }
            v4786 = (unsigned int)v5022;
            v4788 = v5026;
            goto LABEL_6309;
          }
          goto LABEL_6308;
        }
        v4781 = 0;
        v4866 = v4790 + 12;
        v4867 = 0;
        if ( v4790[6] )
        {
          do
          {
            ++v4867;
            v4868 = (unsigned __int64)v4783++ << 6;
            *(_QWORD *)&v4772[v4868 + 8] = 0LL;
            *(_QWORD *)&v4772[v4868 + 16] = 0LL;
            *(_WORD *)&v4772[v4868 + 24] = 4099;
            *(_DWORD *)&v4772[v4868 + 52] = v4790[7];
            v4869 = *v4866;
            v4866 += 3;
            *(_QWORD *)&v4772[v4868 + 32] = v4869;
            *(_QWORD *)&v4772[v4868 + 40] = *(v4866 - 2);
            *(_DWORD *)&v4772[v4868 + 48] = *((_DWORD *)v4866 - 2);
          }
          while ( v4867 < v4790[6] );
          goto LABEL_6427;
        }
LABEL_6309:
        LODWORD(v5022) = ++v4786;
        if ( v4786 >= *(_DWORD *)(v4501 + 2092) )
        {
          v4744 = v5694;
          goto LABEL_6311;
        }
      }
      v4795 = *((_QWORD *)v4790 + 1);
      v4796 = (unsigned __int64)v4783 << 6;
      *(_QWORD *)&v4772[v4796 + 8] = v4795;
      *(_QWORD *)&v4772[v4796 + 16] = (unsigned int)v4790[4];
      *(_WORD *)&v4772[v4796 + 24] = 4097;
      sub_1404D2D9C(v4501, v4795, *(unsigned int *)&v4772[v4796 + 16], &v4772[v4796 + 32]);
      v4786 = (unsigned int)v5022;
      ++v4783;
      v4788 = v5026;
LABEL_6308:
      v4781 = 0;
      goto LABEL_6309;
    }
LABEL_6311:
    _InterlockedOr(v5016, 0);
    *(_QWORD *)&MaxDataSize = v4501;
    v4797 = (unsigned __int64)v4783 << 6;
    *(_QWORD *)&v4772[v4797 + 8] = &MaxDataSize;
    *(_QWORD *)&v4772[v4797 + 16] = 8LL;
    *(_WORD *)&v4772[v4797 + 24] = 4097;
    sub_1404D2D9C(v4501, &MaxDataSize, 8LL, &v4772[v4797 + 32]);
    v4798 = v4783 + 1;
    v4799 = (unsigned __int64)v4798 << 6;
    *(_QWORD *)&v4772[v4799 + 8] = *(_QWORD *)&MaxDataSize;
    v4800 = *(_QWORD *)&MaxDataSize;
    *(_QWORD *)&v4772[v4799 + 16] = *(_DWORD *)(v4501 + 2052) & 0xFFFFF000;
    *(_WORD *)&v4772[v4799 + 24] = 4097;
    sub_1404D2D9C(v4501, v4800, *(unsigned int *)&v4772[v4799 + 16], &v4772[v4799 + 32]);
    v4801 = (unsigned __int64)(v4798 + 1) << 6;
    *(_QWORD *)&v4772[v4801 + 8] = &qword_140FC4A50;
    *(_QWORD *)&v4772[v4801 + 16] = 8LL;
    *(_WORD *)&v4772[v4801 + 24] = 4097;
    sub_1404D2D9C(v4501, &qword_140FC4A50, 8LL, &v4772[v4801 + 32]);
    if ( v4744 )
    {
      v4802 = v4772 + 8;
      v4803 = v4744;
      do
      {
        v4804 = *(const char **)v4802;
        v4805 = *((unsigned int *)v4802 + 2);
        v4806 = *(const char **)v4802;
        v4807 = *(_QWORD *)v4802 + v4805;
        if ( *(_QWORD *)v4802 < v4807 )
        {
          do
          {
            _mm_prefetch(v4806, 0);
            v4806 += 64;
          }
          while ( (unsigned __int64)v4806 < v4807 );
        }
        v4808 = v5422[0];
        do
        {
          v4809 = ((unsigned int)v4804 & 0xFFFFF000) + 4096 - (_DWORD)v4804;
          if ( (unsigned int)v4805 < v4809 )
            v4809 = v4805;
          LODWORD(v4805) = v4805 - v4809;
          if ( v4809 >= 8 )
          {
            v4810 = (unsigned __int64)v4809 >> 3;
            do
            {
              v4809 -= 8;
              v4808 = __ROR8__(*(_QWORD *)v4804 ^ v4808, v5175);
              v4804 += 8;
              --v4810;
            }
            while ( v4810 );
          }
          for ( ; v4809; --v4809 )
          {
            v4811 = *(unsigned __int8 *)v4804++;
            v4808 = __ROR8__(v4811 ^ v4808, v5175);
          }
        }
        while ( (_DWORD)v4805 );
        *((_QWORD *)v4802 - 1) = v4808;
        v4802 += 64;
        --v4803;
      }
      while ( v4803 );
      v4501 = v5039;
    }
    if ( (v5105 & 8) != 0 )
    {
      ExFreePool(v4772);
      goto LABEL_6328;
    }
    v4905 = KiConnectSwInterrupt(v4772, v4744);
    memset(v4772, 0, (unsigned __int64)v4744 << 6);
    memset(v5422, 0, 8uLL);
    memset(&v5175, 0, sizeof(v5175));
    ExFreePool(v4772);
    if ( v4905 < 0 )
    {
LABEL_6631:
      v5179 = -402653175;
      KeBugCheckEx(__ROL4__(-402653175, 101), 0x15uLL, v4501, (unsigned int)v5105, v5038);
    }
  }
LABEL_6328:
  if ( v5038 )
    v5628(v5038);
  v4812 = __rdtsc();
  v4813 = v5659;
  v4814 = (__ROR8__(v4812, 3) ^ v4812) * (unsigned __int128)0x7010008004002001uLL;
  v5105 = *((_QWORD *)&v4814 + 1);
  v4815 = *((_QWORD *)&v4814 + 1) ^ v4814;
  if ( (v5671 & 0x8000000) != 0 )
  {
    v4816 = __rdtsc();
    v4817 = (__ROR8__(v4816, 3) ^ v4816) * (unsigned __int128)0x7010008004002001uLL;
    v5424 = *((_QWORD *)&v4817 + 1);
    v4813 = (_DWORD *)(v5640 + 16 * ((v4817 ^ *((_QWORD *)&v4817 + 1)) & 0xF));
  }
  v4818 = 40;
  v4819 = &v5663;
  v4820 = &v5523;
  v4821 = 5LL;
  do
  {
    v4818 -= 8;
    *(_QWORD *)v4820 = *(_QWORD *)v4819;
    v4819 += 2;
    v4820 += 2;
    --v4821;
  }
  while ( v4821 );
  for ( ; v4818; --v4818 )
  {
    v4822 = *(_BYTE *)v4819;
    v4819 = (int *)((char *)v4819 + 1);
    *(_BYTE *)v4820 = v4822;
    v4820 = (int *)((char *)v4820 + 1);
  }
  if ( (v5671 & 0x4000) == 0 && v5663 )
  {
LABEL_6488:
    if ( !v5523 || (v5671 & 0x4000) != 0 )
      goto LABEL_6556;
    v4955 = v5526;
    v4956 = (int)v5527;
    v4957 = v5525;
    v4958 = v5524;
    v5696 = v5526;
    v5029 = v5527;
    v5039 = v5525;
    v5038 = v5524;
    if ( KeGetCurrentIrql() < 2u )
    {
      KeGetCurrentIrql();
      __writecr8(2uLL);
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v4960 = *(char **)((char *)&CurrentPrcb->MxCsr + v5645);
    v5054 = v4960;
    v4961 = *(_QWORD *)((char *)&CurrentPrcb->MxCsr + v5646) + v5655;
    v4962 = *(char **)((char *)&CurrentPrcb->MxCsr + v5648);
    HalExtensionList = v4962;
    if ( &v5433 > v4960 || &v5433 < &v4960[-v5643] )
    {
      if ( *((_BYTE *)&CurrentPrcb->MxCsr + v5647)
        && (unsigned __int64)&v5433 <= v4961
        && (unsigned __int64)&v5433 >= v4961 - v5642 )
      {
        v4960 = (char *)v4961;
        v5054 = (_BYTE *)v4961;
      }
      else
      {
        v4960 = *(char **)&v4962[v5649];
        v5054 = v4960;
      }
    }
    if ( (v5671 & 0x4000000) == 0 )
    {
      v5026 = 0LL;
      if ( (v5672 & 0x400000) == 0 )
      {
        v4963 = __readcr0();
        v5026 = (PVOID)v4963;
        __writecr0(v4963 & 0xFFFFFFFFFFFEFFFFuLL);
      }
      v4964 = v5683;
      v4965 = &v5683[v5681];
      v5027 = (size_t)v5683;
      v4966 = v4965;
      i21 = (ULONG_PTR)v4965;
      v4961 = 0LL;
      v5028 = (__int64)v4965;
      if ( v5682 )
      {
        do
        {
          *(_QWORD *)*v4966 = v4966[1];
          v4967 = __readcr4();
          if ( (v4967 & 0x20080) != 0 )
          {
            __writecr4(v4967 ^ 0x80);
            __writecr4(v4967);
          }
          else
          {
            v4968 = __readcr3();
            __writecr3(v4968);
          }
          v4966 += 2;
          v4961 = (unsigned int)(v4961 + 1);
        }
        while ( (unsigned int)v4961 < v5682 );
        v5028 = (__int64)v4966;
      }
      if ( v5683 < v4965 )
      {
        do
        {
          v4969 = *((unsigned int *)v4964 + 2);
          v4970 = *(_QWORD *)v4964;
          v5688 = *((_DWORD *)v4964 + 2);
          if ( (v5672 & 0x400000) != 0 )
          {
            v4974 = *((_DWORD *)v4964 + 2);
            v4961 = ((*(_QWORD *)v4964 & 0xFFFuLL) + v4969 + 4095) >> 12;
            if ( (_DWORD)v4961 )
            {
              v4975 = (unsigned __int64)v4966;
              v5035 = (unsigned int)v4961;
              do
              {
                v4976 = v5521;
                v4977 = 4LL;
                v4978 = v5641 + ((v4970 >> 9) & 0x7FFFFFFFF8LL);
                LODWORD(v4979) = 4;
                do
                {
                  *v4976++ = v4978;
                  v4978 = v5641 + ((v4978 >> 9) & 0x7FFFFFFFF8LL);
                  --v4977;
                }
                while ( v4977 );
                do
                  v4979 = (unsigned int)(v4979 - 1);
                while ( (_DWORD)v4979 && (*(_DWORD *)v5521[v4979] & 0x80) == 0 );
                v4980 = (_QWORD *)v5521[v4979];
                v5031 = (ULONG_PTR)v4980;
                v4981 = *v4980 | 0x62LL;
                *v4980 = v4981;
                v4982 = __readcr4();
                if ( (v4982 & 0x20080) != 0 )
                {
                  __writecr4(v4982 ^ 0x80);
                  __writecr4(v4982);
                }
                else
                {
                  v4983 = __readcr3();
                  __writecr3(v4983);
                }
                v4984 = v4974;
                v4985 = (_QWORD *)v4970;
                if ( 4096 - (v4970 & 0xFFF) < v4974 )
                  v4984 = 4096 - (v4970 & 0xFFF);
                v4961 = v4975;
                v4986 = v4984;
                if ( v4984 >= 8 )
                {
                  v4987 = (unsigned __int64)v4984 >> 3;
                  do
                  {
                    v4986 -= 8;
                    *v4985 = *(_QWORD *)v4961;
                    v4961 += 8LL;
                    ++v4985;
                    --v4987;
                  }
                  while ( v4987 );
                  v4980 = (_QWORD *)v5031;
                }
                if ( v4986 )
                {
                  v4988 = (char *)v4985 - v4961;
                  do
                  {
                    v4988[v4961] = *(_BYTE *)v4961;
                    ++v4961;
                    --v4986;
                  }
                  while ( v4986 );
                  v4980 = (_QWORD *)v5031;
                }
                v4970 += v4984;
                *v4980 = v4981;
                v4975 += v4984;
                v4974 -= v4984;
                v4989 = __readcr4();
                if ( (v4989 & 0x20080) != 0 )
                {
                  __writecr4(v4989 ^ 0x80);
                  __writecr4(v4989);
                }
                else
                {
                  v4990 = __readcr3();
                  __writecr3(v4990);
                }
                --v5035;
              }
              while ( v5035 );
              v4966 = (_QWORD *)v5028;
              v4964 = (_OWORD *)v5027;
              v4965 = (_OWORD *)i21;
              LODWORD(v4969) = v5688;
            }
          }
          else
          {
            v4961 = (unsigned int)v4969;
            v4971 = v4966;
            if ( (unsigned int)v4969 >= 8 )
            {
              v4972 = (unsigned __int64)(unsigned int)v4969 >> 3;
              do
              {
                v4961 = (unsigned int)(v4961 - 8);
                *(_QWORD *)v4970 = *v4971++;
                v4970 += 8LL;
                --v4972;
              }
              while ( v4972 );
            }
            if ( (_DWORD)v4961 )
            {
              v4973 = v4970 - (_QWORD)v4971;
              do
              {
                *((_BYTE *)v4971 + v4973) = *(_BYTE *)v4971;
                v4971 = (_QWORD *)((char *)v4971 + 1);
                v4393 = (_DWORD)v4961 == 1;
                v4961 = (unsigned int)(v4961 - 1);
              }
              while ( !v4393 );
            }
          }
          ++v4964;
          v4966 = (_QWORD *)((char *)v4966 + (unsigned int)v4969);
          v5027 = (size_t)v4964;
          v5028 = (__int64)v4966;
        }
        while ( v4964 < v4965 );
        v4960 = v5054;
        v4955 = v5696;
        v4956 = (int)v5029;
        v4957 = v5039;
        v4958 = v5038;
      }
      if ( (v5672 & 0x400000) != 0 )
      {
        v4991 = v5631;
        v4992 = &v5055;
        v5055 = -61;
        v4993 = v5522;
        v4994 = 4LL;
        LODWORD(v4995) = 4;
        v4996 = v5641 + ((v5631 >> 9) & 0x7FFFFFFFF8LL);
        do
        {
          *v4993++ = v4996;
          v4996 = v5641 + ((v4996 >> 9) & 0x7FFFFFFFF8LL);
          --v4994;
        }
        while ( v4994 );
        do
        {
          v4393 = (_DWORD)v4995 == 1;
          v4995 = (unsigned int)(v4995 - 1);
        }
        while ( !v4393 && (*(_DWORD *)v5522[v4995] & 0x80) == 0 );
        v4997 = (__int64 *)v5522[v4995];
        v4998 = *v4997 | 0x62;
        *v4997 = v4998;
        v4999 = __readcr4();
        if ( (v4999 & 0x20080) != 0 )
        {
          __writecr4(v4999 ^ 0x80);
          __writecr4(v4999);
        }
        else
        {
          v5000 = __readcr3();
          __writecr3(v5000);
        }
        v4961 = (v4991 & 0xFFF) != 4096;
        if ( (v4991 & 0xFFF) != 0x1000 )
        {
          v5001 = v4991 - (_QWORD)&v5055;
          do
          {
            v4992[v5001] = *v4992;
            ++v4992;
            v4393 = (_DWORD)v4961 == 1;
            v4961 = (unsigned int)(v4961 - 1);
          }
          while ( !v4393 );
        }
        *v4997 = v4998;
        v5008 = __readcr4();
        if ( (v5008 & 0x20080) != 0 )
        {
          __writecr4(v5008 ^ 0x80);
          __writecr4(v5008);
        }
        else
        {
          v5009 = __readcr3();
          __writecr3(v5009);
        }
      }
      else
      {
        *(_BYTE *)v5631 = -61;
        __writecr0((unsigned __int64)v5026);
      }
      v4962 = (char *)HalExtensionList;
    }
    v5010 = v5670;
    if ( v5670 )
    {
      if ( KeGetCurrentIrql() < 2u )
      {
        KeGetCurrentIrql();
        __writecr8(2uLL);
        v5010 = v5670;
      }
      if ( v5010 )
      {
        v5011 = v5010 - 1;
        if ( v5011 )
        {
          v5012 = v5011 - 1;
          if ( v5012 )
          {
            v5013 = v5012 - 1;
            if ( v5013 )
            {
              v5014 = v5013 - 1;
              if ( v5014 )
              {
                if ( v5014 == 1 )
                {
                  v4961 = (v5671 >> 9) & 0x1F;
                  _interlockedbittestandset(
                    *(volatile signed __int32 **)((char *)&KeGetCurrentPrcb()->MxCsr + v5648),
                    v4961);
                }
                else
                {
                  _InterlockedOr64((volatile signed __int64 *)(v5639 + 832), 1uLL);
                }
              }
              else
              {
                v4961 = *(_QWORD *)(v5650 + *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + v5648) + v5654);
                _interlockedbittestandset((volatile signed __int32 *)v4961, (v5671 >> 9) & 0x1F);
              }
              goto LABEL_6652;
            }
            v5015 = v5637;
          }
          else
          {
            v5015 = v5636;
          }
        }
        else
        {
          v5015 = v5635;
        }
        _interlockedbittestandset64(v5015, 0LL);
      }
    }
LABEL_6652:
    *(_QWORD *)&v4962[v5651] = 0LL;
    *(_QWORD *)&v4962[v5653] = 0LL;
    KeGuardCheckICall(v5629, v4961);
    SdbpCheckDll(265, v4958, v4957, v4956, v4955, v5629, (__int64)(v4960 - 8));
    __debugbreak();
  }
  if ( (v5671 & 0x20000000) == 0 )
  {
    v4823 = v4501 ^ v4815;
    v4824 = (unsigned __int8)(v5668 - 1);
    v4825 = __rdtsc();
    v4826 = (__ROR8__(v4825, 3) ^ v4825) * (unsigned __int128)0x7010008004002001uLL;
    v5425 = *((_QWORD *)&v4826 + 1);
    v4827 = v4824 + (*((_QWORD *)&v4826 + 1) ^ (unsigned __int64)v4826) % (unsigned int)(63 - v4824);
    do
    {
      v4828 = __rdtsc();
      v4829 = __ROR8__(v4828, 3) ^ v4828;
      v5426 = (v4829 * (unsigned __int128)0x7010008004002001uLL) >> 64;
      v4830 = v4824 + (v5426 ^ (0x7010008004002001LL * v4829)) % (unsigned int)(63 - v4824);
    }
    while ( v4830 == v4827 );
    v4831 = v5656;
    v4832 = v4827;
    i122 = v5657;
    v4834 = (v4823 | (1LL << v4832)) & ~(1LL << v4830);
    v5695 = v5657;
    if ( v5669 == 3 && (v4835 = (unsigned __int64)v5054) != 0 )
    {
      v4836 = v5634;
      *v5657 = 19;
      i122[1] = 1;
      *((_WORD *)i122 + 1) = 0;
      *((_QWORD *)i122 + 3) = v4836;
      *((_QWORD *)i122 + 4) = v4835;
      *((_QWORD *)i122 + 7) = 0LL;
      *((_QWORD *)i122 + 2) = 0LL;
      *((_QWORD *)i122 + 5) = v4834;
      v5633(*(_QWORD *)(v4835 + 8), *(unsigned int *)(v4835 + 16), *(_QWORD *)v4835);
      v4837 = *(_QWORD *)v4835;
      v4838 = (v4835 ^ __ROL8__(v4835, 17)) * (unsigned __int128)0x7010008004002001uLL;
      v4839 = 4;
      v5427 = *((_QWORD *)&v4838 + 1);
      v4840 = v4838 ^ *((_QWORD *)&v4838 + 1);
      v4841 = (_QWORD *)(v4835 + 24);
      v4842 = v4840;
      do
      {
        *v4841-- ^= v4842;
        v4842 = __ROL8__(v4842, v4839--);
      }
      while ( v4839 );
      if ( ((unsigned __int8)v4840 & 0xFu) < 7 )
      {
        v4843 = __ROL8__(v4837, 17);
        v4844 = 6;
        v5428 = ((v4837 ^ v4843) * (unsigned __int128)0x7010008004002001uLL) >> 64;
        v4845 = ((0x7010008004002001LL * (v4837 ^ v4843)) ^ v5428) + v4842;
        v4846 = (_QWORD *)(v4837 + 40);
        v4847 = (unsigned int)*(__int16 *)(v4837 + 8);
        do
        {
          *v4846 ^= v4845;
          v4845 = __ROL8__(v4845, v4844);
          --v4846;
          --v4844;
        }
        while ( v4844 );
        v4848 = (unsigned __int64)(v4847 - 48) >> 3;
        if ( (_DWORD)v4848 )
        {
          v4849 = (_QWORD *)(v4837 + 8 * ((int)v4848 + 5LL));
          do
          {
            *v4849 ^= v4845;
            v4845 = __ROL8__(v4845, v4848);
            --v4849;
            LODWORD(v4848) = v4848 - 1;
          }
          while ( (_DWORD)v4848 );
        }
      }
    }
    else
    {
      *v5657 = 19;
      i122[1] = 1;
      *((_WORD *)i122 + 1) = 0;
      *((_QWORD *)i122 + 3) = v4813;
      *((_QWORD *)i122 + 4) = v4834;
      *((_QWORD *)i122 + 7) = 0LL;
      *((_QWORD *)i122 + 2) = 0LL;
    }
    *((_QWORD *)i122 + 8) = v4815;
    if ( (v5671 & 0x80u) == 0 )
    {
      v4906 = (unsigned __int64)i122;
    }
    else
    {
      v4906 = (unsigned __int64)(v4813 - 18);
      *((_QWORD *)v4813 - 1) = i122;
      v4907 = __rdtsc();
      v4908 = 25LL;
      v4909 = (__ROR8__(v4907, 3) ^ v4907) * (unsigned __int128)0x7010008004002001uLL;
      v5429 = *((_QWORD *)&v4909 + 1);
      v4910 = v4909 ^ *((_QWORD *)&v4909 + 1);
      v4911 = v4813;
      do
      {
        *v4911++ ^= v4910;
        --v4908;
      }
      while ( v4908 );
      *v4813 = 1213280584;
      *(_QWORD *)(v4906 + 32) = v4910;
    }
    if ( v5680 )
    {
      v4912 = *(_QWORD *)(v5680 + 32);
      v4913 = v5638 ^ ((v4912 ^ ((v4912 ^ 0xE04C2400uLL) >> 4)) >> 4);
      v4914 = v4913;
      v4915 = (v5638 ^ ((v4912 ^ ((v4912 ^ 0xE04C2400uLL) >> 4)) >> 4)) & 0xF;
      if ( !v4915 )
        v4915 = 1;
      do
      {
        v4916 = (unsigned __int64 *)(v4912 + (v4913 & 0xF));
        v4912 = *v4916;
        v4913 ^= (*v4916 ^ ((*v4916 ^ 0x1DF400) >> 4)) >> 4;
        --v4915;
      }
      while ( v4915 );
      if ( (v4914 & 0x1000) != 0 )
        v4906 ^= v4914;
      *v4916 = v4906;
      v4906 = v5680;
    }
    _InterlockedOr(v5016, 0);
    if ( v5662 )
    {
      switch ( v5662 )
      {
        case 1:
          *(_QWORD *)(v5644 + v5658) = v4906;
          break;
        case 2:
          *(_QWORD *)(v5658 + 128) = v4906;
          break;
        case 3:
          v4936 = v5673;
          if ( *(_QWORD *)(v5652 + v5673) )
          {
            v4937 = *(_QWORD *)(v5652 + v5673);
            if ( !v5663 )
            {
              v5665 = 0LL;
              v5666 = 260LL;
              v5667 = v4937;
              v5664 = &v5016[0xE8E80FD6247233CAuLL];
              v5663 = 1;
              if ( (v5671 & 0x20000000) == 0 )
              {
                v4938 = v5672;
                if ( (v5672 & 0x200000) != 0 && (v5671 & 1) != 0 )
                {
                  v4939 = v5660;
                  v4940 = (__int64 *)&v5627[v5677];
                  v4941 = v5661;
                  v4942 = v5678;
                  v4943 = &v4940[(unsigned __int64)(unsigned int)(v5660 - v5677) >> 3];
                  if ( v4940 != v4943 )
                  {
                    do
                    {
                      *v4940 ^= v4942;
                      v4944 = *v4940++;
                      v4942 = ((v4941 ^ v4944) + __ROR8__(v4942, v4942 & 0x3F)) ^ 0xEFA;
                    }
                    while ( v4940 != v4943 );
                    v4938 = v5672;
                    v4939 = v5660;
                  }
                  v5672 = v4938 & 0xFFDFFFFF;
                  if ( v4942 != v5679 )
                  {
                    v4945 = v5638;
                    *(_QWORD *)v5638 = v5627;
                    *(_DWORD *)(v4945 + 16) = v4939;
                    if ( !v5663 )
                      *(_QWORD *)(v5638 + 24) = v4942 ^ v5679;
                    sub_140B9E384(v5627, 0LL, v4942, 256LL);
                  }
                }
              }
            }
            v4946 = 40;
            v4947 = &v5663;
            v4948 = &v5523;
            v4949 = 5LL;
            do
            {
              v4946 -= 8;
              *(_QWORD *)v4948 = *(_QWORD *)v4947;
              v4947 += 2;
              v4948 += 2;
              --v4949;
            }
            while ( v4949 );
            for ( i122 = v5695; v4946; --v4946 )
            {
              v4950 = *(_BYTE *)v4947;
              v4947 = (int *)((char *)v4947 + 1);
              *(_BYTE *)v4948 = v4950;
              v4948 = (int *)((char *)v4948 + 1);
            }
          }
          _InterlockedOr(v5016, 0);
          *(_QWORD *)(v5652 + v4936) = i122;
          break;
        case 4:
          v4920 = v5676;
          v4921 = v5675;
          v4922 = v5674;
          v4923 = v5673;
          *v5674 = 18;
          v4922[2] = 88;
          v4922[80] = 0;
          *((_QWORD *)v4922 + 1) = v4923;
          *((_QWORD *)v4922 + 4) = v4921;
          *((_QWORD *)v4922 + 5) = 0LL;
          *((_QWORD *)v4922 + 6) = v4920;
          v4922[81] = 0;
          *((_QWORD *)v4922 + 7) = 0LL;
          v4922[82] = 0;
          if ( !v5632(v5674, i122, 0LL, 0LL) )
          {
            if ( !v5663 )
            {
              v5665 = 0LL;
              v5666 = 260LL;
              v5667 = v4923;
              v5664 = &v5016[0xE8E80FD6247233CAuLL];
              v5663 = 1;
              if ( (v5671 & 0x20000000) == 0 )
              {
                v4924 = v5672;
                if ( (v5672 & 0x200000) != 0 && (v5671 & 1) != 0 )
                {
                  v4925 = v5660;
                  v4926 = (__int64 *)&v5627[v5677];
                  v4927 = v5661;
                  v4928 = v5678;
                  v4929 = &v4926[(unsigned __int64)(unsigned int)(v5660 - v5677) >> 3];
                  if ( v4926 != v4929 )
                  {
                    do
                    {
                      *v4926 ^= v4928;
                      v4930 = *v4926++;
                      v4928 = ((v4927 ^ v4930) + __ROR8__(v4928, v4928 & 0x3F)) ^ 0xEFA;
                    }
                    while ( v4926 != v4929 );
                    v4924 = v5672;
                    v4925 = v5660;
                  }
                  v5672 = v4924 & 0xFFDFFFFF;
                  if ( v4928 != v5679 )
                  {
                    v4931 = v5638;
                    *(_QWORD *)v5638 = v5627;
                    *(_DWORD *)(v4931 + 16) = v4925;
                    if ( !v5663 )
                      *(_QWORD *)(v5638 + 24) = v5679 ^ v4928;
                    sub_140B9E384(v5627, 0LL, v4928, 256LL);
                  }
                }
              }
            }
            v4932 = &v5663;
            v4933 = 40;
            v4934 = &v5523;
            do
            {
              v4933 -= 8;
              *(_QWORD *)v4934 = *(_QWORD *)v4932;
              v4932 += 2;
              v4934 += 2;
              --v5289;
            }
            while ( v5289 );
            for ( ; v4933; --v4933 )
            {
              v4935 = *(_BYTE *)v4932;
              v4932 = (int *)((char *)v4932 + 1);
              *(_BYTE *)v4934 = v4935;
              v4934 = (int *)((char *)v4934 + 1);
            }
          }
          break;
        default:
          v4917 = (_DWORD *)v5673;
          *(_QWORD *)(v5673 + 72) = v4906;
          _InterlockedOr(v5016, 0);
          v4918 = __rdtsc();
          v4919 = (__ROR8__(v4918, 3) ^ v4918) * (unsigned __int128)0x7010008004002001uLL;
          v5430 = *((_QWORD *)&v4919 + 1);
          *v4917 = (__int64)(((unsigned __int64)v4919 ^ *((_QWORD *)&v4919 + 1)) % 0x5F5E100 + 1200000000) / 10000000;
          break;
      }
    }
    else
    {
      v4951 = __rdtsc();
      v4952 = (__ROR8__(v4951, 3) ^ v4951) * (unsigned __int128)0x7010008004002001uLL;
      v5431 = *((_QWORD *)&v4952 + 1);
      v4953 = -1200000000LL - ((unsigned __int64)v4952 ^ *((_QWORD *)&v4952 + 1)) % 0x5F5E100;
      *(_QWORD *)&v4952 = __rdtsc();
      v4954 = (__ROR8__(v4952, 3) ^ (unsigned __int64)v4952) * (unsigned __int128)0x7010008004002001uLL;
      v5432 = *((_QWORD *)&v4954 + 1);
      v5630(v4831, v4953, 0LL, ((unsigned __int64)v4954 ^ *((_QWORD *)&v4954 + 1)) % 0x2710, v4906);
    }
    goto LABEL_6488;
  }
LABEL_6556:
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  v5002 = v5029;
  if ( v5029 )
  {
    v5029->Header.WaitListHead.Blink = (struct _LIST_ENTRY *)v5060;
    _InterlockedOr(v5016, 0);
    KeSetEvent(v5002 + 1, 1, 0);
  }
  v5003 = v5627;
  v5004 = 349LL;
  v5005 = 2792;
  do
  {
    *(_QWORD *)v5003 = 0LL;
    v5005 -= 8;
    v5003 += 8;
    --v5004;
  }
  while ( v5004 );
  for ( ; v5005; --v5005 )
    *v5003++ = 0;
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  return 1;
}