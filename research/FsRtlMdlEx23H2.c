__int64 __fastcall FsRtlMdlReadCompleteDevEx(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // rdx
  int v3; // ecx
  _QWORD *v4; // rax
  __int64 v5; // r8
  __int64 v6; // r14
  _QWORD *v7; // rbx
  _BYTE *v8; // rdx
  char *v9; // rcx
  int v10; // r8d
  __int64 v11; // r9
  char v12; // al
  int v13; // ecx
  __int64 v14; // rdx
  _QWORD *v15; // rax
  __int64 v16; // r10
  _QWORD *v17; // r9
  const char *v18; // rax
  int v19; // r11d
  __int64 v20; // rsi
  __int64 v21; // r8
  unsigned int v22; // edi
  __int64 v23; // rax
  __int64 v24; // r8
  unsigned __int64 v25; // rcx
  unsigned int v26; // r10d
  unsigned __int64 v27; // rax
  __int64 v28; // rax
  int v29; // edx
  char *v30; // rcx
  __int64 v31; // r9
  char v32; // al
  __int64 v33; // rax
  int v34; // ecx
  int v35; // eax
  __int64 v36; // r10
  unsigned int v37; // esi
  __int64 v38; // r11
  __int64 v39; // r15
  void (__fastcall *v40)(_QWORD, _QWORD, unsigned __int64 *); // r12
  unsigned __int64 v41; // rcx
  unsigned __int128 v42; // rax
  unsigned __int64 v43; // r8
  int v44; // r9d
  unsigned __int64 v45; // rcx
  unsigned __int128 v46; // rax
  unsigned __int64 v47; // rcx
  unsigned __int128 v48; // rax
  __int64 v49; // rbx
  __int64 v50; // r14
  int v51; // r13d
  unsigned __int64 v52; // rcx
  unsigned __int128 v53; // rax
  int v54; // ecx
  __int64 v55; // rbx
  __int64 v56; // rdx
  __int64 v57; // r8
  _QWORD *v58; // rax
  __int64 v59; // r12
  unsigned __int64 v60; // r9
  __int64 *v61; // r10
  __int64 v62; // rdx
  __int64 v63; // rdx
  __int64 v64; // rcx
  _QWORD *v65; // rdx
  _QWORD *v66; // rax
  __int64 v67; // r8
  int v68; // ecx
  __int64 v69; // r11
  unsigned __int64 v70; // r9
  __int64 *v71; // r10
  __int64 v72; // rdx
  unsigned int v73; // esi
  _QWORD *v74; // rdx
  __int64 v75; // rax
  int v76; // ecx
  int v77; // esi
  _QWORD *v78; // r9
  const char *v79; // rax
  int v80; // r10d
  __int64 v81; // r11
  __int64 v82; // r8
  int v83; // ebx
  __int64 v84; // rax
  __int64 v85; // r8
  unsigned __int128 v86; // rax
  __int64 v87; // rax
  int v88; // edx
  __int64 v89; // rax
  __int64 v90; // rax
  int v91; // ecx
  int v92; // ecx
  ULONG_PTR v93; // rsi
  __int64 v94; // rbx
  int v95; // eax
  unsigned __int64 v96; // rcx
  unsigned __int64 v97; // rcx
  __int64 v98; // r15
  unsigned __int64 v99; // r14
  unsigned __int64 v100; // rcx
  unsigned __int128 v101; // rax
  __int64 v102; // rbx
  int v103; // ecx
  unsigned int *v104; // rax
  unsigned int v105; // ecx
  int *v106; // r12
  unsigned __int128 v107; // rax
  _DWORD *v108; // rbx
  ULONG_PTR v109; // r14
  unsigned int v110; // r15d
  __int64 v111; // rbx
  __int64 v112; // rdx
  int v113; // ecx
  unsigned int v114; // eax
  unsigned __int64 v115; // rcx
  unsigned __int128 v116; // rax
  unsigned __int64 v117; // rbx
  int v118; // eax
  unsigned int v119; // r9d
  ULONG_PTR v120; // r8
  int *v121; // r13
  __int64 v122; // r10
  int v123; // ecx
  int v124; // ecx
  int v125; // ecx
  int v126; // ecx
  int v127; // ecx
  bool v128; // zf
  __int64 v129; // rax
  int v130; // eax
  int v131; // ecx
  int v132; // ecx
  int v133; // ecx
  int v134; // r10d
  __int64 v135; // r8
  int v136; // ecx
  unsigned int v137; // ecx
  unsigned __int64 v138; // rbx
  unsigned __int64 v139; // r14
  unsigned int v140; // ecx
  int v141; // eax
  _QWORD *v142; // r14
  __int64 v143; // r8
  _QWORD *v144; // r9
  const char *v145; // rax
  int v146; // r10d
  __int64 v147; // r15
  unsigned __int64 v148; // rbx
  unsigned int v149; // r11d
  __int64 v150; // rax
  __int64 v151; // rbx
  unsigned __int128 v152; // rax
  unsigned int v153; // r8d
  unsigned __int64 v154; // rax
  __int64 v155; // rax
  unsigned __int64 i31; // rax
  unsigned int v157; // ebx
  __int64 v158; // rcx
  __int64 v159; // r8
  unsigned __int8 v160; // r12
  unsigned __int64 v161; // r14
  unsigned __int64 v162; // r13
  unsigned __int64 v163; // r15
  __int64 v164; // rcx
  __int64 v165; // rax
  __int64 v166; // rcx
  __int64 v167; // rax
  int v168; // ecx
  __int64 v169; // r14
  unsigned __int64 v170; // r14
  unsigned __int64 v171; // rdi
  __int64 v172; // r8
  _QWORD *v173; // r9
  const char *v174; // rax
  int v175; // r11d
  __int64 v176; // r12
  __int64 v177; // r15
  unsigned __int64 v178; // rbx
  unsigned int v179; // r10d
  __int64 v180; // rax
  __int64 v181; // rbx
  unsigned __int64 v182; // rcx
  __int64 v183; // r8
  unsigned __int64 v184; // rax
  __int64 v185; // rax
  unsigned __int64 i24; // rax
  unsigned int v187; // ecx
  unsigned int v188; // ebx
  unsigned __int8 v189; // r13
  unsigned __int64 v190; // r15
  unsigned __int64 v191; // r12
  int v192; // eax
  __int64 v193; // rax
  bool v194; // zf
  __int64 v195; // rbx
  unsigned __int16 v196; // dx
  _QWORD *v197; // r14
  __int64 v198; // r8
  _QWORD *v199; // r9
  const char *v200; // rax
  int v201; // r10d
  __int64 v202; // r15
  unsigned __int64 v203; // rbx
  unsigned int v204; // r11d
  __int64 v205; // rax
  __int64 v206; // rbx
  unsigned __int128 v207; // rax
  unsigned int v208; // r8d
  unsigned __int64 v209; // rax
  __int64 v210; // rax
  unsigned __int64 i23; // rax
  unsigned int v212; // ebx
  BOOL v213; // r12d
  __int64 v214; // rcx
  __int64 v215; // rdx
  __int64 v216; // r8
  unsigned __int8 v217; // r13
  unsigned __int64 v218; // r14
  unsigned __int64 v219; // r15
  int v220; // eax
  __int64 v221; // rcx
  __int64 v222; // rcx
  unsigned int i22; // ebx
  __int64 v224; // r9
  unsigned __int64 v225; // rdx
  __int64 v226; // rcx
  __int64 v227; // r8
  unsigned __int64 v228; // rdx
  unsigned __int64 v229; // rcx
  int v230; // ecx
  __int64 v231; // rcx
  unsigned __int64 v232; // rcx
  __int64 v233; // rbx
  int v234; // r15d
  unsigned int v235; // ecx
  unsigned __int8 v236; // r14
  volatile signed __int8 **v237; // r8
  volatile signed __int8 *v238; // rdx
  unsigned __int64 v239; // r15
  __int64 v240; // r13
  unsigned __int64 v241; // rbx
  __int64 v242; // r12
  _BYTE *v243; // rbx
  char v244; // al
  __int64 v245; // rdx
  int *v246; // rcx
  __int64 v247; // rcx
  __int64 v248; // rax
  bool v249; // zf
  int *v250; // rcx
  int v251; // eax
  __int64 v252; // rbx
  int v253; // r13d
  unsigned int v254; // ecx
  unsigned __int8 v255; // r14
  _QWORD **v256; // r12
  _QWORD *v257; // r15
  int *v258; // rdi
  unsigned __int64 v259; // rbx
  __int64 v260; // rcx
  _QWORD **v261; // r13
  _QWORD *v262; // r15
  int *v263; // rdi
  int v264; // edx
  __int64 v265; // rcx
  char *v266; // rbx
  __int64 v267; // r15
  int v268; // ecx
  __int64 v269; // rbx
  __int64 v270; // r14
  unsigned __int64 v271; // r14
  unsigned __int64 v272; // rbx
  int v273; // eax
  __int64 v274; // rcx
  unsigned __int8 v275; // r15
  __int64 v276; // rdx
  int *v277; // r14
  unsigned int *v278; // rcx
  unsigned int *v279; // rbx
  char v280; // r12
  unsigned __int64 v281; // r13
  __int64 v282; // r8
  __int64 *v283; // r9
  unsigned int *v284; // r10
  __int64 v285; // rcx
  __int64 v286; // rax
  __int64 v287; // rax
  int *v288; // rcx
  int *v289; // rcx
  _QWORD *v290; // r14
  __int64 v291; // r8
  _QWORD *v292; // r9
  const char *v293; // rax
  int v294; // r10d
  __int64 v295; // r15
  __int64 v296; // rbx
  unsigned int v297; // r11d
  __int64 v298; // rax
  __int64 v299; // rbx
  char v300; // r10
  unsigned int v301; // r8d
  unsigned __int64 v302; // rax
  __int64 v303; // rax
  unsigned int v304; // ebx
  BOOL v305; // r12d
  __int64 v306; // rcx
  __int64 v307; // r8
  unsigned __int8 v308; // r13
  unsigned __int64 v309; // r14
  __int64 v310; // r8
  __int64 v311; // rcx
  __int64 (*v312)(void); // rax
  __int64 v313; // rax
  __int64 (*v314)(void); // rax
  unsigned int v315; // r10d
  __int64 v316; // r12
  unsigned __int64 v317; // r9
  _QWORD *v318; // r14
  __int64 v319; // r9
  _QWORD *v320; // r10
  const char *v321; // rax
  int v322; // r11d
  __int64 v323; // r15
  unsigned __int64 v324; // r8
  unsigned int v325; // ebx
  __int64 v326; // rax
  __int64 v327; // r8
  char v328; // r11
  unsigned int v329; // r9d
  unsigned __int64 v330; // rax
  __int64 v331; // rax
  unsigned __int64 i9; // rax
  const char *v333; // r14
  unsigned int v334; // r10d
  unsigned int v335; // r9d
  ULONG_PTR v336; // rcx
  const char *v337; // r9
  int v338; // r11d
  const char *v339; // rax
  __int64 v340; // r15
  const char *v341; // rcx
  unsigned __int64 v342; // r8
  unsigned int v343; // ebx
  __int64 v344; // rax
  __int64 v345; // r8
  char v346; // r11
  unsigned int v347; // r10d
  unsigned __int64 v348; // rax
  __int64 v349; // rax
  unsigned __int64 i10; // rax
  _QWORD *v351; // rcx
  __int64 v352; // r8
  __int64 v353; // rax
  _QWORD *v354; // r14
  _QWORD *v355; // r9
  int v356; // r10d
  const char *v357; // rax
  __int64 v358; // r15
  unsigned __int64 v359; // rbx
  unsigned int v360; // r11d
  __int64 v361; // rax
  __int64 v362; // rbx
  unsigned __int128 v363; // rax
  unsigned int v364; // r8d
  unsigned __int64 v365; // rax
  __int64 v366; // rax
  unsigned __int64 i7; // rax
  unsigned int v368; // ebx
  BOOL v369; // r12d
  __int64 v370; // rcx
  __int64 v371; // rdx
  __int64 v372; // r8
  unsigned __int8 v373; // r13
  unsigned __int64 v374; // r14
  unsigned __int64 v375; // r15
  int v376; // eax
  const char *v377; // r15
  unsigned int v378; // r9d
  const char *v379; // r10
  int v380; // r11d
  const char *v381; // rax
  __int64 v382; // r14
  const char *v383; // rcx
  unsigned __int64 v384; // r8
  unsigned int v385; // ebx
  __int64 v386; // rax
  __int64 v387; // r8
  char v388; // r11
  __int64 v389; // rcx
  unsigned int v390; // r9d
  unsigned __int64 v391; // rax
  __int64 v392; // rax
  unsigned __int64 i8; // rax
  unsigned int v394; // r8d
  __int64 v395; // r14
  _QWORD *v396; // r13
  __int64 v397; // rbx
  void (__fastcall *v398)(_QWORD, __int64); // rax
  unsigned int v399; // ecx
  void (__fastcall *v400)(__int64, _QWORD); // rax
  _QWORD **v401; // r9
  __int64 v402; // r10
  _QWORD *v403; // r8
  __int64 v404; // rdx
  __int64 v405; // rax
  _QWORD **v406; // r12
  _QWORD *v407; // r14
  __int64 v408; // rdi
  int v409; // r8d
  unsigned __int8 v410; // r13
  char *v411; // rbx
  __int64 v412; // rcx
  __int64 v413; // r8
  int *v414; // rcx
  _QWORD **v415; // r10
  _QWORD *i6; // r9
  __int64 v417; // r14
  __int64 v418; // rbx
  int v419; // r13d
  void (__fastcall *v420)(_QWORD, __int64); // rax
  unsigned int v421; // ecx
  unsigned __int8 v422; // r15
  volatile signed __int8 **v423; // r8
  volatile signed __int8 *v424; // rdx
  _QWORD **v425; // r12
  _QWORD *v426; // r14
  __int64 v427; // rax
  int *v428; // rdi
  char *v429; // rcx
  __int64 v430; // rdx
  __int64 v431; // rbx
  _QWORD **v432; // r12
  __int64 v433; // rcx
  __int64 v434; // rdx
  unsigned int *v435; // rcx
  __int64 v436; // r13
  _QWORD *v437; // rax
  __int64 v438; // r8
  unsigned __int64 v439; // rcx
  __int64 v440; // rax
  int v441; // ebx
  unsigned __int64 v442; // rcx
  unsigned __int128 v443; // rax
  unsigned __int64 v444; // r14
  unsigned __int64 v445; // rdx
  __int64 v446; // r11
  int v447; // r10d
  unsigned __int64 *v448; // r9
  unsigned __int64 v449; // r8
  unsigned __int64 v450; // rcx
  unsigned __int128 v451; // rax
  unsigned __int64 v452; // rcx
  unsigned __int128 v453; // rax
  unsigned int v454; // ebx
  unsigned __int64 *v455; // r8
  unsigned __int64 v456; // rcx
  unsigned __int128 v457; // rax
  unsigned __int64 v458; // rcx
  unsigned __int128 v459; // rax
  __int64 v460; // r15
  _QWORD *v461; // rbx
  unsigned int v462; // edi
  __int64 v463; // r14
  __int64 v464; // rax
  unsigned __int64 v465; // r12
  unsigned __int64 v466; // r13
  int *v467; // rdi
  unsigned __int64 v468; // rbx
  int v469; // edx
  int v470; // r8d
  int v471; // ecx
  unsigned __int64 v472; // rcx
  int v473; // r12d
  int v474; // ecx
  int v475; // ecx
  int v476; // ecx
  int v477; // ecx
  int v478; // ecx
  char *v479; // rbx
  int v480; // r13d
  unsigned int v481; // r14d
  __int64 v482; // r15
  _QWORD *v483; // rcx
  int v484; // edx
  __int64 v485; // r8
  char v486; // al
  __int64 v487; // rax
  __int64 v488; // rcx
  __int64 v489; // r15
  int *v490; // rdi
  char *v491; // rbx
  __int64 v492; // r14
  _QWORD *v493; // rcx
  int v494; // edx
  __int64 v495; // r8
  char v496; // al
  __int64 v497; // rax
  __int64 v498; // rax
  __int64 (__fastcall *v499)(__int64); // rax
  ULONG_PTR *v500; // rax
  ULONG_PTR v501; // rbx
  int *v502; // rcx
  __int64 v503; // rax
  __int64 v504; // rax
  __int64 (__fastcall *v505)(ULONG_PTR, char *); // rax
  __int64 v506; // rax
  ULONG_PTR v507; // r12
  _DWORD *v508; // r13
  unsigned int v509; // r15d
  int v510; // ecx
  int v511; // ecx
  int *v512; // rax
  __int64 v513; // rdx
  __int64 v514; // r9
  __int64 v515; // r8
  unsigned int v516; // r14d
  int v517; // r10d
  ULONG_PTR v518; // rbx
  unsigned int v519; // r11d
  __int64 v520; // r9
  int v521; // ecx
  int v522; // ecx
  int v523; // ecx
  int v524; // ecx
  int v525; // ecx
  bool v526; // zf
  __int64 v527; // rax
  int v528; // eax
  int v529; // ecx
  int v530; // ecx
  int v531; // ecx
  unsigned __int64 v532; // rcx
  __int64 v533; // r11
  int v534; // eax
  char **v535; // rbx
  int v536; // r14d
  __int64 v537; // rcx
  __int64 v538; // rdx
  char *v539; // r8
  __int64 v540; // r9
  ULONG_PTR v541; // rax
  __int64 v542; // rdx
  int v543; // eax
  __int64 v544; // rax
  __int64 v545; // rdx
  __int64 (__fastcall *v546)(ULONG_PTR, __int64, __int64, unsigned int *); // rax
  __int64 v547; // rax
  __int64 v548; // rdx
  __int64 (__fastcall *v549)(ULONG_PTR, __int64, __int64, unsigned int *); // rax
  __int64 (__fastcall *v550)(ULONG_PTR); // rax
  __int64 v551; // rbx
  __int64 v552; // rcx
  __int64 v553; // rax
  __int64 v554; // r8
  __int64 v555; // r14
  int v556; // r9d
  unsigned int v557; // eax
  __int64 v558; // r15
  int v559; // ecx
  unsigned int v560; // eax
  __int64 v561; // r9
  _QWORD *v562; // rcx
  int v563; // r8d
  unsigned __int64 v564; // rdx
  int v565; // ebx
  __int64 v566; // r12
  _QWORD *v567; // rdi
  _DWORD *v568; // rsi
  __int64 v569; // r13
  __int64 v570; // rdx
  _QWORD *v571; // r14
  int v572; // ecx
  _QWORD *v573; // rax
  _QWORD *v574; // r9
  const char *v575; // rax
  int v576; // r11d
  __int64 v577; // rbx
  unsigned __int64 v578; // r8
  unsigned int v579; // r10d
  __int64 v580; // rax
  __int64 v581; // r8
  unsigned __int128 v582; // rax
  unsigned int v583; // edx
  unsigned __int64 v584; // rax
  __int64 v585; // rax
  unsigned __int64 i13; // rax
  _DWORD *v587; // rbx
  ULONG_PTR v588; // r12
  int v589; // r14d
  _BYTE *v590; // r14
  _BYTE *v591; // rax
  unsigned int v592; // r9d
  _QWORD *v593; // r15
  _DWORD *v594; // r13
  int v595; // ecx
  _QWORD *v596; // rax
  __int64 v597; // rdx
  _QWORD *v598; // r10
  const char *v599; // rax
  int v600; // r11d
  __int64 v601; // r12
  unsigned __int64 v602; // rcx
  ULONG_PTR v603; // r8
  unsigned int v604; // ebx
  __int64 v605; // rax
  __int64 v606; // r8
  unsigned __int128 v607; // rax
  unsigned __int64 v608; // r9
  unsigned __int64 v609; // rax
  __int64 v610; // rax
  ULONG_PTR v611; // rax
  int v612; // ecx
  int v613; // r15d
  unsigned __int64 v614; // rdx
  int v615; // r12d
  __int64 v616; // r15
  unsigned int v617; // eax
  _BYTE *v618; // rbx
  int v619; // ecx
  unsigned int v620; // eax
  __int64 v621; // r8
  int v622; // edx
  unsigned __int64 v623; // rcx
  int v624; // r14d
  _BYTE *v625; // r15
  _QWORD *v626; // rax
  int v627; // ecx
  __int64 v628; // rdx
  const char *v629; // r13
  __int64 v630; // r12
  int v631; // r11d
  __int64 v632; // r14
  const char *v633; // rax
  unsigned int v634; // r10d
  __int64 v635; // rax
  __int64 v636; // r8
  unsigned __int128 v637; // rax
  unsigned __int64 v638; // rax
  __int64 v639; // rax
  ULONG_PTR i14; // rax
  _DWORD *v641; // r14
  ULONG_PTR v642; // r12
  __int64 v643; // r15
  __int64 v644; // rax
  unsigned int v645; // ecx
  _QWORD *v646; // rax
  _QWORD *v647; // rax
  ULONG_PTR v648; // r14
  __int64 v649; // rax
  unsigned __int16 v650; // r10
  unsigned int *v651; // r13
  unsigned int *v652; // r12
  __int64 v653; // r11
  unsigned int v654; // ecx
  _DWORD *v655; // r8
  unsigned int v656; // edx
  unsigned int v657; // r9d
  unsigned int v658; // edx
  unsigned int v659; // eax
  __int64 v660; // rax
  unsigned int v661; // r15d
  unsigned int v662; // r12d
  unsigned int v663; // r15d
  unsigned int *v664; // rax
  unsigned int *v665; // r14
  ULONG_PTR v666; // r8
  unsigned int *v667; // rax
  int v668; // r9d
  __int64 v669; // r15
  int v670; // ecx
  __int64 v671; // r14
  unsigned int v672; // eax
  ULONG_PTR v673; // r11
  int v674; // ecx
  unsigned int v675; // eax
  __int64 v676; // r8
  int v677; // edx
  unsigned __int64 v678; // rcx
  int v679; // ebx
  ULONG_PTR v680; // rdx
  _QWORD *v681; // rax
  int v682; // ecx
  __int64 v683; // r8
  unsigned int *v684; // r13
  unsigned __int64 v685; // rcx
  unsigned __int64 i15; // rax
  _DWORD *v687; // r14
  __int64 v688; // rax
  _DWORD *v689; // r8
  __int64 v690; // rdx
  _DWORD *v691; // rax
  __int64 v692; // rcx
  _DWORD *v693; // r13
  int v694; // r12d
  int v695; // eax
  __int16 v696; // ax
  int v697; // r10d
  __int64 *v698; // r11
  unsigned __int8 *v699; // r8
  unsigned __int8 *v700; // rbx
  unsigned __int8 *v701; // r14
  unsigned __int8 *v702; // r9
  __int64 v703; // rdx
  __int64 v704; // rax
  unsigned int v705; // r8d
  __int64 *v706; // r9
  __int64 v707; // rcx
  __int64 v708; // rax
  __int64 v709; // rdx
  __int64 v710; // rax
  int v711; // r9d
  unsigned __int8 *v712; // r8
  __int64 v713; // rdx
  __int64 v714; // rax
  int v715; // r9d
  unsigned __int8 *v716; // r8
  __int64 v717; // rdx
  __int64 v718; // rax
  int v719; // ecx
  ULONG_PTR v720; // r9
  __int64 v721; // rdx
  unsigned int v722; // r15d
  unsigned int *v723; // r8
  unsigned int *v724; // r10
  unsigned int v725; // r15d
  unsigned int v726; // eax
  unsigned int v727; // r13d
  unsigned __int64 *v728; // r8
  unsigned __int64 v729; // r14
  unsigned int v730; // r9d
  unsigned int *v731; // rdx
  unsigned __int64 v732; // r11
  unsigned int i16; // r10d
  ULONG_PTR v734; // rax
  _QWORD *v735; // rbx
  int v736; // r12d
  unsigned __int64 v737; // r15
  const char *v738; // rax
  unsigned __int64 v739; // r8
  unsigned int v740; // r10d
  __int64 v741; // rax
  __int64 v742; // r8
  unsigned __int128 v743; // rax
  unsigned int v744; // r9d
  unsigned __int64 v745; // rax
  __int64 v746; // rax
  unsigned __int64 i17; // rax
  unsigned int v748; // ecx
  bool v749; // cc
  unsigned int *v750; // r13
  unsigned int *v751; // rax
  unsigned int v752; // r13d
  char v753; // r8
  unsigned int v754; // r15d
  __int64 v755; // rbx
  ULONG_PTR v756; // rcx
  unsigned int *v757; // rdx
  unsigned __int64 v758; // r14
  ULONG_PTR *v759; // r8
  unsigned int v760; // r9d
  ULONG_PTR v761; // rbx
  unsigned int i18; // r10d
  ULONG_PTR v763; // rax
  _QWORD *v764; // r11
  int v765; // r15d
  unsigned __int64 v766; // r12
  const char *v767; // rax
  unsigned __int64 v768; // r8
  unsigned int v769; // r10d
  __int64 v770; // rax
  __int64 v771; // r8
  unsigned __int128 v772; // rax
  unsigned int v773; // r9d
  unsigned __int64 v774; // rax
  __int64 v775; // rax
  unsigned __int64 i19; // rax
  _BYTE *v777; // rax
  unsigned int *v778; // r14
  ULONG_PTR v779; // rbx
  unsigned int *v780; // rdx
  unsigned __int64 *v781; // r8
  __int64 v782; // rax
  unsigned int v783; // r9d
  unsigned __int64 v784; // rbx
  unsigned __int64 v785; // r11
  unsigned int i20; // r10d
  ULONG_PTR v787; // rax
  _QWORD *v788; // r10
  int v789; // r14d
  unsigned __int64 v790; // r15
  const char *v791; // rax
  unsigned __int64 v792; // r8
  unsigned int v793; // r11d
  __int64 v794; // rax
  __int64 v795; // r8
  unsigned __int128 v796; // rax
  unsigned int v797; // r9d
  unsigned __int64 v798; // rax
  __int64 v799; // rax
  unsigned __int64 i21; // rax
  __int64 v801; // r8
  __int64 v802; // rax
  int *v803; // rbx
  __int64 v804; // r13
  int v805; // r15d
  unsigned int v806; // r12d
  __int64 v807; // r14
  __int64 (__fastcall *v808)(__int64); // rax
  __int64 v809; // r15
  _QWORD *v810; // rcx
  __int64 v811; // r8
  __int64 v812; // rax
  __int64 v813; // rax
  char *v814; // rbx
  unsigned __int8 v815; // r15
  __int64 i12; // r14
  _QWORD *v817; // rcx
  int v818; // edx
  __int64 v819; // r8
  char v820; // al
  __int64 v821; // rax
  __int64 v822; // rax
  char *v823; // rbx
  __int64 i11; // r14
  _QWORD *v825; // rcx
  int v826; // edx
  __int64 v827; // r8
  char v828; // al
  __int64 v829; // rax
  __int64 v830; // rax
  int v831; // eax
  int v832; // ebx
  unsigned __int64 v833; // rbx
  _BYTE *v834; // rcx
  unsigned __int64 v835; // r8
  __int64 v836; // r15
  __int64 v837; // r14
  unsigned __int64 v838; // rbx
  __int64 v839; // r8
  __int64 v840; // rax
  unsigned __int64 v841; // rcx
  unsigned int v842; // ecx
  _QWORD *v843; // r14
  __int64 v844; // r8
  _QWORD *v845; // r9
  const char *v846; // rax
  int v847; // r10d
  __int64 v848; // r15
  unsigned __int64 v849; // rbx
  unsigned int v850; // r11d
  __int64 v851; // rax
  __int64 v852; // rbx
  char v853; // r10
  unsigned int v854; // r8d
  unsigned __int64 v855; // rax
  __int64 v856; // rax
  unsigned __int64 i5; // rax
  unsigned int v858; // ebx
  __int64 v859; // rcx
  __int64 v860; // r8
  unsigned __int8 v861; // r12
  unsigned __int64 v862; // r14
  unsigned __int64 v863; // r13
  unsigned __int64 v864; // r15
  __int64 v865; // rcx
  __int64 v866; // r8
  unsigned int v867; // r8d
  __int64 *v868; // r9
  unsigned __int8 *v869; // r10
  __int64 v870; // rcx
  __int64 v871; // rax
  __int64 v872; // rcx
  __int64 v873; // r8
  unsigned __int8 v874; // r15
  unsigned __int64 v875; // rbx
  __int64 v876; // r13
  unsigned __int64 v877; // r12
  unsigned __int64 v878; // r14
  _QWORD *v879; // r14
  __int64 v880; // r8
  _QWORD *v881; // r9
  const char *v882; // rax
  int v883; // r10d
  __int64 v884; // r15
  unsigned __int64 v885; // rbx
  unsigned int v886; // r11d
  __int64 v887; // rax
  __int64 v888; // rbx
  char v889; // r10
  __int64 v890; // r8
  unsigned __int64 v891; // rax
  __int64 v892; // rax
  unsigned __int64 i4; // rax
  unsigned int v894; // ebx
  BOOL v895; // r12d
  __int64 v896; // rcx
  unsigned __int8 v897; // r13
  unsigned __int64 v898; // r14
  unsigned __int64 v899; // r15
  __int64 v900; // rcx
  __int64 **v901; // r12
  unsigned int v902; // eax
  int *v903; // rdi
  __int64 v904; // r13
  char *v905; // rbx
  __int64 v906; // r15
  __int64 v907; // r14
  _QWORD *v908; // rcx
  int v909; // edx
  __int64 v910; // r8
  char v911; // al
  __int64 v912; // rax
  __int64 v913; // rax
  __int64 v914; // r9
  _QWORD *v915; // rbx
  int v916; // r11d
  _QWORD *v917; // r10
  __int64 v918; // r15
  const char *v919; // rax
  __int64 v920; // r8
  unsigned int v921; // r14d
  __int64 v922; // rax
  __int64 v923; // r8
  unsigned int v924; // r9d
  unsigned __int64 v925; // rax
  __int64 v926; // rax
  __int64 v927; // rcx
  int v928; // eax
  bool v929; // zf
  __int64 v930; // rax
  __int64 v931; // rdx
  _QWORD *v932; // r14
  __int64 v933; // r8
  _QWORD *v934; // r9
  const char *v935; // rax
  int v936; // r10d
  __int64 v937; // r15
  unsigned __int64 v938; // rbx
  unsigned int v939; // r11d
  __int64 v940; // rdx
  __int64 v941; // rax
  __int64 v942; // rbx
  unsigned __int128 v943; // rax
  char v944; // r10
  __int64 v945; // r8
  unsigned __int64 v946; // rax
  __int64 v947; // rax
  unsigned __int64 i; // rax
  unsigned int v949; // ebx
  BOOL v950; // r12d
  __int64 v951; // rcx
  unsigned __int8 CurrentIrql; // r13
  unsigned __int64 v953; // r14
  unsigned __int64 v954; // r15
  int v955; // eax
  __int64 v956; // rcx
  __int64 v957; // rcx
  unsigned __int8 v958; // r15
  __int64 v959; // rdx
  int *v960; // r14
  unsigned int *v961; // rcx
  unsigned int *v962; // rbx
  char v963; // r12
  unsigned __int64 v964; // r13
  __int64 v965; // r8
  __int64 *v966; // r9
  unsigned int *v967; // r10
  __int64 v968; // rcx
  __int64 v969; // rax
  __int64 v970; // rax
  int *v971; // rcx
  int *v972; // r12
  __int64 v973; // rcx
  unsigned __int8 v974; // r15
  unsigned __int64 v975; // rdx
  unsigned int *v976; // rcx
  unsigned int *v977; // rbx
  unsigned __int64 v978; // r14
  unsigned __int64 v979; // rcx
  unsigned __int64 v980; // rax
  int v981; // r12d
  unsigned int v982; // eax
  int v983; // r8d
  unsigned int v984; // ecx
  unsigned __int64 v985; // rbx
  unsigned __int64 j; // r14
  _QWORD *v987; // r14
  __int64 v988; // r8
  _QWORD *v989; // r9
  const char *v990; // rax
  int v991; // r10d
  __int64 v992; // r15
  unsigned __int64 v993; // rbx
  unsigned int v994; // r11d
  __int64 v995; // rax
  __int64 v996; // rbx
  unsigned __int128 v997; // rax
  unsigned int v998; // r8d
  unsigned __int64 v999; // rax
  __int64 v1000; // rax
  unsigned __int64 k; // rax
  unsigned int v1002; // ebx
  __int64 v1003; // rcx
  __int64 v1004; // r8
  unsigned __int8 v1005; // r12
  unsigned __int64 v1006; // r14
  unsigned __int64 v1007; // r13
  unsigned __int64 v1008; // r15
  __int64 v1009; // rax
  __int64 v1010; // rcx
  _QWORD *v1011; // r14
  __int64 v1012; // r8
  _QWORD *v1013; // r9
  const char *v1014; // rax
  int v1015; // r10d
  __int64 v1016; // r15
  unsigned __int64 v1017; // rbx
  unsigned int v1018; // r11d
  __int64 v1019; // rax
  __int64 v1020; // rbx
  char v1021; // r10
  unsigned int v1022; // r8d
  unsigned __int64 v1023; // rax
  __int64 v1024; // rax
  unsigned __int64 m; // rax
  __int64 v1026; // rcx
  __int64 v1027; // r8
  unsigned __int8 v1028; // r13
  unsigned __int64 v1029; // r14
  int *v1030; // r14
  int v1031; // eax
  __int64 v1032; // rbx
  __int64 v1033; // rcx
  __int64 v1034; // rax
  __int64 v1035; // rcx
  __int64 v1036; // rcx
  __int64 v1037; // rax
  char v1038; // r14
  int v1039; // eax
  __int64 v1040; // rbx
  __int64 (__fastcall *v1041)(_QWORD); // rax
  unsigned int v1042; // r15d
  __int64 v1043; // r12
  char *v1044; // r14
  unsigned __int64 v1045; // rbx
  char v1046; // r15
  __int64 v1047; // r13
  unsigned __int8 v1048; // di
  unsigned __int64 v1049; // rbx
  int *v1050; // r15
  unsigned __int64 *v1051; // rax
  unsigned __int64 *v1052; // rbx
  unsigned __int64 v1053; // rcx
  unsigned __int64 *v1054; // r13
  __int64 v1055; // r13
  __int64 v1056; // rdx
  unsigned __int64 v1057; // r15
  unsigned __int64 v1058; // rcx
  _QWORD *v1059; // rcx
  int v1060; // edx
  __int64 v1061; // r8
  char v1062; // al
  char *v1063; // r14
  unsigned __int64 v1064; // rbx
  unsigned int v1065; // edi
  char v1066; // r15
  __int64 v1067; // r13
  unsigned __int64 v1068; // rbx
  int *v1069; // r15
  unsigned __int64 *v1070; // rax
  unsigned __int64 *v1071; // rbx
  unsigned __int64 v1072; // rcx
  __int64 v1073; // r13
  __int64 v1074; // rdx
  unsigned __int64 v1075; // r15
  unsigned __int64 v1076; // rcx
  _QWORD *v1077; // rcx
  int v1078; // edx
  __int64 v1079; // r8
  char v1080; // al
  __int64 (__fastcall *v1081)(__int64); // rax
  __int64 v1082; // r13
  unsigned __int64 v1083; // rbx
  int *v1084; // r15
  char v1085; // r12
  __int64 v1086; // r15
  unsigned __int64 v1087; // rbx
  int *v1088; // r14
  unsigned __int64 *v1089; // rax
  unsigned __int64 *v1090; // rbx
  unsigned __int64 v1091; // rcx
  _QWORD *v1092; // r15
  unsigned __int8 v1093; // di
  __int64 v1094; // r12
  int *v1095; // r15
  __int64 v1096; // rdx
  unsigned __int64 v1097; // r14
  unsigned __int64 v1098; // rcx
  _QWORD *v1099; // rcx
  int v1100; // edx
  __int64 v1101; // r8
  char v1102; // al
  int v1103; // ecx
  __int64 v1104; // r8
  unsigned int *v1105; // r11
  unsigned int v1106; // kr00_4
  ULONG_PTR v1107; // r9
  char *v1108; // r15
  unsigned int v1109; // r10d
  __int64 v1110; // rdi
  __int64 v1111; // r13
  __int64 v1112; // r9
  __int64 v1113; // r12
  unsigned __int64 v1114; // r13
  _QWORD *v1115; // r10
  int v1116; // ebx
  const char *v1117; // rax
  unsigned __int64 v1118; // r14
  unsigned __int64 v1119; // r8
  unsigned int v1120; // r11d
  __int64 v1121; // rax
  __int64 v1122; // r8
  unsigned __int128 v1123; // rax
  unsigned int v1124; // r9d
  unsigned __int64 v1125; // rax
  __int64 v1126; // rax
  unsigned __int64 n; // rax
  char v1128; // cl
  unsigned int v1129; // edx
  int v1130; // eax
  unsigned __int8 v1131; // r15
  unsigned __int64 v1132; // rbx
  __int64 v1133; // r13
  unsigned __int64 v1134; // r12
  unsigned __int64 v1135; // r14
  int v1136; // eax
  int *v1137; // rcx
  __int64 v1138; // rcx
  int *v1139; // rdi
  __int64 v1140; // r12
  unsigned __int64 v1141; // r15
  __int64 v1142; // r8
  _QWORD *v1143; // r9
  int v1144; // r10d
  const char *v1145; // rax
  unsigned __int64 v1146; // r14
  __int64 v1147; // r13
  unsigned __int64 v1148; // rbx
  unsigned int v1149; // r11d
  __int64 v1150; // rax
  __int64 v1151; // rbx
  unsigned __int128 v1152; // rax
  unsigned int v1153; // r8d
  unsigned __int64 v1154; // rax
  __int64 v1155; // rax
  unsigned __int64 ii; // rax
  unsigned int v1157; // ecx
  unsigned int v1158; // ebx
  __int64 v1159; // r8
  unsigned __int8 v1160; // r12
  unsigned __int64 v1161; // r14
  unsigned __int64 v1162; // r13
  unsigned __int64 v1163; // r15
  int v1164; // eax
  __int64 v1165; // rax
  __int64 v1166; // rcx
  int v1167; // r10d
  int v1168; // r10d
  __int64 v1169; // rax
  unsigned int v1170; // ebx
  __int64 v1171; // rax
  unsigned int v1172; // r14d
  unsigned __int64 v1173; // rax
  __int64 v1174; // rdx
  __int64 v1175; // r8
  int v1176; // ecx
  _QWORD *v1177; // rax
  struct _KPRCB *v1178; // rdx
  unsigned __int64 v1179; // r8
  __int64 v1180; // r8
  _QWORD *v1181; // r15
  __int64 v1182; // r14
  __int64 v1183; // rdx
  __int64 v1184; // r8
  int v1185; // ecx
  _QWORD *v1186; // rax
  unsigned __int64 v1187; // rcx
  __int64 Ldtr; // r12
  unsigned __int16 Tr; // ax
  int v1190; // r10d
  unsigned __int16 v1191; // r13
  __int64 v1192; // r11
  _QWORD *v1193; // r8
  const char *v1194; // rax
  unsigned __int64 v1195; // rbx
  unsigned int v1196; // r9d
  __int64 v1197; // rax
  __int64 v1198; // rbx
  unsigned __int128 v1199; // rax
  unsigned int v1200; // r14d
  unsigned __int64 v1201; // rax
  __int64 v1202; // rax
  unsigned __int64 i28; // rax
  unsigned int v1204; // ebx
  int *v1205; // r9
  _QWORD *v1206; // rcx
  int v1207; // edx
  __int64 v1208; // r8
  char v1209; // al
  int v1210; // eax
  __int64 v1211; // rcx
  __int64 v1212; // rdx
  unsigned int v1213; // edi
  __int64 v1214; // rcx
  __int64 v1215; // r9
  __int64 v1216; // r14
  unsigned __int64 v1217; // r8
  __int64 v1218; // r12
  __int64 v1219; // r13
  unsigned __int8 v1220; // r15
  __int16 v1221; // r10
  int v1222; // eax
  __int64 v1223; // rcx
  _QWORD *v1224; // rbx
  _QWORD *v1225; // rdx
  __int64 v1226; // r12
  __int64 v1227; // r13
  __int64 v1228; // rax
  unsigned int *v1229; // rax
  __int64 v1230; // rcx
  unsigned __int64 v1231; // rbx
  struct _KPRCB *v1232; // rdx
  _QWORD *v1233; // r15
  _QWORD *v1234; // r8
  int v1235; // ebx
  const char *v1236; // rax
  int v1237; // r9d
  __int64 v1238; // r11
  int v1239; // r10d
  unsigned __int64 v1240; // r14
  __int64 v1241; // rax
  __int64 v1242; // r14
  unsigned __int128 v1243; // rax
  int v1244; // edx
  int v1245; // r12d
  __int64 v1246; // rax
  __int64 v1247; // rax
  unsigned __int64 i29; // rax
  unsigned int *v1249; // rax
  __int64 v1250; // rax
  __int64 v1251; // rax
  __int64 v1252; // rax
  unsigned int v1253; // r14d
  _QWORD *v1254; // rdx
  int v1255; // r9d
  unsigned __int64 v1256; // rbx
  const char *v1257; // rax
  __int64 v1258; // rax
  int v1259; // r8d
  __int64 v1260; // rax
  unsigned __int64 i30; // rax
  unsigned int v1262; // ebx
  __int64 v1263; // rcx
  __int64 v1264; // rax
  __int64 v1265; // rcx
  int v1266; // r12d
  volatile signed __int32 *v1267; // rcx
  _QWORD *v1268; // r14
  __int64 v1269; // r8
  _QWORD *v1270; // r9
  const char *v1271; // rax
  int v1272; // r10d
  __int64 v1273; // r15
  unsigned __int64 v1274; // rbx
  unsigned int v1275; // r11d
  __int64 v1276; // rax
  __int64 v1277; // rbx
  char v1278; // r10
  unsigned int v1279; // r8d
  unsigned __int64 v1280; // rax
  __int64 v1281; // rax
  unsigned __int64 kk; // rax
  unsigned int v1283; // ebx
  __int64 v1284; // rcx
  unsigned __int8 v1285; // r13
  unsigned __int64 v1286; // r14
  unsigned __int64 v1287; // r15
  bool v1288; // zf
  __int64 v1289; // rcx
  int v1290; // ecx
  unsigned __int64 v1291; // rbx
  unsigned __int64 mm; // r14
  _QWORD *v1293; // r14
  __int64 v1294; // r8
  _QWORD *v1295; // r9
  const char *v1296; // rax
  int v1297; // r10d
  __int64 v1298; // r15
  unsigned __int64 v1299; // rbx
  unsigned int v1300; // r11d
  __int64 v1301; // rax
  __int64 v1302; // rbx
  unsigned __int128 v1303; // rax
  unsigned int v1304; // r8d
  unsigned __int64 v1305; // rax
  __int64 v1306; // rax
  unsigned __int64 nn; // rax
  unsigned int v1308; // ebx
  __int64 v1309; // rcx
  __int64 v1310; // r8
  unsigned __int8 v1311; // r12
  unsigned __int64 v1312; // r14
  unsigned __int64 v1313; // r13
  int v1314; // eax
  __int64 v1315; // r14
  __int64 v1316; // rcx
  __int64 v1317; // rcx
  unsigned int v1318; // ebx
  bool jj; // zf
  _QWORD *v1320; // rcx
  __int64 v1321; // r8
  __int64 v1322; // r15
  int v1323; // r14d
  unsigned int v1324; // ecx
  char v1325; // bl
  volatile signed __int8 **v1326; // r8
  volatile signed __int8 *v1327; // rdx
  unsigned __int8 v1328; // bl
  int v1329; // ecx
  unsigned int v1330; // eax
  int v1331; // r8d
  unsigned int v1332; // ecx
  unsigned __int64 v1333; // rbx
  unsigned __int64 i1; // r14
  _QWORD *v1335; // r14
  __int64 v1336; // r8
  _QWORD *v1337; // r9
  const char *v1338; // rax
  int v1339; // r11d
  __int64 v1340; // r15
  unsigned __int64 v1341; // rbx
  unsigned int v1342; // r10d
  __int64 v1343; // rax
  __int64 v1344; // rbx
  unsigned __int128 v1345; // rax
  unsigned int v1346; // r8d
  unsigned __int64 v1347; // rax
  __int64 v1348; // rax
  unsigned __int64 i2; // rax
  unsigned int v1350; // ebx
  __int64 v1351; // rcx
  __int64 v1352; // r8
  unsigned __int8 v1353; // r12
  unsigned __int64 v1354; // r14
  unsigned __int64 v1355; // r13
  unsigned __int64 v1356; // r15
  int v1357; // eax
  __int64 v1358; // rbx
  __int64 (__fastcall *v1359)(__int64); // rax
  _DWORD *v1360; // r15
  unsigned int v1361; // r12d
  _DWORD *v1362; // rdi
  unsigned int v1363; // ecx
  unsigned int v1364; // r11d
  unsigned int v1365; // r13d
  int v1366; // eax
  __int64 v1367; // r8
  __int64 v1368; // rcx
  _QWORD *v1369; // r14
  __int64 v1370; // r8
  _QWORD *v1371; // r9
  const char *v1372; // rax
  int v1373; // r10d
  __int64 v1374; // r15
  unsigned __int64 v1375; // rbx
  unsigned int v1376; // r11d
  __int64 v1377; // rax
  __int64 v1378; // rbx
  char v1379; // r10
  unsigned int v1380; // r8d
  unsigned __int64 v1381; // rax
  __int64 v1382; // rax
  unsigned __int64 i3; // rax
  unsigned int v1384; // ebx
  BOOL v1385; // r12d
  __int64 v1386; // rcx
  __int64 v1387; // r8
  unsigned __int8 v1388; // r13
  unsigned __int64 v1389; // r14
  __int16 v1390; // ax
  char *v1391; // r8
  int v1392; // r10d
  unsigned __int8 *v1393; // r9
  __int64 *v1394; // r9
  unsigned int v1395; // r8d
  __int64 *v1396; // r10
  __int64 v1397; // rcx
  __int64 v1398; // rax
  unsigned __int8 *v1399; // r8
  int v1400; // r10d
  unsigned __int8 *v1401; // r9
  unsigned __int8 *v1402; // r8
  int v1403; // r10d
  unsigned __int8 *v1404; // r9
  int v1405; // eax
  BOOL v1406; // r14d
  __int64 v1407; // rbx
  __int64 v1408; // r9
  int *v1409; // rcx
  int v1410; // eax
  ULONG_PTR v1411; // rcx
  unsigned __int8 v1412; // bl
  int *v1413; // rbx
  __int64 v1414; // r8
  unsigned __int64 v1415; // rcx
  unsigned int *v1416; // r14
  unsigned int *v1417; // r15
  unsigned __int64 v1418; // rdi
  __int64 v1419; // rdx
  unsigned __int64 v1420; // r13
  unsigned int v1421; // r12d
  _QWORD *v1422; // r8
  int v1423; // r10d
  const char *v1424; // rax
  __int64 v1425; // r11
  unsigned __int64 v1426; // rcx
  __int64 v1427; // rbx
  unsigned int v1428; // r9d
  __int64 v1429; // rax
  __int64 v1430; // rbx
  unsigned __int128 v1431; // rax
  _BOOL8 v1432; // r9
  unsigned int v1433; // edx
  unsigned __int64 v1434; // rax
  __int64 v1435; // rax
  unsigned __int64 i25; // rax
  int v1437; // eax
  unsigned __int64 v1438; // rbx
  unsigned __int64 v1439; // r14
  _QWORD *v1440; // r11
  __int64 v1441; // r8
  _QWORD *v1442; // r9
  const char *v1443; // rax
  int v1444; // r14d
  __int64 v1445; // r15
  unsigned __int64 v1446; // rbx
  unsigned int v1447; // r10d
  __int64 v1448; // rax
  __int64 v1449; // rbx
  unsigned __int128 v1450; // rax
  unsigned int v1451; // r8d
  unsigned __int64 v1452; // rax
  __int64 v1453; // rax
  unsigned __int64 i26; // rax
  unsigned int v1455; // r8d
  unsigned int v1456; // ebx
  __int64 v1457; // rcx
  __int64 v1458; // rdx
  unsigned __int8 v1459; // r12
  unsigned __int64 v1460; // r14
  unsigned __int64 v1461; // r13
  unsigned __int64 v1462; // r15
  int v1463; // eax
  __int64 v1464; // rcx
  __int64 v1465; // rax
  _QWORD *v1466; // r14
  __int64 v1467; // r8
  _QWORD *v1468; // r9
  const char *v1469; // rax
  int v1470; // r11d
  __int64 v1471; // r15
  unsigned __int64 v1472; // rbx
  unsigned int v1473; // r10d
  __int64 v1474; // rax
  __int64 v1475; // rbx
  unsigned __int128 v1476; // rax
  unsigned int v1477; // r8d
  unsigned __int64 v1478; // rax
  __int64 v1479; // rax
  unsigned __int64 i27; // rax
  int *v1481; // r10
  unsigned int v1482; // ebx
  BOOL v1483; // r13d
  __int64 v1484; // rcx
  __int64 v1485; // rdx
  __int64 v1486; // r8
  unsigned __int8 v1487; // r12
  unsigned __int64 v1488; // r14
  int v1489; // eax
  _BYTE *v1490; // r15
  char *v1491; // r14
  char v1492; // al
  volatile signed __int32 *v1493; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  __int64 v1495; // r8
  int v1496; // ecx
  struct _KPRCB *v1497; // rax
  unsigned __int64 v1498; // rcx
  int *v1499; // rcx
  unsigned int v1500; // ecx
  __int64 v1501; // r8
  unsigned __int8 v1502; // r15
  unsigned __int64 v1503; // rbx
  __int64 v1504; // r13
  unsigned __int64 v1505; // r12
  unsigned __int64 v1506; // r14
  int v1507; // eax
  __int64 v1508; // rax
  __int64 v1509; // rcx
  __int64 v1510; // rcx
  unsigned __int8 v1511; // r15
  __int64 v1512; // rdx
  int *v1513; // r14
  unsigned int *v1514; // rcx
  unsigned int *v1515; // rbx
  char v1516; // r12
  unsigned __int64 v1517; // r13
  __int64 v1518; // r8
  __int64 *v1519; // r9
  unsigned int *v1520; // r10
  __int64 v1521; // rcx
  __int64 v1522; // rax
  __int64 v1523; // rax
  int *v1524; // rcx
  int *v1525; // rcx
  __int64 v1526; // rbx
  __int64 v1527; // rbx
  __int64 v1528; // r10
  __int64 v1529; // r12
  unsigned int v1530; // r14d
  __int64 v1531; // r13
  void (__fastcall *v1532)(_QWORD, _QWORD, unsigned __int64 *); // r11
  unsigned __int64 v1533; // rcx
  unsigned __int128 v1534; // rax
  unsigned __int64 v1535; // r9
  int v1536; // r8d
  unsigned __int64 v1537; // rcx
  unsigned __int128 v1538; // rax
  unsigned __int64 v1539; // rcx
  unsigned __int128 v1540; // rax
  __int64 v1541; // rbx
  __int64 v1542; // r15
  unsigned __int64 v1543; // rcx
  unsigned __int128 v1544; // rax
  int v1545; // ecx
  _QWORD *v1546; // rax
  __int64 v1547; // r10
  __int64 v1548; // r11
  unsigned __int64 v1549; // r8
  __int64 *v1550; // r9
  __int64 v1551; // rdx
  __int64 v1552; // rcx
  _QWORD *v1553; // rdx
  _QWORD *v1554; // rax
  __int64 v1555; // r9
  int v1556; // ecx
  __int64 v1557; // r11
  unsigned __int64 v1558; // r8
  __int64 *v1559; // r10
  __int64 v1560; // rdx
  unsigned int v1561; // r14d
  __int64 v1562; // rax
  int v1563; // ecx
  int v1564; // eax
  char v1565; // r13
  __int64 v1566; // rcx
  _BYTE *v1567; // rbx
  __int64 v1568; // r14
  __int64 v1569; // rcx
  __int64 v1570; // r14
  __int64 v1571; // rdx
  int v1572; // ecx
  unsigned __int64 v1573; // rdx
  __int64 *v1574; // rbx
  __int64 v1575; // rax
  __int64 v1576; // r14
  __int64 v1577; // rax
  __int64 v1578; // rsi
  __int64 v1579; // r13
  __int64 v1580; // r14
  int v1581; // r9d
  ULONG_PTR v1582; // rdi
  __int64 v1583; // r15
  _QWORD *v1584; // r10
  const char *v1585; // rax
  unsigned int v1586; // r11d
  ULONG_PTR v1587; // rcx
  __int64 v1588; // r8
  unsigned int v1589; // r12d
  __int64 v1590; // rax
  __int64 v1591; // r8
  unsigned __int128 v1592; // rax
  unsigned int v1593; // r11d
  unsigned __int64 v1594; // rax
  __int64 v1595; // rax
  _QWORD *v1596; // r12
  unsigned __int64 v1597; // r11
  _QWORD *v1598; // r9
  const char *v1599; // rax
  __int64 v1600; // r8
  __int64 v1601; // r13
  unsigned __int64 v1602; // r14
  unsigned int v1603; // r10d
  __int64 v1604; // rax
  __int64 v1605; // r14
  unsigned __int128 v1606; // rax
  unsigned int v1607; // r15d
  unsigned __int64 v1608; // rax
  __int64 v1609; // rax
  ULONG_PTR v1610; // r15
  __int64 v1611; // rcx
  _QWORD *v1612; // rax
  __int64 v1613; // rax
  char v1614; // bl
  unsigned __int64 v1615; // rdi
  __int64 v1616; // r12
  __int64 v1617; // r14
  int v1618; // eax
  int v1619; // ecx
  unsigned int v1620; // r9d
  _QWORD *v1621; // r15
  int v1622; // r11d
  unsigned __int64 v1623; // rcx
  _QWORD *v1624; // r10
  const char *v1625; // rax
  unsigned __int64 v1626; // r8
  unsigned int v1627; // r13d
  __int64 v1628; // rax
  __int64 v1629; // r8
  unsigned __int128 v1630; // rax
  unsigned int v1631; // r9d
  unsigned __int64 v1632; // rax
  __int64 v1633; // rax
  int v1634; // r9d
  __int64 v1635; // r8
  unsigned __int64 v1636; // rdx
  __int64 v1637; // rcx
  __int64 v1638; // rax
  __int64 v1639; // r12
  __int64 v1640; // r13
  __int64 v1641; // rax
  unsigned __int64 v1642; // r15
  _QWORD *v1643; // rcx
  __int64 v1644; // rax
  int v1645; // r10d
  int ***v1646; // r15
  int v1647; // r12d
  unsigned int v1648; // r9d
  __int64 v1649; // r11
  unsigned int v1650; // r13d
  int v1651; // r8d
  int *v1652; // r14
  int v1653; // edx
  __int64 v1654; // rax
  __int64 v1655; // r8
  int v1656; // ecx
  __int64 v1657; // rax
  const char *v1658; // r13
  _QWORD *v1659; // r15
  __int64 v1660; // r13
  unsigned int v1661; // r12d
  unsigned int v1662; // eax
  __int64 v1663; // r14
  int v1664; // ecx
  unsigned int v1665; // eax
  __int64 v1666; // r8
  int v1667; // edx
  unsigned __int64 v1668; // rcx
  int v1669; // ebx
  __int16 v1670; // ax
  unsigned __int8 *v1671; // r8
  __int64 *v1672; // r10
  __int64 v1673; // r9
  unsigned __int8 *v1674; // r15
  int v1675; // r11d
  unsigned __int8 *v1676; // r13
  __int64 v1677; // rdx
  __int64 v1678; // rax
  unsigned int v1679; // r8d
  __int64 *v1680; // r9
  __int64 v1681; // rcx
  __int64 v1682; // rax
  __int64 v1683; // rdx
  __int64 v1684; // rax
  int v1685; // r9d
  __int64 v1686; // r8
  __int64 v1687; // rdx
  __int64 v1688; // rax
  int v1689; // r9d
  __int64 v1690; // r8
  __int64 v1691; // rdx
  __int64 v1692; // rax
  __int64 v1693; // rbx
  _QWORD *v1694; // rax
  int v1695; // ecx
  __int64 v1696; // rdx
  _QWORD *v1697; // r9
  const char *v1698; // rax
  int v1699; // r10d
  __int64 v1700; // rsi
  unsigned __int64 v1701; // rcx
  unsigned int v1702; // r11d
  __int64 v1703; // rax
  __int64 v1704; // r8
  unsigned __int128 v1705; // rax
  unsigned int v1706; // edx
  unsigned __int64 v1707; // rax
  __int64 v1708; // rax
  unsigned __int64 i32; // rax
  __int64 v1710; // r14
  int v1711; // r15d
  int v1712; // r12d
  unsigned int v1713; // eax
  __int64 v1714; // rsi
  int v1715; // ecx
  unsigned int v1716; // eax
  __int64 v1717; // r8
  int v1718; // edx
  unsigned __int64 v1719; // rcx
  int v1720; // ebx
  __int64 v1721; // rbx
  _QWORD *v1722; // rax
  int v1723; // ecx
  __int64 v1724; // rdx
  _QWORD *v1725; // rcx
  unsigned __int64 v1726; // rcx
  int v1727; // r10d
  const char *v1728; // rax
  unsigned __int64 i33; // rdx
  __int64 v1730; // rax
  int v1731; // r9d
  __int64 v1732; // rax
  unsigned __int64 i34; // rax
  const char *v1734; // r13
  __int64 v1735; // r14
  ULONG_PTR v1736; // r15
  unsigned int v1737; // r12d
  unsigned int v1738; // eax
  __int64 v1739; // rsi
  int v1740; // ecx
  unsigned int v1741; // eax
  __int64 v1742; // r8
  int v1743; // edx
  unsigned __int64 v1744; // rcx
  int v1745; // ebx
  __int64 v1746; // rbx
  _QWORD *v1747; // rax
  int v1748; // ecx
  __int64 v1749; // rdx
  _QWORD *v1750; // r9
  const char *v1751; // rax
  int v1752; // r10d
  __int64 v1753; // r14
  ULONG_PTR v1754; // rcx
  unsigned int v1755; // r11d
  __int64 v1756; // rax
  __int64 v1757; // r8
  unsigned __int128 v1758; // rax
  unsigned int v1759; // edx
  unsigned __int64 v1760; // rax
  __int64 v1761; // rax
  unsigned __int64 i35; // rax
  __int64 v1763; // r14
  int v1764; // r15d
  int v1765; // r12d
  unsigned int v1766; // eax
  __int64 v1767; // rsi
  int v1768; // ecx
  unsigned int v1769; // eax
  __int64 v1770; // r8
  int v1771; // edx
  unsigned __int64 v1772; // rcx
  int v1773; // ebx
  __int64 v1774; // rbx
  _QWORD *v1775; // rax
  int v1776; // ecx
  __int64 v1777; // rdx
  __int64 v1778; // rcx
  unsigned __int64 v1779; // rcx
  int v1780; // r10d
  const char *v1781; // rax
  unsigned __int64 i36; // rdx
  __int64 v1783; // rax
  int v1784; // r9d
  __int64 v1785; // rax
  unsigned __int64 i37; // rax
  int v1787; // eax
  _BYTE *v1788; // r14
  int v1789; // r13d
  _QWORD *v1790; // r15
  __int64 v1791; // rsi
  __int64 v1792; // rax
  unsigned int v1793; // r14d
  __int64 v1794; // rdi
  __int64 v1795; // r14
  unsigned int v1796; // ecx
  int v1797; // ecx
  unsigned int v1798; // eax
  __int64 v1799; // r8
  int v1800; // edx
  unsigned __int64 v1801; // rcx
  int v1802; // ebx
  int *v1803; // rbx
  int v1804; // ecx
  _QWORD *v1805; // rax
  __int64 v1806; // rdx
  unsigned __int64 v1807; // rcx
  unsigned __int64 i39; // rax
  int *v1809; // r15
  _QWORD *v1810; // rcx
  unsigned int v1811; // r12d
  const char *v1812; // r14
  const char *v1813; // rax
  unsigned __int64 i40; // rdx
  int v1815; // r9d
  __int64 v1816; // rax
  unsigned __int64 i41; // rax
  __int64 v1818; // rax
  int v1819; // r15d
  unsigned int v1820; // ebx
  ULONG_PTR v1821; // rdi
  __int64 v1822; // rsi
  __int64 v1823; // r12
  unsigned int v1824; // ecx
  int v1825; // ecx
  unsigned int v1826; // eax
  __int64 v1827; // r8
  int v1828; // edx
  unsigned __int64 v1829; // rcx
  int v1830; // esi
  int *v1831; // rsi
  int v1832; // ecx
  unsigned __int64 v1833; // rcx
  unsigned __int64 i38; // rax
  __int64 v1835; // rax
  int *v1836; // r13
  unsigned int v1837; // r12d
  ULONG_PTR v1838; // r15
  int v1839; // r9d
  __int64 v1840; // rax
  __int64 v1841; // r14
  __int64 v1842; // rax
  ULONG_PTR v1843; // rcx
  __int64 (__fastcall *v1844)(ULONG_PTR, char *, __int64); // rax
  int v1845; // r13d
  __int64 v1846; // r12
  unsigned int v1847; // r11d
  int v1848; // ecx
  int v1849; // ecx
  int v1850; // ecx
  int *v1851; // rax
  int v1852; // ecx
  __int64 v1853; // r9
  int v1854; // r10d
  _BYTE *v1855; // r14
  unsigned int v1856; // r15d
  int *v1857; // r8
  __int64 v1858; // r9
  int v1859; // ecx
  int v1860; // ecx
  int v1861; // ecx
  int v1862; // ecx
  int v1863; // ecx
  bool v1864; // zf
  __int64 v1865; // rax
  int v1866; // eax
  int v1867; // ecx
  int v1868; // ecx
  int v1869; // ecx
  unsigned __int64 v1870; // rdx
  __int64 v1871; // r14
  ULONG_PTR v1872; // r13
  __int64 (__fastcall *v1873)(ULONG_PTR, char *); // rax
  ULONG_PTR v1874; // r14
  unsigned int v1875; // r11d
  unsigned int v1876; // r12d
  int *v1877; // rax
  int v1878; // ecx
  int v1879; // ecx
  unsigned int v1880; // r9d
  int v1881; // r10d
  _BYTE *v1882; // r14
  unsigned int v1883; // r15d
  int **v1884; // r8
  __int64 v1885; // r9
  int v1886; // ecx
  int v1887; // ecx
  int v1888; // ecx
  int v1889; // ecx
  int v1890; // ecx
  bool v1891; // zf
  __int64 v1892; // rax
  int v1893; // eax
  int v1894; // ecx
  int v1895; // ecx
  int v1896; // ecx
  unsigned __int64 v1897; // rdx
  __int64 v1898; // r14
  char **v1899; // rsi
  __int64 v1900; // rcx
  __int64 v1901; // rdx
  char *v1902; // rdx
  __int64 v1903; // r9
  ULONG_PTR v1904; // rax
  __int64 v1905; // rdx
  __int64 (__fastcall *v1906)(ULONG_PTR, __int64, _QWORD, unsigned int *); // rax
  __int64 v1907; // rax
  __int64 v1908; // rdx
  __int64 (__fastcall *v1909)(ULONG_PTR, __int64, __int64, unsigned int *); // rax
  ULONG_PTR v1910; // rax
  ULONG_PTR v1911; // rdx
  __int64 (__fastcall *v1912)(ULONG_PTR, ULONG_PTR, __int64, unsigned int *); // rax
  __int64 (__fastcall *v1913)(ULONG_PTR); // rax
  __int64 v1914; // rsi
  __int64 v1915; // rax
  __int64 v1916; // r8
  __int64 v1917; // r14
  unsigned int v1918; // eax
  int v1919; // ecx
  unsigned int v1920; // eax
  __int64 v1921; // r8
  int v1922; // edx
  unsigned __int64 v1923; // rcx
  int v1924; // ebx
  __int64 v1925; // rdx
  ULONG_PTR v1926; // r11
  _QWORD *v1927; // rdi
  unsigned int *v1928; // r12
  __int64 v1929; // r15
  int v1930; // ecx
  _QWORD *v1931; // r14
  _QWORD *v1932; // rax
  _QWORD *v1933; // r9
  const char *v1934; // rax
  int v1935; // r10d
  __int64 v1936; // r13
  unsigned __int64 v1937; // r8
  unsigned int v1938; // ebx
  __int64 v1939; // rax
  __int64 v1940; // r8
  unsigned __int128 v1941; // rax
  unsigned int v1942; // edx
  unsigned __int64 v1943; // rax
  __int64 v1944; // rax
  unsigned __int64 i42; // rax
  __int64 v1946; // r12
  ULONG_PTR v1947; // r14
  int v1948; // r8d
  ULONG_PTR v1949; // r9
  int v1950; // ecx
  unsigned int v1951; // r9d
  __int64 v1952; // r12
  _QWORD *v1953; // rsi
  _DWORD *v1954; // r13
  unsigned __int128 v1955; // rax
  _QWORD *v1956; // r10
  const char *v1957; // rax
  int v1958; // r11d
  __int64 v1959; // r15
  unsigned __int64 v1960; // rcx
  unsigned __int64 v1961; // r8
  unsigned int v1962; // r14d
  __int64 v1963; // rax
  __int64 v1964; // r8
  ULONG_PTR v1965; // r9
  unsigned __int64 v1966; // rax
  __int64 v1967; // rax
  unsigned __int64 i43; // rax
  __int64 v1969; // r15
  __int64 v1970; // r15
  unsigned int v1971; // eax
  __int64 v1972; // r14
  int v1973; // ecx
  unsigned int v1974; // eax
  __int64 v1975; // r8
  int v1976; // edx
  unsigned __int64 v1977; // rcx
  int v1978; // ebx
  int v1979; // ecx
  _QWORD *v1980; // rax
  __int64 v1981; // rdx
  const char *v1982; // rax
  unsigned int v1983; // r13d
  int v1984; // r10d
  __int64 v1985; // rbx
  unsigned int v1986; // r11d
  __int64 v1987; // rax
  __int64 v1988; // r8
  ULONG_PTR v1989; // rcx
  unsigned __int64 i44; // rax
  unsigned __int64 v1991; // r14
  __int64 v1992; // rbx
  int v1993; // ecx
  _QWORD *v1994; // rax
  __int64 v1995; // r15
  unsigned __int16 v1996; // r10
  unsigned int *v1997; // rbx
  _DWORD *v1998; // r12
  unsigned int v1999; // ecx
  ULONG_PTR v2000; // r8
  unsigned int *v2001; // r13
  __int64 v2002; // r9
  unsigned int v2003; // r15d
  unsigned int v2004; // r15d
  __int64 v2005; // rax
  unsigned int v2006; // ecx
  unsigned int v2007; // r14d
  unsigned int v2008; // r14d
  unsigned int *v2009; // r12
  ULONG_PTR v2010; // r8
  unsigned int *v2011; // rdx
  unsigned int v2012; // edx
  int v2013; // r9d
  __int64 v2014; // r15
  ULONG_PTR v2015; // r13
  int v2016; // ecx
  __int64 v2017; // r14
  unsigned int v2018; // eax
  __int64 v2019; // rbx
  int v2020; // ecx
  unsigned int v2021; // eax
  __int64 v2022; // r8
  int v2023; // edx
  unsigned __int64 v2024; // rcx
  int v2025; // esi
  __int64 v2026; // rcx
  _QWORD *v2027; // rax
  int v2028; // edx
  __int64 v2029; // r8
  int *v2030; // rax
  unsigned __int64 v2031; // rdx
  unsigned __int64 i46; // rax
  ULONG_PTR v2033; // r14
  int *v2034; // rcx
  int *v2035; // r11
  int *v2036; // r8
  __int64 v2037; // rdx
  _DWORD *v2038; // rax
  unsigned int v2039; // r10d
  __int64 v2040; // rcx
  int v2041; // eax
  int v2042; // edx
  __int16 v2043; // ax
  char *v2044; // r8
  __int64 *v2045; // r10
  signed __int64 v2046; // r9
  char *v2047; // r11
  int v2048; // r14d
  char *v2049; // rsi
  __int64 v2050; // rdx
  __int64 v2051; // rax
  unsigned int v2052; // r8d
  __int64 *v2053; // r9
  __int64 v2054; // rcx
  __int64 v2055; // rax
  __int64 v2056; // rdx
  __int64 v2057; // rax
  int v2058; // r9d
  signed __int64 v2059; // r8
  __int64 v2060; // rdx
  __int64 v2061; // rax
  int v2062; // r9d
  signed __int64 v2063; // r8
  __int64 v2064; // rdx
  __int64 v2065; // rax
  int v2066; // ecx
  __int64 v2067; // r8
  unsigned int v2068; // r15d
  int *v2069; // r9
  unsigned int v2070; // r15d
  int v2071; // r13d
  int v2072; // eax
  unsigned int v2073; // ecx
  unsigned int v2074; // r12d
  bool v2075; // cf
  unsigned __int64 v2076; // rsi
  unsigned int v2077; // r9d
  unsigned int *v2078; // rdx
  unsigned __int64 v2079; // r14
  unsigned __int64 *v2080; // r8
  _QWORD *v2081; // r10
  int v2082; // r11d
  const char *v2083; // rax
  __int64 v2084; // r15
  unsigned __int64 v2085; // r8
  unsigned int v2086; // r14d
  __int64 v2087; // rax
  __int64 v2088; // r8
  unsigned __int128 v2089; // rax
  unsigned int v2090; // r9d
  unsigned __int64 v2091; // rax
  __int64 v2092; // rax
  unsigned __int64 v2093; // rax
  int *v2094; // r12
  unsigned int *v2095; // r11
  ULONG_PTR v2096; // rsi
  unsigned int *v2097; // rcx
  unsigned __int64 *v2098; // rdx
  __int64 v2099; // rax
  unsigned int v2100; // r8d
  unsigned int v2101; // r9d
  unsigned __int64 v2102; // rsi
  unsigned __int64 v2103; // r14
  _QWORD *v2104; // r10
  int v2105; // r11d
  const char *v2106; // rax
  __int64 v2107; // r15
  unsigned __int64 v2108; // r8
  unsigned int v2109; // r14d
  __int64 v2110; // rax
  __int64 v2111; // r8
  unsigned __int128 v2112; // rax
  unsigned int v2113; // r9d
  unsigned __int64 v2114; // rax
  __int64 v2115; // rax
  unsigned __int64 v2116; // rax
  ULONG_PTR v2117; // r8
  int *v2118; // rax
  unsigned int v2119; // r12d
  char v2120; // r8
  __int64 v2121; // r14
  ULONG_PTR v2122; // rcx
  unsigned int *v2123; // rcx
  unsigned __int64 v2124; // rsi
  ULONG_PTR *v2125; // rdx
  unsigned int v2126; // r8d
  unsigned int v2127; // r9d
  ULONG_PTR v2128; // r14
  _QWORD *v2129; // r10
  int v2130; // r11d
  const char *v2131; // rax
  __int64 v2132; // r15
  unsigned __int64 v2133; // r8
  unsigned int v2134; // r14d
  __int64 v2135; // rax
  __int64 v2136; // r8
  unsigned __int128 v2137; // rax
  unsigned int v2138; // r9d
  unsigned __int64 v2139; // rax
  __int64 v2140; // rax
  unsigned __int64 v2141; // rax
  _BYTE *v2142; // rax
  __int64 v2143; // r8
  __int64 v2144; // rax
  unsigned int *v2145; // r12
  __int64 v2146; // rax
  __int64 v2147; // rcx
  __int64 v2148; // rax
  char *v2149; // r15
  char *i45; // r14
  __int64 v2151; // rax
  ULONG_PTR v2152; // rdx
  _QWORD *v2153; // r15
  int v2154; // r9d
  int v2155; // r12d
  __int64 v2156; // r13
  unsigned int v2157; // eax
  __int64 v2158; // r14
  int v2159; // ecx
  unsigned int v2160; // eax
  __int64 v2161; // r8
  int v2162; // ecx
  unsigned __int64 v2163; // rdx
  int v2164; // ebx
  __int64 v2165; // rbx
  _QWORD *v2166; // rax
  int v2167; // ecx
  __int64 v2168; // rdx
  unsigned __int64 v2169; // rax
  unsigned __int64 i47; // rcx
  unsigned __int64 *v2171; // r15
  unsigned __int64 v2172; // r15
  unsigned int v2173; // r12d
  _QWORD *v2174; // r9
  int v2175; // r10d
  const char *v2176; // rax
  __int64 v2177; // r14
  __int64 v2178; // r8
  unsigned int v2179; // r11d
  __int64 v2180; // rax
  __int64 v2181; // r8
  unsigned __int128 v2182; // rax
  unsigned int v2183; // edx
  unsigned __int64 v2184; // rax
  __int64 v2185; // rax
  unsigned int v2186; // r9d
  int v2187; // r13d
  int v2188; // eax
  __int64 v2189; // r8
  unsigned int v2190; // eax
  __int64 v2191; // r14
  int v2192; // ecx
  unsigned int v2193; // eax
  __int64 v2194; // r8
  int v2195; // ecx
  unsigned __int64 v2196; // rdx
  int v2197; // ebx
  __int64 v2198; // rbx
  __int64 v2199; // rbx
  _QWORD *v2200; // rax
  int v2201; // ecx
  __int64 v2202; // rdx
  _QWORD *v2203; // r9
  const char *v2204; // rax
  int v2205; // r10d
  __int64 v2206; // rsi
  unsigned __int64 v2207; // rcx
  unsigned __int64 v2208; // r8
  unsigned int v2209; // r11d
  __int64 v2210; // rax
  __int64 v2211; // r8
  unsigned __int128 v2212; // rax
  unsigned __int64 i48; // rax
  __int64 v2214; // rcx
  __int64 v2215; // rbx
  __int64 v2216; // rbx
  int v2217; // ecx
  __int64 v2218; // rcx
  __int64 v2219; // rbx
  int v2220; // r8d
  unsigned __int64 v2221; // rcx
  unsigned __int128 v2222; // rax
  char *v2223; // rdx
  _QWORD *v2224; // rcx
  int v2225; // r8d
  __int64 v2226; // r9
  char v2227; // al
  __int64 v2228; // rax
  int *v2229; // r14
  const char *v2230; // r11
  __int64 v2231; // r10
  __int64 v2232; // r8
  const char *v2233; // rax
  __int64 v2234; // r9
  __int64 i49; // r12
  unsigned __int64 v2236; // rbx
  unsigned int v2237; // r15d
  __int64 i50; // rdx
  __int64 v2239; // rax
  __int64 v2240; // rbx
  unsigned __int128 v2241; // rax
  char v2242; // r9
  unsigned int v2243; // r10d
  unsigned __int64 v2244; // rax
  __int64 v2245; // rax
  unsigned __int64 i51; // rax
  unsigned int v2247; // ebx
  BOOL v2248; // r12d
  __int64 v2249; // rcx
  unsigned __int8 v2250; // al
  unsigned __int64 v2251; // r15
  unsigned __int64 v2252; // r13
  int v2253; // eax
  __int64 v2254; // rcx
  unsigned __int64 v2255; // rcx
  unsigned __int64 i52; // rax
  unsigned __int64 v2257; // rcx
  unsigned __int128 v2258; // rax
  _QWORD *v2259; // r12
  unsigned __int64 v2260; // rcx
  __int64 v2261; // rax
  int v2262; // ebx
  unsigned __int64 v2263; // rcx
  unsigned __int128 v2264; // rax
  unsigned __int64 v2265; // r15
  __int64 v2266; // rax
  __int64 v2267; // r11
  int v2268; // r9d
  _QWORD *v2269; // r8
  unsigned __int64 v2270; // r10
  unsigned __int64 v2271; // rcx
  unsigned __int128 v2272; // rax
  unsigned __int64 v2273; // rcx
  unsigned __int128 v2274; // rax
  unsigned __int64 v2275; // rdx
  unsigned int v2276; // ebx
  unsigned __int64 v2277; // r9
  _QWORD *v2278; // r8
  unsigned __int64 v2279; // r10
  unsigned __int64 v2280; // rcx
  unsigned __int128 v2281; // rax
  unsigned __int64 v2282; // rcx
  unsigned __int64 v2283; // rcx
  unsigned __int64 v2284; // rdx
  int v2285; // r8d
  __int64 v2286; // r14
  char *v2287; // rcx
  _QWORD *v2288; // rdx
  char v2289; // al
  int v2290; // eax
  unsigned int v2291; // eax
  unsigned __int64 v2292; // rcx
  unsigned __int128 v2293; // rax
  signed __int64 v2294; // rbx
  _QWORD *v2295; // r12
  _BYTE *v2296; // rdx
  int v2297; // r8d
  char *v2298; // rcx
  __int64 v2299; // r10
  ULONG_PTR v2300; // r14
  char v2301; // al
  int v2302; // ecx
  _QWORD *v2303; // rax
  __int64 v2304; // rdx
  __int64 v2305; // r11
  _QWORD *v2306; // r10
  const char *v2307; // rax
  int v2308; // r15d
  __int64 v2309; // r8
  unsigned int v2310; // r13d
  __int64 v2311; // rdi
  __int64 v2312; // rax
  __int64 v2313; // r8
  unsigned __int128 v2314; // rax
  unsigned int v2315; // r11d
  unsigned __int64 v2316; // rax
  __int64 v2317; // rax
  char *v2318; // rcx
  int v2319; // edx
  __int64 v2320; // r10
  char v2321; // al
  _QWORD *v2322; // rax
  unsigned int i53; // ecx
  _QWORD *v2324; // rax
  int v2325; // ecx
  unsigned __int64 v2326; // rcx
  unsigned __int128 v2327; // rax
  __int64 v2328; // r12
  __int16 v2329; // r15
  ULONG_PTR v2330; // rdi
  unsigned int v2331; // r11d
  unsigned __int64 v2332; // r13
  ULONG_PTR *v2333; // rbx
  unsigned __int64 v2334; // r10
  ULONG_PTR v2335; // rdx
  ULONG_PTR v2336; // rdx
  __int64 v2337; // r10
  _QWORD *v2338; // r15
  __int64 v2339; // r10
  _QWORD *v2340; // r9
  const char *v2341; // rax
  int v2342; // r11d
  __int64 v2343; // r12
  unsigned __int64 v2344; // r8
  unsigned int v2345; // ebx
  __int64 v2346; // rax
  __int64 v2347; // r8
  unsigned __int128 v2348; // rax
  unsigned int v2349; // r10d
  unsigned __int64 v2350; // rax
  __int64 v2351; // rax
  unsigned __int64 i54; // rax
  int v2353; // r13d
  __int64 v2354; // rax
  ULONG_PTR v2355; // rax
  unsigned int v2356; // r12d
  unsigned int v2357; // r12d
  char *v2358; // rcx
  unsigned __int64 v2359; // rcx
  unsigned __int128 v2360; // rax
  signed __int64 v2361; // r11
  _QWORD *v2362; // r14
  _BYTE *v2363; // rdx
  int v2364; // r8d
  char *v2365; // rcx
  __int64 v2366; // r9
  char v2367; // al
  int v2368; // ecx
  _QWORD *v2369; // rax
  __int64 v2370; // rdx
  __int64 v2371; // r10
  _QWORD *v2372; // r9
  const char *v2373; // rax
  int v2374; // ebx
  __int64 v2375; // r13
  __int64 v2376; // r8
  unsigned int i56; // r15d
  __int64 v2378; // rax
  __int64 v2379; // r8
  unsigned __int128 v2380; // rax
  unsigned int v2381; // r10d
  unsigned __int64 v2382; // rax
  __int64 v2383; // rax
  char *v2384; // rcx
  __int64 v2385; // rdx
  int v2386; // r9d
  char v2387; // al
  _QWORD *v2388; // rcx
  unsigned int i57; // eax
  unsigned int v2390; // r8d
  _QWORD *v2391; // rdx
  unsigned int v2392; // r15d
  unsigned __int64 v2393; // rcx
  unsigned __int128 v2394; // rax
  __int64 v2395; // r14
  unsigned __int64 v2396; // rdi
  unsigned int v2397; // ebx
  ULONG_PTR v2398; // r9
  unsigned int v2399; // r10d
  ULONG_PTR *v2400; // r11
  unsigned __int64 v2401; // r13
  ULONG_PTR v2402; // rdx
  ULONG_PTR v2403; // rdx
  unsigned int v2404; // eax
  _QWORD *v2405; // rbx
  int v2406; // r13d
  _BYTE *v2407; // rdx
  __int64 v2408; // r9
  int v2409; // r8d
  char *v2410; // rcx
  char *i58; // r12
  char v2412; // al
  int v2413; // ecx
  _QWORD *v2414; // rax
  __int64 v2415; // rdx
  __int64 v2416; // r10
  _QWORD *v2417; // r9
  const char *v2418; // rax
  int v2419; // r11d
  __int64 v2420; // r15
  __int64 v2421; // r8
  unsigned int v2422; // r14d
  __int64 v2423; // rax
  __int64 v2424; // r8
  unsigned __int128 v2425; // rax
  unsigned int v2426; // r10d
  unsigned __int64 v2427; // rax
  __int64 v2428; // rax
  char *v2429; // rcx
  __int64 v2430; // rdx
  int v2431; // r10d
  char v2432; // al
  ULONG_PTR v2433; // rax
  unsigned int v2434; // r12d
  unsigned int v2435; // r12d
  unsigned __int64 v2436; // rcx
  unsigned __int128 v2437; // rax
  signed __int64 v2438; // r11
  _QWORD *v2439; // r14
  _BYTE *v2440; // rdx
  int v2441; // r8d
  char *v2442; // rcx
  __int64 v2443; // r9
  char v2444; // al
  int v2445; // ecx
  _QWORD *v2446; // rax
  __int64 v2447; // rdx
  __int64 v2448; // r10
  _QWORD *v2449; // r9
  const char *v2450; // rax
  int v2451; // ebx
  __int64 v2452; // r8
  unsigned int v2453; // r15d
  __int64 v2454; // rdi
  __int64 v2455; // rax
  __int64 v2456; // r8
  unsigned __int128 v2457; // rax
  unsigned int v2458; // r10d
  unsigned __int64 v2459; // rax
  __int64 v2460; // rax
  char *v2461; // rcx
  __int64 v2462; // rdx
  int v2463; // r9d
  char v2464; // al
  _QWORD *v2465; // rcx
  unsigned int i55; // eax
  unsigned int v2467; // r8d
  _QWORD *v2468; // rdx
  unsigned __int64 v2469; // rcx
  unsigned __int128 v2470; // rax
  __int64 v2471; // r14
  unsigned __int64 v2472; // rdi
  unsigned int v2473; // ebx
  ULONG_PTR v2474; // r9
  unsigned int v2475; // r10d
  ULONG_PTR *v2476; // r11
  unsigned __int64 v2477; // r15
  ULONG_PTR v2478; // rcx
  ULONG_PTR v2479; // rax
  unsigned int v2480; // eax
  unsigned __int64 v2481; // rcx
  unsigned __int64 v2482; // rcx
  unsigned __int128 v2483; // kr10_16
  __int64 v2484; // r15
  int v2485; // r14d
  __int64 v2486; // r12
  __int64 v2487; // r13
  _QWORD *v2488; // r10
  ULONG_PTR v2489; // r9
  unsigned int v2490; // ebx
  __int64 v2491; // r11
  ULONG_PTR v2492; // rcx
  ULONG_PTR v2493; // rax
  __int64 v2494; // rdx
  __int64 v2495; // r11
  _DWORD *v2496; // r14
  unsigned __int64 v2497; // rcx
  unsigned __int128 v2498; // rax
  int v2499; // r8d
  char *v2500; // rbx
  char *v2501; // rcx
  int *v2502; // rdx
  __int64 v2503; // r9
  ULONG_PTR v2504; // r13
  char v2505; // al
  int v2506; // eax
  int v2507; // r10d
  unsigned __int64 v2508; // rcx
  unsigned __int64 v2509; // rcx
  int v2510; // r9d
  unsigned __int64 v2511; // rcx
  unsigned __int64 v2512; // rcx
  int v2513; // edx
  __int64 v2514; // r8
  unsigned __int64 v2515; // rsi
  __int64 v2516; // r12
  __int64 v2517; // rax
  __int64 v2518; // r9
  ULONG_PTR v2519; // rcx
  int v2520; // r10d
  char v2521; // dl
  _QWORD *v2522; // rax
  __int64 v2523; // r8
  int v2524; // r10d
  __int64 v2525; // rcx
  __int64 v2526; // r8
  _QWORD *v2527; // rax
  __int64 v2528; // rdx
  unsigned __int64 v2529; // rdx
  _QWORD *v2530; // r10
  unsigned __int64 v2531; // r9
  __int64 v2532; // r8
  unsigned __int64 v2533; // rcx
  unsigned __int64 v2534; // rcx
  __int64 v2535; // rdx
  _QWORD *v2536; // rax
  __int64 v2537; // rdx
  __int64 v2538; // rdx
  unsigned __int64 v2539; // rcx
  char v2540; // r10
  unsigned __int64 v2541; // r11
  char v2542; // r10
  unsigned __int64 *v2543; // r8
  int v2544; // ecx
  int v2545; // ecx
  int v2546; // ecx
  int v2547; // ecx
  __int64 v2548; // r8
  unsigned __int64 v2549; // rax
  unsigned __int128 v2550; // rax
  __int64 v2551; // r8
  __int64 v2552; // rcx
  __int64 v2553; // rax
  __int64 v2554; // rdi
  int *v2555; // rcx
  int v2556; // edx
  char v2557; // al
  __int64 v2558; // rdi
  __int64 v2559; // rcx
  int v2560; // edx
  int *v2561; // rcx
  __int64 v2562; // r11
  char v2563; // al
  unsigned __int64 v2564; // rax
  unsigned __int128 v2565; // rax
  unsigned __int64 v2566; // rdi
  unsigned __int128 v2567; // rax
  int v2568; // r8d
  __int64 v2569; // r12
  int v2570; // r13d
  int v2571; // ebx
  int v2572; // edi
  struct _KPRCB *v2573; // rdx
  unsigned int v2574; // r10d
  char *v2575; // rsi
  __int64 v2576; // r14
  __int64 v2577; // rax
  unsigned __int64 v2578; // r15
  unsigned __int64 v2579; // rdx
  unsigned __int64 v2580; // r9
  _QWORD *v2581; // r8
  unsigned __int64 v2582; // rcx
  unsigned __int64 v2583; // rax
  __int64 v2584; // rdi
  _QWORD *v2585; // rcx
  char *v2586; // r10
  int v2587; // r11d
  unsigned __int64 v2588; // rbx
  signed __int64 v2589; // r10
  __int64 v2590; // rax
  int v2592; // ecx
  int v2593; // ecx
  int v2594; // ecx
  int v2595; // ecx
  int v2596; // ecx
  volatile signed __int32 *v2597; // rax
  signed __int32 v2598[8]; // [rsp+0h] [rbp-100h] BYREF
  __int64 v2599; // [rsp+28h] [rbp-D8h]
  int *v2600; // [rsp+50h] [rbp-B0h]
  __int64 v2601; // [rsp+58h] [rbp-A8h]
  __int64 v2602; // [rsp+60h] [rbp-A0h]
  __int64 v2603; // [rsp+68h] [rbp-98h]
  unsigned int v2604; // [rsp+70h] [rbp-90h]
  __int64 v2605; // [rsp+78h] [rbp-88h]
  ULONG_PTR v2606; // [rsp+80h] [rbp-80h]
  __int64 v2607; // [rsp+88h] [rbp-78h]
  unsigned int v2608; // [rsp+90h] [rbp-70h]
  __int64 v2609; // [rsp+98h] [rbp-68h]
  unsigned int v2610; // [rsp+A0h] [rbp-60h]
  int v2611; // [rsp+A4h] [rbp-5Ch]
  ULONG_PTR v2612; // [rsp+A8h] [rbp-58h]
  ULONG_PTR v2613; // [rsp+B0h] [rbp-50h]
  int *v2614; // [rsp+B8h] [rbp-48h]
  __int64 v2615; // [rsp+C0h] [rbp-40h]
  _QWORD *v2616; // [rsp+C8h] [rbp-38h]
  unsigned __int8 v2617; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int8 v2618; // [rsp+D1h] [rbp-2Fh] BYREF
  unsigned __int8 v2619; // [rsp+D2h] [rbp-2Eh]
  unsigned int *v2620; // [rsp+D8h] [rbp-28h]
  unsigned int v2621; // [rsp+E0h] [rbp-20h] BYREF
  int v2622; // [rsp+E4h] [rbp-1Ch]
  unsigned int v2623; // [rsp+E8h] [rbp-18h] BYREF
  _DWORD *v2624; // [rsp+F0h] [rbp-10h]
  char *v2625; // [rsp+F8h] [rbp-8h]
  _DWORD *v2626; // [rsp+100h] [rbp+0h]
  int v2627; // [rsp+108h] [rbp+8h]
  __int64 v2628; // [rsp+110h] [rbp+10h] BYREF
  _BYTE *v2629; // [rsp+118h] [rbp+18h] BYREF
  unsigned int v2630; // [rsp+120h] [rbp+20h]
  unsigned int v2631; // [rsp+124h] [rbp+24h]
  _BYTE *v2632; // [rsp+128h] [rbp+28h] BYREF
  _BYTE *v2633; // [rsp+130h] [rbp+30h] BYREF
  _DWORD *v2634; // [rsp+138h] [rbp+38h]
  _BYTE *v2635; // [rsp+140h] [rbp+40h] BYREF
  __int64 v2636; // [rsp+148h] [rbp+48h]
  __int64 v2637; // [rsp+150h] [rbp+50h] BYREF
  unsigned int v2638; // [rsp+158h] [rbp+58h] BYREF
  int v2639; // [rsp+15Ch] [rbp+5Ch] BYREF
  unsigned int v2640; // [rsp+160h] [rbp+60h] BYREF
  ULONG_PTR v2641; // [rsp+168h] [rbp+68h]
  unsigned __int64 v2642; // [rsp+170h] [rbp+70h] BYREF
  __int64 v2643; // [rsp+178h] [rbp+78h] BYREF
  __int64 v2644; // [rsp+180h] [rbp+80h]
  unsigned int v2645; // [rsp+188h] [rbp+88h] BYREF
  unsigned int v2646; // [rsp+190h] [rbp+90h] BYREF
  __int64 v2647; // [rsp+198h] [rbp+98h]
  int v2648; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v2649; // [rsp+1A8h] [rbp+A8h]
  int v2650; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v2651; // [rsp+1B8h] [rbp+B8h]
  int v2652; // [rsp+1C0h] [rbp+C0h] BYREF
  unsigned __int64 v2653; // [rsp+1C8h] [rbp+C8h] BYREF
  __int64 v2654; // [rsp+1D0h] [rbp+D0h] BYREF
  _DWORD *v2655; // [rsp+1D8h] [rbp+D8h]
  unsigned __int64 v2656; // [rsp+1E0h] [rbp+E0h] BYREF
  int v2657; // [rsp+1E8h] [rbp+E8h]
  int v2658; // [rsp+1ECh] [rbp+ECh]
  int v2659; // [rsp+1F0h] [rbp+F0h]
  int v2660; // [rsp+1F4h] [rbp+F4h]
  int v2661; // [rsp+1F8h] [rbp+F8h]
  int v2662; // [rsp+1FCh] [rbp+FCh]
  _DWORD v2663[8]; // [rsp+200h] [rbp+100h] BYREF
  signed __int64 v2664; // [rsp+220h] [rbp+120h] BYREF
  int v2665; // [rsp+228h] [rbp+128h]
  __int64 v2666; // [rsp+230h] [rbp+130h]
  __int64 v2667; // [rsp+238h] [rbp+138h] BYREF
  signed __int64 v2668; // [rsp+240h] [rbp+140h] BYREF
  int v2669; // [rsp+248h] [rbp+148h]
  int v2670; // [rsp+24Ch] [rbp+14Ch]
  int v2671; // [rsp+250h] [rbp+150h]
  int v2672; // [rsp+254h] [rbp+154h]
  int v2673; // [rsp+258h] [rbp+158h]
  int v2674; // [rsp+25Ch] [rbp+15Ch] BYREF
  _DWORD v2675[6]; // [rsp+260h] [rbp+160h] BYREF
  _DWORD v2676[6]; // [rsp+278h] [rbp+178h] BYREF
  __int16 v2677; // [rsp+290h] [rbp+190h] BYREF
  _QWORD *v2678; // [rsp+292h] [rbp+192h]
  __int64 v2679; // [rsp+2A0h] [rbp+1A0h] BYREF
  char v2680; // [rsp+2A8h] [rbp+1A8h] BYREF
  __int64 v2681; // [rsp+2B0h] [rbp+1B0h] BYREF
  __int64 v2682; // [rsp+2B8h] [rbp+1B8h] BYREF
  __int64 v2683; // [rsp+2C0h] [rbp+1C0h] BYREF
  __int64 v2684; // [rsp+2C8h] [rbp+1C8h] BYREF
  __int64 v2685; // [rsp+2D0h] [rbp+1D0h] BYREF
  __int64 v2686; // [rsp+2D8h] [rbp+1D8h]
  __int64 v2687; // [rsp+2E0h] [rbp+1E0h] BYREF
  signed __int64 v2688; // [rsp+2E8h] [rbp+1E8h] BYREF
  __int128 v2689; // [rsp+2F0h] [rbp+1F0h]
  __int128 v2690; // [rsp+300h] [rbp+200h]
  __int16 v2691; // [rsp+310h] [rbp+210h] BYREF
  __int64 v2692; // [rsp+312h] [rbp+212h]
  __int16 v2693; // [rsp+320h] [rbp+220h] BYREF
  __int64 v2694; // [rsp+322h] [rbp+222h]
  __int16 v2695; // [rsp+330h] [rbp+230h] BYREF
  __int64 v2696; // [rsp+332h] [rbp+232h]
  __int16 v2697; // [rsp+340h] [rbp+240h] BYREF
  __int64 v2698; // [rsp+342h] [rbp+242h]
  __int16 v2699; // [rsp+350h] [rbp+250h] BYREF
  struct _KPRCB *v2700; // [rsp+352h] [rbp+252h]
  unsigned int v2701; // [rsp+360h] [rbp+260h]
  int v2702; // [rsp+368h] [rbp+268h] BYREF
  _DWORD *v2703; // [rsp+370h] [rbp+270h]
  _WORD v2704[4]; // [rsp+380h] [rbp+280h] BYREF
  _BYTE *v2705; // [rsp+388h] [rbp+288h]
  ULONG_PTR v2706; // [rsp+390h] [rbp+290h]
  __int64 v2707; // [rsp+398h] [rbp+298h] BYREF
  char v2708[8]; // [rsp+3A0h] [rbp+2A0h] BYREF
  char v2709[8]; // [rsp+3A8h] [rbp+2A8h] BYREF
  _WORD v2710[4]; // [rsp+3B0h] [rbp+2B0h] BYREF
  _BYTE *v2711; // [rsp+3B8h] [rbp+2B8h]
  __int64 v2712; // [rsp+3C0h] [rbp+2C0h] BYREF
  __int64 v2713; // [rsp+3C8h] [rbp+2C8h] BYREF
  _DWORD v2714[4]; // [rsp+3D0h] [rbp+2D0h] BYREF
  _QWORD v2715[3]; // [rsp+3E0h] [rbp+2E0h] BYREF
  __int64 v2716; // [rsp+3F8h] [rbp+2F8h]
  __int64 v2717; // [rsp+400h] [rbp+300h]
  __int64 v2718; // [rsp+408h] [rbp+308h]
  _QWORD v2719[3]; // [rsp+410h] [rbp+310h] BYREF
  __int64 v2720; // [rsp+428h] [rbp+328h]
  __int64 v2721; // [rsp+430h] [rbp+330h]
  __int64 v2722; // [rsp+438h] [rbp+338h]
  _BYTE v2723[16]; // [rsp+440h] [rbp+340h] BYREF
  _BYTE v2724[16]; // [rsp+450h] [rbp+350h] BYREF
  _BYTE v2725[16]; // [rsp+460h] [rbp+360h] BYREF
  _BYTE v2726[16]; // [rsp+470h] [rbp+370h] BYREF
  int v2727; // [rsp+480h] [rbp+380h] BYREF
  ULONG_PTR v2728; // [rsp+488h] [rbp+388h]
  char *v2729; // [rsp+490h] [rbp+390h]
  __int64 v2730; // [rsp+498h] [rbp+398h]
  __int64 v2731; // [rsp+4A0h] [rbp+3A0h]
  __int64 v2732; // [rsp+4A8h] [rbp+3A8h] BYREF
  __int16 v2733; // [rsp+4B0h] [rbp+3B0h]
  __int16 v2734; // [rsp+4B2h] [rbp+3B2h]
  unsigned __int64 v2735; // [rsp+4C8h] [rbp+3C8h]
  int v2736; // [rsp+4D0h] [rbp+3D0h]
  unsigned int v2737; // [rsp+4D4h] [rbp+3D4h]
  unsigned __int64 v2738; // [rsp+4D8h] [rbp+3D8h]
  _BYTE v2739[16]; // [rsp+4E0h] [rbp+3E0h] BYREF
  _BYTE v2740[48]; // [rsp+4F0h] [rbp+3F0h] BYREF
  __int64 v2741; // [rsp+520h] [rbp+420h]
  char v2742[8]; // [rsp+528h] [rbp+428h] BYREF
  char v2743[8]; // [rsp+530h] [rbp+430h] BYREF
  __int64 v2744; // [rsp+538h] [rbp+438h]
  __int64 v2745; // [rsp+540h] [rbp+440h]
  __int64 v2746; // [rsp+548h] [rbp+448h]
  unsigned int *v2747; // [rsp+550h] [rbp+450h]
  __int64 v2748; // [rsp+558h] [rbp+458h]
  __int64 v2749; // [rsp+560h] [rbp+460h]
  __int64 v2750; // [rsp+568h] [rbp+468h]
  char v2751[8]; // [rsp+570h] [rbp+470h] BYREF
  char v2752[8]; // [rsp+578h] [rbp+478h] BYREF
  char v2753[8]; // [rsp+580h] [rbp+480h] BYREF
  __int64 v2754; // [rsp+588h] [rbp+488h]
  __int64 v2755; // [rsp+590h] [rbp+490h]
  char v2756[8]; // [rsp+598h] [rbp+498h] BYREF
  __int64 v2757; // [rsp+5A0h] [rbp+4A0h]
  __int64 v2758; // [rsp+5A8h] [rbp+4A8h]
  __int64 v2759; // [rsp+5B0h] [rbp+4B0h]
  __int64 v2760; // [rsp+5B8h] [rbp+4B8h]
  __int64 v2761; // [rsp+5C0h] [rbp+4C0h]
  ULONG_PTR v2762; // [rsp+5C8h] [rbp+4C8h]
  ULONG_PTR v2763; // [rsp+5D0h] [rbp+4D0h]
  __int64 v2764; // [rsp+5D8h] [rbp+4D8h]
  __int64 v2765; // [rsp+5E0h] [rbp+4E0h]
  __int64 v2766; // [rsp+5E8h] [rbp+4E8h]
  __int64 v2767; // [rsp+5F0h] [rbp+4F0h]
  __int64 v2768; // [rsp+5F8h] [rbp+4F8h]
  __int64 v2769; // [rsp+600h] [rbp+500h]
  __int64 v2770; // [rsp+610h] [rbp+510h]
  __int64 v2771; // [rsp+618h] [rbp+518h]
  __int64 v2772; // [rsp+620h] [rbp+520h]
  ULONG_PTR v2773; // [rsp+628h] [rbp+528h]
  __int64 v2774; // [rsp+630h] [rbp+530h]
  __int64 v2775; // [rsp+638h] [rbp+538h]
  __int64 v2776; // [rsp+640h] [rbp+540h]
  __int64 v2777; // [rsp+648h] [rbp+548h]
  __int64 v2778; // [rsp+650h] [rbp+550h]
  __int64 v2779; // [rsp+658h] [rbp+558h]
  __int64 v2780; // [rsp+660h] [rbp+560h]
  __int64 v2781; // [rsp+668h] [rbp+568h]
  __int64 v2782; // [rsp+670h] [rbp+570h]
  __int64 v2783; // [rsp+678h] [rbp+578h]
  __int64 v2784; // [rsp+690h] [rbp+590h]
  __int64 v2785; // [rsp+698h] [rbp+598h]
  __int64 v2786; // [rsp+6A0h] [rbp+5A0h]
  __int64 v2787; // [rsp+6B8h] [rbp+5B8h]
  __int64 v2788; // [rsp+6C0h] [rbp+5C0h]
  __int64 v2789; // [rsp+6C8h] [rbp+5C8h]
  __int64 v2790; // [rsp+6D0h] [rbp+5D0h]
  __int64 v2791; // [rsp+6D8h] [rbp+5D8h]
  __int64 v2792; // [rsp+6E0h] [rbp+5E0h]
  __int64 v2793; // [rsp+6E8h] [rbp+5E8h]
  __int64 v2794; // [rsp+6F0h] [rbp+5F0h]
  __int64 v2795; // [rsp+6F8h] [rbp+5F8h]
  __int64 v2796; // [rsp+700h] [rbp+600h]
  __int64 v2797; // [rsp+708h] [rbp+608h]
  __int64 v2798; // [rsp+710h] [rbp+610h]
  __int64 v2799; // [rsp+718h] [rbp+618h]
  __int64 v2800; // [rsp+720h] [rbp+620h]
  __int64 v2801; // [rsp+728h] [rbp+628h]
  __int64 v2802; // [rsp+730h] [rbp+630h]
  __int64 v2803; // [rsp+738h] [rbp+638h]
  __int64 v2804; // [rsp+740h] [rbp+640h]
  __int64 v2805; // [rsp+748h] [rbp+648h]
  __int64 v2806; // [rsp+750h] [rbp+650h]
  __int64 v2807; // [rsp+758h] [rbp+658h]
  __int64 v2808; // [rsp+760h] [rbp+660h]
  __int64 v2809; // [rsp+768h] [rbp+668h]
  __int64 v2810; // [rsp+770h] [rbp+670h]
  __int64 v2811; // [rsp+778h] [rbp+678h]
  __int64 v2812; // [rsp+780h] [rbp+680h]
  __int64 v2813; // [rsp+788h] [rbp+688h]
  __int64 v2814; // [rsp+790h] [rbp+690h]
  __int64 v2815; // [rsp+798h] [rbp+698h]
  __int64 v2816; // [rsp+7A0h] [rbp+6A0h]
  __int64 v2817; // [rsp+7A8h] [rbp+6A8h]
  __int64 v2818; // [rsp+7B0h] [rbp+6B0h]
  __int64 v2819; // [rsp+7B8h] [rbp+6B8h]
  __int64 v2820; // [rsp+7C0h] [rbp+6C0h]
  __int64 v2821; // [rsp+7C8h] [rbp+6C8h]
  __int64 v2822; // [rsp+7D0h] [rbp+6D0h]
  __int64 v2823; // [rsp+7D8h] [rbp+6D8h]
  __int64 v2824; // [rsp+7E0h] [rbp+6E0h]
  __int64 v2825; // [rsp+7E8h] [rbp+6E8h]
  __int64 v2826; // [rsp+7F0h] [rbp+6F0h]
  __int64 v2827; // [rsp+7F8h] [rbp+6F8h]
  __int64 v2828; // [rsp+800h] [rbp+700h]
  __int64 v2829; // [rsp+808h] [rbp+708h]
  _DWORD *v2830; // [rsp+810h] [rbp+710h]
  ULONG_PTR v2831; // [rsp+818h] [rbp+718h]
  __int64 v2832; // [rsp+820h] [rbp+720h]
  __int64 v2833; // [rsp+828h] [rbp+728h]
  __int64 v2834; // [rsp+830h] [rbp+730h]
  __int64 v2835; // [rsp+838h] [rbp+738h]
  __int64 v2836; // [rsp+840h] [rbp+740h]
  __int64 v2837; // [rsp+848h] [rbp+748h]
  __int64 v2838; // [rsp+850h] [rbp+750h]
  __int64 v2839; // [rsp+858h] [rbp+758h]
  _BYTE v2840[16]; // [rsp+860h] [rbp+760h] BYREF
  _BYTE v2841[16]; // [rsp+870h] [rbp+770h] BYREF
  _BYTE v2842[16]; // [rsp+880h] [rbp+780h] BYREF
  __int64 v2843; // [rsp+890h] [rbp+790h]
  _BYTE v2844[16]; // [rsp+898h] [rbp+798h] BYREF
  _BYTE v2845[16]; // [rsp+8A8h] [rbp+7A8h] BYREF
  _BYTE v2846[16]; // [rsp+8B8h] [rbp+7B8h] BYREF
  _BYTE v2847[16]; // [rsp+8C8h] [rbp+7C8h] BYREF
  _BYTE v2848[16]; // [rsp+8D8h] [rbp+7D8h] BYREF
  _BYTE v2849[16]; // [rsp+8E8h] [rbp+7E8h] BYREF
  _BYTE v2850[16]; // [rsp+8F8h] [rbp+7F8h] BYREF
  _BYTE v2851[16]; // [rsp+908h] [rbp+808h] BYREF
  _BYTE v2852[16]; // [rsp+918h] [rbp+818h] BYREF
  _BYTE v2853[16]; // [rsp+928h] [rbp+828h] BYREF
  __int64 v2854; // [rsp+938h] [rbp+838h]
  __int64 v2855; // [rsp+940h] [rbp+840h]
  _BYTE v2856[24]; // [rsp+948h] [rbp+848h] BYREF
  char v2857[8]; // [rsp+960h] [rbp+860h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+968h] [rbp+868h]
  unsigned int v2859; // [rsp+974h] [rbp+874h]
  char v2860[8]; // [rsp+978h] [rbp+878h] BYREF
  unsigned int *v2861; // [rsp+980h] [rbp+880h]
  int v2862; // [rsp+98Ch] [rbp+88Ch]
  char v2863[8]; // [rsp+990h] [rbp+890h] BYREF
  ULONG_PTR v2864; // [rsp+998h] [rbp+898h]
  unsigned int v2865; // [rsp+9A4h] [rbp+8A4h]
  __int64 v2866; // [rsp+9A8h] [rbp+8A8h]
  __int64 v2867; // [rsp+9B0h] [rbp+8B0h]
  __int64 v2868; // [rsp+9B8h] [rbp+8B8h]
  __int64 v2869; // [rsp+9C0h] [rbp+8C0h]
  __int64 v2870; // [rsp+9C8h] [rbp+8C8h]
  _BYTE v2871[16]; // [rsp+9D0h] [rbp+8D0h] BYREF
  char v2872[16]; // [rsp+9E0h] [rbp+8E0h] BYREF
  char v2873[16]; // [rsp+9F0h] [rbp+8F0h] BYREF
  _BYTE v2874[24]; // [rsp+A00h] [rbp+900h] BYREF
  char v2875[8]; // [rsp+A18h] [rbp+918h] BYREF
  _DWORD *v2876; // [rsp+A20h] [rbp+920h]
  char v2877[8]; // [rsp+A30h] [rbp+930h] BYREF
  ULONG_PTR v2878; // [rsp+A38h] [rbp+938h]
  char v2879[8]; // [rsp+A48h] [rbp+948h] BYREF
  __int64 v2880; // [rsp+A50h] [rbp+950h]
  _BYTE v2881[32]; // [rsp+A60h] [rbp+960h] BYREF
  _BYTE v2882[32]; // [rsp+A80h] [rbp+980h] BYREF
  _BYTE v2883[32]; // [rsp+AA0h] [rbp+9A0h] BYREF
  _BYTE v2884[32]; // [rsp+AC0h] [rbp+9C0h] BYREF
  _BYTE v2885[32]; // [rsp+AE0h] [rbp+9E0h] BYREF
  _BYTE v2886[112]; // [rsp+B00h] [rbp+A00h] BYREF
  char *retaddr; // [rsp+B78h] [rbp+A78h]
  __int64 v2889; // [rsp+B88h] [rbp+A88h]
  int v2890; // [rsp+B88h] [rbp+A88h]
  __int64 v2891; // [rsp+B88h] [rbp+A88h]
  __int64 v2892; // [rsp+B88h] [rbp+A88h]
  unsigned __int64 v2893; // [rsp+B88h] [rbp+A88h]
  BOOL v2894; // [rsp+B88h] [rbp+A88h]
  unsigned __int64 v2895; // [rsp+B88h] [rbp+A88h]
  __int64 v2896; // [rsp+B88h] [rbp+A88h]
  unsigned __int64 v2897; // [rsp+B88h] [rbp+A88h]
  int v2898; // [rsp+B88h] [rbp+A88h]
  int v2899; // [rsp+B88h] [rbp+A88h]
  unsigned int v2900; // [rsp+B88h] [rbp+A88h]
  int v2901; // [rsp+B88h] [rbp+A88h]
  unsigned __int16 v2902; // [rsp+B88h] [rbp+A88h]
  unsigned int v2903; // [rsp+B88h] [rbp+A88h]
  __int64 v2904; // [rsp+B88h] [rbp+A88h]
  unsigned __int64 v2905; // [rsp+B88h] [rbp+A88h]
  __int64 **v2906; // [rsp+B88h] [rbp+A88h]
  unsigned __int64 v2907; // [rsp+B88h] [rbp+A88h]
  __int64 v2908; // [rsp+B88h] [rbp+A88h]
  unsigned __int64 v2909; // [rsp+B88h] [rbp+A88h]
  char v2910; // [rsp+B88h] [rbp+A88h]
  unsigned __int64 *v2911; // [rsp+B88h] [rbp+A88h]
  char v2912; // [rsp+B88h] [rbp+A88h]
  unsigned __int8 v2913; // [rsp+B88h] [rbp+A88h]
  unsigned int v2914; // [rsp+B88h] [rbp+A88h]
  unsigned int *v2915; // [rsp+B88h] [rbp+A88h]
  unsigned __int16 v2916; // [rsp+B88h] [rbp+A88h]
  __int16 v2917; // [rsp+B88h] [rbp+A88h]
  unsigned __int64 v2918; // [rsp+B88h] [rbp+A88h]
  __int64 v2919; // [rsp+B88h] [rbp+A88h]
  __int64 v2920; // [rsp+B88h] [rbp+A88h]
  int v2921; // [rsp+B88h] [rbp+A88h]
  unsigned __int64 v2922; // [rsp+B88h] [rbp+A88h]
  int v2923; // [rsp+B88h] [rbp+A88h]
  __int64 v2924; // [rsp+B88h] [rbp+A88h]
  int v2925; // [rsp+B88h] [rbp+A88h]
  __int64 v2926; // [rsp+B88h] [rbp+A88h]
  __int64 v2927; // [rsp+B88h] [rbp+A88h]
  int v2928; // [rsp+B88h] [rbp+A88h]
  int v2929; // [rsp+B88h] [rbp+A88h]
  unsigned int v2930; // [rsp+B88h] [rbp+A88h]
  unsigned int v2931; // [rsp+B88h] [rbp+A88h]
  unsigned __int16 v2932; // [rsp+B88h] [rbp+A88h]
  int v2933; // [rsp+B88h] [rbp+A88h]
  int v2934; // [rsp+B88h] [rbp+A88h]
  unsigned int v2935; // [rsp+B88h] [rbp+A88h]
  unsigned __int8 v2936; // [rsp+B88h] [rbp+A88h]
  int *v2937; // [rsp+B88h] [rbp+A88h]
  int v2938; // [rsp+B88h] [rbp+A88h]
  __int64 v2939; // [rsp+B88h] [rbp+A88h]
  __int64 v2940; // [rsp+B88h] [rbp+A88h]
  char v2941; // [rsp+B90h] [rbp+A90h] BYREF
  unsigned __int8 v2942; // [rsp+B98h] [rbp+A98h] BYREF

  v1 = a1;
  if ( (*(_DWORD *)(a1 + 2448) & 0x110000) != 0x110000 )
  {
    v2 = *(_QWORD *)(a1 + 2272);
    v3 = 304;
    v4 = *(_QWORD **)(v1 + 2272);
    v5 = 38LL;
    do
    {
      *v4 = 0LL;
      v3 -= 8;
      ++v4;
      --v5;
    }
    while ( v5 );
    for ( ; v3; --v3 )
    {
      *(_BYTE *)v4 = 0;
      v4 = (_QWORD *)((char *)v4 + 1);
    }
    *(_OWORD *)(v2 + 16) = *(_OWORD *)(v1 + 2120);
    *(_OWORD *)(v2 + 32) = *(_OWORD *)(v1 + 2136);
    *(_OWORD *)(v2 + 288) = *(_OWORD *)(v1 + 2152);
    v2692 = v2;
    v2691 = 303;
    *(_WORD *)(v2 + 16) = v1 + 2168;
    *(_WORD *)(v2 + 22) = (unsigned int)(v1 + 2168) >> 16;
    *(_DWORD *)(v2 + 24) = (unsigned __int64)(v1 + 2168) >> 32;
    _disable();
    if ( *(int *)(v1 + 2448) >= 0 )
    {
      __sidt(v2723);
      __lidt(&v2691);
      __writedr(7u, 0LL);
      __lidt(v2723);
    }
    else
    {
      __writedr(7u, 0LL);
    }
    _enable();
  }
  v128 = (*(_DWORD *)(v1 + 2452) & 0x100) == 0;
  v2625 = 0LL;
  if ( !v128 )
  {
    v2625 = retaddr;
    retaddr = 0LL;
  }
  *(_DWORD *)(v1 + 2088) = 0;
  if ( (*(_DWORD *)(v1 + 2448) & 0x40000000) == 0 || !*(_QWORD *)(v1 + 2680) )
  {
    v6 = *(_QWORD *)(v1 + 1976);
    v7 = (_QWORD *)(v1 + 1944);
    v8 = v2881;
    v9 = (char *)(v1 + 1944);
    v10 = 32;
    v11 = 4LL;
    do
    {
      v10 -= 8;
      *(_QWORD *)v8 = *(_QWORD *)v9;
      v9 += 8;
      v8 += 8;
      --v11;
    }
    while ( v11 );
    for ( ; v10; --v10 )
    {
      v12 = *v9++;
      *v8++ = v12;
    }
    *(_QWORD *)(v1 + 1976) = 0LL;
    v13 = 32;
    *(_DWORD *)(v1 + 2088) = 0;
    v14 = 4LL;
    v15 = (_QWORD *)(v1 + 1944);
    do
    {
      *v15 = 0LL;
      v13 -= 8;
      ++v15;
      --v14;
    }
    while ( v14 );
    for ( ; v13; --v13 )
    {
      *(_BYTE *)v15 = 0;
      v15 = (_QWORD *)((char *)v15 + 1);
    }
    v16 = *(unsigned int *)(v1 + 2020);
    v17 = (_QWORD *)v1;
    *(_DWORD *)(v1 + 2088) += v16;
    v18 = (const char *)v1;
    v19 = *(_DWORD *)(v1 + 2068);
    v20 = *(_QWORD *)(v1 + 2072);
    if ( v1 < (unsigned __int64)(v16 + v1) )
    {
      do
      {
        _mm_prefetch(v18, 0);
        v18 += 64;
      }
      while ( (unsigned __int64)v18 < v16 + v1 );
    }
    v21 = *(_QWORD *)(v1 + 2072);
    v22 = (unsigned int)v16 >> 7;
    if ( (unsigned int)v16 >> 7 )
    {
      do
      {
        v23 = 8LL;
        do
        {
          v24 = v17[1] ^ __ROL8__(*v17 ^ v21, v19);
          v17 += 2;
          v21 = __ROL8__(v24, v19);
          --v23;
        }
        while ( v23 );
        v25 = __ROL8__(v20 ^ ((unsigned __int64)v17 - v1), 17) ^ v20 ^ ((unsigned __int64)v17 - v1);
        v2813 = (v25 * (unsigned __int128)0x7010008004002001uLL) >> 64;
        v19 = ((unsigned __int8)(v2813 ^ v25) ^ (unsigned __int8)v19) & 0x3F;
        if ( !v19 )
          LOBYTE(v19) = 1;
        --v22;
      }
      while ( v22 );
      v7 = (_QWORD *)(v1 + 1944);
    }
    v26 = v16 & 0x7F;
    if ( v26 >= 8 )
    {
      v27 = (unsigned __int64)v26 >> 3;
      do
      {
        v21 = __ROL8__(*v17++ ^ v21, v19);
        v26 -= 8;
        --v27;
      }
      while ( v27 );
    }
    for ( ; v26; --v26 )
    {
      v28 = *(unsigned __int8 *)v17;
      v17 = (_QWORD *)((char *)v17 + 1);
      v21 = __ROL8__(v28 ^ v21, v19);
    }
    v29 = 32;
    *(_QWORD *)(v1 + 1976) = v6;
    v30 = v2881;
    v31 = 4LL;
    do
    {
      v29 -= 8;
      *v7 = *(_QWORD *)v30;
      v30 += 8;
      ++v7;
      --v31;
    }
    while ( v31 );
    for ( ; v29; --v29 )
    {
      v32 = *v30++;
      *(_BYTE *)v7 = v32;
      v7 = (_QWORD *)((char *)v7 + 1);
    }
    if ( *(_QWORD *)(v1 + 1976) != v21 )
    {
      v33 = *(_QWORD *)(v1 + 1416);
      v34 = *(_DWORD *)(v1 + 2020);
      *(_QWORD *)v33 = v1;
      *(_DWORD *)(v33 + 16) = v34;
      if ( !*(_DWORD *)(v1 + 2296) )
      {
        *(_QWORD *)(*(_QWORD *)(v1 + 1416) + 24LL) = v21 ^ *(_QWORD *)(v1 + 1976);
        if ( !*(_DWORD *)(v1 + 2296) )
        {
          *(_QWORD *)(v1 + 2304) = v1 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v1 + 2312) = 0LL;
          *(_QWORD *)(v1 + 2320) = 257LL;
          *(_QWORD *)(v1 + 2328) = v21;
          *(_DWORD *)(v1 + 2296) = 1;
          __ba(v1, 0LL);
        }
      }
    }
  }
  v35 = *(_DWORD *)(v1 + 2448) | 4;
  *(_DWORD *)(v1 + 2448) = v35;
  ++*(_DWORD *)(v1 + 2100);
  if ( (v35 & 8) != 0 && (v35 & 0x800000) == 0 )
  {
    v36 = *(_QWORD *)(v1 + 2672);
    v37 = *(_DWORD *)(v1 + 2020);
    v38 = *(_QWORD *)(v1 + 2552);
    v39 = *(unsigned int *)(v1 + 2056);
    v2889 = v36;
    if ( (*(_DWORD *)(v1 + 2452) & 1) != 0 )
      v38 = *(_QWORD *)(v1 + 1488);
    v40 = *(void (__fastcall **)(_QWORD, _QWORD, unsigned __int64 *))(v1 + 352);
    v2624 = *(_DWORD **)(v1 + 712);
    v2613 = *(_QWORD *)(v1 + 832);
    v2636 = (__int64)v40;
    v41 = __rdtsc();
    v42 = (__ROR8__(v41, 3) ^ v41) * (unsigned __int128)0x7010008004002001uLL;
    v2822 = *((_QWORD *)&v42 + 1);
    v43 = -1200000000LL - ((unsigned __int64)v42 ^ *((_QWORD *)&v42 + 1)) % 0x5F5E100;
    v2653 = v43;
    v44 = *(_DWORD *)(v1 + 2448);
    if ( (v44 & 0x4000000) != 0 )
    {
      v45 = __rdtsc();
      v46 = (__ROR8__(v45, 3) ^ v45) * (unsigned __int128)0x7010008004002001uLL;
      v2823 = *((_QWORD *)&v46 + 1);
      if ( ((unsigned __int64)v46 ^ *((_QWORD *)&v46 + 1)) % 0xA < 2 )
      {
        v47 = __rdtsc();
        v48 = (__ROR8__(v47, 3) ^ v47) * (unsigned __int128)0x7010008004002001uLL;
        v2824 = *((_QWORD *)&v48 + 1);
        v2653 = v43 * (((unsigned __int64)v48 ^ *((_QWORD *)&v48 + 1)) % 0xA + 1);
      }
    }
    v49 = 0LL;
    v50 = 0LL;
    if ( (v44 & 2) == 0 )
      v37 = v39;
    if ( (v44 & 0x80u) != 0 )
    {
      v51 = 1;
      v52 = __rdtsc();
      v53 = (__ROR8__(v52, 3) ^ v52) * (unsigned __int128)0x7010008004002001uLL;
      v54 = 340;
      v55 = *((_QWORD *)&v53 + 1);
      v2825 = *((_QWORD *)&v53 + 1);
      v56 = a1;
      v49 = v53 ^ v55;
      v57 = v49;
      v50 = a1 ^ v49;
      v58 = (_QWORD *)(a1 + 2712);
      do
      {
        *v58-- ^= v57;
        v57 = __ROR8__(v57, v54--);
      }
      while ( v54 );
      v59 = v39;
      v60 = (unsigned __int64)(v39 - 2720) >> 3;
      if ( (_DWORD)v60 )
      {
        v61 = (__int64 *)(a1 + 8 * ((int)v60 + 339LL));
        do
        {
          v62 = *v61--;
          v50 = (2 * v50) ^ __ROR8__(v62, v60);
          LODWORD(v60) = v60 - 1;
        }
        while ( (_DWORD)v60 );
        v36 = v2889;
        v59 = v39;
        v56 = a1;
      }
      v63 = v59 + v56;
      v64 = (v37 - (unsigned int)v39) >> 3;
      if ( (_DWORD)v64 )
      {
        v65 = (_QWORD *)(v63 + 8 * v64 - 8);
        do
        {
          *v65-- ^= v57;
          v57 = __ROR8__(v57, v64);
          LODWORD(v64) = v64 - 1;
        }
        while ( (_DWORD)v64 );
      }
      v40 = (void (__fastcall *)(_QWORD, _QWORD, unsigned __int64 *))v2636;
    }
    else
    {
      v51 = 0;
    }
    if ( v36 )
    {
      ((void __fastcall(__int64, _QWORD, unsigned __int64 *, void (__fastcall *)(_QWORD, _QWORD, unsigned __int64 *), __int64))v2613)(
        a1,
        v37,
        &v2653,
        v40,
        v36);
    }
    else if ( v38 )
    {
      ((void __fastcall(__int64, _QWORD, _QWORD, _QWORD, unsigned __int64 *))v2624)(v38, 0LL, 0LL, 0LL, &v2653);
    }
    else
    {
      v40(0LL, 0LL, &v2653);
    }
    v128 = v51 == 0;
    v1 = a1;
    if ( !v128 )
    {
      v66 = (_QWORD *)(a1 + 2712);
      v67 = a1 ^ v49;
      v68 = 340;
      do
      {
        *v66-- ^= v49;
        v49 = __ROR8__(v49, v68--);
      }
      while ( v68 );
      v69 = v39;
      v70 = (unsigned __int64)(v39 - 2720) >> 3;
      if ( (_DWORD)v70 )
      {
        v71 = (__int64 *)(a1 + 2712 + 8LL * (int)v70);
        do
        {
          v72 = *v71--;
          v67 = (2 * v67) ^ __ROR8__(v72, v70);
          LODWORD(v70) = v70 - 1;
        }
        while ( (_DWORD)v70 );
        v69 = v39;
      }
      v73 = (v37 - (unsigned int)v39) >> 3;
      if ( v73 )
      {
        v74 = (_QWORD *)(v69 + a1 + 8 * (v73 - 1LL));
        do
        {
          *v74 ^= v49;
          v49 = __ROR8__(v49, v73);
          --v74;
          --v73;
        }
        while ( v73 );
      }
      if ( v67 != v50 )
      {
        v75 = *(_QWORD *)(a1 + 1416);
        v76 = *(_DWORD *)(a1 + 2020);
        *(_QWORD *)v75 = a1;
        *(_DWORD *)(v75 + 16) = v76;
        if ( !*(_DWORD *)(a1 + 2296) )
        {
          *(_QWORD *)(*(_QWORD *)(a1 + 1416) + 24LL) = v50 ^ v67;
          if ( !*(_DWORD *)(a1 + 2296) )
          {
            *(_QWORD *)(a1 + 2304) = a1 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(a1 + 2312) = 0LL;
            *(_QWORD *)(a1 + 2320) = 270LL;
            *(_QWORD *)(a1 + 2328) = v67;
            *(_DWORD *)(a1 + 2296) = 1;
            __ba(a1, 0LL);
          }
        }
      }
    }
  }
  v77 = *(_DWORD *)(v1 + 196);
  *(_DWORD *)(v1 + 196) = 0;
  v78 = (_QWORD *)v1;
  *(_DWORD *)(v1 + 2088) += 1576;
  v79 = (const char *)v1;
  v80 = *(_DWORD *)(v1 + 2068);
  v81 = *(_QWORD *)(v1 + 2072);
  if ( v1 < (unsigned __int64)(v1 + 1576) )
  {
    do
    {
      _mm_prefetch(v79, 0);
      v79 += 64;
    }
    while ( (unsigned __int64)v79 < v1 + 1576 );
  }
  v82 = *(_QWORD *)(v1 + 2072);
  v83 = 12;
  do
  {
    v84 = 8LL;
    do
    {
      v85 = v78[1] ^ __ROL8__(*v78 ^ v82, v80);
      v78 += 2;
      v82 = __ROL8__(v85, v80);
      --v84;
    }
    while ( v84 );
    v86 = (__ROL8__(v81 ^ ((unsigned __int64)v78 - v1), 17) ^ v81 ^ ((unsigned __int64)v78 - v1))
        * (unsigned __int128)0x7010008004002001uLL;
    v2826 = *((_QWORD *)&v86 + 1);
    v80 = (BYTE8(v86) ^ (unsigned __int8)(v86 ^ v80)) & 0x3F;
    if ( !v80 )
      LOBYTE(v80) = 1;
    --v83;
  }
  while ( v83 );
  v87 = 5LL;
  v2636 = 5LL;
  v88 = 40;
  do
  {
    v82 = __ROL8__(*v78++ ^ v82, v80);
    v88 -= 8;
    --v87;
  }
  while ( v87 );
  for ( ; v88; --v88 )
  {
    v89 = *(unsigned __int8 *)v78;
    v78 = (_QWORD *)((char *)v78 + 1);
    v82 = __ROL8__(v89 ^ v82, v80);
  }
  *(_DWORD *)(v1 + 196) = v77;
  if ( *(_QWORD *)(v1 + 2592) != v82 )
  {
    v90 = *(_QWORD *)(v1 + 1416);
    v91 = *(_DWORD *)(v1 + 2020);
    *(_QWORD *)v90 = v1;
    *(_DWORD *)(v90 + 16) = v91;
    if ( !*(_DWORD *)(v1 + 2296) )
    {
      *(_QWORD *)(*(_QWORD *)(v1 + 1416) + 24LL) = *(_QWORD *)(v1 + 2592) ^ v82;
      if ( !*(_DWORD *)(v1 + 2296) )
      {
        *(_QWORD *)(v1 + 2304) = v1 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(v1 + 2312) = 0LL;
        *(_QWORD *)(v1 + 2320) = 265LL;
        *(_QWORD *)(v1 + 2328) = v82;
        *(_DWORD *)(v1 + 2296) = 1;
        __ba(v1, 0LL);
      }
    }
  }
  __ba(v1, 0LL);
  v92 = *(_DWORD *)(v1 + 2416);
  v2602 = v1;
  v93 = v1;
  v2627 = 0;
  v2608 = 0;
  if ( v92 != -1 )
  {
    v94 = (*(__int64 (**)(void))(v1 + 632))();
    if ( v94 || (v94 = (*(__int64 (__fastcall **)(_QWORD))(v1 + 640))(0LL)) != 0 )
    {
      if ( (*(int (__fastcall **)(__int64, _BYTE *))(v1 + 656))(v94, v2740) >= 0 )
      {
        *(_QWORD *)(v1 + 2432) = v94;
        v111 = (*(__int64 (**)(void))(v1 + 696))();
        v112 = (*(__int64 (__fastcall **)(__int64))(v1 + 728))(v111);
        if ( v112 )
        {
          (*(void (__fastcall **)(__int64, __int64))(v1 + 744))(v111, v112);
          v113 = 0;
        }
        else
        {
          v113 = 4;
        }
        v114 = *(_DWORD *)(v1 + 2452) & 0xFFFFFFFB;
        v2608 = 1;
        *(_DWORD *)(v1 + 2452) = v113 | v114;
        *(_DWORD *)(v1 + 2088) += 0x10000;
        goto LABEL_117;
      }
      (*(void (__fastcall **)(__int64))(v1 + 648))(v94);
    }
  }
  v95 = *(_DWORD *)(v1 + 2452);
  if ( (v95 & 8) == 0 )
    goto LABEL_116;
  if ( (v95 & 0x1000) != 0 )
    goto LABEL_116;
  v96 = __rdtsc();
  v97 = __ROR8__(v96, 3) ^ v96;
  v2827 = (v97 * (unsigned __int128)0x7010008004002001uLL) >> 64;
  if ( (((unsigned __int8)v97 ^ (unsigned __int8)v2827) & 3) != 0 )
    goto LABEL_116;
  v98 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(v1 + 240))(
          64LL,
          *(_QWORD *)(v1 + 1904),
          *(unsigned int *)(v1 + 2064));
  if ( !v98 )
    goto LABEL_116;
  (*(void (__fastcall **)(__int64, _QWORD))(v1 + 424))(v98, *(unsigned __int16 *)(v1 + 1912));
  v99 = *(unsigned int *)(*(_QWORD *)(v1 + 1776) + *(_QWORD *)(v1 + 1296));
  if ( (_DWORD)v99 )
  {
    v100 = __rdtsc();
    v101 = (__ROR8__(v100, 3) ^ v100) * (unsigned __int128)0x7010008004002001uLL;
    v2828 = *((_QWORD *)&v101 + 1);
    v99 = (*((_QWORD *)&v101 + 1) ^ (unsigned __int64)v101) % v99;
  }
  v102 = (*(__int64 (__fastcall **)(_QWORD))(v1 + 944))(0LL);
  if ( !v102 )
  {
LABEL_115:
    (*(void (__fastcall **)(__int64))(v1 + 248))(v98);
LABEL_116:
    v2627 = 0;
    goto LABEL_117;
  }
  while ( (_DWORD)v99 )
  {
    LODWORD(v99) = v99 - 1;
    v102 = (*(__int64 (__fastcall **)(__int64))(v1 + 944))(v102);
    if ( !v102 )
      goto LABEL_115;
  }
  if ( (*(int (__fastcall **)(__int64))(v1 + 928))(v102) < 0 )
  {
    (*(void (__fastcall **)(__int64))(v1 + 952))(v102);
    goto LABEL_115;
  }
  (*(void (__fastcall **)(__int64, _BYTE *))(v1 + 1080))(v102, v2740);
  (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD))(v1 + 456))(v102, v98, 0LL, 0LL, 0LL);
  v115 = __rdtsc();
  v116 = (__ROR8__(v115, 3) ^ v115) * (unsigned __int128)0x7010008004002001uLL;
  v2829 = *((_QWORD *)&v116 + 1);
  v117 = ((unsigned __int64)v116 ^ *((_QWORD *)&v116 + 1)) % (*(unsigned int (__fastcall **)(__int64))(v1 + 448))(v98);
  _disable();
  _enable();
  (*(void (__fastcall **)(_BYTE *, _QWORD))(v1 + 416))(v2739, 0LL);
  (*(void (__fastcall **)(_BYTE *, __int64))(v1 + 432))(v2856, v98);
  while ( (*(int (__fastcall **)(unsigned int *, _BYTE *))(v1 + 440))(&v2646, v2856) >= 0 )
  {
    if ( !(_DWORD)v117 )
    {
      (*(void (__fastcall **)(_BYTE *, _QWORD))(v1 + 416))(v2739, v2646);
      break;
    }
    LODWORD(v117) = v117 - 1;
  }
  (*(void (__fastcall **)(_BYTE *, _BYTE *))(v1 + 464))(v2739, v2853);
  (*(void (__fastcall **)(__int64))(v1 + 248))(v98);
  v2627 = 1;
LABEL_117:
  v2644 = 0LL;
  v103 = 4;
  v104 = &v2645;
  do
  {
    *(_BYTE *)v104 = 0;
    v104 = (unsigned int *)((char *)v104 + 1);
    --v103;
  }
  while ( v103 );
  v105 = *(_DWORD *)(v1 + 2080);
  v106 = (int *)(v1 + 2092);
  LODWORD(v107) = *(_DWORD *)(v1 + 2092);
  *((_QWORD *)&v107 + 1) = 6LL;
  v2631 = v105;
  v2614 = (int *)(v1 + 2092);
  if ( *(_DWORD *)(v1 + 2088) < (int)v107 )
  {
    v108 = v2830;
    v109 = v2831;
    v110 = v2701;
    v2624 = v2830;
    v2613 = v2831;
    v2610 = v2701;
    v2630 = v2714[3];
    while ( 1 )
    {
      if ( (*(_DWORD *)(v93 + 2448) & 0x110000) != 0x110000 )
        __writedr(7u, 0LL);
      if ( v105 == *(_DWORD *)(v93 + 2060) )
      {
        ++*(_DWORD *)(v93 + 2096);
        v105 = 0;
        v128 = *(_DWORD *)(v93 + 2392) == 11;
        v2631 = 0;
        if ( v128 )
        {
          v118 = *(_DWORD *)(v93 + 2448);
          if ( (v118 & 1) == 0 )
          {
            if ( *(_DWORD *)(v93 + 2416) == -1 )
              *(_DWORD *)(v93 + 2416) = 0;
            else
              *(_DWORD *)(v93 + 2448) = v118 | 1;
          }
        }
      }
      v119 = 0;
      v120 = v93;
      if ( *(_QWORD *)(v93 + 2680) )
        v120 = *(_QWORD *)(v93 + 2680);
      v121 = (int *)(v120 + *(unsigned int *)(v120 + 2056));
      v2600 = v121;
      if ( (_DWORD)v2644 && HIDWORD(v2644) <= v105 )
      {
        v119 = HIDWORD(v2644);
        v121 = (int *)(v120 + v2645);
        v2600 = v121;
      }
      if ( v119 != v105 )
        break;
LABEL_174:
      LODWORD(v2644) = 1;
      HIDWORD(v2644) = v119;
      v2645 = (_DWORD)v121 - v120;
      v134 = *v121;
      v2890 = *v121;
      if ( *v121 > 29 )
      {
        if ( v134 <= 40 )
        {
          if ( v134 == 40 )
            goto LABEL_1425;
          if ( v134 != 30 )
          {
            if ( v134 != 31 )
            {
              if ( v134 == 32 )
              {
                sub_1403EC430(v93, v121);
                goto LABEL_238;
              }
              if ( v134 == 33 )
              {
                sub_1403EB4FC(v93, v121);
                goto LABEL_238;
              }
              if ( v134 != 35 )
              {
                switch ( v134 )
                {
                  case '$':
                    v932 = (_QWORD *)*((_QWORD *)v121 + 1);
                    v933 = (unsigned int)v121[4];
                    v934 = v932;
                    *(_DWORD *)(v93 + 2088) += v933;
                    v935 = (const char *)v932;
                    v936 = *(_DWORD *)(v93 + 2068);
                    v937 = *(_QWORD *)(v93 + 2072);
                    if ( v932 < (_QWORD *)((char *)v932 + v933) )
                    {
                      do
                      {
                        _mm_prefetch(v935, 0);
                        v935 += 64;
                      }
                      while ( v935 < (const char *)v932 + v933 );
                    }
                    v938 = *(_QWORD *)(v93 + 2072);
                    v939 = (unsigned int)v933 >> 7;
                    v940 = 1LL;
                    if ( (unsigned int)v933 >> 7 )
                    {
                      do
                      {
                        v941 = 8LL;
                        do
                        {
                          v942 = v934[1] ^ __ROL8__(*v934 ^ v938, v936);
                          v934 += 2;
                          v938 = __ROL8__(v942, v936);
                          --v941;
                        }
                        while ( v941 );
                        v943 = (__ROL8__(v937 ^ ((char *)v934 - (char *)v932), 17) ^ v937 ^ (unsigned __int64)((char *)v934 - (char *)v932))
                             * (unsigned __int128)0x7010008004002001uLL;
                        v2757 = *((_QWORD *)&v943 + 1);
                        v944 = v943 ^ BYTE8(v943) ^ v936;
                        v940 = 1LL;
                        v936 = v944 & 0x3F;
                        if ( !v936 )
                          LOBYTE(v936) = 1;
                        --v939;
                      }
                      while ( v939 );
                      v93 = v2602;
                    }
                    v945 = v933 & 0x7F;
                    if ( (unsigned int)v945 >= 8 )
                    {
                      v946 = (unsigned __int64)(unsigned int)v945 >> 3;
                      do
                      {
                        v938 = __ROL8__(*v934++ ^ v938, v936);
                        v945 = (unsigned int)(v945 - 8);
                        --v946;
                      }
                      while ( v946 );
                    }
                    for ( ; (_DWORD)v945; v945 = (unsigned int)(v945 - 1) )
                    {
                      v947 = *(unsigned __int8 *)v934;
                      v934 = (_QWORD *)((char *)v934 + 1);
                      v938 = __ROL8__(v947 ^ v938, v936);
                    }
                    for ( i = v938; ; LODWORD(v938) = i ^ v938 )
                    {
                      i >>= 31;
                      if ( !i )
                        break;
                    }
                    v949 = v938 & 0x7FFFFFFF;
                    v950 = 0;
                    if ( v949 == v121[5] )
                      goto LABEL_1485;
                    if ( !*v121 )
                      v950 = v121[6] != 0;
                    v951 = (unsigned int)v121[4];
                    v940 = *((_QWORD *)v121 + 1);
                    if ( v121[4] )
                    {
                      v945 = 64LL;
                      if ( (*(_DWORD *)(v93 + 2452) & 0x40) != 0 )
                      {
                        CurrentIrql = KeGetCurrentIrql();
                        __writecr8(2uLL);
                        v953 = v940 & 0xFFFFFFFFFFFFF000uLL;
                        v2605 = (v940 + v951 - 1) | 0xFFF;
                        v2907 = (v940 & 0xFFFFFFFFFFFFF000uLL) - 1;
                        while ( 1 )
                        {
                          v954 = CurrentIrql;
                          while ( 1 )
                          {
                            v955 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v93 + 1128))(
                                     v953,
                                     0LL,
                                     v945,
                                     v934);
                            if ( v955 != -1073741267 )
                              break;
                            if ( v950 )
                              goto LABEL_1481;
                            if ( CurrentIrql > 1u )
                              goto LABEL_1479;
                            v954 = CurrentIrql;
                            __writecr8(CurrentIrql);
                            KeGetCurrentIrql();
                            __writecr8(2uLL);
                          }
                          if ( v955 < 0 )
                            break;
LABEL_1479:
                          v953 += 4096LL;
                          v2907 += 4096LL;
                          if ( v2907 == v2605 )
                          {
                            __writecr8(v954);
LABEL_1485:
                            v957 = *(_QWORD *)(v93 + 1336);
                            v958 = KeGetCurrentIrql();
                            __writecr8(0xFuLL);
                            (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD *))(v93 + 336))(
                              v957,
                              v940,
                              v945,
                              v934);
                            v960 = v2600;
                            v961 = **(unsigned int ***)(v93 + 1560);
                            v962 = v961 + 4;
                            v963 = *((_BYTE *)v961 + 12);
                            v964 = (unsigned __int64)&v961[6 * *v961 + 4];
                            while ( 1 )
                            {
                              v965 = 24LL;
                              v966 = (__int64 *)(v2600 + 6);
                              v967 = v962;
                              do
                              {
                                v968 = *(_QWORD *)v967;
                                v967 += 2;
                                v969 = *v966++;
                                if ( v968 != v969 )
                                  goto LABEL_1493;
                                v965 = (unsigned int)(v965 - 8);
                              }
                              while ( (unsigned int)v965 >= 8 );
                              if ( (_DWORD)v965 )
                              {
                                while ( 1 )
                                {
                                  v959 = *(unsigned __int8 *)v967;
                                  v967 = (unsigned int *)((char *)v967 + 1);
                                  v970 = *(unsigned __int8 *)v966;
                                  v966 = (__int64 *)((char *)v966 + 1);
                                  if ( v959 != v970 )
                                    break;
                                  v128 = (_DWORD)v965 == 1;
                                  v965 = (unsigned int)(v965 - 1);
                                  if ( v128 )
                                    goto LABEL_1494;
                                }
LABEL_1493:
                                v962 += 6;
                                if ( (unsigned __int64)v962 < v964 )
                                  continue;
                              }
LABEL_1494:
                              v93 = v2602;
                              (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(v2602 + 400))(
                                *(_QWORD *)(v2602 + 1336),
                                v959,
                                v965,
                                v966);
                              __writecr8(v958);
                              if ( v963 )
                              {
                                if ( (*(_DWORD *)(v93 + 2452) & 0x10) != 0 && !*(_DWORD *)(v93 + 2296) )
                                {
                                  v971 = v2600;
                                  *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                                  *(_QWORD *)(v93 + 2312) = (char *)v971 - 0x4C48B4211BBACBEBLL;
                                  *(_QWORD *)(v93 + 2320) = *v971;
                                  *(_QWORD *)(v93 + 2328) = 1LL;
                                  *(_DWORD *)(v93 + 2296) = 1;
                                  __ba(v93, 0LL);
                                }
                                if ( *((_QWORD *)v960 + 3) == 1LL )
                                  goto LABEL_1499;
                              }
                              if ( v962 != (unsigned int *)v964 )
                              {
LABEL_1499:
                                v972 = v2600;
                              }
                              else
                              {
                                v972 = v2600;
                                if ( !*(_DWORD *)(v93 + 2296) )
                                {
                                  *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                                  *(_QWORD *)(v93 + 2312) = (char *)v972 - 0x4C48B4211BBACBEBLL;
                                  *(_QWORD *)(v93 + 2320) = *v972;
                                  *(_QWORD *)(v93 + 2328) = v962;
                                  *(_DWORD *)(v93 + 2296) = 1;
                                  __ba(v93, 0LL);
                                }
                              }
                              v973 = *(_QWORD *)(v93 + 1336);
                              v974 = KeGetCurrentIrql();
                              __writecr8(0xFuLL);
                              (*(void (__fastcall **)(__int64))(v93 + 336))(v973);
                              v975 = 0LL;
                              v976 = **(unsigned int ***)(v93 + 1560);
                              v977 = v976 + 4;
                              v978 = (unsigned __int64)&v976[6 * *v976 + 4];
                              while ( 1 )
                              {
                                v977 += 6;
                                if ( (unsigned __int64)v977 >= v978 )
                                  break;
                                v979 = *((_QWORD *)v977 + 1);
                                if ( v979 < v975 )
                                  break;
                                if ( (v979 & 0xFFFFFFFFFFFFF000uLL) != v979 )
                                  break;
                                v980 = v979 + v977[4];
                                if ( v980 <= v979 || v980 == v975 )
                                  break;
                                v975 = v979 + v977[4];
                              }
                              (*(void (__fastcall **)(_QWORD))(v93 + 400))(*(_QWORD *)(v93 + 1336));
                              __writecr8(v974);
                              if ( v977 != (unsigned int *)v978 && !*(_DWORD *)(v93 + 2296) )
                              {
                                *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                                *(_QWORD *)(v93 + 2312) = (char *)v972 - 0x4C48B4211BBACBEBLL;
                                *(_QWORD *)(v93 + 2320) = *v972;
                                *(_QWORD *)(v93 + 2328) = v977;
                                goto LABEL_247;
                              }
                              goto LABEL_238;
                            }
                          }
                        }
LABEL_1481:
                        __writecr8(v954);
                        v121 = v2600;
                      }
                    }
                    if ( !*(_DWORD *)(v93 + 2296) )
                    {
                      *(_QWORD *)(*(_QWORD *)(v93 + 1416) + 24LL) = v949 ^ (unsigned __int64)(unsigned int)v121[5];
                      v956 = *((_QWORD *)v121 + 1);
                      if ( !*(_DWORD *)(v93 + 2296) )
                      {
                        *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(v93 + 2312) = (char *)v121 - 0x4C48B4211BBACBEBLL;
                        *(_QWORD *)(v93 + 2320) = *v121;
                        *(_QWORD *)(v93 + 2328) = v956;
                        *(_DWORD *)(v93 + 2296) = 1;
                        __ba(v93, 0LL);
                      }
                    }
                    goto LABEL_1485;
                  case '%':
                    if ( (*(_DWORD *)(v93 + 2452) & 2) == 0
                      && (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(v93 + 1064))(
                           (unsigned int)(v134 - 37),
                           6LL) )
                    {
                      LODWORD(v107) = 0;
                      if ( !*(_DWORD *)(v93 + 2296) )
                      {
                        *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(v93 + 2312) = (char *)v121 - 0x4C48B4211BBACBEBLL;
                        *(_QWORD *)(v93 + 2320) = *v121;
                        *(_QWORD *)(v93 + 2328) = 0LL;
                        goto LABEL_247;
                      }
                      goto LABEL_203;
                    }
                    goto LABEL_238;
                  case '&':
                    (*(void (__fastcall **)(_BYTE *, _QWORD))(v93 + 416))(v2845, (unsigned int)v121[11]);
                    v930 = (*(__int64 (__fastcall **)(_BYTE *, _BYTE *))(v93 + 464))(v2845, v2846);
                    __asm { xgetbv }
                    v834 = v2846;
                    v833 = v930 | (v931 << 32);
                    goto LABEL_1279;
                }
                if ( v134 != 39 )
                  goto LABEL_1852;
LABEL_1425:
                *(_DWORD *)(v93 + 2088) += v121[9];
                v914 = (unsigned int)v121[9];
                v915 = (_QWORD *)(v93 + (unsigned int)v121[8]);
                v916 = *(_DWORD *)(v93 + 2068);
                v917 = v915;
                v918 = *(_QWORD *)(v93 + 2072);
                v919 = (const char *)v915;
                if ( v915 < (_QWORD *)((char *)v915 + v914) )
                {
                  *((_QWORD *)&v107 + 1) = 64LL;
                  do
                  {
                    _mm_prefetch(v919, 0);
                    v919 += 64;
                  }
                  while ( v919 < (const char *)v915 + v914 );
                }
                v920 = *(_QWORD *)(v93 + 2072);
                v921 = (unsigned int)v914 >> 7;
                if ( (unsigned int)v914 >> 7 )
                {
                  do
                  {
                    v922 = 8LL;
                    do
                    {
                      v923 = v917[1] ^ __ROL8__(*v917 ^ v920, v916);
                      v917 += 2;
                      v920 = __ROL8__(v923, v916);
                      --v922;
                    }
                    while ( v922 );
                    v107 = (__ROL8__(v918 ^ ((char *)v917 - (char *)v915), 17) ^ v918 ^ (unsigned __int64)((char *)v917 - (char *)v915))
                         * (unsigned __int128)0x7010008004002001uLL;
                    v2774 = *((_QWORD *)&v107 + 1);
                    v916 = ((unsigned __int8)v107 ^ (unsigned __int8)(BYTE8(v107) ^ v916)) & 0x3F;
                    if ( !v916 )
                      LOBYTE(v916) = 1;
                    --v921;
                  }
                  while ( v921 );
                  v93 = v2602;
                  v121 = v2600;
                }
                v924 = v914 & 0x7F;
                if ( v924 >= 8 )
                {
                  v925 = (unsigned __int64)v924 >> 3;
                  do
                  {
                    v920 = __ROL8__(*v917++ ^ v920, v916);
                    v924 -= 8;
                    --v925;
                  }
                  while ( v925 );
                }
                if ( v924 )
                {
                  do
                  {
                    v926 = *(unsigned __int8 *)v917;
                    v917 = (_QWORD *)((char *)v917 + 1);
                    v920 = __ROL8__(v926 ^ v920, v916);
                    --v924;
                  }
                  while ( v924 );
                  v93 = v2602;
                }
                v927 = *((_QWORD *)v121 + 3);
                if ( v920 == v927 )
                  goto LABEL_202;
                v928 = *(_DWORD *)(v93 + 2296);
                if ( !v928 )
                {
                  *(_QWORD *)(*(_QWORD *)(v93 + 1416) + 24LL) = v920 ^ v927;
                  v928 = *(_DWORD *)(v93 + 2296);
                }
                v166 = v93 + (unsigned int)v121[8];
                v929 = v928 == 0;
LABEL_2128:
                if ( !v929 )
                  goto LABEL_202;
                goto LABEL_244;
              }
              if ( (v121[10] & 1) != 0 )
              {
                v981 = 0;
                if ( !*(_QWORD *)(v93 + 2432) )
                  goto LABEL_1523;
                v982 = *(_DWORD *)(v93 + 2452);
                if ( (v982 & 4) != 0 )
                  goto LABEL_1523;
                if ( (v121[10] & 1) != 0 )
                {
                  v983 = *(_DWORD *)(v93 + 2084);
                  *((_QWORD *)&v107 + 1) = v982;
                  if ( !v983 )
                  {
                    v984 = v982 ^ ((unsigned __int8)v982 ^ (unsigned __int8)(8 * v982)) & 0x20;
                    *(_DWORD *)(v93 + 2452) = v984;
                    goto LABEL_1519;
                  }
                  v984 = *(_DWORD *)(v93 + 2452);
                  if ( (((unsigned __int8)v982 ^ (unsigned __int8)(v982 >> 3)) & 4) != 0 )
                  {
LABEL_1523:
                    *(_DWORD *)(v93 + 2084) = 0;
                    goto LABEL_238;
                  }
LABEL_1519:
                  if ( !*(_QWORD *)(v93 + 2432) )
                    goto LABEL_1567;
                  if ( !v983 )
                  {
                    *((_QWORD *)&v107 + 1) = v984 ^ ((unsigned __int8)v984 ^ (unsigned __int8)(8 * v984)) & 0x20;
                    *(_DWORD *)(v93 + 2452) = DWORD2(v107);
                    goto LABEL_1525;
                  }
                  *((_QWORD *)&v107 + 1) = v984;
                  if ( (((unsigned __int8)v984 ^ (unsigned __int8)(v984 >> 3)) & 4) != 0 )
                  {
LABEL_1567:
                    *(_DWORD *)(v93 + 2084) = 0;
LABEL_1604:
                    v1030 = v2600;
                    v1031 = v2600[10];
                    if ( (v1031 & 2) == 0 )
                      goto LABEL_238;
                    v1032 = *((_QWORD *)v2600 + 1);
                    if ( (v1031 & 4) != 0 )
                    {
                      *((_QWORD *)&v107 + 1) = *((_QWORD *)v2600 + 3);
                      v1033 = **(_QWORD **)(v1032 + 112);
                      if ( v1033 != *((_QWORD *)&v107 + 1) )
                      {
                        v1034 = *(_QWORD *)(v93 + 1416);
                        *(_QWORD *)v1034 = v1033;
                        *(_DWORD *)(v1034 + 16) = 256;
                        if ( !*(_DWORD *)(v93 + 2296) )
                        {
                          *(_QWORD *)(*(_QWORD *)(v93 + 1416) + 24LL) = *((_QWORD *)&v107 + 1) ^ v1033;
                          v1035 = *(_QWORD *)(v1032 + 112);
                          if ( !*(_DWORD *)(v93 + 2296) )
                          {
                            *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                            *(_QWORD *)(v93 + 2312) = (char *)v1030 - 0x4C48B4211BBACBEBLL;
                            *(_QWORD *)(v93 + 2320) = *v1030;
                            *(_QWORD *)(v93 + 2328) = v1035;
                            *(_DWORD *)(v93 + 2296) = 1;
                            __ba(v93, 0LL);
                          }
                        }
                      }
                    }
                    if ( (v1030[10] & 8) == 0 )
                      goto LABEL_238;
                    *((_QWORD *)&v107 + 1) = *((_QWORD *)v1030 + 4);
                    v1036 = **(_QWORD **)(v1032 + 120);
                    if ( v1036 == *((_QWORD *)&v107 + 1) )
                      goto LABEL_238;
                    v1037 = *(_QWORD *)(v93 + 1416);
                    *(_QWORD *)v1037 = v1036;
                    *(_DWORD *)(v1037 + 16) = 256;
                    if ( *(_DWORD *)(v93 + 2296) )
                      goto LABEL_238;
                    *(_QWORD *)(*(_QWORD *)(v93 + 1416) + 24LL) = *((_QWORD *)&v107 + 1) ^ v1036;
                    v166 = *(_QWORD *)(v1032 + 120);
                    if ( *(_DWORD *)(v93 + 2296) )
                      goto LABEL_202;
                    *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v93 + 2312) = (char *)v1030 - 0x4C48B4211BBACBEBLL;
                    v167 = *v1030;
                    goto LABEL_245;
                  }
LABEL_1525:
                  if ( (BYTE8(v107) & 4) != 0 )
                  {
                    v985 = *((_QWORD *)v121 + 1) & 0xFFFFFFFFFFFFF000uLL;
                    for ( j = ((v121[2] & 0xFFF) + (unsigned __int64)(unsigned int)v121[4] + 4095) >> 12; j; v985 += 4096LL )
                    {
                      --j;
                      if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))(v93 + 688))(v985)
                        && !*(_DWORD *)(v93 + 2296) )
                      {
                        *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(v93 + 2312) = (char *)v121 - 0x4C48B4211BBACBEBLL;
                        *(_QWORD *)(v93 + 2320) = *v121;
                        *(_QWORD *)(v93 + 2328) = v985;
                        *(_DWORD *)(v93 + 2296) = 1;
                        __ba(v93, 0LL);
                      }
                      *(_DWORD *)(v93 + 2088) += 256;
                    }
                    goto LABEL_1604;
                  }
                  v987 = (_QWORD *)*((_QWORD *)v121 + 1);
                  v988 = (unsigned int)v121[4];
                  v989 = v987;
                  *(_DWORD *)(v93 + 2088) += v988;
                  v990 = (const char *)v987;
                  v991 = *(_DWORD *)(v93 + 2068);
                  v992 = *(_QWORD *)(v93 + 2072);
                  if ( v987 < (_QWORD *)((char *)v987 + v988) )
                  {
                    do
                    {
                      _mm_prefetch(v990, 0);
                      v990 += 64;
                    }
                    while ( v990 < (const char *)v987 + v988 );
                  }
                  v993 = *(_QWORD *)(v93 + 2072);
                  v994 = (unsigned int)v988 >> 7;
                  if ( (unsigned int)v988 >> 7 )
                  {
                    do
                    {
                      v995 = 8LL;
                      do
                      {
                        v996 = v989[1] ^ __ROL8__(*v989 ^ v993, v991);
                        v989 += 2;
                        v993 = __ROL8__(v996, v991);
                        --v995;
                      }
                      while ( v995 );
                      v997 = (__ROL8__(v992 ^ ((char *)v989 - (char *)v987), 17) ^ v992 ^ (unsigned __int64)((char *)v989 - (char *)v987))
                           * (unsigned __int128)0x7010008004002001uLL;
                      v2758 = *((_QWORD *)&v997 + 1);
                      v991 = ((unsigned __int8)v997 ^ (unsigned __int8)(BYTE8(v997) ^ v991)) & 0x3F;
                      if ( !v991 )
                        LOBYTE(v991) = 1;
                      --v994;
                    }
                    while ( v994 );
                    v93 = v2602;
                  }
                  v998 = v988 & 0x7F;
                  if ( v998 >= 8 )
                  {
                    v999 = (unsigned __int64)v998 >> 3;
                    do
                    {
                      v993 = __ROL8__(*v989++ ^ v993, v991);
                      v998 -= 8;
                      --v999;
                    }
                    while ( v999 );
                  }
                  for ( ; v998; --v998 )
                  {
                    v1000 = *(unsigned __int8 *)v989;
                    v989 = (_QWORD *)((char *)v989 + 1);
                    v993 = __ROL8__(v1000 ^ v993, v991);
                  }
                  for ( k = v993; ; LODWORD(v993) = k ^ v993 )
                  {
                    k >>= 31;
                    if ( !k )
                      break;
                  }
                  *((_QWORD *)&v107 + 1) = (unsigned int)v121[5];
                  v1002 = v993 & 0x7FFFFFFF;
                  if ( v1002 == DWORD2(v107) )
                    goto LABEL_1604;
                  v1003 = (unsigned int)v121[4];
                  v1004 = *((_QWORD *)v121 + 1);
                  if ( v121[4] && (*(_DWORD *)(v93 + 2452) & 0x40) != 0 )
                  {
                    v1005 = KeGetCurrentIrql();
                    __writecr8(2uLL);
                    v1006 = v1004 & 0xFFFFFFFFFFFFF000uLL;
                    v2908 = (v1004 + v1003 - 1) | 0xFFF;
                    v1007 = (v1004 & 0xFFFFFFFFFFFFF000uLL) - 1;
                    while ( 1 )
                    {
                      v1008 = v1005;
                      while ( 1 )
                      {
                        LODWORD(v107) = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v93 + 1128))(v1006, 0LL);
                        if ( (_DWORD)v107 != -1073741267 )
                          break;
                        if ( v1005 > 1u )
                          goto LABEL_1558;
                        v1008 = v1005;
                        __writecr8(v1005);
                        KeGetCurrentIrql();
                        __writecr8(2uLL);
                      }
                      if ( (v107 & 0x80000000) != 0LL )
                        break;
LABEL_1558:
                      v1006 += 4096LL;
                      v1007 += 4096LL;
                      if ( v1007 == v2908 )
                        goto LABEL_1559;
                    }
                    __writecr8(v1008);
                    v121 = v2600;
                    *((_QWORD *)&v107 + 1) = (unsigned int)v2600[5];
                  }
                  if ( *(_DWORD *)(v93 + 2296) )
                    goto LABEL_1604;
                  v1009 = DWORD2(v107);
LABEL_1564:
                  *(_QWORD *)(*(_QWORD *)(v93 + 1416) + 24LL) = v1009 ^ v1002;
                  v1010 = *((_QWORD *)v121 + 1);
                  if ( !*(_DWORD *)(v93 + 2296) )
                  {
                    *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v93 + 2312) = (char *)v121 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v93 + 2320) = *v121;
                    *(_QWORD *)(v93 + 2328) = v1010;
                    *(_DWORD *)(v93 + 2296) = 1;
                    __ba(v93, 0LL);
                  }
                  goto LABEL_1604;
                }
              }
              else
              {
                v981 = 0;
              }
              v1011 = (_QWORD *)*((_QWORD *)v121 + 1);
              v1012 = (unsigned int)v121[4];
              v1013 = v1011;
              *(_DWORD *)(v93 + 2088) += v1012;
              v1014 = (const char *)v1011;
              v1015 = *(_DWORD *)(v93 + 2068);
              v1016 = *(_QWORD *)(v93 + 2072);
              if ( v1011 < (_QWORD *)((char *)v1011 + v1012) )
              {
                do
                {
                  _mm_prefetch(v1014, 0);
                  v1014 += 64;
                }
                while ( v1014 < (const char *)v1011 + v1012 );
              }
              v1017 = *(_QWORD *)(v93 + 2072);
              v1018 = (unsigned int)v1012 >> 7;
              if ( (unsigned int)v1012 >> 7 )
              {
                do
                {
                  v1019 = 8LL;
                  do
                  {
                    v1020 = v1013[1] ^ __ROL8__(*v1013 ^ v1017, v1015);
                    v1013 += 2;
                    v1017 = __ROL8__(v1020, v1015);
                    --v1019;
                  }
                  while ( v1019 );
                  v107 = (__ROL8__(v1016 ^ ((char *)v1013 - (char *)v1011), 17) ^ v1016 ^ (unsigned __int64)((char *)v1013 - (char *)v1011))
                       * (unsigned __int128)0x7010008004002001uLL;
                  v2759 = *((_QWORD *)&v107 + 1);
                  v1021 = v107 ^ BYTE8(v107) ^ v1015;
                  *((_QWORD *)&v107 + 1) = 0xFFFFFFFFLL;
                  v1015 = v1021 & 0x3F;
                  if ( !v1015 )
                    LOBYTE(v1015) = 1;
                  --v1018;
                }
                while ( v1018 );
                v93 = v2602;
              }
              else
              {
                *((_QWORD *)&v107 + 1) = 0xFFFFFFFFLL;
              }
              v1022 = v1012 & 0x7F;
              if ( v1022 >= 8 )
              {
                v1023 = (unsigned __int64)v1022 >> 3;
                do
                {
                  v1017 = __ROL8__(*v1013++ ^ v1017, v1015);
                  v1022 -= 8;
                  --v1023;
                }
                while ( v1023 );
              }
              for ( ; v1022; --v1022 )
              {
                v1024 = *(unsigned __int8 *)v1013;
                v1013 = (_QWORD *)((char *)v1013 + 1);
                v1017 = __ROL8__(v1024 ^ v1017, v1015);
              }
              for ( m = v1017; ; LODWORD(v1017) = m ^ v1017 )
              {
                m >>= 31;
                if ( !m )
                  break;
              }
              v1002 = v1017 & 0x7FFFFFFF;
              if ( v1002 == v121[5] )
                goto LABEL_1604;
              if ( !*v121 && v121[6] )
                v981 = 1;
              v1026 = (unsigned int)v121[4];
              *((_QWORD *)&v107 + 1) = *((_QWORD *)v121 + 1);
              if ( v121[4] )
              {
                v1027 = 64LL;
                if ( (*(_DWORD *)(v93 + 2452) & 0x40) != 0 )
                {
                  v1028 = KeGetCurrentIrql();
                  __writecr8(2uLL);
                  v1029 = *((_QWORD *)&v107 + 1) & 0xFFFFFFFFFFFFF000uLL;
                  v2605 = (*((_QWORD *)&v107 + 1) + v1026 - 1) | 0xFFF;
                  v2909 = (*((_QWORD *)&v107 + 1) & 0xFFFFFFFFFFFFF000uLL) - 1;
                  while ( 1 )
                  {
                    v1008 = v1028;
                    while ( 1 )
                    {
                      LODWORD(v107) = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v93 + 1128))(
                                        v1029,
                                        0LL,
                                        v1027,
                                        v1013);
                      if ( (_DWORD)v107 != -1073741267 )
                        break;
                      if ( v981 )
                        goto LABEL_1602;
                      if ( v1028 > 1u )
                        goto LABEL_1600;
                      v1008 = v1028;
                      __writecr8(v1028);
                      KeGetCurrentIrql();
                      __writecr8(2uLL);
                    }
                    if ( (v107 & 0x80000000) != 0LL )
                      break;
LABEL_1600:
                    v1027 = 4096LL;
                    v1029 += 4096LL;
                    v2909 += 4096LL;
                    if ( v2909 == v2605 )
                    {
LABEL_1559:
                      __writecr8(v1008);
                      goto LABEL_1604;
                    }
                  }
LABEL_1602:
                  __writecr8(v1008);
                  v121 = v2600;
                }
              }
              v1009 = (unsigned int)v121[5];
              if ( *(_DWORD *)(v93 + 2296) )
                goto LABEL_1604;
              goto LABEL_1564;
            }
            if ( (*(_DWORD *)(v93 + 2096) & 1) == 0 )
              goto LABEL_202;
            v1038 = 0;
            if ( !*(_QWORD *)(v93 + 2432) || (*(_DWORD *)(v93 + 2452) & 4) != 0 )
            {
              v1040 = 0LL;
            }
            else
            {
              v1039 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(v93 + 976))(
                        26LL,
                        &v2707,
                        0LL,
                        0LL);
              v1040 = v2707;
              if ( v1039 < 0 )
                v1040 = 0LL;
            }
            v1041 = *(__int64 (__fastcall **)(_QWORD))(v93 + 944);
            v2601 = v1040;
            v1042 = 0;
            v2604 = 0;
            v1043 = v1041(0LL);
            if ( !v1043 )
            {
LABEL_1703:
              v1082 = *(_QWORD *)(v93 + 1240);
              if ( (*(int (__fastcall **)(__int64))(v93 + 928))(v1082) >= 0 )
              {
                v1083 = (*(unsigned __int8 (__fastcall **)(__int64))(v93 + 992))(v1082);
                v2913 = (*(__int64 (__fastcall **)(__int64, unsigned __int8 *))(v93 + 1000))(v1082, &v2618);
                v2605 = (*(__int64 (__fastcall **)(__int64))(v93 + 1008))(v1082);
                if ( (_BYTE)v1083 == 114 || *(_DWORD *)(v93 + 2296) )
                {
                  v1084 = v2600;
                }
                else
                {
                  v1084 = v2600;
                  *(_QWORD *)(*(_QWORD *)(v93 + 1416) + 24LL) = (unsigned int)v1083 ^ 0x72LL;
                  if ( !*(_DWORD *)(v93 + 2296) )
                  {
                    *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v93 + 2312) = (char *)v1084 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v93 + 2320) = *v1084;
                    *(_QWORD *)(v93 + 2328) = v1082;
                    *(_DWORD *)(v93 + 2296) = 1;
                    __ba(v93, 0LL);
                  }
                }
                v1085 = 0;
                if ( (v1083 & 7) == 1 )
                {
                  v1038 = 48;
                }
                else if ( (v1083 & 7) == 2 )
                {
                  v1038 = 16;
                  v1085 = 16;
                }
                else if ( (v1083 & 7) != 0 && !*(_DWORD *)(v93 + 2296) )
                {
                  *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v93 + 2312) = (char *)v1084 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v93 + 2320) = *v1084;
                  *(_QWORD *)(v93 + 2328) = v1082;
                  *(_DWORD *)(v93 + 2296) = 1;
                  __ba(v93, 0LL);
                }
                v1086 = *(_QWORD *)(v93 + 1472);
                v1087 = v1083 >> 4;
                v128 = (*(_BYTE *)(v1086 + 2 * v1087) | (unsigned __int8)v1038) == v2913;
                v1088 = v2600;
                if ( !v128 && !*(_DWORD *)(v93 + 2296) )
                {
                  *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v93 + 2312) = (char *)v1088 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v93 + 2320) = *v1088;
                  *(_QWORD *)(v93 + 2328) = v1082;
                  *(_DWORD *)(v93 + 2296) = 1;
                  __ba(v93, 0LL);
                }
                if ( (*(_BYTE *)(v1086 + 2 * v1087 + 1) | (unsigned __int8)v1085) != v2618 && !*(_DWORD *)(v93 + 2296) )
                {
                  *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v93 + 2312) = (char *)v1088 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v93 + 2320) = *v1088;
                  *(_QWORD *)(v93 + 2328) = v1082;
                  *(_DWORD *)(v93 + 2296) = 1;
                  __ba(v93, 0LL);
                }
                if ( v1082 != *(_QWORD *)(v93 + 1240) )
                {
                  v1089 = (unsigned __int64 *)(*(__int64 (__fastcall **)(__int64, __int64))(v93 + 984))(v1082, 1LL);
                  v1090 = v1089;
                  if ( v1089 )
                  {
                    v1091 = *v1089;
                    v1092 = v1089;
                    if ( *v1089 )
                    {
                      v1093 = v2913;
                      v1094 = v2605;
                      v1095 = v2600;
                      v2603 = (__int64)v1089;
                      do
                      {
                        *v1090 = v1091 & 0xFFFFFFFFFFFFFFFCuLL;
                        (*(void (**)(void))(v93 + 480))();
                        v1096 = v2618;
                        v1097 = v1090[1] & 0xFFFFFFFFFFFF0000uLL;
                        if ( v1097 == v1094 )
                          v1096 = v1093;
                        v1098 = v1090[1] >> 6;
                        LOBYTE(v1098) = v1098 & 0xF;
                        if ( !(*(unsigned int (__fastcall **)(unsigned __int64, __int64))(v93 + 1016))(v1098, v1096) )
                        {
                          if ( (*(_DWORD *)(v93 + 2448) & 0x40000000) != 0 )
                          {
                            v1099 = *(_QWORD **)(v93 + 2688);
                            v1100 = 48;
                            v1101 = 6LL;
                            do
                            {
                              v1100 -= 8;
                              *v1099 = *(_QWORD *)v1095;
                              v1095 += 2;
                              ++v1099;
                              --v1101;
                            }
                            while ( v1101 );
                            if ( v1100 )
                            {
                              do
                              {
                                v1102 = *(_BYTE *)v1095;
                                v1095 = (int *)((char *)v1095 + 1);
                                *(_BYTE *)v1099 = v1102;
                                v1099 = (_QWORD *)((char *)v1099 + 1);
                                --v1100;
                              }
                              while ( v1100 );
                              v1093 = v2913;
                            }
                            v1095 = *(int **)(v93 + 2688);
                          }
                          *((_QWORD *)v1095 + 3) = v1097;
                          *((_QWORD *)v1095 + 4) = *v1090;
                          *((_BYTE *)v1095 + 40) = ((unsigned __int64)*((unsigned int *)v1090 + 2) >> 6) & 0xF;
                          if ( !*(_DWORD *)(v93 + 2296) )
                          {
                            *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                            *(_QWORD *)(v93 + 2312) = (char *)v1095 - 0x4C48B4211BBACBEBLL;
                            *(_QWORD *)(v93 + 2320) = *v1095;
                            *(_QWORD *)(v93 + 2328) = v1082;
                            *(_DWORD *)(v93 + 2296) = 1;
                            __ba(v93, 0LL);
                          }
                        }
                        v1090 += 6;
                        v1091 = *v1090;
                      }
                      while ( *v1090 );
                      v1092 = (_QWORD *)v2603;
                    }
                    (*(void (__fastcall **)(_QWORD *))(v93 + 248))(v1092);
                  }
                }
                (*(void (__fastcall **)(__int64))(v93 + 936))(v1082);
                v1042 = v2604;
                *(_DWORD *)(v93 + 2088) += 0x8000;
              }
              if ( v2601 )
                (*(void (**)(void))(v93 + 480))();
              *(_DWORD *)(v93 + 2088) += v1042 << 8;
              goto LABEL_238;
            }
            while ( 2 )
            {
              if ( v1040 == v1043 )
              {
                v1044 = (char *)v121;
                if ( (*(int (__fastcall **)(__int64))(v93 + 928))(v1043) >= 0 )
                {
                  v1045 = (*(unsigned __int8 (__fastcall **)(__int64))(v93 + 992))(v1043);
                  v2619 = (*(__int64 (__fastcall **)(__int64, unsigned __int8 *))(v93 + 1000))(v1043, &v2942);
                  v2605 = (*(__int64 (__fastcall **)(__int64))(v93 + 1008))(v1043);
                  if ( (_BYTE)v1045 != 97 && !*(_DWORD *)(v93 + 2296) )
                  {
                    *(_QWORD *)(*(_QWORD *)(v93 + 1416) + 24LL) = (unsigned int)v1045 ^ 0x61LL;
                    if ( !*(_DWORD *)(v93 + 2296) )
                    {
                      *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v93 + 2312) = (char *)v121 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v93 + 2320) = *v121;
                      *(_QWORD *)(v93 + 2328) = v1043;
                      *(_DWORD *)(v93 + 2296) = 1;
                      __ba(v93, 0LL);
                    }
                  }
                  v2910 = 0;
                  v1046 = 0;
                  if ( (v1045 & 7) == 1 )
                  {
                    v1046 = 48;
                  }
                  else if ( (v1045 & 7) == 2 )
                  {
                    v1046 = 16;
                    v2910 = 16;
                  }
                  else if ( (v1045 & 7) != 0 && !*(_DWORD *)(v93 + 2296) )
                  {
                    *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v93 + 2312) = (char *)v121 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v93 + 2320) = *v121;
                    *(_QWORD *)(v93 + 2328) = v1043;
                    *(_DWORD *)(v93 + 2296) = 1;
                    __ba(v93, 0LL);
                  }
                  v1047 = *(_QWORD *)(v93 + 1472);
                  v1048 = v2619;
                  v1049 = v1045 >> 4;
                  v128 = (*(_BYTE *)(v1047 + 2 * v1049) | (unsigned __int8)v1046) == v2619;
                  v1050 = v2600;
                  if ( !v128 && !*(_DWORD *)(v93 + 2296) )
                  {
                    *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v93 + 2312) = v1044 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v93 + 2320) = *v1050;
                    *(_QWORD *)(v93 + 2328) = v1043;
                    *(_DWORD *)(v93 + 2296) = 1;
                    __ba(v93, 0LL);
                  }
                  if ( (*(_BYTE *)(v1047 + 2 * v1049 + 1) | (unsigned __int8)v2910) != v2942 && !*(_DWORD *)(v93 + 2296) )
                  {
                    *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v93 + 2312) = v1044 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v93 + 2320) = *v1050;
                    *(_QWORD *)(v93 + 2328) = v1043;
                    *(_DWORD *)(v93 + 2296) = 1;
                    __ba(v93, 0LL);
                  }
                  if ( v1043 != *(_QWORD *)(v93 + 1240) )
                  {
                    v1051 = (unsigned __int64 *)(*(__int64 (__fastcall **)(__int64, __int64))(v93 + 984))(v1043, 1LL);
                    v1052 = v1051;
                    if ( v1051 )
                    {
                      v1053 = *v1051;
                      v1054 = v1051;
                      if ( *v1051 )
                      {
                        v1055 = v2605;
                        v2911 = v1051;
                        do
                        {
                          *v1052 = v1053 & 0xFFFFFFFFFFFFFFFCuLL;
                          (*(void (**)(void))(v93 + 480))();
                          v1056 = v2942;
                          v1057 = v1052[1] & 0xFFFFFFFFFFFF0000uLL;
                          if ( v1057 == v1055 )
                            v1056 = v1048;
                          v1058 = v1052[1] >> 6;
                          LOBYTE(v1058) = v1058 & 0xF;
                          if ( !(*(unsigned int (__fastcall **)(unsigned __int64, __int64))(v93 + 1016))(v1058, v1056) )
                          {
                            if ( (*(_DWORD *)(v93 + 2448) & 0x40000000) != 0 )
                            {
                              v1059 = *(_QWORD **)(v93 + 2688);
                              v1060 = 48;
                              v1061 = 6LL;
                              do
                              {
                                v1060 -= 8;
                                *v1059 = *(_QWORD *)v1044;
                                v1044 += 8;
                                ++v1059;
                                --v1061;
                              }
                              while ( v1061 );
                              if ( v1060 )
                              {
                                do
                                {
                                  v1062 = *v1044++;
                                  *(_BYTE *)v1059 = v1062;
                                  v1059 = (_QWORD *)((char *)v1059 + 1);
                                  --v1060;
                                }
                                while ( v1060 );
                                v1048 = v2619;
                              }
                              v1044 = *(char **)(v93 + 2688);
                            }
                            *((_QWORD *)v1044 + 3) = v1057;
                            *((_QWORD *)v1044 + 4) = *v1052;
                            v1044[40] = ((unsigned __int64)*((unsigned int *)v1052 + 2) >> 6) & 0xF;
                            if ( !*(_DWORD *)(v93 + 2296) )
                            {
                              *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                              *(_QWORD *)(v93 + 2312) = v1044 - 0x4C48B4211BBACBEBLL;
                              *(_QWORD *)(v93 + 2320) = *(int *)v1044;
                              *(_QWORD *)(v93 + 2328) = v1043;
                              *(_DWORD *)(v93 + 2296) = 1;
                              __ba(v93, 0LL);
                            }
                          }
                          v1052 += 6;
                          v1053 = *v1052;
                        }
                        while ( *v1052 );
                        goto LABEL_1698;
                      }
                      goto LABEL_1699;
                    }
                  }
                  goto LABEL_1700;
                }
                goto LABEL_1701;
              }
              if ( (*(unsigned int (__fastcall **)(__int64))(v93 + 968))(v1043) )
              {
                v1063 = (char *)v121;
                if ( (*(int (__fastcall **)(__int64))(v93 + 928))(v1043) >= 0 )
                {
                  v1064 = (*(unsigned __int8 (__fastcall **)(__int64))(v93 + 992))(v1043);
                  v1065 = (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int8 *))(v93 + 1000))(v1043, &v2617);
                  v2603 = (*(__int64 (__fastcall **)(__int64))(v93 + 1008))(v1043);
                  if ( (_BYTE)v1064 != 97 && !*(_DWORD *)(v93 + 2296) )
                  {
                    *(_QWORD *)(*(_QWORD *)(v93 + 1416) + 24LL) = (unsigned int)v1064 ^ 0x61LL;
                    if ( !*(_DWORD *)(v93 + 2296) )
                    {
                      *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v93 + 2312) = (char *)v121 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v93 + 2320) = *v121;
                      *(_QWORD *)(v93 + 2328) = v1043;
                      *(_DWORD *)(v93 + 2296) = 1;
                      __ba(v93, 0LL);
                    }
                  }
                  v2912 = 0;
                  v1066 = 0;
                  if ( (v1064 & 7) == 1 )
                  {
                    v1066 = 48;
                  }
                  else if ( (v1064 & 7) == 2 )
                  {
                    v1066 = 16;
                    v2912 = 16;
                  }
                  else if ( (v1064 & 7) != 0 && !*(_DWORD *)(v93 + 2296) )
                  {
                    *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v93 + 2312) = (char *)v121 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v93 + 2320) = *v121;
                    *(_QWORD *)(v93 + 2328) = v1043;
                    *(_DWORD *)(v93 + 2296) = 1;
                    __ba(v93, 0LL);
                  }
                  v1067 = *(_QWORD *)(v93 + 1472);
                  v1068 = v1064 >> 4;
                  v128 = (*(_BYTE *)(v1067 + 2 * v1068) | (unsigned __int8)v1066) == (_BYTE)v1065;
                  v1069 = v2600;
                  if ( !v128 && !*(_DWORD *)(v93 + 2296) )
                  {
                    *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v93 + 2312) = v1063 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v93 + 2320) = *v1069;
                    *(_QWORD *)(v93 + 2328) = v1043;
                    *(_DWORD *)(v93 + 2296) = 1;
                    __ba(v93, 0LL);
                  }
                  if ( (*(_BYTE *)(v1067 + 2 * v1068 + 1) | (unsigned __int8)v2912) != v2617 && !*(_DWORD *)(v93 + 2296) )
                  {
                    *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v93 + 2312) = v1063 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v93 + 2320) = *v1069;
                    *(_QWORD *)(v93 + 2328) = v1043;
                    *(_DWORD *)(v93 + 2296) = 1;
                    __ba(v93, 0LL);
                  }
                  if ( v1043 != *(_QWORD *)(v93 + 1240) )
                  {
                    v1070 = (unsigned __int64 *)(*(__int64 (__fastcall **)(__int64, __int64))(v93 + 984))(v1043, 1LL);
                    v1071 = v1070;
                    if ( v1070 )
                    {
                      v1072 = *v1070;
                      v1054 = v1070;
                      if ( *v1070 )
                      {
                        v1073 = v2603;
                        v2911 = v1070;
                        do
                        {
                          *v1071 = v1072 & 0xFFFFFFFFFFFFFFFCuLL;
                          (*(void (**)(void))(v93 + 480))();
                          v1074 = v2617;
                          v1075 = v1071[1] & 0xFFFFFFFFFFFF0000uLL;
                          if ( v1075 == v1073 )
                            v1074 = v1065;
                          v1076 = v1071[1] >> 6;
                          LOBYTE(v1076) = v1076 & 0xF;
                          if ( !(*(unsigned int (__fastcall **)(unsigned __int64, __int64))(v93 + 1016))(v1076, v1074) )
                          {
                            if ( (*(_DWORD *)(v93 + 2448) & 0x40000000) != 0 )
                            {
                              v1077 = *(_QWORD **)(v93 + 2688);
                              v1078 = 48;
                              v1079 = 6LL;
                              do
                              {
                                v1078 -= 8;
                                *v1077 = *(_QWORD *)v1063;
                                v1063 += 8;
                                ++v1077;
                                --v1079;
                              }
                              while ( v1079 );
                              if ( v1078 )
                              {
                                do
                                {
                                  v1080 = *v1063++;
                                  *(_BYTE *)v1077 = v1080;
                                  v1077 = (_QWORD *)((char *)v1077 + 1);
                                  --v1078;
                                }
                                while ( v1078 );
                                v1073 = v2603;
                              }
                              v1063 = *(char **)(v93 + 2688);
                            }
                            *((_QWORD *)v1063 + 3) = v1075;
                            *((_QWORD *)v1063 + 4) = *v1071;
                            v1063[40] = ((unsigned __int64)*((unsigned int *)v1071 + 2) >> 6) & 0xF;
                            if ( !*(_DWORD *)(v93 + 2296) )
                            {
                              *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                              *(_QWORD *)(v93 + 2312) = v1063 - 0x4C48B4211BBACBEBLL;
                              *(_QWORD *)(v93 + 2320) = *(int *)v1063;
                              *(_QWORD *)(v93 + 2328) = v1043;
                              *(_DWORD *)(v93 + 2296) = 1;
                              __ba(v93, 0LL);
                            }
                          }
                          v1071 += 6;
                          v1072 = *v1071;
                        }
                        while ( *v1071 );
LABEL_1698:
                        v1054 = v2911;
                      }
LABEL_1699:
                      (*(void (__fastcall **)(unsigned __int64 *))(v93 + 248))(v1054);
                    }
                  }
LABEL_1700:
                  (*(void (__fastcall **)(__int64))(v93 + 936))(v1043);
                  v121 = v2600;
                  *(_DWORD *)(v93 + 2088) += 0x8000;
                  v1042 = v2604;
                  v1040 = v2601;
                }
LABEL_1701:
                v1038 = 0;
              }
              v1081 = *(__int64 (__fastcall **)(__int64))(v93 + 944);
              v2604 = ++v1042;
              v1043 = v1081(v1043);
              if ( !v1043 )
                goto LABEL_1703;
              continue;
            }
          }
          if ( (*((_BYTE *)v121 + 42) & 1) == 0 )
            goto LABEL_1750;
          if ( *(_QWORD *)(v93 + 2432) )
          {
            v1103 = *(_DWORD *)(v93 + 2452);
            if ( (v1103 & 4) == 0 )
            {
              if ( !*(_DWORD *)(v93 + 2084) )
              {
                *(_DWORD *)(v93 + 2452) = v1103 ^ ((unsigned __int8)v1103 ^ (unsigned __int8)(8 * v1103)) & 0x20;
                goto LABEL_1750;
              }
              if ( (v1103 & 0x20) == 0 )
              {
LABEL_1750:
                v1104 = *(unsigned int *)(v93 + 2084);
                v2620 = (unsigned int *)*((_QWORD *)v121 + 1);
                v1105 = &v2620[3 * v1104 + 3];
                v2605 = (__int64)&v2620[3 * v1104];
                v1106 = v121[9];
                v2603 = (__int64)v1105;
                v1107 = v1106 / 0xCuLL;
                v2612 = v1107;
                v2606 = (ULONG_PTR)&v2620[3 * (v1106 / 0xC)];
                v1108 = (char *)v121 + v1104 + 48;
                v2601 = (__int64)v1108;
                v1109 = v1107 - 1;
                v2914 = v1107 - 1;
                if ( (_DWORD)v1107 )
                {
                  *((_QWORD *)&v107 + 1) = (char *)v121 + ((v1109 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL) + 48;
                  v2607 = *((_QWORD *)&v107 + 1);
                }
                else
                {
                  *((_QWORD *)&v107 + 1) = v121 + 12;
                  v2607 = (__int64)(v121 + 12);
                  v2914 = -1;
                }
                v2626 = (_DWORD *)(*((_QWORD *)&v107 + 1) + 24LL * *((unsigned __int16 *)v121 + 20));
                if ( (_DWORD)v1107 && (unsigned int)v1104 < v1109 )
                {
                  v1110 = v2605;
                  do
                  {
                    if ( *v1108 >= 0 )
                    {
                      v1111 = *(unsigned int *)(v1110 + 4);
                      v1112 = *v1105 - (unsigned int)v1111;
                      v1113 = (unsigned int)v1112;
                      v2605 = (unsigned int)v1112;
                      v1114 = *((_QWORD *)v2600 + 3) + v1111;
                      *(_DWORD *)(v93 + 2088) += v1112;
                      v1115 = (_QWORD *)v1114;
                      v1116 = *(_DWORD *)(v93 + 2068);
                      v1117 = (const char *)v1114;
                      v1118 = *(_QWORD *)(v93 + 2072);
                      v2615 = v1114;
                      if ( v1114 < v1112 + v1114 )
                      {
                        do
                        {
                          _mm_prefetch(v1117, 0);
                          v1117 += 64;
                        }
                        while ( (unsigned __int64)v1117 < v1112 + v1114 );
                      }
                      v1119 = v1118;
                      v1120 = (unsigned int)v1112 >> 7;
                      if ( (unsigned int)v1112 >> 7 )
                      {
                        do
                        {
                          v1121 = 8LL;
                          do
                          {
                            v1122 = v1115[1] ^ __ROL8__(*v1115 ^ v1119, v1116);
                            v1115 += 2;
                            v1119 = __ROL8__(v1122, v1116);
                            --v1121;
                          }
                          while ( v1121 );
                          v1123 = (__ROL8__(v1118 ^ ((unsigned __int64)v1115 - v1114), 17) ^ v1118 ^ ((unsigned __int64)v1115 - v1114))
                                * (unsigned __int128)0x7010008004002001uLL;
                          v2760 = *((_QWORD *)&v1123 + 1);
                          v1116 = (BYTE8(v1123) ^ (unsigned __int8)(v1123 ^ v1116)) & 0x3F;
                          if ( !v1116 )
                            LOBYTE(v1116) = 1;
                          --v1120;
                        }
                        while ( v1120 );
                        v93 = v2602;
                        v1113 = v2605;
                        v1108 = (char *)v2601;
                      }
                      v1124 = v1112 & 0x7F;
                      if ( v1124 >= 8 )
                      {
                        v1125 = (unsigned __int64)v1124 >> 3;
                        do
                        {
                          v1119 = __ROL8__(*v1115++ ^ v1119, v1116);
                          v1124 -= 8;
                          --v1125;
                        }
                        while ( v1125 );
                      }
                      if ( v1124 )
                      {
                        do
                        {
                          v1126 = *(unsigned __int8 *)v1115;
                          v1115 = (_QWORD *)((char *)v1115 + 1);
                          v1119 = __ROL8__(v1126 ^ v1119, v1116);
                          --v1124;
                        }
                        while ( v1124 );
                        v93 = v2602;
                      }
                      for ( n = v1119; ; LOBYTE(v1119) = n ^ v1119 )
                      {
                        n >>= 7;
                        if ( !n )
                          break;
                      }
                      v1128 = *v1108;
                      v1129 = v1119 & 0x7F;
                      v1130 = *v1108 & 0x7F;
                      LODWORD(v2609) = v1129;
                      if ( v1129 != v1130 )
                      {
                        if ( v1113 && (*(_DWORD *)(v93 + 2452) & 0x40) != 0 )
                        {
                          v1131 = KeGetCurrentIrql();
                          __writecr8(2uLL);
                          v1132 = v1114 & 0xFFFFFFFFFFFFF000uLL;
                          v1133 = (v1113 - 1 + v1114) | 0xFFF;
                          v1134 = v1132 - 1;
                          while ( 1 )
                          {
                            v1135 = v1131;
                            while ( 1 )
                            {
                              v1136 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v93 + 1128))(v1132, 0LL);
                              if ( v1136 != -1073741267 )
                                break;
                              if ( v1131 > 1u )
                                goto LABEL_1786;
                              v1135 = v1131;
                              __writecr8(v1131);
                              KeGetCurrentIrql();
                              __writecr8(2uLL);
                            }
                            if ( v1136 < 0 )
                              break;
LABEL_1786:
                            v1132 += 4096LL;
                            v1134 += 4096LL;
                            if ( v1134 == v1133 )
                            {
                              __writecr8(v1135);
                              goto LABEL_1792;
                            }
                          }
                          __writecr8(v1135);
                          v1129 = v2609;
                          v1114 = v2615;
                          v1128 = *(_BYTE *)v2601;
                        }
                        if ( !*(_DWORD *)(v93 + 2296) )
                        {
                          *(_QWORD *)(*(_QWORD *)(v93 + 1416) + 24LL) = v1128 & 0x7F ^ (unsigned __int64)v1129;
                          if ( !*(_DWORD *)(v93 + 2296) )
                          {
                            v1137 = v2600;
                            *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                            *(_QWORD *)(v93 + 2312) = (char *)v1137 - 0x4C48B4211BBACBEBLL;
                            *(_QWORD *)(v93 + 2320) = *v1137;
                            *(_QWORD *)(v93 + 2328) = v1114;
                            *(_DWORD *)(v93 + 2296) = 1;
                            __ba(v93, 0LL);
                          }
                        }
                      }
LABEL_1792:
                      v1108 = (char *)v2601;
                      *(_DWORD *)(v93 + 2088) += 64;
                      v1105 = (unsigned int *)v2603;
                      v106 = v2614;
                    }
                    ++v1108;
                    v1105 += 3;
                    v1110 += 12LL;
                    v2601 = (__int64)v1108;
                    v2603 = (__int64)v1105;
                  }
                  while ( (unsigned __int64)v1105 < v2606 && *(_DWORD *)(v93 + 2088) < *v106 );
                  LODWORD(v1107) = v2612;
                  LODWORD(v1104) = ((int)v1110 - (int)v2620) / 12;
                  *(_DWORD *)(v93 + 2084) = v1104;
                  *((_QWORD *)&v107 + 1) = v2607;
                  if ( (unsigned int)v1104 < v2914 )
                    goto LABEL_238;
                }
                if ( *(_DWORD *)(v93 + 2088) >= *(_DWORD *)(v93 + 2092) )
                  goto LABEL_238;
                if ( (_DWORD)v1107 )
                  LODWORD(v1104) = v1104 - v1107 + 1;
                v1138 = *((_QWORD *)&v107 + 1) + 24LL * (unsigned int)v1104;
                v2603 = v1138;
                while ( 1 )
                {
                  v1139 = v2600;
                  *((_QWORD *)&v107 + 1) = v1138 + 8;
                  v2915 = (unsigned int *)(v1138 + 8);
                  v1140 = 2LL;
                  v2601 = 2LL;
                  do
                  {
                    if ( (int)**((_DWORD **)&v107 + 1) >= 0 )
                    {
                      v1141 = *((_QWORD *)v1139 + 3) + *(unsigned int *)(*((_QWORD *)&v107 + 1) - 8LL);
                      v1142 = (unsigned int)(*(_DWORD *)(*((_QWORD *)&v107 + 1) - 4LL)
                                           - *(_DWORD *)(*((_QWORD *)&v107 + 1) - 8LL));
                      *(_DWORD *)(v93 + 2088) += v1142;
                      v1143 = (_QWORD *)v1141;
                      v1144 = *(_DWORD *)(v93 + 2068);
                      v1145 = (const char *)v1141;
                      v1146 = *(_QWORD *)(v93 + 2072);
                      v1147 = (unsigned int)v1142;
                      v2607 = v1141;
                      v2605 = (unsigned int)v1142;
                      if ( v1141 < v1141 + v1142 )
                      {
                        do
                        {
                          _mm_prefetch(v1145, 0);
                          v1145 += 64;
                        }
                        while ( (unsigned __int64)v1145 < v1141 + v1142 );
                      }
                      v1148 = v1146;
                      v1149 = (unsigned int)v1142 >> 7;
                      if ( (unsigned int)v1142 >> 7 )
                      {
                        do
                        {
                          v1150 = 8LL;
                          do
                          {
                            v1151 = v1143[1] ^ __ROL8__(*v1143 ^ v1148, v1144);
                            v1143 += 2;
                            v1148 = __ROL8__(v1151, v1144);
                            --v1150;
                          }
                          while ( v1150 );
                          v1152 = (__ROL8__(v1146 ^ ((unsigned __int64)v1143 - v1141), 17) ^ v1146 ^ ((unsigned __int64)v1143 - v1141))
                                * (unsigned __int128)0x7010008004002001uLL;
                          v2761 = *((_QWORD *)&v1152 + 1);
                          v1144 = ((unsigned __int8)v1152 ^ (unsigned __int8)(BYTE8(v1152) ^ v1144)) & 0x3F;
                          if ( !v1144 )
                            LOBYTE(v1144) = 1;
                          --v1149;
                        }
                        while ( v1149 );
                        v93 = v2602;
                        v1147 = v2605;
                        *((_QWORD *)&v107 + 1) = v2915;
                        v1140 = v2601;
                      }
                      v1153 = v1142 & 0x7F;
                      if ( v1153 >= 8 )
                      {
                        v1154 = (unsigned __int64)v1153 >> 3;
                        do
                        {
                          v1148 = __ROL8__(*v1143++ ^ v1148, v1144);
                          v1153 -= 8;
                          --v1154;
                        }
                        while ( v1154 );
                      }
                      if ( v1153 )
                      {
                        do
                        {
                          v1155 = *(unsigned __int8 *)v1143;
                          v1143 = (_QWORD *)((char *)v1143 + 1);
                          v1148 = __ROL8__(v1155 ^ v1148, v1144);
                          --v1153;
                        }
                        while ( v1153 );
                        v93 = v2602;
                      }
                      for ( ii = v1148; ; LODWORD(v1148) = ii ^ v1148 )
                      {
                        ii >>= 31;
                        if ( !ii )
                          break;
                      }
                      v1157 = **((_DWORD **)&v107 + 1);
                      v1158 = v1148 & 0x7FFFFFFF;
                      if ( v1158 != (**((_DWORD **)&v107 + 1) & 0x7FFFFFFF) )
                      {
                        if ( v1147 )
                        {
                          v1159 = 64LL;
                          if ( (*(_DWORD *)(v93 + 2452) & 0x40) != 0 )
                          {
                            v1160 = KeGetCurrentIrql();
                            __writecr8(2uLL);
                            v1161 = v1141 & 0xFFFFFFFFFFFFF000uLL;
                            v2605 = (v1141 + v1147 - 1) | 0xFFF;
                            v1162 = (v1141 & 0xFFFFFFFFFFFFF000uLL) - 1;
                            while ( 1 )
                            {
                              v1163 = v1160;
                              while ( 1 )
                              {
                                v1164 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v93 + 1128))(
                                          v1161,
                                          0LL,
                                          v1159,
                                          v1143);
                                if ( v1164 != -1073741267 )
                                  break;
                                if ( v1160 > 1u )
                                  goto LABEL_1829;
                                v1163 = v1160;
                                __writecr8(v1160);
                                KeGetCurrentIrql();
                                __writecr8(2uLL);
                              }
                              if ( v1164 < 0 )
                                break;
LABEL_1829:
                              v1159 = 4096LL;
                              v1161 += 4096LL;
                              v1162 += 4096LL;
                              if ( v1162 == v2605 )
                              {
                                __writecr8(v1163);
                                v1140 = v2601;
                                goto LABEL_1835;
                              }
                            }
                            __writecr8(v1163);
                            *((_QWORD *)&v107 + 1) = v2915;
                            v1141 = v2607;
                            v1140 = v2601;
                            v1157 = *v2915;
                          }
                        }
                        v1165 = v1157;
                        if ( !*(_DWORD *)(v93 + 2296) )
                        {
                          LODWORD(v1165) = v1157 & 0x7FFFFFFF;
                          *(_QWORD *)(*(_QWORD *)(v93 + 1416) + 24LL) = v1165 ^ v1158;
                          if ( !*(_DWORD *)(v93 + 2296) )
                          {
                            *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                            *(_QWORD *)(v93 + 2312) = (char *)v1139 - 0x4C48B4211BBACBEBLL;
                            *(_QWORD *)(v93 + 2320) = *v1139;
                            *(_QWORD *)(v93 + 2328) = v1141;
                            *(_DWORD *)(v93 + 2296) = 1;
                            __ba(v93, 0LL);
LABEL_1835:
                            *((_QWORD *)&v107 + 1) = v2915;
                          }
                        }
                      }
                    }
                    *((_QWORD *)&v107 + 1) += 12LL;
                    --v1140;
                    v2915 = (unsigned int *)*((_QWORD *)&v107 + 1);
                    v2601 = v1140;
                  }
                  while ( v1140 );
                  v1166 = v2603;
                  ++*(_DWORD *)(v93 + 2084);
                  v1138 = v1166 + 24;
                  v2603 = v1138;
                  if ( (_DWORD *)v1138 == v2626 )
                  {
                    *(_DWORD *)(v93 + 2084) = 0;
                    goto LABEL_202;
                  }
                  if ( *(_DWORD *)(v93 + 2088) >= *(_DWORD *)(v93 + 2092) )
                  {
LABEL_202:
                    LODWORD(v107) = 0;
                    goto LABEL_203;
                  }
                }
              }
            }
          }
LABEL_1753:
          *(_DWORD *)(v93 + 2084) = 0;
          goto LABEL_238;
        }
        if ( v134 == 41 || v134 == 42 )
          goto LABEL_1425;
        if ( v134 == 43 )
          goto LABEL_2304;
        if ( v134 != 44 )
        {
          if ( v134 == 46 )
          {
            if ( (*(_DWORD *)(v93 + 2096) & 1) == 0 )
            {
              v1322 = *(_QWORD *)(v93 + 1344);
              v1323 = 0;
              (*(void (__fastcall **)(_QWORD, __int64))(v93 + 376))((unsigned int)(v134 - 46), 6LL);
              if ( (*(_DWORD *)(v93 + 2448) & 0x40000000) != 0 || (v1324 = *(_DWORD *)(v93 + 2384), v1324 >= 7) )
              {
                (*(void (__fastcall **)(_QWORD, _QWORD))(v93 + 296))(*(_QWORD *)(v93 + 2560), 0LL);
                v1325 = 0x80;
              }
              else
              {
                v1325 = 1 << v1324;
              }
              (*(void (__fastcall **)(__int64, _QWORD))(v93 + 312))(v1322, 0LL);
              if ( v1325 == (char)0x80 )
              {
                (*(void (__fastcall **)(_QWORD, _QWORD))(v93 + 304))(*(_QWORD *)(v93 + 2560), 0LL);
              }
              else
              {
                v1326 = *(volatile signed __int8 ***)(v93 + 1304);
                v1327 = *v1326;
                if ( *v1326 != (volatile signed __int8 *)v1326 )
                {
                  v1328 = ~v1325;
                  do
                  {
                    _InterlockedAnd8(&v1327[*(_QWORD *)(v93 + 1728) - *(_QWORD *)(v93 + 1752)], v1328);
                    v1327 = *(volatile signed __int8 **)v1327;
                    ++v1323;
                  }
                  while ( v1327 != (volatile signed __int8 *)v1326 );
                }
              }
              (*(void (__fastcall **)(_QWORD, _QWORD))(v93 + 320))(*(_QWORD *)(v93 + 1344), 0LL);
              (*(void (**)(void))(v93 + 384))();
              *(_DWORD *)(v93 + 2088) += v1323 << 7;
            }
            goto LABEL_202;
          }
          if ( v134 == 47 )
          {
            v2628 = *(_QWORD *)(*(_QWORD *)(v93 + 1712)
                              + *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *(_QWORD *)(v93 + 1616))
                              + *(_QWORD *)(v93 + 1680));
            v1315 = (*(__int64 (__fastcall **)(__int64, __int64))(v93 + 1176))(v2628, 6LL);
            if ( v1315 == 0xFFFFFFFFLL )
            {
              v2628 = 0LL;
              v1316 = *(_QWORD *)(v93 + 2440);
              if ( !v1316 )
                goto LABEL_2112;
              LODWORD(v107) = (*(__int64 (__fastcall **)(__int64, __int64 *))(v93 + 1160))(v1316, &v2628);
              v1317 = v2628;
              if ( (v107 & 0x80000000) != 0LL )
                v1317 = 0LL;
              v2628 = v1317;
              if ( !v1317 )
LABEL_2112:
                v2628 = (*(__int64 (__fastcall **)(_QWORD))(v93 + 960))(0LL);
              *(_QWORD *)(v93 + 2440) = 0LL;
              v1318 = 0;
              for ( jj = v2628 == 0; ; jj = v2628 == 0 )
              {
                if ( jj )
                  goto LABEL_2120;
                ++v1318;
                if ( (*(int (**)(void))(v93 + 928))() >= 0 )
                {
                  (*(void (__fastcall **)(__int64, _BYTE *))(v93 + 1080))(v2628, v2886);
                  v1315 = (*(__int64 (**)(void))(v93 + 1176))();
                  (*(void (__fastcall **)(_BYTE *))(v93 + 1088))(v2886);
                  (*(void (__fastcall **)(__int64))(v93 + 936))(v2628);
                  if ( v1315 != 0xFFFFFFFFLL || v1318 > 0x100 )
                    break;
                }
                v2628 = (*(__int64 (__fastcall **)(__int64))(v93 + 960))(v2628);
              }
              *(_QWORD *)(v93 + 2440) = (*(__int64 (__fastcall **)(__int64))(v93 + 1168))(v2628);
              (*(void (__fastcall **)(__int64))(v93 + 480))(v2628);
              if ( v1315 == 0xFFFFFFFFLL )
              {
LABEL_2120:
                *(_DWORD *)(v93 + 2088) += v1318 << 12;
                goto LABEL_202;
              }
            }
            if ( (*(_DWORD *)(v93 + 2448) & 0x40000000) != 0 )
            {
              v1320 = *(_QWORD **)(v93 + 2688);
              DWORD2(v107) = 48;
              v1321 = 6LL;
              do
              {
                *((_QWORD *)&v107 + 1) = (unsigned int)(DWORD2(v107) - 8);
                *v1320 = *(_QWORD *)v121;
                v121 += 2;
                ++v1320;
                --v1321;
              }
              while ( v1321 );
              for ( ; DWORD2(v107); *((_QWORD *)&v107 + 1) = (unsigned int)(DWORD2(v107) - 1) )
              {
                LOBYTE(v107) = *(_BYTE *)v121;
                v121 = (int *)((char *)v121 + 1);
                *(_BYTE *)v1320 = v107;
                v1320 = (_QWORD *)((char *)v1320 + 1);
              }
              v121 = *(int **)(v93 + 2688);
            }
            *((_QWORD *)v121 + 3) = v1315;
            v166 = v2628;
            v929 = *(_DWORD *)(v93 + 2296) == 0;
            goto LABEL_2128;
          }
          if ( v134 != 48 )
          {
            if ( v134 == 49 )
            {
              LODWORD(v107) = (*(__int64 (__fastcall **)(_QWORD, __int64))(v93 + 1136))(0LL, 6LL);
              *((_QWORD *)&v107 + 1) = 0LL;
              if ( (v107 & 0x80000000) == 0LL )
                goto LABEL_238;
              if ( *(_DWORD *)(v93 + 2296) )
                goto LABEL_202;
              *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v93 + 2312) = (char *)v121 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v93 + 2320) = (int)v107;
              *(_QWORD *)(v93 + 2328) = 0LL;
              goto LABEL_247;
            }
            goto LABEL_1852;
          }
          v1266 = 0;
          if ( !v121[4] )
            goto LABEL_238;
          if ( (*(_DWORD *)(v93 + 2452) & 0x4000) != 0 )
          {
            v1267 = *(volatile signed __int32 **)(v93 + 1240);
            while ( 1 )
            {
              _disable();
              if ( !_interlockedbittestandset(v1267, (*(_DWORD *)(v93 + 2448) >> 10) & 0x1F) )
                break;
              _enable();
              _mm_pause();
            }
          }
          if ( (v121[6] & 1) == 0 )
          {
            v1268 = (_QWORD *)*((_QWORD *)v121 + 1);
            v1269 = (unsigned int)v121[4];
            v1270 = v1268;
            *(_DWORD *)(v93 + 2088) += v1269;
            v1271 = (const char *)v1268;
            v1272 = *(_DWORD *)(v93 + 2068);
            v1273 = *(_QWORD *)(v93 + 2072);
            if ( v1268 < (_QWORD *)((char *)v1268 + v1269) )
            {
              do
              {
                _mm_prefetch(v1271, 0);
                v1271 += 64;
              }
              while ( v1271 < (const char *)v1268 + v1269 );
            }
            v1274 = *(_QWORD *)(v93 + 2072);
            v1275 = (unsigned int)v1269 >> 7;
            *((_QWORD *)&v107 + 1) = 1LL;
            if ( (unsigned int)v1269 >> 7 )
            {
              do
              {
                v1276 = 8LL;
                do
                {
                  v1277 = v1270[1] ^ __ROL8__(*v1270 ^ v1274, v1272);
                  v1270 += 2;
                  v1274 = __ROL8__(v1277, v1272);
                  --v1276;
                }
                while ( v1276 );
                v107 = (__ROL8__(v1273 ^ ((char *)v1270 - (char *)v1268), 17) ^ v1273 ^ (unsigned __int64)((char *)v1270 - (char *)v1268))
                     * (unsigned __int128)0x7010008004002001uLL;
                v2766 = *((_QWORD *)&v107 + 1);
                v1278 = v107 ^ BYTE8(v107) ^ v1272;
                *((_QWORD *)&v107 + 1) = 1LL;
                v1272 = v1278 & 0x3F;
                if ( !v1272 )
                  LOBYTE(v1272) = 1;
                --v1275;
              }
              while ( v1275 );
              v93 = v2602;
            }
            v1279 = v1269 & 0x7F;
            if ( v1279 >= 8 )
            {
              v1280 = (unsigned __int64)v1279 >> 3;
              do
              {
                v1274 = __ROL8__(*v1270++ ^ v1274, v1272);
                v1279 -= 8;
                --v1280;
              }
              while ( v1280 );
            }
            if ( v1279 )
            {
              do
              {
                v1281 = *(unsigned __int8 *)v1270;
                v1270 = (_QWORD *)((char *)v1270 + 1);
                v1274 = __ROL8__(v1281 ^ v1274, v1272);
                --v1279;
              }
              while ( v1279 );
              v93 = v2602;
            }
            for ( kk = v1274; ; LODWORD(v1274) = kk ^ v1274 )
            {
              kk >>= 31;
              if ( !kk )
                break;
            }
            v1283 = v1274 & 0x7FFFFFFF;
            if ( v1283 != v121[5] )
            {
              if ( !*v121 && v121[6] )
                v1266 = 1;
              v1284 = (unsigned int)v121[4];
              *((_QWORD *)&v107 + 1) = *((_QWORD *)v121 + 1);
              if ( v121[4] && (*(_DWORD *)(v93 + 2452) & 0x40) != 0 )
              {
                v1285 = KeGetCurrentIrql();
                __writecr8(2uLL);
                v1286 = *((_QWORD *)&v107 + 1) & 0xFFFFFFFFFFFFF000uLL;
                v2605 = (*((_QWORD *)&v107 + 1) + v1284 - 1) | 0xFFF;
                v2918 = (*((_QWORD *)&v107 + 1) & 0xFFFFFFFFFFFFF000uLL) - 1;
                while ( 1 )
                {
                  v1287 = v1285;
                  while ( 1 )
                  {
                    LODWORD(v107) = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v93 + 1128))(v1286, 0LL);
                    if ( (_DWORD)v107 != -1073741267 )
                      break;
                    if ( v1266 )
                      goto LABEL_2056;
                    if ( v1285 > 1u )
                      goto LABEL_2054;
                    v1287 = v1285;
                    __writecr8(v1285);
                    KeGetCurrentIrql();
                    __writecr8(2uLL);
                  }
                  if ( (v107 & 0x80000000) != 0LL )
                    break;
LABEL_2054:
                  *((_QWORD *)&v107 + 1) = 4096LL;
                  v1286 += 4096LL;
                  v2918 += 4096LL;
                  if ( v2918 == v2605 )
                    goto LABEL_2055;
                }
LABEL_2056:
                __writecr8(v1287);
                v121 = v2600;
              }
              if ( !*(_DWORD *)(v93 + 2296) )
              {
                *(_QWORD *)(*(_QWORD *)(v93 + 1416) + 24LL) = v1283 ^ (unsigned __int64)(unsigned int)v121[5];
                v1288 = *(_DWORD *)(v93 + 2296) == 0;
                goto LABEL_2059;
              }
            }
            goto LABEL_2105;
          }
          if ( *(_QWORD *)(v93 + 2432) )
          {
            *((_QWORD *)&v107 + 1) = *(unsigned int *)(v93 + 2452);
            if ( !*(_DWORD *)(v93 + 2084) )
            {
              v1290 = DWORD2(v107) ^ (BYTE8(v107) ^ (unsigned __int8)(8 * BYTE8(v107))) & 0x20;
              *(_DWORD *)(v93 + 2452) = v1290;
              goto LABEL_2065;
            }
            LOBYTE(v1290) = *(_DWORD *)(v93 + 2452);
            if ( ((BYTE8(v107) ^ (unsigned __int8)(DWORD2(v107) >> 3)) & 4) == 0 )
            {
LABEL_2065:
              if ( (v1290 & 4) != 0 )
              {
                v1291 = *((_QWORD *)v121 + 1) & 0xFFFFFFFFFFFFF000uLL;
                for ( mm = ((v121[2] & 0xFFF) + (unsigned __int64)(unsigned int)v121[4] + 4095) >> 12; mm; v1291 += 4096LL )
                {
                  --mm;
                  if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))(v93 + 688))(v1291)
                    && !*(_DWORD *)(v93 + 2296) )
                  {
                    *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v93 + 2312) = (char *)v121 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v93 + 2320) = *v121;
                    *(_QWORD *)(v93 + 2328) = v1291;
                    *(_DWORD *)(v93 + 2296) = 1;
                    __ba(v93, 0LL);
                  }
                  *(_DWORD *)(v93 + 2088) += 256;
                }
                goto LABEL_2105;
              }
              v1293 = (_QWORD *)*((_QWORD *)v121 + 1);
              v1294 = (unsigned int)v121[4];
              v1295 = v1293;
              *(_DWORD *)(v93 + 2088) += v1294;
              v1296 = (const char *)v1293;
              v1297 = *(_DWORD *)(v93 + 2068);
              v1298 = *(_QWORD *)(v93 + 2072);
              if ( v1293 < (_QWORD *)((char *)v1293 + v1294) )
              {
                do
                {
                  _mm_prefetch(v1296, 0);
                  v1296 += 64;
                }
                while ( v1296 < (const char *)v1293 + v1294 );
              }
              v1299 = *(_QWORD *)(v93 + 2072);
              v1300 = (unsigned int)v1294 >> 7;
              if ( (unsigned int)v1294 >> 7 )
              {
                do
                {
                  v1301 = 8LL;
                  do
                  {
                    v1302 = v1295[1] ^ __ROL8__(*v1295 ^ v1299, v1297);
                    v1295 += 2;
                    v1299 = __ROL8__(v1302, v1297);
                    --v1301;
                  }
                  while ( v1301 );
                  v1303 = (__ROL8__(v1298 ^ ((char *)v1295 - (char *)v1293), 17) ^ v1298 ^ (unsigned __int64)((char *)v1295 - (char *)v1293))
                        * (unsigned __int128)0x7010008004002001uLL;
                  v2767 = *((_QWORD *)&v1303 + 1);
                  v1297 = ((unsigned __int8)v1303 ^ (unsigned __int8)(BYTE8(v1303) ^ v1297)) & 0x3F;
                  if ( !v1297 )
                    LOBYTE(v1297) = 1;
                  --v1300;
                }
                while ( v1300 );
                v93 = v2602;
              }
              v1304 = v1294 & 0x7F;
              if ( v1304 >= 8 )
              {
                v1305 = (unsigned __int64)v1304 >> 3;
                do
                {
                  v1299 = __ROL8__(*v1295++ ^ v1299, v1297);
                  v1304 -= 8;
                  --v1305;
                }
                while ( v1305 );
              }
              if ( v1304 )
              {
                do
                {
                  v1306 = *(unsigned __int8 *)v1295;
                  v1295 = (_QWORD *)((char *)v1295 + 1);
                  v1299 = __ROL8__(v1306 ^ v1299, v1297);
                  --v1304;
                }
                while ( v1304 );
                v93 = v2602;
              }
              for ( nn = v1299; ; LODWORD(v1299) = nn ^ v1299 )
              {
                nn >>= 31;
                if ( !nn )
                  break;
              }
              *((_QWORD *)&v107 + 1) = (unsigned int)v121[5];
              v1308 = v1299 & 0x7FFFFFFF;
              if ( v1308 == DWORD2(v107) )
                goto LABEL_2105;
              v1309 = (unsigned int)v121[4];
              v1310 = *((_QWORD *)v121 + 1);
              if ( v121[4] && (*(_DWORD *)(v93 + 2452) & 0x40) != 0 )
              {
                v1311 = KeGetCurrentIrql();
                __writecr8(2uLL);
                v1312 = v1310 & 0xFFFFFFFFFFFFF000uLL;
                v2919 = (v1310 + v1309 - 1) | 0xFFF;
                v1313 = (v1310 & 0xFFFFFFFFFFFFF000uLL) - 1;
                while ( 1 )
                {
                  v1287 = v1311;
                  while ( 1 )
                  {
                    v1314 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v93 + 1128))(v1312, 0LL);
                    if ( v1314 != -1073741267 )
                      break;
                    if ( v1311 > 1u )
                      goto LABEL_2099;
                    v1287 = v1311;
                    __writecr8(v1311);
                    KeGetCurrentIrql();
                    __writecr8(2uLL);
                  }
                  if ( v1314 < 0 )
                    break;
LABEL_2099:
                  *((_QWORD *)&v107 + 1) = 4096LL;
                  v1312 += 4096LL;
                  v1313 += 4096LL;
                  if ( v1313 == v2919 )
                  {
LABEL_2055:
                    __writecr8(v1287);
                    goto LABEL_2105;
                  }
                }
                __writecr8(v1287);
                v121 = v2600;
                *((_QWORD *)&v107 + 1) = (unsigned int)v2600[5];
              }
              if ( !*(_DWORD *)(v93 + 2296) )
              {
                *(_QWORD *)(*(_QWORD *)(v93 + 1416) + 24LL) = DWORD2(v107) ^ (unsigned __int64)v1308;
                v1288 = *(_DWORD *)(v93 + 2296) == 0;
LABEL_2059:
                v1289 = *((_QWORD *)v121 + 1);
                if ( v1288 )
                {
                  *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v93 + 2312) = (char *)v121 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v93 + 2320) = *v121;
                  *(_QWORD *)(v93 + 2328) = v1289;
                  *(_DWORD *)(v93 + 2296) = 1;
                  __ba(v93, 0LL);
                }
              }
LABEL_2105:
              if ( (*(_DWORD *)(v93 + 2452) & 0x4000) != 0 )
              {
                *((_QWORD *)&v107 + 1) = (unsigned int)~(1 << ((*(_DWORD *)(v93 + 2448) >> 10) & 0x1F));
                _InterlockedAnd(*(volatile signed __int32 **)(v93 + 1240), DWORD2(v107));
                _enable();
              }
              goto LABEL_202;
            }
          }
          *(_DWORD *)(v93 + 2084) = 0;
          goto LABEL_2105;
        }
        v1329 = v121[8];
        *((_QWORD *)&v107 + 1) = 2LL;
        v2606 = v93;
        if ( (v1329 & 2) == 0 )
          goto LABEL_2213;
        if ( !*(_QWORD *)(v93 + 2432) )
          goto LABEL_1753;
        v1330 = *(_DWORD *)(v93 + 2452);
        if ( (v1330 & 4) != 0 )
          goto LABEL_1753;
        if ( (v1329 & 2) != 0 )
        {
          v1331 = *(_DWORD *)(v93 + 2084);
          *((_QWORD *)&v107 + 1) = v1330;
          if ( v1331 )
          {
            v1332 = *(_DWORD *)(v93 + 2452);
            if ( (((unsigned __int8)v1330 ^ (unsigned __int8)(v1330 >> 3)) & 4) != 0 )
              goto LABEL_1753;
          }
          else
          {
            v1332 = v1330 ^ ((unsigned __int8)v1330 ^ (unsigned __int8)(8 * v1330)) & 0x20;
            *(_DWORD *)(v93 + 2452) = v1332;
          }
          if ( !*(_QWORD *)(v93 + 2432) )
            goto LABEL_2212;
          if ( !v1331 )
          {
            *((_QWORD *)&v107 + 1) = v1332 ^ ((unsigned __int8)v1332 ^ (unsigned __int8)(8 * v1332)) & 0x20;
            *(_DWORD *)(v93 + 2452) = DWORD2(v107);
            goto LABEL_2153;
          }
          *((_QWORD *)&v107 + 1) = v1332;
          if ( (((unsigned __int8)v1332 ^ (unsigned __int8)(v1332 >> 3)) & 4) != 0 )
          {
LABEL_2212:
            *(_DWORD *)(v93 + 2084) = 0;
            goto LABEL_2188;
          }
LABEL_2153:
          if ( (BYTE8(v107) & 4) != 0 )
          {
            v1333 = *((_QWORD *)v121 + 1) & 0xFFFFFFFFFFFFF000uLL;
            for ( i1 = ((v121[2] & 0xFFF) + (unsigned __int64)(unsigned int)v121[4] + 4095) >> 12; i1; v1333 += 4096LL )
            {
              --i1;
              if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))(v93 + 688))(v1333) && !*(_DWORD *)(v93 + 2296) )
              {
                *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v93 + 2312) = (char *)v121 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v93 + 2320) = *v121;
                *(_QWORD *)(v93 + 2328) = v1333;
                *(_DWORD *)(v93 + 2296) = 1;
                __ba(v93, 0LL);
              }
              *(_DWORD *)(v93 + 2088) += 256;
            }
            goto LABEL_2188;
          }
          v1335 = (_QWORD *)*((_QWORD *)v121 + 1);
          v1336 = (unsigned int)v121[4];
          v1337 = v1335;
          *(_DWORD *)(v93 + 2088) += v1336;
          v1338 = (const char *)v1335;
          v1339 = *(_DWORD *)(v93 + 2068);
          v1340 = *(_QWORD *)(v93 + 2072);
          if ( v1335 < (_QWORD *)((char *)v1335 + v1336) )
          {
            do
            {
              _mm_prefetch(v1338, 0);
              v1338 += 64;
            }
            while ( v1338 < (const char *)v1335 + v1336 );
          }
          v1341 = *(_QWORD *)(v93 + 2072);
          v1342 = (unsigned int)v1336 >> 7;
          if ( (unsigned int)v1336 >> 7 )
          {
            do
            {
              v1343 = 8LL;
              do
              {
                v1344 = v1337[1] ^ __ROL8__(*v1337 ^ v1341, v1339);
                v1337 += 2;
                v1341 = __ROL8__(v1344, v1339);
                --v1343;
              }
              while ( v1343 );
              v1345 = (__ROL8__(v1340 ^ ((char *)v1337 - (char *)v1335), 17) ^ v1340 ^ (unsigned __int64)((char *)v1337 - (char *)v1335))
                    * (unsigned __int128)0x7010008004002001uLL;
              v2768 = *((_QWORD *)&v1345 + 1);
              v1339 = ((unsigned __int8)v1345 ^ (unsigned __int8)(BYTE8(v1345) ^ v1339)) & 0x3F;
              if ( !v1339 )
                LOBYTE(v1339) = 1;
              --v1342;
            }
            while ( v1342 );
            v93 = v2602;
          }
          v1346 = v1336 & 0x7F;
          if ( v1346 >= 8 )
          {
            v1347 = (unsigned __int64)v1346 >> 3;
            do
            {
              v1341 = __ROL8__(*v1337++ ^ v1341, v1339);
              v1346 -= 8;
              --v1347;
            }
            while ( v1347 );
          }
          for ( ; v1346; --v1346 )
          {
            v1348 = *(unsigned __int8 *)v1337;
            v1337 = (_QWORD *)((char *)v1337 + 1);
            v1341 = __ROL8__(v1348 ^ v1341, v1339);
          }
          for ( i2 = v1341; ; LODWORD(v1341) = i2 ^ v1341 )
          {
            i2 >>= 31;
            if ( !i2 )
              break;
          }
          *((_QWORD *)&v107 + 1) = (unsigned int)v121[5];
          v1350 = v1341 & 0x7FFFFFFF;
          if ( v1350 != DWORD2(v107) )
          {
            v1351 = (unsigned int)v121[4];
            v1352 = *((_QWORD *)v121 + 1);
            if ( v121[4] && (*(_DWORD *)(v93 + 2452) & 0x40) != 0 )
            {
              v1353 = KeGetCurrentIrql();
              __writecr8(2uLL);
              v1354 = v1352 & 0xFFFFFFFFFFFFF000uLL;
              v2920 = (v1352 + v1351 - 1) | 0xFFF;
              v1355 = (v1352 & 0xFFFFFFFFFFFFF000uLL) - 1;
              while ( 1 )
              {
                v1356 = v1353;
                while ( 1 )
                {
                  v1357 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v93 + 1128))(v1354, 0LL);
                  if ( v1357 != -1073741267 )
                    break;
                  if ( v1353 > 1u )
                    goto LABEL_2186;
                  v1356 = v1353;
                  __writecr8(v1353);
                  KeGetCurrentIrql();
                  __writecr8(2uLL);
                }
                if ( v1357 < 0 )
                  break;
LABEL_2186:
                *((_QWORD *)&v107 + 1) = 4096LL;
                v1354 += 4096LL;
                v1355 += 4096LL;
                if ( v1355 == v2920 )
                  goto LABEL_2187;
              }
              __writecr8(v1356);
              v121 = v2600;
              *((_QWORD *)&v107 + 1) = (unsigned int)v2600[5];
            }
            if ( !*(_DWORD *)(v93 + 2296) )
            {
              *(_QWORD *)(*(_QWORD *)(v93 + 1416) + 24LL) = DWORD2(v107) ^ (unsigned __int64)v1350;
              v1368 = *((_QWORD *)v121 + 1);
              if ( !*(_DWORD *)(v93 + 2296) )
              {
LABEL_2211:
                *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v93 + 2312) = (char *)v121 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v93 + 2320) = *v121;
                *(_QWORD *)(v93 + 2328) = v1368;
                *(_DWORD *)(v93 + 2296) = 1;
                __ba(v93, 0LL);
              }
            }
          }
        }
        else
        {
LABEL_2213:
          v1369 = (_QWORD *)*((_QWORD *)v121 + 1);
          v1370 = (unsigned int)v121[4];
          v1371 = v1369;
          *(_DWORD *)(v93 + 2088) += v1370;
          v1372 = (const char *)v1369;
          v1373 = *(_DWORD *)(v93 + 2068);
          v1374 = *(_QWORD *)(v93 + 2072);
          if ( v1369 < (_QWORD *)((char *)v1369 + v1370) )
          {
            do
            {
              _mm_prefetch(v1372, 0);
              v1372 += 64;
            }
            while ( v1372 < (const char *)v1369 + v1370 );
          }
          v1375 = *(_QWORD *)(v93 + 2072);
          v1376 = (unsigned int)v1370 >> 7;
          *((_QWORD *)&v107 + 1) = 1LL;
          if ( (unsigned int)v1370 >> 7 )
          {
            do
            {
              v1377 = 8LL;
              do
              {
                v1378 = v1371[1] ^ __ROL8__(*v1371 ^ v1375, v1373);
                v1371 += 2;
                v1375 = __ROL8__(v1378, v1373);
                --v1377;
              }
              while ( v1377 );
              v107 = (__ROL8__(v1374 ^ ((char *)v1371 - (char *)v1369), 17) ^ v1374 ^ (unsigned __int64)((char *)v1371 - (char *)v1369))
                   * (unsigned __int128)0x7010008004002001uLL;
              v2769 = *((_QWORD *)&v107 + 1);
              v1379 = v107 ^ BYTE8(v107) ^ v1373;
              *((_QWORD *)&v107 + 1) = 1LL;
              v1373 = v1379 & 0x3F;
              if ( !v1373 )
                LOBYTE(v1373) = 1;
              --v1376;
            }
            while ( v1376 );
            v93 = v2602;
          }
          v1380 = v1370 & 0x7F;
          if ( v1380 >= 8 )
          {
            v1381 = (unsigned __int64)v1380 >> 3;
            do
            {
              v1375 = __ROL8__(*v1371++ ^ v1375, v1373);
              v1380 -= 8;
              --v1381;
            }
            while ( v1381 );
          }
          for ( ; v1380; --v1380 )
          {
            v1382 = *(unsigned __int8 *)v1371;
            v1371 = (_QWORD *)((char *)v1371 + 1);
            v1375 = __ROL8__(v1382 ^ v1375, v1373);
          }
          for ( i3 = v1375; ; LODWORD(v1375) = i3 ^ v1375 )
          {
            i3 >>= 31;
            if ( !i3 )
              break;
          }
          v1384 = v1375 & 0x7FFFFFFF;
          v1385 = 0;
          if ( v1384 != v121[5] )
          {
            if ( !*v121 )
              v1385 = v121[6] != 0;
            v1386 = (unsigned int)v121[4];
            *((_QWORD *)&v107 + 1) = *((_QWORD *)v121 + 1);
            if ( v121[4] )
            {
              v1387 = 64LL;
              if ( (*(_DWORD *)(v93 + 2452) & 0x40) != 0 )
              {
                v1388 = KeGetCurrentIrql();
                __writecr8(2uLL);
                v1389 = *((_QWORD *)&v107 + 1) & 0xFFFFFFFFFFFFF000uLL;
                v2605 = (*((_QWORD *)&v107 + 1) + v1386 - 1) | 0xFFF;
                v2922 = (*((_QWORD *)&v107 + 1) & 0xFFFFFFFFFFFFF000uLL) - 1;
                while ( 1 )
                {
                  v1356 = v1388;
                  while ( 1 )
                  {
                    LODWORD(v107) = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v93 + 1128))(
                                      v1389,
                                      0LL,
                                      v1387,
                                      v1371);
                    if ( (_DWORD)v107 != -1073741267 )
                      break;
                    if ( v1385 )
                      goto LABEL_2244;
                    if ( v1388 > 1u )
                      goto LABEL_2242;
                    v1356 = v1388;
                    __writecr8(v1388);
                    KeGetCurrentIrql();
                    __writecr8(2uLL);
                  }
                  if ( (v107 & 0x80000000) != 0LL )
                    break;
LABEL_2242:
                  *((_QWORD *)&v107 + 1) = 4096LL;
                  v1389 += 4096LL;
                  v2922 += 4096LL;
                  if ( v2922 == v2605 )
                  {
LABEL_2187:
                    __writecr8(v1356);
                    goto LABEL_2188;
                  }
                }
LABEL_2244:
                __writecr8(v1356);
                v121 = v2600;
              }
            }
            if ( !*(_DWORD *)(v93 + 2296) )
            {
              *(_QWORD *)(*(_QWORD *)(v93 + 1416) + 24LL) = v1384 ^ (unsigned __int64)(unsigned int)v121[5];
              v1368 = *((_QWORD *)v121 + 1);
              if ( !*(_DWORD *)(v93 + 2296) )
                goto LABEL_2211;
            }
          }
        }
LABEL_2188:
        if ( (v2600[8] & 1) == 0 )
          goto LABEL_202;
        v1358 = *((_QWORD *)v2600 + 3);
        v1359 = *(__int64 (__fastcall **)(__int64))(v93 + 504);
        v2601 = v1358;
        *(_QWORD *)&v107 = v1359(v1358);
        v1360 = (_DWORD *)(v107 + *(unsigned __int16 *)(v107 + 20) + 24LL);
        *(_QWORD *)&v107 = &v1360[10 * *(unsigned __int16 *)(v107 + 6)];
        if ( v1360 == (_DWORD *)v107 )
          goto LABEL_202;
        v1361 = *(_DWORD *)(v93 + 2084);
        if ( !v1361 )
        {
          *(_DWORD *)(v93 + 2084) = 4096;
          v1361 = 4096;
        }
        if ( v1358 == *(_QWORD *)(v93 + 1504) || (v2921 = 0, v1358 == *(_QWORD *)(v93 + 1512)) )
          v2921 = 1;
        v1362 = (_DWORD *)v107;
        while ( 2 )
        {
          v1363 = v1360[4];
          v1364 = v1360[3];
          if ( v1363 <= v1360[2] )
            v1363 = v1360[2];
          v1365 = (v1363 + v1364 + 4095) & 0xFFFFF000;
          if ( v1361 >= v1365 )
            goto LABEL_2203;
          if ( (v1360[9] & 0x2000000) != 0 )
            goto LABEL_2202;
          v1366 = *v1360;
          if ( *v1360 == 1414090313 )
          {
            if ( v1360[1] == 1195525195 )
              goto LABEL_2202;
            goto LABEL_2253;
          }
          if ( v1366 == 1162297680 )
          {
            v1390 = *((_WORD *)v1360 + 2);
            if ( v1390 == 30839 || v1390 == 29303 || v1390 == 30583 )
              goto LABEL_2202;
          }
          else
          {
LABEL_2253:
            if ( v1366 == 1095914053 && *((_WORD *)v1360 + 2) == 16724 )
              goto LABEL_2202;
          }
          if ( v2606 )
          {
            v1391 = *(char **)(v2606 + 2352);
            *((_QWORD *)&v2689 + 1) = *(_QWORD *)(v2606 + 2360);
            v2690 = *(_OWORD *)(v2606 + 2368);
            *(_QWORD *)&v2689 = v1391;
          }
          else
          {
            v2689 = *(_OWORD *)VfExcludeSections;
            v1391 = VfExcludeSections[0];
            v2690 = *(_OWORD *)off_140C094A8;
          }
          v1392 = 7;
          v1393 = (unsigned __int8 *)v1360;
          while ( 1 )
          {
            *((_QWORD *)&v107 + 1) = *v1393++;
            *(_QWORD *)&v107 = (unsigned __int8)*v1391++;
            if ( *((_QWORD *)&v107 + 1) != (_QWORD)v107 )
              break;
            if ( !--v1392 )
              goto LABEL_2202;
          }
          v1394 = (__int64 *)*((_QWORD *)&v2689 + 1);
          v1395 = 8;
          v1396 = (__int64 *)v1360;
          do
          {
            v1397 = *v1396++;
            v1398 = *v1394++;
            if ( v1397 != v1398 )
              goto LABEL_2269;
            v1395 -= 8;
          }
          while ( v1395 >= 8 );
          if ( !v1395 )
            goto LABEL_2202;
          while ( 1 )
          {
            *((_QWORD *)&v107 + 1) = *(unsigned __int8 *)v1396;
            v1396 = (__int64 *)((char *)v1396 + 1);
            *(_QWORD *)&v107 = *(unsigned __int8 *)v1394;
            v1394 = (__int64 *)((char *)v1394 + 1);
            if ( *((_QWORD *)&v107 + 1) != (_QWORD)v107 )
              break;
            if ( !--v1395 )
              goto LABEL_2202;
          }
LABEL_2269:
          v1399 = (unsigned __int8 *)v2690;
          v1400 = 4;
          v1401 = (unsigned __int8 *)v1360;
          while ( 1 )
          {
            *((_QWORD *)&v107 + 1) = *v1401++;
            *(_QWORD *)&v107 = *v1399++;
            if ( *((_QWORD *)&v107 + 1) != (_QWORD)v107 )
              break;
            if ( !--v1400 )
              goto LABEL_2202;
          }
          v1402 = (unsigned __int8 *)*((_QWORD *)&v2690 + 1);
          v1403 = 6;
          v1404 = (unsigned __int8 *)v1360;
          while ( 1 )
          {
            *((_QWORD *)&v107 + 1) = *v1404++;
            *(_QWORD *)&v107 = *v1402++;
            if ( *((_QWORD *)&v107 + 1) != (_QWORD)v107 )
              break;
            if ( !--v1403 )
              goto LABEL_2202;
          }
          v1405 = v1360[9];
          if ( v1405 < 0 || (v1405 & 0x20000000) == 0 )
          {
LABEL_2202:
            v1361 = v1365;
LABEL_2203:
            v1367 = v2606;
            goto LABEL_2204;
          }
          v1406 = 1;
          if ( v2921 && *v1360 != 778396769 )
            v1406 = *v1360 == 1162297680;
          v1367 = v2606;
          if ( v1361 < v1364 )
            v1361 = v1364;
LABEL_2284:
          v1407 = v1361 + v1358;
          if ( (*(_BYTE *)(v1367 + 2171) & 4) != 0 )
          {
            __asm
            {
              xbegin  $+6
              xend
            }
            ++*(_DWORD *)(v1367 + 2108);
            *(_DWORD *)(v1367 + 2088) += 256;
LABEL_2294:
            v1410 = *(_DWORD *)(v1367 + 2092);
            v1361 += 4096;
            if ( v1361 >= v1365 )
            {
              if ( *(_DWORD *)(v1367 + 2088) >= v1410 )
                goto LABEL_2205;
              v1358 = v2601;
LABEL_2204:
              v1360 += 10;
              if ( v1360 == v1362 )
              {
LABEL_2205:
                v93 = v2602;
                if ( v1360 == v1362 && v1361 >= v1365 )
                {
                  LODWORD(v107) = 0;
                  *(_DWORD *)(v1367 + 2084) = 0;
                  goto LABEL_203;
                }
                *(_DWORD *)(v1367 + 2084) = v1361;
                goto LABEL_238;
              }
              continue;
            }
            if ( *(_DWORD *)(v1367 + 2088) >= v1410 )
              goto LABEL_2205;
            v1358 = v2601;
            goto LABEL_2284;
          }
          break;
        }
        if ( v1406 )
        {
          LODWORD(v107) = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, _QWORD))(v1367 + 1104))(
                            &v2732,
                            v1407,
                            v1367,
                            0LL);
          v1408 = 0LL;
          if ( (v107 & 0x80000000) != 0LL )
          {
            if ( (_DWORD)v107 == -1073741819 )
            {
              v1409 = v2600;
              if ( (v2600[8] & 4) == 0 || (int)v1360[9] < 0 )
              {
                v1367 = v2606;
                if ( *(_DWORD *)(v2606 + 2296) )
                  goto LABEL_2294;
                *(_QWORD *)(v2606 + 2304) = v2606 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v1367 + 2312) = (char *)v1409 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v1367 + 2320) = *v1409;
                *(_QWORD *)(v1367 + 2328) = v1407;
                *(_DWORD *)(v1367 + 2296) = 1;
                __ba(v1367, 0LL);
              }
            }
            v1367 = v2606;
            goto LABEL_2294;
          }
        }
        else
        {
          v2732 = 0LL;
          v2734 = 0;
          v2736 = 4096;
          v2733 = 8 * ((((unsigned __int64)(v1407 & 0xFFF) + 0x1FFF) >> 12) + 6);
          v2735 = v1407 & 0xFFFFFFFFFFFFF000uLL;
          v2737 = v1407 & 0xFFF;
          v2738 = (unsigned __int64)(*(__int64 (__fastcall **)(__int64))(v1367 + 1112))(v1407) >> 12;
        }
        v1411 = v2606;
        ++*(_DWORD *)(v2606 + 2112);
        *(_QWORD *)(v1411 + 2664) = v2735 + v2737;
        *(_QWORD *)(v1411 + 2656) = v2600;
        v1412 = KeGetCurrentIrql();
        __writecr8(2uLL);
        RtlInitMinimalBarrier(v1411 + 2624, **(unsigned int **)(v1411 + 1520), 0LL, v1408);
        v1367 = (*(__int64 (__fastcall **)(ULONG_PTR))(v2606 + 1096))(v2606 + *(unsigned int *)(v2606 + 2036));
        v2606 = v1367;
        __writecr8(v1412);
        if ( v1406 )
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, __int64, _QWORD))(v1367 + 1120))(
            &v2732,
            *((_QWORD *)&v107 + 1),
            v1367,
            0LL);
          v1367 = v2606;
        }
        *(_DWORD *)(v1367 + 2088) += 81920;
        goto LABEL_2294;
      }
      if ( v134 == 29 )
      {
        v879 = (_QWORD *)*((_QWORD *)v121 + 1);
        v880 = (unsigned int)v121[4];
        v881 = v879;
        *(_DWORD *)(v93 + 2088) += v880;
        v882 = (const char *)v879;
        v883 = *(_DWORD *)(v93 + 2068);
        v884 = *(_QWORD *)(v93 + 2072);
        if ( v879 < (_QWORD *)((char *)v879 + v880) )
        {
          do
          {
            _mm_prefetch(v882, 0);
            v882 += 64;
          }
          while ( v882 < (const char *)v879 + v880 );
        }
        v885 = *(_QWORD *)(v93 + 2072);
        v886 = (unsigned int)v880 >> 7;
        *((_QWORD *)&v107 + 1) = 1LL;
        if ( (unsigned int)v880 >> 7 )
        {
          do
          {
            v887 = 8LL;
            do
            {
              v888 = v881[1] ^ __ROL8__(*v881 ^ v885, v883);
              v881 += 2;
              v885 = __ROL8__(v888, v883);
              --v887;
            }
            while ( v887 );
            v107 = (__ROL8__(v884 ^ ((char *)v881 - (char *)v879), 17) ^ v884 ^ (unsigned __int64)((char *)v881
                                                                                                 - (char *)v879))
                 * (unsigned __int128)0x7010008004002001uLL;
            v2755 = *((_QWORD *)&v107 + 1);
            v889 = v107 ^ BYTE8(v107) ^ v883;
            *((_QWORD *)&v107 + 1) = 1LL;
            v883 = v889 & 0x3F;
            if ( !v883 )
              LOBYTE(v883) = 1;
            --v886;
          }
          while ( v886 );
          v93 = v2602;
        }
        v890 = v880 & 0x7F;
        if ( (unsigned int)v890 >= 8 )
        {
          v891 = (unsigned __int64)(unsigned int)v890 >> 3;
          do
          {
            v885 = __ROL8__(*v881++ ^ v885, v883);
            v890 = (unsigned int)(v890 - 8);
            --v891;
          }
          while ( v891 );
        }
        for ( ; (_DWORD)v890; v890 = (unsigned int)(v890 - 1) )
        {
          v892 = *(unsigned __int8 *)v881;
          v881 = (_QWORD *)((char *)v881 + 1);
          v885 = __ROL8__(v892 ^ v885, v883);
        }
        for ( i4 = v885; ; LODWORD(v885) = i4 ^ v885 )
        {
          i4 >>= 31;
          if ( !i4 )
            break;
        }
        v894 = v885 & 0x7FFFFFFF;
        v895 = 0;
        if ( v894 == v121[5] )
          goto LABEL_1397;
        if ( !*v121 )
          v895 = v121[6] != 0;
        v896 = (unsigned int)v121[4];
        *((_QWORD *)&v107 + 1) = *((_QWORD *)v121 + 1);
        if ( v121[4] )
        {
          v890 = 64LL;
          if ( (*(_DWORD *)(v93 + 2452) & 0x40) != 0 )
          {
            v897 = KeGetCurrentIrql();
            __writecr8(2uLL);
            v898 = *((_QWORD *)&v107 + 1) & 0xFFFFFFFFFFFFF000uLL;
            v2605 = (*((_QWORD *)&v107 + 1) + v896 - 1) | 0xFFF;
            v2905 = (*((_QWORD *)&v107 + 1) & 0xFFFFFFFFFFFFF000uLL) - 1;
            while ( 1 )
            {
              v899 = v897;
              while ( 1 )
              {
                LODWORD(v107) = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v93 + 1128))(
                                  v898,
                                  0LL,
                                  v890,
                                  v881);
                if ( (_DWORD)v107 != -1073741267 )
                  break;
                if ( v895 )
                  goto LABEL_1393;
                if ( v897 > 1u )
                  goto LABEL_1391;
                v899 = v897;
                __writecr8(v897);
                KeGetCurrentIrql();
                __writecr8(2uLL);
              }
              if ( (v107 & 0x80000000) != 0LL )
                break;
LABEL_1391:
              v890 = 4096LL;
              v898 += 4096LL;
              v2905 += 4096LL;
              if ( v2905 == v2605 )
              {
                __writecr8(v899);
                v121 = v2600;
LABEL_1397:
                v901 = (__int64 **)*((_QWORD *)v121 + 1);
                v902 = (unsigned int)v121[4] >> 4;
                v2906 = v901;
                if ( v902 )
                {
                  v903 = v2600;
                  v904 = v902;
                  v2601 = v902;
                  do
                  {
                    v905 = (char *)v903;
                    v906 = **v901;
                    v2683 = 0LL;
                    v907 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64, _QWORD *))(v93 + 784))(
                             v906,
                             &v2683,
                             v890,
                             v881);
                    if ( v907 )
                    {
                      do
                      {
                        if ( !(*(__int64 (__fastcall **)(__int64, char *))(v93 + 520))(v907, v2756) )
                        {
                          if ( (*(_DWORD *)(v93 + 2448) & 0x40000000) != 0 )
                          {
                            v908 = *(_QWORD **)(v93 + 2688);
                            v909 = 48;
                            v910 = 6LL;
                            do
                            {
                              v909 -= 8;
                              *v908 = *(_QWORD *)v905;
                              v905 += 8;
                              ++v908;
                              --v910;
                            }
                            while ( v910 );
                            if ( v909 )
                            {
                              do
                              {
                                v911 = *v905++;
                                *(_BYTE *)v908 = v911;
                                v908 = (_QWORD *)((char *)v908 + 1);
                                --v909;
                              }
                              while ( v909 );
                              v93 = v2602;
                            }
                            v905 = *(char **)(v93 + 2688);
                          }
                          *((_QWORD *)v905 + 3) = v907;
                          *((_QWORD *)v905 + 4) = v906;
                          v912 = *(_QWORD *)(v93 + 1416);
                          *(_QWORD *)v912 = v905;
                          *(_DWORD *)(v912 + 16) = 48;
                          v913 = *(_QWORD *)(v93 + 1416);
                          *(_QWORD *)(v913 + 8) = v907;
                          *(_DWORD *)(v913 + 20) = 4096;
                          if ( !*(_DWORD *)(v93 + 2296) )
                          {
                            *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                            *(_QWORD *)(v93 + 2312) = v905 - 0x4C48B4211BBACBEBLL;
                            *(_QWORD *)(v93 + 2320) = *(int *)v905;
                            *(_QWORD *)(v93 + 2328) = 6LL;
                            *(_DWORD *)(v93 + 2296) = 1;
                            __ba(v93, 0LL);
                          }
                        }
                        v907 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v93 + 784))(v906, &v2683);
                      }
                      while ( v907 );
                      v901 = v2906;
                      v904 = v2601;
                      v903 = v2600;
                    }
                    v901 += 2;
                    --v904;
                    v2906 = v901;
                    v2601 = v904;
                  }
                  while ( v904 );
                }
                goto LABEL_238;
              }
            }
LABEL_1393:
            __writecr8(v899);
            v121 = v2600;
          }
        }
        if ( !*(_DWORD *)(v93 + 2296) )
        {
          *(_QWORD *)(*(_QWORD *)(v93 + 1416) + 24LL) = (unsigned int)v121[5] ^ (unsigned __int64)v894;
          v900 = *((_QWORD *)v121 + 1);
          if ( !*(_DWORD *)(v93 + 2296) )
          {
            *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v93 + 2312) = (char *)v121 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v93 + 2320) = *v121;
            *(_QWORD *)(v93 + 2328) = v900;
            *(_DWORD *)(v93 + 2296) = 1;
            __ba(v93, 0LL);
          }
        }
        goto LABEL_1397;
      }
      if ( v134 > 13 )
      {
        if ( v134 == 14 )
        {
          if ( !*(_QWORD *)(v93 + 2432) || (v842 = *(_DWORD *)(v93 + 2452), ((v842 >> 2) & 1) != 0) )
          {
            *(_DWORD *)(v93 + 2084) = 0;
            goto LABEL_202;
          }
          *((_QWORD *)&v107 + 1) = 0LL;
          if ( *(_DWORD *)(v93 + 2084) )
          {
            if ( ((v842 >> 5) & 1) != 0 )
              goto LABEL_1300;
          }
          else
          {
            *(_DWORD *)(v93 + 2452) = v842 ^ ((unsigned __int8)v842 ^ (unsigned __int8)(8 * v842)) & 0x20;
          }
LABEL_1301:
          v843 = (_QWORD *)*((_QWORD *)v121 + 1);
          v844 = (unsigned int)v121[4];
          v845 = v843;
          *(_DWORD *)(v93 + 2088) += v844;
          v846 = (const char *)v843;
          v847 = *(_DWORD *)(v93 + 2068);
          v848 = *(_QWORD *)(v93 + 2072);
          if ( v843 < (_QWORD *)((char *)v843 + v844) )
          {
            do
            {
              _mm_prefetch(v846, 0);
              v846 += 64;
            }
            while ( v846 < (const char *)v843 + v844 );
          }
          v849 = *(_QWORD *)(v93 + 2072);
          v850 = (unsigned int)v844 >> 7;
          if ( (unsigned int)v844 >> 7 )
          {
            do
            {
              v851 = 8LL;
              do
              {
                v852 = v845[1] ^ __ROL8__(*v845 ^ v849, v847);
                v845 += 2;
                v849 = __ROL8__(v852, v847);
                --v851;
              }
              while ( v851 );
              v107 = (__ROL8__(v848 ^ ((char *)v845 - (char *)v843), 17) ^ v848 ^ (unsigned __int64)((char *)v845 - (char *)v843))
                   * (unsigned __int128)0x7010008004002001uLL;
              v2754 = *((_QWORD *)&v107 + 1);
              v853 = v107 ^ BYTE8(v107) ^ v847;
              *((_QWORD *)&v107 + 1) = 0xFFFFFFFFLL;
              v847 = v853 & 0x3F;
              if ( !v847 )
                LOBYTE(v847) = 1;
              --v850;
            }
            while ( v850 );
            v93 = v2602;
          }
          else
          {
            *((_QWORD *)&v107 + 1) = 0xFFFFFFFFLL;
          }
          v854 = v844 & 0x7F;
          if ( v854 >= 8 )
          {
            v855 = (unsigned __int64)v854 >> 3;
            do
            {
              v849 = __ROL8__(*v845++ ^ v849, v847);
              v854 -= 8;
              --v855;
            }
            while ( v855 );
          }
          for ( ; v854; --v854 )
          {
            v856 = *(unsigned __int8 *)v845;
            v845 = (_QWORD *)((char *)v845 + 1);
            v849 = __ROL8__(v856 ^ v849, v847);
          }
          for ( i5 = v849 >> 31; i5; i5 >>= 31 )
            LODWORD(v849) = i5 ^ v849;
          v858 = v849 & 0x7FFFFFFF;
          if ( v858 != v121[5] )
          {
            _InterlockedOr(v2598, 0);
            if ( (v121[6] & 1) == 0 || !**(_BYTE **)(v93 + 1400) )
            {
              v859 = (unsigned int)v121[4];
              *((_QWORD *)&v107 + 1) = *((_QWORD *)v121 + 1);
              if ( v121[4] && (v860 = 64LL, (*(_DWORD *)(v93 + 2452) & 0x40) != 0) )
              {
                v861 = KeGetCurrentIrql();
                __writecr8(2uLL);
                v862 = *((_QWORD *)&v107 + 1) & 0xFFFFFFFFFFFFF000uLL;
                v2904 = (*((_QWORD *)&v107 + 1) + v859 - 1) | 0xFFF;
                v863 = (*((_QWORD *)&v107 + 1) & 0xFFFFFFFFFFFFF000uLL) - 1;
                while ( 2 )
                {
                  v864 = v861;
                  while ( 1 )
                  {
                    LODWORD(v107) = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v93 + 1128))(
                                      v862,
                                      0LL,
                                      v860,
                                      v845);
                    if ( (_DWORD)v107 != -1073741267 )
                      break;
                    if ( v861 > 1u )
                      goto LABEL_1330;
                    v864 = v861;
                    __writecr8(v861);
                    KeGetCurrentIrql();
                    __writecr8(2uLL);
                  }
                  if ( (v107 & 0x80000000) != 0LL )
                  {
                    __writecr8(v864);
                    v121 = v2600;
                    goto LABEL_1333;
                  }
LABEL_1330:
                  v860 = 4096LL;
                  v862 += 4096LL;
                  v863 += 4096LL;
                  if ( v863 != v2904 )
                    continue;
                  break;
                }
                __writecr8(v864);
                v121 = v2600;
              }
              else
              {
LABEL_1333:
                if ( !*(_DWORD *)(v93 + 2296) )
                {
                  *(_QWORD *)(*(_QWORD *)(v93 + 1416) + 24LL) = (unsigned int)v121[5] ^ (unsigned __int64)v858;
                  v865 = *((_QWORD *)v121 + 1);
                  if ( !*(_DWORD *)(v93 + 2296) )
                  {
                    *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v93 + 2312) = (char *)v121 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v93 + 2320) = *v121;
                    *(_QWORD *)(v93 + 2328) = v865;
                    *(_DWORD *)(v93 + 2296) = 1;
                    __ba(v93, 0LL);
                  }
                }
              }
            }
          }
          LODWORD(v107) = 0;
          if ( (*(_DWORD *)(v93 + 2448) & 0x40000000) == 0 )
            goto LABEL_203;
          v866 = (unsigned int)v121[4];
          if ( !(_DWORD)v866 )
            goto LABEL_203;
          sub_1403EB41C(v93, *((_QWORD *)v121 + 1), v866, v2844);
          v867 = 16;
          v868 = (__int64 *)(v121 + 7);
          v869 = v2844;
          while ( 1 )
          {
            v870 = *(_QWORD *)v869;
            v869 += 8;
            v871 = *v868++;
            if ( v870 != v871 )
              break;
            v867 -= 8;
            if ( v867 < 8 )
            {
              if ( !v867 )
                goto LABEL_1360;
              while ( 1 )
              {
                *((_QWORD *)&v107 + 1) = *v869++;
                *(_QWORD *)&v107 = *(unsigned __int8 *)v868;
                v868 = (__int64 *)((char *)v868 + 1);
                if ( *((_QWORD *)&v107 + 1) != (_QWORD)v107 )
                  goto LABEL_1345;
                if ( !--v867 )
                  goto LABEL_1360;
              }
            }
          }
LABEL_1345:
          _InterlockedOr(v2598, 0);
          if ( (v121[6] & 1) == 0 || !**(_BYTE **)(v93 + 1400) )
          {
            *((_QWORD *)&v107 + 1) = (unsigned int)v121[4];
            v872 = *((_QWORD *)v121 + 1);
            if ( v121[4] && (v873 = 64LL, (*(_DWORD *)(v93 + 2452) & 0x40) != 0) )
            {
              v874 = KeGetCurrentIrql();
              __writecr8(2uLL);
              v875 = v872 & 0xFFFFFFFFFFFFF000uLL;
              v876 = (v872 + *((_QWORD *)&v107 + 1) - 1LL) | 0xFFF;
              v877 = (v872 & 0xFFFFFFFFFFFFF000uLL) - 1;
              while ( 2 )
              {
                v878 = v874;
                while ( 1 )
                {
                  LODWORD(v107) = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, __int64 *))(v93 + 1128))(
                                    v875,
                                    0LL,
                                    v873,
                                    v868);
                  if ( (_DWORD)v107 != -1073741267 )
                    break;
                  if ( v874 > 1u )
                    goto LABEL_1355;
                  v878 = v874;
                  __writecr8(v874);
                  KeGetCurrentIrql();
                  __writecr8(2uLL);
                }
                if ( (v107 & 0x80000000) != 0LL )
                {
                  __writecr8(v878);
                  v121 = v2600;
                  v872 = *((_QWORD *)v2600 + 1);
                  goto LABEL_1358;
                }
LABEL_1355:
                v873 = 4096LL;
                v875 += 4096LL;
                v877 += 4096LL;
                if ( v877 != v876 )
                  continue;
                break;
              }
              __writecr8(v878);
            }
            else
            {
LABEL_1358:
              if ( !*(_DWORD *)(v93 + 2296) )
              {
                *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v93 + 2312) = (char *)v121 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v93 + 2320) = *v121;
                *(_QWORD *)(v93 + 2328) = v872;
                *(_DWORD *)(v93 + 2296) = 1;
                __ba(v93, 0LL);
              }
            }
          }
LABEL_1360:
          v251 = 16 * v2600[4];
LABEL_400:
          *(_DWORD *)(v93 + 2088) += v251;
          goto LABEL_238;
        }
        if ( v134 == 15 )
        {
          if ( *(_DWORD *)(v93 + 2392) == 11 )
          {
            *(_DWORD *)(v93 + 2088) += 256;
            v836 = *(_QWORD *)(v93 + 1408);
            v837 = (*(__int64 (__fastcall **)(__int64, __int64))(v93 + 728))(v836, 6LL);
            LODWORD(v107) = 0;
            if ( v837 )
            {
              v838 = (*(__int64 (__fastcall **)(__int64))(v93 + 736))(v837);
              v839 = 0LL;
              v840 = *((_QWORD *)v121 + 3);
              if ( v840 )
              {
                if ( v840 != v838 && !*(_DWORD *)(v93 + 2296) )
                {
                  *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v93 + 2312) = (char *)v121 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v93 + 2320) = *v121;
                  *(_QWORD *)(v93 + 2328) = v838;
                  *(_DWORD *)(v93 + 2296) = 1;
                  __ba(v93, 0LL);
                }
              }
              else
              {
                v841 = *(_QWORD *)(v93 + 2424);
                if ( (!*(_DWORD *)(v93 + 2420) || v838 < v841 || v838 > v841 + *(unsigned int *)(v93 + 2420) - 1LL)
                  && !*(_DWORD *)(v93 + 2296) )
                {
                  *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v93 + 2312) = (char *)v121 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v93 + 2320) = *v121;
                  *(_QWORD *)(v93 + 2328) = v838;
                  *(_DWORD *)(v93 + 2296) = 1;
                  __ba(v93, 0LL);
                }
                *((_QWORD *)v121 + 3) = v838;
              }
              (*(void (__fastcall **)(__int64, __int64, __int64))(v93 + 744))(v836, v837, v839);
              goto LABEL_202;
            }
            goto LABEL_203;
          }
          goto LABEL_238;
        }
        if ( v134 != 21 )
        {
          if ( v134 != 24 )
          {
            if ( v134 != 25 )
            {
              if ( v134 == 26 )
              {
                if ( (*(_DWORD *)(v93 + 2096) & 1) != 0 )
                  goto LABEL_202;
                v417 = *(_QWORD *)(v93 + 1440);
                v418 = *(_QWORD *)(v93 + 1344);
                v419 = 0;
                v2899 = 0;
                v2601 = *(_QWORD *)(v93 + 1448);
                v420 = *(void (__fastcall **)(_QWORD, __int64))(v93 + 376);
                v2603 = v417;
                v420((unsigned int)(v134 - 26), 6LL);
                if ( (*(_DWORD *)(v93 + 2448) & 0x40000000) != 0 || (v421 = *(_DWORD *)(v93 + 2384), v421 >= 7) )
                {
                  (*(void (__fastcall **)(_QWORD, _QWORD))(v93 + 296))(*(_QWORD *)(v93 + 2560), 0LL);
                  v422 = 0x80;
                }
                else
                {
                  v422 = 1 << v421;
                }
                (*(void (__fastcall **)(__int64, _QWORD))(v93 + 312))(v418, 0LL);
                v423 = *(volatile signed __int8 ***)(v93 + 1304);
                v424 = *v423;
                if ( *v423 != (volatile signed __int8 *)v423 )
                {
                  do
                  {
                    _InterlockedOr8(&v424[*(_QWORD *)(v93 + 1728) - *(_QWORD *)(v93 + 1752)], v422);
                    v424 = *(volatile signed __int8 **)v424;
                    ++v419;
                  }
                  while ( v424 != (volatile signed __int8 *)v423 );
                  v2899 = v419;
                }
                (*(void (__fastcall **)(__int64, _QWORD))(v93 + 312))(v417, 0LL);
                v425 = *(_QWORD ***)(v93 + 1432);
                v426 = *v425;
                if ( *v425 != v425 )
                {
                  v427 = v2601;
                  v428 = v2600;
                  do
                  {
                    v429 = (char *)v426 - *(_QWORD *)(v93 + 1864);
                    if ( v429 != (char *)v427 )
                    {
                      v430 = *(_QWORD *)(v93 + 1728);
                      v431 = *(_QWORD *)&v429[*(_QWORD *)(v93 + 1856)];
                      if ( (v422 & *(_BYTE *)(v431 + v430)) == 0
                        && (*(_DWORD *)(v431 + *(_QWORD *)(v93 + 1736)) & *(_DWORD *)(v93 + 1760)) != 0
                        && !*(_DWORD *)(v93 + 2296) )
                      {
                        *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(v93 + 2312) = (char *)v428 - 0x4C48B4211BBACBEBLL;
                        *(_QWORD *)(v93 + 2320) = *v428;
                        *(_QWORD *)(v93 + 2328) = v431;
                        *(_DWORD *)(v93 + 2296) = 1;
                        __ba(v93, 0LL);
                        v430 = *(_QWORD *)(v93 + 1728);
                      }
                      _InterlockedAnd8((volatile signed __int8 *)(v431 + v430), ~v422);
                      v427 = v2601;
                    }
                    v426 = (_QWORD *)*v426;
                  }
                  while ( v426 != v425 );
                  v419 = v2899;
                }
                (*(void (__fastcall **)(__int64, _QWORD))(v93 + 320))(v2603, 0LL);
                if ( v422 == 0x80 )
                  (*(void (__fastcall **)(_QWORD, _QWORD))(v93 + 304))(*(_QWORD *)(v93 + 2560), 0LL);
                (*(void (__fastcall **)(_QWORD, _QWORD))(v93 + 320))(*(_QWORD *)(v93 + 1344), 0LL);
                (*(void (**)(void))(v93 + 384))();
                *(_DWORD *)(v93 + 2088) += v419 << 8;
                goto LABEL_238;
              }
              if ( v134 == 27 )
              {
                if ( (*(_DWORD *)(v93 + 2096) & 1) == 0 )
                  goto LABEL_202;
                v395 = *(_QWORD *)(v93 + 1440);
                v396 = *(_QWORD **)(v93 + 1448);
                v397 = *(_QWORD *)(v93 + 1344);
                v2604 = 0;
                v398 = *(void (__fastcall **)(_QWORD, __int64))(v93 + 376);
                v2607 = v395;
                v2601 = (__int64)v396;
                v398((unsigned int)(v134 - 27), 6LL);
                if ( (*(_DWORD *)(v93 + 2448) & 0x40000000) != 0 || (v399 = *(_DWORD *)(v93 + 2384), v399 >= 7) )
                {
                  (*(void (__fastcall **)(_QWORD, _QWORD))(v93 + 296))(*(_QWORD *)(v93 + 2560), 0LL);
                  LOBYTE(v110) = 0x80;
                }
                else
                {
                  v110 = 1;
                  LOBYTE(v110) = 1 << v399;
                }
                v400 = *(void (__fastcall **)(__int64, _QWORD))(v93 + 312);
                LODWORD(v2609) = v110;
                v400(v397, 0LL);
                (*(void (__fastcall **)(__int64, _QWORD))(v93 + 312))(v395, 0LL);
                v401 = *(_QWORD ***)(v93 + 1432);
                v402 = 0LL;
                v2603 = 0LL;
                v403 = *v401;
                if ( *v401 != v401 )
                {
                  do
                  {
                    if ( v403 - 3 != v396 )
                    {
                      v404 = *(_QWORD *)((char *)v403 + *(_QWORD *)(v93 + 1856) - 24);
                      if ( (*(_DWORD *)(v404 + *(_QWORD *)(v93 + 1736)) & *(_DWORD *)(v93 + 1760)) == 0 )
                      {
                        v405 = *(_QWORD *)((char *)v403 + *(_QWORD *)(v93 + 1856) - 24);
                        if ( v402 )
                          v405 = 1LL;
                        v402 = v405;
                      }
                      _InterlockedOr8((volatile signed __int8 *)(v404 + *(_QWORD *)(v93 + 1728)), v110);
                    }
                    v403 = (_QWORD *)*v403;
                  }
                  while ( v403 != v401 );
                  v2603 = v402;
                }
                v406 = *(_QWORD ***)(v93 + 1304);
                v407 = *v406;
                if ( *v406 != v406 )
                {
                  v408 = v2601;
                  v409 = (unsigned __int8)v110;
                  v410 = ~(_BYTE)v110;
                  v110 = v2604;
                  v2898 = v409;
                  do
                  {
                    v411 = (char *)v407 - *(_QWORD *)(v93 + 1752);
                    v412 = *(_QWORD *)(v93 + 1728);
                    if ( (v411[v412] & v409) == 0 )
                    {
                      v413 = *(_QWORD *)&v411[*(_QWORD *)(v93 + 1744)];
                      if ( v413 && v413 != v408 && !*(_DWORD *)(v93 + 2296) )
                      {
                        v414 = v2600;
                        *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(v93 + 2312) = (char *)v414 - 0x4C48B4211BBACBEBLL;
                        *(_QWORD *)(v93 + 2320) = *v414;
                        *(_QWORD *)(v93 + 2328) = v411;
                        *(_DWORD *)(v93 + 2296) = 1;
                        __ba(v93, 0LL);
                        v412 = *(_QWORD *)(v93 + 1728);
                      }
                      v409 = v2898;
                    }
                    _InterlockedAnd8(&v411[v412], v410);
                    v407 = (_QWORD *)*v407;
                    ++v110;
                  }
                  while ( v407 != v406 );
                  v396 = (_QWORD *)v2601;
                  v2604 = v110;
                  LOBYTE(v110) = v2609;
                }
                if ( v2603 )
                {
                  if ( v2603 == 1 )
                  {
                    v415 = *(_QWORD ***)(v93 + 1432);
                    for ( i6 = *v415; i6 != v415; i6 = (_QWORD *)*i6 )
                    {
                      if ( i6 - 3 != v396 )
                        _InterlockedAnd8(
                          (volatile signed __int8 *)(*(_QWORD *)((char *)i6 + *(_QWORD *)(v93 + 1856) - 24)
                                                   + *(_QWORD *)(v93 + 1728)),
                          ~(_BYTE)v110);
                    }
                  }
                  else
                  {
                    _InterlockedAnd8((volatile signed __int8 *)(v2603 + *(_QWORD *)(v93 + 1728)), ~(_BYTE)v110);
                  }
                }
                (*(void (__fastcall **)(__int64, _QWORD))(v93 + 320))(v2607, 0LL);
                if ( (_BYTE)v110 == 0x80 )
                  (*(void (__fastcall **)(_QWORD, _QWORD))(v93 + 304))(*(_QWORD *)(v93 + 2560), 0LL);
                (*(void (__fastcall **)(_QWORD, _QWORD))(v93 + 320))(*(_QWORD *)(v93 + 1344), 0LL);
                (*(void (**)(void))(v93 + 384))();
                LODWORD(v107) = v2604 << 8;
LABEL_364:
                *(_DWORD *)(v93 + 2088) += v107;
                goto LABEL_202;
              }
              if ( v134 != 28 )
                goto LABEL_1852;
              v310 = (unsigned int)v121[4];
              if ( (_DWORD)v310 )
              {
                v354 = (_QWORD *)*((_QWORD *)v121 + 1);
                *(_DWORD *)(v93 + 2088) += v310;
                v355 = v354;
                v356 = *(_DWORD *)(v93 + 2068);
                v357 = (const char *)v354;
                v358 = *(_QWORD *)(v93 + 2072);
                if ( v354 < (_QWORD *)((char *)v354 + v310) )
                {
                  do
                  {
                    _mm_prefetch(v357, 0);
                    v357 += 64;
                  }
                  while ( v357 < (const char *)v354 + v310 );
                }
                v359 = *(_QWORD *)(v93 + 2072);
                v360 = (unsigned int)v310 >> 7;
                if ( (unsigned int)v310 >> 7 )
                {
                  do
                  {
                    v361 = 8LL;
                    do
                    {
                      v362 = v355[1] ^ __ROL8__(*v355 ^ v359, v356);
                      v355 += 2;
                      v359 = __ROL8__(v362, v356);
                      --v361;
                    }
                    while ( v361 );
                    v363 = (__ROL8__(v358 ^ ((char *)v355 - (char *)v354), 17) ^ v358 ^ (unsigned __int64)((char *)v355 - (char *)v354))
                         * (unsigned __int128)0x7010008004002001uLL;
                    v2839 = *((_QWORD *)&v363 + 1);
                    v356 = ((unsigned __int8)v363 ^ (unsigned __int8)(BYTE8(v363) ^ v356)) & 0x3F;
                    if ( !v356 )
                      LOBYTE(v356) = 1;
                    --v360;
                  }
                  while ( v360 );
                  v93 = v2602;
                }
                v364 = v310 & 0x7F;
                if ( v364 >= 8 )
                {
                  v365 = (unsigned __int64)v364 >> 3;
                  do
                  {
                    v359 = __ROL8__(*v355++ ^ v359, v356);
                    v364 -= 8;
                    --v365;
                  }
                  while ( v365 );
                }
                for ( ; v364; --v364 )
                {
                  v366 = *(unsigned __int8 *)v355;
                  v355 = (_QWORD *)((char *)v355 + 1);
                  v359 = __ROL8__(v366 ^ v359, v356);
                }
                for ( i7 = v359; ; LODWORD(v359) = i7 ^ v359 )
                {
                  i7 >>= 31;
                  if ( !i7 )
                    break;
                }
                v368 = v359 & 0x7FFFFFFF;
                v369 = 0;
                if ( v368 != v121[5] )
                {
                  if ( !*v121 )
                    v369 = v121[6] != 0;
                  v370 = (unsigned int)v121[4];
                  v371 = *((_QWORD *)v121 + 1);
                  if ( v121[4] )
                  {
                    v372 = 64LL;
                    if ( (*(_DWORD *)(v93 + 2452) & 0x40) != 0 )
                    {
                      v373 = KeGetCurrentIrql();
                      __writecr8(2uLL);
                      v374 = v371 & 0xFFFFFFFFFFFFF000uLL;
                      v2601 = (v371 + v370 - 1) | 0xFFF;
                      v2897 = (v371 & 0xFFFFFFFFFFFFF000uLL) - 1;
                      while ( 1 )
                      {
                        v375 = v373;
                        while ( 1 )
                        {
                          v376 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v93 + 1128))(
                                   v374,
                                   0LL,
                                   v372,
                                   v355);
                          if ( v376 != -1073741267 )
                            break;
                          if ( v369 )
                            goto LABEL_623;
                          if ( v373 > 1u )
                            goto LABEL_610;
                          v375 = v373;
                          __writecr8(v373);
                          KeGetCurrentIrql();
                          __writecr8(2uLL);
                        }
                        if ( v376 < 0 )
                          break;
LABEL_610:
                        v374 += 4096LL;
                        v2897 += 4096LL;
                        if ( v2897 == v2601 )
                        {
                          __writecr8(v375);
                          v121 = v2600;
                          goto LABEL_612;
                        }
                      }
LABEL_623:
                      __writecr8(v375);
                      v121 = v2600;
                    }
                  }
                  if ( !*(_DWORD *)(v93 + 2296) )
                  {
                    *(_QWORD *)(*(_QWORD *)(v93 + 1416) + 24LL) = v368 ^ (unsigned __int64)(unsigned int)v121[5];
                    v389 = *((_QWORD *)v121 + 1);
                    if ( !*(_DWORD *)(v93 + 2296) )
                    {
                      *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v93 + 2312) = (char *)v121 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v93 + 2320) = *v121;
                      *(_QWORD *)(v93 + 2328) = v389;
                      *(_DWORD *)(v93 + 2296) = 1;
                      __ba(v93, 0LL);
                    }
                  }
                }
LABEL_612:
                v2637 = *((_QWORD *)v121 + 1) - 112LL;
                v377 = *(const char **)(v2637 + 80);
                v378 = 0;
                if ( v377 )
                  v378 = *(_DWORD *)v377;
                *(_DWORD *)(v93 + 2088) += v378;
                v379 = v377;
                v380 = *(_DWORD *)(v93 + 2068);
                v381 = v377;
                v382 = *(_QWORD *)(v93 + 2072);
                v383 = &v377[v378];
                if ( v377 < v383 )
                {
                  do
                  {
                    _mm_prefetch(v381, 0);
                    v381 += 64;
                  }
                  while ( v381 < v383 );
                }
                v384 = *(_QWORD *)(v93 + 2072);
                v385 = v378 >> 7;
                if ( v378 >> 7 )
                {
                  do
                  {
                    v386 = 8LL;
                    do
                    {
                      v387 = *((_QWORD *)v379 + 1) ^ __ROL8__(*(_QWORD *)v379 ^ v384, v380);
                      v379 += 16;
                      v384 = __ROL8__(v387, v380);
                      --v386;
                    }
                    while ( v386 );
                    v107 = (__ROL8__(v382 ^ (v379 - v377), 17) ^ v382 ^ (unsigned __int64)(v379 - v377))
                         * (unsigned __int128)0x7010008004002001uLL;
                    v2854 = *((_QWORD *)&v107 + 1);
                    v388 = v107 ^ BYTE8(v107) ^ v380;
                    *((_QWORD *)&v107 + 1) = 0xFFFFFFFFLL;
                    v380 = v388 & 0x3F;
                    if ( !v380 )
                      LOBYTE(v380) = 1;
                    --v385;
                  }
                  while ( v385 );
                  v93 = v2602;
                }
                else
                {
                  *((_QWORD *)&v107 + 1) = 0xFFFFFFFFLL;
                }
                v390 = v378 & 0x7F;
                if ( v390 >= 8 )
                {
                  v391 = (unsigned __int64)v390 >> 3;
                  do
                  {
                    v384 = __ROL8__(*(_QWORD *)v379 ^ v384, v380);
                    v379 += 8;
                    v390 -= 8;
                    --v391;
                  }
                  while ( v391 );
                }
                for ( ; v390; --v390 )
                {
                  v392 = *(unsigned __int8 *)v379++;
                  v384 = __ROL8__(v392 ^ v384, v380);
                }
                for ( i8 = v384 >> 31; i8; i8 >>= 31 )
                  LODWORD(v384) = i8 ^ v384;
                *(_QWORD *)&v107 = (unsigned int)v121[11];
                v394 = v384 & 0x7FFFFFFF;
                if ( v394 == (_DWORD)v107 || *(_DWORD *)(v93 + 2296) )
                  goto LABEL_202;
                *(_QWORD *)(*(_QWORD *)(v93 + 1416) + 24LL) = v107 ^ v394;
                LODWORD(v107) = 0;
                if ( !*(_DWORD *)(v93 + 2296) )
                {
                  *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v93 + 2312) = (char *)v121 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v93 + 2320) = *v121;
                  *(_QWORD *)(v93 + 2328) = v377;
                  goto LABEL_247;
                }
                goto LABEL_203;
              }
              v2705 = v121 + 12;
              v2704[0] = *((_WORD *)v121 + 20);
              v2704[1] = v2704[0];
              LOBYTE(v2599) = 0;
              if ( (*(int (__fastcall **)(_WORD *, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, __int64 *))(v93 + 488))(
                     v2704,
                     0LL,
                     0LL,
                     0LL,
                     *(_QWORD *)(v93 + 1288),
                     v2599,
                     0LL,
                     &v2637) < 0 )
                goto LABEL_238;
              if ( (*(_DWORD *)(v2637 + 16) & 0x10) == 0 )
              {
                v311 = v2637;
                goto LABEL_505;
              }
              (*(void (__fastcall **)(_QWORD, char *))(v93 + 512))(*(_QWORD *)(v93 + 488), v2875);
              if ( v2876 )
              {
                v312 = *(__int64 (**)(void))(v93 + 504);
                v108 = v2876;
                v2624 = v2876;
                v313 = v312();
                if ( v313 )
                {
                  v110 = *(_DWORD *)(v313 + 80);
                  v2610 = v110;
                }
              }
              (*(void (__fastcall **)(_QWORD, char *))(v93 + 512))(*((_QWORD *)v121 + 3), v2877);
              if ( v2878
                && (v314 = *(__int64 (**)(void))(v93 + 504),
                    v109 = v2878,
                    v2613 = v2878,
                    *(_QWORD *)&v107 = v314(),
                    (_QWORD)v107) )
              {
                v315 = *(_DWORD *)(v107 + 80);
                v2630 = v315;
              }
              else
              {
                v315 = v2630;
              }
              if ( !_bittest((const signed __int32 *)(v93 + 2448), 0x1Eu) )
              {
                *((_QWORD *)v121 + 1) = v2637 + 112;
                v121[4] = 224;
              }
              v311 = v2637;
              v316 = v110;
              BYTE8(v107) = 0;
              v2896 = v110;
              while ( 1 )
              {
                v317 = *(_QWORD *)(v2637 + 8LL * BYTE8(v107) + 112);
                if ( (!v110 || v317 < (unsigned __int64)v108 || v317 > (unsigned __int64)v108 + v110 - 1)
                  && (!v315 || v317 < v109 || v317 > v315 + v109 - 1) )
                {
                  break;
                }
                if ( ++BYTE8(v107) >= 0x1Cu )
                {
                  if ( !_bittest((const signed __int32 *)(v93 + 2448), 0x1Eu) )
                  {
                    v318 = (_QWORD *)*((_QWORD *)v121 + 1);
                    v319 = (unsigned int)v121[4];
                    v320 = v318;
                    *(_DWORD *)(v93 + 2088) += v319;
                    v321 = (const char *)v318;
                    v322 = *(_DWORD *)(v93 + 2068);
                    v323 = *(_QWORD *)(v93 + 2072);
                    if ( v318 < (_QWORD *)((char *)v318 + v319) )
                    {
                      do
                      {
                        _mm_prefetch(v321, 0);
                        v321 += 64;
                      }
                      while ( v321 < (const char *)v318 + v319 );
                    }
                    v324 = *(_QWORD *)(v93 + 2072);
                    v325 = (unsigned int)v319 >> 7;
                    *((_QWORD *)&v107 + 1) = 1LL;
                    if ( (unsigned int)v319 >> 7 )
                    {
                      do
                      {
                        v326 = 8LL;
                        do
                        {
                          v327 = v320[1] ^ __ROL8__(*v320 ^ v324, v322);
                          v320 += 2;
                          v324 = __ROL8__(v327, v322);
                          --v326;
                        }
                        while ( v326 );
                        v107 = (__ROL8__(v323 ^ ((char *)v320 - (char *)v318), 17) ^ v323 ^ (unsigned __int64)((char *)v320 - (char *)v318))
                             * (unsigned __int128)0x7010008004002001uLL;
                        v2837 = *((_QWORD *)&v107 + 1);
                        v328 = v107 ^ BYTE8(v107) ^ v322;
                        *((_QWORD *)&v107 + 1) = 1LL;
                        v322 = v328 & 0x3F;
                        if ( !v322 )
                          LOBYTE(v322) = 1;
                        --v325;
                      }
                      while ( v325 );
                      v93 = v2602;
                      v316 = v2896;
                    }
                    v329 = v319 & 0x7F;
                    if ( v329 >= 8 )
                    {
                      v330 = (unsigned __int64)v329 >> 3;
                      do
                      {
                        v324 = __ROL8__(*v320++ ^ v324, v322);
                        v329 -= 8;
                        --v330;
                      }
                      while ( v330 );
                    }
                    if ( v329 )
                    {
                      do
                      {
                        v331 = *(unsigned __int8 *)v320;
                        v320 = (_QWORD *)((char *)v320 + 1);
                        v324 = __ROL8__(v331 ^ v324, v322);
                        --v329;
                      }
                      while ( v329 );
                      v93 = v2602;
                    }
                    for ( i9 = v324; ; LODWORD(v324) = i9 ^ v324 )
                    {
                      i9 >>= 31;
                      if ( !i9 )
                        break;
                    }
                    v121[5] = v324 & 0x7FFFFFFF;
                    v333 = *(const char **)(v2637 + 80);
                    v334 = 0;
                    if ( !v333
                      || (v334 = *(_DWORD *)v333, BYTE8(v107) = 0,
                                                  (v335 = (unsigned int)(*(_DWORD *)v333 - 8) >> 3) == 0) )
                    {
LABEL_552:
                      *(_DWORD *)(v93 + 2088) += v334;
                      v337 = v333;
                      v338 = *(_DWORD *)(v93 + 2068);
                      v339 = v333;
                      v340 = *(_QWORD *)(v93 + 2072);
                      v341 = &v333[v334];
                      if ( v333 < v341 )
                      {
                        do
                        {
                          _mm_prefetch(v339, 0);
                          v339 += 64;
                        }
                        while ( v339 < v341 );
                      }
                      v342 = *(_QWORD *)(v93 + 2072);
                      v343 = v334 >> 7;
                      if ( v334 >> 7 )
                      {
                        do
                        {
                          v344 = 8LL;
                          do
                          {
                            v345 = *((_QWORD *)v337 + 1) ^ __ROL8__(*(_QWORD *)v337 ^ v342, v338);
                            v337 += 16;
                            v342 = __ROL8__(v345, v338);
                            --v344;
                          }
                          while ( v344 );
                          v107 = (__ROL8__(v340 ^ (v337 - v333), 17) ^ v340 ^ (unsigned __int64)(v337 - v333))
                               * (unsigned __int128)0x7010008004002001uLL;
                          v2838 = *((_QWORD *)&v107 + 1);
                          v346 = v107 ^ BYTE8(v107) ^ v338;
                          *((_QWORD *)&v107 + 1) = 0xFFFFFFFFLL;
                          v338 = v346 & 0x3F;
                          if ( !v338 )
                            LOBYTE(v338) = 1;
                          --v343;
                        }
                        while ( v343 );
                        v93 = v2602;
                      }
                      else
                      {
                        *((_QWORD *)&v107 + 1) = 0xFFFFFFFFLL;
                      }
                      v347 = v334 & 0x7F;
                      if ( v347 >= 8 )
                      {
                        v348 = (unsigned __int64)v347 >> 3;
                        do
                        {
                          v342 = __ROL8__(*(_QWORD *)v337 ^ v342, v338);
                          v337 += 8;
                          v347 -= 8;
                          --v348;
                        }
                        while ( v348 );
                      }
                      for ( ; v347; --v347 )
                      {
                        v349 = *(unsigned __int8 *)v337++;
                        v342 = __ROL8__(v349 ^ v342, v338);
                      }
                      for ( i10 = v342; ; LODWORD(v342) = i10 ^ v342 )
                      {
                        i10 >>= 31;
                        if ( !i10 )
                          break;
                      }
                      v121[11] = v342 & 0x7FFFFFFF;
                      goto LABEL_202;
                    }
                    while ( 1 )
                    {
                      v336 = *(_QWORD *)&v333[8 * BYTE8(v107) + 8];
                      if ( v336
                        && (!v316 || v336 < (unsigned __int64)v2624 || v336 > (unsigned __int64)v2624 + v316 - 1)
                        && (!v2630 || v336 < v2613 || v336 > v2630 + v2613 - 1) )
                      {
                        break;
                      }
                      ++BYTE8(v107);
                      if ( BYTE8(v107) >= v335 )
                        goto LABEL_552;
                    }
                    *((_QWORD *)v121 + 4) = v336;
                    *(_QWORD *)&v107 = *(_QWORD *)(v93 + 1416);
                    *(_QWORD *)v107 = v121;
                    *(_DWORD *)(v107 + 16) = 48;
                    LODWORD(v107) = 0;
                    if ( !*(_DWORD *)(v93 + 2296) )
                    {
                      *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v93 + 2312) = (char *)v121 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v93 + 2320) = *v121;
                      *(_QWORD *)(v93 + 2328) = v333;
                      goto LABEL_247;
                    }
                    goto LABEL_203;
                  }
LABEL_505:
                  (*(void (__fastcall **)(__int64))(v93 + 480))(v311);
LABEL_238:
                  LODWORD(v107) = 0;
                  goto LABEL_203;
                }
              }
              if ( _bittest((const signed __int32 *)(v93 + 2448), 0x1Eu) )
              {
                v351 = *(_QWORD **)(v93 + 2688);
                DWORD2(v107) = 48;
                v352 = 6LL;
                do
                {
                  *((_QWORD *)&v107 + 1) = (unsigned int)(DWORD2(v107) - 8);
                  *v351 = *(_QWORD *)v121;
                  v121 += 2;
                  ++v351;
                  --v352;
                }
                while ( v352 );
                if ( DWORD2(v107) )
                {
                  do
                  {
                    LOBYTE(v107) = *(_BYTE *)v121;
                    v121 = (int *)((char *)v121 + 1);
                    *(_BYTE *)v351 = v107;
                    v351 = (_QWORD *)((char *)v351 + 1);
                    *((_QWORD *)&v107 + 1) = (unsigned int)(DWORD2(v107) - 1);
                  }
                  while ( DWORD2(v107) );
                  v93 = v2602;
                }
                v121 = *(int **)(v93 + 2688);
              }
              *((_QWORD *)v121 + 4) = v317;
              v353 = *(_QWORD *)(v93 + 1416);
              *(_QWORD *)v353 = v121;
              *(_DWORD *)(v353 + 16) = 48;
              v166 = *((_QWORD *)v121 + 1);
LABEL_243:
              LODWORD(v107) = 0;
              if ( *(_DWORD *)(v93 + 2296) )
                goto LABEL_203;
LABEL_244:
              *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v93 + 2312) = (char *)v121 - 0x4C48B4211BBACBEBLL;
              v167 = *v121;
LABEL_245:
              *(_QWORD *)(v93 + 2320) = v167;
LABEL_246:
              *(_QWORD *)(v93 + 2328) = v166;
              goto LABEL_247;
            }
            v432 = *(_QWORD ***)(v93 + 1320);
            v2604 = 0;
            v2607 = (*(__int64 (__fastcall **)(_QWORD, __int64))(v93 + 888))((unsigned int)(v134 - 25), 6LL);
            _disable();
            v433 = *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *(_QWORD *)(v93 + 1616));
            _enable();
            (*(void (__fastcall **)(__int64))(v93 + 360))(v433);
            LOBYTE(v434) = 1;
            (*(void (__fastcall **)(_QWORD, __int64))(v93 + 232))(*(_QWORD *)(v93 + 1328), v434);
            v435 = **(unsigned int ***)(v93 + 1560);
            v436 = *v435;
            v2601 = (__int64)(v435 + 4);
            v2603 = (__int64)&v435[6 * v436 + 4];
            v2900 = 0;
            if ( *((_BYTE *)v435 + 12) )
            {
              LODWORD(v436) = 0;
              v437 = *v432;
              while ( v437 != v432 )
              {
                v437 = (_QWORD *)*v437;
                LODWORD(v436) = v436 + 1;
              }
            }
            v438 = *(unsigned int *)(v93 + 2064);
            v439 = __rdtsc();
            v440 = __ROR8__(v439, 3);
            v2855 = ((v440 ^ v439) * (unsigned __int128)0x7010008004002001uLL) >> 64;
            v441 = ((unsigned __int16)(8193 * (v440 ^ v439)) ^ (unsigned __int16)v2855) & 0x7FF;
            v442 = __rdtsc();
            v443 = (__ROR8__(v442, 3) ^ v442) * (unsigned __int128)0x7010008004002001uLL;
            v2866 = *((_QWORD *)&v443 + 1);
            v444 = (*((_QWORD *)&v443 + 1) ^ (unsigned __int64)v443) % (unsigned int)(v441 + 1);
            v446 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v93 + 240))(
                     66LL,
                     (unsigned int)(v441 + 8 * v436),
                     v438);
            if ( !v446 )
            {
              ++*(_DWORD *)(v93 + 2584);
LABEL_716:
              v2666 = 0LL;
              goto LABEL_738;
            }
            v447 = v444;
            v448 = (unsigned __int64 *)v446;
            if ( (unsigned int)v444 >= 8 )
            {
              v449 = (unsigned __int64)(unsigned int)v444 >> 3;
              do
              {
                v447 -= 8;
                v450 = __rdtsc();
                v451 = (__ROR8__(v450, 3) ^ v450) * (unsigned __int128)0x7010008004002001uLL;
                v2867 = *((_QWORD *)&v451 + 1);
                v445 = v451 ^ *((_QWORD *)&v451 + 1);
                *v448++ = v445;
                --v449;
              }
              while ( v449 );
              v93 = v2602;
            }
            if ( v447 )
            {
              v452 = __rdtsc();
              v453 = (__ROR8__(v452, 3) ^ v452) * (unsigned __int128)0x7010008004002001uLL;
              v2868 = *((_QWORD *)&v453 + 1);
              v445 = v453 ^ *((_QWORD *)&v453 + 1);
              do
              {
                *(_BYTE *)v448 = v445;
                v448 = (unsigned __int64 *)((char *)v448 + 1);
                v445 >>= 8;
                --v447;
              }
              while ( v447 );
            }
            v454 = v441 - v444;
            v455 = (unsigned __int64 *)(v446 + (unsigned int)v444 + (unsigned __int64)(unsigned int)(8 * v436));
            if ( v454 >= 8 )
            {
              v448 = (unsigned __int64 *)((unsigned __int64)v454 >> 3);
              do
              {
                v454 -= 8;
                v456 = __rdtsc();
                v457 = (__ROR8__(v456, 3) ^ v456) * (unsigned __int128)0x7010008004002001uLL;
                v2869 = *((_QWORD *)&v457 + 1);
                v445 = v457 ^ *((_QWORD *)&v457 + 1);
                *v455++ = v445;
                v448 = (unsigned __int64 *)((char *)v448 - 1);
              }
              while ( v448 );
            }
            if ( v454 )
            {
              v458 = __rdtsc();
              v459 = (__ROR8__(v458, 3) ^ v458) * (unsigned __int128)0x7010008004002001uLL;
              v2870 = *((_QWORD *)&v459 + 1);
              v445 = v459 ^ *((_QWORD *)&v459 + 1);
              do
              {
                *(_BYTE *)v455 = v445;
                v455 = (unsigned __int64 *)((char *)v455 + 1);
                v445 >>= 8;
                --v454;
              }
              while ( v454 );
            }
            v460 = (unsigned int)v444 + v446;
            v2666 = v446;
            if ( !v460 )
              goto LABEL_716;
            v461 = *v432;
            if ( *v432 != v432 )
            {
              v462 = 0;
              do
              {
                v463 = *(_QWORD *)((char *)v461 + *(_QWORD *)(v93 + 1880) - *(_QWORD *)(v93 + 1872));
                if ( !(*(unsigned int (__fastcall **)(__int64, unsigned __int64, unsigned __int64 *, unsigned __int64 *))(v93 + 680))(
                        v463,
                        v445,
                        v455,
                        v448)
                  && v462 < (unsigned int)v436 )
                {
                  v464 = v462++;
                  *(_QWORD *)(v460 + 8 * v464) = v463;
                }
                v461 = (_QWORD *)*v461;
                ++v2604;
              }
              while ( v461 != v432 );
              v2900 = v462;
            }
            (*(void (__fastcall **)(__int64, _QWORD, unsigned __int64 *, unsigned __int64 *))(v93 + 920))(
              v460,
              v2900,
              v455,
              v448);
            v465 = v2601;
            v466 = v2603;
            v467 = v2600;
LABEL_725:
            v468 = *(_QWORD *)(v465 + 8);
            if ( (*(unsigned int (__fastcall **)(unsigned __int64))(v93 + 680))(v468) )
              goto LABEL_737;
            v469 = v2900 - 1;
            v470 = 0;
            if ( (int)(v2900 - 1) < 0 )
            {
LABEL_735:
              if ( !*(_DWORD *)(v93 + 2296) )
              {
                *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v93 + 2312) = (char *)v467 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v93 + 2320) = *v467;
                *(_QWORD *)(v93 + 2328) = v468;
                *(_DWORD *)(v93 + 2296) = 1;
                __ba(v93, 0LL);
              }
              goto LABEL_737;
            }
            while ( 1 )
            {
              v471 = (v469 + v470) >> 1;
              if ( v468 >= *(_QWORD *)(v460 + 8LL * v471) )
              {
                if ( v468 <= *(_QWORD *)(v460 + 8LL * v471) )
                {
                  if ( v469 < v470 )
                    goto LABEL_735;
LABEL_737:
                  v465 += 24LL;
                  if ( v465 >= v466 )
                  {
LABEL_738:
                    (*(void (__fastcall **)(_QWORD))(v93 + 280))(*(_QWORD *)(v93 + 1328));
                    (*(void (**)(void))(v93 + 368))();
                    (*(void (__fastcall **)(__int64))(v93 + 896))(v2607);
                    LODWORD(v107) = 0;
                    if ( !v2666 )
                      goto LABEL_203;
                    *(_DWORD *)(v93 + 2088) += v2604 << 9;
                    (*(void (__fastcall **)(__int64))(v93 + 248))(v2666);
                    goto LABEL_238;
                  }
                  goto LABEL_725;
                }
                v470 = v471 + 1;
              }
              else
              {
                if ( !v471 )
                  goto LABEL_735;
                v469 = v471 - 1;
              }
              if ( v469 < v470 )
                goto LABEL_735;
            }
          }
          if ( (*(_DWORD *)(v93 + 2448) & 0x40000000) != 0 && (*(_DWORD *)(v93 + 2452) & 0x1000) == 0 )
          {
            v472 = __rdtsc();
            v107 = (__ROR8__(v472, 3) ^ v472) * (unsigned __int128)0x7010008004002001uLL;
            v2741 = *((_QWORD *)&v107 + 1);
            LODWORD(v472) = v107 ^ DWORD2(v107);
            *((_QWORD *)&v107 + 1) = ((unsigned __int64)v107 ^ *((_QWORD *)&v107 + 1)) / 5;
            *(_DWORD *)(v93 + 2084) = v472 - 5 * DWORD2(v107);
          }
          v473 = 1;
LABEL_744:
          v474 = *(_DWORD *)(v93 + 2084);
          if ( !v474 )
          {
            v2679 = 0LL;
            v823 = (char *)v121;
            v480 = 0;
            for ( i11 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v93 + 768))(&v2679, *((_QWORD *)&v107 + 1));
                  i11;
                  i11 = (*(__int64 (__fastcall **)(__int64 *))(v93 + 768))(&v2679) )
            {
              ++v480;
              if ( !(*(__int64 (__fastcall **)(__int64, char *))(v93 + 520))(i11, v2753) )
              {
                if ( (*(_DWORD *)(v93 + 2448) & 0x40000000) != 0 )
                {
                  v825 = *(_QWORD **)(v93 + 2688);
                  v826 = 48;
                  v827 = 6LL;
                  do
                  {
                    v826 -= 8;
                    *v825 = *(_QWORD *)v823;
                    v823 += 8;
                    ++v825;
                    --v827;
                  }
                  while ( v827 );
                  if ( v826 )
                  {
                    do
                    {
                      v828 = *v823++;
                      *(_BYTE *)v825 = v828;
                      v825 = (_QWORD *)((char *)v825 + 1);
                      --v826;
                    }
                    while ( v826 );
                    v93 = v2602;
                  }
                  v823 = *(char **)(v93 + 2688);
                }
                *((_QWORD *)v823 + 3) = i11;
                v829 = *(_QWORD *)(v93 + 1416);
                *(_QWORD *)v829 = v823;
                *(_DWORD *)(v829 + 16) = 48;
                v830 = *(_QWORD *)(v93 + 1416);
                *(_QWORD *)(v830 + 8) = i11;
                *(_DWORD *)(v830 + 20) = 4096;
                if ( !*(_DWORD *)(v93 + 2296) )
                {
                  *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v93 + 2312) = v823 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v93 + 2320) = *(int *)v823;
                  *(_QWORD *)(v93 + 2328) = 3LL;
                  *(_DWORD *)(v93 + 2296) = 1;
                  __ba(v93, 0LL);
                }
              }
            }
            goto LABEL_1272;
          }
          v475 = v474 - 1;
          if ( !v475 )
          {
            v814 = (char *)v121;
            v2687 = 0LL;
            v480 = 0;
            v815 = KeGetCurrentIrql();
            __writecr8(0xCuLL);
            for ( i12 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v93 + 776))(&v2687, *((_QWORD *)&v107 + 1));
                  i12;
                  i12 = (*(__int64 (__fastcall **)(__int64 *))(v93 + 776))(&v2687) )
            {
              ++v480;
              if ( !(*(__int64 (__fastcall **)(__int64, char *))(v93 + 520))(i12, v2752) )
              {
                if ( (*(_DWORD *)(v93 + 2448) & 0x40000000) != 0 )
                {
                  v817 = *(_QWORD **)(v93 + 2688);
                  v818 = 48;
                  v819 = 6LL;
                  do
                  {
                    v818 -= 8;
                    *v817 = *(_QWORD *)v814;
                    v814 += 8;
                    ++v817;
                    --v819;
                  }
                  while ( v819 );
                  if ( v818 )
                  {
                    do
                    {
                      v820 = *v814++;
                      *(_BYTE *)v817 = v820;
                      v817 = (_QWORD *)((char *)v817 + 1);
                      --v818;
                    }
                    while ( v818 );
                    v93 = v2602;
                  }
                  v814 = *(char **)(v93 + 2688);
                }
                *((_QWORD *)v814 + 3) = i12;
                v821 = *(_QWORD *)(v93 + 1416);
                *(_QWORD *)v821 = v814;
                *(_DWORD *)(v821 + 16) = 48;
                v822 = *(_QWORD *)(v93 + 1416);
                *(_QWORD *)(v822 + 8) = i12;
                *(_DWORD *)(v822 + 20) = 4096;
                if ( !*(_DWORD *)(v93 + 2296) )
                {
                  *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v93 + 2312) = v814 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v93 + 2320) = *(int *)v814;
                  *(_QWORD *)(v93 + 2328) = 4LL;
                  *(_DWORD *)(v93 + 2296) = 1;
                  __ba(v93, 0LL);
                }
              }
            }
            __writecr8(v815);
            goto LABEL_1272;
          }
          v476 = v475 - 1;
          if ( !v476 )
          {
            v803 = v121;
            v2622 = 0;
            v804 = 0LL;
            v805 = 0;
            v806 = 0;
            while ( 1 )
            {
              v2639 = 0;
              while ( 1 )
              {
                do
                {
                  if ( !(*(unsigned int (__fastcall **)(_QWORD, int *, __int64 *))(v93 + 760))(v806, &v2639, &v2667) )
                    goto LABEL_1245;
                  v807 = (*(__int64 (__fastcall **)(__int64))(v93 + 728))(v2667);
                }
                while ( !v807 );
                v808 = *(__int64 (__fastcall **)(__int64))(v93 + 736);
                v2622 = v805 + 1;
                v809 = v808(v807);
                if ( !(*(__int64 (__fastcall **)(__int64, char *))(v93 + 520))(v809, v2751) )
                  break;
                (*(void (__fastcall **)(__int64, __int64))(v93 + 744))(v2667, v807);
                v805 = v2622;
              }
              if ( (*(_DWORD *)(v93 + 2448) & 0x40000000) != 0 )
              {
                v810 = *(_QWORD **)(v93 + 2688);
                DWORD2(v107) = 48;
                v811 = 6LL;
                do
                {
                  *((_QWORD *)&v107 + 1) = (unsigned int)(DWORD2(v107) - 8);
                  *v810 = *(_QWORD *)v803;
                  v803 += 2;
                  ++v810;
                  --v811;
                }
                while ( v811 );
                if ( DWORD2(v107) )
                {
                  do
                  {
                    LOBYTE(v107) = *(_BYTE *)v803;
                    v803 = (int *)((char *)v803 + 1);
                    *(_BYTE *)v810 = v107;
                    v810 = (_QWORD *)((char *)v810 + 1);
                    *((_QWORD *)&v107 + 1) = (unsigned int)(DWORD2(v107) - 1);
                  }
                  while ( DWORD2(v107) );
                  v93 = v2602;
                }
                v803 = *(int **)(v93 + 2688);
              }
              *((_QWORD *)v803 + 3) = v809;
              v812 = *(_QWORD *)(v93 + 1416);
              *(_QWORD *)v812 = v803;
              *(_DWORD *)(v812 + 16) = 48;
              v813 = *(_QWORD *)(v93 + 1416);
              *(_QWORD *)(v813 + 8) = v809;
              *(_DWORD *)(v813 + 20) = 4096;
              if ( !*(_DWORD *)(v93 + 2296) )
              {
                *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v93 + 2312) = (char *)v803 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v93 + 2320) = *v803;
                *(_QWORD *)(v93 + 2328) = v804;
                *(_DWORD *)(v93 + 2296) = 1;
                __ba(v93, 0LL);
              }
LABEL_1245:
              v805 = v2622;
              ++v806;
              ++v804;
              if ( v806 >= 3 )
              {
                v480 = v2622;
                v473 = 1;
                goto LABEL_1272;
              }
            }
          }
          v477 = v476 - 1;
          if ( v477 )
          {
            v478 = v477 - 1;
            if ( !v478 )
            {
              v480 = 0;
              v2622 = 0;
              v489 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(v93 + 792))(0LL, *((_QWORD *)&v107 + 1));
              if ( v489 )
              {
                v490 = v2600;
                do
                {
                  v2685 = 0LL;
                  v491 = (char *)v490;
                  v492 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v93 + 784))(v489, &v2685);
                  if ( v492 )
                  {
                    do
                    {
                      ++v473;
                      if ( !(*(__int64 (__fastcall **)(__int64, char *))(v93 + 520))(v492, v2743) )
                      {
                        if ( (*(_DWORD *)(v93 + 2448) & 0x40000000) != 0 )
                        {
                          v493 = *(_QWORD **)(v93 + 2688);
                          v494 = 48;
                          v495 = 6LL;
                          do
                          {
                            v494 -= 8;
                            *v493 = *(_QWORD *)v491;
                            v491 += 8;
                            ++v493;
                            --v495;
                          }
                          while ( v495 );
                          if ( v494 )
                          {
                            do
                            {
                              v496 = *v491++;
                              *(_BYTE *)v493 = v496;
                              v493 = (_QWORD *)((char *)v493 + 1);
                              --v494;
                            }
                            while ( v494 );
                            v93 = v2602;
                          }
                          v491 = *(char **)(v93 + 2688);
                        }
                        *((_QWORD *)v491 + 3) = v492;
                        *((_QWORD *)v491 + 4) = v489;
                        v497 = *(_QWORD *)(v93 + 1416);
                        *(_QWORD *)v497 = v491;
                        *(_DWORD *)(v497 + 16) = 48;
                        v498 = *(_QWORD *)(v93 + 1416);
                        *(_QWORD *)(v498 + 8) = v492;
                        *(_DWORD *)(v498 + 20) = 4096;
                        if ( !*(_DWORD *)(v93 + 2296) )
                        {
                          *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                          *(_QWORD *)(v93 + 2312) = v491 - 0x4C48B4211BBACBEBLL;
                          *(_QWORD *)(v93 + 2320) = *(int *)v491;
                          *(_QWORD *)(v93 + 2328) = 6LL;
                          *(_DWORD *)(v93 + 2296) = 1;
                          __ba(v93, 0LL);
                        }
                      }
                      v492 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v93 + 784))(v489, &v2685);
                    }
                    while ( v492 );
                    v480 = v2622;
                    v490 = v2600;
                  }
                  v499 = *(__int64 (__fastcall **)(__int64))(v93 + 792);
                  v480 += v473;
                  v2622 = v480;
                  v489 = v499(v489);
                  v473 = 1;
                }
                while ( v489 );
              }
              goto LABEL_1229;
            }
            if ( v478 == 1 )
            {
              v479 = (char *)v121;
              v2941 = -1;
              v480 = 0;
              v481 = 0;
              v482 = 0LL;
              do
              {
                v2684 = 0LL;
                while ( (*(unsigned int (__fastcall **)(_QWORD, __int64 *, char *, __int64 *))(v93 + 1072))(
                          v481,
                          &v2684,
                          &v2941,
                          &v2654) )
                {
                  ++v480;
                  if ( !(*(__int64 (__fastcall **)(__int64, char *))(v93 + 520))(v2654, v2742) )
                  {
                    if ( (*(_DWORD *)(v93 + 2448) & 0x40000000) != 0 )
                    {
                      v483 = *(_QWORD **)(v93 + 2688);
                      v484 = 48;
                      v485 = 6LL;
                      do
                      {
                        v484 -= 8;
                        *v483 = *(_QWORD *)v479;
                        v479 += 8;
                        ++v483;
                        --v485;
                      }
                      while ( v485 );
                      if ( v484 )
                      {
                        do
                        {
                          v486 = *v479++;
                          *(_BYTE *)v483 = v486;
                          v483 = (_QWORD *)((char *)v483 + 1);
                          --v484;
                        }
                        while ( v484 );
                        v93 = v2602;
                      }
                      v479 = *(char **)(v93 + 2688);
                    }
                    *((_QWORD *)v479 + 3) = v2654;
                    v487 = *(_QWORD *)(v93 + 1416);
                    *(_QWORD *)v487 = v479;
                    *(_DWORD *)(v487 + 16) = 48;
                    v488 = *(_QWORD *)(v93 + 1416);
                    *(_QWORD *)(v488 + 8) = v2654;
                    *(_DWORD *)(v488 + 20) = 4096;
                    if ( !*(_DWORD *)(v93 + 2296) )
                    {
                      *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v93 + 2312) = v479 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v93 + 2320) = *(int *)v479;
                      *(_QWORD *)(v93 + 2328) = v482;
                      *(_DWORD *)(v93 + 2296) = 1;
                      __ba(v93, 0LL);
                    }
                  }
                }
                ++v481;
                ++v482;
              }
              while ( v481 < 3 );
              goto LABEL_1272;
            }
            *(_DWORD *)(v93 + 2084) = 0;
            goto LABEL_1275;
          }
          v480 = 0;
          v500 = *(ULONG_PTR **)(v93 + 1256);
          v2635 = (_BYTE *)v93;
          v501 = *v500;
          v2614 = (int *)*v500;
          if ( (*(_DWORD *)(v93 + 2448) & 0x40000000) != 0 )
            goto LABEL_1272;
          v502 = v2600;
          v107 = *((unsigned __int64 *)v2600 + 5);
          if ( (_QWORD)v107 )
          {
            v480 = 1;
            if ( v501 != (_QWORD)v107 )
            {
              *((_QWORD *)v2600 + 3) = v501;
              v503 = *(_QWORD *)(v93 + 1416);
              *(_QWORD *)v503 = v502;
              *(_DWORD *)(v503 + 16) = 48;
              v504 = *(_QWORD *)(v93 + 1416);
              *(_QWORD *)(v504 + 8) = v501;
              *(_DWORD *)(v504 + 20) = 4096;
              if ( !*(_DWORD *)(v93 + 2296) )
              {
                *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v93 + 2312) = (char *)v502 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v93 + 2320) = *v502;
                *(_QWORD *)(v93 + 2328) = 5LL;
                *(_DWORD *)(v93 + 2296) = 1;
                __ba(v93, 0LL);
              }
            }
            goto LABEL_1229;
          }
          if ( !v501 )
            goto LABEL_1229;
          v505 = *(__int64 (__fastcall **)(ULONG_PTR, char *))(v93 + 512);
          v2622 = 1;
          v2632 = (_BYTE *)v93;
          v506 = v505(v501, v2857);
          v507 = BugCheckParameter2;
          v508 = (_DWORD *)v506;
          v509 = v2859;
          v2620 = (unsigned int *)v506;
          v2621 = v2859;
          v2606 = BugCheckParameter2;
          if ( !BugCheckParameter2 )
          {
            if ( (*(_DWORD *)(v93 + 2448) & 0x200000) == 0 )
            {
              v2663[6] = 317;
              KeBugCheckEx(__ROR4__BugCheckCode: (317, 160), BugCheckParameter1: 0xAuLL, BugCheckParameter2: v501, BugCheckParameter3: 5uLL, BugCheckParameter4: 0LL);
            }
            v510 = -1073741701;
            goto LABEL_1225;
          }
          v511 = 4;
          v2647 = 0LL;
          v512 = &v2648;
          v513 = 0LL;
          v514 = 0xFFFFFFFFLL;
          v515 = 1LL;
          do
          {
            *(_BYTE *)v512 = 0;
            v512 = (int *)((char *)v512 + 1);
            --v511;
          }
          while ( v511 );
          v516 = 0;
          if ( !*(_DWORD *)(v93 + 2060) )
          {
LABEL_832:
            v2634 = 0LL;
            goto LABEL_833;
          }
          LODWORD(v513) = v2648;
          LODWORD(v514) = HIDWORD(v2647);
          v517 = v2647;
          while ( 1 )
          {
            v518 = v93;
            if ( *(_QWORD *)(v93 + 2680) )
              v518 = *(_QWORD *)(v93 + 2680);
            v519 = 0;
            v515 = v518 + *(unsigned int *)(v518 + 2056);
            if ( v517 && (unsigned int)v514 <= v516 )
            {
              v519 = v514;
              v515 = v518 + (unsigned int)v513;
            }
            if ( v519 != v516 )
              break;
LABEL_825:
            LODWORD(v2647) = 1;
            v513 = (unsigned int)(v515 - v518);
            HIDWORD(v2647) = v519;
            v2648 = v515 - v518;
            v517 = 1;
            v532 = *(int *)v515;
            v514 = v519;
            if ( (unsigned int)v532 <= 0x2B
              && (v533 = 0x80000001002LL, _bittest64(&v533, v532))
              && *(_DWORD **)(v515 + 8) == v508
              && *(_DWORD *)(v515 + 16) == v509
              || (unsigned int)(v532 - 33) <= 1 && *(_QWORD *)(v515 + 32) == v507 )
            {
              v2634 = (_DWORD *)v515;
              if ( v515 )
              {
                v510 = -1073741554;
                goto LABEL_1224;
              }
LABEL_833:
              v534 = (*(__int64 (__fastcall **)(int *, __int64, __int64, __int64))(v93 + 680))(v2614, v513, v515, v514);
              v535 = *(char ***)(v93 + 1320);
              v536 = v534;
              v2611 = v534;
              LODWORD(v2609) = v2621;
              _disable();
              v537 = *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *(_QWORD *)(v93 + 1616));
              _enable();
              (*(void (__fastcall **)(__int64))(v93 + 360))(v537);
              LOBYTE(v538) = 1;
              (*(void (__fastcall **)(_QWORD, __int64))(v93 + 232))(*(_QWORD *)(v93 + 1328), v538);
              v539 = *v535;
              if ( *v535 != (char *)v535 )
              {
                v540 = *(_QWORD *)(v93 + 1872);
                while ( 1 )
                {
                  v541 = *(_QWORD *)&v539[*(_QWORD *)(v93 + 1880) - v540];
                  if ( v507 >= v541 && v507 < v541 + *(unsigned int *)&v539[*(_QWORD *)(v93 + 1888) - v540] )
                    break;
                  v539 = *(char **)v539;
                  if ( v539 == (char *)v535 )
                    goto LABEL_842;
                }
                (*(void (__fastcall **)(char *, __int64))(v93 + 216))(&v539[-v540], 1LL);
              }
LABEL_842:
              (*(void (__fastcall **)(_QWORD))(v93 + 280))(*(_QWORD *)(v93 + 1328));
              (*(void (**)(void))(v93 + 368))();
              if ( (*(_DWORD *)(v93 + 2448) & 0x40000000) != 0 )
              {
                v543 = sub_140B18070(&v2635, v507, 9LL);
LABEL_1223:
                v510 = v543;
                goto LABEL_1224;
              }
              v2717 = 0LL;
              v2675[4] = 0;
              LOBYTE(v542) = 1;
              v544 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, _QWORD, unsigned int *))(v93 + 496))(
                       v507,
                       v542,
                       0LL,
                       &v2621);
              v545 = v544;
              v2715[1] = v544;
              LOBYTE(v545) = 1;
              v2621 &= -(v544 != 0);
              v546 = *(__int64 (__fastcall **)(ULONG_PTR, __int64, __int64, unsigned int *))(v93 + 496);
              v2675[1] = v2621;
              v547 = v546(v507, v545, 12LL, &v2621);
              v548 = v547;
              v2615 = v547;
              v2715[2] = v547;
              LOBYTE(v548) = 1;
              v2621 &= -(v547 != 0);
              v549 = *(__int64 (__fastcall **)(ULONG_PTR, __int64, __int64, unsigned int *))(v93 + 496);
              v2604 = v2621;
              v2675[2] = v2621;
              v2716 = v549(v507, v548, 10LL, &v2621);
              v2621 &= -(v2716 != 0);
              v550 = *(__int64 (__fastcall **)(ULONG_PTR))(v93 + 504);
              v2675[3] = v2621;
              v551 = v550(v507);
              if ( !v551 )
              {
                if ( (*(_DWORD *)(v93 + 2448) & 0x200000) == 0 )
                {
                  v2663[7] = 317;
                  KeBugCheckEx(__ROR4__BugCheckCode: (317, 160), BugCheckParameter1: 0xAuLL, BugCheckParameter2: v507, BugCheckParameter3: 7uLL, BugCheckParameter4: 0LL);
                }
                if ( !*(_DWORD *)(v93 + 2296) )
                {
                  v552 = v93;
                  *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v93 + 2312) = 0LL;
                  *(_QWORD *)(v93 + 2320) = 271LL;
                  *(_QWORD *)(v93 + 2328) = v507;
                  *(_DWORD *)(v93 + 2296) = 1;
                  goto LABEL_848;
                }
                goto LABEL_849;
              }
              v553 = (*(__int64 (__fastcall **)(ULONG_PTR, int *))(v93 + 1184))(v507, &v2702);
              v554 = *(unsigned int *)(v93 + 2340);
              v2718 = v553;
              v2675[5] = v2702;
              v2675[0] = *(_DWORD *)(v551 + 84);
              LODWORD(v553) = v536;
              v555 = *(unsigned int *)(v93 + 2020);
              v2715[0] = v507;
              v556 = (_DWORD)v553 != 0 ? 0xB : 0;
              v557 = v555 + 288;
              v2901 = v556;
              if ( (unsigned int)(v555 + 288) <= *(_DWORD *)(v93 + 2588) )
              {
                v558 = v93;
                v2601 = v93;
                *(_DWORD *)(v93 + 2020) = v557;
              }
              else
              {
                v558 = sub_140B11020(v93, v557, v554);
                v2601 = v558;
                if ( !v558 )
                  goto LABEL_852;
                v559 = *(_DWORD *)(v93 + 2448);
                if ( (v559 & 4) == 0 )
                {
                  v560 = *(_DWORD *)(v93 + 2020);
                  v561 = *(_QWORD *)(v93 + 1992);
                  v2075 = (v559 & 0x20000000) != 0;
                  v562 = (_QWORD *)v93;
                  v563 = v2075 ? *(_DWORD *)(v93 + 2340) : 0;
                  if ( v560 >= 8 )
                  {
                    v564 = (unsigned __int64)v560 >> 3;
                    do
                    {
                      *v562 = 0LL;
                      v560 -= 8;
                      ++v562;
                      --v564;
                    }
                    while ( v564 );
                  }
                  for ( ; v560; --v560 )
                  {
                    *(_BYTE *)v562 = 0;
                    v562 = (_QWORD *)((char *)v562 + 1);
                  }
                  v565 = *(_DWORD *)(v558 + 2340);
                  *(_DWORD *)(v558 + 2340) = v563;
                  if ( v563 == 3 )
                  {
                    (*(void (__fastcall **)(__int64, _QWORD))(v558 + 872))(v561, 0LL);
                  }
                  else if ( (*(_DWORD *)(v558 + 2448) & 0x10000000) != 0 || !v563 )
                  {
                    (*(void (__fastcall **)(__int64, _QWORD))(v558 + 248))(v561, 0LL);
                  }
                  else
                  {
                    (*(void (__fastcall **)(__int64, _QWORD))(v558 + 552))(v561 - 8, *(_QWORD *)(v561 - 8));
                  }
                  *(_DWORD *)(v558 + 2340) = v565;
                }
                *(_DWORD *)(v558 + 2448) &= ~4u;
                v556 = v2901;
              }
              v566 = v558 + v555;
              *(_DWORD *)(v558 + 2060) += 6;
              v567 = v2715;
              v2686 = v558 + v555;
              v2634 = (_DWORD *)(v558 + v555);
              v568 = v2675;
              v2603 = (__int64)v2715;
              v2607 = 6LL;
              do
              {
                v569 = (unsigned int)*v568;
                v570 = 6LL;
                v571 = (_QWORD *)*v567;
                v572 = 48;
                LODWORD(v2612) = *v568;
                v573 = (_QWORD *)v566;
                do
                {
                  *v573 = 0LL;
                  v572 -= 8;
                  ++v573;
                  --v570;
                }
                while ( v570 );
                for ( ; v572; --v572 )
                {
                  *(_BYTE *)v573 = 0;
                  v573 = (_QWORD *)((char *)v573 + 1);
                }
                *(_DWORD *)v566 = v556;
                *(_QWORD *)(v566 + 8) = v571;
                v574 = v571;
                *(_DWORD *)(v566 + 16) = v569;
                v575 = (const char *)v571;
                *(_DWORD *)(v558 + 2088) += v569;
                v576 = *(_DWORD *)(v558 + 2068);
                v577 = *(_QWORD *)(v558 + 2072);
                if ( v571 < (_QWORD *)((char *)v571 + v569) )
                {
                  do
                  {
                    _mm_prefetch(v575, 0);
                    v575 += 64;
                  }
                  while ( v575 < (const char *)v571 + v569 );
                }
                v578 = *(_QWORD *)(v558 + 2072);
                v579 = (unsigned int)v569 >> 7;
                if ( (unsigned int)v569 >> 7 )
                {
                  do
                  {
                    v580 = 8LL;
                    do
                    {
                      v581 = v574[1] ^ __ROL8__(*v574 ^ v578, v576);
                      v574 += 2;
                      v578 = __ROL8__(v581, v576);
                      --v580;
                    }
                    while ( v580 );
                    v582 = (__ROL8__(v577 ^ ((char *)v574 - (char *)v571), 17) ^ v577 ^ (unsigned __int64)((char *)v574 - (char *)v571))
                         * (unsigned __int128)0x7010008004002001uLL;
                    v2744 = *((_QWORD *)&v582 + 1);
                    v576 = ((unsigned __int8)v582 ^ (unsigned __int8)(BYTE8(v582) ^ v576)) & 0x3F;
                    if ( !v576 )
                      LOBYTE(v576) = 1;
                    --v579;
                  }
                  while ( v579 );
                  v558 = v2601;
                  LODWORD(v569) = v2612;
                  v567 = (_QWORD *)v2603;
                }
                v583 = v569 & 0x7F;
                if ( v583 >= 8 )
                {
                  v584 = (unsigned __int64)(v569 & 0x7F) >> 3;
                  do
                  {
                    v578 = __ROL8__(*v574++ ^ v578, v576);
                    v583 -= 8;
                    --v584;
                  }
                  while ( v584 );
                }
                if ( v583 )
                {
                  do
                  {
                    v585 = *(unsigned __int8 *)v574;
                    v574 = (_QWORD *)((char *)v574 + 1);
                    v578 = __ROL8__(v585 ^ v578, v576);
                    --v583;
                  }
                  while ( v583 );
                  v558 = v2601;
                }
                for ( i13 = v578 >> 31; i13; i13 >>= 31 )
                  LODWORD(v578) = i13 ^ v578;
                v556 = v2901;
                *(_DWORD *)(v566 + 20) = v578 & 0x7FFFFFFF;
                ++v567;
                *(_DWORD *)(v558 + 2088) += v569;
                v566 = v2686 + 48;
                v2603 = (__int64)v567;
                ++v568;
                v2686 += 48LL;
                --v2607;
              }
              while ( v2607 );
              v587 = v2634;
              v588 = v2606;
              v93 = v2602;
              v589 = v2611;
              *v2634 = 44;
              *((_QWORD *)v587 + 3) = v588;
              if ( (*(_DWORD *)(v558 + 2448) & 0x10200000) != 0 )
              {
                if ( !v589 )
                  goto LABEL_900;
              }
              else if ( !v589 )
              {
                if ( (*(_DWORD *)(v558 + 2452) & 0x8000) != 0 )
                {
                  v587[8] |= 1u;
                  if ( (unsigned int)sub_140B120E0(v558, v588) )
                    v587[8] |= 4u;
                }
LABEL_900:
                v2632 = (_BYTE *)v558;
                v2635 = (_BYTE *)v558;
                v510 = sub_140B0F838((int)&v2632, (int)v2620, v2609, v588, v589, 9, (__int64)&v2638, (__int64)&v2674);
                if ( v510 < 0 )
                  goto LABEL_1224;
                v590 = v2632;
                v591 = &v2632[-v558];
                v592 = v2674 - v2638;
                v593 = (_QWORD *)(v588 + v2638);
                v2634 = (_DWORD *)((char *)v2634 + (_QWORD)v591);
                v2635 = v2632;
                v594 = v2634 + 48;
                v595 = 48;
                v2601 = (__int64)(v2634 + 48);
                v596 = v2634 + 48;
                v597 = 6LL;
                do
                {
                  *v596 = 0LL;
                  v595 -= 8;
                  ++v596;
                  --v597;
                }
                while ( v597 );
                for ( ; v595; --v595 )
                {
                  *(_BYTE *)v596 = 0;
                  v596 = (_QWORD *)((char *)v596 + 1);
                }
                v598 = v593;
                *v594 = v2901;
                v599 = (const char *)v593;
                *((_QWORD *)v594 + 1) = v593;
                v594[4] = v592;
                *((_DWORD *)v590 + 522) += v592;
                v600 = *((_DWORD *)v590 + 517);
                v601 = *((_QWORD *)v590 + 259);
                v602 = (unsigned __int64)v593 + v592;
                if ( (unsigned __int64)v593 < v602 )
                {
                  do
                  {
                    _mm_prefetch(v599, 0);
                    v599 += 64;
                  }
                  while ( (unsigned __int64)v599 < v602 );
                }
                v603 = *((_QWORD *)v590 + 259);
                v604 = v592 >> 7;
                if ( v592 >> 7 )
                {
                  do
                  {
                    v605 = 8LL;
                    do
                    {
                      v606 = v598[1] ^ __ROL8__(*v598 ^ v603, v600);
                      v598 += 2;
                      v603 = __ROL8__(v606, v600);
                      --v605;
                    }
                    while ( v605 );
                    v607 = (__ROL8__(v601 ^ ((char *)v598 - (char *)v593), 17) ^ v601 ^ (unsigned __int64)((char *)v598 - (char *)v593))
                         * (unsigned __int128)0x7010008004002001uLL;
                    v2745 = *((_QWORD *)&v607 + 1);
                    v600 = ((unsigned __int8)v607 ^ (unsigned __int8)(BYTE8(v607) ^ v600)) & 0x3F;
                    if ( !v600 )
                      LOBYTE(v600) = 1;
                    --v604;
                  }
                  while ( v604 );
                  v93 = v2602;
                  v594 = (_DWORD *)v2601;
                }
                v608 = v592 & 0x7F;
                if ( (unsigned int)v608 >= 8 )
                {
                  v609 = (unsigned __int64)(unsigned int)v608 >> 3;
                  do
                  {
                    v603 = __ROL8__(*v598++ ^ v603, v600);
                    v608 = (unsigned int)(v608 - 8);
                    --v609;
                  }
                  while ( v609 );
                }
                if ( (_DWORD)v608 )
                {
                  do
                  {
                    v610 = *(unsigned __int8 *)v598;
                    v598 = (_QWORD *)((char *)v598 + 1);
                    v603 = __ROL8__(v610 ^ v603, v600);
                    v608 = (unsigned int)(v608 - 1);
                  }
                  while ( (_DWORD)v608 );
                  v93 = v2602;
                }
                v611 = v603 >> 31;
                v612 = 0;
                while ( v611 )
                {
                  v603 = (unsigned int)v611 ^ (unsigned int)v603;
                  v611 >>= 31;
                }
                v613 = v2611;
                LODWORD(v603) = v603 & 0x7FFFFFFF;
                v594[5] = v603;
                v614 = (unsigned __int64)v2634;
                v2634[60] = 48;
                if ( *(_DWORD *)(v614 + 256) )
                {
                  LOBYTE(v612) = v613 != 0;
                  *(_DWORD *)(v614 + 264) = *(_DWORD *)(v614 + 264) & 0xFFFFFFFE | v612;
                }
                v2635 = v590;
                v2655 = v2634 + 24;
                v615 = (v613 != 0) + 13;
                if ( v2634 != (_DWORD *)-96LL )
                {
                  v629 = (const char *)v2615;
                  v618 = v590;
                  v2634[24] = v615;
                  LODWORD(v630) = v2604;
                  goto LABEL_968;
                }
                v616 = *((unsigned int *)v590 + 505);
                v617 = v616 + 48;
                if ( (unsigned int)(v616 + 48) <= *((_DWORD *)v590 + 647) )
                {
                  v618 = v590;
                  *((_DWORD *)v590 + 505) = v617;
                  goto LABEL_943;
                }
                v618 = (_BYTE *)sub_140B11020(v590, v617, *((unsigned int *)v590 + 585));
                if ( !v618 )
                {
LABEL_852:
                  v2632 = 0LL;
LABEL_853:
                  v510 = -1073741670;
                  goto LABEL_1224;
                }
                v619 = *((_DWORD *)v590 + 612);
                if ( (v619 & 4) == 0 )
                {
                  v620 = *((_DWORD *)v590 + 505);
                  v621 = *((_QWORD *)v590 + 249);
                  v622 = (v619 & 0x20000000) != 0 ? *((_DWORD *)v590 + 585) : 0;
                  if ( v620 >= 8 )
                  {
                    v623 = (unsigned __int64)v620 >> 3;
                    do
                    {
                      *(_QWORD *)v590 = 0LL;
                      v620 -= 8;
                      v590 += 8;
                      --v623;
                    }
                    while ( v623 );
                  }
                  for ( ; v620; --v620 )
                    *v590++ = 0;
                  v624 = *((_DWORD *)v618 + 585);
                  *((_DWORD *)v618 + 585) = v622;
                  if ( v622 == 3 )
                  {
                    (*((void (__fastcall **)(__int64))v618 + 109))(v621);
                  }
                  else if ( (*((_DWORD *)v618 + 612) & 0x10000000) != 0 || !v622 )
                  {
                    (*((void (__fastcall **)(__int64))v618 + 31))(v621);
                  }
                  else
                  {
                    (*((void (__fastcall **)(__int64, _QWORD))v618 + 69))(v621 - 8, *(_QWORD *)(v621 - 8));
                  }
                  *((_DWORD *)v618 + 585) = v624;
                }
                *((_DWORD *)v618 + 612) &= ~4u;
LABEL_943:
                v625 = &v618[v616];
                ++*((_DWORD *)v618 + 515);
                v626 = v625;
                v2703 = v625;
                v627 = 48;
                v628 = 6LL;
                do
                {
                  *v626 = 0LL;
                  v627 -= 8;
                  ++v626;
                  --v628;
                }
                while ( v628 );
                for ( ; v627; --v627 )
                {
                  *(_BYTE *)v626 = 0;
                  v626 = (_QWORD *)((char *)v626 + 1);
                }
                v629 = (const char *)v2615;
                *(_DWORD *)v625 = v615;
                v608 = (unsigned __int64)v629;
                v630 = v2604;
                *((_QWORD *)v625 + 1) = v629;
                *((_DWORD *)v625 + 4) = v630;
                *((_DWORD *)v618 + 522) += v630;
                v631 = *((_DWORD *)v618 + 517);
                v632 = *((_QWORD *)v618 + 259);
                if ( v629 < &v629[v630] )
                {
                  v633 = v629;
                  do
                  {
                    _mm_prefetch(v633, 0);
                    v633 += 64;
                  }
                  while ( v633 < &v629[v630] );
                }
                v603 = *((_QWORD *)v618 + 259);
                v634 = (unsigned int)v630 >> 7;
                if ( (unsigned int)v630 >> 7 )
                {
                  do
                  {
                    v635 = 8LL;
                    do
                    {
                      v636 = *(_QWORD *)(v608 + 8) ^ __ROL8__(*(_QWORD *)v608 ^ v603, v631);
                      v608 += 16LL;
                      v603 = __ROL8__(v636, v631);
                      --v635;
                    }
                    while ( v635 );
                    v637 = (__ROL8__(v632 ^ (v608 - (_QWORD)v629), 17) ^ v632 ^ (v608 - (unsigned __int64)v629))
                         * (unsigned __int128)0x7010008004002001uLL;
                    v2746 = *((_QWORD *)&v637 + 1);
                    v631 = ((unsigned __int8)v637 ^ (unsigned __int8)(BYTE8(v637) ^ v631)) & 0x3F;
                    if ( !v631 )
                      LOBYTE(v631) = 1;
                    --v634;
                  }
                  while ( v634 );
                  v93 = v2602;
                  LODWORD(v630) = v2604;
                }
                v614 = v630 & 0x7F;
                if ( (unsigned int)v614 >= 8 )
                {
                  v638 = (unsigned __int64)(v630 & 0x7F) >> 3;
                  do
                  {
                    v603 = __ROL8__(*(_QWORD *)v608 ^ v603, v631);
                    v608 += 8LL;
                    v614 = (unsigned int)(v614 - 8);
                    --v638;
                  }
                  while ( v638 );
                }
                if ( (_DWORD)v614 )
                {
                  do
                  {
                    v639 = *(unsigned __int8 *)v608++;
                    v603 = __ROL8__(v639 ^ v603, v631);
                    v614 = (unsigned int)(v614 - 1);
                  }
                  while ( (_DWORD)v614 );
                  v93 = v2602;
                }
                for ( i14 = v603; ; v603 = (unsigned int)i14 ^ (unsigned int)v603 )
                {
                  i14 >>= 31;
                  if ( !i14 )
                    break;
                }
                LODWORD(v603) = v603 & 0x7FFFFFFF;
                *((_DWORD *)v625 + 5) = v603;
                v613 = v2611;
                v2655 = v2703;
                *((_DWORD *)v618 + 522) += v630;
LABEL_968:
                if ( (*((_DWORD *)v618 + 612) & 0x40000000) != 0 && (_DWORD)v630 )
                  sub_1403EB41C(v618, v629, (unsigned int)v630, v2655 + 7);
                v2635 = v618;
                v2655[6] = 0;
                v2655[6] |= 1u;
                v641 = v2634;
                v2634[36] = 35;
                v641[46] = v641[46] & 0xFFFFFFFE | (v613 != 0);
                if ( v641[40] >= 0x94u )
                {
                  v642 = v2606;
                  v643 = *((_QWORD *)v641 + 19);
                  v644 = (*((__int64 (__fastcall **)(ULONG_PTR, unsigned __int64, ULONG_PTR, unsigned __int64))v618 + 63))(
                           v2606,
                           v614,
                           v603,
                           v608);
                  if ( !v644 )
                  {
                    v2632 = 0LL;
                    goto LABEL_853;
                  }
                  v603 = v642 + *(unsigned int *)(v644 + 80);
                  v614 = v641[46] | 2u;
                  v641[46] = v614;
                  v645 = v614;
                  v646 = *(_QWORD **)(v643 + 112);
                  if ( (unsigned __int64)v646 >= v642 && (unsigned __int64)v646 < v603 )
                  {
                    v645 = v614 | 4;
                    *((_QWORD *)v641 + 21) = *v646;
                    v641[46] = v614 | 4;
                  }
                  v647 = *(_QWORD **)(v643 + 120);
                  if ( (unsigned __int64)v647 >= v642 && (unsigned __int64)v647 < v603 )
                  {
                    *((_QWORD *)v641 + 22) = *v647;
                    v641[46] = v645 | 8;
                  }
                }
                v128 = (*((_DWORD *)v618 + 612) & 0x400000) == 0;
                v2632 = v618;
                if ( v128 )
                  goto LABEL_1222;
                v648 = v2606;
                v649 = (*((__int64 (__fastcall **)(ULONG_PTR, unsigned __int64, ULONG_PTR, unsigned __int64))v618 + 63))(
                         v2606,
                         v614,
                         v603,
                         v608);
                v2605 = v649;
                if ( !v649 )
                  goto LABEL_849;
                v650 = *(_WORD *)(v649 + 6);
                v2902 = v650;
                v2607 = (unsigned int)v2609 / 0xCuLL;
                if ( !v650 )
                {
                  if ( (*((_DWORD *)v618 + 612) & 0x200000) == 0 )
                  {
                    v2665 = 317;
                    KeBugCheckEx(__ROR4__BugCheckCode: (317, 160), BugCheckParameter1: 0xAuLL, BugCheckParameter2: v648, BugCheckParameter3: 0LL, BugCheckParameter4: 0LL);
                  }
                  if ( !*((_DWORD *)v618 + 574) )
                  {
                    *((_QWORD *)v618 + 288) = v618 - 0x5C5FC0A76E374B18LL;
                    *((_QWORD *)v618 + 289) = 0LL;
                    *((_QWORD *)v618 + 290) = 271LL;
                    *((_QWORD *)v618 + 291) = v648;
                    *((_DWORD *)v618 + 574) = 1;
                    goto LABEL_986;
                  }
                  goto LABEL_849;
                }
                v651 = v2620;
                v652 = &v2620[3 * ((unsigned int)v2609 / 0xC)];
                v653 = *(unsigned __int16 *)(v649 + 20) + v649 + 24;
                v2615 = (__int64)v652;
                v2601 = v653;
                v654 = 0;
                v2604 = 0;
                v655 = (_DWORD *)v653;
                v2603 = v653;
                do
                {
                  v656 = v655[4];
                  v657 = v655[3];
                  if ( v656 <= v655[2] )
                    v656 = v655[2];
                  LODWORD(v2612) = v655[3];
                  v658 = v657 + v656;
                  LODWORD(v2626) = v658;
                  if ( v654 )
                  {
                    if ( v658 < *(_DWORD *)(v653 + 40LL * (v654 - 1) + 12) )
                    {
                      if ( (*((_DWORD *)v618 + 612) & 0x200000) == 0 )
                      {
                        v2672 = 317;
                        KeBugCheckEx(__ROR4__BugCheckCode: (317, 160), BugCheckParameter1: 0xAuLL, BugCheckParameter2: v648, BugCheckParameter3: 1uLL, BugCheckParameter4: 0LL);
                      }
                      if ( !*((_DWORD *)v618 + 574) )
                      {
                        *((_QWORD *)v618 + 288) = v618 - 0x5C5FC0A76E374B18LL;
                        *((_QWORD *)v618 + 289) = 0LL;
                        *((_QWORD *)v618 + 290) = 271LL;
                        *((_QWORD *)v618 + 291) = v648;
                        *((_DWORD *)v618 + 574) = 1;
                        goto LABEL_986;
                      }
                      goto LABEL_849;
                    }
                    v654 = v2604;
                  }
                  if ( v651 != v652 )
                  {
                    do
                    {
                      v659 = v651[1];
                      if ( *v651 >= v658 || v659 <= v657 )
                        break;
                      if ( *v651 < v657 || v659 > v658 )
                      {
                        if ( (*((_DWORD *)v618 + 612) & 0x200000) == 0 )
                        {
                          v2657 = 317;
                          KeBugCheckEx(__ROR4__BugCheckCode: (317, 160), BugCheckParameter1: 0xAuLL, BugCheckParameter2: v648, BugCheckParameter3: 2uLL, BugCheckParameter4: 0LL);
                        }
LABEL_1024:
                        if ( !*((_DWORD *)v618 + 574) )
                        {
                          *((_QWORD *)v618 + 288) = v618 - 0x5C5FC0A76E374B18LL;
                          *((_QWORD *)v618 + 289) = 0LL;
                          *((_QWORD *)v618 + 290) = 271LL;
                          *((_QWORD *)v618 + 291) = v648;
                          *((_DWORD *)v618 + 574) = 1;
LABEL_986:
                          v552 = (__int64)v618;
LABEL_848:
                          __ba(v552, 0LL);
                        }
LABEL_849:
                        v510 = -1073741701;
LABEL_1224:
                        v501 = (ULONG_PTR)v2614;
LABEL_1225:
                        *(_QWORD *)&v107 = &v2635[-v93];
                        v93 = (ULONG_PTR)v2635;
                        *((_QWORD *)&v107 + 1) = (char *)v2600 + v107;
                        v2602 = (__int64)v2635;
                        v2600 = (int *)((char *)v2600 + v107);
                        if ( (int)(v510 + 0x80000000) < 0 || v510 == -1073741554 )
                          *(_QWORD *)(*((_QWORD *)&v107 + 1) + 40LL) = v501;
                        v480 = v2622;
LABEL_1229:
                        v473 = 1;
LABEL_1272:
                        *(_DWORD *)(v93 + 2088) += v480 << 12;
                        v831 = *(_DWORD *)(v93 + 2088);
                        ++*(_DWORD *)(v93 + 2084);
                        if ( v831 < *(_DWORD *)(v93 + 2092) )
                        {
                          v121 = v2600;
                          goto LABEL_744;
                        }
LABEL_1275:
                        v2602 = v93;
                        goto LABEL_202;
                      }
                      v660 = v651[2];
                      v2747 = v651;
                      if ( (v660 & 1) != 0 || (*(_BYTE *)(v660 + v648) & 0x20) != 0 )
                      {
                        v661 = v655[4];
                        v662 = v655[3];
                        if ( v661 <= v655[2] )
                          v661 = v655[2];
                        v663 = v662 + v661;
                        v664 = (unsigned int *)(*((__int64 (__fastcall **)(unsigned int *, ULONG_PTR))v618 + 131))(
                                                 v651,
                                                 v648);
                        v665 = v664;
                        if ( *v664 < v662 || v664[1] > v663 )
                        {
                          v666 = v2606;
                          if ( (*((_DWORD *)v618 + 612) & 0x200000) == 0 )
                          {
                            v2662 = 317;
                            KeBugCheckEx(
                              __ROR4__BugCheckCode: (317, 160),
                              BugCheckParameter1: 0xAuLL,
                              BugCheckParameter2: v2606,
                              (BugCheckParameter3: (_DWORD)v664 - (_DWORD)v2606) | 0x80000000,
                              BugCheckParameter4: 0LL);
                          }
                          if ( !*((_DWORD *)v618 + 574) )
                          {
                            *((_QWORD *)v618 + 288) = v618 - 0x5C5FC0A76E374B18LL;
                            *((_QWORD *)v618 + 289) = 0LL;
                            *((_QWORD *)v618 + 290) = 271LL;
                            *((_QWORD *)v618 + 291) = v666;
                            *((_DWORD *)v618 + 574) = 1;
                            __ba((__int64)v618, 0LL);
                          }
                        }
                        v667 = (unsigned int *)(*((__int64 (__fastcall **)(unsigned int *, ULONG_PTR, ULONG_PTR))v618
                                                + 132))(
                                                 v665,
                                                 v2606,
                                                 v2606 + *v665);
                        if ( *v667 >= v662 && v667[1] <= v663 )
                        {
                          v648 = v2606;
                        }
                        else
                        {
                          v648 = v2606;
                          if ( (*((_DWORD *)v618 + 612) & 0x200000) == 0 )
                          {
                            v2673 = 317;
                            KeBugCheckEx(
                              __ROR4__BugCheckCode: (317, 160),
                              BugCheckParameter1: 0xAuLL,
                              BugCheckParameter2: v2606,
                              (BugCheckParameter3: (_DWORD)v667 - (_DWORD)v2606) | 0x80000000,
                              BugCheckParameter4: 0LL);
                          }
                          if ( !*((_DWORD *)v618 + 574) )
                          {
                            *((_QWORD *)v618 + 288) = v618 - 0x5C5FC0A76E374B18LL;
                            *((_QWORD *)v618 + 289) = 0LL;
                            *((_QWORD *)v618 + 290) = 271LL;
                            *((_QWORD *)v618 + 291) = v648;
                            *((_DWORD *)v618 + 574) = 1;
                            __ba((__int64)v618, 0LL);
                          }
                        }
                        v658 = (unsigned int)v2626;
                        v655 = (_DWORD *)v2603;
                        v657 = v2612;
                        v652 = (unsigned int *)v2615;
                      }
                      v651 += 3;
                    }
                    while ( v651 != v652 );
                    v654 = v2604;
                    v650 = v2902;
                    v653 = v2601;
                  }
                  ++v654;
                  v655 += 10;
                  v2604 = v654;
                  v2603 = (__int64)v655;
                }
                while ( v654 < v650 );
                v668 = v2607;
                v669 = v2605;
                if ( v651 != v652 )
                {
                  if ( (*((_DWORD *)v618 + 612) & 0x200000) == 0 )
                  {
                    v2658 = 317;
                    KeBugCheckEx(__ROR4__BugCheckCode: (317, 160), BugCheckParameter1: 0xAuLL, BugCheckParameter2: v648, BugCheckParameter3: 3uLL, BugCheckParameter4: 0LL);
                  }
                  goto LABEL_1024;
                }
                if ( (_DWORD)v2607 )
                  v670 = (v2607 + 6) & 0xFFFFFFF8;
                else
                  v670 = 0;
                v671 = *((unsigned int *)v618 + 505);
                v672 = v671 + v670 + 8 * (3 * v650 + 6);
                if ( v672 <= *((_DWORD *)v618 + 647) )
                {
                  v673 = (ULONG_PTR)v618;
                  v2612 = (ULONG_PTR)v618;
                  *((_DWORD *)v618 + 505) = v672;
                }
                else
                {
                  v2612 = sub_140B11020(v618, v672, *((unsigned int *)v618 + 585));
                  v673 = v2612;
                  if ( !v2612 )
                    goto LABEL_853;
                  v674 = *((_DWORD *)v618 + 612);
                  if ( (v674 & 4) == 0 )
                  {
                    v675 = *((_DWORD *)v618 + 505);
                    v676 = *((_QWORD *)v618 + 249);
                    v677 = (v674 & 0x20000000) != 0 ? *((_DWORD *)v618 + 585) : 0;
                    if ( v675 >= 8 )
                    {
                      v678 = (unsigned __int64)v675 >> 3;
                      do
                      {
                        *(_QWORD *)v618 = 0LL;
                        v675 -= 8;
                        v618 += 8;
                        --v678;
                      }
                      while ( v678 );
                    }
                    for ( ; v675; --v675 )
                      *v618++ = 0;
                    v679 = *(_DWORD *)(v673 + 2340);
                    *(_DWORD *)(v673 + 2340) = v677;
                    if ( v677 == 3 )
                    {
                      (*(void (__fastcall **)(__int64))(v673 + 872))(v676);
                    }
                    else if ( (*(_DWORD *)(v673 + 2448) & 0x10000000) != 0 || !v677 )
                    {
                      (*(void (__fastcall **)(__int64))(v673 + 248))(v676);
                    }
                    else
                    {
                      (*(void (__fastcall **)(__int64, _QWORD))(v673 + 552))(v676 - 8, *(_QWORD *)(v676 - 8));
                    }
                    v673 = v2612;
                    *(_DWORD *)(v2612 + 2340) = v679;
                  }
                  *(_DWORD *)(v673 + 2448) &= ~4u;
                  v668 = v2607;
                  v650 = v2902;
                }
                v680 = v673 + v671;
                ++*(_DWORD *)(v673 + 2060);
                v681 = (_QWORD *)(v673 + v671);
                v2706 = v673 + v671;
                v682 = 48;
                v683 = 6LL;
                do
                {
                  *v681 = 0LL;
                  v682 -= 8;
                  ++v681;
                  --v683;
                }
                while ( v683 );
                for ( ; v682; --v682 )
                {
                  *(_BYTE *)v681 = 0;
                  v681 = (_QWORD *)((char *)v681 + 1);
                }
                v684 = v2620;
                *(_DWORD *)v680 = 30;
                *(_QWORD *)(v680 + 8) = v684;
                *(_DWORD *)(v680 + 16) = 0;
                v685 = *(_QWORD *)(v673 + 2072);
                for ( i15 = v685; ; LODWORD(v685) = i15 ^ v685 )
                {
                  i15 >>= 31;
                  if ( !i15 )
                    break;
                }
                *(_DWORD *)(v680 + 20) = v685 & 0x7FFFFFFF;
                v618 = (_BYTE *)v673;
                v2641 = v2706;
                v2632 = (_BYTE *)v673;
                *(_QWORD *)(v2706 + 24) = v2606;
                *(_DWORD *)(v2641 + 32) = *(_DWORD *)(v669 + 80);
                *(_DWORD *)(v2641 + 36) = v2609;
                *(_WORD *)(v2641 + 40) = v650;
                *(_WORD *)(v2641 + 42) = *(_WORD *)(v2641 + 42) & 0xFFFE | (v2611 != 0);
                v2607 = v2641 + 48;
                if ( v668 )
                  v687 = (_DWORD *)(v2641 + 48 + (((unsigned int)(v668 - 1) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL));
                else
                  v687 = (_DWORD *)(v2641 + 48);
                v688 = *(unsigned __int16 *)(v2641 + 40);
                v2626 = v687;
                v689 = &v687[6 * v688];
                v2605 = (__int64)v689;
                if ( v668 )
                  v2603 = (__int64)(v684 + 3);
                else
                  v2603 = (__int64)v652;
                if ( v650 )
                {
                  v690 = v650;
                  v691 = v687 + 2;
                  do
                  {
                    v692 = 2LL;
                    do
                    {
                      *(v691 - 2) = 0;
                      *(v691 - 1) = 0;
                      *v691 = 0x80000000;
                      v691 += 3;
                      --v692;
                    }
                    while ( v692 );
                    --v690;
                  }
                  while ( v690 );
                  v93 = v2602;
                }
                if ( v687 == v689 )
                {
LABEL_1222:
                  v2635 = v618;
                  v543 = 0;
                  goto LABEL_1223;
                }
                v693 = (_DWORD *)v2601;
                while ( 2 )
                {
                  v128 = (v693[9] & 0x2000000) == 0;
                  v694 = 0;
                  v2611 = 0;
                  if ( !v128 )
                    goto LABEL_1070;
                  v695 = *v693;
                  if ( *v693 == 1414090313 )
                  {
                    if ( v693[1] == 1195525195 )
                      goto LABEL_1070;
LABEL_1076:
                    if ( v695 != 1095914053 || *((_WORD *)v693 + 2) != 16724 )
                      goto LABEL_1078;
LABEL_1070:
                    v694 = 1;
                    v2611 = 1;
                  }
                  else
                  {
                    if ( v695 != 1162297680 )
                      goto LABEL_1076;
                    v696 = *((_WORD *)v693 + 2);
                    if ( v696 == 30839 || v696 == 29303 || v696 == 30583 )
                      goto LABEL_1070;
LABEL_1078:
                    v697 = 7;
                    v698 = *(__int64 **)(v673 + 2360);
                    v699 = (unsigned __int8 *)v693;
                    v700 = *(unsigned __int8 **)(v2612 + 2368);
                    v701 = *(unsigned __int8 **)(v2612 + 2376);
                    v702 = *(unsigned __int8 **)(v2612 + 2352);
                    while ( 1 )
                    {
                      v703 = *v699++;
                      v704 = *v702++;
                      if ( v703 != v704 )
                        break;
                      if ( !--v697 )
                        goto LABEL_1096;
                    }
                    v705 = 8;
                    v706 = (__int64 *)v693;
                    do
                    {
                      v707 = *v706++;
                      v708 = *v698++;
                      if ( v707 != v708 )
                        goto LABEL_1089;
                      v705 -= 8;
                    }
                    while ( v705 >= 8 );
                    if ( v705 )
                    {
                      while ( 1 )
                      {
                        v709 = *(unsigned __int8 *)v706;
                        v706 = (__int64 *)((char *)v706 + 1);
                        v710 = *(unsigned __int8 *)v698;
                        v698 = (__int64 *)((char *)v698 + 1);
                        if ( v709 != v710 )
                          break;
                        if ( !--v705 )
                          goto LABEL_1096;
                      }
LABEL_1089:
                      v711 = 4;
                      v712 = (unsigned __int8 *)v693;
                      while ( 1 )
                      {
                        v713 = *v712++;
                        v714 = *v700++;
                        if ( v713 != v714 )
                          break;
                        if ( !--v711 )
                          goto LABEL_1096;
                      }
                      v715 = 6;
                      v716 = (unsigned __int8 *)v693;
                      while ( 1 )
                      {
                        v717 = *v716++;
                        v718 = *v701++;
                        if ( v717 != v718 )
                          break;
                        if ( !--v715 )
                          goto LABEL_1096;
                      }
                    }
                    else
                    {
LABEL_1096:
                      v694 = 1;
                      v2611 = 1;
                    }
                    v687 = v2626;
                    v673 = v2612;
                  }
                  v719 = v693[9];
                  if ( v719 < 0 )
                  {
                    v694 = 1;
                    v2611 = 1;
                    goto LABEL_1101;
                  }
                  if ( v694 )
                  {
LABEL_1101:
                    if ( *v693 == 1414090313 && v693[1] == 1195525195 )
                    {
                      if ( (*(_DWORD *)(v673 + 2452) & 0x2000) != 0 )
                        v694 = 0;
                      v2611 = v694;
                    }
                  }
                  v720 = v2606;
                  if ( (*(_DWORD *)(v673 + 2452) & 0x4000) != 0
                    && (v719 & 0x20000000) != 0
                    && (v2606 == *(_QWORD *)(v673 + 1504) || v2606 == *(_QWORD *)(v673 + 1512)) )
                  {
                    v694 = 1;
                    v2611 = 1;
                  }
                  v721 = (unsigned int)v693[3];
                  v722 = v693[4];
                  v723 = (unsigned int *)v2615;
                  v724 = v2620;
                  if ( v722 <= v693[2] )
                    v722 = v693[2];
                  v725 = v721 + v722;
                  LODWORD(v2609) = v693[3];
                  v2604 = v725;
                  v2903 = v721;
                  if ( v2620 == (unsigned int *)v2615 )
                  {
                    v726 = 0;
                    v727 = 0;
                  }
                  else
                  {
                    v726 = *v2620;
                    v727 = v2620[1];
                    if ( *v2620 > (unsigned int)v721 )
                    {
                      v2903 = v721;
                      if ( v2620[1] > v725 )
                      {
                        v748 = v721;
                        goto LABEL_1144;
                      }
                      v2903 = v721;
                      if ( v694 )
                      {
                        v748 = v721;
                      }
                      else
                      {
                        *v687 = v721;
                        v728 = v2715;
                        v687[1] = v726;
                        v729 = v720 + v721;
                        v2903 = v726;
                        v730 = v726 - v721;
                        v731 = v2675;
                        v732 = v729 + v730;
                        for ( i16 = 0; i16 < 6; ++i16 )
                        {
                          if ( v729 < *v728 + *v731 && v732 > *v728 )
                            goto LABEL_1139;
                          ++v728;
                          ++v731;
                        }
                        v734 = v2612;
                        v735 = (_QWORD *)v729;
                        *(_DWORD *)(v2612 + 2088) += v730;
                        v736 = *(_DWORD *)(v734 + 2068);
                        v737 = *(_QWORD *)(v734 + 2072);
                        v738 = (const char *)v729;
                        if ( v729 < v732 )
                        {
                          do
                          {
                            _mm_prefetch(v738, 0);
                            v738 += 64;
                          }
                          while ( (unsigned __int64)v738 < v732 );
                        }
                        v739 = v737;
                        v740 = v730 >> 7;
                        if ( v730 >> 7 )
                        {
                          do
                          {
                            v741 = 8LL;
                            do
                            {
                              v742 = v735[1] ^ __ROL8__(*v735 ^ v739, v736);
                              v735 += 2;
                              v739 = __ROL8__(v742, v736);
                              --v741;
                            }
                            while ( v741 );
                            v743 = (__ROL8__(v737 ^ ((unsigned __int64)v735 - v729), 17) ^ v737 ^ ((unsigned __int64)v735
                                                                                                 - v729))
                                 * (unsigned __int128)0x7010008004002001uLL;
                            v2748 = *((_QWORD *)&v743 + 1);
                            v736 = ((unsigned __int8)(v743 ^ BYTE8(v743)) ^ (unsigned __int8)v736) & 0x3F;
                            if ( !v736 )
                              LOBYTE(v736) = 1;
                            --v740;
                          }
                          while ( v740 );
                          v93 = v2602;
                        }
                        v744 = v730 & 0x7F;
                        if ( v744 >= 8 )
                        {
                          v745 = (unsigned __int64)v744 >> 3;
                          do
                          {
                            v739 = __ROL8__(*v735++ ^ v739, v736);
                            v744 -= 8;
                            --v745;
                          }
                          while ( v745 );
                        }
                        for ( ; v744; --v744 )
                        {
                          v746 = *(unsigned __int8 *)v735;
                          v735 = (_QWORD *)((char *)v735 + 1);
                          v739 = __ROL8__(v746 ^ v739, v736);
                        }
                        for ( i17 = v739 >> 31; i17; i17 >>= 31 )
                          LODWORD(v739) = i17 ^ v739;
                        v725 = v2604;
                        v694 = v2611;
                        v2626[2] = v739 & 0x7FFFFFFF;
LABEL_1139:
                        v748 = v2903;
                        v673 = v2612;
                        v723 = (unsigned int *)v2615;
LABEL_1144:
                        v749 = v727 <= v725;
                        v750 = v2620;
                        if ( !v749 || v2620 == v723 )
                          goto LABEL_1190;
                        v724 = v2620;
                      }
                      v751 = (unsigned int *)v2603;
                      v752 = *(_DWORD *)(v2603 + 4);
                      if ( v752 > v725 )
                        goto LABEL_1189;
                      while ( 1 )
                      {
                        if ( v751 == v723 )
                        {
                          v748 = v2903;
LABEL_1189:
                          v750 = v2620;
                          goto LABEL_1190;
                        }
                        if ( v694 )
                        {
                          v753 = 0x80;
                        }
                        else
                        {
                          v754 = *v751;
                          v755 = v724[1];
                          v2903 = *v751;
                          if ( *v751 < (unsigned int)v755 )
                          {
                            if ( (*(_DWORD *)(v673 + 2448) & 0x200000) == 0 )
                            {
                              v2659 = 317;
                              KeBugCheckEx(__ROR4__BugCheckCode: (317, 160), BugCheckParameter1: 0xAuLL, BugCheckParameter2: v2606, BugCheckParameter3: 6uLL, BugCheckParameter4: 0LL);
                            }
                            if ( !*(_DWORD *)(v673 + 2296) )
                            {
                              v756 = v2606;
                              *(_QWORD *)(v673 + 2304) = v673 - 0x5C5FC0A76E374B18LL;
                              *(_QWORD *)(v673 + 2312) = 0LL;
                              *(_QWORD *)(v673 + 2320) = 271LL;
                              *(_QWORD *)(v673 + 2328) = v756;
                              *(_DWORD *)(v673 + 2296) = 1;
                              __ba(v673, 0LL);
                            }
                          }
                          v757 = v2675;
                          v758 = v2606 + v755;
                          v759 = v2715;
                          v760 = v754 - v755;
                          v761 = v2606 + v755 + v754 - (unsigned int)v755;
                          for ( i18 = 0; i18 < 6; ++i18 )
                          {
                            if ( v758 < *v759 + *v757 && v761 > *v759 )
                              goto LABEL_1181;
                            ++v757;
                            ++v759;
                          }
                          if ( v760 < 4 )
                          {
LABEL_1181:
                            v753 = 0x80;
                          }
                          else
                          {
                            v763 = v2612;
                            v764 = (_QWORD *)v758;
                            *(_DWORD *)(v2612 + 2088) += v760;
                            v765 = *(_DWORD *)(v763 + 2068);
                            v766 = *(_QWORD *)(v763 + 2072);
                            v767 = (const char *)v758;
                            if ( v758 < v761 )
                            {
                              do
                              {
                                _mm_prefetch(v767, 0);
                                v767 += 64;
                              }
                              while ( (unsigned __int64)v767 < v761 );
                            }
                            v768 = v766;
                            v769 = v760 >> 7;
                            if ( v760 >> 7 )
                            {
                              do
                              {
                                v770 = 8LL;
                                do
                                {
                                  v771 = v764[1] ^ __ROL8__(*v764 ^ v768, v765);
                                  v764 += 2;
                                  v768 = __ROL8__(v771, v765);
                                  --v770;
                                }
                                while ( v770 );
                                v772 = (__ROL8__(v766 ^ ((unsigned __int64)v764 - v758), 17) ^ v766 ^ ((unsigned __int64)v764 - v758))
                                     * (unsigned __int128)0x7010008004002001uLL;
                                v2749 = *((_QWORD *)&v772 + 1);
                                v765 = ((unsigned __int8)v772 ^ (unsigned __int8)(BYTE8(v772) ^ v765)) & 0x3F;
                                if ( !v765 )
                                  LOBYTE(v765) = 1;
                                --v769;
                              }
                              while ( v769 );
                              v93 = v2602;
                            }
                            v773 = v760 & 0x7F;
                            if ( v773 >= 8 )
                            {
                              v774 = (unsigned __int64)v773 >> 3;
                              do
                              {
                                v768 = __ROL8__(*v764++ ^ v768, v765);
                                v773 -= 8;
                                --v774;
                              }
                              while ( v774 );
                            }
                            for ( ; v773; --v773 )
                            {
                              v775 = *(unsigned __int8 *)v764;
                              v764 = (_QWORD *)((char *)v764 + 1);
                              v768 = __ROL8__(v775 ^ v768, v765);
                            }
                            for ( i19 = v768 >> 7; i19; i19 >>= 7 )
                              LOBYTE(v768) = i19 ^ v768;
                            v694 = v2611;
                            v753 = v768 & 0x7F;
                          }
                          v724 = v2620;
                          v725 = v2604;
                        }
                        v777 = (_BYTE *)v2607;
                        v724 += 3;
                        ++v2607;
                        v2620 = v724;
                        *v777 = v753;
                        v723 = (unsigned int *)v2615;
                        v751 = (unsigned int *)(v2603 + 12);
                        v2603 = (__int64)v751;
                        if ( v751 != (unsigned int *)v2615 )
                          v752 = v751[1];
                        if ( v752 > v725 )
                          break;
                        v673 = v2612;
                      }
                      v748 = v2903;
LABEL_1187:
                      v750 = v724;
LABEL_1190:
                      v778 = v2626;
                      if ( !v694 && v748 != v725 )
                      {
                        v779 = v2606;
                        v780 = v2675;
                        v2626[3] = v748;
                        v781 = v2715;
                        v778[4] = v725;
                        v782 = v778[3];
                        v783 = v725 - v782;
                        v784 = v782 + v779;
                        v785 = v784 + v725 - (unsigned int)v782;
                        for ( i20 = 0; i20 < 6; ++i20 )
                        {
                          if ( v784 < *v781 + *v780 && v785 > *v781 )
                            goto LABEL_1214;
                          ++v781;
                          ++v780;
                        }
                        v787 = v2612;
                        v788 = (_QWORD *)v784;
                        *(_DWORD *)(v2612 + 2088) += v783;
                        v789 = *(_DWORD *)(v787 + 2068);
                        v790 = *(_QWORD *)(v787 + 2072);
                        v791 = (const char *)v784;
                        if ( v784 < v785 )
                        {
                          do
                          {
                            _mm_prefetch(v791, 0);
                            v791 += 64;
                          }
                          while ( (unsigned __int64)v791 < v785 );
                        }
                        v792 = v790;
                        v793 = v783 >> 7;
                        if ( v783 >> 7 )
                        {
                          do
                          {
                            v794 = 8LL;
                            do
                            {
                              v795 = v788[1] ^ __ROL8__(*v788 ^ v792, v789);
                              v788 += 2;
                              v792 = __ROL8__(v795, v789);
                              --v794;
                            }
                            while ( v794 );
                            v796 = (__ROL8__(v790 ^ ((unsigned __int64)v788 - v784), 17) ^ v790 ^ ((unsigned __int64)v788
                                                                                                 - v784))
                                 * (unsigned __int128)0x7010008004002001uLL;
                            v2750 = *((_QWORD *)&v796 + 1);
                            v789 = ((unsigned __int8)v796 ^ (unsigned __int8)(BYTE8(v796) ^ v789)) & 0x3F;
                            if ( !v789 )
                              LOBYTE(v789) = 1;
                            --v793;
                          }
                          while ( v793 );
                          v93 = v2602;
                          v750 = v2620;
                        }
                        v797 = v783 & 0x7F;
                        if ( v797 >= 8 )
                        {
                          v798 = (unsigned __int64)v797 >> 3;
                          do
                          {
                            v792 = __ROL8__(*v788++ ^ v792, v789);
                            v797 -= 8;
                            --v798;
                          }
                          while ( v798 );
                        }
                        for ( ; v797; --v797 )
                        {
                          v799 = *(unsigned __int8 *)v788;
                          v788 = (_QWORD *)((char *)v788 + 1);
                          v792 = __ROL8__(v799 ^ v792, v789);
                        }
                        for ( i21 = v792; ; LODWORD(v792) = i21 ^ v792 )
                        {
                          i21 >>= 31;
                          if ( !i21 )
                            break;
                        }
                        v778 = v2626;
                        v725 = v2604;
                        v2626[5] = v792 & 0x7FFFFFFF;
                      }
LABEL_1214:
                      if ( v750 != (unsigned int *)v2615 && *v750 >= (unsigned int)v2609 && v750[1] <= v725 )
                      {
                        v801 = v2603;
                        if ( v2603 != v2615 )
                        {
                          v802 = v2607;
                          *(_BYTE *)v2607 = 0x80;
                          v2607 = v802 + 1;
                          v2603 = v801 + 12;
                        }
                        v2620 = v750 + 3;
                      }
                      v687 = v778 + 6;
                      v673 = v2612;
                      v693 = (_DWORD *)(v2601 + 40);
                      v2626 = v687;
                      v2601 += 40LL;
                      if ( v687 == (_DWORD *)v2605 )
                      {
                        v618 = v2632;
                        goto LABEL_1222;
                      }
                      continue;
                    }
                  }
                  break;
                }
                v748 = v721;
                if ( v726 < (unsigned int)v721 )
                  goto LABEL_1187;
                goto LABEL_1144;
              }
              v587[8] |= 2u;
              goto LABEL_900;
            }
            if ( ++v516 >= *(_DWORD *)(v93 + 2060) )
              goto LABEL_832;
          }
          v520 = v516 - v519;
          v519 = v516;
          while ( 2 )
          {
            v521 = *(_DWORD *)v515;
            if ( *(int *)v515 > 28 )
            {
              v529 = v521 - 30;
              if ( !v529 )
              {
                v527 = (((*(_DWORD *)(v515 + 36) != 0 ? *(_DWORD *)(v515 + 36) - 1 : 0) / 0xCu + 7) & 0xFFFFFFF8)
                     + 24 * (*(unsigned __int16 *)(v515 + 40) + 2);
                goto LABEL_823;
              }
              v530 = v529 - 3;
              if ( !v530 || (v531 = v530 - 1) == 0 )
              {
                v527 = 20
                     * (unsigned int)(((*(_DWORD *)(v515 + 32) & 0xFFF)
                                     + (unsigned __int64)*(unsigned int *)(v515 + 40)
                                     + 4095) >> 12)
                     + 48;
                goto LABEL_823;
              }
              v526 = v531 == 9;
LABEL_818:
              if ( !v526 )
              {
                v527 = 48LL;
                goto LABEL_823;
              }
            }
            else
            {
              if ( v521 == 28 )
              {
                v528 = *(unsigned __int16 *)(v515 + 40);
                goto LABEL_811;
              }
              v522 = v521 - 1;
              if ( v522 )
              {
                v523 = v522 - 6;
                if ( !v523 )
                {
                  v527 = (unsigned int)(24 * (*(_DWORD *)(v515 + 24) + 2));
                  goto LABEL_823;
                }
                v524 = v523 - 1;
                if ( v524 )
                {
                  v525 = v524 - 2;
                  if ( v525 )
                  {
                    v526 = v525 == 2;
                    goto LABEL_818;
                  }
                  v527 = (unsigned int)(16 * (*(_DWORD *)(v515 + 28) + 3));
LABEL_823:
                  v515 += v527;
                  if ( !--v520 )
                  {
                    v93 = v2602;
                    v507 = v2606;
                    v508 = v2620;
                    goto LABEL_825;
                  }
                  continue;
                }
                v528 = *(unsigned __int16 *)(v515 + 32);
LABEL_811:
                v527 = (v528 + 55) & 0xFFFFFFF8;
                goto LABEL_823;
              }
            }
            break;
          }
          v527 = 4 * (*(_DWORD *)(v515 + 16) / 0xCu) + 48;
          goto LABEL_823;
        }
        v832 = v121[10];
        (*(void (__fastcall **)(_BYTE *, _QWORD))(v93 + 416))(v2842, (unsigned int)v121[11]);
        (*(void (__fastcall **)(_BYTE *, _BYTE *))(v93 + 464))(v2842, v2871);
        v128 = v832 == 0;
        v833 = __readcr4();
        if ( v128 )
          v833 = __readcr0();
        v834 = v2871;
LABEL_1279:
        (*(void (__fastcall **)(_BYTE *))(v93 + 408))(v834);
        *((_QWORD *)&v107 + 1) = *((_QWORD *)v121 + 4);
        v835 = v833 & *((_QWORD *)v121 + 3);
        if ( v835 == *((_QWORD *)&v107 + 1) )
          goto LABEL_238;
        v166 = *((_QWORD *)v121 + 5);
        LODWORD(v107) = 0;
        if ( *(_DWORD *)(v93 + 2296) )
          goto LABEL_203;
        *((_QWORD *)&v107 + 1) ^= v835;
        *(_QWORD *)(*(_QWORD *)(v93 + 1416) + 24LL) = *((_QWORD *)&v107 + 1);
        goto LABEL_243;
      }
      if ( v134 == 13 )
        goto LABEL_1301;
      LODWORD(v107) = 0;
      switch ( v134 )
      {
        case 0:
          v290 = (_QWORD *)*((_QWORD *)v121 + 1);
          v291 = (unsigned int)v121[4];
          v292 = v290;
          *(_DWORD *)(v93 + 2088) += v291;
          v293 = (const char *)v290;
          v294 = *(_DWORD *)(v93 + 2068);
          v295 = *(_QWORD *)(v93 + 2072);
          if ( v290 < (_QWORD *)((char *)v290 + v291) )
          {
            do
            {
              _mm_prefetch(v293, 0);
              v293 += 64;
            }
            while ( v293 < (const char *)v290 + v291 );
          }
          v296 = *(_QWORD *)(v93 + 2072);
          v297 = (unsigned int)v291 >> 7;
          *((_QWORD *)&v107 + 1) = 1LL;
          if ( (unsigned int)v291 >> 7 )
          {
            do
            {
              v298 = 8LL;
              do
              {
                v299 = v292[1] ^ __ROL8__(*v292 ^ v296, v294);
                v292 += 2;
                v296 = __ROL8__(v299, v294);
                --v298;
              }
              while ( v298 );
              v107 = (__ROL8__(v295 ^ ((char *)v292 - (char *)v290), 17) ^ v295 ^ (unsigned __int64)((char *)v292 - (char *)v290))
                   * (unsigned __int128)0x7010008004002001uLL;
              v2836 = *((_QWORD *)&v107 + 1);
              v300 = v107 ^ BYTE8(v107) ^ v294;
              *((_QWORD *)&v107 + 1) = 1LL;
              v294 = v300 & 0x3F;
              if ( !v294 )
                LOBYTE(v294) = 1;
              --v297;
            }
            while ( v297 );
            v93 = v2602;
          }
          v301 = v291 & 0x7F;
          if ( v301 >= 8 )
          {
            v302 = (unsigned __int64)v301 >> 3;
            do
            {
              v296 = __ROL8__(*v292++ ^ v296, v294);
              v301 -= 8;
              --v302;
            }
            while ( v302 );
          }
          for ( ; v301; --v301 )
          {
            v303 = *(unsigned __int8 *)v292;
            v292 = (_QWORD *)((char *)v292 + 1);
            v296 = __ROL8__(v303 ^ v296, v294);
          }
          *(_QWORD *)&v107 = v296;
          while ( 1 )
          {
            *(_QWORD *)&v107 = (unsigned __int64)v107 >> 31;
            if ( !(_QWORD)v107 )
              break;
            LODWORD(v296) = v107 ^ v296;
          }
          v304 = v296 & 0x7FFFFFFF;
          v305 = 0;
          if ( v304 == v121[5] )
            goto LABEL_203;
          if ( !*v121 )
            v305 = v121[6] != 0;
          v306 = (unsigned int)v121[4];
          *((_QWORD *)&v107 + 1) = *((_QWORD *)v121 + 1);
          if ( v121[4] )
          {
            v307 = 64LL;
            if ( (*(_DWORD *)(v93 + 2452) & 0x40) != 0 )
            {
              v308 = KeGetCurrentIrql();
              __writecr8(2uLL);
              v309 = *((_QWORD *)&v107 + 1) & 0xFFFFFFFFFFFFF000uLL;
              v2601 = (*((_QWORD *)&v107 + 1) + v306 - 1) | 0xFFF;
              v2895 = (*((_QWORD *)&v107 + 1) & 0xFFFFFFFFFFFFF000uLL) - 1;
              while ( 1 )
              {
                v163 = v308;
                while ( 1 )
                {
                  LODWORD(v107) = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v93 + 1128))(
                                    v309,
                                    0LL,
                                    v307,
                                    v292);
                  if ( (_DWORD)v107 != -1073741267 )
                    break;
                  if ( v305 )
                    goto LABEL_490;
                  if ( v308 > 1u )
                    goto LABEL_488;
                  v163 = v308;
                  __writecr8(v308);
                  KeGetCurrentIrql();
                  __writecr8(2uLL);
                }
                if ( (v107 & 0x80000000) != 0LL )
                  break;
LABEL_488:
                v307 = 4096LL;
                v309 += 4096LL;
                v2895 += 4096LL;
                if ( v2895 == v2601 )
                {
LABEL_237:
                  __writecr8(v163);
                  goto LABEL_238;
                }
              }
LABEL_490:
              __writecr8(v163);
              v121 = v2600;
            }
          }
          if ( *(_DWORD *)(v93 + 2296) )
            goto LABEL_238;
          v164 = (unsigned int)v121[5];
          v165 = v304;
LABEL_242:
          *(_QWORD *)(*(_QWORD *)(v93 + 1416) + 24LL) = v165 ^ v164;
          v166 = *((_QWORD *)v121 + 1);
          goto LABEL_243;
        case 1:
          goto LABEL_187;
        case 4:
          if ( (*(_DWORD *)(v93 + 2096) & 1) != 0 )
            goto LABEL_202;
          v252 = *(_QWORD *)(v93 + 1344);
          v253 = 0;
          LODWORD(v2609) = 0;
          (*(void (__fastcall **)(_QWORD, __int64))(v93 + 376))((unsigned int)(v134 - 4), 6LL);
          if ( (*(_DWORD *)(v93 + 2448) & 0x40000000) != 0 || (v254 = *(_DWORD *)(v93 + 2384), v254 >= 7) )
          {
            (*(void (__fastcall **)(_QWORD, _QWORD))(v93 + 296))(*(_QWORD *)(v93 + 2560), 0LL);
            v255 = 0x80;
          }
          else
          {
            v255 = 1 << v254;
          }
          (*(void (__fastcall **)(__int64, _QWORD))(v93 + 312))(v252, 0LL);
          v256 = *(_QWORD ***)(v93 + 1304);
          v257 = *v256;
          if ( *v256 != v256 )
          {
            v258 = v2600;
            do
            {
              v259 = (unsigned __int64)v257 - *(_QWORD *)(v93 + 1752);
              if ( v255 != 0x80
                && (v255 & *(_BYTE *)(v259 + *(_QWORD *)(v93 + 1728))) != 0
                && (*(_DWORD *)(v259 + *(_QWORD *)(v93 + 1736)) & *(_DWORD *)(v93 + 1760)) != 0
                && !*(_DWORD *)(v93 + 2296) )
              {
                *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v93 + 2312) = (char *)v258 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v93 + 2320) = *v258;
                *(_QWORD *)(v93 + 2328) = v259 | 1;
                *(_DWORD *)(v93 + 2296) = 1;
                __ba(v93, 0LL);
              }
              _InterlockedOr8((volatile signed __int8 *)(v259 + *(_QWORD *)(v93 + 1728)), v255);
              v257 = (_QWORD *)*v257;
              ++v253;
            }
            while ( v257 != v256 );
            LODWORD(v2609) = v253;
          }
          v260 = *(_QWORD *)(v93 + 1272);
          v2601 = KeGetCurrentIrql();
          __writecr8(0xCuLL);
          (*(void (__fastcall **)(__int64, _BYTE *))(v93 + 328))(v260, v2874);
          v261 = *(_QWORD ***)(v93 + 1264);
          v262 = *v261;
          if ( *v261 != v261 )
          {
            v263 = v2600;
            v264 = v255;
            LODWORD(v2612) = v255;
            do
            {
              v265 = *(_QWORD *)(v93 + 1728);
              v266 = (char *)v262 - *(_QWORD *)(v93 + 1720);
              if ( (v266[v265] & v264) == 0 && !*(_DWORD *)(v93 + 2296) )
              {
                *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v93 + 2312) = (char *)v263 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v93 + 2320) = *v263;
                *(_QWORD *)(v93 + 2328) = v266;
                *(_DWORD *)(v93 + 2296) = 1;
                __ba(v93, 0LL);
                v265 = *(_QWORD *)(v93 + 1728);
                v264 = v2612;
              }
              _InterlockedAnd8(&v266[v265], ~v255);
              v262 = (_QWORD *)*v262;
            }
            while ( v262 != v261 );
          }
          (*(void (__fastcall **)(_BYTE *))(v93 + 392))(v2874);
          __writecr8((unsigned __int8)v2601);
          if ( v255 == 0x80 )
            (*(void (__fastcall **)(_QWORD, _QWORD))(v93 + 304))(*(_QWORD *)(v93 + 2560), 0LL);
          (*(void (__fastcall **)(_QWORD, _QWORD))(v93 + 320))(*(_QWORD *)(v93 + 1344), 0LL);
          (*(void (**)(void))(v93 + 384))();
          LODWORD(v107) = v2609;
LABEL_399:
          v251 = (_DWORD)v107 << 8;
          goto LABEL_400;
        case 5:
          v230 = *(_DWORD *)(v93 + 2096);
          if ( (v230 & 1) == 0 )
            goto LABEL_203;
          if ( _bittest((const signed __int32 *)(v93 + 2448), 0x1Eu) )
          {
            v232 = __rdtsc();
            v107 = (__ROR8__(v232, 3) ^ v232) * (unsigned __int128)0x7010008004002001uLL;
            v2835 = *((_QWORD *)&v107 + 1);
            v231 = v107 ^ *((_QWORD *)&v107 + 1);
            *((_QWORD *)&v107 + 1) = ((unsigned __int64)v107 ^ *((_QWORD *)&v107 + 1)) / 3;
            v2894 = v231 == 3LL * *((_QWORD *)&v107 + 1);
          }
          else
          {
            v231 = v230 & 3;
            v2894 = (_BYTE)v231 == 3;
          }
          v233 = *(_QWORD *)(v93 + 1344);
          v234 = 0;
          LODWORD(v2609) = 0;
          (*(void (__fastcall **)(__int64, _QWORD))(v93 + 376))(v231, *((_QWORD *)&v107 + 1));
          if ( _bittest((const signed __int32 *)(v93 + 2448), 0x1Eu) || (v235 = *(_DWORD *)(v93 + 2384), v235 >= 7) )
          {
            (*(void (__fastcall **)(_QWORD, _QWORD))(v93 + 296))(*(_QWORD *)(v93 + 2560), 0LL);
            v236 = 0x80;
          }
          else
          {
            v236 = 1 << v235;
          }
          (*(void (__fastcall **)(__int64, _QWORD))(v93 + 312))(v233, 0LL);
          v237 = *(volatile signed __int8 ***)(v93 + 1304);
          v238 = *v237;
          if ( *v237 != (volatile signed __int8 *)v237 )
          {
            do
            {
              _InterlockedOr8(&v238[*(_QWORD *)(v93 + 1728) - *(_QWORD *)(v93 + 1752)], v236);
              v238 = *(volatile signed __int8 **)v238;
              ++v234;
            }
            while ( v238 != (volatile signed __int8 *)v237 );
            LODWORD(v2609) = v234;
          }
          v239 = 4LL;
          v240 = **(_QWORD **)(v93 + 1352);
          v241 = *(unsigned int *)(*(_QWORD *)(v93 + 1848) + v240);
          v2601 = v241;
          while ( 2 )
          {
            v242 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(v93 + 256))(v240, v239);
            if ( v242 )
            {
              v243 = (_BYTE *)(*(__int64 (__fastcall **)(__int64))(v93 + 264))(v242);
              v244 = *v243 & 0x7F;
              if ( v244 == 3 )
              {
                v245 = *(_QWORD *)(v93 + 1728);
                if ( (v236 & v243[v245]) == 0
                  && (*(_DWORD *)&v243[*(_QWORD *)(v93 + 1736)] & *(_DWORD *)(v93 + 1760)) != 0
                  && !*(_DWORD *)(v93 + 2296) )
                {
                  v246 = v2600;
                  *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v93 + 2312) = (char *)v246 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v93 + 2320) = *v246;
                  *(_QWORD *)(v93 + 2328) = v243;
                  *(_DWORD *)(v93 + 2296) = 1;
                  __ba(v93, 0LL);
                  v245 = *(_QWORD *)(v93 + 1728);
                }
                _InterlockedAnd8(&v243[v245], ~v236);
                goto LABEL_394;
              }
              if ( v244 != 6 )
              {
                v249 = v244 == 0;
                goto LABEL_391;
              }
              if ( !v2894 )
                goto LABEL_394;
              v247 = *(_QWORD *)(v93 + 1672);
              v248 = *(_QWORD *)&v243[v247 + 32];
              if ( (v248 == *(_QWORD *)(v93 + 800) || v248 == *(_QWORD *)(v93 + 808))
                && *(_QWORD *)&v243[v247 + 48] == *(_QWORD *)(v93 + 816) )
              {
                v249 = *(_QWORD *)&v243[v247 + 40] == *(_QWORD *)(v93 + 824);
LABEL_391:
                if ( v249 )
                  goto LABEL_394;
              }
              if ( !*(_DWORD *)(v93 + 2296) )
              {
                v250 = v2600;
                *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v93 + 2312) = (char *)v250 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v93 + 2320) = *v250;
                *(_QWORD *)(v93 + 2328) = v243;
                *(_DWORD *)(v93 + 2296) = 1;
                __ba(v93, 0LL);
              }
LABEL_394:
              (*(void (__fastcall **)(__int64, __int64))(v93 + 288))(v240, v242);
              v241 = v2601;
            }
            v239 += 4LL;
            if ( v239 >= v241 )
            {
              if ( v236 == 0x80 )
                (*(void (__fastcall **)(_QWORD, _QWORD))(v93 + 304))(*(_QWORD *)(v93 + 2560), 0LL);
              (*(void (__fastcall **)(_QWORD, _QWORD))(v93 + 320))(*(_QWORD *)(v93 + 1344), 0LL);
              (*(void (**)(void))(v93 + 384))();
              LODWORD(v107) = (v241 >> 2) + v2609;
              goto LABEL_399;
            }
            continue;
          }
        case 7:
          (*(void (__fastcall **)(_BYTE *, _QWORD))(v93 + 416))(v2840, (unsigned int)v121[7]);
          (*(void (__fastcall **)(_BYTE *, _BYTE *))(v93 + 464))(v2840, v2841);
          for ( i22 = 0; i22 < v121[6]; ++i22 )
          {
            v224 = (unsigned int)v121[6 * i22 + 16];
            if ( (*(_BYTE *)(v93 + 2171) & 2) != 0
              && (_DWORD)v224 == -1073741694
              && KeGetPcr()->Prcb.Number == *(_DWORD *)(v93 + 2288) )
            {
              v225 = *(_QWORD *)(v93 + 2280);
            }
            else
            {
              v225 = __readmsr(v224);
            }
            v226 = *(_QWORD *)&v121[6 * i22 + 12];
            v227 = *(_QWORD *)&v121[6 * i22 + 14];
            v228 = v226 & v225;
            if ( v228 == v227 )
            {
              if ( (*(_DWORD *)(v93 + 2452) & 0x200) != 0 && v226 == -1 )
                __writemsr(v224, v228);
            }
            else
            {
              v229 = v224 | ((unsigned __int64)(unsigned int)v121[7] << 32);
              if ( !*(_DWORD *)(v93 + 2296) )
              {
                *(_QWORD *)(*(_QWORD *)(v93 + 1416) + 24LL) = v228 ^ v227;
                if ( !*(_DWORD *)(v93 + 2296) )
                {
                  *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v93 + 2312) = (char *)v121 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v93 + 2320) = *v121;
                  *(_QWORD *)(v93 + 2328) = v229;
                  *(_DWORD *)(v93 + 2296) = 1;
                  __ba(v93, 0LL);
                }
              }
            }
          }
          (*(void (__fastcall **)(_BYTE *))(v93 + 408))(v2841);
          LODWORD(v107) = v121[6] << 15;
          goto LABEL_364;
        case 8:
          v195 = *((_QWORD *)v121 + 3);
          v196 = *((_WORD *)v121 + 17);
          if ( *(_WORD *)(v195 + *(_QWORD *)(v93 + 1784) + *(_QWORD *)(v93 + 1832)) != v196 && !*(_DWORD *)(v93 + 2296) )
          {
            *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v93 + 2312) = (char *)v121 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v93 + 2320) = *v121;
            *(_QWORD *)(v93 + 2328) = v195;
            *(_DWORD *)(v93 + 2296) = 1;
            __ba(v93, 0LL);
            v196 = *((_WORD *)v121 + 17);
          }
          if ( (v196 & *(_WORD *)(v93 + 1840)) == 0
            && *(_QWORD *)(v195 + *(_QWORD *)(v93 + 1792)) != v195 + *(_QWORD *)(v93 + 1792)
            && !*(_DWORD *)(v93 + 2296) )
          {
            *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v93 + 2312) = (char *)v121 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v93 + 2320) = *v121;
            *(_QWORD *)(v93 + 2328) = v195;
            *(_DWORD *)(v93 + 2296) = 1;
            __ba(v93, 0LL);
          }
          v197 = (_QWORD *)*((_QWORD *)v121 + 1);
          v198 = (unsigned int)v121[4];
          v199 = v197;
          *(_DWORD *)(v93 + 2088) += v198;
          v200 = (const char *)v197;
          v201 = *(_DWORD *)(v93 + 2068);
          v202 = *(_QWORD *)(v93 + 2072);
          if ( v197 < (_QWORD *)((char *)v197 + v198) )
          {
            do
            {
              _mm_prefetch(v200, 0);
              v200 += 64;
            }
            while ( v200 < (const char *)v197 + v198 );
          }
          v203 = *(_QWORD *)(v93 + 2072);
          v204 = (unsigned int)v198 >> 7;
          if ( (unsigned int)v198 >> 7 )
          {
            do
            {
              v205 = 8LL;
              do
              {
                v206 = v199[1] ^ __ROL8__(*v199 ^ v203, v201);
                v199 += 2;
                v203 = __ROL8__(v206, v201);
                --v205;
              }
              while ( v205 );
              v207 = (__ROL8__(v202 ^ ((char *)v199 - (char *)v197), 17) ^ v202 ^ (unsigned __int64)((char *)v199 - (char *)v197))
                   * (unsigned __int128)0x7010008004002001uLL;
              v2834 = *((_QWORD *)&v207 + 1);
              v201 = ((unsigned __int8)v207 ^ (unsigned __int8)(BYTE8(v207) ^ v201)) & 0x3F;
              if ( !v201 )
                LOBYTE(v201) = 1;
              --v204;
            }
            while ( v204 );
            v93 = v2602;
          }
          v208 = v198 & 0x7F;
          if ( v208 >= 8 )
          {
            v209 = (unsigned __int64)v208 >> 3;
            do
            {
              v203 = __ROL8__(*v199++ ^ v203, v201);
              v208 -= 8;
              --v209;
            }
            while ( v209 );
          }
          for ( ; v208; --v208 )
          {
            v210 = *(unsigned __int8 *)v199;
            v199 = (_QWORD *)((char *)v199 + 1);
            v203 = __ROL8__(v210 ^ v203, v201);
          }
          for ( i23 = v203; ; LODWORD(v203) = i23 ^ v203 )
          {
            i23 >>= 31;
            if ( !i23 )
              break;
          }
          v212 = v203 & 0x7FFFFFFF;
          v213 = 0;
          if ( v212 == v121[5] )
            goto LABEL_340;
          if ( !*v121 )
            v213 = v121[6] != 0;
          v214 = (unsigned int)v121[4];
          v215 = *((_QWORD *)v121 + 1);
          if ( v121[4] )
          {
            v216 = 64LL;
            if ( (*(_DWORD *)(v93 + 2452) & 0x40) != 0 )
            {
              v217 = KeGetCurrentIrql();
              __writecr8(2uLL);
              v218 = v215 & 0xFFFFFFFFFFFFF000uLL;
              v2601 = (v215 + v214 - 1) | 0xFFF;
              v2893 = (v215 & 0xFFFFFFFFFFFFF000uLL) - 1;
              while ( 1 )
              {
                v219 = v217;
                while ( 1 )
                {
                  v220 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v93 + 1128))(
                           v218,
                           0LL,
                           v216,
                           v199);
                  if ( v220 != -1073741267 )
                    break;
                  if ( v213 )
                    goto LABEL_345;
                  if ( v217 > 1u )
                    goto LABEL_338;
                  v219 = v217;
                  __writecr8(v217);
                  KeGetCurrentIrql();
                  __writecr8(2uLL);
                }
                if ( v220 < 0 )
                  break;
LABEL_338:
                v218 += 4096LL;
                v2893 += 4096LL;
                if ( v2893 == v2601 )
                {
                  __writecr8(v219);
                  v121 = v2600;
LABEL_340:
                  v2711 = v121 + 12;
                  v2710[0] = *((_WORD *)v121 + 16);
                  v2710[1] = v2710[0];
                  LOBYTE(v2599) = 0;
                  if ( (*(int (__fastcall **)(_WORD *, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, __int64 *))(v93 + 488))(
                         v2710,
                         0LL,
                         0LL,
                         0LL,
                         *(_QWORD *)(v93 + 1280),
                         v2599,
                         0LL,
                         &v2682) >= 0 )
                  {
                    v221 = v2682;
                    if ( v2682 != *((_QWORD *)v121 + 3) && !*(_DWORD *)(v93 + 2296) )
                    {
                      *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v93 + 2312) = (char *)v121 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v93 + 2320) = *v121;
                      *(_QWORD *)(v93 + 2328) = v221;
                      *(_DWORD *)(v93 + 2296) = 1;
                      __ba(v93, 0LL);
                    }
                    (*(void (**)(void))(v93 + 480))();
                  }
                  goto LABEL_202;
                }
              }
LABEL_345:
              __writecr8(v219);
              v121 = v2600;
            }
          }
          if ( !*(_DWORD *)(v93 + 2296) )
          {
            *(_QWORD *)(*(_QWORD *)(v93 + 1416) + 24LL) = (unsigned int)v121[5] ^ (unsigned __int64)v212;
            v222 = *((_QWORD *)v121 + 1);
            if ( !*(_DWORD *)(v93 + 2296) )
            {
              *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v93 + 2312) = (char *)v121 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v93 + 2320) = *v121;
              *(_QWORD *)(v93 + 2328) = v222;
              *(_DWORD *)(v93 + 2296) = 1;
              __ba(v93, 0LL);
            }
          }
          goto LABEL_340;
        case 10:
          if ( !v121[6] )
          {
            DWORD2(v107) = *(_DWORD *)(v93 + 2084);
            goto LABEL_257;
          }
          if ( !*(_QWORD *)(v93 + 2432) || (v168 = *(_DWORD *)(v93 + 2452), (v168 & 4) != 0) )
          {
            LODWORD(v169) = 0;
            *(_QWORD *)&v107 = v93 + 2084;
          }
          else
          {
            *(_QWORD *)&v107 = v93 + 2084;
            *((_QWORD *)&v107 + 1) = *(unsigned int *)(v93 + 2084);
            if ( DWORD2(v107) )
            {
              if ( (v168 & 0x20) == 0 )
                goto LABEL_257;
              LODWORD(v169) = 0;
            }
            else
            {
              *(_DWORD *)(v93 + 2452) = v168 ^ ((unsigned __int8)v168 ^ (unsigned __int8)(8 * v168)) & 0x20;
LABEL_257:
              v170 = (unsigned __int64)&v121[4 * DWORD2(v107) + 12];
              *((_QWORD *)&v107 + 1) = &v121[4 * v121[7] + 12];
              v2603 = v93 + 2084;
              v2892 = *((_QWORD *)&v107 + 1);
              v2601 = v170;
              while ( 1 )
              {
                if ( *(int *)v170 >= 0 )
                {
                  v171 = *(_QWORD *)(v170 + 8);
                  v172 = *(unsigned int *)(v170 + 4);
                  v173 = (_QWORD *)v171;
                  *(_DWORD *)(v93 + 2088) += v172;
                  v174 = (const char *)v171;
                  v175 = *(_DWORD *)(v93 + 2068);
                  v176 = (unsigned int)v172;
                  v177 = *(_QWORD *)(v93 + 2072);
                  if ( v171 < v171 + v172 )
                  {
                    do
                    {
                      _mm_prefetch(v174, 0);
                      v174 += 64;
                    }
                    while ( (unsigned __int64)v174 < v171 + v172 );
                  }
                  v178 = *(_QWORD *)(v93 + 2072);
                  v179 = (unsigned int)v172 >> 7;
                  if ( (unsigned int)v172 >> 7 )
                  {
                    do
                    {
                      v180 = 8LL;
                      do
                      {
                        v181 = v173[1] ^ __ROL8__(*v173 ^ v178, v175);
                        v173 += 2;
                        v178 = __ROL8__(v181, v175);
                        --v180;
                      }
                      while ( v180 );
                      v182 = __ROL8__(v177 ^ ((unsigned __int64)v173 - v171), 17) ^ v177 ^ ((unsigned __int64)v173 - v171);
                      v2833 = (v182 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                      v175 = ((unsigned __int8)(v2833 ^ v182) ^ (unsigned __int8)v175) & 0x3F;
                      if ( !v175 )
                        LOBYTE(v175) = 1;
                      --v179;
                    }
                    while ( v179 );
                    v93 = v2602;
                    v176 = v172;
                    v170 = v2601;
                    *((_QWORD *)&v107 + 1) = v2892;
                  }
                  v183 = v172 & 0x7F;
                  if ( (unsigned int)v183 >= 8 )
                  {
                    v184 = (unsigned __int64)(unsigned int)v183 >> 3;
                    do
                    {
                      v178 = __ROL8__(*v173++ ^ v178, v175);
                      v183 = (unsigned int)(v183 - 8);
                      --v184;
                    }
                    while ( v184 );
                  }
                  if ( (_DWORD)v183 )
                  {
                    do
                    {
                      v185 = *(unsigned __int8 *)v173;
                      v173 = (_QWORD *)((char *)v173 + 1);
                      v178 = __ROL8__(v185 ^ v178, v175);
                      v183 = (unsigned int)(v183 - 1);
                    }
                    while ( (_DWORD)v183 );
                    v93 = v2602;
                  }
                  for ( i24 = v178; ; LODWORD(v178) = i24 ^ v178 )
                  {
                    i24 >>= 31;
                    if ( !i24 )
                      break;
                  }
                  v187 = *(_DWORD *)v170;
                  v188 = v178 & 0x7FFFFFFF;
                  if ( v188 != (*(_DWORD *)v170 & 0x7FFFFFFF) )
                  {
                    if ( v176 && (*(_DWORD *)(v93 + 2452) & 0x40) != 0 )
                    {
                      v189 = KeGetCurrentIrql();
                      __writecr8(2uLL);
                      v190 = v171 & 0xFFFFFFFFFFFFF000uLL;
                      v2607 = (v171 + v176 - 1) | 0xFFF;
                      v2601 = (v171 & 0xFFFFFFFFFFFFF000uLL) - 1;
                      while ( 2 )
                      {
                        v191 = v189;
                        while ( 1 )
                        {
                          v192 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v93 + 1128))(
                                   v190,
                                   0LL,
                                   v183,
                                   v173);
                          if ( v192 != -1073741267 )
                            break;
                          if ( v189 > 1u )
                            goto LABEL_286;
                          v191 = v189;
                          __writecr8(v189);
                          KeGetCurrentIrql();
                          __writecr8(2uLL);
                        }
                        if ( v192 < 0 )
                        {
                          __writecr8(v191);
                          v187 = *(_DWORD *)v170;
                          v121 = v2600;
                          goto LABEL_289;
                        }
LABEL_286:
                        v190 += 4096LL;
                        v2601 += 4096LL;
                        if ( v2601 != v2607 )
                          continue;
                        break;
                      }
                      __writecr8(v191);
                    }
                    else
                    {
LABEL_289:
                      v193 = v187;
                      if ( !*(_DWORD *)(v93 + 2296) )
                      {
                        LODWORD(v193) = v187 & 0x7FFFFFFF;
                        *(_QWORD *)(*(_QWORD *)(v93 + 1416) + 24LL) = v193 ^ v188;
                        if ( !*(_DWORD *)(v93 + 2296) )
                        {
                          *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                          *(_QWORD *)(v93 + 2312) = (char *)v121 - 0x4C48B4211BBACBEBLL;
                          *(_QWORD *)(v93 + 2320) = *v121;
                          *(_QWORD *)(v93 + 2328) = v171;
                          *(_DWORD *)(v93 + 2296) = 1;
                          __ba(v93, 0LL);
                        }
                      }
                    }
                    *((_QWORD *)&v107 + 1) = v2892;
                  }
                  v106 = v2614;
                }
                v170 += 16LL;
                v2601 = v170;
                v194 = v170 == *((_QWORD *)&v107 + 1);
                if ( v170 >= *((_QWORD *)&v107 + 1) )
                  break;
                v121 = v2600;
                if ( *(_DWORD *)(v93 + 2088) >= *v106 )
                {
                  v194 = v170 == *((_QWORD *)&v107 + 1);
                  break;
                }
              }
              if ( v194 )
                LODWORD(v169) = 0;
              else
                v169 = (__int64)(v170 - (_QWORD)(v2600 + 12)) >> 4;
              *(_QWORD *)&v107 = v2603;
            }
          }
          *(_DWORD *)v107 = v169;
          goto LABEL_238;
      }
      if ( v134 != 11 )
      {
        if ( v134 == 12 )
        {
LABEL_187:
          if ( v134 != 12 )
            goto LABEL_2304;
          if ( *(_QWORD *)(v93 + 2432) )
          {
            v135 = *(unsigned int *)(v93 + 2084);
            *((_QWORD *)&v107 + 1) = *(unsigned int *)(v93 + 2452);
            if ( !(_DWORD)v135 )
            {
              v136 = DWORD2(v107) ^ (BYTE8(v107) ^ (unsigned __int8)(8 * BYTE8(v107))) & 0x20;
              *(_DWORD *)(v93 + 2452) = v136;
              goto LABEL_425;
            }
            LOBYTE(v136) = *(_DWORD *)(v93 + 2452);
            if ( ((BYTE8(v107) ^ (unsigned __int8)(DWORD2(v107) >> 3)) & 4) == 0 )
            {
LABEL_425:
              if ( (v136 & 4) != 0 )
              {
                v267 = *((_QWORD *)v121 + 4);
                if ( v267 )
                {
                  LOWORD(v268) = v135 + v267;
                  v269 = (unsigned int)(v121[10] - v135);
                  v270 = v267 + v135;
                }
                else
                {
                  v268 = v121[2];
                  v269 = (unsigned int)v121[4];
                  v270 = *((_QWORD *)v121 + 1);
                }
                v271 = v270 & 0xFFFFFFFFFFFFF000uLL;
                v272 = ((unsigned __int64)(v268 & 0xFFF) + v269 + 4095) >> 12;
                if ( v272 )
                {
                  while ( 1 )
                  {
                    --v272;
                    if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))(v93 + 688))(v271)
                      && !*(_DWORD *)(v93 + 2296) )
                    {
                      *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v93 + 2312) = (char *)v121 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v93 + 2320) = *v121;
                      *(_QWORD *)(v93 + 2328) = v271;
                      *(_DWORD *)(v93 + 2296) = 1;
                      __ba(v93, 0LL);
                    }
                    v273 = *(_DWORD *)(v93 + 2088) + 256;
                    v271 += 4096LL;
                    *(_DWORD *)(v93 + 2088) = v273;
                    if ( v267 )
                    {
                      *(_DWORD *)(v93 + 2084) += 4096;
                      if ( v273 >= *v106 )
                        break;
                    }
                    if ( !v272 )
                      goto LABEL_438;
                  }
LABEL_439:
                  if ( !v272 )
                    *(_DWORD *)(v93 + 2084) = 0;
                }
                else
                {
LABEL_438:
                  if ( v267 )
                    goto LABEL_439;
                }
                if ( *(_DWORD *)(v93 + 2084) )
                  goto LABEL_238;
                v274 = *(_QWORD *)(v93 + 1336);
                v275 = KeGetCurrentIrql();
                __writecr8(0xFuLL);
                (*(void (__fastcall **)(__int64))(v93 + 336))(v274);
                v277 = v2600;
                v278 = **(unsigned int ***)(v93 + 1560);
                v279 = v278 + 4;
                v280 = *((_BYTE *)v278 + 12);
                v281 = (unsigned __int64)&v278[6 * *v278 + 4];
                do
                {
                  v282 = 24LL;
                  v283 = (__int64 *)(v2600 + 6);
                  v284 = v279;
                  while ( 1 )
                  {
                    v285 = *(_QWORD *)v284;
                    v284 += 2;
                    v286 = *v283++;
                    if ( v285 != v286 )
                      break;
                    v282 = (unsigned int)(v282 - 8);
                    if ( (unsigned int)v282 < 8 )
                    {
                      if ( !(_DWORD)v282 )
                        goto LABEL_451;
                      while ( 1 )
                      {
                        v276 = *(unsigned __int8 *)v284;
                        v284 = (unsigned int *)((char *)v284 + 1);
                        v287 = *(unsigned __int8 *)v283;
                        v283 = (__int64 *)((char *)v283 + 1);
                        if ( v276 != v287 )
                          goto LABEL_450;
                        v128 = (_DWORD)v282 == 1;
                        v282 = (unsigned int)(v282 - 1);
                        if ( v128 )
                          goto LABEL_451;
                      }
                    }
                  }
LABEL_450:
                  v279 += 6;
                }
                while ( (unsigned __int64)v279 < v281 );
LABEL_451:
                v93 = v2602;
                (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(v2602 + 400))(
                  *(_QWORD *)(v2602 + 1336),
                  v276,
                  v282,
                  v283);
                __writecr8(v275);
                if ( v280 )
                {
                  if ( (*(_DWORD *)(v93 + 2452) & 0x10) != 0 && !*(_DWORD *)(v93 + 2296) )
                  {
                    v288 = v2600;
                    *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v93 + 2312) = (char *)v288 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v93 + 2320) = *v288;
                    *(_QWORD *)(v93 + 2328) = 1LL;
                    *(_DWORD *)(v93 + 2296) = 1;
                    __ba(v93, 0LL);
                  }
                  LODWORD(v107) = 0;
                  if ( *((_QWORD *)v277 + 3) == 1LL )
                    goto LABEL_203;
                }
                if ( v279 != (unsigned int *)v281 || *(_DWORD *)(v93 + 2296) )
                  goto LABEL_202;
                v289 = v2600;
                *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v93 + 2312) = (char *)v289 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v93 + 2320) = *v289;
                *(_QWORD *)(v93 + 2328) = v279;
LABEL_247:
                *(_DWORD *)(v93 + 2296) = 1;
                __ba(v93, 0LL);
                goto LABEL_202;
              }
LABEL_2304:
              if ( *(_DWORD *)(v93 + 2084) )
                goto LABEL_2308;
              if ( v134 == 12 )
              {
                if ( !*(_QWORD *)(v93 + 2432) )
                {
                  *(_DWORD *)(v93 + 2084) = 0;
                  goto LABEL_2308;
                }
                v1437 = *(_DWORD *)(v93 + 2452);
                *(_DWORD *)(v93 + 2452) = v1437 ^ ((unsigned __int8)v1437 ^ (unsigned __int8)(8 * v1437)) & 0x20;
                if ( (((unsigned __int8)v1437 ^ ((unsigned __int8)v1437 ^ (unsigned __int8)(8 * v1437)) & 0x20) & 4) != 0 )
                {
                  v1438 = *((_QWORD *)v121 + 1) & 0xFFFFFFFFFFFFF000uLL;
                  v1439 = ((v121[2] & 0xFFF) + (unsigned __int64)(unsigned int)v121[4] + 4095) >> 12;
                  if ( v1439 )
                  {
                    do
                    {
                      --v1439;
                      if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64, _QWORD))(v93 + 688))(
                             v1438,
                             *((_QWORD *)&v107 + 1))
                        && !*(_DWORD *)(v93 + 2296) )
                      {
                        *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(v93 + 2312) = (char *)v121 - 0x4C48B4211BBACBEBLL;
                        *(_QWORD *)(v93 + 2320) = *v121;
                        *(_QWORD *)(v93 + 2328) = v1438;
                        *(_DWORD *)(v93 + 2296) = 1;
                        __ba(v93, 0LL);
                      }
                      *(_DWORD *)(v93 + 2088) += 256;
                      v1438 += 4096LL;
                    }
                    while ( v1439 );
                    goto LABEL_2334;
                  }
LABEL_2308:
                  v1413 = v2600;
                  v1414 = *(unsigned int *)(v93 + 2084);
                  v1415 = (unsigned int)v2600[4];
                  v2606 = *((_QWORD *)v2600 + 1);
                  v1416 = (unsigned int *)(v2606 + 12 * v1414);
                  v2615 = (__int64)v1416;
                  v2601 = v2606 + 12 * (v1415 / 0xC);
                  v1417 = (unsigned int *)&v2600[v1414 + 12];
                  v2607 = (__int64)v1417;
                  if ( v1416 == (unsigned int *)v2601 )
                    goto LABEL_2458;
                  v1418 = v2601;
                  while ( 2 )
                  {
                    if ( (*v1417 & 0x80000000) == 0 )
                    {
                      v1419 = *v1416;
                      v1420 = v1419 + *((_QWORD *)v1413 + 4);
                      v1421 = v1416[1] - v1419;
                      v2605 = v1420;
                      if ( v134 == 43 )
                      {
                        v1427 = (unsigned int)sub_140B11A74(v93, v1420, v1421);
                        v2603 = v1427;
                        *(_DWORD *)(v93 + 2088) += 8 * v1421;
                        if ( (*(_DWORD *)(v93 + 2452) & 0x800) != 0 )
                        {
                          v1490 = (_BYTE *)(v1420 - 6);
                          v1491 = (char *)(v1420 - 6 + 5);
                          v1492 = *v1491;
                          if ( *(_BYTE *)(v1420 - 6) != 76
                            || v1490[1] != 0x87
                            || v1490[2]
                            || v1490[3] != 0x98
                            || v1490[4] != 0xC3
                            || v1492 != -112 && v1492 != -15 )
                          {
                            goto LABEL_4002;
                          }
                          v1493 = *(volatile signed __int32 **)(v93 + 1240);
                          while ( 1 )
                          {
                            _disable();
                            if ( !_interlockedbittestandset(v1493, (*(_DWORD *)(v93 + 2448) >> 10) & 0x1F) )
                              break;
                            _enable();
                            _mm_pause();
                          }
                          CurrentPrcb = *(struct _KPRCB **)(v93 + 2272);
                          v1495 = 38LL;
                          v1496 = 304;
                          v1497 = CurrentPrcb;
                          do
                          {
                            *(_QWORD *)&v1497->MxCsr = 0LL;
                            v1496 -= 8;
                            v1497 = (struct _KPRCB *)((char *)v1497 + 8);
                            --v1495;
                          }
                          while ( v1495 );
                          if ( v1496 )
                          {
                            v1495 = 0xFFFFFFFFLL;
                            do
                            {
                              LOBYTE(v1497->MxCsr) = 0;
                              v1497 = (struct _KPRCB *)((char *)v1497 + 1);
                              --v1496;
                            }
                            while ( v1496 );
                          }
                          *(_OWORD *)&CurrentPrcb->NextThread = *(_OWORD *)(v93 + 2120);
                          *(_OWORD *)&CurrentPrcb->NestingLevel = *(_OWORD *)(v93 + 2136);
                          *(_OWORD *)&CurrentPrcb->ProcessorState.SpecialRegisters.KernelDr0 = *(_OWORD *)(v93 + 2152);
                          v2699 = 303;
                          v2700 = CurrentPrcb;
                          LOWORD(CurrentPrcb->NextThread) = v93 + 2188;
                          v1498 = (v93 + 2188) >> 16;
                          v2773 = v93 + 2188;
                          HIWORD(CurrentPrcb->NextThread) = v1498;
                          LODWORD(CurrentPrcb->IdleThread) = (v93 + 2188) >> 32;
                          __sidt(v2726);
                          __lidt(&v2699);
                          *v1491 = -15;
                          if ( *v1491 != -15 )
                            goto LABEL_2429;
                          if ( (*(_DWORD *)(v93 + 2452) & 0x20000) == 0 )
                          {
                            CurrentPrcb = KeGetCurrentPrcb();
                            v1498 = v93 - 0x5C5FC0A76E374B18LL;
                            **(_QWORD **)(v93 + 1208) = v93 - 0x5C5FC0A76E374B18LL;
                            **(_QWORD **)(v93 + 1216) = CurrentPrcb;
                            **(_QWORD **)(v93 + 1224) = v1420;
                            **(_QWORD **)(v93 + 1232) = 275LL;
                          }
                          ((void __fastcall(unsigned __int64, struct _KPRCB *, __int64, __int64))(v1420 - 6 + 5))(
                            v1498,
                            CurrentPrcb,
                            v1495,
                            1LL);
                          if ( (*(_DWORD *)(v93 + 2452) & 0x20000) == 0 )
                          {
                            **(_QWORD **)(v93 + 1208) = 0xA3A03F5891C8B4E8uLL;
                            **(_QWORD **)(v93 + 1216) = 0LL;
                            **(_QWORD **)(v93 + 1224) = 0LL;
                            **(_QWORD **)(v93 + 1232) = 0LL;
                          }
                          if ( *v1491 == -15 )
                          {
                            *v1491 = -112;
                            v1432 = *v1491 == -112;
                          }
                          else
                          {
LABEL_2429:
                            v1432 = 0LL;
                          }
                          __lidt(v2726);
                          _InterlockedAnd(
                            *(volatile signed __int32 **)(v93 + 1240),
                            ~(1 << ((*(_DWORD *)(v93 + 2448) >> 10) & 0x1F)));
                          _enable();
                          if ( !v1432 )
                          {
LABEL_4002:
                            if ( !*(_DWORD *)(v93 + 2296) )
                            {
                              v1499 = v2600;
                              *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                              *(_QWORD *)(v93 + 2312) = (char *)v1499 - 0x4C48B4211BBACBEBLL;
                              *(_QWORD *)(v93 + 2320) = *v1499;
                              *(_QWORD *)(v93 + 2328) = v1490;
                              *(_DWORD *)(v93 + 2296) = 1;
                              __ba(v93, 0LL);
                            }
                          }
                          v1416 = (unsigned int *)v2615;
                          v1417 = (unsigned int *)v2607;
                        }
                      }
                      else
                      {
                        *(_DWORD *)(v93 + 2088) += v1421;
                        v1422 = (_QWORD *)v1420;
                        v1423 = *(_DWORD *)(v93 + 2068);
                        v1424 = (const char *)v1420;
                        v1425 = *(_QWORD *)(v93 + 2072);
                        v1426 = v1420 + v1421;
                        if ( v1420 < v1426 )
                        {
                          do
                          {
                            _mm_prefetch(v1424, 0);
                            v1424 += 64;
                          }
                          while ( (unsigned __int64)v1424 < v1426 );
                        }
                        v1427 = *(_QWORD *)(v93 + 2072);
                        v1428 = v1421 >> 7;
                        if ( v1421 >> 7 )
                        {
                          do
                          {
                            v1429 = 8LL;
                            do
                            {
                              v1430 = v1422[1] ^ __ROL8__(*v1422 ^ v1427, v1423);
                              v1422 += 2;
                              v1427 = __ROL8__(v1430, v1423);
                              --v1429;
                            }
                            while ( v1429 );
                            v1431 = (__ROL8__(v1425 ^ ((unsigned __int64)v1422 - v1420), 17) ^ v1425 ^ ((unsigned __int64)v1422 - v1420))
                                  * (unsigned __int128)0x7010008004002001uLL;
                            v2772 = *((_QWORD *)&v1431 + 1);
                            v1423 = ((unsigned __int8)v1431 ^ (unsigned __int8)(BYTE8(v1431) ^ v1423)) & 0x3F;
                            if ( !v1423 )
                              LOBYTE(v1423) = 1;
                            --v1428;
                          }
                          while ( v1428 );
                          v93 = v2602;
                          v1417 = (unsigned int *)v2607;
                          v1418 = v2601;
                        }
                        v1432 = 1LL;
                        v1433 = v1421 & 0x7F;
                        if ( v1433 >= 8 )
                        {
                          v1434 = (unsigned __int64)(v1421 & 0x7F) >> 3;
                          do
                          {
                            v1427 = __ROL8__(*v1422++ ^ v1427, v1423);
                            v1433 -= 8;
                            --v1434;
                          }
                          while ( v1434 );
                        }
                        if ( v1433 )
                        {
                          do
                          {
                            v1435 = *(unsigned __int8 *)v1422;
                            v1422 = (_QWORD *)((char *)v1422 + 1);
                            v1427 = __ROL8__(v1435 ^ v1427, v1423);
                            --v1433;
                          }
                          while ( v1433 );
                          v1418 = v2601;
                        }
                        for ( i25 = v1427; ; v1427 = (unsigned int)i25 ^ (unsigned int)v1427 )
                        {
                          i25 >>= 31;
                          if ( !i25 )
                            break;
                        }
                        LODWORD(v1427) = v1427 & 0x7FFFFFFF;
                        v2603 = v1427;
                      }
                      v1500 = *v1417;
                      if ( (_DWORD)v1427 == (*v1417 & 0x7FFFFFFF) )
                        goto LABEL_2452;
                      if ( v1421 && (v1501 = 64LL, (*(_DWORD *)(v93 + 2452) & 0x40) != 0) )
                      {
                        v1502 = KeGetCurrentIrql();
                        __writecr8(2uLL);
                        v1503 = v1420 & 0xFFFFFFFFFFFFF000uLL;
                        v1504 = (v1421 + v1420 - 1) | 0xFFF;
                        v1505 = v1503 - 1;
                        do
                        {
                          v1506 = v1502;
                          while ( 1 )
                          {
                            v1507 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _BOOL8))(v93 + 1128))(
                                      v1503,
                                      0LL,
                                      v1501,
                                      v1432);
                            if ( v1507 != -1073741267 )
                              break;
                            if ( v1502 > 1u )
                              goto LABEL_2449;
                            v1506 = v1502;
                            __writecr8(v1502);
                            KeGetCurrentIrql();
                            __writecr8(2uLL);
                          }
                          if ( v1507 < 0 )
                          {
                            __writecr8(v1506);
                            v1417 = (unsigned int *)v2607;
                            LODWORD(v1427) = v2603;
                            v1420 = v2605;
                            v1500 = *(_DWORD *)v2607;
                            goto LABEL_2445;
                          }
LABEL_2449:
                          v1503 += 4096LL;
                          v1505 += 4096LL;
                        }
                        while ( v1505 != v1504 );
                        __writecr8(v1506);
                        v1417 = (unsigned int *)v2607;
LABEL_2451:
                        v1416 = (unsigned int *)v2615;
LABEL_2452:
                        v1413 = v2600;
                      }
                      else
                      {
LABEL_2445:
                        v1508 = v1500;
                        LODWORD(v1508) = v1500 & 0x7FFFFFFF;
                        if ( *(_DWORD *)(v93 + 2296) )
                          goto LABEL_2451;
                        v1509 = (unsigned int)v1427;
                        v1413 = v2600;
                        *(_QWORD *)(*(_QWORD *)(v93 + 1416) + 24LL) = v1508 ^ v1509;
                        if ( !*(_DWORD *)(v93 + 2296) )
                        {
                          *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                          *(_QWORD *)(v93 + 2312) = (char *)v1413 - 0x4C48B4211BBACBEBLL;
                          *(_QWORD *)(v93 + 2320) = *v1413;
                          *(_QWORD *)(v93 + 2328) = v1420;
                          *(_DWORD *)(v93 + 2296) = 1;
                          __ba(v93, 0LL);
                        }
                        v1416 = (unsigned int *)v2615;
                      }
                    }
                    ++v1417;
                    v1416 += 3;
                    v2607 = (__int64)v1417;
                    v2615 = (__int64)v1416;
                    if ( (unsigned __int64)v1416 >= v1418 || (v134 = v2890, *(_DWORD *)(v93 + 2088) >= *v2614) )
                    {
                      if ( v1416 != (unsigned int *)v2601 )
                      {
                        *((_QWORD *)&v107 + 1) = (__int64)((__int64)v1416 - v2606) / 12;
LABEL_1300:
                        *(_DWORD *)(v93 + 2084) = DWORD2(v107);
                        goto LABEL_202;
                      }
LABEL_2458:
                      v1510 = *(_QWORD *)(v93 + 1336);
                      v1511 = KeGetCurrentIrql();
                      __writecr8(0xFuLL);
                      (*(void (__fastcall **)(__int64))(v93 + 336))(v1510);
                      v1513 = v2600;
                      v1514 = **(unsigned int ***)(v93 + 1560);
                      v1515 = v1514 + 4;
                      v1516 = *((_BYTE *)v1514 + 12);
                      v1517 = (unsigned __int64)&v1514[6 * *v1514 + 4];
                      do
                      {
                        v1518 = 24LL;
                        v1519 = (__int64 *)(v2600 + 6);
                        v1520 = v1515;
                        while ( 1 )
                        {
                          v1521 = *(_QWORD *)v1520;
                          v1520 += 2;
                          v1522 = *v1519++;
                          if ( v1521 != v1522 )
                            break;
                          v1518 = (unsigned int)(v1518 - 8);
                          if ( (unsigned int)v1518 < 8 )
                          {
                            if ( !(_DWORD)v1518 )
                              goto LABEL_2467;
                            while ( 1 )
                            {
                              v1512 = *(unsigned __int8 *)v1520;
                              v1520 = (unsigned int *)((char *)v1520 + 1);
                              v1523 = *(unsigned __int8 *)v1519;
                              v1519 = (__int64 *)((char *)v1519 + 1);
                              if ( v1512 != v1523 )
                                goto LABEL_2466;
                              v128 = (_DWORD)v1518 == 1;
                              v1518 = (unsigned int)(v1518 - 1);
                              if ( v128 )
                                goto LABEL_2467;
                            }
                          }
                        }
LABEL_2466:
                        v1515 += 6;
                      }
                      while ( (unsigned __int64)v1515 < v1517 );
LABEL_2467:
                      v93 = v2602;
                      (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(v2602 + 400))(
                        *(_QWORD *)(v2602 + 1336),
                        v1512,
                        v1518,
                        v1519);
                      __writecr8(v1511);
                      if ( !v1516 )
                        goto LABEL_4003;
                      if ( (*(_DWORD *)(v93 + 2452) & 0x10) != 0 && !*(_DWORD *)(v93 + 2296) )
                      {
                        v1524 = v2600;
                        *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(v93 + 2312) = (char *)v1524 - 0x4C48B4211BBACBEBLL;
                        *(_QWORD *)(v93 + 2320) = *v1524;
                        *(_QWORD *)(v93 + 2328) = 1LL;
                        *(_DWORD *)(v93 + 2296) = 1;
                        __ba(v93, 0LL);
                      }
                      if ( *((_QWORD *)v1513 + 3) != 1LL )
                      {
LABEL_4003:
                        if ( v1515 == (unsigned int *)v1517 && !*(_DWORD *)(v93 + 2296) )
                        {
                          v1525 = v2600;
                          *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                          *(_QWORD *)(v93 + 2312) = (char *)v1525 - 0x4C48B4211BBACBEBLL;
                          *(_QWORD *)(v93 + 2320) = *v1525;
                          *(_QWORD *)(v93 + 2328) = v1515;
                          *(_DWORD *)(v93 + 2296) = 1;
                          __ba(v93, 0LL);
                        }
                      }
                      *(_DWORD *)(v93 + 2084) = 0;
                      goto LABEL_202;
                    }
                    continue;
                  }
                }
                v1440 = (_QWORD *)*((_QWORD *)v121 + 1);
                v1441 = (unsigned int)v121[4];
                v1442 = v1440;
                *(_DWORD *)(v93 + 2088) += v1441;
                v1443 = (const char *)v1440;
                v1444 = *(_DWORD *)(v93 + 2068);
                v1445 = *(_QWORD *)(v93 + 2072);
                if ( v1440 < (_QWORD *)((char *)v1440 + v1441) )
                {
                  do
                  {
                    _mm_prefetch(v1443, 0);
                    v1443 += 64;
                  }
                  while ( v1443 < (const char *)v1440 + v1441 );
                }
                v1446 = *(_QWORD *)(v93 + 2072);
                v1447 = (unsigned int)v1441 >> 7;
                if ( (unsigned int)v1441 >> 7 )
                {
                  do
                  {
                    v1448 = 8LL;
                    do
                    {
                      v1449 = v1442[1] ^ __ROL8__(*v1442 ^ v1446, v1444);
                      v1442 += 2;
                      v1446 = __ROL8__(v1449, v1444);
                      --v1448;
                    }
                    while ( v1448 );
                    v1450 = (__ROL8__(v1445 ^ ((char *)v1442 - (char *)v1440), 17) ^ v1445 ^ (unsigned __int64)((char *)v1442 - (char *)v1440))
                          * (unsigned __int128)0x7010008004002001uLL;
                    v2770 = *((_QWORD *)&v1450 + 1);
                    v1444 = ((unsigned __int8)(v1450 ^ BYTE8(v1450)) ^ (unsigned __int8)v1444) & 0x3F;
                    if ( !v1444 )
                      LOBYTE(v1444) = 1;
                    --v1447;
                  }
                  while ( v1447 );
                  v93 = v2602;
                }
                v1451 = v1441 & 0x7F;
                if ( v1451 >= 8 )
                {
                  v1452 = (unsigned __int64)v1451 >> 3;
                  do
                  {
                    v1446 = __ROL8__(*v1442++ ^ v1446, v1444);
                    v1451 -= 8;
                    --v1452;
                  }
                  while ( v1452 );
                }
                for ( ; v1451; --v1451 )
                {
                  v1453 = *(unsigned __int8 *)v1442;
                  v1442 = (_QWORD *)((char *)v1442 + 1);
                  v1446 = __ROL8__(v1453 ^ v1446, v1444);
                }
                for ( i26 = v1446; ; LODWORD(v1446) = i26 ^ v1446 )
                {
                  i26 >>= 31;
                  if ( !i26 )
                    break;
                }
                v1455 = v121[5];
                v1456 = v1446 & 0x7FFFFFFF;
                if ( v1456 != v1455 )
                {
                  v1457 = (unsigned int)v121[4];
                  v1458 = *((_QWORD *)v121 + 1);
                  if ( v121[4] && (*(_DWORD *)(v93 + 2452) & 0x40) != 0 )
                  {
                    v1459 = KeGetCurrentIrql();
                    __writecr8(2uLL);
                    v1460 = v1458 & 0xFFFFFFFFFFFFF000uLL;
                    v2605 = (v1458 + v1457 - 1) | 0xFFF;
                    v1461 = (v1458 & 0xFFFFFFFFFFFFF000uLL) - 1;
                    while ( 1 )
                    {
                      v1462 = v1459;
                      while ( 1 )
                      {
                        v1463 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v93 + 1128))(v1460, 0LL);
                        if ( v1463 != -1073741267 )
                          break;
                        if ( v1459 > 1u )
                          goto LABEL_2366;
                        v1462 = v1459;
                        __writecr8(v1459);
                        KeGetCurrentIrql();
                        __writecr8(2uLL);
                      }
                      if ( v1463 < 0 )
                        break;
LABEL_2366:
                      v1460 += 4096LL;
                      v1461 += 4096LL;
                      if ( v1461 == v2605 )
                        goto LABEL_2367;
                    }
                    __writecr8(v1462);
                    v121 = v2600;
                    v1455 = v2600[5];
                  }
                  if ( !*(_DWORD *)(v93 + 2296) )
                  {
                    *(_QWORD *)(*(_QWORD *)(v93 + 1416) + 24LL) = v1456 ^ (unsigned __int64)v1455;
                    v1464 = *((_QWORD *)v121 + 1);
                    if ( *(_DWORD *)(v93 + 2296) )
                      goto LABEL_2334;
                    *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v93 + 2312) = (char *)v121 - 0x4C48B4211BBACBEBLL;
                    v1465 = *v121;
LABEL_2365:
                    *(_QWORD *)(v93 + 2320) = v1465;
                    *(_QWORD *)(v93 + 2328) = v1464;
                    *(_DWORD *)(v93 + 2296) = 1;
                    __ba(v93, 0LL);
                    v134 = v2890;
                    goto LABEL_2308;
                  }
                  goto LABEL_2368;
                }
              }
              else
              {
                v1466 = (_QWORD *)*((_QWORD *)v121 + 1);
                v1467 = (unsigned int)v121[4];
                v1468 = v1466;
                *(_DWORD *)(v93 + 2088) += v1467;
                v1469 = (const char *)v1466;
                v1470 = *(_DWORD *)(v93 + 2068);
                v1471 = *(_QWORD *)(v93 + 2072);
                if ( v1466 < (_QWORD *)((char *)v1466 + v1467) )
                {
                  do
                  {
                    _mm_prefetch(v1469, 0);
                    v1469 += 64;
                  }
                  while ( v1469 < (const char *)v1466 + v1467 );
                }
                v1472 = *(_QWORD *)(v93 + 2072);
                v1473 = (unsigned int)v1467 >> 7;
                if ( (unsigned int)v1467 >> 7 )
                {
                  do
                  {
                    v1474 = 8LL;
                    do
                    {
                      v1475 = v1468[1] ^ __ROL8__(*v1468 ^ v1472, v1470);
                      v1468 += 2;
                      v1472 = __ROL8__(v1475, v1470);
                      --v1474;
                    }
                    while ( v1474 );
                    v1476 = (__ROL8__(v1471 ^ ((char *)v1468 - (char *)v1466), 17) ^ v1471 ^ (unsigned __int64)((char *)v1468 - (char *)v1466))
                          * (unsigned __int128)0x7010008004002001uLL;
                    v2771 = *((_QWORD *)&v1476 + 1);
                    v1470 = ((unsigned __int8)v1476 ^ (unsigned __int8)(BYTE8(v1476) ^ v1470)) & 0x3F;
                    if ( !v1470 )
                      LOBYTE(v1470) = 1;
                    --v1473;
                  }
                  while ( v1473 );
                  v93 = v2602;
                }
                v1477 = v1467 & 0x7F;
                if ( v1477 >= 8 )
                {
                  v1478 = (unsigned __int64)v1477 >> 3;
                  do
                  {
                    v1472 = __ROL8__(*v1468++ ^ v1472, v1470);
                    v1477 -= 8;
                    --v1478;
                  }
                  while ( v1478 );
                }
                for ( ; v1477; --v1477 )
                {
                  v1479 = *(unsigned __int8 *)v1468;
                  v1468 = (_QWORD *)((char *)v1468 + 1);
                  v1472 = __ROL8__(v1479 ^ v1472, v1470);
                }
                for ( i27 = v1472 >> 31; i27; i27 >>= 31 )
                  LODWORD(v1472) = i27 ^ v1472;
                v1481 = v2600;
                v1482 = v1472 & 0x7FFFFFFF;
                v1483 = 0;
                if ( v1482 != v2600[5] )
                {
                  if ( !*v2600 )
                    v1483 = v2600[6] != 0;
                  v1484 = (unsigned int)v2600[4];
                  v1485 = *((_QWORD *)v2600 + 1);
                  if ( v2600[4] )
                  {
                    v1486 = 64LL;
                    if ( (*(_DWORD *)(v93 + 2452) & 0x40) != 0 )
                    {
                      v1487 = KeGetCurrentIrql();
                      __writecr8(2uLL);
                      v1488 = v1485 & 0xFFFFFFFFFFFFF000uLL;
                      v2605 = (v1485 + v1484 - 1) | 0xFFF;
                      v2601 = (v1485 & 0xFFFFFFFFFFFFF000uLL) - 1;
                      while ( 1 )
                      {
                        v1462 = v1487;
                        while ( 1 )
                        {
                          v1489 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v93 + 1128))(
                                    v1488,
                                    0LL,
                                    v1486,
                                    v1468);
                          if ( v1489 != -1073741267 )
                            break;
                          if ( v1483 )
                            goto LABEL_2400;
                          if ( v1487 > 1u )
                            goto LABEL_2398;
                          v1462 = v1487;
                          __writecr8(v1487);
                          KeGetCurrentIrql();
                          __writecr8(2uLL);
                        }
                        if ( v1489 < 0 )
                          break;
LABEL_2398:
                        v1488 += 4096LL;
                        v2601 += 4096LL;
                        if ( v2601 == v2605 )
                        {
LABEL_2367:
                          __writecr8(v1462);
                          goto LABEL_2368;
                        }
                      }
LABEL_2400:
                      __writecr8(v1462);
                      v1481 = v2600;
                    }
                  }
                  if ( !*(_DWORD *)(v93 + 2296) )
                  {
                    *(_QWORD *)(*(_QWORD *)(v93 + 1416) + 24LL) = (unsigned int)v1481[5] ^ (unsigned __int64)v1482;
                    v1464 = *((_QWORD *)v1481 + 1);
                    if ( *(_DWORD *)(v93 + 2296) )
                      goto LABEL_2334;
                    *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v93 + 2312) = (char *)v1481 - 0x4C48B4211BBACBEBLL;
                    v1465 = *v1481;
                    goto LABEL_2365;
                  }
LABEL_2368:
                  v134 = v2890;
                  goto LABEL_2308;
                }
              }
LABEL_2334:
              v134 = v2890;
              goto LABEL_2308;
            }
LABEL_209:
            LODWORD(v107) = 0;
          }
LABEL_192:
          *(_DWORD *)(v93 + 2084) = 0;
          goto LABEL_203;
        }
LABEL_1852:
        v1167 = v134 - 2;
        if ( v1167 )
        {
          v1168 = v1167 - 1;
          if ( v1168 )
          {
            if ( v1168 != 20 )
            {
              v166 = 0LL;
              if ( *(_DWORD *)(v93 + 2296) )
                goto LABEL_202;
              *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v93 + 2312) = (char *)v121 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v93 + 2320) = 257LL;
              goto LABEL_246;
            }
            (*(void (__fastcall **)(_BYTE *, _QWORD))(v93 + 416))(v2847, (unsigned int)v121[10]);
            (*(void (__fastcall **)(_BYTE *, _BYTE *))(v93 + 464))(v2847, v2848);
            v1169 = *(_QWORD *)(v93 + 2576);
            if ( v1169 )
            {
              v1170 = *(_DWORD *)(v1169 + 800);
              v1171 = *(_QWORD *)(v93 + 2576);
              if ( v1171 )
              {
                v1172 = *(_DWORD *)(v1171 + 832);
                goto LABEL_1862;
              }
            }
            else
            {
              v1170 = __readmsr(0x832u);
            }
            v1173 = __readmsr(0x834u);
            v1172 = v1173;
LABEL_1862:
            (*(void (__fastcall **)(_BYTE *))(v93 + 408))(v2848);
            if ( (*(_BYTE *)(v93 + 2171) & 0x10) != 0 )
            {
              _disable();
              v1174 = *(_QWORD *)(v93 + 2272);
              v1175 = 38LL;
              v1176 = 304;
              v1177 = (_QWORD *)v1174;
              do
              {
                *v1177 = 0LL;
                v1176 -= 8;
                ++v1177;
                --v1175;
              }
              while ( v1175 );
              for ( ; v1176; --v1176 )
              {
                *(_BYTE *)v1177 = 0;
                v1177 = (_QWORD *)((char *)v1177 + 1);
              }
              *(_OWORD *)(v1174 + 16) = *(_OWORD *)(v93 + 2120);
              *(_OWORD *)(v1174 + 32) = *(_OWORD *)(v93 + 2136);
              *(_OWORD *)(v1174 + 288) = *(_OWORD *)(v93 + 2152);
              v2693 = 303;
              v2694 = v1174;
              *(_WORD *)(v1174 + 16) = v93 + 2168;
              v2762 = v93 + 2168;
              *(_WORD *)(v1174 + 22) = (unsigned int)(v93 + 2168) >> 16;
              *(_DWORD *)(v1174 + 24) = (v93 + 2168) >> 32;
              __sidt(v2724);
              __lidt(&v2693);
              if ( (*(_DWORD *)(v93 + 2452) & 0x20000) == 0 )
              {
                v1178 = KeGetCurrentPrcb();
                **(_QWORD **)(v93 + 1208) = v93 - 0x5C5FC0A76E374B18LL;
                **(_QWORD **)(v93 + 1216) = v1178;
                **(_QWORD **)(v93 + 1224) = 0LL;
                **(_QWORD **)(v93 + 1232) = 277LL;
              }
              KiErrata361Present();
              if ( (*(_DWORD *)(v93 + 2452) & 0x20000) == 0 )
              {
                **(_QWORD **)(v93 + 1208) = 0xA3A03F5891C8B4E8uLL;
                **(_QWORD **)(v93 + 1216) = 0LL;
                **(_QWORD **)(v93 + 1224) = 0LL;
                **(_QWORD **)(v93 + 1232) = 0LL;
              }
              __lidt(v2724);
              _enable();
            }
            v1179 = (unsigned int)v121[6];
            if ( (v1170 & v121[7]) != (_DWORD)v1179
              || (v1170 & 0x10000) == 0
              && (unsigned __int8)v1170 != 209
              && (unsigned int)(unsigned __int8)v1170 - 253 >= 2 )
            {
              *((_QWORD *)&v107 + 1) = v1179 | ((unsigned __int64)(unsigned int)v121[10] << 48) | 0x32000000000LL;
              if ( !*(_DWORD *)(v93 + 2296) )
              {
                *(_QWORD *)(*(_QWORD *)(v93 + 1416) + 24LL) = v1170 ^ v1179;
                if ( !*(_DWORD *)(v93 + 2296) )
                {
                  *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v93 + 2312) = (char *)v121 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v93 + 2320) = *v121;
                  *(_QWORD *)(v93 + 2328) = *((_QWORD *)&v107 + 1);
                  *(_DWORD *)(v93 + 2296) = 1;
                  __ba(v93, 0LL);
                }
              }
            }
            v1180 = (unsigned int)v121[8];
            if ( (v1172 & v121[9]) != (_DWORD)v1180
              || (v1172 & 0x10000) == 0
              && (unsigned __int8)v1172 != 209
              && (unsigned int)(unsigned __int8)v1172 - 253 >= 2 )
            {
              *((_QWORD *)&v107 + 1) = v1180 | ((unsigned __int64)(unsigned int)v121[10] << 48) | 0x34000000000LL;
              if ( !*(_DWORD *)(v93 + 2296) )
              {
                *(_QWORD *)(*(_QWORD *)(v93 + 1416) + 24LL) = v1180 ^ v1172;
                if ( !*(_DWORD *)(v93 + 2296) )
                {
                  *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v93 + 2312) = (char *)v121 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v93 + 2320) = *v121;
                  *(_QWORD *)(v93 + 2328) = *((_QWORD *)&v107 + 1);
                  goto LABEL_1933;
                }
              }
            }
          }
          else
          {
            (*(void (__fastcall **)(_BYTE *, _QWORD))(v93 + 416))(v2849, (unsigned int)v121[10]);
            (*(void (__fastcall **)(_BYTE *, _BYTE *))(v93 + 464))(v2849, v2850);
            KiGetGdtIdt(&v2677, v2872);
            v1181 = v2678;
            v1182 = (unsigned int)v121[4];
            if ( (*(_BYTE *)(v93 + 2171) & 2) != 0 )
            {
              v1183 = *(_QWORD *)(v93 + 2272);
              v1184 = 38LL;
              v1185 = 304;
              v1186 = (_QWORD *)v1183;
              do
              {
                *v1186 = 0LL;
                v1185 -= 8;
                ++v1186;
                --v1184;
              }
              while ( v1184 );
              if ( v1185 )
              {
                v1184 = 0xFFFFFFFFLL;
                do
                {
                  *(_BYTE *)v1186 = 0;
                  v1186 = (_QWORD *)((char *)v1186 + 1);
                  --v1185;
                }
                while ( v1185 );
              }
              *(_OWORD *)(v1183 + 16) = *(_OWORD *)(v93 + 2120);
              *(_OWORD *)(v1183 + 32) = *(_OWORD *)(v93 + 2136);
              *(_OWORD *)(v1183 + 288) = *(_OWORD *)(v93 + 2152);
              v2695 = 303;
              v2696 = v1183;
              *(_WORD *)(v1183 + 16) = v93 + 2168;
              v2763 = v93 + 2168;
              *(_WORD *)(v1183 + 22) = (unsigned int)(v93 + 2168) >> 16;
              *(_DWORD *)(v1183 + 24) = (v93 + 2168) >> 32;
              _disable();
              __sidt(v2725);
              __lidt(&v2695);
              __writedr(7u, 0LL);
              *(_WORD *)(v1183 + 16) = v93 + 2174;
              v1187 = (v93 + 2174) >> 16;
              *(_WORD *)(v1183 + 22) = v1187;
              *(_DWORD *)(v1183 + 24) = (v93 + 2174) >> 32;
              if ( (*(_BYTE *)(v93 + 2171) & 0x20) != 0 )
              {
                *(_WORD *)(v93 + 2218) = KiGetSs(v1187, v1183, v1184, 1LL);
                __writedr(0, v93 + 2218);
                __writedr(7u, 0x70001uLL);
                *(_QWORD *)(v93 + 2280) = KiErrataSkx55Present(v93 + 2218);
                __writedr(7u, 0LL);
                __writedr(0, 0LL);
              }
              else
              {
                *(_QWORD *)(v93 + 2280) = KiErrata704Present(v1187, v1183, v1184, 1LL);
              }
              *(_DWORD *)(v93 + 2288) = KeGetPcr()->Prcb.Number;
              __lidt(v2725);
              _enable();
            }
            Ldtr = (unsigned __int16)KiGetLdtr();
            Tr = KiGetTr();
            *(_DWORD *)(v93 + 2088) += v1182;
            v1190 = *(_DWORD *)(v93 + 2068);
            v1191 = Tr;
            v1192 = *(_QWORD *)(v93 + 2072);
            v1193 = v1181;
            v2916 = Tr;
            v1194 = (const char *)v1181;
            if ( v1181 < (_QWORD *)((char *)v1181 + v1182) )
            {
              do
              {
                _mm_prefetch(v1194, 0);
                v1194 += 64;
              }
              while ( v1194 < (const char *)v1181 + v1182 );
            }
            v1195 = *(_QWORD *)(v93 + 2072);
            v1196 = (unsigned int)v1182 >> 7;
            if ( (unsigned int)v1182 >> 7 )
            {
              do
              {
                v1197 = 8LL;
                do
                {
                  v1198 = v1193[1] ^ __ROL8__(*v1193 ^ v1195, v1190);
                  v1193 += 2;
                  v1195 = __ROL8__(v1198, v1190);
                  --v1197;
                }
                while ( v1197 );
                v1199 = (__ROL8__(v1192 ^ ((char *)v1193 - (char *)v1181), 17) ^ v1192 ^ (unsigned __int64)((char *)v1193 - (char *)v1181))
                      * (unsigned __int128)0x7010008004002001uLL;
                v2764 = *((_QWORD *)&v1199 + 1);
                v1190 = ((unsigned __int8)v1199 ^ (unsigned __int8)(BYTE8(v1199) ^ v1190)) & 0x3F;
                if ( !v1190 )
                  LOBYTE(v1190) = 1;
                --v1196;
              }
              while ( v1196 );
              v93 = v2602;
              v1191 = v2916;
            }
            v1200 = v1182 & 0x7F;
            if ( v1200 >= 8 )
            {
              v1201 = (unsigned __int64)v1200 >> 3;
              do
              {
                v1195 = __ROL8__(*v1193++ ^ v1195, v1190);
                v1200 -= 8;
                --v1201;
              }
              while ( v1201 );
            }
            if ( v1200 )
            {
              do
              {
                v1202 = *(unsigned __int8 *)v1193;
                v1193 = (_QWORD *)((char *)v1193 + 1);
                v1195 = __ROL8__(v1202 ^ v1195, v1190);
                --v1200;
              }
              while ( v1200 );
              v93 = v2602;
            }
            for ( i28 = v1195; ; LODWORD(v1195) = i28 ^ v1195 )
            {
              i28 >>= 31;
              if ( !i28 )
                break;
            }
            v1204 = v1195 & 0x7FFFFFFF;
            (*(void (__fastcall **)(_BYTE *, __int64, _QWORD *))(v93 + 408))(v2850, 1LL, v1193);
            v1205 = v2600;
            if ( v1204 != v2600[5] || v2677 != *((_WORD *)v2600 + 22) || (_WORD)Ldtr || v1191 != 64 )
            {
              if ( (*(_DWORD *)(v93 + 2448) & 0x40000000) != 0 )
              {
                v1206 = *(_QWORD **)(v93 + 2688);
                v1207 = 48;
                v1208 = 6LL;
                do
                {
                  v1207 -= 8;
                  *v1206 = *(_QWORD *)v1205;
                  v1205 += 2;
                  ++v1206;
                  --v1208;
                }
                while ( v1208 );
                if ( v1207 )
                {
                  do
                  {
                    v1209 = *(_BYTE *)v1205;
                    v1205 = (int *)((char *)v1205 + 1);
                    *(_BYTE *)v1206 = v1209;
                    v1206 = (_QWORD *)((char *)v1206 + 1);
                    --v1207;
                  }
                  while ( v1207 );
                  v93 = v2602;
                }
                v1205 = *(int **)(v93 + 2688);
              }
              *((_QWORD *)&v107 + 1) = v1204;
              *((_QWORD *)v1205 + 3) = v2678;
              *((_QWORD *)v1205 + 4) = v1204;
              if ( (_WORD)Ldtr )
              {
                *((_QWORD *)v1205 + 3) = Ldtr;
              }
              else if ( v1191 != 64 )
              {
                *((_QWORD *)v1205 + 3) = v1191;
              }
              v1210 = *(_DWORD *)(v93 + 2296);
              if ( !v1210 )
              {
                *(_QWORD *)(*(_QWORD *)(v93 + 1416) + 24LL) = v1204 ^ (unsigned __int64)(unsigned int)v1205[5];
                v1210 = *(_DWORD *)(v93 + 2296);
              }
              v1211 = *((_QWORD *)v1205 + 1);
              if ( !v1210 )
              {
                *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v93 + 2312) = (char *)v1205 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v93 + 2320) = *v1205;
                *(_QWORD *)(v93 + 2328) = v1211;
LABEL_1933:
                *(_DWORD *)(v93 + 2296) = 1;
                __ba(v93, 0LL);
              }
            }
          }
          *(_DWORD *)(v93 + 2088) += 0x8000;
          LODWORD(v107) = 0;
          goto LABEL_203;
        }
        v1212 = (unsigned int)v121[10];
        v2611 = 0;
        (*(void (__fastcall **)(_BYTE *, __int64))(v93 + 416))(v2851, v1212);
        (*(void (__fastcall **)(_BYTE *, _BYTE *))(v93 + 464))(v2851, v2852);
        KiGetGdtIdt(v2873, &v2697);
        v2605 = v2698;
        v1213 = 0;
        v1214 = v2698 + 4;
        v2601 = v2698 + 4;
        while ( 2 )
        {
          v1215 = 0LL;
          v2642 = *(_QWORD *)(v93 + 2248);
          v1216 = 0LL;
          v1217 = *(_QWORD *)(v93 + 2256);
          v1218 = *(unsigned int *)(v93 + 2220);
          v2609 = 0LL;
          v1219 = *(unsigned int *)(v93 + 2224);
          v2603 = v1217;
          v2607 = 0LL;
          v1220 = KeGetCurrentIrql();
          __writecr8(0xFuLL);
          v1221 = *(_WORD *)v1214;
          LOWORD(v2616) = *(_WORD *)(v1214 - 4);
          WORD1(v2616) = *(_WORD *)(v1214 + 2);
          v1222 = *(_DWORD *)(v1214 + 4);
          v1223 = *(_QWORD *)(v93 + 1568);
          HIDWORD(v2616) = v1222;
          v1224 = v2616;
          v2917 = v1221;
          v1225 = (_QWORD *)(v1223 + 8LL * v1213);
          if ( v2616 == v1225 )
          {
            if ( (v1221 & 0x6000) != 0 )
            {
              __writecr8(v1220);
              goto LABEL_1989;
            }
            v1216 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _QWORD *, unsigned __int64, _QWORD))(v93 + 1144))(
                                 v1213,
                                 v1225,
                                 v1217,
                                 0LL);
            if ( v1216 )
            {
              v1226 = *(_QWORD *)(v1218 + v1216);
              v2609 = v1226;
              if ( v1213 < 0x30 )
              {
                __writecr8(v1220);
LABEL_1988:
                v1215 = v2609;
LABEL_1989:
                v1251 = *(_QWORD *)(v93 + 1416);
                *(_QWORD *)v1251 = v1224;
                *(_DWORD *)(v1251 + 16) = 128;
                if ( v1215 )
                {
                  v1252 = *(_QWORD *)(v93 + 1416);
                  *(_QWORD *)(v1252 + 8) = v1215;
                  *(_DWORD *)(v1252 + 20) = 128;
                }
                v2611 = 1;
                goto LABEL_1958;
              }
              v1227 = *(_QWORD *)(v1219 + v1216);
              v1217 = v2603;
LABEL_1946:
              __writecr8(v1220);
              if ( !v1216 )
              {
                if ( (unsigned __int64)v1224 < v2642 )
                  goto LABEL_1988;
                if ( (unsigned __int64)v1224 > v1217 )
                  goto LABEL_1988;
                v1228 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD))(v93 + 528))(
                          *(_QWORD *)(v93 + 2264),
                          v2642,
                          (unsigned int)((_DWORD)v2616 - v2642));
                if ( !v1228 || (*(_DWORD *)(v1228 + 36) & 0x2000000) != 0 )
                  goto LABEL_1988;
              }
              if ( *(_WORD *)(v2601 - 2) != 16 || (*(_WORD *)v2601 & 0x1F00) != 0xE00 || *(__int16 *)v2601 >= 0 )
                goto LABEL_1988;
              v1229 = (unsigned int *)(*(__int64 (__fastcall **)(_QWORD *, unsigned __int64 *, _QWORD))(v93 + 608))(
                                        v1224,
                                        &v2642,
                                        0LL);
              if ( v1229 && (_QWORD *)(v2642 + *v1229) == v1224 && v2642 == *(_QWORD *)(v93 + 2248) )
              {
                if ( !v1216 )
                  goto LABEL_1958;
              }
              else if ( !v1216 )
              {
                goto LABEL_1988;
              }
              if ( (v2917 & 0x6000) != 0 )
                goto LABEL_1988;
              if ( v1216 != -1 )
              {
                v1249 = (unsigned int *)(*(__int64 (__fastcall **)(__int64, unsigned __int64 *, _QWORD))(v93 + 608))(
                                          v1226,
                                          &v2642,
                                          0LL);
                if ( !v1249 )
                  goto LABEL_1988;
                if ( v2642 + *v1249 != v1226 )
                  goto LABEL_1988;
                if ( v2642 != *(_QWORD *)(v93 + 2248) )
                  goto LABEL_1988;
                v1250 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD))(v93 + 528))(
                          *(_QWORD *)(v93 + 2264),
                          v2642,
                          (unsigned int)(v1226 - v2642));
                if ( !v1250
                  || (*(_DWORD *)(v1250 + 36) & 0x2000000) != 0
                  || v1213 == 254 && v1227 != *(_QWORD *)(v93 + 2232) )
                {
                  goto LABEL_1988;
                }
              }
LABEL_1958:
              ++v1213;
              v1214 = v2601 + 16;
              v2601 += 16LL;
              if ( v1213 > 0xFF )
              {
                if ( (*(_BYTE *)(v93 + 2171) & 1) != 0 )
                {
                  _disable();
                  v1230 = 3221225602LL;
                  v1231 = __readmsr(0xC0000082);
                  v1232 = (struct _KPRCB *)((v93 + 2170) >> 32);
                  __writemsr(0xC0000082, v93 + 2170);
                  if ( !_bittest((const signed __int32 *)(v93 + 2452), 0x11u) )
                  {
                    v1232 = KeGetCurrentPrcb();
                    v1230 = v93 - 0x5C5FC0A76E374B18LL;
                    **(_QWORD **)(v93 + 1208) = v93 - 0x5C5FC0A76E374B18LL;
                    **(_QWORD **)(v93 + 1216) = v1232;
                    **(_QWORD **)(v93 + 1224) = 3221225602LL;
                    **(_QWORD **)(v93 + 1232) = 274LL;
                  }
                  ((void __fastcall(__int64, struct _KPRCB *))(v93 + 2172))(v1230, v1232);
                  if ( !_bittest((const signed __int32 *)(v93 + 2452), 0x11u) )
                  {
                    **(_QWORD **)(v93 + 1208) = 0xA3A03F5891C8B4E8uLL;
                    **(_QWORD **)(v93 + 1216) = 0LL;
                    **(_QWORD **)(v93 + 1224) = 0LL;
                    **(_QWORD **)(v93 + 1232) = 0LL;
                  }
                  __writemsr(0xC0000082, v1231);
                  _enable();
                }
                v1233 = (_QWORD *)v2605;
                *(_DWORD *)(v93 + 2088) += 848;
                v1234 = v1233;
                v1235 = *(_DWORD *)(v93 + 2088);
                v1236 = (const char *)v1233;
                v1237 = *(_DWORD *)(v93 + 2068);
                v1238 = *(_QWORD *)(v93 + 2072);
                if ( v1233 < v1233 + 106 )
                {
                  do
                  {
                    _mm_prefetch(v1236, 0);
                    v1236 += 64;
                  }
                  while ( v1236 < (const char *)v1233 + 848 );
                }
                v1239 = 6;
                v1240 = *(_QWORD *)(v93 + 2072);
                do
                {
                  v1241 = 8LL;
                  do
                  {
                    v1242 = v1234[1] ^ __ROL8__(*v1234 ^ v1240, v1237);
                    v1234 += 2;
                    v1240 = __ROL8__(v1242, v1237);
                    --v1241;
                  }
                  while ( v1241 );
                  v1243 = (__ROL8__(v1238 ^ ((char *)v1234 - (char *)v1233), 17) ^ v1238 ^ (unsigned __int64)((char *)v1234 - (char *)v1233))
                        * (unsigned __int128)0x7010008004002001uLL;
                  v2765 = *((_QWORD *)&v1243 + 1);
                  v1237 = ((unsigned __int8)(v1243 ^ BYTE8(v1243)) ^ (unsigned __int8)v1237) & 0x3F;
                  if ( !v1237 )
                    LOBYTE(v1237) = 1;
                  --v1239;
                }
                while ( v1239 );
                v93 = v2602;
                v1244 = 80;
                v1245 = v2611;
                v1246 = 10LL;
                do
                {
                  v1240 = __ROL8__(*v1234++ ^ v1240, v1237);
                  v1244 -= 8;
                  --v1246;
                }
                while ( v1246 );
                for ( ; v1244; --v1244 )
                {
                  v1247 = *(unsigned __int8 *)v1234;
                  v1234 = (_QWORD *)((char *)v1234 + 1);
                  v1240 = __ROL8__(v1247 ^ v1240, v1237);
                }
                for ( i29 = v1240; ; LODWORD(v1240) = i29 ^ v1240 )
                {
                  i29 >>= 31;
                  if ( !i29 )
                    break;
                }
                v1253 = v1240 & 0x7FFFFFFF;
                *(_DWORD *)(v2602 + 2088) = v1235 + 16;
                v1254 = v1233 + 450;
                v1255 = *(_DWORD *)(v93 + 2068);
                v1256 = *(_QWORD *)(v93 + 2072);
                v1257 = (const char *)(v1233 + 450);
                if ( v1233 + 450 < v1233 + 452 )
                {
                  do
                  {
                    _mm_prefetch(v1257, 0);
                    v1257 += 64;
                  }
                  while ( v1257 < (const char *)v1233 + 3616 );
                }
                v1258 = 2LL;
                v1259 = 16;
                do
                {
                  v1256 = __ROL8__(*v1254++ ^ v1256, v1255);
                  v1259 -= 8;
                  --v1258;
                }
                while ( v1258 );
                for ( ; v1259; --v1259 )
                {
                  v1260 = *(unsigned __int8 *)v1254;
                  v1254 = (_QWORD *)((char *)v1254 + 1);
                  v1256 = __ROL8__(v1260 ^ v1256, v1255);
                }
                for ( i30 = v1256; ; LODWORD(v1256) = i30 ^ v1256 )
                {
                  i30 >>= 31;
                  if ( !i30 )
                    break;
                }
                v1262 = v1256 & 0x7FFFFFFF;
                (*(void (__fastcall **)(_BYTE *, _QWORD *))(v93 + 408))(v2852, v1254);
                *((_QWORD *)&v107 + 1) = v2600;
                v1263 = (unsigned int)v2600[5];
                if ( v1253 != (_DWORD)v1263
                  || v1262 != *((_QWORD *)v2600 + 3)
                  || v2697 != *((_WORD *)v2600 + 22)
                  || v1245 )
                {
                  if ( !v1245 )
                  {
                    if ( v1262 == *((_QWORD *)v2600 + 3) )
                    {
                      if ( !*(_DWORD *)(v93 + 2296) )
                      {
                        v1264 = v1253;
                        goto LABEL_2013;
                      }
                    }
                    else
                    {
                      v1264 = (unsigned int)v2600[6];
                      if ( !*(_DWORD *)(v93 + 2296) )
                      {
                        v1263 = v1262;
LABEL_2013:
                        *(_QWORD *)(*(_QWORD *)(v93 + 1416) + 24LL) = v1264 ^ v1263;
                      }
                    }
                  }
                  v1265 = *(_QWORD *)(*((_QWORD *)&v107 + 1) + 8LL);
                  if ( !*(_DWORD *)(v93 + 2296) )
                  {
                    *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v93 + 2312) = *((_QWORD *)&v107 + 1) - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v93 + 2320) = (int)**((_DWORD **)&v107 + 1);
                    *(_QWORD *)(v93 + 2328) = v1265;
                    *(_DWORD *)(v93 + 2296) = 1;
                    __ba(v93, 0LL);
                  }
                }
                *(_DWORD *)(v93 + 2088) += 0x10000;
                goto LABEL_202;
              }
              continue;
            }
            v1217 = v2603;
            v1216 = -1LL;
            v1227 = 0LL;
          }
          else
          {
            v1227 = v2607;
          }
          break;
        }
        v1226 = v2609;
        goto LABEL_1946;
      }
      if ( !*(_QWORD *)(v93 + 2432) )
        goto LABEL_192;
      if ( *(_DWORD *)(v93 + 2084) )
      {
        v137 = *(_DWORD *)(v93 + 2452);
        if ( (((unsigned __int8)v137 ^ (unsigned __int8)(v137 >> 3)) & 4) != 0 )
          goto LABEL_209;
      }
      else
      {
        v137 = *(_DWORD *)(v93 + 2452) ^ ((unsigned __int8)*(_DWORD *)(v93 + 2452) ^ (unsigned __int8)(8 * *(_DWORD *)(v93 + 2452))) & 0x20;
        *(_DWORD *)(v93 + 2452) = v137;
      }
      if ( (v137 & 4) != 0 )
      {
        LODWORD(v107) = 0;
        v138 = *((_QWORD *)v121 + 1) & 0xFFFFFFFFFFFFF000uLL;
        v139 = ((v121[2] & 0xFFF) + (unsigned __int64)(unsigned int)v121[4] + 4095) >> 12;
        if ( v139 )
        {
          do
          {
            --v139;
            if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64, _QWORD))(v93 + 688))(v138, *((_QWORD *)&v107 + 1))
              && !*(_DWORD *)(v93 + 2296) )
            {
              *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v93 + 2312) = (char *)v121 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v93 + 2320) = *v121;
              *(_QWORD *)(v93 + 2328) = v138;
              *(_DWORD *)(v93 + 2296) = 1;
              __ba(v93, 0LL);
            }
            *(_DWORD *)(v93 + 2088) += 256;
            v138 += 4096LL;
          }
          while ( v139 );
          goto LABEL_202;
        }
        goto LABEL_203;
      }
      v142 = (_QWORD *)*((_QWORD *)v121 + 1);
      v143 = (unsigned int)v121[4];
      v144 = v142;
      *(_DWORD *)(v93 + 2088) += v143;
      v145 = (const char *)v142;
      v146 = *(_DWORD *)(v93 + 2068);
      v147 = *(_QWORD *)(v93 + 2072);
      if ( v142 < (_QWORD *)((char *)v142 + v143) )
      {
        do
        {
          _mm_prefetch(v145, 0);
          v145 += 64;
        }
        while ( v145 < (const char *)v142 + v143 );
      }
      v148 = *(_QWORD *)(v93 + 2072);
      v149 = (unsigned int)v143 >> 7;
      if ( (unsigned int)v143 >> 7 )
      {
        do
        {
          v150 = 8LL;
          do
          {
            v151 = v144[1] ^ __ROL8__(*v144 ^ v148, v146);
            v144 += 2;
            v148 = __ROL8__(v151, v146);
            --v150;
          }
          while ( v150 );
          v152 = (__ROL8__(v147 ^ ((char *)v144 - (char *)v142), 17) ^ v147 ^ (unsigned __int64)((char *)v144
                                                                                               - (char *)v142))
               * (unsigned __int128)0x7010008004002001uLL;
          v2832 = *((_QWORD *)&v152 + 1);
          v146 = (BYTE8(v152) ^ (unsigned __int8)(v152 ^ v146)) & 0x3F;
          if ( !v146 )
            LOBYTE(v146) = 1;
          --v149;
        }
        while ( v149 );
        v93 = v2602;
      }
      v153 = v143 & 0x7F;
      if ( v153 >= 8 )
      {
        v154 = (unsigned __int64)v153 >> 3;
        do
        {
          v148 = __ROL8__(*v144++ ^ v148, v146);
          v153 -= 8;
          --v154;
        }
        while ( v154 );
      }
      for ( ; v153; --v153 )
      {
        v155 = *(unsigned __int8 *)v144;
        v144 = (_QWORD *)((char *)v144 + 1);
        v148 = __ROL8__(v155 ^ v148, v146);
      }
      for ( i31 = v148; ; LODWORD(v148) = i31 ^ v148 )
      {
        i31 >>= 31;
        if ( !i31 )
          break;
      }
      *((_QWORD *)&v107 + 1) = (unsigned int)v121[5];
      v157 = v148 & 0x7FFFFFFF;
      if ( v157 == DWORD2(v107) )
        goto LABEL_202;
      v158 = (unsigned int)v121[4];
      v159 = *((_QWORD *)v121 + 1);
      if ( v121[4] && (*(_DWORD *)(v93 + 2452) & 0x40) != 0 )
      {
        v160 = KeGetCurrentIrql();
        __writecr8(2uLL);
        v161 = v159 & 0xFFFFFFFFFFFFF000uLL;
        v2891 = (v159 + v158 - 1) | 0xFFF;
        v162 = (v159 & 0xFFFFFFFFFFFFF000uLL) - 1;
        while ( 1 )
        {
          v163 = v160;
          while ( 1 )
          {
            LODWORD(v107) = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v93 + 1128))(v161, 0LL);
            if ( (_DWORD)v107 != -1073741267 )
              break;
            if ( v160 > 1u )
              goto LABEL_236;
            v163 = v160;
            __writecr8(v160);
            KeGetCurrentIrql();
            __writecr8(2uLL);
          }
          if ( (v107 & 0x80000000) != 0LL )
            break;
LABEL_236:
          v161 += 4096LL;
          v162 += 4096LL;
          if ( v162 == v2891 )
            goto LABEL_237;
        }
        __writecr8(v163);
        v121 = v2600;
        *((_QWORD *)&v107 + 1) = (unsigned int)v2600[5];
      }
      LODWORD(v107) = 0;
      if ( !*(_DWORD *)(v93 + 2296) )
      {
        v164 = v157;
        v165 = DWORD2(v107);
        goto LABEL_242;
      }
LABEL_203:
      v140 = v2631;
      if ( *(_DWORD *)(v93 + 2084) != (_DWORD)v107 )
      {
        *((_QWORD *)&v107 + 1) = 0xFFFFFFFFLL;
        v140 = v2631 - 1;
      }
      v105 = v140 + 1;
      v2631 = v105;
      if ( *(_DWORD *)(v93 + 2296) != (_DWORD)v107 )
        goto LABEL_2477;
      v106 = (int *)(v93 + 2092);
      v141 = *(_DWORD *)(v93 + 2092);
      v2614 = (int *)(v93 + 2092);
      if ( *(_DWORD *)(v93 + 2088) >= v141 )
        goto LABEL_2476;
      v108 = v2624;
      *((_QWORD *)&v107 + 1) = 6LL;
      v109 = v2613;
      v110 = v2610;
    }
    v122 = v105 - v119;
    v119 = v105;
    while ( 1 )
    {
      v123 = *v121;
      if ( *v121 > 28 )
      {
        v131 = v123 - 30;
        if ( !v131 )
        {
          v129 = (((v121[9] != 0 ? v121[9] - 1 : 0) / 0xCu + 7) & 0xFFFFFFF8)
               + 24 * (*((unsigned __int16 *)v121 + 20) + 2);
          goto LABEL_171;
        }
        v132 = v131 - 3;
        if ( !v132 || (v133 = v132 - 1) == 0 )
        {
          v129 = 20 * (unsigned int)(((v121[8] & 0xFFF) + (unsigned __int64)(unsigned int)v121[10] + 4095) >> 12) + 48;
          goto LABEL_171;
        }
        v128 = v133 == 9;
      }
      else
      {
        if ( v123 == 28 )
        {
          v130 = *((unsigned __int16 *)v121 + 20);
          goto LABEL_159;
        }
        v124 = v123 - 1;
        if ( !v124 )
          goto LABEL_168;
        v125 = v124 - 6;
        if ( !v125 )
        {
          v129 = (unsigned int)(24 * (v121[6] + 2));
          goto LABEL_172;
        }
        v126 = v125 - 1;
        if ( !v126 )
        {
          v130 = *((unsigned __int16 *)v121 + 16);
LABEL_159:
          v129 = (v130 + 55) & 0xFFFFFFF8;
          goto LABEL_172;
        }
        v127 = v126 - 2;
        if ( !v127 )
        {
          v129 = (unsigned int)(16 * (v121[7] + 3));
          goto LABEL_172;
        }
        v128 = v127 == 2;
      }
      if ( v128 )
      {
LABEL_168:
        v129 = 4 * (v121[4] / 0xCu) + 48;
LABEL_171:
        *((_QWORD *)&v107 + 1) = 6LL;
        goto LABEL_172;
      }
      v129 = 48LL;
LABEL_172:
      v121 = (int *)((char *)v121 + v129);
      if ( !--v122 )
      {
        v106 = v2614;
        v110 = v2610;
        v2600 = v121;
        goto LABEL_174;
      }
    }
  }
LABEL_2476:
  LODWORD(v107) = 0;
LABEL_2477:
  *(_DWORD *)(v93 + 2080) = v105;
  if ( v2627 != (_DWORD)v107 )
  {
    v1526 = *(_QWORD *)(*(_QWORD *)(v93 + 1712)
                      + *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *(_QWORD *)(v93 + 1616))
                      + *(_QWORD *)(v93 + 1680));
    (*(void (__fastcall **)(_BYTE *))(v93 + 408))(v2853);
    (*(void (__fastcall **)(_BYTE *))(v93 + 1088))(v2740);
    (*(void (__fastcall **)(__int64))(v93 + 936))(v1526);
    (*(void (__fastcall **)(__int64))(v93 + 952))(v1526);
    LODWORD(v107) = 0;
  }
  if ( v2608 != (_DWORD)v107 && ((*(_DWORD *)(v93 + 2448) & 0x8000) != 0 || !*(_DWORD *)(v93 + 2296)) )
  {
    v1527 = *(_QWORD *)(v93 + 2432);
    *(_QWORD *)(v93 + 2432) = 0LL;
    (*(void (__fastcall **)(__int64, _BYTE *))(v93 + 664))(v1527, v2740);
    LODWORD(v107) = *(_DWORD *)(v93 + 2448);
    if ( (v107 & 1) != 0 )
    {
      *(_DWORD *)(v93 + 2448) = v107 & 0xFFFFFFFE;
      v1527 = (*(__int64 (__fastcall **)(__int64))(v93 + 640))(v1527);
      if ( !v1527 )
      {
        *(_DWORD *)(v93 + 2416) = -1;
        goto LABEL_2488;
      }
      *(_DWORD *)(v93 + 2416) = (*(__int64 (__fastcall **)(__int64))(v93 + 672))(v1527);
    }
    else if ( !v1527 )
    {
      goto LABEL_2488;
    }
    (*(void (__fastcall **)(__int64))(v93 + 648))(v1527);
  }
LABEL_2488:
  if ( (*(_DWORD *)(v93 + 2448) & 0x800008) == 0x800008 )
  {
    v1528 = *(_QWORD *)(v93 + 2672);
    v128 = (*(_DWORD *)(v93 + 2452) & 1) == 0;
    v1529 = *(_QWORD *)(v93 + 2552);
    v1530 = *(_DWORD *)(v93 + 2020);
    v1531 = *(unsigned int *)(v93 + 2056);
    v2605 = v1528;
    if ( !v128 )
      v1529 = *(_QWORD *)(v93 + 1488);
    v1532 = *(void (__fastcall **)(_QWORD, _QWORD, unsigned __int64 *))(v93 + 352);
    v2616 = *(_QWORD **)(v93 + 712);
    v2624 = *(_DWORD **)(v93 + 832);
    v2613 = (ULONG_PTR)v1532;
    v1533 = __rdtsc();
    v1534 = (__ROR8__(v1533, 3) ^ v1533) * (unsigned __int128)0x7010008004002001uLL;
    v2775 = *((_QWORD *)&v1534 + 1);
    v1535 = -1200000000LL - ((unsigned __int64)v1534 ^ *((_QWORD *)&v1534 + 1)) % 0x5F5E100;
    v2656 = v1535;
    v1536 = *(_DWORD *)(v93 + 2448);
    if ( (v1536 & 0x4000000) != 0 )
    {
      v1537 = __rdtsc();
      v1538 = (__ROR8__(v1537, 3) ^ v1537) * (unsigned __int128)0x7010008004002001uLL;
      v2776 = *((_QWORD *)&v1538 + 1);
      if ( ((unsigned __int64)v1538 ^ *((_QWORD *)&v1538 + 1)) % 0xA < 2 )
      {
        v1539 = __rdtsc();
        v1540 = (__ROR8__(v1539, 3) ^ v1539) * (unsigned __int128)0x7010008004002001uLL;
        v2777 = *((_QWORD *)&v1540 + 1);
        v2656 = v1535 * (((unsigned __int64)v1540 ^ *((_QWORD *)&v1540 + 1)) % 0xA + 1);
        v1536 = *(_DWORD *)(v93 + 2448);
      }
    }
    v1541 = 0LL;
    v1542 = 0LL;
    if ( (v1536 & 2) == 0 )
      v1530 = v1531;
    if ( (v1536 & 0x80u) != 0 )
    {
      v2923 = 1;
      v1543 = __rdtsc();
      v1544 = (__ROR8__(v1543, 3) ^ v1543) * (unsigned __int128)0x7010008004002001uLL;
      v1545 = 340;
      v2778 = *((_QWORD *)&v1544 + 1);
      v1541 = v1544 ^ *((_QWORD *)&v1544 + 1);
      v1546 = (_QWORD *)(v93 + 2712);
      v1542 = v93 ^ v1541;
      v1547 = v1541;
      do
      {
        *v1546-- ^= v1547;
        v1547 = __ROR8__(v1547, v1545--);
      }
      while ( v1545 );
      v1548 = v1531;
      v1549 = (unsigned __int64)(v1531 - 2720) >> 3;
      if ( (_DWORD)v1549 )
      {
        v1550 = (__int64 *)(v93 + 2712 + 8LL * (int)v1549);
        do
        {
          v1551 = *v1550--;
          v1542 = (2 * v1542) ^ __ROR8__(v1551, v1549);
          LODWORD(v1549) = v1549 - 1;
        }
        while ( (_DWORD)v1549 );
        v93 = v2602;
        v1548 = v1531;
      }
      v1552 = (v1530 - (unsigned int)v1531) >> 3;
      if ( (_DWORD)v1552 )
      {
        v1553 = (_QWORD *)(v93 + v1548 + 8 * v1552 - 8);
        do
        {
          *v1553-- ^= v1547;
          v1547 = __ROR8__(v1547, v1552);
          LODWORD(v1552) = v1552 - 1;
        }
        while ( (_DWORD)v1552 );
      }
      v1528 = v2605;
      v1532 = (void (__fastcall *)(_QWORD, _QWORD, unsigned __int64 *))v2613;
    }
    else
    {
      v2923 = 0;
    }
    if ( v1528 )
    {
      ((void __fastcall(ULONG_PTR, _QWORD, unsigned __int64 *, void (__fastcall *)(_QWORD, _QWORD, unsigned __int64 *), __int64))v2624)(
        v93,
        v1530,
        &v2656,
        v1532,
        v1528);
    }
    else if ( v1529 )
    {
      ((void __fastcall(__int64, _QWORD, _QWORD, _QWORD, unsigned __int64 *))v2616)(v1529, 0LL, 0LL, 0LL, &v2656);
    }
    else
    {
      v1532(0LL, 0LL, &v2656);
    }
    if ( v2923 )
    {
      v1554 = (_QWORD *)(v93 + 2712);
      v1555 = v93 ^ v1541;
      v1556 = 340;
      do
      {
        *v1554-- ^= v1541;
        v1541 = __ROR8__(v1541, v1556--);
      }
      while ( v1556 );
      v1557 = v1531;
      v1558 = (unsigned __int64)(v1531 - 2720) >> 3;
      if ( (_DWORD)v1558 )
      {
        v1559 = (__int64 *)(v93 + 8 * ((int)v1558 + 339LL));
        do
        {
          v1560 = *v1559--;
          *((_QWORD *)&v107 + 1) = __ROR8__(v1560, v1558);
          v1555 = (2 * v1555) ^ *((_QWORD *)&v107 + 1);
          LODWORD(v1558) = v1558 - 1;
        }
        while ( (_DWORD)v1558 );
        v1557 = v1531;
      }
      v1561 = (v1530 - (unsigned int)v1531) >> 3;
      if ( v1561 )
      {
        *((_QWORD *)&v107 + 1) = v93 + v1557 + 8 * (v1561 - 1LL);
        do
        {
          **((_QWORD **)&v107 + 1) ^= v1541;
          v1541 = __ROR8__(v1541, v1561);
          *((_QWORD *)&v107 + 1) -= 8LL;
          --v1561;
        }
        while ( v1561 );
      }
      if ( v1555 != v1542 )
      {
        v1562 = *(_QWORD *)(v93 + 1416);
        v1563 = *(_DWORD *)(v93 + 2020);
        *(_QWORD *)v1562 = v93;
        *(_DWORD *)(v1562 + 16) = v1563;
        if ( !*(_DWORD *)(v93 + 2296) )
        {
          *(_QWORD *)(*(_QWORD *)(v93 + 1416) + 24LL) = v1542 ^ v1555;
          if ( !*(_DWORD *)(v93 + 2296) )
          {
            *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v93 + 2312) = 0LL;
            *(_QWORD *)(v93 + 2320) = 270LL;
            *(_QWORD *)(v93 + 2328) = v1555;
            *(_DWORD *)(v93 + 2296) = 1;
            __ba(v93, 0LL);
          }
        }
      }
    }
  }
  v1564 = *(_DWORD *)(v93 + 2392);
  if ( v1564 == 11 )
    goto LABEL_3572;
  v1565 = 1;
  if ( v1564 == 1 || *(_DWORD *)(v93 + 2296) )
    goto LABEL_3572;
  if ( **(_QWORD **)(v93 + 2400) == *(_QWORD *)(v93 + 2408) )
  {
    if ( (*(_DWORD *)(v93 + 2096) & 1) == 0 )
      goto LABEL_3572;
    v2214 = *(unsigned int *)(v93 + 2416);
    if ( (_DWORD)v2214 == -1
      || (v2215 = (*(__int64 (__fastcall **)(__int64, _QWORD))(v93 + 632))(v2214, *((_QWORD *)&v107 + 1))) == 0 )
    {
      v2215 = (*(__int64 (__fastcall **)(_QWORD))(v93 + 640))(0LL);
      if ( !v2215 )
        goto LABEL_3572;
    }
    if ( (*(int (__fastcall **)(__int64, _BYTE *))(v93 + 656))(v2215, v2740) >= 0 )
    {
      *(_QWORD *)(v93 + 2432) = v2215;
      v2216 = (*(__int64 (**)(void))(v93 + 696))();
      *((_QWORD *)&v107 + 1) = (*(__int64 (__fastcall **)(__int64))(v93 + 728))(v2216);
      if ( *((_QWORD *)&v107 + 1) )
      {
        (*(void (__fastcall **)(__int64, _QWORD))(v93 + 744))(v2216, *((_QWORD *)&v107 + 1));
        v2217 = 0;
      }
      else
      {
        v2217 = 4;
      }
      *(_DWORD *)(v93 + 2452) = v2217 | *(_DWORD *)(v93 + 2452) & 0xFFFFFFFB;
      *(_DWORD *)(v93 + 2088) += 0x10000;
      if ( **(_QWORD **)(v93 + 2400) == *(_QWORD *)(v93 + 2408) )
      {
        if ( *(_DWORD *)(*(_QWORD *)(v93 + 1384) + 48LL) )
        {
          _InterlockedOr(v2598, 0);
          if ( **(_QWORD **)(v93 + 2400) == *(_QWORD *)(v93 + 2408) )
          {
            *((_QWORD *)&v107 + 1) = **(_QWORD **)(v93 + 2400);
            if ( !*(_DWORD *)(v93 + 2296) )
            {
              *(_QWORD *)(*(_QWORD *)(v93 + 1416) + 24LL) = *((_QWORD *)&v107 + 1) ^ *(_QWORD *)(v93 + 2408);
              v2218 = *(_QWORD *)(v93 + 2408);
              if ( !*(_DWORD *)(v93 + 2296) )
              {
                *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v93 + 2312) = 0LL;
                *(_QWORD *)(v93 + 2320) = 259LL;
                *(_QWORD *)(v93 + 2328) = v2218;
                *(_DWORD *)(v93 + 2296) = 1;
                __ba(v93, 0LL);
              }
            }
          }
        }
      }
      if ( !_bittest((const signed __int32 *)(v93 + 2448), 0xFu) && *(_DWORD *)(v93 + 2296) )
        goto LABEL_3572;
      v2215 = *(_QWORD *)(v93 + 2432);
      *(_QWORD *)(v93 + 2432) = 0LL;
      (*(void (__fastcall **)(__int64, _BYTE *))(v93 + 664))(v2215, v2740);
      LODWORD(v107) = *(_DWORD *)(v93 + 2448);
      if ( (v107 & 1) != 0 )
      {
        *(_DWORD *)(v93 + 2448) = v107 & 0xFFFFFFFE;
        v2215 = (*(__int64 (__fastcall **)(__int64))(v93 + 640))(v2215);
        if ( !v2215 )
        {
          *(_DWORD *)(v93 + 2416) = -1;
          goto LABEL_3572;
        }
        *(_DWORD *)(v93 + 2416) = (*(__int64 (__fastcall **)(__int64))(v93 + 672))(v2215);
      }
      else if ( !v2215 )
      {
        goto LABEL_3572;
      }
    }
    v1569 = v2215;
    goto LABEL_3571;
  }
  v1566 = *(unsigned int *)(v93 + 2416);
  v1567 = (_BYTE *)v93;
  v2624 = (_DWORD *)v93;
  if ( (_DWORD)v1566 == -1
    || (v1568 = (*(__int64 (__fastcall **)(__int64, _QWORD))(v93 + 632))(v1566, *((_QWORD *)&v107 + 1))) == 0 )
  {
    v1568 = (*(__int64 (__fastcall **)(_QWORD))(v93 + 640))(0LL);
    if ( !v1568 )
      goto LABEL_3572;
  }
  if ( (*(int (__fastcall **)(__int64, _BYTE *))(v93 + 656))(v1568, v2740) < 0 )
  {
    v1569 = v1568;
LABEL_3571:
    (*(void (__fastcall **)(__int64))(v93 + 648))(v1569);
    goto LABEL_3572;
  }
  *(_QWORD *)(v93 + 2432) = v1568;
  v1570 = (*(__int64 (**)(void))(v93 + 696))();
  v1571 = (*(__int64 (__fastcall **)(__int64))(v93 + 728))(v1570);
  if ( v1571 )
  {
    (*(void (__fastcall **)(__int64, __int64))(v93 + 744))(v1570, v1571);
    v1572 = 0;
  }
  else
  {
    v1572 = 4;
  }
  *(_DWORD *)(v93 + 2452) = v1572 | *(_DWORD *)(v93 + 2452) & 0xFFFFFFFB;
  *(_DWORD *)(v93 + 2088) += 0x10000;
  if ( (*(unsigned int (__fastcall **)(_QWORD, __int64))(v93 + 672))(*(_QWORD *)(v93 + 2432), v1571) )
    goto LABEL_2934;
  v1573 = *(_QWORD *)(v93 + 2408);
  v1574 = &v2712;
  v1575 = *(_QWORD *)(v93 + 1392) + 32LL;
  v2616 = (_QWORD *)v1573;
  v2712 = v1575;
  v1576 = 0LL;
  v1577 = *(_QWORD *)(v93 + 1384);
  v2601 = (__int64)&v2712;
  v2713 = v1577 + 32;
  v2924 = *(_QWORD *)(v93 + 2400);
  v1578 = v2924;
  v2603 = 2LL;
  do
  {
    v1579 = *v1574;
    v1580 = v1578 ^ v1576;
    v2605 = v1579;
    LOBYTE(v1581) = v1580 & 0x3F;
    v1582 = *(_QWORD *)v1579;
    v1583 = *(unsigned int *)(v1579 + 16);
    v1584 = (_QWORD *)v1582;
    v2613 = *(_QWORD *)v1579;
    v1585 = (const char *)v1582;
    v1586 = 4 * v1583;
    v1587 = v1582 + (unsigned int)(4 * v1583);
    if ( v1582 < v1587 )
    {
      do
      {
        _mm_prefetch(v1585, 0);
        v1585 += 64;
      }
      while ( (unsigned __int64)v1585 < v1587 );
    }
    v1588 = v1580;
    v1589 = v1586 >> 7;
    if ( v1586 >> 7 )
    {
      do
      {
        v1590 = 8LL;
        do
        {
          v1591 = v1584[1] ^ __ROL8__(*v1584 ^ v1588, v1581);
          v1584 += 2;
          v1588 = __ROL8__(v1591, v1581);
          --v1590;
        }
        while ( v1590 );
        v1592 = (__ROL8__(v1580 ^ ((unsigned __int64)v1584 - v1582), 17) ^ v1580 ^ ((unsigned __int64)v1584 - v1582))
              * (unsigned __int128)0x7010008004002001uLL;
        v2779 = *((_QWORD *)&v1592 + 1);
        v1581 = ((unsigned __int8)v1592 ^ (unsigned __int8)(BYTE8(v1592) ^ v1581)) & 0x3F;
        if ( !v1581 )
          LOBYTE(v1581) = 1;
        --v1589;
      }
      while ( v1589 );
      v1579 = v2605;
      v1574 = (__int64 *)v2601;
      v1578 = v2924;
      v1573 = (unsigned __int64)v2616;
    }
    v1593 = v1586 & 0x7F;
    if ( v1593 >= 8 )
    {
      v1594 = (unsigned __int64)v1593 >> 3;
      do
      {
        v1588 = __ROL8__(*v1584++ ^ v1588, v1581);
        v1593 -= 8;
        --v1594;
      }
      while ( v1594 );
    }
    if ( v1593 )
    {
      do
      {
        v1595 = *(unsigned __int8 *)v1584;
        v1584 = (_QWORD *)((char *)v1584 + 1);
        v1588 = __ROL8__(v1595 ^ v1588, v1581);
        --v1593;
      }
      while ( v1593 );
      v1582 = v2613;
    }
    v1596 = *(_QWORD **)(v1579 + 24);
    v1597 = v1588 ^ v1573;
    v1598 = v1596;
    v1599 = (const char *)v1596;
    v1600 = ((unsigned __int8)v1588 ^ (unsigned __int8)v1573) & 0x3F;
    v1601 = v1583;
    if ( v1596 < (_QWORD *)((char *)v1596 + v1583) )
    {
      do
      {
        _mm_prefetch(v1599, 0);
        v1599 += 64;
      }
      while ( v1599 < (const char *)v1596 + v1583 );
    }
    v1602 = v1597;
    v1603 = (unsigned int)v1583 >> 7;
    if ( (unsigned int)v1583 >> 7 )
    {
      do
      {
        v1604 = 8LL;
        do
        {
          v1605 = v1598[1] ^ __ROL8__(*v1598 ^ v1602, v1600);
          v1598 += 2;
          v1602 = __ROL8__(v1605, v1600);
          --v1604;
        }
        while ( v1604 );
        v1606 = (__ROL8__(v1597 ^ ((char *)v1598 - (char *)v1596), 17) ^ v1597 ^ ((char *)v1598 - (char *)v1596))
              * (unsigned __int128)0x7010008004002001uLL;
        v2780 = *((_QWORD *)&v1606 + 1);
        v1600 = (BYTE8(v1606) ^ (unsigned __int8)(v1606 ^ v1600)) & 0x3F;
        if ( !(_DWORD)v1600 )
          v1600 = 1LL;
        --v1603;
      }
      while ( v1603 );
      v1582 = v2613;
      v1601 = v1583;
      v1578 = v2924;
      v1573 = (unsigned __int64)v2616;
    }
    v1607 = v1583 & 0x7F;
    if ( v1607 >= 8 )
    {
      v1608 = (unsigned __int64)v1607 >> 3;
      do
      {
        v1602 = __ROL8__(*v1598++ ^ v1602, v1600);
        v1607 -= 8;
        --v1608;
      }
      while ( v1608 );
    }
    if ( v1607 )
    {
      do
      {
        v1609 = *(unsigned __int8 *)v1598;
        v1598 = (_QWORD *)((char *)v1598 + 1);
        v1602 = __ROL8__(v1609 ^ v1602, v1600);
        --v1607;
      }
      while ( v1607 );
      v1578 = v2924;
    }
    ++v1574;
    v1576 = v1601 ^ v1582 ^ v1602;
    v2601 = (__int64)v1574;
    v1565 = 1;
    --v2603;
  }
  while ( v2603 );
  v93 = v2602;
  v2605 = v1576;
  (*(void (__fastcall **)(ULONG_PTR, __int64 *, __int64, _QWORD *))(v2602 + 520))(v1582, &v2681, v1600, v1598);
  v1567 = v2624;
  if ( !v2681 )
    goto LABEL_2625;
  *(_QWORD *)&v107 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(v93 + 240))(
                       64LL,
                       128LL,
                       *(unsigned int *)(v93 + 2064));
  v2613 = v107;
  v1610 = v107;
  if ( !(_QWORD)v107 )
    goto LABEL_2934;
  v1611 = 0LL;
  v2643 = v2681;
  *(_QWORD *)v107 = v2681;
  v1612 = (_QWORD *)v1576;
  v2616 = (_QWORD *)v1576;
  v2925 = 0;
  v2607 = 0LL;
LABEL_2575:
  v2643 = *(_QWORD *)(v1610 + 8 * v1611);
  if ( !v2643 )
    goto LABEL_2620;
  v2608 = (unsigned __int8)v1612 & 0x3F;
  v1613 = (*(__int64 (**)(void))(v93 + 504))();
  v2601 = v1613;
  if ( v1613 )
  {
    v1614 = v2608;
    v1615 = (unsigned __int64)v2616;
    v1616 = v1613 + *(unsigned __int16 *)(v1613 + 20) + 24LL;
    v2603 = v1616 + 40LL * *(unsigned __int16 *)(v1613 + 6);
    v1617 = v2603;
    while ( 1 )
    {
      v128 = (*(_DWORD *)(v1616 + 36) & 0x2000000) == 0;
      v2610 = 0;
      if ( !v128 )
        goto LABEL_2581;
      v1618 = *(_DWORD *)v1616;
      if ( *(_DWORD *)v1616 == 1414090313 )
        break;
      if ( v1618 != 1162297680 )
        goto LABEL_2659;
      v1670 = *(_WORD *)(v1616 + 4);
      if ( v1670 != 30839 && v1670 != 29303 && v1670 != 30583 )
      {
LABEL_2661:
        v1671 = *(unsigned __int8 **)(v93 + 2352);
        v1672 = *(__int64 **)(v93 + 2360);
        v1673 = v1616 - (_QWORD)v1671;
        v1674 = *(unsigned __int8 **)(v93 + 2368);
        v1675 = 7;
        v1676 = *(unsigned __int8 **)(v93 + 2376);
        while ( 1 )
        {
          v1677 = v1671[v1673];
          v1678 = *v1671++;
          if ( v1677 != v1678 )
            break;
          if ( !--v1675 )
            goto LABEL_2581;
        }
        v1679 = 8;
        v1680 = (__int64 *)v1616;
        while ( 1 )
        {
          v1681 = *v1680++;
          v1682 = *v1672++;
          if ( v1681 != v1682 )
            break;
          v1679 -= 8;
          if ( v1679 < 8 )
          {
            if ( !v1679 )
              goto LABEL_2581;
            while ( 1 )
            {
              v1683 = *(unsigned __int8 *)v1680;
              v1680 = (__int64 *)((char *)v1680 + 1);
              v1684 = *(unsigned __int8 *)v1672;
              v1672 = (__int64 *)((char *)v1672 + 1);
              if ( v1683 != v1684 )
                goto LABEL_2672;
              if ( !--v1679 )
                goto LABEL_2581;
            }
          }
        }
LABEL_2672:
        v1685 = 4;
        v1686 = v1616 - (_QWORD)v1674;
        while ( 1 )
        {
          v1687 = v1674[v1686];
          v1688 = *v1674++;
          if ( v1687 != v1688 )
            break;
          if ( !--v1685 )
            goto LABEL_2581;
        }
        v1689 = 6;
        v1690 = v1616 - (_QWORD)v1676;
        while ( 1 )
        {
          v1691 = v1676[v1690];
          v1692 = *v1676++;
          if ( v1691 != v1692 )
            break;
          if ( !--v1689 )
            goto LABEL_2581;
        }
        v1619 = v2610;
        goto LABEL_2582;
      }
LABEL_2581:
      v1619 = 1;
LABEL_2582:
      v1620 = *(_DWORD *)(v1616 + 16);
      if ( *(int *)(v1616 + 36) < 0 )
        v1619 = 1;
      if ( v1620 <= *(_DWORD *)(v1616 + 8) )
        v1620 = *(_DWORD *)(v1616 + 8);
      if ( !v1619 )
      {
        v1621 = (_QWORD *)(v2643 + *(unsigned int *)(v1616 + 12));
        LOBYTE(v1622) = v1614;
        v1623 = (unsigned __int64)v1621 + v1620;
        v1624 = v1621;
        v1625 = (const char *)v1621;
        if ( (unsigned __int64)v1621 < v1623 )
        {
          do
          {
            _mm_prefetch(v1625, 0);
            v1625 += 64;
          }
          while ( (unsigned __int64)v1625 < v1623 );
        }
        v1626 = v1615;
        v1627 = v1620 >> 7;
        if ( v1620 >> 7 )
        {
          do
          {
            v1628 = 8LL;
            do
            {
              v1629 = v1624[1] ^ __ROL8__(*v1624 ^ v1626, v1622);
              v1624 += 2;
              v1626 = __ROL8__(v1629, v1622);
              --v1628;
            }
            while ( v1628 );
            v1630 = (__ROL8__(v1615 ^ ((char *)v1624 - (char *)v1621), 17) ^ v1615 ^ ((char *)v1624 - (char *)v1621))
                  * (unsigned __int128)0x7010008004002001uLL;
            v2781 = *((_QWORD *)&v1630 + 1);
            v1622 = (BYTE8(v1630) ^ (unsigned __int8)(v1630 ^ v1622)) & 0x3F;
            if ( !v1622 )
              LOBYTE(v1622) = 1;
            --v1627;
          }
          while ( v1627 );
          v93 = v2602;
          v1614 = v2608;
          v1617 = v2603;
        }
        v1631 = v1620 & 0x7F;
        if ( v1631 >= 8 )
        {
          v1632 = (unsigned __int64)v1631 >> 3;
          do
          {
            v1626 = __ROL8__(*v1624++ ^ v1626, v1622);
            v1631 -= 8;
            --v1632;
          }
          while ( v1632 );
        }
        if ( v1631 )
        {
          do
          {
            v1633 = *(unsigned __int8 *)v1624;
            v1624 = (_QWORD *)((char *)v1624 + 1);
            v1626 = __ROL8__(v1633 ^ v1626, v1622);
            --v1631;
          }
          while ( v1631 );
          v93 = v2602;
        }
        v1615 = v1626;
      }
      v1616 += 40LL;
      if ( v1616 == v1617 )
      {
        v1634 = v2925;
        v1576 = v2605;
        v2616 = (_QWORD *)v1615;
        if ( !v2925 )
        {
          v1635 = v2601;
          v1636 = v2643;
          v2603 = v2643;
          v1637 = *(unsigned int *)(v2601 + 148);
          if ( (unsigned int)v1637 >= 0x14 )
          {
            v1638 = *(unsigned int *)(v2601 + 144);
            v1639 = v1638 + v2643 + v1637;
            v1640 = v2643 + v1638;
            if ( v2643 + v1638 != v1639 )
            {
              do
              {
                if ( !*(_DWORD *)(v1640 + 12) )
                  break;
                v1641 = *(unsigned int *)(v1640 + 16);
                if ( !(_DWORD)v1641 )
                  break;
                v1642 = *(_QWORD *)(v1641 + v1636);
                if ( v1642 && (v1642 < v1636 || v1642 >= v1636 + *(unsigned int *)(v1635 + 80)) )
                {
                  if ( (*(unsigned int (__fastcall **)(unsigned __int64))(v93 + 680))(v1642) )
                  {
                    (*(void (__fastcall **)(unsigned __int64, __int64 *))(v93 + 520))(v1642, &v2643);
                    if ( v2643 )
                    {
                      v1610 = v2613;
                      v1643 = (_QWORD *)v2613;
                      v1644 = 0LL;
                      while ( *v1643 != v2643 )
                      {
                        if ( !*v1643 )
                        {
                          *(_QWORD *)(v2613 + 8 * v1644) = v2643;
                          break;
                        }
                        v1644 = (unsigned int)(v1644 + 1);
                        ++v1643;
                        if ( (unsigned int)v1644 >= 0x10 )
                        {
                          if ( (_DWORD)v1644 != 16 )
                            break;
                          v1612 = v2616;
                          goto LABEL_2620;
                        }
                      }
                    }
                  }
                  v1636 = v2603;
                  v1635 = v2601;
                }
                v1640 += 20LL;
              }
              while ( v1640 != v1639 );
              v1634 = 0;
            }
          }
        }
        v1610 = v2613;
        v1611 = v2607 + 1;
        v2925 = v1634 + 1;
        ++v2607;
        v1612 = v2616;
        if ( (unsigned int)(v1634 + 1) >= 0x10 )
        {
LABEL_2620:
          v1576 = (__int64)v1612;
          goto LABEL_2621;
        }
        goto LABEL_2575;
      }
    }
    if ( *(_DWORD *)(v1616 + 4) == 1195525195 )
      goto LABEL_2581;
LABEL_2659:
    if ( v1618 != 1095914053 || *(_WORD *)(v1616 + 4) != 16724 )
      goto LABEL_2661;
    goto LABEL_2581;
  }
  if ( !*(_DWORD *)(v93 + 2296) )
  {
    *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
    *(_QWORD *)(v93 + 2312) = 0LL;
    *(_QWORD *)(v93 + 2320) = 258LL;
    *(_QWORD *)(v93 + 2328) = -1073741701LL;
    *(_DWORD *)(v93 + 2296) = 1;
    __ba(v93, 0LL);
  }
LABEL_2621:
  if ( v1576 == *(_QWORD *)(v93 + 2408) || !v1576 )
    v1576 ^= 0x95EA5DE843D5D824uLL;
  (*(void (__fastcall **)(ULONG_PTR))(v93 + 248))(v1610);
LABEL_2625:
  if ( v1576 != **(_QWORD **)(v93 + 2400) && (*(_DWORD *)(v93 + 2452) & 0x40) == 0 && !*(_DWORD *)(v93 + 2296) )
  {
    *(_QWORD *)(*(_QWORD *)(v93 + 1416) + 24LL) = v1576 ^ **(_QWORD **)(v93 + 2400);
    if ( !*(_DWORD *)(v93 + 2296) )
    {
      *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
      *(_QWORD *)(v93 + 2312) = 0LL;
      *(_QWORD *)(v93 + 2320) = 258LL;
      *(_QWORD *)(v93 + 2328) = v1576;
      *(_DWORD *)(v93 + 2296) = 1;
      __ba(v93, 0LL);
    }
  }
  v1645 = 0;
  v1646 = (int ***)&v2713;
  v1647 = 2;
  do
  {
    v1648 = 0;
    v1649 = (__int64)**v1646;
    v1650 = *((_DWORD *)*v1646 + 4);
    v1651 = v1649 + v1645 + (unsigned int)*v1646;
    if ( v1650 )
    {
      v1652 = **v1646;
      do
      {
        v1653 = *v1652;
        ++v1648;
        v1654 = *v1652++;
        v1651 = v1648 * ((v1653 + *(_DWORD *)((v1654 >> 4) + v1649)) ^ v1651);
      }
      while ( v1648 < v1650 );
    }
    v1645 += 2 * v1651;
    --v1646;
    v1655 = (unsigned int)(2 * v1651);
    --v1647;
  }
  while ( v1647 );
  v93 = v2602;
  v1567 = v2624;
  *((_QWORD *)&v107 + 1) = **(unsigned int **)(v2602 + 1424);
  if ( v1645 != DWORD2(v107) && (*(_DWORD *)(v2602 + 2448) & 0x20000) != 0 && !*(_DWORD *)(v2602 + 2296) )
  {
    *(_QWORD *)(*(_QWORD *)(v2602 + 1416) + 24LL) = *((_QWORD *)&v107 + 1) ^ (unsigned int)v1655;
    if ( !*(_DWORD *)(v93 + 2296) )
    {
      *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
      *(_QWORD *)(v93 + 2312) = 0LL;
      *(_QWORD *)(v93 + 2320) = 263LL;
      *(_QWORD *)(v93 + 2328) = (unsigned int)v1655;
      *(_DWORD *)(v93 + 2296) = 1;
      __ba(v93, 0LL);
    }
  }
  v1656 = *(_DWORD *)(v93 + 2392);
  if ( v1656 <= 6 )
  {
    v1657 = *(_QWORD *)(v93 + 1384);
    v2601 = *(_QWORD *)(v93 + 1392);
    v2603 = v2601 + 32;
    v2616 = (_QWORD *)v1657;
    v1658 = (const char *)(v1657 + 32);
    v2613 = v1657 + 32;
    if ( v1656 < 2 )
    {
      v1659 = *(_QWORD **)v1658;
      v1660 = *(unsigned int *)(v93 + 2020);
      v1661 = 4 * *(_DWORD *)(v1657 + 48);
      v1662 = v1660 + 48;
      if ( (unsigned int)(v1660 + 48) <= *(_DWORD *)(v93 + 2588) )
      {
        v1663 = v93;
        *(_DWORD *)(v93 + 2020) = v1662;
      }
      else
      {
        v1663 = sub_140B11020(v93, v1662, *(unsigned int *)(v93 + 2340));
        if ( !v1663 )
          goto LABEL_2932;
        v1664 = *(_DWORD *)(v93 + 2448);
        if ( (v1664 & 4) == 0 )
        {
          v1665 = *(_DWORD *)(v93 + 2020);
          v1666 = *(_QWORD *)(v93 + 1992);
          v1667 = (v1664 & 0x20000000) != 0 ? *(_DWORD *)(v93 + 2340) : 0;
          if ( v1665 >= 8 )
          {
            v1668 = (unsigned __int64)v1665 >> 3;
            do
            {
              *(_QWORD *)v93 = 0LL;
              v1665 -= 8;
              v93 += 8LL;
              --v1668;
            }
            while ( v1668 );
          }
          for ( ; v1665; --v1665 )
            *(_BYTE *)v93++ = 0;
          v1669 = *(_DWORD *)(v1663 + 2340);
          *(_DWORD *)(v1663 + 2340) = v1667;
          if ( v1667 == 3 )
          {
            (*(void (__fastcall **)(__int64))(v1663 + 872))(v1666);
          }
          else if ( (*(_DWORD *)(v1663 + 2448) & 0x10000000) != 0 || !v1667 )
          {
            (*(void (__fastcall **)(__int64))(v1663 + 248))(v1666);
          }
          else
          {
            (*(void (__fastcall **)(__int64, _QWORD))(v1663 + 552))(v1666 - 8, *(_QWORD *)(v1666 - 8));
          }
          *(_DWORD *)(v1663 + 2340) = v1669;
        }
        *(_DWORD *)(v1663 + 2448) &= ~4u;
      }
      v1693 = v1663 + v1660;
      ++*(_DWORD *)(v1663 + 2060);
      v1694 = (_QWORD *)(v1663 + v1660);
      v2605 = v1663 + v1660;
      v1695 = 48;
      v1696 = 6LL;
      do
      {
        *v1694 = 0LL;
        v1695 -= 8;
        ++v1694;
        --v1696;
      }
      while ( v1696 );
      for ( ; v1695; --v1695 )
      {
        *(_BYTE *)v1694 = 0;
        v1694 = (_QWORD *)((char *)v1694 + 1);
      }
      *(_DWORD *)v1693 = 11;
      v1697 = v1659;
      *(_QWORD *)(v1693 + 8) = v1659;
      v1698 = (const char *)v1659;
      *(_DWORD *)(v1693 + 16) = v1661;
      *(_DWORD *)(v1663 + 2088) += v1661;
      v1699 = *(_DWORD *)(v1663 + 2068);
      v1700 = *(_QWORD *)(v1663 + 2072);
      v1701 = (unsigned __int64)v1659 + v1661;
      if ( (unsigned __int64)v1659 < v1701 )
      {
        do
        {
          _mm_prefetch(v1698, 0);
          v1698 += 64;
        }
        while ( (unsigned __int64)v1698 < v1701 );
      }
      v1655 = *(_QWORD *)(v1663 + 2072);
      v1702 = v1661 >> 7;
      if ( v1661 >> 7 )
      {
        do
        {
          v1703 = 8LL;
          do
          {
            v1704 = v1697[1] ^ __ROL8__(*v1697 ^ v1655, v1699);
            v1697 += 2;
            v1655 = __ROL8__(v1704, v1699);
            --v1703;
          }
          while ( v1703 );
          v1705 = (__ROL8__(v1700 ^ ((char *)v1697 - (char *)v1659), 17) ^ v1700 ^ (unsigned __int64)((char *)v1697 - (char *)v1659))
                * (unsigned __int128)0x7010008004002001uLL;
          v2782 = *((_QWORD *)&v1705 + 1);
          v1699 = (BYTE8(v1705) ^ (unsigned __int8)(v1705 ^ v1699)) & 0x3F;
          if ( !v1699 )
            LOBYTE(v1699) = 1;
          --v1702;
        }
        while ( v1702 );
        v1693 = v2605;
      }
      v1706 = v1661 & 0x7F;
      if ( v1706 >= 8 )
      {
        v1707 = (unsigned __int64)(v1661 & 0x7F) >> 3;
        do
        {
          v1655 = __ROL8__(*v1697++ ^ v1655, v1699);
          v1706 -= 8;
          --v1707;
        }
        while ( v1707 );
      }
      for ( ; v1706; --v1706 )
      {
        v1708 = *(unsigned __int8 *)v1697;
        v1697 = (_QWORD *)((char *)v1697 + 1);
        v1655 = __ROL8__(v1708 ^ v1655, v1699);
      }
      for ( i32 = v1655; ; v1655 = (unsigned int)i32 ^ (unsigned int)v1655 )
      {
        i32 >>= 31;
        if ( !i32 )
          break;
      }
      v1658 = (const char *)v2613;
      LODWORD(v1655) = v1655 & 0x7FFFFFFF;
      *(_DWORD *)(v1693 + 20) = v1655;
      *(_DWORD *)(v1663 + 2088) += v1661;
      v1567 = (_BYTE *)v1663;
      *(_DWORD *)(v1663 + 2392) = 2;
    }
    if ( *((int *)v1567 + 598) < 3 )
    {
      v1710 = *((unsigned int *)v1567 + 505);
      v1711 = 32;
      v1712 = *((_DWORD *)v1567 + 526);
      if ( v1712 != 7 )
        v1711 = 0;
      v1713 = v1710 + 48;
      if ( (unsigned int)(v1710 + 48) <= *((_DWORD *)v1567 + 647) )
      {
        v1714 = (__int64)v1567;
        *((_DWORD *)v1567 + 505) = v1713;
      }
      else
      {
        v1714 = sub_140B11020(v1567, v1713, *((unsigned int *)v1567 + 585));
        if ( !v1714 )
          goto LABEL_2932;
        v1715 = *((_DWORD *)v1567 + 612);
        if ( (v1715 & 4) == 0 )
        {
          v1716 = *((_DWORD *)v1567 + 505);
          v1717 = *((_QWORD *)v1567 + 249);
          v1718 = (v1715 & 0x20000000) != 0 ? *((_DWORD *)v1567 + 585) : 0;
          if ( v1716 >= 8 )
          {
            v1719 = (unsigned __int64)v1716 >> 3;
            do
            {
              *(_QWORD *)v1567 = 0LL;
              v1716 -= 8;
              v1567 += 8;
              --v1719;
            }
            while ( v1719 );
          }
          for ( ; v1716; --v1716 )
            *v1567++ = 0;
          v1720 = *(_DWORD *)(v1714 + 2340);
          *(_DWORD *)(v1714 + 2340) = v1718;
          if ( v1718 == 3 )
          {
            (*(void (__fastcall **)(__int64))(v1714 + 872))(v1717);
          }
          else if ( (*(_DWORD *)(v1714 + 2448) & 0x10000000) != 0 || !v1718 )
          {
            (*(void (__fastcall **)(__int64))(v1714 + 248))(v1717);
          }
          else
          {
            (*(void (__fastcall **)(__int64, _QWORD))(v1714 + 552))(v1717 - 8, *(_QWORD *)(v1717 - 8));
          }
          *(_DWORD *)(v1714 + 2340) = v1720;
        }
        *(_DWORD *)(v1714 + 2448) &= ~4u;
      }
      v1721 = v1714 + v1710;
      ++*(_DWORD *)(v1714 + 2060);
      v1722 = (_QWORD *)(v1714 + v1710);
      v1723 = 48;
      v1724 = 6LL;
      do
      {
        *v1722 = 0LL;
        v1723 -= 8;
        ++v1722;
        --v1724;
      }
      while ( v1724 );
      for ( ; v1723; --v1723 )
      {
        *(_BYTE *)v1722 = 0;
        v1722 = (_QWORD *)((char *)v1722 + 1);
      }
      *(_DWORD *)v1721 = v1711;
      *(_QWORD *)(v1721 + 8) = v1658;
      if ( v1712 == 7 )
        sub_1403EB41C(v1714, v1658, 32LL, v1721 + 24);
      v1725 = v2616;
      *(_DWORD *)(v1721 + 16) = 32;
      v1726 = (unsigned __int64)(v1725 + 8);
      *(_DWORD *)(v1714 + 2088) += 32;
      v1655 = (__int64)v1658;
      v1727 = *(_DWORD *)(v1714 + 2068);
      v1728 = v1658;
      for ( i33 = *(_QWORD *)(v1714 + 2072); (unsigned __int64)v1728 < v1726; v1728 += 64 )
        _mm_prefetch(v1728, 0);
      v1730 = 4LL;
      v1731 = 32;
      do
      {
        i33 = __ROL8__(*(_QWORD *)v1655 ^ i33, v1727);
        v1655 += 8LL;
        v1731 -= 8;
        --v1730;
      }
      while ( v1730 );
      for ( ; v1731; --v1731 )
      {
        v1732 = *(unsigned __int8 *)v1655++;
        i33 = __ROL8__(v1732 ^ i33, v1727);
      }
      for ( i34 = i33; ; LODWORD(i33) = i34 ^ i33 )
      {
        i34 >>= 31;
        if ( !i34 )
          break;
      }
      *(_DWORD *)(v1721 + 20) = i33 & 0x7FFFFFFF;
      v1567 = (_BYTE *)v1714;
      *(_DWORD *)(v1714 + 2088) += 32;
      *(_DWORD *)(v1714 + 2392) = 3;
    }
    v1734 = (const char *)v2603;
    if ( *((int *)v1567 + 598) < 4 )
    {
      v1735 = *((unsigned int *)v1567 + 505);
      v1736 = *(_QWORD *)v2603;
      v1737 = 4 * *(_DWORD *)(v2601 + 48);
      v1738 = v1735 + 48;
      if ( (unsigned int)(v1735 + 48) <= *((_DWORD *)v1567 + 647) )
      {
        v1739 = (__int64)v1567;
        *((_DWORD *)v1567 + 505) = v1738;
      }
      else
      {
        v1739 = sub_140B11020(v1567, v1738, *((unsigned int *)v1567 + 585));
        if ( !v1739 )
          goto LABEL_2932;
        v1740 = *((_DWORD *)v1567 + 612);
        if ( (v1740 & 4) == 0 )
        {
          v1741 = *((_DWORD *)v1567 + 505);
          v1742 = *((_QWORD *)v1567 + 249);
          v1743 = (v1740 & 0x20000000) != 0 ? *((_DWORD *)v1567 + 585) : 0;
          if ( v1741 >= 8 )
          {
            v1744 = (unsigned __int64)v1741 >> 3;
            do
            {
              *(_QWORD *)v1567 = 0LL;
              v1741 -= 8;
              v1567 += 8;
              --v1744;
            }
            while ( v1744 );
          }
          for ( ; v1741; --v1741 )
            *v1567++ = 0;
          v1745 = *(_DWORD *)(v1739 + 2340);
          *(_DWORD *)(v1739 + 2340) = v1743;
          if ( v1743 == 3 )
          {
            (*(void (__fastcall **)(__int64))(v1739 + 872))(v1742);
          }
          else if ( (*(_DWORD *)(v1739 + 2448) & 0x10000000) != 0 || !v1743 )
          {
            (*(void (__fastcall **)(__int64))(v1739 + 248))(v1742);
          }
          else
          {
            (*(void (__fastcall **)(__int64, _QWORD))(v1739 + 552))(v1742 - 8, *(_QWORD *)(v1742 - 8));
          }
          *(_DWORD *)(v1739 + 2340) = v1745;
        }
        *(_DWORD *)(v1739 + 2448) &= ~4u;
      }
      v1746 = v1739 + v1735;
      ++*(_DWORD *)(v1739 + 2060);
      v1747 = (_QWORD *)(v1739 + v1735);
      v2926 = v1739 + v1735;
      v1748 = 48;
      v1749 = 6LL;
      do
      {
        *v1747 = 0LL;
        v1748 -= 8;
        ++v1747;
        --v1749;
      }
      while ( v1749 );
      for ( ; v1748; --v1748 )
      {
        *(_BYTE *)v1747 = 0;
        v1747 = (_QWORD *)((char *)v1747 + 1);
      }
      *(_DWORD *)v1746 = 11;
      v1750 = (_QWORD *)v1736;
      *(_QWORD *)(v1746 + 8) = v1736;
      v1751 = (const char *)v1736;
      *(_DWORD *)(v1746 + 16) = v1737;
      *(_DWORD *)(v1739 + 2088) += v1737;
      v1752 = *(_DWORD *)(v1739 + 2068);
      v1753 = *(_QWORD *)(v1739 + 2072);
      v1754 = v1736 + v1737;
      if ( v1736 < v1754 )
      {
        do
        {
          _mm_prefetch(v1751, 0);
          v1751 += 64;
        }
        while ( (unsigned __int64)v1751 < v1754 );
      }
      v1655 = *(_QWORD *)(v1739 + 2072);
      v1755 = v1737 >> 7;
      if ( v1737 >> 7 )
      {
        do
        {
          v1756 = 8LL;
          do
          {
            v1757 = v1750[1] ^ __ROL8__(*v1750 ^ v1655, v1752);
            v1750 += 2;
            v1655 = __ROL8__(v1757, v1752);
            --v1756;
          }
          while ( v1756 );
          v1758 = (__ROL8__(v1753 ^ ((unsigned __int64)v1750 - v1736), 17) ^ v1753 ^ ((unsigned __int64)v1750 - v1736))
                * (unsigned __int128)0x7010008004002001uLL;
          v2783 = *((_QWORD *)&v1758 + 1);
          v1752 = (BYTE8(v1758) ^ (unsigned __int8)(v1758 ^ v1752)) & 0x3F;
          if ( !v1752 )
            LOBYTE(v1752) = 1;
          --v1755;
        }
        while ( v1755 );
        v1746 = v2926;
        v1734 = (const char *)v2603;
      }
      v1759 = v1737 & 0x7F;
      if ( v1759 >= 8 )
      {
        v1760 = (unsigned __int64)(v1737 & 0x7F) >> 3;
        do
        {
          v1655 = __ROL8__(*v1750++ ^ v1655, v1752);
          v1759 -= 8;
          --v1760;
        }
        while ( v1760 );
      }
      if ( v1759 )
      {
        do
        {
          v1761 = *(unsigned __int8 *)v1750;
          v1750 = (_QWORD *)((char *)v1750 + 1);
          v1655 = __ROL8__(v1761 ^ v1655, v1752);
          --v1759;
        }
        while ( v1759 );
        v1734 = (const char *)v2603;
      }
      for ( i35 = v1655; ; v1655 = (unsigned int)i35 ^ (unsigned int)v1655 )
      {
        i35 >>= 31;
        if ( !i35 )
          break;
      }
      LODWORD(v1655) = v1655 & 0x7FFFFFFF;
      *(_DWORD *)(v1746 + 20) = v1655;
      v1567 = (_BYTE *)v1739;
      *(_DWORD *)(v1739 + 2088) += v1737;
      *(_DWORD *)(v1739 + 2392) = 4;
    }
    if ( *((int *)v1567 + 598) < 5 )
    {
      v1763 = *((unsigned int *)v1567 + 505);
      v1764 = 32;
      v1765 = *((_DWORD *)v1567 + 526);
      if ( v1765 != 7 )
        v1764 = 0;
      v1766 = v1763 + 48;
      if ( (unsigned int)(v1763 + 48) <= *((_DWORD *)v1567 + 647) )
      {
        v1767 = (__int64)v1567;
        *((_DWORD *)v1567 + 505) = v1766;
      }
      else
      {
        v1767 = sub_140B11020(v1567, v1766, *((unsigned int *)v1567 + 585));
        if ( !v1767 )
          goto LABEL_2932;
        v1768 = *((_DWORD *)v1567 + 612);
        if ( (v1768 & 4) == 0 )
        {
          v1769 = *((_DWORD *)v1567 + 505);
          v1770 = *((_QWORD *)v1567 + 249);
          v1771 = (v1768 & 0x20000000) != 0 ? *((_DWORD *)v1567 + 585) : 0;
          if ( v1769 >= 8 )
          {
            v1772 = (unsigned __int64)v1769 >> 3;
            do
            {
              *(_QWORD *)v1567 = 0LL;
              v1769 -= 8;
              v1567 += 8;
              --v1772;
            }
            while ( v1772 );
          }
          for ( ; v1769; --v1769 )
            *v1567++ = 0;
          v1773 = *(_DWORD *)(v1767 + 2340);
          *(_DWORD *)(v1767 + 2340) = v1771;
          if ( v1771 == 3 )
          {
            (*(void (__fastcall **)(__int64))(v1767 + 872))(v1770);
          }
          else if ( (*(_DWORD *)(v1767 + 2448) & 0x10000000) != 0 || !v1771 )
          {
            (*(void (__fastcall **)(__int64))(v1767 + 248))(v1770);
          }
          else
          {
            (*(void (__fastcall **)(__int64, _QWORD))(v1767 + 552))(v1770 - 8, *(_QWORD *)(v1770 - 8));
          }
          *(_DWORD *)(v1767 + 2340) = v1773;
        }
        *(_DWORD *)(v1767 + 2448) &= ~4u;
      }
      v1774 = v1767 + v1763;
      ++*(_DWORD *)(v1767 + 2060);
      v1775 = (_QWORD *)(v1767 + v1763);
      v1776 = 48;
      v1777 = 6LL;
      do
      {
        *v1775 = 0LL;
        v1776 -= 8;
        ++v1775;
        --v1777;
      }
      while ( v1777 );
      for ( ; v1776; --v1776 )
      {
        *(_BYTE *)v1775 = 0;
        v1775 = (_QWORD *)((char *)v1775 + 1);
      }
      *(_DWORD *)v1774 = v1764;
      *(_QWORD *)(v1774 + 8) = v1734;
      if ( v1765 == 7 )
        sub_1403EB41C(v1767, v1734, 32LL, v1774 + 24);
      v1778 = v2601;
      *(_DWORD *)(v1774 + 16) = 32;
      v1779 = v1778 + 64;
      *(_DWORD *)(v1767 + 2088) += 32;
      v1655 = (__int64)v1734;
      v1780 = *(_DWORD *)(v1767 + 2068);
      v1781 = v1734;
      for ( i36 = *(_QWORD *)(v1767 + 2072); (unsigned __int64)v1781 < v1779; v1781 += 64 )
        _mm_prefetch(v1781, 0);
      v1783 = 4LL;
      v1784 = 32;
      do
      {
        i36 = __ROL8__(*(_QWORD *)v1655 ^ i36, v1780);
        v1655 += 8LL;
        v1784 -= 8;
        --v1783;
      }
      while ( v1783 );
      for ( ; v1784; --v1784 )
      {
        v1785 = *(unsigned __int8 *)v1655++;
        i36 = __ROL8__(v1785 ^ i36, v1780);
      }
      for ( i37 = i36; ; LODWORD(i36) = i37 ^ i36 )
      {
        i37 >>= 31;
        if ( !i37 )
          break;
      }
      *(_DWORD *)(v1774 + 20) = i36 & 0x7FFFFFFF;
      v1567 = (_BYTE *)v1767;
      *(_DWORD *)(v1767 + 2088) += 32;
      *(_DWORD *)(v1767 + 2392) = 5;
    }
    v1787 = *((_DWORD *)v1567 + 598);
    v2607 = (__int64)v1567;
    v1788 = v1567;
    if ( v1787 >= 6 )
    {
      if ( v1787 >= 7 )
        goto LABEL_2940;
      goto LABEL_2882;
    }
    v1789 = 0;
    v1790 = v2616;
    v1791 = (__int64)v1567;
    v1792 = v2616[4];
    v2927 = v1792;
    if ( (*((_DWORD *)v1567 + 612) & 0x40000000) != 0 )
      goto LABEL_2880;
    v1793 = 0;
    v2607 = (__int64)v1567;
    if ( !*((_DWORD *)v2616 + 12) )
      goto LABEL_2880;
    v1794 = v1792;
    do
    {
      if ( !(*((__int64 (__fastcall **)(__int64, char *, _QWORD))v1567 + 76))(
              v1794 + ((__int64)*(int *)(v1794 + 4LL * v1793) >> 4),
              v2708,
              0LL) )
        ++v1789;
      ++v1793;
    }
    while ( v1793 < *((_DWORD *)v1790 + 12) );
    v2607 = (__int64)v1567;
    if ( !v1789 )
    {
LABEL_2880:
      v1788 = (_BYTE *)v1791;
      *(_DWORD *)(v1791 + 2392) = 6;
LABEL_2882:
      v128 = (*((_DWORD *)v1788 + 612) & 0x40000000) == 0;
      v1819 = 0;
      v2613 = *(_QWORD *)v2603;
      if ( !v128 )
        goto LABEL_2939;
      v1820 = 0;
      if ( !*(_DWORD *)(v2601 + 48) )
        goto LABEL_2939;
      v1821 = v2613;
      v1822 = v2601;
      do
      {
        if ( !(*((__int64 (__fastcall **)(ULONG_PTR, char *, _QWORD))v1788 + 76))(
                v1821 + ((__int64)*(int *)(v1821 + 4LL * v1820) >> 4),
                v2709,
                0LL) )
          ++v1819;
        ++v1820;
      }
      while ( v1820 < *(_DWORD *)(v1822 + 48) );
      v1791 = v2607;
      v2928 = v1819;
      if ( !v1819 )
      {
LABEL_2939:
        v1567 = v1788;
        *((_DWORD *)v1788 + 598) = 7;
        goto LABEL_2940;
      }
      v1823 = *((unsigned int *)v1788 + 505);
      v1824 = v1823 + 16 * v1819 + 48;
      if ( v1824 <= *((_DWORD *)v1788 + 647) )
      {
        v1567 = v1788;
        *((_DWORD *)v1788 + 505) = v1824;
LABEL_2906:
        v1831 = (int *)&v1567[v1823];
        ++*((_DWORD *)v1567 + 515);
        *(_QWORD *)&v107 = &v1567[v1823];
        v2605 = (__int64)&v1567[v1823];
        *((_QWORD *)&v107 + 1) = 6LL;
        v1832 = 48;
        do
        {
          *(_QWORD *)v107 = 0LL;
          v1832 -= 8;
          *(_QWORD *)&v107 = v107 + 8;
          --*((_QWORD *)&v107 + 1);
        }
        while ( *((_QWORD *)&v107 + 1) );
        if ( v1832 )
        {
          *((_QWORD *)&v107 + 1) = 0xFFFFFFFFLL;
          do
          {
            *(_BYTE *)v107 = 0;
            *(_QWORD *)&v107 = v107 + 1;
            --v1832;
          }
          while ( v1832 );
        }
        *v1831 = 10;
        *((_QWORD *)v1831 + 1) = 0LL;
        v1831[4] = 0;
        v1833 = *((_QWORD *)v1567 + 259);
        for ( i38 = v1833; ; LODWORD(v1833) = i38 ^ v1833 )
        {
          i38 >>= 31;
          if ( !i38 )
            break;
        }
        v1835 = v2601;
        v1836 = v1831 + 12;
        v1788 = v1567;
        v1831[5] = v1833 & 0x7FFFFFFF;
        v1837 = 0;
        v1831[6] = 1;
        v1831[7] = v1819;
        if ( !*(_DWORD *)(v1835 + 48) )
          goto LABEL_4004;
        do
        {
          v1838 = v2613 + ((__int64)*(int *)(v2613 + 4LL * v1837) >> 4);
          if ( (*((__int64 (__fastcall **)(ULONG_PTR, char *, _QWORD))v1567 + 76))(v1838, v2709, 0LL) )
          {
            LODWORD(v107) = v2928;
          }
          else
          {
            v1655 = v1838;
            *((_DWORD *)v1567 + 522) += 4;
            *(_QWORD *)&v107 = v1838;
            *((_QWORD *)&v107 + 1) = *((_QWORD *)v1567 + 259);
            if ( v1838 < v1838 + 4 )
            {
              do
              {
                _mm_prefetch((const char *)v107, 0);
                *(_QWORD *)&v107 = v107 + 64;
              }
              while ( (unsigned __int64)v107 < v1838 + 4 );
            }
            v1839 = 4;
            do
            {
              *(_QWORD *)&v107 = *(unsigned __int8 *)v1655++;
              *((_QWORD *)&v107 + 1) = __ROL8__(v107 ^ *((_QWORD *)&v107 + 1), *((_DWORD *)v1567 + 517));
              --v1839;
            }
            while ( v1839 );
            v1831 = (int *)v2605;
            *(_QWORD *)&v107 = *((_QWORD *)&v107 + 1);
            while ( 1 )
            {
              *(_QWORD *)&v107 = (unsigned __int64)v107 >> 31;
              if ( !(_QWORD)v107 )
                break;
              DWORD2(v107) ^= v107;
            }
            *((_QWORD *)&v107 + 1) = (unsigned int)*v1836 ^ DWORD2(v107);
            DWORD2(v107) &= ~0x80000000;
            *v1836 ^= DWORD2(v107);
            v1836[1] = 4;
            *((_QWORD *)v1836 + 1) = v1838;
            v1836 += 4;
            v128 = v2928 == 1;
            LODWORD(v107) = --v2928;
            if ( v128 )
              goto LABEL_2939;
          }
          v1655 = 1LL;
          ++v1837;
        }
        while ( v1837 < *(_DWORD *)(v2601 + 48) );
        if ( (_DWORD)v107 )
        {
LABEL_4004:
          if ( !*((_DWORD *)v1567 + 574) )
          {
            *((_QWORD *)v1567 + 288) = v1567 - 0x5C5FC0A76E374B18LL;
            *((_QWORD *)v1567 + 289) = ((unsigned __int64)v1831 - 0x4C48B4211BBACBEBLL) & -(__int64)(v1831 != 0LL);
            if ( v1831 )
              v1840 = *v1831;
            else
              v1840 = 0LL;
            *((_QWORD *)v1567 + 290) = v1840;
            *((_QWORD *)v1567 + 291) = 0LL;
            *((_DWORD *)v1567 + 574) = 1;
            __ba((__int64)v1567, 0LL);
          }
          goto LABEL_2932;
        }
        goto LABEL_2939;
      }
      v1567 = (_BYTE *)sub_140B11020(v1788, v1824, *((unsigned int *)v1788 + 585));
      if ( v1567 )
      {
        v1825 = *((_DWORD *)v1788 + 612);
        if ( (v1825 & 4) == 0 )
        {
          v1826 = *((_DWORD *)v1788 + 505);
          v1827 = *((_QWORD *)v1788 + 249);
          v1828 = (v1825 & 0x20000000) != 0 ? *((_DWORD *)v1788 + 585) : 0;
          if ( v1826 >= 8 )
          {
            v1829 = (unsigned __int64)v1826 >> 3;
            do
            {
              *(_QWORD *)v1788 = 0LL;
              v1826 -= 8;
              v1788 += 8;
              --v1829;
            }
            while ( v1829 );
          }
          for ( ; v1826; --v1826 )
            *v1788++ = 0;
          v1830 = *((_DWORD *)v1567 + 585);
          *((_DWORD *)v1567 + 585) = v1828;
          if ( v1828 == 3 )
          {
            (*((void (__fastcall **)(__int64))v1567 + 109))(v1827);
          }
          else if ( (*((_DWORD *)v1567 + 612) & 0x10000000) != 0 || !v1828 )
          {
            (*((void (__fastcall **)(__int64))v1567 + 31))(v1827);
          }
          else
          {
            (*((void (__fastcall **)(__int64, _QWORD))v1567 + 69))(v1827 - 8, *(_QWORD *)(v1827 - 8));
          }
          *((_DWORD *)v1567 + 585) = v1830;
        }
        *((_DWORD *)v1567 + 612) &= ~4u;
        goto LABEL_2906;
      }
      goto LABEL_2879;
    }
    v1795 = *((unsigned int *)v1567 + 505);
    v1796 = v1795 + 16 * v1789 + 48;
    if ( v1796 <= *((_DWORD *)v1567 + 647) )
    {
      v2607 = (__int64)v1567;
      *((_DWORD *)v1567 + 505) = v1796;
LABEL_2854:
      ++*(_DWORD *)(v1791 + 2060);
      v1803 = (int *)(v1791 + v1795);
      v1804 = 48;
      v1805 = (_QWORD *)(v1791 + v1795);
      v1806 = 6LL;
      do
      {
        *v1805 = 0LL;
        v1804 -= 8;
        ++v1805;
        --v1806;
      }
      while ( v1806 );
      for ( ; v1804; --v1804 )
      {
        *(_BYTE *)v1805 = 0;
        v1805 = (_QWORD *)((char *)v1805 + 1);
      }
      *v1803 = 10;
      *((_QWORD *)v1803 + 1) = 0LL;
      v1803[4] = 0;
      v1807 = *(_QWORD *)(v1791 + 2072);
      for ( i39 = v1807; ; LODWORD(v1807) = i39 ^ v1807 )
      {
        i39 >>= 31;
        if ( !i39 )
          break;
      }
      v1809 = v1803 + 12;
      v1803[5] = v1807 & 0x7FFFFFFF;
      v1810 = v2616;
      v1803[6] = 1;
      v1811 = 0;
      v1803[7] = v1789;
      if ( !*((_DWORD *)v1810 + 12) )
      {
        *((_QWORD *)&v107 + 1) = 1LL;
LABEL_2874:
        if ( !*(_DWORD *)(v1791 + 2296) )
        {
          *(_QWORD *)(v1791 + 2304) = v1791 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v1791 + 2312) = ((unsigned __int64)v1803 - 0x4C48B4211BBACBEBLL) & -(__int64)(v1803 != 0LL);
          if ( v1803 )
            v1818 = *v1803;
          else
            v1818 = 0LL;
          *(_QWORD *)(v1791 + 2320) = v1818;
          *(_QWORD *)(v1791 + 2328) = 0LL;
          *(_DWORD *)(v1791 + 2296) = 1;
          __ba(v1791, 0LL);
        }
LABEL_2879:
        v1567 = (_BYTE *)v1791;
        goto LABEL_2932;
      }
      while ( 1 )
      {
        v1812 = (const char *)(v2927 + ((__int64)*(int *)(v2927 + 4LL * v1811) >> 4));
        if ( !(*(__int64 (__fastcall **)(const char *, char *, _QWORD))(v1791 + 608))(v1812, v2708, 0LL) )
        {
          v1655 = (__int64)v1812;
          *(_DWORD *)(v1791 + 2088) += 4;
          v1813 = v1812;
          for ( i40 = *(_QWORD *)(v1791 + 2072); v1813 < v1812 + 4; v1813 += 64 )
            _mm_prefetch(v1813, 0);
          v1815 = 4;
          do
          {
            v1816 = *(unsigned __int8 *)v1655++;
            i40 = __ROL8__(v1816 ^ i40, *(_DWORD *)(v1791 + 2068));
            --v1815;
          }
          while ( v1815 );
          v1791 = v2607;
          for ( i41 = i40; ; LODWORD(i40) = i41 ^ i40 )
          {
            i41 >>= 31;
            if ( !i41 )
              break;
          }
          *v1809 ^= (*v1809 ^ i40) & 0x7FFFFFFF;
          v1809[1] = 4;
          *((_QWORD *)v1809 + 1) = v1812;
          v1809 += 4;
          if ( !--v1789 )
            goto LABEL_2880;
        }
        *((_QWORD *)&v107 + 1) = 1LL;
        if ( ++v1811 >= *((_DWORD *)v2616 + 12) )
          goto LABEL_2874;
      }
    }
    v2607 = sub_140B11020(v1567, v1796, *((unsigned int *)v1567 + 585));
    v1791 = v2607;
    if ( v2607 )
    {
      v1797 = *((_DWORD *)v1567 + 612);
      if ( (v1797 & 4) == 0 )
      {
        v1798 = *((_DWORD *)v1567 + 505);
        v1799 = *((_QWORD *)v1567 + 249);
        v1800 = (v1797 & 0x20000000) != 0 ? *((_DWORD *)v1567 + 585) : 0;
        if ( v1798 >= 8 )
        {
          v1801 = (unsigned __int64)v1798 >> 3;
          do
          {
            *(_QWORD *)v1567 = 0LL;
            v1798 -= 8;
            v1567 += 8;
            --v1801;
          }
          while ( v1801 );
        }
        for ( ; v1798; --v1798 )
          *v1567++ = 0;
        v1802 = *(_DWORD *)(v1791 + 2340);
        *(_DWORD *)(v1791 + 2340) = v1800;
        if ( v1800 == 3 )
        {
          (*(void (__fastcall **)(__int64))(v1791 + 872))(v1799);
        }
        else if ( (*(_DWORD *)(v1791 + 2448) & 0x10000000) != 0 || !v1800 )
        {
          (*(void (__fastcall **)(__int64))(v1791 + 248))(v1799);
        }
        else
        {
          (*(void (__fastcall **)(__int64, _QWORD))(v1791 + 552))(v1799 - 8, *(_QWORD *)(v1799 - 8));
        }
        *(_DWORD *)(v1791 + 2340) = v1802;
      }
      *(_DWORD *)(v1791 + 2448) &= ~4u;
      goto LABEL_2854;
    }
LABEL_2932:
    v93 = (ULONG_PTR)v1567;
    goto LABEL_2933;
  }
  v1848 = v1656 - 7;
  if ( !v1848 )
  {
LABEL_2940:
    v1842 = *((_QWORD *)v1567 + 173);
    v93 = (ULONG_PTR)v1567;
    v2602 = (__int64)v1567;
    v2629 = v1567;
    v1843 = *(_QWORD *)(v1842 + 32);
    v1844 = (__int64 (__fastcall *)(ULONG_PTR, char *, __int64))*((_QWORD *)v1567 + 64);
    v2613 = v1843;
    *(_QWORD *)&v107 = v1844(v1843, v2860, v1655);
    v1845 = v2862;
    v1846 = v107;
    v2605 = v107;
    v1847 = 0;
    v2929 = v2862;
    v2620 = v2861;
    if ( !v2861 )
    {
      if ( (*((_DWORD *)v1567 + 612) & 0x200000) == 0 )
      {
        v2660 = 317;
        KeBugCheckEx(__ROR4__BugCheckCode: (317, 160), BugCheckParameter1: 0xAuLL, BugCheckParameter2: v2613, BugCheckParameter3: 5uLL, BugCheckParameter4: 0LL);
      }
      goto LABEL_2933;
    }
    v1850 = 4;
    v2649 = 0LL;
    v1851 = &v2650;
    do
    {
      *(_BYTE *)v1851 = 0;
      v1851 = (int *)((char *)v1851 + 1);
      --v1850;
    }
    while ( v1850 );
    if ( !*((_DWORD *)v1567 + 515) )
      goto LABEL_2991;
    v1852 = v2650;
    LODWORD(v1853) = HIDWORD(v2649);
    v1854 = v2649;
    while ( 1 )
    {
      v1855 = v1567;
      v1856 = 0;
      if ( *((_QWORD *)v1567 + 335) )
        v1855 = (_BYTE *)*((_QWORD *)v1567 + 335);
      v1857 = (int *)&v1855[*((unsigned int *)v1855 + 514)];
      if ( v1854 && (unsigned int)v1853 <= v1847 )
      {
        v1856 = v1853;
        v1857 = (int *)&v1855[v1852];
      }
      if ( v1856 != v1847 )
        break;
LABEL_2981:
      LODWORD(v2649) = 1;
      v1852 = (_DWORD)v1857 - (_DWORD)v1855;
      HIDWORD(v2649) = v1856;
      v2650 = (_DWORD)v1857 - (_DWORD)v1855;
      v1854 = 1;
      v1870 = *v1857;
      v1853 = v1856;
      if ( (unsigned int)v1870 <= 0x2B
        && (v1871 = 0x80000001002LL, _bittest64(&v1871, v1870))
        && *((_QWORD *)v1857 + 1) == v1846
        && v1857[4] == v1845
        || (unsigned int)(v1870 - 33) <= 1 && *((unsigned int **)v1857 + 4) == v2620 )
      {
        if ( v1857 )
          goto LABEL_2990;
LABEL_2991:
        v1872 = v2613;
        v1873 = (__int64 (__fastcall *)(ULONG_PTR, char *))*((_QWORD *)v1567 + 64);
        v2633 = v1567;
        *(_QWORD *)&v107 = v1873(v2613, v2863);
        v1874 = v2864;
        v1875 = 0;
        v1876 = v2865;
        v2600 = (int *)v107;
        v2930 = v2865;
        v2623 = v2865;
        v2612 = v2864;
        if ( !v2864 )
        {
          if ( (*((_DWORD *)v1567 + 612) & 0x200000) == 0 )
          {
            v2661 = 317;
            KeBugCheckEx(__ROR4__BugCheckCode: (317, 160), BugCheckParameter1: 0xAuLL, BugCheckParameter2: v1872, BugCheckParameter3: 5uLL, BugCheckParameter4: 0LL);
          }
          v1565 = v2864 + 1;
          goto LABEL_3234;
        }
        v2651 = 0LL;
        v1877 = &v2652;
        v1878 = 4;
        do
        {
          *(_BYTE *)v1877 = 0;
          v1877 = (int *)((char *)v1877 + 1);
          --v1878;
        }
        while ( v1878 );
        if ( !*((_DWORD *)v1567 + 515) )
          goto LABEL_3038;
        v1879 = v2652;
        v1880 = HIDWORD(v2651);
        v1881 = v2651;
        while ( 1 )
        {
          v1882 = v1567;
          v1883 = 0;
          if ( *((_QWORD *)v1567 + 335) )
            v1882 = (_BYTE *)*((_QWORD *)v1567 + 335);
          v1884 = (int **)&v1882[*((unsigned int *)v1882 + 514)];
          if ( v1881 && v1880 <= v1875 )
          {
            v1883 = v1880;
            v1884 = (int **)&v1882[v1879];
          }
          if ( v1883 != v1875 )
            break;
LABEL_3028:
          LODWORD(v2651) = 1;
          v1879 = (_DWORD)v1884 - (_DWORD)v1882;
          HIDWORD(v2651) = v1883;
          v2652 = (_DWORD)v1884 - (_DWORD)v1882;
          v1881 = 1;
          v1897 = *(int *)v1884;
          v1880 = v1883;
          if ( (unsigned int)v1897 <= 0x2B )
          {
            v1898 = 0x80000001002LL;
            if ( _bittest64(&v1898, v1897) )
            {
              if ( v1884[1] == v2600 && *((_DWORD *)v1884 + 4) == v1876 )
              {
                v1874 = v2612;
LABEL_3037:
                if ( v1884 )
                  goto LABEL_3428;
LABEL_3038:
                v2610 = (*((__int64 (__fastcall **)(ULONG_PTR))v1567 + 85))(v1872);
                LODWORD(v2609) = v2623;
                if ( !v2610 )
                  goto LABEL_3428;
                v1899 = (char **)*((_QWORD *)v1567 + 165);
                _disable();
                v1900 = *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *((_QWORD *)v1567 + 202));
                _enable();
                (*((void (__fastcall **)(__int64))v1567 + 45))(v1900);
                LOBYTE(v1901) = 1;
                (*((void (__fastcall **)(_QWORD, __int64))v1567 + 29))(*((_QWORD *)v1567 + 166), v1901);
                v1902 = *v1899;
                if ( *v1899 != (char *)v1899 )
                {
                  v1903 = *((_QWORD *)v1567 + 234);
                  while ( 1 )
                  {
                    v1904 = *(_QWORD *)&v1902[*((_QWORD *)v1567 + 235) - v1903];
                    if ( v1874 >= v1904 && v1874 < v1904 + *(unsigned int *)&v1902[*((_QWORD *)v1567 + 236) - v1903] )
                      break;
                    v1902 = *(char **)v1902;
                    if ( v1902 == (char *)v1899 )
                      goto LABEL_3046;
                  }
                  (*((void (__fastcall **)(char *, __int64))v1567 + 27))(&v1902[-v1903], 1LL);
                }
LABEL_3046:
                (*((void (__fastcall **)(_QWORD))v1567 + 35))(*((_QWORD *)v1567 + 166));
                (*((void (**)(void))v1567 + 46))();
                if ( (*((_DWORD *)v1567 + 612) & 0x40000000) != 0 )
                {
                  LODWORD(v107) = sub_140B18070(&v2629, v1874, 15LL);
                  v93 = (ULONG_PTR)v2629;
                  v2602 = (__int64)v2629;
                  goto LABEL_3231;
                }
                v1906 = (__int64 (__fastcall *)(ULONG_PTR, __int64, _QWORD, unsigned int *))*((_QWORD *)v1567 + 62);
                v2721 = 0LL;
                v2676[4] = 0;
                v1565 = 1;
                LOBYTE(v1905) = 1;
                v1907 = v1906(v1874, v1905, 0LL, &v2623);
                v1908 = v1907;
                v2719[1] = v1907;
                LOBYTE(v1908) = 1;
                v2623 &= -(v1907 != 0);
                v1909 = (__int64 (__fastcall *)(ULONG_PTR, __int64, __int64, unsigned int *))*((_QWORD *)v1567 + 62);
                v2676[1] = v2623;
                v1910 = v1909(v1874, v1908, 12LL, &v2623);
                v1911 = v1910;
                v2613 = v1910;
                v2719[2] = v1910;
                LOBYTE(v1911) = 1;
                v2623 &= -(v1910 != 0);
                v1912 = (__int64 (__fastcall *)(ULONG_PTR, ULONG_PTR, __int64, unsigned int *))*((_QWORD *)v1567 + 62);
                v2931 = v2623;
                v2676[2] = v2623;
                v2720 = v1912(v1874, v1911, 10LL, &v2623);
                v2623 &= -(v2720 != 0);
                v1913 = (__int64 (__fastcall *)(ULONG_PTR))*((_QWORD *)v1567 + 63);
                v2676[3] = v2623;
                v1914 = v1913(v1874);
                if ( !v1914 )
                {
                  if ( (*((_DWORD *)v1567 + 612) & 0x200000) == 0 )
                  {
                    v2671 = 317;
                    KeBugCheckEx(__ROR4__BugCheckCode: (317, 160), BugCheckParameter1: 0xAuLL, BugCheckParameter2: v1874, BugCheckParameter3: 7uLL, BugCheckParameter4: 0LL);
                  }
                  if ( !*((_DWORD *)v1567 + 574) )
                  {
                    *((_QWORD *)v1567 + 288) = v1567 - 0x5C5FC0A76E374B18LL;
                    *((_QWORD *)v1567 + 289) = 0LL;
                    *((_QWORD *)v1567 + 290) = 271LL;
                    *((_QWORD *)v1567 + 291) = v1874;
                    *((_DWORD *)v1567 + 574) = 1;
                    __ba((__int64)v1567, 0LL);
                  }
                  v93 = (ULONG_PTR)v2629;
                  v2602 = (__int64)v2629;
                  goto LABEL_3234;
                }
                v1915 = (*((__int64 (__fastcall **)(ULONG_PTR, _DWORD *))v1567 + 148))(v1874, v2714);
                v1916 = *((unsigned int *)v1567 + 585);
                v2722 = v1915;
                v2676[5] = v2714[0];
                LODWORD(v1915) = *(_DWORD *)(v1914 + 84);
                v2719[0] = v1874;
                v1917 = *((unsigned int *)v1567 + 505);
                v2676[0] = v1915;
                v1918 = v1917 + 288;
                if ( (unsigned int)(v1917 + 288) <= *((_DWORD *)v1567 + 647) )
                {
                  v93 = (ULONG_PTR)v1567;
                  v2602 = (__int64)v1567;
                  *((_DWORD *)v1567 + 505) = v1918;
                }
                else
                {
                  v2602 = sub_140B11020(v1567, v1918, v1916);
                  v93 = v2602;
                  if ( !v2602 )
                  {
                    v93 = (ULONG_PTR)v2629;
                    v2602 = (__int64)v2629;
                    goto LABEL_3056;
                  }
                  v1919 = *((_DWORD *)v1567 + 612);
                  if ( (v1919 & 4) == 0 )
                  {
                    v1920 = *((_DWORD *)v1567 + 505);
                    v1921 = *((_QWORD *)v1567 + 249);
                    v1922 = (v1919 & 0x20000000) != 0 ? *((_DWORD *)v1567 + 585) : 0;
                    if ( v1920 >= 8 )
                    {
                      v1923 = (unsigned __int64)v1920 >> 3;
                      do
                      {
                        *(_QWORD *)v1567 = 0LL;
                        v1920 -= 8;
                        v1567 += 8;
                        --v1923;
                      }
                      while ( v1923 );
                    }
                    for ( ; v1920; --v1920 )
                      *v1567++ = 0;
                    v1924 = *(_DWORD *)(v93 + 2340);
                    *(_DWORD *)(v93 + 2340) = v1922;
                    if ( v1922 == 3 )
                    {
                      (*(void (__fastcall **)(__int64))(v93 + 872))(v1921);
                    }
                    else if ( (*(_DWORD *)(v93 + 2448) & 0x10000000) != 0 || !v1922 )
                    {
                      (*(void (__fastcall **)(__int64))(v93 + 248))(v1921);
                    }
                    else
                    {
                      (*(void (__fastcall **)(__int64, _QWORD))(v93 + 552))(v1921 - 8, *(_QWORD *)(v1921 - 8));
                    }
                    *(_DWORD *)(v93 + 2340) = v1924;
                  }
                  *(_DWORD *)(v93 + 2448) &= ~4u;
                }
                v1925 = 6LL;
                v1926 = v93 + v1917;
                *(_DWORD *)(v93 + 2060) += 6;
                v1927 = v2719;
                v1928 = v2676;
                v2601 = v93 + v1917;
                v2616 = v2719;
                v2624 = v2676;
                v2603 = 6LL;
                do
                {
                  v1929 = *v1928;
                  v1930 = 48;
                  v1931 = (_QWORD *)*v1927;
                  v1932 = (_QWORD *)v1926;
                  v2608 = *v1928;
                  do
                  {
                    *v1932 = 0LL;
                    v1930 -= 8;
                    ++v1932;
                    --v1925;
                  }
                  while ( v1925 );
                  for ( ; v1930; --v1930 )
                  {
                    *(_BYTE *)v1932 = 0;
                    v1932 = (_QWORD *)((char *)v1932 + 1);
                  }
                  *(_DWORD *)v1926 = 11;
                  *(_QWORD *)(v1926 + 8) = v1931;
                  v1933 = v1931;
                  *(_DWORD *)(v1926 + 16) = v1929;
                  v1934 = (const char *)v1931;
                  *(_DWORD *)(v93 + 2088) += v1929;
                  v1935 = *(_DWORD *)(v93 + 2068);
                  v1936 = *(_QWORD *)(v93 + 2072);
                  if ( v1931 < (_QWORD *)((char *)v1931 + v1929) )
                  {
                    do
                    {
                      _mm_prefetch(v1934, 0);
                      v1934 += 64;
                    }
                    while ( v1934 < (const char *)v1931 + v1929 );
                  }
                  v1937 = *(_QWORD *)(v93 + 2072);
                  v1938 = (unsigned int)v1929 >> 7;
                  if ( (unsigned int)v1929 >> 7 )
                  {
                    do
                    {
                      v1939 = 8LL;
                      do
                      {
                        v1940 = v1933[1] ^ __ROL8__(*v1933 ^ v1937, v1935);
                        v1933 += 2;
                        v1937 = __ROL8__(v1940, v1935);
                        --v1939;
                      }
                      while ( v1939 );
                      v1941 = (__ROL8__(v1936 ^ ((char *)v1933 - (char *)v1931), 17) ^ v1936 ^ (unsigned __int64)((char *)v1933 - (char *)v1931))
                            * (unsigned __int128)0x7010008004002001uLL;
                      v2784 = *((_QWORD *)&v1941 + 1);
                      v1935 = (BYTE8(v1941) ^ (unsigned __int8)(v1941 ^ v1935)) & 0x3F;
                      if ( !v1935 )
                        LOBYTE(v1935) = 1;
                      --v1938;
                    }
                    while ( v1938 );
                    LODWORD(v1929) = v2608;
                    v1927 = v2616;
                    v1928 = v2624;
                  }
                  v1565 = 1;
                  v1942 = v1929 & 0x7F;
                  if ( v1942 >= 8 )
                  {
                    v1943 = (unsigned __int64)(v1929 & 0x7F) >> 3;
                    do
                    {
                      v1937 = __ROL8__(*v1933++ ^ v1937, v1935);
                      v1942 -= 8;
                      --v1943;
                    }
                    while ( v1943 );
                  }
                  if ( v1942 )
                  {
                    do
                    {
                      v1944 = *(unsigned __int8 *)v1933;
                      v1933 = (_QWORD *)((char *)v1933 + 1);
                      v1937 = __ROL8__(v1944 ^ v1937, v1935);
                      --v1942;
                    }
                    while ( v1942 );
                    LODWORD(v1929) = v2608;
                  }
                  for ( i42 = v1937; ; LODWORD(v1937) = i42 ^ v1937 )
                  {
                    i42 >>= 31;
                    if ( !i42 )
                      break;
                  }
                  v1925 = 6LL;
                  *(_DWORD *)(v1926 + 20) = v1937 & 0x7FFFFFFF;
                  ++v1928;
                  *(_DWORD *)(v93 + 2088) += v1929;
                  ++v1927;
                  v1926 += 48LL;
                  v2624 = v1928;
                  v128 = v2603-- == 1;
                  v2616 = v1927;
                }
                while ( !v128 );
                v1946 = v2601;
                v1947 = v2612;
                v1948 = v2609;
                v1949 = v2612;
                v2633 = (_BYTE *)v93;
                *(_DWORD *)v2601 = 44;
                *(_QWORD *)(v1946 + 24) = v1949;
                *(_DWORD *)(v1946 + 32) |= 2u;
                v2629 = (_BYTE *)v93;
                LODWORD(v107) = sub_140B0F838(
                                  (int)&v2633,
                                  (int)v2600,
                                  v1948,
                                  v1949,
                                  v2610,
                                  15,
                                  (__int64)&v2640,
                                  (__int64)v2663);
                if ( (v107 & 0x80000000) != 0LL )
                {
                  v1567 = (_BYTE *)v93;
LABEL_3233:
                  if ( (_DWORD)v107 == -1073741554 )
                    goto LABEL_3428;
                  goto LABEL_3234;
                }
                v1567 = v2633;
                v1950 = 48;
                v1951 = v2663[0] - v2640;
                v1952 = (__int64)&v2633[v1946 - v93];
                v2601 = v1952;
                *((_QWORD *)&v1955 + 1) = 6LL;
                v2629 = v2633;
                v1953 = (_QWORD *)(v1947 + v2640);
                v1954 = (_DWORD *)(v1952 + 192);
                *(_QWORD *)&v1955 = v1952 + 192;
                do
                {
                  *(_QWORD *)v1955 = 0LL;
                  v1950 -= 8;
                  *(_QWORD *)&v1955 = v1955 + 8;
                  --*((_QWORD *)&v1955 + 1);
                }
                while ( *((_QWORD *)&v1955 + 1) );
                if ( v1950 )
                {
                  *((_QWORD *)&v1955 + 1) = 0xFFFFFFFFLL;
                  do
                  {
                    *(_BYTE *)v1955 = 0;
                    *(_QWORD *)&v1955 = v1955 + 1;
                    --v1950;
                  }
                  while ( v1950 );
                }
                *v1954 = 11;
                v1956 = v1953;
                *(_QWORD *)(v1952 + 200) = v1953;
                v1957 = (const char *)v1953;
                *(_DWORD *)(v1952 + 208) = v1951;
                *((_DWORD *)v1567 + 522) += v1951;
                v1958 = *((_DWORD *)v1567 + 517);
                v1959 = *((_QWORD *)v1567 + 259);
                v1960 = (unsigned __int64)v1953 + v1951;
                if ( (unsigned __int64)v1953 < v1960 )
                {
                  *((_QWORD *)&v1955 + 1) = 64LL;
                  do
                  {
                    _mm_prefetch(v1957, 0);
                    v1957 += 64;
                  }
                  while ( (unsigned __int64)v1957 < v1960 );
                }
                v1961 = *((_QWORD *)v1567 + 259);
                v1962 = v1951 >> 7;
                if ( v1951 >> 7 )
                {
                  do
                  {
                    v1963 = 8LL;
                    do
                    {
                      v1964 = v1956[1] ^ __ROL8__(*v1956 ^ v1961, v1958);
                      v1956 += 2;
                      v1961 = __ROL8__(v1964, v1958);
                      --v1963;
                    }
                    while ( v1963 );
                    v1955 = (__ROL8__(v1959 ^ ((char *)v1956 - (char *)v1953), 17) ^ v1959 ^ (unsigned __int64)((char *)v1956 - (char *)v1953))
                          * (unsigned __int128)0x7010008004002001uLL;
                    v2785 = *((_QWORD *)&v1955 + 1);
                    v1958 = (BYTE8(v1955) ^ (unsigned __int8)(v1955 ^ v1958)) & 0x3F;
                    if ( !v1958 )
                      LOBYTE(v1958) = 1;
                    --v1962;
                  }
                  while ( v1962 );
                  v1952 = v2601;
                  v1954 = (_DWORD *)(v2601 + 192);
                }
                v1965 = v1951 & 0x7F;
                if ( (unsigned int)v1965 >= 8 )
                {
                  v1966 = (unsigned __int64)(unsigned int)v1965 >> 3;
                  do
                  {
                    v1961 = __ROL8__(*v1956++ ^ v1961, v1958);
                    v1965 = (unsigned int)(v1965 - 8);
                    --v1966;
                  }
                  while ( v1966 );
                }
                if ( (_DWORD)v1965 )
                {
                  do
                  {
                    v1967 = *(unsigned __int8 *)v1956;
                    v1956 = (_QWORD *)((char *)v1956 + 1);
                    v1961 = __ROL8__(v1967 ^ v1961, v1958);
                    v1965 = (unsigned int)(v1965 - 1);
                  }
                  while ( (_DWORD)v1965 );
                  v1952 = v2601;
                }
                for ( i43 = v1961 >> 31; i43; i43 >>= 31 )
                  v1961 = (unsigned int)i43 ^ (unsigned int)v1961;
                LODWORD(v1961) = v1961 & 0x7FFFFFFF;
                v1954[5] = v1961;
                v1565 = 1;
                *(_DWORD *)(v1952 + 240) = 48;
                if ( *(_DWORD *)(v1952 + 256) )
                  *(_DWORD *)(v1952 + 264) |= 1u;
                v1969 = v1952 + 96;
                v2602 = (__int64)v1567;
                v2629 = v1567;
                v93 = (ULONG_PTR)v1567;
                if ( v1952 != -96 )
                {
                  v1983 = v2931;
                  v2602 = (__int64)v1567;
                  *(_DWORD *)v1969 = 14;
                  goto LABEL_3166;
                }
                v1970 = *((unsigned int *)v1567 + 505);
                v1971 = v1970 + 48;
                if ( (unsigned int)(v1970 + 48) <= *((_DWORD *)v1567 + 647) )
                {
                  v1972 = (__int64)v1567;
                  *((_DWORD *)v1567 + 505) = v1971;
                  goto LABEL_3142;
                }
                v1972 = sub_140B11020(v1567, v1971, *((unsigned int *)v1567 + 585));
                if ( v1972 )
                {
                  v1973 = *((_DWORD *)v1567 + 612);
                  if ( (v1973 & 4) == 0 )
                  {
                    v1974 = *((_DWORD *)v1567 + 505);
                    v1975 = *((_QWORD *)v1567 + 249);
                    v1976 = (v1973 & 0x20000000) != 0 ? *((_DWORD *)v1567 + 585) : 0;
                    if ( v1974 >= 8 )
                    {
                      v1977 = (unsigned __int64)v1974 >> 3;
                      do
                      {
                        *(_QWORD *)v1567 = 0LL;
                        v1974 -= 8;
                        v1567 += 8;
                        --v1977;
                      }
                      while ( v1977 );
                    }
                    for ( ; v1974; --v1974 )
                      *v1567++ = 0;
                    v1978 = *(_DWORD *)(v1972 + 2340);
                    *(_DWORD *)(v1972 + 2340) = v1976;
                    if ( v1976 == 3 )
                    {
                      (*(void (__fastcall **)(__int64))(v1972 + 872))(v1975);
                    }
                    else if ( (*(_DWORD *)(v1972 + 2448) & 0x10000000) != 0 || !v1976 )
                    {
                      (*(void (__fastcall **)(__int64))(v1972 + 248))(v1975);
                    }
                    else
                    {
                      (*(void (__fastcall **)(__int64, _QWORD))(v1972 + 552))(v1975 - 8, *(_QWORD *)(v1975 - 8));
                    }
                    *(_DWORD *)(v1972 + 2340) = v1978;
                  }
                  *(_DWORD *)(v1972 + 2448) &= ~4u;
LABEL_3142:
                  ++*(_DWORD *)(v1972 + 2060);
                  v1979 = 48;
                  v1969 = v1972 + v1970;
                  v2605 = v1969;
                  v1980 = (_QWORD *)v1969;
                  v1981 = 6LL;
                  do
                  {
                    *v1980 = 0LL;
                    v1979 -= 8;
                    ++v1980;
                    --v1981;
                  }
                  while ( v1981 );
                  for ( ; v1979; --v1979 )
                  {
                    *(_BYTE *)v1980 = 0;
                    v1980 = (_QWORD *)((char *)v1980 + 1);
                  }
                  v1982 = (const char *)v2613;
                  v1983 = v2931;
                  v1965 = v2613;
                  *(_DWORD *)v1969 = 14;
                  *(_QWORD *)(v1969 + 8) = v1965;
                  *(_DWORD *)(v1969 + 16) = v2931;
                  *(_DWORD *)(v1972 + 2088) += v2931;
                  v1984 = *(_DWORD *)(v1972 + 2068);
                  v1985 = *(_QWORD *)(v1972 + 2072);
                  if ( v1965 < v1965 + v2931 )
                  {
                    do
                    {
                      _mm_prefetch(v1982, 0);
                      v1982 += 64;
                    }
                    while ( (unsigned __int64)v1982 < v1965 + v2931 );
                  }
                  v1961 = *(_QWORD *)(v1972 + 2072);
                  v1986 = v2931 >> 7;
                  if ( v2931 >> 7 )
                  {
                    do
                    {
                      v1987 = 8LL;
                      do
                      {
                        v1988 = *(_QWORD *)(v1965 + 8) ^ __ROL8__(*(_QWORD *)v1965 ^ v1961, v1984);
                        v1965 += 16LL;
                        v1961 = __ROL8__(v1988, v1984);
                        --v1987;
                      }
                      while ( v1987 );
                      v1989 = __ROL8__(v1985 ^ (v1965 - v2613), 17) ^ v1985 ^ (v1965 - v2613);
                      v2786 = (v1989 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                      v1984 = ((unsigned __int8)(v2786 ^ v1989) ^ (unsigned __int8)v1984) & 0x3F;
                      if ( !v1984 )
                        LOBYTE(v1984) = 1;
                      --v1986;
                    }
                    while ( v1986 );
                    v1969 = v2605;
                    v1952 = v2601;
                    v1983 = v2931;
                  }
                  *((_QWORD *)&v1955 + 1) = v1983 & 0x7F;
                  if ( DWORD2(v1955) >= 8 )
                  {
                    *(_QWORD *)&v1955 = (unsigned __int64)(v1983 & 0x7F) >> 3;
                    do
                    {
                      v1961 = __ROL8__(*(_QWORD *)v1965 ^ v1961, v1984);
                      v1965 += 8LL;
                      *((_QWORD *)&v1955 + 1) = (unsigned int)(DWORD2(v1955) - 8);
                      *(_QWORD *)&v1955 = v1955 - 1;
                    }
                    while ( (_QWORD)v1955 );
                  }
                  if ( DWORD2(v1955) )
                  {
                    do
                    {
                      *(_QWORD *)&v1955 = *(unsigned __int8 *)v1965++;
                      v1961 = __ROL8__(v1955 ^ v1961, v1984);
                      *((_QWORD *)&v1955 + 1) = (unsigned int)(DWORD2(v1955) - 1);
                    }
                    while ( DWORD2(v1955) );
                    v1983 = v2931;
                  }
                  for ( i44 = v1961; ; v1961 = (unsigned int)i44 ^ (unsigned int)v1961 )
                  {
                    i44 >>= 31;
                    if ( !i44 )
                      break;
                  }
                  LODWORD(v1961) = v1961 & 0x7FFFFFFF;
                  v2602 = v1972;
                  *(_DWORD *)(v1969 + 20) = v1961;
                  v93 = v1972;
                  *(_DWORD *)(v1972 + 2088) += v1983;
LABEL_3166:
                  if ( (*(_DWORD *)(v93 + 2448) & 0x40000000) != 0 && v1983 )
                    sub_1403EB41C(v93, v2613, v1983, v1969 + 28);
                  v1991 = v2612;
                  v1565 = 1;
                  *(_DWORD *)(v1969 + 24) = 1;
                  *(_DWORD *)(v1952 + 144) = 35;
                  *(_DWORD *)(v1952 + 184) |= 1u;
                  v2075 = *(_DWORD *)(v1952 + 160) < 0x94u;
                  v2629 = (_BYTE *)v93;
                  if ( !v2075 )
                  {
                    v1992 = *(_QWORD *)(v1952 + 152);
                    *(_QWORD *)&v107 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, unsigned __int64, ULONG_PTR))(v93 + 504))(
                                         v1991,
                                         *((_QWORD *)&v1955 + 1),
                                         v1961,
                                         v1965);
                    if ( !(_QWORD)v107 )
                    {
                      v2633 = 0LL;
                      v1567 = (_BYTE *)v93;
                      goto LABEL_3234;
                    }
                    v1961 = v1991 + *(unsigned int *)(v107 + 80);
                    *((_QWORD *)&v1955 + 1) = *(_DWORD *)(v1952 + 184) | 2u;
                    *(_DWORD *)(v1952 + 184) = DWORD2(v1955);
                    v1993 = DWORD2(v1955);
                    *(_QWORD *)&v1955 = *(_QWORD *)(v1992 + 112);
                    if ( (unsigned __int64)v1955 >= v1991 && (unsigned __int64)v1955 < v1961 )
                    {
                      v1993 = DWORD2(v1955) | 4;
                      *(_QWORD *)(v1952 + 168) = *(_QWORD *)v1955;
                      *(_DWORD *)(v1952 + 184) = DWORD2(v1955) | 4;
                    }
                    v1994 = *(_QWORD **)(v1992 + 120);
                    if ( (unsigned __int64)v1994 >= v1991 && (unsigned __int64)v1994 < v1961 )
                    {
                      *(_QWORD *)(v1952 + 176) = *v1994;
                      *(_DWORD *)(v1952 + 184) = v1993 | 8;
                    }
                  }
                  v128 = (*(_DWORD *)(v93 + 2448) & 0x400000) == 0;
                  v2633 = (_BYTE *)v93;
                  if ( v128 )
                    goto LABEL_3427;
                  *(_QWORD *)&v107 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, unsigned __int64, ULONG_PTR))(v93 + 504))(
                                       v1991,
                                       *((_QWORD *)&v1955 + 1),
                                       v1961,
                                       v1965);
                  v2605 = v107;
                  v1995 = v107;
                  if ( !(_QWORD)v107 )
                    goto LABEL_3180;
                  v1996 = *(_WORD *)(v107 + 6);
                  v107 = (unsigned int)v2609 * (unsigned __int128)0xAAAAAAAAAAAAAAABuLL;
                  v2932 = v1996;
                  v2613 = (unsigned int)v2609 / 0xCuLL;
                  if ( !v1996 )
                  {
                    if ( (*(_DWORD *)(v93 + 2448) & 0x200000) == 0 )
                    {
                      v2663[1] = 317;
                      KeBugCheckEx(__ROR4__BugCheckCode: (317, 160), BugCheckParameter1: 0xAuLL, BugCheckParameter2: v1991, BugCheckParameter3: 0LL, BugCheckParameter4: 0LL);
                    }
                    if ( !*(_DWORD *)(v93 + 2296) )
                    {
                      *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v93 + 2312) = 0LL;
                      *(_QWORD *)(v93 + 2320) = 271LL;
                      *(_QWORD *)(v93 + 2328) = v1991;
                      *(_DWORD *)(v93 + 2296) = 1;
                      goto LABEL_3185;
                    }
                    goto LABEL_3180;
                  }
                  v1997 = (unsigned int *)v2600;
                  v1998 = (_DWORD *)(*(unsigned __int16 *)(v1995 + 20) + v1995 + 24);
                  v2606 = (ULONG_PTR)&v2600[3 * ((unsigned int)v2609 / 0xC)];
                  v1999 = 0;
                  v2603 = (__int64)v1998;
                  v2604 = 0;
                  v2000 = v2606;
                  v2001 = v1998 + 2;
                  v2002 = 1LL;
                  while ( 1 )
                  {
                    v2003 = v2001[2];
                    *((_QWORD *)&v107 + 1) = v2001[1];
                    if ( v2003 <= *v2001 )
                      v2003 = *v2001;
                    v2610 = v2001[1];
                    v2004 = DWORD2(v107) + v2003;
                    if ( v1999 )
                    {
                      if ( v2004 < v1998[10 * v1999 - 7] )
                      {
                        if ( (*(_DWORD *)(v93 + 2448) & 0x200000) == 0 )
                        {
                          v2663[2] = 317;
                          KeBugCheckEx(__ROR4__BugCheckCode: (317, 160), BugCheckParameter1: 0xAuLL, BugCheckParameter2: v1991, BugCheckParameter3: 1uLL, BugCheckParameter4: 0LL);
                        }
                        if ( !*(_DWORD *)(v93 + 2296) )
                        {
                          *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                          *(_QWORD *)(v93 + 2312) = 0LL;
                          *(_QWORD *)(v93 + 2320) = 271LL;
                          *(_QWORD *)(v93 + 2328) = v1991;
                          *(_DWORD *)(v93 + 2296) = 1;
                          goto LABEL_3185;
                        }
LABEL_3180:
                        LODWORD(v107) = -1073741701;
LABEL_3231:
                        v1567 = (_BYTE *)v93;
                        if ( (v107 & 0x80000000) != 0LL )
                        {
                          v1565 = 1;
                          goto LABEL_3233;
                        }
LABEL_3428:
                        v2145 = v2620;
                        v2146 = (*(__int64 (__fastcall **)(unsigned int *))(v93 + 504))(v2620);
                        v2147 = *(unsigned int *)(v2146 + 148);
                        if ( (unsigned int)v2147 >= 0x14 )
                        {
                          v2148 = *(unsigned int *)(v2146 + 144);
                          v2149 = (char *)v2145 + v2148 + v2147;
                          for ( i45 = (char *)v2145 + v2148; i45 != v2149; i45 += 20 )
                          {
                            if ( !*((_DWORD *)i45 + 3) )
                              break;
                            v2151 = *((unsigned int *)i45 + 4);
                            if ( !(_DWORD)v2151 )
                              break;
                            v2152 = *(_QWORD *)((char *)v2145 + v2151);
                            if ( v2152 )
                            {
                              LODWORD(v107) = sub_140B0D7A8(&v2629, v2152, 2147483663u);
                              v93 = (ULONG_PTR)v2629;
                              *((_QWORD *)&v107 + 1) = 0x80000000LL;
                              v1567 = v2629;
                              if ( (int)(v107 + 0x80000000) >= 0 && (_DWORD)v107 != -1073741554 )
                                goto LABEL_2933;
                            }
                          }
                          v2602 = v93;
                        }
                        else
                        {
                          v93 = (ULONG_PTR)v1567;
LABEL_2990:
                          v2602 = (__int64)v1567;
                        }
                        (*((void (__fastcall **)(_QWORD, char *, int *, __int64))v1567 + 64))(
                          *(_QWORD *)(*((_QWORD *)v1567 + 173) + 32LL),
                          v2879,
                          v1857,
                          v1853);
                        if ( v2880 )
                        {
                          *((_QWORD *)v1567 + 303) = v2880;
                          *(_QWORD *)&v107 = (*((__int64 (**)(void))v1567 + 63))();
                          if ( (_QWORD)v107 )
                          {
                            *((_DWORD *)v1567 + 605) = *(_DWORD *)(v107 + 80);
                            *((_DWORD *)v1567 + 598) = 8;
                            goto LABEL_3443;
                          }
                        }
                        if ( !*((_DWORD *)v1567 + 574) )
                        {
                          v1565 = 1;
                          *((_QWORD *)v1567 + 288) = v1567 - 0x5C5FC0A76E374B18LL;
                          *((_QWORD *)v1567 + 289) = 0LL;
                          *((_QWORD *)v1567 + 290) = 261LL;
                          *((_QWORD *)v1567 + 291) = -1073741701LL;
LABEL_3498:
                          *((_DWORD *)v1567 + 574) = 1;
                          __ba((__int64)v1567, 0LL);
                          goto LABEL_2934;
                        }
LABEL_2933:
                        v1565 = 1;
                        goto LABEL_2934;
                      }
                      v1999 = v2604;
                    }
                    if ( v1997 != (unsigned int *)v2000 )
                    {
                      do
                      {
                        LODWORD(v107) = v1997[1];
                        if ( *v1997 >= v2004 || (unsigned int)v107 <= DWORD2(v107) )
                          break;
                        if ( *v1997 < DWORD2(v107) || (unsigned int)v107 > v2004 )
                        {
                          if ( (*(_DWORD *)(v93 + 2448) & 0x200000) == 0 )
                          {
                            v2663[5] = 317;
                            KeBugCheckEx(__ROR4__BugCheckCode: (317, 160), BugCheckParameter1: 0xAuLL, BugCheckParameter2: v1991, BugCheckParameter3: 2uLL, BugCheckParameter4: 0LL);
                          }
LABEL_3223:
                          if ( !*(_DWORD *)(v93 + 2296) )
                          {
                            *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                            *(_QWORD *)(v93 + 2312) = 0LL;
                            *(_QWORD *)(v93 + 2320) = 271LL;
                            *(_QWORD *)(v93 + 2328) = v1991;
                            *(_DWORD *)(v93 + 2296) = 1;
LABEL_3185:
                            __ba(v93, 0LL);
                          }
                          goto LABEL_3180;
                        }
                        v2005 = v1997[2];
                        if ( (v2005 & 1) != 0 || (*(_BYTE *)(v2005 + v1991) & 0x20) != 0 )
                        {
                          v2006 = v2001[1];
                          v2007 = v2001[2];
                          if ( v2007 <= *v2001 )
                            v2007 = *v2001;
                          v2608 = v2001[1];
                          v2008 = v2006 + v2007;
                          v2009 = (unsigned int *)(*(__int64 (__fastcall **)(unsigned int *, ULONG_PTR, ULONG_PTR, __int64))(v93 + 1048))(
                                                    v1997,
                                                    v2612,
                                                    v2000,
                                                    v2002);
                          if ( *v2009 < v2608 || v2009[1] > v2008 )
                          {
                            v2010 = v2612;
                            if ( (*(_DWORD *)(v93 + 2448) & 0x200000) == 0 )
                            {
                              v2663[4] = 317;
                              KeBugCheckEx(
                                __ROR4__BugCheckCode: (317, 160),
                                BugCheckParameter1: 0xAuLL,
                                BugCheckParameter2: v2612,
                                (BugCheckParameter3: (_DWORD)v2009 - (_DWORD)v2612) | 0x80000000,
                                BugCheckParameter4: 0LL);
                            }
                            if ( !*(_DWORD *)(v93 + 2296) )
                            {
                              *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                              *(_QWORD *)(v93 + 2312) = 0LL;
                              *(_QWORD *)(v93 + 2320) = 271LL;
                              *(_QWORD *)(v93 + 2328) = v2010;
                              *(_DWORD *)(v93 + 2296) = 1;
                              __ba(v93, 0LL);
                            }
                          }
                          v2011 = (unsigned int *)(*(__int64 (__fastcall **)(unsigned int *, ULONG_PTR, ULONG_PTR))(v93 + 1056))(
                                                    v2009,
                                                    v2612,
                                                    v2612 + *v2009);
                          if ( *v2011 >= v2608 && v2011[1] <= v2008 )
                          {
                            v1991 = v2612;
                          }
                          else
                          {
                            v1991 = v2612;
                            v2012 = ((_DWORD)v2011 - v2612) | 0x80000000;
                            if ( (*(_DWORD *)(v93 + 2448) & 0x200000) == 0 )
                            {
                              v2663[3] = 317;
                              KeBugCheckEx(__ROR4__BugCheckCode: (317, 160), BugCheckParameter1: 0xAuLL, BugCheckParameter2: v2612, BugCheckParameter3: v2012, BugCheckParameter4: 0LL);
                            }
                            if ( !*(_DWORD *)(v93 + 2296) )
                            {
                              *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                              *(_QWORD *)(v93 + 2312) = 0LL;
                              *(_QWORD *)(v93 + 2320) = 271LL;
                              *(_QWORD *)(v93 + 2328) = v1991;
                              *(_DWORD *)(v93 + 2296) = 1;
                              __ba(v93, 0LL);
                            }
                          }
                          *((_QWORD *)&v107 + 1) = v2610;
                        }
                        v1997 += 3;
                      }
                      while ( v1997 != (unsigned int *)v2606 );
                      v1999 = v2604;
                      v2002 = 1LL;
                      v1996 = v2932;
                      v1998 = (_DWORD *)v2603;
                      v2000 = v2606;
                    }
                    ++v1999;
                    v2001 += 10;
                    v2604 = v1999;
                    if ( v1999 >= v1996 )
                    {
                      v2013 = v2613;
                      v2014 = v2605;
                      v2015 = v2606;
                      if ( v1997 != (unsigned int *)v2606 )
                      {
                        if ( (*(_DWORD *)(v93 + 2448) & 0x200000) == 0 )
                        {
                          v2670 = 317;
                          KeBugCheckEx(__ROR4__BugCheckCode: (317, 160), BugCheckParameter1: 0xAuLL, BugCheckParameter2: v1991, BugCheckParameter3: 3uLL, BugCheckParameter4: 0LL);
                        }
                        goto LABEL_3223;
                      }
                      if ( (_DWORD)v2613 )
                        v2016 = (v2613 + 6) & 0xFFFFFFF8;
                      else
                        v2016 = 0;
                      v2017 = *(unsigned int *)(v93 + 2020);
                      v2018 = v2017 + v2016 + 8 * (3 * v1996 + 6);
                      if ( v2018 <= *(_DWORD *)(v93 + 2588) )
                      {
                        v2019 = v93;
                        *(_DWORD *)(v93 + 2020) = v2018;
                        v2615 = v93;
                      }
                      else
                      {
                        v2615 = sub_140B11020(v93, v2018, *(unsigned int *)(v93 + 2340));
                        v2019 = v2615;
                        if ( !v2615 )
                        {
                          LODWORD(v107) = -1073741670;
                          goto LABEL_3231;
                        }
                        v2020 = *(_DWORD *)(v93 + 2448);
                        if ( (v2020 & 4) == 0 )
                        {
                          v2021 = *(_DWORD *)(v93 + 2020);
                          v2022 = *(_QWORD *)(v93 + 1992);
                          v2023 = (v2020 & 0x20000000) != 0 ? *(_DWORD *)(v93 + 2340) : 0;
                          if ( v2021 >= 8 )
                          {
                            v2024 = (unsigned __int64)v2021 >> 3;
                            do
                            {
                              *(_QWORD *)v93 = 0LL;
                              v2021 -= 8;
                              v93 += 8LL;
                              --v2024;
                            }
                            while ( v2024 );
                          }
                          for ( ; v2021; --v2021 )
                            *(_BYTE *)v93++ = 0;
                          v2025 = *(_DWORD *)(v2019 + 2340);
                          *(_DWORD *)(v2019 + 2340) = v2023;
                          if ( v2023 == 3 )
                          {
                            (*(void (__fastcall **)(__int64))(v2019 + 872))(v2022);
                          }
                          else if ( (*(_DWORD *)(v2019 + 2448) & 0x10000000) != 0 || !v2023 )
                          {
                            (*(void (__fastcall **)(__int64))(v2019 + 248))(v2022);
                          }
                          else
                          {
                            (*(void (__fastcall **)(__int64, _QWORD))(v2019 + 552))(v2022 - 8, *(_QWORD *)(v2022 - 8));
                          }
                          *(_DWORD *)(v2019 + 2340) = v2025;
                        }
                        *(_DWORD *)(v2019 + 2448) &= ~4u;
                        v2013 = v2613;
                        v1996 = v2932;
                      }
                      v2026 = v2019 + v2017;
                      ++*(_DWORD *)(v2019 + 2060);
                      v2027 = (_QWORD *)(v2019 + v2017);
                      v2028 = 48;
                      v2029 = 6LL;
                      do
                      {
                        *v2027 = 0LL;
                        v2028 -= 8;
                        ++v2027;
                        --v2029;
                      }
                      while ( v2029 );
                      for ( ; v2028; --v2028 )
                      {
                        *(_BYTE *)v2027 = 0;
                        v2027 = (_QWORD *)((char *)v2027 + 1);
                      }
                      v2030 = v2600;
                      *(_DWORD *)v2026 = 30;
                      *(_QWORD *)(v2026 + 8) = v2030;
                      *(_DWORD *)(v2026 + 16) = 0;
                      v2031 = *(_QWORD *)(v2019 + 2072);
                      for ( i46 = v2031; ; LODWORD(v2031) = i46 ^ v2031 )
                      {
                        i46 >>= 31;
                        if ( !i46 )
                          break;
                      }
                      v2033 = v2612;
                      *(_DWORD *)(v2026 + 20) = v2031 & 0x7FFFFFFF;
                      v93 = v2019;
                      *(_QWORD *)(v2026 + 24) = v2033;
                      *(_DWORD *)(v2026 + 32) = *(_DWORD *)(v2014 + 80);
                      *(_DWORD *)(v2026 + 36) = v2609;
                      *(_WORD *)(v2026 + 40) = v1996;
                      *(_WORD *)(v2026 + 42) |= 1u;
                      v2034 = (int *)(v2026 + 48);
                      v2633 = (_BYTE *)v2019;
                      v2607 = (__int64)v2034;
                      if ( v2013 )
                        v2035 = (int *)((char *)v2034 + (((unsigned int)(v2013 - 1) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL));
                      else
                        v2035 = v2034;
                      v2614 = v2035;
                      v2036 = &v2035[6 * v1996];
                      v2605 = (__int64)v2036;
                      if ( v2013 )
                        v2601 = (__int64)(v2600 + 3);
                      else
                        v2601 = v2015;
                      if ( v1996 )
                      {
                        v2037 = v1996;
                        v2038 = v2035 + 2;
                        v2039 = 0;
                        do
                        {
                          v2040 = 2LL;
                          do
                          {
                            *(v2038 - 2) = 0;
                            *(v2038 - 1) = 0;
                            *v2038 = 0x80000000;
                            v2038 += 3;
                            --v2040;
                          }
                          while ( v2040 );
                          --v2037;
                        }
                        while ( v2037 );
                        v1998 = (_DWORD *)v2603;
                        v2015 = v2606;
                      }
                      else
                      {
                        v2039 = 0;
                      }
                      if ( v2035 != v2036 )
                      {
                        while ( 2 )
                        {
                          v2933 = 0;
                          if ( (v1998[9] & 0x2000000) != 0 )
                            goto LABEL_3274;
                          v2041 = *v1998;
                          if ( *v1998 == 1414090313 )
                          {
                            if ( v1998[1] == 1195525195 )
                              goto LABEL_3274;
LABEL_3280:
                            if ( v2041 != 1095914053 || *((_WORD *)v1998 + 2) != 16724 )
                              goto LABEL_3282;
LABEL_3274:
                            v2042 = 1;
                            v2933 = 1;
                          }
                          else
                          {
                            if ( v2041 != 1162297680 )
                              goto LABEL_3280;
                            v2043 = *((_WORD *)v1998 + 2);
                            if ( v2043 == 30839 || v2043 == 29303 || v2043 == 30583 )
                              goto LABEL_3274;
LABEL_3282:
                            v2044 = *(char **)(v2019 + 2352);
                            v2045 = *(__int64 **)(v2019 + 2360);
                            v2046 = (char *)v1998 - v2044;
                            v2047 = *(char **)(v2019 + 2368);
                            v2048 = 7;
                            v2049 = *(char **)(v2019 + 2376);
                            while ( 1 )
                            {
                              v2050 = (unsigned __int8)v2044[v2046];
                              v2051 = (unsigned __int8)*v2044++;
                              if ( v2050 != v2051 )
                                break;
                              if ( !--v2048 )
                              {
LABEL_3300:
                                v2042 = 1;
                                v2933 = 1;
                                goto LABEL_3302;
                              }
                            }
                            v2052 = 8;
                            v2053 = (__int64 *)v1998;
                            while ( 1 )
                            {
                              v2054 = *v2053++;
                              v2055 = *v2045++;
                              if ( v2054 != v2055 )
                                break;
                              v2052 -= 8;
                              if ( v2052 < 8 )
                              {
                                if ( !v2052 )
                                  goto LABEL_3300;
                                while ( 1 )
                                {
                                  v2056 = *(unsigned __int8 *)v2053;
                                  v2053 = (__int64 *)((char *)v2053 + 1);
                                  v2057 = *(unsigned __int8 *)v2045;
                                  v2045 = (__int64 *)((char *)v2045 + 1);
                                  if ( v2056 != v2057 )
                                    goto LABEL_3293;
                                  if ( !--v2052 )
                                    goto LABEL_3300;
                                }
                              }
                            }
LABEL_3293:
                            v2058 = 4;
                            v2059 = (char *)v1998 - v2047;
                            while ( 1 )
                            {
                              v2060 = (unsigned __int8)v2047[v2059];
                              v2061 = (unsigned __int8)*v2047++;
                              if ( v2060 != v2061 )
                                break;
                              if ( !--v2058 )
                                goto LABEL_3300;
                            }
                            v2062 = 6;
                            v2063 = (char *)v1998 - v2049;
                            while ( 1 )
                            {
                              v2064 = (unsigned __int8)v2049[v2063];
                              v2065 = (unsigned __int8)*v2049++;
                              if ( v2064 != v2065 )
                                break;
                              if ( !--v2062 )
                                goto LABEL_3300;
                            }
                            v2042 = 0;
LABEL_3302:
                            v2033 = v2612;
                            v2039 = 0;
                            v2035 = v2614;
                          }
                          v2066 = v1998[9];
                          if ( v2066 < 0 )
                          {
                            v2042 = 1;
                            v2933 = 1;
                            goto LABEL_3306;
                          }
                          if ( v2042 )
                          {
LABEL_3306:
                            if ( *v1998 == 1414090313 && v1998[1] == 1195525195 )
                            {
                              if ( (*(_DWORD *)(v2019 + 2452) & 0x2000) != 0 )
                                v2042 = 0;
                              v2933 = v2042;
                            }
                          }
                          if ( (*(_DWORD *)(v2019 + 2452) & 0x4000) != 0
                            && (v2066 & 0x20000000) != 0
                            && (v2033 == *(_QWORD *)(v2019 + 1504) || v2033 == *(_QWORD *)(v2019 + 1512)) )
                          {
                            v2042 = 1;
                            v2933 = 1;
                          }
                          v2067 = (unsigned int)v1998[3];
                          v2068 = v1998[4];
                          v2069 = v2600;
                          if ( v2068 <= v1998[2] )
                            v2068 = v1998[2];
                          LODWORD(v2609) = v1998[3];
                          v2070 = v2067 + v2068;
                          v128 = v2600 == (int *)v2015;
                          v2610 = v2070;
                          v2071 = v2067;
                          if ( v128 )
                          {
                            v2074 = 0;
                            v2075 = (_DWORD)v2067 != 0;
                          }
                          else
                          {
                            v2072 = *v2600;
                            v2073 = v2600[1];
                            v2074 = v2073;
                            v2075 = *v2600 < (unsigned int)v2067;
                            if ( *v2600 > (unsigned int)v2067 )
                            {
                              if ( v2073 > v2070 )
                                goto LABEL_3372;
                              if ( v2042 )
                              {
                                v2117 = v2606;
LABEL_3375:
                                v2118 = (int *)v2601;
                                v2119 = *(_DWORD *)(v2601 + 4);
                                v2608 = v2119;
                                if ( v2119 <= v2070 )
                                {
                                  while ( v2118 != (int *)v2117 )
                                  {
                                    if ( v2042 )
                                    {
                                      v2120 = 0x80;
                                    }
                                    else
                                    {
                                      v2121 = (unsigned int)v2069[1];
                                      v2071 = *v2118;
                                      if ( *v2118 < (unsigned int)v2121 )
                                      {
                                        if ( (*(_DWORD *)(v2019 + 2448) & 0x200000) == 0 )
                                        {
                                          v2669 = 317;
                                          KeBugCheckEx(__ROR4__BugCheckCode: (317, 160), BugCheckParameter1: 0xAuLL, BugCheckParameter2: v2612, BugCheckParameter3: 6uLL, BugCheckParameter4: 0LL);
                                        }
                                        if ( !*(_DWORD *)(v2019 + 2296) )
                                        {
                                          v2122 = v2612;
                                          *(_QWORD *)(v2019 + 2304) = v2019 - 0x5C5FC0A76E374B18LL;
                                          *(_QWORD *)(v2019 + 2312) = 0LL;
                                          *(_QWORD *)(v2019 + 2320) = 271LL;
                                          *(_QWORD *)(v2019 + 2328) = v2122;
                                          *(_DWORD *)(v2019 + 2296) = 1;
                                          __ba(v2019, 0LL);
                                        }
                                      }
                                      v2123 = v2676;
                                      v2124 = v2612 + v2121;
                                      v2125 = v2719;
                                      v2126 = 0;
                                      v2127 = v2071 - v2121;
                                      v2128 = v2612 + v2121 + (unsigned int)(v2071 - v2121);
                                      do
                                      {
                                        if ( v2124 < *v2125 + *v2123 && v2128 > *v2125 )
                                          goto LABEL_3407;
                                        ++v2126;
                                        ++v2123;
                                        ++v2125;
                                      }
                                      while ( v2126 < 6 );
                                      if ( v2127 < 4 )
                                      {
LABEL_3407:
                                        v2039 = 0;
                                        v2120 = 0x80;
                                        goto LABEL_3408;
                                      }
                                      *(_DWORD *)(v2019 + 2088) += v2127;
                                      v2129 = (_QWORD *)v2124;
                                      v2130 = *(_DWORD *)(v2019 + 2068);
                                      v2131 = (const char *)v2124;
                                      v2132 = *(_QWORD *)(v2019 + 2072);
                                      if ( v2124 < v2128 )
                                      {
                                        do
                                        {
                                          _mm_prefetch(v2131, 0);
                                          v2131 += 64;
                                        }
                                        while ( (unsigned __int64)v2131 < v2128 );
                                      }
                                      v2133 = *(_QWORD *)(v2019 + 2072);
                                      v2134 = v2127 >> 7;
                                      if ( v2127 >> 7 )
                                      {
                                        do
                                        {
                                          v2135 = 8LL;
                                          do
                                          {
                                            v2136 = v2129[1] ^ __ROL8__(*v2129 ^ v2133, v2130);
                                            v2129 += 2;
                                            v2133 = __ROL8__(v2136, v2130);
                                            --v2135;
                                          }
                                          while ( v2135 );
                                          v2137 = (__ROL8__(v2132 ^ ((unsigned __int64)v2129 - v2124), 17) ^ v2132 ^ ((unsigned __int64)v2129 - v2124))
                                                * (unsigned __int128)0x7010008004002001uLL;
                                          v2788 = *((_QWORD *)&v2137 + 1);
                                          v2130 = ((unsigned __int8)v2137 ^ (unsigned __int8)(BYTE8(v2137) ^ v2130)) & 0x3F;
                                          if ( !v2130 )
                                            LOBYTE(v2130) = 1;
                                          --v2134;
                                        }
                                        while ( v2134 );
                                        v2019 = v2615;
                                        v2119 = v2608;
                                      }
                                      v2138 = v2127 & 0x7F;
                                      if ( v2138 >= 8 )
                                      {
                                        v2139 = (unsigned __int64)v2138 >> 3;
                                        do
                                        {
                                          v2133 = __ROL8__(*v2129++ ^ v2133, v2130);
                                          v2138 -= 8;
                                          --v2139;
                                        }
                                        while ( v2139 );
                                      }
                                      for ( ; v2138; --v2138 )
                                      {
                                        v2140 = *(unsigned __int8 *)v2129;
                                        v2129 = (_QWORD *)((char *)v2129 + 1);
                                        v2133 = __ROL8__(v2140 ^ v2133, v2130);
                                      }
                                      v2141 = v2133 >> 7;
                                      v2039 = 0;
                                      while ( v2141 )
                                      {
                                        LOBYTE(v2133) = v2141 ^ v2133;
                                        v2141 >>= 7;
                                      }
                                      v2070 = v2610;
                                      v2120 = v2133 & 0x7F;
LABEL_3408:
                                      v2069 = v2600;
                                      v2042 = v2933;
                                    }
                                    v2142 = (_BYTE *)v2607;
                                    v2069 += 3;
                                    ++v2607;
                                    v2600 = v2069;
                                    *v2142 = v2120;
                                    v2117 = v2606;
                                    v2118 = (int *)(v2601 + 12);
                                    v2601 = (__int64)v2118;
                                    if ( v2118 != (int *)v2606 )
                                    {
                                      v2119 = v2118[1];
                                      v2608 = v2119;
                                    }
                                    if ( v2119 > v2070 )
                                      goto LABEL_3347;
                                  }
                                }
                                v2094 = v2600;
                              }
                              else
                              {
                                v2076 = v2033 + v2067;
                                *v2035 = v2067;
                                v2035[1] = v2072;
                                v2077 = v2072 - v2067;
                                v2608 = v2073;
                                v2078 = v2676;
                                v2079 = v2033 + v2067 + (unsigned int)(v2072 - v2067);
                                v2080 = v2719;
                                v2071 = v2072;
                                do
                                {
                                  if ( v2076 < *v2080 + *v2078 && v2079 > *v2080 )
                                  {
                                    v2039 = 0;
                                    goto LABEL_3371;
                                  }
                                  ++v2039;
                                  ++v2080;
                                  ++v2078;
                                }
                                while ( v2039 < 6 );
                                *(_DWORD *)(v2019 + 2088) += v2077;
                                v2081 = (_QWORD *)v2076;
                                v2082 = *(_DWORD *)(v2019 + 2068);
                                v2083 = (const char *)v2076;
                                v2084 = *(_QWORD *)(v2019 + 2072);
                                if ( v2076 < v2079 )
                                {
                                  do
                                  {
                                    _mm_prefetch(v2083, 0);
                                    v2083 += 64;
                                  }
                                  while ( (unsigned __int64)v2083 < v2079 );
                                }
                                v2085 = *(_QWORD *)(v2019 + 2072);
                                v2086 = v2077 >> 7;
                                if ( v2077 >> 7 )
                                {
                                  do
                                  {
                                    v2087 = 8LL;
                                    do
                                    {
                                      v2088 = v2081[1] ^ __ROL8__(*v2081 ^ v2085, v2082);
                                      v2081 += 2;
                                      v2085 = __ROL8__(v2088, v2082);
                                      --v2087;
                                    }
                                    while ( v2087 );
                                    v2089 = (__ROL8__(v2084 ^ ((unsigned __int64)v2081 - v2076), 17) ^ v2084 ^ ((unsigned __int64)v2081 - v2076))
                                          * (unsigned __int128)0x7010008004002001uLL;
                                    v2787 = *((_QWORD *)&v2089 + 1);
                                    v2082 = ((unsigned __int8)v2089 ^ (unsigned __int8)(BYTE8(v2089) ^ v2082)) & 0x3F;
                                    if ( !v2082 )
                                      LOBYTE(v2082) = 1;
                                    --v2086;
                                  }
                                  while ( v2086 );
                                  v2019 = v2615;
                                  v2074 = v2608;
                                }
                                v2090 = v2077 & 0x7F;
                                if ( v2090 >= 8 )
                                {
                                  v2091 = (unsigned __int64)v2090 >> 3;
                                  do
                                  {
                                    v2085 = __ROL8__(*v2081++ ^ v2085, v2082);
                                    v2090 -= 8;
                                    --v2091;
                                  }
                                  while ( v2091 );
                                }
                                if ( v2090 )
                                {
                                  do
                                  {
                                    v2092 = *(unsigned __int8 *)v2081;
                                    v2081 = (_QWORD *)((char *)v2081 + 1);
                                    v2085 = __ROL8__(v2092 ^ v2085, v2082);
                                    --v2090;
                                  }
                                  while ( v2090 );
                                  v2019 = v2615;
                                }
                                v2093 = v2085 >> 31;
                                v2039 = 0;
                                while ( v2093 )
                                {
                                  LODWORD(v2085) = v2093 ^ v2085;
                                  v2093 >>= 31;
                                }
                                v2070 = v2610;
                                v2614[2] = v2085 & 0x7FFFFFFF;
LABEL_3371:
                                v2042 = v2933;
LABEL_3372:
                                v749 = v2074 <= v2070;
                                v2094 = v2600;
                                if ( v749 )
                                {
                                  v2117 = v2606;
                                  if ( v2600 != (int *)v2606 )
                                  {
                                    v2069 = v2600;
                                    goto LABEL_3375;
                                  }
                                }
                              }
LABEL_3348:
                              v2095 = (unsigned int *)v2614;
                              if ( !v2042 && v2071 != v2070 )
                              {
                                v2096 = v2612;
                                v2097 = v2676;
                                v2614[3] = v2071;
                                v2098 = v2719;
                                v2095[4] = v2070;
                                v2099 = v2095[3];
                                v2100 = 0;
                                v2101 = v2070 - v2099;
                                v2102 = v2099 + v2096;
                                v2103 = v2102 + v2070 - (unsigned int)v2099;
                                do
                                {
                                  if ( v2102 < *v2098 + *v2097 && v2103 > *v2098 )
                                  {
                                    v2039 = 0;
                                    goto LABEL_3418;
                                  }
                                  ++v2100;
                                  ++v2098;
                                  ++v2097;
                                }
                                while ( v2100 < 6 );
                                *(_DWORD *)(v2019 + 2088) += v2101;
                                v2104 = (_QWORD *)v2102;
                                v2105 = *(_DWORD *)(v2019 + 2068);
                                v2106 = (const char *)v2102;
                                v2107 = *(_QWORD *)(v2019 + 2072);
                                if ( v2102 < v2103 )
                                {
                                  do
                                  {
                                    _mm_prefetch(v2106, 0);
                                    v2106 += 64;
                                  }
                                  while ( (unsigned __int64)v2106 < v2103 );
                                }
                                v2108 = *(_QWORD *)(v2019 + 2072);
                                v2109 = v2101 >> 7;
                                if ( v2101 >> 7 )
                                {
                                  do
                                  {
                                    v2110 = 8LL;
                                    do
                                    {
                                      v2111 = v2104[1] ^ __ROL8__(*v2104 ^ v2108, v2105);
                                      v2104 += 2;
                                      v2108 = __ROL8__(v2111, v2105);
                                      --v2110;
                                    }
                                    while ( v2110 );
                                    v2112 = (__ROL8__(v2107 ^ ((unsigned __int64)v2104 - v2102), 17) ^ v2107 ^ ((unsigned __int64)v2104 - v2102))
                                          * (unsigned __int128)0x7010008004002001uLL;
                                    v2789 = *((_QWORD *)&v2112 + 1);
                                    v2105 = ((unsigned __int8)v2112 ^ (unsigned __int8)(BYTE8(v2112) ^ v2105)) & 0x3F;
                                    if ( !v2105 )
                                      LOBYTE(v2105) = 1;
                                    --v2109;
                                  }
                                  while ( v2109 );
                                  v2019 = v2615;
                                  v2094 = v2600;
                                }
                                v2113 = v2101 & 0x7F;
                                if ( v2113 >= 8 )
                                {
                                  v2114 = (unsigned __int64)v2113 >> 3;
                                  do
                                  {
                                    v2108 = __ROL8__(*v2104++ ^ v2108, v2105);
                                    v2113 -= 8;
                                    --v2114;
                                  }
                                  while ( v2114 );
                                }
                                if ( v2113 )
                                {
                                  do
                                  {
                                    v2115 = *(unsigned __int8 *)v2104;
                                    v2104 = (_QWORD *)((char *)v2104 + 1);
                                    v2108 = __ROL8__(v2115 ^ v2108, v2105);
                                    --v2113;
                                  }
                                  while ( v2113 );
                                  v2094 = v2600;
                                }
                                v2116 = v2108 >> 31;
                                v2039 = 0;
                                while ( v2116 )
                                {
                                  LODWORD(v2108) = v2116 ^ v2108;
                                  v2116 >>= 31;
                                }
                                v2095 = (unsigned int *)v2614;
                                v2070 = v2610;
                                v2614[5] = v2108 & 0x7FFFFFFF;
                              }
LABEL_3418:
                              v2015 = v2606;
                              if ( v2094 != (int *)v2606 && *v2094 >= (unsigned int)v2609 && v2094[1] <= v2070 )
                              {
                                v2143 = v2601;
                                if ( v2601 != v2606 )
                                {
                                  v2144 = v2607;
                                  *(_BYTE *)v2607 = 0x80;
                                  v2607 = v2144 + 1;
                                  v2601 = v2143 + 12;
                                }
                                v2600 = v2094 + 3;
                              }
                              v2035 = (int *)(v2095 + 6);
                              v1998 = (_DWORD *)(v2603 + 40);
                              v2614 = v2035;
                              v2603 += 40LL;
                              if ( v2035 == (int *)v2605 )
                              {
                                v93 = (ULONG_PTR)v2633;
                                goto LABEL_3427;
                              }
                              v2033 = v2612;
                              continue;
                            }
                          }
                          break;
                        }
                        if ( !v2075 )
                          goto LABEL_3372;
LABEL_3347:
                        v2094 = v2069;
                        goto LABEL_3348;
                      }
LABEL_3427:
                      v2629 = (_BYTE *)v93;
                      v1567 = (_BYTE *)v93;
                      goto LABEL_3428;
                    }
                  }
                }
LABEL_3056:
                v2633 = 0LL;
LABEL_3234:
                v2602 = v93;
                goto LABEL_2934;
              }
            }
          }
          v1874 = v2612;
          if ( (unsigned int)(v1897 - 33) <= 1 && v1884[4] == (int *)v2612 )
            goto LABEL_3037;
          if ( ++v1875 >= *((_DWORD *)v1567 + 515) )
            goto LABEL_3038;
        }
        v1885 = v1875 - v1883;
        v1883 = v1875;
        while ( 2 )
        {
          v1886 = *(_DWORD *)v1884;
          if ( *(int *)v1884 > 28 )
          {
            v1894 = v1886 - 30;
            if ( !v1894 )
            {
              v1892 = (((*((_DWORD *)v1884 + 9) != 0 ? *((_DWORD *)v1884 + 9) - 1 : 0) / 0xCu + 7) & 0xFFFFFFF8)
                    + 24 * (*((unsigned __int16 *)v1884 + 20) + 2);
              goto LABEL_3026;
            }
            v1895 = v1894 - 3;
            if ( !v1895 || (v1896 = v1895 - 1) == 0 )
            {
              v1892 = 20
                    * (unsigned int)((((_DWORD)v1884[4] & 0xFFF) + (unsigned __int64)*((unsigned int *)v1884 + 10)
                                                                 + 4095) >> 12)
                    + 48;
              goto LABEL_3026;
            }
            v1891 = v1896 == 9;
LABEL_3021:
            if ( !v1891 )
            {
              v1892 = 48LL;
              goto LABEL_3026;
            }
          }
          else
          {
            if ( v1886 == 28 )
            {
              v1893 = *((unsigned __int16 *)v1884 + 20);
              goto LABEL_3014;
            }
            v1887 = v1886 - 1;
            if ( v1887 )
            {
              v1888 = v1887 - 6;
              if ( !v1888 )
              {
                v1892 = (unsigned int)(24 * (*((_DWORD *)v1884 + 6) + 2));
                goto LABEL_3026;
              }
              v1889 = v1888 - 1;
              if ( v1889 )
              {
                v1890 = v1889 - 2;
                if ( v1890 )
                {
                  v1891 = v1890 == 2;
                  goto LABEL_3021;
                }
                v1892 = (unsigned int)(16 * (*((_DWORD *)v1884 + 7) + 3));
LABEL_3026:
                v1884 = (int **)((char *)v1884 + v1892);
                if ( !--v1885 )
                {
                  v1876 = v2930;
                  v1872 = v2613;
                  goto LABEL_3028;
                }
                continue;
              }
              v1893 = *((unsigned __int16 *)v1884 + 16);
LABEL_3014:
              v1892 = (v1893 + 55) & 0xFFFFFFF8;
              goto LABEL_3026;
            }
          }
          break;
        }
        v1892 = 4 * (*((_DWORD *)v1884 + 4) / 0xCu) + 48;
        goto LABEL_3026;
      }
      if ( ++v1847 >= *((_DWORD *)v1567 + 515) )
        goto LABEL_2991;
    }
    v1858 = v1847 - v1856;
    v1856 = v1847;
    while ( 1 )
    {
      v1859 = *v1857;
      if ( *v1857 > 28 )
      {
        v1867 = v1859 - 30;
        if ( !v1867 )
        {
          v1865 = (((v1857[9] != 0 ? v1857[9] - 1 : 0) / 0xCu + 7) & 0xFFFFFFF8)
                + 24 * (*((unsigned __int16 *)v1857 + 20) + 2);
          goto LABEL_2979;
        }
        v1868 = v1867 - 3;
        if ( !v1868 || (v1869 = v1868 - 1) == 0 )
        {
          v1865 = 20 * (unsigned int)(((v1857[8] & 0xFFF) + (unsigned __int64)(unsigned int)v1857[10] + 4095) >> 12)
                + 48;
          goto LABEL_2979;
        }
        v1864 = v1869 == 9;
      }
      else
      {
        if ( v1859 == 28 )
        {
          v1866 = *((unsigned __int16 *)v1857 + 20);
          goto LABEL_2967;
        }
        v1860 = v1859 - 1;
        if ( !v1860 )
          goto LABEL_2976;
        v1861 = v1860 - 6;
        if ( !v1861 )
        {
          v1865 = (unsigned int)(24 * (v1857[6] + 2));
          goto LABEL_2979;
        }
        v1862 = v1861 - 1;
        if ( !v1862 )
        {
          v1866 = *((unsigned __int16 *)v1857 + 16);
LABEL_2967:
          v1865 = (v1866 + 55) & 0xFFFFFFF8;
          goto LABEL_2979;
        }
        v1863 = v1862 - 2;
        if ( !v1863 )
        {
          v1865 = (unsigned int)(16 * (v1857[7] + 3));
          goto LABEL_2979;
        }
        v1864 = v1863 == 2;
      }
      if ( v1864 )
      {
LABEL_2976:
        v1865 = 4 * (v1857[4] / 0xCu) + 48;
        goto LABEL_2979;
      }
      v1865 = 48LL;
LABEL_2979:
      v1857 = (int *)((char *)v1857 + v1865);
      if ( !--v1858 )
      {
        v1846 = v2605;
        v1845 = v2929;
        goto LABEL_2981;
      }
    }
  }
  v1849 = v1848 - 1;
  if ( v1849 )
  {
    if ( v1849 != 1 )
    {
LABEL_3543:
      *((_DWORD *)v1567 + 598) = 11;
      goto LABEL_2933;
    }
  }
  else
  {
LABEL_3443:
    v2153 = (_QWORD *)*((_QWORD *)v1567 + 193);
    if ( v2153 && *v2153 )
    {
      v2154 = *((_DWORD *)v1567 + 526);
      v2155 = 32;
      v2156 = *((unsigned int *)v1567 + 505);
      if ( v2154 != 7 )
        v2155 = 0;
      v2934 = *((_DWORD *)v1567 + 526);
      v2157 = v2156 + 48;
      if ( (unsigned int)(v2156 + 48) <= *((_DWORD *)v1567 + 647) )
      {
        v2158 = (__int64)v1567;
        *((_DWORD *)v1567 + 505) = v2157;
      }
      else
      {
        v2158 = sub_140B11020(v1567, v2157, *((unsigned int *)v1567 + 585));
        if ( !v2158 )
          goto LABEL_3449;
        v2159 = *((_DWORD *)v1567 + 612);
        if ( (v2159 & 4) == 0 )
        {
          v2160 = *((_DWORD *)v1567 + 505);
          v2161 = *((_QWORD *)v1567 + 249);
          v2162 = (v2159 & 0x20000000) != 0 ? *((_DWORD *)v1567 + 585) : 0;
          if ( v2160 >= 8 )
          {
            v2163 = (unsigned __int64)v2160 >> 3;
            do
            {
              *(_QWORD *)v1567 = 0LL;
              v2160 -= 8;
              v1567 += 8;
              --v2163;
            }
            while ( v2163 );
          }
          for ( ; v2160; --v2160 )
            *v1567++ = 0;
          v2164 = *(_DWORD *)(v2158 + 2340);
          *(_DWORD *)(v2158 + 2340) = v2162;
          if ( v2162 == 3 )
          {
            (*(void (__fastcall **)(__int64))(v2158 + 872))(v2161);
          }
          else if ( (*(_DWORD *)(v2158 + 2448) & 0x10000000) != 0 || !v2162 )
          {
            (*(void (__fastcall **)(__int64))(v2158 + 248))(v2161);
          }
          else
          {
            (*(void (__fastcall **)(__int64, _QWORD))(v2158 + 552))(v2161 - 8, *(_QWORD *)(v2161 - 8));
          }
          *(_DWORD *)(v2158 + 2340) = v2164;
        }
        *(_DWORD *)(v2158 + 2448) &= ~4u;
        v2154 = v2934;
      }
      v2165 = v2158 + v2156;
      ++*(_DWORD *)(v2158 + 2060);
      v2166 = (_QWORD *)(v2158 + v2156);
      v2167 = 48;
      v2168 = 6LL;
      do
      {
        *v2166 = 0LL;
        v2167 -= 8;
        ++v2166;
        --v2168;
      }
      while ( v2168 );
      for ( ; v2167; --v2167 )
      {
        *(_BYTE *)v2166 = 0;
        v2166 = (_QWORD *)((char *)v2166 + 1);
      }
      *(_DWORD *)v2165 = v2155;
      *(_QWORD *)(v2165 + 8) = v2153;
      if ( v2154 == 7 )
        sub_1403EB41C(v2158, v2153, 8LL, v2165 + 24);
      *(_DWORD *)(v2165 + 16) = 8;
      *(_DWORD *)(v2158 + 2088) += 8;
      *((_QWORD *)&v107 + 1) = v2153;
      if ( v2153 < v2153 + 1 )
      {
        do
        {
          _mm_prefetch(*((const char **)&v107 + 1), 0);
          *((_QWORD *)&v107 + 1) += 64LL;
        }
        while ( *((_QWORD *)&v107 + 1) < (unsigned __int64)(v2153 + 1) );
      }
      v2169 = __ROL8__(*v2153 ^ *(_QWORD *)(v2158 + 2072), *(_DWORD *)(v2158 + 2068));
      for ( i47 = v2169; ; LODWORD(v2169) = i47 ^ v2169 )
      {
        i47 >>= 31;
        if ( !i47 )
          break;
      }
      v2602 = v2158;
      *(_DWORD *)(v2165 + 20) = v2169 & 0x7FFFFFFF;
      v93 = v2158;
      *(_DWORD *)(v2158 + 2088) += 8;
      v1567 = (_BYTE *)v2158;
    }
    *((_DWORD *)v1567 + 598) = 9;
  }
  v2171 = (unsigned __int64 *)*((_QWORD *)v1567 + 193);
  if ( !v2171 )
    goto LABEL_3543;
  v2172 = *v2171;
  if ( !v2172 )
    goto LABEL_3543;
  _InterlockedOr(v2598, 0);
  v2174 = (_QWORD *)v2172;
  v2175 = *(_DWORD *)(v2172 + 2068);
  v2176 = (const char *)v2172;
  v2177 = *(_QWORD *)(v2172 + 2072);
  v2935 = *(_DWORD *)(v2172 + 2020);
  v2173 = v2935;
  if ( v2172 < v2172 + v2935 )
  {
    do
    {
      _mm_prefetch(v2176, 0);
      v2176 += 64;
    }
    while ( (unsigned __int64)v2176 < v2172 + v2935 );
  }
  v2178 = *(_QWORD *)(v2172 + 2072);
  v2179 = v2935 >> 7;
  v1565 = 1;
  if ( v2935 >> 7 )
  {
    do
    {
      v2180 = 8LL;
      do
      {
        v2181 = v2174[1] ^ __ROL8__(*v2174 ^ v2178, v2175);
        v2174 += 2;
        v2178 = __ROL8__(v2181, v2175);
        --v2180;
      }
      while ( v2180 );
      v2182 = (__ROL8__(v2177 ^ ((unsigned __int64)v2174 - v2172), 17) ^ v2177 ^ ((unsigned __int64)v2174 - v2172))
            * (unsigned __int128)0x7010008004002001uLL;
      v2790 = *((_QWORD *)&v2182 + 1);
      v2175 = ((unsigned __int8)v2182 ^ (unsigned __int8)(BYTE8(v2182) ^ v2175)) & 0x3F;
      if ( !v2175 )
        LOBYTE(v2175) = 1;
      --v2179;
    }
    while ( v2179 );
    v93 = v2602;
    v2173 = v2935;
  }
  v2183 = v2173 & 0x7F;
  if ( v2183 >= 8 )
  {
    v2184 = (unsigned __int64)(v2173 & 0x7F) >> 3;
    do
    {
      v2178 = __ROL8__(*v2174++ ^ v2178, v2175);
      v2183 -= 8;
      --v2184;
    }
    while ( v2184 );
  }
  for ( ; v2183; --v2183 )
  {
    v2185 = *(unsigned __int8 *)v2174;
    v2174 = (_QWORD *)((char *)v2174 + 1);
    v2178 = __ROL8__(v2185 ^ v2178, v2175);
  }
  if ( v2178 == **((_QWORD **)v1567 + 194) )
  {
    v2186 = *((_DWORD *)v1567 + 526);
    v2187 = 32;
    v2188 = *((_DWORD *)v1567 + 505);
    v2189 = *((unsigned int *)v1567 + 585);
    if ( v2186 != 7 )
      v2187 = 0;
    v2610 = *((_DWORD *)v1567 + 505);
    v2190 = v2188 + 48;
    v2608 = v2186;
    if ( v2190 <= *((_DWORD *)v1567 + 647) )
    {
      v2191 = (__int64)v1567;
      *((_DWORD *)v1567 + 505) = v2190;
LABEL_3518:
      v2198 = v2610;
      ++*(_DWORD *)(v2191 + 2060);
      v2199 = v2191 + v2198;
      v2605 = v2199;
      v2200 = (_QWORD *)v2199;
      v2201 = 48;
      v2202 = 6LL;
      do
      {
        *v2200 = 0LL;
        v2201 -= 8;
        ++v2200;
        --v2202;
      }
      while ( v2202 );
      for ( ; v2201; --v2201 )
      {
        *(_BYTE *)v2200 = 0;
        v2200 = (_QWORD *)((char *)v2200 + 1);
      }
      *(_DWORD *)v2199 = v2187;
      *(_QWORD *)(v2199 + 8) = v2172;
      if ( v2186 == 7 && v2173 )
        sub_1403EB41C(v2191, v2172, v2173, v2199 + 24);
      *(_DWORD *)(v2199 + 16) = v2173;
      v2203 = (_QWORD *)v2172;
      *(_DWORD *)(v2191 + 2088) += v2173;
      v2204 = (const char *)v2172;
      v2205 = *(_DWORD *)(v2191 + 2068);
      v2206 = *(_QWORD *)(v2191 + 2072);
      v2207 = v2172 + v2173;
      if ( v2172 < v2207 )
      {
        do
        {
          _mm_prefetch(v2204, 0);
          v2204 += 64;
        }
        while ( (unsigned __int64)v2204 < v2207 );
      }
      v2208 = *(_QWORD *)(v2191 + 2072);
      v2209 = v2173 >> 7;
      if ( v2173 >> 7 )
      {
        do
        {
          v2210 = 8LL;
          do
          {
            v2211 = v2203[1] ^ __ROL8__(*v2203 ^ v2208, v2205);
            v2203 += 2;
            v2208 = __ROL8__(v2211, v2205);
            --v2210;
          }
          while ( v2210 );
          v2212 = (__ROL8__(v2206 ^ ((unsigned __int64)v2203 - v2172), 17) ^ v2206 ^ ((unsigned __int64)v2203 - v2172))
                * (unsigned __int128)0x7010008004002001uLL;
          v2791 = *((_QWORD *)&v2212 + 1);
          v2205 = ((unsigned __int8)v2212 ^ (unsigned __int8)(BYTE8(v2212) ^ v2205)) & 0x3F;
          if ( !v2205 )
            LOBYTE(v2205) = 1;
          --v2209;
        }
        while ( v2209 );
        v2173 = v2935;
        v2199 = v2605;
      }
      *((_QWORD *)&v107 + 1) = v2173 & 0x7F;
      if ( DWORD2(v107) >= 8 )
      {
        *(_QWORD *)&v107 = (unsigned __int64)(v2173 & 0x7F) >> 3;
        do
        {
          v2208 = __ROL8__(*v2203++ ^ v2208, v2205);
          *((_QWORD *)&v107 + 1) = (unsigned int)(DWORD2(v107) - 8);
          *(_QWORD *)&v107 = v107 - 1;
        }
        while ( (_QWORD)v107 );
      }
      for ( ; DWORD2(v107); *((_QWORD *)&v107 + 1) = (unsigned int)(DWORD2(v107) - 1) )
      {
        *(_QWORD *)&v107 = *(unsigned __int8 *)v2203;
        v2203 = (_QWORD *)((char *)v2203 + 1);
        v2208 = __ROL8__(v107 ^ v2208, v2205);
      }
      for ( i48 = v2208; ; LODWORD(v2208) = i48 ^ v2208 )
      {
        i48 >>= 31;
        if ( !i48 )
          break;
      }
      v93 = v2191;
      *(_DWORD *)(v2199 + 20) = v2208 & 0x7FFFFFFF;
      v1567 = (_BYTE *)v2191;
      *(_DWORD *)(v2191 + 2088) += v2173;
      goto LABEL_3543;
    }
    v2191 = sub_140B11020(v1567, v2190, v2189);
    if ( v2191 )
    {
      v2192 = *((_DWORD *)v1567 + 612);
      if ( (v2192 & 4) == 0 )
      {
        v2193 = *((_DWORD *)v1567 + 505);
        v2194 = *((_QWORD *)v1567 + 249);
        v2195 = (v2192 & 0x20000000) != 0 ? *((_DWORD *)v1567 + 585) : 0;
        if ( v2193 >= 8 )
        {
          v2196 = (unsigned __int64)v2193 >> 3;
          do
          {
            *(_QWORD *)v1567 = 0LL;
            v2193 -= 8;
            v1567 += 8;
            --v2196;
          }
          while ( v2196 );
        }
        for ( ; v2193; --v2193 )
          *v1567++ = 0;
        v2197 = *(_DWORD *)(v2191 + 2340);
        *(_DWORD *)(v2191 + 2340) = v2195;
        if ( v2195 == 3 )
        {
          (*(void (__fastcall **)(__int64))(v2191 + 872))(v2194);
        }
        else if ( (*(_DWORD *)(v2191 + 2448) & 0x10000000) != 0 || !v2195 )
        {
          (*(void (__fastcall **)(__int64))(v2191 + 248))(v2194);
        }
        else
        {
          (*(void (__fastcall **)(__int64, _QWORD))(v2191 + 552))(v2194 - 8, *(_QWORD *)(v2194 - 8));
        }
        *(_DWORD *)(v2191 + 2340) = v2197;
      }
      *(_DWORD *)(v2191 + 2448) &= ~4u;
      v2186 = v2608;
      goto LABEL_3518;
    }
LABEL_3449:
    v1567 = (_BYTE *)v93;
    goto LABEL_2933;
  }
  *(_QWORD *)&v107 = *((_QWORD *)v1567 + 177);
  *(_QWORD *)v107 = v2172;
  *(_DWORD *)(v107 + 16) = v2173;
  *((_QWORD *)&v107 + 1) = **((_QWORD **)v1567 + 194);
  if ( !*((_DWORD *)v1567 + 574) )
  {
    *(_QWORD *)(*((_QWORD *)v1567 + 177) + 24LL) = *((_QWORD *)&v107 + 1) ^ v2178;
    if ( !*((_DWORD *)v1567 + 574) )
    {
      *((_QWORD *)v1567 + 288) = v1567 - 0x5C5FC0A76E374B18LL;
      *((_QWORD *)v1567 + 289) = 0LL;
      *((_QWORD *)v1567 + 290) = 273LL;
      *((_QWORD *)v1567 + 291) = v2178;
      goto LABEL_3498;
    }
  }
LABEL_2934:
  if ( _bittest((const signed __int32 *)v1567 + 612, 0xFu) || !*((_DWORD *)v1567 + 574) )
  {
    v1841 = *((_QWORD *)v1567 + 304);
    *((_QWORD *)v1567 + 304) = 0LL;
    (*((void (__fastcall **)(__int64, _BYTE *))v1567 + 83))(v1841, v2740);
    LODWORD(v107) = *((_DWORD *)v1567 + 612);
    if ( ((unsigned __int8)v107 & (unsigned __int8)v1565) != 0 )
    {
      *((_DWORD *)v1567 + 612) = v107 & 0xFFFFFFFE;
      v1841 = (*((__int64 (__fastcall **)(__int64))v1567 + 80))(v1841);
      if ( !v1841 )
      {
        *((_DWORD *)v1567 + 604) = -1;
        goto LABEL_3572;
      }
      *((_DWORD *)v1567 + 604) = (*((__int64 (__fastcall **)(__int64))v1567 + 84))(v1841);
    }
    else if ( !v1841 )
    {
      goto LABEL_3572;
    }
    (*((void (__fastcall **)(__int64))v1567 + 81))(v1841);
  }
LABEL_3572:
  if ( (*(_DWORD *)(v93 + 2448) & 0x2000000) != 0 )
  {
    v2219 = *(_QWORD *)(v93 + 2456);
    if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))(v93 + 912))(v2219, *((_QWORD *)&v107 + 1))
      && !*(_DWORD *)(v93 + 2296) )
    {
      *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
      *(_QWORD *)(v93 + 2312) = 0LL;
      *(_QWORD *)(v93 + 2320) = 272LL;
      *(_QWORD *)(v93 + 2328) = 0LL;
      *(_DWORD *)(v93 + 2296) = 1;
      __ba(v93, 0LL);
    }
    (*(void (__fastcall **)(__int64, __int64 (__fastcall *)(), ULONG_PTR, _QWORD))(v93 + 904))(
      v2219,
      sub_140B13360,
      v93,
      0LL);
  }
  __ba(v93, 1LL);
  if ( (*(_DWORD *)(v93 + 2452) & 0x100) != 0 )
    retaddr = v2625;
  v2220 = *(_DWORD *)(v93 + 2448);
  if ( (v2220 & 0x40000) != 0 )
  {
    v2221 = __rdtsc();
    v2222 = (__ROR8__(v2221, 3) ^ v2221) * (unsigned __int128)0x7010008004002001uLL;
    v2792 = *((_QWORD *)&v2222 + 1);
    if ( ((unsigned __int64)v2222 ^ *((_QWORD *)&v2222 + 1)) % 0xA < 2 && !*(_DWORD *)(v93 + 2296) )
    {
      *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
      *(_QWORD *)(v93 + 2312) = 0LL;
      *(_QWORD *)(v93 + 2320) = 264LL;
      *(_QWORD *)(v93 + 2328) = 0LL;
      *(_DWORD *)(v93 + 2296) = 1;
      __ba(v93, 0LL);
      v2220 = *(_DWORD *)(v93 + 2448);
    }
  }
  if ( (v2220 & 0x40000000) == 0 && (v2220 & 0x8000) == 0 )
  {
    v2223 = (char *)(v93 + 2296);
    if ( *(_DWORD *)(v93 + 2296) )
    {
      if ( (*(_DWORD *)(a1 + 2448) & 0x8000) != 0 )
      {
        v2224 = (_QWORD *)(a1 + 2296);
      }
      else
      {
        v2224 = (_QWORD *)(a1 + 2296);
        if ( *(_DWORD *)(a1 + 2296) )
          goto LABEL_3593;
      }
      v2225 = 40;
      v2226 = 5LL;
      do
      {
        v2225 -= 8;
        *v2224 = *(_QWORD *)v2223;
        v2223 += 8;
        ++v2224;
        --v2226;
      }
      while ( v2226 );
      for ( ; v2225; --v2225 )
      {
        v2227 = *v2223++;
        *(_BYTE *)v2224 = v2227;
        v2224 = (_QWORD *)((char *)v2224 + 1);
      }
    }
  }
LABEL_3593:
  if ( (*(_DWORD *)(v93 + 2448) & 0x8000) != 0 || !*(_DWORD *)(v93 + 2296) )
  {
    v2228 = *(unsigned int *)(v93 + 2600);
    if ( (_DWORD)v2228 )
    {
      v2229 = (int *)(v93 + v2228);
      v2230 = *(const char **)(v93 + v2228 + 8);
      v2606 = v93 + v2228;
      if ( v2230 )
      {
        v2231 = (unsigned int)v2229[4];
        v2232 = (__int64)v2230;
        *(_DWORD *)(v93 + 2088) += v2231;
        v2233 = v2230;
        v2234 = *(unsigned int *)(v93 + 2068);
        for ( i49 = *(_QWORD *)(v93 + 2072); v2233 < &v2230[v2231]; v2233 += 64 )
          _mm_prefetch(v2233, 0);
        v2236 = *(_QWORD *)(v93 + 2072);
        v2237 = (unsigned int)v2231 >> 7;
        for ( i50 = 1LL; v2237; --v2237 )
        {
          v2239 = 8LL;
          do
          {
            v2240 = *(_QWORD *)(v2232 + 8) ^ __ROL8__(*(_QWORD *)v2232 ^ v2236, v2234);
            v2232 += 16LL;
            v2236 = __ROL8__(v2240, v2234);
            --v2239;
          }
          while ( v2239 );
          v2241 = (__ROL8__(i49 ^ (v2232 - (_QWORD)v2230), 17) ^ i49 ^ (unsigned __int64)(v2232 - (_QWORD)v2230))
                * (unsigned __int128)0x7010008004002001uLL;
          v2793 = *((_QWORD *)&v2241 + 1);
          v2242 = v2241 ^ BYTE8(v2241) ^ v2234;
          i50 = 1LL;
          v2234 = v2242 & 0x3F;
          if ( !(_DWORD)v2234 )
            v2234 = 1LL;
        }
        v2243 = v2231 & 0x7F;
        if ( v2243 >= 8 )
        {
          v2244 = (unsigned __int64)v2243 >> 3;
          do
          {
            v2236 = __ROL8__(*(_QWORD *)v2232 ^ v2236, v2234);
            v2232 += 8LL;
            v2243 -= 8;
            --v2244;
          }
          while ( v2244 );
        }
        if ( v2243 )
        {
          do
          {
            v2245 = *(unsigned __int8 *)v2232++;
            v2236 = __ROL8__(v2245 ^ v2236, v2234);
            --v2243;
          }
          while ( v2243 );
          v2229 = (int *)v2606;
        }
        for ( i51 = v2236; ; LODWORD(v2236) = i51 ^ v2236 )
        {
          i51 >>= 31;
          if ( !i51 )
            break;
        }
        v2247 = v2236 & 0x7FFFFFFF;
        v2248 = 0;
        if ( v2247 != v2229[5] )
        {
          if ( !*v2229 )
            v2248 = v2229[6] != 0;
          v2249 = (unsigned int)v2229[4];
          i50 = *((_QWORD *)v2229 + 1);
          if ( v2229[4] && (v2232 = 64LL, (*(_DWORD *)(v93 + 2452) & 0x40) != 0) )
          {
            v2250 = KeGetCurrentIrql();
            v2936 = v2250;
            v2232 = 2LL;
            __writecr8(2uLL);
            v2251 = i50 & 0xFFFFFFFFFFFFF000uLL;
            v2605 = (i50 + v2249 - 1) | 0xFFF;
            v2625 = (char *)((i50 & 0xFFFFFFFFFFFFF000uLL) - 1);
            while ( 2 )
            {
              v2252 = v2250;
              while ( 1 )
              {
                v2253 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, __int64))(v93 + 1128))(
                          v2251,
                          0LL,
                          v2232,
                          v2234);
                if ( v2253 != -1073741267 )
                  break;
                if ( v2248 )
                  goto LABEL_3629;
                v2250 = v2936;
                if ( v2936 > 1u )
                  goto LABEL_3627;
                v2252 = v2936;
                __writecr8(v2936);
                KeGetCurrentIrql();
                __writecr8(2uLL);
              }
              if ( v2253 < 0 )
              {
LABEL_3629:
                __writecr8(v2252);
                goto LABEL_3630;
              }
              v2250 = v2936;
LABEL_3627:
              i50 = 4096LL;
              v2251 += 4096LL;
              v2625 += 4096;
              if ( v2625 != (char *)v2605 )
                continue;
              break;
            }
            __writecr8(v2252);
          }
          else
          {
LABEL_3630:
            if ( !*(_DWORD *)(v93 + 2296) )
            {
              *(_QWORD *)(*(_QWORD *)(v93 + 1416) + 24LL) = (unsigned int)v2229[5] ^ (unsigned __int64)v2247;
              v2254 = *((_QWORD *)v2229 + 1);
              if ( !*(_DWORD *)(v93 + 2296) )
              {
                *(_QWORD *)(v93 + 2304) = v93 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v93 + 2312) = (char *)v2229 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v93 + 2320) = *v2229;
                *(_QWORD *)(v93 + 2328) = v2254;
                *(_DWORD *)(v93 + 2296) = 1;
                __ba(v93, 0LL);
              }
            }
          }
        }
        (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(v93 + 248))(
          *((_QWORD *)v2229 + 3),
          i50,
          v2232,
          v2234);
        *((_QWORD *)v2229 + 1) = 0LL;
        v2229[4] = 0;
        v2255 = *(_QWORD *)(v93 + 2072);
        for ( i52 = v2255; ; LODWORD(v2255) = i52 ^ v2255 )
        {
          i52 >>= 31;
          if ( !i52 )
            break;
        }
        v2229[5] = v2255 & 0x7FFFFFFF;
      }
      v2257 = __rdtsc();
      v2258 = (__ROR8__(v2257, 3) ^ v2257) * (unsigned __int128)0x7010008004002001uLL;
      v2794 = *((_QWORD *)&v2258 + 1);
      if ( ((unsigned __int64)v2258 ^ *((_QWORD *)&v2258 + 1)) == 3
                                                                * (((unsigned __int64)v2258 ^ *((_QWORD *)&v2258 + 1))
                                                                 / 3) )
      {
        v2259 = v2229 + 6;
        v2937 = v2229 + 6;
        v2260 = __rdtsc();
        v2261 = __ROR8__(v2260, 3);
        v2795 = ((v2261 ^ v2260) * (unsigned __int128)0x7010008004002001uLL) >> 64;
        v2262 = ((unsigned __int16)(8193 * (v2261 ^ v2260)) ^ (unsigned __int16)v2795) & 0x7FF;
        v2263 = __rdtsc();
        v2264 = (__ROR8__(v2263, 3) ^ v2263) * (unsigned __int128)0x7010008004002001uLL;
        v2796 = *((_QWORD *)&v2264 + 1);
        v2265 = (*((_QWORD *)&v2264 + 1) ^ (unsigned __int64)v2264) % (unsigned int)(v2262 + 1);
        v2266 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, _QWORD))(v93 + 240))(
                  (-(__int64)((*(_DWORD *)(v93 + 2448) & 0x10000000) != 0) & 0xFFFFFFFFFFFFFFC0uLL) + 130,
                  (unsigned int)(v2262 + 2720),
                  *(unsigned int *)(v93 + 2064));
        v2267 = v2266;
        if ( v2266 )
        {
          v2268 = v2265;
          v2269 = (_QWORD *)v2266;
          if ( (unsigned int)v2265 >= 8 )
          {
            v2270 = (unsigned __int64)(unsigned int)v2265 >> 3;
            do
            {
              v2268 -= 8;
              v2271 = __rdtsc();
              v2272 = (__ROR8__(v2271, 3) ^ v2271) * (unsigned __int128)0x7010008004002001uLL;
              v2797 = *((_QWORD *)&v2272 + 1);
              *v2269++ = v2272 ^ *((_QWORD *)&v2272 + 1);
              --v2270;
            }
            while ( v2270 );
            v2229 = (int *)v2606;
            v2259 = v2937;
          }
          if ( v2268 )
          {
            v2273 = __rdtsc();
            v2274 = (__ROR8__(v2273, 3) ^ v2273) * (unsigned __int128)0x7010008004002001uLL;
            v2798 = *((_QWORD *)&v2274 + 1);
            v2275 = v2274 ^ *((_QWORD *)&v2274 + 1);
            do
            {
              *(_BYTE *)v2269 = v2275;
              v2269 = (_QWORD *)((char *)v2269 + 1);
              v2275 >>= 8;
              --v2268;
            }
            while ( v2268 );
          }
          v2276 = v2262 - v2265;
          v2277 = v2267 + (unsigned int)v2265;
          v2278 = (_QWORD *)(v2277 + 2720);
          if ( v2276 >= 8 )
          {
            v2279 = (unsigned __int64)v2276 >> 3;
            do
            {
              v2276 -= 8;
              v2280 = __rdtsc();
              v2281 = (__ROR8__(v2280, 3) ^ v2280) * (unsigned __int128)0x7010008004002001uLL;
              v2799 = *((_QWORD *)&v2281 + 1);
              *v2278++ = v2281 ^ *((_QWORD *)&v2281 + 1);
              --v2279;
            }
            while ( v2279 );
            v2259 = v2229 + 6;
          }
          if ( v2276 )
          {
            v2282 = __rdtsc();
            v2283 = __ROR8__(v2282, 3) ^ v2282;
            v2800 = (v2283 * (unsigned __int128)0x7010008004002001uLL) >> 64;
            v2284 = (0x7010008004002001LL * v2283) ^ v2800;
            do
            {
              *(_BYTE *)v2278 = v2284;
              v2278 = (_QWORD *)((char *)v2278 + 1);
              v2284 >>= 8;
              --v2276;
            }
            while ( v2276 );
          }
          if ( v2259 )
            *v2259 = v2267;
          if ( v2277 )
          {
            *((_QWORD *)v2229 + 1) = v2277;
            v2229[4] = 2720;
            v2285 = 2720;
            v2286 = 340LL;
            v2287 = (char *)v93;
            v2288 = (_QWORD *)(v2267 + (unsigned int)v2265);
            do
            {
              v2285 -= 8;
              *v2288 = *(_QWORD *)v2287;
              v2287 += 8;
              ++v2288;
              --v2286;
            }
            while ( v2286 );
            for ( ; v2285; --v2285 )
            {
              v2289 = *v2287++;
              *(_BYTE *)v2288 = v2289;
              v2288 = (_QWORD *)((char *)v2288 + 1);
            }
            v2290 = *(_DWORD *)(v2277 + 2448);
            *(_DWORD *)(v2277 + 2020) = 2720;
            *(_DWORD *)(v2277 + 2056) = 2720;
            v2291 = v2290 & 0xFFF7FFFD | 0x80000;
            *(_DWORD *)(v2277 + 2448) = v2291;
            *(_DWORD *)(v2277 + 2604) = 2720;
            LODWORD(v2609) = v2291;
            v2610 = *(_DWORD *)(v2277 + 2388);
            v2624 = *(_DWORD **)(v2277 + 1248);
            v2613 = *(_QWORD *)(v2277 + 1464);
            *(_DWORD *)(v2277 + 196) = 315;
            do
            {
              v2292 = __rdtsc();
              v2293 = (__ROR8__(v2292, 3) ^ v2292) * (unsigned __int128)0x7010008004002001uLL;
              v2801 = *((_QWORD *)&v2293 + 1);
              v2294 = v2293 ^ *((_QWORD *)&v2293 + 1);
            }
            while ( (unsigned __int64)v2293 == *((_QWORD *)&v2293 + 1) );
            v2295 = (_QWORD *)(v2277 + 1944);
            v2625 = *(char **)(v2277 + 1976);
            v2296 = v2882;
            v2608 = *(_DWORD *)(v2277 + 2088);
            v2297 = 32;
            v2298 = (char *)(v2277 + 1944);
            v2299 = 4LL;
            do
            {
              v2297 -= 8;
              *(_QWORD *)v2296 = *(_QWORD *)v2298;
              v2298 += 8;
              v2296 += 8;
              --v2299;
            }
            while ( v2299 );
            v2300 = v2606;
            if ( v2297 )
            {
              do
              {
                v2301 = *v2298++;
                *v2296++ = v2301;
                --v2297;
              }
              while ( v2297 );
              v2300 = v2606;
            }
            *(_QWORD *)(v2277 + 1976) = 0LL;
            v2302 = 32;
            *(_DWORD *)(v2277 + 2088) = 0;
            v2303 = (_QWORD *)(v2277 + 1944);
            v2304 = 4LL;
            do
            {
              *v2303 = 0LL;
              v2302 -= 8;
              ++v2303;
              --v2304;
            }
            while ( v2304 );
            for ( ; v2302; --v2302 )
            {
              *(_BYTE *)v2303 = 0;
              v2303 = (_QWORD *)((char *)v2303 + 1);
            }
            v2305 = *(unsigned int *)(v2277 + 2020);
            v2306 = (_QWORD *)v2277;
            *(_DWORD *)(v2277 + 2088) += v2305;
            v2307 = (const char *)v2277;
            v2308 = *(_DWORD *)(v2277 + 2068);
            v2309 = *(_QWORD *)(v2277 + 2072);
            if ( v2277 < v2277 + v2305 )
            {
              do
              {
                _mm_prefetch(v2307, 0);
                v2307 += 64;
              }
              while ( (unsigned __int64)v2307 < v2277 + v2305 );
            }
            v2310 = (unsigned int)v2305 >> 7;
            if ( (unsigned int)v2305 >> 7 )
            {
              v2311 = *(_QWORD *)(v2277 + 2072);
              do
              {
                v2312 = 8LL;
                do
                {
                  v2313 = v2306[1] ^ __ROL8__(*v2306 ^ v2309, v2308);
                  v2306 += 2;
                  v2309 = __ROL8__(v2313, v2308);
                  --v2312;
                }
                while ( v2312 );
                v2314 = (__ROL8__(v2311 ^ ((unsigned __int64)v2306 - v2277), 17) ^ v2311 ^ ((unsigned __int64)v2306
                                                                                          - v2277))
                      * (unsigned __int128)0x7010008004002001uLL;
                v2802 = *((_QWORD *)&v2314 + 1);
                v2308 = ((unsigned __int8)(v2314 ^ BYTE8(v2314)) ^ (unsigned __int8)v2308) & 0x3F;
                if ( !v2308 )
                  LOBYTE(v2308) = 1;
                --v2310;
              }
              while ( v2310 );
              v2300 = v2606;
              v2295 = (_QWORD *)(v2277 + 1944);
            }
            v2315 = v2305 & 0x7F;
            if ( v2315 >= 8 )
            {
              v2316 = (unsigned __int64)v2315 >> 3;
              do
              {
                v2309 = __ROL8__(*v2306++ ^ v2309, v2308);
                v2315 -= 8;
                --v2316;
              }
              while ( v2316 );
            }
            if ( v2315 )
            {
              do
              {
                v2317 = *(unsigned __int8 *)v2306;
                v2306 = (_QWORD *)((char *)v2306 + 1);
                v2309 = __ROL8__(v2317 ^ v2309, v2308);
                --v2315;
              }
              while ( v2315 );
              v2300 = v2606;
            }
            v2318 = v2882;
            v2319 = 32;
            *(_QWORD *)(v2277 + 1976) = v2625;
            *(_DWORD *)(v2277 + 2088) += v2608;
            v2320 = 4LL;
            do
            {
              v2319 -= 8;
              *v2295 = *(_QWORD *)v2318;
              v2318 += 8;
              ++v2295;
              --v2320;
            }
            while ( v2320 );
            if ( v2319 )
            {
              do
              {
                v2321 = *v2318++;
                *(_BYTE *)v2295 = v2321;
                v2295 = (_QWORD *)((char *)v2295 + 1);
                --v2319;
              }
              while ( v2319 );
              v2300 = v2606;
            }
            *(_QWORD *)(v2277 + 1976) = v2309;
            if ( (*(_DWORD *)(v2277 + 2448) & 0x40000000) == 0 )
            {
              v2322 = (_QWORD *)v2277;
              for ( i53 = 0; i53 < 0x19; ++i53 )
                *v2322++ ^= v2294;
              v2324 = v2322 + 314;
              v2325 = 315;
              while ( 1 )
              {
                *v2324-- ^= v2294;
                v2688 = __ROR8__(v2294, v2325);
                _bittestandcomplement64(&v2688, v2688 & 0x3F);
                if ( !--v2325 )
                  break;
                v2294 = v2688;
              }
              v2326 = __rdtsc();
              v2327 = (__ROR8__(v2326, 3) ^ v2326) * (unsigned __int128)0x7010008004002001uLL;
              v2803 = *((_QWORD *)&v2327 + 1);
              if ( ((unsigned __int64)v2327 ^ *((_QWORD *)&v2327 + 1)) == 3
                                                                        * (((unsigned __int64)v2327 ^ *((_QWORD *)&v2327 + 1))
                                                                         / 3) )
              {
                v2328 = v2610;
                v2329 = v2609;
                v2330 = v2613;
                v2331 = 0;
                v2332 = (unsigned __int64)v2624;
                v2333 = (ULONG_PTR *)v2277;
                v2334 = __ROR8__(v2277, v2277);
                do
                {
                  v2335 = *v2333 - v2331 - v2277;
                  if ( (v2329 & 0x200) != 0 )
                    v2336 = v2334 ^ v2335;
                  else
                    v2336 = v2330 ^ __ROR8__(v2334 ^ _byteswap_uint64(v2332 ^ v2335), v2330);
                  *v2333++ = v2336;
                  v2337 = __ROR8__(v2331 ^ (unsigned __int64)(200 - v2331), ~(_BYTE)v2336) ^ v2334;
                  ++v2331;
                  v2334 = v2328 ^ (v2277 + __ROL8__(v2337, (unsigned __int8)v2336 ^ 0x29u));
                }
                while ( v2331 < 0x19 );
                v2300 = v2606;
              }
            }
            v2338 = *(_QWORD **)(v2300 + 8);
            v2339 = *(unsigned int *)(v2300 + 16);
            v2340 = v2338;
            *(_DWORD *)(v93 + 2088) += v2339;
            v2341 = (const char *)v2338;
            v2342 = *(_DWORD *)(v93 + 2068);
            v2343 = *(_QWORD *)(v93 + 2072);
            if ( v2338 < (_QWORD *)((char *)v2338 + v2339) )
            {
              do
              {
                _mm_prefetch(v2341, 0);
                v2341 += 64;
              }
              while ( v2341 < (const char *)v2338 + v2339 );
            }
            v2344 = *(_QWORD *)(v93 + 2072);
            v2345 = (unsigned int)v2339 >> 7;
            if ( (unsigned int)v2339 >> 7 )
            {
              do
              {
                v2346 = 8LL;
                do
                {
                  v2347 = v2340[1] ^ __ROL8__(*v2340 ^ v2344, v2342);
                  v2340 += 2;
                  v2344 = __ROL8__(v2347, v2342);
                  --v2346;
                }
                while ( v2346 );
                v2348 = (__ROL8__(v2343 ^ ((char *)v2340 - (char *)v2338), 17) ^ v2343 ^ (unsigned __int64)((char *)v2340 - (char *)v2338))
                      * (unsigned __int128)0x7010008004002001uLL;
                v2804 = *((_QWORD *)&v2348 + 1);
                v2342 = ((unsigned __int8)v2348 ^ (unsigned __int8)(BYTE8(v2348) ^ v2342)) & 0x3F;
                if ( !v2342 )
                  LOBYTE(v2342) = 1;
                --v2345;
              }
              while ( v2345 );
              v2300 = v2606;
            }
            v2349 = v2339 & 0x7F;
            if ( v2349 >= 8 )
            {
              v2350 = (unsigned __int64)v2349 >> 3;
              do
              {
                v2344 = __ROL8__(*v2340++ ^ v2344, v2342);
                v2349 -= 8;
                --v2350;
              }
              while ( v2350 );
            }
            if ( v2349 )
            {
              do
              {
                v2351 = *(unsigned __int8 *)v2340;
                v2340 = (_QWORD *)((char *)v2340 + 1);
                v2344 = __ROL8__(v2351 ^ v2344, v2342);
                --v2349;
              }
              while ( v2349 );
              v2300 = v2606;
            }
            for ( i54 = v2344; ; LODWORD(v2344) = i54 ^ v2344 )
            {
              i54 >>= 31;
              if ( !i54 )
                break;
            }
            *(_DWORD *)(v2300 + 20) = v2344 & 0x7FFFFFFF;
          }
        }
        else
        {
          ++*(_DWORD *)(v93 + 2584);
        }
      }
    }
  }
  v2608 = 0;
  v2613 = 0LL;
  v2938 = *(_DWORD *)(v93 + 2448);
  v2353 = v2938;
  if ( (v2938 & 0x40000000) == 0 )
  {
    if ( v93 != a1 )
    {
      v2433 = *(_QWORD *)(v93 + 1992);
      v2434 = *(_DWORD *)(v93 + 2604) - 200;
      LODWORD(v2609) = *(_DWORD *)(v93 + 2388);
      v2435 = v2434 >> 3;
      v2616 = *(_QWORD **)(v93 + 1248);
      v2624 = *(_DWORD **)(v93 + 1464);
      v2613 = v2433;
      v2608 = v2435;
      *(_DWORD *)(v93 + 196) = v2435;
      do
      {
        v2436 = __rdtsc();
        v2437 = (__ROR8__(v2436, 3) ^ v2436) * (unsigned __int128)0x7010008004002001uLL;
        v2809 = *((_QWORD *)&v2437 + 1);
        v2438 = v2437 ^ *((_QWORD *)&v2437 + 1);
      }
      while ( (unsigned __int64)v2437 == *((_QWORD *)&v2437 + 1) );
      v2439 = (_QWORD *)(v93 + 1944);
      v2625 = *(char **)(v93 + 1976);
      v2440 = v2885;
      v2610 = *(_DWORD *)(v93 + 2088);
      v2441 = 32;
      v2442 = (char *)(v93 + 1944);
      v2443 = 4LL;
      do
      {
        v2441 -= 8;
        *(_QWORD *)v2440 = *(_QWORD *)v2442;
        v2442 += 8;
        v2440 += 8;
        --v2443;
      }
      while ( v2443 );
      if ( v2441 )
      {
        do
        {
          v2444 = *v2442++;
          *v2440++ = v2444;
          --v2441;
        }
        while ( v2441 );
        v2353 = v2938;
      }
      *(_QWORD *)(v93 + 1976) = 0LL;
      v2445 = 32;
      *(_DWORD *)(v93 + 2088) = 0;
      v2446 = (_QWORD *)(v93 + 1944);
      v2447 = 4LL;
      do
      {
        *v2446 = 0LL;
        v2445 -= 8;
        ++v2446;
        --v2447;
      }
      while ( v2447 );
      for ( ; v2445; --v2445 )
      {
        *(_BYTE *)v2446 = 0;
        v2446 = (_QWORD *)((char *)v2446 + 1);
      }
      v2448 = *(unsigned int *)(v93 + 2020);
      v2449 = (_QWORD *)v93;
      *(_DWORD *)(v93 + 2088) += v2448;
      v2450 = (const char *)v93;
      v2451 = *(_DWORD *)(v93 + 2068);
      v2452 = *(_QWORD *)(v93 + 2072);
      if ( v93 < v93 + v2448 )
      {
        do
        {
          _mm_prefetch(v2450, 0);
          v2450 += 64;
        }
        while ( (unsigned __int64)v2450 < v93 + v2448 );
      }
      v2453 = (unsigned int)v2448 >> 7;
      if ( (unsigned int)v2448 >> 7 )
      {
        v2454 = *(_QWORD *)(v93 + 2072);
        do
        {
          v2455 = 8LL;
          do
          {
            v2456 = v2449[1] ^ __ROL8__(*v2449 ^ v2452, v2451);
            v2449 += 2;
            v2452 = __ROL8__(v2456, v2451);
            --v2455;
          }
          while ( v2455 );
          v2457 = (__ROL8__(v2454 ^ ((unsigned __int64)v2449 - v93), 17) ^ v2454 ^ ((unsigned __int64)v2449 - v93))
                * (unsigned __int128)0x7010008004002001uLL;
          v2810 = *((_QWORD *)&v2457 + 1);
          v2451 = ((unsigned __int8)v2457 ^ (unsigned __int8)(BYTE8(v2457) ^ v2451)) & 0x3F;
          if ( !v2451 )
            LOBYTE(v2451) = 1;
          --v2453;
        }
        while ( v2453 );
        v2435 = v2608;
        v2439 = (_QWORD *)(v93 + 1944);
        v2353 = v2938;
      }
      v2458 = v2448 & 0x7F;
      if ( v2458 >= 8 )
      {
        v2459 = (unsigned __int64)v2458 >> 3;
        do
        {
          v2452 = __ROL8__(*v2449++ ^ v2452, v2451);
          v2458 -= 8;
          --v2459;
        }
        while ( v2459 );
      }
      if ( v2458 )
      {
        do
        {
          v2460 = *(unsigned __int8 *)v2449;
          v2449 = (_QWORD *)((char *)v2449 + 1);
          v2452 = __ROL8__(v2460 ^ v2452, v2451);
          --v2458;
        }
        while ( v2458 );
        v2353 = v2938;
      }
      v2461 = v2885;
      v2462 = 4LL;
      *(_QWORD *)(v93 + 1976) = v2625;
      *(_DWORD *)(v93 + 2088) += v2610;
      v2463 = 32;
      do
      {
        v2463 -= 8;
        *v2439 = *(_QWORD *)v2461;
        v2461 += 8;
        ++v2439;
        --v2462;
      }
      while ( v2462 );
      if ( v2463 )
      {
        do
        {
          v2464 = *v2461++;
          *(_BYTE *)v2439 = v2464;
          v2439 = (_QWORD *)((char *)v2439 + 1);
          --v2463;
        }
        while ( v2463 );
        v2353 = v2938;
      }
      *(_QWORD *)(v93 + 1976) = v2452;
      if ( (*(_DWORD *)(v93 + 2448) & 0x40000000) != 0 )
        goto LABEL_3857;
      v2465 = (_QWORD *)v93;
      for ( i55 = 0; i55 < 0x19; ++i55 )
        *v2465++ ^= v2438;
      v2668 = v2438;
      v2467 = v2435;
      if ( v2435 )
      {
        v2468 = &v2465[v2435 - 1];
        while ( 1 )
        {
          *v2468-- ^= v2438;
          v2668 = __ROR8__(v2438, v2467);
          _bittestandcomplement64(&v2668, v2668 & 0x3F);
          if ( !--v2467 )
            break;
          v2438 = v2668;
        }
      }
      if ( (v2353 & 0x80000) != 0 )
      {
        v2469 = __rdtsc();
        v2470 = (__ROR8__(v2469, 3) ^ v2469) * (unsigned __int128)0x7010008004002001uLL;
        v2811 = *((_QWORD *)&v2470 + 1);
        if ( ((unsigned __int64)v2470 ^ *((_QWORD *)&v2470 + 1)) != 3
                                                                  * (((unsigned __int64)v2470 ^ *((_QWORD *)&v2470 + 1))
                                                                   / 3) )
          goto LABEL_3857;
      }
      else if ( (v2353 & 0x100) != 0 )
      {
        goto LABEL_3857;
      }
      v2471 = (unsigned int)v2609;
      v2472 = (unsigned __int64)v2616;
      v2473 = 25;
      v2474 = __ROR8__(v93, v93);
      v2475 = 0;
      v2476 = (ULONG_PTR *)v93;
      v2477 = (unsigned __int64)v2624;
      do
      {
        v2478 = *v2476 - v2475 - v93;
        if ( (v2353 & 0x200) != 0 )
          v2479 = v2478 ^ v2474;
        else
          v2479 = v2477 ^ __ROR8__(v2474 ^ _byteswap_uint64(v2478 ^ v2472), v2477);
        *v2476++ = v2479;
        v2474 = v2471 ^ (v93
                       + __ROL8__(
                           __ROR8__(v2475 ^ (unsigned __int64)(200 - v2475), ~(_BYTE)v2479) ^ v2474,
                           (unsigned __int8)v2479 ^ 0x29u));
        if ( ++v2475 == 25 )
        {
          v2480 = 0;
          if ( (v2353 & 0x80000) == 0 )
            v2480 = v2435;
          v2473 += v2480;
        }
      }
      while ( v2475 < v2473 );
      goto LABEL_3857;
    }
    if ( (v2938 & 0x8000) != 0 || !*(_DWORD *)(v93 + 2296) )
    {
      v2354 = sub_140B11020(a1, *(unsigned int *)(a1 + 2020), *(unsigned int *)(a1 + 2340));
      v93 = v2354;
      if ( v2354 )
      {
        v2355 = *(_QWORD *)(v2354 + 1992);
        v2356 = *(_DWORD *)(v93 + 2604) - 200;
        LODWORD(v2609) = *(_DWORD *)(v93 + 2388);
        v2357 = v2356 >> 3;
        v2610 = *(_DWORD *)(v93 + 2448);
        v2624 = *(_DWORD **)(v93 + 1248);
        v2358 = *(char **)(v93 + 1464);
        *(_DWORD *)(v93 + 196) = v2357;
        v2625 = v2358;
        v2613 = v2355;
        do
        {
          v2359 = __rdtsc();
          v2360 = (__ROR8__(v2359, 3) ^ v2359) * (unsigned __int128)0x7010008004002001uLL;
          v2805 = *((_QWORD *)&v2360 + 1);
          v2361 = v2360 ^ *((_QWORD *)&v2360 + 1);
        }
        while ( (unsigned __int64)v2360 == *((_QWORD *)&v2360 + 1) );
        v2362 = (_QWORD *)(v93 + 1944);
        v2363 = v2883;
        v2605 = *(_QWORD *)(v93 + 1976);
        v2364 = 32;
        v2608 = *(_DWORD *)(v93 + 2088);
        v2365 = (char *)(v93 + 1944);
        v2366 = 4LL;
        do
        {
          v2364 -= 8;
          *(_QWORD *)v2363 = *(_QWORD *)v2365;
          v2365 += 8;
          v2363 += 8;
          --v2366;
        }
        while ( v2366 );
        for ( ; v2364; --v2364 )
        {
          v2367 = *v2365++;
          *v2363++ = v2367;
        }
        *(_QWORD *)(v93 + 1976) = 0LL;
        v2368 = 32;
        *(_DWORD *)(v93 + 2088) = 0;
        v2369 = (_QWORD *)(v93 + 1944);
        v2370 = 4LL;
        do
        {
          *v2369 = 0LL;
          v2368 -= 8;
          ++v2369;
          --v2370;
        }
        while ( v2370 );
        for ( ; v2368; --v2368 )
        {
          *(_BYTE *)v2369 = 0;
          v2369 = (_QWORD *)((char *)v2369 + 1);
        }
        v2371 = *(unsigned int *)(v93 + 2020);
        v2372 = (_QWORD *)v93;
        *(_DWORD *)(v93 + 2088) += v2371;
        v2373 = (const char *)v93;
        v2374 = *(_DWORD *)(v93 + 2068);
        v2375 = *(_QWORD *)(v93 + 2072);
        if ( v93 < v93 + v2371 )
        {
          do
          {
            _mm_prefetch(v2373, 0);
            v2373 += 64;
          }
          while ( (unsigned __int64)v2373 < v93 + v2371 );
        }
        v2376 = *(_QWORD *)(v93 + 2072);
        for ( i56 = (unsigned int)v2371 >> 7; i56; --i56 )
        {
          v2378 = 8LL;
          do
          {
            v2379 = v2372[1] ^ __ROL8__(*v2372 ^ v2376, v2374);
            v2372 += 2;
            v2376 = __ROL8__(v2379, v2374);
            --v2378;
          }
          while ( v2378 );
          v2380 = (__ROL8__(v2375 ^ ((unsigned __int64)v2372 - v93), 17) ^ v2375 ^ ((unsigned __int64)v2372 - v93))
                * (unsigned __int128)0x7010008004002001uLL;
          v2806 = *((_QWORD *)&v2380 + 1);
          v2374 = ((unsigned __int8)v2380 ^ (unsigned __int8)(BYTE8(v2380) ^ v2374)) & 0x3F;
          if ( !v2374 )
            LOBYTE(v2374) = 1;
        }
        v2381 = v2371 & 0x7F;
        if ( v2381 >= 8 )
        {
          v2382 = (unsigned __int64)v2381 >> 3;
          do
          {
            v2376 = __ROL8__(*v2372++ ^ v2376, v2374);
            v2381 -= 8;
            --v2382;
          }
          while ( v2382 );
        }
        for ( ; v2381; --v2381 )
        {
          v2383 = *(unsigned __int8 *)v2372;
          v2372 = (_QWORD *)((char *)v2372 + 1);
          v2376 = __ROL8__(v2383 ^ v2376, v2374);
        }
        v2384 = v2883;
        *(_QWORD *)(v93 + 1976) = v2605;
        v2385 = 4LL;
        *(_DWORD *)(v93 + 2088) += v2608;
        v2386 = 32;
        do
        {
          v2386 -= 8;
          *v2362 = *(_QWORD *)v2384;
          v2384 += 8;
          ++v2362;
          --v2385;
        }
        while ( v2385 );
        for ( ; v2386; --v2386 )
        {
          v2387 = *v2384++;
          *(_BYTE *)v2362 = v2387;
          v2362 = (_QWORD *)((char *)v2362 + 1);
        }
        *(_QWORD *)(v93 + 1976) = v2376;
        if ( (*(_DWORD *)(v93 + 2448) & 0x40000000) != 0 )
          goto LABEL_3857;
        v2388 = (_QWORD *)v93;
        for ( i57 = 0; i57 < 0x19; ++i57 )
          *v2388++ ^= v2361;
        v2664 = v2361;
        v2390 = v2357;
        if ( v2357 )
        {
          v2391 = &v2388[v2357 - 1];
          while ( 1 )
          {
            *v2391-- ^= v2361;
            v2664 = __ROR8__(v2361, v2390);
            _bittestandcomplement64(&v2664, v2664 & 0x3F);
            if ( !--v2390 )
              break;
            v2361 = v2664;
          }
        }
        v2392 = v2610;
        if ( (v2610 & 0x80000) != 0 )
        {
          v2393 = __rdtsc();
          v2394 = (__ROR8__(v2393, 3) ^ v2393) * (unsigned __int128)0x7010008004002001uLL;
          v2807 = *((_QWORD *)&v2394 + 1);
          if ( ((unsigned __int64)v2394 ^ *((_QWORD *)&v2394 + 1)) != 3
                                                                    * (((unsigned __int64)v2394 ^ *((_QWORD *)&v2394 + 1))
                                                                     / 3) )
            goto LABEL_3857;
LABEL_3768:
          v2395 = (unsigned int)v2609;
          v2396 = (unsigned __int64)v2625;
          v2397 = 25;
          v2398 = __ROR8__(v93, v93);
          v2399 = 0;
          v2400 = (ULONG_PTR *)v93;
          v2401 = (unsigned __int64)v2624;
          do
          {
            v2402 = *v2400 - v2399 - v93;
            if ( (v2392 & 0x200) != 0 )
              v2403 = v2398 ^ v2402;
            else
              v2403 = v2396 ^ __ROR8__(v2398 ^ _byteswap_uint64(v2401 ^ v2402), v2396);
            *v2400++ = v2403;
            v2398 = v2395 ^ (v93
                           + __ROL8__(
                               __ROR8__(v2399 ^ (unsigned __int64)(200 - v2399), ~(_BYTE)v2403) ^ v2398,
                               (unsigned __int8)v2403 ^ 0x29u));
            if ( ++v2399 == 25 )
            {
              v2404 = 0;
              if ( (v2392 & 0x80000) == 0 )
                v2404 = v2357;
              v2397 += v2404;
            }
          }
          while ( v2399 < v2397 );
          goto LABEL_3857;
        }
        if ( (v2610 & 0x100) == 0 )
          goto LABEL_3768;
LABEL_3857:
        v2481 = __rdtsc();
        v2608 = 1;
        v2482 = __ROR8__(v2481, 3) ^ v2481;
        v2483 = v2482 * (unsigned __int128)0x7010008004002001uLL;
        v2812 = *((_QWORD *)&v2483 + 1);
        v2484 = *((_QWORD *)&v2483 + 1) ^ (0x7010008004002001LL * v2482);
        goto LABEL_3866;
      }
    }
    *(_DWORD *)(a1 + 196) = 1;
    v2405 = (_QWORD *)(a1 + 1944);
    v2406 = *(_DWORD *)(a1 + 2088);
    v2407 = v2884;
    v2625 = *(char **)(a1 + 1976);
    v93 = a1;
    v2408 = 4LL;
    v2605 = a1 + 1944;
    v2409 = 32;
    v2410 = (char *)(a1 + 1944);
    do
    {
      v2409 -= 8;
      *(_QWORD *)v2407 = *(_QWORD *)v2410;
      v2410 += 8;
      v2407 += 8;
      --v2408;
    }
    while ( v2408 );
    for ( i58 = v2625; v2409; --v2409 )
    {
      v2412 = *v2410++;
      *v2407++ = v2412;
    }
    *(_QWORD *)(a1 + 1976) = 0LL;
    v2413 = 32;
    *(_DWORD *)(a1 + 2088) = 0;
    v2414 = (_QWORD *)(a1 + 1944);
    v2415 = 4LL;
    do
    {
      *v2414 = 0LL;
      v2413 -= 8;
      ++v2414;
      --v2415;
    }
    while ( v2415 );
    for ( ; v2413; --v2413 )
    {
      *(_BYTE *)v2414 = 0;
      v2414 = (_QWORD *)((char *)v2414 + 1);
    }
    v2416 = *(unsigned int *)(a1 + 2020);
    v2417 = (_QWORD *)a1;
    *(_DWORD *)(a1 + 2088) += v2416;
    v2418 = (const char *)a1;
    v2419 = *(_DWORD *)(a1 + 2068);
    v2420 = *(_QWORD *)(a1 + 2072);
    if ( a1 < (unsigned __int64)(a1 + v2416) )
    {
      do
      {
        _mm_prefetch(v2418, 0);
        v2418 += 64;
      }
      while ( (unsigned __int64)v2418 < a1 + v2416 );
    }
    v2421 = *(_QWORD *)(a1 + 2072);
    v2422 = (unsigned int)v2416 >> 7;
    if ( (unsigned int)v2416 >> 7 )
    {
      do
      {
        v2423 = 8LL;
        do
        {
          v2424 = v2417[1] ^ __ROL8__(*v2417 ^ v2421, v2419);
          v2417 += 2;
          v2421 = __ROL8__(v2424, v2419);
          --v2423;
        }
        while ( v2423 );
        v2425 = (__ROL8__(v2420 ^ ((unsigned __int64)v2417 - a1), 17) ^ v2420 ^ ((unsigned __int64)v2417 - a1))
              * (unsigned __int128)0x7010008004002001uLL;
        v2808 = *((_QWORD *)&v2425 + 1);
        v2419 = ((unsigned __int8)v2425 ^ (unsigned __int8)(BYTE8(v2425) ^ v2419)) & 0x3F;
        if ( !v2419 )
          LOBYTE(v2419) = 1;
        --v2422;
      }
      while ( v2422 );
      v2405 = (_QWORD *)v2605;
      i58 = v2625;
    }
    v2426 = v2416 & 0x7F;
    if ( v2426 >= 8 )
    {
      v2427 = (unsigned __int64)v2426 >> 3;
      do
      {
        v2421 = __ROL8__(*v2417++ ^ v2421, v2419);
        v2426 -= 8;
        --v2427;
      }
      while ( v2427 );
    }
    for ( ; v2426; --v2426 )
    {
      v2428 = *(unsigned __int8 *)v2417;
      v2417 = (_QWORD *)((char *)v2417 + 1);
      v2421 = __ROL8__(v2428 ^ v2421, v2419);
    }
    v2429 = v2884;
    v2430 = 4LL;
    *(_QWORD *)(a1 + 1976) = i58;
    *(_DWORD *)(a1 + 2088) += v2406;
    v2431 = 32;
    do
    {
      v2431 -= 8;
      *v2405 = *(_QWORD *)v2429;
      v2429 += 8;
      ++v2405;
      --v2430;
    }
    while ( v2430 );
    for ( ; v2431; --v2431 )
    {
      v2432 = *v2429++;
      *(_BYTE *)v2405 = v2432;
      v2405 = (_QWORD *)((char *)v2405 + 1);
    }
    *(_QWORD *)(a1 + 1976) = v2421;
  }
  v2485 = *(_DWORD *)(v93 + 2448);
  v2484 = 0LL;
  if ( (v2485 & 0x40000000) == 0 )
  {
    if ( (v2485 & 0x100) == 0 )
    {
      v2486 = *(_QWORD *)(v93 + 1464);
      v2487 = *(_QWORD *)(v93 + 1248);
      v2488 = (_QWORD *)v93;
      v2489 = __ROR8__(v93, v93);
      v2490 = 0;
      v2939 = *(unsigned int *)(v93 + 2388);
      v2491 = 0LL;
      do
      {
        v2492 = *v2488 - v93 - v2491;
        if ( (v2485 & 0x200) != 0 )
          v2493 = v2492 ^ v2489;
        else
          v2493 = v2486 ^ __ROR8__(v2489 ^ _byteswap_uint64(v2492 ^ v2487), v2486);
        *v2488 = v2493;
        v2494 = __ROR8__(v2491 ^ (200 - v2490), ~(_BYTE)v2493);
        ++v2488;
        ++v2490;
        v2489 = v2939 ^ (v93 + __ROL8__(v2494 ^ v2489, (unsigned __int8)v2493 ^ 0x29u));
        ++v2491;
      }
      while ( v2490 < 0x19 );
    }
    (*(void (__fastcall **)(ULONG_PTR))(v93 + 616))(v93 + 2048);
  }
LABEL_3866:
  v2495 = a1;
  v2496 = *(_DWORD **)(a1 + 2008);
  if ( (*(_DWORD *)(a1 + 2448) & 0x10000000) != 0 )
  {
    v2497 = __rdtsc();
    v2498 = (__ROR8__(v2497, 3) ^ v2497) * (unsigned __int128)0x7010008004002001uLL;
    v2843 = *((_QWORD *)&v2498 + 1);
    v2496 = (_DWORD *)(*(_QWORD *)(a1 + 1480) + 16LL * (((unsigned __int8)v2498 ^ BYTE8(v2498)) & 0xF));
  }
  v2499 = 40;
  v2500 = (char *)(a1 + 2296);
  v2501 = (char *)(a1 + 2296);
  v2502 = &v2727;
  v2503 = 5LL;
  do
  {
    v2499 -= 8;
    *(_QWORD *)v2502 = *(_QWORD *)v2501;
    v2501 += 8;
    v2502 += 2;
    --v2503;
  }
  while ( v2503 );
  v2504 = 0LL;
  if ( v2499 )
  {
    do
    {
      v2505 = *v2501++;
      *(_BYTE *)v2502 = v2505;
      v2502 = (int *)((char *)v2502 + 1);
      --v2499;
    }
    while ( v2499 );
    v2495 = a1;
  }
  v2506 = *(_DWORD *)(v2495 + 2448);
  if ( (v2506 & 0x8000) != 0 || !*(_DWORD *)v2500 )
  {
    if ( (v2506 & 0x40000000) != 0 )
      goto LABEL_3953;
    v2507 = (unsigned __int8)(*(_BYTE *)(v2495 + 2336) - 1);
    v2508 = __rdtsc();
    v2509 = __ROR8__(v2508, 3) ^ v2508;
    v2814 = (v2509 * (unsigned __int128)0x7010008004002001uLL) >> 64;
    v2510 = v2507 + (v2814 ^ (0x7010008004002001LL * v2509)) % (unsigned int)(63 - v2507);
    do
    {
      v2511 = __rdtsc();
      v2512 = __ROR8__(v2511, 3) ^ v2511;
      v2815 = (v2512 * (unsigned __int128)0x7010008004002001uLL) >> 64;
      v2513 = v2507 + (v2815 ^ (0x7010008004002001LL * v2512)) % (unsigned int)(63 - v2507);
    }
    while ( v2513 == v2510 );
    v2495 = a1;
    v2514 = (v93 ^ v2484 | (1LL << v2510)) & ~(1LL << v2513);
    v2515 = *(_QWORD *)(a1 + 1936);
    v2516 = *(_QWORD *)(a1 + 1928);
    if ( *(_DWORD *)(a1 + 2340) == 3 && (v2504 = v2613) != 0 )
    {
      v2517 = *(_QWORD *)(a1 + 880);
      *(_BYTE *)v2515 = 19;
      *(_BYTE *)(v2515 + 1) = 1;
      *(_WORD *)(v2515 + 2) = 0;
      *(_QWORD *)(v2515 + 24) = v2517;
      *(_QWORD *)(v2515 + 32) = v2504;
      *(_QWORD *)(v2515 + 56) = 0LL;
      *(_QWORD *)(v2515 + 16) = 0LL;
      *(_QWORD *)(v2515 + 40) = v2514;
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(a1 + 864))(
        *(_QWORD *)(v2504 + 8),
        *(unsigned int *)(v2504 + 16),
        *(_QWORD *)v2504);
      v2518 = *(_QWORD *)v2504;
      v2519 = v2504 ^ __ROL8__(v2504, 17);
      v2520 = 4;
      v2816 = (v2519 * (unsigned __int128)0x7010008004002001uLL) >> 64;
      v2521 = v2519 ^ v2816;
      v2522 = (_QWORD *)(v2504 + 24);
      v2523 = (0x7010008004002001LL * v2519) ^ v2816;
      v2504 = 0LL;
      do
      {
        *v2522 ^= v2523;
        v2523 = __ROL8__(v2523, v2520);
        --v2522;
        --v2520;
      }
      while ( v2520 );
      if ( (v2521 & 0xFu) < 7 )
      {
        v2524 = 6;
        v2525 = v2518 ^ __ROL8__(v2518, 17);
        v2817 = ((unsigned __int64)v2525 * (unsigned __int128)0x7010008004002001uLL) >> 64;
        v2526 = ((0x7010008004002001LL * v2525) ^ v2817) + v2523;
        v2527 = (_QWORD *)(v2518 + 40);
        v2528 = (unsigned int)*(__int16 *)(v2518 + 8);
        do
        {
          *v2527 ^= v2526;
          v2526 = __ROL8__(v2526, v2524);
          --v2527;
          --v2524;
        }
        while ( v2524 );
        v2529 = (unsigned __int64)(v2528 - 48) >> 3;
        if ( (_DWORD)v2529 )
        {
          v2530 = (_QWORD *)(v2518 + 8 * ((int)v2529 + 5LL));
          do
          {
            *v2530 ^= v2526;
            v2526 = __ROL8__(v2526, v2529);
            --v2530;
            LODWORD(v2529) = v2529 - 1;
          }
          while ( (_DWORD)v2529 );
        }
      }
      v2495 = a1;
    }
    else
    {
      *(_BYTE *)v2515 = 19;
      *(_BYTE *)(v2515 + 1) = 1;
      *(_WORD *)(v2515 + 2) = v2504;
      *(_QWORD *)(v2515 + 24) = v2496;
      *(_QWORD *)(v2515 + 32) = v2514;
      *(_QWORD *)(v2515 + 56) = v2504;
      *(_QWORD *)(v2515 + 16) = v2504;
    }
    *(_QWORD *)(v2515 + 64) = v2484;
    if ( (*(_DWORD *)(v2495 + 2448) & 0x100) != 0 )
    {
      v2531 = (unsigned __int64)(v2496 - 18);
      *((_QWORD *)v2496 - 1) = v2515;
      v2532 = 25LL;
      v2533 = __rdtsc();
      v2534 = __ROR8__(v2533, 3) ^ v2533;
      v2818 = (v2534 * (unsigned __int128)0x7010008004002001uLL) >> 64;
      v2535 = (0x7010008004002001LL * v2534) ^ v2818;
      v2536 = v2496;
      do
      {
        *v2536++ ^= v2535;
        --v2532;
      }
      while ( v2532 );
      *v2496 = 1213280584;
      *(_QWORD *)(v2531 + 32) = v2535;
    }
    else
    {
      v2531 = v2515;
    }
    v2537 = *(_QWORD *)(v2495 + 2712);
    if ( v2537 )
    {
      v2538 = *(_QWORD *)(v2537 + 32);
      v2539 = *(_QWORD *)(v2495 + 1416) ^ ((v2538 ^ ((v2538 ^ 0xE5D49100uLL) >> 4)) >> 4);
      v2540 = *(_BYTE *)(v2495 + 1416) ^ ((v2538 ^ ((v2538 ^ 0xE5D49100uLL) >> 4)) >> 4);
      v2541 = v2539;
      v2542 = v2540 & 0xF;
      if ( !v2542 )
        v2542 = 1;
      do
      {
        v2543 = (unsigned __int64 *)(v2538 + (v2539 & 0xF));
        v2538 = *v2543;
        v2539 ^= (*v2543 ^ ((*v2543 ^ 0x1E5200) >> 4)) >> 4;
        --v2542;
      }
      while ( v2542 );
      if ( (v2541 & 0x1000) != 0 )
        v2531 ^= v2541;
      v2495 = a1;
      *v2543 = v2531;
      v2531 = *(_QWORD *)(a1 + 2712);
    }
    _InterlockedOr(v2598, v2504);
    v2544 = *(_DWORD *)(v2495 + 2104);
    if ( !v2544 )
    {
      v2564 = __rdtsc();
      v2565 = (__ROR8__(v2564, 3) ^ v2564) * (unsigned __int128)0x7010008004002001uLL;
      v2820 = *((_QWORD *)&v2565 + 1);
      v2566 = -1200000000LL - ((unsigned __int64)v2565 ^ *((_QWORD *)&v2565 + 1)) % 0x5F5E100;
      *(_QWORD *)&v2565 = __rdtsc();
      v2567 = (__ROR8__(v2565, 3) ^ (unsigned __int64)v2565) * (unsigned __int128)0x7010008004002001uLL;
      v2821 = *((_QWORD *)&v2567 + 1);
      (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD, unsigned __int64, unsigned __int64))(v2495 + 472))(
        v2516,
        v2566,
        0LL,
        ((unsigned __int64)v2567 ^ *((_QWORD *)&v2567 + 1)) % 0x2710,
        v2531);
      goto LABEL_3928;
    }
    v2545 = v2544 - 1;
    if ( !v2545 )
    {
      *(_QWORD *)(*(_QWORD *)(v2495 + 1984) + *(_QWORD *)(v2495 + 1592)) = v2531;
      goto LABEL_3929;
    }
    v2546 = v2545 - 1;
    if ( !v2546 )
    {
      *(_QWORD *)(*(_QWORD *)(v2495 + 1984) + 128LL) = v2531;
      goto LABEL_3929;
    }
    v2547 = v2546 - 1;
    if ( v2547 )
    {
      if ( v2547 != 1 )
      {
        v2548 = *(_QWORD *)(v2495 + 2456);
        *(_QWORD *)(v2548 + 72) = v2531;
        _InterlockedOr(v2598, v2504);
        v2549 = __rdtsc();
        v2550 = (__ROR8__(v2549, 3) ^ v2549) * (unsigned __int128)0x7010008004002001uLL;
        v2819 = *((_QWORD *)&v2550 + 1);
        *(_DWORD *)v2548 = (__int64)(((unsigned __int64)v2550 ^ *((_QWORD *)&v2550 + 1)) % 0x5F5E100 + 1200000000)
                         / 10000000;
        goto LABEL_3929;
      }
      v2551 = *(_QWORD *)(v2495 + 2528);
      v2552 = *(_QWORD *)(v2495 + 2544);
      v2553 = *(_QWORD *)(v2495 + 2536);
      v2554 = *(_QWORD *)(v2495 + 2456);
      *(_BYTE *)v2551 = 18;
      *(_BYTE *)(v2551 + 2) = 88;
      *(_BYTE *)(v2551 + 80) = v2504;
      *(_QWORD *)(v2551 + 8) = v2554;
      *(_QWORD *)(v2551 + 32) = v2553;
      *(_QWORD *)(v2551 + 40) = v2504;
      *(_QWORD *)(v2551 + 48) = v2552;
      *(_BYTE *)(v2551 + 81) = v2504;
      *(_QWORD *)(v2551 + 56) = v2504;
      *(_BYTE *)(v2551 + 82) = v2504;
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, unsigned __int64, _QWORD, _QWORD))(v2495 + 704))(
              *(_QWORD *)(v2495 + 2528),
              v2515,
              0LL,
              0LL) )
      {
        if ( *(_DWORD *)v2500 == (_DWORD)v2504 )
        {
          *(_QWORD *)(a1 + 2304) = a1 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(a1 + 2312) = v2504;
          *(_QWORD *)(a1 + 2320) = 260LL;
          *(_QWORD *)(a1 + 2328) = v2554;
          *(_DWORD *)v2500 = 1;
          __ba(a1, 0LL);
        }
        v2555 = &v2727;
        v2556 = 40;
        do
        {
          v2556 -= 8;
          *(_QWORD *)v2555 = *(_QWORD *)v2500;
          v2500 += 8;
          v2555 += 2;
          --v2636;
        }
        while ( v2636 );
        for ( ; v2556; --v2556 )
        {
          v2557 = *v2500++;
          *(_BYTE *)v2555 = v2557;
          v2555 = (int *)((char *)v2555 + 1);
        }
      }
LABEL_3928:
      v2495 = a1;
      goto LABEL_3929;
    }
    v2558 = *(_QWORD *)(v2495 + 2456);
    v2559 = *(_QWORD *)(v2558 + *(_QWORD *)(v2495 + 1696));
    if ( v2559 )
    {
      if ( *(_DWORD *)v2500 == (_DWORD)v2504 )
      {
        *(_QWORD *)(v2495 + 2304) = v2495 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(v2495 + 2312) = v2504;
        *(_QWORD *)(v2495 + 2320) = 260LL;
        *(_QWORD *)(v2495 + 2328) = v2559;
        *(_DWORD *)v2500 = 1;
        __ba(v2495, 0LL);
      }
      v2560 = 40;
      v2561 = &v2727;
      v2562 = 5LL;
      do
      {
        v2560 -= 8;
        *(_QWORD *)v2561 = *(_QWORD *)v2500;
        v2500 += 8;
        v2561 += 2;
        --v2562;
      }
      while ( v2562 );
      v2495 = a1;
      if ( v2560 )
      {
        do
        {
          v2563 = *v2500++;
          *(_BYTE *)v2561 = v2563;
          v2561 = (int *)((char *)v2561 + 1);
          --v2560;
        }
        while ( v2560 );
        v2495 = a1;
      }
    }
    _InterlockedOr(v2598, v2504);
    *(_QWORD *)(v2558 + *(_QWORD *)(v2495 + 1696)) = v2515;
  }
LABEL_3929:
  if ( v2727 != (_DWORD)v2504 )
  {
    v2568 = *(_DWORD *)(v2495 + 2448);
    if ( (v2568 & 0x8000) == 0 )
    {
      v2569 = v2730;
      v2570 = v2731;
      v2571 = (int)v2729;
      v2572 = v2728;
      v2940 = v2730;
      v2636 = v2731;
      v2625 = v2729;
      v2613 = v2728;
      if ( KeGetCurrentIrql() < 2u )
      {
        KeGetCurrentIrql();
        __writecr8(2uLL);
        v2568 = *(_DWORD *)(v2495 + 2448);
      }
      v2573 = KeGetCurrentPrcb();
      v2574 = 0;
      v2575 = *(char **)((char *)&v2573->MxCsr + *(_QWORD *)(v2495 + 1600));
      v2576 = *(_QWORD *)((char *)&v2573->MxCsr + *(_QWORD *)(v2495 + 1616));
      v2577 = *(_QWORD *)(v2495 + 1608);
      v2605 = v2576;
      if ( !*((_BYTE *)&v2573->MxCsr + v2577) || &v2680 > v2575 || &v2680 < v2575 - 24576 )
        v2575 = *(char **)(v2576 + *(_QWORD *)(v2495 + 1664));
      if ( (v2568 & 0x8000000) == 0 )
      {
        v2578 = __readcr0();
        __writecr0(v2578 & 0xFFFFFFFFFFFEFFFFuLL);
        v2579 = v2495 + 2728;
        v2580 = v2495 + 2728 + 16LL * *(unsigned int *)(v2495 + 2720);
        v2581 = (_QWORD *)v2580;
        if ( *(_DWORD *)(v2495 + 2724) )
        {
          do
          {
            *(_QWORD *)*v2581 = v2581[1];
            v2582 = __readcr4();
            if ( (v2582 & 0x20080) != 0 )
            {
              __writecr4(v2582 ^ 0x80);
              __writecr4(v2582);
            }
            else
            {
              v2583 = __readcr3();
              __writecr3(v2583);
            }
            v2581 += 2;
            ++v2574;
          }
          while ( v2574 < *(_DWORD *)(v2495 + 2724) );
          v2569 = v2940;
          v2570 = v2636;
        }
        if ( v2579 < v2580 )
        {
          do
          {
            v2584 = *(unsigned int *)(v2579 + 8);
            v2585 = v2581;
            v2586 = *(char **)v2579;
            v2587 = v2584;
            if ( (unsigned int)v2584 >= 8 )
            {
              v2588 = (unsigned __int64)(unsigned int)v2584 >> 3;
              do
              {
                v2587 -= 8;
                *(_QWORD *)v2586 = *v2585++;
                v2586 += 8;
                --v2588;
              }
              while ( v2588 );
            }
            if ( v2587 )
            {
              v2589 = v2586 - (char *)v2585;
              do
              {
                *((_BYTE *)v2585 + v2589) = *(_BYTE *)v2585;
                v2585 = (_QWORD *)((char *)v2585 + 1);
                --v2587;
              }
              while ( v2587 );
            }
            v2581 = (_QWORD *)((char *)v2581 + v2584);
            v2579 += 16LL;
          }
          while ( v2579 < v2580 );
          v2576 = v2605;
          v2569 = v2940;
          v2570 = v2636;
          v2571 = (int)v2625;
          v2572 = v2613;
          v2495 = a1;
        }
        **(_BYTE **)(v2495 + 536) = -61;
        __writecr0(v2578);
      }
      v2592 = *(_DWORD *)(v2495 + 2344);
      if ( v2592 )
      {
        if ( KeGetCurrentIrql() < 2u )
        {
          KeGetCurrentIrql();
          __writecr8(2uLL);
          v2592 = *(_DWORD *)(v2495 + 2344);
        }
        if ( v2592 )
        {
          v2593 = v2592 - 1;
          if ( v2593 )
          {
            v2594 = v2593 - 1;
            if ( v2594 )
            {
              v2595 = v2594 - 1;
              if ( v2595 )
              {
                v2596 = v2595 - 1;
                if ( v2596 )
                {
                  if ( v2596 == 1 )
                    _interlockedbittestandset(
                      *(volatile signed __int32 **)((char *)&KeGetCurrentPrcb()->MxCsr + *(_QWORD *)(v2495 + 1616)),
                      (*(_DWORD *)(v2495 + 2448) >> 10) & 0x1F);
                  else
                    _InterlockedOr64((volatile signed __int64 *)(*(_QWORD *)(v2495 + 1456) + 832LL), 1uLL);
                }
                else
                {
                  _interlockedbittestandset(
                    *(volatile signed __int32 **)(*(_QWORD *)(v2495 + 1712)
                                                + *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr
                                                            + *(_QWORD *)(v2495 + 1616))
                                                + *(_QWORD *)(v2495 + 1680)),
                    (*(_DWORD *)(v2495 + 2448) >> 10) & 0x1F);
                }
                goto LABEL_3998;
              }
              v2597 = *(volatile signed __int32 **)(v2495 + 1368);
            }
            else
            {
              v2597 = *(volatile signed __int32 **)(v2495 + 1360);
            }
          }
          else
          {
            v2597 = *(volatile signed __int32 **)(v2495 + 1344);
          }
          _interlockedbittestandset64(v2597, 0LL);
        }
      }
LABEL_3998:
      *(_QWORD *)(v2576 + *(_QWORD *)(v2495 + 1688)) = 0LL;
      *(_QWORD *)(v2576 + *(_QWORD *)(v2495 + 1704)) = 0LL;
      SdbpCheckDll(265LL, v2572, v2571, v2570, v2569, *(__int64 (__fastcall **)(__int64))(a1 + 344), v2575);
      JUMPOUT(0x140B0D543LL);
    }
  }
LABEL_3953:
  if ( (*(_DWORD *)(v2495 + 2448) & 0x40000000) == 0 && v2608 != (_DWORD)v2504 )
  {
    if ( *(_DWORD *)(v2495 + 2340) == 1 )
    {
      *(_QWORD *)(v2495 + 1992) -= 8LL;
      *(_DWORD *)(v2495 + 2000) = **(_DWORD **)(v2495 + 1992);
      v2590 = *(_QWORD *)(v2495 + 552);
      goto LABEL_3959;
    }
    if ( *(_DWORD *)(v2495 + 2340) == 3 )
    {
      v2590 = *(_QWORD *)(v2495 + 872);
LABEL_3959:
      *(_QWORD *)(v2495 + 248) = v2590;
    }
  }
  return v2495;
}