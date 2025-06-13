char __fastcall sub_140B19730(unsigned int a1, unsigned int a2, unsigned int a3, __int64 a4, int a5)
{
  int v6; // edx
  int v7; // eax
  const char *LoadOptions; // rbx
  int v10; // eax
  int v11; // eax
  int *v12; // rcx
  int *v13; // rdx
  int v14; // ebx
  unsigned int *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // r12
  void *Pool2; // rsi
  int v19; // r14d
  unsigned __int64 *v20; // rdx
  int v21; // ebx
  __int64 *v22; // rcx
  __int64 v23; // rdi
  char v24; // al
  __int64 v25; // r15
  unsigned __int64 v26; // rax
  unsigned __int128 v27; // rax
  unsigned __int64 v28; // rcx
  int v29; // ecx
  int v30; // ecx
  unsigned int v31; // edi
  int v32; // ecx
  int v33; // ecx
  int v34; // ecx
  unsigned __int64 v35; // rdx
  __int64 v36; // rcx
  unsigned __int64 v37; // rax
  unsigned __int128 v38; // rax
  unsigned __int64 v39; // rcx
  int v40; // ecx
  int v41; // ecx
  unsigned int v42; // edi
  int v43; // ecx
  int v44; // ecx
  int v45; // ecx
  unsigned __int64 v46; // rax
  __int64 v47; // rcx
  int v48; // eax
  unsigned __int64 v49; // rax
  unsigned __int128 v50; // rax
  unsigned __int64 v51; // rcx
  int v52; // ecx
  int v53; // ecx
  unsigned int v54; // edi
  int v55; // ecx
  int v56; // ecx
  int v57; // ecx
  unsigned __int64 v58; // rax
  __int64 v59; // rcx
  unsigned int *v60; // rax
  unsigned int v61; // edx
  unsigned int i; // ecx
  unsigned __int64 v63; // rax
  __int64 v64; // rdx
  int v65; // ebx
  __int64 *v66; // rcx
  unsigned __int64 *v67; // rdx
  __int64 v68; // rdi
  char v69; // al
  __int64 v70; // rax
  __int64 v71; // rax
  void *v72; // rcx
  ULONG_PTR v73; // rdi
  __int64 v74; // rdx
  BOOL v75; // ebx
  int v76; // edi
  unsigned __int64 v77; // rax
  unsigned __int128 v78; // rax
  unsigned __int64 v79; // rax
  unsigned __int128 v80; // rax
  unsigned __int64 v81; // rax
  unsigned __int128 v82; // rax
  unsigned int v83; // esi
  unsigned int v84; // r15d
  __int64 v85; // r14
  __int64 v86; // rbx
  _DWORD *v87; // rsi
  __int64 v88; // rdi
  signed int v89; // ebx
  int v90; // ecx
  unsigned int v91; // edx
  int v92; // eax
  _DWORD *v93; // rax
  __int64 *v94; // r8
  ULONG_PTR v95; // rsi
  int v96; // ecx
  __int64 v97; // rcx
  ULONG_PTR v98; // rdx
  unsigned __int64 v99; // rcx
  unsigned int v100; // ebx
  __int64 v101; // rdi
  __int64 v102; // rax
  __int64 v103; // rax
  unsigned __int64 v104; // rsi
  PVOID *v105; // rdx
  unsigned __int64 v106; // rcx
  __int64 v107; // rbx
  BOOL v108; // ebx
  int v109; // edx
  int v110; // edi
  __int64 v111; // rcx
  unsigned int v112; // edx
  unsigned __int64 v113; // r14
  unsigned __int64 *v114; // rdx
  __int64 v115; // rbx
  unsigned __int64 v116; // rcx
  BOOL v117; // ebx
  int v118; // edx
  int v119; // edi
  unsigned int v120; // r13d
  __int64 v121; // r15
  __int64 v122; // r12
  unsigned int v123; // edx
  unsigned __int64 v124; // rax
  unsigned __int128 v125; // rax
  unsigned __int64 v126; // rcx
  int v127; // ecx
  int v128; // ecx
  unsigned int v129; // edi
  int v130; // ecx
  int v131; // ecx
  int v132; // ecx
  unsigned __int64 v133; // rax
  __int64 v134; // rcx
  char *v135; // rsi
  _QWORD *v136; // rdx
  char *v137; // rbx
  unsigned int v138; // ecx
  unsigned __int64 v139; // rdi
  signed __int64 v140; // rbx
  __int64 v141; // rcx
  unsigned int v142; // r13d
  __int64 v143; // r15
  PVOID v144; // r12
  unsigned int v145; // edx
  unsigned int v146; // r8d
  unsigned __int64 v147; // rax
  unsigned __int128 v148; // rax
  unsigned __int64 v149; // rcx
  int v150; // ecx
  int v151; // ecx
  unsigned int v152; // edi
  int v153; // ecx
  int v154; // ecx
  int v155; // ecx
  unsigned __int64 v156; // rax
  __int64 v157; // rcx
  char *v158; // r14
  _QWORD *v159; // rdx
  char *v160; // rbx
  unsigned int v161; // ecx
  unsigned __int64 v162; // rdi
  signed __int64 v163; // rbx
  __int64 v164; // rcx
  int v165; // ecx
  int v166; // r12d
  unsigned int v167; // edx
  unsigned __int64 v168; // rax
  __int64 v169; // rcx
  unsigned int v170; // r15d
  unsigned __int64 v171; // rax
  unsigned __int128 v172; // rax
  unsigned __int64 v173; // rcx
  int v174; // ecx
  int v175; // ecx
  unsigned int v176; // edi
  int v177; // ecx
  int v178; // ecx
  int v179; // ecx
  unsigned __int64 v180; // rax
  __int64 v181; // rcx
  unsigned __int64 v182; // rax
  __int64 v183; // rcx
  int v184; // esi
  unsigned __int64 v185; // rax
  unsigned __int128 v186; // rax
  unsigned __int64 v187; // r14
  __int64 v188; // rax
  __int64 v189; // r10
  int v190; // edi
  _QWORD *v191; // rbx
  unsigned __int64 v192; // r8
  unsigned __int64 v193; // rax
  unsigned __int128 v194; // rax
  unsigned __int64 v195; // rax
  unsigned __int128 v196; // rax
  unsigned __int64 v197; // rdx
  unsigned int v198; // esi
  __int64 v199; // r8
  _QWORD *v200; // rbx
  unsigned __int64 v201; // rdi
  unsigned __int64 v202; // rax
  unsigned __int128 v203; // rax
  unsigned __int64 v204; // rax
  unsigned __int128 v205; // rax
  unsigned __int64 v206; // rdx
  _BYTE *v207; // r14
  int v208; // esi
  int v209; // edi
  __int64 v210; // rdx
  unsigned int v211; // eax
  int v212; // ecx
  _DWORD *v213; // r13
  unsigned int v214; // r12d
  unsigned int v215; // esi
  __int64 v216; // r15
  __int64 v217; // rbx
  _DWORD *v218; // rsi
  __int64 v219; // rdi
  signed int v220; // ebx
  int v221; // ecx
  unsigned int v222; // edx
  int v223; // eax
  _DWORD *v224; // rax
  __int64 *v225; // r8
  ULONG_PTR v226; // r15
  int v227; // ecx
  __int64 v228; // rcx
  ULONG_PTR v229; // rdx
  unsigned __int64 v230; // rcx
  unsigned int v231; // ebx
  __int64 v232; // rdi
  __int64 v233; // rax
  __int64 v234; // rax
  __int64 v235; // rax
  unsigned __int64 v236; // rcx
  unsigned __int64 *v237; // rdx
  __int64 v238; // rbx
  unsigned __int64 v239; // rcx
  BOOL v240; // ebx
  int v241; // edx
  int v242; // edi
  __int64 v243; // rcx
  unsigned int v244; // edx
  ULONG_PTR v245; // rcx
  __int64 v246; // rax
  unsigned __int64 v247; // r15
  unsigned __int64 *v248; // rdx
  __int64 v249; // rbx
  unsigned __int64 v250; // rcx
  BOOL v251; // ebx
  int v252; // edx
  int v253; // edi
  __int64 v254; // r12
  __int64 v255; // r13
  unsigned int j; // edx
  unsigned int v257; // r8d
  unsigned __int64 v258; // rax
  unsigned __int128 v259; // rax
  unsigned __int64 v260; // rcx
  int v261; // ecx
  int v262; // ecx
  unsigned int v263; // edi
  int v264; // ecx
  int v265; // ecx
  int v266; // ecx
  unsigned __int64 v267; // rax
  __int64 v268; // rcx
  __int64 v269; // rax
  void *v270; // rsi
  _QWORD *v271; // rdx
  char *v272; // rbx
  unsigned int v273; // ecx
  unsigned __int64 v274; // rdi
  signed __int64 v275; // rbx
  __int64 v276; // rcx
  __int64 v277; // r15
  __int64 v278; // r12
  unsigned int k; // edx
  unsigned int v280; // r8d
  unsigned __int64 v281; // rax
  unsigned __int128 v282; // rax
  unsigned __int64 v283; // rcx
  int v284; // ecx
  int v285; // ecx
  unsigned int v286; // edi
  int v287; // ecx
  int v288; // ecx
  int v289; // ecx
  unsigned __int64 v290; // rax
  __int64 v291; // rcx
  __int64 v292; // rax
  void *v293; // rsi
  _QWORD *v294; // rdx
  char *v295; // rbx
  unsigned int v296; // ecx
  unsigned __int64 v297; // rdi
  signed __int64 v298; // rbx
  __int64 v299; // rcx
  int v300; // r11d
  unsigned int v301; // ecx
  char *v302; // rbx
  char *v303; // r10
  char *v304; // rdi
  __int64 v305; // r8
  _QWORD *v306; // rax
  char *v307; // r8
  _QWORD *v308; // rcx
  unsigned __int64 v309; // r9
  signed __int64 v310; // r8
  __int64 v311; // rax
  _DWORD *v312; // rbx
  __int64 v313; // r8
  _DWORD *v314; // rdx
  int v315; // eax
  _DWORD *v316; // rcx
  _DWORD *v317; // rax
  _DWORD *v318; // rcx
  _QWORD *v319; // rax
  unsigned int v320; // ecx
  unsigned __int64 v321; // rax
  unsigned __int128 v322; // rax
  unsigned __int64 v323; // rax
  unsigned __int128 v324; // rax
  __int64 v325; // rcx
  int v326; // ecx
  unsigned __int64 v327; // rax
  unsigned __int128 v328; // rax
  __int64 v329; // rcx
  __int64 v330; // rdx
  _OWORD *v331; // rcx
  __int64 v332; // rdx
  __int64 *v333; // rax
  __int128 v334; // xmm1
  __int64 (__fastcall *v335)(); // rax
  unsigned __int64 v336; // rax
  unsigned __int128 v337; // rax
  unsigned __int64 v338; // rcx
  int v339; // ecx
  int v340; // ecx
  unsigned int v341; // edi
  int v342; // ecx
  int v343; // ecx
  int v344; // ecx
  unsigned __int64 v345; // rax
  __int64 v346; // rcx
  unsigned __int64 v347; // rax
  unsigned __int128 v348; // rax
  __int64 v349; // rcx
  unsigned __int128 v350; // rax
  int v351; // ecx
  unsigned __int64 v352; // rax
  unsigned __int128 v353; // rax
  unsigned __int64 v354; // rax
  unsigned __int128 v355; // rax
  unsigned int v356; // esi
  unsigned __int64 v357; // rax
  unsigned __int128 v358; // rax
  unsigned __int64 v359; // rax
  unsigned __int128 v360; // rax
  unsigned __int64 v361; // rax
  unsigned __int128 v362; // rax
  unsigned __int64 v363; // rax
  unsigned __int128 v364; // rax
  unsigned __int64 v365; // rax
  unsigned __int128 v366; // rax
  unsigned __int64 v367; // rax
  unsigned __int128 v368; // rax
  unsigned __int64 v369; // rax
  unsigned __int128 v370; // rax
  __int64 v371; // rbx
  unsigned __int64 v372; // rax
  unsigned __int128 v373; // rax
  unsigned __int64 v374; // rax
  unsigned __int128 v375; // rax
  unsigned __int64 v376; // rcx
  int v377; // ecx
  int v378; // ecx
  unsigned int v379; // edi
  int v380; // ecx
  int v381; // ecx
  int v382; // ecx
  unsigned __int64 v383; // rax
  __int64 v384; // rcx
  __int64 v385; // rax
  unsigned __int64 v386; // rax
  unsigned __int128 v387; // rax
  unsigned __int64 v388; // rcx
  int v389; // ecx
  int v390; // ecx
  unsigned int v391; // edi
  int v392; // ecx
  int v393; // ecx
  int v394; // ecx
  unsigned __int64 v395; // rax
  __int64 v396; // rcx
  _QWORD *v397; // rax
  __int64 v398; // rdx
  __int64 v399; // rcx
  unsigned int v405; // edi
  unsigned __int64 v406; // rax
  unsigned __int128 v407; // rax
  unsigned __int64 v408; // rsi
  unsigned __int64 v409; // r12
  _QWORD *v410; // r8
  __int64 v411; // r15
  unsigned __int64 v412; // rdx
  __int64 v413; // rcx
  __int64 v414; // rax
  int v415; // r9d
  __int64 v416; // rcx
  unsigned int v417; // edi
  _QWORD *v418; // r10
  unsigned __int64 v419; // rcx
  const char *v420; // rax
  unsigned __int64 v421; // rbx
  unsigned int v422; // r11d
  __int64 v423; // rax
  __int64 v424; // rbx
  unsigned __int128 v425; // rax
  unsigned int v426; // edi
  unsigned __int64 v427; // rax
  __int64 v428; // rax
  unsigned int v429; // ecx
  unsigned __int64 v430; // rax
  unsigned __int128 v431; // rax
  __int64 v432; // r8
  unsigned __int64 v433; // rax
  __int64 v434; // rcx
  int v435; // ebx
  unsigned __int64 v436; // rax
  unsigned __int128 v437; // rax
  unsigned __int64 v438; // rsi
  __int64 v439; // r10
  __int64 v440; // r9
  int v441; // r8d
  _QWORD *v442; // rdi
  unsigned __int64 v443; // r9
  unsigned __int64 v444; // rax
  unsigned __int128 v445; // rax
  unsigned __int64 v446; // rax
  unsigned __int128 v447; // rax
  unsigned __int64 v448; // rdx
  unsigned int v449; // ebx
  _QWORD *v450; // rdi
  unsigned __int64 v451; // r8
  unsigned __int64 v452; // rax
  unsigned __int128 v453; // rax
  unsigned __int64 v454; // rax
  unsigned __int128 v455; // rax
  unsigned __int64 v456; // rdx
  unsigned __int64 v457; // rax
  unsigned __int128 v458; // rax
  __int64 v459; // r8
  unsigned __int64 v460; // rax
  __int64 v461; // rcx
  int v462; // edi
  unsigned __int64 v463; // rax
  unsigned __int128 v464; // rax
  unsigned __int64 v465; // rsi
  __int64 v466; // r10
  int v467; // r8d
  _QWORD *v468; // rbx
  unsigned __int64 v469; // r9
  unsigned __int64 v470; // rax
  unsigned __int128 v471; // rax
  unsigned __int64 v472; // rax
  unsigned __int128 v473; // rax
  unsigned __int64 v474; // rdx
  unsigned int v475; // edi
  __int64 v476; // r8
  _QWORD *v477; // rbx
  unsigned __int64 v478; // r9
  unsigned __int64 v479; // rax
  unsigned __int128 v480; // rax
  unsigned __int64 v481; // rax
  unsigned __int128 v482; // rax
  unsigned __int64 v483; // rdx
  unsigned __int64 v484; // rax
  _BYTE *v485; // rbx
  _BYTE *v486; // rcx
  unsigned __int128 v487; // rax
  unsigned int m; // eax
  __int64 v489; // r10
  unsigned __int8 v490; // r9
  char v491; // al
  int v492; // edi
  _QWORD *v493; // rbx
  __int64 v494; // r9
  unsigned __int64 v495; // rax
  unsigned __int128 v496; // rax
  unsigned __int64 v497; // rax
  unsigned __int128 v498; // rax
  unsigned __int64 v499; // rdx
  unsigned __int64 v500; // rax
  unsigned __int128 v501; // rax
  unsigned int n; // esi
  unsigned __int64 v503; // rax
  unsigned __int128 v504; // rax
  unsigned __int64 v505; // rcx
  int v506; // ecx
  int v507; // ecx
  unsigned int v508; // edi
  int v509; // ecx
  int v510; // ecx
  int v511; // ecx
  unsigned __int64 v512; // rax
  __int64 v513; // rcx
  unsigned int v514; // edi
  __int64 v515; // rax
  unsigned __int64 v516; // rdx
  __int64 v517; // rcx
  unsigned int v518; // r15d
  __int64 v519; // rax
  __int64 *v520; // rcx
  __int64 v521; // r13
  unsigned __int64 v522; // rsi
  char v523; // r12
  __int64 v524; // rbx
  _QWORD *v525; // rdi
  unsigned __int64 v526; // rax
  unsigned __int64 v527; // rcx
  unsigned __int128 v528; // rax
  __int64 *v529; // rcx
  unsigned __int64 v530; // rax
  unsigned __int128 v531; // rax
  unsigned __int64 v532; // rcx
  int v533; // ecx
  int v534; // ecx
  unsigned int v535; // edi
  int v536; // ecx
  int v537; // ecx
  int v538; // ecx
  unsigned __int64 v539; // rax
  __int64 v540; // rcx
  unsigned int v541; // edi
  __int64 v542; // rax
  unsigned __int64 v543; // rax
  unsigned __int128 v544; // rax
  __int64 v545; // r8
  unsigned __int64 v546; // rax
  __int64 v547; // rcx
  int v548; // edi
  unsigned __int64 v549; // rax
  unsigned __int128 v550; // rax
  unsigned __int64 v551; // rsi
  __int64 v552; // rax
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
  struct _KTIMER *v563; // r8
  LIST_ENTRY *p_WaitListHead; // rbx
  unsigned __int64 v565; // r8
  unsigned __int64 v566; // rax
  unsigned __int128 v567; // rax
  unsigned __int64 v568; // rax
  unsigned __int128 v569; // rax
  unsigned __int64 v570; // rdx
  unsigned __int64 v571; // rax
  unsigned __int128 v572; // rax
  __int64 v573; // r8
  unsigned __int64 v574; // rax
  __int64 v575; // rcx
  int v576; // edi
  unsigned __int64 v577; // rax
  unsigned __int128 v578; // rax
  unsigned __int64 v579; // rsi
  __int64 v580; // rax
  __int64 v581; // r10
  int v582; // r8d
  _QWORD *v583; // rbx
  unsigned __int64 v584; // r9
  unsigned __int64 v585; // rax
  unsigned __int128 v586; // rax
  unsigned __int64 v587; // rax
  unsigned __int128 v588; // rax
  unsigned __int64 v589; // rdx
  unsigned int v590; // edi
  struct _KTIMER *v591; // r8
  LIST_ENTRY *v592; // rbx
  unsigned __int64 v593; // r8
  unsigned __int64 v594; // rax
  unsigned __int128 v595; // rax
  unsigned __int64 v596; // rax
  unsigned __int128 v597; // rax
  unsigned __int64 v598; // rdx
  __int64 v599; // r8
  unsigned __int64 v600; // rax
  __int64 v601; // rcx
  int v602; // edi
  unsigned __int64 v603; // rax
  unsigned __int128 v604; // rax
  unsigned __int64 v605; // rsi
  __int64 v606; // r10
  int v607; // r8d
  _QWORD *v608; // rbx
  unsigned __int64 v609; // r9
  unsigned __int64 v610; // rax
  unsigned __int128 v611; // rax
  unsigned __int64 v612; // rax
  unsigned __int128 v613; // rax
  unsigned __int64 v614; // rdx
  unsigned int v615; // edi
  __int64 v616; // r9
  _QWORD *v617; // rbx
  unsigned __int64 v618; // r8
  unsigned __int64 v619; // rax
  unsigned __int128 v620; // rax
  unsigned __int64 v621; // rax
  unsigned __int128 v622; // rax
  unsigned __int64 v623; // rdx
  unsigned __int64 v624; // rax
  __int64 v625; // rdx
  __int64 v626; // rax
  __int64 v627; // r8
  unsigned __int64 v628; // rax
  __int64 v629; // rcx
  int v630; // edi
  unsigned __int64 v631; // rax
  unsigned __int128 v632; // rax
  unsigned __int64 v633; // rsi
  __int64 v634; // r10
  _DWORD *v635; // r9
  int v636; // r8d
  _QWORD *v637; // rbx
  unsigned __int64 v638; // r9
  unsigned __int64 v639; // rax
  unsigned __int128 v640; // rax
  unsigned __int64 v641; // rax
  unsigned __int128 v642; // rax
  unsigned __int64 v643; // rdx
  unsigned int v644; // edi
  _QWORD *v645; // rbx
  unsigned __int64 v646; // r8
  unsigned __int64 v647; // rax
  unsigned __int128 v648; // rax
  unsigned __int64 v649; // rax
  unsigned __int128 v650; // rax
  unsigned __int64 v651; // rdx
  __int64 v652; // rdi
  __int64 v653; // rbx
  KIRQL v654; // al
  __int64 v655; // rax
  unsigned __int64 v656; // rax
  unsigned __int128 v657; // rax
  unsigned __int64 v658; // rax
  unsigned __int128 v659; // rax
  int v660; // eax
  unsigned __int64 v661; // rax
  unsigned __int128 v662; // rax
  unsigned __int64 v663; // rax
  unsigned __int128 v664; // rax
  __int64 v665; // r8
  unsigned __int64 v666; // rax
  __int64 v667; // rcx
  int v668; // r15d
  unsigned __int64 v669; // rax
  unsigned __int128 v670; // rax
  unsigned __int64 v671; // r12
  __int64 v672; // r9
  int v673; // edi
  _QWORD *v674; // rbx
  unsigned __int64 v675; // r8
  unsigned __int64 v676; // rax
  unsigned __int128 v677; // rax
  unsigned __int64 v678; // rax
  unsigned __int128 v679; // rax
  unsigned __int64 v680; // rdx
  unsigned int v681; // r15d
  struct _KEVENT *v682; // r13
  struct _KEVENT *v683; // rbx
  unsigned __int64 v684; // rdi
  unsigned __int64 v685; // rax
  unsigned __int128 v686; // rax
  unsigned __int64 v687; // rax
  unsigned __int128 v688; // rax
  unsigned __int64 v689; // rdx
  ULONG_PTR v690; // rbx
  unsigned __int64 v691; // rax
  unsigned __int64 v692; // rax
  unsigned __int128 v693; // rax
  unsigned int v694; // edi
  char *v695; // r12
  int v696; // ebx
  __int64 v697; // rax
  unsigned __int8 CurrentIrql; // bl
  _KIDTENTRY64 *IdtBase; // r15
  unsigned __int64 v700; // rax
  unsigned __int128 v701; // rax
  unsigned __int64 v702; // rcx
  int v703; // ecx
  int v704; // ecx
  unsigned int v705; // edi
  int v706; // ecx
  int v707; // ecx
  int v708; // ecx
  unsigned __int64 v709; // rax
  __int64 v710; // rcx
  unsigned int v711; // edi
  __int64 v712; // rax
  BOOL v713; // r10d
  __int64 v714; // rdi
  __int64 v720; // rcx
  char v721; // r8
  char v722; // r9
  BOOL v728; // ebx
  unsigned __int64 v729; // rax
  unsigned __int128 v730; // rax
  int v731; // eax
  unsigned __int64 v732; // rax
  unsigned __int128 v733; // rax
  int v734; // eax
  unsigned __int64 v735; // rax
  unsigned __int128 v736; // rax
  int v737; // eax
  unsigned __int64 v738; // rax
  unsigned __int128 v739; // rax
  int v740; // eax
  int v741; // edi
  unsigned __int64 v742; // rax
  unsigned __int128 v743; // rax
  unsigned __int64 v744; // rax
  unsigned __int128 v745; // rax
  BOOL v746; // ecx
  int v747; // eax
  int v748; // ebx
  unsigned __int64 v749; // rax
  unsigned __int128 v750; // rax
  _WORD *v751; // rcx
  unsigned __int64 v752; // rax
  unsigned __int128 v753; // rax
  unsigned __int64 v754; // rcx
  int v755; // ecx
  int v756; // ecx
  unsigned int v757; // edi
  int v758; // ecx
  int v759; // ecx
  int v760; // ecx
  unsigned __int64 v761; // rax
  __int64 v762; // rcx
  unsigned int v763; // edi
  __int64 v764; // r8
  __int64 v765; // rdi
  int v766; // ebx
  _QWORD *v767; // rax
  __int64 v768; // rcx
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  unsigned __int64 *v770; // rcx
  int v771; // ebx
  _KIDTENTRY64 *v772; // rdx
  char OffsetLow; // al
  int v774; // edx
  char *v775; // rcx
  __int64 v776; // rbx
  char v777; // al
  unsigned int v778; // eax
  int v779; // eax
  ULONG_PTR v780; // rbx
  int v781; // r15d
  ULONG_PTR v782; // r12
  __int64 v783; // rax
  _DWORD *v784; // rcx
  __int64 v785; // rbx
  __int64 v786; // rax
  _DWORD *v787; // r15
  __int64 v788; // r8
  signed int v789; // ebx
  int v790; // edx
  unsigned int v791; // ecx
  int v792; // eax
  _DWORD *v793; // rax
  __int64 *v794; // rdi
  int v795; // ecx
  __int64 v796; // rcx
  ULONG_PTR v797; // rdx
  unsigned __int64 v798; // rcx
  unsigned int v799; // ebx
  __int64 v800; // rdi
  __int64 v801; // rax
  __int64 v802; // r15
  unsigned int v803; // eax
  __int64 v804; // rbx
  int v805; // ecx
  unsigned int v806; // eax
  __int64 v807; // rdi
  int v808; // edx
  unsigned __int64 v809; // rcx
  int v810; // r14d
  __int64 v811; // r8
  __int64 v812; // r13
  ULONG_PTR v813; // r15
  unsigned int v814; // r12d
  unsigned int v815; // eax
  __int64 v816; // rdi
  int v817; // ecx
  unsigned int v818; // eax
  __int64 v819; // rbx
  int v820; // edx
  unsigned __int64 v821; // rcx
  int v822; // r14d
  _QWORD *v823; // r11
  int v824; // ecx
  _QWORD *v825; // rax
  __int64 v826; // rdx
  ULONG_PTR v827; // rcx
  _QWORD *v828; // r8
  const char *v829; // rax
  int v830; // r9d
  __int64 v831; // r14
  unsigned __int64 v832; // rbx
  unsigned int v833; // r10d
  __int64 v834; // rax
  __int64 v835; // rbx
  unsigned __int128 v836; // rax
  unsigned int v837; // edx
  unsigned __int64 v838; // rax
  __int64 v839; // rax
  unsigned __int64 ii; // rax
  int v841; // r15d
  __int64 v842; // rdi
  int v843; // ecx
  _QWORD *v844; // rax
  __int64 v845; // rdx
  const char *v846; // r12
  const char *v847; // rax
  unsigned __int64 v848; // rdx
  int v849; // r8d
  __int64 v850; // rax
  unsigned __int64 jj; // rax
  int v852; // r15d
  __int64 v853; // r15
  unsigned int v854; // eax
  __int64 v855; // rbx
  int v856; // ecx
  unsigned int v857; // eax
  __int64 v858; // rdi
  int v859; // edx
  unsigned __int64 v860; // rcx
  int v861; // r14d
  __int64 v862; // rax
  int v863; // edx
  _QWORD *v864; // rcx
  __int64 v865; // rdi
  unsigned __int64 v866; // rdx
  unsigned __int64 kk; // rcx
  int v868; // ebx
  unsigned int v869; // eax
  int v870; // edi
  unsigned __int64 v871; // rax
  unsigned __int128 v872; // rax
  unsigned __int64 v873; // rax
  unsigned __int128 v874; // rax
  int v875; // ebx
  unsigned __int64 v876; // rax
  unsigned __int128 v877; // rax
  __int64 *v878; // r15
  ULONG_PTR v879; // rax
  ULONG_PTR v880; // r12
  __int64 v881; // rax
  _QWORD *v882; // r8
  ULONG_PTR *v883; // rbx
  unsigned int v884; // edi
  bool v885; // zf
  __int64 v886; // rax
  _QWORD *v887; // r8
  ULONG_PTR *v888; // rbx
  unsigned int v889; // edi
  bool v890; // zf
  __int64 v891; // rcx
  __int64 v892; // rdx
  PVOID *mm; // rbx
  char *v894; // rdi
  int v895; // edx
  __int64 (__fastcall *v896)(ULONG_PTR, char *); // rax
  _BYTE *v897; // rbx
  int *v898; // rcx
  int v899; // edx
  unsigned int v900; // r15d
  unsigned int v901; // edx
  unsigned int v902; // r8d
  int v903; // r9d
  unsigned int *v904; // r10
  unsigned int v905; // r11d
  int *v906; // rdi
  __int64 v907; // r8
  int v908; // ecx
  int v909; // ecx
  int v910; // ecx
  int v911; // ecx
  int v912; // ecx
  bool v913; // zf
  __int64 v914; // rax
  int v915; // eax
  int v916; // ecx
  int v917; // ecx
  int v918; // ecx
  unsigned __int64 v919; // rcx
  __int64 v920; // r10
  unsigned int v921; // edi
  __int64 (__fastcall *v922)(ULONG_PTR, char *); // rax
  int v923; // ecx
  __int64 v924; // rdx
  int *v925; // rax
  unsigned int v926; // r15d
  unsigned int v927; // r8d
  int v928; // r9d
  unsigned int *v929; // r10
  unsigned int v930; // r11d
  int *v931; // rdi
  __int64 v932; // r8
  int v933; // ecx
  int v934; // ecx
  int v935; // ecx
  int v936; // ecx
  int v937; // ecx
  bool v938; // zf
  __int64 v939; // rax
  int v940; // eax
  int v941; // ecx
  int v942; // ecx
  int v943; // ecx
  unsigned __int64 v944; // rcx
  __int64 v945; // r10
  int v946; // r12d
  char **v947; // r14
  unsigned int v948; // r15d
  _BYTE *v949; // rdi
  __int64 v950; // rcx
  __int64 v951; // rdx
  char *v952; // rdx
  __int64 v953; // r8
  ULONG_PTR v954; // rax
  __int64 v955; // rdx
  int v956; // eax
  ULONG_PTR v957; // r14
  __int64 v958; // rdx
  __int64 (__fastcall *v959)(ULONG_PTR, __int64, __int64, _DWORD *); // rax
  __int64 v960; // rax
  __int64 v961; // rdx
  __int64 (__fastcall *v962)(ULONG_PTR, __int64, __int64, _DWORD *); // rax
  __int64 (__fastcall *v963)(ULONG_PTR); // rax
  __int64 v964; // rbx
  unsigned __int64 v965; // r14
  __int64 v966; // rax
  __int64 v967; // r8
  __int64 v968; // r14
  int v969; // r9d
  unsigned int v970; // eax
  int v971; // ecx
  unsigned int v972; // eax
  __int64 v973; // r8
  int v974; // edx
  unsigned __int64 v975; // rcx
  int v976; // edi
  _BYTE *v977; // r15
  _QWORD *v978; // rsi
  unsigned int *v979; // rax
  __int64 v980; // r12
  int v981; // ecx
  _QWORD *v982; // r14
  _QWORD *v983; // rax
  __int64 v984; // rdx
  _QWORD *v985; // r8
  const char *v986; // rax
  int v987; // r10d
  __int64 v988; // r11
  unsigned __int64 v989; // rdi
  unsigned int v990; // r9d
  __int64 v991; // rax
  __int64 v992; // rdi
  unsigned __int128 v993; // rax
  unsigned int v994; // edx
  unsigned __int64 v995; // rax
  __int64 v996; // rax
  unsigned __int64 i9; // rax
  ULONG_PTR v998; // rax
  unsigned __int64 v999; // r15
  ULONG_PTR v1000; // r12
  int v1001; // eax
  int v1002; // r14d
  int v1003; // ecx
  unsigned int v1004; // edi
  unsigned __int64 v1005; // r15
  _QWORD *v1006; // r11
  __int64 v1007; // rdx
  _DWORD *v1008; // r12
  _QWORD *v1009; // rax
  _QWORD *v1010; // r8
  const char *v1011; // rax
  __int64 v1012; // r9
  __int64 v1013; // r15
  unsigned __int64 v1014; // rcx
  unsigned __int64 v1015; // rbx
  unsigned int v1016; // r10d
  __int64 v1017; // rax
  __int64 v1018; // rbx
  unsigned __int128 v1019; // rax
  unsigned int v1020; // edi
  unsigned __int64 v1021; // rax
  __int64 v1022; // rax
  unsigned __int64 v1023; // rax
  int v1024; // ecx
  unsigned __int64 v1025; // rdx
  int v1026; // edi
  int *v1027; // r15
  int v1028; // r12d
  __int64 v1029; // r15
  unsigned int v1030; // eax
  int v1031; // ecx
  unsigned int v1032; // eax
  __int64 v1033; // r8
  int v1034; // edx
  unsigned __int64 v1035; // rcx
  int v1036; // edi
  int v1037; // ecx
  int *v1038; // rax
  __int64 v1039; // rdx
  unsigned __int64 v1040; // r12
  __int64 v1041; // r11
  const char *v1042; // rax
  unsigned __int64 v1043; // rdi
  unsigned int v1044; // r10d
  __int64 v1045; // rax
  __int64 v1046; // rdi
  unsigned __int128 v1047; // rax
  unsigned __int64 v1048; // rax
  __int64 v1049; // rax
  unsigned __int64 i10; // rax
  unsigned __int64 v1051; // r15
  ULONG_PTR v1052; // r12
  __int64 v1053; // r14
  __int64 v1054; // rax
  ULONG_PTR v1055; // rdi
  int v1056; // edx
  int v1057; // ecx
  _QWORD *v1058; // rax
  _QWORD *v1059; // rax
  ULONG_PTR v1060; // r14
  unsigned int v1061; // edx
  __int64 v1062; // r9
  unsigned int *v1063; // r12
  ULONG_PTR v1064; // r11
  unsigned int v1065; // ecx
  __int64 v1066; // r8
  ULONG_PTR v1067; // r8
  __int64 v1068; // rdx
  unsigned int v1069; // r13d
  unsigned int v1070; // edi
  unsigned int v1071; // r13d
  unsigned int v1072; // eax
  __int64 v1073; // rax
  unsigned int v1074; // edi
  unsigned int v1075; // r15d
  unsigned int v1076; // edi
  unsigned int *v1077; // rax
  unsigned int *v1078; // r14
  ULONG_PTR v1079; // r8
  unsigned int *v1080; // rax
  unsigned int v1081; // eax
  int v1082; // edi
  ULONG_PTR v1083; // r15
  int v1084; // ecx
  __int64 v1085; // r14
  unsigned int v1086; // eax
  __int64 v1087; // r10
  ULONG_PTR v1088; // r15
  __int64 (__fastcall *v1089)(ULONG_PTR, char *); // rax
  ULONG_PTR v1090; // rax
  ULONG_PTR v1091; // rbx
  int v1092; // r12d
  int *v1093; // rcx
  __int64 v1094; // rdx
  unsigned int v1095; // r11d
  unsigned int v1096; // edi
  int v1097; // r8d
  _BYTE *v1098; // r9
  unsigned int v1099; // r10d
  int *v1100; // rbx
  __int64 v1101; // rdi
  int v1102; // ecx
  int v1103; // ecx
  int v1104; // ecx
  int v1105; // ecx
  int v1106; // ecx
  bool v1107; // zf
  int v1108; // ecx
  unsigned int v1109; // eax
  __int64 v1110; // rdi
  int v1111; // edx
  unsigned __int64 v1112; // rcx
  int v1113; // ebx
  __int64 v1114; // rdx
  int v1115; // ecx
  _QWORD *v1116; // rax
  __int64 v1117; // rbx
  ULONG_PTR v1118; // r12
  unsigned __int64 v1119; // rcx
  unsigned __int64 i11; // rax
  ULONG_PTR v1121; // rax
  __int64 v1122; // r8
  unsigned __int64 v1123; // r15
  ULONG_PTR v1124; // r8
  __int64 v1125; // rdx
  _DWORD *v1126; // rax
  __int64 v1127; // rcx
  _DWORD *v1128; // r12
  int v1129; // eax
  int v1130; // edx
  __int16 v1131; // ax
  char *v1132; // rbx
  int v1133; // r9d
  __int64 *v1134; // r8
  signed __int64 v1135; // rdi
  char *v1136; // r10
  char *v1137; // r11
  __int64 v1138; // rdx
  __int64 v1139; // rax
  unsigned int v1140; // ebx
  __int64 *v1141; // rdi
  __int64 v1142; // rcx
  __int64 v1143; // rax
  __int64 v1144; // rdx
  __int64 v1145; // rax
  int v1146; // edi
  signed __int64 v1147; // rbx
  __int64 v1148; // rdx
  __int64 v1149; // rax
  int v1150; // edi
  signed __int64 v1151; // rbx
  __int64 v1152; // rdx
  __int64 v1153; // rax
  int v1154; // ecx
  unsigned int v1155; // r14d
  __int64 v1156; // rbx
  ULONG_PTR v1157; // r8
  ULONG_PTR v1158; // r9
  unsigned int v1159; // r14d
  int v1160; // r12d
  int v1161; // eax
  unsigned int v1162; // r15d
  bool v1163; // cf
  __int64 v1164; // rdx
  _QWORD *v1165; // r11
  unsigned int v1166; // edi
  unsigned __int64 v1167; // r9
  unsigned int i12; // edx
  unsigned __int64 v1169; // rbx
  _QWORD *v1170; // r8
  const char *v1171; // rax
  int v1172; // r10d
  __int64 v1173; // r14
  unsigned __int64 v1174; // rbx
  unsigned int v1175; // r9d
  __int64 v1176; // rax
  __int64 v1177; // rbx
  unsigned __int128 v1178; // rax
  unsigned int v1179; // edi
  unsigned __int64 v1180; // rax
  __int64 v1181; // rax
  unsigned __int64 i13; // rax
  int *v1183; // rax
  unsigned int v1184; // r15d
  char v1185; // bl
  __int64 v1186; // rbx
  ULONG_PTR v1187; // rax
  _QWORD *v1188; // r11
  unsigned int v1189; // edi
  ULONG_PTR v1190; // r9
  unsigned int i14; // edx
  ULONG_PTR v1192; // rbx
  ULONG_PTR v1193; // r14
  _QWORD *v1194; // r8
  const char *v1195; // rax
  int v1196; // r10d
  unsigned __int64 v1197; // r14
  unsigned __int64 v1198; // rbx
  unsigned int v1199; // r9d
  __int64 v1200; // rax
  __int64 v1201; // rbx
  unsigned __int128 v1202; // rax
  unsigned int v1203; // edi
  unsigned __int64 v1204; // rax
  __int64 v1205; // rax
  unsigned __int64 i15; // rax
  _BYTE *v1207; // rax
  unsigned int *v1208; // r15
  __int64 v1209; // r11
  unsigned int v1210; // edi
  _QWORD *v1211; // r11
  unsigned __int64 v1212; // r10
  unsigned int i16; // edx
  unsigned __int64 v1214; // rbx
  ULONG_PTR v1215; // rax
  _QWORD *v1216; // r8
  int v1217; // r9d
  unsigned __int64 v1218; // r14
  const char *v1219; // rax
  unsigned __int64 v1220; // rbx
  unsigned int i17; // r10d
  __int64 v1222; // rax
  __int64 v1223; // rbx
  unsigned __int128 v1224; // rax
  unsigned int v1225; // edi
  unsigned __int64 v1226; // rax
  __int64 v1227; // rax
  unsigned __int64 i18; // rax
  ULONG_PTR v1229; // rdx
  __int64 v1230; // rdi
  ULONG_PTR v1231; // rax
  _QWORD *v1232; // r12
  unsigned int v1233; // edi
  __int64 v1234; // rax
  __int64 v1235; // rcx
  __int64 v1236; // rax
  char *v1237; // r15
  char *nn; // rbx
  __int64 v1239; // rax
  ULONG_PTR v1240; // rdx
  int v1241; // eax
  __int64 v1242; // rax
  int v1243; // eax
  int v1244; // ecx
  int v1245; // ecx
  int v1246; // ecx
  unsigned __int64 v1247; // rcx
  __int64 v1248; // r9
  int v1249; // eax
  unsigned int v1250; // edi
  int v1251; // r12d
  char **v1252; // r14
  _BYTE *v1253; // rbx
  __int64 v1254; // rcx
  __int64 v1255; // rdx
  char *v1256; // rdx
  __int64 v1257; // r8
  ULONG_PTR v1258; // rax
  __int64 v1259; // rdx
  int v1260; // eax
  ULONG_PTR v1261; // r14
  __int64 v1262; // rdx
  __int64 (__fastcall *v1263)(ULONG_PTR, __int64, __int64, int *); // rax
  __int64 v1264; // rax
  __int64 v1265; // rdx
  __int64 (__fastcall *v1266)(ULONG_PTR, __int64, __int64, int *); // rax
  __int64 (__fastcall *v1267)(ULONG_PTR); // rax
  __int64 v1268; // rdi
  __int64 v1269; // rax
  __int64 v1270; // r15
  __int64 v1271; // r8
  unsigned int v1272; // eax
  int v1273; // edi
  int v1274; // ecx
  unsigned int v1275; // eax
  __int64 v1276; // rdi
  int v1277; // edx
  unsigned __int64 v1278; // rcx
  int v1279; // ebx
  _QWORD *v1280; // r13
  _DWORD *v1281; // rsi
  _BYTE *v1282; // r15
  __int64 v1283; // r12
  int v1284; // ecx
  _QWORD *v1285; // r11
  _QWORD *v1286; // rax
  __int64 v1287; // rdx
  _QWORD *v1288; // rdi
  const char *v1289; // rax
  int v1290; // r9d
  __int64 v1291; // r10
  unsigned __int64 v1292; // rbx
  unsigned int v1293; // r8d
  __int64 v1294; // rax
  __int64 v1295; // rbx
  unsigned __int128 v1296; // rax
  unsigned int v1297; // edx
  unsigned __int64 v1298; // rax
  __int64 v1299; // rax
  unsigned __int64 i1; // rax
  unsigned __int64 v1301; // rbx
  ULONG_PTR v1302; // r12
  int v1303; // eax
  int v1304; // r15d
  _BYTE *v1305; // rdi
  int v1306; // ecx
  __int64 v1307; // rdx
  unsigned int v1308; // r8d
  unsigned __int64 v1309; // rbx
  const char *v1310; // r14
  _DWORD *v1311; // r12
  _QWORD *v1312; // rax
  __int64 v1313; // r9
  const char *v1314; // rax
  int v1315; // r11d
  __int64 v1316; // r15
  unsigned __int64 v1317; // rcx
  unsigned __int64 v1318; // rbx
  unsigned int v1319; // r10d
  __int64 v1320; // rax
  __int64 v1321; // rbx
  unsigned __int128 v1322; // rax
  __int64 v1323; // r8
  unsigned __int64 v1324; // rax
  __int64 v1325; // rax
  unsigned __int64 v1326; // rax
  int v1327; // ecx
  unsigned __int64 v1328; // rdx
  int v1329; // ebx
  int *v1330; // r15
  int v1331; // r12d
  __int64 v1332; // r15
  unsigned int v1333; // eax
  int v1334; // ecx
  unsigned int v1335; // eax
  __int64 v1336; // r8
  int v1337; // edx
  unsigned __int64 v1338; // rcx
  int v1339; // ebx
  int v1340; // ecx
  int *v1341; // rax
  __int64 v1342; // rdx
  __int64 v1343; // r11
  _QWORD *v1344; // r12
  _QWORD *v1345; // rdi
  __int64 v1346; // r10
  const char *v1347; // rax
  unsigned __int64 v1348; // rbx
  __int64 v1349; // rax
  __int64 v1350; // rbx
  unsigned __int128 v1351; // rax
  unsigned __int64 v1352; // rax
  __int64 v1353; // rax
  unsigned __int64 i2; // rax
  unsigned __int64 v1355; // r15
  ULONG_PTR v1356; // r12
  __int64 v1357; // rdi
  __int64 v1358; // rax
  ULONG_PTR v1359; // rbx
  unsigned int v1360; // ecx
  _QWORD *v1361; // rax
  _QWORD *v1362; // rax
  ULONG_PTR v1363; // rbx
  unsigned int v1364; // edx
  __int64 v1365; // r9
  unsigned int *v1366; // r15
  ULONG_PTR v1367; // r10
  unsigned int v1368; // ecx
  __int64 v1369; // r8
  ULONG_PTR v1370; // r8
  ULONG_PTR v1371; // rdi
  ULONG_PTR v1372; // rdx
  unsigned int v1373; // r13d
  unsigned int v1374; // ebx
  unsigned int v1375; // r13d
  unsigned int v1376; // eax
  __int64 v1377; // rax
  unsigned int v1378; // ebx
  unsigned int v1379; // r12d
  unsigned int v1380; // ebx
  unsigned int *v1381; // rax
  unsigned int *v1382; // rdi
  ULONG_PTR v1383; // r8
  unsigned int *v1384; // rax
  ULONG_PTR v1385; // rdx
  unsigned int v1386; // eax
  int v1387; // edi
  ULONG_PTR v1388; // r12
  ULONG_PTR v1389; // rax
  int v1390; // ecx
  __int64 v1391; // r15
  unsigned int v1392; // eax
  __int64 v1393; // r8
  int v1394; // ecx
  unsigned int v1395; // eax
  __int64 v1396; // rdi
  int v1397; // edx
  unsigned __int64 v1398; // rcx
  int v1399; // ebx
  __int64 v1400; // rdx
  int v1401; // ecx
  _QWORD *v1402; // rax
  __int64 v1403; // rbx
  ULONG_PTR v1404; // rax
  unsigned __int64 v1405; // rcx
  unsigned __int64 i3; // rax
  ULONG_PTR v1407; // rax
  __int64 v1408; // rbx
  _DWORD *v1409; // r11
  unsigned int *v1410; // r12
  _QWORD *v1411; // rbx
  __int64 v1412; // rdx
  _DWORD *v1413; // rax
  __int64 v1414; // rcx
  _DWORD *v1415; // r15
  int v1416; // r14d
  int v1417; // eax
  __int16 v1418; // ax
  char *v1419; // rbx
  int v1420; // r9d
  __int64 *v1421; // r8
  signed __int64 v1422; // rdi
  char *v1423; // r10
  char *v1424; // r11
  __int64 v1425; // rdx
  __int64 v1426; // rax
  unsigned int v1427; // ebx
  __int64 *v1428; // rdi
  __int64 v1429; // rcx
  __int64 v1430; // rax
  __int64 v1431; // rdx
  __int64 v1432; // rax
  int v1433; // edi
  signed __int64 v1434; // rbx
  __int64 v1435; // rdx
  __int64 v1436; // rax
  int v1437; // edi
  signed __int64 v1438; // rbx
  __int64 v1439; // rdx
  __int64 v1440; // rax
  int v1441; // ecx
  ULONG_PTR v1442; // rdi
  unsigned int v1443; // r9d
  __int64 v1444; // rdx
  __int64 v1445; // rbx
  unsigned int v1446; // r9d
  unsigned int v1447; // eax
  unsigned int v1448; // ecx
  unsigned int v1449; // r15d
  unsigned int v1450; // r12d
  bool v1451; // cf
  const char *v1452; // r11
  unsigned int v1453; // edi
  unsigned __int64 v1454; // r10
  unsigned int v1455; // edx
  unsigned __int64 v1456; // rbx
  const char *v1457; // rax
  int v1458; // r9d
  unsigned __int64 v1459; // r14
  const char *i4; // r8
  unsigned __int64 v1461; // rbx
  unsigned int v1462; // r10d
  __int64 v1463; // rax
  __int64 v1464; // rbx
  unsigned __int64 v1465; // rcx
  unsigned int v1466; // edi
  unsigned __int64 v1467; // rax
  __int64 v1468; // rax
  unsigned __int64 i5; // rax
  ULONG_PTR v1470; // rcx
  unsigned int *v1471; // rax
  unsigned int v1472; // r15d
  char v1473; // bl
  __int64 v1474; // rbx
  ULONG_PTR v1475; // rax
  _QWORD *v1476; // r10
  unsigned int v1477; // edi
  ULONG_PTR v1478; // r9
  unsigned int i6; // edx
  ULONG_PTR v1480; // rbx
  ULONG_PTR v1481; // rax
  _QWORD *v1482; // r8
  int v1483; // r11d
  unsigned __int64 v1484; // r14
  const char *v1485; // rax
  unsigned __int64 v1486; // rbx
  unsigned int v1487; // r9d
  __int64 v1488; // rax
  __int64 v1489; // rbx
  unsigned __int128 v1490; // rax
  unsigned int v1491; // edi
  unsigned __int64 v1492; // rax
  __int64 v1493; // rax
  unsigned __int64 i7; // rax
  _BYTE *v1495; // rax
  ULONG_PTR v1496; // r11
  ULONG_PTR v1497; // r10
  __int64 v1498; // rax
  unsigned int v1499; // edi
  _QWORD *v1500; // r10
  unsigned __int64 v1501; // r9
  unsigned int v1502; // edx
  unsigned __int64 v1503; // rbx
  ULONG_PTR v1504; // rax
  _QWORD *v1505; // r8
  int v1506; // r11d
  unsigned __int64 v1507; // r14
  const char *v1508; // rax
  unsigned __int64 v1509; // rbx
  unsigned int v1510; // r9d
  __int64 v1511; // rax
  __int64 v1512; // rbx
  unsigned __int64 v1513; // rcx
  unsigned int v1514; // edi
  unsigned __int64 v1515; // rax
  __int64 v1516; // rax
  unsigned __int64 i8; // rax
  ULONG_PTR v1518; // rbx
  unsigned __int64 v1519; // rax
  ULONG_PTR v1520; // rax
  __int64 HalExtensionModuleFromLinks; // rax
  _QWORD *v1522; // rbx
  __int64 v1523; // rcx
  ULONG_PTR v1524; // r15
  __int64 (__fastcall *v1525)(ULONG_PTR, char *); // rax
  __int64 v1526; // rax
  int v1527; // r12d
  int *v1528; // rcx
  __int64 v1529; // rdx
  unsigned int v1530; // r11d
  unsigned int v1531; // edi
  int v1532; // r8d
  _BYTE *v1533; // r9
  unsigned int v1534; // r10d
  int *v1535; // rbx
  __int64 v1536; // rdi
  int v1537; // ecx
  int v1538; // ecx
  int v1539; // ecx
  int v1540; // ecx
  int v1541; // ecx
  bool v1542; // zf
  __int64 v1543; // rax
  int v1544; // eax
  int v1545; // ecx
  int v1546; // ecx
  int v1547; // ecx
  unsigned __int64 v1548; // rcx
  __int64 v1549; // r9
  int v1550; // eax
  char **v1551; // rdi
  int v1552; // r15d
  _BYTE *v1553; // r14
  __int64 v1554; // rcx
  __int64 v1555; // rdx
  char *v1556; // rdx
  ULONG_PTR v1557; // r12
  __int64 v1558; // r8
  ULONG_PTR v1559; // rax
  __int64 v1560; // rdx
  int v1561; // eax
  __int64 v1562; // rdx
  __int64 (__fastcall *v1563)(ULONG_PTR, __int64, __int64, int *); // rax
  ULONG_PTR v1564; // rax
  ULONG_PTR v1565; // rdx
  __int64 (__fastcall *v1566)(ULONG_PTR, ULONG_PTR, __int64, int *); // rax
  __int64 (__fastcall *v1567)(ULONG_PTR); // rax
  __int64 v1568; // rbx
  __int64 v1569; // rax
  __int64 v1570; // r8
  __int64 v1571; // r15
  int v1572; // r9d
  unsigned int v1573; // eax
  __int64 v1574; // rdi
  __int64 v1575; // rax
  int v1576; // ecx
  unsigned int v1577; // eax
  __int64 v1578; // r8
  int v1579; // edx
  unsigned __int64 v1580; // rcx
  int v1581; // ebx
  __int64 v1582; // rdx
  ULONG_PTR *v1583; // r13
  unsigned int *v1584; // rsi
  ULONG_PTR v1585; // r15
  __int64 v1586; // r12
  int v1587; // ecx
  _QWORD *v1588; // r11
  _QWORD *v1589; // rax
  _QWORD *v1590; // r8
  const char *v1591; // rax
  int v1592; // r10d
  __int64 v1593; // r14
  unsigned __int64 v1594; // rbx
  unsigned int v1595; // r9d
  __int64 v1596; // rax
  __int64 v1597; // rbx
  unsigned __int128 v1598; // rax
  unsigned int v1599; // edx
  unsigned __int64 v1600; // rax
  __int64 v1601; // rax
  unsigned __int64 i19; // rax
  ULONG_PTR v1603; // r15
  ULONG_PTR v1604; // r12
  int v1605; // eax
  int v1606; // r13d
  int v1607; // ecx
  _BYTE *v1608; // rax
  unsigned int v1609; // edi
  const char *v1610; // r11
  __int64 v1611; // r12
  unsigned __int128 v1612; // rax
  __int64 v1613; // r8
  const char *v1614; // rax
  int v1615; // r9d
  __int64 v1616; // r15
  unsigned __int64 v1617; // rcx
  unsigned __int64 v1618; // rbx
  unsigned int v1619; // r10d
  __int64 v1620; // rax
  __int64 v1621; // rbx
  unsigned int v1622; // edi
  unsigned __int64 v1623; // rax
  __int64 v1624; // rax
  unsigned __int64 v1625; // rax
  int v1626; // ecx
  ULONG_PTR v1627; // r15
  ULONG_PTR v1628; // r12
  int v1629; // r13d
  __int64 v1630; // r12
  unsigned int v1631; // eax
  __int64 v1632; // r15
  int v1633; // eax
  unsigned int v1634; // ecx
  __int64 v1635; // rdi
  int v1636; // edx
  unsigned __int64 v1637; // rax
  int v1638; // ebx
  int v1639; // ecx
  _QWORD *v1640; // rax
  __int64 v1641; // rdx
  const char *v1642; // rax
  const char *v1643; // rdi
  __int64 v1644; // r13
  const char *v1645; // rcx
  __int64 v1646; // r10
  unsigned __int64 v1647; // rbx
  unsigned int v1648; // r9d
  __int64 v1649; // rax
  __int64 v1650; // rbx
  _QWORD *v1651; // rdi
  __int64 v1652; // rbx
  unsigned __int128 v1653; // rax
  unsigned __int64 i20; // rax
  unsigned __int64 v1655; // r12
  unsigned int v1656; // eax
  __int64 v1657; // rdi
  unsigned __int64 v1658; // rbx
  int v1659; // ecx
  _QWORD *v1660; // rax
  unsigned int v1661; // edx
  __int64 v1662; // r9
  unsigned int *v1663; // r15
  ULONG_PTR v1664; // r8
  ULONG_PTR v1665; // r11
  unsigned int v1666; // ecx
  ULONG_PTR v1667; // rdi
  __int64 v1668; // rdx
  unsigned int v1669; // r13d
  unsigned int v1670; // ebx
  unsigned int v1671; // r13d
  unsigned int v1672; // eax
  __int64 v1673; // rax
  unsigned int v1674; // ebx
  unsigned int v1675; // r12d
  unsigned int v1676; // ebx
  unsigned int *v1677; // rax
  unsigned int *v1678; // rdi
  ULONG_PTR v1679; // r8
  unsigned int *v1680; // rax
  ULONG_PTR v1681; // rdx
  unsigned int v1682; // eax
  int v1683; // edi
  ULONG_PTR v1684; // r13
  ULONG_PTR v1685; // rax
  ULONG_PTR v1686; // rax
  int v1687; // ecx
  __int64 v1688; // r15
  unsigned int v1689; // eax
  ULONG_PTR v1690; // r8
  int v1691; // ecx
  unsigned int v1692; // eax
  __int64 v1693; // rdi
  int v1694; // edx
  unsigned __int64 v1695; // rcx
  int v1696; // ebx
  ULONG_PTR v1697; // rdx
  int v1698; // ecx
  _QWORD *v1699; // rax
  __int64 v1700; // rbx
  __int64 v1701; // rax
  unsigned __int64 v1702; // rcx
  unsigned __int64 i21; // rax
  ULONG_PTR v1704; // rax
  __int64 v1705; // rbx
  _DWORD *v1706; // r10
  unsigned int *v1707; // r13
  _DWORD *v1708; // rbx
  __int64 v1709; // rdx
  _DWORD *v1710; // rax
  __int64 v1711; // rcx
  _DWORD *v1712; // r15
  int v1713; // r14d
  int v1714; // eax
  __int16 v1715; // ax
  char *v1716; // rbx
  int v1717; // r9d
  __int64 *v1718; // r8
  signed __int64 v1719; // rdi
  char *v1720; // r10
  char *v1721; // r11
  __int64 v1722; // rdx
  __int64 v1723; // rax
  unsigned int v1724; // ebx
  __int64 *v1725; // rdi
  __int64 v1726; // rcx
  __int64 v1727; // rax
  __int64 v1728; // rdx
  __int64 v1729; // rax
  int v1730; // edi
  signed __int64 v1731; // rbx
  __int64 v1732; // rdx
  __int64 v1733; // rax
  int v1734; // edi
  signed __int64 v1735; // rbx
  __int64 v1736; // rdx
  __int64 v1737; // rax
  int v1738; // ecx
  ULONG_PTR v1739; // rdi
  unsigned int v1740; // r11d
  __int64 v1741; // rdx
  ULONG_PTR v1742; // rbx
  unsigned int v1743; // r11d
  unsigned int v1744; // eax
  unsigned int v1745; // ecx
  unsigned int v1746; // r15d
  unsigned int v1747; // r13d
  bool v1748; // cf
  const char *v1749; // r10
  unsigned int v1750; // edi
  unsigned __int64 v1751; // r9
  unsigned int v1752; // edx
  unsigned __int64 v1753; // rbx
  const char *v1754; // rax
  int v1755; // r11d
  unsigned __int64 v1756; // r14
  const char *i22; // r8
  unsigned __int64 v1758; // rbx
  unsigned int v1759; // r9d
  __int64 v1760; // rax
  __int64 v1761; // rbx
  unsigned __int128 v1762; // rax
  unsigned int v1763; // edi
  unsigned __int64 v1764; // rax
  __int64 v1765; // rax
  unsigned __int64 i23; // rax
  __int64 v1767; // rcx
  unsigned int *v1768; // rax
  unsigned int v1769; // r15d
  char v1770; // bl
  __int64 v1771; // rbx
  ULONG_PTR v1772; // rax
  _QWORD *v1773; // r11
  unsigned int v1774; // edi
  ULONG_PTR v1775; // r9
  unsigned int i24; // edx
  ULONG_PTR v1777; // rbx
  ULONG_PTR v1778; // rax
  _QWORD *v1779; // r8
  int v1780; // r10d
  unsigned __int64 v1781; // r14
  const char *v1782; // rax
  unsigned __int64 v1783; // rbx
  unsigned int v1784; // r9d
  __int64 v1785; // rax
  __int64 v1786; // rbx
  unsigned __int128 v1787; // rax
  unsigned int v1788; // edi
  unsigned __int64 v1789; // rax
  __int64 v1790; // rax
  unsigned __int64 i25; // rax
  _BYTE *v1792; // rax
  unsigned int *v1793; // r10
  ULONG_PTR v1794; // r9
  __int64 v1795; // rax
  unsigned int v1796; // edi
  _QWORD *v1797; // r9
  unsigned __int64 v1798; // r11
  unsigned int v1799; // edx
  unsigned __int64 v1800; // rbx
  ULONG_PTR v1801; // rax
  _QWORD *v1802; // r8
  int v1803; // r10d
  unsigned __int64 v1804; // r14
  const char *v1805; // rax
  unsigned __int64 v1806; // rbx
  unsigned int v1807; // r11d
  __int64 v1808; // rax
  __int64 v1809; // rbx
  unsigned __int128 v1810; // rax
  unsigned int v1811; // edi
  unsigned __int64 v1812; // rax
  __int64 v1813; // rax
  unsigned __int64 i26; // rax
  ULONG_PTR v1815; // rbx
  unsigned __int64 v1816; // rax
  unsigned __int64 v1817; // rax
  unsigned __int128 v1818; // rax
  __int64 v1819; // rbx
  ULONG_PTR v1820; // rax
  int v1821; // ebx
  int v1822; // r9d
  __int64 v1823; // r13
  __int64 v1824; // r8
  _QWORD *v1825; // r12
  unsigned int v1826; // r15d
  unsigned int v1827; // eax
  _BYTE *v1828; // rdi
  int v1829; // ecx
  unsigned int v1830; // eax
  __int64 v1831; // rbx
  int v1832; // edx
  unsigned __int64 v1833; // rcx
  int v1834; // r14d
  ULONG_PTR v1835; // r14
  int v1836; // ecx
  _QWORD *v1837; // rax
  __int64 v1838; // rdx
  _QWORD *v1839; // r8
  const char *v1840; // rax
  int v1841; // r9d
  __int64 v1842; // r11
  unsigned __int64 v1843; // rcx
  unsigned __int64 v1844; // rbx
  unsigned int v1845; // r10d
  __int64 v1846; // rax
  __int64 v1847; // rbx
  unsigned __int128 v1848; // rax
  unsigned int v1849; // edx
  unsigned __int64 v1850; // rax
  __int64 v1851; // rax
  unsigned __int64 i27; // rax
  int v1853; // r10d
  int v1854; // r9d
  __int64 v1855; // r14
  __int64 v1856; // r8
  unsigned int v1857; // eax
  _BYTE *v1858; // rbx
  int v1859; // ecx
  unsigned int v1860; // eax
  __int64 v1861; // r8
  int v1862; // edx
  unsigned __int64 v1863; // rcx
  int v1864; // edi
  _QWORD *v1865; // rsi
  ULONG_PTR v1866; // r14
  unsigned int *v1867; // r13
  __int64 v1868; // r12
  int v1869; // ecx
  _QWORD *v1870; // r15
  _QWORD *v1871; // rax
  __int64 v1872; // rdx
  _QWORD *v1873; // r8
  int v1874; // r9d
  const char *v1875; // rax
  __int64 v1876; // r11
  unsigned __int64 v1877; // rdi
  unsigned int v1878; // r10d
  __int64 v1879; // rax
  __int64 v1880; // rdi
  unsigned __int128 v1881; // rax
  unsigned int v1882; // edx
  unsigned __int64 v1883; // rax
  __int64 v1884; // rax
  unsigned __int64 i28; // rax
  ULONG_PTR v1886; // r13
  int v1887; // eax
  ULONG_PTR v1888; // r14
  int v1889; // r13d
  unsigned int v1890; // edi
  ULONG_PTR v1891; // rsi
  __int64 v1892; // r14
  unsigned int v1893; // ecx
  __int64 v1894; // rdi
  int v1895; // ecx
  unsigned int v1896; // eax
  __int64 v1897; // r8
  int v1898; // edx
  unsigned __int64 v1899; // rcx
  int v1900; // ebx
  __int64 v1901; // rax
  int v1902; // edx
  _QWORD *v1903; // rcx
  __int64 v1904; // rbx
  unsigned __int64 v1905; // rdx
  unsigned __int64 i103; // rcx
  __int64 v1907; // r15
  unsigned int v1908; // r12d
  ULONG_PTR v1909; // r14
  unsigned __int8 *v1910; // r8
  const char *v1911; // rax
  unsigned __int64 v1912; // rdx
  int v1913; // r9d
  __int64 v1914; // rax
  unsigned __int64 i104; // rax
  __int64 v1916; // r14
  unsigned int v1917; // eax
  _BYTE *v1918; // rdi
  int v1919; // ecx
  unsigned int v1920; // eax
  __int64 v1921; // r8
  int v1922; // edx
  unsigned __int64 v1923; // rcx
  int v1924; // ebx
  _BYTE *v1925; // r14
  int v1926; // ecx
  _QWORD *v1927; // rax
  __int64 v1928; // rdx
  __int128 *v1929; // rbx
  int v1930; // ecx
  unsigned __int64 v1931; // rdx
  __int64 v1932; // rax
  __int64 v1933; // r8
  __int64 v1934; // rax
  unsigned __int64 i29; // rax
  _OWORD *v1936; // rbx
  int v1937; // r15d
  ULONG_PTR v1938; // r12
  __int64 v1939; // rcx
  unsigned __int8 v1940; // r13
  unsigned int *v1941; // rcx
  unsigned __int64 v1942; // rdx
  int v1943; // eax
  __int64 v1944; // rcx
  __int64 v1945; // r14
  unsigned int v1946; // eax
  _BYTE *v1947; // rbx
  int v1948; // ecx
  unsigned int v1949; // eax
  __int64 v1950; // r8
  int v1951; // edx
  unsigned __int64 v1952; // rcx
  int v1953; // edi
  _BYTE *v1954; // rdx
  int v1955; // ecx
  _QWORD *v1956; // rax
  __int64 v1957; // rdi
  unsigned __int64 v1958; // rcx
  unsigned __int64 i30; // rax
  __int64 v1960; // r14
  unsigned int v1961; // eax
  _BYTE *v1962; // rdi
  int v1963; // ecx
  unsigned int v1964; // eax
  __int64 v1965; // r8
  int v1966; // edx
  unsigned __int64 v1967; // rcx
  int v1968; // ebx
  _BYTE *v1969; // rdx
  int v1970; // ecx
  _QWORD *v1971; // rax
  __int64 v1972; // rbx
  unsigned __int64 v1973; // rcx
  unsigned __int64 i31; // rax
  __int64 v1975; // r14
  unsigned int v1976; // eax
  _BYTE *v1977; // rbx
  int v1978; // ecx
  unsigned int v1979; // eax
  __int64 v1980; // r8
  int v1981; // edx
  unsigned __int64 v1982; // rcx
  int v1983; // edi
  _BYTE *v1984; // rdx
  int v1985; // ecx
  _QWORD *v1986; // rax
  __int64 v1987; // rdi
  unsigned __int64 v1988; // rcx
  unsigned __int64 i32; // rax
  unsigned int v1990; // r14d
  __int64 v1991; // r15
  unsigned int v1992; // r14d
  unsigned int v1993; // eax
  _BYTE *v1994; // rdi
  int v1995; // ecx
  unsigned int v1996; // eax
  __int64 v1997; // r8
  int v1998; // edx
  unsigned __int64 v1999; // rcx
  int v2000; // ebx
  _BYTE *v2001; // r10
  int v2002; // ecx
  _QWORD *v2003; // rax
  __int64 v2004; // rdx
  __int64 *v2005; // r8
  const char *v2006; // rax
  int v2007; // r9d
  __int64 v2008; // r15
  __int64 *v2009; // rcx
  unsigned __int64 v2010; // rbx
  unsigned int v2011; // r11d
  __int64 v2012; // rax
  __int64 v2013; // rbx
  _QWORD *v2014; // r8
  __int64 v2015; // rbx
  unsigned __int128 v2016; // rax
  unsigned int v2017; // edx
  unsigned __int64 v2018; // rax
  __int64 v2019; // rax
  unsigned __int64 i33; // rax
  __int64 v2021; // r15
  __int64 v2022; // r13
  _QWORD *v2023; // r12
  unsigned int v2024; // eax
  __int64 v2025; // r14
  int v2026; // ecx
  unsigned int v2027; // eax
  __int64 v2028; // rbx
  int v2029; // edx
  unsigned __int64 v2030; // rcx
  int v2031; // edi
  ULONG_PTR v2032; // r15
  _QWORD *v2033; // rax
  int v2034; // ecx
  __int64 v2035; // rdx
  _QWORD *v2036; // rdi
  int v2037; // r8d
  const char *v2038; // rax
  __int64 v2039; // r10
  unsigned __int64 v2040; // rbx
  unsigned int v2041; // r9d
  __int64 v2042; // rax
  __int64 v2043; // rbx
  unsigned __int128 v2044; // rax
  unsigned int v2045; // edx
  unsigned __int64 v2046; // rax
  __int64 v2047; // rax
  unsigned __int64 i34; // rax
  int v2049; // r12d
  int v2050; // r13d
  __int64 v2051; // r14
  __int64 v2052; // r8
  unsigned int v2053; // r15d
  unsigned int v2054; // eax
  _BYTE *v2055; // rbx
  int v2056; // ecx
  unsigned int v2057; // eax
  __int64 v2058; // r8
  int v2059; // edx
  unsigned __int64 v2060; // rcx
  int v2061; // edi
  _BYTE *v2062; // r14
  _QWORD *v2063; // rax
  int v2064; // ecx
  __int64 v2065; // rdx
  __int64 *v2066; // r8
  const char *v2067; // rax
  int v2068; // r9d
  __int64 v2069; // r11
  __int64 *v2070; // rcx
  unsigned __int64 v2071; // rdi
  unsigned int v2072; // r10d
  __int64 v2073; // rax
  __int64 v2074; // rdi
  unsigned __int128 v2075; // rax
  unsigned int v2076; // edx
  unsigned __int64 v2077; // rax
  __int64 v2078; // rax
  unsigned __int64 i35; // rax
  unsigned int v2080; // edi
  unsigned int v2081; // edx
  unsigned int v2082; // r11d
  __int64 v2083; // r12
  __int64 v2084; // r13
  int v2085; // ecx
  __int64 v2086; // r15
  __int64 v2087; // r8
  unsigned int v2088; // ecx
  _QWORD *v2089; // r14
  _BYTE *v2090; // rdi
  int v2091; // ecx
  unsigned int v2092; // eax
  __int64 v2093; // r8
  int v2094; // edx
  unsigned __int64 v2095; // rcx
  int v2096; // ebx
  ULONG_PTR v2097; // r10
  _QWORD *v2098; // rax
  int v2099; // ecx
  __int64 v2100; // rdx
  _QWORD *v2101; // r8
  const char *v2102; // rax
  int v2103; // r9d
  __int64 v2104; // r15
  unsigned __int64 v2105; // rcx
  unsigned int v2106; // r11d
  unsigned __int64 v2107; // rbx
  __int64 v2108; // rax
  __int64 v2109; // rbx
  unsigned __int128 v2110; // rax
  int v2111; // r11d
  unsigned int v2112; // edx
  unsigned __int64 v2113; // rax
  __int64 v2114; // rax
  unsigned __int64 i36; // rax
  __int16 v2116; // ax
  int v2117; // r9d
  _QWORD *v2118; // r8
  __int64 v2119; // rcx
  __int64 v2120; // r11
  const wchar_t *v2121; // rcx
  char v2122; // al
  unsigned int v2123; // r8d
  char *v2124; // rdx
  _QWORD *v2125; // rcx
  unsigned __int64 v2126; // r9
  signed __int64 v2127; // rdx
  __int64 v2128; // r14
  __int64 v2129; // r12
  _QWORD *v2130; // r15
  unsigned int v2131; // eax
  int v2132; // ecx
  unsigned int v2133; // eax
  __int64 v2134; // r8
  int v2135; // edx
  unsigned __int64 v2136; // rcx
  int v2137; // edi
  _BYTE *v2138; // r14
  _QWORD *v2139; // rax
  int v2140; // ecx
  __int64 v2141; // rdx
  _QWORD *v2142; // r8
  int v2143; // r9d
  const char *v2144; // rax
  __int64 v2145; // r11
  unsigned __int64 v2146; // rdi
  unsigned int v2147; // r10d
  __int64 v2148; // rax
  __int64 v2149; // rdi
  unsigned __int128 v2150; // rax
  unsigned int v2151; // edx
  unsigned __int64 v2152; // rax
  __int64 v2153; // rax
  unsigned __int64 i37; // rax
  __int64 v2155; // r14
  unsigned int v2156; // eax
  _BYTE *v2157; // rdi
  int v2158; // ecx
  unsigned int v2159; // eax
  __int64 v2160; // r8
  int v2161; // edx
  unsigned __int64 v2162; // rcx
  int v2163; // ebx
  _BYTE *v2164; // r10
  int v2165; // ecx
  _QWORD *v2166; // rax
  __int64 v2167; // rdx
  unsigned __int64 v2168; // rcx
  unsigned __int64 i38; // rax
  __int64 v2170; // r13
  __int64 v2171; // rcx
  int v2172; // r9d
  const char *v2173; // r14
  __int64 v2174; // r15
  const char *v2175; // rcx
  const char *v2176; // r8
  const char *i39; // rax
  __int64 v2178; // rbx
  unsigned int v2179; // r11d
  __int64 v2180; // rax
  __int64 v2181; // rbx
  unsigned __int128 v2182; // rax
  unsigned int v2183; // r13d
  unsigned __int64 v2184; // rax
  __int64 v2185; // rax
  __int64 v2186; // r12
  __int64 v2187; // r8
  int v2188; // r14d
  unsigned int v2189; // r13d
  int v2190; // eax
  unsigned int v2191; // r14d
  unsigned int v2192; // eax
  _BYTE *v2193; // rbx
  int v2194; // ecx
  unsigned int v2195; // eax
  __int64 v2196; // r8
  int v2197; // edx
  unsigned __int64 v2198; // rcx
  int v2199; // edi
  _BYTE *v2200; // r10
  _QWORD *v2201; // rax
  int v2202; // ecx
  __int64 v2203; // rdx
  unsigned __int64 v2204; // rcx
  unsigned __int64 i40; // rax
  _QWORD *v2206; // r8
  const char *v2207; // rax
  int v2208; // r9d
  __int64 v2209; // r12
  unsigned __int64 v2210; // rcx
  __int64 v2211; // rdi
  unsigned int v2212; // r15d
  __int64 v2213; // rax
  __int64 v2214; // rdi
  unsigned __int128 v2215; // rax
  unsigned int v2216; // r14d
  unsigned __int64 v2217; // rax
  __int64 v2218; // rax
  __int64 v2219; // r14
  __int64 v2220; // r8
  unsigned int v2221; // eax
  __int64 v2222; // rdi
  int v2223; // ecx
  unsigned int v2224; // eax
  __int64 v2225; // r8
  int v2226; // edx
  unsigned __int64 v2227; // rcx
  int v2228; // ebx
  __int64 v2229; // r10
  int v2230; // ecx
  _QWORD *v2231; // rax
  __int64 v2232; // rdx
  unsigned __int64 v2233; // rcx
  unsigned __int64 i41; // rax
  __int64 v2235; // rax
  _QWORD *v2236; // r11
  int v2237; // r9d
  _QWORD *v2238; // r8
  __int64 v2239; // r15
  const char *v2240; // rax
  unsigned __int64 v2241; // rcx
  __int64 v2242; // rbx
  unsigned int v2243; // r14d
  __int64 v2244; // rax
  __int64 v2245; // rbx
  unsigned __int128 v2246; // rax
  unsigned int v2247; // r13d
  unsigned __int64 v2248; // rax
  __int64 v2249; // rax
  __int64 v2250; // r14
  unsigned __int64 v2251; // rax
  unsigned __int128 v2252; // rax
  unsigned __int64 v2253; // rcx
  int v2254; // ecx
  int v2255; // ecx
  unsigned int v2256; // edi
  int v2257; // ecx
  int v2258; // ecx
  int v2259; // ecx
  unsigned __int64 v2260; // rax
  __int64 v2261; // rcx
  unsigned int v2262; // edi
  _QWORD *v2263; // r13
  unsigned __int64 v2264; // rax
  unsigned __int128 v2265; // rax
  unsigned __int64 v2266; // rcx
  int v2267; // ecx
  int v2268; // ecx
  unsigned int v2269; // edi
  int v2270; // ecx
  int v2271; // ecx
  int v2272; // ecx
  unsigned __int64 v2273; // rax
  __int64 v2274; // rcx
  unsigned int v2275; // edi
  _DWORD *v2276; // rax
  _DWORD *v2277; // r15
  void *v2278; // rcx
  int v2279; // ecx
  unsigned int v2280; // ebx
  int v2281; // r9d
  __int64 v2282; // rax
  __int64 v2283; // rbx
  __int64 v2284; // rbx
  __int64 v2285; // rbx
  ULONG_PTR v2286; // rax
  unsigned int v2287; // r8d
  __int64 v2288; // rdi
  __int64 v2289; // rdi
  _QWORD *v2290; // rax
  unsigned int v2291; // r8d
  __int64 v2292; // rdi
  __int64 v2293; // rdi
  _QWORD *v2294; // rax
  unsigned int v2295; // r8d
  __int64 v2296; // rdi
  __int64 v2297; // rdi
  unsigned int v2298; // r8d
  __int64 v2299; // rdi
  __int64 v2300; // rdi
  _BYTE *v2301; // r14
  int v2302; // r10d
  int v2303; // r9d
  __int64 v2304; // r12
  __int64 v2305; // r8
  unsigned int v2306; // eax
  _BYTE *v2307; // rdi
  int v2308; // ecx
  unsigned int v2309; // eax
  __int64 v2310; // r8
  int v2311; // edx
  unsigned __int64 v2312; // rcx
  int v2313; // r14d
  _BYTE *v2314; // r14
  _BYTE *v2315; // rax
  _QWORD *v2316; // rsi
  _DWORD *v2317; // rbx
  __int64 v2318; // r12
  int v2319; // ecx
  _QWORD *v2320; // r15
  _QWORD *v2321; // rax
  __int64 v2322; // rdx
  _QWORD *v2323; // r9
  int v2324; // r10d
  const char *v2325; // rax
  __int64 v2326; // r13
  unsigned __int64 v2327; // r8
  unsigned int v2328; // r11d
  __int64 v2329; // rax
  __int64 v2330; // r8
  unsigned __int128 v2331; // rax
  unsigned int v2332; // edx
  unsigned __int64 v2333; // rax
  __int64 v2334; // rax
  unsigned __int64 i42; // rax
  int v2336; // ebx
  int v2337; // r9d
  __int64 v2338; // r15
  _QWORD *v2339; // r12
  __int64 v2340; // r13
  __int64 v2341; // r8
  unsigned int v2342; // eax
  __int64 v2343; // r14
  int v2344; // ecx
  unsigned int v2345; // eax
  __int64 v2346; // rbx
  int v2347; // edx
  unsigned __int64 v2348; // rcx
  int v2349; // edi
  ULONG_PTR v2350; // r15
  _QWORD *v2351; // rax
  int v2352; // ecx
  __int64 v2353; // rdx
  _QWORD *v2354; // rdi
  int v2355; // r8d
  const char *v2356; // rax
  __int64 v2357; // r10
  unsigned __int64 v2358; // rbx
  unsigned int v2359; // r9d
  __int64 v2360; // rax
  __int64 v2361; // rbx
  unsigned __int64 v2362; // rcx
  unsigned int v2363; // edx
  unsigned __int64 v2364; // rax
  __int64 v2365; // rax
  unsigned __int64 i43; // rax
  unsigned int v2367; // ebx
  int v2383; // eax
  int v2384; // r10d
  __int64 v2385; // r15
  __int64 v2386; // r9
  __int64 v2387; // r8
  __int64 v2388; // rax
  unsigned int v2389; // ebx
  unsigned int v2390; // eax
  _BYTE *v2391; // r14
  int v2392; // ecx
  unsigned int v2393; // eax
  __int64 v2394; // rbx
  int v2395; // edx
  unsigned __int64 v2396; // rcx
  int v2397; // edi
  PVOID **v2398; // r11
  _BYTE *v2399; // r15
  _DWORD *v2400; // rsi
  __int64 v2401; // r13
  int v2402; // ecx
  PVOID *v2403; // r12
  _QWORD *v2404; // rax
  __int64 v2405; // rdx
  unsigned __int64 v2406; // rcx
  _QWORD *v2407; // rdi
  unsigned int v2408; // r8d
  const char *v2409; // rax
  __int64 v2410; // r10
  unsigned __int64 v2411; // rbx
  unsigned int v2412; // r9d
  __int64 v2413; // rax
  __int64 v2414; // rbx
  unsigned int v2415; // edx
  unsigned __int64 v2416; // rax
  __int64 v2417; // rax
  unsigned __int64 v2418; // rax
  __int64 v2419; // r8
  unsigned __int64 v2420; // rdx
  unsigned __int64 v2421; // rax
  unsigned __int64 i46; // rax
  unsigned int v2423; // r8d
  unsigned __int64 v2424; // rax
  unsigned __int128 v2425; // rax
  unsigned __int64 v2426; // rcx
  int v2427; // ecx
  int v2428; // ecx
  unsigned int v2429; // edi
  int v2430; // ecx
  int v2431; // ecx
  int v2432; // ecx
  unsigned __int64 v2433; // rax
  __int64 v2434; // rcx
  unsigned int v2435; // edi
  __int64 v2436; // r15
  _QWORD *v2437; // r12
  unsigned __int64 v2438; // rax
  unsigned __int128 v2439; // rax
  unsigned __int64 v2440; // rcx
  int v2441; // ecx
  int v2442; // ecx
  unsigned int v2443; // edi
  int v2444; // ecx
  int v2445; // ecx
  int v2446; // ecx
  unsigned __int64 v2447; // rax
  __int64 v2448; // rcx
  unsigned int v2449; // edi
  _DWORD *v2450; // rax
  _DWORD *v2451; // r13
  unsigned int v2452; // r15d
  unsigned int i44; // edi
  __int64 v2454; // rdx
  __int64 v2455; // rbx
  int v2456; // r11d
  int v2457; // r9d
  unsigned int v2458; // ebx
  __int64 v2459; // r8
  unsigned int v2460; // eax
  __int64 v2461; // rdi
  int v2462; // ecx
  unsigned int v2463; // eax
  __int64 v2464; // rbx
  int v2465; // edx
  unsigned __int64 v2466; // rcx
  int v2467; // r14d
  __int64 v2468; // r14
  _QWORD *v2469; // rsi
  __int64 v2470; // r12
  int v2471; // ecx
  _QWORD *v2472; // r15
  _QWORD *v2473; // rax
  __int64 v2474; // rdx
  _QWORD *v2475; // r8
  int v2476; // r9d
  const char *v2477; // rax
  __int64 v2478; // r11
  unsigned __int64 v2479; // rbx
  unsigned int v2480; // r10d
  __int64 v2481; // rax
  __int64 v2482; // rbx
  unsigned __int128 v2483; // rax
  unsigned int v2484; // edx
  unsigned __int64 v2485; // rax
  __int64 v2486; // rax
  unsigned __int64 i102; // rax
  __int64 v2488; // r15
  unsigned int v2489; // eax
  _BYTE *v2490; // rbx
  int v2491; // ecx
  unsigned int v2492; // eax
  __int64 v2493; // rdi
  int v2494; // edx
  unsigned __int64 v2495; // rcx
  int v2496; // r14d
  _BYTE *v2497; // rdx
  int v2498; // ecx
  _QWORD *v2499; // rax
  __int64 v2500; // rdi
  unsigned __int64 v2501; // rcx
  unsigned __int64 i45; // rax
  __int64 v2503; // r15
  unsigned int v2504; // eax
  int v2505; // ecx
  unsigned int v2506; // eax
  __int64 v2507; // rdi
  int v2508; // edx
  unsigned __int64 v2509; // rcx
  int v2510; // ebx
  _BYTE *v2511; // rdx
  int v2512; // ecx
  _QWORD *v2513; // rax
  __int64 v2514; // rbx
  unsigned __int64 v2515; // rcx
  __int64 v2516; // r15
  unsigned int v2517; // eax
  __int64 v2518; // rbx
  int v2519; // ecx
  unsigned int v2520; // eax
  __int64 v2521; // rdi
  int v2522; // edx
  unsigned __int64 v2523; // rcx
  int v2524; // r14d
  __int64 v2525; // rdx
  int v2526; // ecx
  _QWORD *v2527; // rax
  __int64 v2528; // rdi
  unsigned __int64 v2529; // rcx
  unsigned __int64 i47; // rax
  int v2531; // r13d
  __int64 v2532; // r15
  __int64 (__fastcall *v2533)(); // r10
  __int64 v2534; // r8
  int v2535; // r12d
  unsigned int v2536; // eax
  _BYTE *v2537; // rdi
  int v2538; // ecx
  unsigned int v2539; // eax
  __int64 v2540; // rbx
  int v2541; // edx
  unsigned __int64 v2542; // rcx
  int v2543; // r14d
  _BYTE *v2544; // r14
  _QWORD *v2545; // rax
  int v2546; // ecx
  __int64 v2547; // rdx
  __int64 (__fastcall *v2548)(); // r9
  __int64 v2549; // r8
  const char *v2550; // rax
  __int64 i48; // r11
  int v2552; // r10d
  unsigned __int64 v2553; // rbx
  __int64 v2554; // rax
  __int64 v2555; // rbx
  unsigned __int128 v2556; // rax
  unsigned __int64 i49; // rax
  __int64 Prcb; // r8
  char *v2559; // rcx
  __int64 v2560; // rdx
  unsigned int v2566; // edx
  int v2567; // eax
  __int64 v2568; // rcx
  __int64 v2569; // rdx
  char v2570; // al
  __int64 v2571; // rcx
  unsigned int v2572; // ecx
  void (__fastcall *v2573)(_BYTE *); // r12
  _QWORD *v2574; // rbx
  int *v2575; // rdx
  __int64 v2576; // r8
  __int64 v2577; // rcx
  int v2578; // eax
  int v2579; // eax
  __int64 v2580; // r15
  _QWORD *v2581; // r14
  unsigned int v2582; // eax
  _BYTE *v2583; // rbx
  _BYTE *v2584; // r15
  int v2585; // ecx
  unsigned int v2586; // eax
  __int64 v2587; // r8
  int v2588; // edx
  unsigned __int64 v2589; // rcx
  int v2590; // edi
  int v2591; // ecx
  _QWORD *v2592; // rax
  __int64 v2593; // rdx
  const char *v2594; // rax
  int v2595; // r8d
  unsigned __int64 v2596; // rdx
  int v2597; // edi
  __int64 v2598; // rax
  __int64 v2599; // rax
  unsigned __int64 i50; // rax
  __int64 v2601; // rdx
  void (__fastcall *v2602)(_BYTE *); // r12
  unsigned int v2603; // r14d
  __int64 v2604; // r13
  _QWORD *v2605; // r15
  unsigned int v2606; // eax
  _BYTE *v2607; // rdi
  int v2608; // ecx
  unsigned int v2609; // eax
  __int64 v2610; // r8
  int v2611; // edx
  unsigned __int64 v2612; // rcx
  int v2613; // ebx
  _BYTE *v2614; // r14
  int v2615; // ecx
  _QWORD *v2616; // rax
  int v2617; // r10d
  __int64 v2618; // rdx
  _QWORD *v2619; // r8
  const char *v2620; // rax
  int v2621; // r9d
  __int64 v2622; // r11
  unsigned __int64 v2623; // rbx
  __int64 v2624; // rax
  __int64 v2625; // rbx
  unsigned __int128 v2626; // rax
  int v2627; // edx
  __int64 v2628; // rax
  __int64 v2629; // rax
  unsigned __int64 i51; // rax
  _QWORD *v2631; // rdx
  _QWORD *v2632; // rdx
  int v2633; // r8d
  const char *v2634; // rax
  unsigned __int64 v2635; // r14
  int v2636; // ebx
  __int64 v2637; // rax
  __int64 v2638; // rax
  unsigned __int64 i52; // rcx
  ULONG_PTR v2640; // rcx
  unsigned int v2641; // r12d
  __int64 v2642; // r15
  __int64 v2643; // r14
  unsigned int v2644; // eax
  _BYTE *v2645; // rbx
  int v2646; // ecx
  unsigned int v2647; // eax
  __int64 v2648; // r8
  int v2649; // edx
  unsigned __int64 v2650; // rcx
  int v2651; // edi
  _BYTE *v2652; // rax
  int v2653; // edx
  _QWORD *v2654; // rcx
  __int64 v2655; // rdi
  unsigned __int64 v2656; // rdx
  unsigned __int64 i53; // rcx
  _BYTE *v2658; // r14
  unsigned __int64 v2659; // rdx
  __int64 v2660; // r9
  __int64 v2661; // r14
  unsigned int *v2662; // rdi
  __int64 v2663; // r8
  unsigned int v2664; // ecx
  unsigned __int64 v2665; // rax
  __int64 v2666; // r15
  unsigned int v2667; // eax
  _BYTE *v2668; // r14
  int v2669; // ecx
  unsigned int v2670; // eax
  __int64 v2671; // rdi
  int v2672; // edx
  unsigned __int64 v2673; // rcx
  int v2674; // ebx
  _BYTE *v2675; // rdi
  int v2676; // ecx
  _QWORD *v2677; // rax
  __int64 v2678; // rdx
  unsigned __int64 v2679; // rcx
  unsigned __int64 i54; // rax
  int v2681; // ebx
  __int64 v2682; // r15
  unsigned int v2683; // eax
  _BYTE *v2684; // rdi
  int v2685; // ecx
  unsigned int v2686; // eax
  __int64 v2687; // rbx
  int v2688; // edx
  unsigned __int64 v2689; // rcx
  int v2690; // r14d
  _BYTE *v2691; // r14
  int v2692; // ecx
  _QWORD *v2693; // rax
  __int64 v2694; // rdx
  unsigned __int64 v2695; // rcx
  unsigned __int64 i55; // rax
  unsigned __int64 v2697; // rbx
  __int64 v2698; // r15
  unsigned int v2699; // eax
  __int64 v2700; // r14
  int v2701; // ecx
  unsigned int v2702; // eax
  __int64 v2703; // rbx
  int v2704; // edx
  unsigned __int64 v2705; // rcx
  int v2706; // edi
  __int64 v2707; // rdi
  int v2708; // ecx
  _QWORD *v2709; // rax
  __int64 v2710; // rdx
  unsigned __int64 v2711; // rcx
  unsigned __int64 i56; // rax
  __int64 v2713; // rax
  __int64 v2714; // rdx
  __int64 v2715; // rbx
  __int64 v2716; // rax
  int v2717; // r14d
  __int64 v2718; // rax
  int v2719; // r12d
  unsigned __int64 v2720; // rax
  __int64 v2721; // r9
  __int64 v2722; // r15
  unsigned int v2723; // r14d
  unsigned int v2724; // r12d
  unsigned int v2725; // eax
  _BYTE *v2726; // rbx
  int v2727; // ecx
  unsigned int v2728; // eax
  __int64 v2729; // r8
  int v2730; // edx
  unsigned __int64 v2731; // rcx
  int v2732; // edi
  _BYTE *v2733; // rax
  int v2734; // edx
  _QWORD *v2735; // rcx
  __int64 v2736; // rdi
  unsigned __int64 v2737; // rdx
  unsigned __int64 i57; // rcx
  __int64 v2739; // rcx
  ULONG_PTR v2740; // rcx
  int v2741; // r13d
  const char *v2742; // r14
  __int64 v2743; // r15
  int v2744; // r12d
  unsigned int v2745; // eax
  _BYTE *v2746; // rdi
  int v2747; // ecx
  unsigned int v2748; // eax
  __int64 v2749; // r8
  int v2750; // edx
  unsigned __int64 v2751; // rcx
  int v2752; // ebx
  _BYTE *v2753; // rbx
  _QWORD *v2754; // rax
  int v2755; // ecx
  __int64 v2756; // rdx
  const char *i58; // rdx
  unsigned __int64 v2758; // rax
  unsigned __int64 i59; // rcx
  int v2760; // r12d
  const char *v2761; // r14
  __int64 v2762; // r15
  int v2763; // r13d
  unsigned int v2764; // eax
  _BYTE *v2765; // rbx
  int v2766; // ecx
  unsigned int v2767; // eax
  __int64 v2768; // r8
  int v2769; // edx
  unsigned __int64 v2770; // rcx
  int v2771; // edi
  _BYTE *v2772; // rdi
  _QWORD *v2773; // rax
  int v2774; // ecx
  __int64 v2775; // rdx
  const char *i60; // rdx
  unsigned __int64 v2777; // rax
  unsigned __int64 i61; // rcx
  int v2779; // r15d
  __int64 v2780; // r14
  int v2781; // r12d
  unsigned int v2782; // eax
  _BYTE *v2783; // rdi
  int v2784; // ecx
  unsigned int v2785; // eax
  __int64 v2786; // r8
  int v2787; // edx
  unsigned __int64 v2788; // rcx
  int v2789; // ebx
  _BYTE *v2790; // rbx
  _QWORD *v2791; // rax
  int v2792; // ecx
  __int64 v2793; // rdx
  const char *v2794; // r14
  const char *v2795; // r10
  const char *v2796; // rdx
  int v2797; // ecx
  __int64 v2798; // rax
  unsigned __int64 v2799; // rax
  unsigned __int64 i62; // rcx
  int v2801; // r15d
  __int64 v2802; // r14
  int v2803; // r12d
  unsigned int v2804; // eax
  _BYTE *v2805; // rbx
  int v2806; // ecx
  unsigned int v2807; // eax
  __int64 v2808; // r8
  int v2809; // edx
  unsigned __int64 v2810; // rcx
  int v2811; // edi
  _BYTE *v2812; // rdi
  int v2813; // ecx
  _QWORD *v2814; // rax
  __int64 v2815; // rdx
  const char *i63; // rdx
  unsigned __int64 v2817; // rax
  unsigned __int64 i64; // rcx
  __int64 v2819; // r14
  int v2820; // r9d
  _QWORD *v2821; // r13
  __int64 v2822; // r8
  unsigned int v2823; // eax
  int v2824; // r15d
  int v2825; // ecx
  unsigned int v2826; // eax
  __int64 v2827; // r8
  int v2828; // edx
  unsigned __int64 v2829; // rcx
  int v2830; // ebx
  _BYTE *v2831; // r14
  _QWORD *v2832; // rax
  int v2833; // ecx
  __int64 v2834; // rdx
  int v2835; // r9d
  const char *v2836; // rax
  int v2837; // r8d
  unsigned __int64 v2838; // rdx
  int v2839; // ebx
  __int64 v2840; // rax
  __int64 v2841; // rax
  unsigned __int64 i66; // rax
  int v2843; // edx
  _QWORD *v2844; // r15
  int v2845; // r12d
  int v2846; // ecx
  unsigned int v2847; // eax
  __int64 v2848; // r8
  int v2849; // edx
  unsigned __int64 v2850; // rcx
  int v2851; // ebx
  _QWORD *v2852; // rax
  int v2853; // ecx
  __int64 v2854; // rdx
  const char *v2855; // rax
  int v2856; // r8d
  unsigned __int64 v2857; // rdx
  int v2858; // ebx
  __int64 v2859; // rax
  __int64 v2860; // rax
  unsigned __int64 i65; // rax
  unsigned int v2862; // eax
  _QWORD *v2863; // r15
  int v2864; // r13d
  int v2865; // r12d
  __int64 v2866; // r14
  unsigned int v2867; // eax
  _BYTE *v2868; // rbx
  int v2869; // ecx
  unsigned int v2870; // eax
  __int64 v2871; // r8
  int v2872; // edx
  unsigned __int64 v2873; // rcx
  int v2874; // edi
  _BYTE *v2875; // r14
  _QWORD *v2876; // rax
  int v2877; // ecx
  __int64 v2878; // rdx
  _QWORD *v2879; // r8
  int v2880; // r9d
  const char *v2881; // rax
  unsigned __int64 v2882; // rdx
  int v2883; // edi
  __int64 v2884; // rax
  __int64 v2885; // rax
  unsigned __int64 i67; // rax
  int v2887; // r12d
  const char *v2888; // r14
  __int64 v2889; // r15
  int v2890; // r13d
  unsigned int v2891; // eax
  int v2892; // ecx
  unsigned int v2893; // eax
  __int64 v2894; // r8
  int v2895; // edx
  unsigned __int64 v2896; // rcx
  int v2897; // ebx
  _BYTE *v2898; // rbx
  int v2899; // ecx
  _QWORD *v2900; // rax
  __int64 v2901; // rdx
  const char *i68; // rdx
  unsigned __int64 v2903; // rax
  unsigned __int64 i69; // rcx
  char *v2905; // r15
  int v2906; // r13d
  int v2907; // r12d
  __int64 v2908; // r14
  unsigned int v2909; // eax
  _BYTE *v2910; // rbx
  int v2911; // ecx
  unsigned int v2912; // eax
  __int64 v2913; // r8
  int v2914; // edx
  unsigned __int64 v2915; // rcx
  int v2916; // edi
  ULONG_PTR v2917; // r14
  _QWORD *v2918; // rax
  int v2919; // ecx
  __int64 v2920; // rdx
  char *v2921; // r9
  int v2922; // r8d
  const char *v2923; // rax
  __int64 i70; // r11
  int v2925; // r10d
  unsigned __int64 v2926; // rdi
  __int64 v2927; // rax
  __int64 v2928; // rdi
  unsigned __int128 v2929; // rax
  unsigned __int64 i71; // rax
  int v2931; // r12d
  __int64 v2932; // r14
  char *v2933; // r15
  int v2934; // r13d
  unsigned int v2935; // eax
  int v2936; // ecx
  unsigned int v2937; // eax
  __int64 v2938; // r8
  int v2939; // edx
  unsigned __int64 v2940; // rcx
  int v2941; // ebx
  ULONG_PTR v2942; // r14
  _QWORD *v2943; // rax
  int v2944; // ecx
  __int64 v2945; // rdx
  char *v2946; // r9
  int v2947; // r8d
  const char *v2948; // rax
  __int64 i72; // r11
  int v2950; // r10d
  unsigned __int64 v2951; // rbx
  __int64 v2952; // rax
  __int64 v2953; // rbx
  unsigned __int128 v2954; // rax
  unsigned __int64 i73; // rax
  __int64 v2956; // r14
  unsigned int v2957; // eax
  _BYTE *v2958; // rbx
  int v2959; // ecx
  unsigned int v2960; // eax
  __int64 v2961; // r8
  int v2962; // edx
  unsigned __int64 v2963; // rcx
  int v2964; // edi
  _BYTE *v2965; // rdx
  int v2966; // ecx
  _QWORD *v2967; // rax
  __int64 v2968; // rdi
  unsigned __int64 v2969; // rcx
  unsigned __int64 i74; // rax
  __int64 v2971; // r14
  unsigned int v2972; // eax
  _BYTE *v2973; // rdi
  int v2974; // ecx
  unsigned int v2975; // eax
  __int64 v2976; // r8
  int v2977; // edx
  unsigned __int64 v2978; // rcx
  int v2979; // ebx
  _BYTE *v2980; // rcx
  _QWORD *v2981; // rax
  int v2982; // edx
  __int64 v2983; // rbx
  unsigned __int64 v2984; // rdx
  unsigned __int64 i75; // rax
  int v2986; // r14d
  __int64 v2987; // r15
  int v2988; // r12d
  unsigned int v2989; // eax
  _BYTE *v2990; // rbx
  int v2991; // ecx
  unsigned int v2992; // eax
  __int64 v2993; // r8
  int v2994; // edx
  unsigned __int64 v2995; // rcx
  int v2996; // edi
  _BYTE *v2997; // rdi
  int v2998; // ecx
  _QWORD *v2999; // rax
  __int64 v3000; // rdx
  int v3001; // ecx
  unsigned __int64 v3002; // rdx
  unsigned __int64 i76; // rax
  __int64 v3004; // r14
  unsigned int v3005; // eax
  __int64 v3006; // rdi
  int v3007; // ecx
  unsigned int v3008; // eax
  __int64 v3009; // r8
  int v3010; // ecx
  unsigned __int64 v3011; // rdx
  int v3012; // ebx
  __int64 v3013; // rdx
  _QWORD *v3014; // rax
  int v3015; // ecx
  __int64 v3016; // rbx
  unsigned __int64 v3017; // rcx
  unsigned __int64 i77; // rax
  __int64 v3019; // r14
  unsigned int v3020; // eax
  _BYTE *v3021; // rdi
  int v3022; // ecx
  unsigned int v3023; // eax
  __int64 v3024; // r8
  int v3025; // ecx
  unsigned __int64 v3026; // rdx
  int v3027; // ebx
  _BYTE *v3028; // rdx
  _QWORD *v3029; // rax
  int v3030; // ecx
  __int64 v3031; // rbx
  unsigned __int64 v3032; // rcx
  unsigned __int64 i78; // rax
  int v3034; // r15d
  const char *v3035; // r14
  __int64 v3036; // r13
  int v3037; // r12d
  unsigned int v3038; // eax
  __int64 v3039; // rbx
  int v3040; // ecx
  unsigned int v3041; // eax
  __int64 v3042; // r8
  int v3043; // edx
  unsigned __int64 v3044; // rcx
  int v3045; // edi
  __int64 v3046; // rdi
  int v3047; // ecx
  _QWORD *v3048; // rax
  __int64 v3049; // rdx
  const char *i79; // rdx
  unsigned __int64 v3051; // rax
  unsigned __int64 i80; // rcx
  int v3053; // r15d
  __int64 v3054; // r13
  const char *v3055; // r14
  int v3056; // r12d
  unsigned int v3057; // eax
  __int64 v3058; // rbx
  int v3059; // ecx
  unsigned int v3060; // eax
  __int64 v3061; // r8
  int v3062; // edx
  unsigned __int64 v3063; // rcx
  int v3064; // edi
  __int64 v3065; // rdi
  int v3066; // ecx
  _QWORD *v3067; // rax
  __int64 v3068; // rdx
  const char *i81; // rdx
  unsigned __int64 v3070; // rax
  unsigned __int64 i82; // rcx
  __int64 v3072; // r14
  int v3073; // r15d
  int v3074; // r12d
  unsigned int v3075; // eax
  _BYTE *v3076; // rbx
  int v3077; // ecx
  unsigned int v3078; // eax
  __int64 v3079; // r8
  int v3080; // edx
  unsigned __int64 v3081; // rcx
  int v3082; // edi
  int v3083; // ecx
  _BYTE *v3084; // r14
  _QWORD *v3085; // rax
  __int64 v3086; // rdx
  unsigned __int64 v3087; // r8
  const char *v3088; // rax
  int v3089; // r9d
  __int64 v3090; // r11
  unsigned __int64 v3091; // rdi
  int v3092; // r10d
  __int64 v3093; // rax
  __int64 v3094; // rdi
  unsigned __int128 v3095; // rax
  unsigned __int128 v3096; // rax
  unsigned __int64 i83; // rax
  __int64 v3098; // r15
  unsigned int v3099; // r9d
  __int64 v3100; // r8
  unsigned int v3101; // r14d
  unsigned int v3102; // eax
  __int64 v3103; // rdi
  int v3104; // ecx
  unsigned int v3105; // eax
  __int64 v3106; // r8
  int v3107; // ecx
  unsigned __int64 v3108; // rdx
  int v3109; // ebx
  ULONG_PTR v3110; // r10
  int v3111; // ecx
  unsigned __int64 v3112; // rcx
  unsigned __int64 i84; // rax
  const char *v3114; // r11
  const char *v3115; // rax
  int v3116; // r9d
  __int64 v3117; // r12
  unsigned __int64 v3118; // rcx
  __int64 v3119; // rbx
  unsigned int v3120; // r15d
  __int64 v3121; // rax
  __int64 v3122; // rbx
  unsigned int v3123; // r14d
  unsigned __int64 v3124; // rax
  __int64 v3125; // rax
  int v3126; // eax
  unsigned int i85; // r12d
  __int64 v3128; // r13
  __int64 v3129; // rcx
  __int64 v3130; // rdx
  PVOID *v3131; // rdi
  char *v3132; // r14
  __int64 v3133; // r15
  wchar_t *v3134; // r14
  unsigned int v3135; // ecx
  __int64 v3136; // rdi
  int v3137; // ecx
  unsigned int v3138; // eax
  __int64 v3139; // r8
  int v3140; // edx
  unsigned __int64 v3141; // rcx
  int v3142; // ebx
  __int64 v3143; // rcx
  _QWORD *v3144; // rax
  int v3145; // edx
  __int64 v3146; // rbx
  unsigned __int64 v3147; // rdx
  unsigned __int64 i86; // rax
  char *v3149; // rbx
  _QWORD *v3150; // rcx
  signed __int64 v3151; // rbx
  __int64 v3152; // r15
  unsigned int v3153; // eax
  _BYTE *v3154; // r14
  int v3155; // ecx
  unsigned int v3156; // eax
  __int64 v3157; // rdi
  int v3158; // ecx
  unsigned __int64 v3159; // rdx
  int v3160; // ebx
  _BYTE *v3161; // rdx
  int v3162; // ecx
  _QWORD *v3163; // rax
  __int64 v3164; // rbx
  unsigned __int64 v3165; // rcx
  unsigned __int64 i87; // rax
  __int64 v3167; // r15
  unsigned int v3168; // eax
  _BYTE *v3169; // rdi
  int v3170; // ecx
  unsigned int v3171; // eax
  __int64 v3172; // rbx
  int v3173; // ecx
  unsigned __int64 v3174; // rdx
  int v3175; // r14d
  _BYTE *v3176; // rdx
  int v3177; // ecx
  _QWORD *v3178; // rax
  __int64 v3179; // rbx
  unsigned __int64 v3180; // rcx
  unsigned __int64 i88; // rax
  __int64 v3182; // r15
  unsigned int v3183; // ebx
  unsigned int v3184; // r12d
  unsigned int v3185; // eax
  __int64 v3186; // r14
  int v3187; // ecx
  unsigned int v3188; // eax
  __int64 v3189; // rbx
  int v3190; // ecx
  unsigned __int64 v3191; // rdx
  int v3192; // edi
  ULONG_PTR v3193; // r9
  int v3194; // ecx
  _QWORD *v3195; // rax
  __int64 v3196; // rdx
  unsigned __int64 v3197; // rcx
  unsigned __int64 i89; // rax
  _QWORD *v3199; // r10
  _QWORD *v3200; // rdi
  const char *v3201; // rax
  int v3202; // r8d
  __int64 v3203; // r15
  unsigned __int64 v3204; // rcx
  __int64 v3205; // rbx
  unsigned int v3206; // r11d
  __int64 v3207; // rax
  __int64 v3208; // rbx
  unsigned __int128 v3209; // rax
  unsigned int v3210; // r12d
  unsigned __int64 v3211; // rax
  __int64 v3212; // rax
  unsigned __int64 v3213; // rax
  unsigned __int64 v3214; // rcx
  unsigned __int128 v3215; // rax
  unsigned __int64 v3216; // rax
  unsigned __int128 v3217; // rax
  unsigned int v3218; // eax
  bool v3219; // zf
  unsigned int v3220; // eax
  unsigned int v3221; // eax
  unsigned __int64 v3222; // rax
  unsigned __int128 v3223; // rax
  int v3224; // ecx
  int v3225; // eax
  unsigned __int64 v3226; // r12
  ULONG_PTR v3227; // r15
  __int64 v3228; // rbx
  _DWORD *v3229; // r14
  __int64 v3230; // rax
  int v3231; // r8d
  signed int v3232; // ebx
  int v3233; // edx
  unsigned int v3234; // ecx
  int v3235; // eax
  _DWORD *v3236; // rax
  __int64 *v3237; // r8
  ULONG_PTR v3238; // r9
  int v3239; // ecx
  __int64 v3240; // rcx
  ULONG_PTR v3241; // rdx
  unsigned __int64 v3242; // rcx
  unsigned int v3243; // ebx
  __int64 v3244; // r14
  __int64 v3245; // rax
  __int64 v3246; // rax
  ULONG_PTR v3247; // r15
  int v3248; // r8d
  int v3249; // r9d
  unsigned int v3250; // r10d
  unsigned __int64 v3251; // rax
  __int64 v3252; // rcx
  int v3253; // r14d
  unsigned __int64 v3254; // rax
  unsigned __int64 v3255; // rbx
  unsigned __int64 v3256; // r13
  unsigned __int64 v3257; // rax
  __int64 v3258; // rcx
  __int64 v3259; // rbx
  __int64 v3260; // rax
  _QWORD *v3261; // r15
  __int64 v3262; // rdx
  _QWORD *v3263; // rcx
  __int64 v3264; // r15
  int v3265; // r8d
  _QWORD *v3266; // rbx
  unsigned __int64 v3267; // r9
  unsigned __int64 v3268; // rax
  unsigned __int128 v3269; // rax
  unsigned __int64 v3270; // rax
  unsigned __int128 v3271; // rax
  unsigned __int64 v3272; // rdx
  unsigned __int64 v3273; // r8
  unsigned int v3274; // r14d
  _QWORD *v3275; // rbx
  unsigned __int64 v3276; // r9
  unsigned __int64 v3277; // rax
  unsigned __int128 v3278; // rax
  unsigned __int64 v3279; // rax
  unsigned __int128 v3280; // rax
  unsigned __int64 v3281; // rdx
  __int64 (__fastcall *v3282)(); // rcx
  unsigned __int64 v3283; // rax
  unsigned __int128 v3284; // rax
  unsigned int v3285; // eax
  unsigned int v3286; // eax
  unsigned int v3287; // eax
  int v3288; // r8d
  int v3289; // r9d
  unsigned int v3290; // r10d
  unsigned __int64 v3291; // rax
  __int64 v3292; // rcx
  int v3293; // r14d
  unsigned __int64 v3294; // rax
  unsigned __int64 v3295; // rbx
  unsigned __int64 v3296; // r15
  unsigned __int64 v3297; // rax
  __int64 v3298; // rcx
  __int64 v3299; // r13
  __int64 v3300; // rax
  _QWORD *v3301; // rbx
  __int64 v3302; // rbx
  int v3303; // r9d
  _QWORD *v3304; // r8
  unsigned __int64 v3305; // r10
  unsigned __int64 v3306; // rax
  unsigned __int128 v3307; // rax
  unsigned __int64 v3308; // rax
  unsigned __int128 v3309; // rax
  unsigned __int64 v3310; // rdx
  unsigned int v3311; // r14d
  __int64 v3312; // rbx
  _QWORD *v3313; // r8
  unsigned __int64 v3314; // r9
  unsigned __int64 v3315; // rax
  unsigned __int128 v3316; // rax
  unsigned __int64 v3317; // rax
  unsigned __int128 v3318; // rax
  unsigned __int64 v3319; // rdx
  int v3320; // r9d
  _QWORD *v3321; // r8
  __int64 (__fastcall *v3322)(__int64, __int64); // rdx
  __int64 v3323; // r10
  char v3324; // al
  int v3325; // eax
  _QWORD *v3326; // rdx
  unsigned __int64 v3327; // rbx
  char *v3328; // rdx
  unsigned __int64 v3329; // rax
  unsigned __int128 v3330; // rax
  __int64 v3331; // r8
  unsigned int v3332; // ecx
  __int64 v3333; // rdx
  ULONG_PTR v3334; // rax
  unsigned __int64 v3335; // rdx
  unsigned __int64 v3336; // r14
  int v3337; // ecx
  unsigned int v3338; // eax
  __int64 v3339; // rbx
  int v3340; // ecx
  int v3341; // edi
  __int64 v3342; // rax
  int *v3343; // r13
  _QWORD *v3344; // r10
  __int64 v3345; // r8
  _QWORD *v3346; // rdi
  const char *v3347; // rax
  __int64 v3348; // r9
  __int64 v3349; // r15
  unsigned __int64 v3350; // rbx
  unsigned int v3351; // r11d
  __int64 v3352; // rax
  __int64 v3353; // rbx
  unsigned __int128 v3354; // rax
  __int64 v3355; // r8
  unsigned __int64 v3356; // rax
  __int64 v3357; // rax
  unsigned __int64 i90; // rax
  unsigned int v3359; // ebx
  BOOL v3360; // r15d
  __int64 v3361; // rcx
  unsigned __int8 v3362; // al
  unsigned __int64 v3363; // rdi
  unsigned __int64 v3364; // r12
  int v3365; // eax
  __int64 v3366; // rcx
  unsigned __int64 v3367; // rcx
  unsigned __int64 i91; // rax
  unsigned __int64 v3369; // rax
  unsigned __int128 v3370; // rax
  __int64 v3371; // r8
  unsigned __int64 v3372; // rax
  __int64 v3373; // rcx
  int v3374; // r15d
  unsigned __int64 v3375; // rax
  unsigned __int64 v3376; // rbx
  unsigned __int64 v3377; // r12
  __int64 v3378; // rax
  __int64 v3379; // r9
  int v3380; // edi
  _QWORD *v3381; // rbx
  unsigned __int64 v3382; // r8
  unsigned __int64 v3383; // rax
  unsigned __int128 v3384; // rax
  unsigned __int64 v3385; // rax
  unsigned __int128 v3386; // rax
  unsigned __int64 v3387; // rdx
  unsigned int v3388; // r15d
  unsigned __int64 v3389; // rdi
  _QWORD *v3390; // rbx
  unsigned __int64 v3391; // r8
  unsigned __int64 v3392; // rax
  unsigned __int128 v3393; // rax
  unsigned __int64 v3394; // rax
  unsigned __int128 v3395; // rax
  unsigned __int64 v3396; // rdx
  int v3397; // ebx
  char *v3398; // rcx
  _QWORD *v3399; // rdx
  __int64 v3400; // r8
  char v3401; // al
  int v3402; // eax
  unsigned int v3403; // eax
  unsigned __int64 v3404; // rax
  unsigned __int128 v3405; // rax
  signed __int64 v3406; // r11
  _QWORD *v3407; // r12
  unsigned __int64 v3408; // r13
  _BYTE *v3409; // rdx
  int v3410; // ebx
  char *v3411; // rcx
  __int64 v3412; // r8
  char v3413; // al
  int v3414; // ecx
  _QWORD *v3415; // rax
  __int64 v3416; // rdx
  __int64 v3417; // r8
  _QWORD *v3418; // r9
  const char *v3419; // rax
  int v3420; // r10d
  __int64 v3421; // rbx
  unsigned int v3422; // r15d
  __int64 v3423; // rsi
  __int64 v3424; // rax
  __int64 v3425; // rbx
  unsigned __int128 v3426; // rax
  unsigned int v3427; // r8d
  unsigned __int64 v3428; // rax
  __int64 v3429; // rax
  char *v3430; // rcx
  int v3431; // edx
  __int64 v3432; // r8
  unsigned int i92; // r9d
  char v3434; // al
  _QWORD *v3435; // rax
  unsigned int i93; // ecx
  _QWORD *v3437; // rax
  int v3438; // ecx
  unsigned __int64 v3439; // rax
  unsigned __int128 v3440; // rax
  __int64 v3441; // r11
  ULONG_PTR v3442; // r14
  ULONG_PTR *v3443; // r10
  __int64 v3444; // rsi
  unsigned __int64 v3445; // r8
  ULONG_PTR v3446; // rcx
  ULONG_PTR v3447; // rax
  _QWORD *v3448; // r11
  __int64 v3449; // r8
  _QWORD *v3450; // rdi
  const char *v3451; // rax
  int v3452; // r9d
  __int64 v3453; // r15
  unsigned int v3454; // r10d
  unsigned __int64 v3455; // rbx
  __int64 v3456; // rax
  __int64 v3457; // rbx
  unsigned __int128 v3458; // rax
  unsigned int v3459; // r8d
  unsigned __int64 v3460; // rax
  __int64 v3461; // rax
  unsigned __int64 i94; // rax
  int v3463; // r10d
  _QWORD *v3464; // rdi
  const char *v3465; // rax
  int v3466; // r8d
  __int64 v3467; // r9
  __int64 v3468; // rbx
  int v3469; // r13d
  __int64 v3470; // rax
  __int64 v3471; // rbx
  unsigned __int128 v3472; // rax
  int v3473; // edx
  __int64 v3474; // rax
  __int64 v3475; // rax
  unsigned int v3476; // r13d
  unsigned int v3477; // r13d
  unsigned __int64 v3478; // rax
  unsigned __int128 v3479; // rax
  signed __int64 v3480; // r10
  _QWORD *v3481; // r15
  int v3482; // ebx
  _BYTE *v3483; // rdx
  char *v3484; // rcx
  __int64 v3485; // rdi
  char v3486; // al
  int v3487; // ecx
  _QWORD *v3488; // rax
  __int64 v3489; // rdx
  __int64 v3490; // rdi
  _QWORD *v3491; // r8
  const char *v3492; // rax
  int v3493; // r9d
  __int64 v3494; // r12
  __int64 v3495; // rbx
  unsigned int v3496; // r11d
  __int64 v3497; // rax
  __int64 v3498; // rbx
  unsigned __int128 v3499; // rax
  unsigned int v3500; // edi
  unsigned __int64 v3501; // rax
  __int64 v3502; // rax
  char *v3503; // rcx
  int v3504; // edx
  __int64 v3505; // rdi
  char v3506; // al
  _QWORD *v3507; // rcx
  unsigned int i95; // eax
  unsigned int v3509; // ebx
  _QWORD *v3510; // rdx
  int v3511; // r15d
  unsigned __int64 v3512; // rax
  unsigned __int128 v3513; // rax
  ULONG_PTR v3514; // rsi
  unsigned int v3515; // r10d
  unsigned __int64 v3516; // rdi
  unsigned int v3517; // r8d
  ULONG_PTR *v3518; // r9
  __int64 v3519; // r12
  unsigned __int64 v3520; // rdx
  ULONG_PTR v3521; // rdx
  unsigned int v3522; // eax
  unsigned int v3523; // edi
  void *v3524; // rbx
  SIZE_T PoolBlockSize; // rax
  unsigned int i96; // r8d
  unsigned __int64 v3527; // rax
  unsigned __int128 v3528; // rax
  unsigned __int64 v3529; // rcx
  int v3530; // ecx
  int v3531; // ecx
  unsigned int v3532; // edi
  int v3533; // ecx
  int v3534; // ecx
  int v3535; // ecx
  unsigned __int64 v3536; // rax
  __int64 v3537; // rcx
  unsigned int v3538; // edi
  __int64 v3539; // rax
  _QWORD *v3540; // rdi
  const char *v3541; // rax
  __int64 v3542; // r8
  int v3543; // r9d
  __int64 v3544; // r11
  unsigned int v3545; // r10d
  __int64 i97; // rbx
  __int64 v3547; // rax
  __int64 v3548; // rbx
  unsigned __int128 v3549; // rax
  unsigned int v3550; // r8d
  unsigned __int64 v3551; // rax
  __int64 v3552; // rax
  int v3553; // ecx
  unsigned int v3554; // r12d
  _BYTE *v3555; // rax
  __int64 v3556; // r9
  unsigned int v3557; // r8d
  unsigned int v3558; // r11d
  int v3559; // r15d
  unsigned __int64 v3560; // rdi
  unsigned int v3561; // r10d
  int *v3562; // rbx
  __int64 v3563; // r8
  int v3564; // ecx
  int v3565; // ecx
  int v3566; // ecx
  int v3567; // ecx
  int v3568; // ecx
  bool v3569; // zf
  __int64 v3570; // rax
  int v3571; // eax
  int v3572; // ecx
  int v3573; // ecx
  int v3574; // ecx
  unsigned __int64 v3575; // rcx
  __int64 v3576; // rdx
  int v3577; // eax
  int *v3578; // rdx
  unsigned __int64 v3579; // rbx
  unsigned int v3580; // ecx
  unsigned __int64 v3581; // rax
  unsigned __int128 v3582; // rax
  unsigned __int64 v3583; // rcx
  int v3584; // ecx
  int v3585; // ecx
  __int64 v3586; // r8
  int v3587; // ecx
  int v3588; // ecx
  int v3589; // ecx
  unsigned __int64 v3590; // rax
  __int64 v3591; // rcx
  unsigned int v3592; // r8d
  __int64 (__fastcall *v3593)(__int64, __int64, __int64, __int64); // rax
  __int64 v3594; // r15
  unsigned __int64 v3595; // rax
  unsigned __int128 v3596; // rax
  unsigned __int64 v3597; // rax
  unsigned __int128 v3598; // rax
  unsigned __int64 v3599; // rcx
  __int64 v3600; // rbx
  int v3601; // eax
  unsigned int v3602; // r9d
  int v3603; // eax
  unsigned int v3604; // edi
  _BYTE *v3605; // rax
  int v3606; // ecx
  unsigned int v3607; // ecx
  PKTIMER v3608; // r10
  ULONG_PTR v3609; // r11
  unsigned __int64 v3610; // r8
  unsigned __int64 v3611; // rbx
  __int64 v3612; // r11
  int v3613; // ecx
  int v3614; // ecx
  int v3615; // ecx
  int v3616; // ecx
  int v3617; // ecx
  bool v3618; // zf
  __int64 v3619; // rax
  int v3620; // eax
  int v3621; // ecx
  int v3622; // ecx
  int v3623; // ecx
  int v3624; // ecx
  __int64 v3625; // rdx
  unsigned __int64 v3626; // rcx
  int v3627; // eax
  __int64 v3628; // r9
  __int64 v3629; // r8
  char *v3630; // rcx
  unsigned __int64 v3631; // r12
  _QWORD *v3632; // rdx
  char v3633; // al
  ULONG_PTR v3634; // rcx
  __int64 v3635; // rdx
  struct _KTIMER *v3636; // r13
  __int64 v3637; // rax
  PHYSICAL_ADDRESS v3638; // rax
  ULONG_PTR v3639; // rax
  __int64 v3640; // r8
  __int64 v3641; // rax
  ULONG_PTR v3642; // r9
  ULONG_PTR v3643; // rax
  PHYSICAL_ADDRESS v3644; // rax
  _QWORD *v3645; // rdx
  unsigned int i98; // r8d
  unsigned __int64 v3647; // rcx
  __int64 v3648; // rax
  struct _KTIMER *v3649; // r12
  __int64 v3650; // rax
  __int64 v3651; // r13
  __int64 v3652; // rcx
  __int64 v3653; // rdx
  unsigned __int64 v3654; // rdx
  PVOID *v3655; // rcx
  __int64 v3656; // r9
  char *v3657; // r8
  unsigned __int64 v3658; // rax
  _BYTE *v3659; // rax
  int v3660; // ecx
  __int64 v3661; // r10
  unsigned int v3662; // r9d
  __int64 v3663; // rdx
  __int64 v3664; // rcx
  unsigned __int64 v3665; // r12
  __int64 i99; // r11
  PKTIMER v3667; // rsi
  PKTIMER v3668; // r14
  unsigned __int64 v3669; // rcx
  int v3670; // r9d
  unsigned __int64 v3671; // rbx
  _QWORD *v3672; // r8
  __int64 v3673; // r10
  char *v3674; // rdx
  char v3675; // al
  int v3676; // r8d
  unsigned __int64 v3677; // rcx
  int *v3678; // rdx
  __int64 v3679; // r8
  __int64 v3680; // rax
  int v3681; // eax
  __int16 v3682; // ax
  unsigned __int64 v3683; // rcx
  __int64 v3684; // rdx
  unsigned __int64 v3685; // rcx
  unsigned __int64 v3686; // rcx
  unsigned __int64 v3687; // rax
  unsigned int v3688; // edi
  unsigned __int64 v3689; // rdx
  unsigned __int64 v3690; // rax
  __int64 v3691; // r9
  const char *v3692; // rdi
  __int64 v3693; // r8
  const char *v3694; // rax
  unsigned __int64 v3695; // rcx
  __int64 v3696; // rbx
  unsigned int v3697; // edx
  unsigned __int64 v3698; // rax
  __int64 v3699; // rax
  ULONG_PTR v3700; // rax
  int v3701; // ebx
  unsigned __int64 v3702; // rax
  _DWORD *v3703; // r15
  unsigned __int128 v3704; // rax
  __int64 v3705; // r12
  unsigned __int64 v3706; // rax
  unsigned __int128 v3707; // rax
  int v3708; // ebx
  int *v3709; // rcx
  int *v3710; // rdx
  __int64 v3711; // rdi
  char v3712; // al
  unsigned __int64 v3713; // r8
  int v3714; // r9d
  unsigned __int64 v3715; // rax
  unsigned __int128 v3716; // rax
  int v3717; // edi
  unsigned __int64 v3718; // rax
  unsigned __int64 v3719; // rbx
  int v3720; // edx
  __int64 v3721; // r14
  char v3722; // al
  _BYTE *i100; // rdi
  __int64 v3724; // r8
  unsigned __int64 v3725; // rbx
  __int64 v3726; // rax
  __int64 v3727; // r8
  unsigned __int64 v3728; // rcx
  int v3729; // r9d
  char v3730; // dl
  __int64 v3731; // rbx
  _QWORD *v3732; // rax
  int v3733; // r9d
  __int64 v3734; // rcx
  __int64 v3735; // rbx
  _QWORD *v3736; // rax
  __int64 v3737; // rdx
  unsigned __int64 v3738; // rdx
  _QWORD *v3739; // r9
  unsigned __int64 v3740; // r8
  unsigned __int64 v3741; // rax
  __int64 v3742; // rbx
  unsigned __int128 v3743; // rax
  __int64 v3744; // rdx
  _QWORD *v3745; // rax
  __int64 v3746; // rdx
  unsigned __int64 v3747; // rcx
  unsigned __int64 v3748; // r10
  char v3749; // r9
  unsigned __int64 *v3750; // rbx
  _DWORD *v3751; // rbx
  unsigned __int64 v3752; // rax
  unsigned __int128 v3753; // rax
  __int64 v3754; // rcx
  __int64 v3755; // rax
  _BYTE *v3756; // rbx
  __int64 v3757; // rsi
  int *v3758; // rcx
  int v3759; // ebx
  int *v3760; // rdx
  char v3761; // al
  __int64 v3762; // rbx
  __int64 v3763; // rdi
  int *v3764; // rcx
  int *v3765; // rdx
  int v3766; // r8d
  char v3767; // al
  unsigned __int64 v3768; // rax
  unsigned __int128 v3769; // rax
  unsigned __int64 v3770; // rsi
  unsigned __int128 v3771; // rax
  __int64 v3772; // r12
  __int64 v3773; // r13
  ULONG_PTR v3774; // rdi
  ULONG_PTR v3775; // r15
  struct _KPRCB *CurrentPrcb; // rdx
  char *v3777; // rsi
  __int64 v3778; // r14
  unsigned __int64 v3779; // r15
  _OWORD *v3780; // rdi
  _OWORD *v3781; // r11
  unsigned int v3782; // ebx
  _QWORD *i101; // rdx
  unsigned __int64 v3784; // rcx
  unsigned __int64 v3785; // rax
  __int64 v3786; // r10
  _QWORD *v3787; // rcx
  char *v3788; // rbx
  int v3789; // r8d
  unsigned __int64 v3790; // r9
  signed __int64 v3791; // rbx
  struct _KEVENT *v3792; // rax
  _BYTE *v3793; // rax
  int v3794; // ecx
  __int64 v3795; // rdx
  unsigned __int64 v3796; // rdx
  ULONG_PTR v3797; // r9
  ULONG_PTR v3798; // r9
  int v3799; // ecx
  int v3800; // ecx
  int v3801; // ecx
  int v3802; // ecx
  int v3803; // ecx
  volatile signed __int32 *v3804; // rax
  signed __int32 v3805[8]; // [rsp+0h] [rbp-2298h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-2278h]
  ULONG_PTR HalExtensionList; // [rsp+50h] [rbp-2248h]
  void *Src; // [rsp+58h] [rbp-2240h]
  unsigned __int64 v3809; // [rsp+60h] [rbp-2238h]
  __int64 v3810; // [rsp+68h] [rbp-2230h]
  __int64 v3811; // [rsp+70h] [rbp-2228h]
  unsigned __int64 v3812; // [rsp+78h] [rbp-2220h]
  ULONG_PTR v3813; // [rsp+80h] [rbp-2218h]
  ULONG_PTR v3814; // [rsp+88h] [rbp-2210h]
  int v3815; // [rsp+90h] [rbp-2208h]
  __int64 v3816; // [rsp+98h] [rbp-2200h]
  ULONG_PTR v3817; // [rsp+A0h] [rbp-21F8h]
  ULONG_PTR v3818; // [rsp+A8h] [rbp-21F0h]
  __int64 v3819; // [rsp+B0h] [rbp-21E8h]
  ULONG_PTR v3820; // [rsp+B8h] [rbp-21E0h]
  BOOLEAN QuotaCharged[4]; // [rsp+C0h] [rbp-21D8h] BYREF
  int v3822; // [rsp+C4h] [rbp-21D4h]
  int v3823; // [rsp+C8h] [rbp-21D0h]
  _QWORD *v3824; // [rsp+D0h] [rbp-21C8h]
  ULONG_PTR v3825; // [rsp+D8h] [rbp-21C0h]
  unsigned int v3826; // [rsp+E0h] [rbp-21B8h]
  unsigned __int64 v3827; // [rsp+E8h] [rbp-21B0h]
  PKTIMER Timer; // [rsp+F0h] [rbp-21A8h]
  int v3829; // [rsp+F8h] [rbp-21A0h]
  int v3830; // [rsp+FCh] [rbp-219Ch]
  int v3831; // [rsp+100h] [rbp-2198h]
  int v3832; // [rsp+104h] [rbp-2194h]
  int v3833; // [rsp+108h] [rbp-2190h]
  int v3834; // [rsp+10Ch] [rbp-218Ch]
  int v3835; // [rsp+110h] [rbp-2188h]
  int v3836; // [rsp+114h] [rbp-2184h]
  int v3837; // [rsp+118h] [rbp-2180h]
  int v3838; // [rsp+11Ch] [rbp-217Ch]
  int v3839; // [rsp+120h] [rbp-2178h]
  int v3840; // [rsp+124h] [rbp-2174h]
  int v3841; // [rsp+128h] [rbp-2170h]
  int v3842; // [rsp+12Ch] [rbp-216Ch]
  int v3843; // [rsp+130h] [rbp-2168h]
  int v3844; // [rsp+134h] [rbp-2164h]
  int v3845; // [rsp+138h] [rbp-2160h]
  int v3846; // [rsp+13Ch] [rbp-215Ch]
  int v3847; // [rsp+140h] [rbp-2158h]
  int v3848; // [rsp+144h] [rbp-2154h]
  int v3849; // [rsp+148h] [rbp-2150h]
  int v3850; // [rsp+14Ch] [rbp-214Ch]
  int v3851; // [rsp+150h] [rbp-2148h]
  int v3852; // [rsp+154h] [rbp-2144h]
  int v3853; // [rsp+158h] [rbp-2140h]
  int v3854; // [rsp+15Ch] [rbp-213Ch]
  unsigned int Size; // [rsp+160h] [rbp-2138h]
  int Size_4; // [rsp+164h] [rbp-2134h]
  _DWORD v3857[33]; // [rsp+168h] [rbp-2130h] BYREF
  _DWORD v3858[23]; // [rsp+1ECh] [rbp-20ACh] BYREF
  _DWORD v3859[33]; // [rsp+248h] [rbp-2050h] BYREF
  _DWORD v3860[47]; // [rsp+2CCh] [rbp-1FCCh] BYREF
  _DWORD v3861[4]; // [rsp+388h] [rbp-1F10h] BYREF
  ULONG_PTR v3862; // [rsp+398h] [rbp-1F00h]
  _DWORD v3863[3]; // [rsp+3A0h] [rbp-1EF8h] BYREF
  unsigned int v3864; // [rsp+3ACh] [rbp-1EECh] BYREF
  unsigned int v3865; // [rsp+3B0h] [rbp-1EE8h] BYREF
  ULONG CompressFragmentWorkSpaceSize; // [rsp+3B4h] [rbp-1EE4h] BYREF
  int v3867; // [rsp+3B8h] [rbp-1EE0h] BYREF
  unsigned int v3868; // [rsp+3BCh] [rbp-1EDCh] BYREF
  int v3869; // [rsp+3C0h] [rbp-1ED8h] BYREF
  int v3870; // [rsp+3C4h] [rbp-1ED4h] BYREF
  _DWORD v3871[22]; // [rsp+3C8h] [rbp-1ED0h] BYREF
  int v3872; // [rsp+420h] [rbp-1E78h] BYREF
  int v3873; // [rsp+424h] [rbp-1E74h] BYREF
  _DWORD v3874[10]; // [rsp+428h] [rbp-1E70h] BYREF
  char v3875[4]; // [rsp+450h] [rbp-1E48h] BYREF
  ULONG CompressBufferWorkSpaceSize[40]; // [rsp+454h] [rbp-1E44h] BYREF
  _DWORD v3877[24]; // [rsp+4F4h] [rbp-1DA4h] BYREF
  int v3878; // [rsp+554h] [rbp-1D44h] BYREF
  _BYTE v3879[4]; // [rsp+558h] [rbp-1D40h] BYREF
  int v3880; // [rsp+55Ch] [rbp-1D3Ch]
  int v3881; // [rsp+560h] [rbp-1D38h]
  int v3882; // [rsp+564h] [rbp-1D34h]
  int v3883; // [rsp+568h] [rbp-1D30h]
  int v3884; // [rsp+56Ch] [rbp-1D2Ch]
  ULONG_PTR v3885; // [rsp+570h] [rbp-1D28h]
  int v3886; // [rsp+578h] [rbp-1D20h]
  int v3887; // [rsp+57Ch] [rbp-1D1Ch]
  int v3888; // [rsp+580h] [rbp-1D18h]
  int v3889; // [rsp+584h] [rbp-1D14h]
  int v3890; // [rsp+588h] [rbp-1D10h]
  int v3891; // [rsp+58Ch] [rbp-1D0Ch]
  int v3892; // [rsp+590h] [rbp-1D08h]
  _QWORD v3893[4]; // [rsp+598h] [rbp-1D00h] BYREF
  _QWORD v3894[2]; // [rsp+5B8h] [rbp-1CE0h] BYREF
  __int64 v3895; // [rsp+5C8h] [rbp-1CD0h]
  __int64 v3896; // [rsp+5D0h] [rbp-1CC8h]
  __int64 v3897; // [rsp+5D8h] [rbp-1CC0h]
  __int64 v3898; // [rsp+5E0h] [rbp-1CB8h]
  __int64 v3899; // [rsp+5E8h] [rbp-1CB0h]
  __int64 v3900; // [rsp+5F0h] [rbp-1CA8h]
  __int64 v3901; // [rsp+5F8h] [rbp-1CA0h]
  __int64 v3902; // [rsp+600h] [rbp-1C98h]
  __int64 v3903; // [rsp+608h] [rbp-1C90h]
  __int64 v3904; // [rsp+610h] [rbp-1C88h]
  __int64 v3905; // [rsp+618h] [rbp-1C80h]
  __int64 v3906; // [rsp+620h] [rbp-1C78h]
  __int64 v3907; // [rsp+628h] [rbp-1C70h]
  unsigned int *v3908; // [rsp+630h] [rbp-1C68h] BYREF
  __int64 v3909; // [rsp+638h] [rbp-1C60h] BYREF
  ULONG_PTR BugCheckParameter2[2]; // [rsp+640h] [rbp-1C58h] BYREF
  __int64 v3911; // [rsp+650h] [rbp-1C48h]
  __int64 v3912; // [rsp+658h] [rbp-1C40h]
  __int64 v3913; // [rsp+660h] [rbp-1C38h]
  __int64 v3914; // [rsp+668h] [rbp-1C30h]
  __int64 v3915; // [rsp+670h] [rbp-1C28h]
  __int64 v3916; // [rsp+678h] [rbp-1C20h]
  __int64 v3917; // [rsp+680h] [rbp-1C18h]
  __int64 v3918; // [rsp+688h] [rbp-1C10h]
  __int64 v3919; // [rsp+690h] [rbp-1C08h]
  __int64 v3920; // [rsp+698h] [rbp-1C00h]
  __int64 v3921; // [rsp+6A0h] [rbp-1BF8h]
  __int64 v3922; // [rsp+6A8h] [rbp-1BF0h]
  __int64 v3923; // [rsp+6B0h] [rbp-1BE8h]
  __int64 v3924; // [rsp+6B8h] [rbp-1BE0h]
  __int64 v3925; // [rsp+6C0h] [rbp-1BD8h]
  __int64 v3926; // [rsp+6C8h] [rbp-1BD0h]
  __int64 v3927; // [rsp+6D0h] [rbp-1BC8h]
  __int64 v3928; // [rsp+6D8h] [rbp-1BC0h]
  __int64 v3929; // [rsp+6E0h] [rbp-1BB8h]
  __int64 v3930; // [rsp+6E8h] [rbp-1BB0h]
  __int64 v3931; // [rsp+6F0h] [rbp-1BA8h]
  __int64 v3932; // [rsp+6F8h] [rbp-1BA0h]
  __int64 v3933; // [rsp+700h] [rbp-1B98h]
  __int64 v3934; // [rsp+708h] [rbp-1B90h]
  __int64 v3935; // [rsp+710h] [rbp-1B88h]
  _QWORD v3936[3]; // [rsp+718h] [rbp-1B80h] BYREF
  __int64 v3937; // [rsp+730h] [rbp-1B68h]
  __int64 v3938; // [rsp+738h] [rbp-1B60h]
  __int64 v3939; // [rsp+740h] [rbp-1B58h]
  __int64 v3940; // [rsp+748h] [rbp-1B50h]
  __int64 v3941; // [rsp+750h] [rbp-1B48h]
  __int64 v3942; // [rsp+758h] [rbp-1B40h]
  __int64 v3943; // [rsp+760h] [rbp-1B38h]
  __int64 v3944; // [rsp+768h] [rbp-1B30h]
  __int64 v3945; // [rsp+770h] [rbp-1B28h]
  __int64 v3946; // [rsp+778h] [rbp-1B20h]
  __int64 v3947; // [rsp+780h] [rbp-1B18h]
  __int64 v3948; // [rsp+788h] [rbp-1B10h]
  __int64 v3949; // [rsp+790h] [rbp-1B08h]
  __int64 v3950; // [rsp+798h] [rbp-1B00h]
  _QWORD v3951[5]; // [rsp+7A0h] [rbp-1AF8h]
  __int64 v3952; // [rsp+7C8h] [rbp-1AD0h]
  __int64 v3953; // [rsp+7D0h] [rbp-1AC8h]
  __int64 v3954; // [rsp+7D8h] [rbp-1AC0h]
  __int64 v3955; // [rsp+7E0h] [rbp-1AB8h]
  __int64 v3956; // [rsp+7E8h] [rbp-1AB0h]
  __int64 v3957; // [rsp+7F0h] [rbp-1AA8h]
  __int64 v3958; // [rsp+7F8h] [rbp-1AA0h]
  __int64 v3959; // [rsp+800h] [rbp-1A98h]
  __int64 v3960; // [rsp+808h] [rbp-1A90h]
  __int64 v3961; // [rsp+810h] [rbp-1A88h]
  __int64 v3962; // [rsp+818h] [rbp-1A80h]
  __int64 v3963; // [rsp+820h] [rbp-1A78h]
  __int64 v3964; // [rsp+828h] [rbp-1A70h]
  __int64 v3965; // [rsp+830h] [rbp-1A68h]
  __int64 v3966; // [rsp+838h] [rbp-1A60h]
  __int64 v3967; // [rsp+840h] [rbp-1A58h]
  __int64 v3968; // [rsp+848h] [rbp-1A50h]
  __int64 v3969; // [rsp+850h] [rbp-1A48h]
  __int64 v3970; // [rsp+858h] [rbp-1A40h]
  __int64 v3971; // [rsp+860h] [rbp-1A38h]
  __int64 v3972; // [rsp+868h] [rbp-1A30h]
  __int64 v3973; // [rsp+870h] [rbp-1A28h]
  __int64 v3974; // [rsp+878h] [rbp-1A20h]
  __int64 v3975; // [rsp+880h] [rbp-1A18h]
  __int64 v3976; // [rsp+888h] [rbp-1A10h]
  __int64 v3977; // [rsp+890h] [rbp-1A08h]
  __int64 v3978; // [rsp+898h] [rbp-1A00h]
  __int64 v3979; // [rsp+8A0h] [rbp-19F8h]
  __int64 v3980; // [rsp+8A8h] [rbp-19F0h]
  __int64 v3981; // [rsp+8B0h] [rbp-19E8h]
  __int64 v3982; // [rsp+8B8h] [rbp-19E0h]
  __int64 v3983; // [rsp+8C0h] [rbp-19D8h]
  __int64 v3984; // [rsp+8C8h] [rbp-19D0h]
  __int64 v3985; // [rsp+8D0h] [rbp-19C8h]
  __int64 v3986; // [rsp+8D8h] [rbp-19C0h]
  __int64 v3987; // [rsp+8E0h] [rbp-19B8h]
  __int64 v3988; // [rsp+8E8h] [rbp-19B0h]
  __int64 v3989; // [rsp+8F0h] [rbp-19A8h]
  __int64 v3990; // [rsp+8F8h] [rbp-19A0h]
  __int64 v3991; // [rsp+900h] [rbp-1998h]
  __int64 v3992; // [rsp+908h] [rbp-1990h]
  __int64 v3993; // [rsp+910h] [rbp-1988h]
  __int64 v3994; // [rsp+918h] [rbp-1980h]
  __int64 v3995; // [rsp+920h] [rbp-1978h]
  __int64 v3996; // [rsp+928h] [rbp-1970h]
  __int64 v3997; // [rsp+930h] [rbp-1968h]
  __int64 v3998; // [rsp+938h] [rbp-1960h]
  __int64 v3999; // [rsp+940h] [rbp-1958h]
  __int64 v4000; // [rsp+948h] [rbp-1950h]
  __int64 v4001; // [rsp+950h] [rbp-1948h]
  __int64 v4002; // [rsp+958h] [rbp-1940h]
  __int64 v4003; // [rsp+960h] [rbp-1938h]
  __int64 v4004; // [rsp+968h] [rbp-1930h]
  __int64 v4005; // [rsp+970h] [rbp-1928h]
  __int64 v4006; // [rsp+978h] [rbp-1920h]
  _BYTE *v4007; // [rsp+980h] [rbp-1918h] BYREF
  ULONG_PTR v4008; // [rsp+988h] [rbp-1910h] BYREF
  _QWORD v4009[8]; // [rsp+990h] [rbp-1908h] BYREF
  ULONG_PTR v4010; // [rsp+9D0h] [rbp-18C8h] BYREF
  _BYTE *v4011; // [rsp+9D8h] [rbp-18C0h] BYREF
  _QWORD v4012[2]; // [rsp+9E0h] [rbp-18B8h] BYREF
  __int64 v4013; // [rsp+9F0h] [rbp-18A8h]
  int v4014; // [rsp+9F8h] [rbp-18A0h] BYREF
  __int64 v4015; // [rsp+A00h] [rbp-1898h]
  __int64 v4016; // [rsp+A08h] [rbp-1890h]
  __int64 v4017; // [rsp+A10h] [rbp-1888h]
  __int64 v4018; // [rsp+A18h] [rbp-1880h]
  __int64 v4019; // [rsp+A20h] [rbp-1878h]
  __int64 v4020; // [rsp+A28h] [rbp-1870h]
  __int64 v4021; // [rsp+A30h] [rbp-1868h]
  __int64 v4022; // [rsp+A48h] [rbp-1850h]
  __int64 v4023; // [rsp+A50h] [rbp-1848h]
  __int64 v4024; // [rsp+A58h] [rbp-1840h]
  _BYTE *v4025; // [rsp+A60h] [rbp-1838h] BYREF
  int v4026; // [rsp+A68h] [rbp-1830h] BYREF
  __int64 v4027; // [rsp+A70h] [rbp-1828h]
  __int64 v4028; // [rsp+A78h] [rbp-1820h]
  __int64 v4029; // [rsp+A80h] [rbp-1818h]
  __int64 v4030; // [rsp+A98h] [rbp-1800h]
  __int64 v4031; // [rsp+AA0h] [rbp-17F8h]
  __int64 v4032; // [rsp+AA8h] [rbp-17F0h]
  _BYTE *v4033; // [rsp+AB0h] [rbp-17E8h] BYREF
  int v4034; // [rsp+AB8h] [rbp-17E0h] BYREF
  __int64 v4035; // [rsp+AC0h] [rbp-17D8h]
  __int64 v4036; // [rsp+AC8h] [rbp-17D0h]
  __int64 v4037; // [rsp+AD0h] [rbp-17C8h]
  __int64 v4038; // [rsp+AE8h] [rbp-17B0h]
  __int64 v4039; // [rsp+AF0h] [rbp-17A8h]
  __int64 v4040; // [rsp+AF8h] [rbp-17A0h]
  __int64 v4041; // [rsp+B00h] [rbp-1798h]
  __int64 v4042; // [rsp+B08h] [rbp-1790h]
  __int64 v4043; // [rsp+B10h] [rbp-1788h]
  _BYTE v4044[24]; // [rsp+B18h] [rbp-1780h] BYREF
  __int64 v4045; // [rsp+B30h] [rbp-1768h]
  __int64 v4046; // [rsp+B40h] [rbp-1758h]
  __int64 v4047; // [rsp+B50h] [rbp-1748h]
  __int64 v4048; // [rsp+B58h] [rbp-1740h]
  __int64 v4049; // [rsp+B68h] [rbp-1730h]
  __int64 v4050; // [rsp+B80h] [rbp-1718h]
  __int64 v4051; // [rsp+B90h] [rbp-1708h]
  __int64 v4052; // [rsp+BA0h] [rbp-16F8h]
  __int64 v4053; // [rsp+BA8h] [rbp-16F0h]
  __int64 v4054; // [rsp+BB0h] [rbp-16E8h]
  __int64 v4055; // [rsp+BB8h] [rbp-16E0h]
  __int64 v4056; // [rsp+BC0h] [rbp-16D8h]
  _DWORD *v4057; // [rsp+BC8h] [rbp-16D0h] BYREF
  _QWORD v4058[2]; // [rsp+BD0h] [rbp-16C8h] BYREF
  __int64 v4059; // [rsp+BE0h] [rbp-16B8h]
  __int64 v4060; // [rsp+BE8h] [rbp-16B0h]
  __int64 v4061; // [rsp+BF0h] [rbp-16A8h]
  __int64 v4062; // [rsp+BF8h] [rbp-16A0h]
  __int64 v4063; // [rsp+C00h] [rbp-1698h]
  __int64 v4064; // [rsp+C08h] [rbp-1690h]
  __int64 v4065; // [rsp+C10h] [rbp-1688h]
  __int64 v4066; // [rsp+C18h] [rbp-1680h]
  ULONG_PTR v4067; // [rsp+C20h] [rbp-1678h]
  ULONG_PTR v4068; // [rsp+C28h] [rbp-1670h]
  __int64 v4069; // [rsp+C30h] [rbp-1668h]
  __int64 v4070; // [rsp+C60h] [rbp-1638h]
  __int64 v4071; // [rsp+C68h] [rbp-1630h]
  __int64 v4072; // [rsp+C70h] [rbp-1628h]
  __int64 v4073; // [rsp+C80h] [rbp-1618h]
  __int64 v4074; // [rsp+C98h] [rbp-1600h]
  __int64 v4075; // [rsp+CA0h] [rbp-15F8h]
  __int64 v4076; // [rsp+CA8h] [rbp-15F0h]
  __int64 v4077; // [rsp+CB0h] [rbp-15E8h]
  unsigned int *v4078; // [rsp+CB8h] [rbp-15E0h] BYREF
  __int64 v4079; // [rsp+CC0h] [rbp-15D8h]
  __int64 v4080; // [rsp+CC8h] [rbp-15D0h]
  __int64 v4081; // [rsp+CD0h] [rbp-15C8h]
  __int64 v4082; // [rsp+CD8h] [rbp-15C0h]
  __int64 v4083; // [rsp+CE0h] [rbp-15B8h]
  __int64 v4084; // [rsp+CE8h] [rbp-15B0h]
  __int64 v4085; // [rsp+CF0h] [rbp-15A8h]
  __int64 v4086; // [rsp+CF8h] [rbp-15A0h]
  __int64 v4087; // [rsp+D00h] [rbp-1598h]
  __int64 v4088; // [rsp+D08h] [rbp-1590h]
  __int64 v4089; // [rsp+D10h] [rbp-1588h]
  __int64 v4090; // [rsp+D18h] [rbp-1580h]
  __int64 v4091; // [rsp+D20h] [rbp-1578h]
  __int64 v4092; // [rsp+D28h] [rbp-1570h]
  __int64 v4093; // [rsp+D30h] [rbp-1568h]
  __int64 v4094; // [rsp+D38h] [rbp-1560h]
  __int64 v4095; // [rsp+D40h] [rbp-1558h]
  __int64 v4096; // [rsp+D48h] [rbp-1550h]
  __int64 v4097; // [rsp+D50h] [rbp-1548h]
  __int64 v4098; // [rsp+D58h] [rbp-1540h]
  __int64 v4099; // [rsp+D60h] [rbp-1538h]
  __int64 v4100; // [rsp+D68h] [rbp-1530h]
  __int64 v4101; // [rsp+D70h] [rbp-1528h]
  __int64 v4102; // [rsp+D78h] [rbp-1520h]
  __int64 v4103; // [rsp+D80h] [rbp-1518h]
  __int64 v4104; // [rsp+D88h] [rbp-1510h]
  signed __int64 v4105[6]; // [rsp+D90h] [rbp-1508h] BYREF
  signed __int64 v4106[3]; // [rsp+DC0h] [rbp-14D8h] BYREF
  __int64 v4107; // [rsp+DD8h] [rbp-14C0h]
  __int64 v4108; // [rsp+DE0h] [rbp-14B8h]
  __int64 v4109; // [rsp+DE8h] [rbp-14B0h]
  __int64 v4110; // [rsp+DF0h] [rbp-14A8h]
  __int64 v4111; // [rsp+DF8h] [rbp-14A0h]
  _QWORD v4112[2]; // [rsp+E00h] [rbp-1498h] BYREF
  char v4113[8]; // [rsp+E10h] [rbp-1488h] BYREF
  __int64 v4114; // [rsp+E18h] [rbp-1480h]
  __int64 v4115; // [rsp+E20h] [rbp-1478h]
  __int64 v4116; // [rsp+E28h] [rbp-1470h]
  __int64 v4117; // [rsp+E30h] [rbp-1468h]
  __int64 v4118; // [rsp+E38h] [rbp-1460h]
  __int64 v4119; // [rsp+E40h] [rbp-1458h]
  __int64 v4120; // [rsp+E48h] [rbp-1450h]
  __int64 v4121; // [rsp+E50h] [rbp-1448h]
  __int64 v4122; // [rsp+E58h] [rbp-1440h]
  char v4123; // [rsp+E60h] [rbp-1438h] BYREF
  char v4124[16]; // [rsp+E68h] [rbp-1430h] BYREF
  __int16 v4125; // [rsp+E78h] [rbp-1420h] BYREF
  _QWORD *v4126; // [rsp+E7Ah] [rbp-141Eh]
  __int16 v4127; // [rsp+E88h] [rbp-1410h] BYREF
  _QWORD *v4128; // [rsp+E8Ah] [rbp-140Eh]
  char v4129[16]; // [rsp+E98h] [rbp-1400h] BYREF
  __int64 v4130; // [rsp+EA8h] [rbp-13F0h]
  int v4131; // [rsp+EB0h] [rbp-13E8h] BYREF
  __int64 v4132; // [rsp+EB8h] [rbp-13E0h]
  int v4133; // [rsp+EC0h] [rbp-13D8h] BYREF
  __int64 v4134; // [rsp+EC8h] [rbp-13D0h]
  int v4135; // [rsp+ED0h] [rbp-13C8h] BYREF
  __int64 v4136; // [rsp+ED8h] [rbp-13C0h]
  int v4137; // [rsp+EE0h] [rbp-13B8h] BYREF
  __int64 v4138; // [rsp+EE8h] [rbp-13B0h]
  _DWORD v4139[6]; // [rsp+EF0h] [rbp-13A8h] BYREF
  int v4140; // [rsp+F08h] [rbp-1390h]
  int v4141; // [rsp+F0Ch] [rbp-138Ch]
  int v4142; // [rsp+F10h] [rbp-1388h]
  int v4143; // [rsp+F14h] [rbp-1384h]
  _DWORD v4144[4]; // [rsp+F18h] [rbp-1380h] BYREF
  __int64 v4145; // [rsp+F28h] [rbp-1370h] BYREF
  unsigned __int64 v4146; // [rsp+F30h] [rbp-1368h]
  _DWORD v4147[4]; // [rsp+F38h] [rbp-1360h] BYREF
  int v4148; // [rsp+F48h] [rbp-1350h]
  unsigned __int64 v4149; // [rsp+F4Ch] [rbp-134Ch]
  int v4150; // [rsp+F54h] [rbp-1344h]
  int v4151; // [rsp+F58h] [rbp-1340h]
  int v4152; // [rsp+F5Ch] [rbp-133Ch]
  int v4153; // [rsp+F60h] [rbp-1338h]
  int v4154; // [rsp+F64h] [rbp-1334h]
  _BYTE v4155[16]; // [rsp+F68h] [rbp-1330h] BYREF
  _BYTE v4156[16]; // [rsp+F78h] [rbp-1320h] BYREF
  _BYTE v4157[16]; // [rsp+F88h] [rbp-1310h] BYREF
  _BYTE v4158[16]; // [rsp+F98h] [rbp-1300h] BYREF
  _BYTE v4159[16]; // [rsp+FA8h] [rbp-12F0h] BYREF
  _BYTE v4160[16]; // [rsp+FB8h] [rbp-12E0h] BYREF
  _BYTE v4161[16]; // [rsp+FC8h] [rbp-12D0h] BYREF
  _BYTE v4162[16]; // [rsp+FD8h] [rbp-12C0h] BYREF
  _BYTE v4163[16]; // [rsp+FE8h] [rbp-12B0h] BYREF
  _BYTE v4164[16]; // [rsp+FF8h] [rbp-12A0h] BYREF
  _BYTE v4165[16]; // [rsp+1008h] [rbp-1290h] BYREF
  _BYTE v4166[16]; // [rsp+1018h] [rbp-1280h] BYREF
  _BYTE v4167[16]; // [rsp+1028h] [rbp-1270h] BYREF
  _BYTE v4168[16]; // [rsp+1038h] [rbp-1260h] BYREF
  unsigned __int64 v4169; // [rsp+1048h] [rbp-1250h] BYREF
  ULONG_PTR v4170; // [rsp+1050h] [rbp-1248h]
  unsigned int v4171; // [rsp+1058h] [rbp-1240h]
  char v4172[8]; // [rsp+1060h] [rbp-1238h] BYREF
  _QWORD *v4173; // [rsp+1068h] [rbp-1230h]
  int v4174; // [rsp+1074h] [rbp-1224h]
  char v4175[8]; // [rsp+1078h] [rbp-1220h] BYREF
  ULONG_PTR v4176; // [rsp+1080h] [rbp-1218h]
  int v4177; // [rsp+108Ch] [rbp-120Ch]
  _DWORD v4178[6]; // [rsp+1090h] [rbp-1208h] BYREF
  char v4179[8]; // [rsp+10A8h] [rbp-11F0h] BYREF
  ULONG_PTR v4180; // [rsp+10B0h] [rbp-11E8h]
  int v4181; // [rsp+10BCh] [rbp-11DCh]
  _DWORD v4182[6]; // [rsp+10C0h] [rbp-11D8h] BYREF
  char v4183[8]; // [rsp+10D8h] [rbp-11C0h] BYREF
  ULONG_PTR v4184; // [rsp+10E0h] [rbp-11B8h]
  int v4185; // [rsp+10ECh] [rbp-11ACh]
  _DWORD v4186[6]; // [rsp+10F0h] [rbp-11A8h] BYREF
  __int64 v4187; // [rsp+1108h] [rbp-1190h]
  PVOID P[2]; // [rsp+1110h] [rbp-1188h]
  __int64 v4189; // [rsp+1120h] [rbp-1178h]
  _QWORD v4190[4]; // [rsp+1128h] [rbp-1170h] BYREF
  PVOID v4191[5]; // [rsp+1148h] [rbp-1150h] BYREF
  PVOID v4192[2]; // [rsp+1170h] [rbp-1128h]
  __int64 v4193; // [rsp+1180h] [rbp-1118h]
  _QWORD v4194[4]; // [rsp+1188h] [rbp-1110h] BYREF
  _QWORD v4195[4]; // [rsp+11A8h] [rbp-10F0h] BYREF
  _QWORD v4196[4]; // [rsp+11C8h] [rbp-10D0h] BYREF
  PVOID *v4197; // [rsp+11E8h] [rbp-10B0h] BYREF
  __int64 (__fastcall **v4198)(); // [rsp+11F0h] [rbp-10A8h]
  _BYTE v4199[32]; // [rsp+1208h] [rbp-1090h] BYREF
  _BYTE v4200[32]; // [rsp+1228h] [rbp-1070h] BYREF
  int v4201; // [rsp+1248h] [rbp-1050h] BYREF
  ULONG_PTR v4202; // [rsp+1250h] [rbp-1048h]
  ULONG_PTR v4203; // [rsp+1258h] [rbp-1040h]
  __int64 v4204; // [rsp+1260h] [rbp-1038h]
  ULONG_PTR v4205; // [rsp+1268h] [rbp-1030h]
  ULONG_PTR v4206; // [rsp+1270h] [rbp-1028h] BYREF
  __int64 v4207; // [rsp+1278h] [rbp-1020h]
  __int64 v4208; // [rsp+1280h] [rbp-1018h]
  __int64 v4209; // [rsp+1288h] [rbp-1010h]
  __int64 v4210; // [rsp+1290h] [rbp-1008h]
  __int64 v4211; // [rsp+1298h] [rbp-1000h]
  ULONG_PTR v4212; // [rsp+12A0h] [rbp-FF8h] BYREF
  __int64 v4213; // [rsp+12A8h] [rbp-FF0h]
  __int64 v4214; // [rsp+12B0h] [rbp-FE8h]
  __int64 v4215; // [rsp+12B8h] [rbp-FE0h]
  __int64 v4216; // [rsp+12C0h] [rbp-FD8h]
  __int64 v4217; // [rsp+12C8h] [rbp-FD0h]
  ULONG_PTR v4218; // [rsp+12D0h] [rbp-FC8h] BYREF
  __int64 v4219; // [rsp+12D8h] [rbp-FC0h]
  ULONG_PTR v4220; // [rsp+12E0h] [rbp-FB8h]
  __int64 v4221; // [rsp+12E8h] [rbp-FB0h]
  __int64 v4222; // [rsp+12F0h] [rbp-FA8h]
  __int64 v4223; // [rsp+12F8h] [rbp-FA0h]
  __int64 v4224; // [rsp+1300h] [rbp-F98h]
  __int64 v4225; // [rsp+1308h] [rbp-F90h]
  __int64 v4226; // [rsp+1310h] [rbp-F88h]
  ULONG_PTR BugCheckParameter3; // [rsp+1318h] [rbp-F80h] BYREF
  __int64 v4228; // [rsp+1320h] [rbp-F78h]
  __int64 *v4229; // [rsp+1328h] [rbp-F70h]
  ULONG_PTR v4230; // [rsp+1330h] [rbp-F68h]
  unsigned __int64 v4231; // [rsp+1338h] [rbp-F60h]
  unsigned int v4232; // [rsp+1340h] [rbp-F58h]
  int v4233; // [rsp+1344h] [rbp-F54h]
  __int64 v4234; // [rsp+1350h] [rbp-F48h]
  __int64 v4235; // [rsp+1358h] [rbp-F40h]
  __int64 v4236; // [rsp+1360h] [rbp-F38h]
  ULONG_PTR v4237; // [rsp+1368h] [rbp-F30h] BYREF
  __int64 v4238; // [rsp+1370h] [rbp-F28h]
  __int64 *v4239; // [rsp+1378h] [rbp-F20h]
  ULONG_PTR v4240; // [rsp+1380h] [rbp-F18h]
  unsigned __int64 v4241; // [rsp+1388h] [rbp-F10h]
  unsigned int v4242; // [rsp+1390h] [rbp-F08h]
  int v4243; // [rsp+1394h] [rbp-F04h]
  __int64 v4244; // [rsp+13A8h] [rbp-EF0h] BYREF
  unsigned __int64 v4245; // [rsp+13B8h] [rbp-EE0h]
  __int64 v4246; // [rsp+13C0h] [rbp-ED8h]
  __int64 *v4247; // [rsp+13C8h] [rbp-ED0h]
  ULONG_PTR v4248; // [rsp+13F0h] [rbp-EA8h]
  __int64 v4249; // [rsp+13F8h] [rbp-EA0h]
  __int64 v4250; // [rsp+1400h] [rbp-E98h]
  ULONG_PTR v4251; // [rsp+1408h] [rbp-E90h] BYREF
  __int64 v4252; // [rsp+1410h] [rbp-E88h]
  __int64 *v4253; // [rsp+1418h] [rbp-E80h]
  ULONG_PTR v4254; // [rsp+1420h] [rbp-E78h]
  unsigned __int64 v4255; // [rsp+1428h] [rbp-E70h]
  unsigned int v4256; // [rsp+1430h] [rbp-E68h]
  int v4257; // [rsp+1434h] [rbp-E64h]
  __int64 (__fastcall *v4258)(); // [rsp+1440h] [rbp-E58h]
  __int64 v4259; // [rsp+1448h] [rbp-E50h]
  __int64 v4260; // [rsp+1450h] [rbp-E48h]
  ULONG_PTR v4261; // [rsp+1458h] [rbp-E40h] BYREF
  __int64 v4262; // [rsp+1460h] [rbp-E38h]
  __int64 *v4263; // [rsp+1468h] [rbp-E30h]
  ULONG_PTR v4264; // [rsp+1470h] [rbp-E28h]
  unsigned __int64 v4265; // [rsp+1478h] [rbp-E20h]
  unsigned int v4266; // [rsp+1480h] [rbp-E18h]
  int v4267; // [rsp+1484h] [rbp-E14h]
  _QWORD v4268[17]; // [rsp+1490h] [rbp-E08h] BYREF
  char v4269; // [rsp+1518h] [rbp-D80h] BYREF
  _QWORD v4270[3]; // [rsp+1520h] [rbp-D78h] BYREF
  int v4271; // [rsp+1538h] [rbp-D60h]
  int v4272; // [rsp+1550h] [rbp-D48h]
  int v4273; // [rsp+1568h] [rbp-D30h]
  int v4274; // [rsp+1580h] [rbp-D18h]
  int v4275; // [rsp+1598h] [rbp-D00h]
  int v4276; // [rsp+15B0h] [rbp-CE8h]
  int v4277; // [rsp+15C8h] [rbp-CD0h]
  __int64 v4278; // [rsp+15D0h] [rbp-CC8h]
  int v4279; // [rsp+15E0h] [rbp-CB8h]
  int v4280; // [rsp+15F8h] [rbp-CA0h]
  ULONG_PTR v4281[6]; // [rsp+1620h] [rbp-C78h]
  __int128 v4282; // [rsp+1650h] [rbp-C48h]
  __int128 v4283; // [rsp+1660h] [rbp-C38h]
  __int128 v4284; // [rsp+1670h] [rbp-C28h]
  __int128 v4285; // [rsp+1680h] [rbp-C18h]
  __int128 v4286; // [rsp+1690h] [rbp-C08h]
  __int128 v4287; // [rsp+16A0h] [rbp-BF8h]
  __int128 v4288; // [rsp+16B0h] [rbp-BE8h]
  __int64 (__fastcall *v4289)(ULONG_PTR); // [rsp+16C0h] [rbp-BD8h]
  __int64 (__fastcall *v4290)(int, int, int, int, __int64); // [rsp+16C8h] [rbp-BD0h]
  __int128 v4291; // [rsp+16D0h] [rbp-BC8h]
  void *v4292; // [rsp+16E0h] [rbp-BB8h]
  KIRQL (__stdcall *v4293)(PKSPIN_LOCK); // [rsp+16E8h] [rbp-BB0h]
  void (__stdcall *v4294)(PKSPIN_LOCK, KIRQL); // [rsp+16F0h] [rbp-BA8h]
  __int64 (__fastcall *v4295)(); // [rsp+16F8h] [rbp-BA0h]
  void (__stdcall *v4296)(PGROUP_AFFINITY, PGROUP_AFFINITY); // [rsp+1700h] [rbp-B98h]
  void (__stdcall *v4297)(PGROUP_AFFINITY); // [rsp+1708h] [rbp-B90h]
  __int64 (__fastcall *v4298)(); // [rsp+1710h] [rbp-B88h]
  void (__fastcall __noreturn *v4299)(); // [rsp+1718h] [rbp-B80h]
  __int64 (__fastcall *v4300)(); // [rsp+1720h] [rbp-B78h]
  void *(__cdecl *v4301)(void *, const void *, size_t); // [rsp+1728h] [rbp-B70h]
  __int64 *v4302; // [rsp+1730h] [rbp-B68h]
  __int64 (__fastcall *v4303)(int, int, int, int, __int64); // [rsp+1738h] [rbp-B60h]
  NTSTATUS (__stdcall *v4304)(KPROCESSOR_MODE, BOOLEAN, PLARGE_INTEGER); // [rsp+1740h] [rbp-B58h]
  NTSTATUS (__stdcall *v4305)(PVOID, KWAIT_REASON, KPROCESSOR_MODE, BOOLEAN, PLARGE_INTEGER); // [rsp+1748h] [rbp-B50h]
  __int64 (__fastcall *v4306)(); // [rsp+1750h] [rbp-B48h]
  __int64 (__fastcall *v4307)(ULONG_PTR); // [rsp+1758h] [rbp-B40h]
  __int64 (__fastcall *v4308)(); // [rsp+1760h] [rbp-B38h]
  __int64 (__fastcall *v4309)(); // [rsp+1768h] [rbp-B30h]
  __int64 (__fastcall *v4310)(); // [rsp+1770h] [rbp-B28h]
  __int64 (__fastcall *v4311)(); // [rsp+1778h] [rbp-B20h]
  ULONG_PTR (__stdcall *v4312)(PKIPI_BROADCAST_WORKER, ULONG_PTR); // [rsp+1780h] [rbp-B18h]
  __int64 (__fastcall *v4313)(); // [rsp+1788h] [rbp-B10h]
  __int64 (__fastcall *v4314)(); // [rsp+1790h] [rbp-B08h]
  __int64 (__fastcall *v4315)(); // [rsp+1798h] [rbp-B00h]
  __int64 (__fastcall *v4316)(int, int, int, int, __int64); // [rsp+17A0h] [rbp-AF8h]
  __int64 (__fastcall *v4317)(); // [rsp+17A8h] [rbp-AF0h]
  __int64 (__fastcall *v4318)(); // [rsp+17B0h] [rbp-AE8h]
  _BYTE v4319[248]; // [rsp+17C0h] [rbp-AD8h] BYREF
  void (__fastcall *v4320)(ULONG_PTR); // [rsp+18B8h] [rbp-9E0h]
  uintptr_t Target; // [rsp+1918h] [rbp-980h]
  void (__fastcall *v4322)(__int64, unsigned __int64, _QWORD, unsigned __int64, unsigned __int64); // [rsp+1998h] [rbp-900h]
  _BYTE *v4323; // [rsp+19D8h] [rbp-8C0h]
  unsigned __int8 (__fastcall *v4324)(_BYTE *, _BYTE *, _QWORD, _QWORD); // [rsp+1A80h] [rbp-818h]
  void (__fastcall *v4325)(_QWORD, _QWORD, _QWORD); // [rsp+1B20h] [rbp-778h]
  __int64 v4326; // [rsp+1B30h] [rbp-768h]
  volatile signed __int32 *v4327; // [rsp+1D00h] [rbp-598h]
  volatile signed __int32 *v4328; // [rsp+1D10h] [rbp-588h]
  volatile signed __int32 *v4329; // [rsp+1D18h] [rbp-580h]
  __int64 v4330; // [rsp+1D48h] [rbp-550h]
  __int64 v4331; // [rsp+1D70h] [rbp-528h]
  __int64 v4332; // [rsp+1D88h] [rbp-510h]
  __int64 v4333; // [rsp+1DF8h] [rbp-4A0h]
  __int64 v4334; // [rsp+1E00h] [rbp-498h]
  __int64 v4335; // [rsp+1E08h] [rbp-490h]
  __int64 v4336; // [rsp+1E10h] [rbp-488h]
  __int64 v4337; // [rsp+1E40h] [rbp-458h]
  __int64 v4338; // [rsp+1E50h] [rbp-448h]
  __int64 v4339; // [rsp+1E58h] [rbp-440h]
  __int64 v4340; // [rsp+1E60h] [rbp-438h]
  __int64 v4341; // [rsp+1E68h] [rbp-430h]
  __int64 v4342; // [rsp+1E70h] [rbp-428h]
  __int64 v4343; // [rsp+1F48h] [rbp-350h]
  _BYTE *v4344; // [rsp+1F50h] [rbp-348h]
  __int64 v4345; // [rsp+1F80h] [rbp-318h]
  _DWORD *v4346; // [rsp+1F98h] [rbp-300h]
  int v4347; // [rsp+1FF8h] [rbp-2A0h]
  int v4348; // [rsp+20B8h] [rbp-1E0h] BYREF
  signed __int32 *v4349; // [rsp+20C0h] [rbp-1D8h]
  __int64 v4350; // [rsp+20C8h] [rbp-1D0h]
  __int64 v4351; // [rsp+20D0h] [rbp-1C8h]
  __int64 v4352; // [rsp+20D8h] [rbp-1C0h]
  char v4353; // [rsp+20E0h] [rbp-1B8h]
  int v4354; // [rsp+20E4h] [rbp-1B4h]
  int v4355; // [rsp+20E8h] [rbp-1B0h]
  unsigned int v4356; // [rsp+2150h] [rbp-148h]
  __int64 v4357; // [rsp+2158h] [rbp-140h]
  _BYTE *v4358; // [rsp+21A0h] [rbp-F8h]
  __int64 v4359; // [rsp+21A8h] [rbp-F0h]
  __int64 v4360; // [rsp+21B0h] [rbp-E8h]
  unsigned __int64 v4361; // [rsp+2258h] [rbp-40h]
  int v4362; // [rsp+2260h] [rbp-38h]
  unsigned int v4363; // [rsp+2264h] [rbp-34h]
  _OWORD v4364[3]; // [rsp+2268h] [rbp-30h] BYREF
  unsigned int v4366; // [rsp+22A8h] [rbp+10h]
  char v4367; // [rsp+22A8h] [rbp+10h]
  unsigned __int8 v4370; // [rsp+22B8h] [rbp+20h]
  __int16 v4371; // [rsp+22B8h] [rbp+20h]
  unsigned int v4372; // [rsp+22B8h] [rbp+20h]
  int v4373; // [rsp+22B8h] [rbp+20h]
  _BYTE *v4374; // [rsp+22B8h] [rbp+20h]
  __int64 v4375; // [rsp+22B8h] [rbp+20h]

  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  v3907 = 5LL;
  v6 = 41;
  if ( a4 )
  {
    if ( a2 > 5 || !_bittest(&v6, a2) )
      a2 = 0;
    v7 = a5 | 4;
  }
  else
  {
    if ( ((a2 - 3) & 0xFFFFFFFD) == 0 )
      a2 = 0;
    v7 = a5;
  }
  LODWORD(v3862) = v7;
  if ( a2 != 7 )
  {
    if ( (unsigned int)KiAreCodePatchesAllowed(0LL, 41LL) )
    {
      if ( (int)KiSwInterruptPresent() >= 0 )
      {
        if ( (unsigned int)sub_140B34828() )
        {
          LoadOptions = (const char *)KiGetLoadOptions();
          if ( !strstr(Str: LoadOptions, SubStr: "DISABLE_INTEGRITY_CHECKS") && !strstr(Str: LoadOptions, SubStr: "TESTSIGNING") )
            return 1;
        }
      }
    }
  }
  v10 = __29;
  v1163 = _bittest(&v10, a2);
  v11 = 0;
  if ( v1163 )
    a2 = 0;
  v4366 = a2;
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  if ( KiInitData != 12 )
  {
    v3863[1] = 317;
    KeBugCheckEx(__ROR4__BugCheckCode: (317, 160), BugCheckParameter1: 2uLL, BugCheckParameter2: 0LL, BugCheckParameter3: KiInitData, BugCheckParameter4: 0xCuLL);
  }
  v12 = &_ts_89;
  v13 = &_ps_0;
  if ( &_ts_89 == &_ts_z )
  {
    if ( &_ps_0 == &_ps_z )
      goto LABEL_30;
  }
  else
  {
    do
      v11 += *v12++;
    while ( v12 != &_ts_z );
  }
  v14 = 0;
  do
    v14 += *v13++;
  while ( v13 != &_ps_z );
  if ( v11 != v14 )
  {
    v3863[2] = 317;
    KeBugCheckEx(__ROR4__BugCheckCode: (317, 160), BugCheckParameter1: 0xCuLL, BugCheckParameter2: v11, BugCheckParameter3: v14, BugCheckParameter4: 0LL);
  }
LABEL_30:
  if ( !__28 )
  {
    v4169 = 0x140000000uLL;
    v15 = 0LL;
    if ( (int)LdrResFindResource(
                0x40000000,
                10,
                (int)L"FUNCTIONEXTENTLIST",
                0,
                (__int64)BugCheckParameter2,
                (__int64)&v3909,
                0LL,
                0LL,
                0) >= 0
      && (unsigned __int64)(v3909 - 8) <= 0xFFFFFFF7 )
    {
      v3864 = v3909;
      if ( RtlImageNtHeader(0x140000000uLL) )
      {
        LOBYTE(v16) = 1;
        v17 = RtlImageDirectoryEntryToData(0x140000000uLL, v16, 3LL, &v3865);
        if ( v17 )
        {
          Pool2 = 0LL;
          v19 = -1073741823;
          if ( *(_DWORD *)BugCheckParameter2[0] != 1163416643 )
          {
            if ( *(_DWORD *)BugCheckParameter2[0] != 1163416652 )
              goto LABEL_69;
            goto LABEL_93;
          }
          if ( RtlGetCompressionWorkSpaceSize(CompressionFormatAndEngine: 4u, CompressBufferWorkSpaceSize: CompressBufferWorkSpaceSize, CompressFragmentWorkSpaceSize: &CompressFragmentWorkSpaceSize) >= 0 )
          {
            v25 = *(unsigned int *)(BugCheckParameter2[0] + 4);
            if ( (unsigned int)v25 < 8 )
            {
              v3883 = 317;
              KeBugCheckEx(__ROR4__BugCheckCode: (317, 160), BugCheckParameter1: 0xEuLL, BugCheckParameter2: BugCheckParameter2[0], BugCheckParameter3: 0x140000000uLL, BugCheckParameter4: v3864);
            }
            v26 = __rdtsc();
            v27 = (__ROR8__(v26, 3) ^ v26) * (unsigned __int128)0x7010008004002001uLL;
            v4012[1] = *((_QWORD *)&v27 + 1);
            v28 = ((unsigned __int64)v27 ^ *((_QWORD *)&v27 + 1)) % 0xB;
            if ( (unsigned int)v28 > 5 )
            {
              v32 = v28 - 6;
              if ( v32 )
              {
                v33 = v32 - 1;
                if ( v33 )
                {
                  v34 = v33 - 1;
                  if ( v34 )
                  {
                    if ( v34 == 1 )
                    {
                      v3891 = -1333354875;
                      v31 = __ROR4__(-1333354868, 33);
                    }
                    else
                    {
                      v35 = __rdtsc();
                      v36 = __ROR8__(v35, 3);
                      v4013 = ((v36 ^ v35) * (unsigned __int128)0x7010008004002001uLL) >> 64;
                      v31 = ((((((((unsigned int)v4013 ^ (67117057 * ((unsigned int)v36 ^ (unsigned int)v35))) % 0x1A
                                + 97) << 8) | ((((unsigned int)v4013 ^ (67117057
                                                                      * ((unsigned int)v36 ^ (unsigned int)v35))) >> 5)
                                             % 0x1A
                                             + 65)) << 8) | ((((unsigned int)v4013 ^ (67117057
                                                                                    * ((unsigned int)v36 ^ (unsigned int)v35))) >> 10)
                                                           % 0x1A
                                                           + 97)) << 8) | ((((unsigned int)v4013 ^ (67117057
                                                                                                  * ((unsigned int)v36 ^ (unsigned int)v35))) >> 15)
                                                                         % 0x1A
                                                                         + 65);
                    }
                  }
                  else
                  {
                    v3829 = 1684422978;
                    v31 = __ROR4__(1684422978, 8);
                  }
                }
                else
                {
                  v3830 = -2100910376;
                  v31 = __ROL4__(-2100910376, 7);
                }
              }
              else
              {
                v3831 = 1314342514;
                v31 = __ROR4__(1314342516, 24);
              }
            }
            else if ( (_DWORD)v28 == 5 )
            {
              v3890 = 680282605;
              v31 = __ROR4__(680282605, 5);
            }
            else if ( (_DWORD)v28 )
            {
              v29 = v28 - 1;
              if ( v29 )
              {
                v30 = v29 - 1;
                if ( v30 )
                {
                  if ( v30 == 1 )
                  {
                    v3886 = -1474152136;
                    v31 = __ROR4__(-1474152133, 15);
                  }
                  else
                  {
                    v3884 = 1728537748;
                    v31 = __ROL4__(1728537748, 4);
                  }
                }
                else
                {
                  v3887 = -2051698419;
                  v31 = __ROR4__(-2051698419, 2);
                }
              }
              else
              {
                v3888 = -1297272415;
                v31 = __ROL4__(-1297272415, 1);
              }
            }
            else
            {
              v3889 = -795291432;
              v31 = __ROR4__(-795291432, 6);
            }
            Pool2 = (void *)ExAllocatePool2(66LL, CompressBufferWorkSpaceSize[0], v31);
            if ( !Pool2 )
            {
LABEL_68:
              v15 = 0LL;
LABEL_69:
              a2 = v4366;
              goto LABEL_40;
            }
            v37 = __rdtsc();
            v38 = (__ROR8__(v37, 3) ^ v37) * (unsigned __int128)0x7010008004002001uLL;
            v4015 = *((_QWORD *)&v38 + 1);
            v39 = ((unsigned __int64)v38 ^ *((_QWORD *)&v38 + 1)) % 0xB;
            if ( (unsigned int)v39 > 5 )
            {
              v43 = v39 - 6;
              if ( v43 )
              {
                v44 = v43 - 1;
                if ( v44 )
                {
                  v45 = v44 - 1;
                  if ( v45 )
                  {
                    if ( v45 == 1 )
                    {
                      v3838 = -1333354875;
                      v42 = __ROR4__(-1333354868, 33);
                    }
                    else
                    {
                      v46 = __rdtsc();
                      v47 = __ROR8__(v46, 3);
                      v4016 = ((v47 ^ v46) * (unsigned __int128)0x7010008004002001uLL) >> 64;
                      v42 = ((((((((unsigned int)v4016 ^ (67117057 * ((unsigned int)v47 ^ (unsigned int)v46))) % 0x1A
                                + 97) << 8) | ((((unsigned int)v4016 ^ (67117057
                                                                      * ((unsigned int)v47 ^ (unsigned int)v46))) >> 5)
                                             % 0x1A
                                             + 65)) << 8) | ((((unsigned int)v4016 ^ (67117057
                                                                                    * ((unsigned int)v47 ^ (unsigned int)v46))) >> 10)
                                                           % 0x1A
                                                           + 97)) << 8) | ((((unsigned int)v4016 ^ (67117057
                                                                                                  * ((unsigned int)v47 ^ (unsigned int)v46))) >> 15)
                                                                         % 0x1A
                                                                         + 65);
                    }
                  }
                  else
                  {
                    v3839 = 1684422978;
                    v42 = __ROR4__(1684422978, 8);
                  }
                }
                else
                {
                  v3840 = -2100910376;
                  v42 = __ROL4__(-2100910376, 7);
                }
              }
              else
              {
                v3841 = 1314342514;
                v42 = __ROR4__(1314342516, 24);
              }
            }
            else if ( (_DWORD)v39 == 5 )
            {
              v3837 = 680282605;
              v42 = __ROR4__(680282605, 5);
            }
            else if ( (_DWORD)v39 )
            {
              v40 = v39 - 1;
              if ( v40 )
              {
                v41 = v40 - 1;
                if ( v41 )
                {
                  if ( v41 == 1 )
                  {
                    v3833 = -1474152136;
                    v42 = __ROR4__(-1474152133, 15);
                  }
                  else
                  {
                    v3832 = 1728537748;
                    v42 = __ROL4__(1728537748, 4);
                  }
                }
                else
                {
                  v3834 = -2051698419;
                  v42 = __ROR4__(-2051698419, 2);
                }
              }
              else
              {
                v3835 = -1297272415;
                v42 = __ROL4__(-1297272415, 1);
              }
            }
            else
            {
              v3836 = -795291432;
              v42 = __ROR4__(-795291432, 6);
            }
            v15 = (unsigned int *)ExAllocatePool2(66LL, v25, v42);
            if ( !v15 )
            {
LABEL_124:
              ExFreePool(P: Pool2);
LABEL_125:
              if ( !v15 || v19 >= 0 )
                goto LABEL_69;
              ExFreePool(P: v15);
              goto LABEL_68;
            }
            v48 = RtlDecompressBufferEx(
                    4,
                    (int)v15,
                    v25,
                    LODWORD(BugCheckParameter2[0]) + 8,
                    v3864 - 8,
                    (__int64)&v3864,
                    (__int64)Pool2);
            if ( v48 < 0 )
            {
              v3842 = 317;
              KeBugCheckEx(__ROR4__BugCheckCode: (317, 160), BugCheckParameter1: 0xFuLL, BugCheckParameter2: BugCheckParameter2[0], BugCheckParameter3: 0x140000000uLL, BugCheckParameter4: v48);
            }
LABEL_93:
            if ( !v15 )
            {
              v49 = __rdtsc();
              v50 = (__ROR8__(v49, 3) ^ v49) * (unsigned __int128)0x7010008004002001uLL;
              v4017 = *((_QWORD *)&v50 + 1);
              v51 = ((unsigned __int64)v50 ^ *((_QWORD *)&v50 + 1)) % 0xB;
              if ( (unsigned int)v51 > 5 )
              {
                v55 = v51 - 6;
                if ( v55 )
                {
                  v56 = v55 - 1;
                  if ( v56 )
                  {
                    v57 = v56 - 1;
                    if ( v57 )
                    {
                      if ( v57 == 1 )
                      {
                        v3849 = -1333354875;
                        v54 = __ROR4__(-1333354868, 33);
                      }
                      else
                      {
                        v58 = __rdtsc();
                        v59 = __ROR8__(v58, 3);
                        v4018 = ((v59 ^ v58) * (unsigned __int128)0x7010008004002001uLL) >> 64;
                        v54 = ((((((((unsigned int)v4018 ^ (67117057 * ((unsigned int)v59 ^ (unsigned int)v58))) % 0x1A
                                  + 97) << 8) | ((((unsigned int)v4018 ^ (67117057
                                                                        * ((unsigned int)v59 ^ (unsigned int)v58))) >> 5)
                                               % 0x1A
                                               + 65)) << 8) | ((((unsigned int)v4018 ^ (67117057
                                                                                      * ((unsigned int)v59 ^ (unsigned int)v58))) >> 10)
                                                             % 0x1A
                                                             + 97)) << 8) | ((((unsigned int)v4018 ^ (67117057 * ((unsigned int)v59 ^ (unsigned int)v58))) >> 15)
                                                                           % 0x1A
                                                                           + 65);
                      }
                    }
                    else
                    {
                      v3850 = 1684422978;
                      v54 = __ROR4__(1684422978, 8);
                    }
                  }
                  else
                  {
                    v3851 = -2100910376;
                    v54 = __ROL4__(-2100910376, 7);
                  }
                }
                else
                {
                  v3852 = 1314342514;
                  v54 = __ROR4__(1314342516, 24);
                }
              }
              else if ( (_DWORD)v51 == 5 )
              {
                v3848 = 680282605;
                v54 = __ROR4__(680282605, 5);
              }
              else if ( (_DWORD)v51 )
              {
                v52 = v51 - 1;
                if ( v52 )
                {
                  v53 = v52 - 1;
                  if ( v53 )
                  {
                    if ( v53 == 1 )
                    {
                      v3844 = -1474152136;
                      v54 = __ROR4__(-1474152133, 15);
                    }
                    else
                    {
                      v3843 = 1728537748;
                      v54 = __ROL4__(1728537748, 4);
                    }
                  }
                  else
                  {
                    v3845 = -2051698419;
                    v54 = __ROR4__(-2051698419, 2);
                  }
                }
                else
                {
                  v3846 = -1297272415;
                  v54 = __ROL4__(-1297272415, 1);
                }
              }
              else
              {
                v3847 = -795291432;
                v54 = __ROR4__(-795291432, 6);
              }
              v60 = (unsigned int *)ExAllocatePool2(66LL, v3864 - 4LL, v54);
              v15 = v60;
              if ( !v60 )
                goto LABEL_123;
              memmove(v60, Src: (const void *)(BugCheckParameter2[0] + 4), Size: v3864 - 4LL);
            }
            v61 = 0;
            for ( i = v17 - 0x40000000; v61 < v3865; i += *(_DWORD *)(v17 + 4 * (v63 >> 2)) )
            {
              v63 = v61;
              v61 += 4;
            }
            if ( i != v15[1] )
            {
              v3796 = v15[1];
              v3853 = 317;
              KeBugCheckEx(__ROR4__BugCheckCode: (317, 160), BugCheckParameter1: 0x10uLL, BugCheckParameter2: (ULONG_PTR)v15, BugCheckParameter3: 0x140000000uLL, BugCheckParameter4: i ^ v3796);
            }
            v64 = *v15;
            if ( (unsigned int)v64 >= 0x1FFFFFFF || 8 * v64 > (unsigned __int64)v3864 )
            {
              BugCheckParameter4 = *v15;
              v3854 = 317;
              KeBugCheckEx(__ROR4__BugCheckCode: (317, 160), BugCheckParameter1: 0x11uLL, BugCheckParameter2: (ULONG_PTR)v15, BugCheckParameter3: 0x140000000uLL, BugCheckParameter4: BugCheckParameter4);
            }
            v4171 = v3864;
            v19 = 0;
LABEL_123:
            if ( !Pool2 )
              goto LABEL_125;
            goto LABEL_124;
          }
          a2 = v4366;
        }
      }
    }
LABEL_40:
    v4170 = (ULONG_PTR)v15;
    v20 = &v4169;
    v21 = 24;
    v22 = &__28;
    v23 = 3LL;
    do
    {
      v21 -= 8;
      *v22++ = *v20++;
      --v23;
    }
    while ( v23 );
    for ( ; v21; --v21 )
    {
      v24 = *(_BYTE *)v20;
      v20 = (unsigned __int64 *)((char *)v20 + 1);
      *(_BYTE *)v22 = v24;
      v22 = (__int64 *)((char *)v22 + 1);
    }
    goto LABEL_132;
  }
  v65 = 24;
  v66 = &__28;
  v67 = &v4169;
  v68 = 3LL;
  do
  {
    v65 -= 8;
    *v67++ = *v66++;
    --v68;
  }
  while ( v68 );
  for ( ; v65; --v65 )
  {
    v69 = *(_BYTE *)v66;
    v66 = (__int64 *)((char *)v66 + 1);
    *(_BYTE *)v67 = v69;
    v67 = (unsigned __int64 *)((char *)v67 + 1);
  }
LABEL_132:
  if ( !RtlPcToFileHeader(FsRtlUninitializeSmallMcb, v3893)
    || (v70 = RtlImageNtHeader(v3893[0])) == 0
    || (v71 = RtlSectionTableFromVirtualAddress(
                v70,
                v3893[0],
                (unsigned int)FsRtlUninitializeSmallMcb - LODWORD(v3893[0]))) == 0 )
  {
    v3882 = 317;
    KeBugCheckEx(__ROR4__BugCheckCode: (317, 160), BugCheckParameter1: 0x1CuLL, BugCheckParameter2: 0LL, BugCheckParameter3: 0LL, BugCheckParameter4: 0LL);
  }
  v72 = (void *)(v3893[0] + *(unsigned int *)(v71 + 12));
  v73 = *(unsigned int *)(v71 + 8);
  v3810 = (unsigned int)FsRtlUninitializeSmallMcb - (unsigned int)v72;
  Src = v72;
  Size = v73;
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  v3809 = (unsigned int)sub_140B121A0 - (unsigned int)v72;
  v74 = (unsigned int)RtlLookupFunctionEntryEx - (unsigned int)v72;
  v3811 = v74;
  v3817 = (unsigned int)sub_140B12CB0 - (unsigned int)v72;
  if ( (unsigned int)v74 > 0x7FFFFFFF )
  {
    Size_4 = 317;
    KeBugCheckEx(
      __ROR4__BugCheckCode: (317, 160),
      BugCheckParameter1: 9uLL,
      BugCheckParameter2: (unsigned int)v74,
      BugCheckParameter3: v73,
      BugCheckParameter4: (unsigned int)FsRtlUninitializeSmallMcb - (unsigned int)v72);
  }
  v75 = 0;
  if ( (unsigned int)MmStrongCodeGuaranteesEnforced() )
    v75 = sub_140B34784() != 0;
  if ( a2 == 7 )
  {
    v76 = 1;
    v3815 = 1;
LABEL_142:
    v77 = __rdtsc();
    v78 = (__ROR8__(v77, 3) ^ v77) * (unsigned __int128)0x7010008004002001uLL;
    v3893[2] = *((_QWORD *)&v78 + 1);
    if ( ((unsigned __int64)v78 ^ *((_QWORD *)&v78 + 1)) % 0xA >= 2 )
    {
      LODWORD(v3819) = 0;
    }
    else
    {
      v79 = __rdtsc();
      v80 = (__ROR8__(v79, 3) ^ v79) * (unsigned __int128)0x7010008004002001uLL;
      v3893[3] = *((_QWORD *)&v80 + 1);
      v3819 = (DWORD2(v80) ^ (unsigned int)v80) & 1;
    }
    goto LABEL_148;
  }
  v3815 = v75;
  v76 = v75;
  if ( a2 != 3 )
    goto LABEL_142;
  v81 = __rdtsc();
  v3815 = v75;
  v82 = (__ROR8__(v81, 3) ^ v81) * (unsigned __int128)0x7010008004002001uLL;
  v3893[1] = *((_QWORD *)&v82 + 1);
  if ( ((unsigned __int64)v82 ^ *((_QWORD *)&v82 + 1)) % 0xA >= 5 )
    goto LABEL_142;
  LODWORD(v3819) = 3;
  v3815 = v75;
LABEL_148:
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  if ( v76 )
  {
    LODWORD(v3819) = 0;
    if ( a2 - 3 <= 1 )
      a2 = 0;
    v4366 = a2;
  }
  qword_140C00250[0] = (__int64)off_140C019E8;
  *(_OWORD *)P = 0LL;
  v83 = 0;
  v4189 = 0LL;
  v84 = 0;
  v4187 = 0LL;
  v3822 = 0;
  v3823 = 0;
  do
  {
    v85 = qword_140C00250[v83];
    v86 = RtlLookupFunctionTable(v85, &BugCheckParameter3, v3857);
    v4225 = v86;
    if ( !v86 )
    {
      v94 = v4229;
      v88 = v4226;
      v95 = v3825;
      goto LABEL_172;
    }
    v4230 = 0LL;
    if ( v4169 != BugCheckParameter3 )
    {
      v88 = v4226;
      goto LABEL_170;
    }
    v87 = (_DWORD *)v4170;
    v4231 = 0LL;
    v4232 = v4171;
    v4233 = 0;
    v4230 = v4170;
    v88 = RtlLookupFunctionEntry(v85, &BugCheckParameter3, 0LL);
    v4226 = v88;
    if ( !v88 )
      goto LABEL_165;
    v89 = 0;
    v90 = *v87 - 1;
    if ( v90 < 0 )
      goto LABEL_165;
    while ( 1 )
    {
      v91 = (v90 + v89) >> 1;
      v92 = v88 - BugCheckParameter3 - v87[2 * v91 + 2];
      if ( v92 < 0 )
      {
        if ( !v91 )
          goto LABEL_165;
        v90 = v91 - 1;
        goto LABEL_164;
      }
      if ( v92 <= 0 )
        break;
      v89 = v91 + 1;
LABEL_164:
      if ( v90 < v89 )
        goto LABEL_165;
    }
    v93 = (_DWORD *)v4231;
    if ( v90 >= v89 )
      v93 = &v87[2 * ((v90 + v89) >> 1) + 2];
    v4231 = (unsigned __int64)v93;
LABEL_165:
    v86 = v4225;
LABEL_170:
    v94 = v3894;
    v95 = BugCheckParameter3;
    v4224 = v85;
    v3857[0] /= 0xCu;
    v4229 = v3894;
    v3825 = BugCheckParameter3;
    v4228 = v86 + 12LL * v3857[0];
LABEL_172:
    while ( v86 && v86 != v4228 )
    {
      if ( v4230 )
      {
        if ( !v88 )
          break;
        if ( v4231 )
        {
          v96 = *(_DWORD *)(v4231 + 4);
          if ( (v96 & 1) != 0 )
          {
            *v94 = BugCheckParameter3 + (v96 & 0xFFFFFFFE);
            v4231 = 0LL;
          }
          else
          {
            v97 = (unsigned int)(v4233 + v96);
            v98 = (unsigned int)v97;
            v99 = v97 + 4;
            if ( v99 < v98 || v99 > v4232 )
            {
              v3857[11] = 317;
              KeBugCheckEx(__ROR4__BugCheckCode: (317, 160), BugCheckParameter1: 0x12uLL, BugCheckParameter2: v4230, BugCheckParameter3: BugCheckParameter3, BugCheckParameter4: v98);
            }
            v100 = *(_DWORD *)(v4230 + v98);
            v4233 += 4;
            v4231 &= -(__int64)((v100 & 1) != 0);
            if ( (v100 & 1) != 0 )
              v100 &= ~1u;
            *v94 = BugCheckParameter3 + v100;
          }
        }
        else
        {
          *v94 = v88;
          v4226 = 0LL;
        }
      }
      else
      {
        while ( 1 )
        {
          v101 = v86;
          v102 = RtlpConvertFunctionEntry(v86, BugCheckParameter3, v94);
          v103 = RtlpSameFunction(v102, BugCheckParameter3, v4224);
          v86 = v4225 + 12;
          v4225 += 12LL;
          if ( v103 )
            break;
          if ( v86 == v4228 )
            goto LABEL_187;
        }
        *v4229 = v101;
      }
      v111 = *(unsigned int *)v3894[0];
      v112 = *(_DWORD *)(v3894[0] + 4LL) - v111;
      HIDWORD(v4189) += v112;
      v3826 = v84 + 1;
      v113 = (v95 + v111) & 0xFFFFFFFFFFFFF000uLL;
      v3827 = v95 + v111 + v112;
      do
      {
        v114 = v4190;
        v115 = 4LL;
        v116 = MmPteBase + ((v113 >> 9) & 0x7FFFFFFFF8LL);
        do
        {
          *v114++ = v116;
          v116 = MmPteBase + ((v116 >> 9) & 0x7FFFFFFFF8LL);
          --v115;
        }
        while ( v115 );
        v117 = 0;
        v118 = 3;
        do
        {
          v119 = v118;
          if ( v117 )
          {
            v4190[v118] = 0LL;
          }
          else
          {
            if ( !v118 )
              break;
            v117 = *(char *)v4190[v118] < 0;
          }
          --v118;
        }
        while ( v119 );
        v120 = v3823;
        LODWORD(v121) = 4;
        do
        {
          v121 = (unsigned int)(v121 - 1);
          v122 = v4190[v121];
          if ( !v122 )
            break;
          v123 = 0;
          if ( HIDWORD(P[1]) )
          {
            do
            {
              if ( v122 == *((_QWORD *)P[0] + v123) )
                break;
              ++v123;
            }
            while ( v123 < HIDWORD(P[1]) );
            v120 = v3823;
          }
          if ( v123 == HIDWORD(P[1]) )
          {
            if ( HIDWORD(P[1]) == v120 )
            {
              v120 = 2 * v120 + 64;
              v3823 = v120;
              v124 = __rdtsc();
              v125 = (__ROR8__(v124, 3) ^ v124) * (unsigned __int128)0x7010008004002001uLL;
              v3894[1] = *((_QWORD *)&v125 + 1);
              v126 = ((unsigned __int64)v125 ^ *((_QWORD *)&v125 + 1)) % 0xB;
              if ( (unsigned int)v126 > 5 )
              {
                v130 = v126 - 6;
                if ( v130 )
                {
                  v131 = v130 - 1;
                  if ( v131 )
                  {
                    v132 = v131 - 1;
                    if ( v132 )
                    {
                      if ( v132 == 1 )
                      {
                        v3857[7] = -1333354875;
                        v129 = __ROR4__(-1333354868, 33);
                      }
                      else
                      {
                        v133 = __rdtsc();
                        v134 = __ROR8__(v133, 3);
                        v3895 = ((v134 ^ v133) * (unsigned __int128)0x7010008004002001uLL) >> 64;
                        v129 = ((((((((unsigned int)v3895 ^ (67117057 * ((unsigned int)v134 ^ (unsigned int)v133)))
                                   % 0x1A
                                   + 97) << 8) | ((((unsigned int)v3895 ^ (67117057
                                                                         * ((unsigned int)v134 ^ (unsigned int)v133))) >> 5)
                                                % 0x1A
                                                + 65)) << 8) | ((((unsigned int)v3895 ^ (67117057
                                                                                       * ((unsigned int)v134 ^ (unsigned int)v133))) >> 10)
                                                              % 0x1A
                                                              + 97)) << 8) | ((((unsigned int)v3895 ^ (67117057 * ((unsigned int)v134 ^ (unsigned int)v133))) >> 15)
                                                                            % 0x1A
                                                                            + 65);
                      }
                    }
                    else
                    {
                      v3857[8] = 1684422978;
                      v129 = __ROR4__(1684422978, 8);
                    }
                  }
                  else
                  {
                    v3857[9] = -2100910376;
                    v129 = __ROL4__(-2100910376, 7);
                  }
                }
                else
                {
                  v3857[10] = 1314342514;
                  v129 = __ROR4__(1314342516, 24);
                }
              }
              else if ( (_DWORD)v126 == 5 )
              {
                v3857[6] = 680282605;
                v129 = __ROR4__(680282605, 5);
              }
              else if ( (_DWORD)v126 )
              {
                v127 = v126 - 1;
                if ( v127 )
                {
                  v128 = v127 - 1;
                  if ( v128 )
                  {
                    if ( v128 == 1 )
                    {
                      v3857[2] = -1474152136;
                      v129 = __ROR4__(-1474152133, 15);
                    }
                    else
                    {
                      v3857[1] = 1728537748;
                      v129 = __ROL4__(1728537748, 4);
                    }
                  }
                  else
                  {
                    v3857[3] = -2051698419;
                    v129 = __ROR4__(-2051698419, 2);
                  }
                }
                else
                {
                  v3857[4] = -1297272415;
                  v129 = __ROL4__(-1297272415, 1);
                }
              }
              else
              {
                v3857[5] = -795291432;
                v129 = __ROR4__(-795291432, 6);
              }
              v135 = (char *)ExAllocatePool2(64LL, 8LL * v120, v129);
              if ( !v135 )
                goto LABEL_5348;
              v136 = P[0];
              if ( P[0] )
              {
                v137 = v135;
                v138 = 8 * HIDWORD(P[1]);
                if ( (unsigned int)(8 * HIDWORD(P[1])) >= 8 )
                {
                  v139 = (unsigned __int64)v138 >> 3;
                  do
                  {
                    v138 -= 8;
                    *(_QWORD *)v137 = *v136++;
                    v137 += 8;
                    --v139;
                  }
                  while ( v139 );
                }
                if ( v138 )
                {
                  v140 = v137 - (char *)v136;
                  do
                  {
                    *((_BYTE *)v136 + v140) = *(_BYTE *)v136;
                    v136 = (_QWORD *)((char *)v136 + 1);
                    --v138;
                  }
                  while ( v138 );
                }
                ExFreePool(P: P[0]);
              }
              P[0] = v135;
              LODWORD(P[1]) = v120;
            }
            v141 = HIDWORD(P[1]);
            ++HIDWORD(P[1]);
            HIDWORD(v4189) += 16;
            *((_QWORD *)P[0] + v141) = v122;
          }
        }
        while ( (_DWORD)v121 );
        v113 += 4096LL;
      }
      while ( v113 < v3827 );
      v84 = v3826;
      v94 = v4229;
      v88 = v4226;
      v86 = v4225;
      v95 = v3825;
      LODWORD(v4189) = v3826;
    }
LABEL_187:
    v83 = v3822 + 1;
    v3822 = v83;
  }
  while ( v83 < 0xF );
  HIDWORD(v4189) += 8;
  v3826 = v84 + 1;
  v104 = (unsigned __int64)&off_140C019E8 & 0xFFFFFFFFFFFFF000uLL;
  do
  {
    v105 = v4191;
    v106 = MmPteBase + ((v104 >> 9) & 0x7FFFFFFFF8LL);
    v107 = 4LL;
    do
    {
      *v105++ = (PVOID)v106;
      v106 = MmPteBase + ((v106 >> 9) & 0x7FFFFFFFF8LL);
      --v107;
    }
    while ( v107 );
    v108 = 0;
    v109 = 3;
    do
    {
      v110 = v109;
      if ( v108 )
      {
        v4191[v109] = 0LL;
      }
      else
      {
        if ( !v109 )
          break;
        v108 = *(char *)v4191[v109] < 0;
      }
      --v109;
    }
    while ( v110 );
    v142 = v3826;
    LODWORD(v143) = 4;
    do
    {
      v143 = (unsigned int)(v143 - 1);
      v144 = v4191[v143];
      if ( !v144 )
        break;
      v145 = 0;
      if ( HIDWORD(P[1]) )
      {
        do
        {
          if ( v144 == *((PVOID *)P[0] + v145) )
            break;
          ++v145;
        }
        while ( v145 < HIDWORD(P[1]) );
        v142 = v3826;
      }
      if ( v145 == HIDWORD(P[1]) )
      {
        if ( HIDWORD(P[1]) == v3823 )
        {
          v146 = 2 * v3823 + 64;
          v3823 = v146;
          v147 = __rdtsc();
          v148 = (__ROR8__(v147, 3) ^ v147) * (unsigned __int128)0x7010008004002001uLL;
          v3896 = *((_QWORD *)&v148 + 1);
          v149 = ((unsigned __int64)v148 ^ *((_QWORD *)&v148 + 1)) % 0xB;
          if ( (unsigned int)v149 > 5 )
          {
            v153 = v149 - 6;
            if ( v153 )
            {
              v154 = v153 - 1;
              if ( v154 )
              {
                v155 = v154 - 1;
                if ( v155 )
                {
                  if ( v155 == 1 )
                  {
                    v3857[18] = -1333354875;
                    v152 = __ROR4__(-1333354868, 33);
                  }
                  else
                  {
                    v156 = __rdtsc();
                    v157 = __ROR8__(v156, 3);
                    v3897 = ((v157 ^ v156) * (unsigned __int128)0x7010008004002001uLL) >> 64;
                    v152 = ((((((((unsigned int)v3897 ^ (67117057 * ((unsigned int)v157 ^ (unsigned int)v156))) % 0x1A
                               + 97) << 8) | ((((unsigned int)v3897 ^ (67117057
                                                                     * ((unsigned int)v157 ^ (unsigned int)v156))) >> 5)
                                            % 0x1A
                                            + 65)) << 8) | ((((unsigned int)v3897 ^ (67117057
                                                                                   * ((unsigned int)v157 ^ (unsigned int)v156))) >> 10)
                                                          % 0x1A
                                                          + 97)) << 8) | ((((unsigned int)v3897 ^ (67117057
                                                                                                 * ((unsigned int)v157 ^ (unsigned int)v156))) >> 15)
                                                                        % 0x1A
                                                                        + 65);
                  }
                }
                else
                {
                  v3857[19] = 1684422978;
                  v152 = __ROR4__(1684422978, 8);
                }
              }
              else
              {
                v3857[20] = -2100910376;
                v152 = __ROL4__(-2100910376, 7);
              }
            }
            else
            {
              v3857[21] = 1314342514;
              v152 = __ROR4__(1314342516, 24);
            }
          }
          else if ( (_DWORD)v149 == 5 )
          {
            v3857[17] = 680282605;
            v152 = __ROR4__(680282605, 5);
          }
          else if ( (_DWORD)v149 )
          {
            v150 = v149 - 1;
            if ( v150 )
            {
              v151 = v150 - 1;
              if ( v151 )
              {
                if ( v151 == 1 )
                {
                  v3857[13] = -1474152136;
                  v152 = __ROR4__(-1474152133, 15);
                }
                else
                {
                  v3857[12] = 1728537748;
                  v152 = __ROL4__(1728537748, 4);
                }
              }
              else
              {
                v3857[14] = -2051698419;
                v152 = __ROR4__(-2051698419, 2);
              }
            }
            else
            {
              v3857[15] = -1297272415;
              v152 = __ROL4__(-1297272415, 1);
            }
          }
          else
          {
            v3857[16] = -795291432;
            v152 = __ROR4__(-795291432, 6);
          }
          v158 = (char *)ExAllocatePool2(64LL, 8LL * v146, v152);
          if ( !v158 )
          {
LABEL_5348:
            v3857[22] = 317;
            KeBugCheckEx(__ROR4__BugCheckCode: (317, 160), BugCheckParameter1: 0x1BuLL, BugCheckParameter2: 0LL, BugCheckParameter3: 0LL, BugCheckParameter4: 0LL);
          }
          v159 = P[0];
          if ( P[0] )
          {
            v160 = v158;
            v161 = 8 * HIDWORD(P[1]);
            if ( (unsigned int)(8 * HIDWORD(P[1])) >= 8 )
            {
              v162 = (unsigned __int64)v161 >> 3;
              do
              {
                v161 -= 8;
                *(_QWORD *)v160 = *v159++;
                v160 += 8;
                --v162;
              }
              while ( v162 );
            }
            if ( v161 )
            {
              v163 = v160 - (char *)v159;
              do
              {
                *((_BYTE *)v159 + v163) = *(_BYTE *)v159;
                v159 = (_QWORD *)((char *)v159 + 1);
                --v161;
              }
              while ( v161 );
            }
            ExFreePool(P: P[0]);
          }
          LODWORD(P[1]) = v3823;
          P[0] = v158;
        }
        v164 = HIDWORD(P[1]);
        ++HIDWORD(P[1]);
        HIDWORD(v4189) += 16;
        *((_QWORD *)P[0] + v164) = v144;
      }
    }
    while ( (_DWORD)v143 );
    v104 += 4096LL;
  }
  while ( v104 < (unsigned __int64)&qword_140C019F0 );
  LODWORD(v4189) = v142;
  v165 = 16 * v142 + HIDWORD(v4189) + 8;
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  v166 = v3815;
  if ( v3815 )
  {
    v165 = 0;
    Size = 0;
    v167 = 0;
  }
  else
  {
    v167 = Size;
  }
  v3826 = v165 + 2720;
  v3823 = v165 + 2720 + v167;
  v168 = __rdtsc();
  v169 = __ROR8__(v168, 3);
  v3898 = ((v169 ^ v168) * (unsigned __int128)0x7010008004002001uLL) >> 64;
  v170 = v3823 + (((67117057 * (v169 ^ v168)) ^ v3898) & 0x7FF) + 0x100000;
  v171 = __rdtsc();
  v172 = (__ROR8__(v171, 3) ^ v171) * (unsigned __int128)0x7010008004002001uLL;
  v3899 = *((_QWORD *)&v172 + 1);
  v173 = ((unsigned __int64)v172 ^ *((_QWORD *)&v172 + 1)) % 0xB;
  if ( (unsigned int)v173 > 5 )
  {
    v177 = v173 - 6;
    if ( v177 )
    {
      v178 = v177 - 1;
      if ( v178 )
      {
        v179 = v178 - 1;
        if ( v179 )
        {
          if ( v179 == 1 )
          {
            v3857[29] = -1333354875;
            v176 = __ROR4__(-1333354868, 33);
          }
          else
          {
            v180 = __rdtsc();
            v181 = __ROR8__(v180, 3);
            v3900 = ((v181 ^ v180) * (unsigned __int128)0x7010008004002001uLL) >> 64;
            v176 = ((((((((unsigned int)v3900 ^ (67117057 * ((unsigned int)v181 ^ (unsigned int)v180))) % 0x1A + 97) << 8) | ((((unsigned int)v3900 ^ (67117057 * ((unsigned int)v181 ^ (unsigned int)v180))) >> 5) % 0x1A + 65)) << 8) | ((((unsigned int)v3900 ^ (67117057 * ((unsigned int)v181 ^ (unsigned int)v180))) >> 10) % 0x1A + 97)) << 8) | ((((unsigned int)v3900 ^ (67117057 * ((unsigned int)v181 ^ (unsigned int)v180))) >> 15) % 0x1A + 65);
          }
        }
        else
        {
          v3857[30] = 1684422978;
          v176 = __ROR4__(1684422978, 8);
        }
      }
      else
      {
        v3857[31] = -2100910376;
        v176 = __ROL4__(-2100910376, 7);
      }
    }
    else
    {
      v3857[32] = 1314342514;
      v176 = __ROR4__(1314342516, 24);
    }
  }
  else if ( (_DWORD)v173 == 5 )
  {
    v3857[28] = 680282605;
    v176 = __ROR4__(680282605, 5);
  }
  else if ( (_DWORD)v173 )
  {
    v174 = v173 - 1;
    if ( v174 )
    {
      v175 = v174 - 1;
      if ( v175 )
      {
        if ( v175 == 1 )
        {
          v3857[24] = -1474152136;
          v176 = __ROR4__(-1474152133, 15);
        }
        else
        {
          v3857[23] = 1728537748;
          v176 = __ROL4__(1728537748, 4);
        }
      }
      else
      {
        v3857[25] = -2051698419;
        v176 = __ROR4__(-2051698419, 2);
      }
    }
    else
    {
      v3857[26] = -1297272415;
      v176 = __ROL4__(-1297272415, 1);
    }
  }
  else
  {
    v3857[27] = -795291432;
    v176 = __ROR4__(-795291432, 6);
  }
  v182 = __rdtsc();
  v183 = __ROR8__(v182, 3);
  v3901 = ((v183 ^ v182) * (unsigned __int128)0x7010008004002001uLL) >> 64;
  v184 = (v3901 ^ (67117057 * (v183 ^ v182))) & 0x7FF;
  v185 = __rdtsc();
  v186 = (__ROR8__(v185, 3) ^ v185) * (unsigned __int128)0x7010008004002001uLL;
  v3902 = *((_QWORD *)&v186 + 1);
  v187 = (*((_QWORD *)&v186 + 1) ^ (unsigned __int64)v186) % (unsigned int)(v184 + 1);
  v188 = ExAllocatePool2(130LL, v184 + v170, v176);
  v3824 = (_QWORD *)v188;
  v189 = v188;
  if ( !v188 )
    return 0;
  v190 = v187;
  v191 = (_QWORD *)v188;
  if ( (unsigned int)v187 >= 8 )
  {
    v192 = (unsigned __int64)(unsigned int)v187 >> 3;
    do
    {
      v193 = __rdtsc();
      v190 -= 8;
      v194 = (__ROR8__(v193, 3) ^ v193) * (unsigned __int128)0x7010008004002001uLL;
      v3903 = *((_QWORD *)&v194 + 1);
      *v191++ = v194 ^ *((_QWORD *)&v194 + 1);
      --v192;
    }
    while ( v192 );
  }
  if ( v190 )
  {
    v195 = __rdtsc();
    v196 = (__ROR8__(v195, 3) ^ v195) * (unsigned __int128)0x7010008004002001uLL;
    v3904 = *((_QWORD *)&v196 + 1);
    v197 = v196 ^ *((_QWORD *)&v196 + 1);
    do
    {
      *(_BYTE *)v191 = v197;
      v191 = (_QWORD *)((char *)v191 + 1);
      v197 >>= 8;
      --v190;
    }
    while ( v190 );
  }
  v198 = v184 - v187;
  v199 = (unsigned int)v187;
  v200 = (_QWORD *)((unsigned int)v187 + v189 + v170);
  if ( v198 >= 8 )
  {
    v201 = (unsigned __int64)v198 >> 3;
    do
    {
      v202 = __rdtsc();
      v198 -= 8;
      v203 = (__ROR8__(v202, 3) ^ v202) * (unsigned __int128)0x7010008004002001uLL;
      v3905 = *((_QWORD *)&v203 + 1);
      *v200++ = v203 ^ *((_QWORD *)&v203 + 1);
      --v201;
    }
    while ( v201 );
  }
  if ( v198 )
  {
    v204 = __rdtsc();
    v205 = (__ROR8__(v204, 3) ^ v204) * (unsigned __int128)0x7010008004002001uLL;
    v3906 = *((_QWORD *)&v205 + 1);
    v206 = v205 ^ *((_QWORD *)&v205 + 1);
    do
    {
      *(_BYTE *)v200 = v206;
      v200 = (_QWORD *)((char *)v200 + 1);
      v206 >>= 8;
      --v198;
    }
    while ( v198 );
  }
  v207 = (_BYTE *)(v189 + (unsigned int)v187);
  v3818 = v189 + v199;
  if ( !(v189 + v199) )
    return 0;
  v208 = v3823;
  v209 = v3823 + 0x100000;
  v3822 = v3823 + 0x100000;
  memset((void *)(v189 + v199), Val: 0, Size: (unsigned int)(v3823 + 0x100000));
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  v210 = 0x2000LL;
  v211 = *((_DWORD *)v207 + 612) & 0xEFFFFFFF;
  v212 = v211 | (v166 != 0 ? 0x10000000 : 0);
  *((_DWORD *)v207 + 612) = v212;
  if ( v211 & 0x10000000 | (v166 != 0 ? 0x10000000 : 0) )
  {
    *((_DWORD *)v207 + 612) = v212 | 0x8000000;
    *((_DWORD *)v207 + 613) |= 0x2000u;
  }
  if ( __30 )
    *((_DWORD *)v207 + 613) |= 0x2000u;
  if ( v166 )
    goto LABEL_494;
  v213 = v207 + 2720;
  qword_140C00250[0] = (__int64)off_140C019E8;
  v4191[4] = v207 + 2720;
  v4193 = 0LL;
  v214 = 0;
  v3815 = 0;
  v215 = 0;
  LODWORD(v3827) = 0;
  *(_OWORD *)v4192 = 0LL;
  LODWORD(v3825) = 0;
  while ( 2 )
  {
    v216 = qword_140C00250[v214];
    v217 = RtlLookupFunctionTable(v216, &v4237, v3858);
    v4235 = v217;
    if ( !v217 )
    {
      v225 = v4239;
      v219 = v4236;
      v226 = v3885;
      goto LABEL_357;
    }
    v4240 = 0LL;
    if ( v4169 != v4237 )
    {
      v219 = v4236;
      goto LABEL_355;
    }
    v218 = (_DWORD *)v4170;
    v4241 = 0LL;
    v4242 = v4171;
    v4243 = 0;
    v4240 = v4170;
    v219 = RtlLookupFunctionEntry(v216, &v4237, 0LL);
    v4236 = v219;
    if ( !v219 )
      goto LABEL_350;
    v220 = 0;
    v221 = *v218 - 1;
    if ( v221 < 0 )
      goto LABEL_350;
    while ( 2 )
    {
      v222 = (v221 + v220) >> 1;
      v223 = v219 - v4237 - v218[2 * v222 + 2];
      if ( v223 < 0 )
      {
        if ( !v222 )
          goto LABEL_350;
        v221 = v222 - 1;
LABEL_349:
        if ( v221 < v220 )
          goto LABEL_350;
        continue;
      }
      break;
    }
    if ( v223 > 0 )
    {
      v220 = v222 + 1;
      goto LABEL_349;
    }
    v224 = (_DWORD *)v4241;
    if ( v221 >= v220 )
      v224 = &v218[2 * ((v221 + v220) >> 1) + 2];
    v4241 = (unsigned __int64)v224;
LABEL_350:
    v217 = v4235;
    v215 = v3827;
LABEL_355:
    v225 = (__int64 *)&v3908;
    v4234 = v216;
    v226 = v4237;
    v4239 = (__int64 *)&v3908;
    v3858[0] /= 0xCu;
    v3885 = v4237;
    v4238 = v217 + 12LL * v3858[0];
LABEL_357:
    while ( v217 && v217 != v4238 )
    {
      if ( v4240 )
      {
        if ( !v219 )
          break;
        if ( v4241 )
        {
          v227 = *(_DWORD *)(v4241 + 4);
          if ( (v227 & 1) != 0 )
          {
            *v225 = v4237 + (v227 & 0xFFFFFFFE);
            v4241 = 0LL;
          }
          else
          {
            v228 = (unsigned int)(v4243 + v227);
            v229 = (unsigned int)v228;
            v230 = v228 + 4;
            if ( v230 < v229 || v230 > v4242 )
            {
              v3858[11] = 317;
              KeBugCheckEx(__ROR4__BugCheckCode: (317, 160), BugCheckParameter1: 0x12uLL, BugCheckParameter2: v4240, BugCheckParameter3: v4237, BugCheckParameter4: v229);
            }
            v231 = *(_DWORD *)(v4240 + v229);
            v4243 += 4;
            v4241 &= -(__int64)((v231 & 1) != 0);
            if ( (v231 & 1) != 0 )
              v231 &= ~1u;
            *v225 = v4237 + v231;
          }
        }
        else
        {
          *v225 = v219;
          v4236 = 0LL;
        }
      }
      else
      {
        while ( 1 )
        {
          v232 = v217;
          v233 = RtlpConvertFunctionEntry(v217, v4237, v225);
          v234 = RtlpSameFunction(v233, v4237, v4234);
          v217 = v4235 + 12;
          v4235 += 12LL;
          if ( v234 )
            break;
          if ( v217 == v4238 )
            goto LABEL_372;
        }
        *v4239 = v232;
      }
      v243 = *v3908;
      v244 = v3908[1] - v243;
      v245 = v226 + v243;
      if ( v213 )
      {
        v246 = 2LL * v215;
        v213[2 * v246 + 4] = v244;
        *(_QWORD *)&v213[2 * v246 + 2] = v245;
      }
      HIDWORD(v4193) += v244;
      v247 = v245 & 0xFFFFFFFFFFFFF000uLL;
      LODWORD(v3827) = v215 + 1;
      Timer = (PKTIMER)(v245 + v244);
      do
      {
        v248 = v4194;
        v249 = 4LL;
        v250 = MmPteBase + ((v247 >> 9) & 0x7FFFFFFFF8LL);
        do
        {
          *v248++ = v250;
          v250 = MmPteBase + ((v250 >> 9) & 0x7FFFFFFFF8LL);
          --v249;
        }
        while ( v249 );
        v251 = 0;
        v252 = 3;
        do
        {
          v253 = v252;
          if ( v251 )
          {
            v4194[v252] = 0LL;
          }
          else
          {
            if ( !v252 )
              break;
            v251 = *(char *)v4194[v252] < 0;
          }
          --v252;
        }
        while ( v253 );
        v207 = (_BYTE *)v3818;
        LODWORD(v254) = 4;
        do
        {
          v254 = (unsigned int)(v254 - 1);
          v255 = v4194[v254];
          if ( !v255 )
            break;
          for ( j = 0; j < HIDWORD(v4192[1]); ++j )
          {
            if ( v255 == *((_QWORD *)v4192[0] + j) )
              break;
          }
          if ( j == HIDWORD(v4192[1]) )
          {
            if ( HIDWORD(v4192[1]) == (_DWORD)v3825 )
            {
              v257 = 2 * v3825 + 64;
              LODWORD(v3825) = v257;
              v258 = __rdtsc();
              v259 = (__ROR8__(v258, 3) ^ v258) * (unsigned __int128)0x7010008004002001uLL;
              BugCheckParameter2[1] = *((_QWORD *)&v259 + 1);
              v260 = ((unsigned __int64)v259 ^ *((_QWORD *)&v259 + 1)) % 0xB;
              if ( (unsigned int)v260 > 5 )
              {
                v264 = v260 - 6;
                if ( v264 )
                {
                  v265 = v264 - 1;
                  if ( v265 )
                  {
                    v266 = v265 - 1;
                    if ( v266 )
                    {
                      if ( v266 == 1 )
                      {
                        v3858[7] = -1333354875;
                        v263 = __ROR4__(-1333354868, 33);
                      }
                      else
                      {
                        v267 = __rdtsc();
                        v268 = __ROR8__(v267, 3);
                        v3911 = ((v268 ^ v267) * (unsigned __int128)0x7010008004002001uLL) >> 64;
                        v263 = ((((((((unsigned int)v3911 ^ (67117057 * ((unsigned int)v268 ^ (unsigned int)v267)))
                                   % 0x1A
                                   + 97) << 8) | ((((unsigned int)v3911 ^ (67117057
                                                                         * ((unsigned int)v268 ^ (unsigned int)v267))) >> 5)
                                                % 0x1A
                                                + 65)) << 8) | ((((unsigned int)v3911 ^ (67117057
                                                                                       * ((unsigned int)v268 ^ (unsigned int)v267))) >> 10)
                                                              % 0x1A
                                                              + 97)) << 8) | ((((unsigned int)v3911 ^ (67117057 * ((unsigned int)v268 ^ (unsigned int)v267))) >> 15)
                                                                            % 0x1A
                                                                            + 65);
                      }
                    }
                    else
                    {
                      v3858[8] = 1684422978;
                      v263 = __ROR4__(1684422978, 8);
                    }
                  }
                  else
                  {
                    v3858[9] = -2100910376;
                    v263 = __ROL4__(-2100910376, 7);
                  }
                }
                else
                {
                  v3858[10] = 1314342514;
                  v263 = __ROR4__(1314342516, 24);
                }
              }
              else if ( (_DWORD)v260 == 5 )
              {
                v3858[6] = 680282605;
                v263 = __ROR4__(680282605, 5);
              }
              else if ( (_DWORD)v260 )
              {
                v261 = v260 - 1;
                if ( v261 )
                {
                  v262 = v261 - 1;
                  if ( v262 )
                  {
                    if ( v262 == 1 )
                    {
                      v3858[2] = -1474152136;
                      v263 = __ROR4__(-1474152133, 15);
                    }
                    else
                    {
                      v3858[1] = 1728537748;
                      v263 = __ROL4__(1728537748, 4);
                    }
                  }
                  else
                  {
                    v3858[3] = -2051698419;
                    v263 = __ROR4__(-2051698419, 2);
                  }
                }
                else
                {
                  v3858[4] = -1297272415;
                  v263 = __ROL4__(-1297272415, 1);
                }
              }
              else
              {
                v3858[5] = -795291432;
                v263 = __ROR4__(-795291432, 6);
              }
              v269 = ExAllocatePool2(64LL, 8LL * v257, v263);
              v270 = (void *)v269;
              if ( !v269 )
              {
                v213 = v207 + 2720;
                goto LABEL_5351;
              }
              v271 = v4192[0];
              if ( v4192[0] )
              {
                v272 = (char *)v269;
                v273 = 8 * HIDWORD(v4192[1]);
                if ( (unsigned int)(8 * HIDWORD(v4192[1])) >= 8 )
                {
                  v274 = (unsigned __int64)v273 >> 3;
                  do
                  {
                    v273 -= 8;
                    *(_QWORD *)v272 = *v271++;
                    v272 += 8;
                    --v274;
                  }
                  while ( v274 );
                }
                if ( v273 )
                {
                  v275 = v272 - (char *)v271;
                  do
                  {
                    *((_BYTE *)v271 + v275) = *(_BYTE *)v271;
                    v271 = (_QWORD *)((char *)v271 + 1);
                    --v273;
                  }
                  while ( v273 );
                }
                ExFreePool(P: v4192[0]);
              }
              LODWORD(v4192[1]) = v3825;
              v4192[0] = v270;
            }
            v276 = HIDWORD(v4192[1]);
            ++HIDWORD(v4192[1]);
            HIDWORD(v4193) += 16;
            *((_QWORD *)v4192[0] + v276) = v255;
          }
        }
        while ( (_DWORD)v254 );
        v247 += 4096LL;
      }
      while ( v247 < (unsigned __int64)Timer );
      v215 = v3827;
      v213 = v207 + 2720;
      v225 = v4239;
      v219 = v4236;
      v217 = v4235;
      v226 = v3885;
      LODWORD(v4193) = v3827;
    }
LABEL_372:
    v214 = v3815 + 1;
    v3815 = v214;
    if ( v214 < 0xF )
      continue;
    break;
  }
  if ( v213 )
  {
    v235 = 2LL * v215;
    v213[2 * v235 + 4] = 8;
    *(_QWORD *)&v213[2 * v235 + 2] = &off_140C019E8;
  }
  HIDWORD(v4193) += 8;
  v236 = (unsigned __int64)&off_140C019E8 & 0xFFFFFFFFFFFFF000uLL;
  LODWORD(v3827) = v215 + 1;
  Timer = (PKTIMER)((unsigned __int64)&off_140C019E8 & 0xFFFFFFFFFFFFF000uLL);
  do
  {
    v237 = v4195;
    v238 = 4LL;
    v239 = MmPteBase + ((v236 >> 9) & 0x7FFFFFFFF8LL);
    do
    {
      *v237++ = v239;
      v239 = MmPteBase + ((v239 >> 9) & 0x7FFFFFFFF8LL);
      --v238;
    }
    while ( v238 );
    v240 = 0;
    v241 = 3;
    do
    {
      v242 = v241;
      if ( v240 )
      {
        v4195[v241] = 0LL;
      }
      else
      {
        if ( !v241 )
          break;
        v240 = *(char *)v4195[v241] < 0;
      }
      --v241;
    }
    while ( v242 );
    v207 = (_BYTE *)v3818;
    LODWORD(v277) = 4;
    do
    {
      v277 = (unsigned int)(v277 - 1);
      v278 = v4195[v277];
      if ( !v278 )
        break;
      for ( k = 0; k < HIDWORD(v4192[1]); ++k )
      {
        if ( v278 == *((_QWORD *)v4192[0] + k) )
          break;
      }
      if ( k == HIDWORD(v4192[1]) )
      {
        if ( HIDWORD(v4192[1]) == (_DWORD)v3825 )
        {
          v280 = 2 * v3825 + 64;
          LODWORD(v3825) = v280;
          v281 = __rdtsc();
          v282 = (__ROR8__(v281, 3) ^ v281) * (unsigned __int128)0x7010008004002001uLL;
          v3912 = *((_QWORD *)&v282 + 1);
          v283 = ((unsigned __int64)v282 ^ *((_QWORD *)&v282 + 1)) % 0xB;
          if ( (unsigned int)v283 > 5 )
          {
            v287 = v283 - 6;
            if ( v287 )
            {
              v288 = v287 - 1;
              if ( v288 )
              {
                v289 = v288 - 1;
                if ( v289 )
                {
                  if ( v289 == 1 )
                  {
                    v3858[18] = -1333354875;
                    v286 = __ROR4__(-1333354868, 33);
                  }
                  else
                  {
                    v290 = __rdtsc();
                    v291 = __ROR8__(v290, 3);
                    v3913 = ((v291 ^ v290) * (unsigned __int128)0x7010008004002001uLL) >> 64;
                    v286 = ((((((((unsigned int)v3913 ^ (67117057 * ((unsigned int)v291 ^ (unsigned int)v290))) % 0x1A
                               + 97) << 8) | ((((unsigned int)v3913 ^ (67117057
                                                                     * ((unsigned int)v291 ^ (unsigned int)v290))) >> 5)
                                            % 0x1A
                                            + 65)) << 8) | ((((unsigned int)v3913 ^ (67117057
                                                                                   * ((unsigned int)v291 ^ (unsigned int)v290))) >> 10)
                                                          % 0x1A
                                                          + 97)) << 8) | ((((unsigned int)v3913 ^ (67117057
                                                                                                 * ((unsigned int)v291 ^ (unsigned int)v290))) >> 15)
                                                                        % 0x1A
                                                                        + 65);
                  }
                }
                else
                {
                  v3858[19] = 1684422978;
                  v286 = __ROR4__(1684422978, 8);
                }
              }
              else
              {
                v3858[20] = -2100910376;
                v286 = __ROL4__(-2100910376, 7);
              }
            }
            else
            {
              v3858[21] = 1314342514;
              v286 = __ROR4__(1314342516, 24);
            }
          }
          else if ( (_DWORD)v283 == 5 )
          {
            v3858[17] = 680282605;
            v286 = __ROR4__(680282605, 5);
          }
          else if ( (_DWORD)v283 )
          {
            v284 = v283 - 1;
            if ( v284 )
            {
              v285 = v284 - 1;
              if ( v285 )
              {
                if ( v285 == 1 )
                {
                  v3858[13] = -1474152136;
                  v286 = __ROR4__(-1474152133, 15);
                }
                else
                {
                  v3858[12] = 1728537748;
                  v286 = __ROL4__(1728537748, 4);
                }
              }
              else
              {
                v3858[14] = -2051698419;
                v286 = __ROR4__(-2051698419, 2);
              }
            }
            else
            {
              v3858[15] = -1297272415;
              v286 = __ROL4__(-1297272415, 1);
            }
          }
          else
          {
            v3858[16] = -795291432;
            v286 = __ROR4__(-795291432, 6);
          }
          v292 = ExAllocatePool2(64LL, 8LL * v280, v286);
          v293 = (void *)v292;
          if ( !v292 )
          {
LABEL_5351:
            v3858[22] = 317;
            KeBugCheckEx(__ROR4__BugCheckCode: (317, 160), BugCheckParameter1: 0x1BuLL, BugCheckParameter2: (ULONG_PTR)v207, BugCheckParameter3: (ULONG_PTR)v213, BugCheckParameter4: 1uLL);
          }
          v294 = v4192[0];
          if ( v4192[0] )
          {
            v295 = (char *)v292;
            v296 = 8 * HIDWORD(v4192[1]);
            if ( (unsigned int)(8 * HIDWORD(v4192[1])) >= 8 )
            {
              v297 = (unsigned __int64)v296 >> 3;
              do
              {
                v296 -= 8;
                *(_QWORD *)v295 = *v294++;
                v295 += 8;
                --v297;
              }
              while ( v297 );
            }
            if ( v296 )
            {
              v298 = v295 - (char *)v294;
              do
              {
                *((_BYTE *)v294 + v298) = *(_BYTE *)v294;
                v294 = (_QWORD *)((char *)v294 + 1);
                --v296;
              }
              while ( v296 );
            }
            ExFreePool(P: v4192[0]);
          }
          v4192[0] = v293;
          LODWORD(v4192[1]) = v3825;
        }
        v299 = HIDWORD(v4192[1]);
        ++HIDWORD(v4192[1]);
        HIDWORD(v4193) += 16;
        *((_QWORD *)v4192[0] + v299) = v278;
      }
    }
    while ( (_DWORD)v277 );
    v210 = (__int64)&qword_140C019F0;
    v236 = (unsigned __int64)&Timer[64];
    Timer = (PKTIMER)v236;
  }
  while ( v236 < (unsigned __int64)&qword_140C019F0 );
  v300 = v3827;
  LODWORD(v4193) = v3827;
  if ( v213 )
  {
    v301 = HIDWORD(v4192[1]);
    v302 = (char *)(v213 + 2);
    v213[1] = HIDWORD(v4192[1]);
    v303 = (char *)&v213[4 * v300 + 2];
    v304 = v303;
    if ( v301 )
    {
      v210 = (__int64)v4192[0];
      v305 = v301;
      do
      {
        v306 = *(_QWORD **)v210;
        v210 += 8LL;
        *(_QWORD *)v304 = v306;
        *((_QWORD *)v304 + 1) = *v306;
        v304 += 16;
        --v305;
      }
      while ( v305 );
    }
    if ( v302 < v303 )
    {
      do
      {
        v210 = *((unsigned int *)v302 + 2);
        v307 = v304;
        v308 = *(_QWORD **)v302;
        if ( (unsigned int)v210 >= 8 )
        {
          v309 = (unsigned __int64)(unsigned int)v210 >> 3;
          do
          {
            v210 = (unsigned int)(v210 - 8);
            *(_QWORD *)v307 = *v308++;
            v307 += 8;
            --v309;
          }
          while ( v309 );
        }
        if ( (_DWORD)v210 )
        {
          v310 = v307 - (char *)v308;
          do
          {
            *((_BYTE *)v308 + v310) = *(_BYTE *)v308;
            v308 = (_QWORD *)((char *)v308 + 1);
            v210 = (unsigned int)(v210 - 1);
          }
          while ( (_DWORD)v210 );
        }
        v311 = *((unsigned int *)v302 + 2);
        v302 += 16;
        v304 += v311;
      }
      while ( v302 < v303 );
      v207 = (_BYTE *)v3818;
      v300 = v3827;
    }
    *v213 = v300;
  }
  v208 = v3823;
  v209 = v3822;
LABEL_494:
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  LOBYTE(v210) = 1;
  v312 = (_DWORD *)RtlImageDirectoryEntryToData(0x140000000uLL, v210, 6LL, v3859);
  if ( !v312 )
    goto LABEL_511;
  v314 = &v312[7 * (v3859[0] / 0x1CuLL)];
  if ( v312 >= v314 )
    goto LABEL_511;
  v313 = 1346849024LL;
  while ( 2 )
  {
    v315 = v312[3];
    if ( v315 == 10 )
    {
      v316 = (_DWORD *)(0x140000000LL + (unsigned int)v312[5]);
      v317 = &v316[(unsigned __int64)(unsigned int)v312[4] >> 2];
      while ( v316 < v317 )
      {
        if ( *v316 == 1346849024 )
          goto LABEL_510;
        ++v316;
      }
LABEL_508:
      v312 += 7;
      if ( v312 >= v314 )
        goto LABEL_511;
      continue;
    }
    break;
  }
  if ( v315 != 13 )
    goto LABEL_508;
  v318 = (_DWORD *)(0x140000000LL + (unsigned int)v312[5]);
  if ( v318 == &v318[(unsigned __int64)(unsigned int)v312[4] >> 2] || *v318 != 1346849024 )
    goto LABEL_508;
LABEL_510:
  *((_DWORD *)v207 + 613) |= 0x10000u;
LABEL_511:
  if ( __32 )
    *((_DWORD *)v207 + 613) |= 0x4000u;
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  *((_DWORD *)v207 + 505) = v208;
  v319 = v3824;
  *((_DWORD *)v207 + 647) = v209;
  *((_QWORD *)v207 + 249) = v319;
  *((_DWORD *)v207 + 585) = v3819;
  *(_OWORD *)v207 = *(_OWORD *)CmpAppendDllSection;
  qmemcpy(v207 + 16, "H1Q H1Q(H1Q0H1Q8H1Q@H1QHH1QPH1QXH1Q`H1QhH1QpH1Qx", 48);
  *((_OWORD *)v207 + 4) = *((_OWORD *)CmpAppendDllSection + 4);
  *((_OWORD *)v207 + 5) = *((_OWORD *)CmpAppendDllSection + 5);
  *((_OWORD *)v207 + 6) = *((_OWORD *)CmpAppendDllSection + 6);
  *((_OWORD *)v207 + 7) = *((_OWORD *)CmpAppendDllSection + 7);
  *((_OWORD *)v207 + 8) = *((_OWORD *)CmpAppendDllSection + 8);
  *((_OWORD *)v207 + 9) = *((_OWORD *)CmpAppendDllSection + 9);
  *((_OWORD *)v207 + 10) = *((_OWORD *)CmpAppendDllSection + 10);
  *((_OWORD *)v207 + 11) = *((_OWORD *)CmpAppendDllSection + 11);
  *((_DWORD *)v207 + 48) = *((_DWORD *)CmpAppendDllSection + 48);
  v320 = v3826;
  *((_DWORD *)v207 + 508) = v3826 + v3810;
  LODWORD(v319) = v320 + v3809;
  *((_DWORD *)v207 + 510) = v208;
  *((_DWORD *)v207 + 506) = (_DWORD)v319;
  *((_DWORD *)v207 + 507) = v320 + v3811;
  *((_DWORD *)v207 + 509) = v320 + v3817;
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  *((_QWORD *)v207 + 27) = KiFreezeDataTableEntry;
  *((_QWORD *)v207 + 28) = ExAcquireResourceSharedLite;
  *((_QWORD *)v207 + 29) = ExAcquireResourceExclusiveLite;
  *((_QWORD *)v207 + 30) = ExAllocatePool2;
  *((_QWORD *)v207 + 31) = ExFreePool;
  *((_QWORD *)v207 + 32) = ExMapHandleToPointer;
  *((_QWORD *)v207 + 33) = ExGetHandlePointer;
  *((_QWORD *)v207 + 34) = ExQueueWorkItem;
  *((_QWORD *)v207 + 35) = ExReleaseResourceLite;
  *((_QWORD *)v207 + 36) = ExUnlockHandleTableEntry;
  *((_QWORD *)v207 + 37) = ExAcquirePushLockExclusiveEx;
  *((_QWORD *)v207 + 38) = ExReleasePushLockExclusiveEx;
  *((_QWORD *)v207 + 39) = ExAcquirePushLockSharedEx;
  *((_QWORD *)v207 + 40) = ExReleasePushLockSharedEx;
  *((_QWORD *)v207 + 41) = KeAcquireInStackQueuedSpinLockAtDpcLevel;
  *((_QWORD *)v207 + 42) = ExAcquireSpinLockSharedAtDpcLevel;
  *((_QWORD *)v207 + 43) = KeBugCheckEx;
  *((_QWORD *)v207 + 44) = KeDelayExecutionThread;
  *((_QWORD *)v207 + 45) = KeEnterCriticalRegionThread;
  *((_QWORD *)v207 + 46) = KeLeaveCriticalRegion;
  *((_QWORD *)v207 + 47) = KeEnterGuardedRegion;
  *((_QWORD *)v207 + 48) = KeLeaveGuardedRegion;
  *((_QWORD *)v207 + 49) = KeReleaseInStackQueuedSpinLockFromDpcLevel;
  *((_QWORD *)v207 + 50) = ExReleaseSpinLockSharedFromDpcLevel;
  *((_QWORD *)v207 + 51) = KeRevertToUserGroupAffinityThread;
  *((_QWORD *)v207 + 52) = KeProcessorGroupAffinity;
  *((_QWORD *)v207 + 53) = KeInitializeAffinityEx2;
  *((_QWORD *)v207 + 54) = KeInitializeEnumerationContext;
  *((_QWORD *)v207 + 55) = KeEnumerateNextProcessor;
  *((_QWORD *)v207 + 56) = KeCountSetBitsAffinityEx;
  *((_QWORD *)v207 + 57) = KeQueryAffinityProcess;
  *((_QWORD *)v207 + 58) = KeSetSystemGroupAffinityThread;
  *((_QWORD *)v207 + 59) = KeSetCoalescableTimer;
  *((_QWORD *)v207 + 63) = RtlImageNtHeader;
  *((_QWORD *)v207 + 66) = RtlSectionTableFromVirtualAddress;
  *((_QWORD *)v207 + 64) = RtlLookupFunctionTableEx;
  *((_QWORD *)v207 + 65) = RtlPcToFileHeader;
  *((_QWORD *)v207 + 60) = ObfDereferenceObject;
  *((_QWORD *)v207 + 61) = ObReferenceObjectByName;
  *((_QWORD *)v207 + 62) = RtlImageDirectoryEntryToData;
  *((_QWORD *)v207 + 67) = DbgPrint;
  *((_QWORD *)v207 + 68) = MmAllocateIndependentPages;
  *((_QWORD *)v207 + 69) = MmFreeIndependentPages;
  *((_QWORD *)v207 + 70) = MmSetPageProtection;
  *((_QWORD *)v207 + 76) = RtlLookupFunctionEntry;
  *((_QWORD *)v207 + 77) = KeAcquireSpinLockRaiseToDpc;
  *((_QWORD *)v207 + 78) = KeReleaseSpinLock;
  *((_QWORD *)v207 + 79) = MmGetSessionById;
  *((_QWORD *)v207 + 80) = MmGetNextSession;
  *((_QWORD *)v207 + 81) = MmQuitNextSession;
  *((_QWORD *)v207 + 82) = MmAttachSession;
  *((_QWORD *)v207 + 83) = MmDetachSession;
  *((_QWORD *)v207 + 84) = MmGetSessionIdEx;
  *((_QWORD *)v207 + 85) = MmIsSessionAddress;
  *((_QWORD *)v207 + 86) = MmIsAddressValid;
  *((_QWORD *)v207 + 87) = MmSessionGetWin32Callouts;
  *((_QWORD *)v207 + 88) = KeInsertQueueApc;
  *((_QWORD *)v207 + 89) = KeWaitForSingleObject;
  *((_QWORD *)v207 + 91) = ExReferenceCallBackBlock;
  *((_QWORD *)v207 + 92) = ExGetCallBackBlockRoutine;
  *((_QWORD *)v207 + 93) = &ExDereferenceCallBackBlock;
  *((_QWORD *)v207 + 94) = sub_1403DDE00;
  *((_QWORD *)v207 + 95) = PspEnumerateCallback;
  *((_QWORD *)v207 + 96) = CmpEnumerateCallback;
  *((_QWORD *)v207 + 97) = DbgEnumerateCallback;
  *((_QWORD *)v207 + 98) = ExpEnumerateCallback;
  *((_QWORD *)v207 + 99) = ExpGetNextCallback;
  *((_QWORD *)v207 + 100) = xHalTimerWatchdogStop;
  *((_QWORD *)v207 + 101) = KiSchedulerApcTerminate;
  *((_QWORD *)v207 + 102) = KiSchedulerApc;
  *((_QWORD *)v207 + 103) = xHalTimerWatchdogStop;
  *((_QWORD *)v207 + 104) = &sub_1403DEEC0;
  *((_QWORD *)v207 + 105) = MmAllocatePagesForMdlEx;
  *((_QWORD *)v207 + 106) = MmAllocateMappingAddress;
  *((_QWORD *)v207 + 107) = MmMapLockedPagesWithReservedMapping;
  *((_QWORD *)v207 + 108) = MmUnmapReservedMapping;
  *((_QWORD *)v207 + 109) = sub_1403EB290;
  *((_QWORD *)v207 + 110) = sub_1403EB300;
  *((_QWORD *)v207 + 111) = MmAcquireLoadLock;
  *((_QWORD *)v207 + 112) = MmReleaseLoadLock;
  *((_QWORD *)v207 + 113) = KeEnumerateQueueApc;
  *((_QWORD *)v207 + 114) = KeIsApcRunningThread;
  *((_QWORD *)v207 + 115) = &sub_1403DED90;
  *((_QWORD *)v207 + 116) = PsAcquireProcessExitSynchronization;
  *((_QWORD *)v207 + 117) = ObDereferenceProcessHandleTable;
  *((_QWORD *)v207 + 118) = PsGetNextProcess;
  *((_QWORD *)v207 + 119) = PsQuitNextProcessThread;
  *((_QWORD *)v207 + 120) = PsGetNextProcessEx;
  *((_QWORD *)v207 + 121) = MmIsSessionLeaderProcess;
  *((_QWORD *)v207 + 122) = PsInvokeWin32Callout;
  *((_QWORD *)v207 + 123) = MmEnumerateAddressSpaceAndReferenceImages;
  *((_QWORD *)v207 + 124) = PsGetProcessProtection;
  *((_QWORD *)v207 + 125) = PsGetProcessSignatureLevel;
  *((_QWORD *)v207 + 126) = PsGetProcessSectionBaseAddress;
  *((_QWORD *)v207 + 127) = SeCompareSigningLevels;
  *((_QWORD *)v207 + 133) = RtlIsMultiSessionSku;
  *((_QWORD *)v207 + 134) = KiEnumerateCallback;
  *((_QWORD *)v207 + 135) = KeStackAttachProcess;
  *((_QWORD *)v207 + 136) = KeUnstackDetachProcess;
  *((_QWORD *)v207 + 137) = KeIpiGenericCall;
  *((_QWORD *)v207 + 138) = sub_1403EB0E0;
  *((_QWORD *)v207 + 139) = MmGetPhysicalAddress;
  *((_QWORD *)v207 + 140) = MmUnlockPages;
  *((_QWORD *)v207 + 128) = KeComputeSha256;
  *((_QWORD *)v207 + 129) = KeComputeParallelSha256;
  *((_QWORD *)v207 + 130) = KeSetEvent;
  *((_QWORD *)v207 + 141) = VslVerifyPage;
  *((_QWORD *)v207 + 142) = VslVerifySessionSpace;
  *((_QWORD *)v207 + 145) = PsLookupProcessByProcessId;
  *((_QWORD *)v207 + 146) = PsGetProcessId;
  *((_QWORD *)v207 + 147) = MmCheckProcessShadow;
  *((_QWORD *)v207 + 148) = MmGetImageRetpolineCodePage;
  *((_QWORD *)v207 + 300) = &qword_140C0DF00;
  if ( a4 )
    *((_QWORD *)v207 + 90) = *(_QWORD *)(a4 + 8);
  *((_QWORD *)v207 + 131) = RtlpConvertFunctionEntry;
  *((_QWORD *)v207 + 132) = RtlpLookupPrimaryFunctionEntry;
  *((_QWORD *)v207 + 143) = KiGetInterruptObjectAddress;
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  *((_DWORD *)v207 + 599) = v208;
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  _disable();
  _enable();
  v321 = __rdtsc();
  v322 = (__ROR8__(v321, 3) ^ v321) * (unsigned __int128)0x7010008004002001uLL;
  v3914 = *((_QWORD *)&v322 + 1);
  if ( ((unsigned __int64)v322 ^ *((_QWORD *)&v322 + 1)) % 0xA >= 3 )
  {
    v326 = 0;
  }
  else
  {
    *((_DWORD *)v207 + 586) = 4;
    v323 = __rdtsc();
    v324 = (__ROR8__(v323, 3) ^ v323) * (unsigned __int128)0x7010008004002001uLL;
    v3915 = *((_QWORD *)&v324 + 1);
    v325 = v324 ^ *((_QWORD *)&v324 + 1);
    *((_QWORD *)&v324 + 1) = (((unsigned __int64)v324 ^ *((_QWORD *)&v324 + 1))
                            * (unsigned __int128)0x2492492492492493uLL) >> 64;
    v326 = v325 - 7 * ((*((_QWORD *)&v324 + 1) + ((unsigned __int64)(v325 - *((_QWORD *)&v324 + 1)) >> 1)) >> 2);
  }
  *((_DWORD *)v207 + 586) = v326;
  if ( qword_140D815F0 > 0x1F )
  {
    v3859[1] = 317;
    KeBugCheckEx(__ROR4__BugCheckCode: (317, 160), BugCheckParameter1: 3uLL, BugCheckParameter2: 0LL, BugCheckParameter3: qword_140D815F0, BugCheckParameter4: 0LL);
  }
  *((_DWORD *)v207 + 612) ^= (*((_DWORD *)v207 + 612) ^ ((_DWORD)qword_140D815F0 << 10)) & 0x7C00;
  *((_DWORD *)v207 + 596) = dword_140C0DEC0++;
  *((_QWORD *)v207 + 256) = 0LL;
  *((char **)v207 + 294) = VfExcludeSections[0];
  *((char **)v207 + 295) = off_140C094A0[0];
  *((char **)v207 + 296) = off_140C094A8[0];
  *((_QWORD *)v207 + 297) = off_140C094B0;
  v327 = __rdtsc();
  v328 = (__ROR8__(v327, 3) ^ v327) * (unsigned __int128)0x7010008004002001uLL;
  v3916 = *((_QWORD *)&v328 + 1);
  v329 = v328 ^ *((_QWORD *)&v328 + 1);
  v330 = (((unsigned __int64)v328 ^ *((_QWORD *)&v328 + 1)) * (unsigned __int128)0x624DD2F1A9FBE77uLL) >> 64;
  if ( v329 - 1000 * ((v330 + ((unsigned __int64)(v329 - v330) >> 1)) >> 9) < 3 )
    *((_DWORD *)v207 + 613) |= 0x400000u;
  *((_QWORD *)v207 + 248) = KeGetPrcb(0LL, v330, v313, 0x2492492492492493LL);
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  *((_DWORD *)v207 + 523) = 0x140000 / a3;
  *((_QWORD *)v207 + 151) = &qword_140C097A0;
  *((_QWORD *)v207 + 152) = &qword_140C0DEE8;
  *((_QWORD *)v207 + 153) = &qword_140C0DEF0;
  *((_QWORD *)v207 + 154) = &qword_140C0DEF8;
  *((_QWORD *)v207 + 155) = PsInitialSystemProcess;
  *((_QWORD *)v207 + 156) = KiWaitAlways;
  *((_QWORD *)v207 + 157) = &KiEntropyTimingRoutine;
  *((_QWORD *)v207 + 158) = &KiProcessListHead;
  *((_QWORD *)v207 + 159) = &KiProcessListLock;
  *((_QWORD *)v207 + 160) = ObpTypeObjectType;
  *((_QWORD *)v207 + 161) = IoDriverObjectType;
  *((_QWORD *)v207 + 162) = PsProcessType;
  *((_QWORD *)v207 + 163) = &PsActiveProcessHead;
  *((_QWORD *)v207 + 164) = &PsInvertedFunctionTable;
  *((_QWORD *)v207 + 165) = &PsLoadedModuleList;
  *((_QWORD *)v207 + 166) = &PsLoadedModuleResource;
  *((_QWORD *)v207 + 167) = &PsLoadedModuleSpinLock;
  *((_QWORD *)v207 + 168) = &PspActiveProcessLock;
  *((_QWORD *)v207 + 169) = &PspCidTable;
  *((_QWORD *)v207 + 170) = &ExpUuidLock;
  *((_QWORD *)v207 + 171) = &AlpcpPortListLock;
  *((_QWORD *)v207 + 172) = &KeServiceDescriptorTable;
  *((_QWORD *)v207 + 173) = &KeServiceDescriptorTableShadow;
  *((_QWORD *)v207 + 174) = &KeServiceDescriptorTableFilter;
  *((_QWORD *)v207 + 175) = &VfThunksExtended;
  *((_QWORD *)v207 + 176) = &PsWin32CallBack;
  *((_QWORD *)v207 + 177) = &qword_140C0DEC8;
  *((_QWORD *)v207 + 178) = &KiTableInformation;
  *((_QWORD *)v207 + 179) = &HandleTableListHead;
  *((_QWORD *)v207 + 180) = &HandleTableListLock;
  *((_QWORD *)v207 + 181) = ObpKernelHandleTable;
  *((_QWORD *)v207 + 182) = 0xFFFFF78000000000uLL;
  *((_QWORD *)v207 + 183) = KiWaitNever;
  *((_QWORD *)v207 + 184) = &SeProtectedMapping;
  *((_QWORD *)v207 + 186) = &KiStackProtectNotifyEvent;
  *((_QWORD *)v207 + 187) = MmPteBase;
  *((_QWORD *)v207 + 188) = PsNtosImageBase;
  *((_QWORD *)v207 + 189) = PsHalImageBase;
  *((_QWORD *)v207 + 190) = &KeNumberProcessors_0;
  v331 = v207 + 1592;
  v332 = 2LL;
  *((_QWORD *)v207 + 193) = &MaxDataSize;
  *((_QWORD *)v207 + 194) = &qword_140D1EA10;
  *((_QWORD *)v207 + 195) = &RtlpInvertedFunctionTable;
  *((_QWORD *)v207 + 185) = KiInterruptThunk;
  v333 = &_ti_a;
  do
  {
    *v331 = *(_OWORD *)v333;
    v331[1] = *((_OWORD *)v333 + 1);
    v331[2] = *((_OWORD *)v333 + 2);
    v331[3] = *((_OWORD *)v333 + 3);
    v331[4] = *((_OWORD *)v333 + 4);
    v331[5] = *((_OWORD *)v333 + 5);
    v331[6] = *((_OWORD *)v333 + 6);
    v331 += 8;
    v334 = *((_OWORD *)v333 + 7);
    v333 += 16;
    *(v331 - 1) = v334;
    --v332;
  }
  while ( v332 );
  *v331 = *(_OWORD *)v333;
  v331[1] = *((_OWORD *)v333 + 1);
  v331[2] = *((_OWORD *)v333 + 2);
  v331[3] = *((_OWORD *)v333 + 3);
  *((_QWORD *)v331 + 8) = v333[8];
  v335 = KxUnexpectedInterrupt0;
  if ( KiKvaShadow )
    v335 = KiIsrThunkShadow;
  *((_QWORD *)v207 + 196) = v335;
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  *((_DWORD *)v207 + 514) = v208;
  *((_DWORD *)v207 + 651) = v208;
  v336 = __rdtsc();
  v337 = (__ROR8__(v336, 3) ^ v336) * (unsigned __int128)0x7010008004002001uLL;
  v3917 = *((_QWORD *)&v337 + 1);
  v338 = ((unsigned __int64)v337 ^ *((_QWORD *)&v337 + 1)) % 0xB;
  if ( (unsigned int)v338 > 5 )
  {
    v342 = v338 - 6;
    if ( v342 )
    {
      v343 = v342 - 1;
      if ( v343 )
      {
        v344 = v343 - 1;
        if ( v344 )
        {
          if ( v344 == 1 )
          {
            v3859[8] = -1333354875;
            v341 = __ROR4__(-1333354868, 33);
          }
          else
          {
            v345 = __rdtsc();
            v346 = __ROR8__(v345, 3);
            v3918 = ((v346 ^ v345) * (unsigned __int128)0x7010008004002001uLL) >> 64;
            v341 = ((((((((unsigned int)v3918 ^ (67117057 * ((unsigned int)v346 ^ (unsigned int)v345))) % 0x1A + 97) << 8) | ((((unsigned int)v3918 ^ (67117057 * ((unsigned int)v346 ^ (unsigned int)v345))) >> 5) % 0x1A + 65)) << 8) | ((((unsigned int)v3918 ^ (67117057 * ((unsigned int)v346 ^ (unsigned int)v345))) >> 10) % 0x1A + 97)) << 8) | ((((unsigned int)v3918 ^ (67117057 * ((unsigned int)v346 ^ (unsigned int)v345))) >> 15) % 0x1A + 65);
          }
        }
        else
        {
          v3859[9] = 1684422978;
          v341 = __ROR4__(1684422978, 8);
        }
      }
      else
      {
        v3859[10] = -2100910376;
        v341 = __ROL4__(-2100910376, 7);
      }
    }
    else
    {
      v3859[11] = 1314342514;
      v341 = __ROR4__(1314342516, 24);
    }
  }
  else if ( (_DWORD)v338 == 5 )
  {
    v3859[7] = 680282605;
    v341 = __ROR4__(680282605, 5);
  }
  else if ( (_DWORD)v338 )
  {
    v339 = v338 - 1;
    if ( v339 )
    {
      v340 = v339 - 1;
      if ( v340 )
      {
        if ( v340 == 1 )
        {
          v3859[3] = -1474152136;
          v341 = __ROR4__(-1474152133, 15);
        }
        else
        {
          v3859[2] = 1728537748;
          v341 = __ROL4__(1728537748, 4);
        }
      }
      else
      {
        v3859[4] = -2051698419;
        v341 = __ROR4__(-2051698419, 2);
      }
    }
    else
    {
      v3859[5] = -1297272415;
      v341 = __ROL4__(-1297272415, 1);
    }
  }
  else
  {
    v3859[6] = -795291432;
    v341 = __ROR4__(-795291432, 6);
  }
  *((_DWORD *)v207 + 516) = v341;
  v347 = __rdtsc();
  v348 = (__ROR8__(v347, 3) ^ v347) * (unsigned __int128)0x7010008004002001uLL;
  v3919 = *((_QWORD *)&v348 + 1);
  v349 = v348 ^ *((_QWORD *)&v348 + 1);
  *((_QWORD *)&v348 + 1) = (((unsigned __int64)v348 ^ *((_QWORD *)&v348 + 1)) * (unsigned __int128)0x410410410410411uLL) >> 64;
  *((_DWORD *)v207 + 517) = v349
                          - 63
                          * ((*((_QWORD *)&v348 + 1) + ((unsigned __int64)(v349 - *((_QWORD *)&v348 + 1)) >> 1)) >> 5)
                          + 1;
  *(_QWORD *)&v348 = __rdtsc();
  v350 = (__ROR8__(v348, 3) ^ (unsigned __int64)v348) * (unsigned __int128)0x7010008004002001uLL;
  v351 = 700 - v208;
  v3920 = *((_QWORD *)&v350 + 1);
  *((_QWORD *)&v350 + 1) ^= v350;
  *((_QWORD *)v207 + 259) = *((_QWORD *)&v350 + 1);
  if ( (DWORD2(v350) & 0x80000000) != 0 )
    v351 = 724 - v208;
  *((_DWORD *)v207 + 599) = (*((_DWORD *)v207 + 599) + v351) ^ 0xBC2A27DB;
  v352 = __rdtsc();
  v353 = (__ROR8__(v352, 3) ^ v352) * (unsigned __int128)0x7010008004002001uLL;
  v3921 = *((_QWORD *)&v353 + 1);
  if ( ((unsigned __int64)v353 ^ *((_QWORD *)&v353 + 1)) % 0xA < 3 )
    *((_DWORD *)v207 + 612) |= 8u;
  v354 = __rdtsc();
  v355 = (__ROR8__(v354, 3) ^ v354) * (unsigned __int128)0x7010008004002001uLL;
  v3922 = *((_QWORD *)&v355 + 1);
  if ( ((unsigned __int64)v355 ^ *((_QWORD *)&v355 + 1)) % 0xA < 3 )
    *((_DWORD *)v207 + 612) |= 0x4000000u;
  v356 = v4366;
  if ( v4366 == 7
    || (v357 = __rdtsc(),
        v358 = (__ROR8__(v357, 3) ^ v357) * (unsigned __int128)0x7010008004002001uLL,
        v3923 = *((_QWORD *)&v358 + 1),
        ((unsigned __int64)v358 ^ *((_QWORD *)&v358 + 1)) % 0xA < 2) )
  {
    *((_DWORD *)v207 + 613) |= 8u;
  }
  v359 = __rdtsc();
  v360 = (__ROR8__(v359, 3) ^ v359) * (unsigned __int128)0x7010008004002001uLL;
  v3924 = *((_QWORD *)&v360 + 1);
  if ( !(((unsigned __int64)v360 ^ *((_QWORD *)&v360 + 1)) % 0xA) )
    *((_DWORD *)v207 + 612) |= 0x8000u;
  v361 = __rdtsc();
  v362 = (__ROR8__(v361, 3) ^ v361) * (unsigned __int128)0x7010008004002001uLL;
  v3925 = *((_QWORD *)&v362 + 1);
  if ( ((unsigned __int64)v362 ^ *((_QWORD *)&v362 + 1)) % 0xA < 3 )
    *((_DWORD *)v207 + 612) |= 0x400000u;
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  v363 = __rdtsc();
  v364 = (__ROR8__(v363, 3) ^ v363) * (unsigned __int128)0x7010008004002001uLL;
  v3926 = *((_QWORD *)&v364 + 1);
  if ( !(((unsigned __int64)v364 ^ *((_QWORD *)&v364 + 1)) % 0xA) )
    *((_DWORD *)v207 + 612) |= 0x8000000u;
  v365 = __rdtsc();
  v366 = (__ROR8__(v365, 3) ^ v365) * (unsigned __int128)0x7010008004002001uLL;
  v3927 = *((_QWORD *)&v366 + 1);
  if ( ((unsigned __int64)v366 ^ *((_QWORD *)&v366 + 1)) % 0xA < 3 )
    *((_DWORD *)v207 + 612) |= 0x800000u;
  if ( a4 )
  {
    if ( (v3862 & 1) != 0 && v4366 != 4 )
    {
      v367 = __rdtsc();
      v368 = (__ROR8__(v367, 3) ^ v367) * (unsigned __int128)0x7010008004002001uLL;
      v3928 = *((_QWORD *)&v368 + 1);
      if ( ((unsigned __int64)v368 ^ *((_QWORD *)&v368 + 1)) % 0xA < 6 )
        *((_DWORD *)v207 + 613) |= 1u;
    }
  }
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  v369 = __rdtsc();
  v370 = (__ROR8__(v369, 3) ^ v369) * (unsigned __int128)0x7010008004002001uLL;
  v3929 = *((_QWORD *)&v370 + 1);
  v371 = *((_QWORD *)&v370 + 1) ^ v370;
  *((_QWORD *)&v370 + 1) = ((*((_QWORD *)&v370 + 1) ^ (unsigned __int64)v370) * (unsigned __int128)0x47AE147AE147AE15uLL) >> 64;
  if ( v371 == 100 * ((*((_QWORD *)&v370 + 1) + ((unsigned __int64)(v371 - *((_QWORD *)&v370 + 1)) >> 1)) >> 6) )
    *((_DWORD *)v207 + 613) |= 0x20000u;
  if ( (*((unsigned __int8 (**)(void))v207 + 133))() )
    *((_DWORD *)v207 + 613) |= 2u;
  if ( (unsigned int)HvlIsHypervisorPresent() )
    *((_DWORD *)v207 + 613) |= 0x40000u;
  if ( (unsigned __int8)MiIsRetpolineEnabled() )
    *((_DWORD *)v207 + 613) |= 0x100000u;
  v372 = __rdtsc();
  v373 = (__ROR8__(v372, 3) ^ v372) * (unsigned __int128)0x7010008004002001uLL;
  v3930 = *((_QWORD *)&v373 + 1);
  if ( !(((unsigned __int64)v373 ^ *((_QWORD *)&v373 + 1)) % 0xA) )
    *((_DWORD *)v207 + 613) |= 0x80u;
  if ( v4366 == 7 )
  {
    *((_DWORD *)v207 + 612) = *((_DWORD *)v207 + 612) & 0xBBFFFFF7 | 0x40000000;
    *((_DWORD *)v207 + 598) = 1;
  }
  if ( (int)KiSwInterruptPresent() >= 0 )
  {
    *((_DWORD *)v207 + 612) |= 0x80000000;
    *((_DWORD *)v207 + 613) |= 0x2000u;
  }
  *((_QWORD *)v207 + 338) = KeComputeParallelSha256StateSize();
  v374 = __rdtsc();
  v375 = (__ROR8__(v374, 3) ^ v374) * (unsigned __int128)0x7010008004002001uLL;
  v3931 = *((_QWORD *)&v375 + 1);
  v376 = ((unsigned __int64)v375 ^ *((_QWORD *)&v375 + 1)) % 0xB;
  if ( (unsigned int)v376 > 5 )
  {
    v380 = v376 - 6;
    if ( v380 )
    {
      v381 = v380 - 1;
      if ( v381 )
      {
        v382 = v381 - 1;
        if ( v382 )
        {
          if ( v382 == 1 )
          {
            v3859[18] = -1333354875;
            v379 = __ROR4__(-1333354868, 33);
          }
          else
          {
            v383 = __rdtsc();
            v384 = __ROR8__(v383, 3);
            v3932 = ((v384 ^ v383) * (unsigned __int128)0x7010008004002001uLL) >> 64;
            v379 = ((((((((unsigned int)v3932 ^ (67117057 * ((unsigned int)v384 ^ (unsigned int)v383))) % 0x1A + 97) << 8) | ((((unsigned int)v3932 ^ (67117057 * ((unsigned int)v384 ^ (unsigned int)v383))) >> 5) % 0x1A + 65)) << 8) | ((((unsigned int)v3932 ^ (67117057 * ((unsigned int)v384 ^ (unsigned int)v383))) >> 10) % 0x1A + 97)) << 8) | ((((unsigned int)v3932 ^ (67117057 * ((unsigned int)v384 ^ (unsigned int)v383))) >> 15) % 0x1A + 65);
          }
        }
        else
        {
          v3859[19] = 1684422978;
          v379 = __ROR4__(1684422978, 8);
        }
      }
      else
      {
        v3859[20] = -2100910376;
        v379 = __ROL4__(-2100910376, 7);
      }
    }
    else
    {
      v3859[21] = 1314342514;
      v379 = __ROR4__(1314342516, 24);
    }
  }
  else if ( (_DWORD)v376 == 5 )
  {
    v3859[17] = 680282605;
    v379 = __ROR4__(680282605, 5);
  }
  else if ( (_DWORD)v376 )
  {
    v377 = v376 - 1;
    if ( v377 )
    {
      v378 = v377 - 1;
      if ( v378 )
      {
        if ( v378 == 1 )
        {
          v3859[13] = -1474152136;
          v379 = __ROR4__(-1474152133, 15);
        }
        else
        {
          v3859[12] = 1728537748;
          v379 = __ROL4__(1728537748, 4);
        }
      }
      else
      {
        v3859[14] = -2051698419;
        v379 = __ROR4__(-2051698419, 2);
      }
    }
    else
    {
      v3859[15] = -1297272415;
      v379 = __ROL4__(-1297272415, 1);
    }
  }
  else
  {
    v3859[16] = -795291432;
    v379 = __ROR4__(-795291432, 6);
  }
  v385 = (*((__int64 (__fastcall **)(__int64, _QWORD, _QWORD))v207 + 30))(64LL, *((_QWORD *)v207 + 338), v379);
  *((_QWORD *)v207 + 337) = v385;
  if ( !v385 )
    return 0;
  if ( !__2a )
  {
    v386 = __rdtsc();
    v387 = (__ROR8__(v386, 3) ^ v386) * (unsigned __int128)0x7010008004002001uLL;
    v3933 = *((_QWORD *)&v387 + 1);
    v388 = ((unsigned __int64)v387 ^ *((_QWORD *)&v387 + 1)) % 0xB;
    if ( (unsigned int)v388 > 5 )
    {
      v392 = v388 - 6;
      if ( v392 )
      {
        v393 = v392 - 1;
        if ( v393 )
        {
          v394 = v393 - 1;
          if ( v394 )
          {
            if ( v394 == 1 )
            {
              v3859[28] = -1333354875;
              v391 = __ROR4__(-1333354868, 33);
            }
            else
            {
              v395 = __rdtsc();
              v396 = __ROR8__(v395, 3);
              v3934 = ((v396 ^ v395) * (unsigned __int128)0x7010008004002001uLL) >> 64;
              v391 = ((((((((unsigned int)v3934 ^ (67117057 * ((unsigned int)v396 ^ (unsigned int)v395))) % 0x1A + 97) << 8) | ((((unsigned int)v3934 ^ (67117057 * ((unsigned int)v396 ^ (unsigned int)v395))) >> 5) % 0x1A + 65)) << 8) | ((((unsigned int)v3934 ^ (67117057 * ((unsigned int)v396 ^ (unsigned int)v395))) >> 10) % 0x1A + 97)) << 8) | ((((unsigned int)v3934 ^ (67117057 * ((unsigned int)v396 ^ (unsigned int)v395))) >> 15) % 0x1A + 65);
            }
          }
          else
          {
            v3859[29] = 1684422978;
            v391 = __ROR4__(1684422978, 8);
          }
        }
        else
        {
          v3859[30] = -2100910376;
          v391 = __ROL4__(-2100910376, 7);
        }
      }
      else
      {
        v3859[31] = 1314342514;
        v391 = __ROR4__(1314342516, 24);
      }
    }
    else if ( (_DWORD)v388 == 5 )
    {
      v3859[27] = 680282605;
      v391 = __ROR4__(680282605, 5);
    }
    else if ( (_DWORD)v388 )
    {
      v389 = v388 - 1;
      if ( v389 )
      {
        v390 = v389 - 1;
        if ( v390 )
        {
          if ( v390 == 1 )
          {
            v3859[23] = -1474152136;
            v391 = __ROR4__(-1474152133, 15);
          }
          else
          {
            v3859[22] = 1728537748;
            v391 = __ROL4__(1728537748, 4);
          }
        }
        else
        {
          v3859[24] = -2051698419;
          v391 = __ROR4__(-2051698419, 2);
        }
      }
      else
      {
        v3859[25] = -1297272415;
        v391 = __ROL4__(-1297272415, 1);
      }
    }
    else
    {
      v3859[26] = -795291432;
      v391 = __ROR4__(-795291432, 6);
    }
    v397 = (_QWORD *)(*((__int64 (__fastcall **)(__int64, __int64, _QWORD))v207 + 30))(64LL, 8LL, v391);
    __2a = (__int64)v397;
    if ( !v397 )
      return 0;
    *v397 = 0LL;
  }
  *((_QWORD *)v207 + 320) = __2a;
  if ( (unsigned int)KiIsKernelCfgActive() )
    *((_DWORD *)v207 + 613) |= 0x10u;
  if ( (unsigned int)KiAreCodePatchesAllowed(v399, v398) )
    *((_DWORD *)v207 + 613) |= 0x40u;
  *((_DWORD *)v207 + 526) = v4366;
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  _RAX = 2147483656LL;
  __asm { cpuid }
  v4139[2] = _RAX;
  v405 = (unsigned int)_RAX >> 8;
  v207[2336] = BYTE1(_RAX);
  v4139[3] = _RBX;
  v4139[4] = _RCX;
  v4139[5] = _RDX;
  v406 = __rdtsc();
  v407 = (__ROR8__(v406, 3) ^ v406) * (unsigned __int128)0x7010008004002001uLL;
  v3935 = *((_QWORD *)&v407 + 1);
  if ( ((unsigned __int64)v407 ^ *((_QWORD *)&v407 + 1)) % 0xA < 3 )
    *((_DWORD *)v207 + 613) |= 0x100u;
  if ( (unsigned __int8)v405 > 0x3Fu )
  {
    v3859[32] = 317;
    KeBugCheckEx(__ROR4__BugCheckCode: (317, 160), BugCheckParameter1: 0LL, BugCheckParameter2: 0LL, BugCheckParameter3: 0LL, BugCheckParameter4: 0LL);
  }
  LODWORD(v3825) = v3862 & 1;
  if ( (v3862 & 1) != 0 )
  {
    v408 = (unsigned __int64)&qword_140C0DF10;
    v409 = (unsigned __int64)&qword_140C0DF10 & 0x3F;
    LODWORD(v3827) = (unsigned __int64)&qword_140C0DF10 & 0x3F;
    RtlImageNtHeader(0x140000000uLL);
    RtlCaptureImageExceptionValues(0x140000000uLL, &v4244, v3860);
    v411 = v4244;
    v4245 = 0x140000000uLL;
    v412 = 0x140000000uLL;
    v3860[0] /= 0xCu;
    v413 = v4244 + 12LL * v3860[0];
    v4246 = v413;
    v4247 = v3936;
    while ( v411 && v411 != v413 )
    {
      v414 = RtlpConvertFunctionEntry(v411, v412, v410);
      LOBYTE(v415) = v409;
      *v4247 = v414;
      v411 = v4244 + 12;
      v4244 += 12LL;
      v416 = *(unsigned int *)v3936[0];
      v417 = *(_DWORD *)(v3936[0] + 4LL) - v416;
      v418 = (_QWORD *)(0x140000000LL + v416);
      v419 = 0x140000000LL + v416 + v417;
      v410 = v418;
      v420 = (const char *)v418;
      if ( (unsigned __int64)v418 < v419 )
      {
        do
        {
          _mm_prefetch(v420, 0);
          v420 += 64;
        }
        while ( (unsigned __int64)v420 < v419 );
      }
      v421 = v408;
      v422 = v417 >> 7;
      if ( v417 >> 7 )
      {
        do
        {
          v423 = 8LL;
          do
          {
            v424 = v410[1] ^ __ROL8__(*v410 ^ v421, v415);
            v410 += 2;
            v421 = __ROL8__(v424, v415);
            --v423;
          }
          while ( v423 );
          v425 = (__ROL8__(v408 ^ ((char *)v410 - (char *)v418), 17) ^ v408 ^ ((char *)v410 - (char *)v418))
               * (unsigned __int128)0x7010008004002001uLL;
          v3936[1] = *((_QWORD *)&v425 + 1);
          v415 = (BYTE8(v425) ^ (unsigned __int8)(v425 ^ v415)) & 0x3F;
          if ( !v415 )
            LOBYTE(v415) = 1;
          --v422;
        }
        while ( v422 );
        LOBYTE(v409) = v3827;
      }
      v426 = v417 & 0x7F;
      if ( v426 >= 8 )
      {
        v427 = (unsigned __int64)v426 >> 3;
        do
        {
          v421 = __ROL8__(*v410++ ^ v421, v415);
          v426 -= 8;
          --v427;
        }
        while ( v427 );
      }
      for ( ; v426; --v426 )
      {
        v428 = *(unsigned __int8 *)v410;
        v410 = (_QWORD *)((char *)v410 + 1);
        v421 = __ROL8__(v428 ^ v421, v415);
      }
      v413 = v4246;
      v408 = v421;
      v412 = v4245;
    }
    v207 = (_BYTE *)v3818;
    v429 = *(_DWORD *)(v3818 + 2448) & 0xFFFBFFFF | (qword_140C0DF10 != v408 ? 0x40000 : 0);
    *(_DWORD *)(v3818 + 2448) = v429;
    if ( (v429 & 0x40000) != 0 && !*((_DWORD *)v207 + 574) )
      *(_QWORD *)(*((_QWORD *)v207 + 177) + 24LL) = qword_140C0DF10 ^ v408;
    v356 = v4366;
  }
  v430 = __rdtsc();
  v431 = (__ROR8__(v430, 3) ^ v430) * (unsigned __int128)0x7010008004002001uLL;
  v3936[2] = *((_QWORD *)&v431 + 1);
  if ( ((unsigned __int64)v431 ^ *((_QWORD *)&v431 + 1)) % 0xA < 2 && v356 != 3 )
  {
    v432 = *((unsigned int *)v207 + 516);
    v433 = __rdtsc();
    v434 = __ROR8__(v433, 3);
    v3937 = ((v434 ^ v433) * (unsigned __int128)0x7010008004002001uLL) >> 64;
    v435 = ((unsigned __int16)v3937 ^ (unsigned __int16)(8193 * (v434 ^ v433))) & 0x7FF;
    v436 = __rdtsc();
    v437 = (__ROR8__(v436, 3) ^ v436) * (unsigned __int128)0x7010008004002001uLL;
    v3938 = *((_QWORD *)&v437 + 1);
    v438 = (*((_QWORD *)&v437 + 1) ^ (unsigned __int64)v437) % (unsigned int)(v435 + 1);
    v439 = (*((__int64 (__fastcall **)(__int64, _QWORD, __int64))v207 + 30))(66LL, (unsigned int)(v435 + 32), v432);
    if ( v439 )
    {
      v441 = v438;
      v442 = (_QWORD *)v439;
      if ( (unsigned int)v438 >= 8 )
      {
        v443 = (unsigned __int64)(unsigned int)v438 >> 3;
        do
        {
          v444 = __rdtsc();
          v441 -= 8;
          v445 = (__ROR8__(v444, 3) ^ v444) * (unsigned __int128)0x7010008004002001uLL;
          v3939 = *((_QWORD *)&v445 + 1);
          *v442++ = v445 ^ *((_QWORD *)&v445 + 1);
          --v443;
        }
        while ( v443 );
      }
      if ( v441 )
      {
        v446 = __rdtsc();
        v447 = (__ROR8__(v446, 3) ^ v446) * (unsigned __int128)0x7010008004002001uLL;
        v3940 = *((_QWORD *)&v447 + 1);
        v448 = v447 ^ *((_QWORD *)&v447 + 1);
        do
        {
          *(_BYTE *)v442 = v448;
          v442 = (_QWORD *)((char *)v442 + 1);
          v448 >>= 8;
          --v441;
        }
        while ( v441 );
      }
      v449 = v435 - v438;
      v440 = v439 + (unsigned int)v438;
      v450 = (_QWORD *)(v440 + 32);
      if ( v449 >= 8 )
      {
        v451 = (unsigned __int64)v449 >> 3;
        do
        {
          v452 = __rdtsc();
          v449 -= 8;
          v453 = (__ROR8__(v452, 3) ^ v452) * (unsigned __int128)0x7010008004002001uLL;
          v3941 = *((_QWORD *)&v453 + 1);
          *v450++ = v453 ^ *((_QWORD *)&v453 + 1);
          --v451;
        }
        while ( v451 );
      }
      if ( v449 )
      {
        v454 = __rdtsc();
        v455 = (__ROR8__(v454, 3) ^ v454) * (unsigned __int128)0x7010008004002001uLL;
        v3942 = *((_QWORD *)&v455 + 1);
        v456 = v455 ^ *((_QWORD *)&v455 + 1);
        do
        {
          *(_BYTE *)v450 = v456;
          v450 = (_QWORD *)((char *)v450 + 1);
          v456 >>= 8;
          --v449;
        }
        while ( v449 );
      }
    }
    else
    {
      ++*((_DWORD *)v207 + 646);
      v440 = 0LL;
    }
    *((_QWORD *)v207 + 321) = v440;
    if ( !v440 )
      return 0;
  }
  v457 = __rdtsc();
  v458 = (__ROR8__(v457, 3) ^ v457) * (unsigned __int128)0x7010008004002001uLL;
  v3943 = *((_QWORD *)&v458 + 1);
  if ( ((unsigned __int64)v458 ^ *((_QWORD *)&v458 + 1)) % 0xA < 2 && (*((_DWORD *)v207 + 612) & 0x40000000) == 0 )
  {
    v459 = *((unsigned int *)v207 + 516);
    v460 = __rdtsc();
    v461 = __ROR8__(v460, 3);
    v3944 = ((v461 ^ v460) * (unsigned __int128)0x7010008004002001uLL) >> 64;
    v462 = ((unsigned __int16)v3944 ^ (unsigned __int16)(8193 * (v461 ^ v460))) & 0x7FF;
    v463 = __rdtsc();
    v464 = (__ROR8__(v463, 3) ^ v463) * (unsigned __int128)0x7010008004002001uLL;
    v3945 = *((_QWORD *)&v464 + 1);
    v465 = (*((_QWORD *)&v464 + 1) ^ (unsigned __int64)v464) % (unsigned int)(v462 + 1);
    v466 = (*((__int64 (__fastcall **)(__int64, _QWORD, __int64))v207 + 30))(66LL, (unsigned int)(v462 + 514), v459);
    if ( !v466 )
    {
      ++*((_DWORD *)v207 + 646);
      goto LABEL_5354;
    }
    v467 = v465;
    v468 = (_QWORD *)v466;
    if ( (unsigned int)v465 >= 8 )
    {
      v469 = (unsigned __int64)(unsigned int)v465 >> 3;
      do
      {
        v470 = __rdtsc();
        v467 -= 8;
        v471 = (__ROR8__(v470, 3) ^ v470) * (unsigned __int128)0x7010008004002001uLL;
        v3946 = *((_QWORD *)&v471 + 1);
        *v468++ = v471 ^ *((_QWORD *)&v471 + 1);
        --v469;
      }
      while ( v469 );
      v207 = (_BYTE *)v3818;
    }
    if ( v467 )
    {
      v472 = __rdtsc();
      v473 = (__ROR8__(v472, 3) ^ v472) * (unsigned __int128)0x7010008004002001uLL;
      v3947 = *((_QWORD *)&v473 + 1);
      v474 = v473 ^ *((_QWORD *)&v473 + 1);
      do
      {
        *(_BYTE *)v468 = v474;
        v468 = (_QWORD *)((char *)v468 + 1);
        v474 >>= 8;
        --v467;
      }
      while ( v467 );
    }
    v475 = v462 - v465;
    v476 = v466 + (unsigned int)v465;
    v477 = (_QWORD *)(v476 + 514);
    if ( v475 >= 8 )
    {
      v478 = (unsigned __int64)v475 >> 3;
      do
      {
        v479 = __rdtsc();
        v475 -= 8;
        v480 = (__ROR8__(v479, 3) ^ v479) * (unsigned __int128)0x7010008004002001uLL;
        v3948 = *((_QWORD *)&v480 + 1);
        *v477++ = v480 ^ *((_QWORD *)&v480 + 1);
        --v478;
      }
      while ( v478 );
    }
    if ( v475 )
    {
      v481 = __rdtsc();
      v482 = (__ROR8__(v481, 3) ^ v481) * (unsigned __int128)0x7010008004002001uLL;
      v3949 = *((_QWORD *)&v482 + 1);
      v483 = v482 ^ *((_QWORD *)&v482 + 1);
      do
      {
        *(_BYTE *)v477 = v483;
        v477 = (_QWORD *)((char *)v477 + 1);
        v483 >>= 8;
        --v475;
      }
      while ( v475 );
    }
    if ( !v476 )
    {
LABEL_5354:
      v3860[1] = 317;
      KeBugCheckEx(__ROR4__BugCheckCode: (317, 160), BugCheckParameter1: 0x1AuLL, BugCheckParameter2: (ULONG_PTR)v207, BugCheckParameter3: 0LL, BugCheckParameter4: 0LL);
    }
    v484 = __rdtsc();
    v485 = (_BYTE *)(v476 + 2);
    v486 = (_BYTE *)(v476 + 2);
    v487 = (__ROR8__(v484, 3) ^ v484) * (unsigned __int128)0x7010008004002001uLL;
    v3950 = *((_QWORD *)&v487 + 1);
    v3951[0] = v487 ^ *((_QWORD *)&v487 + 1);
    for ( m = 0; m < 0x100; ++m )
      *v486++ = m;
    v489 = 256LL;
    v490 = 0;
    do
    {
      v490 += *((_BYTE *)v3951 + ((-2 - (_BYTE)v476 + (_BYTE)v485) & 7)) + *v485;
      v491 = *(_BYTE *)(v490 + v476 + 2);
      *(_BYTE *)(v490 + v476 + 2) = *v485;
      *v485++ = v491;
      --v489;
    }
    while ( v489 );
    v492 = 256;
    v493 = (_QWORD *)(v476 + 258);
    v494 = 32LL;
    do
    {
      v495 = __rdtsc();
      v492 -= 8;
      v496 = (__ROR8__(v495, 3) ^ v495) * (unsigned __int128)0x7010008004002001uLL;
      v3951[1] = *((_QWORD *)&v496 + 1);
      *v493++ = v496 ^ *((_QWORD *)&v496 + 1);
      --v494;
    }
    while ( v494 );
    if ( v492 )
    {
      v497 = __rdtsc();
      v498 = (__ROR8__(v497, 3) ^ v497) * (unsigned __int128)0x7010008004002001uLL;
      v3951[2] = *((_QWORD *)&v498 + 1);
      v499 = v498 ^ *((_QWORD *)&v498 + 1);
      do
      {
        *(_BYTE *)v493 = v499;
        v493 = (_QWORD *)((char *)v493 + 1);
        v499 >>= 8;
        --v492;
      }
      while ( v492 );
    }
    *((_QWORD *)v207 + 334) = v476;
  }
  v500 = __rdtsc();
  v501 = (__ROR8__(v500, 3) ^ v500) * (unsigned __int128)0x7010008004002001uLL;
  v3951[3] = *((_QWORD *)&v501 + 1);
  if ( !((*((_QWORD *)&v501 + 1) ^ (unsigned __int64)v501) % 0xA) && (((v4366 - 3) & 0xFFFFFFFA) != 0 || v4366 == 8) )
  {
    for ( n = 0; n < 0x10; ++n )
    {
      v503 = __rdtsc();
      v504 = (__ROR8__(v503, 3) ^ v503) * (unsigned __int128)0x7010008004002001uLL;
      v3951[4] = *((_QWORD *)&v504 + 1);
      v505 = ((unsigned __int64)v504 ^ *((_QWORD *)&v504 + 1)) % 0xB;
      if ( (unsigned int)v505 > 5 )
      {
        v509 = v505 - 6;
        if ( v509 )
        {
          v510 = v509 - 1;
          if ( v510 )
          {
            v511 = v510 - 1;
            if ( v511 )
            {
              if ( v511 == 1 )
              {
                v3860[8] = -1333354875;
                v508 = __ROR4__(-1333354868, 33);
              }
              else
              {
                v512 = __rdtsc();
                v513 = __ROR8__(v512, 3);
                v3952 = ((v513 ^ v512) * (unsigned __int128)0x7010008004002001uLL) >> 64;
                v514 = (67117057 * (v513 ^ v512)) ^ v3952;
                v508 = ((((((v514 % 0x1A + 97) << 8) | ((v514 >> 5)
                                                      - 26
                                                      * ((unsigned int)((1321528399 * (unsigned __int64)(v514 >> 5)) >> 32) >> 3)
                                                      + 65)) << 8) | ((v514 >> 10) % 0x1A + 97)) << 8) | ((v514 >> 15) % 0x1A + 65);
              }
            }
            else
            {
              v3860[9] = 1684422978;
              v508 = __ROR4__(1684422978, 8);
            }
          }
          else
          {
            v3860[10] = -2100910376;
            v508 = __ROL4__(-2100910376, 7);
          }
        }
        else
        {
          v3860[11] = 1314342514;
          v508 = __ROR4__(1314342516, 24);
        }
      }
      else if ( (_DWORD)v505 == 5 )
      {
        v3860[7] = 680282605;
        v508 = __ROR4__(680282605, 5);
      }
      else if ( (_DWORD)v505 )
      {
        v506 = v505 - 1;
        if ( v506 )
        {
          v507 = v506 - 1;
          if ( v507 )
          {
            if ( v507 == 1 )
            {
              v3860[3] = -1474152136;
              v508 = __ROR4__(-1474152133, 15);
            }
            else
            {
              v3860[2] = 1728537748;
              v508 = __ROL4__(1728537748, 4);
            }
          }
          else
          {
            v3860[4] = -2051698419;
            v508 = __ROR4__(-2051698419, 2);
          }
        }
        else
        {
          v3860[5] = -1297272415;
          v508 = __ROL4__(-1297272415, 1);
        }
      }
      else
      {
        v3860[6] = -795291432;
        v508 = __ROR4__(-795291432, 6);
      }
      v515 = ExAllocatePool2(66LL, 64LL, v508);
      v4268[n] = v515;
      if ( !v515 )
        goto LABEL_5355;
    }
    v516 = __rdtsc();
    v517 = __ROR8__(v516, 3);
    v518 = 15;
    v3953 = ((v517 ^ v516) * (unsigned __int128)0x7010008004002001uLL) >> 64;
    v519 = ((unsigned int)v3953 ^ (67117057 * ((unsigned int)v517 ^ (unsigned int)v516))) & 0xF;
    v520 = &v4268[v519];
    v521 = *v520;
    memmove(v520, Src: &v4268[(unsigned int)(v519 + 1)], Size: 8LL * (unsigned int)(15 - v519));
    v522 = (unsigned __int64)&qword_140C0DEC8 ^ ((v521 ^ ((v521 ^ 0xE5D49100uLL) >> 4)) >> 4);
    v523 = v522 & 0xF;
    if ( (v522 & 0xF) == 0 )
      v523 = 1;
    v524 = v521;
    do
    {
      v525 = (_QWORD *)(v524 + (v522 & 0xF));
      v526 = __rdtsc();
      v527 = v518;
      v528 = (__ROR8__(v526, 3) ^ v526) * (unsigned __int128)0x7010008004002001uLL;
      --v518;
      v3954 = *((_QWORD *)&v528 + 1);
      DWORD2(v528) = (*((_QWORD *)&v528 + 1) ^ (unsigned __int64)v528) % v527;
      v529 = &v4268[DWORD2(v528)];
      v524 = *v529;
      memmove(v529, Src: &v4268[DWORD2(v528) + 1], Size: 8LL * (v518 - DWORD2(v528)));
      *v525 = v524;
      v522 ^= (v524 ^ ((v524 ^ 0x1E5200uLL) >> 4)) >> 4;
      --v523;
    }
    while ( v523 );
    v530 = __rdtsc();
    v531 = (__ROR8__(v530, 3) ^ v530) * (unsigned __int128)0x7010008004002001uLL;
    v3955 = *((_QWORD *)&v531 + 1);
    v532 = ((unsigned __int64)v531 ^ *((_QWORD *)&v531 + 1)) % 0xB;
    if ( (unsigned int)v532 > 5 )
    {
      v536 = v532 - 6;
      if ( v536 )
      {
        v537 = v536 - 1;
        if ( v537 )
        {
          v538 = v537 - 1;
          if ( v538 )
          {
            if ( v538 == 1 )
            {
              v3860[18] = -1333354875;
              v535 = __ROR4__(-1333354868, 33);
            }
            else
            {
              v539 = __rdtsc();
              v540 = __ROR8__(v539, 3);
              v3956 = ((v540 ^ v539) * (unsigned __int128)0x7010008004002001uLL) >> 64;
              v541 = (67117057 * (v540 ^ v539)) ^ v3956;
              v535 = ((((((v541 % 0x1A + 97) << 8) | ((v541 >> 5)
                                                    - 26
                                                    * ((unsigned int)((1321528399 * (unsigned __int64)(v541 >> 5)) >> 32) >> 3)
                                                    + 65)) << 8) | ((v541 >> 10) % 0x1A + 97)) << 8) | ((v541 >> 15) % 0x1A + 65);
            }
          }
          else
          {
            v3860[19] = 1684422978;
            v535 = __ROR4__(1684422978, 8);
          }
        }
        else
        {
          v3860[20] = -2100910376;
          v535 = __ROL4__(-2100910376, 7);
        }
      }
      else
      {
        v3860[21] = 1314342514;
        v535 = __ROR4__(1314342516, 24);
      }
    }
    else if ( (_DWORD)v532 == 5 )
    {
      v3860[17] = 680282605;
      v535 = __ROR4__(680282605, 5);
    }
    else if ( (_DWORD)v532 )
    {
      v533 = v532 - 1;
      if ( v533 )
      {
        v534 = v533 - 1;
        if ( v534 )
        {
          if ( v534 == 1 )
          {
            v3860[13] = -1474152136;
            v535 = __ROR4__(-1474152133, 15);
          }
          else
          {
            v3860[12] = 1728537748;
            v535 = __ROL4__(1728537748, 4);
          }
        }
        else
        {
          v3860[14] = -2051698419;
          v535 = __ROR4__(-2051698419, 2);
        }
      }
      else
      {
        v3860[15] = -1297272415;
        v535 = __ROL4__(-1297272415, 1);
      }
    }
    else
    {
      v3860[16] = -795291432;
      v535 = __ROR4__(-795291432, 6);
    }
    v542 = ExAllocatePool2(66LL, 64LL, v535);
    v207 = (_BYTE *)v3818;
    if ( !v542 )
    {
LABEL_5355:
      v3860[22] = 317;
      KeBugCheckEx(__ROR4__BugCheckCode: (317, 160), BugCheckParameter1: 0x19uLL, BugCheckParameter2: (ULONG_PTR)v207, BugCheckParameter3: 0LL, BugCheckParameter4: 0LL);
    }
    *(_BYTE *)v542 = 19;
    *(_BYTE *)(v542 + 1) = 1;
    *(_WORD *)(v542 + 2) = 0;
    *(_QWORD *)(v542 + 24) = sub_1403DEDE0;
    *(_QWORD *)(v542 + 32) = v521;
    *(_QWORD *)(v542 + 56) = 0LL;
    *(_QWORD *)(v542 + 16) = 0LL;
    *((_QWORD *)v207 + 339) = v542;
  }
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  v543 = __rdtsc();
  v544 = (__ROR8__(v543, 3) ^ v543) * (unsigned __int128)0x7010008004002001uLL;
  v3957 = *((_QWORD *)&v544 + 1);
  if ( (*((_QWORD *)&v544 + 1) ^ (unsigned __int64)v544) % 0xA < 5 )
    *((_DWORD *)v207 + 612) |= 0x1000000u;
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  v545 = *((unsigned int *)v207 + 516);
  v546 = __rdtsc();
  v547 = __ROR8__(v546, 3);
  v3958 = ((v547 ^ v546) * (unsigned __int128)0x7010008004002001uLL) >> 64;
  v548 = ((unsigned __int16)(8193 * (v547 ^ v546)) ^ (unsigned __int16)v3958) & 0x7FF;
  v549 = __rdtsc();
  v550 = (__ROR8__(v549, 3) ^ v549) * (unsigned __int128)0x7010008004002001uLL;
  v3959 = *((_QWORD *)&v550 + 1);
  v551 = (*((_QWORD *)&v550 + 1) ^ (unsigned __int64)v550) % (unsigned int)(v548 + 1);
  v552 = (*((__int64 (__fastcall **)(__int64, _QWORD, __int64))v207 + 30))(66LL, (unsigned int)(v548 + 136), v545);
  v553 = v552;
  if ( !v552 )
  {
LABEL_782:
    ++*((_DWORD *)v207 + 646);
    return 0;
  }
  v554 = v551;
  v555 = (_QWORD *)v552;
  if ( (unsigned int)v551 >= 8 )
  {
    v556 = (unsigned __int64)(unsigned int)v551 >> 3;
    do
    {
      v557 = __rdtsc();
      v554 -= 8;
      v558 = (__ROR8__(v557, 3) ^ v557) * (unsigned __int128)0x7010008004002001uLL;
      v3960 = *((_QWORD *)&v558 + 1);
      *v555++ = v558 ^ *((_QWORD *)&v558 + 1);
      --v556;
    }
    while ( v556 );
  }
  if ( v554 )
  {
    v559 = __rdtsc();
    v560 = (__ROR8__(v559, 3) ^ v559) * (unsigned __int128)0x7010008004002001uLL;
    v3961 = *((_QWORD *)&v560 + 1);
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
  v562 = v548 - v551;
  v563 = (struct _KTIMER *)(v553 + (unsigned int)v551);
  Timer = v563;
  p_WaitListHead = &v563[2].Header.WaitListHead;
  if ( v562 >= 8 )
  {
    v565 = (unsigned __int64)v562 >> 3;
    do
    {
      v566 = __rdtsc();
      v562 -= 8;
      v567 = (__ROR8__(v566, 3) ^ v566) * (unsigned __int128)0x7010008004002001uLL;
      v3962 = *((_QWORD *)&v567 + 1);
      p_WaitListHead->Flink = (struct _LIST_ENTRY *)(v567 ^ *((_QWORD *)&v567 + 1));
      p_WaitListHead = (LIST_ENTRY *)((char *)p_WaitListHead + 8);
      --v565;
    }
    while ( v565 );
    v563 = Timer;
  }
  if ( v562 )
  {
    v568 = __rdtsc();
    v569 = (__ROR8__(v568, 3) ^ v568) * (unsigned __int128)0x7010008004002001uLL;
    v3963 = *((_QWORD *)&v569 + 1);
    v570 = v569 ^ *((_QWORD *)&v569 + 1);
    do
    {
      LOBYTE(p_WaitListHead->Flink) = v570;
      p_WaitListHead = (LIST_ENTRY *)((char *)p_WaitListHead + 1);
      v570 >>= 8;
      --v562;
    }
    while ( v562 );
  }
  if ( !v563 )
    return 0;
  *((_QWORD *)v207 + 241) = v563;
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  v571 = __rdtsc();
  v572 = (__ROR8__(v571, 3) ^ v571) * (unsigned __int128)0x7010008004002001uLL;
  v3964 = *((_QWORD *)&v572 + 1);
  if ( ((unsigned __int64)v572 ^ *((_QWORD *)&v572 + 1)) % 0xA >= 3 )
  {
    v591 = v563 + 1;
    v3885 = (ULONG_PTR)v591;
  }
  else
  {
    v573 = *((unsigned int *)v207 + 516);
    v574 = __rdtsc();
    v575 = __ROR8__(v574, 3);
    v3965 = ((v575 ^ v574) * (unsigned __int128)0x7010008004002001uLL) >> 64;
    v576 = ((unsigned __int16)(8193 * (v575 ^ v574)) ^ (unsigned __int16)v3965) & 0x7FF;
    v577 = __rdtsc();
    v578 = (__ROR8__(v577, 3) ^ v577) * (unsigned __int128)0x7010008004002001uLL;
    v3966 = *((_QWORD *)&v578 + 1);
    v579 = (*((_QWORD *)&v578 + 1) ^ (unsigned __int64)v578) % (unsigned int)(v576 + 1);
    v580 = (*((__int64 (__fastcall **)(__int64, _QWORD, __int64))v207 + 30))(66LL, (unsigned int)(v576 + 72), v573);
    v581 = v580;
    if ( !v580 )
      goto LABEL_782;
    v582 = v579;
    v583 = (_QWORD *)v580;
    if ( (unsigned int)v579 >= 8 )
    {
      v584 = (unsigned __int64)(unsigned int)v579 >> 3;
      do
      {
        v585 = __rdtsc();
        v582 -= 8;
        v586 = (__ROR8__(v585, 3) ^ v585) * (unsigned __int128)0x7010008004002001uLL;
        v3967 = *((_QWORD *)&v586 + 1);
        *v583++ = v586 ^ *((_QWORD *)&v586 + 1);
        --v584;
      }
      while ( v584 );
    }
    if ( v582 )
    {
      v587 = __rdtsc();
      v588 = (__ROR8__(v587, 3) ^ v587) * (unsigned __int128)0x7010008004002001uLL;
      v3968 = *((_QWORD *)&v588 + 1);
      v589 = v588 ^ *((_QWORD *)&v588 + 1);
      do
      {
        *(_BYTE *)v583 = v589;
        v583 = (_QWORD *)((char *)v583 + 1);
        v589 >>= 8;
        --v582;
      }
      while ( v582 );
    }
    v590 = v576 - v579;
    v591 = (struct _KTIMER *)(v581 + (unsigned int)v579);
    v3885 = (ULONG_PTR)v591;
    v592 = &v591[1].Header.WaitListHead;
    if ( v590 >= 8 )
    {
      v593 = (unsigned __int64)v590 >> 3;
      do
      {
        v594 = __rdtsc();
        v590 -= 8;
        v595 = (__ROR8__(v594, 3) ^ v594) * (unsigned __int128)0x7010008004002001uLL;
        v3969 = *((_QWORD *)&v595 + 1);
        v592->Flink = (struct _LIST_ENTRY *)(v595 ^ *((_QWORD *)&v595 + 1));
        v592 = (LIST_ENTRY *)((char *)v592 + 8);
        --v593;
      }
      while ( v593 );
      v591 = (struct _KTIMER *)v3885;
    }
    if ( v590 )
    {
      v596 = __rdtsc();
      v597 = (__ROR8__(v596, 3) ^ v596) * (unsigned __int128)0x7010008004002001uLL;
      v3970 = *((_QWORD *)&v597 + 1);
      v598 = v597 ^ *((_QWORD *)&v597 + 1);
      do
      {
        LOBYTE(v592->Flink) = v598;
        v592 = (LIST_ENTRY *)((char *)v592 + 1);
        v598 >>= 8;
        --v590;
      }
      while ( v590 );
    }
    if ( !v591 )
      return 0;
  }
  *((_QWORD *)v207 + 242) = v591;
  if ( v4366 == 4 )
  {
    v599 = *((unsigned int *)v207 + 516);
    v600 = __rdtsc();
    v601 = __ROR8__(v600, 3);
    v3971 = ((v601 ^ v600) * (unsigned __int128)0x7010008004002001uLL) >> 64;
    v602 = ((unsigned __int16)(8193 * (v601 ^ v600)) ^ (unsigned __int16)v3971) & 0x7FF;
    v603 = __rdtsc();
    v604 = (__ROR8__(v603, 3) ^ v603) * (unsigned __int128)0x7010008004002001uLL;
    v3972 = *((_QWORD *)&v604 + 1);
    v605 = (*((_QWORD *)&v604 + 1) ^ (unsigned __int64)v604) % (unsigned int)(v602 + 1);
    v606 = (*((__int64 (__fastcall **)(__int64, _QWORD, __int64))v207 + 30))(66LL, (unsigned int)(v602 + 88), v599);
    if ( !v606 )
    {
      ++*((_DWORD *)v207 + 646);
      goto LABEL_5356;
    }
    v607 = v605;
    v608 = (_QWORD *)v606;
    if ( (unsigned int)v605 >= 8 )
    {
      v609 = (unsigned __int64)(unsigned int)v605 >> 3;
      do
      {
        v610 = __rdtsc();
        v607 -= 8;
        v611 = (__ROR8__(v610, 3) ^ v610) * (unsigned __int128)0x7010008004002001uLL;
        v3973 = *((_QWORD *)&v611 + 1);
        *v608++ = v611 ^ *((_QWORD *)&v611 + 1);
        --v609;
      }
      while ( v609 );
    }
    if ( v607 )
    {
      v612 = __rdtsc();
      v613 = (__ROR8__(v612, 3) ^ v612) * (unsigned __int128)0x7010008004002001uLL;
      v3974 = *((_QWORD *)&v613 + 1);
      v614 = v613 ^ *((_QWORD *)&v613 + 1);
      do
      {
        *(_BYTE *)v608 = v614;
        v608 = (_QWORD *)((char *)v608 + 1);
        v614 >>= 8;
        --v607;
      }
      while ( v607 );
    }
    v615 = v602 - v605;
    v616 = v606 + (unsigned int)v605;
    v617 = (_QWORD *)(v616 + 88);
    if ( v615 >= 8 )
    {
      v618 = (unsigned __int64)v615 >> 3;
      do
      {
        v619 = __rdtsc();
        v615 -= 8;
        v620 = (__ROR8__(v619, 3) ^ v619) * (unsigned __int128)0x7010008004002001uLL;
        v3975 = *((_QWORD *)&v620 + 1);
        *v617++ = v620 ^ *((_QWORD *)&v620 + 1);
        --v618;
      }
      while ( v618 );
    }
    if ( v615 )
    {
      v621 = __rdtsc();
      v622 = (__ROR8__(v621, 3) ^ v621) * (unsigned __int128)0x7010008004002001uLL;
      v3976 = *((_QWORD *)&v622 + 1);
      v623 = v622 ^ *((_QWORD *)&v622 + 1);
      do
      {
        *(_BYTE *)v617 = v623;
        v617 = (_QWORD *)((char *)v617 + 1);
        v623 >>= 8;
        --v615;
      }
      while ( v615 );
    }
    if ( !v616 )
      goto LABEL_5356;
    *((_QWORD *)v207 + 316) = v616;
    *((_DWORD *)v207 + 612) |= 8u;
    v624 = __rdtsc();
    v625 = ((__ROR8__(v624, 3) ^ v624) * (unsigned __int128)0x7010008004002001uLL) >> 64;
    *((_QWORD *)v207 + 307) = 0LL;
    v626 = *((_QWORD *)v207 + 202);
    v3977 = v625;
    PsEnumProcessThreads(
      *(_QWORD *)(*((_QWORD *)v207 + 214)
                + *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + v626)
                + *((_QWORD *)v207 + 210)),
      sub_140B34730,
      v207);
    if ( !*((_QWORD *)v207 + 307) )
    {
LABEL_5356:
      v3860[23] = 317;
      KeBugCheckEx(__ROR4__BugCheckCode: (317, 160), BugCheckParameter1: 0x16uLL, BugCheckParameter2: (ULONG_PTR)v207, BugCheckParameter3: 0LL, BugCheckParameter4: 0LL);
    }
    *((_QWORD *)v207 + 317) = KiDispatchCallout;
    *((_QWORD *)v207 + 318) = xHalTimerWatchdogStop;
    *((_DWORD *)v207 + 597) = -1115657675;
  }
  else if ( v4366 == 5 )
  {
    v627 = *((unsigned int *)v207 + 516);
    v628 = __rdtsc();
    v629 = __ROR8__(v628, 3);
    v3978 = ((v629 ^ v628) * (unsigned __int128)0x7010008004002001uLL) >> 64;
    v630 = ((unsigned __int16)(8193 * (v629 ^ v628)) ^ (unsigned __int16)v3978) & 0x7FF;
    v631 = __rdtsc();
    v632 = (__ROR8__(v631, 3) ^ v631) * (unsigned __int128)0x7010008004002001uLL;
    v3979 = *((_QWORD *)&v632 + 1);
    v633 = (*((_QWORD *)&v632 + 1) ^ (unsigned __int64)v632) % (unsigned int)(v630 + 1);
    v634 = (*((__int64 (__fastcall **)(__int64, _QWORD, __int64))v207 + 30))(66LL, (unsigned int)(v630 + 80), v627);
    if ( v634 )
    {
      v636 = v633;
      v637 = (_QWORD *)v634;
      if ( (unsigned int)v633 >= 8 )
      {
        v638 = (unsigned __int64)(unsigned int)v633 >> 3;
        do
        {
          v639 = __rdtsc();
          v636 -= 8;
          v640 = (__ROR8__(v639, 3) ^ v639) * (unsigned __int128)0x7010008004002001uLL;
          v3980 = *((_QWORD *)&v640 + 1);
          *v637++ = v640 ^ *((_QWORD *)&v640 + 1);
          --v638;
        }
        while ( v638 );
      }
      if ( v636 )
      {
        v641 = __rdtsc();
        v642 = (__ROR8__(v641, 3) ^ v641) * (unsigned __int128)0x7010008004002001uLL;
        v3981 = *((_QWORD *)&v642 + 1);
        v643 = v642 ^ *((_QWORD *)&v642 + 1);
        do
        {
          *(_BYTE *)v637 = v643;
          v637 = (_QWORD *)((char *)v637 + 1);
          v643 >>= 8;
          --v636;
        }
        while ( v636 );
      }
      v644 = v630 - v633;
      v635 = (_DWORD *)(v634 + (unsigned int)v633);
      v645 = v635 + 20;
      if ( v644 >= 8 )
      {
        v646 = (unsigned __int64)v644 >> 3;
        do
        {
          v647 = __rdtsc();
          v644 -= 8;
          v648 = (__ROR8__(v647, 3) ^ v647) * (unsigned __int128)0x7010008004002001uLL;
          v3982 = *((_QWORD *)&v648 + 1);
          *v645++ = v648 ^ *((_QWORD *)&v648 + 1);
          --v646;
        }
        while ( v646 );
      }
      if ( v644 )
      {
        v649 = __rdtsc();
        v650 = (__ROR8__(v649, 3) ^ v649) * (unsigned __int128)0x7010008004002001uLL;
        v3983 = *((_QWORD *)&v650 + 1);
        v651 = v650 ^ *((_QWORD *)&v650 + 1);
        do
        {
          *(_BYTE *)v645 = v651;
          v645 = (_QWORD *)((char *)v645 + 1);
          v651 >>= 8;
          --v644;
        }
        while ( v644 );
      }
    }
    else
    {
      ++*((_DWORD *)v207 + 646);
      v635 = 0LL;
    }
    *((_QWORD *)v207 + 307) = v635;
    if ( !v635 )
    {
      v3860[24] = 317;
      KeBugCheckEx(__ROR4__BugCheckCode: (317, 160), BugCheckParameter1: 0x18uLL, BugCheckParameter2: (ULONG_PTR)v207, BugCheckParameter3: 0LL, BugCheckParameter4: 0LL);
    }
    *v635 = 0;
    v652 = *((_QWORD *)v207 + 307);
    v653 = *(_QWORD *)(a4 + 24);
    *(_OWORD *)(v652 + 8) = *(_OWORD *)v653;
    *(_OWORD *)(v652 + 24) = *(_OWORD *)(v653 + 16);
    *(_OWORD *)(v652 + 40) = *(_OWORD *)(v653 + 32);
    *(_OWORD *)(v652 + 56) = *(_OWORD *)(v653 + 48);
    v654 = KeAcquireSpinLockRaiseToDpc(SpinLock: &KiHardwareTriggerLock);
    _InterlockedExchange64((volatile __int64 *)(v653 + 24), (__int64)sub_1403EB150);
    *(_QWORD *)(v653 + 32) = v652;
    KeReleaseSpinLock(SpinLock: &KiHardwareTriggerLock, NewIrql: v654);
    v655 = *((_QWORD *)v207 + 307);
    *((_OWORD *)v207 + 154) = *(_OWORD *)(v655 + 8);
    *((_OWORD *)v207 + 155) = *(_OWORD *)(v655 + 24);
    *((_OWORD *)v207 + 156) = *(_OWORD *)(v655 + 40);
    *((_OWORD *)v207 + 157) = *(_OWORD *)(v655 + 56);
  }
  v656 = __rdtsc();
  v657 = (__ROR8__(v656, 3) ^ v656) * (unsigned __int128)0x7010008004002001uLL;
  v3984 = *((_QWORD *)&v657 + 1);
  if ( !(((unsigned __int64)v657 ^ *((_QWORD *)&v657 + 1)) % 0xA) )
    *((_DWORD *)v207 + 612) |= 2u;
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  v658 = __rdtsc();
  v659 = (__ROR8__(v658, 3) ^ v658) * (unsigned __int128)0x7010008004002001uLL;
  v3985 = *((_QWORD *)&v659 + 1);
  if ( ((unsigned __int64)v659 ^ *((_QWORD *)&v659 + 1)) % 0xA < 7 )
  {
    v660 = *((_DWORD *)v207 + 612);
    if ( (v660 & 0x40000000) == 0 )
      *((_DWORD *)v207 + 612) = v660 | 0x80;
  }
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  v661 = __rdtsc();
  v662 = (__ROR8__(v661, 3) ^ v661) * (unsigned __int128)0x7010008004002001uLL;
  v3986 = *((_QWORD *)&v662 + 1);
  if ( ((unsigned __int64)v662 ^ *((_QWORD *)&v662 + 1)) % 0xA < 7 )
  {
    v663 = __rdtsc();
    v664 = (__ROR8__(v663, 3) ^ v663) * (unsigned __int128)0x7010008004002001uLL;
    v3987 = *((_QWORD *)&v664 + 1);
    if ( ((unsigned __int64)v664 ^ *((_QWORD *)&v664 + 1)) % 0xA >= 7 )
    {
      v690 = ExAllocateTimer(0LL, 0LL, 8LL);
      if ( v690 )
      {
        *((_QWORD *)v207 + 319) = v690;
        v691 = __rdtsc();
        v3994 = ((__ROR8__(v691, 3) ^ v691) * (unsigned __int128)0x7010008004002001uLL) >> 64;
        ExSetTimer(BugCheckParameter1: v690);
        goto LABEL_882;
      }
    }
    else
    {
      v665 = *((unsigned int *)v207 + 516);
      v666 = __rdtsc();
      v667 = __ROR8__(v666, 3);
      v3988 = ((v667 ^ v666) * (unsigned __int128)0x7010008004002001uLL) >> 64;
      v668 = ((unsigned __int16)(8193 * (v667 ^ v666)) ^ (unsigned __int16)v3988) & 0x7FF;
      v669 = __rdtsc();
      v670 = (__ROR8__(v669, 3) ^ v669) * (unsigned __int128)0x7010008004002001uLL;
      v3989 = *((_QWORD *)&v670 + 1);
      v671 = (*((_QWORD *)&v670 + 1) ^ (unsigned __int64)v670) % (unsigned int)(v668 + 1);
      v672 = (*((__int64 (__fastcall **)(__int64, _QWORD, __int64))v207 + 30))(66LL, (unsigned int)(v668 + 24), v665);
      if ( !v672 )
      {
        ++*((_DWORD *)v207 + 646);
        goto LABEL_5358;
      }
      v673 = v671;
      v674 = (_QWORD *)v672;
      if ( (unsigned int)v671 >= 8 )
      {
        v675 = (unsigned __int64)(unsigned int)v671 >> 3;
        do
        {
          v676 = __rdtsc();
          v673 -= 8;
          v677 = (__ROR8__(v676, 3) ^ v676) * (unsigned __int128)0x7010008004002001uLL;
          v3990 = *((_QWORD *)&v677 + 1);
          *v674++ = v677 ^ *((_QWORD *)&v677 + 1);
          --v675;
        }
        while ( v675 );
      }
      if ( v673 )
      {
        v678 = __rdtsc();
        v679 = (__ROR8__(v678, 3) ^ v678) * (unsigned __int128)0x7010008004002001uLL;
        v3991 = *((_QWORD *)&v679 + 1);
        v680 = v679 ^ *((_QWORD *)&v679 + 1);
        do
        {
          *(_BYTE *)v674 = v680;
          v674 = (_QWORD *)((char *)v674 + 1);
          v680 >>= 8;
          --v673;
        }
        while ( v673 );
      }
      v681 = v668 - v671;
      v682 = (struct _KEVENT *)(v672 + (unsigned int)v671);
      v683 = v682 + 1;
      if ( v681 >= 8 )
      {
        v684 = (unsigned __int64)v681 >> 3;
        do
        {
          v685 = __rdtsc();
          v681 -= 8;
          v686 = (__ROR8__(v685, 3) ^ v685) * (unsigned __int128)0x7010008004002001uLL;
          v3992 = *((_QWORD *)&v686 + 1);
          *(_QWORD *)&v683->Header.Lock = v686 ^ *((_QWORD *)&v686 + 1);
          v683 = (struct _KEVENT *)((char *)v683 + 8);
          --v684;
        }
        while ( v684 );
      }
      if ( v681 )
      {
        v687 = __rdtsc();
        v688 = (__ROR8__(v687, 3) ^ v687) * (unsigned __int128)0x7010008004002001uLL;
        v3993 = *((_QWORD *)&v688 + 1);
        v689 = v688 ^ *((_QWORD *)&v688 + 1);
        do
        {
          v683->Header.Type = v689;
          v683 = (struct _KEVENT *)((char *)v683 + 1);
          v689 >>= 8;
          --v681;
        }
        while ( v681 );
      }
      if ( v682 )
      {
        KeInitializeEvent(Event: v682, Type: NotificationEvent, State: 0);
        *((_QWORD *)v207 + 319) = v682;
        goto LABEL_882;
      }
    }
LABEL_5358:
    v3860[25] = 317;
    KeBugCheckEx(__ROR4__BugCheckCode: (317, 160), BugCheckParameter1: 0x17uLL, BugCheckParameter2: (ULONG_PTR)v207, BugCheckParameter3: 0LL, BugCheckParameter4: 0LL);
  }
LABEL_882:
  v692 = __rdtsc();
  v693 = (__ROR8__(v692, 3) ^ v692) * (unsigned __int128)0x7010008004002001uLL;
  v3995 = *((_QWORD *)&v693 + 1);
  if ( ((unsigned __int64)v693 ^ *((_QWORD *)&v693 + 1)) % 0xA < 2 && *((int *)v207 + 612) >= 0 )
    *((_DWORD *)v207 + 613) |= 0x200u;
  v694 = Size;
  v695 = &v207[v3826];
  v696 = (int)Src;
  memmove(v695, Src: Src, Size: Size);
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  if ( v694 )
  {
    *(_WORD *)&v695[(unsigned int)KeGuardDispatchICall - v696] = -7937;
    v695[(unsigned int)KeGuardCheckICall - v696] = -61;
  }
  *((_QWORD *)v207 + 281) = 0x140000000uLL;
  v697 = RtlImageNtHeader(0x140000000uLL);
  *((_QWORD *)v207 + 283) = v697;
  *((_QWORD *)v207 + 282) = 0x140000000LL + *(unsigned int *)(v697 + 80);
  *((_DWORD *)v207 + 555) = dword_140D815E0;
  *((_DWORD *)v207 + 556) = dword_140D81618;
  *((_DWORD *)v207 + 557) = KeIstStackSize;
  if ( (_DWORD)qword_140D815E8 != 8 )
  {
    v3860[26] = 317;
    KeBugCheckEx(__ROR4__BugCheckCode: (317, 160), BugCheckParameter1: 4uLL, BugCheckParameter2: 0LL, BugCheckParameter3: qword_140D815E8, BugCheckParameter4: 8uLL);
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  *((_QWORD *)v207 + 279) = *(_QWORD *)(*((unsigned int *)v207 + 556)
                                      + *(_QWORD *)(*((__int64 (__fastcall **)(__int64))v207 + 143))(254LL));
  __writecr8(CurrentIrql);
  *((_WORD *)v207 + 1084) = -12472;
  IdtBase = KeGetPcr()->IdtBase;
  *(_KIDTENTRY64 *)(v207 + 2120) = IdtBase[1];
  *(_KIDTENTRY64 *)(v207 + 2136) = IdtBase[2];
  *(_KIDTENTRY64 *)(v207 + 2152) = IdtBase[18];
  v700 = __rdtsc();
  v701 = (__ROR8__(v700, 3) ^ v700) * (unsigned __int128)0x7010008004002001uLL;
  v3996 = *((_QWORD *)&v701 + 1);
  v702 = ((unsigned __int64)v701 ^ *((_QWORD *)&v701 + 1)) % 0xB;
  if ( (unsigned int)v702 > 5 )
  {
    v706 = v702 - 6;
    if ( v706 )
    {
      v707 = v706 - 1;
      if ( v707 )
      {
        v708 = v707 - 1;
        if ( v708 )
        {
          if ( v708 == 1 )
          {
            v3860[33] = -1333354875;
            v705 = __ROR4__(-1333354868, 33);
          }
          else
          {
            v709 = __rdtsc();
            v710 = __ROR8__(v709, 3);
            v3997 = ((v710 ^ v709) * (unsigned __int128)0x7010008004002001uLL) >> 64;
            v711 = (67117057 * (v710 ^ v709)) ^ v3997;
            v705 = ((((((v711 % 0x1A + 97) << 8) | ((v711 >> 5)
                                                  - 26
                                                  * ((unsigned int)((1321528399 * (unsigned __int64)(v711 >> 5)) >> 32) >> 3)
                                                  + 65)) << 8) | ((v711 >> 10) % 0x1A + 97)) << 8) | ((v711 >> 15) % 0x1A + 65);
          }
        }
        else
        {
          v3860[34] = 1684422978;
          v705 = __ROR4__(1684422978, 8);
        }
      }
      else
      {
        v3860[35] = -2100910376;
        v705 = __ROL4__(-2100910376, 7);
      }
    }
    else
    {
      v3860[36] = 1314342514;
      v705 = __ROR4__(1314342516, 24);
    }
  }
  else if ( (_DWORD)v702 == 5 )
  {
    v3860[32] = 680282605;
    v705 = __ROR4__(680282605, 5);
  }
  else if ( (_DWORD)v702 )
  {
    v703 = v702 - 1;
    if ( v703 )
    {
      v704 = v703 - 1;
      if ( v704 )
      {
        if ( v704 == 1 )
        {
          v3860[28] = -1474152136;
          v705 = __ROR4__(-1474152133, 15);
        }
        else
        {
          v3860[27] = 1728537748;
          v705 = __ROL4__(1728537748, 4);
        }
      }
      else
      {
        v3860[29] = -2051698419;
        v705 = __ROR4__(-2051698419, 2);
      }
    }
    else
    {
      v3860[30] = -1297272415;
      v705 = __ROL4__(-1297272415, 1);
    }
  }
  else
  {
    v3860[31] = -795291432;
    v705 = __ROR4__(-795291432, 6);
  }
  v712 = (*((__int64 (__fastcall **)(__int64, __int64, _QWORD))v207 + 30))(64LL, 432LL, v705);
  *((_QWORD *)v207 + 284) = v712;
  if ( !v712 )
    return 0;
  *((_QWORD *)v207 + 284) = (v712 + 128) & 0xFFFFFFFFFFFFFF80uLL;
  v207[2174] = 72;
  v207[2175] = -121;
  v207[2176] = 12;
  v207[2177] = 36;
  v207[2178] = -127;
  v207[2179] = 100;
  v207[2180] = 36;
  v207[2181] = 16;
  v207[2182] = -1;
  v207[2183] = -2;
  v207[2184] = -1;
  v207[2185] = -1;
  v207[2186] = 72;
  v207[2187] = -49;
  *((_WORD *)v207 + 1086) = 1295;
  v207[2170] = -61;
  v713 = 0;
  v714 = *((_QWORD *)v207 + 248);
  if ( *(_BYTE *)(v714 + *((_QWORD *)v207 + 206)) == v207[1656] )
  {
    _RAX = 0LL;
    __asm { cpuid }
    v4142 = _RCX;
    v720 = *((_QWORD *)v207 + 205);
    v4140 = _RAX;
    v4141 = _RBX;
    v4143 = _RDX;
    v721 = *(_BYTE *)(v714 + v720);
    v722 = *(_BYTE *)(v714 + *((_QWORD *)v207 + 204));
    if ( (unsigned int)_RAX >= 7 )
    {
      _RAX = 7LL;
      __asm { cpuid }
      v4140 = _RAX;
      v4141 = _RBX;
      v713 = (_RBX & 0x800) != 0;
      v4142 = _RCX;
      v4143 = _RDX;
    }
    if ( (*(_BYTE *)(v714 + *((_QWORD *)v207 + 203)) != 6
       || (v721 != 60 || v722 != 3)
       && (v721 != 63 || v722 != 2)
       && (v721 != 69 || v722 != 1)
       && (v721 != 70 || v722 != 1))
      && v713 )
    {
      v207[2171] |= 4u;
    }
  }
  if ( (unsigned int)KeKvaShadowingActive() )
    v207[2171] |= 8u;
  v207[2188] = 72;
  v207[2189] = -125;
  v207[2190] = 44;
  v207[2191] = 36;
  v207[2192] = 2;
  v207[2193] = 72;
  v207[2194] = -49;
  v728 = MEMORY[0xFFFFF78000000289] != 0;
  if ( (NtBuildNumber & 0xF0000000) == 0xC0000000 )
    v728 = 1;
  if ( (*((_DWORD *)v207 + 612) & 0x10000000) == 0 )
  {
    *(_DWORD *)&v207[*((unsigned int *)v207 + 507) + 11] = -*((_DWORD *)v207 + 507);
    v729 = __rdtsc();
    v730 = (__ROR8__(v729, 3) ^ v729) * (unsigned __int128)0x7010008004002001uLL;
    v3998 = *((_QWORD *)&v730 + 1);
    if ( !(((unsigned __int64)v730 ^ *((_QWORD *)&v730 + 1)) % 0xA) )
    {
      v731 = *((_DWORD *)v207 + 612);
      if ( v731 >= 0 && (v731 & 0x10000) == 0 && *((_DWORD *)v207 + 526) != 7 )
        v207[2171] |= 1u;
    }
    v732 = __rdtsc();
    v733 = (__ROR8__(v732, 3) ^ v732) * (unsigned __int128)0x7010008004002001uLL;
    v3999 = *((_QWORD *)&v733 + 1);
    if ( !(((unsigned __int64)v733 ^ *((_QWORD *)&v733 + 1)) % 0xA) )
    {
      v734 = *((_DWORD *)v207 + 612);
      if ( v734 >= 0 && (v734 & 0x10000) == 0 && *((_DWORD *)v207 + 526) != 7 )
        v207[2171] |= 2u;
    }
    v735 = __rdtsc();
    v736 = (__ROR8__(v735, 3) ^ v735) * (unsigned __int128)0x7010008004002001uLL;
    v4000 = *((_QWORD *)&v736 + 1);
    if ( (((unsigned __int8)v736 ^ BYTE8(v736)) & 3) == 0 )
    {
      v737 = *((_DWORD *)v207 + 612);
      if ( v737 >= 0 && (v737 & 0x10000) == 0 && v728 && *((_DWORD *)v207 + 526) != 7 )
        v207[2171] |= 0x20u;
    }
    v738 = __rdtsc();
    v739 = (__ROR8__(v738, 3) ^ v738) * (unsigned __int128)0x7010008004002001uLL;
    v4001 = *((_QWORD *)&v739 + 1);
    if ( !(((unsigned __int64)v739 ^ *((_QWORD *)&v739 + 1)) % 0xA) )
    {
      v740 = *((_DWORD *)v207 + 612);
      if ( v740 >= 0 && (v740 & 0x10000) == 0 && v728 && *((_DWORD *)v207 + 526) != 7 )
        v207[2171] |= 0x10u;
    }
  }
  if ( dword_140D81088 )
  {
    v741 = *((_DWORD *)v207 + 612);
    if ( (v741 & 0x10000000) == 0 )
    {
      v742 = __rdtsc();
      v743 = (__ROR8__(v742, 3) ^ v742) * (unsigned __int128)0x7010008004002001uLL;
      v4002 = *((_QWORD *)&v743 + 1);
      if ( ((unsigned __int64)v743 ^ *((_QWORD *)&v743 + 1)) % 0xA < 5 )
      {
        *((_DWORD *)v207 + 613) |= 0x400u;
        if ( v741 >= 0 )
        {
          v744 = __rdtsc();
          v745 = (__ROR8__(v744, 3) ^ v744) * (unsigned __int128)0x7010008004002001uLL;
          v4003 = *((_QWORD *)&v745 + 1);
          if ( ((unsigned __int64)v745 ^ *((_QWORD *)&v745 + 1)) % 0xA < 3 && *((_DWORD *)v207 + 526) != 7 )
            *((_DWORD *)v207 + 613) |= 0x800u;
        }
      }
    }
  }
  v746 = 0;
  if ( MEMORY[0xFFFFF78000000289] )
    v746 = (v207[2171] & 4) != 0;
  if ( (NtBuildNumber & 0xF0000000) == 0xC0000000 || v746 )
  {
    v747 = *((_DWORD *)v207 + 612);
    if ( (v747 & 0x10000000) == 0 && v747 >= 0 && *((_DWORD *)v207 + 526) != 7 )
    {
      v748 = *((_DWORD *)v207 + 613);
      if ( (v748 & 0x10000) == 0 )
      {
        v749 = __rdtsc();
        v750 = (__ROR8__(v749, 3) ^ v749) * (unsigned __int128)0x7010008004002001uLL;
        v4004 = *((_QWORD *)&v750 + 1);
        if ( ((unsigned __int64)v750 ^ *((_QWORD *)&v750 + 1)) % 0xA < 3 )
        {
          v751 = qword_140D81080;
          if ( !qword_140D81080 )
          {
            v752 = __rdtsc();
            v753 = (__ROR8__(v752, 3) ^ v752) * (unsigned __int128)0x7010008004002001uLL;
            v4005 = *((_QWORD *)&v753 + 1);
            v754 = ((unsigned __int64)v753 ^ *((_QWORD *)&v753 + 1)) % 0xB;
            if ( (unsigned int)v754 > 5 )
            {
              v758 = v754 - 6;
              if ( v758 )
              {
                v759 = v758 - 1;
                if ( v759 )
                {
                  v760 = v759 - 1;
                  if ( v760 )
                  {
                    if ( v760 == 1 )
                    {
                      v3860[43] = -1333354875;
                      v757 = __ROR4__(-1333354868, 33);
                    }
                    else
                    {
                      v761 = __rdtsc();
                      v762 = __ROR8__(v761, 3);
                      v4006 = ((v762 ^ v761) * (unsigned __int128)0x7010008004002001uLL) >> 64;
                      v763 = (67117057 * (v762 ^ v761)) ^ v4006;
                      v757 = ((((((v763 % 0x1A + 97) << 8) | ((v763 >> 5)
                                                            - 26
                                                            * ((unsigned int)((1321528399 * (unsigned __int64)(v763 >> 5)) >> 32) >> 3)
                                                            + 65)) << 8) | ((v763 >> 10) % 0x1A + 97)) << 8) | ((v763 >> 15) % 0x1A + 65);
                    }
                  }
                  else
                  {
                    v3860[44] = 1684422978;
                    v757 = __ROR4__(1684422978, 8);
                  }
                }
                else
                {
                  v3860[45] = -2100910376;
                  v757 = __ROL4__(-2100910376, 7);
                }
              }
              else
              {
                v3860[46] = 1314342514;
                v757 = __ROR4__(1314342516, 24);
              }
            }
            else if ( (_DWORD)v754 == 5 )
            {
              v3860[42] = 680282605;
              v757 = __ROR4__(680282605, 5);
            }
            else if ( (_DWORD)v754 )
            {
              v755 = v754 - 1;
              if ( v755 )
              {
                v756 = v755 - 1;
                if ( v756 )
                {
                  if ( v756 == 1 )
                  {
                    v3860[38] = -1474152136;
                    v757 = __ROR4__(-1474152133, 15);
                  }
                  else
                  {
                    v3860[37] = 1728537748;
                    v757 = __ROL4__(1728537748, 4);
                  }
                }
                else
                {
                  v3860[39] = -2051698419;
                  v757 = __ROR4__(-2051698419, 2);
                }
              }
              else
              {
                v3860[40] = -1297272415;
                v757 = __ROL4__(-1297272415, 1);
              }
            }
            else
            {
              v3860[41] = -795291432;
              v757 = __ROR4__(-795291432, 6);
            }
            v764 = v757;
            v765 = 64LL;
            v766 = 5248;
            v767 = (_QWORD *)(*((__int64 (__fastcall **)(__int64, __int64, __int64))v207 + 30))(64LL, 5248LL, v764);
            qword_140D81080 = v767;
            if ( !v767 )
              return 0;
            v768 = 656LL;
            do
            {
              *v767 = 0LL;
              v766 -= 8;
              ++v767;
              --v768;
            }
            while ( v768 );
            for ( ; v766; --v766 )
            {
              *(_BYTE *)v767 = 0;
              v767 = (_QWORD *)((char *)v767 + 1);
            }
            PhysicalAddress = MmGetPhysicalAddress(BaseAddress: qword_140D81080);
            v770 = (unsigned __int64 *)qword_140D81080;
            v771 = 512;
            v772 = IdtBase;
            *((_QWORD *)qword_140D81080 + 643) = (unsigned __int64)PhysicalAddress.QuadPart >> 12;
            do
            {
              v771 -= 8;
              *v770 = v772->Alignment;
              v772 = (_KIDTENTRY64 *)((char *)v772 + 8);
              ++v770;
              --v765;
            }
            while ( v765 );
            for ( ; v771; --v771 )
            {
              OffsetLow = v772->OffsetLow;
              v772 = (_KIDTENTRY64 *)((char *)v772 + 1);
              *(_BYTE *)v770 = OffsetLow;
              v770 = (unsigned __int64 *)((char *)v770 + 1);
            }
            v774 = 512;
            v775 = (char *)qword_140D81080 + 512;
            v776 = 64LL;
            do
            {
              v774 -= 8;
              *(_QWORD *)v775 = IdtBase->Alignment;
              IdtBase = (_KIDTENTRY64 *)((char *)IdtBase + 8);
              v775 += 8;
              --v776;
            }
            while ( v776 );
            for ( ; v774; --v774 )
            {
              v777 = IdtBase->OffsetLow;
              IdtBase = (_KIDTENTRY64 *)((char *)IdtBase + 1);
              *v775++ = v777;
            }
            v751 = qword_140D81080;
            *((_WORD *)qword_140D81080 + 34) &= ~0x8000u;
            v751[32] = (_WORD)v751;
            v751[35] = WORD1(v751);
            *((_DWORD *)v751 + 18) = HIDWORD(v751);
            v748 = *((_DWORD *)v207 + 613);
          }
          v778 = (unsigned int)KiMceThunk - (_DWORD)Src;
          *((_DWORD *)v207 + 613) = v748 | 0x8000;
          *((_QWORD *)v207 + 280) = v751;
          *((_DWORD *)v207 + 573) = (_DWORD)v695 - (_DWORD)v207 + v778;
          v207[2195] = 72;
          v207[2196] = -125;
          v207[2197] = -20;
          v207[2198] = 40;
          v207[2199] = -1;
          v207[2200] = 17;
          v207[2201] = 72;
          v207[2202] = -125;
          v207[2203] = -60;
          v207[2204] = 40;
          v207[2205] = -61;
        }
      }
    }
  }
  v779 = *((_DWORD *)v207 + 612);
  if ( v779 < 0 )
    *((_DWORD *)v207 + 612) = v779 | 0x8000000;
  if ( (_DWORD)KeNumberProcessors_0 == 1 )
    *((_DWORD *)v207 + 612) |= 0x40u;
  if ( (*(_BYTE *)((*((unsigned int *)v207 + 599) ^ 0xBC2A27DBLL) - 0x88000000000LL) & 2) != 0 )
    *((_DWORD *)v207 + 505) += 4096;
  v885 = *((_DWORD *)v207 + 526) == 7;
  v4007 = v207;
  if ( !v885 )
  {
    v4281[0] = (ULONG_PTR)ExQueueWorkItem;
    v4282 = 0LL;
    v4281[1] = (ULONG_PTR)ExpWorkerThread;
    v4281[2] = (ULONG_PTR)KiDebugTrapOrFault;
    v4281[3] = (ULONG_PTR)&KiExceptionDispatch;
    v4281[4] = (ULONG_PTR)KiDispatchException;
    v4281[5] = 0LL;
    v4289 = RtlDispatchException;
    v4290 = KeContextToKframes;
    v4292 = &sub_1403DEEC0;
    v4293 = KeAcquireSpinLockRaiseToDpc;
    v4294 = KeReleaseSpinLock;
    v4295 = KeProcessorGroupAffinity;
    v4296 = KeSetSystemGroupAffinityThread;
    v4297 = KeRevertToUserGroupAffinityThread;
    v4298 = MmGetSessionIdEx;
    v4299 = sub_14066CCE0;
    v4300 = sub_1403DDE00;
    v4301 = memmove;
    v4302 = qword_1403EB240;
    v4303 = KiCommitThreadWait;
    v4304 = KeDelayExecutionThread;
    v4305 = KeWaitForSingleObject;
    v4306 = KeRemovePriQueue;
    v4307 = KiAttemptFastRemovePriQueue;
    v4308 = KiExitThreadWait;
    v4309 = EtwTraceThreadWorkItem;
    v4310 = ExIsSafeWorkItem;
    v4311 = sub_1403EB0E0;
    v4312 = KeIpiGenericCall;
    v4313 = _guard_dispatch_icall_fptr[0];
    v4314 = guard_wrap_icall_retpoline_exit;
    v4315 = guard_wrap_icall_jmp;
    v4316 = PerfInfoLogIpiSend;
    v4317 = PerfInfoLogIpiReceive;
    v4318 = ExGetHandlePointer;
    v4283 = 0LL;
    v4284 = 0LL;
    v4285 = 0LL;
    v4286 = 0LL;
    v4287 = 0LL;
    v4288 = 0LL;
    v4291 = 0LL;
    v780 = 0LL;
    v781 = 0;
    v3823 = 0;
    LODWORD(v3827) = 0;
    do
    {
      v782 = v4281[v780];
      v3818 = v782;
      if ( v782 )
      {
        RtlPcToFileHeader(v782, &v4008);
        v783 = RtlImageNtHeader(v4008);
        v784 = (_DWORD *)(*((__int64 (__fastcall **)(__int64, ULONG_PTR, _QWORD))v207 + 66))(
                           v783,
                           v4008,
                           (unsigned int)(v782 - v4008));
        if ( v784 )
        {
          if ( *v784 == 1414090313 && v784[1] == 1195525195 )
          {
            if ( (*((_DWORD *)v207 + 613) & 0x2000) == 0 )
              goto LABEL_5360;
          }
          else if ( (v784[9] & 0x2000000) != 0 || (unsigned int)MmImageSectionPagable() )
          {
LABEL_5360:
            v3861[1] = 317;
            KeBugCheckEx(__ROR4__BugCheckCode: (317, 160), BugCheckParameter1: 1uLL, BugCheckParameter2: v780, BugCheckParameter3: v782, BugCheckParameter4: v4008);
          }
        }
        v3822 = 0;
        v785 = RtlLookupFunctionTable(v782, &v4251, v3861);
        v4249 = v785;
        LODWORD(v786) = 0;
        if ( v785 )
        {
          v4254 = 0LL;
          if ( v4169 == v4251 )
          {
            v787 = (_DWORD *)v4170;
            v4255 = 0LL;
            v4256 = v4171;
            v4257 = 0;
            v4254 = v4170;
            v788 = RtlLookupFunctionEntry(v782, &v4251, 0LL);
            v4250 = v788;
            if ( !v788 )
              goto LABEL_1032;
            v789 = 0;
            v790 = *v787 - 1;
            if ( v790 < 0 )
              goto LABEL_1032;
            while ( 1 )
            {
              v791 = (v790 + v789) >> 1;
              v792 = v788 - v4251 - v787[2 * v791 + 2];
              if ( v792 >= 0 )
              {
                if ( v792 <= 0 )
                {
                  v793 = (_DWORD *)v4255;
                  if ( v790 >= v789 )
                    v793 = &v787[2 * ((v790 + v789) >> 1) + 2];
                  v4255 = (unsigned __int64)v793;
LABEL_1032:
                  v785 = v4249;
                  v781 = v3827;
LABEL_1037:
                  v794 = v4009;
                  v4248 = v782;
                  v4253 = v4009;
                  v3861[0] /= 0xCu;
                  v4008 = v4251;
                  v4252 = v785 + 12LL * v3861[0];
                  goto LABEL_1108;
                }
                v789 = v791 + 1;
              }
              else
              {
                if ( !v791 )
                  goto LABEL_1032;
                v790 = v791 - 1;
              }
              if ( v790 < v789 )
                goto LABEL_1032;
            }
          }
          v788 = v4250;
          goto LABEL_1037;
        }
        v794 = v4253;
        v788 = v4250;
        while ( v785 && v785 != v4252 )
        {
          if ( v4254 )
          {
            if ( !v788 )
              break;
            if ( v4255 )
            {
              v795 = *(_DWORD *)(v4255 + 4);
              if ( (v795 & 1) != 0 )
              {
                *v794 = v4251 + (v795 & 0xFFFFFFFE);
                v4255 = 0LL;
              }
              else
              {
                v796 = (unsigned int)(v4257 + v795);
                v797 = (unsigned int)v796;
                v798 = v796 + 4;
                if ( v798 < v797 || v798 > v4256 )
                {
                  v3861[2] = 317;
                  KeBugCheckEx(__ROR4__BugCheckCode: (317, 160), BugCheckParameter1: 0x12uLL, BugCheckParameter2: v4254, BugCheckParameter3: v4251, BugCheckParameter4: v797);
                }
                v799 = *(_DWORD *)(v4254 + v797);
                v4257 += 4;
                v4255 &= -(__int64)((v799 & 1) != 0);
                if ( (v799 & 1) != 0 )
                  v799 &= ~1u;
                *v794 = v4251 + v799;
              }
            }
            else
            {
              *v794 = v788;
              v4250 = 0LL;
            }
          }
          else
          {
            while ( 1 )
            {
              v800 = v785;
              v801 = RtlpConvertFunctionEntry(v785, v4251, v788);
              v786 = RtlpSameFunction(v801, v4251, v4248);
              v785 = v4249 + 12;
              v4249 += 12LL;
              if ( v786 )
                break;
              if ( v785 == v4252 )
                goto LABEL_1054;
            }
            *v4253 = v800;
          }
          _disable();
          if ( !(_BYTE)KdDebuggerNotPresent )
          {
            while ( 1 )
              ;
          }
          _enable();
          v811 = *((unsigned int *)v207 + 585);
          v3822 = 1;
          v812 = *((unsigned int *)v207 + 505);
          v813 = v4008 + *(unsigned int *)v4009[0];
          v814 = *(_DWORD *)(v4009[0] + 4LL) - *(_DWORD *)v4009[0];
          v815 = v812 + 48;
          if ( (unsigned int)(v812 + 48) <= *((_DWORD *)v207 + 647) )
          {
            v816 = (__int64)v207;
            *((_DWORD *)v207 + 505) = v815;
          }
          else
          {
            v816 = sub_140B11020(v207, v815, v811);
            if ( !v816 )
              return 0;
            v817 = *((_DWORD *)v207 + 612);
            if ( (v817 & 4) == 0 )
            {
              v818 = *((_DWORD *)v207 + 505);
              v819 = *((_QWORD *)v207 + 249);
              v820 = (v817 & 0x20000000) != 0 ? *((_DWORD *)v207 + 585) : 0;
              if ( v818 >= 8 )
              {
                v821 = (unsigned __int64)v818 >> 3;
                do
                {
                  *(_QWORD *)v207 = 0LL;
                  v818 -= 8;
                  v207 += 8;
                  --v821;
                }
                while ( v821 );
              }
              for ( ; v818; --v818 )
                *v207++ = 0;
              v822 = *(_DWORD *)(v816 + 2340);
              *(_DWORD *)(v816 + 2340) = v820;
              if ( v820 == 3 )
              {
                (*(void (__fastcall **)(__int64))(v816 + 872))(v819);
              }
              else if ( (*(_DWORD *)(v816 + 2448) & 0x10000000) != 0 || !v820 )
              {
                (*(void (__fastcall **)(__int64))(v816 + 248))(v819);
              }
              else
              {
                (*(void (__fastcall **)(__int64, _QWORD))(v816 + 552))(v819 - 8, *(_QWORD *)(v819 - 8));
              }
              *(_DWORD *)(v816 + 2340) = v822;
            }
            *(_DWORD *)(v816 + 2448) &= ~4u;
          }
          ++*(_DWORD *)(v816 + 2060);
          v823 = (_QWORD *)(v816 + v812);
          v824 = 48;
          v3824 = (_QWORD *)(v816 + v812);
          v825 = (_QWORD *)(v816 + v812);
          v826 = 6LL;
          do
          {
            *v825 = 0LL;
            v824 -= 8;
            ++v825;
            --v826;
          }
          while ( v826 );
          for ( ; v824; --v824 )
          {
            *(_BYTE *)v825 = 0;
            v825 = (_QWORD *)((char *)v825 + 1);
          }
          *(_DWORD *)v823 = 0;
          v827 = v813 + v814;
          v823[1] = v813;
          v828 = (_QWORD *)v813;
          *((_DWORD *)v823 + 4) = v814;
          v829 = (const char *)v813;
          *(_DWORD *)(v816 + 2088) += v814;
          v830 = *(_DWORD *)(v816 + 2068);
          v831 = *(_QWORD *)(v816 + 2072);
          if ( v813 < v827 )
          {
            do
            {
              _mm_prefetch(v829, 0);
              v829 += 64;
            }
            while ( (unsigned __int64)v829 < v827 );
          }
          v832 = *(_QWORD *)(v816 + 2072);
          v833 = v814 >> 7;
          if ( v814 >> 7 )
          {
            do
            {
              v834 = 8LL;
              do
              {
                v835 = v828[1] ^ __ROL8__(*v828 ^ v832, v830);
                v828 += 2;
                v832 = __ROL8__(v835, v830);
                --v834;
              }
              while ( v834 );
              v836 = (__ROL8__(v831 ^ ((unsigned __int64)v828 - v813), 17) ^ v831 ^ ((unsigned __int64)v828 - v813))
                   * (unsigned __int128)0x7010008004002001uLL;
              v4009[1] = *((_QWORD *)&v836 + 1);
              v830 = ((unsigned __int8)v836 ^ (unsigned __int8)(BYTE8(v836) ^ v830)) & 0x3F;
              if ( !v830 )
                LOBYTE(v830) = 1;
              --v833;
            }
            while ( v833 );
            v823 = v3824;
          }
          v837 = v814 & 0x7F;
          if ( v837 >= 8 )
          {
            v838 = (unsigned __int64)(v814 & 0x7F) >> 3;
            do
            {
              v832 = __ROL8__(*v828++ ^ v832, v830);
              v837 -= 8;
              --v838;
            }
            while ( v838 );
          }
          for ( ; v837; --v837 )
          {
            v839 = *(unsigned __int8 *)v828;
            v828 = (_QWORD *)((char *)v828 + 1);
            v832 = __ROL8__(v839 ^ v832, v830);
          }
          for ( ii = v832; ; LODWORD(v832) = ii ^ v832 )
          {
            ii >>= 31;
            if ( !ii )
              break;
          }
          v841 = v3827;
          *((_DWORD *)v823 + 5) = v832 & 0x7FFFFFFF;
          v207 = (_BYTE *)v816;
          *(_DWORD *)(v816 + 2088) += v814;
          *((_DWORD *)v823 + 6) = 1;
          v781 = v841 + 1;
          v794 = v4253;
          v788 = v4250;
          v785 = v4249;
          LODWORD(v3827) = v781;
LABEL_1108:
          LODWORD(v786) = 0;
        }
LABEL_1054:
        if ( v3822 == (_DWORD)v786 )
        {
          v802 = *((unsigned int *)v207 + 505);
          v803 = v802 + 48;
          if ( (unsigned int)(v802 + 48) <= *((_DWORD *)v207 + 647) )
          {
            v804 = (__int64)v207;
            *((_DWORD *)v207 + 505) = v803;
          }
          else
          {
            v804 = sub_140B11020(v207, v803, *((unsigned int *)v207 + 585));
            if ( !v804 )
              return 0;
            v805 = *((_DWORD *)v207 + 612);
            if ( (v805 & 4) == 0 )
            {
              v806 = *((_DWORD *)v207 + 505);
              v807 = *((_QWORD *)v207 + 249);
              v808 = (v805 & 0x20000000) != 0 ? *((_DWORD *)v207 + 585) : 0;
              if ( v806 >= 8 )
              {
                v809 = (unsigned __int64)v806 >> 3;
                do
                {
                  *(_QWORD *)v207 = 0LL;
                  v806 -= 8;
                  v207 += 8;
                  --v809;
                }
                while ( v809 );
              }
              for ( ; v806; --v806 )
                *v207++ = 0;
              v810 = *(_DWORD *)(v804 + 2340);
              *(_DWORD *)(v804 + 2340) = v808;
              if ( v808 == 3 )
              {
                (*(void (__fastcall **)(__int64))(v804 + 872))(v807);
              }
              else if ( (*(_DWORD *)(v804 + 2448) & 0x10000000) != 0 || !v808 )
              {
                (*(void (__fastcall **)(__int64))(v804 + 248))(v807);
              }
              else
              {
                (*(void (__fastcall **)(__int64, _QWORD))(v804 + 552))(v807 - 8, *(_QWORD *)(v807 - 8));
              }
              *(_DWORD *)(v804 + 2340) = v810;
            }
            *(_DWORD *)(v804 + 2448) &= ~4u;
          }
          ++*(_DWORD *)(v804 + 2060);
          v842 = v804 + v802;
          v843 = 48;
          v844 = (_QWORD *)(v804 + v802);
          v845 = 6LL;
          do
          {
            *v844 = 0LL;
            v843 -= 8;
            ++v844;
            --v845;
          }
          while ( v845 );
          for ( ; v843; --v843 )
          {
            *(_BYTE *)v844 = 0;
            v844 = (_QWORD *)((char *)v844 + 1);
          }
          v846 = (const char *)v3818;
          *(_DWORD *)v842 = 0;
          *(_QWORD *)(v842 + 8) = v846;
          v847 = v846;
          *(_DWORD *)(v842 + 16) = 4;
          *(_DWORD *)(v804 + 2088) += 4;
          v848 = *(_QWORD *)(v804 + 2072);
          if ( v846 < v846 + 4 )
          {
            do
            {
              _mm_prefetch(v847, 0);
              v847 += 64;
            }
            while ( v847 < v846 + 4 );
          }
          v849 = 4;
          do
          {
            v850 = *(unsigned __int8 *)v846++;
            v848 = __ROL8__(v850 ^ v848, *(_DWORD *)(v804 + 2068));
            --v849;
          }
          while ( v849 );
          for ( jj = v848; ; LODWORD(v848) = jj ^ v848 )
          {
            jj >>= 31;
            if ( !jj )
              break;
          }
          v852 = v3827;
          *(_DWORD *)(v842 + 20) = v848 & 0x7FFFFFFF;
          v207 = (_BYTE *)v804;
          *(_DWORD *)(v804 + 2088) += 4;
          v781 = v852 + 1;
          *(_DWORD *)(v842 + 24) = 1;
          LODWORD(v3827) = v781;
        }
      }
      v780 = (unsigned int)(v3823 + 1);
      v3823 = v780;
    }
    while ( (unsigned int)v780 < 0x33 );
    if ( (*((_DWORD *)v207 + 612) & 0x40000000) == 0 )
    {
      v853 = *((unsigned int *)v207 + 505);
      v854 = v853 + 48;
      if ( (unsigned int)(v853 + 48) <= *((_DWORD *)v207 + 647) )
      {
        v855 = (__int64)v207;
        *((_DWORD *)v207 + 505) = v854;
      }
      else
      {
        v855 = sub_140B11020(v207, v854, *((unsigned int *)v207 + 585));
        if ( !v855 )
          return 0;
        v856 = *((_DWORD *)v207 + 612);
        if ( (v856 & 4) == 0 )
        {
          v857 = *((_DWORD *)v207 + 505);
          v858 = *((_QWORD *)v207 + 249);
          v859 = (v856 & 0x20000000) != 0 ? *((_DWORD *)v207 + 585) : 0;
          if ( v857 >= 8 )
          {
            v860 = (unsigned __int64)v857 >> 3;
            do
            {
              *(_QWORD *)v207 = 0LL;
              v857 -= 8;
              v207 += 8;
              --v860;
            }
            while ( v860 );
          }
          for ( ; v857; --v857 )
            *v207++ = 0;
          v861 = *(_DWORD *)(v855 + 2340);
          *(_DWORD *)(v855 + 2340) = v859;
          if ( v859 == 3 )
          {
            (*(void (__fastcall **)(__int64))(v855 + 872))(v858);
          }
          else if ( (*(_DWORD *)(v855 + 2448) & 0x10000000) != 0 || !v859 )
          {
            (*(void (__fastcall **)(__int64))(v855 + 248))(v858);
          }
          else
          {
            (*(void (__fastcall **)(__int64, _QWORD))(v855 + 552))(v858 - 8, *(_QWORD *)(v858 - 8));
          }
          *(_DWORD *)(v855 + 2340) = v861;
        }
        *(_DWORD *)(v855 + 2448) &= ~4u;
      }
      ++*(_DWORD *)(v855 + 2060);
      v862 = v855 + v853;
      v863 = 48;
      v864 = (_QWORD *)(v855 + v853);
      v865 = 6LL;
      do
      {
        *v864 = 0LL;
        v863 -= 8;
        ++v864;
        --v865;
      }
      while ( v865 );
      for ( ; v863; --v863 )
      {
        *(_BYTE *)v864 = 0;
        v864 = (_QWORD *)((char *)v864 + 1);
      }
      *(_DWORD *)v862 = 0;
      *(_QWORD *)(v862 + 8) = 0LL;
      *(_DWORD *)(v862 + 16) = 0;
      v866 = *(_QWORD *)(v855 + 2072);
      for ( kk = v866; ; LODWORD(v866) = kk ^ v866 )
      {
        kk >>= 31;
        if ( !kk )
          break;
      }
      v781 = v3827;
      *(_DWORD *)(v862 + 20) = v866 & 0x7FFFFFFF;
      v207 = (_BYTE *)v855;
      v4009[4] = v862;
      *(_DWORD *)(v855 + 2600) = v862 - v855;
      *(_DWORD *)(v855 + 2604) += 48;
    }
    *((_DWORD *)v207 + 504) = v781;
    *((_DWORD *)v207 + 651) += 48 * v781;
  }
  v4007 = v207;
  if ( !v207 )
    return 0;
  v868 = *((_DWORD *)v207 + 612);
  LODWORD(v3827) = *((_DWORD *)v207 + 505);
  v869 = 0;
  v3823 = 0;
  v870 = 0;
  if ( (v868 & 0x40000000) == 0 && !(_DWORD)v3825 )
  {
    v871 = __rdtsc();
    v872 = (__ROR8__(v871, 3) ^ v871) * (unsigned __int128)0x7010008004002001uLL;
    v4009[5] = *((_QWORD *)&v872 + 1);
    if ( !(((unsigned __int64)v872 ^ *((_QWORD *)&v872 + 1)) % 0xA) )
    {
      v870 = 1;
      v3823 = 1;
      v873 = __rdtsc();
      v874 = (__ROR8__(v873, 3) ^ v873) * (unsigned __int128)0x7010008004002001uLL;
      v4009[6] = *((_QWORD *)&v874 + 1);
      if ( ((unsigned __int64)v874 ^ *((_QWORD *)&v874 + 1)) % 0xA < 3 )
      {
        v875 = v868 | 0x10000;
        *((_DWORD *)v207 + 612) = v875;
        v876 = __rdtsc();
        v877 = (__ROR8__(v876, 3) ^ v876) * (unsigned __int128)0x7010008004002001uLL;
        v4009[7] = *((_QWORD *)&v877 + 1);
        if ( ((unsigned __int64)v877 ^ *((_QWORD *)&v877 + 1)) % 0xA < 3 )
          *((_DWORD *)v207 + 612) = v875 | 0x100000;
      }
    }
    v869 = 0;
  }
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  LODWORD(v3825) = 0;
LABEL_1166:
  v878 = &qword_140B9DA30[3 * v869];
  if ( (v878[2] & 0xE0000000) == 0x80000000 || !v870 )
  {
    v879 = v878[1];
    v4010 = v879;
    switch ( v879 )
    {
      case 0uLL:
        v880 = 0x140000000uLL;
        v4010 = 0x140000000uLL;
        break;
      case 1uLL:
        v880 = PsHalImageBase;
        goto LABEL_1201;
      case 2uLL:
        v881 = 0LL;
        v880 = 0LL;
        v4010 = 0LL;
        if ( (v3862 & 6) != 0 )
          goto LABEL_2135;
        v882 = (_QWORD *)PspPicoProviderRanges;
        if ( !PspPicoProviderRanges )
          goto LABEL_2135;
        v883 = 0LL;
        v884 = 0;
        v885 = *(_QWORD *)(PspPicoProviderRanges + 8) == 0LL;
        if ( !*(_QWORD *)(PspPicoProviderRanges + 8) )
          goto LABEL_1181;
        do
        {
          v883 = (ULONG_PTR *)(*v882 + 16 * v881);
          if ( v883[1] )
          {
            (*((void (__fastcall **)(ULONG_PTR, ULONG_PTR *))v207 + 65))(*v883, &v4010);
            v880 = v4010;
            if ( v4010 )
              goto LABEL_1202;
          }
          v882 = (_QWORD *)PspPicoProviderRanges;
          v881 = ++v884;
        }
        while ( (unsigned __int64)v884 < *(_QWORD *)(PspPicoProviderRanges + 8) );
        if ( !v880 )
        {
          v885 = *(_QWORD *)(PspPicoProviderRanges + 8) == 0LL;
LABEL_1181:
          if ( !v885 )
          {
            v3797 = *v883;
            v3871[1] = 317;
            KeBugCheckEx(__ROR4__BugCheckCode: (317, 160), BugCheckParameter1: 0x13uLL, BugCheckParameter2: (ULONG_PTR)v882, BugCheckParameter3: v3797, BugCheckParameter4: (ULONG_PTR)v883);
          }
          goto LABEL_2135;
        }
        break;
      case 3uLL:
        v886 = 0LL;
        v880 = 0LL;
        v4010 = 0LL;
        if ( (v3862 & 6) != 0 )
          goto LABEL_2135;
        v887 = (_QWORD *)__27;
        if ( !__27 )
          goto LABEL_2135;
        v888 = 0LL;
        v889 = 0;
        v890 = *(_QWORD *)(__27 + 8) == 0LL;
        if ( *(_QWORD *)(__27 + 8) )
        {
          do
          {
            v888 = (ULONG_PTR *)(*v887 + 16 * v886);
            if ( v888[1] )
            {
              (*((void (__fastcall **)(ULONG_PTR, ULONG_PTR *))v207 + 65))(*v888, &v4010);
              v880 = v4010;
              if ( v4010 )
                goto LABEL_1202;
            }
            v887 = (_QWORD *)__27;
            v886 = ++v889;
          }
          while ( (unsigned __int64)v889 < *(_QWORD *)(__27 + 8) );
          if ( v880 )
            break;
          v890 = *(_QWORD *)(__27 + 8) == 0LL;
        }
        if ( !v890 )
        {
          v3798 = *v888;
          v3871[2] = 317;
          KeBugCheckEx(__ROR4__BugCheckCode: (317, 160), BugCheckParameter1: 0x14uLL, BugCheckParameter2: (ULONG_PTR)v887, BugCheckParameter3: v3798, BugCheckParameter4: (ULONG_PTR)v888);
        }
        goto LABEL_2135;
      default:
        v880 = 0LL;
        _disable();
        v207 = v4007;
        v891 = *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *((_QWORD *)v4007 + 202));
        _enable();
        (*((void (__fastcall **)(__int64))v207 + 45))(v891);
        LOBYTE(v892) = 1;
        (*((void (__fastcall **)(_QWORD, __int64))v207 + 28))(*((_QWORD *)v207 + 166), v892);
        for ( mm = (PVOID *)PsLoadedModuleList; ; mm = (PVOID *)*mm )
        {
          if ( mm == &PsLoadedModuleList )
            goto LABEL_1200;
          v894 = (char *)mm - *((_QWORD *)v207 + 234);
          if ( RtlEqualUnicodeString(String1: (PCUNICODE_STRING)v878, String2: (PCUNICODE_STRING)&v894[*((_QWORD *)v207 + 237)], CaseInSensitive: 1u) )
            break;
        }
        v880 = *(_QWORD *)&v894[*((_QWORD *)v207 + 235)];
LABEL_1200:
        (*((void (__fastcall **)(_QWORD))v207 + 35))(*((_QWORD *)v207 + 166));
        (*((void (**)(void))v207 + 46))();
LABEL_1201:
        v4010 = v880;
        if ( !v880 )
          goto LABEL_2135;
        break;
    }
LABEL_1202:
    v895 = *((_DWORD *)v878 + 4);
    v3822 = v895 & 1;
    if ( (v895 & 4) != 0 )
    {
      v885 = (*((_DWORD *)v207 + 613) & 0x400) == 0;
      v3822 = v895 & 1;
      if ( !v885 )
        v3822 = v895 & 1 | 0x10;
    }
    if ( (v895 & 2) == 0 || v3823 )
      goto LABEL_1506;
    v896 = (__int64 (__fastcall *)(ULONG_PTR, char *))*((_QWORD *)v207 + 64);
    v897 = v207;
    v4011 = v207;
    v3818 = v896(v880, v4172);
    v3815 = v4174;
    v3824 = v4173;
    if ( !v4173 )
    {
      if ( (*((_DWORD *)v207 + 612) & 0x200000) == 0 )
      {
        v3871[12] = 317;
        KeBugCheckEx(__ROR4__BugCheckCode: (317, 160), BugCheckParameter1: 0xAuLL, BugCheckParameter2: v880, BugCheckParameter3: 5uLL, BugCheckParameter4: 0LL);
      }
      return 0;
    }
    v898 = &v4131;
    v4130 = 0LL;
    v899 = 4;
    do
    {
      *(_BYTE *)v898 = 0;
      v898 = (int *)((char *)v898 + 1);
      --v899;
    }
    while ( v899 );
    v900 = 0;
    LODWORD(v3819) = 0;
    if ( *((_DWORD *)v207 + 515) )
    {
      v901 = v4131;
      v902 = HIDWORD(v4130);
      v903 = v4130;
      while ( 1 )
      {
        v904 = (unsigned int *)v207;
        if ( *((_QWORD *)v207 + 335) )
          v904 = (unsigned int *)*((_QWORD *)v207 + 335);
        Src = v904;
        v905 = 0;
        v906 = (int *)((char *)v904 + v904[514]);
        if ( v903 && v902 <= v900 )
        {
          v905 = v902;
          v906 = (int *)((char *)v904 + v901);
        }
        if ( v905 != v900 )
          break;
LABEL_1242:
        LODWORD(v4130) = 1;
        v901 = (_DWORD)v906 - (_DWORD)v904;
        HIDWORD(v4130) = v905;
        v4131 = (_DWORD)v906 - (_DWORD)v904;
        v903 = 1;
        v919 = *v906;
        v902 = v905;
        if ( (unsigned int)v919 <= 0x2B
          && (v920 = 0x80000001002LL, _bittest64(&v920, v919))
          && *((_QWORD *)v906 + 1) == v3818
          && v906[4] == v3815
          || (unsigned int)(v919 - 33) <= 1 && *((_QWORD **)v906 + 4) == v3824 )
        {
          if ( v906 )
            goto LABEL_1506;
          goto LABEL_1251;
        }
        LODWORD(v3819) = ++v900;
        if ( v900 >= *((_DWORD *)v207 + 515) )
          goto LABEL_1251;
      }
      v907 = v900 - v905;
      v905 = v900;
      while ( 2 )
      {
        v908 = *v906;
        if ( *v906 > 28 )
        {
          v916 = v908 - 30;
          if ( !v916 )
          {
            v914 = (((v906[9] != 0 ? v906[9] - 1 : 0) / 0xCu + 7) & 0xFFFFFFF8)
                 + 24 * (*((unsigned __int16 *)v906 + 20) + 2);
            goto LABEL_1240;
          }
          v917 = v916 - 3;
          if ( !v917 || (v918 = v917 - 1) == 0 )
          {
            v914 = 20 * (unsigned int)(((v906[8] & 0xFFF) + (unsigned __int64)(unsigned int)v906[10] + 4095) >> 12) + 48;
            goto LABEL_1240;
          }
          v913 = v918 == 9;
LABEL_1235:
          if ( !v913 )
          {
            v914 = 48LL;
            goto LABEL_1240;
          }
        }
        else
        {
          if ( v908 == 28 )
          {
            v915 = *((unsigned __int16 *)v906 + 20);
            goto LABEL_1228;
          }
          v909 = v908 - 1;
          if ( v909 )
          {
            v910 = v909 - 6;
            if ( !v910 )
            {
              v914 = (unsigned int)(24 * (v906[6] + 2));
              goto LABEL_1240;
            }
            v911 = v910 - 1;
            if ( v911 )
            {
              v912 = v911 - 2;
              if ( v912 )
              {
                v913 = v912 == 2;
                goto LABEL_1235;
              }
              v914 = (unsigned int)(16 * (v906[7] + 3));
LABEL_1240:
              v906 = (int *)((char *)v906 + v914);
              if ( !--v907 )
              {
                LODWORD(v904) = (_DWORD)Src;
                v900 = v3819;
                goto LABEL_1242;
              }
              continue;
            }
            v915 = *((unsigned __int16 *)v906 + 16);
LABEL_1228:
            v914 = (v915 + 55) & 0xFFFFFFF8;
            goto LABEL_1240;
          }
        }
        break;
      }
      v914 = 4 * (v906[4] / 0xCu) + 48;
      goto LABEL_1240;
    }
LABEL_1251:
    v921 = v3822;
    v922 = (__int64 (__fastcall *)(ULONG_PTR, char *))*((_QWORD *)v207 + 64);
    LODWORD(v3819) = v3822;
    v4012[0] = v207;
    v3818 = v922(v880, v4175);
    v3815 = v4177;
    v3863[0] = v4177;
    v3820 = v4176;
    if ( !v4176 )
    {
      if ( (*((_DWORD *)v207 + 612) & 0x200000) == 0 )
      {
        v3871[3] = 317;
        KeBugCheckEx(__ROR4__BugCheckCode: (317, 160), BugCheckParameter1: 0xAuLL, BugCheckParameter2: v880, BugCheckParameter3: 5uLL, BugCheckParameter4: 0LL);
      }
      goto LABEL_1253;
    }
    v923 = 4;
    v4132 = 0LL;
    v924 = 0LL;
    v925 = &v4133;
    do
    {
      *(_BYTE *)v925 = 0;
      v925 = (int *)((char *)v925 + 1);
      --v923;
    }
    while ( v923 );
    v926 = 0;
    LODWORD(v3817) = 0;
    if ( *((_DWORD *)v207 + 515) )
    {
      LODWORD(v924) = v4133;
      v927 = HIDWORD(v4132);
      v928 = v4132;
      while ( 1 )
      {
        v929 = (unsigned int *)v207;
        if ( *((_QWORD *)v207 + 335) )
          v929 = (unsigned int *)*((_QWORD *)v207 + 335);
        Src = v929;
        v930 = 0;
        v931 = (int *)((char *)v929 + v929[514]);
        if ( v928 && v927 <= v926 )
        {
          v930 = v927;
          v931 = (int *)((char *)v929 + (unsigned int)v924);
        }
        if ( v930 != v926 )
          break;
LABEL_1288:
        LODWORD(v4132) = 1;
        v924 = (unsigned int)((_DWORD)v931 - (_DWORD)v929);
        HIDWORD(v4132) = v930;
        v4133 = (_DWORD)v931 - (_DWORD)v929;
        v928 = 1;
        v944 = *v931;
        v927 = v930;
        if ( (unsigned int)v944 <= 0x2B
          && (v945 = 0x80000001002LL, _bittest64(&v945, v944))
          && *((_QWORD *)v931 + 1) == v3818
          && v931[4] == v3815
          || (unsigned int)(v944 - 33) <= 1 && *((_QWORD *)v931 + 4) == v3820 )
        {
          if ( !v931 )
          {
LABEL_1297:
            v921 = v3819;
            goto LABEL_1298;
          }
LABEL_1713:
          v4007 = v897;
LABEL_1714:
          v1232 = v3824;
          v1233 = v3822 & 0x7FFFFFEF | 0x80000000;
          v1234 = (*((__int64 (__fastcall **)(_QWORD *))v897 + 63))(v3824);
          v1235 = *(unsigned int *)(v1234 + 148);
          if ( (unsigned int)v1235 >= 0x14 )
          {
            v1236 = *(unsigned int *)(v1234 + 144);
            v1237 = (char *)v1232 + v1235 + v1236;
            for ( nn = (char *)v1232 + v1236; nn != v1237; nn += 20 )
            {
              if ( !*((_DWORD *)nn + 3) )
                break;
              v1239 = *((unsigned int *)nn + 4);
              if ( !(_DWORD)v1239 )
                break;
              v1240 = *(_QWORD *)((char *)v1232 + v1239);
              if ( v1240 )
              {
                v1241 = sub_140B0D7A8(&v4011, v1240, v1233);
                v207 = v4011;
                v4007 = v4011;
                if ( (int)(v1241 + 0x80000000) >= 0 && v1241 != -1073741554 )
                  return 0;
              }
            }
          }
LABEL_1506:
          _disable();
          if ( !(_BYTE)KdDebuggerNotPresent )
          {
            while ( 1 )
              ;
          }
          _enable();
          v1088 = v4010;
          v1089 = (__int64 (__fastcall *)(ULONG_PTR, char *))*((_QWORD *)v207 + 64);
          HalExtensionList = v4010;
          v4025 = v207;
          v1090 = v1089(v4010, v4179);
          v1091 = v4180;
          v1092 = v4181;
          v3814 = v1090;
          LODWORD(Src) = v4181;
          v3869 = v4181;
          v3813 = v4180;
          if ( !v4180 )
          {
            if ( (*((_DWORD *)v207 + 612) & 0x200000) == 0 )
            {
              v3871[21] = 317;
              KeBugCheckEx(__ROR4__BugCheckCode: (317, 160), BugCheckParameter1: 0xAuLL, BugCheckParameter2: v1088, BugCheckParameter3: 5uLL, BugCheckParameter4: 0LL);
            }
            return 0;
          }
          v4134 = 0LL;
          v1093 = &v4135;
          LODWORD(v1094) = 4;
          do
          {
            *(_BYTE *)v1093 = 0;
            v1093 = (int *)((char *)v1093 + 1);
            v885 = (_DWORD)v1094 == 1;
            v1094 = (unsigned int)(v1094 - 1);
          }
          while ( !v885 );
          v1095 = 0;
          if ( *((_DWORD *)v207 + 515) )
          {
            LODWORD(v1094) = v4135;
            v1096 = HIDWORD(v4134);
            v1097 = v4134;
            while ( 1 )
            {
              v1098 = v207;
              if ( *((_QWORD *)v207 + 335) )
                v1098 = (_BYTE *)*((_QWORD *)v207 + 335);
              v1099 = 0;
              v1100 = (int *)&v1098[*((unsigned int *)v1098 + 514)];
              if ( v1097 && v1096 <= v1095 )
              {
                v1099 = v1096;
                v1100 = (int *)&v1098[(unsigned int)v1094];
              }
              if ( v1099 != v1095 )
                break;
LABEL_1739:
              LODWORD(v4134) = 1;
              v1094 = (unsigned int)((_DWORD)v1100 - (_DWORD)v1098);
              HIDWORD(v4134) = v1099;
              v4135 = (_DWORD)v1100 - (_DWORD)v1098;
              v1097 = 1;
              v1247 = *v1100;
              v1096 = v1099;
              if ( (unsigned int)v1247 <= 0x2B
                && (v1248 = 0x80000001002LL, _bittest64(&v1248, v1247))
                && *((_QWORD *)v1100 + 1) == v3814
                && v1100[4] == v1092
                || (unsigned int)(v1247 - 33) <= 1 && *((_QWORD *)v1100 + 4) == v3813 )
              {
                if ( !v1100 )
                {
LABEL_1748:
                  v1091 = v3813;
                  goto LABEL_1749;
                }
LABEL_2135:
                v869 = v3825 + 1;
                LODWORD(v3825) = v869;
                if ( v869 < 0x11 )
                {
                  v870 = v3823;
                  goto LABEL_1166;
                }
                goto LABEL_2145;
              }
              if ( ++v1095 >= *((_DWORD *)v207 + 515) )
                goto LABEL_1748;
            }
            v1101 = v1095 - v1099;
            v1099 = v1095;
            while ( 2 )
            {
              v1102 = *v1100;
              if ( *v1100 > 28 )
              {
                v1244 = v1102 - 30;
                if ( !v1244 )
                {
                  v1242 = (((v1100[9] != 0 ? v1100[9] - 1 : 0) / 0xCu + 7) & 0xFFFFFFF8)
                        + 24 * (*((unsigned __int16 *)v1100 + 20) + 2);
                  goto LABEL_1737;
                }
                v1245 = v1244 - 3;
                if ( !v1245 || (v1246 = v1245 - 1) == 0 )
                {
                  v1242 = 20
                        * (unsigned int)(((v1100[8] & 0xFFF) + (unsigned __int64)(unsigned int)v1100[10] + 4095) >> 12)
                        + 48;
                  goto LABEL_1737;
                }
                v1107 = v1246 == 9;
LABEL_1732:
                if ( !v1107 )
                {
                  v1242 = 48LL;
                  goto LABEL_1737;
                }
              }
              else
              {
                if ( v1102 == 28 )
                {
                  v1243 = *((unsigned __int16 *)v1100 + 20);
                  goto LABEL_1725;
                }
                v1103 = v1102 - 1;
                if ( v1103 )
                {
                  v1104 = v1103 - 6;
                  if ( !v1104 )
                  {
                    v1242 = (unsigned int)(24 * (v1100[6] + 2));
                    goto LABEL_1737;
                  }
                  v1105 = v1104 - 1;
                  if ( v1105 )
                  {
                    v1106 = v1105 - 2;
                    if ( v1106 )
                    {
                      v1107 = v1106 == 2;
                      goto LABEL_1732;
                    }
                    v1242 = (unsigned int)(16 * (v1100[7] + 3));
LABEL_1737:
                    v1100 = (int *)((char *)v1100 + v1242);
                    if ( !--v1101 )
                    {
                      v1088 = HalExtensionList;
                      v1092 = (int)Src;
                      goto LABEL_1739;
                    }
                    continue;
                  }
                  v1243 = *((unsigned __int16 *)v1100 + 16);
LABEL_1725:
                  v1242 = (v1243 + 55) & 0xFFFFFFF8;
                  goto LABEL_1737;
                }
              }
              break;
            }
            v1242 = 4 * (v1100[4] / 0xCu) + 48;
            goto LABEL_1737;
          }
LABEL_1749:
          v1249 = (*((__int64 (__fastcall **)(ULONG_PTR, __int64))v207 + 85))(v1088, v1094);
          v1250 = v3822;
          v1251 = v1249;
          LODWORD(Src) = v1249;
          LODWORD(v3810) = v3869;
          if ( (v3822 & 0x10) != 0 )
          {
            if ( (*((_DWORD *)v207 + 613) & 0x400) == 0 )
            {
              v1250 = v3822 & 0xFFFFFFEF;
              v3822 &= ~0x10u;
            }
            if ( (v1250 & 0x10) != 0 && !(unsigned int)sub_140B120E0(a1: (__int64)v207, a2: v1091) )
            {
              v1250 &= ~0x10u;
              v3822 = v1250;
            }
          }
          v1252 = (char **)*((_QWORD *)v207 + 165);
          LODWORD(v3809) = v1250 & 1;
          _disable();
          v1253 = v4007;
          v1254 = *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *((_QWORD *)v4007 + 202));
          _enable();
          (*((void (__fastcall **)(__int64))v1253 + 45))(v1254);
          LOBYTE(v1255) = 1;
          (*((void (__fastcall **)(_QWORD, __int64))v1253 + 29))(*((_QWORD *)v1253 + 166), v1255);
          v1256 = *v1252;
          if ( *v1252 != (char *)v1252 )
          {
            v1257 = *((_QWORD *)v1253 + 234);
            while ( 1 )
            {
              v1258 = *(_QWORD *)&v1256[*((_QWORD *)v1253 + 235) - v1257];
              if ( v3813 >= v1258 && v3813 < v1258 + *(unsigned int *)&v1256[*((_QWORD *)v1253 + 236) - v1257] )
                break;
              v1256 = *(char **)v1256;
              if ( v1256 == (char *)v1252 )
                goto LABEL_1762;
            }
            (*((void (__fastcall **)(char *, _QWORD))v1253 + 27))(&v1256[-v1257], (unsigned int)!(v1250 & 1) + 1);
LABEL_1762:
            v1250 = v3822;
          }
          (*((void (__fastcall **)(_QWORD))v1253 + 35))(*((_QWORD *)v1253 + 166));
          (*((void (**)(void))v1253 + 46))();
          if ( (*((_DWORD *)v1253 + 612) & 0x40000000) != 0 )
          {
            v1260 = sub_140B18070(&v4007, v3813, v1250);
            v207 = v4007;
            goto LABEL_1944;
          }
          v1261 = v3813;
          v4216 = 0LL;
          LOBYTE(v1259) = 1;
          v4182[4] = 0;
          v4213 = (*((__int64 (__fastcall **)(ULONG_PTR, __int64, _QWORD, int *))v1253 + 62))(v3813, v1259, 0LL, &v3869);
          v1262 = v3869 & (unsigned int)-(v4213 != 0);
          v3869 = v1262;
          v1263 = (__int64 (__fastcall *)(ULONG_PTR, __int64, __int64, int *))*((_QWORD *)v1253 + 62);
          v4182[1] = v1262;
          LOBYTE(v1262) = 1;
          v1264 = v1263(v1261, v1262, 12LL, &v3869);
          v1265 = v1264;
          HalExtensionList = v1264;
          v4214 = v1264;
          LOBYTE(v1265) = 1;
          v3869 &= -(v1264 != 0);
          v1266 = (__int64 (__fastcall *)(ULONG_PTR, __int64, __int64, int *))*((_QWORD *)v1253 + 62);
          LODWORD(v3811) = v3869;
          v4182[2] = v3869;
          v4215 = v1266(v1261, v1265, 10LL, &v3869);
          v3869 &= -(v4215 != 0);
          v1267 = (__int64 (__fastcall *)(ULONG_PTR))*((_QWORD *)v1253 + 63);
          v4182[3] = v3869;
          v1268 = v1267(v1261);
          if ( !v1268 )
          {
            if ( (*((_DWORD *)v1253 + 612) & 0x200000) == 0 )
            {
              v3871[20] = 317;
              KeBugCheckEx(__ROR4__BugCheckCode: (317, 160), BugCheckParameter1: 0xAuLL, BugCheckParameter2: v1261, BugCheckParameter3: 7uLL, BugCheckParameter4: 0LL);
            }
            if ( !*((_DWORD *)v1253 + 574) )
            {
              *((_QWORD *)v1253 + 288) = v1253 - 0x5C5FC0A76E374B18LL;
              *((_QWORD *)v1253 + 289) = 0LL;
              *((_QWORD *)v1253 + 290) = 271LL;
              *((_QWORD *)v1253 + 291) = v1261;
              *((_DWORD *)v1253 + 574) = 1;
              __ba((__int64)v1253, 0LL);
            }
            return 0;
          }
          v1269 = (*((__int64 (__fastcall **)(ULONG_PTR, int *))v1253 + 148))(v1261, &v4026);
          v1270 = *((unsigned int *)v1253 + 505);
          v1271 = *((unsigned int *)v1253 + 585);
          v4217 = v1269;
          v4182[0] = *(_DWORD *)(v1268 + 84);
          v4182[5] = v4026;
          v1272 = v1270 + 288;
          v4212 = v1261;
          v1273 = v1251 != 0 ? 0xB : 0;
          LODWORD(v3817) = v1273;
          if ( (unsigned int)(v1270 + 288) <= *((_DWORD *)v1253 + 647) )
          {
            v207 = v1253;
            *((_DWORD *)v1253 + 505) = v1272;
          }
          else
          {
            v207 = (_BYTE *)sub_140B11020(v1253, v1272, v1271);
            if ( !v207 )
              return 0;
            v1274 = *((_DWORD *)v1253 + 612);
            if ( (v1274 & 4) == 0 )
            {
              v1275 = *((_DWORD *)v1253 + 505);
              v1276 = *((_QWORD *)v1253 + 249);
              v1277 = (v1274 & 0x20000000) != 0 ? *((_DWORD *)v1253 + 585) : 0;
              if ( v1275 >= 8 )
              {
                v1278 = (unsigned __int64)v1275 >> 3;
                do
                {
                  *(_QWORD *)v1253 = 0LL;
                  v1275 -= 8;
                  v1253 += 8;
                  --v1278;
                }
                while ( v1278 );
              }
              for ( ; v1275; --v1275 )
                *v1253++ = 0;
              v1279 = *((_DWORD *)v207 + 585);
              *((_DWORD *)v207 + 585) = v1277;
              if ( v1277 == 3 )
              {
                (*((void (__fastcall **)(__int64))v207 + 109))(v1276);
              }
              else if ( (*((_DWORD *)v207 + 612) & 0x10000000) != 0 || !v1277 )
              {
                (*((void (__fastcall **)(__int64))v207 + 31))(v1276);
              }
              else
              {
                (*((void (__fastcall **)(__int64, _QWORD))v207 + 69))(v1276 - 8, *(_QWORD *)(v1276 - 8));
              }
              v1273 = v3817;
              *((_DWORD *)v207 + 585) = v1279;
            }
            *((_DWORD *)v207 + 612) &= ~4u;
          }
          v1280 = &v4212;
          *((_DWORD *)v207 + 515) += 6;
          v1281 = v4182;
          v1282 = &v207[v1270];
          v3816 = (__int64)&v4212;
          v3812 = (unsigned __int64)v1282;
          v3820 = (ULONG_PTR)v4182;
          v3818 = 6LL;
          do
          {
            v1283 = (unsigned int)*v1281;
            v1284 = 48;
            v1285 = (_QWORD *)*v1280;
            v1286 = v1282;
            LODWORD(v3819) = *v1281;
            v1287 = 6LL;
            do
            {
              *v1286 = 0LL;
              v1284 -= 8;
              ++v1286;
              --v1287;
            }
            while ( v1287 );
            for ( ; v1284; --v1284 )
            {
              *(_BYTE *)v1286 = 0;
              v1286 = (_QWORD *)((char *)v1286 + 1);
            }
            *(_DWORD *)v1282 = v1273;
            *((_QWORD *)v1282 + 1) = v1285;
            v1288 = v1285;
            *((_DWORD *)v1282 + 4) = v1283;
            v1289 = (const char *)v1285;
            *((_DWORD *)v207 + 522) += v1283;
            v1290 = *((_DWORD *)v207 + 517);
            v1291 = *((_QWORD *)v207 + 259);
            if ( v1285 < (_QWORD *)((char *)v1285 + v1283) )
            {
              do
              {
                _mm_prefetch(v1289, 0);
                v1289 += 64;
              }
              while ( v1289 < (const char *)v1285 + v1283 );
            }
            v1292 = *((_QWORD *)v207 + 259);
            v1293 = (unsigned int)v1283 >> 7;
            if ( (unsigned int)v1283 >> 7 )
            {
              do
              {
                v1294 = 8LL;
                do
                {
                  v1295 = v1288[1] ^ __ROL8__(*v1288 ^ v1292, v1290);
                  v1288 += 2;
                  v1292 = __ROL8__(v1295, v1290);
                  --v1294;
                }
                while ( v1294 );
                v1296 = (__ROL8__(v1291 ^ ((char *)v1288 - (char *)v1285), 17) ^ v1291 ^ (unsigned __int64)((char *)v1288 - (char *)v1285))
                      * (unsigned __int128)0x7010008004002001uLL;
                v4027 = *((_QWORD *)&v1296 + 1);
                v1290 = ((unsigned __int8)v1296 ^ (unsigned __int8)(BYTE8(v1296) ^ v1290)) & 0x3F;
                if ( !v1290 )
                  LOBYTE(v1290) = 1;
                --v1293;
              }
              while ( v1293 );
              LODWORD(v1283) = v3819;
              v1280 = (_QWORD *)v3816;
              v1281 = (_DWORD *)v3820;
            }
            v1297 = v1283 & 0x7F;
            if ( v1297 >= 8 )
            {
              v1298 = (unsigned __int64)(v1283 & 0x7F) >> 3;
              do
              {
                v1292 = __ROL8__(*v1288++ ^ v1292, v1290);
                v1297 -= 8;
                --v1298;
              }
              while ( v1298 );
            }
            for ( ; v1297; --v1297 )
            {
              v1299 = *(unsigned __int8 *)v1288;
              v1288 = (_QWORD *)((char *)v1288 + 1);
              v1292 = __ROL8__(v1299 ^ v1292, v1290);
            }
            for ( i1 = v1292 >> 31; i1; i1 >>= 31 )
              LODWORD(v1292) = i1 ^ v1292;
            v1273 = v3817;
            *((_DWORD *)v1282 + 5) = v1292 & 0x7FFFFFFF;
            ++v1281;
            *((_DWORD *)v207 + 522) += v1283;
            ++v1280;
            v3820 = (ULONG_PTR)v1281;
            v1282 += 48;
            v3816 = (__int64)v1280;
            --v3818;
          }
          while ( v3818 );
          v1301 = v3812;
          v1302 = v3813;
          *(_DWORD *)v3812 = 44;
          *(_QWORD *)(v1301 + 24) = v1302;
          v1303 = *((_DWORD *)v207 + 612);
          if ( (v1303 & 0x10000000) != 0 || (v1303 & 0x200000) != 0 )
          {
            v1304 = (int)Src;
            if ( !(_DWORD)Src )
              goto LABEL_1814;
          }
          else
          {
            v1304 = (int)Src;
            if ( !(_DWORD)Src )
            {
              if ( (*((_DWORD *)v207 + 613) & 0x8000) != 0 )
              {
                *(_DWORD *)(v1301 + 32) |= 1u;
                if ( (unsigned int)sub_140B120E0(a1: (__int64)v207, a2: v1302) )
                  *(_DWORD *)(v1301 + 32) |= 4u;
              }
LABEL_1814:
              v4025 = v207;
              v4007 = v207;
              v1260 = sub_140B0F838((int)&v4025, v3814, v3810, v1302, v1304, v3822, (__int64)v3871, (__int64)&v3870);
              if ( v1260 < 0 )
                goto LABEL_1945;
              v1305 = v4025;
              v1306 = 48;
              v1307 = 6LL;
              v1308 = v3870 - v3871[0];
              v4007 = v4025;
              v1309 = v4025 - v207 + v1301;
              v1310 = (const char *)(v1302 + v3871[0]);
              v3812 = v1309;
              v1311 = (_DWORD *)(v1309 + 192);
              v3816 = v1309 + 192;
              v1312 = (_QWORD *)(v1309 + 192);
              do
              {
                *v1312 = 0LL;
                v1306 -= 8;
                ++v1312;
                --v1307;
              }
              while ( v1307 );
              for ( ; v1306; --v1306 )
              {
                *(_BYTE *)v1312 = 0;
                v1312 = (_QWORD *)((char *)v1312 + 1);
              }
              v1313 = (__int64)v1310;
              *v1311 = v3817;
              v1314 = v1310;
              *(_QWORD *)(v1309 + 200) = v1310;
              *(_DWORD *)(v1309 + 208) = v1308;
              *((_DWORD *)v1305 + 522) += v1308;
              v1315 = *((_DWORD *)v1305 + 517);
              v1316 = *((_QWORD *)v1305 + 259);
              v1317 = (unsigned __int64)&v1310[v1308];
              if ( (unsigned __int64)v1310 < v1317 )
              {
                do
                {
                  _mm_prefetch(v1314, 0);
                  v1314 += 64;
                }
                while ( (unsigned __int64)v1314 < v1317 );
              }
              v1318 = *((_QWORD *)v1305 + 259);
              v1319 = v1308 >> 7;
              if ( v1308 >> 7 )
              {
                do
                {
                  v1320 = 8LL;
                  do
                  {
                    v1321 = *(_QWORD *)(v1313 + 8) ^ __ROL8__(*(_QWORD *)v1313 ^ v1318, v1315);
                    v1313 += 16LL;
                    v1318 = __ROL8__(v1321, v1315);
                    --v1320;
                  }
                  while ( v1320 );
                  v1322 = (__ROL8__(v1316 ^ (v1313 - (_QWORD)v1310), 17) ^ v1316 ^ (unsigned __int64)(v1313 - (_QWORD)v1310))
                        * (unsigned __int128)0x7010008004002001uLL;
                  v4028 = *((_QWORD *)&v1322 + 1);
                  v1315 = ((unsigned __int8)(v1322 ^ BYTE8(v1322)) ^ (unsigned __int8)v1315) & 0x3F;
                  if ( !v1315 )
                    LOBYTE(v1315) = 1;
                  --v1319;
                }
                while ( v1319 );
                v1311 = (_DWORD *)v3816;
              }
              v1323 = v1308 & 0x7F;
              if ( (unsigned int)v1323 >= 8 )
              {
                v1324 = (unsigned __int64)(unsigned int)v1323 >> 3;
                do
                {
                  v1318 = __ROL8__(*(_QWORD *)v1313 ^ v1318, v1315);
                  v1313 += 8LL;
                  v1323 = (unsigned int)(v1323 - 8);
                  --v1324;
                }
                while ( v1324 );
              }
              if ( (_DWORD)v1323 )
              {
                do
                {
                  v1325 = *(unsigned __int8 *)v1313++;
                  v1318 = __ROL8__(v1325 ^ v1318, v1315);
                  v885 = (_DWORD)v1323 == 1;
                  v1323 = (unsigned int)(v1323 - 1);
                }
                while ( !v885 );
              }
              v1326 = v1318 >> 31;
              v1327 = 0;
              while ( v1326 )
              {
                LODWORD(v1318) = v1326 ^ v1318;
                v1326 >>= 31;
              }
              v1328 = v3812;
              v1311[5] = v1318 & 0x7FFFFFFF;
              v1329 = (int)Src;
              *(_DWORD *)(v1328 + 240) = 48;
              if ( *(_DWORD *)(v1328 + 256) )
              {
                LOBYTE(v1327) = v1329 != 0;
                *(_DWORD *)(v1328 + 264) = *(_DWORD *)(v1328 + 264) & 0xFFFFFFFE | v1327;
              }
              v4007 = v1305;
              v1330 = (int *)(v1328 + 96);
              v1331 = (v1329 != 0) + 13;
              if ( v1328 == -96LL )
              {
                v1332 = *((unsigned int *)v1305 + 505);
                v1333 = v1332 + 48;
                if ( (unsigned int)(v1332 + 48) <= *((_DWORD *)v1305 + 647) )
                {
                  v207 = v1305;
                  *((_DWORD *)v1305 + 505) = v1333;
                }
                else
                {
                  v207 = (_BYTE *)sub_140B11020(v1305, v1333, *((unsigned int *)v1305 + 585));
                  if ( !v207 )
                    return 0;
                  v1334 = *((_DWORD *)v1305 + 612);
                  if ( (v1334 & 4) == 0 )
                  {
                    v1335 = *((_DWORD *)v1305 + 505);
                    v1336 = *((_QWORD *)v1305 + 249);
                    v1337 = (v1334 & 0x20000000) != 0 ? *((_DWORD *)v1305 + 585) : 0;
                    if ( v1335 >= 8 )
                    {
                      v1338 = (unsigned __int64)v1335 >> 3;
                      do
                      {
                        *(_QWORD *)v1305 = 0LL;
                        v1335 -= 8;
                        v1305 += 8;
                        --v1338;
                      }
                      while ( v1338 );
                    }
                    for ( ; v1335; --v1335 )
                      *v1305++ = 0;
                    v1339 = *((_DWORD *)v207 + 585);
                    *((_DWORD *)v207 + 585) = v1337;
                    if ( v1337 == 3 )
                    {
                      (*((void (__fastcall **)(__int64))v207 + 109))(v1336);
                    }
                    else if ( (*((_DWORD *)v207 + 612) & 0x10000000) != 0 || !v1337 )
                    {
                      (*((void (__fastcall **)(__int64))v207 + 31))(v1336);
                    }
                    else
                    {
                      (*((void (__fastcall **)(__int64, _QWORD))v207 + 69))(v1336 - 8, *(_QWORD *)(v1336 - 8));
                    }
                    *((_DWORD *)v207 + 585) = v1339;
                  }
                  *((_DWORD *)v207 + 612) &= ~4u;
                }
                ++*((_DWORD *)v207 + 515);
                v1330 = (int *)&v207[v1332];
                v1340 = 48;
                v1341 = v1330;
                v1342 = 6LL;
                do
                {
                  *(_QWORD *)v1341 = 0LL;
                  v1340 -= 8;
                  v1341 += 2;
                  --v1342;
                }
                while ( v1342 );
                for ( ; v1340; --v1340 )
                {
                  *(_BYTE *)v1341 = 0;
                  v1341 = (int *)((char *)v1341 + 1);
                }
                v1343 = (unsigned int)v3811;
                *v1330 = v1331;
                v1344 = (_QWORD *)HalExtensionList;
                *((_QWORD *)v1330 + 1) = HalExtensionList;
                v1345 = v1344;
                v1330[4] = v1343;
                *((_DWORD *)v207 + 522) += v1343;
                v1313 = *((unsigned int *)v207 + 517);
                v1346 = *((_QWORD *)v207 + 259);
                if ( v1344 < (_QWORD *)((char *)v1344 + v1343) )
                {
                  v1347 = (const char *)v1344;
                  do
                  {
                    _mm_prefetch(v1347, 0);
                    v1347 += 64;
                  }
                  while ( v1347 < (const char *)v1344 + v1343 );
                }
                v1348 = *((_QWORD *)v207 + 259);
                v1323 = (unsigned int)v1343 >> 7;
                if ( (_DWORD)v1323 )
                {
                  do
                  {
                    v1349 = 8LL;
                    do
                    {
                      v1350 = v1345[1] ^ __ROL8__(*v1345 ^ v1348, v1313);
                      v1345 += 2;
                      v1348 = __ROL8__(v1350, v1313);
                      --v1349;
                    }
                    while ( v1349 );
                    v1351 = (__ROL8__(v1346 ^ ((char *)v1345 - (char *)v1344), 17) ^ v1346 ^ (unsigned __int64)((char *)v1345 - (char *)v1344))
                          * (unsigned __int128)0x7010008004002001uLL;
                    v4029 = *((_QWORD *)&v1351 + 1);
                    v1313 = ((unsigned __int8)v1351 ^ (unsigned __int8)(BYTE8(v1351) ^ v1313)) & 0x3F;
                    if ( !(_DWORD)v1313 )
                      v1313 = 1LL;
                    v885 = (_DWORD)v1323 == 1;
                    v1323 = (unsigned int)(v1323 - 1);
                  }
                  while ( !v885 );
                  LODWORD(v1343) = v3811;
                }
                v1328 = v1343 & 0x7F;
                if ( (unsigned int)v1328 >= 8 )
                {
                  v1352 = (unsigned __int64)(v1343 & 0x7F) >> 3;
                  do
                  {
                    v1348 = __ROL8__(*v1345++ ^ v1348, v1313);
                    v1328 = (unsigned int)(v1328 - 8);
                    --v1352;
                  }
                  while ( v1352 );
                }
                if ( (_DWORD)v1328 )
                {
                  do
                  {
                    v1353 = *(unsigned __int8 *)v1345;
                    v1345 = (_QWORD *)((char *)v1345 + 1);
                    v1348 = __ROL8__(v1353 ^ v1348, v1313);
                    v885 = (_DWORD)v1328 == 1;
                    v1328 = (unsigned int)(v1328 - 1);
                  }
                  while ( !v885 );
                }
                for ( i2 = v1348; ; LODWORD(v1348) = i2 ^ v1348 )
                {
                  i2 >>= 31;
                  if ( !i2 )
                    break;
                }
                v1330[5] = v1348 & 0x7FFFFFFF;
                *((_DWORD *)v207 + 522) += v1343;
                v1329 = (int)Src;
              }
              else
              {
                LODWORD(v1343) = v3811;
                v207 = v1305;
                *v1330 = v1331;
                v1344 = (_QWORD *)HalExtensionList;
              }
              if ( (*((_DWORD *)v207 + 612) & 0x40000000) != 0 && (_DWORD)v1343 )
                sub_1403EB41C(v207, v1344, (unsigned int)v1343, v1330 + 7);
              v1330[6] = 0;
              if ( (_DWORD)v3809 )
                v1330[6] = 1;
              v1355 = v3812;
              v4007 = v207;
              *(_DWORD *)(v3812 + 144) = 35;
              *(_DWORD *)(v1355 + 184) = *(_DWORD *)(v1355 + 184) & 0xFFFFFFFE | (v1329 != 0);
              if ( *(_DWORD *)(v1355 + 160) >= 0x94u )
              {
                v1356 = v3813;
                v1357 = *(_QWORD *)(v1355 + 152);
                v1358 = (*((__int64 (__fastcall **)(ULONG_PTR, unsigned __int64, __int64, __int64))v207 + 63))(
                          v3813,
                          v1328,
                          v1323,
                          v1313);
                if ( !v1358 )
                  return 0;
                v1359 = v1356 + *(unsigned int *)(v1358 + 80);
                v1328 = *(_DWORD *)(v1355 + 184) | 2u;
                *(_DWORD *)(v1355 + 184) = v1328;
                v1360 = v1328;
                v1361 = *(_QWORD **)(v1357 + 112);
                if ( (unsigned __int64)v1361 >= v1356 && (unsigned __int64)v1361 < v1359 )
                {
                  v1360 = v1328 | 4;
                  *(_QWORD *)(v1355 + 168) = *v1361;
                  *(_DWORD *)(v1355 + 184) = v1328 | 4;
                }
                v1362 = *(_QWORD **)(v1357 + 120);
                if ( (unsigned __int64)v1362 >= v1356 && (unsigned __int64)v1362 < v1359 )
                {
                  *(_QWORD *)(v1355 + 176) = *v1362;
                  *(_DWORD *)(v1355 + 184) = v1360 | 8;
                }
              }
              v885 = (*((_DWORD *)v207 + 612) & 0x400000) == 0;
              v4025 = v207;
              if ( v885 )
                goto LABEL_2134;
              v1363 = v3813;
              HalExtensionList = (*((__int64 (__fastcall **)(ULONG_PTR, unsigned __int64, __int64, __int64))v207 + 63))(
                                   v3813,
                                   v1328,
                                   v1323,
                                   v1313);
              if ( !HalExtensionList )
                goto LABEL_1895;
              v1364 = *(unsigned __int16 *)(HalExtensionList + 6);
              v3812 = (unsigned int)v3810 / 0xCuLL;
              LOWORD(v3815) = v1364;
              if ( !(_WORD)v1364 )
              {
                if ( (*((_DWORD *)v207 + 612) & 0x200000) == 0 )
                {
                  v3871[13] = 317;
                  KeBugCheckEx(__ROR4__BugCheckCode: (317, 160), BugCheckParameter1: 0xAuLL, BugCheckParameter2: v1363, BugCheckParameter3: 0LL, BugCheckParameter4: 0LL);
                }
                goto LABEL_1898;
              }
              v1365 = v1364;
              v1366 = (unsigned int *)v3814;
              LODWORD(v3811) = v1364;
              v1367 = v3814 + 12LL * ((unsigned int)v3810 / 0xC);
              LODWORD(v3809) = 0;
              v1368 = 0;
              v1369 = *(unsigned __int16 *)(HalExtensionList + 20) + 24LL;
              v3816 = v1367;
              v1370 = HalExtensionList + v1369;
              v3820 = v1370;
              v1371 = v3813;
              while ( 2 )
              {
                v1372 = 5LL * v1368;
                v1373 = *(_DWORD *)(v1370 + 40LL * v1368 + 16);
                v1374 = *(_DWORD *)(v1370 + 40LL * v1368 + 12);
                if ( v1373 <= *(_DWORD *)(v1370 + 40LL * v1368 + 8) )
                  v1373 = *(_DWORD *)(v1370 + 40LL * v1368 + 8);
                v3818 = 5LL * v1368;
                v1375 = v1374 + v1373;
                LODWORD(v3817) = v1374;
                if ( v1368 )
                {
                  if ( v1375 >= *(_DWORD *)(v1370 + 40LL * (v1368 - 1) + 12) )
                  {
                    v1368 = v3809;
                    goto LABEL_1907;
                  }
                  if ( (*((_DWORD *)v207 + 612) & 0x200000) == 0 )
                  {
                    v3871[14] = 317;
                    KeBugCheckEx(__ROR4__BugCheckCode: (317, 160), BugCheckParameter1: 0xAuLL, BugCheckParameter2: v3813, BugCheckParameter3: 1uLL, BugCheckParameter4: 0LL);
                  }
LABEL_1934:
                  if ( !*((_DWORD *)v207 + 574) )
                  {
                    *((_QWORD *)v207 + 288) = v207 - 0x5C5FC0A76E374B18LL;
                    *((_QWORD *)v207 + 289) = 0LL;
                    v1389 = v3813;
                    *((_QWORD *)v207 + 290) = 271LL;
                    *((_QWORD *)v207 + 291) = v1389;
                    *((_DWORD *)v207 + 574) = 1;
LABEL_1900:
                    __ba((__int64)v207, 0LL);
                  }
LABEL_1895:
                  v1260 = -1073741701;
LABEL_1944:
                  if ( v1260 >= 0 )
                    goto LABEL_2135;
LABEL_1945:
                  if ( v1260 != -1073741554 )
                    return 0;
                  goto LABEL_2135;
                }
LABEL_1907:
                if ( v1366 != (unsigned int *)v1367 )
                {
                  do
                  {
                    v1376 = v1366[1];
                    if ( *v1366 >= v1375 || v1376 <= v1374 )
                      break;
                    if ( *v1366 < v1374 || v1376 > v1375 )
                    {
                      if ( (*((_DWORD *)v207 + 612) & 0x200000) == 0 )
                      {
                        v3871[17] = 317;
                        KeBugCheckEx(__ROR4__BugCheckCode: (317, 160), BugCheckParameter1: 0xAuLL, BugCheckParameter2: v3813, BugCheckParameter3: 2uLL, BugCheckParameter4: 0LL);
                      }
                      goto LABEL_1934;
                    }
                    v1377 = v1366[2];
                    if ( (v1377 & 1) != 0 || (*(_BYTE *)(v1377 + v1371) & 0x20) != 0 )
                    {
                      v1378 = *(_DWORD *)(v1370 + 8 * v1372 + 16);
                      v1379 = *(_DWORD *)(v1370 + 8 * v1372 + 12);
                      if ( v1378 <= *(_DWORD *)(v1370 + 8 * v1372 + 8) )
                        v1378 = *(_DWORD *)(v1370 + 8 * v1372 + 8);
                      v1380 = v1379 + v1378;
                      v1381 = (unsigned int *)(*((__int64 (__fastcall **)(unsigned int *, ULONG_PTR, ULONG_PTR, __int64))v207
                                               + 131))(
                                                v1366,
                                                v1371,
                                                v1370,
                                                v1365);
                      v1382 = v1381;
                      if ( *v1381 < v1379 || v1381[1] > v1380 )
                      {
                        v1383 = v3813;
                        if ( (*((_DWORD *)v207 + 612) & 0x200000) == 0 )
                        {
                          v3871[16] = 317;
                          KeBugCheckEx(
                            __ROR4__BugCheckCode: (317, 160),
                            BugCheckParameter1: 0xAuLL,
                            BugCheckParameter2: v3813,
                            (BugCheckParameter3: (_DWORD)v1381 - (_DWORD)v3813) | 0x80000000,
                            BugCheckParameter4: 0LL);
                        }
                        if ( !*((_DWORD *)v207 + 574) )
                        {
                          *((_QWORD *)v207 + 288) = v207 - 0x5C5FC0A76E374B18LL;
                          *((_QWORD *)v207 + 289) = 0LL;
                          *((_QWORD *)v207 + 290) = 271LL;
                          *((_QWORD *)v207 + 291) = v1383;
                          *((_DWORD *)v207 + 574) = 1;
                          __ba((__int64)v207, 0LL);
                        }
                      }
                      v1384 = (unsigned int *)(*((__int64 (__fastcall **)(unsigned int *, ULONG_PTR, ULONG_PTR))v207
                                               + 132))(
                                                v1382,
                                                v3813,
                                                v3813 + *v1382);
                      if ( *v1384 < v1379 || v1384[1] > v1380 )
                      {
                        v1385 = v3813;
                        v1386 = ((_DWORD)v1384 - v3813) | 0x80000000;
                        if ( (*((_DWORD *)v207 + 612) & 0x200000) == 0 )
                        {
                          v3871[15] = 317;
                          KeBugCheckEx(__ROR4__BugCheckCode: (317, 160), BugCheckParameter1: 0xAuLL, BugCheckParameter2: v3813, BugCheckParameter3: v1386, BugCheckParameter4: 0LL);
                        }
                        if ( !*((_DWORD *)v207 + 574) )
                        {
                          *((_QWORD *)v207 + 288) = v207 - 0x5C5FC0A76E374B18LL;
                          *((_QWORD *)v207 + 289) = 0LL;
                          *((_QWORD *)v207 + 290) = 271LL;
                          *((_QWORD *)v207 + 291) = v1385;
                          *((_DWORD *)v207 + 574) = 1;
                          __ba((__int64)v207, 0LL);
                        }
                      }
                      v1372 = v3818;
                      v1374 = v3817;
                      v1370 = v3820;
                      v1367 = v3816;
                      v1371 = v3813;
                    }
                    v1366 += 3;
                  }
                  while ( v1366 != (unsigned int *)v1367 );
                  v1368 = v3809;
                  v1365 = (unsigned int)v3811;
                }
                LODWORD(v3809) = ++v1368;
                if ( v1368 < (unsigned int)v1365 )
                  continue;
                break;
              }
              v1387 = v3812;
              v1388 = HalExtensionList;
              v1363 = v3813;
              if ( v1366 != (unsigned int *)v1367 )
              {
                if ( (*((_DWORD *)v207 + 612) & 0x200000) == 0 )
                {
                  v3871[18] = 317;
                  KeBugCheckEx(__ROR4__BugCheckCode: (317, 160), BugCheckParameter1: 0xAuLL, BugCheckParameter2: v3813, BugCheckParameter3: 3uLL, BugCheckParameter4: 0LL);
                }
LABEL_1898:
                if ( !*((_DWORD *)v207 + 574) )
                {
                  *((_QWORD *)v207 + 288) = v207 - 0x5C5FC0A76E374B18LL;
                  *((_QWORD *)v207 + 289) = 0LL;
                  *((_QWORD *)v207 + 290) = 271LL;
                  *((_QWORD *)v207 + 291) = v1363;
                  *((_DWORD *)v207 + 574) = 1;
                  goto LABEL_1900;
                }
                goto LABEL_1895;
              }
              v1390 = (_DWORD)v3812 ? (v3812 + 6) & 0xFFFFFFF8 : 0;
              v1391 = *((unsigned int *)v207 + 505);
              v1392 = v1391 + v1390 + 24 * (v1365 + 2);
              if ( v1392 <= *((_DWORD *)v207 + 647) )
              {
                v1393 = (__int64)v207;
                HalExtensionList = (ULONG_PTR)v207;
                *((_DWORD *)v207 + 505) = v1392;
              }
              else
              {
                HalExtensionList = sub_140B11020(v207, v1392, *((unsigned int *)v207 + 585));
                v1393 = HalExtensionList;
                if ( !HalExtensionList )
                {
                  v1260 = -1073741670;
                  goto LABEL_1944;
                }
                v1394 = *((_DWORD *)v207 + 612);
                if ( (v1394 & 4) == 0 )
                {
                  v1395 = *((_DWORD *)v207 + 505);
                  v1396 = *((_QWORD *)v207 + 249);
                  v1397 = (v1394 & 0x20000000) != 0 ? *((_DWORD *)v207 + 585) : 0;
                  if ( v1395 >= 8 )
                  {
                    v1398 = (unsigned __int64)v1395 >> 3;
                    do
                    {
                      *(_QWORD *)v207 = 0LL;
                      v1395 -= 8;
                      v207 += 8;
                      --v1398;
                    }
                    while ( v1398 );
                  }
                  for ( ; v1395; --v1395 )
                    *v207++ = 0;
                  v1399 = *(_DWORD *)(v1393 + 2340);
                  *(_DWORD *)(v1393 + 2340) = v1397;
                  if ( v1397 == 3 )
                  {
                    (*(void (__fastcall **)(__int64))(v1393 + 872))(v1396);
                  }
                  else if ( (*(_DWORD *)(v1393 + 2448) & 0x10000000) != 0 || !v1397 )
                  {
                    (*(void (__fastcall **)(__int64))(v1393 + 248))(v1396);
                  }
                  else
                  {
                    (*(void (__fastcall **)(__int64, _QWORD))(v1393 + 552))(v1396 - 8, *(_QWORD *)(v1396 - 8));
                  }
                  v1393 = HalExtensionList;
                  v1387 = v3812;
                  *(_DWORD *)(HalExtensionList + 2340) = v1399;
                }
                *(_DWORD *)(v1393 + 2448) &= ~4u;
                LODWORD(v1365) = v3811;
                v1367 = v3816;
              }
              ++*(_DWORD *)(v1393 + 2060);
              v1400 = v1393 + v1391;
              v1401 = 48;
              v1402 = (_QWORD *)(v1393 + v1391);
              v1403 = 6LL;
              do
              {
                *v1402 = 0LL;
                v1401 -= 8;
                ++v1402;
                --v1403;
              }
              while ( v1403 );
              for ( ; v1401; --v1401 )
              {
                *(_BYTE *)v1402 = 0;
                v1402 = (_QWORD *)((char *)v1402 + 1);
              }
              v1404 = v3814;
              *(_DWORD *)v1400 = 30;
              *(_QWORD *)(v1400 + 8) = v1404;
              *(_DWORD *)(v1400 + 16) = 0;
              v1405 = *(_QWORD *)(v1393 + 2072);
              for ( i3 = v1405; ; LODWORD(v1405) = i3 ^ v1405 )
              {
                i3 >>= 31;
                if ( !i3 )
                  break;
              }
              v1407 = v3813;
              v1408 = (unsigned __int16)v3815;
              *(_DWORD *)(v1400 + 20) = v1405 & 0x7FFFFFFF;
              v207 = (_BYTE *)v1393;
              *(_QWORD *)(v1400 + 24) = v1407;
              *(_DWORD *)(v1400 + 32) = *(_DWORD *)(v1388 + 80);
              *(_DWORD *)(v1400 + 36) = v3810;
              v885 = (_DWORD)Src == 0;
              *(_WORD *)(v1400 + 40) = v1408;
              LOWORD(v1407) = *(_WORD *)(v1400 + 42) & 0xFFFE;
              v4025 = (_BYTE *)v1393;
              *(_WORD *)(v1400 + 42) = v1407 | !v885;
              v3812 = v1400 + 48;
              if ( v1387 )
                v1409 = (_DWORD *)(v1400 + 48 + (((unsigned int)(v1387 - 1) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL));
              else
                v1409 = (_DWORD *)(v1400 + 48);
              v1410 = (unsigned int *)v3814;
              v3818 = (ULONG_PTR)v1409;
              v1411 = &v1409[6 * v1408];
              v3824 = v1411;
              if ( v1387 )
                v3817 = v3814 + 12;
              else
                v3817 = v1367;
              if ( (_DWORD)v1365 )
              {
                v1412 = (unsigned int)v1365;
                v1413 = v1409 + 2;
                do
                {
                  v1414 = 2LL;
                  do
                  {
                    *(v1413 - 2) = 0;
                    *(v1413 - 1) = 0;
                    *v1413 = 0x80000000;
                    v1413 += 3;
                    --v1414;
                  }
                  while ( v1414 );
                  --v1412;
                }
                while ( v1412 );
                v1410 = (unsigned int *)v3814;
              }
              if ( v1409 == (_DWORD *)v1411 )
              {
LABEL_2134:
                v4007 = v207;
                goto LABEL_2135;
              }
              v1415 = (_DWORD *)v3820;
              while ( 2 )
              {
                v885 = (v1415[9] & 0x2000000) == 0;
                v1416 = 0;
                LODWORD(Src) = 0;
                if ( !v885 )
                  goto LABEL_1986;
                v1417 = *v1415;
                if ( *v1415 == 1414090313 )
                {
                  if ( v1415[1] == 1195525195 )
                    goto LABEL_1986;
LABEL_1992:
                  if ( v1417 != 1095914053 || *((_WORD *)v1415 + 2) != 16724 )
                    goto LABEL_1994;
LABEL_1986:
                  v1416 = 1;
                  LODWORD(Src) = 1;
                }
                else
                {
                  if ( v1417 != 1162297680 )
                    goto LABEL_1992;
                  v1418 = *((_WORD *)v1415 + 2);
                  if ( v1418 == 30839 || v1418 == 29303 || v1418 == 30583 )
                    goto LABEL_1986;
LABEL_1994:
                  v1419 = *(char **)(v1393 + 2352);
                  v1420 = 7;
                  v1421 = *(__int64 **)(v1393 + 2360);
                  v1422 = (char *)v1415 - v1419;
                  v1423 = *(char **)(HalExtensionList + 2368);
                  v1424 = *(char **)(HalExtensionList + 2376);
                  while ( 1 )
                  {
                    v1425 = (unsigned __int8)v1419[v1422];
                    v1426 = (unsigned __int8)*v1419++;
                    if ( v1425 != v1426 )
                      break;
                    if ( !--v1420 )
                    {
LABEL_2012:
                      v1416 = 1;
                      LODWORD(Src) = 1;
                      goto LABEL_2013;
                    }
                  }
                  v1427 = 8;
                  v1428 = (__int64 *)v1415;
                  while ( 1 )
                  {
                    v1429 = *v1428++;
                    v1430 = *v1421++;
                    if ( v1429 != v1430 )
                      break;
                    v1427 -= 8;
                    if ( v1427 < 8 )
                    {
                      if ( !v1427 )
                        goto LABEL_2012;
                      while ( 1 )
                      {
                        v1431 = *(unsigned __int8 *)v1428;
                        v1428 = (__int64 *)((char *)v1428 + 1);
                        v1432 = *(unsigned __int8 *)v1421;
                        v1421 = (__int64 *)((char *)v1421 + 1);
                        if ( v1431 != v1432 )
                          goto LABEL_2005;
                        if ( !--v1427 )
                          goto LABEL_2012;
                      }
                    }
                  }
LABEL_2005:
                  v1433 = 4;
                  v1434 = (char *)v1415 - v1423;
                  while ( 1 )
                  {
                    v1435 = (unsigned __int8)v1423[v1434];
                    v1436 = (unsigned __int8)*v1423++;
                    if ( v1435 != v1436 )
                      break;
                    if ( !--v1433 )
                      goto LABEL_2012;
                  }
                  v1437 = 6;
                  v1438 = (char *)v1415 - v1424;
                  while ( 1 )
                  {
                    v1439 = (unsigned __int8)v1424[v1438];
                    v1440 = (unsigned __int8)*v1424++;
                    if ( v1439 != v1440 )
                      break;
                    if ( !--v1437 )
                      goto LABEL_2012;
                  }
LABEL_2013:
                  v1409 = (_DWORD *)v3818;
                  v1393 = HalExtensionList;
                }
                v1441 = v1415[9];
                if ( v1441 < 0 )
                {
                  v1416 = 1;
                  LODWORD(Src) = 1;
                  goto LABEL_2017;
                }
                if ( v1416 )
                {
LABEL_2017:
                  if ( *v1415 == 1414090313 && v1415[1] == 1195525195 )
                  {
                    if ( (*(_DWORD *)(v1393 + 2452) & 0x2000) != 0 )
                      v1416 = 0;
                    LODWORD(Src) = v1416;
                  }
                }
                v1442 = v3813;
                if ( (*(_DWORD *)(v1393 + 2452) & 0x4000) != 0
                  && (v1441 & 0x20000000) != 0
                  && (v3813 == *(_QWORD *)(v1393 + 1504) || v3813 == *(_QWORD *)(v1393 + 1512)) )
                {
                  v1416 = 1;
                  LODWORD(Src) = 1;
                }
                v1443 = v1415[4];
                v1444 = (unsigned int)v1415[3];
                v1445 = v3816;
                if ( v1443 <= v1415[2] )
                  v1443 = v1415[2];
                v1446 = v1444 + v1443;
                LODWORD(v3810) = v1415[3];
                LODWORD(v3809) = v1446;
                if ( v1410 == (unsigned int *)v3816 )
                {
                  v1449 = 0;
                  v1451 = (_DWORD)v1444 != 0;
                  v1450 = v1444;
                }
                else
                {
                  v1447 = *v1410;
                  v1448 = v1410[1];
                  v1449 = v1448;
                  v1450 = v1444;
                  v1451 = v1447 < (unsigned int)v1444;
                  if ( v1447 > (unsigned int)v1444 )
                  {
                    if ( v1448 > v1446 )
                      goto LABEL_2059;
                    if ( v1416 )
                    {
                      v1470 = v3814;
                      goto LABEL_2063;
                    }
                    *v1409 = v1444;
                    v1450 = v1447;
                    v1409[1] = v1447;
                    v1452 = (const char *)(v1442 + v1444);
                    LODWORD(v3811) = v1448;
                    v1453 = v1447 - v1444;
                    v1454 = (unsigned __int64)&v1452[v1447 - (unsigned int)v1444];
                    v1455 = 0;
                    while ( 1 )
                    {
                      v1456 = *(&v4212 + v1455);
                      if ( (unsigned __int64)v1452 < v1456 + (unsigned int)v4182[v1455] && v1454 > v1456 )
                        break;
                      if ( ++v1455 >= 6 )
                      {
                        *(_DWORD *)(v1393 + 2088) += v1453;
                        v1457 = v1452;
                        v1458 = *(_DWORD *)(v1393 + 2068);
                        v1459 = *(_QWORD *)(v1393 + 2072);
                        for ( i4 = v1452; (unsigned __int64)v1457 < v1454; v1457 += 64 )
                          _mm_prefetch(v1457, 0);
                        v1461 = v1459;
                        v1462 = v1453 >> 7;
                        if ( v1453 >> 7 )
                        {
                          do
                          {
                            v1463 = 8LL;
                            do
                            {
                              v1464 = *((_QWORD *)i4 + 1) ^ __ROL8__(*(_QWORD *)i4 ^ v1461, v1458);
                              i4 += 16;
                              v1461 = __ROL8__(v1464, v1458);
                              --v1463;
                            }
                            while ( v1463 );
                            v1465 = __ROL8__(v1459 ^ (i4 - v1452), 17) ^ v1459 ^ (i4 - v1452);
                            v4030 = (v1465 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                            v1458 = ((unsigned __int8)v1465 ^ (unsigned __int8)(v4030 ^ v1458)) & 0x3F;
                            if ( !v1458 )
                              LOBYTE(v1458) = 1;
                            --v1462;
                          }
                          while ( v1462 );
                          v1449 = v3811;
                        }
                        v1466 = v1453 & 0x7F;
                        if ( v1466 >= 8 )
                        {
                          v1467 = (unsigned __int64)v1466 >> 3;
                          do
                          {
                            v1461 = __ROL8__(*(_QWORD *)i4 ^ v1461, v1458);
                            i4 += 8;
                            v1466 -= 8;
                            --v1467;
                          }
                          while ( v1467 );
                        }
                        for ( ; v1466; --v1466 )
                        {
                          v1468 = *(unsigned __int8 *)i4++;
                          v1461 = __ROL8__(v1468 ^ v1461, v1458);
                        }
                        for ( i5 = v1461 >> 31; i5; i5 >>= 31 )
                          LODWORD(v1461) = i5 ^ v1461;
                        v1446 = v3809;
                        v1416 = (int)Src;
                        v1393 = HalExtensionList;
                        *(_DWORD *)(v3818 + 8) = v1461 & 0x7FFFFFFF;
                        break;
                      }
                    }
                    v1445 = v3816;
LABEL_2059:
                    if ( v1449 <= v1446 )
                    {
                      v1470 = v3814;
                      if ( v3814 != v1445 )
                      {
LABEL_2063:
                        v1471 = (unsigned int *)v3817;
                        v1472 = *(_DWORD *)(v3817 + 4);
                        LODWORD(v3811) = v1472;
                        if ( v1472 <= v1446 )
                        {
                          while ( v1471 != (unsigned int *)v1445 )
                          {
                            if ( v1416 )
                            {
                              v1473 = 0x80;
                            }
                            else
                            {
                              v1474 = *(unsigned int *)(v1470 + 4);
                              v1450 = *v1471;
                              if ( *v1471 < (unsigned int)v1474 )
                              {
                                if ( (*(_DWORD *)(v1393 + 2448) & 0x200000) == 0 )
                                {
                                  v3871[19] = 317;
                                  KeBugCheckEx(__ROR4__BugCheckCode: (317, 160), BugCheckParameter1: 0xAuLL, BugCheckParameter2: v3813, BugCheckParameter3: 6uLL, BugCheckParameter4: 0LL);
                                }
                                if ( !*(_DWORD *)(v1393 + 2296) )
                                {
                                  *(_QWORD *)(v1393 + 2304) = v1393 - 0x5C5FC0A76E374B18LL;
                                  *(_QWORD *)(v1393 + 2312) = 0LL;
                                  v1475 = v3813;
                                  *(_QWORD *)(v1393 + 2320) = 271LL;
                                  *(_QWORD *)(v1393 + 2328) = v1475;
                                  *(_DWORD *)(v1393 + 2296) = 1;
                                  __ba(v1393, 0LL);
                                }
                              }
                              v1476 = (_QWORD *)(v3813 + v1474);
                              v1477 = v1450 - v1474;
                              v1478 = v3813 + v1474 + v1450 - (unsigned int)v1474;
                              for ( i6 = 0; i6 < 6; ++i6 )
                              {
                                v1480 = *(&v4212 + i6);
                                if ( (unsigned __int64)v1476 < v1480 + (unsigned int)v4182[i6] && v1478 > v1480 )
                                  goto LABEL_2096;
                              }
                              if ( v1477 < 4 )
                              {
LABEL_2096:
                                v1473 = 0x80;
                                goto LABEL_2097;
                              }
                              v1481 = HalExtensionList;
                              v1482 = v1476;
                              *(_DWORD *)(HalExtensionList + 2088) += v1477;
                              v1483 = *(_DWORD *)(v1481 + 2068);
                              v1484 = *(_QWORD *)(v1481 + 2072);
                              v1485 = (const char *)v1476;
                              if ( (unsigned __int64)v1476 < v1478 )
                              {
                                do
                                {
                                  _mm_prefetch(v1485, 0);
                                  v1485 += 64;
                                }
                                while ( (unsigned __int64)v1485 < v1478 );
                              }
                              v1486 = v1484;
                              v1487 = v1477 >> 7;
                              if ( v1477 >> 7 )
                              {
                                do
                                {
                                  v1488 = 8LL;
                                  do
                                  {
                                    v1489 = v1482[1] ^ __ROL8__(*v1482 ^ v1486, v1483);
                                    v1482 += 2;
                                    v1486 = __ROL8__(v1489, v1483);
                                    --v1488;
                                  }
                                  while ( v1488 );
                                  v1490 = (__ROL8__(v1484 ^ ((char *)v1482 - (char *)v1476), 17) ^ v1484 ^ ((char *)v1482 - (char *)v1476))
                                        * (unsigned __int128)0x7010008004002001uLL;
                                  v4031 = *((_QWORD *)&v1490 + 1);
                                  v1483 = ((unsigned __int8)(v1490 ^ BYTE8(v1490)) ^ (unsigned __int8)v1483) & 0x3F;
                                  if ( !v1483 )
                                    LOBYTE(v1483) = 1;
                                  --v1487;
                                }
                                while ( v1487 );
                                v1472 = v3811;
                              }
                              v1491 = v1477 & 0x7F;
                              if ( v1491 >= 8 )
                              {
                                v1492 = (unsigned __int64)v1491 >> 3;
                                do
                                {
                                  v1486 = __ROL8__(*v1482++ ^ v1486, v1483);
                                  v1491 -= 8;
                                  --v1492;
                                }
                                while ( v1492 );
                              }
                              for ( ; v1491; --v1491 )
                              {
                                v1493 = *(unsigned __int8 *)v1482;
                                v1482 = (_QWORD *)((char *)v1482 + 1);
                                v1486 = __ROL8__(v1493 ^ v1486, v1483);
                              }
                              for ( i7 = v1486 >> 7; i7; i7 >>= 7 )
                                LOBYTE(v1486) = i7 ^ v1486;
                              v1416 = (int)Src;
                              v1473 = v1486 & 0x7F;
LABEL_2097:
                              v1470 = v3814;
                              v1446 = v3809;
                            }
                            v1495 = (_BYTE *)v3812;
                            v1470 += 12LL;
                            ++v3812;
                            v3814 = v1470;
                            *v1495 = v1473;
                            v1445 = v3816;
                            v1471 = (unsigned int *)(v3817 + 12);
                            v3817 = (ULONG_PTR)v1471;
                            if ( v1471 != (unsigned int *)v3816 )
                            {
                              v1472 = v1471[1];
                              LODWORD(v3811) = v1472;
                            }
                            if ( v1472 > v1446 )
                              break;
                            v1393 = HalExtensionList;
                          }
                        }
                      }
                    }
LABEL_2101:
                    v1496 = v3818;
                    if ( !v1416 && v1450 != v1446 )
                    {
                      v1497 = v3813;
                      *(_DWORD *)(v3818 + 12) = v1450;
                      *(_DWORD *)(v1496 + 16) = v1446;
                      v1498 = *(unsigned int *)(v1496 + 12);
                      v1499 = v1446 - v1498;
                      v1500 = (_QWORD *)(v1498 + v1497);
                      v1501 = (unsigned __int64)v1500 + v1446 - (unsigned int)v1498;
                      LODWORD(Src) = v1499;
                      v1502 = 0;
                      while ( 1 )
                      {
                        v1503 = *(&v4212 + v1502);
                        if ( (unsigned __int64)v1500 < v1503 + (unsigned int)v4182[v1502] && v1501 > v1503 )
                          break;
                        if ( ++v1502 >= 6 )
                        {
                          v1504 = HalExtensionList;
                          v1505 = v1500;
                          *(_DWORD *)(HalExtensionList + 2088) += v1499;
                          v1506 = *(_DWORD *)(v1504 + 2068);
                          v1507 = *(_QWORD *)(v1504 + 2072);
                          v1508 = (const char *)v1500;
                          if ( (unsigned __int64)v1500 < v1501 )
                          {
                            do
                            {
                              _mm_prefetch(v1508, 0);
                              v1508 += 64;
                            }
                            while ( (unsigned __int64)v1508 < v1501 );
                          }
                          v1509 = v1507;
                          v1510 = v1499 >> 7;
                          if ( v1499 >> 7 )
                          {
                            do
                            {
                              v1511 = 8LL;
                              do
                              {
                                v1512 = v1505[1] ^ __ROL8__(*v1505 ^ v1509, v1506);
                                v1505 += 2;
                                v1509 = __ROL8__(v1512, v1506);
                                --v1511;
                              }
                              while ( v1511 );
                              v1513 = __ROL8__(v1507 ^ ((char *)v1505 - (char *)v1500), 17) ^ v1507 ^ ((char *)v1505 - (char *)v1500);
                              v4032 = (v1513 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                              v1506 = ((unsigned __int8)(v1513 ^ v4032) ^ (unsigned __int8)v1506) & 0x3F;
                              if ( !v1506 )
                                LOBYTE(v1506) = 1;
                              --v1510;
                            }
                            while ( v1510 );
                            LOBYTE(v1499) = (_BYTE)Src;
                          }
                          v1514 = v1499 & 0x7F;
                          if ( v1514 >= 8 )
                          {
                            v1515 = (unsigned __int64)v1514 >> 3;
                            do
                            {
                              v1509 = __ROL8__(*v1505++ ^ v1509, v1506);
                              v1514 -= 8;
                              --v1515;
                            }
                            while ( v1515 );
                          }
                          for ( ; v1514; --v1514 )
                          {
                            v1516 = *(unsigned __int8 *)v1505;
                            v1505 = (_QWORD *)((char *)v1505 + 1);
                            v1509 = __ROL8__(v1516 ^ v1509, v1506);
                          }
                          for ( i8 = v1509; ; LODWORD(v1509) = i8 ^ v1509 )
                          {
                            i8 >>= 31;
                            if ( !i8 )
                              break;
                          }
                          v1496 = v3818;
                          *(_DWORD *)(v3818 + 20) = v1509 & 0x7FFFFFFF;
                          break;
                        }
                      }
                      v1446 = v3809;
                    }
                    v1410 = (unsigned int *)v3814;
                    if ( v3814 != v3816 && *(_DWORD *)v3814 >= (unsigned int)v3810 && *(_DWORD *)(v3814 + 4) <= v1446 )
                    {
                      v1518 = v3817;
                      if ( v3817 != v3816 )
                      {
                        v1519 = v3812;
                        *(_BYTE *)v3812 = 0x80;
                        v3812 = v1519 + 1;
                        v3817 = v1518 + 12;
                      }
                      v1410 += 3;
                      v3814 = (ULONG_PTR)v1410;
                    }
                    v1409 = (_DWORD *)(v1496 + 24);
                    v1393 = HalExtensionList;
                    v1415 = (_DWORD *)(v3820 + 40);
                    v3818 = (ULONG_PTR)v1409;
                    v3820 += 40LL;
                    if ( v1409 == (_DWORD *)v3824 )
                    {
                      v207 = v4025;
                      goto LABEL_2134;
                    }
                    continue;
                  }
                }
                break;
              }
              if ( !v1451 )
                goto LABEL_2059;
              goto LABEL_2101;
            }
          }
          *(_DWORD *)(v1301 + 32) |= 2u;
          goto LABEL_1814;
        }
        LODWORD(v3817) = ++v926;
        if ( v926 >= *((_DWORD *)v207 + 515) )
          goto LABEL_1297;
      }
      v932 = v926 - v930;
      v930 = v926;
      while ( 2 )
      {
        v933 = *v931;
        if ( *v931 > 28 )
        {
          v941 = v933 - 30;
          if ( !v941 )
          {
            v939 = (((v931[9] != 0 ? v931[9] - 1 : 0) / 0xCu + 7) & 0xFFFFFFF8)
                 + 24 * (*((unsigned __int16 *)v931 + 20) + 2);
            goto LABEL_1286;
          }
          v942 = v941 - 3;
          if ( !v942 || (v943 = v942 - 1) == 0 )
          {
            v939 = 20 * (unsigned int)(((v931[8] & 0xFFF) + (unsigned __int64)(unsigned int)v931[10] + 4095) >> 12) + 48;
            goto LABEL_1286;
          }
          v938 = v943 == 9;
LABEL_1281:
          if ( !v938 )
          {
            v939 = 48LL;
            goto LABEL_1286;
          }
        }
        else
        {
          if ( v933 == 28 )
          {
            v940 = *((unsigned __int16 *)v931 + 20);
            goto LABEL_1274;
          }
          v934 = v933 - 1;
          if ( v934 )
          {
            v935 = v934 - 6;
            if ( !v935 )
            {
              v939 = (unsigned int)(24 * (v931[6] + 2));
              goto LABEL_1286;
            }
            v936 = v935 - 1;
            if ( v936 )
            {
              v937 = v936 - 2;
              if ( v937 )
              {
                v938 = v937 == 2;
                goto LABEL_1281;
              }
              v939 = (unsigned int)(16 * (v931[7] + 3));
LABEL_1286:
              v931 = (int *)((char *)v931 + v939);
              if ( !--v932 )
              {
                LODWORD(v929) = (_DWORD)Src;
                v926 = v3817;
                goto LABEL_1288;
              }
              continue;
            }
            v940 = *((unsigned __int16 *)v931 + 16);
LABEL_1274:
            v939 = (v940 + 55) & 0xFFFFFFF8;
            goto LABEL_1286;
          }
        }
        break;
      }
      v939 = 4 * (v931[4] / 0xCu) + 48;
      goto LABEL_1286;
    }
LABEL_1298:
    v946 = (*((__int64 (__fastcall **)(ULONG_PTR, __int64))v207 + 85))(v880, v924);
    LODWORD(v3817) = v946;
    LODWORD(v3811) = v3863[0];
    if ( (v3822 & 0x10) != 0 && (*((_DWORD *)v207 + 613) & 0x400) == 0 )
    {
      v921 = v3822 & 0xFFFFFFEF;
      LODWORD(v3819) = v3822 & 0xFFFFFFEF;
    }
    if ( (v921 & 0x10) != 0 && !(unsigned int)sub_140B120E0(a1: (__int64)v207, a2: v3820) )
    {
      v921 &= ~0x10u;
      LODWORD(v3819) = v921;
    }
    v947 = (char **)*((_QWORD *)v207 + 165);
    v3815 = v921 & 1;
    v948 = !(v921 & 1) + 1;
    _disable();
    v949 = v4007;
    v950 = *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *((_QWORD *)v4007 + 202));
    _enable();
    (*((void (__fastcall **)(__int64))v949 + 45))(v950);
    LOBYTE(v951) = 1;
    (*((void (__fastcall **)(_QWORD, __int64))v949 + 29))(*((_QWORD *)v949 + 166), v951);
    v952 = *v947;
    if ( *v947 != (char *)v947 )
    {
      v953 = *((_QWORD *)v949 + 234);
      while ( 1 )
      {
        v954 = *(_QWORD *)&v952[*((_QWORD *)v949 + 235) - v953];
        if ( v3820 >= v954 && v3820 < v954 + *(unsigned int *)&v952[*((_QWORD *)v949 + 236) - v953] )
          break;
        v952 = *(char **)v952;
        if ( v952 == (char *)v947 )
          goto LABEL_1311;
      }
      (*((void (__fastcall **)(char *, _QWORD))v949 + 27))(&v952[-v953], v948);
    }
LABEL_1311:
    (*((void (__fastcall **)(_QWORD))v949 + 35))(*((_QWORD *)v949 + 166));
    (*((void (**)(void))v949 + 46))();
    if ( (*((_DWORD *)v949 + 612) & 0x40000000) != 0 )
    {
      v956 = sub_140B18070(&v4011, v3820, (unsigned int)v3819);
      v897 = v4011;
      goto LABEL_1503;
    }
    v957 = v3820;
    v4210 = 0LL;
    LOBYTE(v955) = 1;
    v4178[4] = 0;
    v4207 = (*((__int64 (__fastcall **)(ULONG_PTR, __int64, _QWORD, _DWORD *))v949 + 62))(v3820, v955, 0LL, v3863);
    v958 = v3863[0] & (unsigned int)-(v4207 != 0);
    v3863[0] = v958;
    v959 = (__int64 (__fastcall *)(ULONG_PTR, __int64, __int64, _DWORD *))*((_QWORD *)v949 + 62);
    v4178[1] = v958;
    LOBYTE(v958) = 1;
    v960 = v959(v957, v958, 12LL, v3863);
    v961 = v960;
    v3816 = v960;
    v4208 = v960;
    LOBYTE(v961) = 1;
    v3863[0] &= -(v960 != 0);
    v962 = (__int64 (__fastcall *)(ULONG_PTR, __int64, __int64, _DWORD *))*((_QWORD *)v949 + 62);
    LODWORD(v3809) = v3863[0];
    v4178[2] = v3863[0];
    v4209 = v962(v957, v961, 10LL, v3863);
    v3863[0] &= -(v4209 != 0);
    v963 = (__int64 (__fastcall *)(ULONG_PTR))*((_QWORD *)v949 + 63);
    v4178[3] = v3863[0];
    v964 = v963(v957);
    if ( !v964 )
    {
      if ( (*((_DWORD *)v949 + 612) & 0x200000) == 0 )
      {
        v3871[4] = 317;
        KeBugCheckEx(__ROR4__BugCheckCode: (317, 160), BugCheckParameter1: 0xAuLL, BugCheckParameter2: v957, BugCheckParameter3: 7uLL, BugCheckParameter4: 0LL);
      }
      if ( !*((_DWORD *)v949 + 574) )
      {
        *((_QWORD *)v949 + 288) = v949 - 0x5C5FC0A76E374B18LL;
        *((_QWORD *)v949 + 289) = 0LL;
        *((_QWORD *)v949 + 290) = 271LL;
        *((_QWORD *)v949 + 291) = v957;
        *((_DWORD *)v949 + 574) = 1;
        __ba((__int64)v949, 0LL);
      }
LABEL_1317:
      v965 = (unsigned __int64)v4011;
LABEL_1318:
      v4007 = (_BYTE *)v965;
      return 0;
    }
    v966 = (*((__int64 (__fastcall **)(ULONG_PTR, int *))v949 + 148))(v957, &v4014);
    v967 = *((unsigned int *)v949 + 585);
    v4211 = v966;
    v4178[5] = v4014;
    v4178[0] = *(_DWORD *)(v964 + 84);
    v4206 = v957;
    v968 = *((unsigned int *)v949 + 505);
    v969 = v946 != 0 ? 0xB : 0;
    LODWORD(v3810) = v969;
    v970 = v968 + 288;
    if ( (unsigned int)(v968 + 288) <= *((_DWORD *)v949 + 647) )
    {
      v897 = v949;
      *((_DWORD *)v949 + 505) = v970;
    }
    else
    {
      v897 = (_BYTE *)sub_140B11020(v949, v970, v967);
      if ( !v897 )
      {
        v4012[0] = 0LL;
        goto LABEL_1317;
      }
      v971 = *((_DWORD *)v949 + 612);
      if ( (v971 & 4) == 0 )
      {
        v972 = *((_DWORD *)v949 + 505);
        v973 = *((_QWORD *)v949 + 249);
        v974 = (v971 & 0x20000000) != 0 ? *((_DWORD *)v949 + 585) : 0;
        if ( v972 >= 8 )
        {
          v975 = (unsigned __int64)v972 >> 3;
          do
          {
            *(_QWORD *)v949 = 0LL;
            v972 -= 8;
            v949 += 8;
            --v975;
          }
          while ( v975 );
        }
        for ( ; v972; --v972 )
          *v949++ = 0;
        v976 = *((_DWORD *)v897 + 585);
        *((_DWORD *)v897 + 585) = v974;
        if ( v974 == 3 )
        {
          (*((void (__fastcall **)(__int64))v897 + 109))(v973);
        }
        else if ( (*((_DWORD *)v897 + 612) & 0x10000000) != 0 || !v974 )
        {
          (*((void (__fastcall **)(__int64))v897 + 31))(v973);
        }
        else
        {
          (*((void (__fastcall **)(__int64, _QWORD))v897 + 69))(v973 - 8, *(_QWORD *)(v973 - 8));
        }
        *((_DWORD *)v897 + 585) = v976;
      }
      *((_DWORD *)v897 + 612) &= ~4u;
      v969 = v3810;
    }
    v977 = &v897[v968];
    *((_DWORD *)v897 + 515) += 6;
    v978 = &v4206;
    v979 = v4178;
    v3812 = (unsigned __int64)&v897[v968];
    v3813 = (ULONG_PTR)&v4206;
    v3814 = (ULONG_PTR)v4178;
    HalExtensionList = 6LL;
    do
    {
      v980 = *v979;
      v981 = 48;
      v982 = (_QWORD *)*v978;
      v983 = v977;
      v984 = 6LL;
      do
      {
        *v983 = 0LL;
        v981 -= 8;
        ++v983;
        --v984;
      }
      while ( v984 );
      for ( ; v981; --v981 )
      {
        *(_BYTE *)v983 = 0;
        v983 = (_QWORD *)((char *)v983 + 1);
      }
      *(_DWORD *)v977 = v969;
      *((_QWORD *)v977 + 1) = v982;
      v985 = v982;
      *((_DWORD *)v977 + 4) = v980;
      v986 = (const char *)v982;
      *((_DWORD *)v897 + 522) += v980;
      v987 = *((_DWORD *)v897 + 517);
      v988 = *((_QWORD *)v897 + 259);
      if ( v982 < (_QWORD *)((char *)v982 + v980) )
      {
        do
        {
          _mm_prefetch(v986, 0);
          v986 += 64;
        }
        while ( v986 < (const char *)v982 + v980 );
      }
      v989 = *((_QWORD *)v897 + 259);
      v990 = (unsigned int)v980 >> 7;
      if ( (unsigned int)v980 >> 7 )
      {
        do
        {
          v991 = 8LL;
          do
          {
            v992 = v985[1] ^ __ROL8__(*v985 ^ v989, v987);
            v985 += 2;
            v989 = __ROL8__(v992, v987);
            --v991;
          }
          while ( v991 );
          v993 = (__ROL8__(v988 ^ ((char *)v985 - (char *)v982), 17) ^ v988 ^ (unsigned __int64)((char *)v985
                                                                                               - (char *)v982))
               * (unsigned __int128)0x7010008004002001uLL;
          v4019 = *((_QWORD *)&v993 + 1);
          v987 = ((unsigned __int8)v993 ^ (unsigned __int8)(BYTE8(v993) ^ v987)) & 0x3F;
          if ( !v987 )
            LOBYTE(v987) = 1;
          --v990;
        }
        while ( v990 );
        v978 = (_QWORD *)v3813;
      }
      v994 = v980 & 0x7F;
      if ( v994 >= 8 )
      {
        v995 = (unsigned __int64)(v980 & 0x7F) >> 3;
        do
        {
          v989 = __ROL8__(*v985++ ^ v989, v987);
          v994 -= 8;
          --v995;
        }
        while ( v995 );
      }
      for ( ; v994; --v994 )
      {
        v996 = *(unsigned __int8 *)v985;
        v985 = (_QWORD *)((char *)v985 + 1);
        v989 = __ROL8__(v996 ^ v989, v987);
      }
      for ( i9 = v989 >> 31; i9; i9 >>= 31 )
        LODWORD(v989) = i9 ^ v989;
      v998 = v3814;
      v969 = v3810;
      ++v978;
      *((_DWORD *)v977 + 5) = v989 & 0x7FFFFFFF;
      v977 += 48;
      *((_DWORD *)v897 + 522) += v980;
      v979 = (unsigned int *)(v998 + 4);
      v3813 = (ULONG_PTR)v978;
      v885 = HalExtensionList-- == 1;
      v3814 = (ULONG_PTR)v979;
    }
    while ( !v885 );
    v999 = v3812;
    v1000 = v3820;
    *(_DWORD *)v3812 = 44;
    *(_QWORD *)(v999 + 24) = v1000;
    v1001 = *((_DWORD *)v897 + 612);
    if ( (v1001 & 0x10000000) != 0 || (v1001 & 0x200000) != 0 )
    {
      v1002 = v3817;
      if ( !(_DWORD)v3817 )
        goto LABEL_1368;
    }
    else
    {
      v1002 = v3817;
      if ( !(_DWORD)v3817 )
      {
        if ( (*((_DWORD *)v897 + 613) & 0x8000) != 0 )
        {
          *(_DWORD *)(v999 + 32) |= 1u;
          if ( (unsigned int)sub_140B120E0(a1: (__int64)v897, a2: v1000) )
            *(_DWORD *)(v999 + 32) |= 4u;
        }
LABEL_1368:
        v4012[0] = v897;
        v4011 = v897;
        v956 = sub_140B0F838((int)v4012, v3818, v3811, v1000, v1002, v3819, (__int64)&v3868, (__int64)&v3867);
        if ( v956 < 0 )
        {
          v207 = v897;
          v4007 = v897;
          goto LABEL_1504;
        }
        v965 = v4012[0];
        v1003 = 48;
        v1004 = v3867 - v3868;
        v1005 = v4012[0] - (_QWORD)v897 + v999;
        v1006 = (_QWORD *)(v1000 + v3868);
        v3812 = v1005;
        v4011 = (_BYTE *)v4012[0];
        v1007 = 6LL;
        v1008 = (_DWORD *)(v1005 + 192);
        HalExtensionList = v1005 + 192;
        v1009 = (_QWORD *)(v1005 + 192);
        do
        {
          *v1009 = 0LL;
          v1003 -= 8;
          ++v1009;
          --v1007;
        }
        while ( v1007 );
        for ( ; v1003; --v1003 )
        {
          *(_BYTE *)v1009 = 0;
          v1009 = (_QWORD *)((char *)v1009 + 1);
        }
        v1010 = v1006;
        *v1008 = v3810;
        v1011 = (const char *)v1006;
        *(_QWORD *)(v1005 + 200) = v1006;
        *(_DWORD *)(v1005 + 208) = v1004;
        *(_DWORD *)(v965 + 2088) += v1004;
        v1012 = *(unsigned int *)(v965 + 2068);
        v1013 = *(_QWORD *)(v965 + 2072);
        v1014 = (unsigned __int64)v1006 + v1004;
        if ( (unsigned __int64)v1006 < v1014 )
        {
          do
          {
            _mm_prefetch(v1011, 0);
            v1011 += 64;
          }
          while ( (unsigned __int64)v1011 < v1014 );
        }
        v1015 = *(_QWORD *)(v965 + 2072);
        v1016 = v1004 >> 7;
        if ( v1004 >> 7 )
        {
          do
          {
            v1017 = 8LL;
            do
            {
              v1018 = v1010[1] ^ __ROL8__(*v1010 ^ v1015, v1012);
              v1010 += 2;
              v1015 = __ROL8__(v1018, v1012);
              --v1017;
            }
            while ( v1017 );
            v1019 = (__ROL8__(v1013 ^ ((char *)v1010 - (char *)v1006), 17) ^ v1013 ^ (unsigned __int64)((char *)v1010 - (char *)v1006))
                  * (unsigned __int128)0x7010008004002001uLL;
            v4020 = *((_QWORD *)&v1019 + 1);
            v1012 = ((unsigned __int8)v1019 ^ (unsigned __int8)(BYTE8(v1019) ^ v1012)) & 0x3F;
            if ( !(_DWORD)v1012 )
              v1012 = 1LL;
            --v1016;
          }
          while ( v1016 );
          v1008 = (_DWORD *)HalExtensionList;
        }
        v1020 = v1004 & 0x7F;
        if ( v1020 >= 8 )
        {
          v1021 = (unsigned __int64)v1020 >> 3;
          do
          {
            v1015 = __ROL8__(*v1010++ ^ v1015, v1012);
            v1020 -= 8;
            --v1021;
          }
          while ( v1021 );
        }
        for ( ; v1020; --v1020 )
        {
          v1022 = *(unsigned __int8 *)v1010;
          v1010 = (_QWORD *)((char *)v1010 + 1);
          v1015 = __ROL8__(v1022 ^ v1015, v1012);
        }
        v1023 = v1015 >> 31;
        v1024 = 0;
        while ( v1023 )
        {
          LODWORD(v1015) = v1023 ^ v1015;
          v1023 >>= 31;
        }
        v1025 = v3812;
        v1026 = v3817;
        v1008[5] = v1015 & 0x7FFFFFFF;
        *(_DWORD *)(v1025 + 240) = 48;
        if ( *(_DWORD *)(v1025 + 256) )
        {
          LOBYTE(v1024) = v1026 != 0;
          *(_DWORD *)(v1025 + 264) = *(_DWORD *)(v1025 + 264) & 0xFFFFFFFE | v1024;
        }
        v4011 = (_BYTE *)v965;
        v1027 = (int *)(v1025 + 96);
        v1028 = (v1026 != 0) + 13;
        if ( v1025 == -96LL )
        {
          v1029 = *(unsigned int *)(v965 + 2020);
          v1030 = v1029 + 48;
          if ( (unsigned int)(v1029 + 48) <= *(_DWORD *)(v965 + 2588) )
          {
            v897 = (_BYTE *)v965;
            *(_DWORD *)(v965 + 2020) = v1030;
          }
          else
          {
            v897 = (_BYTE *)sub_140B11020(v965, v1030, *(unsigned int *)(v965 + 2340));
            if ( !v897 )
            {
              v4012[0] = 0LL;
              goto LABEL_1318;
            }
            v1031 = *(_DWORD *)(v965 + 2448);
            if ( (v1031 & 4) == 0 )
            {
              v1032 = *(_DWORD *)(v965 + 2020);
              v1033 = *(_QWORD *)(v965 + 1992);
              v1034 = (v1031 & 0x20000000) != 0 ? *(_DWORD *)(v965 + 2340) : 0;
              if ( v1032 >= 8 )
              {
                v1035 = (unsigned __int64)v1032 >> 3;
                do
                {
                  *(_QWORD *)v965 = 0LL;
                  v1032 -= 8;
                  v965 += 8LL;
                  --v1035;
                }
                while ( v1035 );
              }
              for ( ; v1032; --v1032 )
                *(_BYTE *)v965++ = 0;
              v1036 = *((_DWORD *)v897 + 585);
              *((_DWORD *)v897 + 585) = v1034;
              if ( v1034 == 3 )
              {
                (*((void (__fastcall **)(__int64))v897 + 109))(v1033);
              }
              else if ( (*((_DWORD *)v897 + 612) & 0x10000000) != 0 || !v1034 )
              {
                (*((void (__fastcall **)(__int64))v897 + 31))(v1033);
              }
              else
              {
                (*((void (__fastcall **)(__int64, _QWORD))v897 + 69))(v1033 - 8, *(_QWORD *)(v1033 - 8));
              }
              *((_DWORD *)v897 + 585) = v1036;
            }
            *((_DWORD *)v897 + 612) &= ~4u;
          }
          ++*((_DWORD *)v897 + 515);
          v1027 = (int *)&v897[v1029];
          v1037 = 48;
          v1038 = v1027;
          v1039 = 6LL;
          do
          {
            *(_QWORD *)v1038 = 0LL;
            v1037 -= 8;
            v1038 += 2;
            --v1039;
          }
          while ( v1039 );
          for ( ; v1037; --v1037 )
          {
            *(_BYTE *)v1038 = 0;
            v1038 = (int *)((char *)v1038 + 1);
          }
          v965 = (unsigned int)v3809;
          *v1027 = v1028;
          v1040 = v3816;
          *((_QWORD *)v1027 + 1) = v3816;
          v1010 = (_QWORD *)v1040;
          v1027[4] = v965;
          *((_DWORD *)v897 + 522) += v965;
          v1012 = *((unsigned int *)v897 + 517);
          v1041 = *((_QWORD *)v897 + 259);
          if ( v1040 < v1040 + v965 )
          {
            v1042 = (const char *)v1040;
            do
            {
              _mm_prefetch(v1042, 0);
              v1042 += 64;
            }
            while ( (unsigned __int64)v1042 < v1040 + v965 );
          }
          v1043 = *((_QWORD *)v897 + 259);
          v1044 = (unsigned int)v965 >> 7;
          if ( (unsigned int)v965 >> 7 )
          {
            do
            {
              v1045 = 8LL;
              do
              {
                v1046 = v1010[1] ^ __ROL8__(*v1010 ^ v1043, v1012);
                v1010 += 2;
                v1043 = __ROL8__(v1046, v1012);
                --v1045;
              }
              while ( v1045 );
              v1047 = (__ROL8__(v1041 ^ ((unsigned __int64)v1010 - v1040), 17) ^ v1041 ^ ((unsigned __int64)v1010 - v1040))
                    * (unsigned __int128)0x7010008004002001uLL;
              v4021 = *((_QWORD *)&v1047 + 1);
              v1012 = ((unsigned __int8)v1047 ^ (unsigned __int8)(BYTE8(v1047) ^ v1012)) & 0x3F;
              if ( !(_DWORD)v1012 )
                v1012 = 1LL;
              --v1044;
            }
            while ( v1044 );
            LODWORD(v965) = v3809;
          }
          v1025 = v965 & 0x7F;
          if ( (unsigned int)v1025 >= 8 )
          {
            v1048 = (v965 & 0x7F) >> 3;
            do
            {
              v1043 = __ROL8__(*v1010++ ^ v1043, v1012);
              v1025 = (unsigned int)(v1025 - 8);
              --v1048;
            }
            while ( v1048 );
          }
          if ( (_DWORD)v1025 )
          {
            do
            {
              v1049 = *(unsigned __int8 *)v1010;
              v1010 = (_QWORD *)((char *)v1010 + 1);
              v1043 = __ROL8__(v1049 ^ v1043, v1012);
              v885 = (_DWORD)v1025 == 1;
              v1025 = (unsigned int)(v1025 - 1);
            }
            while ( !v885 );
          }
          for ( i10 = v1043; ; LODWORD(v1043) = i10 ^ v1043 )
          {
            i10 >>= 31;
            if ( !i10 )
              break;
          }
          v1027[5] = v1043 & 0x7FFFFFFF;
          *((_DWORD *)v897 + 522) += v965;
          v1026 = v3817;
        }
        else
        {
          v897 = (_BYTE *)v965;
          *v1027 = v1028;
          LODWORD(v965) = v3809;
          v1040 = v3816;
        }
        if ( (*((_DWORD *)v897 + 612) & 0x40000000) != 0 && (_DWORD)v965 )
          sub_1403EB41C(v897, v1040, (unsigned int)v965, v1027 + 7);
        v1027[6] = 0;
        if ( v3815 )
          v1027[6] = 1;
        v1051 = v3812;
        v4011 = v897;
        *(_DWORD *)(v3812 + 144) = 35;
        *(_DWORD *)(v1051 + 184) = *(_DWORD *)(v1051 + 184) & 0xFFFFFFFE | (v1026 != 0);
        if ( *(_DWORD *)(v1051 + 160) < 0x94u )
        {
          v1060 = v3820;
        }
        else
        {
          v1052 = v3820;
          v1053 = *(_QWORD *)(v1051 + 152);
          v1054 = (*((__int64 (__fastcall **)(ULONG_PTR, unsigned __int64, _QWORD *, __int64))v897 + 63))(
                    v3820,
                    v1025,
                    v1010,
                    v1012);
          if ( !v1054 )
          {
            v4012[0] = 0LL;
LABEL_1253:
            v4007 = v897;
            return 0;
          }
          v1055 = v1052 + *(unsigned int *)(v1054 + 80);
          v1056 = *(_DWORD *)(v1051 + 184) | 2;
          *(_DWORD *)(v1051 + 184) = v1056;
          v1057 = v1056;
          v1058 = *(_QWORD **)(v1053 + 112);
          if ( (unsigned __int64)v1058 >= v1052 && (unsigned __int64)v1058 < v1055 )
          {
            v1057 = v1056 | 4;
            *(_QWORD *)(v1051 + 168) = *v1058;
            *(_DWORD *)(v1051 + 184) = v1056 | 4;
          }
          v1059 = *(_QWORD **)(v1053 + 120);
          v1060 = v3820;
          if ( (unsigned __int64)v1059 >= v3820 && (unsigned __int64)v1059 < v1055 )
          {
            *(_QWORD *)(v1051 + 176) = *v1059;
            *(_DWORD *)(v1051 + 184) = v1057 | 8;
          }
        }
        v885 = (*((_DWORD *)v897 + 612) & 0x400000) == 0;
        v4012[0] = v897;
        if ( v885 )
          goto LABEL_1712;
        HalExtensionList = (*((__int64 (__fastcall **)(ULONG_PTR))v897 + 63))(v1060);
        if ( !HalExtensionList )
          goto LABEL_1453;
        v1061 = *(unsigned __int16 *)(HalExtensionList + 6);
        v3814 = (unsigned int)v3811 / 0xCuLL;
        LOWORD(v3815) = v1061;
        if ( !(_WORD)v1061 )
        {
          if ( (*((_DWORD *)v897 + 612) & 0x200000) == 0 )
          {
            v3871[5] = 317;
            KeBugCheckEx(__ROR4__BugCheckCode: (317, 160), BugCheckParameter1: 0xAuLL, BugCheckParameter2: v1060, BugCheckParameter3: 0LL, BugCheckParameter4: 0LL);
          }
          goto LABEL_1456;
        }
        v1062 = v1061;
        v1063 = (unsigned int *)v3818;
        LODWORD(v3810) = v1061;
        v1064 = v3818 + 12LL * ((unsigned int)v3811 / 0xC);
        LODWORD(Src) = 0;
        v1065 = 0;
        v1066 = *(unsigned __int16 *)(HalExtensionList + 20) + 24LL;
        v3813 = v1064;
        v1067 = HalExtensionList + v1066;
        v3812 = v1067;
        while ( 1 )
        {
          v1068 = 5LL * v1065;
          v1069 = *(_DWORD *)(v1067 + 40LL * v1065 + 16);
          v1070 = *(_DWORD *)(v1067 + 40LL * v1065 + 12);
          if ( v1069 <= *(_DWORD *)(v1067 + 40LL * v1065 + 8) )
            v1069 = *(_DWORD *)(v1067 + 40LL * v1065 + 8);
          v3816 = 5LL * v1065;
          v1071 = v1070 + v1069;
          LODWORD(v3809) = v1070;
          if ( v1065 )
          {
            if ( v1071 < *(_DWORD *)(v1067 + 40LL * (v1065 - 1) + 12) )
            {
              if ( (*((_DWORD *)v897 + 612) & 0x200000) == 0 )
              {
                v3871[6] = 317;
                KeBugCheckEx(__ROR4__BugCheckCode: (317, 160), BugCheckParameter1: 0xAuLL, BugCheckParameter2: v1060, BugCheckParameter3: 1uLL, BugCheckParameter4: 0LL);
              }
LABEL_1493:
              if ( !*((_DWORD *)v897 + 574) )
              {
                *((_QWORD *)v897 + 288) = v897 - 0x5C5FC0A76E374B18LL;
                *((_QWORD *)v897 + 289) = 0LL;
                *((_QWORD *)v897 + 290) = 271LL;
                *((_QWORD *)v897 + 291) = v1060;
                *((_DWORD *)v897 + 574) = 1;
LABEL_1458:
                __ba((__int64)v897, 0LL);
              }
LABEL_1453:
              v956 = -1073741701;
LABEL_1503:
              v4007 = v897;
              v207 = v897;
              if ( v956 >= 0 )
                goto LABEL_1714;
LABEL_1504:
              if ( v956 != -1073741554 )
                return 0;
              goto LABEL_1714;
            }
            v1065 = (unsigned int)Src;
          }
          if ( v1063 != (unsigned int *)v1064 )
          {
            do
            {
              v1072 = v1063[1];
              if ( *v1063 >= v1071 || v1072 <= v1070 )
                break;
              if ( *v1063 < v1070 || v1072 > v1071 )
              {
                if ( (*((_DWORD *)v897 + 612) & 0x200000) == 0 )
                {
                  v3871[9] = 317;
                  KeBugCheckEx(__ROR4__BugCheckCode: (317, 160), BugCheckParameter1: 0xAuLL, BugCheckParameter2: v1060, BugCheckParameter3: 2uLL, BugCheckParameter4: 0LL);
                }
                goto LABEL_1493;
              }
              v1073 = v1063[2];
              if ( (v1073 & 1) != 0 || (*(_BYTE *)(v1073 + v1060) & 0x20) != 0 )
              {
                v1074 = *(_DWORD *)(v1067 + 8 * v1068 + 16);
                v1075 = *(_DWORD *)(v1067 + 8 * v1068 + 12);
                if ( v1074 <= *(_DWORD *)(v1067 + 8 * v1068 + 8) )
                  v1074 = *(_DWORD *)(v1067 + 8 * v1068 + 8);
                v1076 = v1075 + v1074;
                v1077 = (unsigned int *)(*((__int64 (__fastcall **)(unsigned int *, ULONG_PTR, ULONG_PTR, __int64))v897
                                         + 131))(
                                          v1063,
                                          v1060,
                                          v1067,
                                          v1062);
                v1078 = v1077;
                if ( *v1077 < v1075 || v1077[1] > v1076 )
                {
                  v1079 = v3820;
                  if ( (*((_DWORD *)v897 + 612) & 0x200000) == 0 )
                  {
                    v3871[8] = 317;
                    KeBugCheckEx(__ROR4__BugCheckCode: (317, 160), BugCheckParameter1: 0xAuLL, BugCheckParameter2: v3820, (BugCheckParameter3: (_DWORD)v1077 - (_DWORD)v3820) | 0x80000000, BugCheckParameter4: 0LL);
                  }
                  if ( !*((_DWORD *)v897 + 574) )
                  {
                    *((_QWORD *)v897 + 288) = v897 - 0x5C5FC0A76E374B18LL;
                    *((_QWORD *)v897 + 289) = 0LL;
                    *((_QWORD *)v897 + 290) = 271LL;
                    *((_QWORD *)v897 + 291) = v1079;
                    *((_DWORD *)v897 + 574) = 1;
                    __ba((__int64)v897, 0LL);
                  }
                }
                v1080 = (unsigned int *)(*((__int64 (__fastcall **)(unsigned int *, ULONG_PTR, ULONG_PTR))v897 + 132))(
                                          v1078,
                                          v3820,
                                          v3820 + *v1078);
                if ( *v1080 >= v1075 && v1080[1] <= v1076 )
                {
                  v1060 = v3820;
                }
                else
                {
                  v1060 = v3820;
                  v1081 = ((_DWORD)v1080 - v3820) | 0x80000000;
                  if ( (*((_DWORD *)v897 + 612) & 0x200000) == 0 )
                  {
                    v3871[7] = 317;
                    KeBugCheckEx(__ROR4__BugCheckCode: (317, 160), BugCheckParameter1: 0xAuLL, BugCheckParameter2: v3820, BugCheckParameter3: v1081, BugCheckParameter4: 0LL);
                  }
                  if ( !*((_DWORD *)v897 + 574) )
                  {
                    *((_QWORD *)v897 + 288) = v897 - 0x5C5FC0A76E374B18LL;
                    *((_QWORD *)v897 + 289) = 0LL;
                    *((_QWORD *)v897 + 290) = 271LL;
                    *((_QWORD *)v897 + 291) = v1060;
                    *((_DWORD *)v897 + 574) = 1;
                    __ba((__int64)v897, 0LL);
                  }
                }
                v1068 = v3816;
                v1070 = v3809;
                v1067 = v3812;
                v1064 = v3813;
              }
              v1063 += 3;
            }
            while ( v1063 != (unsigned int *)v1064 );
            v1065 = (unsigned int)Src;
            v1062 = (unsigned int)v3810;
          }
          LODWORD(Src) = ++v1065;
          if ( v1065 >= (unsigned int)v1062 )
          {
            v1082 = v3814;
            v1083 = HalExtensionList;
            if ( v1063 != (unsigned int *)v1064 )
            {
              if ( (*((_DWORD *)v897 + 612) & 0x200000) == 0 )
              {
                v3871[10] = 317;
                KeBugCheckEx(__ROR4__BugCheckCode: (317, 160), BugCheckParameter1: 0xAuLL, BugCheckParameter2: v1060, BugCheckParameter3: 3uLL, BugCheckParameter4: 0LL);
              }
LABEL_1456:
              if ( !*((_DWORD *)v897 + 574) )
              {
                *((_QWORD *)v897 + 288) = v897 - 0x5C5FC0A76E374B18LL;
                *((_QWORD *)v897 + 289) = 0LL;
                *((_QWORD *)v897 + 290) = 271LL;
                *((_QWORD *)v897 + 291) = v1060;
                *((_DWORD *)v897 + 574) = 1;
                goto LABEL_1458;
              }
              goto LABEL_1453;
            }
            if ( (_DWORD)v3814 )
              v1084 = (v3814 + 6) & 0xFFFFFFF8;
            else
              v1084 = 0;
            v1085 = *((unsigned int *)v897 + 505);
            v1086 = v1084 + 24 * v1062 + v1085 + 48;
            if ( v1086 <= *((_DWORD *)v897 + 647) )
            {
              v1087 = (__int64)v897;
              HalExtensionList = (ULONG_PTR)v897;
              *((_DWORD *)v897 + 505) = v1086;
            }
            else
            {
              HalExtensionList = sub_140B11020(v897, v1086, *((unsigned int *)v897 + 585));
              v1087 = HalExtensionList;
              if ( !HalExtensionList )
              {
                v956 = -1073741670;
                goto LABEL_1503;
              }
              v1108 = *((_DWORD *)v897 + 612);
              if ( (v1108 & 4) == 0 )
              {
                v1109 = *((_DWORD *)v897 + 505);
                v1110 = *((_QWORD *)v897 + 249);
                v1111 = (v1108 & 0x20000000) != 0 ? *((_DWORD *)v897 + 585) : 0;
                if ( v1109 >= 8 )
                {
                  v1112 = (unsigned __int64)v1109 >> 3;
                  do
                  {
                    *(_QWORD *)v897 = 0LL;
                    v1109 -= 8;
                    v897 += 8;
                    --v1112;
                  }
                  while ( v1112 );
                }
                for ( ; v1109; --v1109 )
                  *v897++ = 0;
                v1113 = *(_DWORD *)(v1087 + 2340);
                *(_DWORD *)(v1087 + 2340) = v1111;
                if ( v1111 == 3 )
                {
                  (*(void (__fastcall **)(__int64))(v1087 + 872))(v1110);
                }
                else if ( (*(_DWORD *)(v1087 + 2448) & 0x10000000) != 0 || !v1111 )
                {
                  (*(void (__fastcall **)(__int64))(v1087 + 248))(v1110);
                }
                else
                {
                  (*(void (__fastcall **)(__int64, _QWORD))(v1087 + 552))(v1110 - 8, *(_QWORD *)(v1110 - 8));
                }
                v1087 = HalExtensionList;
                v1082 = v3814;
                *(_DWORD *)(HalExtensionList + 2340) = v1113;
              }
              *(_DWORD *)(v1087 + 2448) &= ~4u;
              LODWORD(v1062) = v3810;
              v1064 = v3813;
            }
            ++*(_DWORD *)(v1087 + 2060);
            v1114 = v1087 + v1085;
            v1115 = 48;
            v1116 = (_QWORD *)(v1087 + v1085);
            v1117 = 6LL;
            do
            {
              *v1116 = 0LL;
              v1115 -= 8;
              ++v1116;
              --v1117;
            }
            while ( v1117 );
            for ( ; v1115; --v1115 )
            {
              *(_BYTE *)v1116 = 0;
              v1116 = (_QWORD *)((char *)v1116 + 1);
            }
            v1118 = v3818;
            *(_DWORD *)v1114 = 30;
            *(_QWORD *)(v1114 + 8) = v1118;
            *(_DWORD *)(v1114 + 16) = 0;
            v1119 = *(_QWORD *)(v1087 + 2072);
            for ( i11 = v1119; ; LODWORD(v1119) = i11 ^ v1119 )
            {
              i11 >>= 31;
              if ( !i11 )
                break;
            }
            v1121 = v3820;
            v1122 = (unsigned __int16)v3815;
            *(_DWORD *)(v1114 + 20) = v1119 & 0x7FFFFFFF;
            v897 = (_BYTE *)v1087;
            *(_QWORD *)(v1114 + 24) = v1121;
            *(_DWORD *)(v1114 + 32) = *(_DWORD *)(v1083 + 80);
            *(_DWORD *)(v1114 + 36) = v3811;
            v885 = (_DWORD)v3817 == 0;
            *(_WORD *)(v1114 + 40) = v1122;
            LOWORD(v1121) = *(_WORD *)(v1114 + 42) & 0xFFFE;
            v4012[0] = v1087;
            *(_WORD *)(v1114 + 42) = v1121 | !v885;
            v3814 = v1114 + 48;
            if ( v1082 )
              v1123 = v1114 + 48 + (((unsigned int)(v1082 - 1) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL);
            else
              v1123 = v1114 + 48;
            v3816 = v1123;
            v1124 = v1123 + 24 * v1122;
            v3817 = v1124;
            if ( v1082 )
              v3819 = v1118 + 12;
            else
              v3819 = v1064;
            if ( (_DWORD)v1062 )
            {
              v1125 = (unsigned int)v1062;
              v1126 = (_DWORD *)(v1123 + 8);
              do
              {
                v1127 = 2LL;
                do
                {
                  *(v1126 - 2) = 0;
                  *(v1126 - 1) = 0;
                  *v1126 = 0x80000000;
                  v1126 += 3;
                  --v1127;
                }
                while ( v1127 );
                --v1125;
              }
              while ( v1125 );
              v1087 = HalExtensionList;
            }
            if ( v1123 == v1124 )
            {
LABEL_1712:
              v4011 = v897;
              v207 = v897;
              goto LABEL_1713;
            }
            v1128 = (_DWORD *)v3812;
            while ( 2 )
            {
              v885 = (v1128[9] & 0x2000000) == 0;
              LODWORD(Src) = 0;
              if ( !v885 )
                goto LABEL_1565;
              v1129 = *v1128;
              if ( *v1128 == 1414090313 )
              {
                if ( v1128[1] == 1195525195 )
                  goto LABEL_1565;
LABEL_1571:
                if ( v1129 != 1095914053 || *((_WORD *)v1128 + 2) != 16724 )
                  goto LABEL_1573;
LABEL_1565:
                v1130 = 1;
                LODWORD(Src) = 1;
              }
              else
              {
                if ( v1129 != 1162297680 )
                  goto LABEL_1571;
                v1131 = *((_WORD *)v1128 + 2);
                if ( v1131 == 30839 || v1131 == 29303 || v1131 == 30583 )
                  goto LABEL_1565;
LABEL_1573:
                v1132 = *(char **)(v1087 + 2352);
                v1133 = 7;
                v1134 = *(__int64 **)(v1087 + 2360);
                v1135 = (char *)v1128 - v1132;
                v1136 = *(char **)(v1087 + 2368);
                v1137 = *(char **)(HalExtensionList + 2376);
                while ( 1 )
                {
                  v1138 = (unsigned __int8)v1132[v1135];
                  v1139 = (unsigned __int8)*v1132++;
                  if ( v1138 != v1139 )
                    break;
                  if ( !--v1133 )
                    goto LABEL_1591;
                }
                v1140 = 8;
                v1141 = (__int64 *)v1128;
                do
                {
                  v1142 = *v1141++;
                  v1143 = *v1134++;
                  if ( v1142 != v1143 )
                    goto LABEL_1584;
                  v1140 -= 8;
                }
                while ( v1140 >= 8 );
                if ( v1140 )
                {
                  while ( 1 )
                  {
                    v1144 = *(unsigned __int8 *)v1141;
                    v1141 = (__int64 *)((char *)v1141 + 1);
                    v1145 = *(unsigned __int8 *)v1134;
                    v1134 = (__int64 *)((char *)v1134 + 1);
                    if ( v1144 != v1145 )
                      break;
                    if ( !--v1140 )
                      goto LABEL_1591;
                  }
LABEL_1584:
                  v1146 = 4;
                  v1147 = (char *)v1128 - v1136;
                  while ( 1 )
                  {
                    v1148 = (unsigned __int8)v1136[v1147];
                    v1149 = (unsigned __int8)*v1136++;
                    if ( v1148 != v1149 )
                      break;
                    if ( !--v1146 )
                      goto LABEL_1591;
                  }
                  v1150 = 6;
                  v1151 = (char *)v1128 - v1137;
                  while ( 1 )
                  {
                    v1152 = (unsigned __int8)v1137[v1151];
                    v1153 = (unsigned __int8)*v1137++;
                    if ( v1152 != v1153 )
                      break;
                    if ( !--v1150 )
                      goto LABEL_1591;
                  }
                  v1130 = (int)Src;
                }
                else
                {
LABEL_1591:
                  v1130 = 1;
                  LODWORD(Src) = 1;
                }
                v1087 = HalExtensionList;
              }
              v1154 = v1128[9];
              if ( v1154 < 0 )
              {
                v1130 = 1;
                LODWORD(Src) = 1;
                goto LABEL_1597;
              }
              if ( v1130 )
              {
LABEL_1597:
                if ( *v1128 == 1414090313 && v1128[1] == 1195525195 )
                {
                  if ( (*(_DWORD *)(v1087 + 2452) & 0x2000) != 0 )
                    v1130 = 0;
                  LODWORD(Src) = v1130;
                }
              }
              if ( (*(_DWORD *)(v1087 + 2452) & 0x4000) != 0
                && (v1154 & 0x20000000) != 0
                && (v3820 == *(_QWORD *)(v1087 + 1504) || v3820 == *(_QWORD *)(v1087 + 1512)) )
              {
                v1130 = 1;
                LODWORD(Src) = 1;
              }
              v1155 = v1128[4];
              v1156 = (unsigned int)v1128[3];
              v1157 = v3813;
              if ( v1155 <= v1128[2] )
                v1155 = v1128[2];
              v1158 = v3818;
              v1159 = v1156 + v1155;
              LODWORD(v3810) = v1128[3];
              LODWORD(v3809) = v1159;
              v1160 = v1156;
              if ( v3818 == v3813 )
              {
                v1162 = 0;
                v1163 = (_DWORD)v1156 != 0;
              }
              else
              {
                v1161 = *(_DWORD *)v3818;
                v1162 = *(_DWORD *)(v3818 + 4);
                v1163 = *(_DWORD *)v3818 < (unsigned int)v1156;
                if ( *(_DWORD *)v3818 > (unsigned int)v1156 )
                {
                  if ( *(_DWORD *)(v3818 + 4) > v1159 )
                    goto LABEL_1639;
                  if ( v1130 )
                    goto LABEL_1641;
                  v1164 = v3816;
                  v1165 = (_QWORD *)(v3820 + v1156);
                  LODWORD(v3811) = *(_DWORD *)(v3818 + 4);
                  v1166 = v1161 - v1156;
                  v1160 = v1161;
                  *(_DWORD *)v3816 = v1156;
                  v1167 = (unsigned __int64)v1165 + (unsigned int)(v1161 - v1156);
                  *(_DWORD *)(v1164 + 4) = v1161;
                  for ( i12 = 0; i12 < 6; ++i12 )
                  {
                    v1169 = *(&v4206 + i12);
                    if ( (unsigned __int64)v1165 < v1169 + (unsigned int)v4178[i12] && v1167 > v1169 )
                      goto LABEL_1638;
                  }
                  *(_DWORD *)(v1087 + 2088) += v1166;
                  v1170 = v1165;
                  v1171 = (const char *)v1165;
                  v1172 = *(_DWORD *)(v1087 + 2068);
                  v1173 = *(_QWORD *)(HalExtensionList + 2072);
                  if ( (unsigned __int64)v1165 < v1167 )
                  {
                    do
                    {
                      _mm_prefetch(v1171, 0);
                      v1171 += 64;
                    }
                    while ( (unsigned __int64)v1171 < v1167 );
                  }
                  v1174 = *(_QWORD *)(HalExtensionList + 2072);
                  v1175 = v1166 >> 7;
                  if ( v1166 >> 7 )
                  {
                    do
                    {
                      v1176 = 8LL;
                      do
                      {
                        v1177 = v1170[1] ^ __ROL8__(*v1170 ^ v1174, v1172);
                        v1170 += 2;
                        v1174 = __ROL8__(v1177, v1172);
                        --v1176;
                      }
                      while ( v1176 );
                      v1178 = (__ROL8__(v1173 ^ ((char *)v1170 - (char *)v1165), 17) ^ v1173 ^ (unsigned __int64)((char *)v1170 - (char *)v1165))
                            * (unsigned __int128)0x7010008004002001uLL;
                      v4022 = *((_QWORD *)&v1178 + 1);
                      v1172 = ((unsigned __int8)v1178 ^ (unsigned __int8)(BYTE8(v1178) ^ v1172)) & 0x3F;
                      if ( !v1172 )
                        LOBYTE(v1172) = 1;
                      --v1175;
                    }
                    while ( v1175 );
                    v1162 = v3811;
                  }
                  v1179 = v1166 & 0x7F;
                  if ( v1179 >= 8 )
                  {
                    v1180 = (unsigned __int64)v1179 >> 3;
                    do
                    {
                      v1174 = __ROL8__(*v1170++ ^ v1174, v1172);
                      v1179 -= 8;
                      --v1180;
                    }
                    while ( v1180 );
                  }
                  for ( ; v1179; --v1179 )
                  {
                    v1181 = *(unsigned __int8 *)v1170;
                    v1170 = (_QWORD *)((char *)v1170 + 1);
                    v1174 = __ROL8__(v1181 ^ v1174, v1172);
                  }
                  for ( i13 = v1174 >> 31; i13; i13 >>= 31 )
                    LODWORD(v1174) = i13 ^ v1174;
                  v1159 = v3809;
                  v1087 = HalExtensionList;
                  v1157 = v3813;
                  *(_DWORD *)(v3816 + 8) = v1174 & 0x7FFFFFFF;
LABEL_1638:
                  v1158 = v3818;
                  v1130 = (int)Src;
LABEL_1639:
                  if ( v1162 <= v1159 && v1158 != v1157 )
                  {
LABEL_1641:
                    v1183 = (int *)v3819;
                    v1184 = *(_DWORD *)(v3819 + 4);
                    LODWORD(v3811) = v1184;
                    if ( v1184 <= v1159 )
                    {
                      while ( v1183 != (int *)v1157 )
                      {
                        if ( v1130 )
                        {
                          v1185 = 0x80;
                        }
                        else
                        {
                          v1186 = *(unsigned int *)(v1158 + 4);
                          v1160 = *v1183;
                          if ( *v1183 < (unsigned int)v1186 )
                          {
                            if ( (*(_DWORD *)(v1087 + 2448) & 0x200000) == 0 )
                            {
                              v3871[11] = 317;
                              KeBugCheckEx(__ROR4__BugCheckCode: (317, 160), BugCheckParameter1: 0xAuLL, BugCheckParameter2: v3820, BugCheckParameter3: 6uLL, BugCheckParameter4: 0LL);
                            }
                            if ( !*(_DWORD *)(v1087 + 2296) )
                            {
                              *(_QWORD *)(v1087 + 2304) = v1087 - 0x5C5FC0A76E374B18LL;
                              *(_QWORD *)(v1087 + 2312) = 0LL;
                              v1187 = v3820;
                              *(_QWORD *)(v1087 + 2320) = 271LL;
                              *(_QWORD *)(v1087 + 2328) = v1187;
                              *(_DWORD *)(v1087 + 2296) = 1;
                              __ba(v1087, 0LL);
                              v1157 = v3813;
                            }
                          }
                          v1188 = (_QWORD *)(v3820 + v1186);
                          v1189 = v1160 - v1186;
                          v1190 = v3820 + v1186 + (unsigned int)(v1160 - v1186);
                          for ( i14 = 0; i14 < 6; ++i14 )
                          {
                            v1192 = *(&v4206 + i14);
                            if ( (unsigned __int64)v1188 < v1192 + (unsigned int)v4178[i14] && v1190 > v1192 )
                            {
                              v1185 = 0x80;
                              goto LABEL_1677;
                            }
                          }
                          if ( v1189 < 4 )
                          {
                            v1185 = 0x80;
                          }
                          else
                          {
                            v1193 = HalExtensionList;
                            v1194 = v1188;
                            v1195 = (const char *)v1188;
                            *(_DWORD *)(HalExtensionList + 2088) += v1189;
                            v1196 = *(_DWORD *)(v1193 + 2068);
                            v1197 = *(_QWORD *)(v1193 + 2072);
                            if ( (unsigned __int64)v1188 < v1190 )
                            {
                              do
                              {
                                _mm_prefetch(v1195, 0);
                                v1195 += 64;
                              }
                              while ( (unsigned __int64)v1195 < v1190 );
                            }
                            v1198 = v1197;
                            v1199 = v1189 >> 7;
                            if ( v1189 >> 7 )
                            {
                              do
                              {
                                v1200 = 8LL;
                                do
                                {
                                  v1201 = v1194[1] ^ __ROL8__(*v1194 ^ v1198, v1196);
                                  v1194 += 2;
                                  v1198 = __ROL8__(v1201, v1196);
                                  --v1200;
                                }
                                while ( v1200 );
                                v1202 = (__ROL8__(v1197 ^ ((char *)v1194 - (char *)v1188), 17) ^ v1197 ^ ((char *)v1194 - (char *)v1188))
                                      * (unsigned __int128)0x7010008004002001uLL;
                                v4023 = *((_QWORD *)&v1202 + 1);
                                v1196 = ((unsigned __int8)v1202 ^ (unsigned __int8)(BYTE8(v1202) ^ v1196)) & 0x3F;
                                if ( !v1196 )
                                  LOBYTE(v1196) = 1;
                                --v1199;
                              }
                              while ( v1199 );
                              v1184 = v3811;
                            }
                            v1203 = v1189 & 0x7F;
                            if ( v1203 >= 8 )
                            {
                              v1204 = (unsigned __int64)v1203 >> 3;
                              do
                              {
                                v1198 = __ROL8__(*v1194++ ^ v1198, v1196);
                                v1203 -= 8;
                                --v1204;
                              }
                              while ( v1204 );
                            }
                            for ( ; v1203; --v1203 )
                            {
                              v1205 = *(unsigned __int8 *)v1194;
                              v1194 = (_QWORD *)((char *)v1194 + 1);
                              v1198 = __ROL8__(v1205 ^ v1198, v1196);
                            }
                            for ( i15 = v1198 >> 7; i15; i15 >>= 7 )
                              LOBYTE(v1198) = i15 ^ v1198;
                            v1159 = v3809;
                            v1185 = v1198 & 0x7F;
                          }
                          v1157 = v3813;
LABEL_1677:
                          v1158 = v3818;
                          v1130 = (int)Src;
                        }
                        v1207 = (_BYTE *)v3814;
                        v1158 += 12LL;
                        ++v3814;
                        v3818 = v1158;
                        *v1207 = v1185;
                        v1183 = (int *)(v3819 + 12);
                        v3819 = (__int64)v1183;
                        if ( v1183 != (int *)v1157 )
                        {
                          v1184 = v1183[1];
                          LODWORD(v3811) = v1184;
                        }
                        if ( v1184 > v1159 )
                          break;
                        v1087 = HalExtensionList;
                      }
                    }
                  }
LABEL_1681:
                  v1208 = (unsigned int *)v3816;
                  if ( !v1130 && v1160 != v1159 )
                  {
                    *(_DWORD *)(v3816 + 12) = v1160;
                    v1208[4] = v1159;
                    v1209 = v1208[3];
                    v1210 = v1159 - v1209;
                    v1211 = (_QWORD *)(v3820 + v1209);
                    v1212 = (unsigned __int64)v1211 + v1210;
                    for ( i16 = 0; i16 < 6; ++i16 )
                    {
                      v1214 = *(&v4206 + i16);
                      if ( (unsigned __int64)v1211 < v1214 + (unsigned int)v4178[i16] && v1212 > v1214 )
                        goto LABEL_1704;
                    }
                    v1215 = HalExtensionList;
                    v1216 = v1211;
                    *(_DWORD *)(HalExtensionList + 2088) += v1210;
                    v1217 = *(_DWORD *)(v1215 + 2068);
                    v1218 = *(_QWORD *)(v1215 + 2072);
                    v1219 = (const char *)v1211;
                    if ( (unsigned __int64)v1211 < v1212 )
                    {
                      do
                      {
                        _mm_prefetch(v1219, 0);
                        v1219 += 64;
                      }
                      while ( (unsigned __int64)v1219 < v1212 );
                    }
                    v1220 = v1218;
                    for ( i17 = v1210 >> 7; i17; --i17 )
                    {
                      v1222 = 8LL;
                      do
                      {
                        v1223 = v1216[1] ^ __ROL8__(*v1216 ^ v1220, v1217);
                        v1216 += 2;
                        v1220 = __ROL8__(v1223, v1217);
                        --v1222;
                      }
                      while ( v1222 );
                      v1224 = (__ROL8__(v1218 ^ ((char *)v1216 - (char *)v1211), 17) ^ v1218 ^ ((char *)v1216
                                                                                              - (char *)v1211))
                            * (unsigned __int128)0x7010008004002001uLL;
                      v4024 = *((_QWORD *)&v1224 + 1);
                      v1217 = ((unsigned __int8)v1224 ^ (unsigned __int8)(BYTE8(v1224) ^ v1217)) & 0x3F;
                      if ( !v1217 )
                        LOBYTE(v1217) = 1;
                    }
                    v1225 = v1210 & 0x7F;
                    if ( v1225 >= 8 )
                    {
                      v1226 = (unsigned __int64)v1225 >> 3;
                      do
                      {
                        v1220 = __ROL8__(*v1216++ ^ v1220, v1217);
                        v1225 -= 8;
                        --v1226;
                      }
                      while ( v1226 );
                    }
                    for ( ; v1225; --v1225 )
                    {
                      v1227 = *(unsigned __int8 *)v1216;
                      v1216 = (_QWORD *)((char *)v1216 + 1);
                      v1220 = __ROL8__(v1227 ^ v1220, v1217);
                    }
                    for ( i18 = v1220; ; LODWORD(v1220) = i18 ^ v1220 )
                    {
                      i18 >>= 31;
                      if ( !i18 )
                        break;
                    }
                    v1159 = v3809;
                    v1208[5] = v1220 & 0x7FFFFFFF;
                  }
LABEL_1704:
                  v1229 = v3818;
                  if ( v3818 != v3813 && *(_DWORD *)v3818 >= (unsigned int)v3810 && *(_DWORD *)(v3818 + 4) <= v1159 )
                  {
                    v1230 = v3819;
                    if ( v3819 != v3813 )
                    {
                      v1231 = v3814;
                      *(_BYTE *)v3814 = 0x80;
                      v3814 = v1231 + 1;
                      v3819 = v1230 + 12;
                    }
                    v3818 = v1229 + 12;
                  }
                  v1087 = HalExtensionList;
                  v1128 = (_DWORD *)(v3812 + 40);
                  v3816 = (__int64)(v1208 + 6);
                  v3812 += 40LL;
                  if ( v1208 + 6 == (unsigned int *)v3817 )
                  {
                    v897 = (_BYTE *)v4012[0];
                    goto LABEL_1712;
                  }
                  continue;
                }
              }
              break;
            }
            if ( !v1163 )
              goto LABEL_1639;
            goto LABEL_1681;
          }
        }
      }
    }
    *(_DWORD *)(v999 + 32) |= 2u;
    goto LABEL_1368;
  }
LABEL_2145:
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  HalExtensionList = KiGetHalExtensionList();
  v1520 = *(_QWORD *)HalExtensionList;
  v3814 = v1520;
  if ( v1520 != HalExtensionList )
  {
LABEL_2148:
    HalExtensionModuleFromLinks = KiGetHalExtensionModuleFromLinks(v1520);
    if ( !HalExtensionModuleFromLinks )
      goto LABEL_2573;
    v1522 = v207 + 1880;
    v4033 = v207;
    v1523 = *((_QWORD *)v207 + 235);
    v3813 = (ULONG_PTR)(v207 + 1880);
    v1524 = *(_QWORD *)(HalExtensionModuleFromLinks + v1523);
    v1525 = (__int64 (__fastcall *)(ULONG_PTR, char *))*((_QWORD *)v207 + 64);
    v3812 = v1524;
    v1526 = v1525(v1524, v4183);
    v1527 = v4185;
    v3816 = v1526;
    LODWORD(Src) = v4185;
    v3872 = v4185;
    v3820 = v4184;
    if ( !v4184 )
    {
      if ( (*((_DWORD *)v207 + 612) & 0x200000) == 0 )
      {
        v3874[9] = 317;
        KeBugCheckEx(__ROR4__BugCheckCode: (317, 160), BugCheckParameter1: 0xAuLL, BugCheckParameter2: v1524, BugCheckParameter3: 5uLL, BugCheckParameter4: 0LL);
      }
      return 0;
    }
    v1528 = &v4137;
    v4136 = 0LL;
    LODWORD(v1529) = 4;
    do
    {
      *(_BYTE *)v1528 = 0;
      v1528 = (int *)((char *)v1528 + 1);
      v885 = (_DWORD)v1529 == 1;
      v1529 = (unsigned int)(v1529 - 1);
    }
    while ( !v885 );
    v1530 = 0;
    if ( *((_DWORD *)v207 + 515) )
    {
      LODWORD(v1529) = v4137;
      v1531 = HIDWORD(v4136);
      v1532 = v4136;
      while ( 1 )
      {
        v1533 = v207;
        if ( *((_QWORD *)v207 + 335) )
          v1533 = (_BYTE *)*((_QWORD *)v207 + 335);
        v1534 = 0;
        v1535 = (int *)&v1533[*((unsigned int *)v1533 + 514)];
        if ( v1532 && v1531 <= v1530 )
        {
          v1534 = v1531;
          v1535 = (int *)&v1533[(unsigned int)v1529];
        }
        if ( v1534 != v1530 )
          break;
LABEL_2184:
        LODWORD(v4136) = 1;
        v1529 = (unsigned int)((_DWORD)v1535 - (_DWORD)v1533);
        HIDWORD(v4136) = v1534;
        v4137 = (_DWORD)v1535 - (_DWORD)v1533;
        v1532 = 1;
        v1548 = *v1535;
        v1531 = v1534;
        if ( (unsigned int)v1548 <= 0x2B
          && (v1549 = 0x80000001002LL, _bittest64(&v1549, v1548))
          && *((_QWORD *)v1535 + 1) == v3816
          && v1535[4] == v1527
          || (unsigned int)(v1548 - 33) <= 1 && *((_QWORD *)v1535 + 4) == v3820 )
        {
          if ( !v1535 )
          {
LABEL_2193:
            v1522 = (_QWORD *)v3813;
            goto LABEL_2194;
          }
LABEL_2573:
          v1520 = *(_QWORD *)v3814;
          v3814 = v1520;
          if ( v1520 == HalExtensionList )
            goto LABEL_2580;
          goto LABEL_2148;
        }
        if ( ++v1530 >= *((_DWORD *)v207 + 515) )
          goto LABEL_2193;
      }
      v1536 = v1530 - v1534;
      v1534 = v1530;
      while ( 2 )
      {
        v1537 = *v1535;
        if ( *v1535 > 28 )
        {
          v1545 = v1537 - 30;
          if ( !v1545 )
          {
            v1543 = (((v1535[9] != 0 ? v1535[9] - 1 : 0) / 0xCu + 7) & 0xFFFFFFF8)
                  + 24 * (*((unsigned __int16 *)v1535 + 20) + 2);
            goto LABEL_2182;
          }
          v1546 = v1545 - 3;
          if ( !v1546 || (v1547 = v1546 - 1) == 0 )
          {
            v1543 = 20 * (unsigned int)(((v1535[8] & 0xFFF) + (unsigned __int64)(unsigned int)v1535[10] + 4095) >> 12)
                  + 48;
            goto LABEL_2182;
          }
          v1542 = v1547 == 9;
LABEL_2177:
          if ( !v1542 )
          {
            v1543 = 48LL;
            goto LABEL_2182;
          }
        }
        else
        {
          if ( v1537 == 28 )
          {
            v1544 = *((unsigned __int16 *)v1535 + 20);
            goto LABEL_2170;
          }
          v1538 = v1537 - 1;
          if ( v1538 )
          {
            v1539 = v1538 - 6;
            if ( !v1539 )
            {
              v1543 = (unsigned int)(24 * (v1535[6] + 2));
              goto LABEL_2182;
            }
            v1540 = v1539 - 1;
            if ( v1540 )
            {
              v1541 = v1540 - 2;
              if ( v1541 )
              {
                v1542 = v1541 == 2;
                goto LABEL_2177;
              }
              v1543 = (unsigned int)(16 * (v1535[7] + 3));
LABEL_2182:
              v1535 = (int *)((char *)v1535 + v1543);
              if ( !--v1536 )
              {
                v1524 = v3812;
                v1527 = (int)Src;
                goto LABEL_2184;
              }
              continue;
            }
            v1544 = *((unsigned __int16 *)v1535 + 16);
LABEL_2170:
            v1543 = (v1544 + 55) & 0xFFFFFFF8;
            goto LABEL_2182;
          }
        }
        break;
      }
      v1543 = 4 * (v1535[4] / 0xCu) + 48;
      goto LABEL_2182;
    }
LABEL_2194:
    v1550 = (*((__int64 (__fastcall **)(ULONG_PTR, __int64))v207 + 85))(v1524, v1529);
    v1551 = (char **)*((_QWORD *)v207 + 165);
    v1552 = v1550;
    LODWORD(Src) = v1550;
    LODWORD(v3810) = v3872;
    _disable();
    v1553 = v4007;
    v1554 = *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *((_QWORD *)v4007 + 202));
    _enable();
    (*((void (__fastcall **)(__int64))v1553 + 45))(v1554);
    LOBYTE(v1555) = 1;
    (*((void (__fastcall **)(_QWORD, __int64))v1553 + 29))(*((_QWORD *)v1553 + 166), v1555);
    v1556 = *v1551;
    v1557 = v3820;
    if ( *v1551 != (char *)v1551 )
    {
      v1558 = *((_QWORD *)v1553 + 234);
      while ( 1 )
      {
        v1559 = *(_QWORD *)&v1556[*v1522 - v1558];
        if ( v3820 >= v1559 && v3820 < v1559 + *(unsigned int *)&v1556[*((_QWORD *)v1553 + 236) - v1558] )
          break;
        v1556 = *(char **)v1556;
        if ( v1556 == (char *)v1551 )
          goto LABEL_2201;
      }
      (*((void (__fastcall **)(char *, __int64))v1553 + 27))(&v1556[-v1558], 2LL);
    }
LABEL_2201:
    (*((void (__fastcall **)(_QWORD))v1553 + 35))(*((_QWORD *)v1553 + 166));
    (*((void (**)(void))v1553 + 46))();
    if ( (*((_DWORD *)v1553 + 612) & 0x40000000) != 0 )
    {
      v1561 = sub_140B18070(&v4007, v1557, 0LL);
      v207 = v4007;
      goto LABEL_2382;
    }
    v4222 = 0LL;
    LOBYTE(v1560) = 1;
    v4186[4] = 0;
    v4219 = (*((__int64 (__fastcall **)(ULONG_PTR, __int64, _QWORD, int *))v1553 + 62))(v1557, v1560, 0LL, &v3872);
    v1562 = v3872 & (unsigned int)-(v4219 != 0);
    v3872 = v1562;
    v1563 = (__int64 (__fastcall *)(ULONG_PTR, __int64, __int64, int *))*((_QWORD *)v1553 + 62);
    v4186[1] = v1562;
    LOBYTE(v1562) = 1;
    v1564 = v1563(v1557, v1562, 12LL, &v3872);
    v1565 = v1564;
    v3813 = v1564;
    v4220 = v1564;
    LOBYTE(v1565) = 1;
    v3872 &= -(v1564 != 0);
    v1566 = (__int64 (__fastcall *)(ULONG_PTR, ULONG_PTR, __int64, int *))*((_QWORD *)v1553 + 62);
    LODWORD(v3809) = v3872;
    v4186[2] = v3872;
    v4221 = v1566(v1557, v1565, 10LL, &v3872);
    v3872 &= -(v4221 != 0);
    v1567 = (__int64 (__fastcall *)(ULONG_PTR))*((_QWORD *)v1553 + 63);
    v4186[3] = v3872;
    v1568 = v1567(v1557);
    if ( !v1568 )
    {
      if ( (*((_DWORD *)v1553 + 612) & 0x200000) == 0 )
      {
        v3874[8] = 317;
        KeBugCheckEx(__ROR4__BugCheckCode: (317, 160), BugCheckParameter1: 0xAuLL, BugCheckParameter2: v1557, BugCheckParameter3: 7uLL, BugCheckParameter4: 0LL);
      }
      if ( !*((_DWORD *)v1553 + 574) )
      {
        *((_QWORD *)v1553 + 288) = v1553 - 0x5C5FC0A76E374B18LL;
        *((_QWORD *)v1553 + 289) = 0LL;
        *((_QWORD *)v1553 + 290) = 271LL;
        *((_QWORD *)v1553 + 291) = v1557;
        *((_DWORD *)v1553 + 574) = 1;
        __ba((__int64)v1553, 0LL);
      }
      return 0;
    }
    v1569 = (*((__int64 (__fastcall **)(ULONG_PTR, int *))v1553 + 148))(v1557, &v4034);
    v1570 = *((unsigned int *)v1553 + 585);
    v4223 = v1569;
    v4186[0] = *(_DWORD *)(v1568 + 84);
    LODWORD(v1569) = v1552;
    v1571 = *((unsigned int *)v1553 + 505);
    v4186[5] = v4034;
    v4218 = v1557;
    v1572 = (_DWORD)v1569 != 0 ? 0xB : 0;
    v1573 = v1571 + 288;
    LODWORD(v3811) = v1572;
    if ( (unsigned int)(v1571 + 288) <= *((_DWORD *)v1553 + 647) )
    {
      v1574 = (__int64)v1553;
      v3812 = (unsigned __int64)v1553;
      *((_DWORD *)v1553 + 505) = v1573;
      goto LABEL_2221;
    }
    v1574 = sub_140B11020(v1553, v1573, v1570);
    v3812 = v1574;
    v1575 = 0LL;
    if ( !v1574 )
      goto LABEL_2575;
    v1576 = *((_DWORD *)v1553 + 612);
    if ( (v1576 & 4) == 0 )
    {
      v1577 = *((_DWORD *)v1553 + 505);
      v1578 = *((_QWORD *)v1553 + 249);
      v1579 = (v1576 & 0x20000000) != 0 ? *((_DWORD *)v1553 + 585) : 0;
      if ( v1577 >= 8 )
      {
        v1580 = (unsigned __int64)v1577 >> 3;
        do
        {
          *(_QWORD *)v1553 = 0LL;
          v1577 -= 8;
          v1553 += 8;
          --v1580;
        }
        while ( v1580 );
      }
      for ( ; v1577; --v1577 )
        *v1553++ = 0;
      v1581 = *(_DWORD *)(v1574 + 2340);
      *(_DWORD *)(v1574 + 2340) = v1579;
      if ( v1579 == 3 )
      {
        (*(void (__fastcall **)(__int64))(v1574 + 872))(v1578);
      }
      else if ( (*(_DWORD *)(v1574 + 2448) & 0x10000000) != 0 || !v1579 )
      {
        (*(void (__fastcall **)(__int64))(v1574 + 248))(v1578);
      }
      else
      {
        (*(void (__fastcall **)(__int64, _QWORD))(v1574 + 552))(v1578 - 8, *(_QWORD *)(v1578 - 8));
      }
      *(_DWORD *)(v1574 + 2340) = v1581;
    }
    *(_DWORD *)(v1574 + 2448) &= ~4u;
    v1572 = v3811;
LABEL_2221:
    v1582 = 6LL;
    v1583 = &v4218;
    *(_DWORD *)(v1574 + 2060) += 6;
    v1584 = v4186;
    v1585 = v1574 + v1571;
    v3824 = &v4218;
    v3818 = v1585;
    v3819 = 6LL;
    do
    {
      v1586 = *v1584;
      v1587 = 48;
      v1588 = (_QWORD *)*v1583;
      v1589 = (_QWORD *)v1585;
      do
      {
        *v1589 = 0LL;
        v1587 -= 8;
        ++v1589;
        --v1582;
      }
      while ( v1582 );
      for ( ; v1587; --v1587 )
      {
        *(_BYTE *)v1589 = 0;
        v1589 = (_QWORD *)((char *)v1589 + 1);
      }
      *(_DWORD *)v1585 = v1572;
      *(_QWORD *)(v1585 + 8) = v1588;
      v1590 = v1588;
      *(_DWORD *)(v1585 + 16) = v1586;
      v1591 = (const char *)v1588;
      *(_DWORD *)(v1574 + 2088) += v1586;
      v1592 = *(_DWORD *)(v1574 + 2068);
      v1593 = *(_QWORD *)(v1574 + 2072);
      if ( v1588 < (_QWORD *)((char *)v1588 + v1586) )
      {
        do
        {
          _mm_prefetch(v1591, 0);
          v1591 += 64;
        }
        while ( v1591 < (const char *)v1588 + v1586 );
      }
      v1594 = *(_QWORD *)(v1574 + 2072);
      v1595 = (unsigned int)v1586 >> 7;
      if ( (unsigned int)v1586 >> 7 )
      {
        do
        {
          v1596 = 8LL;
          do
          {
            v1597 = v1590[1] ^ __ROL8__(*v1590 ^ v1594, v1592);
            v1590 += 2;
            v1594 = __ROL8__(v1597, v1592);
            --v1596;
          }
          while ( v1596 );
          v1598 = (__ROL8__(v1593 ^ ((char *)v1590 - (char *)v1588), 17) ^ v1593 ^ (unsigned __int64)((char *)v1590 - (char *)v1588))
                * (unsigned __int128)0x7010008004002001uLL;
          v4035 = *((_QWORD *)&v1598 + 1);
          v1592 = ((unsigned __int8)v1598 ^ (unsigned __int8)(BYTE8(v1598) ^ v1592)) & 0x3F;
          if ( !v1592 )
            LOBYTE(v1592) = 1;
          --v1595;
        }
        while ( v1595 );
        v1574 = v3812;
        v1583 = v3824;
      }
      v1599 = v1586 & 0x7F;
      if ( v1599 >= 8 )
      {
        v1600 = (unsigned __int64)(v1586 & 0x7F) >> 3;
        do
        {
          v1594 = __ROL8__(*v1590++ ^ v1594, v1592);
          v1599 -= 8;
          --v1600;
        }
        while ( v1600 );
      }
      for ( ; v1599; --v1599 )
      {
        v1601 = *(unsigned __int8 *)v1590;
        v1590 = (_QWORD *)((char *)v1590 + 1);
        v1594 = __ROL8__(v1601 ^ v1594, v1592);
      }
      for ( i19 = v1594 >> 31; i19; i19 >>= 31 )
        LODWORD(v1594) = i19 ^ v1594;
      v1572 = v3811;
      v1582 = 6LL;
      *(_DWORD *)(v1585 + 20) = v1594 & 0x7FFFFFFF;
      ++v1583;
      *(_DWORD *)(v1574 + 2088) += v1586;
      v1585 += 48LL;
      v3824 = v1583;
      ++v1584;
      --v3819;
    }
    while ( v3819 );
    v1603 = v3818;
    v1604 = v3820;
    *(_DWORD *)v3818 = 44;
    *(_QWORD *)(v1603 + 24) = v1604;
    v1605 = *(_DWORD *)(v1574 + 2448);
    if ( (v1605 & 0x10000000) != 0 || (v1605 & 0x200000) != 0 )
    {
      v1606 = (int)Src;
      if ( !(_DWORD)Src )
        goto LABEL_2252;
    }
    else
    {
      v1606 = (int)Src;
      if ( !(_DWORD)Src )
      {
        if ( (*(_DWORD *)(v1574 + 2452) & 0x8000) != 0 )
        {
          *(_DWORD *)(v1603 + 32) |= 1u;
          if ( (unsigned int)sub_140B120E0(a1: v1574, a2: v1604) )
            *(_DWORD *)(v1603 + 32) |= 4u;
        }
LABEL_2252:
        v4033 = (_BYTE *)v1574;
        v207 = (_BYTE *)v1574;
        v4007 = (_BYTE *)v1574;
        v1561 = sub_140B0F838((int)&v4033, v3816, v3810, v1604, v1606, 0, (__int64)v3874, (__int64)&v3873);
        if ( v1561 < 0 )
          goto LABEL_2383;
        v207 = v4033;
        v1607 = 48;
        v1608 = &v4033[-v1574];
        v4007 = v4033;
        v1609 = v3873 - v3874[0];
        *((_QWORD *)&v1612 + 1) = 6LL;
        v1610 = (const char *)(v1604 + v3874[0]);
        v3818 = (ULONG_PTR)&v1608[v1603];
        v1611 = (__int64)&v1608[v1603 + 192];
        v3812 = v1611;
        *(_QWORD *)&v1612 = v1611;
        do
        {
          *(_QWORD *)v1612 = 0LL;
          v1607 -= 8;
          *(_QWORD *)&v1612 = v1612 + 8;
          --*((_QWORD *)&v1612 + 1);
        }
        while ( *((_QWORD *)&v1612 + 1) );
        for ( ; v1607; --v1607 )
        {
          *(_BYTE *)v1612 = 0;
          *(_QWORD *)&v1612 = v1612 + 1;
        }
        v1613 = (__int64)v1610;
        *(_DWORD *)v1611 = v3811;
        v1614 = v1610;
        *(_QWORD *)(v1611 + 8) = v1610;
        *(_DWORD *)(v1611 + 16) = v1609;
        *((_DWORD *)v207 + 522) += v1609;
        v1615 = *((_DWORD *)v207 + 517);
        v1616 = *((_QWORD *)v207 + 259);
        v1617 = (unsigned __int64)&v1610[v1609];
        if ( (unsigned __int64)v1610 < v1617 )
        {
          do
          {
            _mm_prefetch(v1614, 0);
            v1614 += 64;
          }
          while ( (unsigned __int64)v1614 < v1617 );
        }
        v1618 = *((_QWORD *)v207 + 259);
        v1619 = v1609 >> 7;
        if ( v1609 >> 7 )
        {
          do
          {
            v1620 = 8LL;
            do
            {
              v1621 = *(_QWORD *)(v1613 + 8) ^ __ROL8__(*(_QWORD *)v1613 ^ v1618, v1615);
              v1613 += 16LL;
              v1618 = __ROL8__(v1621, v1615);
              --v1620;
            }
            while ( v1620 );
            v1612 = (__ROL8__(v1616 ^ (v1613 - (_QWORD)v1610), 17) ^ v1616 ^ (unsigned __int64)(v1613 - (_QWORD)v1610))
                  * (unsigned __int128)0x7010008004002001uLL;
            v4036 = *((_QWORD *)&v1612 + 1);
            v1615 = ((unsigned __int8)v1612 ^ (unsigned __int8)(BYTE8(v1612) ^ v1615)) & 0x3F;
            if ( !v1615 )
              LOBYTE(v1615) = 1;
            --v1619;
          }
          while ( v1619 );
          v1611 = v3812;
          v1606 = (int)Src;
        }
        v1622 = v1609 & 0x7F;
        if ( v1622 >= 8 )
        {
          v1623 = (unsigned __int64)v1622 >> 3;
          do
          {
            v1618 = __ROL8__(*(_QWORD *)v1613 ^ v1618, v1615);
            v1613 += 8LL;
            v1622 -= 8;
            --v1623;
          }
          while ( v1623 );
        }
        for ( ; v1622; --v1622 )
        {
          v1624 = *(unsigned __int8 *)v1613++;
          v1618 = __ROL8__(v1624 ^ v1618, v1615);
        }
        v1625 = v1618 >> 31;
        v1626 = 0;
        while ( v1625 )
        {
          LODWORD(v1618) = v1625 ^ v1618;
          v1625 >>= 31;
        }
        v1627 = v3818;
        *(_DWORD *)(v1611 + 20) = v1618 & 0x7FFFFFFF;
        *(_DWORD *)(v1627 + 240) = 48;
        if ( *(_DWORD *)(v1627 + 256) )
        {
          LOBYTE(v1626) = v1606 != 0;
          *(_DWORD *)(v1627 + 264) = *(_DWORD *)(v1627 + 264) & 0xFFFFFFFE | v1626;
        }
        v4007 = v207;
        v1628 = v1627 + 96;
        v1629 = (v1606 != 0) + 13;
        if ( v1627 != -96LL )
        {
          *(_DWORD *)v1628 = v1629;
          LODWORD(v1644) = v3809;
          goto LABEL_2318;
        }
        v1630 = *((unsigned int *)v207 + 505);
        v1631 = v1630 + 48;
        if ( (unsigned int)(v1630 + 48) <= *((_DWORD *)v207 + 647) )
        {
          v1632 = (__int64)v207;
          *((_DWORD *)v207 + 505) = v1631;
          goto LABEL_2294;
        }
        v1632 = sub_140B11020(v207, v1631, *((unsigned int *)v207 + 585));
        v1575 = 0LL;
        if ( v1632 )
        {
          v1633 = *((_DWORD *)v207 + 612);
          if ( (v1633 & 4) == 0 )
          {
            v1634 = *((_DWORD *)v207 + 505);
            v1635 = *((_QWORD *)v207 + 249);
            v1636 = (v1633 & 0x20000000) != 0 ? *((_DWORD *)v207 + 585) : 0;
            if ( v1634 >= 8 )
            {
              v1637 = (unsigned __int64)v1634 >> 3;
              do
              {
                *(_QWORD *)v207 = 0LL;
                v1634 -= 8;
                v207 += 8;
                --v1637;
              }
              while ( v1637 );
            }
            for ( ; v1634; --v1634 )
              *v207++ = 0;
            v1638 = *(_DWORD *)(v1632 + 2340);
            *(_DWORD *)(v1632 + 2340) = v1636;
            if ( v1636 == 3 )
            {
              (*(void (__fastcall **)(__int64))(v1632 + 872))(v1635);
            }
            else if ( (*(_DWORD *)(v1632 + 2448) & 0x10000000) != 0 || !v1636 )
            {
              (*(void (__fastcall **)(__int64))(v1632 + 248))(v1635);
            }
            else
            {
              (*(void (__fastcall **)(__int64, _QWORD))(v1632 + 552))(v1635 - 8, *(_QWORD *)(v1635 - 8));
            }
            *(_DWORD *)(v1632 + 2340) = v1638;
          }
          *(_DWORD *)(v1632 + 2448) &= ~4u;
LABEL_2294:
          ++*(_DWORD *)(v1632 + 2060);
          v1628 = v1632 + v1630;
          v1639 = 48;
          v3812 = v1628;
          v1640 = (_QWORD *)v1628;
          v1641 = 6LL;
          do
          {
            *v1640 = 0LL;
            v1639 -= 8;
            ++v1640;
            --v1641;
          }
          while ( v1641 );
          for ( ; v1639; --v1639 )
          {
            *(_BYTE *)v1640 = 0;
            v1640 = (_QWORD *)((char *)v1640 + 1);
          }
          v1642 = (const char *)v3813;
          *(_DWORD *)v1628 = v1629;
          v1643 = v1642;
          v1644 = (unsigned int)v3809;
          *(_QWORD *)(v1628 + 8) = v1642;
          *(_DWORD *)(v1628 + 16) = v1644;
          *(_DWORD *)(v1632 + 2088) += v1644;
          v1613 = *(unsigned int *)(v1632 + 2068);
          v1645 = &v1642[v1644];
          v1646 = *(_QWORD *)(v1632 + 2072);
          while ( v1642 < v1645 )
          {
            _mm_prefetch(v1642, 0);
            v1642 += 64;
          }
          v1647 = *(_QWORD *)(v1632 + 2072);
          v1648 = (unsigned int)v1644 >> 7;
          if ( (unsigned int)v1644 >> 7 )
          {
            do
            {
              v1649 = 8LL;
              do
              {
                v1650 = *(_QWORD *)v1643 ^ v1647;
                v1651 = v1643 + 8;
                v1652 = *v1651 ^ __ROL8__(v1650, v1613);
                v1643 = (const char *)(v1651 + 1);
                v1647 = __ROL8__(v1652, v1613);
                --v1649;
              }
              while ( v1649 );
              v1653 = (__ROL8__(v1646 ^ (unsigned __int64)&v1643[-v3813], 17) ^ v1646 ^ (unsigned __int64)&v1643[-v3813])
                    * (unsigned __int128)0x7010008004002001uLL;
              v4037 = *((_QWORD *)&v1653 + 1);
              v1613 = ((unsigned __int8)v1653 ^ (unsigned __int8)(BYTE8(v1653) ^ v1613)) & 0x3F;
              if ( !(_DWORD)v1613 )
                v1613 = 1LL;
              --v1648;
            }
            while ( v1648 );
            v1628 = v3812;
            LODWORD(v1644) = v3809;
          }
          *((_QWORD *)&v1612 + 1) = v1644 & 0x7F;
          if ( DWORD2(v1612) >= 8 )
          {
            *(_QWORD *)&v1612 = (unsigned __int64)(v1644 & 0x7F) >> 3;
            do
            {
              v1647 = __ROL8__(*(_QWORD *)v1643 ^ v1647, v1613);
              v1643 += 8;
              *((_QWORD *)&v1612 + 1) = (unsigned int)(DWORD2(v1612) - 8);
              *(_QWORD *)&v1612 = v1612 - 1;
            }
            while ( (_QWORD)v1612 );
          }
          if ( DWORD2(v1612) )
          {
            do
            {
              *(_QWORD *)&v1612 = *(unsigned __int8 *)v1643++;
              v1647 = __ROL8__(v1612 ^ v1647, v1613);
              v885 = DWORD2(v1612) == 1;
              *((_QWORD *)&v1612 + 1) = (unsigned int)(DWORD2(v1612) - 1);
            }
            while ( !v885 );
          }
          for ( i20 = v1647; ; LODWORD(v1647) = i20 ^ v1647 )
          {
            i20 >>= 31;
            if ( !i20 )
              break;
          }
          v207 = (_BYTE *)v1632;
          *(_DWORD *)(v1628 + 20) = v1647 & 0x7FFFFFFF;
          *(_DWORD *)(v1632 + 2088) += v1644;
          v1627 = v3818;
LABEL_2318:
          if ( (*((_DWORD *)v207 + 612) & 0x40000000) != 0 && (_DWORD)v1644 )
            sub_1403EB41C(v207, v3813, (unsigned int)v1644, v1628 + 28);
          v885 = (_DWORD)Src == 0;
          *(_DWORD *)(v1628 + 24) = 0;
          v1655 = v3820;
          *(_DWORD *)(v1627 + 144) = 35;
          v1656 = *(_DWORD *)(v1627 + 184) & 0xFFFFFFFE;
          v4007 = v207;
          *(_DWORD *)(v1627 + 184) = v1656 | !v885;
          if ( *(_DWORD *)(v1627 + 160) < 0x94u )
          {
LABEL_2329:
            v885 = (*((_DWORD *)v207 + 612) & 0x400000) == 0;
            v4033 = v207;
            if ( v885 )
              goto LABEL_2572;
            v3813 = (*((__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64))v207 + 63))(
                      v1655,
                      *((_QWORD *)&v1612 + 1),
                      v1613);
            if ( !v3813 )
              goto LABEL_2331;
            v1661 = *(unsigned __int16 *)(v3813 + 6);
            v3812 = (unsigned int)v3810 / 0xCuLL;
            LOWORD(v3815) = v1661;
            if ( !(_WORD)v1661 )
            {
              if ( (*((_DWORD *)v207 + 612) & 0x200000) == 0 )
              {
                v3874[1] = 317;
                KeBugCheckEx(__ROR4__BugCheckCode: (317, 160), BugCheckParameter1: 0xAuLL, BugCheckParameter2: v1655, BugCheckParameter3: 0LL, BugCheckParameter4: 0LL);
              }
              if ( !*((_DWORD *)v207 + 574) )
              {
                *((_QWORD *)v207 + 288) = v207 - 0x5C5FC0A76E374B18LL;
                *((_QWORD *)v207 + 289) = 0LL;
                *((_QWORD *)v207 + 290) = 271LL;
                *((_QWORD *)v207 + 291) = v1655;
                goto LABEL_2336;
              }
              goto LABEL_2331;
            }
            v1662 = v1661;
            v1663 = (unsigned int *)v3816;
            v1664 = v3813 + *(unsigned __int16 *)(v3813 + 20) + 24LL;
            LODWORD(v3811) = v1661;
            v3824 = (_QWORD *)v1664;
            LODWORD(v3809) = 0;
            v1665 = v3816 + 12LL * ((unsigned int)v3810 / 0xC);
            v3818 = v1665;
            v1666 = 0;
            v1667 = v3820;
            while ( 1 )
            {
              v1668 = 5LL * v1666;
              v1669 = *(_DWORD *)(v1664 + 40LL * v1666 + 16);
              v1670 = *(_DWORD *)(v1664 + 40LL * v1666 + 12);
              if ( v1669 <= *(_DWORD *)(v1664 + 40LL * v1666 + 8) )
                v1669 = *(_DWORD *)(v1664 + 40LL * v1666 + 8);
              v3819 = 5LL * v1666;
              v1671 = v1670 + v1669;
              LODWORD(v3817) = v1670;
              if ( v1666 )
              {
                if ( v1671 < *(_DWORD *)(v1664 + 40LL * (v1666 - 1) + 12) )
                {
                  if ( (*((_DWORD *)v207 + 612) & 0x200000) == 0 )
                  {
                    v3874[2] = 317;
                    KeBugCheckEx(__ROR4__BugCheckCode: (317, 160), BugCheckParameter1: 0xAuLL, BugCheckParameter2: v3820, BugCheckParameter3: 1uLL, BugCheckParameter4: 0LL);
                  }
LABEL_2371:
                  if ( !*((_DWORD *)v207 + 574) )
                  {
                    *((_QWORD *)v207 + 288) = v207 - 0x5C5FC0A76E374B18LL;
                    *((_QWORD *)v207 + 289) = 0LL;
                    v1685 = v3820;
                    *((_QWORD *)v207 + 290) = 271LL;
                    *((_QWORD *)v207 + 291) = v1685;
                    *((_DWORD *)v207 + 574) = 1;
                    goto LABEL_2337;
                  }
LABEL_2331:
                  v1561 = -1073741701;
LABEL_2382:
                  if ( v1561 >= 0 )
                    goto LABEL_2573;
LABEL_2383:
                  if ( v1561 == -1073741554 )
                    goto LABEL_2573;
                  return 0;
                }
                v1666 = v3809;
              }
              if ( v1663 != (unsigned int *)v1665 )
              {
                do
                {
                  v1672 = v1663[1];
                  if ( *v1663 >= v1671 || v1672 <= v1670 )
                    break;
                  if ( *v1663 < v1670 || v1672 > v1671 )
                  {
                    if ( (*((_DWORD *)v207 + 612) & 0x200000) == 0 )
                    {
                      v3874[5] = 317;
                      KeBugCheckEx(__ROR4__BugCheckCode: (317, 160), BugCheckParameter1: 0xAuLL, BugCheckParameter2: v3820, BugCheckParameter3: 2uLL, BugCheckParameter4: 0LL);
                    }
                    if ( !*((_DWORD *)v207 + 574) )
                    {
                      *((_QWORD *)v207 + 288) = v207 - 0x5C5FC0A76E374B18LL;
                      *((_QWORD *)v207 + 289) = 0LL;
                      v1686 = v3820;
                      *((_QWORD *)v207 + 290) = 271LL;
                      *((_QWORD *)v207 + 291) = v1686;
LABEL_2336:
                      *((_DWORD *)v207 + 574) = 1;
LABEL_2337:
                      __ba((__int64)v207, 0LL);
                    }
                    goto LABEL_2331;
                  }
                  v1673 = v1663[2];
                  if ( (v1673 & 1) != 0 || (*(_BYTE *)(v1673 + v1667) & 0x20) != 0 )
                  {
                    v1674 = *(_DWORD *)(v1664 + 8 * v1668 + 16);
                    v1675 = *(_DWORD *)(v1664 + 8 * v1668 + 12);
                    if ( v1674 <= *(_DWORD *)(v1664 + 8 * v1668 + 8) )
                      v1674 = *(_DWORD *)(v1664 + 8 * v1668 + 8);
                    v1676 = v1675 + v1674;
                    v1677 = (unsigned int *)(*((__int64 (__fastcall **)(unsigned int *, ULONG_PTR, ULONG_PTR, __int64))v207
                                             + 131))(
                                              v1663,
                                              v1667,
                                              v1664,
                                              v1662);
                    v1678 = v1677;
                    if ( *v1677 < v1675 || v1677[1] > v1676 )
                    {
                      v1679 = v3820;
                      if ( (*((_DWORD *)v207 + 612) & 0x200000) == 0 )
                      {
                        v3874[4] = 317;
                        KeBugCheckEx(
                          __ROR4__BugCheckCode: (317, 160),
                          BugCheckParameter1: 0xAuLL,
                          BugCheckParameter2: v3820,
                          (BugCheckParameter3: (_DWORD)v1677 - (_DWORD)v3820) | 0x80000000,
                          BugCheckParameter4: 0LL);
                      }
                      if ( !*((_DWORD *)v207 + 574) )
                      {
                        *((_QWORD *)v207 + 288) = v207 - 0x5C5FC0A76E374B18LL;
                        *((_QWORD *)v207 + 289) = 0LL;
                        *((_QWORD *)v207 + 290) = 271LL;
                        *((_QWORD *)v207 + 291) = v1679;
                        *((_DWORD *)v207 + 574) = 1;
                        __ba((__int64)v207, 0LL);
                      }
                    }
                    v1680 = (unsigned int *)(*((__int64 (__fastcall **)(unsigned int *, ULONG_PTR, ULONG_PTR))v207 + 132))(
                                              v1678,
                                              v3820,
                                              v3820 + *v1678);
                    if ( *v1680 < v1675 || v1680[1] > v1676 )
                    {
                      v1681 = v3820;
                      v1682 = ((_DWORD)v1680 - v3820) | 0x80000000;
                      if ( (*((_DWORD *)v207 + 612) & 0x200000) == 0 )
                      {
                        v3874[3] = 317;
                        KeBugCheckEx(__ROR4__BugCheckCode: (317, 160), BugCheckParameter1: 0xAuLL, BugCheckParameter2: v3820, BugCheckParameter3: v1682, BugCheckParameter4: 0LL);
                      }
                      if ( !*((_DWORD *)v207 + 574) )
                      {
                        *((_QWORD *)v207 + 288) = v207 - 0x5C5FC0A76E374B18LL;
                        *((_QWORD *)v207 + 289) = 0LL;
                        *((_QWORD *)v207 + 290) = 271LL;
                        *((_QWORD *)v207 + 291) = v1681;
                        *((_DWORD *)v207 + 574) = 1;
                        __ba((__int64)v207, 0LL);
                      }
                    }
                    v1668 = v3819;
                    v1670 = v3817;
                    v1664 = (ULONG_PTR)v3824;
                    v1665 = v3818;
                    v1667 = v3820;
                  }
                  v1663 += 3;
                }
                while ( v1663 != (unsigned int *)v1665 );
                v1666 = v3809;
                v1662 = (unsigned int)v3811;
              }
              LODWORD(v3809) = ++v1666;
              if ( v1666 >= (unsigned int)v1662 )
              {
                v1683 = v3812;
                v1684 = v3813;
                if ( v1663 != (unsigned int *)v1665 )
                {
                  if ( (*((_DWORD *)v207 + 612) & 0x200000) == 0 )
                  {
                    v3874[6] = 317;
                    KeBugCheckEx(__ROR4__BugCheckCode: (317, 160), BugCheckParameter1: 0xAuLL, BugCheckParameter2: v3820, BugCheckParameter3: 3uLL, BugCheckParameter4: 0LL);
                  }
                  goto LABEL_2371;
                }
                if ( (_DWORD)v3812 )
                  v1687 = (v3812 + 6) & 0xFFFFFFF8;
                else
                  v1687 = 0;
                v1688 = *((unsigned int *)v207 + 505);
                v1689 = v1687 + 24 * v1662 + v1688 + 48;
                if ( v1689 <= *((_DWORD *)v207 + 647) )
                {
                  v1690 = (ULONG_PTR)v207;
                  v3813 = (ULONG_PTR)v207;
                  *((_DWORD *)v207 + 505) = v1689;
                }
                else
                {
                  v3813 = sub_140B11020(v207, v1689, *((unsigned int *)v207 + 585));
                  v1690 = v3813;
                  if ( !v3813 )
                  {
                    v1561 = -1073741670;
                    goto LABEL_2382;
                  }
                  v1691 = *((_DWORD *)v207 + 612);
                  if ( (v1691 & 4) == 0 )
                  {
                    v1692 = *((_DWORD *)v207 + 505);
                    v1693 = *((_QWORD *)v207 + 249);
                    v1694 = (v1691 & 0x20000000) != 0 ? *((_DWORD *)v207 + 585) : 0;
                    if ( v1692 >= 8 )
                    {
                      v1695 = (unsigned __int64)v1692 >> 3;
                      do
                      {
                        *(_QWORD *)v207 = 0LL;
                        v1692 -= 8;
                        v207 += 8;
                        --v1695;
                      }
                      while ( v1695 );
                    }
                    for ( ; v1692; --v1692 )
                      *v207++ = 0;
                    v1696 = *(_DWORD *)(v1690 + 2340);
                    *(_DWORD *)(v1690 + 2340) = v1694;
                    if ( v1694 == 3 )
                    {
                      (*(void (__fastcall **)(__int64))(v1690 + 872))(v1693);
                    }
                    else if ( (*(_DWORD *)(v1690 + 2448) & 0x10000000) != 0 || !v1694 )
                    {
                      (*(void (__fastcall **)(__int64))(v1690 + 248))(v1693);
                    }
                    else
                    {
                      (*(void (__fastcall **)(__int64, _QWORD))(v1690 + 552))(v1693 - 8, *(_QWORD *)(v1693 - 8));
                    }
                    v1690 = v3813;
                    v1683 = v3812;
                    *(_DWORD *)(v3813 + 2340) = v1696;
                  }
                  *(_DWORD *)(v1690 + 2448) &= ~4u;
                  LODWORD(v1662) = v3811;
                  v1665 = v3818;
                }
                ++*(_DWORD *)(v1690 + 2060);
                v1697 = v1690 + v1688;
                v1698 = 48;
                v1699 = (_QWORD *)(v1690 + v1688);
                v1700 = 6LL;
                do
                {
                  *v1699 = 0LL;
                  v1698 -= 8;
                  ++v1699;
                  --v1700;
                }
                while ( v1700 );
                for ( ; v1698; --v1698 )
                {
                  *(_BYTE *)v1699 = 0;
                  v1699 = (_QWORD *)((char *)v1699 + 1);
                }
                v1701 = v3816;
                *(_DWORD *)v1697 = 30;
                *(_QWORD *)(v1697 + 8) = v1701;
                *(_DWORD *)(v1697 + 16) = 0;
                v1702 = *(_QWORD *)(v1690 + 2072);
                for ( i21 = v1702; ; LODWORD(v1702) = i21 ^ v1702 )
                {
                  i21 >>= 31;
                  if ( !i21 )
                    break;
                }
                v1704 = v3820;
                v1705 = (unsigned __int16)v3815;
                *(_DWORD *)(v1697 + 20) = v1702 & 0x7FFFFFFF;
                v207 = (_BYTE *)v1690;
                *(_QWORD *)(v1697 + 24) = v1704;
                *(_DWORD *)(v1697 + 32) = *(_DWORD *)(v1684 + 80);
                *(_DWORD *)(v1697 + 36) = v3810;
                v885 = (_DWORD)Src == 0;
                *(_WORD *)(v1697 + 40) = v1705;
                LOWORD(v1704) = *(_WORD *)(v1697 + 42) & 0xFFFE;
                v4033 = (_BYTE *)v1690;
                *(_WORD *)(v1697 + 42) = v1704 | !v885;
                v3812 = v1697 + 48;
                if ( v1683 )
                  v1706 = (_DWORD *)(v1697 + 48 + (((unsigned int)(v1683 - 1) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL));
                else
                  v1706 = (_DWORD *)(v1697 + 48);
                v1707 = (unsigned int *)v3816;
                v3817 = (ULONG_PTR)v1706;
                v1708 = &v1706[6 * v1705];
                v3819 = (__int64)v1708;
                if ( v1683 )
                  v3825 = v3816 + 12;
                else
                  v3825 = v1665;
                if ( (_DWORD)v1662 )
                {
                  v1709 = (unsigned int)v1662;
                  v1710 = v1706 + 2;
                  do
                  {
                    v1711 = 2LL;
                    do
                    {
                      *(v1710 - 2) = 0;
                      *(v1710 - 1) = 0;
                      *v1710 = 0x80000000;
                      v1710 += 3;
                      --v1711;
                    }
                    while ( v1711 );
                    --v1709;
                  }
                  while ( v1709 );
                  v1707 = (unsigned int *)v3816;
                }
                if ( v1706 == v1708 )
                {
LABEL_2572:
                  v4007 = v207;
                  goto LABEL_2573;
                }
                v1712 = v3824;
                while ( 2 )
                {
                  v885 = (v1712[9] & 0x2000000) == 0;
                  v1713 = 0;
                  LODWORD(Src) = 0;
                  if ( !v885 )
                    goto LABEL_2424;
                  v1714 = *v1712;
                  if ( *v1712 == 1414090313 )
                  {
                    if ( v1712[1] == 1195525195 )
                      goto LABEL_2424;
LABEL_2430:
                    if ( v1714 != 1095914053 || *((_WORD *)v1712 + 2) != 16724 )
                      goto LABEL_2432;
LABEL_2424:
                    v1713 = 1;
                    LODWORD(Src) = 1;
                  }
                  else
                  {
                    if ( v1714 != 1162297680 )
                      goto LABEL_2430;
                    v1715 = *((_WORD *)v1712 + 2);
                    if ( v1715 == 30839 || v1715 == 29303 || v1715 == 30583 )
                      goto LABEL_2424;
LABEL_2432:
                    v1716 = *(char **)(v1690 + 2352);
                    v1717 = 7;
                    v1718 = *(__int64 **)(v1690 + 2360);
                    v1719 = (char *)v1712 - v1716;
                    v1720 = *(char **)(v3813 + 2368);
                    v1721 = *(char **)(v3813 + 2376);
                    while ( 1 )
                    {
                      v1722 = (unsigned __int8)v1716[v1719];
                      v1723 = (unsigned __int8)*v1716++;
                      if ( v1722 != v1723 )
                        break;
                      if ( !--v1717 )
                      {
LABEL_2450:
                        v1713 = 1;
                        LODWORD(Src) = 1;
                        goto LABEL_2451;
                      }
                    }
                    v1724 = 8;
                    v1725 = (__int64 *)v1712;
                    while ( 1 )
                    {
                      v1726 = *v1725++;
                      v1727 = *v1718++;
                      if ( v1726 != v1727 )
                        break;
                      v1724 -= 8;
                      if ( v1724 < 8 )
                      {
                        if ( !v1724 )
                          goto LABEL_2450;
                        while ( 1 )
                        {
                          v1728 = *(unsigned __int8 *)v1725;
                          v1725 = (__int64 *)((char *)v1725 + 1);
                          v1729 = *(unsigned __int8 *)v1718;
                          v1718 = (__int64 *)((char *)v1718 + 1);
                          if ( v1728 != v1729 )
                            goto LABEL_2443;
                          if ( !--v1724 )
                            goto LABEL_2450;
                        }
                      }
                    }
LABEL_2443:
                    v1730 = 4;
                    v1731 = (char *)v1712 - v1720;
                    while ( 1 )
                    {
                      v1732 = (unsigned __int8)v1720[v1731];
                      v1733 = (unsigned __int8)*v1720++;
                      if ( v1732 != v1733 )
                        break;
                      if ( !--v1730 )
                        goto LABEL_2450;
                    }
                    v1734 = 6;
                    v1735 = (char *)v1712 - v1721;
                    while ( 1 )
                    {
                      v1736 = (unsigned __int8)v1721[v1735];
                      v1737 = (unsigned __int8)*v1721++;
                      if ( v1736 != v1737 )
                        break;
                      if ( !--v1734 )
                        goto LABEL_2450;
                    }
LABEL_2451:
                    v1706 = (_DWORD *)v3817;
                    v1690 = v3813;
                  }
                  v1738 = v1712[9];
                  if ( v1738 < 0 )
                  {
                    v1713 = 1;
                    LODWORD(Src) = 1;
                    goto LABEL_2455;
                  }
                  if ( v1713 )
                  {
LABEL_2455:
                    if ( *v1712 == 1414090313 && v1712[1] == 1195525195 )
                    {
                      if ( (*(_DWORD *)(v1690 + 2452) & 0x2000) != 0 )
                        v1713 = 0;
                      LODWORD(Src) = v1713;
                    }
                  }
                  v1739 = v3820;
                  if ( (*(_DWORD *)(v1690 + 2452) & 0x4000) != 0
                    && (v1738 & 0x20000000) != 0
                    && (v3820 == *(_QWORD *)(v1690 + 1504) || v3820 == *(_QWORD *)(v1690 + 1512)) )
                  {
                    v1713 = 1;
                    LODWORD(Src) = 1;
                  }
                  v1740 = v1712[4];
                  v1741 = (unsigned int)v1712[3];
                  v1742 = v3818;
                  if ( v1740 <= v1712[2] )
                    v1740 = v1712[2];
                  v1743 = v1741 + v1740;
                  LODWORD(v3810) = v1712[3];
                  LODWORD(v3809) = v1743;
                  if ( v1707 == (unsigned int *)v3818 )
                  {
                    v1746 = 0;
                    v1748 = (_DWORD)v1741 != 0;
                    v1747 = v1741;
                  }
                  else
                  {
                    v1744 = *v1707;
                    v1745 = v1707[1];
                    v1746 = v1745;
                    v1747 = v1741;
                    v1748 = v1744 < (unsigned int)v1741;
                    if ( v1744 > (unsigned int)v1741 )
                    {
                      if ( v1745 > v1743 )
                        goto LABEL_2497;
                      if ( v1713 )
                      {
                        v1767 = v3816;
                        goto LABEL_2501;
                      }
                      *v1706 = v1741;
                      v1747 = v1744;
                      v1706[1] = v1744;
                      v1749 = (const char *)(v1739 + v1741);
                      LODWORD(v3811) = v1745;
                      v1750 = v1744 - v1741;
                      v1751 = (unsigned __int64)&v1749[v1744 - (unsigned int)v1741];
                      v1752 = 0;
                      while ( 1 )
                      {
                        v1753 = *(&v4218 + v1752);
                        if ( (unsigned __int64)v1749 < v1753 + (unsigned int)v4186[v1752] && v1751 > v1753 )
                          break;
                        if ( ++v1752 >= 6 )
                        {
                          *(_DWORD *)(v1690 + 2088) += v1750;
                          v1754 = v1749;
                          v1755 = *(_DWORD *)(v1690 + 2068);
                          v1756 = *(_QWORD *)(v1690 + 2072);
                          for ( i22 = v1749; (unsigned __int64)v1754 < v1751; v1754 += 64 )
                            _mm_prefetch(v1754, 0);
                          v1758 = v1756;
                          v1759 = v1750 >> 7;
                          if ( v1750 >> 7 )
                          {
                            do
                            {
                              v1760 = 8LL;
                              do
                              {
                                v1761 = *((_QWORD *)i22 + 1) ^ __ROL8__(*(_QWORD *)i22 ^ v1758, v1755);
                                i22 += 16;
                                v1758 = __ROL8__(v1761, v1755);
                                --v1760;
                              }
                              while ( v1760 );
                              v1762 = (__ROL8__(v1756 ^ (i22 - v1749), 17) ^ v1756 ^ (i22 - v1749))
                                    * (unsigned __int128)0x7010008004002001uLL;
                              v4038 = *((_QWORD *)&v1762 + 1);
                              v1755 = ((unsigned __int8)v1762 ^ (unsigned __int8)(BYTE8(v1762) ^ v1755)) & 0x3F;
                              if ( !v1755 )
                                LOBYTE(v1755) = 1;
                              --v1759;
                            }
                            while ( v1759 );
                            v1746 = v3811;
                          }
                          v1763 = v1750 & 0x7F;
                          if ( v1763 >= 8 )
                          {
                            v1764 = (unsigned __int64)v1763 >> 3;
                            do
                            {
                              v1758 = __ROL8__(*(_QWORD *)i22 ^ v1758, v1755);
                              i22 += 8;
                              v1763 -= 8;
                              --v1764;
                            }
                            while ( v1764 );
                          }
                          for ( ; v1763; --v1763 )
                          {
                            v1765 = *(unsigned __int8 *)i22++;
                            v1758 = __ROL8__(v1765 ^ v1758, v1755);
                          }
                          for ( i23 = v1758 >> 31; i23; i23 >>= 31 )
                            LODWORD(v1758) = i23 ^ v1758;
                          v1743 = v3809;
                          v1713 = (int)Src;
                          v1690 = v3813;
                          *(_DWORD *)(v3817 + 8) = v1758 & 0x7FFFFFFF;
                          break;
                        }
                      }
                      v1742 = v3818;
LABEL_2497:
                      if ( v1746 <= v1743 )
                      {
                        v1767 = v3816;
                        if ( v3816 != v1742 )
                        {
LABEL_2501:
                          v1768 = (unsigned int *)v3825;
                          v1769 = *(_DWORD *)(v3825 + 4);
                          LODWORD(v3811) = v1769;
                          if ( v1769 <= v1743 )
                          {
                            while ( v1768 != (unsigned int *)v1742 )
                            {
                              if ( v1713 )
                              {
                                v1770 = 0x80;
                              }
                              else
                              {
                                v1771 = *(unsigned int *)(v1767 + 4);
                                v1747 = *v1768;
                                if ( *v1768 < (unsigned int)v1771 )
                                {
                                  if ( (*(_DWORD *)(v1690 + 2448) & 0x200000) == 0 )
                                  {
                                    v3874[7] = 317;
                                    KeBugCheckEx(__ROR4__BugCheckCode: (317, 160), BugCheckParameter1: 0xAuLL, BugCheckParameter2: v3820, BugCheckParameter3: 6uLL, BugCheckParameter4: 0LL);
                                  }
                                  if ( !*(_DWORD *)(v1690 + 2296) )
                                  {
                                    *(_QWORD *)(v1690 + 2304) = v1690 - 0x5C5FC0A76E374B18LL;
                                    *(_QWORD *)(v1690 + 2312) = 0LL;
                                    v1772 = v3820;
                                    *(_QWORD *)(v1690 + 2320) = 271LL;
                                    *(_QWORD *)(v1690 + 2328) = v1772;
                                    *(_DWORD *)(v1690 + 2296) = 1;
                                    __ba(v1690, 0LL);
                                  }
                                }
                                v1773 = (_QWORD *)(v3820 + v1771);
                                v1774 = v1747 - v1771;
                                v1775 = v3820 + v1771 + v1747 - (unsigned int)v1771;
                                for ( i24 = 0; i24 < 6; ++i24 )
                                {
                                  v1777 = *(&v4218 + i24);
                                  if ( (unsigned __int64)v1773 < v1777 + (unsigned int)v4186[i24] && v1775 > v1777 )
                                    goto LABEL_2534;
                                }
                                if ( v1774 < 4 )
                                {
LABEL_2534:
                                  v1770 = 0x80;
                                  goto LABEL_2535;
                                }
                                v1778 = v3813;
                                v1779 = v1773;
                                *(_DWORD *)(v3813 + 2088) += v1774;
                                v1780 = *(_DWORD *)(v1778 + 2068);
                                v1781 = *(_QWORD *)(v1778 + 2072);
                                v1782 = (const char *)v1773;
                                if ( (unsigned __int64)v1773 < v1775 )
                                {
                                  do
                                  {
                                    _mm_prefetch(v1782, 0);
                                    v1782 += 64;
                                  }
                                  while ( (unsigned __int64)v1782 < v1775 );
                                }
                                v1783 = v1781;
                                v1784 = v1774 >> 7;
                                if ( v1774 >> 7 )
                                {
                                  do
                                  {
                                    v1785 = 8LL;
                                    do
                                    {
                                      v1786 = v1779[1] ^ __ROL8__(*v1779 ^ v1783, v1780);
                                      v1779 += 2;
                                      v1783 = __ROL8__(v1786, v1780);
                                      --v1785;
                                    }
                                    while ( v1785 );
                                    v1787 = (__ROL8__(v1781 ^ ((char *)v1779 - (char *)v1773), 17) ^ v1781 ^ ((char *)v1779 - (char *)v1773))
                                          * (unsigned __int128)0x7010008004002001uLL;
                                    v4039 = *((_QWORD *)&v1787 + 1);
                                    v1780 = ((unsigned __int8)v1787 ^ (unsigned __int8)(BYTE8(v1787) ^ v1780)) & 0x3F;
                                    if ( !v1780 )
                                      LOBYTE(v1780) = 1;
                                    --v1784;
                                  }
                                  while ( v1784 );
                                  v1769 = v3811;
                                }
                                v1788 = v1774 & 0x7F;
                                if ( v1788 >= 8 )
                                {
                                  v1789 = (unsigned __int64)v1788 >> 3;
                                  do
                                  {
                                    v1783 = __ROL8__(*v1779++ ^ v1783, v1780);
                                    v1788 -= 8;
                                    --v1789;
                                  }
                                  while ( v1789 );
                                }
                                for ( ; v1788; --v1788 )
                                {
                                  v1790 = *(unsigned __int8 *)v1779;
                                  v1779 = (_QWORD *)((char *)v1779 + 1);
                                  v1783 = __ROL8__(v1790 ^ v1783, v1780);
                                }
                                for ( i25 = v1783 >> 7; i25; i25 >>= 7 )
                                  LOBYTE(v1783) = i25 ^ v1783;
                                v1713 = (int)Src;
                                v1770 = v1783 & 0x7F;
LABEL_2535:
                                v1767 = v3816;
                                v1743 = v3809;
                              }
                              v1792 = (_BYTE *)v3812;
                              v1767 += 12LL;
                              ++v3812;
                              *v1792 = v1770;
                              v1742 = v3818;
                              v1768 = (unsigned int *)(v3825 + 12);
                              v3816 = v1767;
                              v3825 = (ULONG_PTR)v1768;
                              if ( v1768 != (unsigned int *)v3818 )
                              {
                                v1769 = v1768[1];
                                LODWORD(v3811) = v1769;
                              }
                              if ( v1769 > v1743 )
                                break;
                              v1690 = v3813;
                            }
                          }
                        }
                      }
LABEL_2539:
                      v1793 = (unsigned int *)v3817;
                      if ( !v1713 && v1747 != v1743 )
                      {
                        v1794 = v3820;
                        *(_DWORD *)(v3817 + 12) = v1747;
                        v1793[4] = v1743;
                        v1795 = v1793[3];
                        v1796 = v1743 - v1795;
                        v1797 = (_QWORD *)(v1795 + v1794);
                        v1798 = (unsigned __int64)v1797 + v1743 - (unsigned int)v1795;
                        LODWORD(Src) = v1796;
                        v1799 = 0;
                        while ( 1 )
                        {
                          v1800 = *(&v4218 + v1799);
                          if ( (unsigned __int64)v1797 < v1800 + (unsigned int)v4186[v1799] && v1798 > v1800 )
                            break;
                          if ( ++v1799 >= 6 )
                          {
                            v1801 = v3813;
                            v1802 = v1797;
                            *(_DWORD *)(v3813 + 2088) += v1796;
                            v1803 = *(_DWORD *)(v1801 + 2068);
                            v1804 = *(_QWORD *)(v1801 + 2072);
                            v1805 = (const char *)v1797;
                            if ( (unsigned __int64)v1797 < v1798 )
                            {
                              do
                              {
                                _mm_prefetch(v1805, 0);
                                v1805 += 64;
                              }
                              while ( (unsigned __int64)v1805 < v1798 );
                            }
                            v1806 = v1804;
                            v1807 = v1796 >> 7;
                            if ( v1796 >> 7 )
                            {
                              do
                              {
                                v1808 = 8LL;
                                do
                                {
                                  v1809 = v1802[1] ^ __ROL8__(*v1802 ^ v1806, v1803);
                                  v1802 += 2;
                                  v1806 = __ROL8__(v1809, v1803);
                                  --v1808;
                                }
                                while ( v1808 );
                                v1810 = (__ROL8__(v1804 ^ ((char *)v1802 - (char *)v1797), 17) ^ v1804 ^ ((char *)v1802 - (char *)v1797))
                                      * (unsigned __int128)0x7010008004002001uLL;
                                v4040 = *((_QWORD *)&v1810 + 1);
                                v1803 = ((unsigned __int8)v1810 ^ (unsigned __int8)(BYTE8(v1810) ^ v1803)) & 0x3F;
                                if ( !v1803 )
                                  LOBYTE(v1803) = 1;
                                --v1807;
                              }
                              while ( v1807 );
                              LOBYTE(v1796) = (_BYTE)Src;
                            }
                            v1811 = v1796 & 0x7F;
                            if ( v1811 >= 8 )
                            {
                              v1812 = (unsigned __int64)v1811 >> 3;
                              do
                              {
                                v1806 = __ROL8__(*v1802++ ^ v1806, v1803);
                                v1811 -= 8;
                                --v1812;
                              }
                              while ( v1812 );
                            }
                            for ( ; v1811; --v1811 )
                            {
                              v1813 = *(unsigned __int8 *)v1802;
                              v1802 = (_QWORD *)((char *)v1802 + 1);
                              v1806 = __ROL8__(v1813 ^ v1806, v1803);
                            }
                            for ( i26 = v1806; ; LODWORD(v1806) = i26 ^ v1806 )
                            {
                              i26 >>= 31;
                              if ( !i26 )
                                break;
                            }
                            v1793 = (unsigned int *)v3817;
                            *(_DWORD *)(v3817 + 20) = v1806 & 0x7FFFFFFF;
                            break;
                          }
                        }
                        v1743 = v3809;
                      }
                      v1707 = (unsigned int *)v3816;
                      if ( v3816 != v3818 && *(_DWORD *)v3816 >= (unsigned int)v3810 && *(_DWORD *)(v3816 + 4) <= v1743 )
                      {
                        v1815 = v3825;
                        if ( v3825 != v3818 )
                        {
                          v1816 = v3812;
                          *(_BYTE *)v3812 = 0x80;
                          v3812 = v1816 + 1;
                          v3825 = v1815 + 12;
                        }
                        v1707 += 3;
                        v3816 = (__int64)v1707;
                      }
                      v1706 = v1793 + 6;
                      v1690 = v3813;
                      v1712 = v3824 + 5;
                      v3817 = (ULONG_PTR)v1706;
                      v3824 += 5;
                      if ( v1706 == (_DWORD *)v3819 )
                      {
                        v207 = v4033;
                        goto LABEL_2572;
                      }
                      continue;
                    }
                  }
                  break;
                }
                if ( !v1748 )
                  goto LABEL_2497;
                goto LABEL_2539;
              }
            }
          }
          v1657 = *(_QWORD *)(v1627 + 152);
          v1575 = (*((__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64))v207 + 63))(
                    v1655,
                    *((_QWORD *)&v1612 + 1),
                    v1613);
          if ( v1575 )
          {
            v1658 = v1655 + *(unsigned int *)(v1575 + 80);
            *((_QWORD *)&v1612 + 1) = *(_DWORD *)(v1627 + 184) | 2u;
            *(_DWORD *)(v1627 + 184) = DWORD2(v1612);
            v1659 = DWORD2(v1612);
            *(_QWORD *)&v1612 = *(_QWORD *)(v1657 + 112);
            if ( (unsigned __int64)v1612 >= v1655 && (unsigned __int64)v1612 < v1658 )
            {
              v1659 = DWORD2(v1612) | 4;
              *(_QWORD *)(v1627 + 168) = *(_QWORD *)v1612;
              *(_DWORD *)(v1627 + 184) = DWORD2(v1612) | 4;
            }
            v1660 = *(_QWORD **)(v1657 + 120);
            if ( (unsigned __int64)v1660 >= v1655 && (unsigned __int64)v1660 < v1658 )
            {
              *(_QWORD *)(v1627 + 176) = *v1660;
              *(_DWORD *)(v1627 + 184) = v1659 | 8;
            }
            goto LABEL_2329;
          }
        }
LABEL_2575:
        v4033 = (_BYTE *)v1575;
        return 0;
      }
    }
    *(_DWORD *)(v1603 + 32) |= 2u;
    goto LABEL_2252;
  }
LABEL_2580:
  v1817 = __rdtsc();
  v1818 = (__ROR8__(v1817, 3) ^ v1817) * (unsigned __int128)0x7010008004002001uLL;
  v4041 = *((_QWORD *)&v1818 + 1);
  v1819 = *((_QWORD *)&v1818 + 1) ^ v1818;
  *((_QWORD *)&v1818 + 1) = ((*((_QWORD *)&v1818 + 1) ^ (unsigned __int64)v1818)
                           * (unsigned __int128)0x47AE147AE147AE15uLL) >> 64;
  if ( v1819 - 100 * ((*((_QWORD *)&v1818 + 1) + ((unsigned __int64)(v1819 - *((_QWORD *)&v1818 + 1)) >> 1)) >> 6) < 2 )
    *((_DWORD *)v207 + 612) |= 0x20000u;
  v1820 = *((_QWORD *)v207 + 172);
  v1821 = 32;
  v1822 = *((_DWORD *)v207 + 526);
  v1823 = *((unsigned int *)v207 + 505);
  v1824 = *((unsigned int *)v207 + 585);
  v1825 = *(_QWORD **)v1820;
  v1826 = 4 * *(_DWORD *)(v1820 + 16);
  HalExtensionList = v1820;
  LODWORD(Src) = v1822;
  if ( v1822 != 7 )
    v1821 = 0;
  v1827 = v1823 + 48;
  LODWORD(v3810) = v1821;
  if ( (unsigned int)(v1823 + 48) <= *((_DWORD *)v207 + 647) )
  {
    v1828 = v207;
    *((_DWORD *)v207 + 505) = v1827;
  }
  else
  {
    v1828 = (_BYTE *)sub_140B11020(v207, v1827, v1824);
    if ( !v1828 )
      return 0;
    v1829 = *((_DWORD *)v207 + 612);
    if ( (v1829 & 4) == 0 )
    {
      v1830 = *((_DWORD *)v207 + 505);
      v1831 = *((_QWORD *)v207 + 249);
      v1832 = (v1829 & 0x20000000) != 0 ? *((_DWORD *)v207 + 585) : 0;
      if ( v1830 >= 8 )
      {
        v1833 = (unsigned __int64)v1830 >> 3;
        do
        {
          *(_QWORD *)v207 = 0LL;
          v1830 -= 8;
          v207 += 8;
          --v1833;
        }
        while ( v1833 );
      }
      for ( ; v1830; --v1830 )
        *v207++ = 0;
      v1834 = *((_DWORD *)v1828 + 585);
      *((_DWORD *)v1828 + 585) = v1832;
      if ( v1832 == 3 )
      {
        (*((void (__fastcall **)(__int64))v1828 + 109))(v1831);
      }
      else if ( (*((_DWORD *)v1828 + 612) & 0x10000000) != 0 || !v1832 )
      {
        (*((void (__fastcall **)(__int64))v1828 + 31))(v1831);
      }
      else
      {
        (*((void (__fastcall **)(__int64, _QWORD))v1828 + 69))(v1831 - 8, *(_QWORD *)(v1831 - 8));
      }
      v1821 = v3810;
      *((_DWORD *)v1828 + 585) = v1834;
    }
    *((_DWORD *)v1828 + 612) &= ~4u;
    v1822 = (int)Src;
  }
  ++*((_DWORD *)v1828 + 515);
  v1835 = (ULONG_PTR)&v1828[v1823];
  v1836 = 48;
  v3814 = (ULONG_PTR)&v1828[v1823];
  v1837 = &v1828[v1823];
  v1838 = 6LL;
  do
  {
    *v1837 = 0LL;
    v1836 -= 8;
    ++v1837;
    --v1838;
  }
  while ( v1838 );
  for ( ; v1836; --v1836 )
  {
    *(_BYTE *)v1837 = 0;
    v1837 = (_QWORD *)((char *)v1837 + 1);
  }
  *(_DWORD *)v1835 = v1821;
  *(_QWORD *)(v1835 + 8) = v1825;
  if ( v1822 == 7 && v1826 )
    sub_1403EB41C(v1828, v1825, v1826, v1835 + 24);
  *(_DWORD *)(v1835 + 16) = v1826;
  v1839 = v1825;
  *((_DWORD *)v1828 + 522) += v1826;
  v1840 = (const char *)v1825;
  v1841 = *((_DWORD *)v1828 + 517);
  v1842 = *((_QWORD *)v1828 + 259);
  v1843 = (unsigned __int64)v1825 + v1826;
  if ( (unsigned __int64)v1825 < v1843 )
  {
    do
    {
      _mm_prefetch(v1840, 0);
      v1840 += 64;
    }
    while ( (unsigned __int64)v1840 < v1843 );
  }
  v1844 = *((_QWORD *)v1828 + 259);
  v1845 = v1826 >> 7;
  if ( v1826 >> 7 )
  {
    do
    {
      v1846 = 8LL;
      do
      {
        v1847 = v1839[1] ^ __ROL8__(*v1839 ^ v1844, v1841);
        v1839 += 2;
        v1844 = __ROL8__(v1847, v1841);
        --v1846;
      }
      while ( v1846 );
      v1848 = (__ROL8__(v1842 ^ ((char *)v1839 - (char *)v1825), 17) ^ v1842 ^ (unsigned __int64)((char *)v1839
                                                                                                - (char *)v1825))
            * (unsigned __int128)0x7010008004002001uLL;
      v4042 = *((_QWORD *)&v1848 + 1);
      v1841 = (BYTE8(v1848) ^ (unsigned __int8)(v1848 ^ v1841)) & 0x3F;
      if ( !v1841 )
        LOBYTE(v1841) = 1;
      --v1845;
    }
    while ( v1845 );
    v1835 = v3814;
  }
  v1849 = v1826 & 0x7F;
  if ( v1849 >= 8 )
  {
    v1850 = (unsigned __int64)(v1826 & 0x7F) >> 3;
    do
    {
      v1844 = __ROL8__(*v1839++ ^ v1844, v1841);
      v1849 -= 8;
      --v1850;
    }
    while ( v1850 );
  }
  for ( ; v1849; --v1849 )
  {
    v1851 = *(unsigned __int8 *)v1839;
    v1839 = (_QWORD *)((char *)v1839 + 1);
    v1844 = __ROL8__(v1851 ^ v1844, v1841);
  }
  for ( i27 = v1844; ; LODWORD(v1844) = i27 ^ v1844 )
  {
    i27 >>= 31;
    if ( !i27 )
      break;
  }
  v4007 = v1828;
  v4144[0] = 32;
  *(_DWORD *)(v1835 + 20) = v1844 & 0x7FFFFFFF;
  *((_DWORD *)v1828 + 522) += v1826;
  v1853 = 32;
  v1854 = *((_DWORD *)v1828 + 526);
  v1855 = *((unsigned int *)v1828 + 505);
  v1856 = *((unsigned int *)v1828 + 585);
  v4196[0] = &KeServiceDescriptorTable;
  v4196[1] = &xmmword_140E018E0;
  v4196[2] = &KeServiceDescriptorTableShadow;
  v4196[3] = &KeServiceDescriptorTableFilter;
  if ( v1854 != 7 )
    v1853 = 0;
  v4144[1] = 32;
  v1857 = v1855 + 192;
  v4144[2] = 32;
  v4144[3] = 32;
  LODWORD(Src) = 4;
  LODWORD(v3810) = v1854;
  LODWORD(v3809) = v1853;
  if ( (unsigned int)(v1855 + 192) <= *((_DWORD *)v1828 + 647) )
  {
    v1858 = v1828;
    *((_DWORD *)v1828 + 505) = v1857;
    v3814 = (ULONG_PTR)v1828;
  }
  else
  {
    v3814 = sub_140B11020(v1828, v1857, v1856);
    v1858 = (_BYTE *)v3814;
    if ( !v3814 )
      return 0;
    v1859 = *((_DWORD *)v1828 + 612);
    if ( (v1859 & 4) == 0 )
    {
      v1860 = *((_DWORD *)v1828 + 505);
      v1861 = *((_QWORD *)v1828 + 249);
      v1862 = (v1859 & 0x20000000) != 0 ? *((_DWORD *)v1828 + 585) : 0;
      if ( v1860 >= 8 )
      {
        v1863 = (unsigned __int64)v1860 >> 3;
        do
        {
          *(_QWORD *)v1828 = 0LL;
          v1860 -= 8;
          v1828 += 8;
          --v1863;
        }
        while ( v1863 );
      }
      for ( ; v1860; --v1860 )
        *v1828++ = 0;
      v1864 = *((_DWORD *)v1858 + 585);
      *((_DWORD *)v1858 + 585) = v1862;
      if ( v1862 == 3 )
      {
        (*((void (__fastcall **)(__int64))v1858 + 109))(v1861);
      }
      else if ( (*((_DWORD *)v1858 + 612) & 0x10000000) != 0 || !v1862 )
      {
        (*((void (__fastcall **)(__int64))v1858 + 31))(v1861);
      }
      else
      {
        (*((void (__fastcall **)(__int64, _QWORD))v1858 + 69))(v1861 - 8, *(_QWORD *)(v1861 - 8));
      }
      *((_DWORD *)v1858 + 585) = v1864;
    }
    *((_DWORD *)v1858 + 612) &= ~4u;
    v1854 = v3810;
    v1853 = v3809;
  }
  *((_DWORD *)v1858 + 515) += 4;
  v1865 = v4196;
  v1866 = (ULONG_PTR)&v1858[v1855];
  v3812 = (unsigned __int64)v4196;
  v3813 = v1866;
  v1867 = v4144;
  v3816 = 4LL;
  do
  {
    v1868 = *v1867;
    v1869 = 48;
    v1870 = (_QWORD *)*v1865;
    v1871 = (_QWORD *)v1866;
    v1872 = 6LL;
    do
    {
      *v1871 = 0LL;
      v1869 -= 8;
      ++v1871;
      --v1872;
    }
    while ( v1872 );
    for ( ; v1869; --v1869 )
    {
      *(_BYTE *)v1871 = 0;
      v1871 = (_QWORD *)((char *)v1871 + 1);
    }
    *(_DWORD *)v1866 = v1853;
    *(_QWORD *)(v1866 + 8) = v1870;
    if ( v1854 == 7 && (_DWORD)v1868 )
      sub_1403EB41C(v1858, v1870, (unsigned int)v1868, v1866 + 24);
    *(_DWORD *)(v1866 + 16) = v1868;
    *((_DWORD *)v1858 + 522) += v1868;
    v1873 = v1870;
    v1874 = *((_DWORD *)v1858 + 517);
    v1875 = (const char *)v1870;
    v1876 = *((_QWORD *)v1858 + 259);
    if ( v1870 < (_QWORD *)((char *)v1870 + v1868) )
    {
      do
      {
        _mm_prefetch(v1875, 0);
        v1875 += 64;
      }
      while ( v1875 < (const char *)v1870 + v1868 );
    }
    v1877 = *((_QWORD *)v1858 + 259);
    v1878 = (unsigned int)v1868 >> 7;
    if ( (unsigned int)v1868 >> 7 )
    {
      do
      {
        v1879 = 8LL;
        do
        {
          v1880 = v1873[1] ^ __ROL8__(*v1873 ^ v1877, v1874);
          v1873 += 2;
          v1877 = __ROL8__(v1880, v1874);
          --v1879;
        }
        while ( v1879 );
        v1881 = (__ROL8__(v1876 ^ ((char *)v1873 - (char *)v1870), 17) ^ v1876 ^ (unsigned __int64)((char *)v1873
                                                                                                  - (char *)v1870))
              * (unsigned __int128)0x7010008004002001uLL;
        v4043 = *((_QWORD *)&v1881 + 1);
        v1874 = (BYTE8(v1881) ^ (unsigned __int8)(v1881 ^ v1874)) & 0x3F;
        if ( !v1874 )
          LOBYTE(v1874) = 1;
        --v1878;
      }
      while ( v1878 );
      v1858 = (_BYTE *)v3814;
      v1865 = (_QWORD *)v3812;
    }
    v1882 = v1868 & 0x7F;
    if ( v1882 >= 8 )
    {
      v1883 = (unsigned __int64)(v1868 & 0x7F) >> 3;
      do
      {
        v1877 = __ROL8__(*v1873++ ^ v1877, v1874);
        v1882 -= 8;
        --v1883;
      }
      while ( v1883 );
    }
    for ( ; v1882; --v1882 )
    {
      v1884 = *(unsigned __int8 *)v1873;
      v1873 = (_QWORD *)((char *)v1873 + 1);
      v1877 = __ROL8__(v1884 ^ v1877, v1874);
    }
    for ( i28 = v1877 >> 31; i28; i28 >>= 31 )
      LODWORD(v1877) = i28 ^ v1877;
    v1854 = v3810;
    v1853 = v3809;
    ++v1865;
    *(_DWORD *)(v1866 + 20) = v1877 & 0x7FFFFFFF;
    ++v1867;
    *((_DWORD *)v1858 + 522) += v1868;
    v1866 += 48LL;
    v885 = v3816-- == 1;
    v3812 = (unsigned __int64)v1865;
  }
  while ( !v885 );
  v1886 = v3813;
  if ( v1854 == 7 )
  {
    v1887 = (int)Src;
    do
    {
      *(_DWORD *)(v1886 + 40) |= 1u;
      v1886 += 48LL;
      --v1887;
    }
    while ( v1887 );
  }
  v1888 = HalExtensionList;
  v1889 = 0;
  v4007 = v1858;
  v3814 = *(_QWORD *)HalExtensionList;
  if ( (*((_DWORD *)v1858 + 612) & 0x40000000) != 0 )
    goto LABEL_2718;
  v1890 = 0;
  if ( !*(_DWORD *)(HalExtensionList + 16) )
    goto LABEL_2718;
  v1891 = v3814;
  do
  {
    if ( !(*((__int64 (__fastcall **)(ULONG_PTR, _BYTE *, _QWORD))v1858 + 76))(
            v1891 + ((__int64)*(int *)(v1891 + 4LL * v1890) >> 4),
            v4044,
            0LL) )
      ++v1889;
    ++v1890;
  }
  while ( v1890 < *(_DWORD *)(v1888 + 16) );
  if ( !v1889 )
  {
LABEL_2718:
    v4007 = v1858;
    _disable();
    if ( !(_BYTE)KdDebuggerNotPresent )
    {
      while ( 1 )
        ;
    }
    _enable();
    _disable();
    _enable();
    v1916 = *((unsigned int *)v1858 + 505);
    v1917 = v1916 + 48;
    if ( (unsigned int)(v1916 + 48) <= *((_DWORD *)v1858 + 647) )
    {
      v1918 = v1858;
      *((_DWORD *)v1858 + 505) = v1917;
    }
    else
    {
      v1918 = (_BYTE *)sub_140B11020(v1858, v1917, *((unsigned int *)v1858 + 585));
      if ( !v1918 )
        return 0;
      v1919 = *((_DWORD *)v1858 + 612);
      if ( (v1919 & 4) == 0 )
      {
        v1920 = *((_DWORD *)v1858 + 505);
        v1921 = *((_QWORD *)v1858 + 249);
        v1922 = (v1919 & 0x20000000) != 0 ? *((_DWORD *)v1858 + 585) : 0;
        if ( v1920 >= 8 )
        {
          v1923 = (unsigned __int64)v1920 >> 3;
          do
          {
            *(_QWORD *)v1858 = 0LL;
            v1920 -= 8;
            v1858 += 8;
            --v1923;
          }
          while ( v1923 );
        }
        for ( ; v1920; --v1920 )
          *v1858++ = 0;
        v1924 = *((_DWORD *)v1918 + 585);
        *((_DWORD *)v1918 + 585) = v1922;
        if ( v1922 == 3 )
        {
          (*((void (__fastcall **)(__int64))v1918 + 109))(v1921);
        }
        else if ( (*((_DWORD *)v1918 + 612) & 0x10000000) != 0 || !v1922 )
        {
          (*((void (__fastcall **)(__int64))v1918 + 31))(v1921);
        }
        else
        {
          (*((void (__fastcall **)(__int64, _QWORD))v1918 + 69))(v1921 - 8, *(_QWORD *)(v1921 - 8));
        }
        *((_DWORD *)v1918 + 585) = v1924;
      }
      *((_DWORD *)v1918 + 612) &= ~4u;
    }
    ++*((_DWORD *)v1918 + 515);
    v1925 = &v1918[v1916];
    v1926 = 48;
    v1927 = v1925;
    v1928 = 6LL;
    do
    {
      *v1927 = 0LL;
      v1926 -= 8;
      ++v1927;
      --v1928;
    }
    while ( v1928 );
    for ( ; v1926; --v1926 )
    {
      *(_BYTE *)v1927 = 0;
      v1927 = (_QWORD *)((char *)v1927 + 1);
    }
    *(_DWORD *)v1925 = 36;
    *((_QWORD *)v1925 + 1) = &xmmword_140E00030;
    v1929 = &xmmword_140E00030;
    *((_DWORD *)v1925 + 4) = 24;
    *((_DWORD *)v1918 + 522) += 24;
    v1930 = *((_DWORD *)v1918 + 517);
    v1931 = *((_QWORD *)v1918 + 259);
    _mm_prefetch((const char *)&xmmword_140E00030, 0);
    v1932 = 3LL;
    LODWORD(v1933) = 24;
    do
    {
      v1933 = (unsigned int)(v1933 - 8);
      v1931 = __ROL8__(*(_QWORD *)v1929 ^ v1931, v1930);
      v1929 = (__int128 *)((char *)v1929 + 8);
      --v1932;
    }
    while ( v1932 );
    if ( (_DWORD)v1933 )
    {
      do
      {
        v1934 = *(unsigned __int8 *)v1929;
        v1929 = (__int128 *)((char *)v1929 + 1);
        v1931 = __ROL8__(v1934 ^ v1931, v1930);
        v885 = (_DWORD)v1933 == 1;
        v1933 = (unsigned int)(v1933 - 1);
      }
      while ( !v885 );
    }
    for ( i29 = v1931; ; v1931 = (unsigned int)i29 ^ (unsigned int)v1931 )
    {
      i29 >>= 31;
      if ( !i29 )
        break;
    }
    LODWORD(v1931) = v1931 & 0x7FFFFFFF;
    v1936 = v1925 + 24;
    *((_DWORD *)v1925 + 5) = v1931;
    v1937 = -1073741275;
    *((_DWORD *)v1918 + 522) += 24;
    v1938 = PsHalImageBase;
    v1939 = *((_QWORD *)v1918 + 167);
    v1940 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    (*((void (__fastcall **)(__int64, unsigned __int64, __int64, __int64))v1918 + 42))(
      v1939,
      v1931,
      v1933,
      4294967288LL);
    v1941 = (unsigned int *)**((_QWORD **)v1918 + 195);
    v1942 = (unsigned __int64)(v1941 + 4);
    while ( *(_QWORD *)(v1942 + 8) != v1938 )
    {
      v1942 += 24LL;
      if ( v1942 >= (unsigned __int64)&v1941[6 * *v1941 + 4] )
        goto LABEL_2753;
    }
    v1937 = 0;
    *v1936 = *(_OWORD *)v1942;
    *((_QWORD *)v1925 + 5) = *(_QWORD *)(v1942 + 16);
LABEL_2753:
    (*((void (__fastcall **)(_QWORD))v1918 + 50))(*((_QWORD *)v1918 + 167));
    __writecr8(v1940);
    if ( v1937 < 0 )
    {
      v1943 = 24;
      v1944 = 3LL;
      do
      {
        *(_QWORD *)v1936 = 0LL;
        v1943 -= 8;
        v1936 = (_OWORD *)((char *)v1936 + 8);
        --v1944;
      }
      while ( v1944 );
      for ( ; v1943; --v1943 )
      {
        *(_BYTE *)v1936 = 0;
        v1936 = (_OWORD *)((char *)v1936 + 1);
      }
      *((_QWORD *)v1925 + 3) = 1LL;
    }
    v4007 = v1918;
    _disable();
    if ( !(_BYTE)KdDebuggerNotPresent )
    {
      while ( 1 )
        ;
    }
    _enable();
    v1945 = *((unsigned int *)v1918 + 505);
    v1946 = v1945 + 48;
    if ( (unsigned int)(v1945 + 48) <= *((_DWORD *)v1918 + 647) )
    {
      v1947 = v1918;
      *((_DWORD *)v1918 + 505) = v1946;
    }
    else
    {
      v1947 = (_BYTE *)sub_140B11020(v1918, v1946, *((unsigned int *)v1918 + 585));
      if ( !v1947 )
        return 0;
      v1948 = *((_DWORD *)v1918 + 612);
      if ( (v1948 & 4) == 0 )
      {
        v1949 = *((_DWORD *)v1918 + 505);
        v1950 = *((_QWORD *)v1918 + 249);
        v1951 = (v1948 & 0x20000000) != 0 ? *((_DWORD *)v1918 + 585) : 0;
        if ( v1949 >= 8 )
        {
          v1952 = (unsigned __int64)v1949 >> 3;
          do
          {
            *(_QWORD *)v1918 = 0LL;
            v1949 -= 8;
            v1918 += 8;
            --v1952;
          }
          while ( v1952 );
        }
        for ( ; v1949; --v1949 )
          *v1918++ = 0;
        v1953 = *((_DWORD *)v1947 + 585);
        *((_DWORD *)v1947 + 585) = v1951;
        if ( v1951 == 3 )
        {
          (*((void (__fastcall **)(__int64))v1947 + 109))(v1950);
        }
        else if ( (*((_DWORD *)v1947 + 612) & 0x10000000) != 0 || !v1951 )
        {
          (*((void (__fastcall **)(__int64))v1947 + 31))(v1950);
        }
        else
        {
          (*((void (__fastcall **)(__int64, _QWORD))v1947 + 69))(v1950 - 8, *(_QWORD *)(v1950 - 8));
        }
        *((_DWORD *)v1947 + 585) = v1953;
      }
      *((_DWORD *)v1947 + 612) &= ~4u;
    }
    ++*((_DWORD *)v1947 + 515);
    v1954 = &v1947[v1945];
    v1955 = 48;
    v1956 = &v1947[v1945];
    v1957 = 6LL;
    do
    {
      *v1956 = 0LL;
      v1955 -= 8;
      ++v1956;
      --v1957;
    }
    while ( v1957 );
    for ( ; v1955; --v1955 )
    {
      *(_BYTE *)v1956 = 0;
      v1956 = (_QWORD *)((char *)v1956 + 1);
    }
    *(_DWORD *)v1954 = 4;
    *((_QWORD *)v1954 + 1) = 0LL;
    *((_DWORD *)v1954 + 4) = 0;
    v1958 = *((_QWORD *)v1947 + 259);
    for ( i30 = v1958; ; LODWORD(v1958) = i30 ^ v1958 )
    {
      i30 >>= 31;
      if ( !i30 )
        break;
    }
    v4007 = v1947;
    *((_DWORD *)v1954 + 5) = v1958 & 0x7FFFFFFF;
    _disable();
    if ( !(_BYTE)KdDebuggerNotPresent )
    {
      while ( 1 )
        ;
    }
    _enable();
    v1960 = *((unsigned int *)v1947 + 505);
    v1961 = v1960 + 48;
    if ( (unsigned int)(v1960 + 48) <= *((_DWORD *)v1947 + 647) )
    {
      v1962 = v1947;
      *((_DWORD *)v1947 + 505) = v1961;
    }
    else
    {
      v1962 = (_BYTE *)sub_140B11020(v1947, v1961, *((unsigned int *)v1947 + 585));
      if ( !v1962 )
        return 0;
      v1963 = *((_DWORD *)v1947 + 612);
      if ( (v1963 & 4) == 0 )
      {
        v1964 = *((_DWORD *)v1947 + 505);
        v1965 = *((_QWORD *)v1947 + 249);
        v1966 = (v1963 & 0x20000000) != 0 ? *((_DWORD *)v1947 + 585) : 0;
        if ( v1964 >= 8 )
        {
          v1967 = (unsigned __int64)v1964 >> 3;
          do
          {
            *(_QWORD *)v1947 = 0LL;
            v1964 -= 8;
            v1947 += 8;
            --v1967;
          }
          while ( v1967 );
        }
        for ( ; v1964; --v1964 )
          *v1947++ = 0;
        v1968 = *((_DWORD *)v1962 + 585);
        *((_DWORD *)v1962 + 585) = v1966;
        if ( v1966 == 3 )
        {
          (*((void (__fastcall **)(__int64))v1962 + 109))(v1965);
        }
        else if ( (*((_DWORD *)v1962 + 612) & 0x10000000) != 0 || !v1966 )
        {
          (*((void (__fastcall **)(__int64))v1962 + 31))(v1965);
        }
        else
        {
          (*((void (__fastcall **)(__int64, _QWORD))v1962 + 69))(v1965 - 8, *(_QWORD *)(v1965 - 8));
        }
        *((_DWORD *)v1962 + 585) = v1968;
      }
      *((_DWORD *)v1962 + 612) &= ~4u;
    }
    ++*((_DWORD *)v1962 + 515);
    v1969 = &v1962[v1960];
    v1970 = 48;
    v1971 = &v1962[v1960];
    v1972 = 6LL;
    do
    {
      *v1971 = 0LL;
      v1970 -= 8;
      ++v1971;
      --v1972;
    }
    while ( v1972 );
    for ( ; v1970; --v1970 )
    {
      *(_BYTE *)v1971 = 0;
      v1971 = (_QWORD *)((char *)v1971 + 1);
    }
    *(_DWORD *)v1969 = 5;
    *((_QWORD *)v1969 + 1) = 0LL;
    *((_DWORD *)v1969 + 4) = 0;
    v1973 = *((_QWORD *)v1962 + 259);
    for ( i31 = v1973; ; LODWORD(v1973) = i31 ^ v1973 )
    {
      i31 >>= 31;
      if ( !i31 )
        break;
    }
    v4007 = v1962;
    *((_DWORD *)v1969 + 5) = v1973 & 0x7FFFFFFF;
    _disable();
    if ( !(_BYTE)KdDebuggerNotPresent )
    {
      while ( 1 )
        ;
    }
    _enable();
    v1975 = *((unsigned int *)v1962 + 505);
    v1976 = v1975 + 48;
    if ( (unsigned int)(v1975 + 48) <= *((_DWORD *)v1962 + 647) )
    {
      v1977 = v1962;
      *((_DWORD *)v1962 + 505) = v1976;
    }
    else
    {
      v1977 = (_BYTE *)sub_140B11020(v1962, v1976, *((unsigned int *)v1962 + 585));
      if ( !v1977 )
        return 0;
      v1978 = *((_DWORD *)v1962 + 612);
      if ( (v1978 & 4) == 0 )
      {
        v1979 = *((_DWORD *)v1962 + 505);
        v1980 = *((_QWORD *)v1962 + 249);
        v1981 = (v1978 & 0x20000000) != 0 ? *((_DWORD *)v1962 + 585) : 0;
        if ( v1979 >= 8 )
        {
          v1982 = (unsigned __int64)v1979 >> 3;
          do
          {
            *(_QWORD *)v1962 = 0LL;
            v1979 -= 8;
            v1962 += 8;
            --v1982;
          }
          while ( v1982 );
        }
        for ( ; v1979; --v1979 )
          *v1962++ = 0;
        v1983 = *((_DWORD *)v1977 + 585);
        *((_DWORD *)v1977 + 585) = v1981;
        if ( v1981 == 3 )
        {
          (*((void (__fastcall **)(__int64))v1977 + 109))(v1980);
        }
        else if ( (*((_DWORD *)v1977 + 612) & 0x10000000) != 0 || !v1981 )
        {
          (*((void (__fastcall **)(__int64))v1977 + 31))(v1980);
        }
        else
        {
          (*((void (__fastcall **)(__int64, _QWORD))v1977 + 69))(v1980 - 8, *(_QWORD *)(v1980 - 8));
        }
        *((_DWORD *)v1977 + 585) = v1983;
      }
      *((_DWORD *)v1977 + 612) &= ~4u;
    }
    ++*((_DWORD *)v1977 + 515);
    v1984 = &v1977[v1975];
    v1985 = 48;
    v1986 = &v1977[v1975];
    v1987 = 6LL;
    do
    {
      *v1986 = 0LL;
      v1985 -= 8;
      ++v1986;
      --v1987;
    }
    while ( v1987 );
    for ( ; v1985; --v1985 )
    {
      *(_BYTE *)v1986 = 0;
      v1986 = (_QWORD *)((char *)v1986 + 1);
    }
    *(_DWORD *)v1984 = 25;
    *((_QWORD *)v1984 + 1) = 0LL;
    *((_DWORD *)v1984 + 4) = 0;
    v1988 = *((_QWORD *)v1977 + 259);
    for ( i32 = v1988; ; LODWORD(v1988) = i32 ^ v1988 )
    {
      i32 >>= 31;
      if ( !i32 )
        break;
    }
    v4007 = v1977;
    *((_DWORD *)v1984 + 5) = v1988 & 0x7FFFFFFF;
    v1990 = 0;
    if ( ExpInitializeCallback[0] )
    {
      do
        ++v1990;
      while ( ExpInitializeCallback[2 * v1990] );
    }
    v1991 = *((unsigned int *)v1977 + 505);
    v1992 = 16 * v1990;
    v1993 = v1991 + 48;
    if ( (unsigned int)(v1991 + 48) <= *((_DWORD *)v1977 + 647) )
    {
      v1994 = v1977;
      *((_DWORD *)v1977 + 505) = v1993;
    }
    else
    {
      v1994 = (_BYTE *)sub_140B11020(v1977, v1993, *((unsigned int *)v1977 + 585));
      if ( !v1994 )
        return 0;
      v1995 = *((_DWORD *)v1977 + 612);
      if ( (v1995 & 4) == 0 )
      {
        v1996 = *((_DWORD *)v1977 + 505);
        v1997 = *((_QWORD *)v1977 + 249);
        v1998 = (v1995 & 0x20000000) != 0 ? *((_DWORD *)v1977 + 585) : 0;
        if ( v1996 >= 8 )
        {
          v1999 = (unsigned __int64)v1996 >> 3;
          do
          {
            *(_QWORD *)v1977 = 0LL;
            v1996 -= 8;
            v1977 += 8;
            --v1999;
          }
          while ( v1999 );
        }
        for ( ; v1996; --v1996 )
          *v1977++ = 0;
        v2000 = *((_DWORD *)v1994 + 585);
        *((_DWORD *)v1994 + 585) = v1998;
        if ( v1998 == 3 )
        {
          (*((void (__fastcall **)(__int64))v1994 + 109))(v1997);
        }
        else if ( (*((_DWORD *)v1994 + 612) & 0x10000000) != 0 || !v1998 )
        {
          (*((void (__fastcall **)(__int64))v1994 + 31))(v1997);
        }
        else
        {
          (*((void (__fastcall **)(__int64, _QWORD))v1994 + 69))(v1997 - 8, *(_QWORD *)(v1997 - 8));
        }
        *((_DWORD *)v1994 + 585) = v2000;
      }
      *((_DWORD *)v1994 + 612) &= ~4u;
    }
    ++*((_DWORD *)v1994 + 515);
    v2001 = &v1994[v1991];
    v2002 = 48;
    HalExtensionList = (ULONG_PTR)&v1994[v1991];
    v2003 = &v1994[v1991];
    v2004 = 6LL;
    do
    {
      *v2003 = 0LL;
      v2002 -= 8;
      ++v2003;
      --v2004;
    }
    while ( v2004 );
    for ( ; v2002; --v2002 )
    {
      *(_BYTE *)v2003 = 0;
      v2003 = (_QWORD *)((char *)v2003 + 1);
    }
    *(_DWORD *)v2001 = 29;
    v2005 = ExpInitializeCallback;
    *((_QWORD *)v2001 + 1) = ExpInitializeCallback;
    v2006 = (const char *)ExpInitializeCallback;
    *((_DWORD *)v2001 + 4) = v1992;
    *((_DWORD *)v1994 + 522) += v1992;
    v2007 = *((_DWORD *)v1994 + 517);
    v2008 = *((_QWORD *)v1994 + 259);
    v2009 = &ExpInitializeCallback[v1992 / 8];
    if ( ExpInitializeCallback < v2009 )
    {
      do
      {
        _mm_prefetch(v2006, 0);
        v2006 += 64;
      }
      while ( v2006 < (const char *)v2009 );
    }
    v2010 = *((_QWORD *)v1994 + 259);
    v2011 = v1992 >> 7;
    if ( v1992 >> 7 )
    {
      do
      {
        v2012 = 8LL;
        do
        {
          v2013 = *v2005 ^ v2010;
          v2014 = v2005 + 1;
          v2015 = *v2014 ^ __ROL8__(v2013, v2007);
          v2005 = v2014 + 1;
          v2010 = __ROL8__(v2015, v2007);
          --v2012;
        }
        while ( v2012 );
        v2016 = (__ROL8__(v2008 ^ ((char *)v2005 - (char *)ExpInitializeCallback), 17) ^ v2008 ^ (unsigned __int64)((char *)v2005 - (char *)ExpInitializeCallback))
              * (unsigned __int128)0x7010008004002001uLL;
        v4045 = *((_QWORD *)&v2016 + 1);
        v2007 = (BYTE8(v2016) ^ (unsigned __int8)(v2016 ^ v2007)) & 0x3F;
        if ( !v2007 )
          LOBYTE(v2007) = 1;
        --v2011;
      }
      while ( v2011 );
      v2001 = (_BYTE *)HalExtensionList;
    }
    v2017 = v1992 & 0x7F;
    if ( v2017 >= 8 )
    {
      v2018 = (unsigned __int64)(v1992 & 0x7F) >> 3;
      do
      {
        v2010 = __ROL8__(*v2005++ ^ v2010, v2007);
        v2017 -= 8;
        --v2018;
      }
      while ( v2018 );
    }
    for ( ; v2017; --v2017 )
    {
      v2019 = *(unsigned __int8 *)v2005;
      v2005 = (__int64 *)((char *)v2005 + 1);
      v2010 = __ROL8__(v2019 ^ v2010, v2007);
    }
    for ( i33 = v2010 >> 31; i33; i33 >>= 31 )
      LODWORD(v2010) = i33 ^ v2010;
    *((_DWORD *)v2001 + 5) = v2010 & 0x7FFFFFFF;
    *((_DWORD *)v1994 + 522) += v1992;
    if ( (*((_DWORD *)v1994 + 612) & 0x40000000) != 0 )
    {
      v2021 = *((unsigned int *)v1994 + 505);
      v2022 = *((unsigned int *)v2001 + 4);
      v2023 = (_QWORD *)*((_QWORD *)v2001 + 1);
      v2024 = v2021 + 48;
      if ( (unsigned int)(v2021 + 48) <= *((_DWORD *)v1994 + 647) )
      {
        v2025 = (__int64)v1994;
        *((_DWORD *)v1994 + 505) = v2024;
      }
      else
      {
        v2025 = sub_140B11020(v1994, v2024, *((unsigned int *)v1994 + 585));
        if ( !v2025 )
          return 0;
        v2026 = *((_DWORD *)v1994 + 612);
        if ( (v2026 & 4) == 0 )
        {
          v2027 = *((_DWORD *)v1994 + 505);
          v2028 = *((_QWORD *)v1994 + 249);
          v2029 = (v2026 & 0x20000000) != 0 ? *((_DWORD *)v1994 + 585) : 0;
          if ( v2027 >= 8 )
          {
            v2030 = (unsigned __int64)v2027 >> 3;
            do
            {
              *(_QWORD *)v1994 = 0LL;
              v2027 -= 8;
              v1994 += 8;
              --v2030;
            }
            while ( v2030 );
          }
          for ( ; v2027; --v2027 )
            *v1994++ = 0;
          v2031 = *(_DWORD *)(v2025 + 2340);
          *(_DWORD *)(v2025 + 2340) = v2029;
          if ( v2029 == 3 )
          {
            (*(void (__fastcall **)(__int64))(v2025 + 872))(v2028);
          }
          else if ( (*(_DWORD *)(v2025 + 2448) & 0x10000000) != 0 || !v2029 )
          {
            (*(void (__fastcall **)(__int64))(v2025 + 248))(v2028);
          }
          else
          {
            (*(void (__fastcall **)(__int64, _QWORD))(v2025 + 552))(v2028 - 8, *(_QWORD *)(v2028 - 8));
          }
          *(_DWORD *)(v2025 + 2340) = v2031;
        }
        *(_DWORD *)(v2025 + 2448) &= ~4u;
      }
      ++*(_DWORD *)(v2025 + 2060);
      v2032 = v2025 + v2021;
      HalExtensionList = v2032;
      v2033 = (_QWORD *)v2032;
      v2034 = 48;
      v2035 = 6LL;
      do
      {
        *v2033 = 0LL;
        v2034 -= 8;
        ++v2033;
        --v2035;
      }
      while ( v2035 );
      for ( ; v2034; --v2034 )
      {
        *(_BYTE *)v2033 = 0;
        v2033 = (_QWORD *)((char *)v2033 + 1);
      }
      *(_DWORD *)v2032 = 32;
      *(_QWORD *)(v2032 + 8) = v2023;
      if ( (_DWORD)v2022 )
        sub_1403EB41C(v2025, v2023, (unsigned int)v2022, v2032 + 24);
      *(_DWORD *)(v2032 + 16) = v2022;
      *(_DWORD *)(v2025 + 2088) += v2022;
      v2036 = v2023;
      v2037 = *(_DWORD *)(v2025 + 2068);
      v2038 = (const char *)v2023;
      v2039 = *(_QWORD *)(v2025 + 2072);
      if ( v2023 < (_QWORD *)((char *)v2023 + v2022) )
      {
        do
        {
          _mm_prefetch(v2038, 0);
          v2038 += 64;
        }
        while ( v2038 < (const char *)v2023 + v2022 );
      }
      v2040 = *(_QWORD *)(v2025 + 2072);
      v2041 = (unsigned int)v2022 >> 7;
      if ( (unsigned int)v2022 >> 7 )
      {
        do
        {
          v2042 = 8LL;
          do
          {
            v2043 = v2036[1] ^ __ROL8__(*v2036 ^ v2040, v2037);
            v2036 += 2;
            v2040 = __ROL8__(v2043, v2037);
            --v2042;
          }
          while ( v2042 );
          v2044 = (__ROL8__(v2039 ^ ((char *)v2036 - (char *)v2023), 17) ^ v2039 ^ (unsigned __int64)((char *)v2036 - (char *)v2023))
                * (unsigned __int128)0x7010008004002001uLL;
          v4046 = *((_QWORD *)&v2044 + 1);
          v2037 = (BYTE8(v2044) ^ (unsigned __int8)(v2044 ^ v2037)) & 0x3F;
          if ( !v2037 )
            LOBYTE(v2037) = 1;
          --v2041;
        }
        while ( v2041 );
        v2032 = HalExtensionList;
      }
      v2045 = v2022 & 0x7F;
      if ( v2045 >= 8 )
      {
        v2046 = (unsigned __int64)(v2022 & 0x7F) >> 3;
        do
        {
          v2040 = __ROL8__(*v2036++ ^ v2040, v2037);
          v2045 -= 8;
          --v2046;
        }
        while ( v2046 );
      }
      for ( ; v2045; --v2045 )
      {
        v2047 = *(unsigned __int8 *)v2036;
        v2036 = (_QWORD *)((char *)v2036 + 1);
        v2040 = __ROL8__(v2047 ^ v2040, v2037);
      }
      for ( i34 = v2040; ; LODWORD(v2040) = i34 ^ v2040 )
      {
        i34 >>= 31;
        if ( !i34 )
          break;
      }
      v1994 = (_BYTE *)v2025;
      *(_DWORD *)(v2032 + 20) = v2040 & 0x7FFFFFFF;
      *(_DWORD *)(v2025 + 2088) += v2022;
      *(_DWORD *)(v2032 + 40) = 0;
    }
    v4007 = v1994;
    if ( !v1994 )
      return 0;
    _disable();
    if ( !(_BYTE)KdDebuggerNotPresent )
    {
      while ( 1 )
        ;
    }
    _enable();
    v2049 = 32;
    v2050 = *((_DWORD *)v1994 + 526);
    v2051 = *((unsigned int *)v1994 + 505);
    v2052 = *((unsigned int *)v1994 + 585);
    LODWORD(Src) = *(_DWORD *)((char *)ObpTypeObjectType + *((_QWORD *)v1994 + 222));
    v2053 = 8 * (_DWORD)Src;
    LODWORD(v3810) = 8 * (_DWORD)Src;
    if ( v2050 != 7 )
      v2049 = 0;
    v2054 = v2051 + 48;
    if ( (unsigned int)(v2051 + 48) <= *((_DWORD *)v1994 + 647) )
    {
      v2055 = v1994;
      *((_DWORD *)v1994 + 505) = v2054;
    }
    else
    {
      v2055 = (_BYTE *)sub_140B11020(v1994, v2054, v2052);
      if ( !v2055 )
        return 0;
      v2056 = *((_DWORD *)v1994 + 612);
      if ( (v2056 & 4) == 0 )
      {
        v2057 = *((_DWORD *)v1994 + 505);
        v2058 = *((_QWORD *)v1994 + 249);
        v2059 = (v2056 & 0x20000000) != 0 ? *((_DWORD *)v1994 + 585) : 0;
        if ( v2057 >= 8 )
        {
          v2060 = (unsigned __int64)v2057 >> 3;
          do
          {
            *(_QWORD *)v1994 = 0LL;
            v2057 -= 8;
            v1994 += 8;
            --v2060;
          }
          while ( v2060 );
        }
        for ( ; v2057; --v2057 )
          *v1994++ = 0;
        v2061 = *((_DWORD *)v2055 + 585);
        *((_DWORD *)v2055 + 585) = v2059;
        if ( v2059 == 3 )
        {
          (*((void (__fastcall **)(__int64))v2055 + 109))(v2058);
        }
        else if ( (*((_DWORD *)v2055 + 612) & 0x10000000) != 0 || !v2059 )
        {
          (*((void (__fastcall **)(__int64))v2055 + 31))(v2058);
        }
        else
        {
          (*((void (__fastcall **)(__int64, _QWORD))v2055 + 69))(v2058 - 8, *(_QWORD *)(v2058 - 8));
        }
        *((_DWORD *)v2055 + 585) = v2061;
      }
      *((_DWORD *)v2055 + 612) &= ~4u;
    }
    v2062 = &v2055[v2051];
    ++*((_DWORD *)v2055 + 515);
    v2063 = v2062;
    HalExtensionList = (ULONG_PTR)v2062;
    v2064 = 48;
    v2065 = 6LL;
    do
    {
      *v2063 = 0LL;
      v2064 -= 8;
      ++v2063;
      --v2065;
    }
    while ( v2065 );
    for ( ; v2064; --v2064 )
    {
      *(_BYTE *)v2063 = 0;
      v2063 = (_QWORD *)((char *)v2063 + 1);
    }
    *(_DWORD *)v2062 = v2049;
    *((_QWORD *)v2062 + 1) = ObpObjectTypes;
    if ( v2050 == 7 && v2053 )
      sub_1403EB41C(v2055, ObpObjectTypes, v2053, v2062 + 24);
    *((_DWORD *)v2062 + 4) = v2053;
    v2066 = ObpObjectTypes;
    *((_DWORD *)v2055 + 522) += v2053;
    v2067 = (const char *)ObpObjectTypes;
    v2068 = *((_DWORD *)v2055 + 517);
    v2069 = *((_QWORD *)v2055 + 259);
    v2070 = (__int64 *)((char *)ObpObjectTypes + v2053);
    if ( ObpObjectTypes < v2070 )
    {
      do
      {
        _mm_prefetch(v2067, 0);
        v2067 += 64;
      }
      while ( v2067 < (const char *)v2070 );
    }
    v2071 = *((_QWORD *)v2055 + 259);
    v2072 = v2053 >> 7;
    if ( v2053 >> 7 )
    {
      do
      {
        v2073 = 8LL;
        do
        {
          v2074 = v2066[1] ^ __ROL8__(*v2066 ^ v2071, v2068);
          v2066 += 2;
          v2071 = __ROL8__(v2074, v2068);
          --v2073;
        }
        while ( v2073 );
        v2075 = (__ROL8__(v2069 ^ ((char *)v2066 - (char *)ObpObjectTypes), 17) ^ v2069 ^ (unsigned __int64)((char *)v2066 - (char *)ObpObjectTypes))
              * (unsigned __int128)0x7010008004002001uLL;
        v4047 = *((_QWORD *)&v2075 + 1);
        v2068 = (BYTE8(v2075) ^ (unsigned __int8)(v2075 ^ v2068)) & 0x3F;
        if ( !v2068 )
          LOBYTE(v2068) = 1;
        --v2072;
      }
      while ( v2072 );
      v2062 = (_BYTE *)HalExtensionList;
      v2053 = v3810;
    }
    v2076 = v2053 & 0x7F;
    if ( v2076 >= 8 )
    {
      v2077 = (unsigned __int64)(v2053 & 0x7F) >> 3;
      do
      {
        v2071 = __ROL8__(*v2066++ ^ v2071, v2068);
        v2076 -= 8;
        --v2077;
      }
      while ( v2077 );
    }
    for ( ; v2076; --v2076 )
    {
      v2078 = *(unsigned __int8 *)v2066;
      v2066 = (__int64 *)((char *)v2066 + 1);
      v2071 = __ROL8__(v2078 ^ v2071, v2068);
    }
    for ( i35 = v2071 >> 31; i35; i35 >>= 31 )
      LODWORD(v2071) = i35 ^ v2071;
    LODWORD(v3811) = 0;
    *((_DWORD *)v2062 + 5) = v2071 & 0x7FFFFFFF;
    *((_DWORD *)v2055 + 522) += v2053;
    v2080 = (unsigned int)Src;
    v2081 = *((_DWORD *)v2055 + 452);
    v2082 = *((_DWORD *)v2055 + 454);
    LODWORD(v3810) = v2081;
    LODWORD(v3809) = v2082;
    if ( (_DWORD)Src )
    {
      do
      {
        v2083 = ObpObjectTypes[(unsigned int)i35];
        if ( v2083 )
        {
          if ( (*(_BYTE *)(v2083 - 48 + 26) & 2) != 0 )
          {
            v2084 = v2083 - 48 - ObpInfoMaskToOffset[*(_BYTE *)(v2083 - 48 + 26) & 3];
            if ( v2084 )
            {
              v2085 = *(unsigned __int16 *)(v2084 + 8);
              if ( (_WORD)v2085 )
              {
                if ( *(_BYTE *)(v2083 + 40) != v2055[1824] )
                {
                  v2086 = *((unsigned int *)v2055 + 505);
                  v2087 = *((unsigned int *)v2055 + 585);
                  LODWORD(v3817) = v2085 + 26;
                  v2088 = v2086 + ((v2085 + 33) & 0xFFFFFFF8) + 48;
                  v2089 = (_QWORD *)(v2083 + v2081);
                  if ( v2088 <= *((_DWORD *)v2055 + 647) )
                  {
                    v2090 = v2055;
                    *((_DWORD *)v2055 + 505) = v2088;
                  }
                  else
                  {
                    v2090 = (_BYTE *)sub_140B11020(v2055, v2088, v2087);
                    if ( !v2090 )
                      return 0;
                    v2091 = *((_DWORD *)v2055 + 612);
                    if ( (v2091 & 4) == 0 )
                    {
                      v2092 = *((_DWORD *)v2055 + 505);
                      v2093 = *((_QWORD *)v2055 + 249);
                      v2094 = (v2091 & 0x20000000) != 0 ? *((_DWORD *)v2055 + 585) : 0;
                      if ( v2092 >= 8 )
                      {
                        v2095 = (unsigned __int64)v2092 >> 3;
                        do
                        {
                          *(_QWORD *)v2055 = 0LL;
                          v2092 -= 8;
                          v2055 += 8;
                          --v2095;
                        }
                        while ( v2095 );
                      }
                      for ( ; v2092; --v2092 )
                        *v2055++ = 0;
                      v2096 = *((_DWORD *)v2090 + 585);
                      *((_DWORD *)v2090 + 585) = v2094;
                      if ( v2094 == 3 )
                      {
                        (*((void (__fastcall **)(__int64))v2090 + 109))(v2093);
                      }
                      else if ( (*((_DWORD *)v2090 + 612) & 0x10000000) != 0 || !v2094 )
                      {
                        (*((void (__fastcall **)(__int64))v2090 + 31))(v2093);
                      }
                      else
                      {
                        (*((void (__fastcall **)(__int64, _QWORD))v2090 + 69))(v2093 - 8, *(_QWORD *)(v2093 - 8));
                      }
                      *((_DWORD *)v2090 + 585) = v2096;
                    }
                    *((_DWORD *)v2090 + 612) &= ~4u;
                    v2082 = v3809;
                  }
                  v2097 = (ULONG_PTR)&v2090[v2086];
                  ++*((_DWORD *)v2090 + 515);
                  v2098 = &v2090[v2086];
                  v3814 = (ULONG_PTR)&v2090[v2086];
                  v2099 = 48;
                  v2100 = 6LL;
                  do
                  {
                    *v2098 = 0LL;
                    v2099 -= 8;
                    ++v2098;
                    --v2100;
                  }
                  while ( v2100 );
                  for ( ; v2099; --v2099 )
                  {
                    *(_BYTE *)v2098 = 0;
                    v2098 = (_QWORD *)((char *)v2098 + 1);
                  }
                  *(_DWORD *)v2097 = 8;
                  v2101 = v2089;
                  *(_QWORD *)(v2097 + 8) = v2089;
                  v2102 = (const char *)v2089;
                  *(_DWORD *)(v2097 + 16) = v2082;
                  *((_DWORD *)v2090 + 522) += v2082;
                  v2103 = *((_DWORD *)v2090 + 517);
                  v2104 = *((_QWORD *)v2090 + 259);
                  v2105 = (unsigned __int64)v2089 + v2082;
                  if ( (unsigned __int64)v2089 < v2105 )
                  {
                    do
                    {
                      _mm_prefetch(v2102, 0);
                      v2102 += 64;
                    }
                    while ( (unsigned __int64)v2102 < v2105 );
                  }
                  v2106 = v2082 >> 7;
                  v2107 = *((_QWORD *)v2090 + 259);
                  if ( v2106 )
                  {
                    do
                    {
                      v2108 = 8LL;
                      do
                      {
                        v2109 = v2101[1] ^ __ROL8__(*v2101 ^ v2107, v2103);
                        v2101 += 2;
                        v2107 = __ROL8__(v2109, v2103);
                        --v2108;
                      }
                      while ( v2108 );
                      v2110 = (__ROL8__(v2104 ^ ((char *)v2101 - (char *)v2089), 17) ^ v2104 ^ (unsigned __int64)((char *)v2101 - (char *)v2089))
                            * (unsigned __int128)0x7010008004002001uLL;
                      v4048 = *((_QWORD *)&v2110 + 1);
                      v2103 = (BYTE8(v2110) ^ (unsigned __int8)(v2110 ^ v2103)) & 0x3F;
                      if ( !v2103 )
                        LOBYTE(v2103) = 1;
                      --v2106;
                    }
                    while ( v2106 );
                    v2097 = v3814;
                  }
                  v2111 = v3809;
                  v2112 = v3809 & 0x7F;
                  if ( v2112 >= 8 )
                  {
                    v2113 = (v3809 & 0x7F) >> 3;
                    do
                    {
                      v2107 = __ROL8__(*v2101++ ^ v2107, v2103);
                      v2112 -= 8;
                      --v2113;
                    }
                    while ( v2113 );
                  }
                  for ( ; v2112; --v2112 )
                  {
                    v2114 = *(unsigned __int8 *)v2101;
                    v2101 = (_QWORD *)((char *)v2101 + 1);
                    v2107 = __ROL8__(v2114 ^ v2107, v2103);
                  }
                  for ( i36 = v2107; ; LODWORD(v2107) = i36 ^ v2107 )
                  {
                    i36 >>= 31;
                    if ( !i36 )
                      break;
                  }
                  v2116 = v3817;
                  v2117 = 26;
                  *(_DWORD *)(v2097 + 20) = v2107 & 0x7FFFFFFF;
                  v2118 = (_QWORD *)(v2097 + 48);
                  *((_DWORD *)v2090 + 522) += v2111;
                  v2055 = v2090;
                  v2119 = *((_QWORD *)v2090 + 223);
                  *(_QWORD *)(v2097 + 24) = v2083;
                  v2120 = 3LL;
                  *(_WORD *)(v2097 + 32) = v2116;
                  *(_WORD *)(v2097 + 34) = *(_WORD *)(v2083 + v2119 + *((_QWORD *)v2090 + 229));
                  v2121 = L"\\ObjectTypes\\";
                  do
                  {
                    v2117 -= 8;
                    *v2118 = *(_QWORD *)v2121;
                    v2121 += 4;
                    ++v2118;
                    --v2120;
                  }
                  while ( v2120 );
                  for ( ; v2117; --v2117 )
                  {
                    v2122 = *(_BYTE *)v2121;
                    v2121 = (const wchar_t *)((char *)v2121 + 1);
                    *(_BYTE *)v2118 = v2122;
                    v2118 = (_QWORD *)((char *)v2118 + 1);
                  }
                  v2123 = *(unsigned __int16 *)(v2084 + 8);
                  v2124 = (char *)(v2097 + 74);
                  v2125 = *(_QWORD **)(v2084 + 16);
                  if ( v2123 >= 8 )
                  {
                    v2126 = (unsigned __int64)*(unsigned __int16 *)(v2084 + 8) >> 3;
                    do
                    {
                      v2123 -= 8;
                      *(_QWORD *)v2124 = *v2125++;
                      v2124 += 8;
                      --v2126;
                    }
                    while ( v2126 );
                  }
                  if ( v2123 )
                  {
                    v2127 = v2124 - (char *)v2125;
                    do
                    {
                      *((_BYTE *)v2125 + v2127) = *(_BYTE *)v2125;
                      v2125 = (_QWORD *)((char *)v2125 + 1);
                      --v2123;
                    }
                    while ( v2123 );
                  }
                  if ( (*((_DWORD *)v2090 + 612) & 0x40000000) != 0 )
                  {
                    v2128 = *((unsigned int *)v2090 + 505);
                    v2129 = *(unsigned int *)(v2097 + 16);
                    v2130 = *(_QWORD **)(v2097 + 8);
                    v2131 = v2128 + 48;
                    if ( (unsigned int)(v2128 + 48) <= *((_DWORD *)v2090 + 647) )
                    {
                      *((_DWORD *)v2090 + 505) = v2131;
                    }
                    else
                    {
                      v2055 = (_BYTE *)sub_140B11020(v2090, v2131, *((unsigned int *)v2090 + 585));
                      if ( !v2055 )
                        return 0;
                      v2132 = *((_DWORD *)v2090 + 612);
                      if ( (v2132 & 4) == 0 )
                      {
                        v2133 = *((_DWORD *)v2090 + 505);
                        v2134 = *((_QWORD *)v2090 + 249);
                        v2135 = (v2132 & 0x20000000) != 0 ? *((_DWORD *)v2090 + 585) : 0;
                        if ( v2133 >= 8 )
                        {
                          v2136 = (unsigned __int64)v2133 >> 3;
                          do
                          {
                            *(_QWORD *)v2090 = 0LL;
                            v2133 -= 8;
                            v2090 += 8;
                            --v2136;
                          }
                          while ( v2136 );
                        }
                        for ( ; v2133; --v2133 )
                          *v2090++ = 0;
                        v2137 = *((_DWORD *)v2055 + 585);
                        *((_DWORD *)v2055 + 585) = v2135;
                        if ( v2135 == 3 )
                        {
                          (*((void (__fastcall **)(__int64))v2055 + 109))(v2134);
                        }
                        else if ( (*((_DWORD *)v2055 + 612) & 0x10000000) != 0 || !v2135 )
                        {
                          (*((void (__fastcall **)(__int64))v2055 + 31))(v2134);
                        }
                        else
                        {
                          (*((void (__fastcall **)(__int64, _QWORD))v2055 + 69))(v2134 - 8, *(_QWORD *)(v2134 - 8));
                        }
                        *((_DWORD *)v2055 + 585) = v2137;
                      }
                      *((_DWORD *)v2055 + 612) &= ~4u;
                    }
                    v2138 = &v2055[v2128];
                    ++*((_DWORD *)v2055 + 515);
                    v2139 = v2138;
                    HalExtensionList = (ULONG_PTR)v2138;
                    v2140 = 48;
                    v2141 = 6LL;
                    do
                    {
                      *v2139 = 0LL;
                      v2140 -= 8;
                      ++v2139;
                      --v2141;
                    }
                    while ( v2141 );
                    for ( ; v2140; --v2140 )
                    {
                      *(_BYTE *)v2139 = 0;
                      v2139 = (_QWORD *)((char *)v2139 + 1);
                    }
                    *(_DWORD *)v2138 = 32;
                    *((_QWORD *)v2138 + 1) = v2130;
                    if ( (_DWORD)v2129 )
                      sub_1403EB41C(v2055, v2130, (unsigned int)v2129, v2138 + 24);
                    *((_DWORD *)v2138 + 4) = v2129;
                    *((_DWORD *)v2055 + 522) += v2129;
                    v2142 = v2130;
                    v2143 = *((_DWORD *)v2055 + 517);
                    v2144 = (const char *)v2130;
                    v2145 = *((_QWORD *)v2055 + 259);
                    if ( v2130 < (_QWORD *)((char *)v2130 + v2129) )
                    {
                      do
                      {
                        _mm_prefetch(v2144, 0);
                        v2144 += 64;
                      }
                      while ( v2144 < (const char *)v2130 + v2129 );
                    }
                    v2146 = *((_QWORD *)v2055 + 259);
                    v2147 = (unsigned int)v2129 >> 7;
                    if ( (unsigned int)v2129 >> 7 )
                    {
                      do
                      {
                        v2148 = 8LL;
                        do
                        {
                          v2149 = v2142[1] ^ __ROL8__(*v2142 ^ v2146, v2143);
                          v2142 += 2;
                          v2146 = __ROL8__(v2149, v2143);
                          --v2148;
                        }
                        while ( v2148 );
                        v2150 = (__ROL8__(v2145 ^ ((char *)v2142 - (char *)v2130), 17) ^ v2145 ^ (unsigned __int64)((char *)v2142 - (char *)v2130))
                              * (unsigned __int128)0x7010008004002001uLL;
                        v4049 = *((_QWORD *)&v2150 + 1);
                        v2143 = (BYTE8(v2150) ^ (unsigned __int8)(v2150 ^ v2143)) & 0x3F;
                        if ( !v2143 )
                          LOBYTE(v2143) = 1;
                        --v2147;
                      }
                      while ( v2147 );
                      v2138 = (_BYTE *)HalExtensionList;
                    }
                    v2151 = v2129 & 0x7F;
                    if ( v2151 >= 8 )
                    {
                      v2152 = (unsigned __int64)(v2129 & 0x7F) >> 3;
                      do
                      {
                        v2146 = __ROL8__(*v2142++ ^ v2146, v2143);
                        v2151 -= 8;
                        --v2152;
                      }
                      while ( v2152 );
                    }
                    for ( ; v2151; --v2151 )
                    {
                      v2153 = *(unsigned __int8 *)v2142;
                      v2142 = (_QWORD *)((char *)v2142 + 1);
                      v2146 = __ROL8__(v2153 ^ v2146, v2143);
                    }
                    for ( i37 = v2146; ; LODWORD(v2146) = i37 ^ v2146 )
                    {
                      i37 >>= 31;
                      if ( !i37 )
                        break;
                    }
                    *((_DWORD *)v2138 + 5) = v2146 & 0x7FFFFFFF;
                    *((_DWORD *)v2055 + 522) += v2129;
                    *((_DWORD *)v2138 + 10) = 1;
                  }
                  v2080 = (unsigned int)Src;
                  v2081 = v3810;
                  v2082 = v3809;
                }
              }
            }
          }
        }
        LODWORD(i35) = v3811 + 1;
        LODWORD(v3811) = i35;
      }
      while ( (unsigned int)i35 < v2080 );
    }
    v4007 = v2055;
    v2155 = *((unsigned int *)v2055 + 505);
    v2156 = v2155 + 48;
    if ( (unsigned int)(v2155 + 48) <= *((_DWORD *)v2055 + 647) )
    {
      v2157 = v2055;
      *((_DWORD *)v2055 + 505) = v2156;
    }
    else
    {
      v2157 = (_BYTE *)sub_140B11020(v2055, v2156, *((unsigned int *)v2055 + 585));
      if ( !v2157 )
        return 0;
      v2158 = *((_DWORD *)v2055 + 612);
      if ( (v2158 & 4) == 0 )
      {
        v2159 = *((_DWORD *)v2055 + 505);
        v2160 = *((_QWORD *)v2055 + 249);
        v2161 = (v2158 & 0x20000000) != 0 ? *((_DWORD *)v2055 + 585) : 0;
        if ( v2159 >= 8 )
        {
          v2162 = (unsigned __int64)v2159 >> 3;
          do
          {
            *(_QWORD *)v2055 = 0LL;
            v2159 -= 8;
            v2055 += 8;
            --v2162;
          }
          while ( v2162 );
        }
        for ( ; v2159; --v2159 )
          *v2055++ = 0;
        v2163 = *((_DWORD *)v2157 + 585);
        *((_DWORD *)v2157 + 585) = v2161;
        if ( v2161 == 3 )
        {
          (*((void (__fastcall **)(__int64))v2157 + 109))(v2160);
        }
        else if ( (*((_DWORD *)v2157 + 612) & 0x10000000) != 0 || !v2161 )
        {
          (*((void (__fastcall **)(__int64))v2157 + 31))(v2160);
        }
        else
        {
          (*((void (__fastcall **)(__int64, _QWORD))v2157 + 69))(v2160 - 8, *(_QWORD *)(v2160 - 8));
        }
        *((_DWORD *)v2157 + 585) = v2163;
      }
      *((_DWORD *)v2157 + 612) &= ~4u;
    }
    ++*((_DWORD *)v2157 + 515);
    v2164 = &v2157[v2155];
    v2165 = 48;
    v2166 = &v2157[v2155];
    v2167 = 6LL;
    do
    {
      *v2166 = 0LL;
      v2165 -= 8;
      ++v2166;
      --v2167;
    }
    while ( v2167 );
    for ( ; v2165; --v2165 )
    {
      *(_BYTE *)v2166 = 0;
      v2166 = (_QWORD *)((char *)v2166 + 1);
    }
    *(_DWORD *)v2164 = 39;
    *((_QWORD *)v2164 + 1) = 0LL;
    *((_DWORD *)v2164 + 4) = 0;
    v2168 = *((_QWORD *)v2157 + 259);
    for ( i38 = v2168; ; LODWORD(v2168) = i38 ^ v2168 )
    {
      i38 >>= 31;
      if ( !i38 )
        break;
    }
    v2170 = Size;
    *((_DWORD *)v2164 + 5) = v2168 & 0x7FFFFFFF;
    v2171 = v3826;
    *((_DWORD *)v2164 + 8) = v3826;
    *((_DWORD *)v2164 + 9) = v2170;
    *((_DWORD *)v2157 + 522) += v2170;
    v2172 = *((_DWORD *)v2157 + 517);
    v2173 = &v2157[v2171];
    v2174 = *((_QWORD *)v2157 + 259);
    v2175 = &v2157[v2171 + v2170];
    v2176 = v2173;
    for ( i39 = v2173; i39 < v2175; i39 += 64 )
      _mm_prefetch(i39, 0);
    v2178 = *((_QWORD *)v2157 + 259);
    v2179 = (unsigned int)v2170 >> 7;
    if ( (unsigned int)v2170 >> 7 )
    {
      do
      {
        v2180 = 8LL;
        do
        {
          v2181 = *((_QWORD *)v2176 + 1) ^ __ROL8__(*(_QWORD *)v2176 ^ v2178, v2172);
          v2176 += 16;
          v2178 = __ROL8__(v2181, v2172);
          --v2180;
        }
        while ( v2180 );
        v2182 = (__ROL8__(v2174 ^ (v2176 - v2173), 17) ^ v2174 ^ (unsigned __int64)(v2176 - v2173))
              * (unsigned __int128)0x7010008004002001uLL;
        v4050 = *((_QWORD *)&v2182 + 1);
        v2172 = (BYTE8(v2182) ^ (unsigned __int8)(v2182 ^ v2172)) & 0x3F;
        if ( !v2172 )
          LOBYTE(v2172) = 1;
        --v2179;
      }
      while ( v2179 );
      LOBYTE(v2170) = Size;
    }
    v2183 = v2170 & 0x7F;
    if ( v2183 >= 8 )
    {
      v2184 = (unsigned __int64)v2183 >> 3;
      do
      {
        v2178 = __ROL8__(*(_QWORD *)v2176 ^ v2178, v2172);
        v2176 += 8;
        v2183 -= 8;
        --v2184;
      }
      while ( v2184 );
    }
    for ( ; v2183; --v2183 )
    {
      v2185 = *(unsigned __int8 *)v2176++;
      v2178 = __ROL8__(v2185 ^ v2178, v2172);
    }
    *((_QWORD *)v2164 + 3) = v2178;
    v885 = (*((_DWORD *)v2157 + 612) & 0x8000000) == 0;
    v4007 = v2157;
    if ( v885 )
    {
      v2186 = *((unsigned int *)v2157 + 505);
      v2187 = *((unsigned int *)v2157 + 585);
      v2188 = 16 * *((_DWORD *)v2157 + 680) + (_DWORD)v2157 + 2728;
      v2189 = 16 * *((_DWORD *)v2157 + 681);
      v2190 = v2188;
      LODWORD(v3810) = v2189;
      v2191 = v2188 - ((_DWORD)v2157 + 2720);
      LODWORD(Src) = v2190 - (_DWORD)v2157;
      v2192 = v2186 + 48;
      if ( (unsigned int)(v2186 + 48) <= *((_DWORD *)v2157 + 647) )
      {
        v2193 = v2157;
        *((_DWORD *)v2157 + 505) = v2192;
      }
      else
      {
        v2193 = (_BYTE *)sub_140B11020(v2157, v2192, v2187);
        if ( !v2193 )
          return 0;
        v2194 = *((_DWORD *)v2157 + 612);
        if ( (v2194 & 4) == 0 )
        {
          v2195 = *((_DWORD *)v2157 + 505);
          v2196 = *((_QWORD *)v2157 + 249);
          v2197 = (v2194 & 0x20000000) != 0 ? *((_DWORD *)v2157 + 585) : 0;
          if ( v2195 >= 8 )
          {
            v2198 = (unsigned __int64)v2195 >> 3;
            do
            {
              *(_QWORD *)v2157 = 0LL;
              v2195 -= 8;
              v2157 += 8;
              --v2198;
            }
            while ( v2198 );
          }
          for ( ; v2195; --v2195 )
            *v2157++ = 0;
          v2199 = *((_DWORD *)v2193 + 585);
          *((_DWORD *)v2193 + 585) = v2197;
          if ( v2197 == 3 )
          {
            (*((void (__fastcall **)(__int64))v2193 + 109))(v2196);
          }
          else if ( (*((_DWORD *)v2193 + 612) & 0x10000000) != 0 || !v2197 )
          {
            (*((void (__fastcall **)(__int64))v2193 + 31))(v2196);
          }
          else
          {
            (*((void (__fastcall **)(__int64, _QWORD))v2193 + 69))(v2196 - 8, *(_QWORD *)(v2196 - 8));
          }
          *((_DWORD *)v2193 + 585) = v2199;
        }
        *((_DWORD *)v2193 + 612) &= ~4u;
      }
      v2200 = &v2193[v2186];
      ++*((_DWORD *)v2193 + 515);
      v2201 = &v2193[v2186];
      HalExtensionList = (ULONG_PTR)&v2193[v2186];
      v2202 = 48;
      v2203 = 6LL;
      do
      {
        *v2201 = 0LL;
        v2202 -= 8;
        ++v2201;
        --v2203;
      }
      while ( v2203 );
      for ( ; v2202; --v2202 )
      {
        *(_BYTE *)v2201 = 0;
        v2201 = (_QWORD *)((char *)v2201 + 1);
      }
      *(_DWORD *)v2200 = 40;
      *((_QWORD *)v2200 + 1) = 0LL;
      *((_DWORD *)v2200 + 4) = 0;
      v2204 = *((_QWORD *)v2193 + 259);
      for ( i40 = v2204; ; LODWORD(v2204) = i40 ^ v2204 )
      {
        i40 >>= 31;
        if ( !i40 )
          break;
      }
      *((_DWORD *)v2200 + 5) = v2204 & 0x7FFFFFFF;
      *((_DWORD *)v2200 + 8) = 2720;
      v2206 = v2193 + 2720;
      *((_DWORD *)v2200 + 9) = v2191;
      v2207 = v2193 + 2720;
      *((_DWORD *)v2193 + 522) += v2191;
      v2208 = *((_DWORD *)v2193 + 517);
      v2209 = *((_QWORD *)v2193 + 259);
      v2210 = (unsigned __int64)&v2193[v2191 + 2720];
      if ( (unsigned __int64)(v2193 + 2720) < v2210 )
      {
        do
        {
          _mm_prefetch(v2207, 0);
          v2207 += 64;
        }
        while ( (unsigned __int64)v2207 < v2210 );
      }
      v2211 = *((_QWORD *)v2193 + 259);
      v2212 = v2191 >> 7;
      if ( v2191 >> 7 )
      {
        do
        {
          v2213 = 8LL;
          do
          {
            v2214 = v2206[1] ^ __ROL8__(*v2206 ^ v2211, v2208);
            v2206 += 2;
            v2211 = __ROL8__(v2214, v2208);
            --v2213;
          }
          while ( v2213 );
          v2215 = (__ROL8__(v2209 ^ ((char *)v2206 - (v2193 + 2720)), 17) ^ v2209 ^ (unsigned __int64)((char *)v2206 - (v2193 + 2720)))
                * (unsigned __int128)0x7010008004002001uLL;
          v4051 = *((_QWORD *)&v2215 + 1);
          v2208 = ((unsigned __int8)v2215 ^ (unsigned __int8)(BYTE8(v2215) ^ v2208)) & 0x3F;
          if ( !v2208 )
            LOBYTE(v2208) = 1;
          --v2212;
        }
        while ( v2212 );
        v2200 = (_BYTE *)HalExtensionList;
      }
      v2216 = v2191 & 0x7F;
      if ( v2216 >= 8 )
      {
        v2217 = (unsigned __int64)v2216 >> 3;
        do
        {
          v2211 = __ROL8__(*v2206++ ^ v2211, v2208);
          v2216 -= 8;
          --v2217;
        }
        while ( v2217 );
      }
      for ( ; v2216; --v2216 )
      {
        v2218 = *(unsigned __int8 *)v2206;
        v2206 = (_QWORD *)((char *)v2206 + 1);
        v2211 = __ROL8__(v2218 ^ v2211, v2208);
      }
      *((_QWORD *)v2200 + 3) = v2211;
      v2219 = *((unsigned int *)v2193 + 505);
      v2220 = *((unsigned int *)v2193 + 585);
      v4007 = v2193;
      v2221 = v2219 + 48;
      if ( (unsigned int)(v2219 + 48) <= *((_DWORD *)v2193 + 647) )
      {
        v2222 = (__int64)v2193;
        *((_DWORD *)v2193 + 505) = v2221;
      }
      else
      {
        v2222 = sub_140B11020(v2193, v2221, v2220);
        if ( !v2222 )
          return 0;
        v2223 = *((_DWORD *)v2193 + 612);
        if ( (v2223 & 4) == 0 )
        {
          v2224 = *((_DWORD *)v2193 + 505);
          v2225 = *((_QWORD *)v2193 + 249);
          v2226 = (v2223 & 0x20000000) != 0 ? *((_DWORD *)v2193 + 585) : 0;
          if ( v2224 >= 8 )
          {
            v2227 = (unsigned __int64)v2224 >> 3;
            do
            {
              *(_QWORD *)v2193 = 0LL;
              v2224 -= 8;
              v2193 += 8;
              --v2227;
            }
            while ( v2227 );
          }
          for ( ; v2224; --v2224 )
            *v2193++ = 0;
          v2228 = *(_DWORD *)(v2222 + 2340);
          *(_DWORD *)(v2222 + 2340) = v2226;
          if ( v2226 == 3 )
          {
            (*(void (__fastcall **)(__int64))(v2222 + 872))(v2225);
          }
          else if ( (*(_DWORD *)(v2222 + 2448) & 0x10000000) != 0 || !v2226 )
          {
            (*(void (__fastcall **)(__int64))(v2222 + 248))(v2225);
          }
          else
          {
            (*(void (__fastcall **)(__int64, _QWORD))(v2222 + 552))(v2225 - 8, *(_QWORD *)(v2225 - 8));
          }
          *(_DWORD *)(v2222 + 2340) = v2228;
        }
        *(_DWORD *)(v2222 + 2448) &= ~4u;
      }
      ++*(_DWORD *)(v2222 + 2060);
      v2229 = v2222 + v2219;
      v2230 = 48;
      v2231 = (_QWORD *)(v2222 + v2219);
      v2232 = 6LL;
      do
      {
        *v2231 = 0LL;
        v2230 -= 8;
        ++v2231;
        --v2232;
      }
      while ( v2232 );
      for ( ; v2230; --v2230 )
      {
        *(_BYTE *)v2231 = 0;
        v2231 = (_QWORD *)((char *)v2231 + 1);
      }
      *(_DWORD *)v2229 = 41;
      *(_QWORD *)(v2229 + 8) = 0LL;
      *(_DWORD *)(v2229 + 16) = 0;
      v2233 = *(_QWORD *)(v2222 + 2072);
      for ( i41 = v2233; ; LODWORD(v2233) = i41 ^ v2233 )
      {
        i41 >>= 31;
        if ( !i41 )
          break;
      }
      v2235 = (unsigned int)Src;
      *(_DWORD *)(v2229 + 20) = v2233 & 0x7FFFFFFF;
      *(_DWORD *)(v2229 + 32) = v2235;
      *(_DWORD *)(v2229 + 36) = v2189;
      *(_DWORD *)(v2222 + 2088) += v2189;
      v2236 = (_QWORD *)(v2222 + v2235);
      v2237 = *(_DWORD *)(v2222 + 2068);
      v2238 = v2236;
      v2239 = *(_QWORD *)(v2222 + 2072);
      v2240 = (const char *)(v2222 + v2235);
      v2241 = (unsigned __int64)v2236 + v2189;
      if ( (unsigned __int64)v2236 < v2241 )
      {
        do
        {
          _mm_prefetch(v2240, 0);
          v2240 += 64;
        }
        while ( (unsigned __int64)v2240 < v2241 );
      }
      v2242 = *(_QWORD *)(v2222 + 2072);
      v2243 = v2189 >> 7;
      if ( v2189 >> 7 )
      {
        do
        {
          v2244 = 8LL;
          do
          {
            v2245 = v2238[1] ^ __ROL8__(*v2238 ^ v2242, v2237);
            v2238 += 2;
            v2242 = __ROL8__(v2245, v2237);
            --v2244;
          }
          while ( v2244 );
          v2246 = (__ROL8__(v2239 ^ ((char *)v2238 - (char *)v2236), 17) ^ v2239 ^ (unsigned __int64)((char *)v2238 - (char *)v2236))
                * (unsigned __int128)0x7010008004002001uLL;
          v4052 = *((_QWORD *)&v2246 + 1);
          v2237 = ((unsigned __int8)v2246 ^ (unsigned __int8)(BYTE8(v2246) ^ v2237)) & 0x3F;
          if ( !v2237 )
            LOBYTE(v2237) = 1;
          --v2243;
        }
        while ( v2243 );
        LOBYTE(v2189) = v3810;
      }
      v2247 = v2189 & 0x7F;
      if ( v2247 >= 8 )
      {
        v2248 = (unsigned __int64)v2247 >> 3;
        do
        {
          v2242 = __ROL8__(*v2238++ ^ v2242, v2237);
          v2247 -= 8;
          --v2248;
        }
        while ( v2248 );
      }
      for ( ; v2247; --v2247 )
      {
        v2249 = *(unsigned __int8 *)v2238;
        v2238 = (_QWORD *)((char *)v2238 + 1);
        v2242 = __ROL8__(v2249 ^ v2242, v2237);
      }
      *(_QWORD *)(v2229 + 24) = v2242;
      v4007 = (_BYTE *)v2222;
    }
    HalExtensionList = (ULONG_PTR)v4007;
    v2250 = (unsigned int)(((*((_DWORD *)v4007 + 612) >> 30) & 1) == 0) + 6;
    if ( ((int (__fastcall *)(__int64, __int64, __int64 *, char *))off_140C020E8[0])(37LL, 16LL, &v4145, v3875) < 0 )
      v4146 = 0LL;
    else
      v2250 = (unsigned int)(v4146 + v2250);
    LODWORD(Src) = v3862 & 6;
    if ( (v3862 & 6) == 0 )
    {
      if ( PspPicoProviderRanges )
        LODWORD(v2250) = *(_DWORD *)(PspPicoProviderRanges + 8) + v2250;
      if ( __27 )
        LODWORD(v2250) = *(_DWORD *)(__27 + 8) + v2250;
      v2250 = (unsigned int)(qword_140C06548 + v2250);
    }
    v2251 = __rdtsc();
    v2252 = (__ROR8__(v2251, 3) ^ v2251) * (unsigned __int128)0x7010008004002001uLL;
    v4053 = *((_QWORD *)&v2252 + 1);
    v2253 = ((unsigned __int64)v2252 ^ *((_QWORD *)&v2252 + 1)) % 0xB;
    if ( (unsigned int)v2253 > 5 )
    {
      v2257 = v2253 - 6;
      if ( v2257 )
      {
        v2258 = v2257 - 1;
        if ( v2258 )
        {
          v2259 = v2258 - 1;
          if ( v2259 )
          {
            if ( v2259 == 1 )
            {
              CompressBufferWorkSpaceSize[6] = -1333354875;
              v2256 = __ROR4__(-1333354868, 33);
            }
            else
            {
              v2260 = __rdtsc();
              v2261 = __ROR8__(v2260, 3);
              v4054 = ((v2261 ^ v2260) * (unsigned __int128)0x7010008004002001uLL) >> 64;
              v2262 = (67117057 * (v2261 ^ v2260)) ^ v4054;
              v2256 = ((((((v2262 % 0x1A + 97) << 8) | ((v2262 >> 5)
                                                      - 26
                                                      * ((unsigned int)((1321528399 * (unsigned __int64)(v2262 >> 5)) >> 32) >> 3)
                                                      + 65)) << 8) | ((v2262 >> 10) % 0x1A + 97)) << 8) | ((v2262 >> 15) % 0x1A + 65);
            }
          }
          else
          {
            CompressBufferWorkSpaceSize[7] = 1684422978;
            v2256 = __ROR4__(1684422978, 8);
          }
        }
        else
        {
          CompressBufferWorkSpaceSize[8] = -2100910376;
          v2256 = __ROL4__(-2100910376, 7);
        }
      }
      else
      {
        CompressBufferWorkSpaceSize[9] = 1314342514;
        v2256 = __ROR4__(1314342516, 24);
      }
    }
    else if ( (_DWORD)v2253 == 5 )
    {
      CompressBufferWorkSpaceSize[5] = 680282605;
      v2256 = __ROR4__(680282605, 5);
    }
    else if ( (_DWORD)v2253 )
    {
      v2254 = v2253 - 1;
      if ( v2254 )
      {
        v2255 = v2254 - 1;
        if ( v2255 )
        {
          if ( v2255 == 1 )
          {
            CompressBufferWorkSpaceSize[1] = -1474152136;
            v2256 = __ROR4__(-1474152133, 15);
          }
          else
          {
            CompressBufferWorkSpaceSize[39] = 1728537748;
            v2256 = __ROL4__(1728537748, 4);
          }
        }
        else
        {
          CompressBufferWorkSpaceSize[2] = -2051698419;
          v2256 = __ROR4__(-2051698419, 2);
        }
      }
      else
      {
        CompressBufferWorkSpaceSize[3] = -1297272415;
        v2256 = __ROL4__(-1297272415, 1);
      }
    }
    else
    {
      CompressBufferWorkSpaceSize[4] = -795291432;
      v2256 = __ROR4__(-795291432, 6);
    }
    v3814 = ExAllocatePool2(64LL, 8 * v2250, v2256);
    v2263 = (_QWORD *)v3814;
    if ( !v3814 )
      return 0;
    v2264 = __rdtsc();
    v2265 = (__ROR8__(v2264, 3) ^ v2264) * (unsigned __int128)0x7010008004002001uLL;
    v4055 = *((_QWORD *)&v2265 + 1);
    v2266 = ((unsigned __int64)v2265 ^ *((_QWORD *)&v2265 + 1)) % 0xB;
    if ( (unsigned int)v2266 > 5 )
    {
      v2270 = v2266 - 6;
      if ( v2270 )
      {
        v2271 = v2270 - 1;
        if ( v2271 )
        {
          v2272 = v2271 - 1;
          if ( v2272 )
          {
            if ( v2272 == 1 )
            {
              CompressBufferWorkSpaceSize[16] = -1333354875;
              v2269 = __ROR4__(-1333354868, 33);
            }
            else
            {
              v2273 = __rdtsc();
              v2274 = __ROR8__(v2273, 3);
              v4056 = ((v2274 ^ v2273) * (unsigned __int128)0x7010008004002001uLL) >> 64;
              v2275 = (67117057 * (v2274 ^ v2273)) ^ v4056;
              v2269 = ((((((v2275 % 0x1A + 97) << 8) | ((v2275 >> 5)
                                                      - 26
                                                      * ((unsigned int)((1321528399 * (unsigned __int64)(v2275 >> 5)) >> 32) >> 3)
                                                      + 65)) << 8) | ((v2275 >> 10) % 0x1A + 97)) << 8) | ((v2275 >> 15) % 0x1A + 65);
            }
          }
          else
          {
            CompressBufferWorkSpaceSize[17] = 1684422978;
            v2269 = __ROR4__(1684422978, 8);
          }
        }
        else
        {
          CompressBufferWorkSpaceSize[18] = -2100910376;
          v2269 = __ROL4__(-2100910376, 7);
        }
      }
      else
      {
        CompressBufferWorkSpaceSize[19] = 1314342514;
        v2269 = __ROR4__(1314342516, 24);
      }
    }
    else if ( (_DWORD)v2266 == 5 )
    {
      CompressBufferWorkSpaceSize[15] = 680282605;
      v2269 = __ROR4__(680282605, 5);
    }
    else if ( (_DWORD)v2266 )
    {
      v2267 = v2266 - 1;
      if ( v2267 )
      {
        v2268 = v2267 - 1;
        if ( v2268 )
        {
          if ( v2268 == 1 )
          {
            CompressBufferWorkSpaceSize[11] = -1474152136;
            v2269 = __ROR4__(-1474152133, 15);
          }
          else
          {
            CompressBufferWorkSpaceSize[10] = 1728537748;
            v2269 = __ROL4__(1728537748, 4);
          }
        }
        else
        {
          CompressBufferWorkSpaceSize[12] = -2051698419;
          v2269 = __ROR4__(-2051698419, 2);
        }
      }
      else
      {
        CompressBufferWorkSpaceSize[13] = -1297272415;
        v2269 = __ROL4__(-1297272415, 1);
      }
    }
    else
    {
      CompressBufferWorkSpaceSize[14] = -795291432;
      v2269 = __ROR4__(-795291432, 6);
    }
    v2276 = (_DWORD *)ExAllocatePool2(64LL, 4 * v2250, v2269);
    v3813 = (ULONG_PTR)v2276;
    v2277 = v2276;
    if ( !v2276 )
    {
      v2278 = v2263;
LABEL_3235:
      ExFreePool(P: v2278);
      return 0;
    }
    v2279 = dword_140D815C8;
    v2280 = 1;
    *v2263 = (unsigned int)dword_140D815C8 - 0x88000000000LL;
    *v2276 = 4096 - v2279;
    LODWORD(v3810) = v3862 & 2;
    if ( (v3862 & 2) == 0 )
    {
      v2280 = 2;
      v2263[1] = &InitSafeBootMode;
      v2276[1] = 4;
    }
    v2281 = (int)Src;
    v2282 = v2280;
    v2283 = v2280 + 1;
    v2263[v2282] = &RtlpUnwindHistoryTable;
    v2277[v2282] = 216;
    v2263[v2283] = &xmmword_140E00030;
    v2277[v2283] = 24;
    v2284 = (unsigned int)(v2283 + 1);
    LODWORD(v3809) = v2284;
    if ( v2281 )
    {
      v4058[0] = 0LL;
      v4057 = 0LL;
    }
    else
    {
      MmQueryApiSetSchema(v4058, &v4057);
      v2281 = (int)Src;
      v2263[v2284] = v4058[0];
      v2277[v2284] = 8;
      v2285 = (unsigned int)(v2284 + 1);
      v2263[v2285] = v4057;
      v2286 = HalExtensionList;
      v2277[v2285] = 8;
      v2284 = (unsigned int)(v2285 + 1);
      LODWORD(v3809) = v2284;
      if ( (*(_DWORD *)(v2286 + 2448) & 0x40000000) == 0 )
      {
        v2263[v2284] = *(_QWORD *)v4058[0];
        v2277[v2284] = *v4057;
        v2284 = (unsigned int)(v2284 + 1);
        LODWORD(v3809) = v2284;
      }
    }
    v2287 = 0;
    if ( v4146 )
    {
      v2288 = 0LL;
      do
      {
        v2289 = 2 * v2288;
        ++v2287;
        v2263[v2284] = *(_QWORD *)(v4145 + 8 * v2289);
        v2277[v2284] = *(_DWORD *)(v4145 + 8 * v2289 + 8);
        v2284 = (unsigned int)(v2284 + 1);
        v2288 = v2287;
      }
      while ( v2287 < v4146 );
      LODWORD(v3809) = v2284;
    }
    if ( !v2281 )
    {
      v2290 = (_QWORD *)PspPicoProviderRanges;
      if ( PspPicoProviderRanges )
      {
        v2291 = 0;
        if ( *(_QWORD *)(PspPicoProviderRanges + 8) )
        {
          v2292 = 0LL;
          do
          {
            v2293 = 2 * v2292;
            ++v2291;
            v2263[v2284] = *(_QWORD *)(*v2290 + 8 * v2293);
            v2277[v2284] = *(_DWORD *)(*(_QWORD *)PspPicoProviderRanges + 8 * v2293 + 8);
            v2284 = (unsigned int)(v2284 + 1);
            v2290 = (_QWORD *)PspPicoProviderRanges;
            v2292 = v2291;
          }
          while ( (unsigned __int64)v2291 < *(_QWORD *)(PspPicoProviderRanges + 8) );
          LODWORD(v3809) = v2284;
        }
      }
      v2294 = (_QWORD *)__27;
      if ( __27 )
      {
        v2295 = 0;
        if ( *(_QWORD *)(__27 + 8) )
        {
          v2296 = 0LL;
          do
          {
            v2297 = 2 * v2296;
            ++v2295;
            v2263[v2284] = *(_QWORD *)(*v2294 + 8 * v2297);
            v2277[v2284] = *(_DWORD *)(*(_QWORD *)__27 + 8 * v2297 + 8);
            v2284 = (unsigned int)(v2284 + 1);
            v2294 = (_QWORD *)__27;
            v2296 = v2295;
          }
          while ( (unsigned __int64)v2295 < *(_QWORD *)(__27 + 8) );
          LODWORD(v3809) = v2284;
        }
      }
      v2298 = 0;
      if ( qword_140C06548 )
      {
        v2299 = 0LL;
        do
        {
          v2300 = 2 * v2299;
          ++v2298;
          v2263[v2284] = PspKernelRanges[v2300];
          v2277[v2284] = PspKernelRanges[v2300 + 1];
          v2284 = (unsigned int)(v2284 + 1);
          v2299 = v2298;
        }
        while ( v2298 < (unsigned __int64)qword_140C06548 );
        LODWORD(v3809) = v2284;
      }
    }
    v2301 = v4007;
    if ( (*(_BYTE *)((*((unsigned int *)v4007 + 599) ^ 0xBC2A27DBLL) - 0x88000000000LL) & 2) != 0 )
      *((_DWORD *)v4007 + 505) += 4096;
    v2303 = 32;
    v2304 = *((unsigned int *)v2301 + 505);
    v2305 = *((unsigned int *)v2301 + 585);
    LODWORD(v3811) = *((_DWORD *)v2301 + 526);
    v2302 = v3811;
    if ( (_DWORD)v3811 != 7 )
      v2303 = 0;
    v2306 = v2304 + 48 * v2284;
    LODWORD(v3817) = v2303;
    if ( v2306 <= *((_DWORD *)v2301 + 647) )
    {
      v2307 = v2301;
      v3812 = (unsigned __int64)v2301;
      *((_DWORD *)v2301 + 505) = v2306;
    }
    else
    {
      v2307 = (_BYTE *)sub_140B11020(v2301, v2306, v2305);
      v3812 = (unsigned __int64)v2307;
      if ( !v2307 )
      {
        v2307 = 0LL;
        goto LABEL_3314;
      }
      v2308 = *(_DWORD *)(HalExtensionList + 2448);
      if ( (v2308 & 4) == 0 )
      {
        v2309 = *((_DWORD *)v2301 + 505);
        v2310 = *((_QWORD *)v2301 + 249);
        v2311 = (v2308 & 0x20000000) != 0 ? *((_DWORD *)v2301 + 585) : 0;
        if ( v2309 >= 8 )
        {
          v2312 = (unsigned __int64)v2309 >> 3;
          do
          {
            *(_QWORD *)v2301 = 0LL;
            v2309 -= 8;
            v2301 += 8;
            --v2312;
          }
          while ( v2312 );
        }
        for ( ; v2309; --v2309 )
          *v2301++ = 0;
        v2313 = *((_DWORD *)v2307 + 585);
        *((_DWORD *)v2307 + 585) = v2311;
        if ( v2311 == 3 )
        {
          (*((void (__fastcall **)(__int64))v2307 + 109))(v2310);
        }
        else if ( (*((_DWORD *)v2307 + 612) & 0x10000000) != 0 || !v2311 )
        {
          (*((void (__fastcall **)(__int64))v2307 + 31))(v2310);
        }
        else
        {
          (*((void (__fastcall **)(__int64, _QWORD))v2307 + 69))(v2310 - 8, *(_QWORD *)(v2310 - 8));
        }
        *((_DWORD *)v2307 + 585) = v2313;
      }
      *((_DWORD *)v2307 + 612) &= ~4u;
      v2303 = v3817;
      v2302 = v3811;
    }
    *((_DWORD *)v2307 + 515) += v2284;
    v2314 = &v2307[v2304];
    v2315 = &v2307[v2304];
    HalExtensionList = (ULONG_PTR)&v2307[v2304];
    if ( (_DWORD)v2284 )
    {
      v2316 = v2263;
      v3820 = (unsigned int)v2284;
      v2317 = v2277;
      v3816 = (__int64)v2277;
      do
      {
        v2318 = (unsigned int)*v2317;
        v2319 = 48;
        v2320 = (_QWORD *)*v2316;
        v2321 = v2314;
        LODWORD(v3819) = *v2317;
        v2322 = 6LL;
        do
        {
          *v2321 = 0LL;
          v2319 -= 8;
          ++v2321;
          --v2322;
        }
        while ( v2322 );
        for ( ; v2319; --v2319 )
        {
          *(_BYTE *)v2321 = 0;
          v2321 = (_QWORD *)((char *)v2321 + 1);
        }
        *(_DWORD *)v2314 = v2303;
        *((_QWORD *)v2314 + 1) = v2320;
        if ( v2302 == 7 && (_DWORD)v2318 )
          sub_1403EB41C(v2307, v2320, (unsigned int)v2318, v2314 + 24);
        *((_DWORD *)v2314 + 4) = v2318;
        *((_DWORD *)v2307 + 522) += v2318;
        v2323 = v2320;
        v2324 = *((_DWORD *)v2307 + 517);
        v2325 = (const char *)v2320;
        v2326 = *((_QWORD *)v2307 + 259);
        if ( v2320 < (_QWORD *)((char *)v2320 + v2318) )
        {
          do
          {
            _mm_prefetch(v2325, 0);
            v2325 += 64;
          }
          while ( v2325 < (const char *)v2320 + v2318 );
        }
        v2327 = *((_QWORD *)v2307 + 259);
        v2328 = (unsigned int)v2318 >> 7;
        if ( (unsigned int)v2318 >> 7 )
        {
          do
          {
            v2329 = 8LL;
            do
            {
              v2330 = v2323[1] ^ __ROL8__(*v2323 ^ v2327, v2324);
              v2323 += 2;
              v2327 = __ROL8__(v2330, v2324);
              --v2329;
            }
            while ( v2329 );
            v2331 = (__ROL8__(v2326 ^ ((char *)v2323 - (char *)v2320), 17) ^ v2326 ^ (unsigned __int64)((char *)v2323 - (char *)v2320))
                  * (unsigned __int128)0x7010008004002001uLL;
            v4058[1] = *((_QWORD *)&v2331 + 1);
            v2324 = ((unsigned __int8)v2331 ^ (unsigned __int8)(BYTE8(v2331) ^ v2324)) & 0x3F;
            if ( !v2324 )
              LOBYTE(v2324) = 1;
            --v2328;
          }
          while ( v2328 );
          v2307 = (_BYTE *)v3812;
          LODWORD(v2318) = v3819;
          v2317 = (_DWORD *)v3816;
        }
        v2332 = v2318 & 0x7F;
        if ( v2332 >= 8 )
        {
          v2333 = (unsigned __int64)(v2318 & 0x7F) >> 3;
          do
          {
            v2327 = __ROL8__(*v2323++ ^ v2327, v2324);
            v2332 -= 8;
            --v2333;
          }
          while ( v2333 );
        }
        for ( ; v2332; --v2332 )
        {
          v2334 = *(unsigned __int8 *)v2323;
          v2323 = (_QWORD *)((char *)v2323 + 1);
          v2327 = __ROL8__(v2334 ^ v2327, v2324);
        }
        for ( i42 = v2327 >> 31; i42; i42 >>= 31 )
          LODWORD(v2327) = i42 ^ v2327;
        v2303 = v3817;
        v2302 = v3811;
        ++v2317;
        *((_DWORD *)v2314 + 5) = v2327 & 0x7FFFFFFF;
        ++v2316;
        *((_DWORD *)v2307 + 522) += v2318;
        v2314 += 48;
        v885 = v3820-- == 1;
        v3816 = (__int64)v2317;
      }
      while ( !v885 );
      LODWORD(v2284) = v3809;
      v2277 = (_DWORD *)v3813;
      v2263 = (_QWORD *)v3814;
      v2315 = (_BYTE *)HalExtensionList;
    }
    if ( (_DWORD)v3811 == 7 && (_DWORD)v2284 )
    {
      do
      {
        *((_DWORD *)v2315 + 10) |= 1u;
        v2315 += 48;
        LODWORD(v2284) = v2284 - 1;
      }
      while ( (_DWORD)v2284 );
    }
LABEL_3314:
    v4007 = v2307;
    ExFreePool(P: v2277);
    ExFreePool(P: v2263);
    if ( !v2307 )
      return 0;
    if ( (*((_DWORD *)v2307 + 612) & 0x40000000) != 0 && v4058[0] )
    {
      v2336 = 32;
      v2337 = *((_DWORD *)v2307 + 526);
      v2338 = *((unsigned int *)v2307 + 505);
      v2339 = *(_QWORD **)v4058[0];
      v2340 = (unsigned int)*v4057;
      v2341 = *((unsigned int *)v2307 + 585);
      if ( v2337 != 7 )
        v2336 = 0;
      v2342 = v2338 + 48;
      LODWORD(v3809) = *((_DWORD *)v2307 + 526);
      LODWORD(v3811) = v2336;
      if ( (unsigned int)(v2338 + 48) <= *((_DWORD *)v2307 + 647) )
      {
        v2343 = (__int64)v2307;
        *((_DWORD *)v2307 + 505) = v2342;
      }
      else
      {
        v2343 = sub_140B11020(v2307, v2342, v2341);
        if ( !v2343 )
          return 0;
        v2344 = *((_DWORD *)v2307 + 612);
        if ( (v2344 & 4) == 0 )
        {
          v2345 = *((_DWORD *)v2307 + 505);
          v2346 = *((_QWORD *)v2307 + 249);
          v2347 = (v2344 & 0x20000000) != 0 ? *((_DWORD *)v2307 + 585) : 0;
          if ( v2345 >= 8 )
          {
            v2348 = (unsigned __int64)v2345 >> 3;
            do
            {
              *(_QWORD *)v2307 = 0LL;
              v2345 -= 8;
              v2307 += 8;
              --v2348;
            }
            while ( v2348 );
          }
          for ( ; v2345; --v2345 )
            *v2307++ = 0;
          v2349 = *(_DWORD *)(v2343 + 2340);
          *(_DWORD *)(v2343 + 2340) = v2347;
          if ( v2347 == 3 )
          {
            (*(void (__fastcall **)(__int64))(v2343 + 872))(v2346);
          }
          else if ( (*(_DWORD *)(v2343 + 2448) & 0x10000000) != 0 || !v2347 )
          {
            (*(void (__fastcall **)(__int64))(v2343 + 248))(v2346);
          }
          else
          {
            (*(void (__fastcall **)(__int64, _QWORD))(v2343 + 552))(v2346 - 8, *(_QWORD *)(v2346 - 8));
          }
          v2336 = v3811;
          *(_DWORD *)(v2343 + 2340) = v2349;
        }
        *(_DWORD *)(v2343 + 2448) &= ~4u;
        v2337 = v3809;
      }
      v2350 = v2343 + v2338;
      ++*(_DWORD *)(v2343 + 2060);
      v2351 = (_QWORD *)v2350;
      HalExtensionList = v2350;
      v2352 = 48;
      v2353 = 6LL;
      do
      {
        *v2351 = 0LL;
        v2352 -= 8;
        ++v2351;
        --v2353;
      }
      while ( v2353 );
      for ( ; v2352; --v2352 )
      {
        *(_BYTE *)v2351 = 0;
        v2351 = (_QWORD *)((char *)v2351 + 1);
      }
      *(_DWORD *)v2350 = v2336;
      *(_QWORD *)(v2350 + 8) = v2339;
      if ( v2337 == 7 && (_DWORD)v2340 )
        sub_1403EB41C(v2343, v2339, (unsigned int)v2340, v2350 + 24);
      *(_DWORD *)(v2350 + 16) = v2340;
      *(_DWORD *)(v2343 + 2088) += v2340;
      v2354 = v2339;
      v2355 = *(_DWORD *)(v2343 + 2068);
      v2356 = (const char *)v2339;
      v2357 = *(_QWORD *)(v2343 + 2072);
      if ( v2339 < (_QWORD *)((char *)v2339 + v2340) )
      {
        do
        {
          _mm_prefetch(v2356, 0);
          v2356 += 64;
        }
        while ( v2356 < (const char *)v2339 + v2340 );
      }
      v2358 = *(_QWORD *)(v2343 + 2072);
      v2359 = (unsigned int)v2340 >> 7;
      if ( (unsigned int)v2340 >> 7 )
      {
        do
        {
          v2360 = 8LL;
          do
          {
            v2361 = v2354[1] ^ __ROL8__(*v2354 ^ v2358, v2355);
            v2354 += 2;
            v2358 = __ROL8__(v2361, v2355);
            --v2360;
          }
          while ( v2360 );
          v2362 = __ROL8__(v2357 ^ ((char *)v2354 - (char *)v2339), 17) ^ v2357 ^ ((char *)v2354 - (char *)v2339);
          v4059 = (v2362 * (unsigned __int128)0x7010008004002001uLL) >> 64;
          v2355 = ((unsigned __int8)(v2362 ^ v4059) ^ (unsigned __int8)v2355) & 0x3F;
          if ( !v2355 )
            LOBYTE(v2355) = 1;
          --v2359;
        }
        while ( v2359 );
        v2350 = HalExtensionList;
      }
      v2363 = v2340 & 0x7F;
      if ( v2363 >= 8 )
      {
        v2364 = (unsigned __int64)(v2340 & 0x7F) >> 3;
        do
        {
          v2358 = __ROL8__(*v2354++ ^ v2358, v2355);
          v2363 -= 8;
          --v2364;
        }
        while ( v2364 );
      }
      for ( ; v2363; --v2363 )
      {
        v2365 = *(unsigned __int8 *)v2354;
        v2354 = (_QWORD *)((char *)v2354 + 1);
        v2358 = __ROL8__(v2365 ^ v2358, v2355);
      }
      for ( i43 = v2358; ; LODWORD(v2358) = i43 ^ v2358 )
      {
        i43 >>= 31;
        if ( !i43 )
          break;
      }
      v4007 = (_BYTE *)v2343;
      *(_DWORD *)(v2350 + 20) = v2358 & 0x7FFFFFFF;
      v2307 = (_BYTE *)v2343;
      *(_DWORD *)(v2343 + 2088) += v2340;
    }
    _disable();
    if ( !(_BYTE)KdDebuggerNotPresent )
    {
      while ( 1 )
        ;
    }
    _enable();
    v4147[0] = 8;
    v4197 = &HvlpHypercallCodeVa;
    LODWORD(v3809) = -1;
    v2367 = 1;
    if ( HvlpHypercallCodeVa )
    {
      if ( *((_DWORD *)v2307 + 526) != 7
        && (*((int *)v2307 + 612) < 0 || (unsigned __int8)HvlIsHypercallOverlayLocked()) )
      {
LABEL_3378:
        v2384 = *((_DWORD *)v2307 + 526);
        v2385 = *((unsigned int *)v2307 + 505);
        LODWORD(v2386) = 32;
        v2387 = *((unsigned int *)v2307 + 585);
        v2388 = v2367;
        v2389 = v2367 + 1;
        LODWORD(v3811) = v2389;
        LODWORD(v3817) = v2384;
        (&v4197)[v2388] = (PVOID *)&HvlpVsmVtlCallVa;
        v4147[v2388] = 8;
        if ( v2384 != 7 )
          LODWORD(v2386) = 0;
        v2390 = v2385 + 48 * v2389;
        LODWORD(v3819) = v2386;
        if ( v2390 <= *((_DWORD *)v2307 + 647) )
        {
          v2391 = v2307;
          HalExtensionList = (ULONG_PTR)v2307;
          *((_DWORD *)v2307 + 505) = v2390;
        }
        else
        {
          HalExtensionList = sub_140B11020(v2307, v2390, v2387);
          v2391 = (_BYTE *)HalExtensionList;
          if ( !HalExtensionList )
            return 0;
          v2392 = *((_DWORD *)v2307 + 612);
          if ( (v2392 & 4) == 0 )
          {
            v2393 = *((_DWORD *)v2307 + 505);
            v2394 = *((_QWORD *)v2307 + 249);
            v2395 = (v2392 & 0x20000000) != 0 ? *((_DWORD *)v2307 + 585) : 0;
            if ( v2393 >= 8 )
            {
              v2396 = (unsigned __int64)v2393 >> 3;
              do
              {
                *(_QWORD *)v2307 = 0LL;
                v2393 -= 8;
                v2307 += 8;
                --v2396;
              }
              while ( v2396 );
            }
            for ( ; v2393; --v2393 )
              *v2307++ = 0;
            v2397 = *((_DWORD *)v2391 + 585);
            *((_DWORD *)v2391 + 585) = v2395;
            if ( v2395 == 3 )
            {
              (*((void (__fastcall **)(__int64))v2391 + 109))(v2394);
            }
            else if ( (*((_DWORD *)v2391 + 612) & 0x10000000) != 0 || !v2395 )
            {
              (*((void (__fastcall **)(__int64))v2391 + 31))(v2394);
            }
            else
            {
              (*((void (__fastcall **)(__int64, _QWORD))v2391 + 69))(v2394 - 8, *(_QWORD *)(v2394 - 8));
            }
            v2389 = v3811;
            *((_DWORD *)v2391 + 585) = v2397;
          }
          *((_DWORD *)v2391 + 612) &= ~4u;
          LODWORD(v2386) = v3819;
          v2384 = v3817;
        }
        *((_DWORD *)v2391 + 515) += v2389;
        v2398 = &v4197;
        v2399 = &v2391[v2385];
        v3814 = (ULONG_PTR)&v4197;
        v2400 = v4147;
        v3813 = v2389;
        v3812 = (unsigned __int64)v2399;
        do
        {
          v2401 = (unsigned int)*v2400;
          v2402 = 48;
          v2403 = *v2398;
          v2404 = v2399;
          LODWORD(v3825) = *v2400;
          v2405 = 6LL;
          do
          {
            *v2404 = 0LL;
            v2402 -= 8;
            ++v2404;
            --v2405;
          }
          while ( v2405 );
          for ( ; v2402; --v2402 )
          {
            *(_BYTE *)v2404 = 0;
            v2404 = (_QWORD *)((char *)v2404 + 1);
          }
          *(_DWORD *)v2399 = v2386;
          *((_QWORD *)v2399 + 1) = v2403;
          if ( v2384 == 7 && (_DWORD)v2401 )
          {
            sub_1403EB41C(v2391, v2403, (unsigned int)v2401, v2399 + 24);
            v2398 = (PVOID **)v3814;
          }
          *((_DWORD *)v2399 + 4) = v2401;
          v2406 = (unsigned __int64)v2403 + v2401;
          *((_DWORD *)v2391 + 522) += v2401;
          v2407 = v2403;
          v2408 = *((_DWORD *)v2391 + 517);
          v2409 = (const char *)v2403;
          v2410 = *((_QWORD *)v2391 + 259);
          if ( v2403 < (PVOID *)((char *)v2403 + v2401) )
          {
            do
            {
              _mm_prefetch(v2409, 0);
              v2409 += 64;
            }
            while ( (unsigned __int64)v2409 < v2406 );
          }
          v2411 = *((_QWORD *)v2391 + 259);
          v2412 = (unsigned int)v2401 >> 7;
          if ( (unsigned int)v2401 >> 7 )
          {
            do
            {
              v2413 = 8LL;
              do
              {
                v2414 = v2407[1] ^ __ROL8__(*v2407 ^ v2411, v2408);
                v2407 += 2;
                v2411 = __ROL8__(v2414, v2408);
                --v2413;
              }
              while ( v2413 );
              v2406 = __ROL8__(v2410 ^ ((char *)v2407 - (char *)v2403), 17) ^ v2410 ^ ((char *)v2407 - (char *)v2403);
              v4060 = (v2406 * (unsigned __int128)0x7010008004002001uLL) >> 64;
              v2408 = ((unsigned __int8)v2406 ^ (unsigned __int8)(v4060 ^ v2408)) & 0x3F;
              if ( !v2408 )
                v2408 = 1;
              --v2412;
            }
            while ( v2412 );
            v2391 = (_BYTE *)HalExtensionList;
            LODWORD(v2401) = v3825;
            v2398 = (PVOID **)v3814;
          }
          v2415 = v2401 & 0x7F;
          if ( v2415 >= 8 )
          {
            v2416 = (unsigned __int64)(v2401 & 0x7F) >> 3;
            do
            {
              v2406 = v2408;
              v2411 = __ROL8__(*v2407++ ^ v2411, v2408);
              v2415 -= 8;
              --v2416;
            }
            while ( v2416 );
          }
          for ( ; v2415; --v2415 )
          {
            v2417 = *(unsigned __int8 *)v2407;
            v2406 = v2408;
            v2407 = (_QWORD *)((char *)v2407 + 1);
            v2411 = __ROL8__(v2417 ^ v2411, v2408);
          }
          v2418 = v2411 >> 31;
          v2419 = 0LL;
          while ( v2418 )
          {
            LODWORD(v2411) = v2418 ^ v2411;
            v2418 >>= 31;
          }
          v2386 = (unsigned int)v3819;
          v2384 = v3817;
          *((_DWORD *)v2399 + 5) = v2411 & 0x7FFFFFFF;
          ++v2398;
          *((_DWORD *)v2391 + 522) += v2401;
          v2399 += 48;
          ++v2400;
          v3814 = (ULONG_PTR)v2398;
          --v3813;
        }
        while ( v3813 );
        v2420 = v3812;
        if ( v2384 == 7 )
        {
          LODWORD(v2406) = v3811;
          v2421 = v3812;
          do
          {
            *(_DWORD *)(v2421 + 40) |= 1u;
            v2421 += 48LL;
            v885 = (_DWORD)v2406 == 1;
            v2406 = (unsigned int)(v2406 - 1);
          }
          while ( !v885 );
        }
        if ( (_DWORD)v3809 != -1 )
        {
          v2406 = 6LL * (unsigned int)v3809;
          if ( *(_DWORD *)(v2420 + 48LL * (unsigned int)v3809) == 32 )
            *(_DWORD *)(v2420 + 48LL * (unsigned int)v3809 + 40) |= 4u;
        }
        v4007 = v2391;
        _disable();
        LODWORD(i46) = 0;
        if ( !(_BYTE)KdDebuggerNotPresent )
        {
          while ( 1 )
            ;
        }
        _enable();
        if ( (_DWORD)v3810 )
          goto LABEL_3533;
        v2423 = 7;
        LODWORD(v3810) = v3862 & 4;
        if ( (v3862 & 4) == 0 )
          v2423 = SeCiStateElementCount + 7;
        v2424 = __rdtsc();
        v2425 = (__ROR8__(v2424, 3) ^ v2424) * (unsigned __int128)0x7010008004002001uLL;
        v4061 = *((_QWORD *)&v2425 + 1);
        v2426 = ((unsigned __int64)v2425 ^ *((_QWORD *)&v2425 + 1)) % 0xB;
        if ( (unsigned int)v2426 > 5 )
        {
          v2430 = v2426 - 6;
          if ( v2430 )
          {
            v2431 = v2430 - 1;
            if ( v2431 )
            {
              v2432 = v2431 - 1;
              if ( v2432 )
              {
                if ( v2432 == 1 )
                {
                  CompressBufferWorkSpaceSize[26] = -1333354875;
                  v2429 = __ROR4__(-1333354868, 33);
                }
                else
                {
                  v2433 = __rdtsc();
                  v2434 = __ROR8__(v2433, 3);
                  v4062 = ((v2434 ^ v2433) * (unsigned __int128)0x7010008004002001uLL) >> 64;
                  v2435 = (67117057 * (v2434 ^ v2433)) ^ v4062;
                  v2429 = ((((((v2435 % 0x1A + 97) << 8) | ((v2435 >> 5)
                                                          - 26
                                                          * ((unsigned int)((1321528399 * (unsigned __int64)(v2435 >> 5)) >> 32) >> 3)
                                                          + 65)) << 8) | ((v2435 >> 10) % 0x1A + 97)) << 8) | ((v2435 >> 15) % 0x1A + 65);
                }
              }
              else
              {
                CompressBufferWorkSpaceSize[27] = 1684422978;
                v2429 = __ROR4__(1684422978, 8);
              }
            }
            else
            {
              CompressBufferWorkSpaceSize[28] = -2100910376;
              v2429 = __ROL4__(-2100910376, 7);
            }
          }
          else
          {
            CompressBufferWorkSpaceSize[29] = 1314342514;
            v2429 = __ROR4__(1314342516, 24);
          }
        }
        else if ( (_DWORD)v2426 == 5 )
        {
          CompressBufferWorkSpaceSize[25] = 680282605;
          v2429 = __ROR4__(680282605, 5);
        }
        else if ( (_DWORD)v2426 )
        {
          v2427 = v2426 - 1;
          if ( v2427 )
          {
            v2428 = v2427 - 1;
            if ( v2428 )
            {
              if ( v2428 == 1 )
              {
                CompressBufferWorkSpaceSize[21] = -1474152136;
                v2429 = __ROR4__(-1474152133, 15);
              }
              else
              {
                CompressBufferWorkSpaceSize[20] = 1728537748;
                v2429 = __ROL4__(1728537748, 4);
              }
            }
            else
            {
              CompressBufferWorkSpaceSize[22] = -2051698419;
              v2429 = __ROR4__(-2051698419, 2);
            }
          }
          else
          {
            CompressBufferWorkSpaceSize[23] = -1297272415;
            v2429 = __ROL4__(-1297272415, 1);
          }
        }
        else
        {
          CompressBufferWorkSpaceSize[24] = -795291432;
          v2429 = __ROR4__(-795291432, 6);
        }
        v2436 = v2423;
        HalExtensionList = ExAllocatePool2(64LL, 8LL * v2423, v2429);
        v2437 = (_QWORD *)HalExtensionList;
        if ( !HalExtensionList )
          return 0;
        v2438 = __rdtsc();
        v2439 = (__ROR8__(v2438, 3) ^ v2438) * (unsigned __int128)0x7010008004002001uLL;
        v4063 = *((_QWORD *)&v2439 + 1);
        v2440 = ((unsigned __int64)v2439 ^ *((_QWORD *)&v2439 + 1)) % 0xB;
        if ( (unsigned int)v2440 > 5 )
        {
          v2444 = v2440 - 6;
          if ( v2444 )
          {
            v2445 = v2444 - 1;
            if ( v2445 )
            {
              v2446 = v2445 - 1;
              if ( v2446 )
              {
                if ( v2446 == 1 )
                {
                  CompressBufferWorkSpaceSize[36] = -1333354875;
                  v2443 = __ROR4__(-1333354868, 33);
                }
                else
                {
                  v2447 = __rdtsc();
                  v2448 = __ROR8__(v2447, 3);
                  v4064 = ((v2448 ^ v2447) * (unsigned __int128)0x7010008004002001uLL) >> 64;
                  v2449 = (67117057 * (v2448 ^ v2447)) ^ v4064;
                  v2443 = ((((((v2449 % 0x1A + 97) << 8) | ((v2449 >> 5)
                                                          - 26
                                                          * ((unsigned int)((1321528399 * (unsigned __int64)(v2449 >> 5)) >> 32) >> 3)
                                                          + 65)) << 8) | ((v2449 >> 10) % 0x1A + 97)) << 8) | ((v2449 >> 15) % 0x1A + 65);
                }
              }
              else
              {
                CompressBufferWorkSpaceSize[37] = 1684422978;
                v2443 = __ROR4__(1684422978, 8);
              }
            }
            else
            {
              CompressBufferWorkSpaceSize[38] = -2100910376;
              v2443 = __ROL4__(-2100910376, 7);
            }
          }
          else
          {
            v3892 = 1314342514;
            v2443 = __ROR4__(1314342516, 24);
          }
        }
        else if ( (_DWORD)v2440 == 5 )
        {
          CompressBufferWorkSpaceSize[35] = 680282605;
          v2443 = __ROR4__(680282605, 5);
        }
        else if ( (_DWORD)v2440 )
        {
          v2441 = v2440 - 1;
          if ( v2441 )
          {
            v2442 = v2441 - 1;
            if ( v2442 )
            {
              if ( v2442 == 1 )
              {
                CompressBufferWorkSpaceSize[31] = -1474152136;
                v2443 = __ROR4__(-1474152133, 15);
              }
              else
              {
                CompressBufferWorkSpaceSize[30] = 1728537748;
                v2443 = __ROL4__(1728537748, 4);
              }
            }
            else
            {
              CompressBufferWorkSpaceSize[32] = -2051698419;
              v2443 = __ROR4__(-2051698419, 2);
            }
          }
          else
          {
            CompressBufferWorkSpaceSize[33] = -1297272415;
            v2443 = __ROL4__(-1297272415, 1);
          }
        }
        else
        {
          CompressBufferWorkSpaceSize[34] = -795291432;
          v2443 = __ROR4__(-795291432, 6);
        }
        v2450 = (_DWORD *)ExAllocatePool2(64LL, 4 * v2436, v2443);
        v3814 = (ULONG_PTR)v2450;
        v2451 = v2450;
        if ( !v2450 )
        {
          v2278 = v2437;
          goto LABEL_3235;
        }
        *v2437 = &SeCiCallbacks;
        v2452 = 4;
        *v2450 = dword_140D815D0;
        v2437[1] = &SeMsMinTCBList;
        v2450[1] = dword_140D81600;
        v2437[2] = RtlProtectedAccess;
        v2450[2] = dword_140D81608;
        v2437[3] = &SeProtectedMapping;
        v2450[3] = dword_140D81610;
        if ( !(_DWORD)v3810 )
        {
          v2437[4] = SeSecureBootPolicyBlobHeader;
          v2452 = 7;
          v2450[4] = SeSecureBootPolicyBlobHeaderSize;
          v2437[5] = &SeILSigningPolicy;
          v2450[5] = 1;
          v2437[6] = &SeCiDebugOptions;
          v2450[6] = 4;
          for ( i44 = 0; i44 < SeCiStateElementCount; v2450[v2454] = *(_DWORD *)(SeCiStateElements + 8 * v2455 + 8) )
          {
            v2454 = v2452++;
            v2455 = i44++;
            v2455 *= 2LL;
            v2437[v2454] = *(_QWORD *)(SeCiStateElements + 8 * v2455);
          }
        }
        v2456 = *((_DWORD *)v2391 + 526);
        v2457 = 32;
        v2458 = *((_DWORD *)v2391 + 505);
        v2459 = *((unsigned int *)v2391 + 585);
        if ( v2456 != 7 )
          v2457 = 0;
        LODWORD(v3810) = *((_DWORD *)v2391 + 526);
        LODWORD(v3809) = v2457;
        v2460 = v2458 + 48 * v2452;
        LODWORD(v3811) = v2458;
        if ( v2460 <= *((_DWORD *)v2391 + 647) )
        {
          v2461 = (__int64)v2391;
          v3813 = (ULONG_PTR)v2391;
          *((_DWORD *)v2391 + 505) = v2460;
        }
        else
        {
          v2461 = sub_140B11020(v2391, v2460, v2459);
          v3813 = v2461;
          if ( !v2461 )
          {
            v2391 = 0LL;
LABEL_3531:
            ExFreePool(P: v2451);
            ExFreePool(P: v2437);
            LODWORD(i46) = 0;
            if ( !v2391 )
              return 0;
            v4007 = v2391;
LABEL_3533:
            _disable();
            if ( !(_BYTE)KdDebuggerNotPresent )
            {
              while ( 1 )
                ;
            }
            _enable();
            if ( !(_DWORD)Src )
            {
              if ( (unsigned int)SeMinTcbLowering(v2406, v2420, v2419, v2386) )
              {
                LODWORD(i46) = 0;
              }
              else
              {
                _disable();
                if ( !(_BYTE)KdDebuggerNotPresent )
                {
                  while ( 1 )
                    ;
                }
                _enable();
                v2488 = *((unsigned int *)v2391 + 505);
                v2489 = v2488 + 48;
                if ( (unsigned int)(v2488 + 48) <= *((_DWORD *)v2391 + 647) )
                {
                  v2490 = v2391;
                  *((_DWORD *)v2391 + 505) = v2489;
                }
                else
                {
                  v2490 = (_BYTE *)sub_140B11020(v2391, v2489, *((unsigned int *)v2391 + 585));
                  if ( !v2490 )
                    return 0;
                  v2491 = *((_DWORD *)v2391 + 612);
                  if ( (v2491 & 4) == 0 )
                  {
                    v2492 = *((_DWORD *)v2391 + 505);
                    v2493 = *((_QWORD *)v2391 + 249);
                    v2494 = (v2491 & 0x20000000) != 0 ? *((_DWORD *)v2391 + 585) : 0;
                    if ( v2492 >= 8 )
                    {
                      v2495 = (unsigned __int64)v2492 >> 3;
                      do
                      {
                        *(_QWORD *)v2391 = 0LL;
                        v2492 -= 8;
                        v2391 += 8;
                        --v2495;
                      }
                      while ( v2495 );
                    }
                    for ( ; v2492; --v2492 )
                      *v2391++ = 0;
                    v2496 = *((_DWORD *)v2490 + 585);
                    *((_DWORD *)v2490 + 585) = v2494;
                    if ( v2494 == 3 )
                    {
                      (*((void (__fastcall **)(__int64))v2490 + 109))(v2493);
                    }
                    else if ( (*((_DWORD *)v2490 + 612) & 0x10000000) != 0 || !v2494 )
                    {
                      (*((void (__fastcall **)(__int64))v2490 + 31))(v2493);
                    }
                    else
                    {
                      (*((void (__fastcall **)(__int64, _QWORD))v2490 + 69))(v2493 - 8, *(_QWORD *)(v2493 - 8));
                    }
                    *((_DWORD *)v2490 + 585) = v2496;
                  }
                  *((_DWORD *)v2490 + 612) &= ~4u;
                }
                ++*((_DWORD *)v2490 + 515);
                v2497 = &v2490[v2488];
                v2498 = 48;
                v2499 = &v2490[v2488];
                v2500 = 6LL;
                do
                {
                  *v2499 = 0LL;
                  v2498 -= 8;
                  ++v2499;
                  --v2500;
                }
                while ( v2500 );
                for ( ; v2498; --v2498 )
                {
                  *(_BYTE *)v2499 = 0;
                  v2499 = (_QWORD *)((char *)v2499 + 1);
                }
                *(_DWORD *)v2497 = 31;
                *((_QWORD *)v2497 + 1) = 0LL;
                *((_DWORD *)v2497 + 4) = 0;
                v2501 = *((_QWORD *)v2490 + 259);
                for ( i45 = v2501; ; LODWORD(v2501) = i45 ^ v2501 )
                {
                  i45 >>= 31;
                  if ( !i45 )
                    break;
                }
                v4007 = v2490;
                *((_DWORD *)v2497 + 5) = v2501 & 0x7FFFFFFF;
                _disable();
                if ( !(_BYTE)KdDebuggerNotPresent )
                {
                  while ( 1 )
                    ;
                }
                _enable();
                v2503 = *((unsigned int *)v2490 + 505);
                v2504 = v2503 + 48;
                if ( (unsigned int)(v2503 + 48) <= *((_DWORD *)v2490 + 647) )
                {
                  v2391 = v2490;
                  *((_DWORD *)v2490 + 505) = v2504;
                }
                else
                {
                  v2391 = (_BYTE *)sub_140B11020(v2490, v2504, *((unsigned int *)v2490 + 585));
                  if ( !v2391 )
                    return 0;
                  v2505 = *((_DWORD *)v2490 + 612);
                  if ( (v2505 & 4) == 0 )
                  {
                    v2506 = *((_DWORD *)v2490 + 505);
                    v2507 = *((_QWORD *)v2490 + 249);
                    v2508 = (v2505 & 0x20000000) != 0 ? *((_DWORD *)v2490 + 585) : 0;
                    if ( v2506 >= 8 )
                    {
                      v2509 = (unsigned __int64)v2506 >> 3;
                      do
                      {
                        *(_QWORD *)v2490 = 0LL;
                        v2506 -= 8;
                        v2490 += 8;
                        --v2509;
                      }
                      while ( v2509 );
                    }
                    for ( ; v2506; --v2506 )
                      *v2490++ = 0;
                    v2510 = *((_DWORD *)v2391 + 585);
                    *((_DWORD *)v2391 + 585) = v2508;
                    if ( v2508 == 3 )
                    {
                      (*((void (__fastcall **)(__int64))v2391 + 109))(v2507);
                    }
                    else if ( (*((_DWORD *)v2391 + 612) & 0x10000000) != 0 || !v2508 )
                    {
                      (*((void (__fastcall **)(__int64))v2391 + 31))(v2507);
                    }
                    else
                    {
                      (*((void (__fastcall **)(__int64, _QWORD))v2391 + 69))(v2507 - 8, *(_QWORD *)(v2507 - 8));
                    }
                    *((_DWORD *)v2391 + 585) = v2510;
                  }
                  *((_DWORD *)v2391 + 612) &= ~4u;
                }
                ++*((_DWORD *)v2391 + 515);
                v2511 = &v2391[v2503];
                v2512 = 48;
                v2513 = &v2391[v2503];
                v2514 = 6LL;
                do
                {
                  *v2513 = 0LL;
                  v2512 -= 8;
                  ++v2513;
                  --v2514;
                }
                while ( v2514 );
                for ( ; v2512; --v2512 )
                {
                  *(_BYTE *)v2513 = 0;
                  v2513 = (_QWORD *)((char *)v2513 + 1);
                }
                *(_DWORD *)v2511 = 37;
                *((_QWORD *)v2511 + 1) = 0LL;
                *((_DWORD *)v2511 + 4) = 0;
                v2515 = *((_QWORD *)v2391 + 259);
                for ( i46 = v2515; ; LODWORD(v2515) = i46 ^ v2515 )
                {
                  i46 >>= 31;
                  if ( !i46 )
                    break;
                }
                v4007 = v2391;
                *((_DWORD *)v2511 + 5) = v2515 & 0x7FFFFFFF;
              }
            }
            if ( *((_DWORD *)v2391 + 612) < (int)i46 && (*((_DWORD *)v2391 + 613) & 0x40) != 0 )
            {
              _disable();
              if ( !(_BYTE)KdDebuggerNotPresent )
              {
                while ( 1 )
                  ;
              }
              _enable();
              v2516 = *((unsigned int *)v2391 + 505);
              v2517 = v2516 + 48;
              if ( (unsigned int)(v2516 + 48) <= *((_DWORD *)v2391 + 647) )
              {
                v2518 = (__int64)v2391;
                *((_DWORD *)v2391 + 505) = v2517;
              }
              else
              {
                v2518 = sub_140B11020(v2391, v2517, *((unsigned int *)v2391 + 585));
                if ( !v2518 )
                  return 0;
                v2519 = *((_DWORD *)v2391 + 612);
                if ( (v2519 & 4) == 0 )
                {
                  v2520 = *((_DWORD *)v2391 + 505);
                  v2521 = *((_QWORD *)v2391 + 249);
                  v2522 = (v2519 & 0x20000000) != 0 ? *((_DWORD *)v2391 + 585) : 0;
                  if ( v2520 >= 8 )
                  {
                    v2523 = (unsigned __int64)v2520 >> 3;
                    do
                    {
                      *(_QWORD *)v2391 = 0LL;
                      v2520 -= 8;
                      v2391 += 8;
                      --v2523;
                    }
                    while ( v2523 );
                  }
                  for ( ; v2520; --v2520 )
                    *v2391++ = 0;
                  v2524 = *(_DWORD *)(v2518 + 2340);
                  *(_DWORD *)(v2518 + 2340) = v2522;
                  if ( v2522 == 3 )
                  {
                    (*(void (__fastcall **)(__int64))(v2518 + 872))(v2521);
                  }
                  else if ( (*(_DWORD *)(v2518 + 2448) & 0x10000000) != 0 || !v2522 )
                  {
                    (*(void (__fastcall **)(__int64))(v2518 + 248))(v2521);
                  }
                  else
                  {
                    (*(void (__fastcall **)(__int64, _QWORD))(v2518 + 552))(v2521 - 8, *(_QWORD *)(v2521 - 8));
                  }
                  *(_DWORD *)(v2518 + 2340) = v2524;
                }
                *(_DWORD *)(v2518 + 2448) &= ~4u;
              }
              ++*(_DWORD *)(v2518 + 2060);
              v2525 = v2518 + v2516;
              v2526 = 48;
              v2527 = (_QWORD *)(v2518 + v2516);
              v2528 = 6LL;
              do
              {
                *v2527 = 0LL;
                v2526 -= 8;
                ++v2527;
                --v2528;
              }
              while ( v2528 );
              for ( ; v2526; --v2526 )
              {
                *(_BYTE *)v2527 = 0;
                v2527 = (_QWORD *)((char *)v2527 + 1);
              }
              *(_DWORD *)v2525 = 49;
              *(_QWORD *)(v2525 + 8) = 0LL;
              *(_DWORD *)(v2525 + 16) = 0;
              v2529 = *(_QWORD *)(v2518 + 2072);
              for ( i47 = v2529; ; LODWORD(v2529) = i47 ^ v2529 )
              {
                i47 >>= 31;
                if ( !i47 )
                  break;
              }
              v4007 = (_BYTE *)v2518;
              *(_DWORD *)(v2525 + 20) = v2529 & 0x7FFFFFFF;
              v2391 = (_BYTE *)v2518;
            }
            v2531 = *((_DWORD *)v2391 + 526);
            v2532 = *((unsigned int *)v2391 + 505);
            v2533 = KxUnexpectedInterrupt0;
            v2534 = *((unsigned int *)v2391 + 585);
            if ( KiKvaShadow )
              v2533 = KiIsrThunkShadow;
            HalExtensionList = (ULONG_PTR)v2533;
            v2535 = 32;
            if ( v2531 != 7 )
              v2535 = 0;
            v2536 = v2532 + 48;
            if ( (unsigned int)(v2532 + 48) <= *((_DWORD *)v2391 + 647) )
            {
              v2537 = v2391;
              *((_DWORD *)v2391 + 505) = v2536;
            }
            else
            {
              v2537 = (_BYTE *)sub_140B11020(v2391, v2536, v2534);
              if ( !v2537 )
              {
LABEL_3626:
                v2537 = 0LL;
                goto LABEL_4229;
              }
              v2538 = *((_DWORD *)v2391 + 612);
              if ( (v2538 & 4) == 0 )
              {
                v2539 = *((_DWORD *)v2391 + 505);
                v2540 = *((_QWORD *)v2391 + 249);
                v2541 = (v2538 & 0x20000000) != 0 ? *((_DWORD *)v2391 + 585) : 0;
                if ( v2539 >= 8 )
                {
                  v2542 = (unsigned __int64)v2539 >> 3;
                  do
                  {
                    *(_QWORD *)v2391 = 0LL;
                    v2539 -= 8;
                    v2391 += 8;
                    --v2542;
                  }
                  while ( v2542 );
                }
                for ( ; v2539; --v2539 )
                  *v2391++ = 0;
                v2543 = *((_DWORD *)v2537 + 585);
                *((_DWORD *)v2537 + 585) = v2541;
                if ( v2541 == 3 )
                {
                  (*((void (__fastcall **)(__int64))v2537 + 109))(v2540);
                }
                else if ( (*((_DWORD *)v2537 + 612) & 0x10000000) != 0 || !v2541 )
                {
                  (*((void (__fastcall **)(__int64))v2537 + 31))(v2540);
                }
                else
                {
                  (*((void (__fastcall **)(__int64, _QWORD))v2537 + 69))(v2540 - 8, *(_QWORD *)(v2540 - 8));
                }
                *((_DWORD *)v2537 + 585) = v2543;
              }
              *((_DWORD *)v2537 + 612) &= ~4u;
              v2533 = (__int64 (__fastcall *)())HalExtensionList;
            }
            v2544 = &v2537[v2532];
            ++*((_DWORD *)v2537 + 515);
            v2545 = &v2537[v2532];
            v3814 = (ULONG_PTR)&v2537[v2532];
            v2546 = 48;
            v2547 = 6LL;
            do
            {
              *v2545 = 0LL;
              v2546 -= 8;
              ++v2545;
              --v2547;
            }
            while ( v2547 );
            for ( ; v2546; --v2546 )
            {
              *(_BYTE *)v2545 = 0;
              v2545 = (_QWORD *)((char *)v2545 + 1);
            }
            *(_DWORD *)v2544 = v2535;
            *((_QWORD *)v2544 + 1) = v2533;
            if ( v2531 == 7 )
            {
              sub_1403EB41C(v2537, v2533, 2048LL, v2544 + 24);
              v2533 = (__int64 (__fastcall *)())HalExtensionList;
            }
            *((_DWORD *)v2544 + 4) = 2048;
            *((_DWORD *)v2537 + 522) += 2048;
            v2548 = v2533;
            LODWORD(v2549) = *((_DWORD *)v2537 + 517);
            v2550 = (const char *)v2533;
            for ( i48 = *((_QWORD *)v2537 + 259); v2550 < (const char *)v2533 + 2048; v2550 += 64 )
              _mm_prefetch(v2550, 0);
            v2552 = 16;
            v2553 = *((_QWORD *)v2537 + 259);
            do
            {
              v2554 = 8LL;
              do
              {
                v2555 = *((_QWORD *)v2548 + 1) ^ __ROL8__(*(_QWORD *)v2548 ^ v2553, v2549);
                v2548 = (__int64 (__fastcall *)())((char *)v2548 + 16);
                v2553 = __ROL8__(v2555, v2549);
                --v2554;
              }
              while ( v2554 );
              v2556 = (__ROL8__(i48 ^ ((unsigned __int64)v2548 - HalExtensionList), 17) ^ i48 ^ ((unsigned __int64)v2548
                                                                                               - HalExtensionList))
                    * (unsigned __int128)0x7010008004002001uLL;
              v4066 = *((_QWORD *)&v2556 + 1);
              v2549 = ((unsigned __int8)v2556 ^ (unsigned __int8)(BYTE8(v2556) ^ v2549)) & 0x3F;
              if ( !(_DWORD)v2549 )
                v2549 = 1LL;
              --v2552;
            }
            while ( v2552 );
            for ( i49 = v2553 >> 31; i49; i49 >>= 31 )
              LODWORD(v2553) = i49 ^ v2553;
            *(_DWORD *)(v3814 + 20) = v2553 & 0x7FFFFFFF;
            *((_DWORD *)v2537 + 522) += 2048;
            *((_QWORD *)v2537 + 322) = qword_140D81090;
            *((_DWORD *)v2537 + 572) = -1;
            if ( (*((_DWORD *)v2537 + 612) & 0x10000) == 0 )
            {
              Prcb = KeGetPrcb(0LL, 0xFFFFFFFFLL, v2549, v2548);
              v2559 = &v4269;
              v2560 = 11LL;
              do
              {
                *((_QWORD *)v2559 - 1) = -1LL;
                *(_QWORD *)v2559 = 0LL;
                v2559 += 24;
                --v2560;
              }
              while ( v2560 );
              LODWORD(v4270[0]) = -1073741694;
              _RAX = 2147483649LL;
              v4271 = -1073741695;
              __asm { cpuid }
              v4154 = _RDX;
              v2566 = ((unsigned int)_RDX >> 27) & 1;
              v4151 = _RAX;
              v2567 = v4280;
              v4153 = _RCX;
              if ( v2566 )
                v2567 = -1073741565;
              v4272 = -1073741693;
              v2568 = *((_QWORD *)v2537 + 206);
              v2569 = v2566 + 9;
              v4280 = v2567;
              v2570 = v2537[1656];
              v4273 = 27;
              v4274 = 372;
              v4275 = 373;
              v4276 = 374;
              v4277 = -1073741692;
              v4279 = -1073741696;
              v4278 = -4097LL;
              v4152 = _RBX;
              LODWORD(Src) = v2569;
              if ( *(_BYTE *)(Prcb + v2568) == v2570 )
              {
                v2571 = 3 * v2569;
                LODWORD(v4270[v2571]) = 416;
                v4268[v2571 + 16] = 0x400440000LL;
                LODWORD(Src) = v2569 + 1;
              }
              LODWORD(v3810) = 0;
              v2572 = 0;
              if ( (_DWORD)KeNumberProcessors_0 )
              {
                HalExtensionList = v4067;
                v3814 = v4068;
                do
                {
                  v2573 = (void (__fastcall *)(_BYTE *))*((_QWORD *)v2537 + 51);
                  (*((void (__fastcall **)(_BYTE *, _QWORD))v2537 + 52))(v4155, v2572);
                  (*((void (__fastcall **)(_BYTE *, _BYTE *))v2537 + 58))(v4155, v4156);
                  KiGetGdtIdt(&v4125, v4124);
                  v2574 = v4126;
                  v2575 = &dword_14001388C;
                  v2576 = 7LL;
                  do
                  {
                    v2577 = *(unsigned __int8 *)v2575;
                    v2578 = *(_DWORD *)((char *)v2574 + v2577 + 4);
                    if ( (v2578 & 0x100) == 0 )
                      *(_DWORD *)((char *)v2574 + v2577 + 4) = v2578 | 0x100;
                    v2575 = (int *)((char *)v2575 + 1);
                    --v2576;
                  }
                  while ( v2576 );
                  v2579 = *((_DWORD *)v2574 + 17);
                  if ( (v2579 & 0x200) == 0 )
                    *((_DWORD *)v2574 + 17) = v2579 | 0x200;
                  v2580 = *((unsigned int *)v2537 + 505);
                  v2581 = v4126;
                  v2582 = v2580 + 48;
                  if ( (unsigned int)(v2580 + 48) <= *((_DWORD *)v2537 + 647) )
                  {
                    v2583 = v2537;
                    *((_DWORD *)v2537 + 505) = v2582;
                  }
                  else
                  {
                    v2583 = (_BYTE *)sub_140B11020(v2537, v2582, *((unsigned int *)v2537 + 585));
                    if ( !v2583 )
                    {
                      v2584 = (_BYTE *)HalExtensionList;
                      v2583 = 0LL;
                      goto LABEL_3706;
                    }
                    v2585 = *((_DWORD *)v2537 + 612);
                    if ( (v2585 & 4) == 0 )
                    {
                      v2586 = *((_DWORD *)v2537 + 505);
                      v2587 = *((_QWORD *)v2537 + 249);
                      v2588 = (v2585 & 0x20000000) != 0 ? *((_DWORD *)v2537 + 585) : 0;
                      if ( v2586 >= 8 )
                      {
                        v2589 = (unsigned __int64)v2586 >> 3;
                        do
                        {
                          *(_QWORD *)v2537 = 0LL;
                          v2586 -= 8;
                          v2537 += 8;
                          --v2589;
                        }
                        while ( v2589 );
                      }
                      for ( ; v2586; --v2586 )
                        *v2537++ = 0;
                      v2590 = *((_DWORD *)v2583 + 585);
                      *((_DWORD *)v2583 + 585) = v2588;
                      if ( v2588 == 3 )
                      {
                        (*((void (__fastcall **)(__int64))v2583 + 109))(v2587);
                      }
                      else if ( (*((_DWORD *)v2583 + 612) & 0x10000000) != 0 || !v2588 )
                      {
                        (*((void (__fastcall **)(__int64))v2583 + 31))(v2587);
                      }
                      else
                      {
                        (*((void (__fastcall **)(__int64, _QWORD))v2583 + 69))(v2587 - 8, *(_QWORD *)(v2587 - 8));
                      }
                      *((_DWORD *)v2583 + 585) = v2590;
                    }
                    *((_DWORD *)v2583 + 612) &= ~4u;
                  }
                  ++*((_DWORD *)v2583 + 515);
                  v2584 = &v2583[v2580];
                  v2591 = 48;
                  HalExtensionList = (ULONG_PTR)v2584;
                  v2592 = v2584;
                  v2593 = 6LL;
                  do
                  {
                    *v2592 = 0LL;
                    v2591 -= 8;
                    ++v2592;
                    --v2593;
                  }
                  while ( v2593 );
                  for ( ; v2591; --v2591 )
                  {
                    *(_BYTE *)v2592 = 0;
                    v2592 = (_QWORD *)((char *)v2592 + 1);
                  }
                  *(_DWORD *)v2584 = 3;
                  *((_QWORD *)v2584 + 1) = v2581;
                  *((_DWORD *)v2584 + 4) = 80;
                  v2594 = (const char *)v2581;
                  *((_DWORD *)v2583 + 522) += 80;
                  v2595 = *((_DWORD *)v2583 + 517);
                  v2596 = *((_QWORD *)v2583 + 259);
                  if ( v2581 < v2581 + 10 )
                  {
                    do
                    {
                      _mm_prefetch(v2594, 0);
                      v2594 += 64;
                    }
                    while ( v2594 < (const char *)v2581 + 80 );
                  }
                  v2597 = 80;
                  v2598 = 10LL;
                  do
                  {
                    v2596 = __ROL8__(*v2581++ ^ v2596, v2595);
                    v2597 -= 8;
                    --v2598;
                  }
                  while ( v2598 );
                  for ( ; v2597; --v2597 )
                  {
                    v2599 = *(unsigned __int8 *)v2581;
                    v2581 = (_QWORD *)((char *)v2581 + 1);
                    v2596 = __ROL8__(v2599 ^ v2596, v2595);
                  }
                  for ( i50 = v2596; ; LODWORD(v2596) = i50 ^ v2596 )
                  {
                    i50 >>= 31;
                    if ( !i50 )
                      break;
                  }
                  *((_DWORD *)v2584 + 5) = v2596 & 0x7FFFFFFF;
                  *((_DWORD *)v2583 + 522) += 80;
LABEL_3706:
                  v2573(v4156);
                  if ( !v2583 )
                    goto LABEL_4231;
                  v2601 = (unsigned int)v3810;
                  *((_DWORD *)v2584 + 10) = v3810;
                  *((_WORD *)v2584 + 22) = v4125;
                  v2602 = (void (__fastcall *)(_BYTE *))*((_QWORD *)v2583 + 51);
                  v2603 = 0;
                  (*((void (__fastcall **)(_BYTE *, __int64))v2583 + 52))(v4157, v2601);
                  (*((void (__fastcall **)(_BYTE *, _BYTE *))v2583 + 58))(v4157, v4158);
                  KiGetGdtIdt(v4129, &v4127);
                  v2604 = *((unsigned int *)v2583 + 505);
                  v2605 = v4128;
                  v2606 = v2604 + 48;
                  if ( (unsigned int)(v2604 + 48) <= *((_DWORD *)v2583 + 647) )
                  {
                    v2607 = v2583;
                    *((_DWORD *)v2583 + 505) = v2606;
                  }
                  else
                  {
                    v2607 = (_BYTE *)sub_140B11020(v2583, v2606, *((unsigned int *)v2583 + 585));
                    if ( !v2607 )
                    {
                      v2607 = 0LL;
                      goto LABEL_3754;
                    }
                    v2608 = *((_DWORD *)v2583 + 612);
                    if ( (v2608 & 4) == 0 )
                    {
                      v2609 = *((_DWORD *)v2583 + 505);
                      v2610 = *((_QWORD *)v2583 + 249);
                      v2611 = (v2608 & 0x20000000) != 0 ? *((_DWORD *)v2583 + 585) : 0;
                      if ( v2609 >= 8 )
                      {
                        v2612 = (unsigned __int64)v2609 >> 3;
                        do
                        {
                          *(_QWORD *)v2583 = 0LL;
                          v2609 -= 8;
                          v2583 += 8;
                          --v2612;
                        }
                        while ( v2612 );
                      }
                      for ( ; v2609; --v2609 )
                        *v2583++ = 0;
                      v2613 = *((_DWORD *)v2607 + 585);
                      *((_DWORD *)v2607 + 585) = v2611;
                      if ( v2611 == 3 )
                      {
                        (*((void (__fastcall **)(__int64))v2607 + 109))(v2610);
                      }
                      else if ( (*((_DWORD *)v2607 + 612) & 0x10000000) != 0 || !v2611 )
                      {
                        (*((void (__fastcall **)(__int64))v2607 + 31))(v2610);
                      }
                      else
                      {
                        (*((void (__fastcall **)(__int64, _QWORD))v2607 + 69))(v2610 - 8, *(_QWORD *)(v2610 - 8));
                      }
                      *((_DWORD *)v2607 + 585) = v2613;
                    }
                    *((_DWORD *)v2607 + 612) &= ~4u;
                  }
                  ++*((_DWORD *)v2607 + 515);
                  v2614 = &v2607[v2604];
                  v2615 = 48;
                  v3814 = (ULONG_PTR)&v2607[v2604];
                  v2616 = &v2607[v2604];
                  v2617 = 6;
                  v2618 = 6LL;
                  do
                  {
                    *v2616 = 0LL;
                    v2615 -= 8;
                    ++v2616;
                    --v2618;
                  }
                  while ( v2618 );
                  for ( ; v2615; --v2615 )
                  {
                    *(_BYTE *)v2616 = 0;
                    v2616 = (_QWORD *)((char *)v2616 + 1);
                  }
                  *(_DWORD *)v2614 = 2;
                  *((_QWORD *)v2614 + 1) = v2605;
                  *((_DWORD *)v2614 + 4) = 848;
                  v2619 = v2605;
                  *((_DWORD *)v2607 + 522) += 848;
                  v2620 = (const char *)v2605;
                  v2621 = *((_DWORD *)v2607 + 517);
                  v2622 = *((_QWORD *)v2607 + 259);
                  if ( v2605 < v2605 + 106 )
                  {
                    do
                    {
                      _mm_prefetch(v2620, 0);
                      v2620 += 64;
                    }
                    while ( v2620 < (const char *)v2605 + 848 );
                  }
                  v2623 = *((_QWORD *)v2607 + 259);
                  do
                  {
                    v2624 = 8LL;
                    do
                    {
                      v2625 = v2619[1] ^ __ROL8__(*v2619 ^ v2623, v2621);
                      v2619 += 2;
                      v2623 = __ROL8__(v2625, v2621);
                      --v2624;
                    }
                    while ( v2624 );
                    v2626 = (__ROL8__(v2622 ^ ((char *)v2619 - (char *)v2605), 17) ^ v2622 ^ (unsigned __int64)((char *)v2619 - (char *)v2605))
                          * (unsigned __int128)0x7010008004002001uLL;
                    v4069 = *((_QWORD *)&v2626 + 1);
                    v2621 = ((unsigned __int8)v2626 ^ (unsigned __int8)(BYTE8(v2626) ^ v2621)) & 0x3F;
                    if ( !v2621 )
                      LOBYTE(v2621) = 1;
                    --v2617;
                  }
                  while ( v2617 );
                  v2627 = 80;
                  v2628 = 10LL;
                  do
                  {
                    v2623 = __ROL8__(*v2619++ ^ v2623, v2621);
                    v2627 -= 8;
                    --v2628;
                  }
                  while ( v2628 );
                  for ( ; v2627; --v2627 )
                  {
                    v2629 = *(unsigned __int8 *)v2619;
                    v2619 = (_QWORD *)((char *)v2619 + 1);
                    v2623 = __ROL8__(v2629 ^ v2623, v2621);
                  }
                  for ( i51 = v2623; ; LODWORD(v2623) = i51 ^ v2623 )
                  {
                    i51 >>= 31;
                    if ( !i51 )
                      break;
                  }
                  *((_DWORD *)v2614 + 5) = v2623 & 0x7FFFFFFF;
                  *((_DWORD *)v2607 + 522) += 848;
                  v2631 = v4128;
                  *((_DWORD *)v2607 + 522) += 16;
                  v2632 = v2631 + 450;
                  v2633 = *((_DWORD *)v2607 + 517);
                  v2634 = (const char *)v2632;
                  v2635 = *((_QWORD *)v2607 + 259);
                  if ( v2632 < v2632 + 2 )
                  {
                    do
                    {
                      _mm_prefetch(v2634, 0);
                      v2634 += 64;
                    }
                    while ( v2634 < (const char *)v2632 + 16 );
                  }
                  v2636 = 16;
                  v2637 = 2LL;
                  do
                  {
                    v2635 = __ROL8__(*v2632++ ^ v2635, v2633);
                    v2636 -= 8;
                    --v2637;
                  }
                  while ( v2637 );
                  for ( ; v2636; --v2636 )
                  {
                    v2638 = *(unsigned __int8 *)v2632;
                    v2632 = (_QWORD *)((char *)v2632 + 1);
                    v2635 = __ROL8__(v2638 ^ v2635, v2633);
                  }
                  for ( i52 = v2635; ; LODWORD(v2635) = i52 ^ v2635 )
                  {
                    i52 >>= 31;
                    if ( !i52 )
                      break;
                  }
                  v2603 = v2635 & 0x7FFFFFFF;
LABEL_3754:
                  v2602(v4158);
                  if ( !v2607 )
                    goto LABEL_3626;
                  v2640 = v3814;
                  v2641 = v3810;
                  v2642 = (unsigned int)Src;
                  *(_QWORD *)(v3814 + 24) = v2603;
                  *(_DWORD *)(v2640 + 40) = v2641;
                  *(_WORD *)(v2640 + 44) = v4127;
                  v2643 = *((unsigned int *)v2607 + 505);
                  v2644 = v2643 + 24 * (v2642 + 2);
                  if ( v2644 <= *((_DWORD *)v2607 + 647) )
                  {
                    v2645 = v2607;
                    *((_DWORD *)v2607 + 505) = v2644;
                  }
                  else
                  {
                    v2645 = (_BYTE *)sub_140B11020(v2607, v2644, *((unsigned int *)v2607 + 585));
                    if ( !v2645 )
                      goto LABEL_3626;
                    v2646 = *((_DWORD *)v2607 + 612);
                    if ( (v2646 & 4) == 0 )
                    {
                      v2647 = *((_DWORD *)v2607 + 505);
                      v2648 = *((_QWORD *)v2607 + 249);
                      v2649 = (v2646 & 0x20000000) != 0 ? *((_DWORD *)v2607 + 585) : 0;
                      if ( v2647 >= 8 )
                      {
                        v2650 = (unsigned __int64)v2647 >> 3;
                        do
                        {
                          *(_QWORD *)v2607 = 0LL;
                          v2647 -= 8;
                          v2607 += 8;
                          --v2650;
                        }
                        while ( v2650 );
                      }
                      for ( ; v2647; --v2647 )
                        *v2607++ = 0;
                      v2651 = *((_DWORD *)v2645 + 585);
                      *((_DWORD *)v2645 + 585) = v2649;
                      if ( v2649 == 3 )
                      {
                        (*((void (__fastcall **)(__int64))v2645 + 109))(v2648);
                      }
                      else if ( (*((_DWORD *)v2645 + 612) & 0x10000000) != 0 || !v2649 )
                      {
                        (*((void (__fastcall **)(__int64))v2645 + 31))(v2648);
                      }
                      else
                      {
                        (*((void (__fastcall **)(__int64, _QWORD))v2645 + 69))(v2648 - 8, *(_QWORD *)(v2648 - 8));
                      }
                      *((_DWORD *)v2645 + 585) = v2651;
                    }
                    *((_DWORD *)v2645 + 612) &= ~4u;
                  }
                  ++*((_DWORD *)v2645 + 515);
                  v2652 = &v2645[v2643];
                  v2653 = 48;
                  v2654 = &v2645[v2643];
                  v2655 = 6LL;
                  do
                  {
                    *v2654 = 0LL;
                    v2653 -= 8;
                    ++v2654;
                    --v2655;
                  }
                  while ( v2655 );
                  for ( ; v2653; --v2653 )
                  {
                    *(_BYTE *)v2654 = 0;
                    v2654 = (_QWORD *)((char *)v2654 + 1);
                  }
                  *(_DWORD *)v2652 = 7;
                  *((_QWORD *)v2652 + 1) = 0LL;
                  *((_DWORD *)v2652 + 4) = 0;
                  v2656 = *((_QWORD *)v2645 + 259);
                  for ( i53 = v2656; ; LODWORD(v2656) = i53 ^ v2656 )
                  {
                    i53 >>= 31;
                    if ( !i53 )
                      break;
                  }
                  v2658 = v2652 + 48;
                  *((_DWORD *)v2652 + 5) = v2656 & 0x7FFFFFFF;
                  *((_DWORD *)v2652 + 6) = v2642;
                  *((_DWORD *)v2652 + 7) = v2641;
                  (*((void (__fastcall **)(_BYTE *, _QWORD, _QWORD))v2645 + 52))(v4159, v2641, 0LL);
                  (*((void (__fastcall **)(_BYTE *, _BYTE *))v2645 + 58))(v4159, v4160);
                  v2660 = v2642;
                  v2661 = v2658 - (_BYTE *)v4270;
                  v2662 = (unsigned int *)v4270;
                  do
                  {
                    v2663 = *((_QWORD *)v2662 - 2);
                    v2664 = *v2662;
                    *(_QWORD *)((char *)v2662 + v2661) = v2663;
                    *(unsigned int *)((char *)v2662 + v2661 + 16) = v2664;
                    if ( (v2645[2171] & 2) != 0
                      && v2664 == -1073741694
                      && KeGetPcr()->Prcb.Number == *((_DWORD *)v2645 + 572) )
                    {
                      v2665 = *((_QWORD *)v2645 + 285);
                    }
                    else
                    {
                      v2665 = __readmsr(v2664);
                      v2659 = (unsigned __int64)HIDWORD(v2665) << 32;
                    }
                    *(_QWORD *)((char *)v2662 + v2661 + 8) = v2663 & v2665;
                    v2662 += 6;
                    --v2660;
                  }
                  while ( v2660 );
                  (*((void (__fastcall **)(_BYTE *, unsigned __int64))v2645 + 51))(v4160, v2659);
                  v2666 = *((unsigned int *)v2645 + 505);
                  v2667 = v2666 + 48;
                  if ( (unsigned int)(v2666 + 48) <= *((_DWORD *)v2645 + 647) )
                  {
                    v2668 = v2645;
                    *((_DWORD *)v2645 + 505) = v2667;
                  }
                  else
                  {
                    v2668 = (_BYTE *)sub_140B11020(v2645, v2667, *((unsigned int *)v2645 + 585));
                    if ( !v2668 )
                      goto LABEL_3626;
                    v2669 = *((_DWORD *)v2645 + 612);
                    if ( (v2669 & 4) == 0 )
                    {
                      v2670 = *((_DWORD *)v2645 + 505);
                      v2671 = *((_QWORD *)v2645 + 249);
                      v2672 = (v2669 & 0x20000000) != 0 ? *((_DWORD *)v2645 + 585) : 0;
                      if ( v2670 >= 8 )
                      {
                        v2673 = (unsigned __int64)v2670 >> 3;
                        do
                        {
                          *(_QWORD *)v2645 = 0LL;
                          v2670 -= 8;
                          v2645 += 8;
                          --v2673;
                        }
                        while ( v2673 );
                      }
                      for ( ; v2670; --v2670 )
                        *v2645++ = 0;
                      v2674 = *((_DWORD *)v2668 + 585);
                      *((_DWORD *)v2668 + 585) = v2672;
                      if ( v2672 == 3 )
                      {
                        (*((void (__fastcall **)(__int64))v2668 + 109))(v2671);
                      }
                      else if ( (*((_DWORD *)v2668 + 612) & 0x10000000) != 0 || !v2672 )
                      {
                        (*((void (__fastcall **)(__int64))v2668 + 31))(v2671);
                      }
                      else
                      {
                        (*((void (__fastcall **)(__int64, _QWORD))v2668 + 69))(v2671 - 8, *(_QWORD *)(v2671 - 8));
                      }
                      *((_DWORD *)v2668 + 585) = v2674;
                    }
                    *((_DWORD *)v2668 + 612) &= ~4u;
                  }
                  ++*((_DWORD *)v2668 + 515);
                  v2675 = &v2668[v2666];
                  v2676 = 48;
                  v2677 = &v2668[v2666];
                  v2678 = 6LL;
                  do
                  {
                    *v2677 = 0LL;
                    v2676 -= 8;
                    ++v2677;
                    --v2678;
                  }
                  while ( v2678 );
                  for ( ; v2676; --v2676 )
                  {
                    *(_BYTE *)v2677 = 0;
                    v2677 = (_QWORD *)((char *)v2677 + 1);
                  }
                  *(_DWORD *)v2675 = 21;
                  *((_QWORD *)v2675 + 1) = 0LL;
                  *((_DWORD *)v2675 + 4) = 0;
                  v2679 = *((_QWORD *)v2668 + 259);
                  for ( i54 = v2679 >> 31; i54; i54 >>= 31 )
                    LODWORD(v2679) = i54 ^ v2679;
                  *((_DWORD *)v2675 + 5) = v2679 & 0x7FFFFFFF;
                  *((_DWORD *)v2675 + 10) = 0;
                  *((_QWORD *)v2675 + 3) = 2147549185LL;
                  *((_DWORD *)v2675 + 11) = v2641;
                  (*((void (__fastcall **)(_BYTE *, _QWORD))v2668 + 52))(v4161, v2641);
                  (*((void (__fastcall **)(_BYTE *, _BYTE *))v2668 + 58))(v4161, v4162);
                  v2681 = __readcr0();
                  (*((void (__fastcall **)(_BYTE *))v2668 + 51))(v4162);
                  *((_QWORD *)v2675 + 4) = v2681 & 0x80010001;
                  v2682 = *((unsigned int *)v2668 + 505);
                  v2683 = v2682 + 48;
                  if ( (unsigned int)(v2682 + 48) <= *((_DWORD *)v2668 + 647) )
                  {
                    v2684 = v2668;
                    *((_DWORD *)v2668 + 505) = v2683;
                  }
                  else
                  {
                    v2684 = (_BYTE *)sub_140B11020(v2668, v2683, *((unsigned int *)v2668 + 585));
                    if ( !v2684 )
                      goto LABEL_3626;
                    v2685 = *((_DWORD *)v2668 + 612);
                    if ( (v2685 & 4) == 0 )
                    {
                      v2686 = *((_DWORD *)v2668 + 505);
                      v2687 = *((_QWORD *)v2668 + 249);
                      v2688 = (v2685 & 0x20000000) != 0 ? *((_DWORD *)v2668 + 585) : 0;
                      if ( v2686 >= 8 )
                      {
                        v2689 = (unsigned __int64)v2686 >> 3;
                        do
                        {
                          *(_QWORD *)v2668 = 0LL;
                          v2686 -= 8;
                          v2668 += 8;
                          --v2689;
                        }
                        while ( v2689 );
                      }
                      for ( ; v2686; --v2686 )
                        *v2668++ = 0;
                      v2690 = *((_DWORD *)v2684 + 585);
                      *((_DWORD *)v2684 + 585) = v2688;
                      if ( v2688 == 3 )
                      {
                        (*((void (__fastcall **)(__int64))v2684 + 109))(v2687);
                      }
                      else if ( (*((_DWORD *)v2684 + 612) & 0x10000000) != 0 || !v2688 )
                      {
                        (*((void (__fastcall **)(__int64))v2684 + 31))(v2687);
                      }
                      else
                      {
                        (*((void (__fastcall **)(__int64, _QWORD))v2684 + 69))(v2687 - 8, *(_QWORD *)(v2687 - 8));
                      }
                      *((_DWORD *)v2684 + 585) = v2690;
                    }
                    *((_DWORD *)v2684 + 612) &= ~4u;
                  }
                  ++*((_DWORD *)v2684 + 515);
                  v2691 = &v2684[v2682];
                  v2692 = 48;
                  v2693 = &v2684[v2682];
                  v2694 = 6LL;
                  do
                  {
                    *v2693 = 0LL;
                    v2692 -= 8;
                    ++v2693;
                    --v2694;
                  }
                  while ( v2694 );
                  for ( ; v2692; --v2692 )
                  {
                    *(_BYTE *)v2693 = 0;
                    v2693 = (_QWORD *)((char *)v2693 + 1);
                  }
                  *(_DWORD *)v2691 = 21;
                  *((_QWORD *)v2691 + 1) = 0LL;
                  *((_DWORD *)v2691 + 4) = 0;
                  v2695 = *((_QWORD *)v2684 + 259);
                  for ( i55 = v2695; ; LODWORD(v2695) = i55 ^ v2695 )
                  {
                    i55 >>= 31;
                    if ( !i55 )
                      break;
                  }
                  *((_DWORD *)v2691 + 5) = v2695 & 0x7FFFFFFF;
                  *((_DWORD *)v2691 + 10) = 4;
                  *((_QWORD *)v2691 + 3) = -8641LL;
                  *((_DWORD *)v2691 + 11) = v2641;
                  (*((void (__fastcall **)(_BYTE *, _QWORD))v2684 + 52))(v4163, v2641);
                  (*((void (__fastcall **)(_BYTE *, _BYTE *))v2684 + 58))(v4163, v4164);
                  v2697 = __readcr4();
                  (*((void (__fastcall **)(_BYTE *))v2684 + 51))(v4164);
                  *((_QWORD *)v2691 + 4) = v2697 & 0xFFFFFFFFFFFFDE3FuLL;
                  if ( RtlGetEnabledExtendedFeatures(FeatureMask: 0xFFFFFFFFFFFFFFFFuLL) )
                  {
                    v2698 = *((unsigned int *)v2684 + 505);
                    v2699 = v2698 + 48;
                    if ( (unsigned int)(v2698 + 48) <= *((_DWORD *)v2684 + 647) )
                    {
                      v2700 = (__int64)v2684;
                      *((_DWORD *)v2684 + 505) = v2699;
                    }
                    else
                    {
                      v2700 = sub_140B11020(v2684, v2699, *((unsigned int *)v2684 + 585));
                      if ( !v2700 )
                        goto LABEL_3626;
                      v2701 = *((_DWORD *)v2684 + 612);
                      if ( (v2701 & 4) == 0 )
                      {
                        v2702 = *((_DWORD *)v2684 + 505);
                        v2703 = *((_QWORD *)v2684 + 249);
                        v2704 = (v2701 & 0x20000000) != 0 ? *((_DWORD *)v2684 + 585) : 0;
                        if ( v2702 >= 8 )
                        {
                          v2705 = (unsigned __int64)v2702 >> 3;
                          do
                          {
                            *(_QWORD *)v2684 = 0LL;
                            v2702 -= 8;
                            v2684 += 8;
                            --v2705;
                          }
                          while ( v2705 );
                        }
                        for ( ; v2702; --v2702 )
                          *v2684++ = 0;
                        v2706 = *(_DWORD *)(v2700 + 2340);
                        *(_DWORD *)(v2700 + 2340) = v2704;
                        if ( v2704 == 3 )
                        {
                          (*(void (__fastcall **)(__int64))(v2700 + 872))(v2703);
                        }
                        else if ( (*(_DWORD *)(v2700 + 2448) & 0x10000000) != 0 || !v2704 )
                        {
                          (*(void (__fastcall **)(__int64))(v2700 + 248))(v2703);
                        }
                        else
                        {
                          (*(void (__fastcall **)(__int64, _QWORD))(v2700 + 552))(v2703 - 8, *(_QWORD *)(v2703 - 8));
                        }
                        *(_DWORD *)(v2700 + 2340) = v2706;
                      }
                      *(_DWORD *)(v2700 + 2448) &= ~4u;
                    }
                    ++*(_DWORD *)(v2700 + 2060);
                    v2707 = v2700 + v2698;
                    v2708 = 48;
                    v2709 = (_QWORD *)(v2700 + v2698);
                    v2710 = 6LL;
                    do
                    {
                      *v2709 = 0LL;
                      v2708 -= 8;
                      ++v2709;
                      --v2710;
                    }
                    while ( v2710 );
                    for ( ; v2708; --v2708 )
                    {
                      *(_BYTE *)v2709 = 0;
                      v2709 = (_QWORD *)((char *)v2709 + 1);
                    }
                    *(_DWORD *)v2707 = 38;
                    *(_QWORD *)(v2707 + 8) = 0LL;
                    *(_DWORD *)(v2707 + 16) = 0;
                    v2711 = *(_QWORD *)(v2700 + 2072);
                    for ( i56 = v2711 >> 31; i56; i56 >>= 31 )
                      LODWORD(v2711) = i56 ^ v2711;
                    *(_DWORD *)(v2707 + 20) = v2711 & 0x7FFFFFFF;
                    *(_DWORD *)(v2707 + 40) = 0;
                    *(_QWORD *)(v2707 + 24) = -1LL;
                    *(_DWORD *)(v2707 + 44) = v2641;
                    (*(void (__fastcall **)(_BYTE *, _QWORD))(v2700 + 416))(v4165, v2641);
                    v2713 = (*(__int64 (__fastcall **)(_BYTE *, _BYTE *))(v2700 + 464))(v4165, v4166);
                    __asm { xgetbv }
                    v2715 = v2713 | (v2714 << 32);
                    (*(void (__fastcall **)(_BYTE *))(v2700 + 408))(v4166);
                    *(_QWORD *)(v2707 + 32) = v2715;
                    v2684 = (_BYTE *)v2700;
                  }
                  (*((void (__fastcall **)(_BYTE *, _QWORD))v2684 + 52))(v4167, v2641);
                  (*((void (__fastcall **)(_BYTE *, _BYTE *))v2684 + 58))(v4167, v4168);
                  v2716 = *((_QWORD *)v2684 + 322);
                  if ( v2716 )
                  {
                    v2717 = *(_DWORD *)(v2716 + 800);
                    v2718 = *((_QWORD *)v2684 + 322);
                    if ( v2718 )
                    {
                      v2719 = *(_DWORD *)(v2718 + 832);
                      goto LABEL_3865;
                    }
                  }
                  else
                  {
                    v2717 = __readmsr(0x832u);
                  }
                  v2720 = __readmsr(0x834u);
                  v2719 = v2720;
LABEL_3865:
                  (*((void (__fastcall **)(_BYTE *))v2684 + 51))(v4168);
                  v2722 = *((unsigned int *)v2684 + 505);
                  v2723 = v2717 & 0xFFFCEF00;
                  v2724 = v2719 & 0xFFFEE800;
                  v2725 = v2722 + 48;
                  if ( (unsigned int)(v2722 + 48) <= *((_DWORD *)v2684 + 647) )
                  {
                    v2726 = v2684;
                    *((_DWORD *)v2684 + 505) = v2725;
                  }
                  else
                  {
                    v2726 = (_BYTE *)sub_140B11020(v2684, v2725, *((unsigned int *)v2684 + 585));
                    if ( !v2726 )
                      goto LABEL_3626;
                    v2727 = *((_DWORD *)v2684 + 612);
                    if ( (v2727 & 4) == 0 )
                    {
                      v2728 = *((_DWORD *)v2684 + 505);
                      v2729 = *((_QWORD *)v2684 + 249);
                      v2730 = (v2727 & 0x20000000) != 0 ? *((_DWORD *)v2684 + 585) : 0;
                      if ( v2728 >= 8 )
                      {
                        v2731 = (unsigned __int64)v2728 >> 3;
                        do
                        {
                          *(_QWORD *)v2684 = 0LL;
                          v2728 -= 8;
                          v2684 += 8;
                          --v2731;
                        }
                        while ( v2731 );
                      }
                      for ( ; v2728; --v2728 )
                        *v2684++ = 0;
                      v2732 = *((_DWORD *)v2726 + 585);
                      *((_DWORD *)v2726 + 585) = v2730;
                      if ( v2730 == 3 )
                      {
                        (*((void (__fastcall **)(__int64))v2726 + 109))(v2729);
                      }
                      else if ( (*((_DWORD *)v2726 + 612) & 0x10000000) != 0 || !v2730 )
                      {
                        (*((void (__fastcall **)(__int64))v2726 + 31))(v2729);
                      }
                      else
                      {
                        (*((void (__fastcall **)(__int64, _QWORD))v2726 + 69))(v2729 - 8, *(_QWORD *)(v2729 - 8));
                      }
                      *((_DWORD *)v2726 + 585) = v2732;
                    }
                    *((_DWORD *)v2726 + 612) &= ~4u;
                  }
                  ++*((_DWORD *)v2726 + 515);
                  v2733 = &v2726[v2722];
                  v2734 = 48;
                  v2735 = &v2726[v2722];
                  v2736 = 6LL;
                  do
                  {
                    *v2735 = 0LL;
                    v2734 -= 8;
                    ++v2735;
                    --v2736;
                  }
                  while ( v2736 );
                  for ( ; v2734; --v2734 )
                  {
                    *(_BYTE *)v2735 = 0;
                    v2735 = (_QWORD *)((char *)v2735 + 1);
                  }
                  *(_DWORD *)v2733 = 23;
                  *((_QWORD *)v2733 + 1) = 0LL;
                  *((_DWORD *)v2733 + 4) = 0;
                  v2737 = *((_QWORD *)v2726 + 259);
                  for ( i57 = v2737; ; v2737 = (unsigned int)i57 ^ (unsigned int)v2737 )
                  {
                    i57 >>= 31;
                    if ( !i57 )
                      break;
                  }
                  v2739 = (unsigned int)v3810;
                  LODWORD(v2737) = v2737 & 0x7FFFFFFF;
                  *((_DWORD *)v2733 + 5) = v2737;
                  *((_DWORD *)v2733 + 6) = v2723;
                  *((_DWORD *)v2733 + 7) = -200960;
                  *((_DWORD *)v2733 + 8) = v2724;
                  *((_DWORD *)v2733 + 9) = -71680;
                  *((_DWORD *)v2733 + 10) = v2739;
                  v2740 = KeGetPrcb(v2739, v2737, 0LL, v2721) - 384;
                  v3813 = v2740;
                  if ( (NtBuildNumber & 0xF0000000) == 0xF0000000 )
                    *(_QWORD *)(v2740 + 264) = 0LL;
                  v2741 = *((_DWORD *)v2726 + 526);
                  v2742 = (const char *)(v2740 + 264);
                  v2743 = *((unsigned int *)v2726 + 505);
                  v2744 = 32;
                  if ( v2741 != 7 )
                    v2744 = 0;
                  v2745 = v2743 + 48;
                  if ( (unsigned int)(v2743 + 48) <= *((_DWORD *)v2726 + 647) )
                  {
                    v2746 = v2726;
                    *((_DWORD *)v2726 + 505) = v2745;
                  }
                  else
                  {
                    v2746 = (_BYTE *)sub_140B11020(v2726, v2745, *((unsigned int *)v2726 + 585));
                    if ( !v2746 )
                      goto LABEL_3626;
                    v2747 = *((_DWORD *)v2726 + 612);
                    if ( (v2747 & 4) == 0 )
                    {
                      v2748 = *((_DWORD *)v2726 + 505);
                      v2749 = *((_QWORD *)v2726 + 249);
                      v2750 = (v2747 & 0x20000000) != 0 ? *((_DWORD *)v2726 + 585) : 0;
                      if ( v2748 >= 8 )
                      {
                        v2751 = (unsigned __int64)v2748 >> 3;
                        do
                        {
                          *(_QWORD *)v2726 = 0LL;
                          v2748 -= 8;
                          v2726 += 8;
                          --v2751;
                        }
                        while ( v2751 );
                      }
                      for ( ; v2748; --v2748 )
                        *v2726++ = 0;
                      v2752 = *((_DWORD *)v2746 + 585);
                      *((_DWORD *)v2746 + 585) = v2750;
                      if ( v2750 == 3 )
                      {
                        (*((void (__fastcall **)(__int64))v2746 + 109))(v2749);
                      }
                      else if ( (*((_DWORD *)v2746 + 612) & 0x10000000) != 0 || !v2750 )
                      {
                        (*((void (__fastcall **)(__int64))v2746 + 31))(v2749);
                      }
                      else
                      {
                        (*((void (__fastcall **)(__int64, _QWORD))v2746 + 69))(v2749 - 8, *(_QWORD *)(v2749 - 8));
                      }
                      *((_DWORD *)v2746 + 585) = v2752;
                    }
                    *((_DWORD *)v2746 + 612) &= ~4u;
                  }
                  v2753 = &v2746[v2743];
                  ++*((_DWORD *)v2746 + 515);
                  v2754 = &v2746[v2743];
                  v2755 = 48;
                  v2756 = 6LL;
                  do
                  {
                    *v2754 = 0LL;
                    v2755 -= 8;
                    ++v2754;
                    --v2756;
                  }
                  while ( v2756 );
                  for ( ; v2755; --v2755 )
                  {
                    *(_BYTE *)v2754 = 0;
                    v2754 = (_QWORD *)((char *)v2754 + 1);
                  }
                  *(_DWORD *)v2753 = v2744;
                  *((_QWORD *)v2753 + 1) = v2742;
                  if ( v2741 == 7 )
                    sub_1403EB41C(v2746, v2742, 8LL, v2753 + 24);
                  *((_DWORD *)v2753 + 4) = 8;
                  *((_DWORD *)v2746 + 522) += 8;
                  for ( i58 = v2742; i58 < v2742 + 8; i58 += 64 )
                    _mm_prefetch(i58, 0);
                  v2758 = __ROL8__(*(_QWORD *)v2742 ^ *((_QWORD *)v2746 + 259), *((_DWORD *)v2746 + 517));
                  for ( i59 = v2758; ; LODWORD(v2758) = i59 ^ v2758 )
                  {
                    i59 >>= 31;
                    if ( !i59 )
                      break;
                  }
                  v2760 = 32;
                  v2761 = (const char *)(v3813 + 56);
                  *((_DWORD *)v2753 + 5) = v2758 & 0x7FFFFFFF;
                  *((_DWORD *)v2746 + 522) += 8;
                  v2762 = *((unsigned int *)v2746 + 505);
                  v2763 = *((_DWORD *)v2746 + 526);
                  if ( v2763 != 7 )
                    v2760 = 0;
                  v2764 = v2762 + 48;
                  if ( (unsigned int)(v2762 + 48) <= *((_DWORD *)v2746 + 647) )
                  {
                    v2765 = v2746;
                    *((_DWORD *)v2746 + 505) = v2764;
                  }
                  else
                  {
                    v2765 = (_BYTE *)sub_140B11020(v2746, v2764, *((unsigned int *)v2746 + 585));
                    if ( !v2765 )
                      goto LABEL_3626;
                    v2766 = *((_DWORD *)v2746 + 612);
                    if ( (v2766 & 4) == 0 )
                    {
                      v2767 = *((_DWORD *)v2746 + 505);
                      v2768 = *((_QWORD *)v2746 + 249);
                      v2769 = (v2766 & 0x20000000) != 0 ? *((_DWORD *)v2746 + 585) : 0;
                      if ( v2767 >= 8 )
                      {
                        v2770 = (unsigned __int64)v2767 >> 3;
                        do
                        {
                          *(_QWORD *)v2746 = 0LL;
                          v2767 -= 8;
                          v2746 += 8;
                          --v2770;
                        }
                        while ( v2770 );
                      }
                      for ( ; v2767; --v2767 )
                        *v2746++ = 0;
                      v2771 = *((_DWORD *)v2765 + 585);
                      *((_DWORD *)v2765 + 585) = v2769;
                      if ( v2769 == 3 )
                      {
                        (*((void (__fastcall **)(__int64))v2765 + 109))(v2768);
                      }
                      else if ( (*((_DWORD *)v2765 + 612) & 0x10000000) != 0 || !v2769 )
                      {
                        (*((void (__fastcall **)(__int64))v2765 + 31))(v2768);
                      }
                      else
                      {
                        (*((void (__fastcall **)(__int64, _QWORD))v2765 + 69))(v2768 - 8, *(_QWORD *)(v2768 - 8));
                      }
                      *((_DWORD *)v2765 + 585) = v2771;
                    }
                    *((_DWORD *)v2765 + 612) &= ~4u;
                  }
                  v2772 = &v2765[v2762];
                  ++*((_DWORD *)v2765 + 515);
                  v2773 = &v2765[v2762];
                  v2774 = 48;
                  v2775 = 6LL;
                  do
                  {
                    *v2773 = 0LL;
                    v2774 -= 8;
                    ++v2773;
                    --v2775;
                  }
                  while ( v2775 );
                  for ( ; v2774; --v2774 )
                  {
                    *(_BYTE *)v2773 = 0;
                    v2773 = (_QWORD *)((char *)v2773 + 1);
                  }
                  *(_DWORD *)v2772 = v2760;
                  *((_QWORD *)v2772 + 1) = v2761;
                  if ( v2763 == 7 )
                    sub_1403EB41C(v2765, v2761, 8LL, v2772 + 24);
                  *((_DWORD *)v2772 + 4) = 8;
                  *((_DWORD *)v2765 + 522) += 8;
                  for ( i60 = v2761; i60 < v2761 + 8; i60 += 64 )
                    _mm_prefetch(i60, 0);
                  v2777 = __ROL8__(*(_QWORD *)v2761 ^ *((_QWORD *)v2765 + 259), *((_DWORD *)v2765 + 517));
                  for ( i61 = v2777; ; LODWORD(v2777) = i61 ^ v2777 )
                  {
                    i61 >>= 31;
                    if ( !i61 )
                      break;
                  }
                  v2779 = 32;
                  *((_DWORD *)v2772 + 5) = v2777 & 0x7FFFFFFF;
                  *((_DWORD *)v2765 + 522) += 8;
                  v2780 = *((unsigned int *)v2765 + 505);
                  v2781 = *((_DWORD *)v2765 + 526);
                  if ( v2781 != 7 )
                    v2779 = 0;
                  v2782 = v2780 + 48;
                  if ( (unsigned int)(v2780 + 48) <= *((_DWORD *)v2765 + 647) )
                  {
                    v2783 = v2765;
                    *((_DWORD *)v2765 + 505) = v2782;
                  }
                  else
                  {
                    v2783 = (_BYTE *)sub_140B11020(v2765, v2782, *((unsigned int *)v2765 + 585));
                    if ( !v2783 )
                      goto LABEL_3626;
                    v2784 = *((_DWORD *)v2765 + 612);
                    if ( (v2784 & 4) == 0 )
                    {
                      v2785 = *((_DWORD *)v2765 + 505);
                      v2786 = *((_QWORD *)v2765 + 249);
                      v2787 = (v2784 & 0x20000000) != 0 ? *((_DWORD *)v2765 + 585) : 0;
                      if ( v2785 >= 8 )
                      {
                        v2788 = (unsigned __int64)v2785 >> 3;
                        do
                        {
                          *(_QWORD *)v2765 = 0LL;
                          v2785 -= 8;
                          v2765 += 8;
                          --v2788;
                        }
                        while ( v2788 );
                      }
                      for ( ; v2785; --v2785 )
                        *v2765++ = 0;
                      v2789 = *((_DWORD *)v2783 + 585);
                      *((_DWORD *)v2783 + 585) = v2787;
                      if ( v2787 == 3 )
                      {
                        (*((void (__fastcall **)(__int64))v2783 + 109))(v2786);
                      }
                      else if ( (*((_DWORD *)v2783 + 612) & 0x10000000) != 0 || !v2787 )
                      {
                        (*((void (__fastcall **)(__int64))v2783 + 31))(v2786);
                      }
                      else
                      {
                        (*((void (__fastcall **)(__int64, _QWORD))v2783 + 69))(v2786 - 8, *(_QWORD *)(v2786 - 8));
                      }
                      *((_DWORD *)v2783 + 585) = v2789;
                    }
                    *((_DWORD *)v2783 + 612) &= ~4u;
                  }
                  v2790 = &v2783[v2780];
                  ++*((_DWORD *)v2783 + 515);
                  v2791 = &v2783[v2780];
                  v2792 = 48;
                  v2793 = 6LL;
                  do
                  {
                    *v2791 = 0LL;
                    v2792 -= 8;
                    ++v2791;
                    --v2793;
                  }
                  while ( v2793 );
                  for ( ; v2792; --v2792 )
                  {
                    *(_BYTE *)v2791 = 0;
                    v2791 = (_QWORD *)((char *)v2791 + 1);
                  }
                  v2794 = (const char *)v3813;
                  *(_DWORD *)v2790 = v2779;
                  *((_QWORD *)v2790 + 1) = v2794;
                  if ( v2781 == 7 )
                    sub_1403EB41C(v2783, v2794, 8LL, v2790 + 24);
                  *((_DWORD *)v2790 + 4) = 8;
                  v2795 = v2794 + 8;
                  *((_DWORD *)v2783 + 522) += 8;
                  v2796 = v2794;
                  v2797 = *((_DWORD *)v2783 + 517);
                  v2798 = *((_QWORD *)v2783 + 259);
                  v3813 = (ULONG_PTR)(v2794 + 8);
                  if ( v2794 < v2794 + 8 )
                  {
                    do
                    {
                      _mm_prefetch(v2796, 0);
                      v2796 += 64;
                    }
                    while ( v2796 < v2795 );
                  }
                  v2799 = __ROL8__(*(_QWORD *)v2794 ^ v2798, v2797);
                  for ( i62 = v2799; ; LODWORD(v2799) = i62 ^ v2799 )
                  {
                    i62 >>= 31;
                    if ( !i62 )
                      break;
                  }
                  v2801 = 32;
                  *((_DWORD *)v2790 + 5) = v2799 & 0x7FFFFFFF;
                  *((_DWORD *)v2783 + 522) += 8;
                  v2802 = *((unsigned int *)v2783 + 505);
                  v2803 = *((_DWORD *)v2783 + 526);
                  if ( v2803 != 7 )
                    v2801 = 0;
                  v2804 = v2802 + 48;
                  if ( (unsigned int)(v2802 + 48) <= *((_DWORD *)v2783 + 647) )
                  {
                    v2805 = v2783;
                    *((_DWORD *)v2783 + 505) = v2804;
                  }
                  else
                  {
                    v2805 = (_BYTE *)sub_140B11020(v2783, v2804, *((unsigned int *)v2783 + 585));
                    if ( !v2805 )
                      goto LABEL_4231;
                    v2806 = *((_DWORD *)v2783 + 612);
                    if ( (v2806 & 4) == 0 )
                    {
                      v2807 = *((_DWORD *)v2783 + 505);
                      v2808 = *((_QWORD *)v2783 + 249);
                      v2809 = (v2806 & 0x20000000) != 0 ? *((_DWORD *)v2783 + 585) : 0;
                      if ( v2807 >= 8 )
                      {
                        v2810 = (unsigned __int64)v2807 >> 3;
                        do
                        {
                          *(_QWORD *)v2783 = 0LL;
                          v2807 -= 8;
                          v2783 += 8;
                          --v2810;
                        }
                        while ( v2810 );
                      }
                      for ( ; v2807; --v2807 )
                        *v2783++ = 0;
                      v2811 = *((_DWORD *)v2805 + 585);
                      *((_DWORD *)v2805 + 585) = v2809;
                      if ( v2809 == 3 )
                      {
                        (*((void (__fastcall **)(__int64))v2805 + 109))(v2808);
                      }
                      else if ( (*((_DWORD *)v2805 + 612) & 0x10000000) != 0 || !v2809 )
                      {
                        (*((void (__fastcall **)(__int64))v2805 + 31))(v2808);
                      }
                      else
                      {
                        (*((void (__fastcall **)(__int64, _QWORD))v2805 + 69))(v2808 - 8, *(_QWORD *)(v2808 - 8));
                      }
                      *((_DWORD *)v2805 + 585) = v2811;
                    }
                    *((_DWORD *)v2805 + 612) &= ~4u;
                    v2795 = (const char *)v3813;
                  }
                  ++*((_DWORD *)v2805 + 515);
                  v2812 = &v2805[v2802];
                  v2813 = 48;
                  v2814 = &v2805[v2802];
                  v2815 = 6LL;
                  do
                  {
                    *v2814 = 0LL;
                    v2813 -= 8;
                    ++v2814;
                    --v2815;
                  }
                  while ( v2815 );
                  for ( ; v2813; --v2813 )
                  {
                    *(_BYTE *)v2814 = 0;
                    v2814 = (_QWORD *)((char *)v2814 + 1);
                  }
                  *(_DWORD *)v2812 = v2801;
                  *((_QWORD *)v2812 + 1) = v2795;
                  if ( v2803 == 7 )
                  {
                    sub_1403EB41C(v2805, v2795, 8LL, v2812 + 24);
                    v2795 = (const char *)v3813;
                  }
                  *((_DWORD *)v2812 + 4) = 8;
                  *((_DWORD *)v2805 + 522) += 8;
                  for ( i63 = v2795; i63 < v2795 + 8; i63 += 64 )
                    _mm_prefetch(i63, 0);
                  v2817 = __ROL8__(*(_QWORD *)v2795 ^ *((_QWORD *)v2805 + 259), *((_DWORD *)v2805 + 517));
                  for ( i64 = v2817; ; LODWORD(v2817) = i64 ^ v2817 )
                  {
                    i64 >>= 31;
                    if ( !i64 )
                      break;
                  }
                  *((_DWORD *)v2812 + 5) = v2817 & 0x7FFFFFFF;
                  *((_DWORD *)v2805 + 522) += 8;
                  v885 = (v2805[2171] & 8) == 0;
                  v2819 = *((unsigned int *)v2805 + 505);
                  v2820 = *((_DWORD *)v2805 + 526);
                  v2821 = *(_QWORD **)v2795;
                  v2822 = *((unsigned int *)v2805 + 585);
                  v2823 = v2819 + 48;
                  LODWORD(v3809) = v2820;
                  if ( v885 )
                  {
                    v2844 = (_QWORD *)((char *)v2821 + 12);
                    v2845 = 32;
                    if ( v2820 != 7 )
                      v2845 = 0;
                    if ( v2823 <= *((_DWORD *)v2805 + 647) )
                    {
                      v2537 = v2805;
                      *((_DWORD *)v2805 + 505) = v2823;
                    }
                    else
                    {
                      v2537 = (_BYTE *)sub_140B11020(v2805, v2823, v2822);
                      if ( !v2537 )
                      {
LABEL_4016:
                        v2537 = 0LL;
                        goto LABEL_4084;
                      }
                      v2846 = *((_DWORD *)v2805 + 612);
                      if ( (v2846 & 4) == 0 )
                      {
                        v2847 = *((_DWORD *)v2805 + 505);
                        v2848 = *((_QWORD *)v2805 + 249);
                        v2849 = (v2846 & 0x20000000) != 0 ? *((_DWORD *)v2805 + 585) : 0;
                        if ( v2847 >= 8 )
                        {
                          v2850 = (unsigned __int64)v2847 >> 3;
                          do
                          {
                            *(_QWORD *)v2805 = 0LL;
                            v2847 -= 8;
                            v2805 += 8;
                            --v2850;
                          }
                          while ( v2850 );
                        }
                        for ( ; v2847; --v2847 )
                          *v2805++ = 0;
                        v2851 = *((_DWORD *)v2537 + 585);
                        *((_DWORD *)v2537 + 585) = v2849;
                        if ( v2849 == 3 )
                        {
                          (*((void (__fastcall **)(__int64))v2537 + 109))(v2848);
                        }
                        else if ( (*((_DWORD *)v2537 + 612) & 0x10000000) != 0 || !v2849 )
                        {
                          (*((void (__fastcall **)(__int64))v2537 + 31))(v2848);
                        }
                        else
                        {
                          (*((void (__fastcall **)(__int64, _QWORD))v2537 + 69))(v2848 - 8, *(_QWORD *)(v2848 - 8));
                        }
                        *((_DWORD *)v2537 + 585) = v2851;
                      }
                      *((_DWORD *)v2537 + 612) &= ~4u;
                      v2820 = v3809;
                    }
                    ++*((_DWORD *)v2537 + 515);
                    v2831 = &v2537[v2819];
                    v2852 = v2831;
                    v2853 = 48;
                    v2854 = 6LL;
                    do
                    {
                      *v2852 = 0LL;
                      v2853 -= 8;
                      ++v2852;
                      --v2854;
                    }
                    while ( v2854 );
                    for ( ; v2853; --v2853 )
                    {
                      *(_BYTE *)v2852 = 0;
                      v2852 = (_QWORD *)((char *)v2852 + 1);
                    }
                    *(_DWORD *)v2831 = v2845;
                    *((_QWORD *)v2831 + 1) = v2844;
                    if ( v2820 == 7 )
                      sub_1403EB41C(v2537, (char *)v2821 + 12, 92LL, v2831 + 24);
                    v2835 = 92;
                    *((_DWORD *)v2831 + 4) = 92;
                    v2855 = (char *)v2821 + 12;
                    *((_DWORD *)v2537 + 522) += 92;
                    v2856 = *((_DWORD *)v2537 + 517);
                    v2857 = *((_QWORD *)v2537 + 259);
                    if ( v2844 < v2821 + 13 )
                    {
                      do
                      {
                        _mm_prefetch(v2855, 0);
                        v2855 += 64;
                      }
                      while ( v2855 < (const char *)v2821 + 104 );
                    }
                    v2858 = 92;
                    v2859 = 11LL;
                    do
                    {
                      v2857 = __ROL8__(*v2844++ ^ v2857, v2856);
                      v2858 -= 8;
                      --v2859;
                    }
                    while ( v2859 );
                    for ( ; v2858; --v2858 )
                    {
                      v2860 = *(unsigned __int8 *)v2844;
                      v2844 = (_QWORD *)((char *)v2844 + 1);
                      v2857 = __ROL8__(v2860 ^ v2857, v2856);
                    }
                    for ( i65 = v2857; ; LODWORD(v2857) = i65 ^ v2857 )
                    {
                      i65 >>= 31;
                      if ( !i65 )
                        break;
                    }
                    v2843 = v2857 & 0x7FFFFFFF;
                  }
                  else
                  {
                    v2824 = 32;
                    if ( v2820 != 7 )
                      v2824 = 0;
                    if ( v2823 <= *((_DWORD *)v2805 + 647) )
                    {
                      v2537 = v2805;
                      *((_DWORD *)v2805 + 505) = v2823;
                    }
                    else
                    {
                      v2537 = (_BYTE *)sub_140B11020(v2805, v2823, v2822);
                      if ( !v2537 )
                        goto LABEL_4016;
                      v2825 = *((_DWORD *)v2805 + 612);
                      if ( (v2825 & 4) == 0 )
                      {
                        v2826 = *((_DWORD *)v2805 + 505);
                        v2827 = *((_QWORD *)v2805 + 249);
                        v2828 = (v2825 & 0x20000000) != 0 ? *((_DWORD *)v2805 + 585) : 0;
                        if ( v2826 >= 8 )
                        {
                          v2829 = (unsigned __int64)v2826 >> 3;
                          do
                          {
                            *(_QWORD *)v2805 = 0LL;
                            v2826 -= 8;
                            v2805 += 8;
                            --v2829;
                          }
                          while ( v2829 );
                        }
                        for ( ; v2826; --v2826 )
                          *v2805++ = 0;
                        v2830 = *((_DWORD *)v2537 + 585);
                        *((_DWORD *)v2537 + 585) = v2828;
                        if ( v2828 == 3 )
                        {
                          (*((void (__fastcall **)(__int64))v2537 + 109))(v2827);
                        }
                        else if ( (*((_DWORD *)v2537 + 612) & 0x10000000) != 0 || !v2828 )
                        {
                          (*((void (__fastcall **)(__int64))v2537 + 31))(v2827);
                        }
                        else
                        {
                          (*((void (__fastcall **)(__int64, _QWORD))v2537 + 69))(v2827 - 8, *(_QWORD *)(v2827 - 8));
                        }
                        *((_DWORD *)v2537 + 585) = v2830;
                      }
                      *((_DWORD *)v2537 + 612) &= ~4u;
                      v2820 = v3809;
                    }
                    ++*((_DWORD *)v2537 + 515);
                    v2831 = &v2537[v2819];
                    v2832 = v2831;
                    v2833 = 48;
                    v2834 = 6LL;
                    do
                    {
                      *v2832 = 0LL;
                      v2833 -= 8;
                      ++v2832;
                      --v2834;
                    }
                    while ( v2834 );
                    for ( ; v2833; --v2833 )
                    {
                      *(_BYTE *)v2832 = 0;
                      v2832 = (_QWORD *)((char *)v2832 + 1);
                    }
                    *(_DWORD *)v2831 = v2824;
                    *((_QWORD *)v2831 + 1) = v2821;
                    if ( v2820 == 7 )
                      sub_1403EB41C(v2537, v2821, 104LL, v2831 + 24);
                    v2835 = 104;
                    *((_DWORD *)v2831 + 4) = 104;
                    v2836 = (const char *)v2821;
                    *((_DWORD *)v2537 + 522) += 104;
                    v2837 = *((_DWORD *)v2537 + 517);
                    v2838 = *((_QWORD *)v2537 + 259);
                    if ( v2821 < v2821 + 13 )
                    {
                      do
                      {
                        _mm_prefetch(v2836, 0);
                        v2836 += 64;
                      }
                      while ( v2836 < (const char *)v2821 + 104 );
                    }
                    v2839 = 104;
                    v2840 = 13LL;
                    do
                    {
                      v2838 = __ROL8__(*v2821++ ^ v2838, v2837);
                      v2839 -= 8;
                      --v2840;
                    }
                    while ( v2840 );
                    for ( ; v2839; --v2839 )
                    {
                      v2841 = *(unsigned __int8 *)v2821;
                      v2821 = (_QWORD *)((char *)v2821 + 1);
                      v2838 = __ROL8__(v2841 ^ v2838, v2837);
                    }
                    for ( i66 = v2838; ; LODWORD(v2838) = i66 ^ v2838 )
                    {
                      i66 >>= 31;
                      if ( !i66 )
                        break;
                    }
                    v2843 = v2838 & 0x7FFFFFFF;
                  }
                  *((_DWORD *)v2831 + 5) = v2843;
                  *((_DWORD *)v2537 + 522) += v2835;
LABEL_4084:
                  if ( !v2537 )
                  {
LABEL_4231:
                    v2537 = 0LL;
                    break;
                  }
                  if ( (v2537[2171] & 8) != 0 )
                  {
                    v2862 = 1;
                    LODWORD(v3809) = 1;
                    do
                    {
                      v2863 = *(_QWORD **)(*(_QWORD *)v3813 + 8LL * v2862 + 28);
                      if ( v2863 )
                      {
                        v2864 = *((_DWORD *)v2537 + 526);
                        v2865 = 32;
                        v2866 = *((unsigned int *)v2537 + 505);
                        if ( v2864 != 7 )
                          v2865 = 0;
                        v2867 = v2866 + 48;
                        if ( (unsigned int)(v2866 + 48) <= *((_DWORD *)v2537 + 647) )
                        {
                          v2868 = v2537;
                          *((_DWORD *)v2537 + 505) = v2867;
                        }
                        else
                        {
                          v2868 = (_BYTE *)sub_140B11020(v2537, v2867, *((unsigned int *)v2537 + 585));
                          if ( !v2868 )
                            goto LABEL_3626;
                          v2869 = *((_DWORD *)v2537 + 612);
                          if ( (v2869 & 4) == 0 )
                          {
                            v2870 = *((_DWORD *)v2537 + 505);
                            v2871 = *((_QWORD *)v2537 + 249);
                            v2872 = (v2869 & 0x20000000) != 0 ? *((_DWORD *)v2537 + 585) : 0;
                            if ( v2870 >= 8 )
                            {
                              v2873 = (unsigned __int64)v2870 >> 3;
                              do
                              {
                                *(_QWORD *)v2537 = 0LL;
                                v2870 -= 8;
                                v2537 += 8;
                                --v2873;
                              }
                              while ( v2873 );
                            }
                            for ( ; v2870; --v2870 )
                              *v2537++ = 0;
                            v2874 = *((_DWORD *)v2868 + 585);
                            *((_DWORD *)v2868 + 585) = v2872;
                            if ( v2872 == 3 )
                            {
                              (*((void (__fastcall **)(__int64))v2868 + 109))(v2871);
                            }
                            else if ( (*((_DWORD *)v2868 + 612) & 0x10000000) != 0 || !v2872 )
                            {
                              (*((void (__fastcall **)(__int64))v2868 + 31))(v2871);
                            }
                            else
                            {
                              (*((void (__fastcall **)(__int64, _QWORD))v2868 + 69))(v2871 - 8, *(_QWORD *)(v2871 - 8));
                            }
                            *((_DWORD *)v2868 + 585) = v2874;
                          }
                          *((_DWORD *)v2868 + 612) &= ~4u;
                        }
                        v2875 = &v2868[v2866];
                        ++*((_DWORD *)v2868 + 515);
                        v2876 = v2875;
                        v2877 = 48;
                        v2878 = 6LL;
                        do
                        {
                          *v2876 = 0LL;
                          v2877 -= 8;
                          ++v2876;
                          --v2878;
                        }
                        while ( v2878 );
                        for ( ; v2877; --v2877 )
                        {
                          *(_BYTE *)v2876 = 0;
                          v2876 = (_QWORD *)((char *)v2876 + 1);
                        }
                        *(_DWORD *)v2875 = v2865;
                        *((_QWORD *)v2875 + 1) = v2863;
                        if ( v2864 == 7 )
                          sub_1403EB41C(v2868, v2863, 16LL, v2875 + 24);
                        *((_DWORD *)v2875 + 4) = 16;
                        *((_DWORD *)v2868 + 522) += 16;
                        v2879 = v2863;
                        v2880 = *((_DWORD *)v2868 + 517);
                        v2881 = (const char *)v2863;
                        v2882 = *((_QWORD *)v2868 + 259);
                        if ( v2863 < v2863 + 2 )
                        {
                          do
                          {
                            _mm_prefetch(v2881, 0);
                            v2881 += 64;
                          }
                          while ( v2881 < (const char *)v2863 + 16 );
                        }
                        v2883 = 16;
                        v2884 = 2LL;
                        do
                        {
                          v2882 = __ROL8__(*v2879++ ^ v2882, v2880);
                          v2883 -= 8;
                          --v2884;
                        }
                        while ( v2884 );
                        for ( ; v2883; --v2883 )
                        {
                          v2885 = *(unsigned __int8 *)v2879;
                          v2879 = (_QWORD *)((char *)v2879 + 1);
                          v2882 = __ROL8__(v2885 ^ v2882, v2880);
                        }
                        for ( i67 = v2882 >> 31; i67; i67 >>= 31 )
                          LODWORD(v2882) = i67 ^ v2882;
                        v2887 = 32;
                        *((_DWORD *)v2875 + 5) = v2882 & 0x7FFFFFFF;
                        *((_DWORD *)v2868 + 522) += 16;
                        v2888 = (const char *)v2863[1];
                        v2889 = *((unsigned int *)v2868 + 505);
                        v2890 = *((_DWORD *)v2868 + 526);
                        if ( v2890 != 7 )
                          v2887 = 0;
                        v2891 = v2889 + 48;
                        if ( (unsigned int)(v2889 + 48) <= *((_DWORD *)v2868 + 647) )
                        {
                          v2537 = v2868;
                          *((_DWORD *)v2868 + 505) = v2891;
                        }
                        else
                        {
                          v2537 = (_BYTE *)sub_140B11020(v2868, v2891, *((unsigned int *)v2868 + 585));
                          if ( !v2537 )
                            goto LABEL_3626;
                          v2892 = *((_DWORD *)v2868 + 612);
                          if ( (v2892 & 4) == 0 )
                          {
                            v2893 = *((_DWORD *)v2868 + 505);
                            v2894 = *((_QWORD *)v2868 + 249);
                            v2895 = (v2892 & 0x20000000) != 0 ? *((_DWORD *)v2868 + 585) : 0;
                            if ( v2893 >= 8 )
                            {
                              v2896 = (unsigned __int64)v2893 >> 3;
                              do
                              {
                                *(_QWORD *)v2868 = 0LL;
                                v2893 -= 8;
                                v2868 += 8;
                                --v2896;
                              }
                              while ( v2896 );
                            }
                            for ( ; v2893; --v2893 )
                              *v2868++ = 0;
                            v2897 = *((_DWORD *)v2537 + 585);
                            *((_DWORD *)v2537 + 585) = v2895;
                            if ( v2895 == 3 )
                            {
                              (*((void (__fastcall **)(__int64))v2537 + 109))(v2894);
                            }
                            else if ( (*((_DWORD *)v2537 + 612) & 0x10000000) != 0 || !v2895 )
                            {
                              (*((void (__fastcall **)(__int64))v2537 + 31))(v2894);
                            }
                            else
                            {
                              (*((void (__fastcall **)(__int64, _QWORD))v2537 + 69))(v2894 - 8, *(_QWORD *)(v2894 - 8));
                            }
                            *((_DWORD *)v2537 + 585) = v2897;
                          }
                          *((_DWORD *)v2537 + 612) &= ~4u;
                        }
                        ++*((_DWORD *)v2537 + 515);
                        v2898 = &v2537[v2889];
                        v2899 = 48;
                        v2900 = &v2537[v2889];
                        v2901 = 6LL;
                        do
                        {
                          *v2900 = 0LL;
                          v2899 -= 8;
                          ++v2900;
                          --v2901;
                        }
                        while ( v2901 );
                        for ( ; v2899; --v2899 )
                        {
                          *(_BYTE *)v2900 = 0;
                          v2900 = (_QWORD *)((char *)v2900 + 1);
                        }
                        *(_DWORD *)v2898 = v2887;
                        *((_QWORD *)v2898 + 1) = v2888;
                        if ( v2890 == 7 )
                          sub_1403EB41C(v2537, v2888, 8LL, v2898 + 24);
                        *((_DWORD *)v2898 + 4) = 8;
                        *((_DWORD *)v2537 + 522) += 8;
                        for ( i68 = v2888; i68 < v2888 + 8; i68 += 64 )
                          _mm_prefetch(i68, 0);
                        v2903 = __ROL8__(*(_QWORD *)v2888 ^ *((_QWORD *)v2537 + 259), *((_DWORD *)v2537 + 517));
                        for ( i69 = v2903; ; LODWORD(v2903) = i69 ^ v2903 )
                        {
                          i69 >>= 31;
                          if ( !i69 )
                            break;
                        }
                        *((_DWORD *)v2898 + 5) = v2903 & 0x7FFFFFFF;
                        *((_DWORD *)v2537 + 522) += 8;
                      }
                      v2862 = v3809 + 1;
                      LODWORD(v3809) = v2862;
                    }
                    while ( v2862 < 8 );
                  }
                  v2905 = (char *)qword_140D81080;
                  if ( qword_140D81080 )
                  {
                    v2906 = *((_DWORD *)v2537 + 526);
                    v2907 = 32;
                    v2908 = *((unsigned int *)v2537 + 505);
                    if ( v2906 != 7 )
                      v2907 = 0;
                    v2909 = v2908 + 48;
                    if ( (unsigned int)(v2908 + 48) <= *((_DWORD *)v2537 + 647) )
                    {
                      v2910 = v2537;
                      *((_DWORD *)v2537 + 505) = v2909;
                    }
                    else
                    {
                      v2910 = (_BYTE *)sub_140B11020(v2537, v2909, *((unsigned int *)v2537 + 585));
                      if ( !v2910 )
                        goto LABEL_3626;
                      v2911 = *((_DWORD *)v2537 + 612);
                      if ( (v2911 & 4) == 0 )
                      {
                        v2912 = *((_DWORD *)v2537 + 505);
                        v2913 = *((_QWORD *)v2537 + 249);
                        v2914 = (v2911 & 0x20000000) != 0 ? *((_DWORD *)v2537 + 585) : 0;
                        if ( v2912 >= 8 )
                        {
                          v2915 = (unsigned __int64)v2912 >> 3;
                          do
                          {
                            *(_QWORD *)v2537 = 0LL;
                            v2912 -= 8;
                            v2537 += 8;
                            --v2915;
                          }
                          while ( v2915 );
                        }
                        for ( ; v2912; --v2912 )
                          *v2537++ = 0;
                        v2916 = *((_DWORD *)v2910 + 585);
                        *((_DWORD *)v2910 + 585) = v2914;
                        if ( v2914 == 3 )
                        {
                          (*((void (__fastcall **)(__int64))v2910 + 109))(v2913);
                        }
                        else if ( (*((_DWORD *)v2910 + 612) & 0x10000000) != 0 || !v2914 )
                        {
                          (*((void (__fastcall **)(__int64))v2910 + 31))(v2913);
                        }
                        else
                        {
                          (*((void (__fastcall **)(__int64, _QWORD))v2910 + 69))(v2913 - 8, *(_QWORD *)(v2913 - 8));
                        }
                        *((_DWORD *)v2910 + 585) = v2916;
                      }
                      *((_DWORD *)v2910 + 612) &= ~4u;
                    }
                    v2917 = (ULONG_PTR)&v2910[v2908];
                    ++*((_DWORD *)v2910 + 515);
                    v2918 = (_QWORD *)v2917;
                    v3813 = v2917;
                    v2919 = 48;
                    v2920 = 6LL;
                    do
                    {
                      *v2918 = 0LL;
                      v2919 -= 8;
                      ++v2918;
                      --v2920;
                    }
                    while ( v2920 );
                    for ( ; v2919; --v2919 )
                    {
                      *(_BYTE *)v2918 = 0;
                      v2918 = (_QWORD *)((char *)v2918 + 1);
                    }
                    *(_DWORD *)v2917 = v2907;
                    *(_QWORD *)(v2917 + 8) = v2905;
                    if ( v2906 == 7 )
                      sub_1403EB41C(v2910, v2905, 512LL, v2917 + 24);
                    *(_DWORD *)(v2917 + 16) = 512;
                    *((_DWORD *)v2910 + 522) += 512;
                    v2921 = v2905;
                    v2922 = *((_DWORD *)v2910 + 517);
                    v2923 = v2905;
                    for ( i70 = *((_QWORD *)v2910 + 259); v2923 < v2905 + 512; v2923 += 64 )
                      _mm_prefetch(v2923, 0);
                    v2925 = 4;
                    v2926 = *((_QWORD *)v2910 + 259);
                    do
                    {
                      v2927 = 8LL;
                      do
                      {
                        v2928 = *((_QWORD *)v2921 + 1) ^ __ROL8__(*(_QWORD *)v2921 ^ v2926, v2922);
                        v2921 += 16;
                        v2926 = __ROL8__(v2928, v2922);
                        --v2927;
                      }
                      while ( v2927 );
                      v2929 = (__ROL8__(i70 ^ (v2921 - v2905), 17) ^ i70 ^ (unsigned __int64)(v2921 - v2905))
                            * (unsigned __int128)0x7010008004002001uLL;
                      v4070 = *((_QWORD *)&v2929 + 1);
                      v2922 = ((unsigned __int8)v2929 ^ (unsigned __int8)(BYTE8(v2929) ^ v2922)) & 0x3F;
                      if ( !v2922 )
                        LOBYTE(v2922) = 1;
                      --v2925;
                    }
                    while ( v2925 );
                    for ( i71 = v2926 >> 31; i71; i71 >>= 31 )
                      LODWORD(v2926) = i71 ^ v2926;
                    v2931 = 32;
                    *(_DWORD *)(v3813 + 20) = v2926 & 0x7FFFFFFF;
                    *((_DWORD *)v2910 + 522) += 512;
                    v2932 = *((unsigned int *)v2910 + 505);
                    v2933 = (char *)qword_140D81080 + 512;
                    v2934 = *((_DWORD *)v2910 + 526);
                    if ( v2934 != 7 )
                      v2931 = 0;
                    v2935 = v2932 + 48;
                    if ( (unsigned int)(v2932 + 48) <= *((_DWORD *)v2910 + 647) )
                    {
                      v2537 = v2910;
                      *((_DWORD *)v2910 + 505) = v2935;
                    }
                    else
                    {
                      v2537 = (_BYTE *)sub_140B11020(v2910, v2935, *((unsigned int *)v2910 + 585));
                      if ( !v2537 )
                        goto LABEL_3626;
                      v2936 = *((_DWORD *)v2910 + 612);
                      if ( (v2936 & 4) == 0 )
                      {
                        v2937 = *((_DWORD *)v2910 + 505);
                        v2938 = *((_QWORD *)v2910 + 249);
                        v2939 = (v2936 & 0x20000000) != 0 ? *((_DWORD *)v2910 + 585) : 0;
                        if ( v2937 >= 8 )
                        {
                          v2940 = (unsigned __int64)v2937 >> 3;
                          do
                          {
                            *(_QWORD *)v2910 = 0LL;
                            v2937 -= 8;
                            v2910 += 8;
                            --v2940;
                          }
                          while ( v2940 );
                        }
                        for ( ; v2937; --v2937 )
                          *v2910++ = 0;
                        v2941 = *((_DWORD *)v2537 + 585);
                        *((_DWORD *)v2537 + 585) = v2939;
                        if ( v2939 == 3 )
                        {
                          (*((void (__fastcall **)(__int64))v2537 + 109))(v2938);
                        }
                        else if ( (*((_DWORD *)v2537 + 612) & 0x10000000) != 0 || !v2939 )
                        {
                          (*((void (__fastcall **)(__int64))v2537 + 31))(v2938);
                        }
                        else
                        {
                          (*((void (__fastcall **)(__int64, _QWORD))v2537 + 69))(v2938 - 8, *(_QWORD *)(v2938 - 8));
                        }
                        *((_DWORD *)v2537 + 585) = v2941;
                      }
                      *((_DWORD *)v2537 + 612) &= ~4u;
                    }
                    ++*((_DWORD *)v2537 + 515);
                    v2942 = (ULONG_PTR)&v2537[v2932];
                    v3813 = v2942;
                    v2943 = (_QWORD *)v2942;
                    v2944 = 48;
                    v2945 = 6LL;
                    do
                    {
                      *v2943 = 0LL;
                      v2944 -= 8;
                      ++v2943;
                      --v2945;
                    }
                    while ( v2945 );
                    for ( ; v2944; --v2944 )
                    {
                      *(_BYTE *)v2943 = 0;
                      v2943 = (_QWORD *)((char *)v2943 + 1);
                    }
                    *(_DWORD *)v2942 = v2931;
                    *(_QWORD *)(v2942 + 8) = v2933;
                    if ( v2934 == 7 )
                      sub_1403EB41C(v2537, v2933, 512LL, v2942 + 24);
                    *(_DWORD *)(v2942 + 16) = 512;
                    *((_DWORD *)v2537 + 522) += 512;
                    v2946 = v2933;
                    v2947 = *((_DWORD *)v2537 + 517);
                    v2948 = v2933;
                    for ( i72 = *((_QWORD *)v2537 + 259); v2948 < v2933 + 512; v2948 += 64 )
                      _mm_prefetch(v2948, 0);
                    v2950 = 4;
                    v2951 = *((_QWORD *)v2537 + 259);
                    do
                    {
                      v2952 = 8LL;
                      do
                      {
                        v2953 = *((_QWORD *)v2946 + 1) ^ __ROL8__(*(_QWORD *)v2946 ^ v2951, v2947);
                        v2946 += 16;
                        v2951 = __ROL8__(v2953, v2947);
                        --v2952;
                      }
                      while ( v2952 );
                      v2954 = (__ROL8__(i72 ^ (v2946 - v2933), 17) ^ i72 ^ (unsigned __int64)(v2946 - v2933))
                            * (unsigned __int128)0x7010008004002001uLL;
                      v4071 = *((_QWORD *)&v2954 + 1);
                      v2947 = ((unsigned __int8)v2954 ^ (unsigned __int8)(BYTE8(v2954) ^ v2947)) & 0x3F;
                      if ( !v2947 )
                        LOBYTE(v2947) = 1;
                      --v2950;
                    }
                    while ( v2950 );
                    for ( i73 = v2951; ; LODWORD(v2951) = i73 ^ v2951 )
                    {
                      i73 >>= 31;
                      if ( !i73 )
                        break;
                    }
                    *(_DWORD *)(v3813 + 20) = v2951 & 0x7FFFFFFF;
                    *((_DWORD *)v2537 + 522) += 512;
                  }
                  v2572 = v3810 + 1;
                  LODWORD(v3810) = v2572;
                }
                while ( v2572 < (unsigned int)KeNumberProcessors_0 );
              }
            }
LABEL_4229:
            v4007 = v2537;
            _disable();
            if ( !(_BYTE)KdDebuggerNotPresent )
            {
              while ( 1 )
                ;
            }
            _enable();
            if ( !v2537 )
              return 0;
            _disable();
            if ( !(_BYTE)KdDebuggerNotPresent )
            {
              while ( 1 )
                ;
            }
            _enable();
            v2956 = *((unsigned int *)v2537 + 505);
            v2957 = v2956 + 48;
            if ( (unsigned int)(v2956 + 48) <= *((_DWORD *)v2537 + 647) )
            {
              v2958 = v2537;
              *((_DWORD *)v2537 + 505) = v2957;
            }
            else
            {
              v2958 = (_BYTE *)sub_140B11020(v2537, v2957, *((unsigned int *)v2537 + 585));
              if ( !v2958 )
                return 0;
              v2959 = *((_DWORD *)v2537 + 612);
              if ( (v2959 & 4) == 0 )
              {
                v2960 = *((_DWORD *)v2537 + 505);
                v2961 = *((_QWORD *)v2537 + 249);
                v2962 = (v2959 & 0x20000000) != 0 ? *((_DWORD *)v2537 + 585) : 0;
                if ( v2960 >= 8 )
                {
                  v2963 = (unsigned __int64)v2960 >> 3;
                  do
                  {
                    *(_QWORD *)v2537 = 0LL;
                    v2960 -= 8;
                    v2537 += 8;
                    --v2963;
                  }
                  while ( v2963 );
                }
                for ( ; v2960; --v2960 )
                  *v2537++ = 0;
                v2964 = *((_DWORD *)v2958 + 585);
                *((_DWORD *)v2958 + 585) = v2962;
                if ( v2962 == 3 )
                {
                  (*((void (__fastcall **)(__int64))v2958 + 109))(v2961);
                }
                else if ( (*((_DWORD *)v2958 + 612) & 0x10000000) != 0 || !v2962 )
                {
                  (*((void (__fastcall **)(__int64))v2958 + 31))(v2961);
                }
                else
                {
                  (*((void (__fastcall **)(__int64, _QWORD))v2958 + 69))(v2961 - 8, *(_QWORD *)(v2961 - 8));
                }
                *((_DWORD *)v2958 + 585) = v2964;
              }
              *((_DWORD *)v2958 + 612) &= ~4u;
            }
            ++*((_DWORD *)v2958 + 515);
            v2965 = &v2958[v2956];
            v2966 = 48;
            v2967 = &v2958[v2956];
            v2968 = 6LL;
            do
            {
              *v2967 = 0LL;
              v2966 -= 8;
              ++v2967;
              --v2968;
            }
            while ( v2968 );
            for ( ; v2966; --v2966 )
            {
              *(_BYTE *)v2967 = 0;
              v2967 = (_QWORD *)((char *)v2967 + 1);
            }
            *(_DWORD *)v2965 = 26;
            *((_QWORD *)v2965 + 1) = 0LL;
            *((_DWORD *)v2965 + 4) = 0;
            v2969 = *((_QWORD *)v2958 + 259);
            for ( i74 = v2969; ; LODWORD(v2969) = i74 ^ v2969 )
            {
              i74 >>= 31;
              if ( !i74 )
                break;
            }
            v4007 = v2958;
            *((_DWORD *)v2965 + 5) = v2969 & 0x7FFFFFFF;
            _disable();
            if ( !(_BYTE)KdDebuggerNotPresent )
            {
              while ( 1 )
                ;
            }
            _enable();
            v2971 = *((unsigned int *)v2958 + 505);
            v2972 = v2971 + 48;
            if ( (unsigned int)(v2971 + 48) <= *((_DWORD *)v2958 + 647) )
            {
              v2973 = v2958;
              *((_DWORD *)v2958 + 505) = v2972;
            }
            else
            {
              v2973 = (_BYTE *)sub_140B11020(v2958, v2972, *((unsigned int *)v2958 + 585));
              if ( !v2973 )
                return 0;
              v2974 = *((_DWORD *)v2958 + 612);
              if ( (v2974 & 4) == 0 )
              {
                v2975 = *((_DWORD *)v2958 + 505);
                v2976 = *((_QWORD *)v2958 + 249);
                v2977 = (v2974 & 0x20000000) != 0 ? *((_DWORD *)v2958 + 585) : 0;
                if ( v2975 >= 8 )
                {
                  v2978 = (unsigned __int64)v2975 >> 3;
                  do
                  {
                    *(_QWORD *)v2958 = 0LL;
                    v2975 -= 8;
                    v2958 += 8;
                    --v2978;
                  }
                  while ( v2978 );
                }
                for ( ; v2975; --v2975 )
                  *v2958++ = 0;
                v2979 = *((_DWORD *)v2973 + 585);
                *((_DWORD *)v2973 + 585) = v2977;
                if ( v2977 == 3 )
                {
                  (*((void (__fastcall **)(__int64))v2973 + 109))(v2976);
                }
                else if ( (*((_DWORD *)v2973 + 612) & 0x10000000) != 0 || !v2977 )
                {
                  (*((void (__fastcall **)(__int64))v2973 + 31))(v2976);
                }
                else
                {
                  (*((void (__fastcall **)(__int64, _QWORD))v2973 + 69))(v2976 - 8, *(_QWORD *)(v2976 - 8));
                }
                *((_DWORD *)v2973 + 585) = v2979;
              }
              *((_DWORD *)v2973 + 612) &= ~4u;
            }
            ++*((_DWORD *)v2973 + 515);
            v2980 = &v2973[v2971];
            v2981 = &v2973[v2971];
            v2982 = 48;
            v2983 = 6LL;
            do
            {
              *v2981 = 0LL;
              v2982 -= 8;
              ++v2981;
              --v2983;
            }
            while ( v2983 );
            for ( ; v2982; --v2982 )
            {
              *(_BYTE *)v2981 = 0;
              v2981 = (_QWORD *)((char *)v2981 + 1);
            }
            *(_DWORD *)v2980 = 27;
            *((_QWORD *)v2980 + 1) = 0LL;
            *((_DWORD *)v2980 + 4) = 0;
            v2984 = *((_QWORD *)v2973 + 259);
            for ( i75 = v2984; ; LODWORD(v2984) = i75 ^ v2984 )
            {
              i75 >>= 31;
              if ( !i75 )
                break;
            }
            v4007 = v2973;
            *((_DWORD *)v2980 + 5) = v2984 & 0x7FFFFFFF;
            v2986 = 32;
            v2987 = *((unsigned int *)v2973 + 505);
            v2988 = *((_DWORD *)v2973 + 526);
            if ( v2988 != 7 )
              v2986 = 0;
            v2989 = v2987 + 48;
            if ( (unsigned int)(v2987 + 48) <= *((_DWORD *)v2973 + 647) )
            {
              v2990 = v2973;
              *((_DWORD *)v2973 + 505) = v2989;
            }
            else
            {
              v2990 = (_BYTE *)sub_140B11020(v2973, v2989, *((unsigned int *)v2973 + 585));
              if ( !v2990 )
                return 0;
              v2991 = *((_DWORD *)v2973 + 612);
              if ( (v2991 & 4) == 0 )
              {
                v2992 = *((_DWORD *)v2973 + 505);
                v2993 = *((_QWORD *)v2973 + 249);
                v2994 = (v2991 & 0x20000000) != 0 ? *((_DWORD *)v2973 + 585) : 0;
                if ( v2992 >= 8 )
                {
                  v2995 = (unsigned __int64)v2992 >> 3;
                  do
                  {
                    *(_QWORD *)v2973 = 0LL;
                    v2992 -= 8;
                    v2973 += 8;
                    --v2995;
                  }
                  while ( v2995 );
                }
                for ( ; v2992; --v2992 )
                  *v2973++ = 0;
                v2996 = *((_DWORD *)v2990 + 585);
                *((_DWORD *)v2990 + 585) = v2994;
                if ( v2994 == 3 )
                {
                  (*((void (__fastcall **)(__int64))v2990 + 109))(v2993);
                }
                else if ( (*((_DWORD *)v2990 + 612) & 0x10000000) != 0 || !v2994 )
                {
                  (*((void (__fastcall **)(__int64))v2990 + 31))(v2993);
                }
                else
                {
                  (*((void (__fastcall **)(__int64, _QWORD))v2990 + 69))(v2993 - 8, *(_QWORD *)(v2993 - 8));
                }
                *((_DWORD *)v2990 + 585) = v2996;
              }
              *((_DWORD *)v2990 + 612) &= ~4u;
            }
            ++*((_DWORD *)v2990 + 515);
            v2997 = &v2990[v2987];
            v2998 = 48;
            v2999 = &v2990[v2987];
            v3000 = 6LL;
            do
            {
              *v2999 = 0LL;
              v2998 -= 8;
              ++v2999;
              --v3000;
            }
            while ( v3000 );
            for ( ; v2998; --v2998 )
            {
              *(_BYTE *)v2999 = 0;
              v2999 = (_QWORD *)((char *)v2999 + 1);
            }
            *(_DWORD *)v2997 = v2986;
            *((_QWORD *)v2997 + 1) = &KiKvaShadow;
            if ( v2988 == 7 )
              sub_1403EB41C(v2990, &KiKvaShadow, 1LL, v2997 + 24);
            *((_DWORD *)v2997 + 4) = 1;
            ++*((_DWORD *)v2990 + 522);
            v3001 = *((_DWORD *)v2990 + 517);
            _mm_prefetch(&KiKvaShadow, 0);
            v3002 = __ROL8__(*((_QWORD *)v2990 + 259) ^ (unsigned __int8)KiKvaShadow, v3001);
            for ( i76 = v3002; ; LODWORD(v3002) = i76 ^ v3002 )
            {
              i76 >>= 31;
              if ( !i76 )
                break;
            }
            v4007 = v2990;
            *((_DWORD *)v2997 + 5) = v3002 & 0x7FFFFFFF;
            ++*((_DWORD *)v2990 + 522);
            if ( (v2990[2171] & 8) != 0 )
            {
              _disable();
              if ( !(_BYTE)KdDebuggerNotPresent )
              {
                while ( 1 )
                  ;
              }
              _enable();
              v3004 = *((unsigned int *)v2990 + 505);
              v3005 = v3004 + 48;
              if ( (unsigned int)(v3004 + 48) <= *((_DWORD *)v2990 + 647) )
              {
                v3006 = (__int64)v2990;
                *((_DWORD *)v2990 + 505) = v3005;
              }
              else
              {
                v3006 = sub_140B11020(v2990, v3005, *((unsigned int *)v2990 + 585));
                if ( !v3006 )
                  return 0;
                v3007 = *((_DWORD *)v2990 + 612);
                if ( (v3007 & 4) == 0 )
                {
                  v3008 = *((_DWORD *)v2990 + 505);
                  v3009 = *((_QWORD *)v2990 + 249);
                  v3010 = (v3007 & 0x20000000) != 0 ? *((_DWORD *)v2990 + 585) : 0;
                  if ( v3008 >= 8 )
                  {
                    v3011 = (unsigned __int64)v3008 >> 3;
                    do
                    {
                      *(_QWORD *)v2990 = 0LL;
                      v3008 -= 8;
                      v2990 += 8;
                      --v3011;
                    }
                    while ( v3011 );
                  }
                  for ( ; v3008; --v3008 )
                    *v2990++ = 0;
                  v3012 = *(_DWORD *)(v3006 + 2340);
                  *(_DWORD *)(v3006 + 2340) = v3010;
                  if ( v3010 == 3 )
                  {
                    (*(void (__fastcall **)(__int64))(v3006 + 872))(v3009);
                  }
                  else if ( (*(_DWORD *)(v3006 + 2448) & 0x10000000) != 0 || !v3010 )
                  {
                    (*(void (__fastcall **)(__int64))(v3006 + 248))(v3009);
                  }
                  else
                  {
                    (*(void (__fastcall **)(__int64, _QWORD))(v3006 + 552))(v3009 - 8, *(_QWORD *)(v3009 - 8));
                  }
                  *(_DWORD *)(v3006 + 2340) = v3012;
                }
                *(_DWORD *)(v3006 + 2448) &= ~4u;
              }
              ++*(_DWORD *)(v3006 + 2060);
              v3013 = v3006 + v3004;
              v3014 = (_QWORD *)(v3006 + v3004);
              v3015 = 48;
              v3016 = 6LL;
              do
              {
                *v3014 = 0LL;
                v3015 -= 8;
                ++v3014;
                --v3016;
              }
              while ( v3016 );
              for ( ; v3015; --v3015 )
              {
                *(_BYTE *)v3014 = 0;
                v3014 = (_QWORD *)((char *)v3014 + 1);
              }
              *(_DWORD *)v3013 = 47;
              *(_QWORD *)(v3013 + 8) = 0LL;
              *(_DWORD *)(v3013 + 16) = 0;
              v3017 = *(_QWORD *)(v3006 + 2072);
              for ( i77 = v3017; ; LODWORD(v3017) = i77 ^ v3017 )
              {
                i77 >>= 31;
                if ( !i77 )
                  break;
              }
              v2990 = (_BYTE *)v3006;
              *(_DWORD *)(v3013 + 20) = v3017 & 0x7FFFFFFF;
              v4007 = (_BYTE *)v3006;
            }
            _disable();
            if ( !(_BYTE)KdDebuggerNotPresent )
            {
              while ( 1 )
                ;
            }
            _enable();
            v3019 = *((unsigned int *)v2990 + 505);
            v3020 = v3019 + 48;
            if ( (unsigned int)(v3019 + 48) <= *((_DWORD *)v2990 + 647) )
            {
              v3021 = v2990;
              *((_DWORD *)v2990 + 505) = v3020;
            }
            else
            {
              v3021 = (_BYTE *)sub_140B11020(v2990, v3020, *((unsigned int *)v2990 + 585));
              if ( !v3021 )
                return 0;
              v3022 = *((_DWORD *)v2990 + 612);
              if ( (v3022 & 4) == 0 )
              {
                v3023 = *((_DWORD *)v2990 + 505);
                v3024 = *((_QWORD *)v2990 + 249);
                v3025 = (v3022 & 0x20000000) != 0 ? *((_DWORD *)v2990 + 585) : 0;
                if ( v3023 >= 8 )
                {
                  v3026 = (unsigned __int64)v3023 >> 3;
                  do
                  {
                    *(_QWORD *)v2990 = 0LL;
                    v3023 -= 8;
                    v2990 += 8;
                    --v3026;
                  }
                  while ( v3026 );
                }
                for ( ; v3023; --v3023 )
                  *v2990++ = 0;
                v3027 = *((_DWORD *)v3021 + 585);
                *((_DWORD *)v3021 + 585) = v3025;
                if ( v3025 == 3 )
                {
                  (*((void (__fastcall **)(__int64))v3021 + 109))(v3024);
                }
                else if ( (*((_DWORD *)v3021 + 612) & 0x10000000) != 0 || !v3025 )
                {
                  (*((void (__fastcall **)(__int64))v3021 + 31))(v3024);
                }
                else
                {
                  (*((void (__fastcall **)(__int64, _QWORD))v3021 + 69))(v3024 - 8, *(_QWORD *)(v3024 - 8));
                }
                *((_DWORD *)v3021 + 585) = v3027;
              }
              *((_DWORD *)v3021 + 612) &= ~4u;
            }
            ++*((_DWORD *)v3021 + 515);
            v3028 = &v3021[v3019];
            v3029 = &v3021[v3019];
            v3030 = 48;
            v3031 = 6LL;
            do
            {
              *v3029 = 0LL;
              v3030 -= 8;
              ++v3029;
              --v3031;
            }
            while ( v3031 );
            for ( ; v3030; --v3030 )
            {
              *(_BYTE *)v3029 = 0;
              v3029 = (_QWORD *)((char *)v3029 + 1);
            }
            *(_DWORD *)v3028 = 46;
            *((_QWORD *)v3028 + 1) = 0LL;
            *((_DWORD *)v3028 + 4) = 0;
            v3032 = *((_QWORD *)v3021 + 259);
            for ( i78 = v3032; ; LODWORD(v3032) = i78 ^ v3032 )
            {
              i78 >>= 31;
              if ( !i78 )
                break;
            }
            v4007 = v3021;
            *((_DWORD *)v3028 + 5) = v3032 & 0x7FFFFFFF;
            if ( (__29 & 2) != 0 )
            {
              v3034 = 32;
              *(_QWORD *)(*((_QWORD *)v3021 + 248) + *((_QWORD *)v3021 + 199)) = 0LL;
              v3035 = (const char *)(*((_QWORD *)v3021 + 199) + *((_QWORD *)v3021 + 248));
              v3036 = *((unsigned int *)v3021 + 505);
              v3037 = *((_DWORD *)v3021 + 526);
              if ( v3037 != 7 )
                v3034 = 0;
              v3038 = v3036 + 48;
              if ( (unsigned int)(v3036 + 48) <= *((_DWORD *)v3021 + 647) )
              {
                v3039 = (__int64)v3021;
                *((_DWORD *)v3021 + 505) = v3038;
              }
              else
              {
                v3039 = sub_140B11020(v3021, v3038, *((unsigned int *)v3021 + 585));
                if ( !v3039 )
                  return 0;
                v3040 = *((_DWORD *)v3021 + 612);
                if ( (v3040 & 4) == 0 )
                {
                  v3041 = *((_DWORD *)v3021 + 505);
                  v3042 = *((_QWORD *)v3021 + 249);
                  v3043 = (v3040 & 0x20000000) != 0 ? *((_DWORD *)v3021 + 585) : 0;
                  if ( v3041 >= 8 )
                  {
                    v3044 = (unsigned __int64)v3041 >> 3;
                    do
                    {
                      *(_QWORD *)v3021 = 0LL;
                      v3041 -= 8;
                      v3021 += 8;
                      --v3044;
                    }
                    while ( v3044 );
                  }
                  for ( ; v3041; --v3041 )
                    *v3021++ = 0;
                  v3045 = *(_DWORD *)(v3039 + 2340);
                  *(_DWORD *)(v3039 + 2340) = v3043;
                  if ( v3043 == 3 )
                  {
                    (*(void (__fastcall **)(__int64))(v3039 + 872))(v3042);
                  }
                  else if ( (*(_DWORD *)(v3039 + 2448) & 0x10000000) != 0 || !v3043 )
                  {
                    (*(void (__fastcall **)(__int64))(v3039 + 248))(v3042);
                  }
                  else
                  {
                    (*(void (__fastcall **)(__int64, _QWORD))(v3039 + 552))(v3042 - 8, *(_QWORD *)(v3042 - 8));
                  }
                  *(_DWORD *)(v3039 + 2340) = v3045;
                }
                *(_DWORD *)(v3039 + 2448) &= ~4u;
              }
              ++*(_DWORD *)(v3039 + 2060);
              v3046 = v3039 + v3036;
              v3047 = 48;
              v3048 = (_QWORD *)(v3039 + v3036);
              v3049 = 6LL;
              do
              {
                *v3048 = 0LL;
                v3047 -= 8;
                ++v3048;
                --v3049;
              }
              while ( v3049 );
              for ( ; v3047; --v3047 )
              {
                *(_BYTE *)v3048 = 0;
                v3048 = (_QWORD *)((char *)v3048 + 1);
              }
              *(_DWORD *)v3046 = v3034;
              *(_QWORD *)(v3046 + 8) = v3035;
              if ( v3037 == 7 )
                sub_1403EB41C(v3039, v3035, 8LL, v3046 + 24);
              *(_DWORD *)(v3046 + 16) = 8;
              *(_DWORD *)(v3039 + 2088) += 8;
              for ( i79 = v3035; i79 < v3035 + 8; i79 += 64 )
                _mm_prefetch(i79, 0);
              v3051 = __ROL8__(*(_QWORD *)v3035 ^ *(_QWORD *)(v3039 + 2072), *(_DWORD *)(v3039 + 2068));
              for ( i80 = v3051; ; LODWORD(v3051) = i80 ^ v3051 )
              {
                i80 >>= 31;
                if ( !i80 )
                  break;
              }
              v4007 = (_BYTE *)v3039;
              *(_DWORD *)(v3046 + 20) = v3051 & 0x7FFFFFFF;
              v3021 = (_BYTE *)v3039;
              *(_DWORD *)(v3039 + 2088) += 8;
            }
            if ( (__29 & 4) != 0 )
            {
              v3053 = 32;
              *(_QWORD *)(*((_QWORD *)v3021 + 248) + 128LL) = 0LL;
              v3054 = *((unsigned int *)v3021 + 505);
              v3055 = (const char *)(*((_QWORD *)v3021 + 248) + 128LL);
              v3056 = *((_DWORD *)v3021 + 526);
              if ( v3056 != 7 )
                v3053 = 0;
              v3057 = v3054 + 48;
              if ( (unsigned int)(v3054 + 48) <= *((_DWORD *)v3021 + 647) )
              {
                v3058 = (__int64)v3021;
                *((_DWORD *)v3021 + 505) = v3057;
              }
              else
              {
                v3058 = sub_140B11020(v3021, v3057, *((unsigned int *)v3021 + 585));
                if ( !v3058 )
                  return 0;
                v3059 = *((_DWORD *)v3021 + 612);
                if ( (v3059 & 4) == 0 )
                {
                  v3060 = *((_DWORD *)v3021 + 505);
                  v3061 = *((_QWORD *)v3021 + 249);
                  v3062 = (v3059 & 0x20000000) != 0 ? *((_DWORD *)v3021 + 585) : 0;
                  if ( v3060 >= 8 )
                  {
                    v3063 = (unsigned __int64)v3060 >> 3;
                    do
                    {
                      *(_QWORD *)v3021 = 0LL;
                      v3060 -= 8;
                      v3021 += 8;
                      --v3063;
                    }
                    while ( v3063 );
                  }
                  for ( ; v3060; --v3060 )
                    *v3021++ = 0;
                  v3064 = *(_DWORD *)(v3058 + 2340);
                  *(_DWORD *)(v3058 + 2340) = v3062;
                  if ( v3062 == 3 )
                  {
                    (*(void (__fastcall **)(__int64))(v3058 + 872))(v3061);
                  }
                  else if ( (*(_DWORD *)(v3058 + 2448) & 0x10000000) != 0 || !v3062 )
                  {
                    (*(void (__fastcall **)(__int64))(v3058 + 248))(v3061);
                  }
                  else
                  {
                    (*(void (__fastcall **)(__int64, _QWORD))(v3058 + 552))(v3061 - 8, *(_QWORD *)(v3061 - 8));
                  }
                  *(_DWORD *)(v3058 + 2340) = v3064;
                }
                *(_DWORD *)(v3058 + 2448) &= ~4u;
              }
              ++*(_DWORD *)(v3058 + 2060);
              v3065 = v3058 + v3054;
              v3066 = 48;
              v3067 = (_QWORD *)(v3058 + v3054);
              v3068 = 6LL;
              do
              {
                *v3067 = 0LL;
                v3066 -= 8;
                ++v3067;
                --v3068;
              }
              while ( v3068 );
              for ( ; v3066; --v3066 )
              {
                *(_BYTE *)v3067 = 0;
                v3067 = (_QWORD *)((char *)v3067 + 1);
              }
              *(_DWORD *)v3065 = v3053;
              *(_QWORD *)(v3065 + 8) = v3055;
              if ( v3056 == 7 )
                sub_1403EB41C(v3058, v3055, 8LL, v3065 + 24);
              *(_DWORD *)(v3065 + 16) = 8;
              *(_DWORD *)(v3058 + 2088) += 8;
              for ( i81 = v3055; i81 < v3055 + 8; i81 += 64 )
                _mm_prefetch(i81, 0);
              v3070 = __ROL8__(*(_QWORD *)v3055 ^ *(_QWORD *)(v3058 + 2072), *(_DWORD *)(v3058 + 2068));
              for ( i82 = v3070; ; LODWORD(v3070) = i82 ^ v3070 )
              {
                i82 >>= 31;
                if ( !i82 )
                  break;
              }
              v4007 = (_BYTE *)v3058;
              *(_DWORD *)(v3065 + 20) = v3070 & 0x7FFFFFFF;
              v3021 = (_BYTE *)v3058;
              *(_DWORD *)(v3058 + 2088) += 8;
            }
            v3072 = *((unsigned int *)v3021 + 505);
            v3073 = 32;
            v3074 = *((_DWORD *)v3021 + 526);
            if ( v3074 != 7 )
              v3073 = 0;
            v3075 = v3072 + 48;
            if ( (unsigned int)(v3072 + 48) <= *((_DWORD *)v3021 + 647) )
            {
              v3076 = v3021;
              *((_DWORD *)v3021 + 505) = v3075;
            }
            else
            {
              v3076 = (_BYTE *)sub_140B11020(v3021, v3075, *((unsigned int *)v3021 + 585));
              if ( !v3076 )
                return 0;
              v3077 = *((_DWORD *)v3021 + 612);
              if ( (v3077 & 4) == 0 )
              {
                v3078 = *((_DWORD *)v3021 + 505);
                v3079 = *((_QWORD *)v3021 + 249);
                v3080 = (v3077 & 0x20000000) != 0 ? *((_DWORD *)v3021 + 585) : 0;
                if ( v3078 >= 8 )
                {
                  v3081 = (unsigned __int64)v3078 >> 3;
                  do
                  {
                    *(_QWORD *)v3021 = 0LL;
                    v3078 -= 8;
                    v3021 += 8;
                    --v3081;
                  }
                  while ( v3081 );
                }
                for ( ; v3078; --v3078 )
                  *v3021++ = 0;
                v3082 = *((_DWORD *)v3076 + 585);
                *((_DWORD *)v3076 + 585) = v3080;
                if ( v3080 == 3 )
                {
                  (*((void (__fastcall **)(__int64))v3076 + 109))(v3079);
                }
                else if ( (*((_DWORD *)v3076 + 612) & 0x10000000) != 0 || !v3080 )
                {
                  (*((void (__fastcall **)(__int64))v3076 + 31))(v3079);
                }
                else
                {
                  (*((void (__fastcall **)(__int64, _QWORD))v3076 + 69))(v3079 - 8, *(_QWORD *)(v3079 - 8));
                }
                *((_DWORD *)v3076 + 585) = v3082;
              }
              *((_DWORD *)v3076 + 612) &= ~4u;
            }
            ++*((_DWORD *)v3076 + 515);
            v3083 = 48;
            v3084 = &v3076[v3072];
            HalExtensionList = (ULONG_PTR)v3084;
            v3085 = v3084;
            v3086 = 6LL;
            do
            {
              *v3085 = 0LL;
              v3083 -= 8;
              ++v3085;
              --v3086;
            }
            while ( v3086 );
            for ( ; v3083; --v3083 )
            {
              *(_BYTE *)v3085 = 0;
              v3085 = (_QWORD *)((char *)v3085 + 1);
            }
            *(_DWORD *)v3084 = v3073;
            *((_QWORD *)v3084 + 1) = &_ti_a;
            if ( v3074 == 7 )
              sub_1403EB41C(v3076, &_ti_a, 328LL, v3084 + 24);
            *((_DWORD *)v3084 + 4) = 328;
            v3087 = (unsigned __int64)&_ti_a;
            *((_DWORD *)v3076 + 522) += 328;
            v3088 = (const char *)&_ti_a;
            v3089 = *((_DWORD *)v3076 + 517);
            v3090 = *((_QWORD *)v3076 + 259);
            do
            {
              _mm_prefetch(v3088, 0);
              v3088 += 64;
            }
            while ( v3088 < (const char *)&qword_14003FCE8 );
            v3091 = *((_QWORD *)v3076 + 259);
            v3092 = 2;
            do
            {
              v3093 = 8LL;
              do
              {
                v3094 = *(_QWORD *)(v3087 + 8) ^ __ROL8__(*(_QWORD *)v3087 ^ v3091, v3089);
                v3087 += 16LL;
                v3091 = __ROL8__(v3094, v3089);
                --v3093;
              }
              while ( v3093 );
              v3095 = (__ROL8__(v3090 ^ (v3087 - (_QWORD)&_ti_a), 17) ^ v3090 ^ (v3087 - (unsigned __int64)&_ti_a))
                    * (unsigned __int128)0x7010008004002001uLL;
              v4072 = *((_QWORD *)&v3095 + 1);
              v3089 = ((unsigned __int8)v3095 ^ (unsigned __int8)(BYTE8(v3095) ^ v3089)) & 0x3F;
              if ( !v3089 )
                LOBYTE(v3089) = 1;
              --v3092;
            }
            while ( v3092 );
            *(_QWORD *)&v3096 = 9LL;
            DWORD2(v3096) = 72;
            do
            {
              v3091 = __ROL8__(*(_QWORD *)v3087 ^ v3091, v3089);
              v3087 += 8LL;
              *((_QWORD *)&v3096 + 1) = (unsigned int)(DWORD2(v3096) - 8);
              *(_QWORD *)&v3096 = v3096 - 1;
            }
            while ( (_QWORD)v3096 );
            if ( DWORD2(v3096) )
            {
              do
              {
                *(_QWORD *)&v3096 = *(unsigned __int8 *)v3087++;
                v3091 = __ROL8__(v3096 ^ v3091, v3089);
                v885 = DWORD2(v3096) == 1;
                *((_QWORD *)&v3096 + 1) = (unsigned int)(DWORD2(v3096) - 1);
              }
              while ( !v885 );
            }
            for ( i83 = v3091; ; LODWORD(v3091) = i83 ^ v3091 )
            {
              i83 >>= 31;
              if ( !i83 )
                break;
            }
            v4007 = v3076;
            *(_DWORD *)(HalExtensionList + 20) = v3091 & 0x7FFFFFFF;
            *((_DWORD *)v3076 + 522) += 328;
            v885 = (*((_DWORD *)v3076 + 612) & 0x40000000) == 0;
            LODWORD(Src) = 0;
            LODWORD(v3810) = 0;
            if ( v885 )
            {
              v3098 = *((unsigned int *)v3076 + 505);
              v3099 = v3827;
              v3100 = *((unsigned int *)v3076 + 585);
              v3101 = *((_DWORD *)v3076 + 505) - v3827;
              LODWORD(Src) = v3098;
              v3102 = v3098 + 48;
              if ( (unsigned int)(v3098 + 48) <= *((_DWORD *)v3076 + 647) )
              {
                v3103 = (__int64)v3076;
                *((_DWORD *)v3076 + 505) = v3102;
              }
              else
              {
                v3103 = sub_140B11020(v3076, v3102, v3100);
                if ( !v3103 )
                  return 0;
                v3104 = *((_DWORD *)v3076 + 612);
                if ( (v3104 & 4) == 0 )
                {
                  v3105 = *((_DWORD *)v3076 + 505);
                  v3106 = *((_QWORD *)v3076 + 249);
                  v3107 = (v3104 & 0x20000000) != 0 ? *((_DWORD *)v3076 + 585) : 0;
                  if ( v3105 >= 8 )
                  {
                    v3108 = (unsigned __int64)v3105 >> 3;
                    do
                    {
                      *(_QWORD *)v3076 = 0LL;
                      v3105 -= 8;
                      v3076 += 8;
                      --v3108;
                    }
                    while ( v3108 );
                  }
                  for ( ; v3105; --v3105 )
                    *v3076++ = 0;
                  v3109 = *(_DWORD *)(v3103 + 2340);
                  *(_DWORD *)(v3103 + 2340) = v3107;
                  if ( v3107 == 3 )
                  {
                    (*(void (__fastcall **)(__int64))(v3103 + 872))(v3106);
                  }
                  else if ( (*(_DWORD *)(v3103 + 2448) & 0x10000000) != 0 || !v3107 )
                  {
                    (*(void (__fastcall **)(__int64))(v3103 + 248))(v3106);
                  }
                  else
                  {
                    (*(void (__fastcall **)(__int64, _QWORD))(v3103 + 552))(v3106 - 8, *(_QWORD *)(v3106 - 8));
                  }
                  *(_DWORD *)(v3103 + 2340) = v3109;
                }
                *(_DWORD *)(v3103 + 2448) &= ~4u;
                v3099 = v3827;
              }
              ++*(_DWORD *)(v3103 + 2060);
              v3110 = v3103 + v3098;
              v3111 = 48;
              HalExtensionList = v3103 + v3098;
              *(_QWORD *)&v3096 = v3103 + v3098;
              *((_QWORD *)&v3096 + 1) = 6LL;
              do
              {
                *(_QWORD *)v3096 = 0LL;
                v3111 -= 8;
                *(_QWORD *)&v3096 = v3096 + 8;
                --*((_QWORD *)&v3096 + 1);
              }
              while ( *((_QWORD *)&v3096 + 1) );
              for ( ; v3111; --v3111 )
              {
                *(_BYTE *)v3096 = 0;
                *(_QWORD *)&v3096 = v3096 + 1;
              }
              *(_DWORD *)v3110 = 42;
              *(_QWORD *)(v3110 + 8) = 0LL;
              *(_DWORD *)(v3110 + 16) = 0;
              v3112 = *(_QWORD *)(v3103 + 2072);
              for ( i84 = v3112; ; LODWORD(v3112) = i84 ^ v3112 )
              {
                i84 >>= 31;
                if ( !i84 )
                  break;
              }
              *(_DWORD *)(v3110 + 20) = v3112 & 0x7FFFFFFF;
              v3114 = (const char *)(v3103 + v3099);
              *(_DWORD *)(v3110 + 32) = v3099;
              v3087 = (unsigned __int64)v3114;
              *(_DWORD *)(v3110 + 36) = v3101;
              v3115 = v3114;
              *(_DWORD *)(v3103 + 2088) += v3101;
              v3116 = *(_DWORD *)(v3103 + 2068);
              v3117 = *(_QWORD *)(v3103 + 2072);
              v3118 = (unsigned __int64)&v3114[v3101];
              if ( (unsigned __int64)v3114 < v3118 )
              {
                do
                {
                  _mm_prefetch(v3115, 0);
                  v3115 += 64;
                }
                while ( (unsigned __int64)v3115 < v3118 );
              }
              v3119 = *(_QWORD *)(v3103 + 2072);
              v3120 = v3101 >> 7;
              if ( v3101 >> 7 )
              {
                do
                {
                  v3121 = 8LL;
                  do
                  {
                    v3122 = *(_QWORD *)(v3087 + 8) ^ __ROL8__(*(_QWORD *)v3087 ^ v3119, v3116);
                    v3087 += 16LL;
                    v3119 = __ROL8__(v3122, v3116);
                    --v3121;
                  }
                  while ( v3121 );
                  v3096 = (__ROL8__(v3117 ^ (v3087 - (_QWORD)v3114), 17) ^ v3117 ^ (v3087 - (unsigned __int64)v3114))
                        * (unsigned __int128)0x7010008004002001uLL;
                  v4073 = *((_QWORD *)&v3096 + 1);
                  v3116 = ((unsigned __int8)v3096 ^ (unsigned __int8)(BYTE8(v3096) ^ v3116)) & 0x3F;
                  if ( !v3116 )
                    LOBYTE(v3116) = 1;
                  --v3120;
                }
                while ( v3120 );
                v3110 = HalExtensionList;
              }
              v3123 = v3101 & 0x7F;
              if ( v3123 >= 8 )
              {
                v3124 = (unsigned __int64)v3123 >> 3;
                do
                {
                  v3119 = __ROL8__(*(_QWORD *)v3087 ^ v3119, v3116);
                  v3087 += 8LL;
                  v3123 -= 8;
                  --v3124;
                }
                while ( v3124 );
              }
              for ( ; v3123; --v3123 )
              {
                v3125 = *(unsigned __int8 *)v3087++;
                v3119 = __ROL8__(v3125 ^ v3119, v3116);
              }
              *(_QWORD *)(v3110 + 24) = v3119;
              v3076 = (_BYTE *)v3103;
              v3126 = *(_DWORD *)(v3103 + 2020);
              v4007 = (_BYTE *)v3103;
              LODWORD(v3810) = v3126;
            }
            for ( i85 = 0; i85 < 2; ++i85 )
            {
              v3128 = 0LL;
              _disable();
              v3129 = *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *((_QWORD *)v3076 + 202));
              _enable();
              (*((void (__fastcall **)(__int64, _QWORD, unsigned __int64))v3076 + 45))(
                v3129,
                *((_QWORD *)&v3096 + 1),
                v3087);
              LOBYTE(v3130) = 1;
              (*((void (__fastcall **)(_QWORD, __int64))v3076 + 28))(*((_QWORD *)v3076 + 166), v3130);
              v3131 = (PVOID *)PsLoadedModuleList;
              if ( PsLoadedModuleList != &PsLoadedModuleList )
              {
                while ( 1 )
                {
                  v3132 = (char *)v3131 - *((_QWORD *)v3076 + 234);
                  if ( RtlEqualUnicodeString(
                         String1: (PCUNICODE_STRING)&unk_140C00208 + i85,
                         String2: (PCUNICODE_STRING)&v3132[*((_QWORD *)v3076 + 237)],
                         CaseInSensitive: 1u) )
                  {
                    break;
                  }
                  v3131 = (PVOID *)*v3131;
                  if ( v3131 == &PsLoadedModuleList )
                    goto LABEL_4517;
                }
                v3128 = *(_QWORD *)&v3132[*((_QWORD *)v3076 + 235)];
              }
LABEL_4517:
              (*((void (__fastcall **)(_QWORD))v3076 + 35))(*((_QWORD *)v3076 + 166));
              (*((void (**)(void))v3076 + 46))();
              if ( v3128 )
              {
                v3133 = *((unsigned int *)v3076 + 505);
                v3087 = *((unsigned int *)v3076 + 585);
                v3134 = &asc_140C00228[8 * i85];
                v3135 = v3133 + ((*v3134 + 7) & 0xFFFFFFF8) + 48;
                if ( v3135 <= *((_DWORD *)v3076 + 647) )
                {
                  v3136 = (__int64)v3076;
                  *((_DWORD *)v3076 + 505) = v3135;
                }
                else
                {
                  v3136 = sub_140B11020(v3076, v3135, v3087);
                  if ( !v3136 )
                    return 0;
                  v3137 = *((_DWORD *)v3076 + 612);
                  if ( (v3137 & 4) == 0 )
                  {
                    v3138 = *((_DWORD *)v3076 + 505);
                    v3139 = *((_QWORD *)v3076 + 249);
                    v3140 = (v3137 & 0x20000000) != 0 ? *((_DWORD *)v3076 + 585) : 0;
                    if ( v3138 >= 8 )
                    {
                      v3141 = (unsigned __int64)v3138 >> 3;
                      do
                      {
                        *(_QWORD *)v3076 = 0LL;
                        v3138 -= 8;
                        v3076 += 8;
                        --v3141;
                      }
                      while ( v3141 );
                    }
                    for ( ; v3138; --v3138 )
                      *v3076++ = 0;
                    v3142 = *(_DWORD *)(v3136 + 2340);
                    *(_DWORD *)(v3136 + 2340) = v3140;
                    if ( v3140 == 3 )
                    {
                      (*(void (__fastcall **)(__int64))(v3136 + 872))(v3139);
                    }
                    else if ( (*(_DWORD *)(v3136 + 2448) & 0x10000000) != 0 || !v3140 )
                    {
                      (*(void (__fastcall **)(__int64))(v3136 + 248))(v3139);
                    }
                    else
                    {
                      (*(void (__fastcall **)(__int64, _QWORD))(v3136 + 552))(v3139 - 8, *(_QWORD *)(v3139 - 8));
                    }
                    *(_DWORD *)(v3136 + 2340) = v3142;
                  }
                  *(_DWORD *)(v3136 + 2448) &= ~4u;
                }
                v3143 = v3136 + v3133;
                ++*(_DWORD *)(v3136 + 2060);
                v3144 = (_QWORD *)(v3136 + v3133);
                v3145 = 48;
                v3146 = 6LL;
                do
                {
                  *v3144 = 0LL;
                  v3145 -= 8;
                  ++v3144;
                  --v3146;
                }
                while ( v3146 );
                for ( ; v3145; --v3145 )
                {
                  *(_BYTE *)v3144 = 0;
                  v3144 = (_QWORD *)((char *)v3144 + 1);
                }
                *(_DWORD *)v3143 = 28;
                *(_QWORD *)(v3143 + 8) = 0LL;
                *(_DWORD *)(v3143 + 16) = 0;
                v3147 = *(_QWORD *)(v3136 + 2072);
                for ( i86 = v3147; ; LODWORD(v3147) = i86 ^ v3147 )
                {
                  i86 >>= 31;
                  if ( !i86 )
                    break;
                }
                v3149 = (char *)(v3143 + 48);
                *(_DWORD *)(v3143 + 20) = v3147 & 0x7FFFFFFF;
                *(_QWORD *)(v3143 + 24) = v3128;
                *(_WORD *)(v3143 + 40) = *v3134;
                *((_QWORD *)&v3096 + 1) = *v3134;
                v3150 = (_QWORD *)*((_QWORD *)v3134 + 1);
                if ( DWORD2(v3096) >= 8 )
                {
                  v3087 = (unsigned __int64)*v3134 >> 3;
                  do
                  {
                    *((_QWORD *)&v3096 + 1) = (unsigned int)(DWORD2(v3096) - 8);
                    *(_QWORD *)v3149 = *v3150++;
                    v3149 += 8;
                    --v3087;
                  }
                  while ( v3087 );
                }
                if ( DWORD2(v3096) )
                {
                  v3151 = v3149 - (char *)v3150;
                  do
                  {
                    *((_BYTE *)v3150 + v3151) = *(_BYTE *)v3150;
                    v3150 = (_QWORD *)((char *)v3150 + 1);
                    v885 = DWORD2(v3096) == 1;
                    *((_QWORD *)&v3096 + 1) = (unsigned int)(DWORD2(v3096) - 1);
                  }
                  while ( !v885 );
                }
                v3076 = (_BYTE *)v3136;
              }
            }
            v4007 = v3076;
            _disable();
            if ( !(_BYTE)KdDebuggerNotPresent )
            {
              while ( 1 )
                ;
            }
            _enable();
            v3152 = *((unsigned int *)v3076 + 505);
            v3153 = v3152 + 48;
            if ( (unsigned int)(v3152 + 48) <= *((_DWORD *)v3076 + 647) )
            {
              v3154 = v3076;
              *((_DWORD *)v3076 + 505) = v3153;
            }
            else
            {
              v3154 = (_BYTE *)sub_140B11020(v3076, v3153, *((unsigned int *)v3076 + 585));
              if ( !v3154 )
                return 0;
              v3155 = *((_DWORD *)v3076 + 612);
              if ( (v3155 & 4) == 0 )
              {
                v3156 = *((_DWORD *)v3076 + 505);
                v3157 = *((_QWORD *)v3076 + 249);
                v3158 = (v3155 & 0x20000000) != 0 ? *((_DWORD *)v3076 + 585) : 0;
                if ( v3156 >= 8 )
                {
                  v3159 = (unsigned __int64)v3156 >> 3;
                  do
                  {
                    *(_QWORD *)v3076 = 0LL;
                    v3156 -= 8;
                    v3076 += 8;
                    --v3159;
                  }
                  while ( v3159 );
                }
                for ( ; v3156; --v3156 )
                  *v3076++ = 0;
                v3160 = *((_DWORD *)v3154 + 585);
                *((_DWORD *)v3154 + 585) = v3158;
                if ( v3158 == 3 )
                {
                  (*((void (__fastcall **)(__int64))v3154 + 109))(v3157);
                }
                else if ( (*((_DWORD *)v3154 + 612) & 0x10000000) != 0 || !v3158 )
                {
                  (*((void (__fastcall **)(__int64))v3154 + 31))(v3157);
                }
                else
                {
                  (*((void (__fastcall **)(__int64, _QWORD))v3154 + 69))(v3157 - 8, *(_QWORD *)(v3157 - 8));
                }
                *((_DWORD *)v3154 + 585) = v3160;
              }
              *((_DWORD *)v3154 + 612) &= ~4u;
            }
            ++*((_DWORD *)v3154 + 515);
            v3161 = &v3154[v3152];
            v3162 = 48;
            v3163 = &v3154[v3152];
            v3164 = 6LL;
            do
            {
              *v3163 = 0LL;
              v3162 -= 8;
              ++v3163;
              --v3164;
            }
            while ( v3164 );
            for ( ; v3162; --v3162 )
            {
              *(_BYTE *)v3163 = 0;
              v3163 = (_QWORD *)((char *)v3163 + 1);
            }
            *(_DWORD *)v3161 = 24;
            *((_QWORD *)v3161 + 1) = 0LL;
            *((_DWORD *)v3161 + 4) = 0;
            v3165 = *((_QWORD *)v3154 + 259);
            for ( i87 = v3165; ; LODWORD(v3165) = i87 ^ v3165 )
            {
              i87 >>= 31;
              if ( !i87 )
                break;
            }
            v4007 = v3154;
            *((_DWORD *)v3161 + 5) = v3165 & 0x7FFFFFFF;
            _disable();
            if ( !(_BYTE)KdDebuggerNotPresent )
            {
              while ( 1 )
                ;
            }
            _enable();
            v3167 = *((unsigned int *)v3154 + 505);
            v3168 = v3167 + 48;
            if ( (unsigned int)(v3167 + 48) <= *((_DWORD *)v3154 + 647) )
            {
              v3169 = v3154;
              *((_DWORD *)v3154 + 505) = v3168;
            }
            else
            {
              v3169 = (_BYTE *)sub_140B11020(v3154, v3168, *((unsigned int *)v3154 + 585));
              if ( !v3169 )
                return 0;
              v3170 = *((_DWORD *)v3154 + 612);
              if ( (v3170 & 4) == 0 )
              {
                v3171 = *((_DWORD *)v3154 + 505);
                v3172 = *((_QWORD *)v3154 + 249);
                v3173 = (v3170 & 0x20000000) != 0 ? *((_DWORD *)v3154 + 585) : 0;
                if ( v3171 >= 8 )
                {
                  v3174 = (unsigned __int64)v3171 >> 3;
                  do
                  {
                    *(_QWORD *)v3154 = 0LL;
                    v3171 -= 8;
                    v3154 += 8;
                    --v3174;
                  }
                  while ( v3174 );
                }
                for ( ; v3171; --v3171 )
                  *v3154++ = 0;
                v3175 = *((_DWORD *)v3169 + 585);
                *((_DWORD *)v3169 + 585) = v3173;
                if ( v3173 == 3 )
                {
                  (*((void (__fastcall **)(__int64))v3169 + 109))(v3172);
                }
                else if ( (*((_DWORD *)v3169 + 612) & 0x10000000) != 0 || !v3173 )
                {
                  (*((void (__fastcall **)(__int64))v3169 + 31))(v3172);
                }
                else
                {
                  (*((void (__fastcall **)(__int64, _QWORD))v3169 + 69))(v3172 - 8, *(_QWORD *)(v3172 - 8));
                }
                *((_DWORD *)v3169 + 585) = v3175;
              }
              *((_DWORD *)v3169 + 612) &= ~4u;
            }
            ++*((_DWORD *)v3169 + 515);
            v3176 = &v3169[v3167];
            v3177 = 48;
            v3178 = &v3169[v3167];
            v3179 = 6LL;
            do
            {
              *v3178 = 0LL;
              v3177 -= 8;
              ++v3178;
              --v3179;
            }
            while ( v3179 );
            for ( ; v3177; --v3177 )
            {
              *(_BYTE *)v3178 = 0;
              v3178 = (_QWORD *)((char *)v3178 + 1);
            }
            *(_DWORD *)v3176 = 15;
            *((_QWORD *)v3176 + 1) = 0LL;
            *((_DWORD *)v3176 + 4) = 0;
            v3180 = *((_QWORD *)v3169 + 259);
            for ( i88 = v3180; ; LODWORD(v3180) = i88 ^ v3180 )
            {
              i88 >>= 31;
              if ( !i88 )
                break;
            }
            v4007 = v3169;
            *((_DWORD *)v3176 + 5) = v3180 & 0x7FFFFFFF;
            if ( (*((_DWORD *)v3169 + 612) & 0x40000000) == 0 && (*((_DWORD *)v3169 + 613) & 0x80u) != 0 )
            {
              v3182 = *((unsigned int *)v3169 + 505);
              v3183 = (unsigned int)Src;
              v3184 = v3810 - (_DWORD)Src;
              v3185 = v3182 + 48;
              if ( (unsigned int)(v3182 + 48) <= *((_DWORD *)v3169 + 647) )
              {
                v3186 = (__int64)v3169;
                *((_DWORD *)v3169 + 505) = v3185;
              }
              else
              {
                v3186 = sub_140B11020(v3169, v3185, *((unsigned int *)v3169 + 585));
                if ( !v3186 )
                  return 0;
                v3187 = *((_DWORD *)v3169 + 612);
                if ( (v3187 & 4) == 0 )
                {
                  v3188 = *((_DWORD *)v3169 + 505);
                  v3189 = *((_QWORD *)v3169 + 249);
                  v3190 = (v3187 & 0x20000000) != 0 ? *((_DWORD *)v3169 + 585) : 0;
                  if ( v3188 >= 8 )
                  {
                    v3191 = (unsigned __int64)v3188 >> 3;
                    do
                    {
                      *(_QWORD *)v3169 = 0LL;
                      v3188 -= 8;
                      v3169 += 8;
                      --v3191;
                    }
                    while ( v3191 );
                  }
                  for ( ; v3188; --v3188 )
                    *v3169++ = 0;
                  v3192 = *(_DWORD *)(v3186 + 2340);
                  *(_DWORD *)(v3186 + 2340) = v3190;
                  if ( v3190 == 3 )
                  {
                    (*(void (__fastcall **)(__int64))(v3186 + 872))(v3189);
                  }
                  else if ( (*(_DWORD *)(v3186 + 2448) & 0x10000000) != 0 || !v3190 )
                  {
                    (*(void (__fastcall **)(__int64))(v3186 + 248))(v3189);
                  }
                  else
                  {
                    (*(void (__fastcall **)(__int64, _QWORD))(v3186 + 552))(v3189 - 8, *(_QWORD *)(v3189 - 8));
                  }
                  v3183 = (unsigned int)Src;
                  *(_DWORD *)(v3186 + 2340) = v3192;
                }
                *(_DWORD *)(v3186 + 2448) &= ~4u;
              }
              ++*(_DWORD *)(v3186 + 2060);
              v3193 = v3186 + v3182;
              v3194 = 48;
              HalExtensionList = v3186 + v3182;
              v3195 = (_QWORD *)(v3186 + v3182);
              v3196 = 6LL;
              do
              {
                *v3195 = 0LL;
                v3194 -= 8;
                ++v3195;
                --v3196;
              }
              while ( v3196 );
              for ( ; v3194; --v3194 )
              {
                *(_BYTE *)v3195 = 0;
                v3195 = (_QWORD *)((char *)v3195 + 1);
              }
              *(_DWORD *)v3193 = 42;
              *(_QWORD *)(v3193 + 8) = 0LL;
              *(_DWORD *)(v3193 + 16) = 0;
              v3197 = *(_QWORD *)(v3186 + 2072);
              for ( i89 = v3197; ; LODWORD(v3197) = i89 ^ v3197 )
              {
                i89 >>= 31;
                if ( !i89 )
                  break;
              }
              *(_DWORD *)(v3193 + 20) = v3197 & 0x7FFFFFFF;
              v3199 = (_QWORD *)(v3186 + v3183);
              *(_DWORD *)(v3193 + 32) = v3183;
              v3200 = v3199;
              *(_DWORD *)(v3193 + 36) = v3184;
              v3201 = (const char *)v3199;
              *(_DWORD *)(v3186 + 2088) += v3184;
              v3202 = *(_DWORD *)(v3186 + 2068);
              v3203 = *(_QWORD *)(v3186 + 2072);
              v3204 = (unsigned __int64)v3199 + v3184;
              if ( (unsigned __int64)v3199 < v3204 )
              {
                do
                {
                  _mm_prefetch(v3201, 0);
                  v3201 += 64;
                }
                while ( (unsigned __int64)v3201 < v3204 );
              }
              v3205 = *(_QWORD *)(v3186 + 2072);
              v3206 = v3184 >> 7;
              if ( v3184 >> 7 )
              {
                do
                {
                  v3207 = 8LL;
                  do
                  {
                    v3208 = v3200[1] ^ __ROL8__(*v3200 ^ v3205, v3202);
                    v3200 += 2;
                    v3205 = __ROL8__(v3208, v3202);
                    --v3207;
                  }
                  while ( v3207 );
                  v3209 = (__ROL8__(v3203 ^ ((char *)v3200 - (char *)v3199), 17) ^ v3203 ^ (unsigned __int64)((char *)v3200 - (char *)v3199))
                        * (unsigned __int128)0x7010008004002001uLL;
                  v4074 = *((_QWORD *)&v3209 + 1);
                  v3202 = ((unsigned __int8)v3209 ^ (unsigned __int8)(BYTE8(v3209) ^ v3202)) & 0x3F;
                  if ( !v3202 )
                    LOBYTE(v3202) = 1;
                  --v3206;
                }
                while ( v3206 );
                v3193 = HalExtensionList;
              }
              v3210 = v3184 & 0x7F;
              if ( v3210 >= 8 )
              {
                v3211 = (unsigned __int64)v3210 >> 3;
                do
                {
                  v3205 = __ROL8__(*v3200++ ^ v3205, v3202);
                  v3210 -= 8;
                  --v3211;
                }
                while ( v3211 );
              }
              for ( ; v3210; --v3210 )
              {
                v3212 = *(unsigned __int8 *)v3200;
                v3200 = (_QWORD *)((char *)v3200 + 1);
                v3205 = __ROL8__(v3212 ^ v3205, v3202);
              }
              *(_QWORD *)(v3193 + 24) = v3205;
              v3169 = (_BYTE *)v3186;
              v4007 = (_BYTE *)v3186;
            }
            if ( a3 > 1 )
            {
              v3213 = __rdtsc();
              v3214 = *((unsigned int *)v3169 + 515);
              v3215 = (__ROR8__(v3213, 3) ^ v3213) * (unsigned __int128)0x7010008004002001uLL;
              v4075 = *((_QWORD *)&v3215 + 1);
              *((_DWORD *)v3169 + 520) = (*((_QWORD *)&v3215 + 1) ^ (unsigned __int64)v3215) % v3214;
            }
            if ( (*((_DWORD *)v3169 + 612) & 0x10000000) != 0 )
            {
              v3216 = __rdtsc();
              v3217 = (__ROR8__(v3216, 3) ^ v3216) * (unsigned __int128)0x7010008004002001uLL;
              v4076 = *((_QWORD *)&v3217 + 1);
              *((_QWORD *)v3169 + 251) = *((_QWORD *)v3169 + 185)
                                       + 16LL * (((unsigned __int8)v3217 ^ BYTE8(v3217)) & 0xF);
              goto LABEL_4780;
            }
            v3218 = a1;
            v3219 = a1 == 6;
            if ( a1 <= 6 )
              goto LABEL_4722;
            do
            {
              v3220 = v3218 - 7;
              if ( !v3220 )
              {
                v3282 = IopIrpStackProfilerDpcRoutine;
                v3325 = -1073711747;
                goto LABEL_4777;
              }
              v3221 = v3220 - 1;
              if ( !v3221 )
              {
                v3282 = (__int64 (__fastcall *)())&KiBalanceSetManagerDeferredRoutine;
                v3325 = 2080402375;
                goto LABEL_4777;
              }
              if ( v3221 == 1 )
              {
                v3282 = PopThermalZoneDpc;
                v3325 = -2147454541;
                goto LABEL_4777;
              }
              v3222 = __rdtsc();
              v3223 = (__ROR8__(v3222, 3) ^ v3222) * (unsigned __int128)0x7010008004002001uLL;
              v4077 = *((_QWORD *)&v3223 + 1);
              v1163 = ((unsigned __int64)v3223 ^ *((_QWORD *)&v3223 + 1)) % 0xA < 8;
              v3224 = *((_DWORD *)v3169 + 526);
              v3225 = v3224 - 3;
              if ( !v1163 )
              {
                if ( (v3225 & 0xFFFFFFFA) == 0 && v3224 != 8 )
                  goto LABEL_4720;
                v3288 = 0;
                v3289 = *((_DWORD *)v3169 + 612) & 0x10000000;
                if ( !v3289 )
                  v3288 = *((_DWORD *)v3169 + 585);
                v3290 = *((_DWORD *)v3169 + 516);
                v3291 = __rdtsc();
                v3292 = __ROR8__(v3291, 3);
                v4086 = ((v3292 ^ v3291) * (unsigned __int128)0x7010008004002001uLL) >> 64;
                v3293 = ((unsigned __int16)(8193 * (v3292 ^ v3291)) ^ (unsigned __int16)v4086) & 0x7FF;
                v3294 = __rdtsc();
                v3295 = __ROR8__(v3294, 3) ^ v3294;
                v4087 = (v3295 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                v3296 = (v4087 ^ (0x7010008004002001LL * v3295)) % (unsigned int)(v3293 + 1);
                if ( v3288 )
                {
                  v3297 = __rdtsc();
                  v3298 = __ROR8__(v3297, 3);
                  v4088 = ((v3298 ^ v3297) * (unsigned __int128)0x7010008004002001uLL) >> 64;
                  v3293 += ((((67117057 * ((unsigned int)v3298 ^ (unsigned int)v3297)) ^ (unsigned int)v4088) & 1) << 12)
                         + 4096;
                  v3299 = (unsigned int)(v3293 + 272);
                  v3300 = (*((__int64 (__fastcall **)(__int64, __int64))v3169 + 68))(v3299 + 8, 0xFFFFFFFFLL);
                  v3301 = (_QWORD *)v3300;
                  if ( !v3300 )
                    goto LABEL_4706;
                  if ( !(*((unsigned __int8 (__fastcall **)(__int64, unsigned __int64, __int64))v3169 + 70))(
                          v3300,
                          (v3299 + 4095) & 0xFFFFFFFFFFFFF000uLL,
                          64LL) )
                  {
                    v3262 = (unsigned int)v3299;
                    v3263 = v3301;
LABEL_4695:
                    (*((void (__fastcall **)(_QWORD *, __int64))v3169 + 69))(v3263, v3262);
                    goto LABEL_4706;
                  }
                  *v3301 = (unsigned int)(v3293 + 272) + 8LL;
                  v3302 = (__int64)(v3301 + 1);
                }
                else
                {
                  v3302 = (*((__int64 (__fastcall **)(unsigned __int64, _QWORD, _QWORD, _QWORD))v3169 + 30))(
                            (-(__int64)(v3289 != 0) & 0xFFFFFFFFFFFFFFC0uLL) + 130,
                            (unsigned int)(v3293 + 272),
                            v3290,
                            (unsigned int)-v3289);
                }
                if ( !v3302 )
                  goto LABEL_4706;
                v3303 = v3296;
                v3304 = (_QWORD *)v3302;
                if ( (unsigned int)v3296 >= 8 )
                {
                  v3305 = (unsigned __int64)(unsigned int)v3296 >> 3;
                  do
                  {
                    v3306 = __rdtsc();
                    v3303 -= 8;
                    v3307 = (__ROR8__(v3306, 3) ^ v3306) * (unsigned __int128)0x7010008004002001uLL;
                    v4089 = *((_QWORD *)&v3307 + 1);
                    *v3304++ = v3307 ^ *((_QWORD *)&v3307 + 1);
                    --v3305;
                  }
                  while ( v3305 );
                }
                if ( v3303 )
                {
                  v3308 = __rdtsc();
                  v3309 = (__ROR8__(v3308, 3) ^ v3308) * (unsigned __int128)0x7010008004002001uLL;
                  v4090 = *((_QWORD *)&v3309 + 1);
                  v3310 = v3309 ^ *((_QWORD *)&v3309 + 1);
                  do
                  {
                    *(_BYTE *)v3304 = v3310;
                    v3304 = (_QWORD *)((char *)v3304 + 1);
                    v3310 >>= 8;
                    --v3303;
                  }
                  while ( v3303 );
                }
                v3311 = v3293 - v3296;
                v3312 = (unsigned int)v3296 + v3302;
                v3313 = (_QWORD *)(v3312 + 272);
                if ( v3311 >= 8 )
                {
                  v3314 = (unsigned __int64)v3311 >> 3;
                  do
                  {
                    v3315 = __rdtsc();
                    v3311 -= 8;
                    v3316 = (__ROR8__(v3315, 3) ^ v3315) * (unsigned __int128)0x7010008004002001uLL;
                    v4091 = *((_QWORD *)&v3316 + 1);
                    *v3313++ = v3316 ^ *((_QWORD *)&v3316 + 1);
                    --v3314;
                  }
                  while ( v3314 );
                }
                if ( v3311 )
                {
                  v3317 = __rdtsc();
                  v3318 = (__ROR8__(v3317, 3) ^ v3317) * (unsigned __int128)0x7010008004002001uLL;
                  v4092 = *((_QWORD *)&v3318 + 1);
                  v3319 = v3318 ^ *((_QWORD *)&v3318 + 1);
                  do
                  {
                    *(_BYTE *)v3313 = v3319;
                    v3313 = (_QWORD *)((char *)v3313 + 1);
                    v3319 >>= 8;
                    --v3311;
                  }
                  while ( v3311 );
                }
                if ( !v3312 )
                  goto LABEL_4720;
                v3282 = (__int64 (__fastcall *)())(v3312 + 72);
                v3320 = 200;
                v3321 = (_QWORD *)(v3312 + 72);
                v3322 = KiDpcDispatch;
                v3323 = 25LL;
                do
                {
                  v3320 -= 8;
                  *v3321 = *(_QWORD *)v3322;
                  v3322 = (__int64 (__fastcall *)(__int64, __int64))((char *)v3322 + 8);
                  ++v3321;
                  --v3323;
                }
                while ( v3323 );
                for ( ; v3320; --v3320 )
                {
                  v3324 = *(_BYTE *)v3322;
                  v3322 = (__int64 (__fastcall *)(__int64, __int64))((char *)v3322 + 1);
                  *(_BYTE *)v3321 = v3324;
                  v3321 = (_QWORD *)((char *)v3321 + 1);
                }
                *(_BYTE *)v3312 = 19;
                *(_BYTE *)(v3312 + 1) = 1;
                *(_WORD *)(v3312 + 2) = 0;
                *(_QWORD *)(v3312 + 24) = v3282;
                *(_QWORD *)(v3312 + 32) = 0LL;
                *(_QWORD *)(v3312 + 56) = 0LL;
                *(_QWORD *)(v3312 + 16) = 0LL;
                if ( v3312 == -72 )
                  goto LABEL_4720;
                *((_DWORD *)v3169 + 612) |= 0x100u;
                goto LABEL_4759;
              }
              if ( (v3225 & 0xFFFFFFFA) == 0 && v3224 != 8 )
                goto LABEL_4720;
              v3226 = -1LL;
              v3227 = 0LL;
              v4259 = RtlLookupFunctionTable(KiTimerDispatch, &v4261, v3877);
              v3228 = v4259;
              if ( v4259 )
              {
                v4264 = 0LL;
                if ( v4169 != v4261 )
                  goto LABEL_4669;
                v3229 = (_DWORD *)v4170;
                v4264 = v4170;
                v4265 = 0LL;
                v4266 = v4171;
                v4267 = 0;
                v3230 = RtlLookupFunctionEntry(KiTimerDispatch, &v4261, 0LL);
                v4260 = v3230;
                if ( !v3230 )
                  goto LABEL_4668;
                v3231 = v3230 - v4261;
                v3232 = 0;
                v3233 = *v3229 - 1;
                if ( v3233 < 0 )
                  goto LABEL_4668;
                while ( 1 )
                {
                  v3234 = (v3233 + v3232) >> 1;
                  v3235 = v3231 - v3229[2 * v3234 + 2];
                  if ( v3235 >= 0 )
                  {
                    if ( v3235 <= 0 )
                    {
                      v3236 = (_DWORD *)v4265;
                      if ( v3233 >= v3232 )
                        v3236 = &v3229[2 * ((v3233 + v3232) >> 1) + 2];
                      v4265 = (unsigned __int64)v3236;
LABEL_4668:
                      v3228 = v4259;
LABEL_4669:
                      v3237 = (__int64 *)&v4078;
                      v3238 = v4261;
                      v4263 = (__int64 *)&v4078;
                      v3877[0] /= 0xCu;
                      HalExtensionList = v4261;
                      v4262 = v3228 + 12LL * v3877[0];
                      v4258 = KiTimerDispatch;
                      goto LABEL_4672;
                    }
                    v3232 = v3234 + 1;
                  }
                  else
                  {
                    if ( !v3234 )
                      goto LABEL_4668;
                    v3233 = v3234 - 1;
                  }
                  if ( v3233 < v3232 )
                    goto LABEL_4668;
                }
              }
              v3238 = HalExtensionList;
              while ( 1 )
              {
                v3237 = v4263;
LABEL_4672:
                if ( !v3228 || v3228 == v4262 )
                  break;
                if ( v4264 )
                {
                  if ( !v4260 )
                    break;
                  if ( !v4265 )
                  {
                    *v3237 = v4260;
                    v4260 = 0LL;
                    goto LABEL_4698;
                  }
                  v3239 = *(_DWORD *)(v4265 + 4);
                  if ( (v3239 & 1) != 0 )
                  {
                    *v3237 = v4261 + (v3239 & 0xFFFFFFFE);
                    v4265 = 0LL;
                    goto LABEL_4698;
                  }
                  v3240 = (unsigned int)(v4267 + v3239);
                  v3241 = (unsigned int)v3240;
                  v3242 = v3240 + 4;
                  if ( v3242 < v3241 || v3242 > v4266 )
                  {
                    v3877[1] = 317;
                    KeBugCheckEx(__ROR4__BugCheckCode: (317, 160), BugCheckParameter1: 0x12uLL, BugCheckParameter2: v4264, BugCheckParameter3: v4261, BugCheckParameter4: v3241);
                  }
                  v3243 = *(_DWORD *)(v3241 + v4264);
                  v4267 += 4;
                  v4265 &= -(__int64)((v3243 & 1) != 0);
                  if ( (v3243 & 1) != 0 )
                    v3243 &= ~1u;
                  *v3237 = v4261 + v3243;
                }
                else
                {
                  while ( 1 )
                  {
                    v3244 = v3228;
                    v3245 = RtlpConvertFunctionEntry(v3228, v4261, v3237);
                    v3246 = RtlpSameFunction(v3245, v4261, v4258);
                    v3228 = v4259 + 12;
                    v4259 += 12LL;
                    if ( v3246 )
                      break;
                    if ( v3228 == v4262 )
                      goto LABEL_4687;
                  }
                  *v4263 = v3244;
                }
                v3238 = HalExtensionList;
LABEL_4698:
                if ( v3226 > v3238 + *v4078 )
                  v3226 = v3238 + *v4078;
                if ( v3227 < v3238 + v4078[1] )
                  v3227 = v3238 + v4078[1];
                v3228 = v4259;
              }
LABEL_4687:
              if ( v3227 )
              {
                v3247 = v3227 - v3226;
                v3814 = v3247;
                if ( v3247 <= 0x1000 )
                {
                  v3248 = 0;
                  v3249 = *((_DWORD *)v3169 + 612) & 0x10000000;
                  if ( !v3249 )
                    v3248 = *((_DWORD *)v3169 + 585);
                  v3250 = *((_DWORD *)v3169 + 516);
                  v3251 = __rdtsc();
                  v3252 = __ROR8__(v3251, 3);
                  v4079 = ((v3252 ^ v3251) * (unsigned __int128)0x7010008004002001uLL) >> 64;
                  v3253 = ((unsigned __int16)(8193 * (v3252 ^ v3251)) ^ (unsigned __int16)v4079) & 0x7FF;
                  v3254 = __rdtsc();
                  v3255 = __ROR8__(v3254, 3) ^ v3254;
                  v4080 = (v3255 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                  v3256 = (v4080 ^ (0x7010008004002001LL * v3255)) % (unsigned int)(v3253 + 1);
                  if ( !v3248 )
                  {
                    v3264 = (*((__int64 (__fastcall **)(unsigned __int64, _QWORD, _QWORD, _QWORD))v3169 + 30))(
                              (-(__int64)(v3249 != 0) & 0xFFFFFFFFFFFFFFC0uLL) + 130,
                              (unsigned int)(v3253 + v3247),
                              v3250,
                              (unsigned int)-v3249);
                    goto LABEL_4705;
                  }
                  v3257 = __rdtsc();
                  v3258 = __ROR8__(v3257, 3);
                  v4081 = ((v3258 ^ v3257) * (unsigned __int128)0x7010008004002001uLL) >> 64;
                  v3253 += ((((unsigned __int8)(v3258 ^ v3257) ^ (unsigned __int8)v4081) & 1) << 12) + 4096;
                  v3259 = (unsigned int)(v3253 + v3247);
                  v3260 = (*((__int64 (__fastcall **)(__int64, __int64))v3169 + 68))(v3259 + 8, 0xFFFFFFFFLL);
                  v3261 = (_QWORD *)v3260;
                  if ( !v3260 )
                    goto LABEL_4706;
                  if ( !(*((unsigned __int8 (__fastcall **)(__int64, _QWORD, __int64))v3169 + 70))(
                          v3260,
                          ((_DWORD)v3259 + 4095) & 0xFFFFF000,
                          64LL) )
                  {
                    v3262 = (unsigned int)v3259;
                    v3263 = v3261;
                    goto LABEL_4695;
                  }
                  *v3261 = v3259 + 8;
                  v3264 = (__int64)(v3261 + 1);
LABEL_4705:
                  if ( !v3264 )
                  {
LABEL_4706:
                    ++*((_DWORD *)v3169 + 646);
                    goto LABEL_4720;
                  }
                  v3265 = v3256;
                  v3266 = (_QWORD *)v3264;
                  if ( (unsigned int)v3256 >= 8 )
                  {
                    v3267 = (unsigned __int64)(unsigned int)v3256 >> 3;
                    do
                    {
                      v3268 = __rdtsc();
                      v3265 -= 8;
                      v3269 = (__ROR8__(v3268, 3) ^ v3268) * (unsigned __int128)0x7010008004002001uLL;
                      v4082 = *((_QWORD *)&v3269 + 1);
                      *v3266++ = v3269 ^ *((_QWORD *)&v3269 + 1);
                      --v3267;
                    }
                    while ( v3267 );
                  }
                  if ( v3265 )
                  {
                    v3270 = __rdtsc();
                    v3271 = (__ROR8__(v3270, 3) ^ v3270) * (unsigned __int128)0x7010008004002001uLL;
                    v4083 = *((_QWORD *)&v3271 + 1);
                    v3272 = v3271 ^ *((_QWORD *)&v3271 + 1);
                    do
                    {
                      *(_BYTE *)v3266 = v3272;
                      v3266 = (_QWORD *)((char *)v3266 + 1);
                      v3272 >>= 8;
                      --v3265;
                    }
                    while ( v3265 );
                  }
                  v3273 = (unsigned int)v3814;
                  v3274 = v3253 - v3256;
                  v3275 = (_QWORD *)((unsigned int)v3256 + v3264 + (unsigned int)v3814);
                  if ( v3274 >= 8 )
                  {
                    v3276 = (unsigned __int64)v3274 >> 3;
                    do
                    {
                      v3277 = __rdtsc();
                      v3274 -= 8;
                      v3278 = (__ROR8__(v3277, 3) ^ v3277) * (unsigned __int128)0x7010008004002001uLL;
                      v4084 = *((_QWORD *)&v3278 + 1);
                      *v3275++ = v3278 ^ *((_QWORD *)&v3278 + 1);
                      --v3276;
                    }
                    while ( v3276 );
                  }
                  if ( v3274 )
                  {
                    v3279 = __rdtsc();
                    v3280 = (__ROR8__(v3279, 3) ^ v3279) * (unsigned __int128)0x7010008004002001uLL;
                    v4085 = *((_QWORD *)&v3280 + 1);
                    v3281 = v3280 ^ *((_QWORD *)&v3280 + 1);
                    do
                    {
                      *(_BYTE *)v3275 = v3281;
                      v3275 = (_QWORD *)((char *)v3275 + 1);
                      v3281 >>= 8;
                      --v3274;
                    }
                    while ( v3274 );
                  }
                  v3282 = (__int64 (__fastcall *)())(v3264 + (unsigned int)v3256);
                  if ( v3282 )
                  {
                    v3326 = (_QWORD *)(v3264 + (unsigned int)v3256);
                    if ( (unsigned int)v3273 >= 8 )
                    {
                      v3327 = v3273 >> 3;
                      do
                      {
                        LODWORD(v3273) = v3273 - 8;
                        *v3326 = *(_QWORD *)v3226;
                        v3226 += 8LL;
                        ++v3326;
                        --v3327;
                      }
                      while ( v3327 );
                    }
                    if ( (_DWORD)v3273 )
                    {
                      v3328 = (char *)v3326 - v3226;
                      do
                      {
                        v3328[v3226] = *(_BYTE *)v3226;
                        ++v3226;
                        LODWORD(v3273) = v3273 - 1;
                      }
                      while ( (_DWORD)v3273 );
                    }
                    *((_DWORD *)v3169 + 612) |= 0x200u;
LABEL_4759:
                    v3325 = 0;
                    goto LABEL_4777;
                  }
                }
              }
LABEL_4720:
              v3283 = __rdtsc();
              v3284 = (__ROR8__(v3283, 3) ^ v3283) * (unsigned __int128)0x7010008004002001uLL;
              v4093 = *((_QWORD *)&v3284 + 1);
              v3218 = ((unsigned __int64)v3284 ^ *((_QWORD *)&v3284 + 1)) % 0xA;
            }
            while ( v3218 > 6 );
            v3219 = v3218 == 6;
LABEL_4722:
            if ( v3219 )
            {
              v3282 = IopTimerDispatch;
LABEL_4776:
              v3325 = 31048;
            }
            else if ( v3218 )
            {
              v3285 = v3218 - 1;
              if ( v3285 )
              {
                v3286 = v3285 - 1;
                if ( v3286 )
                {
                  v3287 = v3286 - 1;
                  if ( v3287 )
                  {
                    if ( v3287 != 1 )
                    {
                      v3282 = (__int64 (__fastcall *)())ExpTimerDpcRoutine;
                      goto LABEL_4776;
                    }
                    v3282 = (__int64 (__fastcall *)())ExpCenturyDpcRoutine;
                    v3325 = -855610774;
                  }
                  else
                  {
                    v3282 = (__int64 (__fastcall *)())ExpTimeZoneDpcRoutine;
                    v3325 = 1895852711;
                  }
                }
                else
                {
                  v3282 = ExpTimeRefreshDpcRoutine;
                  v3325 = -1879020783;
                }
              }
              else
              {
                v3282 = (__int64 (__fastcall *)())CmpLazyFlushDpcRoutine;
                v3325 = -1342149386;
              }
            }
            else
            {
              v3282 = (__int64 (__fastcall *)())CmpEnableLazyFlushDpcRoutine;
              v3325 = -805277989;
            }
LABEL_4777:
            if ( !*((_DWORD *)v3169 + 597) )
              *((_DWORD *)v3169 + 597) = v3325;
            *((_QWORD *)v3169 + 251) = v3282;
LABEL_4780:
            *((_QWORD *)v3169 + 301) = **((_QWORD **)v3169 + 300);
            *((_DWORD *)v3169 + 604) = -1;
            *((_DWORD *)v3169 + 605) = 0;
            *((_QWORD *)v3169 + 303) = 0LL;
            _disable();
            if ( !(_BYTE)KdDebuggerNotPresent )
            {
              while ( 1 )
                ;
            }
            _enable();
            v3329 = __rdtsc();
            v3330 = (__ROR8__(v3329, 3) ^ v3329) * (unsigned __int128)0x7010008004002001uLL;
            v4094 = *((_QWORD *)&v3330 + 1);
            *((_DWORD *)v3169 + 599) = v3330 ^ DWORD2(v3330);
            if ( v4366 == 3 )
            {
              HalExtensionList = sub_140B340C4(v3169, a4);
              if ( !HalExtensionList )
              {
                v3877[2] = 317;
                KeBugCheckEx(__ROR4__BugCheckCode: (317, 160), BugCheckParameter1: 0x1EuLL, BugCheckParameter2: (ULONG_PTR)v3169, BugCheckParameter3: 0LL, BugCheckParameter4: 0LL);
              }
            }
            else
            {
              HalExtensionList = 0LL;
            }
            v3331 = *((unsigned int *)v3169 + 585);
            *((_DWORD *)v3169 + 647) = 0;
            v3332 = *((_DWORD *)v3169 + 505);
            v3333 = v3332 + 4095;
            if ( *((_DWORD *)v3169 + 526) != 7 )
              v3333 = v3332;
            v3334 = sub_140B11020(v3169, v3333, v3331);
            v3335 = 0LL;
            v3814 = v3334;
            v3336 = v3334;
            if ( !v3334 )
              return 0;
            v3337 = *((_DWORD *)v3169 + 612);
            if ( (v3337 & 4) == 0 )
            {
              v3338 = *((_DWORD *)v3169 + 505);
              v3339 = *((_QWORD *)v3169 + 249);
              v3340 = (v3337 & 0x20000000) != 0 ? *((_DWORD *)v3169 + 585) : 0;
              if ( v3338 >= 8 )
              {
                v3335 = (unsigned __int64)v3338 >> 3;
                do
                {
                  *(_QWORD *)v3169 = 0LL;
                  v3338 -= 8;
                  v3169 += 8;
                  --v3335;
                }
                while ( v3335 );
              }
              for ( ; v3338; --v3338 )
                *v3169++ = v3335;
              v3341 = *(_DWORD *)(v3336 + 2340);
              *(_DWORD *)(v3336 + 2340) = v3340;
              if ( v3340 == 3 )
              {
                (*(void (__fastcall **)(__int64, unsigned __int64))(v3336 + 872))(v3339, v3335);
              }
              else if ( (*(_DWORD *)(v3336 + 2448) & 0x10000000) != 0 || !v3340 )
              {
                (*(void (__fastcall **)(__int64, unsigned __int64))(v3336 + 248))(v3339, v3335);
              }
              else
              {
                (*(void (__fastcall **)(__int64, _QWORD))(v3336 + 552))(v3339 - 8, *(_QWORD *)(v3339 - 8));
              }
              *(_DWORD *)(v3336 + 2340) = v3341;
              v3335 = 0LL;
            }
            *(_DWORD *)(v3336 + 2448) &= ~4u;
            v3813 = *(_QWORD *)(v3336 + 2696);
            *(_QWORD *)(v3336 + 2696) = 0LL;
            v3342 = *(unsigned int *)(v3336 + 2600);
            if ( (_DWORD)v3342 )
            {
              v3343 = (int *)(v3336 + v3342);
              v3344 = *(_QWORD **)(v3336 + v3342 + 8);
              v3812 = v3336 + v3342;
              if ( v3344 )
              {
                v3345 = (unsigned int)v3343[4];
                v3346 = v3344;
                *(_DWORD *)(v3336 + 2088) += v3345;
                v3347 = (const char *)v3344;
                v3348 = *(unsigned int *)(v3336 + 2068);
                v3349 = *(_QWORD *)(v3336 + 2072);
                if ( v3344 < (_QWORD *)((char *)v3344 + v3345) )
                {
                  do
                  {
                    _mm_prefetch(v3347, 0);
                    v3347 += 64;
                  }
                  while ( v3347 < (const char *)v3344 + v3345 );
                }
                v3350 = *(_QWORD *)(v3336 + 2072);
                v3351 = (unsigned int)v3345 >> 7;
                if ( (unsigned int)v3345 >> 7 )
                {
                  do
                  {
                    v3352 = 8LL;
                    do
                    {
                      v3353 = v3346[1] ^ __ROL8__(*v3346 ^ v3350, v3348);
                      v3346 += 2;
                      v3350 = __ROL8__(v3353, v3348);
                      --v3352;
                    }
                    while ( v3352 );
                    v3354 = (__ROL8__(v3349 ^ ((char *)v3346 - (char *)v3344), 17) ^ v3349 ^ (unsigned __int64)((char *)v3346 - (char *)v3344))
                          * (unsigned __int128)0x7010008004002001uLL;
                    v4095 = *((_QWORD *)&v3354 + 1);
                    v3348 = ((unsigned __int8)v3354 ^ (unsigned __int8)(BYTE8(v3354) ^ v3348)) & 0x3F;
                    if ( !(_DWORD)v3348 )
                      v3348 = 1LL;
                    --v3351;
                  }
                  while ( v3351 );
                  v3336 = v3814;
                  v3335 = 0LL;
                  v3343 = (int *)v3812;
                }
                v3355 = v3345 & 0x7F;
                if ( (unsigned int)v3355 >= 8 )
                {
                  v3356 = (unsigned __int64)(unsigned int)v3355 >> 3;
                  do
                  {
                    v3350 = __ROL8__(*v3346++ ^ v3350, v3348);
                    v3355 = (unsigned int)(v3355 - 8);
                    --v3356;
                  }
                  while ( v3356 );
                }
                if ( (_DWORD)v3355 )
                {
                  do
                  {
                    v3357 = *(unsigned __int8 *)v3346;
                    v3346 = (_QWORD *)((char *)v3346 + 1);
                    v3350 = __ROL8__(v3357 ^ v3350, v3348);
                    v885 = (_DWORD)v3355 == 1;
                    v3355 = (unsigned int)(v3355 - 1);
                  }
                  while ( !v885 );
                }
                for ( i90 = v3350; ; LODWORD(v3350) = i90 ^ v3350 )
                {
                  i90 >>= 31;
                  if ( !i90 )
                    break;
                }
                v3359 = v3350 & 0x7FFFFFFF;
                v3360 = 0;
                if ( v3359 != v3343[5] )
                {
                  if ( !*v3343 )
                    v3360 = v3343[6] != 0;
                  v3361 = (unsigned int)v3343[4];
                  v3335 = *((_QWORD *)v3343 + 1);
                  if ( v3343[4] && (*(_DWORD *)(v3336 + 2452) & 0x40) != 0 )
                  {
                    v3362 = KeGetCurrentIrql();
                    v4370 = v3362;
                    __writecr8(2uLL);
                    v3363 = v3335 & 0xFFFFFFFFFFFFF000uLL;
                    v3816 = (v3335 + v3361 - 1) | 0xFFF;
                    v3820 = (v3335 & 0xFFFFFFFFFFFFF000uLL) - 1;
                    while ( 2 )
                    {
                      v3364 = v3362;
                      while ( 1 )
                      {
                        v3365 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, __int64))(v3336 + 1128))(
                                  v3363,
                                  0LL,
                                  v3355,
                                  v3348);
                        if ( v3365 != -1073741267 )
                          break;
                        if ( v3360 )
                          goto LABEL_4836;
                        v3362 = v4370;
                        if ( v4370 > 1u )
                          goto LABEL_4834;
                        v3364 = v4370;
                        __writecr8(v4370);
                        KeGetCurrentIrql();
                        __writecr8(2uLL);
                      }
                      if ( v3365 < 0 )
                      {
LABEL_4836:
                        __writecr8(v3364);
                        goto LABEL_4837;
                      }
                      v3362 = v4370;
LABEL_4834:
                      v3335 = 4096LL;
                      v3363 += 4096LL;
                      v3820 += 4096LL;
                      if ( v3820 != v3816 )
                        continue;
                      break;
                    }
                    __writecr8(v3364);
                  }
                  else
                  {
LABEL_4837:
                    if ( !*(_DWORD *)(v3336 + 2296) )
                    {
                      *(_QWORD *)(*(_QWORD *)(v3336 + 1416) + 24LL) = (unsigned int)v3343[5] ^ (unsigned __int64)v3359;
                      v3366 = *((_QWORD *)v3343 + 1);
                      if ( !*(_DWORD *)(v3336 + 2296) )
                      {
                        *(_QWORD *)(v3336 + 2304) = v3336 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(v3336 + 2312) = (char *)v3343 - 0x4C48B4211BBACBEBLL;
                        *(_QWORD *)(v3336 + 2320) = *v3343;
                        *(_QWORD *)(v3336 + 2328) = v3366;
                        *(_DWORD *)(v3336 + 2296) = 1;
                        __ba(v3336, 0LL);
                      }
                    }
                  }
                }
                (*(void (__fastcall **)(_QWORD, unsigned __int64, __int64, __int64))(v3336 + 248))(
                  *((_QWORD *)v3343 + 3),
                  v3335,
                  v3355,
                  v3348);
                *((_QWORD *)v3343 + 1) = 0LL;
                v3343[4] = 0;
                v3367 = *(_QWORD *)(v3336 + 2072);
                for ( i91 = v3367; ; LODWORD(v3367) = i91 ^ v3367 )
                {
                  i91 >>= 31;
                  if ( !i91 )
                    break;
                }
                v3343[5] = v3367 & 0x7FFFFFFF;
              }
              v3369 = __rdtsc();
              v3370 = (__ROR8__(v3369, 3) ^ v3369) * (unsigned __int128)0x7010008004002001uLL;
              v4096 = *((_QWORD *)&v3370 + 1);
              if ( ((unsigned __int64)v3370 ^ *((_QWORD *)&v3370 + 1)) == 3
                                                                        * (((unsigned __int64)v3370 ^ *((_QWORD *)&v3370 + 1))
                                                                         / 3) )
              {
                v3371 = *(unsigned int *)(v3336 + 2064);
                v3372 = __rdtsc();
                v3373 = __ROR8__(v3372, 3);
                v4097 = ((v3373 ^ v3372) * (unsigned __int128)0x7010008004002001uLL) >> 64;
                v3374 = ((unsigned __int16)(8193 * (v3373 ^ v3372)) ^ (unsigned __int16)v4097) & 0x7FF;
                v3375 = __rdtsc();
                v3376 = __ROR8__(v3375, 3) ^ v3375;
                v4098 = (v3376 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                v3377 = (v4098 ^ (0x7010008004002001LL * v3376)) % (unsigned int)(v3374 + 1);
                v3378 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64))(v3336 + 240))(
                          (-(__int64)((*(_DWORD *)(v3336 + 2448) & 0x10000000) != 0) & 0xFFFFFFFFFFFFFFC0uLL) + 130,
                          (unsigned int)(v3374 + 2720),
                          v3371);
                v3379 = v3378;
                if ( v3378 )
                {
                  v3380 = v3377;
                  v3381 = (_QWORD *)v3378;
                  if ( (unsigned int)v3377 >= 8 )
                  {
                    v3382 = (unsigned __int64)(unsigned int)v3377 >> 3;
                    do
                    {
                      v3383 = __rdtsc();
                      v3380 -= 8;
                      v3384 = (__ROR8__(v3383, 3) ^ v3383) * (unsigned __int128)0x7010008004002001uLL;
                      v4099 = *((_QWORD *)&v3384 + 1);
                      *v3381++ = v3384 ^ *((_QWORD *)&v3384 + 1);
                      --v3382;
                    }
                    while ( v3382 );
                  }
                  if ( v3380 )
                  {
                    v3385 = __rdtsc();
                    v3386 = (__ROR8__(v3385, 3) ^ v3385) * (unsigned __int128)0x7010008004002001uLL;
                    v4100 = *((_QWORD *)&v3386 + 1);
                    v3387 = v3386 ^ *((_QWORD *)&v3386 + 1);
                    do
                    {
                      *(_BYTE *)v3381 = v3387;
                      v3381 = (_QWORD *)((char *)v3381 + 1);
                      v3387 >>= 8;
                      --v3380;
                    }
                    while ( v3380 );
                  }
                  v3388 = v3374 - v3377;
                  v3389 = v3379 + (unsigned int)v3377;
                  v3390 = (_QWORD *)(v3389 + 2720);
                  if ( v3388 >= 8 )
                  {
                    v3391 = (unsigned __int64)v3388 >> 3;
                    do
                    {
                      v3392 = __rdtsc();
                      v3388 -= 8;
                      v3393 = (__ROR8__(v3392, 3) ^ v3392) * (unsigned __int128)0x7010008004002001uLL;
                      v4101 = *((_QWORD *)&v3393 + 1);
                      *v3390++ = v3393 ^ *((_QWORD *)&v3393 + 1);
                      --v3391;
                    }
                    while ( v3391 );
                    v3336 = v3814;
                  }
                  if ( v3388 )
                  {
                    v3394 = __rdtsc();
                    v3395 = (__ROR8__(v3394, 3) ^ v3394) * (unsigned __int128)0x7010008004002001uLL;
                    v4102 = *((_QWORD *)&v3395 + 1);
                    v3396 = v3395 ^ *((_QWORD *)&v3395 + 1);
                    do
                    {
                      *(_BYTE *)v3390 = v3396;
                      v3390 = (_QWORD *)((char *)v3390 + 1);
                      v3396 >>= 8;
                      --v3388;
                    }
                    while ( v3388 );
                  }
                  if ( v3343 != (int *)-24LL )
                    *((_QWORD *)v3343 + 3) = v3379;
                  if ( v3389 )
                  {
                    *((_QWORD *)v3343 + 1) = v3389;
                    v3343[4] = 2720;
                    v3397 = 2720;
                    v3398 = (char *)v3336;
                    v3399 = (_QWORD *)(v3379 + (unsigned int)v3377);
                    v3400 = 340LL;
                    do
                    {
                      v3397 -= 8;
                      *v3399 = *(_QWORD *)v3398;
                      v3398 += 8;
                      ++v3399;
                      --v3400;
                    }
                    while ( v3400 );
                    for ( ; v3397; --v3397 )
                    {
                      v3401 = *v3398++;
                      *(_BYTE *)v3399 = v3401;
                      v3399 = (_QWORD *)((char *)v3399 + 1);
                    }
                    v3402 = *(_DWORD *)(v3389 + 2448);
                    *(_DWORD *)(v3389 + 2020) = 2720;
                    *(_DWORD *)(v3389 + 2056) = 2720;
                    v3403 = v3402 & 0xFFF7FFFD | 0x80000;
                    *(_DWORD *)(v3389 + 2448) = v3403;
                    *(_DWORD *)(v3389 + 2604) = 2720;
                    v4371 = v3403;
                    LODWORD(Src) = *(_DWORD *)(v3389 + 2388);
                    v3816 = *(_QWORD *)(v3389 + 1248);
                    v3820 = *(_QWORD *)(v3389 + 1464);
                    *(_DWORD *)(v3389 + 196) = 315;
                    do
                    {
                      v3404 = __rdtsc();
                      v3405 = (__ROR8__(v3404, 3) ^ v3404) * (unsigned __int128)0x7010008004002001uLL;
                      v4103 = *((_QWORD *)&v3405 + 1);
                      v3406 = v3405 ^ *((_QWORD *)&v3405 + 1);
                    }
                    while ( (unsigned __int64)v3405 == *((_QWORD *)&v3405 + 1) );
                    v3407 = (_QWORD *)(v3389 + 1944);
                    v3408 = v3812;
                    v3409 = v4199;
                    v3410 = 32;
                    v3818 = *(_QWORD *)(v3389 + 1976);
                    v3411 = (char *)(v3389 + 1944);
                    LODWORD(v3810) = *(_DWORD *)(v3389 + 2088);
                    v3412 = 4LL;
                    do
                    {
                      v3410 -= 8;
                      *(_QWORD *)v3409 = *(_QWORD *)v3411;
                      v3411 += 8;
                      v3409 += 8;
                      --v3412;
                    }
                    while ( v3412 );
                    for ( ; v3410; --v3410 )
                    {
                      v3413 = *v3411++;
                      *v3409++ = v3413;
                    }
                    *(_QWORD *)(v3389 + 1976) = 0LL;
                    v3414 = 32;
                    *(_DWORD *)(v3389 + 2088) = 0;
                    v3415 = (_QWORD *)(v3389 + 1944);
                    v3416 = 4LL;
                    do
                    {
                      *v3415 = 0LL;
                      v3414 -= 8;
                      ++v3415;
                      --v3416;
                    }
                    while ( v3416 );
                    for ( ; v3414; --v3414 )
                    {
                      *(_BYTE *)v3415 = 0;
                      v3415 = (_QWORD *)((char *)v3415 + 1);
                    }
                    v3417 = *(unsigned int *)(v3389 + 2020);
                    v3418 = (_QWORD *)v3389;
                    *(_DWORD *)(v3389 + 2088) += v3417;
                    v3419 = (const char *)v3389;
                    v3420 = *(_DWORD *)(v3389 + 2068);
                    v3421 = *(_QWORD *)(v3389 + 2072);
                    if ( v3389 < v3389 + v3417 )
                    {
                      do
                      {
                        _mm_prefetch(v3419, 0);
                        v3419 += 64;
                      }
                      while ( (unsigned __int64)v3419 < v3389 + v3417 );
                    }
                    v3422 = (unsigned int)v3417 >> 7;
                    if ( (unsigned int)v3417 >> 7 )
                    {
                      v3423 = *(_QWORD *)(v3389 + 2072);
                      do
                      {
                        v3424 = 8LL;
                        do
                        {
                          v3425 = v3418[1] ^ __ROL8__(*v3418 ^ v3421, v3420);
                          v3418 += 2;
                          v3421 = __ROL8__(v3425, v3420);
                          --v3424;
                        }
                        while ( v3424 );
                        v3426 = (__ROL8__(v3423 ^ ((unsigned __int64)v3418 - v3389), 17) ^ v3423 ^ ((unsigned __int64)v3418
                                                                                                  - v3389))
                              * (unsigned __int128)0x7010008004002001uLL;
                        v4104 = *((_QWORD *)&v3426 + 1);
                        v3420 = ((unsigned __int8)v3426 ^ (unsigned __int8)(BYTE8(v3426) ^ v3420)) & 0x3F;
                        if ( !v3420 )
                          LOBYTE(v3420) = 1;
                        --v3422;
                      }
                      while ( v3422 );
                      v3336 = v3814;
                      v3407 = (_QWORD *)(v3389 + 1944);
                    }
                    v3427 = v3417 & 0x7F;
                    if ( v3427 >= 8 )
                    {
                      v3428 = (unsigned __int64)v3427 >> 3;
                      do
                      {
                        v3421 = __ROL8__(*v3418++ ^ v3421, v3420);
                        v3427 -= 8;
                        --v3428;
                      }
                      while ( v3428 );
                    }
                    for ( ; v3427; --v3427 )
                    {
                      v3429 = *(unsigned __int8 *)v3418;
                      v3418 = (_QWORD *)((char *)v3418 + 1);
                      v3421 = __ROL8__(v3429 ^ v3421, v3420);
                    }
                    v3430 = v4199;
                    *(_QWORD *)(v3389 + 1976) = v3818;
                    v3431 = 32;
                    *(_DWORD *)(v3389 + 2088) += v3810;
                    v3432 = 4LL;
                    do
                    {
                      v3431 -= 8;
                      *v3407 = *(_QWORD *)v3430;
                      v3430 += 8;
                      ++v3407;
                      --v3432;
                    }
                    while ( v3432 );
                    for ( i92 = 0; v3431; --v3431 )
                    {
                      v3434 = *v3430++;
                      *(_BYTE *)v3407 = v3434;
                      v3407 = (_QWORD *)((char *)v3407 + 1);
                    }
                    *(_QWORD *)(v3389 + 1976) = v3421;
                    if ( (*(_DWORD *)(v3389 + 2448) & 0x40000000) == 0 )
                    {
                      v3435 = (_QWORD *)v3389;
                      for ( i93 = 0; i93 < 0x19; ++i93 )
                        *v3435++ ^= v3406;
                      v3437 = v3435 + 314;
                      v3438 = 315;
                      while ( 1 )
                      {
                        *v3437-- ^= v3406;
                        v4105[0] = __ROR8__(v3406, v3438);
                        _bittestandcomplement64(v4105, v4105[0] & 0x3F);
                        if ( !--v3438 )
                          break;
                        v3406 = v4105[0];
                      }
                      v3439 = __rdtsc();
                      v3440 = (__ROR8__(v3439, 3) ^ v3439) * (unsigned __int128)0x7010008004002001uLL;
                      v4105[1] = *((_QWORD *)&v3440 + 1);
                      if ( ((unsigned __int64)v3440 ^ *((_QWORD *)&v3440 + 1)) == 3
                                                                                * (((unsigned __int64)v3440 ^ *((_QWORD *)&v3440 + 1))
                                                                                 / 3) )
                      {
                        v3441 = (unsigned int)Src;
                        v3442 = v3820;
                        v3443 = (ULONG_PTR *)v3389;
                        v3444 = v3816;
                        v3445 = __ROR8__(v3389, v3389);
                        do
                        {
                          v3446 = *v3443 - i92 - v3389;
                          if ( (v4371 & 0x200) != 0 )
                            v3447 = v3446 ^ v3445;
                          else
                            v3447 = v3442 ^ __ROR8__(v3445 ^ _byteswap_uint64(v3446 ^ v3444), v3442);
                          *v3443++ = v3447;
                          v3445 = v3441 ^ (v3389
                                         + __ROL8__(
                                             __ROR8__(i92 ^ (unsigned __int64)(200 - i92), ~(_BYTE)v3447) ^ v3445,
                                             (unsigned __int8)v3447 ^ 0x29u));
                          ++i92;
                        }
                        while ( i92 <= 0x18 );
                        v3336 = v3814;
                        v3408 = v3812;
                      }
                    }
                    v3448 = *(_QWORD **)(v3408 + 8);
                    v3449 = *(unsigned int *)(v3408 + 16);
                    v3450 = v3448;
                    *(_DWORD *)(v3336 + 2088) += v3449;
                    v3451 = (const char *)v3448;
                    v3452 = *(_DWORD *)(v3336 + 2068);
                    v3453 = *(_QWORD *)(v3336 + 2072);
                    if ( v3448 < (_QWORD *)((char *)v3448 + v3449) )
                    {
                      do
                      {
                        _mm_prefetch(v3451, 0);
                        v3451 += 64;
                      }
                      while ( v3451 < (const char *)v3448 + v3449 );
                    }
                    v3454 = (unsigned int)v3449 >> 7;
                    v3455 = *(_QWORD *)(v3336 + 2072);
                    if ( (unsigned int)v3449 >> 7 )
                    {
                      do
                      {
                        v3456 = 8LL;
                        do
                        {
                          v3457 = v3450[1] ^ __ROL8__(*v3450 ^ v3455, v3452);
                          v3450 += 2;
                          v3455 = __ROL8__(v3457, v3452);
                          --v3456;
                        }
                        while ( v3456 );
                        v3458 = (__ROL8__(v3453 ^ ((char *)v3450 - (char *)v3448), 17) ^ v3453 ^ (unsigned __int64)((char *)v3450 - (char *)v3448))
                              * (unsigned __int128)0x7010008004002001uLL;
                        v4105[2] = *((_QWORD *)&v3458 + 1);
                        v3452 = ((unsigned __int8)v3458 ^ (unsigned __int8)(BYTE8(v3458) ^ v3452)) & 0x3F;
                        if ( !v3452 )
                          LOBYTE(v3452) = 1;
                        --v3454;
                      }
                      while ( v3454 );
                      v3336 = v3814;
                      v3408 = v3812;
                    }
                    v3459 = v3449 & 0x7F;
                    if ( v3459 >= 8 )
                    {
                      v3460 = (unsigned __int64)v3459 >> 3;
                      do
                      {
                        v3455 = __ROL8__(*v3450++ ^ v3455, v3452);
                        v3459 -= 8;
                        --v3460;
                      }
                      while ( v3460 );
                    }
                    for ( ; v3459; --v3459 )
                    {
                      v3461 = *(unsigned __int8 *)v3450;
                      v3450 = (_QWORD *)((char *)v3450 + 1);
                      v3455 = __ROL8__(v3461 ^ v3455, v3452);
                    }
                    for ( i94 = v3455; ; LODWORD(v3455) = i94 ^ v3455 )
                    {
                      i94 >>= 31;
                      if ( !i94 )
                        break;
                    }
                    *(_DWORD *)(v3408 + 20) = v3455 & 0x7FFFFFFF;
                  }
                }
                else
                {
                  ++*(_DWORD *)(v3336 + 2584);
                }
              }
            }
            *(_DWORD *)(v3336 + 2448) |= 0x200000u;
            v3463 = *(_DWORD *)(v3336 + 196);
            v3464 = (_QWORD *)v3336;
            *(_DWORD *)(v3336 + 196) = 0;
            v3465 = (const char *)v3336;
            *(_DWORD *)(v3336 + 2088) += 1576;
            v3466 = *(_DWORD *)(v3336 + 2068);
            v3467 = *(_QWORD *)(v3336 + 2072);
            if ( v3336 < v3336 + 1576 )
            {
              do
              {
                _mm_prefetch(v3465, 0);
                v3465 += 64;
              }
              while ( (unsigned __int64)v3465 < v3336 + 1576 );
            }
            v3468 = *(_QWORD *)(v3336 + 2072);
            v3469 = 12;
            do
            {
              v3470 = 8LL;
              do
              {
                v3471 = v3464[1] ^ __ROL8__(*v3464 ^ v3468, v3466);
                v3464 += 2;
                v3468 = __ROL8__(v3471, v3466);
                --v3470;
              }
              while ( v3470 );
              v3472 = (__ROL8__(v3467 ^ ((unsigned __int64)v3464 - v3336), 17) ^ v3467 ^ ((unsigned __int64)v3464 - v3336))
                    * (unsigned __int128)0x7010008004002001uLL;
              v4105[3] = *((_QWORD *)&v3472 + 1);
              v3466 = ((unsigned __int8)(v3472 ^ BYTE8(v3472)) ^ (unsigned __int8)v3466) & 0x3F;
              if ( !v3466 )
                LOBYTE(v3466) = 1;
              --v3469;
            }
            while ( v3469 );
            v3473 = 40;
            v3474 = 5LL;
            do
            {
              v3468 = __ROL8__(*v3464++ ^ v3468, v3466);
              v3473 -= 8;
              --v3474;
            }
            while ( v3474 );
            for ( ; v3473; --v3473 )
            {
              v3475 = *(unsigned __int8 *)v3464;
              v3464 = (_QWORD *)((char *)v3464 + 1);
              v3468 = __ROL8__(v3475 ^ v3468, v3466);
            }
            *(_DWORD *)(v3336 + 196) = v3463;
            *(_QWORD *)(v3336 + 2592) = v3468;
            *(_DWORD *)(v3336 + 2088) = 0;
            *(_DWORD *)(v3336 + 2584) = 0;
            v3812 = *(_QWORD *)(v3336 + 1992);
            memmove(v4319, Src: (const void *)v3336, Size: 0xAA0uLL);
            __ba(v3336, 1LL);
            v4372 = *(_DWORD *)(v3336 + 2388);
            v3476 = *(_DWORD *)(v3336 + 2604) - 200;
            LODWORD(Src) = *(_DWORD *)(v3336 + 2448);
            v3816 = *(_QWORD *)(v3336 + 1248);
            v3477 = v3476 >> 3;
            v3820 = *(_QWORD *)(v3336 + 1464);
            *(_DWORD *)(v3336 + 196) = v3477;
            do
            {
              v3478 = __rdtsc();
              v3479 = (__ROR8__(v3478, 3) ^ v3478) * (unsigned __int128)0x7010008004002001uLL;
              v4105[4] = *((_QWORD *)&v3479 + 1);
              v3480 = v3479 ^ *((_QWORD *)&v3479 + 1);
            }
            while ( (unsigned __int64)v3479 == *((_QWORD *)&v3479 + 1) );
            v3481 = (_QWORD *)(v3336 + 1944);
            v3482 = 32;
            v3818 = *(_QWORD *)(v3336 + 1976);
            v3483 = v4200;
            LODWORD(v3809) = *(_DWORD *)(v3336 + 2088);
            v3484 = (char *)(v3336 + 1944);
            v3485 = 4LL;
            do
            {
              v3482 -= 8;
              *(_QWORD *)v3483 = *(_QWORD *)v3484;
              v3484 += 8;
              v3483 += 8;
              --v3485;
            }
            while ( v3485 );
            for ( ; v3482; --v3482 )
            {
              v3486 = *v3484++;
              *v3483++ = v3486;
            }
            *(_QWORD *)(v3336 + 1976) = 0LL;
            v3487 = 32;
            *(_DWORD *)(v3336 + 2088) = 0;
            v3488 = (_QWORD *)(v3336 + 1944);
            v3489 = 4LL;
            do
            {
              *v3488 = 0LL;
              v3487 -= 8;
              ++v3488;
              --v3489;
            }
            while ( v3489 );
            for ( ; v3487; --v3487 )
            {
              *(_BYTE *)v3488 = 0;
              v3488 = (_QWORD *)((char *)v3488 + 1);
            }
            v3490 = *(unsigned int *)(v3336 + 2020);
            v3491 = (_QWORD *)v3336;
            *(_DWORD *)(v3336 + 2088) += v3490;
            v3492 = (const char *)v3336;
            v3493 = *(_DWORD *)(v3336 + 2068);
            v3494 = *(_QWORD *)(v3336 + 2072);
            if ( v3336 < v3336 + v3490 )
            {
              do
              {
                _mm_prefetch(v3492, 0);
                v3492 += 64;
              }
              while ( (unsigned __int64)v3492 < v3336 + v3490 );
            }
            v3495 = *(_QWORD *)(v3336 + 2072);
            v3496 = (unsigned int)v3490 >> 7;
            if ( (unsigned int)v3490 >> 7 )
            {
              do
              {
                v3497 = 8LL;
                do
                {
                  v3498 = v3491[1] ^ __ROL8__(*v3491 ^ v3495, v3493);
                  v3491 += 2;
                  v3495 = __ROL8__(v3498, v3493);
                  --v3497;
                }
                while ( v3497 );
                v3499 = (__ROL8__(v3494 ^ ((unsigned __int64)v3491 - v3336), 17) ^ v3494 ^ ((unsigned __int64)v3491
                                                                                          - v3336))
                      * (unsigned __int128)0x7010008004002001uLL;
                v4105[5] = *((_QWORD *)&v3499 + 1);
                v3493 = ((unsigned __int8)(v3499 ^ BYTE8(v3499)) ^ (unsigned __int8)v3493) & 0x3F;
                if ( !v3493 )
                  LOBYTE(v3493) = 1;
                --v3496;
              }
              while ( v3496 );
              v3481 = (_QWORD *)(v3336 + 1944);
            }
            v3500 = v3490 & 0x7F;
            if ( v3500 >= 8 )
            {
              v3501 = (unsigned __int64)v3500 >> 3;
              do
              {
                v3495 = __ROL8__(*v3491++ ^ v3495, v3493);
                v3500 -= 8;
                --v3501;
              }
              while ( v3501 );
            }
            for ( ; v3500; --v3500 )
            {
              v3502 = *(unsigned __int8 *)v3491;
              v3491 = (_QWORD *)((char *)v3491 + 1);
              v3495 = __ROL8__(v3502 ^ v3495, v3493);
            }
            v3503 = v4200;
            *(_QWORD *)(v3336 + 1976) = v3818;
            v3504 = 32;
            *(_DWORD *)(v3336 + 2088) += v3809;
            v3505 = 4LL;
            do
            {
              v3504 -= 8;
              *v3481 = *(_QWORD *)v3503;
              v3503 += 8;
              ++v3481;
              --v3505;
            }
            while ( v3505 );
            for ( ; v3504; --v3504 )
            {
              v3506 = *v3503++;
              *(_BYTE *)v3481 = v3506;
              v3481 = (_QWORD *)((char *)v3481 + 1);
            }
            *(_QWORD *)(v3336 + 1976) = v3495;
            if ( (*(_DWORD *)(v3336 + 2448) & 0x40000000) == 0 )
            {
              v3507 = (_QWORD *)v3336;
              for ( i95 = 0; i95 < 0x19; ++i95 )
                *v3507++ ^= v3480;
              v4106[0] = v3480;
              v3509 = v3477;
              if ( v3477 )
              {
                v3510 = &v3507[v3477 - 1];
                while ( 1 )
                {
                  *v3510-- ^= v3480;
                  v4106[0] = __ROR8__(v3480, v3509);
                  _bittestandcomplement64(v4106, v4106[0] & 0x3F);
                  if ( !--v3509 )
                    break;
                  v3480 = v4106[0];
                }
              }
              v3511 = (int)Src;
              if ( ((unsigned int)Src & 0x80000) != 0 )
              {
                v3512 = __rdtsc();
                v3513 = (__ROR8__(v3512, 3) ^ v3512) * (unsigned __int128)0x7010008004002001uLL;
                v4106[1] = *((_QWORD *)&v3513 + 1);
                if ( ((unsigned __int64)v3513 ^ *((_QWORD *)&v3513 + 1)) != 3
                                                                          * (((unsigned __int64)v3513 ^ *((_QWORD *)&v3513 + 1))
                                                                           / 3) )
                  goto LABEL_4987;
              }
              else if ( ((unsigned __int16)Src & 0x100) != 0 )
              {
                goto LABEL_4987;
              }
              v3514 = v3820;
              v3515 = 25;
              v3516 = __ROR8__(v3336, v3336);
              v3517 = 0;
              v3518 = (ULONG_PTR *)v3336;
              v3519 = v3816;
              do
              {
                v3520 = *v3518 - v3517 - v3336;
                if ( (v3511 & 0x200) != 0 )
                  v3521 = v3516 ^ v3520;
                else
                  v3521 = v3514 ^ __ROR8__(v3516 ^ _byteswap_uint64(v3519 ^ v3520), v3514);
                *v3518++ = v3521;
                v3516 = v4372 ^ (v3336
                               + __ROL8__(
                                   __ROR8__(v3517 ^ (unsigned __int64)(200 - v3517), ~(_BYTE)v3521) ^ v3516,
                                   (unsigned __int8)v3521 ^ 0x29u));
                if ( ++v3517 == 25 )
                {
                  v3522 = 0;
                  if ( (v3511 & 0x80000) == 0 )
                    v3522 = v3477;
                  v3515 += v3522;
                }
              }
              while ( v3517 < v3515 );
            }
LABEL_4987:
            KeInitializeTimer(Timer: Timer);
            _disable();
            if ( !(_BYTE)KdDebuggerNotPresent )
            {
              while ( 1 )
                ;
            }
            _enable();
            if ( v4366 != 7 )
              goto LABEL_5243;
            v3523 = 32;
            if ( (*(_DWORD *)(v3336 + 2448) & 0x10000000) != 0 )
              v3523 = 2;
            if ( *(_DWORD *)(v3336 + 2340) )
            {
              MmSetPageProtection(*(_QWORD *)(v3336 + 1992) - 8LL, **(_QWORD **)(v3336 + 1992), v3523);
            }
            else
            {
              v3524 = *(void **)(v3336 + 1992);
              PoolBlockSize = ExQueryPoolBlockSize(PoolBlock: v3524, QuotaCharged: QuotaCharged);
              ExProtectPool(v3524, PoolBlockSize, v3523);
            }
            for ( i96 = 0; i96 < 0x10; ++i96 )
            {
              v3527 = __rdtsc();
              v3528 = (__ROR8__(v3527, 3) ^ v3527) * (unsigned __int128)0x7010008004002001uLL;
              v4106[2] = *((_QWORD *)&v3528 + 1);
              v3529 = ((unsigned __int64)v3528 ^ *((_QWORD *)&v3528 + 1)) % 0xB;
              if ( (unsigned int)v3529 > 5 )
              {
                v3533 = v3529 - 6;
                if ( v3533 )
                {
                  v3534 = v3533 - 1;
                  if ( v3534 )
                  {
                    v3535 = v3534 - 1;
                    if ( v3535 )
                    {
                      if ( v3535 == 1 )
                      {
                        v3877[9] = -1333354875;
                        v3532 = __ROR4__(-1333354868, 33);
                      }
                      else
                      {
                        v3536 = __rdtsc();
                        v3537 = __ROR8__(v3536, 3);
                        v4107 = ((v3537 ^ v3536) * (unsigned __int128)0x7010008004002001uLL) >> 64;
                        v3538 = (67117057 * (v3537 ^ v3536)) ^ v4107;
                        v3532 = ((((((v3538 % 0x1A + 97) << 8) | ((v3538 >> 5)
                                                                - 26
                                                                * ((unsigned int)((1321528399
                                                                                 * (unsigned __int64)(v3538 >> 5)) >> 32) >> 3)
                                                                + 65)) << 8) | ((v3538 >> 10) % 0x1A + 97)) << 8) | ((v3538 >> 15) % 0x1A + 65);
                      }
                    }
                    else
                    {
                      v3877[10] = 1684422978;
                      v3532 = __ROR4__(1684422978, 8);
                    }
                  }
                  else
                  {
                    v3877[11] = -2100910376;
                    v3532 = __ROL4__(-2100910376, 7);
                  }
                }
                else
                {
                  v3877[12] = 1314342514;
                  v3532 = __ROR4__(1314342516, 24);
                }
              }
              else if ( (_DWORD)v3529 == 5 )
              {
                v3877[8] = 680282605;
                v3532 = __ROR4__(680282605, 5);
              }
              else if ( (_DWORD)v3529 )
              {
                v3530 = v3529 - 1;
                if ( v3530 )
                {
                  v3531 = v3530 - 1;
                  if ( v3531 )
                  {
                    if ( v3531 == 1 )
                    {
                      v3877[4] = -1474152136;
                      v3532 = __ROR4__(-1474152133, 15);
                    }
                    else
                    {
                      v3877[3] = 1728537748;
                      v3532 = __ROL4__(1728537748, 4);
                    }
                  }
                  else
                  {
                    v3877[5] = -2051698419;
                    v3532 = __ROR4__(-2051698419, 2);
                  }
                }
                else
                {
                  v3877[6] = -1297272415;
                  v3532 = __ROL4__(-1297272415, 1);
                }
              }
              else
              {
                v3877[7] = -795291432;
                v3532 = __ROR4__(-795291432, 6);
              }
              v3539 = i96;
              dword_140C0DF20[v3539] = v3532;
            }
            v3336 = v3814;
            v3540 = (_QWORD *)v3814;
            v3541 = (const char *)v3814;
            v3542 = *(unsigned int *)(v3814 + 2020);
            v3543 = *(_DWORD *)(v3814 + 2068);
            v3544 = *(_QWORD *)(v3814 + 2072);
            if ( v3814 < v3814 + v3542 )
            {
              do
              {
                _mm_prefetch(v3541, 0);
                v3541 += 64;
              }
              while ( (unsigned __int64)v3541 < v3814 + v3542 );
            }
            v3545 = (unsigned int)v3542 >> 7;
            for ( i97 = *(_QWORD *)(v3814 + 2072); v3545; --v3545 )
            {
              v3547 = 8LL;
              do
              {
                v3548 = v3540[1] ^ __ROL8__(*v3540 ^ i97, v3543);
                v3540 += 2;
                i97 = __ROL8__(v3548, v3543);
                --v3547;
              }
              while ( v3547 );
              v3549 = (__ROL8__(v3544 ^ ((unsigned __int64)v3540 - v3814), 17) ^ v3544 ^ ((unsigned __int64)v3540 - v3814))
                    * (unsigned __int128)0x7010008004002001uLL;
              v4108 = *((_QWORD *)&v3549 + 1);
              v3543 = ((unsigned __int8)v3549 ^ (unsigned __int8)(BYTE8(v3549) ^ v3543)) & 0x3F;
              if ( !v3543 )
                LOBYTE(v3543) = 1;
            }
            v3550 = v3542 & 0x7F;
            if ( v3550 >= 8 )
            {
              v3551 = (unsigned __int64)v3550 >> 3;
              do
              {
                i97 = __ROL8__(*v3540++ ^ i97, v3543);
                v3550 -= 8;
                --v3551;
              }
              while ( v3551 );
            }
            for ( ; v3550; --v3550 )
            {
              v3552 = *(unsigned __int8 *)v3540;
              v3540 = (_QWORD *)((char *)v3540 + 1);
              i97 = __ROL8__(v3552 ^ i97, v3543);
            }
            v3553 = 4;
            qword_140D1EA10 = i97;
            v3554 = 4;
            v4373 = 4;
            v4138 = 0LL;
            v3555 = v4139;
            do
            {
              *v3555++ = 0;
              --v3553;
            }
            while ( v3553 );
            v3556 = 0LL;
            if ( *(_DWORD *)(v3336 + 2060) )
            {
              v3557 = v4139[0];
              v3558 = HIDWORD(v4138);
              v3559 = v4138;
              while ( 1 )
              {
                v3560 = v3336;
                v3561 = 0;
                if ( *(_QWORD *)(v3336 + 2680) )
                  v3560 = *(_QWORD *)(v3336 + 2680);
                v3562 = (int *)(v3560 + *(unsigned int *)(v3560 + 2056));
                if ( v3559 && v3558 <= (unsigned int)v3556 )
                {
                  v3561 = v3558;
                  v3562 = (int *)(v3560 + v3557);
                }
                if ( v3561 != (_DWORD)v3556 )
                {
                  v3563 = (unsigned int)v3556 - v3561;
                  v3561 = v3556;
                  while ( 1 )
                  {
                    v3564 = *v3562;
                    if ( *v3562 > 28 )
                    {
                      v3572 = v3564 - 30;
                      if ( !v3572 )
                      {
                        v3570 = (((v3562[9] != 0 ? v3562[9] - 1 : 0) / 0xCu + 7) & 0xFFFFFFF8)
                              + 24 * (*((unsigned __int16 *)v3562 + 20) + 2);
                        goto LABEL_5063;
                      }
                      v3573 = v3572 - 3;
                      if ( !v3573 || (v3574 = v3573 - 1) == 0 )
                      {
                        v3570 = 20
                              * (unsigned int)(((v3562[8] & 0xFFF) + (unsigned __int64)(unsigned int)v3562[10] + 4095) >> 12)
                              + 48;
                        goto LABEL_5063;
                      }
                      v3569 = v3574 == 9;
                    }
                    else
                    {
                      if ( v3564 == 28 )
                      {
                        v3571 = *((unsigned __int16 *)v3562 + 20);
                        goto LABEL_5051;
                      }
                      v3565 = v3564 - 1;
                      if ( !v3565 )
                        goto LABEL_5060;
                      v3566 = v3565 - 6;
                      if ( !v3566 )
                      {
                        v3570 = (unsigned int)(24 * (v3562[6] + 2));
                        goto LABEL_5063;
                      }
                      v3567 = v3566 - 1;
                      if ( !v3567 )
                      {
                        v3571 = *((unsigned __int16 *)v3562 + 16);
LABEL_5051:
                        v3570 = (v3571 + 55) & 0xFFFFFFF8;
                        goto LABEL_5063;
                      }
                      v3568 = v3567 - 2;
                      if ( !v3568 )
                      {
                        v3570 = (unsigned int)(16 * (v3562[7] + 3));
                        goto LABEL_5063;
                      }
                      v3569 = v3568 == 2;
                    }
                    if ( v3569 )
                    {
LABEL_5060:
                      v3570 = 4 * (v3562[4] / 0xCu) + 48;
                      goto LABEL_5063;
                    }
                    v3570 = 48LL;
LABEL_5063:
                    v3562 = (int *)((char *)v3562 + v3570);
                    if ( !--v3563 )
                    {
                      v3336 = v3814;
                      break;
                    }
                  }
                }
                LODWORD(v4138) = 1;
                v3557 = (_DWORD)v3562 - v3560;
                HIDWORD(v4138) = v3561;
                v4139[0] = (_DWORD)v3562 - v3560;
                v3559 = 1;
                v3575 = *v3562;
                v3558 = v3561;
                if ( (unsigned int)v3575 <= 0x26 && (v3576 = 0x400020020CLL, _bittest64(&v3576, v3575)) )
                {
                  ++v3554;
                  if ( (_DWORD)v3575 == 2 )
                    goto LABEL_5072;
                }
                else
                {
                  if ( (_DWORD)v3575 != 32 )
                  {
                    if ( (_DWORD)v3575 == 7 )
                    {
                      v3554 += v3562[6];
                    }
                    else if ( (_DWORD)v3575 == 33 )
                    {
                      v3578 = v3562 + 12;
                      v3579 = (unsigned __int64)&v3562[5
                                                     * (((unsigned int)v3562[10]
                                                       + 4095LL
                                                       + (*((_QWORD *)v3562 + 4) & 0xFFFuLL)) >> 12)
                                                     + 12];
                      while ( v3578 != (int *)v3579 )
                      {
                        v3580 = v3554++;
                        if ( *((char *)v3578 + 15) < 0 )
                          v3554 = v3580;
                        v3578 += 5;
                      }
                    }
                    goto LABEL_5081;
                  }
                  v3577 = v3562[10];
                  if ( (v3577 & 2) == 0 && (v3577 & 1) != 0 )
LABEL_5072:
                    ++v3554;
                }
LABEL_5081:
                v3556 = (unsigned int)(v3556 + 1);
                if ( (unsigned int)v3556 >= *(_DWORD *)(v3336 + 2060) )
                {
                  v4373 = v3554;
                  break;
                }
              }
            }
            v3581 = __rdtsc();
            v3582 = (__ROR8__(v3581, 3) ^ v3581) * (unsigned __int128)0x7010008004002001uLL;
            v4109 = *((_QWORD *)&v3582 + 1);
            v3583 = ((unsigned __int64)v3582 ^ *((_QWORD *)&v3582 + 1)) % 0xB;
            if ( (unsigned int)v3583 > 5 )
            {
              v3587 = v3583 - 6;
              if ( v3587 )
              {
                v3588 = v3587 - 1;
                if ( v3588 )
                {
                  v3589 = v3588 - 1;
                  if ( v3589 )
                  {
                    if ( v3589 == 1 )
                    {
                      v3877[19] = -1333354875;
                      v3586 = (unsigned int)__ROR4__(-1333354868, 33);
                    }
                    else
                    {
                      v3590 = __rdtsc();
                      v3556 = 1321528399LL;
                      v3591 = __ROR8__(v3590, 3);
                      v4110 = ((v3591 ^ v3590) * (unsigned __int128)0x7010008004002001uLL) >> 64;
                      v3592 = (67117057 * (v3591 ^ v3590)) ^ v4110;
                      v3586 = ((((((v3592 % 0x1A + 97) << 8) | ((v3592 >> 5)
                                                              - 26
                                                              * ((unsigned int)((1321528399
                                                                               * (unsigned __int64)(v3592 >> 5)) >> 32) >> 3)
                                                              + 65)) << 8) | ((v3592 >> 10)
                                                                            - 26
                                                                            * ((unsigned int)((1321528399
                                                                                             * (unsigned __int64)(v3592 >> 10)) >> 32) >> 3)
                                                                            + 97)) << 8) | ((v3592 >> 15) % 0x1A + 65);
                    }
                  }
                  else
                  {
                    v3877[20] = 1684422978;
                    v3586 = (unsigned int)__ROR4__(1684422978, 8);
                  }
                }
                else
                {
                  v3877[21] = -2100910376;
                  v3586 = (unsigned int)__ROL4__(-2100910376, 7);
                }
              }
              else
              {
                v3877[22] = 1314342514;
                v3586 = (unsigned int)__ROR4__(1314342516, 24);
              }
            }
            else if ( (_DWORD)v3583 == 5 )
            {
              v3877[18] = 680282605;
              v3586 = (unsigned int)__ROR4__(680282605, 5);
            }
            else if ( (_DWORD)v3583 )
            {
              v3584 = v3583 - 1;
              if ( v3584 )
              {
                v3585 = v3584 - 1;
                if ( v3585 )
                {
                  if ( v3585 == 1 )
                  {
                    v3877[14] = -1474152136;
                    v3586 = (unsigned int)__ROR4__(-1474152133, 15);
                  }
                  else
                  {
                    v3877[13] = 1728537748;
                    v3586 = (unsigned int)__ROL4__(1728537748, 4);
                  }
                }
                else
                {
                  v3877[15] = -2051698419;
                  v3586 = (unsigned int)__ROR4__(-2051698419, 2);
                }
              }
              else
              {
                v3877[16] = -1297272415;
                v3586 = (unsigned int)__ROL4__(-1297272415, 1);
              }
            }
            else
            {
              v3877[17] = -795291432;
              v3586 = (unsigned int)__ROR4__(-795291432, 6);
            }
            v3593 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(v3336 + 240);
            v3816 = (unsigned __int64)v3554 << 6;
            v3594 = v3593(64LL, v3816, v3586, v3556);
            if ( v3594 )
            {
              v3595 = __rdtsc();
              v3596 = (__ROR8__(v3595, 3) ^ v3595) * (unsigned __int128)0x7010008004002001uLL;
              v4111 = *((_QWORD *)&v3596 + 1);
              v4112[0] = v3596 ^ *((_QWORD *)&v3596 + 1) ^ (unsigned int)ExGenRandom(0LL);
              v3597 = __rdtsc();
              v3598 = (__ROR8__(v3597, 3) ^ v3597) * (unsigned __int128)0x7010008004002001uLL;
              v4112[1] = *((_QWORD *)&v3598 + 1);
              v3599 = v3598 ^ *((_QWORD *)&v3598 + 1) ^ (unsigned int)ExGenRandom(0LL);
              v3600 = v3594 + 8;
              v3820 = v3594 + 8;
              v3877[23] = v3599 % 0x3F + 1;
              *(_QWORD *)(v3594 + 8) = 0LL;
              *(_QWORD *)(v3594 + 16) = 0LL;
              *(_WORD *)(v3594 + 24) = 4096;
              *(_QWORD *)(v3594 + 32) = v4112[0];
              *(_DWORD *)(v3594 + 40) = v3877[23];
              *(_DWORD *)(v3594 + 44) = 0;
              v3601 = MmStrongCodeGuaranteesEnforced();
              v3602 = 0;
              if ( v3601 )
              {
                v3603 = sub_140B34784();
                v3602 = 0;
                if ( v3603 )
                  *(_DWORD *)(v3594 + 44) |= 1u;
              }
              if ( (v3862 & 0x10) != 0 )
                *(_DWORD *)(v3594 + 44) |= 4u;
              v3604 = 1;
              v4138 = 0LL;
              v3605 = v4139;
              v3606 = 4;
              do
              {
                *v3605++ = 0;
                --v3606;
              }
              while ( v3606 );
              v3878 = 0;
              v3607 = 0;
              v3608 = 0LL;
              LODWORD(v3810) = 0;
              v3609 = 0LL;
              Timer = 0LL;
              v3818 = 0LL;
              LODWORD(Src) = 0;
              if ( *(_DWORD *)(v3336 + 2060) )
              {
                while ( 1 )
                {
                  v3610 = v3336;
                  if ( *(_QWORD *)(v3336 + 2680) )
                    v3610 = *(_QWORD *)(v3336 + 2680);
                  v3611 = v3610 + *(unsigned int *)(v3610 + 2056);
                  if ( (_DWORD)v4138 && HIDWORD(v4138) <= v3607 )
                  {
                    v3602 = HIDWORD(v4138);
                    v3611 = v3610 + v4139[0];
                  }
                  if ( v3602 != v3607 )
                  {
                    v3612 = v3607 - v3602;
                    v3602 = v3607;
                    while ( 1 )
                    {
                      v3613 = *(_DWORD *)v3611;
                      if ( *(int *)v3611 > 28 )
                      {
                        v3621 = v3613 - 30;
                        if ( !v3621 )
                        {
                          v3619 = (((*(_DWORD *)(v3611 + 36) != 0 ? *(_DWORD *)(v3611 + 36) - 1 : 0) / 0xCu + 7) & 0xFFFFFFF8)
                                + 24 * (*(unsigned __int16 *)(v3611 + 40) + 2);
                          goto LABEL_5141;
                        }
                        v3622 = v3621 - 3;
                        if ( !v3622 || (v3623 = v3622 - 1) == 0 )
                        {
                          v3619 = 20
                                * (unsigned int)(((*(_DWORD *)(v3611 + 32) & 0xFFF)
                                                + (unsigned __int64)*(unsigned int *)(v3611 + 40)
                                                + 4095) >> 12)
                                + 48;
                          goto LABEL_5141;
                        }
                        v3618 = v3623 == 9;
                      }
                      else
                      {
                        if ( v3613 == 28 )
                        {
                          v3620 = *(unsigned __int16 *)(v3611 + 40);
                          goto LABEL_5129;
                        }
                        v3614 = v3613 - 1;
                        if ( !v3614 )
                          goto LABEL_5138;
                        v3615 = v3614 - 6;
                        if ( !v3615 )
                        {
                          v3619 = (unsigned int)(24 * (*(_DWORD *)(v3611 + 24) + 2));
                          goto LABEL_5141;
                        }
                        v3616 = v3615 - 1;
                        if ( !v3616 )
                        {
                          v3620 = *(unsigned __int16 *)(v3611 + 32);
LABEL_5129:
                          v3619 = (v3620 + 55) & 0xFFFFFFF8;
                          goto LABEL_5141;
                        }
                        v3617 = v3616 - 2;
                        if ( !v3617 )
                        {
                          v3619 = (unsigned int)(16 * (*(_DWORD *)(v3611 + 28) + 3));
                          goto LABEL_5141;
                        }
                        v3618 = v3617 == 2;
                      }
                      if ( v3618 )
                      {
LABEL_5138:
                        v3619 = 4 * (*(_DWORD *)(v3611 + 16) / 0xCu) + 48;
                        goto LABEL_5141;
                      }
                      v3619 = 48LL;
LABEL_5141:
                      v3611 += v3619;
                      if ( !--v3612 )
                      {
                        v3336 = v3814;
                        v3608 = Timer;
                        v3609 = v3818;
                        break;
                      }
                    }
                  }
                  LODWORD(v4138) = 1;
                  HIDWORD(v4138) = v3602;
                  v4139[0] = v3611 - v3610;
                  v3624 = *(_DWORD *)v3611;
                  if ( (unsigned int)(*(_DWORD *)v3611 - 2) <= 1 )
                  {
                    v3684 = *(_QWORD *)(v3611 + 8);
                    v3685 = (unsigned __int64)v3604 << 6;
                    *(_QWORD *)(v3685 + v3594 + 8) = v3684;
                    *(_QWORD *)(v3685 + v3594 + 16) = *(unsigned int *)(v3611 + 16);
                    *(_WORD *)(v3685 + v3594 + 24) = 4101 - (*(_DWORD *)v3611 != 3);
                    *(_DWORD *)(v3685 + v3594 + 48) = *(_DWORD *)(v3611 + 40);
                    *(_WORD *)(v3685 + v3594 + 52) = *(_WORD *)(v3611 + 44);
                    sub_1403EB41C(v3336, v3684, *(unsigned int *)(v3685 + v3594 + 16), v3685 + v3594 + 32);
                    v3608 = Timer;
                    v3602 = 0;
                    ++v3604;
                    if ( *(_DWORD *)v3611 == 2 )
                    {
                      v3686 = (unsigned __int64)v3604 << 6;
                      *(_QWORD *)(v3686 + v3594 + 8) = 0LL;
                      *(_QWORD *)(v3686 + v3594 + 16) = 0LL;
                      *(_WORD *)(v3686 + v3594 + 24) = 4107;
                      *(_DWORD *)(v3686 + v3594 + 32) = *(_DWORD *)(v3611 + 40);
LABEL_5221:
                      ++v3604;
                    }
                  }
                  else
                  {
                    switch ( v3624 )
                    {
                      case 9:
                        v3625 = *(_QWORD *)(v3611 + 8);
                        v3626 = (unsigned __int64)v3604 << 6;
                        *(_QWORD *)(v3626 + v3594 + 8) = v3625;
                        *(_QWORD *)(v3626 + v3594 + 16) = *(unsigned int *)(v3611 + 16);
                        *(_WORD *)(v3626 + v3594 + 24) = 4097;
                        sub_1403EB41C(v3336, v3625, *(unsigned int *)(v3626 + v3594 + 16), v3626 + v3594 + 32);
                        v3608 = Timer;
                        ++v3604;
LABEL_5146:
                        v3602 = 0;
                        break;
                      case 32:
                        v3627 = *(_DWORD *)(v3611 + 40);
                        v3628 = 2LL;
                        if ( (v3627 & 2) == 0 && (v3627 & 1) != 0 )
                        {
                          LODWORD(v3629) = 16;
                          v3630 = (char *)(v3611 + 24);
                          v3631 = (unsigned __int64)v3604 << 6;
                          *(_QWORD *)(v3631 + v3594 + 8) = *(_QWORD *)(v3611 + 8);
                          *(_QWORD *)(v3631 + v3594 + 16) = *(unsigned int *)(v3611 + 16);
                          *(_WORD *)(v3631 + v3594 + 24) = 4097;
                          v3632 = (_QWORD *)(v3631 + v3594 + 32);
                          do
                          {
                            v3629 = (unsigned int)(v3629 - 8);
                            *v3632 = *(_QWORD *)v3630;
                            v3630 += 8;
                            ++v3632;
                            --v3628;
                          }
                          while ( v3628 );
                          if ( (_DWORD)v3629 )
                          {
                            do
                            {
                              v3633 = *v3630++;
                              *(_BYTE *)v3632 = v3633;
                              v3632 = (_QWORD *)((char *)v3632 + 1);
                              v885 = (_DWORD)v3629 == 1;
                              v3629 = (unsigned int)(v3629 - 1);
                            }
                            while ( !v885 );
                          }
                          v3634 = *(_QWORD *)(v3611 + 8);
                          v3635 = 0LL;
                          if ( v3634 )
                          {
                            if ( v3634 < (unsigned __int64)v3608 || v3634 >= v3609 )
                            {
                              v3637 = (*(__int64 (__fastcall **)(ULONG_PTR, char *, __int64))(v3336 + 520))(
                                        v3634,
                                        v4113,
                                        v3629);
                              v3608 = Timer;
                              v3636 = (struct _KTIMER *)v3637;
                            }
                            else
                            {
                              v3636 = v3608;
                            }
                          }
                          else
                          {
                            v3636 = 0LL;
                          }
                          if ( (*(_DWORD *)(v3611 + 40) & 4) != 0 )
                          {
                            *(_WORD *)(v3631 + v3594 + 24) = 4106;
                            v3638 = MmGetPhysicalAddress(BaseAddress: *(PVOID *)(v3611 + 8));
                            v3608 = Timer;
                            *(_QWORD *)(v3631 + v3594 + 48) = (unsigned __int64)v3638.QuadPart >> 12;
                          }
                          else if ( v3636 )
                          {
                            v3639 = (*(__int64 (__fastcall **)(struct _KTIMER *, __int64, __int64))(v3336 + 504))(
                                      v3636,
                                      v3635,
                                      v3629);
                            v3640 = (unsigned int)(*(_DWORD *)(v3611 + 8) - (_DWORD)v3636);
                            v3818 = v3639;
                            v3641 = RtlSectionTableFromVirtualAddress(v3639, v3636, v3640);
                            if ( v3641 && (*(_DWORD *)(v3641 + 36) & 0x20000000) != 0 )
                              *(_BYTE *)(v3631 + v3594 + 47) |= 0x80u;
                            v3608 = v3636;
                            Timer = v3636;
                            v3818 = (ULONG_PTR)v3636 + *(unsigned int *)(v3818 + 80);
                          }
                          else
                          {
                            v3642 = *(_QWORD *)(v3611 + 8);
                            if ( v3642 + 0x88000000000LL > 0xFFF )
                            {
                              v3643 = *(unsigned int *)(v3611 + 16);
                              if ( (_DWORD)v3643 )
                              {
                                if ( (unsigned int)v3643 > 0x1000 )
                                {
                                  v3880 = 317;
                                  KeBugCheckEx(__ROR4__BugCheckCode: (317, 160), BugCheckParameter1: 0xDuLL, BugCheckParameter2: v3336, BugCheckParameter3: v3642, BugCheckParameter4: v3643);
                                }
                                *(_WORD *)(v3631 + v3594 + 24) = 4105;
                                *(_QWORD *)(v3631 + v3594 + 48) = (unsigned __int64)MmGetPhysicalAddress(BaseAddress: *(PVOID *)(v3611 + 8)).QuadPart >> 12;
                                v3644 = MmGetPhysicalAddress(BaseAddress: (PVOID)(*(_QWORD *)(v3611 + 8)
                                                                   + (unsigned int)(*(_DWORD *)(v3611 + 16) - 1)));
                                v3608 = Timer;
                                *(_QWORD *)(v3631 + v3594 + 56) = (unsigned __int64)v3644.QuadPart >> 12;
                              }
                            }
                          }
                          ++v3604;
                        }
                        goto LABEL_5146;
                      case 7:
                        v3602 = 0;
                        v3645 = (_QWORD *)(v3611 + 48);
                        for ( i98 = 0;
                              i98 < *(_DWORD *)(v3611 + 24);
                              *(_DWORD *)(v3647 + v3594 + 48) = *((_DWORD *)v3645 - 2) )
                        {
                          v3647 = (unsigned __int64)v3604++ << 6;
                          ++i98;
                          *(_QWORD *)(v3647 + v3594 + 8) = 0LL;
                          *(_QWORD *)(v3647 + v3594 + 16) = 0LL;
                          *(_WORD *)(v3647 + v3594 + 24) = 4099;
                          *(_DWORD *)(v3647 + v3594 + 52) = *(_DWORD *)(v3611 + 28);
                          v3648 = *v3645;
                          v3645 += 3;
                          *(_QWORD *)(v3647 + v3594 + 32) = v3648;
                          *(_QWORD *)(v3647 + v3594 + 40) = *(v3645 - 2);
                        }
                        break;
                      case 21:
                      case 38:
                        v3682 = 4108;
                        v3683 = (unsigned __int64)v3604 << 6;
                        v3602 = 0;
                        *(_QWORD *)(v3683 + v3594 + 8) = 0LL;
                        *(_QWORD *)(v3683 + v3594 + 16) = 0LL;
                        if ( *(_DWORD *)v3611 != 38 )
                          v3682 = 4102;
                        *(_WORD *)(v3683 + v3594 + 24) = v3682;
                        *(_DWORD *)(v3683 + v3594 + 52) = *(_DWORD *)(v3611 + 44);
                        *(_QWORD *)(v3683 + v3594 + 32) = *(_QWORD *)(v3611 + 24);
                        *(_QWORD *)(v3683 + v3594 + 40) = *(_QWORD *)(v3611 + 32);
                        *(_DWORD *)(v3683 + v3594 + 48) = *(_DWORD *)(v3611 + 40);
                        goto LABEL_5221;
                      case 33:
                        v3649 = *(struct _KTIMER **)(v3611 + 32);
                        v3650 = *(unsigned int *)(v3611 + 40);
                        Timer = v3649;
                        v3809 = ((unsigned __int64)((unsigned __int16)v3649 & 0xFFF) + 4095 + v3650) >> 12;
                        v3811 = (*(__int64 (__fastcall **)(struct _KTIMER *, __int64))(v3336 + 504))(v3649, 4097LL);
                        v3651 = 0LL;
                        v4367 = 0;
                        v3818 = (ULONG_PTR)v3649 + *(unsigned int *)(v3611 + 40);
                        _disable();
                        v3652 = *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *(_QWORD *)(v3336 + 1616));
                        _enable();
                        (*(void (__fastcall **)(__int64))(v3336 + 360))(v3652);
                        LOBYTE(v3653) = 1;
                        (*(void (__fastcall **)(_QWORD, __int64))(v3336 + 224))(*(_QWORD *)(v3336 + 1328), v3653);
                        v3655 = (PVOID *)PsLoadedModuleList;
                        if ( PsLoadedModuleList != &PsLoadedModuleList )
                        {
                          v3656 = *(_QWORD *)(v3336 + 1872);
                          while ( 1 )
                          {
                            v3657 = (char *)v3655 - v3656;
                            v3658 = *(unsigned __int64 *)((char *)v3655 + *(_QWORD *)(v3336 + 1880) - v3656);
                            v3654 = v3658 + *(unsigned int *)((char *)v3655 + *(_QWORD *)(v3336 + 1888) - v3656);
                            if ( (unsigned __int64)v3649 >= v3658 && (unsigned __int64)v3649 < v3654 )
                              break;
                            v3655 = (PVOID *)*v3655;
                            if ( v3655 == &PsLoadedModuleList )
                              goto LABEL_5194;
                          }
                          v3659 = v3879;
                          v4367 = 1;
                          v3660 = 4;
                          do
                          {
                            *v3659++ = 0;
                            --v3660;
                          }
                          while ( v3660 );
                          v3661 = *(_QWORD *)(v3336 + 1896);
                          v3662 = 0;
                          do
                          {
                            if ( v3662 >= *(unsigned __int16 *)&v3657[v3661] >> 1 )
                              break;
                            v3663 = v3662++;
                            v3879[v3663] = *(_BYTE *)(*(_QWORD *)&v3657[v3661 + 8] + 2 * v3663);
                          }
                          while ( v3662 < 4 );
                          LODWORD(v3654) = 4;
                          v3664 = 0LL;
                          do
                          {
                            v3879[v3664 - 4] = v3879[v3664];
                            ++v3664;
                            v885 = (_DWORD)v3654 == 1;
                            v3654 = (unsigned int)(v3654 - 1);
                          }
                          while ( !v885 );
                        }
LABEL_5194:
                        (*(void (__fastcall **)(_QWORD, unsigned __int64))(v3336 + 280))(
                          *(_QWORD *)(v3336 + 1328),
                          v3654);
                        (*(void (**)(void))(v3336 + 368))();
                        v3665 = v3611 + 48;
                        v3602 = 0;
                        v3878 = v4367 != 0 ? v3878 : 0;
                        i99 = v3611 + 48 + 20 * v3809;
                        v3809 = i99;
                        if ( v3611 + 48 != i99 )
                        {
                          v3667 = Timer;
                          v3668 = Timer;
                          do
                          {
                            if ( *(char *)(v3665 + 15) >= 0 )
                            {
                              if ( *(int *)(v3665 + 16) < 0 )
                                *(_WORD *)(((unsigned __int64)v3604 << 6) + v3594 + 26) |= 1u;
                              v3669 = (unsigned __int64)v3604 << 6;
                              v3670 = 16;
                              v3671 = v3669 + v3594;
                              *(_QWORD *)(v3671 + 8) = v3668;
                              v3672 = (_QWORD *)(v3669 + v3594 + 32);
                              *(_QWORD *)(v3671 + 16) = 4096LL;
                              v3673 = 2LL;
                              *(_WORD *)(v3671 + 24) = 4098;
                              *(_QWORD *)(v3671 + 48) = v3667;
                              v3674 = (char *)v3665;
                              *(_DWORD *)(v3671 + 56) = ((char *)v3668 - (char *)v3667) / 4096;
                              do
                              {
                                v3670 -= 8;
                                *v3672 = *(_QWORD *)v3674;
                                v3674 += 8;
                                ++v3672;
                                --v3673;
                              }
                              while ( v3673 );
                              for ( i99 = v3809; v3670; --v3670 )
                              {
                                v3675 = *v3674++;
                                *(_BYTE *)v3672 = v3675;
                                v3672 = (_QWORD *)((char *)v3672 + 1);
                              }
                              v3676 = 4;
                              v3677 = v3669 - (_QWORD)&v3878;
                              v3678 = &v3878;
                              do
                              {
                                *((_BYTE *)v3678 + v3677 + v3594 + 60) = *(_BYTE *)v3678;
                                v3678 = (int *)((char *)v3678 + 1);
                                --v3676;
                              }
                              while ( v3676 );
                              v3602 = 0;
                              v3679 = (unsigned int)(*(_DWORD *)(v3671 + 56) << 12);
                              if ( !v3651 || (unsigned int)v3679 >= (unsigned int)Src )
                              {
                                v3680 = RtlSectionTableFromVirtualAddress(v3811, v3667, v3679);
                                i99 = v3809;
                                v3602 = 0;
                                v3651 = v3680;
                                if ( v3680 )
                                  v3681 = *(_DWORD *)(v3680 + 8) + *(_DWORD *)(v3680 + 12);
                                else
                                  v3681 = *(_DWORD *)(*(unsigned __int16 *)(v3811 + 20) + v3811 + 36);
                                LODWORD(Src) = v3681;
                              }
                              *(_BYTE *)(v3671 + 47) &= ~0x80u;
                              if ( v3651 && (*(_DWORD *)(v3651 + 36) & 0x20000000) != 0 )
                                *(_BYTE *)(v3671 + 47) |= 0x80u;
                              ++v3604;
                            }
                            v3665 += 20LL;
                            v3668 += 64;
                          }
                          while ( v3665 != i99 );
                          v3336 = v3814;
                        }
                        v3608 = Timer;
                        break;
                      default:
                        goto LABEL_5146;
                    }
                  }
                  v3607 = v3810 + 1;
                  LODWORD(v3810) = v3607;
                  if ( v3607 >= *(_DWORD *)(v3336 + 2060) )
                  {
                    v3554 = v4373;
                    v3600 = v3594 + 8;
                    break;
                  }
                  v3609 = v3818;
                }
              }
              _InterlockedOr(v3805, 0);
              *(_QWORD *)&MaxDataSize = v3336;
              v3687 = (unsigned __int64)v3604 << 6;
              *(_QWORD *)(v3687 + v3594 + 8) = &MaxDataSize;
              *(_QWORD *)(v3687 + v3594 + 16) = 8LL;
              *(_WORD *)(v3687 + v3594 + 24) = 4097;
              sub_1403EB41C(v3336, &MaxDataSize, 8LL, v3594 + v3687 + 32);
              v3688 = v3604 + 1;
              v3689 = (unsigned __int64)v3688 << 6;
              *(_QWORD *)(v3689 + v3594 + 8) = *(_QWORD *)&MaxDataSize;
              *(_QWORD *)(v3689 + v3594 + 16) = *(_DWORD *)(v3336 + 2020) & 0xFFFFF000;
              *(_WORD *)(v3689 + v3594 + 24) = 4097;
              sub_1403EB41C(
                v3336,
                *(_QWORD *)(v3689 + v3594 + 8),
                *(unsigned int *)(v3689 + v3594 + 16),
                v3689 + v3594 + 32);
              v3690 = (unsigned __int64)(v3688 + 1) << 6;
              *(_QWORD *)(v3690 + v3594 + 8) = &qword_140D1EA10;
              *(_QWORD *)(v3690 + v3594 + 16) = 8LL;
              *(_WORD *)(v3690 + v3594 + 24) = 4097;
              sub_1403EB41C(v3336, &qword_140D1EA10, 8LL, v3594 + v3690 + 32);
              if ( v3554 )
              {
                v3691 = v3554;
                do
                {
                  v3692 = *(const char **)v3600;
                  v3693 = *(unsigned int *)(v3600 + 8);
                  v3694 = *(const char **)v3600;
                  v3695 = *(_QWORD *)v3600 + v3693;
                  if ( *(_QWORD *)v3600 < v3695 )
                  {
                    do
                    {
                      _mm_prefetch(v3694, 0);
                      v3694 += 64;
                    }
                    while ( (unsigned __int64)v3694 < v3695 );
                  }
                  v3696 = v4112[0];
                  do
                  {
                    v3697 = ((unsigned int)v3692 & 0xFFFFF000) + 4096 - (_DWORD)v3692;
                    if ( (unsigned int)v3693 < v3697 )
                      v3697 = v3693;
                    LODWORD(v3693) = v3693 - v3697;
                    if ( v3697 >= 8 )
                    {
                      v3698 = (unsigned __int64)v3697 >> 3;
                      do
                      {
                        v3697 -= 8;
                        v3696 = __ROR8__(*(_QWORD *)v3692 ^ v3696, v3877[23]);
                        v3692 += 8;
                        --v3698;
                      }
                      while ( v3698 );
                    }
                    for ( ; v3697; --v3697 )
                    {
                      v3699 = *(unsigned __int8 *)v3692++;
                      v3696 = __ROR8__(v3699 ^ v3696, v3877[23]);
                    }
                  }
                  while ( (_DWORD)v3693 );
                  v3700 = v3820;
                  *(_QWORD *)(v3820 - 8) = v3696;
                  v3600 = v3700 + 64;
                  v3820 = v3700 + 64;
                  --v3691;
                }
                while ( v3691 );
                v3336 = v3814;
              }
              if ( (v3862 & 8) != 0 )
              {
                ExFreePool(P: (PVOID)v3594);
                goto LABEL_5243;
              }
              v3701 = KiConnectSwInterrupt(v3594, v3554);
              memset(buf: (void *)v3594, value: 0, count: v3816);
              memset(buf: v4112, value: 0, count: 8uLL);
              memset(buf: &v3877[23], value: 0, count: sizeof(_DWORD));
              ExFreePool(P: (PVOID)v3594);
              if ( v3701 >= 0 )
              {
LABEL_5243:
                if ( v3813 )
                  v4320(v3813);
                v3702 = __rdtsc();
                v3703 = v4346;
                v3704 = (__ROR8__(v3702, 3) ^ v3702) * (unsigned __int128)0x7010008004002001uLL;
                v3862 = *((_QWORD *)&v3704 + 1);
                v3705 = *((_QWORD *)&v3704 + 1) ^ v3704;
                if ( (v4356 & 0x10000000) != 0 )
                {
                  v3706 = __rdtsc();
                  v3707 = (__ROR8__(v3706, 3) ^ v3706) * (unsigned __int128)0x7010008004002001uLL;
                  v4114 = *((_QWORD *)&v3707 + 1);
                  v3703 = (_DWORD *)(v4332 + 16 * ((v3707 ^ *((_QWORD *)&v3707 + 1)) & 0xF));
                }
                v3708 = 40;
                v3709 = &v4348;
                v3710 = &v4201;
                v3711 = 5LL;
                do
                {
                  v3708 -= 8;
                  *(_QWORD *)v3710 = *(_QWORD *)v3709;
                  v3709 += 2;
                  v3710 += 2;
                  --v3711;
                }
                while ( v3711 );
                for ( ; v3708; --v3708 )
                {
                  v3712 = *(_BYTE *)v3709;
                  v3709 = (int *)((char *)v3709 + 1);
                  *(_BYTE *)v3710 = v3712;
                  v3710 = (int *)((char *)v3710 + 1);
                }
                if ( (v4356 & 0x8000) != 0 || !v4348 )
                {
                  if ( (v4356 & 0x40000000) != 0 )
                    goto LABEL_5328;
                  v3713 = v3336 ^ v3705;
                  v3714 = (unsigned __int8)(v4353 - 1);
                  v3715 = __rdtsc();
                  v3716 = (__ROR8__(v3715, 3) ^ v3715) * (unsigned __int128)0x7010008004002001uLL;
                  v4115 = *((_QWORD *)&v3716 + 1);
                  v3717 = v3714 + (*((_QWORD *)&v3716 + 1) ^ (unsigned __int64)v3716) % (unsigned int)(63 - v3714);
                  do
                  {
                    v3718 = __rdtsc();
                    v3719 = __ROR8__(v3718, 3) ^ v3718;
                    v4116 = (v3719 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                    v3720 = v3714 + (v4116 ^ (0x7010008004002001LL * v3719)) % (unsigned int)(63 - v3714);
                  }
                  while ( v3720 == v3717 );
                  v3721 = v4343;
                  v3722 = v3717;
                  i100 = v4344;
                  v3724 = (v3713 | (1LL << v3722)) & ~(1LL << v3720);
                  v4374 = v4344;
                  if ( v4354 == 3 && (v3725 = v3812) != 0 )
                  {
                    v3726 = v4326;
                    *v4344 = 19;
                    i100[1] = 1;
                    *((_WORD *)i100 + 1) = 0;
                    *((_QWORD *)i100 + 3) = v3726;
                    *((_QWORD *)i100 + 4) = v3725;
                    *((_QWORD *)i100 + 7) = 0LL;
                    *((_QWORD *)i100 + 2) = 0LL;
                    *((_QWORD *)i100 + 5) = v3724;
                    v4325(*(_QWORD *)(v3725 + 8), *(unsigned int *)(v3725 + 16), *(_QWORD *)v3725);
                    v3727 = *(_QWORD *)v3725;
                    v3728 = v3725 ^ __ROL8__(v3725, 17);
                    v3729 = 4;
                    v4117 = (v3728 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                    v3730 = v3728 ^ v4117;
                    v3731 = (0x7010008004002001LL * v3728) ^ v4117;
                    v3732 = (_QWORD *)(v3812 + 24);
                    do
                    {
                      *v3732 ^= v3731;
                      v3731 = __ROL8__(v3731, v3729);
                      --v3732;
                      --v3729;
                    }
                    while ( v3729 );
                    if ( (v3730 & 0xFu) < 7 )
                    {
                      v3733 = 6;
                      v3734 = v3727 ^ __ROL8__(v3727, 17);
                      v4118 = ((unsigned __int64)v3734 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                      v3735 = ((0x7010008004002001LL * v3734) ^ v4118) + v3731;
                      v3736 = (_QWORD *)(v3727 + 40);
                      v3737 = (unsigned int)*(__int16 *)(v3727 + 8);
                      do
                      {
                        *v3736 ^= v3735;
                        v3735 = __ROL8__(v3735, v3733);
                        --v3736;
                        --v3733;
                      }
                      while ( v3733 );
                      v3738 = (unsigned __int64)(v3737 - 48) >> 3;
                      if ( (_DWORD)v3738 )
                      {
                        v3739 = (_QWORD *)(v3727 + 8 * ((int)v3738 + 5LL));
                        do
                        {
                          *v3739 ^= v3735;
                          v3735 = __ROL8__(v3735, v3738);
                          --v3739;
                          LODWORD(v3738) = v3738 - 1;
                        }
                        while ( (_DWORD)v3738 );
                      }
                    }
                  }
                  else
                  {
                    *v4344 = 19;
                    i100[1] = 1;
                    *((_WORD *)i100 + 1) = 0;
                    *((_QWORD *)i100 + 3) = v3703;
                    *((_QWORD *)i100 + 4) = v3724;
                    *((_QWORD *)i100 + 7) = 0LL;
                    *((_QWORD *)i100 + 2) = 0LL;
                  }
                  *((_QWORD *)i100 + 8) = v3705;
                  if ( (v4356 & 0x100) != 0 )
                  {
                    v3740 = (unsigned __int64)(v3703 - 18);
                    *((_QWORD *)v3703 - 1) = i100;
                    v3741 = __rdtsc();
                    v3742 = 25LL;
                    v3743 = (__ROR8__(v3741, 3) ^ v3741) * (unsigned __int128)0x7010008004002001uLL;
                    v4119 = *((_QWORD *)&v3743 + 1);
                    v3744 = v3743 ^ *((_QWORD *)&v3743 + 1);
                    v3745 = v3703;
                    do
                    {
                      *v3745++ ^= v3744;
                      --v3742;
                    }
                    while ( v3742 );
                    *v3703 = 1213280584;
                    *(_QWORD *)(v3740 + 32) = v3744;
                  }
                  else
                  {
                    v3740 = (unsigned __int64)i100;
                  }
                  if ( v4361 )
                  {
                    v3746 = *(_QWORD *)(v4361 + 32);
                    v3747 = v4330 ^ ((v3746 ^ ((v3746 ^ 0xE5D49100uLL) >> 4)) >> 4);
                    v3748 = v3747;
                    v3749 = (v4330 ^ ((v3746 ^ ((v3746 ^ 0xE5D49100uLL) >> 4)) >> 4)) & 0xF;
                    if ( !v3749 )
                      v3749 = 1;
                    do
                    {
                      v3750 = (unsigned __int64 *)(v3746 + (v3747 & 0xF));
                      v3746 = *v3750;
                      v3747 ^= (*v3750 ^ ((*v3750 ^ 0x1E5200) >> 4)) >> 4;
                      --v3749;
                    }
                    while ( v3749 );
                    if ( (v3748 & 0x1000) != 0 )
                      v3740 ^= v3748;
                    *v3750 = v3740;
                    v3740 = v4361;
                  }
                  _InterlockedOr(v3805, 0);
                  if ( v4347 )
                  {
                    switch ( v4347 )
                    {
                      case 1:
                        *(_QWORD *)(v4345 + v4333) = v3740;
                        break;
                      case 2:
                        *(_QWORD *)(v4345 + 128) = v3740;
                        break;
                      case 3:
                        v3762 = v4357;
                        if ( *(_QWORD *)(v4357 + v4340) )
                        {
                          if ( !v4348 )
                          {
                            v4352 = *(_QWORD *)(v4357 + v4340);
                            v4350 = 0LL;
                            v4351 = 260LL;
                            v4349 = &v3805[0xE8E80FD62472332AuLL];
                            v4348 = 1;
                            __ba((__int64)v4319, 0LL);
                          }
                          v3763 = 5LL;
                          v3764 = &v4348;
                          v3765 = &v4201;
                          v3766 = 40;
                          do
                          {
                            v3766 -= 8;
                            *(_QWORD *)v3765 = *(_QWORD *)v3764;
                            v3764 += 2;
                            v3765 += 2;
                            --v3763;
                          }
                          while ( v3763 );
                          for ( i100 = v4374; v3766; --v3766 )
                          {
                            v3767 = *(_BYTE *)v3764;
                            v3764 = (int *)((char *)v3764 + 1);
                            *(_BYTE *)v3765 = v3767;
                            v3765 = (int *)((char *)v3765 + 1);
                          }
                        }
                        _InterlockedOr(v3805, 0);
                        *(_QWORD *)(v3762 + v4340) = i100;
                        break;
                      case 4:
                        v3754 = v4360;
                        v3755 = v4359;
                        v3756 = v4358;
                        v3757 = v4357;
                        *v4358 = 18;
                        v3756[2] = 88;
                        v3756[80] = 0;
                        *((_QWORD *)v3756 + 1) = v3757;
                        *((_QWORD *)v3756 + 4) = v3755;
                        *((_QWORD *)v3756 + 5) = 0LL;
                        *((_QWORD *)v3756 + 6) = v3754;
                        v3756[81] = 0;
                        *((_QWORD *)v3756 + 7) = 0LL;
                        v3756[82] = 0;
                        if ( !v4324(v4358, i100, 0LL, 0LL) )
                        {
                          if ( !v4348 )
                          {
                            v4350 = 0LL;
                            v4351 = 260LL;
                            v4352 = v3757;
                            v4349 = &v3805[0xE8E80FD62472332AuLL];
                            v4348 = 1;
                            __ba((__int64)v4319, 0LL);
                          }
                          v3758 = &v4348;
                          v3759 = 40;
                          v3760 = &v4201;
                          do
                          {
                            v3759 -= 8;
                            *(_QWORD *)v3760 = *(_QWORD *)v3758;
                            v3758 += 2;
                            v3760 += 2;
                            --v3907;
                          }
                          while ( v3907 );
                          for ( ; v3759; --v3759 )
                          {
                            v3761 = *(_BYTE *)v3758;
                            v3758 = (int *)((char *)v3758 + 1);
                            *(_BYTE *)v3760 = v3761;
                            v3760 = (int *)((char *)v3760 + 1);
                          }
                        }
                        break;
                      default:
                        v3751 = (_DWORD *)v4357;
                        *(_QWORD *)(v4357 + 72) = v3740;
                        _InterlockedOr(v3805, 0);
                        v3752 = __rdtsc();
                        v3753 = (__ROR8__(v3752, 3) ^ v3752) * (unsigned __int128)0x7010008004002001uLL;
                        v4120 = *((_QWORD *)&v3753 + 1);
                        *v3751 = (__int64)(((unsigned __int64)v3753 ^ *((_QWORD *)&v3753 + 1)) % 0x5F5E100 + 1200000000)
                               / 10000000;
                        break;
                    }
                  }
                  else
                  {
                    v3768 = __rdtsc();
                    v3769 = (__ROR8__(v3768, 3) ^ v3768) * (unsigned __int128)0x7010008004002001uLL;
                    v4121 = *((_QWORD *)&v3769 + 1);
                    v3770 = -1200000000LL - ((unsigned __int64)v3769 ^ *((_QWORD *)&v3769 + 1)) % 0x5F5E100;
                    *(_QWORD *)&v3769 = __rdtsc();
                    v3771 = (__ROR8__(v3769, 3) ^ (unsigned __int64)v3769) * (unsigned __int128)0x7010008004002001uLL;
                    v4122 = *((_QWORD *)&v3771 + 1);
                    v4322(v3721, v3770, 0LL, ((unsigned __int64)v3771 ^ *((_QWORD *)&v3771 + 1)) % 0x2710, v3740);
                  }
                }
                if ( v4201 && (v4356 & 0x8000) == 0 )
                {
                  v3772 = v4204;
                  v3773 = v4205;
                  v3774 = v4203;
                  v3775 = v4202;
                  v4375 = v4204;
                  HalExtensionList = v4205;
                  v3814 = v4203;
                  v3813 = v4202;
                  if ( KeGetCurrentIrql() < 2u )
                  {
                    KeGetCurrentIrql();
                    __writecr8(2uLL);
                  }
                  CurrentPrcb = KeGetCurrentPrcb();
                  v3777 = *(char **)((char *)&CurrentPrcb->MxCsr + v4334);
                  v3778 = *(_QWORD *)((char *)&CurrentPrcb->MxCsr + v4336);
                  if ( !*((_BYTE *)&CurrentPrcb->MxCsr + v4335) || &v4123 > v3777 || &v4123 < v3777 - 24576 )
                    v3777 = *(char **)(v3778 + v4337);
                  if ( (v4356 & 0x8000000) == 0 )
                  {
                    v3779 = __readcr0();
                    __writecr0(v3779 & 0xFFFFFFFFFFFEFFFFuLL);
                    v3780 = v4364;
                    v3781 = &v4364[v4362];
                    v3782 = 0;
                    for ( i101 = v3781; v3782 < v4363; ++v3782 )
                    {
                      *(_QWORD *)*i101 = i101[1];
                      v3784 = __readcr4();
                      if ( (v3784 & 0x20080) != 0 )
                      {
                        __writecr4(v3784 ^ 0x80);
                        __writecr4(v3784);
                      }
                      else
                      {
                        v3785 = __readcr3();
                        __writecr3(v3785);
                      }
                      i101 += 2;
                    }
                    if ( v4364 < v3781 )
                    {
                      do
                      {
                        v3786 = *((unsigned int *)v3780 + 2);
                        v3787 = i101;
                        v3788 = *(char **)v3780;
                        v3789 = v3786;
                        if ( (unsigned int)v3786 >= 8 )
                        {
                          v3790 = (unsigned __int64)(unsigned int)v3786 >> 3;
                          do
                          {
                            v3789 -= 8;
                            *(_QWORD *)v3788 = *v3787++;
                            v3788 += 8;
                            --v3790;
                          }
                          while ( v3790 );
                        }
                        if ( v3789 )
                        {
                          v3791 = v3788 - (char *)v3787;
                          do
                          {
                            *((_BYTE *)v3787 + v3791) = *(_BYTE *)v3787;
                            v3787 = (_QWORD *)((char *)v3787 + 1);
                            --v3789;
                          }
                          while ( v3789 );
                        }
                        i101 = (_QWORD *)((char *)i101 + v3786);
                        ++v3780;
                      }
                      while ( v3780 < v3781 );
                      v3772 = v4375;
                      v3773 = HalExtensionList;
                    }
                    *v4323 = -61;
                    __writecr0(v3779);
                    v3774 = v3814;
                    v3775 = v3813;
                  }
                  v3799 = v4355;
                  if ( v4355 )
                  {
                    if ( KeGetCurrentIrql() < 2u )
                    {
                      KeGetCurrentIrql();
                      __writecr8(2uLL);
                      v3799 = v4355;
                    }
                    if ( v3799 )
                    {
                      v3800 = v3799 - 1;
                      if ( v3800 )
                      {
                        v3801 = v3800 - 1;
                        if ( v3801 )
                        {
                          v3802 = v3801 - 1;
                          if ( v3802 )
                          {
                            v3803 = v3802 - 1;
                            if ( v3803 )
                            {
                              if ( v3803 == 1 )
                                _interlockedbittestandset(
                                  *(volatile signed __int32 **)((char *)&KeGetCurrentPrcb()->MxCsr + v4336),
                                  (v4356 >> 10) & 0x1F);
                              else
                                _InterlockedOr64((volatile signed __int64 *)(v4331 + 832), 1uLL);
                            }
                            else
                            {
                              _interlockedbittestandset(
                                *(volatile signed __int32 **)(v4338
                                                            + *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + v4336)
                                                            + v4342),
                                (v4356 >> 10) & 0x1F);
                            }
                            goto LABEL_5414;
                          }
                          v3804 = v4329;
                        }
                        else
                        {
                          v3804 = v4328;
                        }
                      }
                      else
                      {
                        v3804 = v4327;
                      }
                      _interlockedbittestandset64(v3804, 0LL);
                    }
                  }
LABEL_5414:
                  *(_QWORD *)(v3778 + v4339) = 0LL;
                  *(_QWORD *)(v3778 + v4341) = 0LL;
                  SdbpCheckDll(265LL, v3775, v3774, v3773, v3772, (__int64 (__fastcall *)(__int64))Target, v3777);
                  __debugbreak();
                }
LABEL_5328:
                _disable();
                if ( !(_BYTE)KdDebuggerNotPresent )
                {
                  while ( 1 )
                    ;
                }
                _enable();
                v3792 = (struct _KEVENT *)HalExtensionList;
                if ( HalExtensionList )
                {
                  *(_QWORD *)(HalExtensionList + 16) = v3885;
                  _InterlockedOr(v3805, 0);
                  KeSetEvent(Event: v3792 + 1, Increment: 1, Wait: 0);
                }
                v3793 = v4319;
                v3794 = 2720;
                v3795 = 340LL;
                do
                {
                  *(_QWORD *)v3793 = 0LL;
                  v3794 -= 8;
                  v3793 += 8;
                  --v3795;
                }
                while ( v3795 );
                for ( ; v3794; --v3794 )
                  *v3793++ = 0;
                _disable();
                if ( !(_BYTE)KdDebuggerNotPresent )
                {
                  while ( 1 )
                    ;
                }
                _enable();
                return 1;
              }
            }
            v3881 = 317;
            KeBugCheckEx(__ROR4__BugCheckCode: (317, 160), BugCheckParameter1: 0x15uLL, BugCheckParameter2: v3336, BugCheckParameter3: (unsigned int)v3862, BugCheckParameter4: v3813);
          }
          v2462 = *((_DWORD *)v2391 + 612);
          if ( (v2462 & 4) == 0 )
          {
            v2463 = *((_DWORD *)v2391 + 505);
            v2464 = *((_QWORD *)v2391 + 249);
            v2465 = (v2462 & 0x20000000) != 0 ? *((_DWORD *)v2391 + 585) : 0;
            if ( v2463 >= 8 )
            {
              v2466 = (unsigned __int64)v2463 >> 3;
              do
              {
                *(_QWORD *)v2391 = 0LL;
                v2463 -= 8;
                v2391 += 8;
                --v2466;
              }
              while ( v2466 );
            }
            for ( ; v2463; --v2463 )
              *v2391++ = 0;
            v2467 = *(_DWORD *)(v2461 + 2340);
            *(_DWORD *)(v2461 + 2340) = v2465;
            if ( v2465 == 3 )
            {
              (*(void (__fastcall **)(__int64))(v2461 + 872))(v2464);
            }
            else if ( (*(_DWORD *)(v2461 + 2448) & 0x10000000) != 0 || !v2465 )
            {
              (*(void (__fastcall **)(__int64))(v2461 + 248))(v2464);
            }
            else
            {
              (*(void (__fastcall **)(__int64, _QWORD))(v2461 + 552))(v2464 - 8, *(_QWORD *)(v2464 - 8));
            }
            v2458 = v3811;
            *(_DWORD *)(v2461 + 2340) = v2467;
          }
          *(_DWORD *)(v2461 + 2448) &= ~4u;
          v2457 = v3809;
          v2456 = v3810;
        }
        *(_DWORD *)(v2461 + 2060) += v2452;
        v2468 = v2461 + v2458;
        if ( v2452 )
        {
          v2469 = v2437;
          v3816 = v2452;
          v3812 = (unsigned __int64)v2451;
          do
          {
            v2470 = (unsigned int)*v2451;
            v2471 = 48;
            v2472 = (_QWORD *)*v2469;
            v2473 = (_QWORD *)v2468;
            LODWORD(v3811) = *v2451;
            v2474 = 6LL;
            do
            {
              *v2473 = 0LL;
              v2471 -= 8;
              ++v2473;
              --v2474;
            }
            while ( v2474 );
            for ( ; v2471; --v2471 )
            {
              *(_BYTE *)v2473 = 0;
              v2473 = (_QWORD *)((char *)v2473 + 1);
            }
            *(_DWORD *)v2468 = v2457;
            *(_QWORD *)(v2468 + 8) = v2472;
            if ( v2456 == 7 && (_DWORD)v2470 )
              sub_1403EB41C(v2461, v2472, (unsigned int)v2470, v2468 + 24);
            *(_DWORD *)(v2468 + 16) = v2470;
            *(_DWORD *)(v2461 + 2088) += v2470;
            v2475 = v2472;
            v2476 = *(_DWORD *)(v2461 + 2068);
            v2477 = (const char *)v2472;
            v2478 = *(_QWORD *)(v2461 + 2072);
            if ( v2472 < (_QWORD *)((char *)v2472 + v2470) )
            {
              do
              {
                _mm_prefetch(v2477, 0);
                v2477 += 64;
              }
              while ( v2477 < (const char *)v2472 + v2470 );
            }
            v2479 = *(_QWORD *)(v2461 + 2072);
            v2480 = (unsigned int)v2470 >> 7;
            if ( (unsigned int)v2470 >> 7 )
            {
              do
              {
                v2481 = 8LL;
                do
                {
                  v2482 = v2475[1] ^ __ROL8__(*v2475 ^ v2479, v2476);
                  v2475 += 2;
                  v2479 = __ROL8__(v2482, v2476);
                  --v2481;
                }
                while ( v2481 );
                v2483 = (__ROL8__(v2478 ^ ((char *)v2475 - (char *)v2472), 17) ^ v2478 ^ (unsigned __int64)((char *)v2475 - (char *)v2472))
                      * (unsigned __int128)0x7010008004002001uLL;
                v4065 = *((_QWORD *)&v2483 + 1);
                v2476 = ((unsigned __int8)v2483 ^ (unsigned __int8)(BYTE8(v2483) ^ v2476)) & 0x3F;
                if ( !v2476 )
                  LOBYTE(v2476) = 1;
                --v2480;
              }
              while ( v2480 );
              v2461 = v3813;
              LODWORD(v2470) = v3811;
              v2451 = (_DWORD *)v3812;
            }
            v2484 = v2470 & 0x7F;
            if ( v2484 >= 8 )
            {
              v2485 = (unsigned __int64)(v2470 & 0x7F) >> 3;
              do
              {
                v2479 = __ROL8__(*v2475++ ^ v2479, v2476);
                v2484 -= 8;
                --v2485;
              }
              while ( v2485 );
            }
            for ( ; v2484; --v2484 )
            {
              v2486 = *(unsigned __int8 *)v2475;
              v2475 = (_QWORD *)((char *)v2475 + 1);
              v2479 = __ROL8__(v2486 ^ v2479, v2476);
            }
            for ( i102 = v2479 >> 31; i102; i102 >>= 31 )
              LODWORD(v2479) = i102 ^ v2479;
            v2457 = v3809;
            v2456 = v3810;
            ++v2451;
            *(_DWORD *)(v2468 + 20) = v2479 & 0x7FFFFFFF;
            ++v2469;
            *(_DWORD *)(v2461 + 2088) += v2470;
            v2468 += 48LL;
            v885 = v3816-- == 1;
            v3812 = (unsigned __int64)v2451;
          }
          while ( !v885 );
          v2451 = (_DWORD *)v3814;
          v2437 = (_QWORD *)HalExtensionList;
        }
        v2391 = (_BYTE *)v2461;
        goto LABEL_3531;
      }
      v4198 = (__int64 (__fastcall **)())HvlpHypercallCodeVa;
      _RAX = 0x40000000LL;
      __asm { cpuid }
      v4149 = __PAIR64__(_RCX, _RBX);
      v4148 = _RAX;
      v4150 = _RDX;
      if ( __PAIR64__(_RCX, _RBX) != 'fosorciM' )
        goto LABEL_3374;
      if ( (_DWORD)_RDX != 1984438388 )
        goto LABEL_3374;
      if ( (unsigned int)_RAX < 0x40000002 )
        goto LABEL_3374;
      _RAX = 1073741825LL;
      __asm { cpuid }
      v4148 = _RAX;
      v4149 = __PAIR64__(_RCX, _RBX);
      v4150 = _RDX;
      if ( (_DWORD)_RAX != 824407624 )
        goto LABEL_3374;
      _RAX = 1073741826LL;
      __asm { cpuid }
      v4148 = _RAX;
      v4149 = __PAIR64__(_RCX, _RBX);
      v4150 = _RDX;
      if ( (_RBX & 0xFFFF0000) != 0x60000 )
        goto LABEL_3374;
      if ( (unsigned __int16)_RBX == 1 )
        v2383 = 4;
      else
LABEL_3374:
        v2383 = 4096;
      LODWORD(v3809) = 1;
    }
    else
    {
      v4198 = HvlpInterruptCallback;
      v2383 = dword_140D815F8;
    }
    v2367 = 2;
    v4147[1] = v2383;
    goto LABEL_3378;
  }
  v1892 = *((unsigned int *)v1858 + 505);
  v1893 = v1892 + 16 * v1889 + 48;
  if ( v1893 <= *((_DWORD *)v1858 + 647) )
  {
    v1894 = (__int64)v1858;
    *((_DWORD *)v1858 + 505) = v1893;
  }
  else
  {
    v1894 = sub_140B11020(v1858, v1893, *((unsigned int *)v1858 + 585));
    if ( !v1894 )
      return 0;
    v1895 = *((_DWORD *)v1858 + 612);
    if ( (v1895 & 4) == 0 )
    {
      v1896 = *((_DWORD *)v1858 + 505);
      v1897 = *((_QWORD *)v1858 + 249);
      v1898 = (v1895 & 0x20000000) != 0 ? *((_DWORD *)v1858 + 585) : 0;
      if ( v1896 >= 8 )
      {
        v1899 = (unsigned __int64)v1896 >> 3;
        do
        {
          *(_QWORD *)v1858 = 0LL;
          v1896 -= 8;
          v1858 += 8;
          --v1899;
        }
        while ( v1899 );
      }
      for ( ; v1896; --v1896 )
        *v1858++ = 0;
      v1900 = *(_DWORD *)(v1894 + 2340);
      *(_DWORD *)(v1894 + 2340) = v1898;
      if ( v1898 == 3 )
      {
        (*(void (__fastcall **)(__int64))(v1894 + 872))(v1897);
      }
      else if ( (*(_DWORD *)(v1894 + 2448) & 0x10000000) != 0 || !v1898 )
      {
        (*(void (__fastcall **)(__int64))(v1894 + 248))(v1897);
      }
      else
      {
        (*(void (__fastcall **)(__int64, _QWORD))(v1894 + 552))(v1897 - 8, *(_QWORD *)(v1897 - 8));
      }
      *(_DWORD *)(v1894 + 2340) = v1900;
    }
    *(_DWORD *)(v1894 + 2448) &= ~4u;
  }
  ++*(_DWORD *)(v1894 + 2060);
  v1901 = v1894 + v1892;
  v1902 = 48;
  v1903 = (_QWORD *)(v1894 + v1892);
  v1904 = 6LL;
  do
  {
    *v1903 = 0LL;
    v1902 -= 8;
    ++v1903;
    --v1904;
  }
  while ( v1904 );
  for ( ; v1902; --v1902 )
  {
    *(_BYTE *)v1903 = 0;
    v1903 = (_QWORD *)((char *)v1903 + 1);
  }
  *(_DWORD *)v1901 = 10;
  *(_QWORD *)(v1901 + 8) = 0LL;
  *(_DWORD *)(v1901 + 16) = 0;
  v1905 = *(_QWORD *)(v1894 + 2072);
  for ( i103 = v1905; ; LODWORD(v1905) = i103 ^ v1905 )
  {
    i103 >>= 31;
    if ( !i103 )
      break;
  }
  v1907 = v1901 + 48;
  *(_DWORD *)(v1901 + 20) = v1905 & 0x7FFFFFFF;
  v1858 = (_BYTE *)v1894;
  *(_DWORD *)(v1901 + 24) = 0;
  *(_DWORD *)(v1901 + 28) = v1889;
  v1908 = 0;
  if ( *(_DWORD *)(HalExtensionList + 16) )
  {
    while ( 1 )
    {
      v1909 = v3814 + ((__int64)*(int *)(v3814 + 4LL * v1908) >> 4);
      if ( !(*(__int64 (__fastcall **)(ULONG_PTR, _BYTE *, _QWORD))(v1894 + 608))(v1909, v4044, 0LL) )
      {
        v1910 = (unsigned __int8 *)v1909;
        *(_DWORD *)(v1894 + 2088) += 4;
        v1911 = (const char *)v1909;
        v1912 = *(_QWORD *)(v1894 + 2072);
        if ( v1909 < v1909 + 4 )
        {
          do
          {
            _mm_prefetch(v1911, 0);
            v1911 += 64;
          }
          while ( (unsigned __int64)v1911 < v1909 + 4 );
        }
        v1913 = 4;
        do
        {
          v1914 = *v1910++;
          v1912 = __ROL8__(v1914 ^ v1912, *(_DWORD *)(v1894 + 2068));
          --v1913;
        }
        while ( v1913 );
        for ( i104 = v1912; ; LODWORD(v1912) = i104 ^ v1912 )
        {
          i104 >>= 31;
          if ( !i104 )
            break;
        }
        *(_DWORD *)v1907 ^= (*(_DWORD *)v1907 ^ v1912) & 0x7FFFFFFF;
        *(_DWORD *)(v1907 + 4) = 4;
        *(_QWORD *)(v1907 + 8) = v1909;
        v1907 += 16LL;
        if ( !--v1889 )
          break;
      }
      if ( ++v1908 >= *(_DWORD *)(HalExtensionList + 16) )
        return 0;
    }
    goto LABEL_2718;
  }
  return 0;
}