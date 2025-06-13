__int64 __fastcall FsRtlMdlReadCompleteDevEx(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // rdx
  int v3; // ecx
  _QWORD *v4; // rax
  __int64 v5; // r8
  int v6; // r15d
  __int64 v7; // r14
  _QWORD *v8; // rbx
  _BYTE *v9; // rdx
  char *v10; // rcx
  int v11; // r8d
  __int64 v12; // r9
  char v13; // al
  int v14; // ecx
  _QWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r10
  _QWORD *v18; // r9
  const char *v19; // rax
  int v20; // r11d
  __int64 v21; // rsi
  __int64 v22; // r8
  unsigned int v23; // edi
  __int64 v24; // rax
  __int64 v25; // r8
  unsigned __int128 v26; // rax
  unsigned int v27; // r10d
  unsigned __int64 v28; // rax
  __int64 v29; // rax
  char *v30; // rcx
  int v31; // edx
  __int64 v32; // r9
  char v33; // al
  int v34; // ecx
  __int64 v35; // rax
  int v36; // ecx
  __int64 v37; // rcx
  __int64 v38; // r10
  __int64 v39; // r8
  _QWORD *v40; // rdx
  unsigned __int64 v41; // r9
  int v42; // ecx
  __int64 v43; // rax
  int v44; // r8d
  __int64 v45; // r10
  unsigned int v46; // esi
  __int64 v47; // r11
  __int64 v48; // r15
  void (__fastcall *v49)(_QWORD, _QWORD, unsigned __int64 *); // r12
  unsigned __int64 v50; // rcx
  unsigned __int128 v51; // rax
  unsigned __int64 v52; // r9
  unsigned __int64 v53; // rcx
  unsigned __int128 v54; // rax
  unsigned __int64 v55; // rcx
  unsigned __int128 v56; // rax
  __int64 v57; // rbx
  __int64 v58; // r14
  int v59; // r13d
  unsigned __int64 v60; // rcx
  unsigned __int128 v61; // rax
  int v62; // ecx
  __int64 v63; // rbx
  __int64 v64; // rdx
  __int64 v65; // r8
  _QWORD *v66; // rax
  __int64 v67; // r12
  unsigned __int64 v68; // r9
  __int64 *v69; // r10
  __int64 v70; // rdx
  __int64 v71; // rdx
  __int64 v72; // rcx
  _QWORD *v73; // rdx
  _QWORD *v74; // rax
  __int64 v75; // r8
  int v76; // ecx
  __int64 v77; // r11
  unsigned __int64 v78; // r9
  __int64 *v79; // r10
  __int64 v80; // rdx
  unsigned int v81; // esi
  _QWORD *v82; // rdx
  __int64 v83; // rax
  int v84; // ecx
  int v85; // ecx
  __int64 v86; // rcx
  __int64 v87; // r10
  __int64 v88; // r8
  _QWORD *v89; // rdx
  unsigned __int64 v90; // r9
  int v91; // ecx
  __int64 v92; // rax
  int v93; // esi
  unsigned __int64 v94; // r9
  const char *v95; // rax
  int v96; // r10d
  __int64 v97; // rbx
  __int64 v98; // r8
  int v99; // r11d
  __int64 v100; // rax
  __int64 v101; // r8
  unsigned __int128 v102; // rax
  int v103; // r12d
  __int64 v104; // rax
  int v105; // edx
  __int64 v106; // rax
  __int64 v107; // rax
  int v108; // ecx
  int v109; // ecx
  __int64 v110; // rcx
  __int64 v111; // r10
  __int64 v112; // r8
  _QWORD *v113; // rdx
  int v114; // ecx
  __int64 v115; // rax
  int v116; // ecx
  __int64 v117; // rcx
  __int64 v118; // r10
  __int64 v119; // rdx
  _QWORD *v120; // r8
  int v121; // ecx
  __int64 v122; // rax
  __int64 i38; // rsi
  __int64 v124; // rbx
  int v125; // ecx
  _QWORD *v126; // rax
  __int64 v127; // r14
  __int64 v128; // r10
  int v129; // r11d
  const char *v130; // rax
  __int64 v131; // r15
  __int64 v132; // r8
  unsigned int v133; // ebx
  __int64 v134; // rax
  __int64 v135; // r8
  unsigned __int128 v136; // rax
  unsigned int v137; // r10d
  unsigned __int64 v138; // rax
  __int64 v139; // rax
  __int64 v140; // r12
  __int64 v141; // rax
  int v142; // ecx
  __int64 v143; // rcx
  __int64 v144; // r10
  __int64 v145; // r8
  _QWORD *v146; // rdx
  const char *v147; // r14
  int v148; // r12d
  __int64 v149; // r13
  unsigned int v150; // eax
  int v151; // ecx
  unsigned int v152; // eax
  __int64 v153; // r9
  bool v154; // cf
  _QWORD *v155; // rcx
  int v156; // edx
  unsigned __int64 v157; // r8
  int v158; // ebx
  __int64 v159; // rbx
  int v160; // ecx
  _QWORD *v161; // rax
  __int64 v162; // rdx
  const char *i; // rdx
  unsigned __int64 v164; // rax
  unsigned __int64 j; // rcx
  __int64 v166; // rax
  int v167; // ecx
  __int64 v168; // r15
  int v169; // r13d
  int v170; // r9d
  int v171; // r8d
  unsigned int v172; // eax
  int v173; // ecx
  unsigned int v174; // eax
  __int64 v175; // r9
  _QWORD *v176; // rcx
  int v177; // edx
  unsigned __int64 v178; // r8
  int v179; // r15d
  __int64 v180; // r15
  _QWORD *v181; // rax
  int v182; // ecx
  __int64 v183; // rdx
  int v184; // r10d
  const char *v185; // rax
  __int64 v186; // r13
  unsigned __int64 v187; // r8
  unsigned int v188; // r11d
  __int64 v189; // rax
  __int64 v190; // r8
  unsigned __int128 v191; // rax
  unsigned int v192; // edx
  unsigned __int64 v193; // rax
  __int64 v194; // rax
  unsigned __int64 k; // rax
  int v196; // eax
  unsigned __int64 v197; // rcx
  unsigned __int64 v198; // rcx
  __int64 v199; // r15
  unsigned __int64 v200; // r14
  unsigned __int64 v201; // rcx
  unsigned __int128 v202; // rax
  __int64 v203; // rcx
  __int64 v204; // rax
  __int64 v205; // rbx
  __int64 m; // r15
  unsigned int *v207; // rax
  int v208; // ecx
  unsigned __int128 i29; // rax
  unsigned int v210; // ecx
  __int64 v211; // r8
  char *v212; // r13
  __int64 v213; // r10
  __int64 v214; // rax
  unsigned __int64 v215; // rcx
  unsigned __int128 v216; // rax
  unsigned __int64 v217; // rbx
  int v218; // eax
  int v219; // r10d
  const char *v220; // r14
  __int64 v221; // r8
  const char *v222; // rax
  int v223; // r11d
  __int64 i33; // r15
  unsigned int v225; // r10d
  unsigned __int64 v226; // rbx
  __int64 v227; // rax
  __int64 v228; // rbx
  char v229; // r11
  unsigned int v230; // r8d
  unsigned __int64 v231; // rax
  __int64 v232; // rax
  unsigned __int64 i34; // rax
  unsigned int v234; // ebx
  __int64 v235; // rcx
  __int64 v236; // r8
  unsigned __int8 v237; // r12
  unsigned __int64 v238; // r14
  unsigned __int64 v239; // r13
  unsigned __int64 v240; // r15
  unsigned int v241; // r8d
  char *v242; // r8
  __int64 v243; // rcx
  __int64 v244; // rax
  char v245; // cl
  char v246; // al
  __int64 v247; // rcx
  int v248; // ecx
  __int64 v249; // rcx
  __int64 v250; // r10
  __int64 v251; // r8
  int v252; // ecx
  __int64 v253; // rax
  __int64 v254; // r8
  unsigned __int8 v255; // r14
  unsigned __int64 v256; // rbx
  __int64 v257; // r12
  unsigned __int64 v258; // r15
  __int64 v259; // rcx
  int v260; // ecx
  __int64 v261; // rcx
  __int64 v262; // r10
  __int64 v263; // r8
  int v264; // ecx
  __int64 v265; // rax
  int v266; // eax
  unsigned int v267; // ecx
  int *v268; // rdi
  unsigned int *v269; // r15
  unsigned __int64 v270; // r12
  unsigned __int64 v271; // r13
  __int64 v272; // r14
  _QWORD *v273; // r8
  const char *v274; // rax
  int v275; // r10d
  unsigned __int64 v276; // r11
  unsigned __int64 v277; // rbx
  unsigned int v278; // r9d
  __int64 v279; // rax
  __int64 v280; // rbx
  unsigned __int64 v281; // rcx
  unsigned int v282; // edx
  unsigned __int64 v283; // rax
  __int64 v284; // rax
  unsigned int v285; // ebx
  __int64 v286; // rcx
  __int64 v287; // r8
  unsigned __int8 v288; // r12
  unsigned __int64 v289; // r14
  unsigned __int64 v290; // r13
  int v291; // eax
  __int64 v292; // rax
  int v293; // ecx
  __int64 v294; // rcx
  __int64 v295; // r10
  __int64 v296; // r8
  _QWORD *v297; // rdx
  __int64 v298; // rax
  int v299; // ecx
  bool v300; // zf
  __int64 v301; // r15
  __int64 v302; // rbx
  int v303; // ecx
  __int64 v304; // rcx
  __int64 v305; // r10
  __int64 v306; // r8
  _QWORD *v307; // rdx
  unsigned __int64 v308; // r9
  int v309; // ecx
  __int64 v310; // rax
  int v311; // ecx
  __int64 v312; // rcx
  __int64 v313; // r10
  __int64 v314; // r8
  _QWORD *v315; // rdx
  unsigned __int64 v316; // r9
  int v317; // ecx
  __int64 v318; // rax
  _QWORD *v319; // r14
  __int64 v320; // r8
  _QWORD *v321; // r9
  const char *v322; // rax
  int v323; // r10d
  __int64 v324; // r15
  unsigned __int64 v325; // rbx
  unsigned int v326; // r11d
  __int64 v327; // rax
  __int64 v328; // rbx
  unsigned __int128 v329; // rax
  unsigned int v330; // r8d
  unsigned __int64 v331; // rax
  __int64 v332; // rax
  unsigned __int64 i28; // rax
  unsigned int v334; // ebx
  BOOL v335; // r12d
  __int64 v336; // rcx
  __int64 v337; // rdx
  __int64 v338; // r8
  unsigned __int8 v339; // r15
  unsigned __int64 v340; // r14
  unsigned __int64 v341; // r13
  int v342; // eax
  __int64 v343; // rax
  __int64 v344; // rcx
  int v345; // ecx
  __int64 v346; // rcx
  __int64 v347; // r10
  __int64 v348; // r8
  _QWORD *v349; // rdx
  unsigned __int64 v350; // r9
  __int64 v351; // rcx
  int v352; // ecx
  __int64 v353; // rcx
  __int64 v354; // r10
  __int64 v355; // r8
  _QWORD *v356; // rdx
  unsigned __int64 v357; // r9
  int v358; // ecx
  __int64 v359; // rax
  int v360; // ecx
  __int64 v361; // rax
  void (*v362)(void); // rax
  unsigned int i27; // ebx
  __int64 v364; // r9
  unsigned __int64 v365; // rdx
  __int64 v366; // rcx
  __int64 v367; // r8
  unsigned __int64 v368; // rdx
  unsigned __int64 v369; // rcx
  int v370; // ecx
  __int64 v371; // rcx
  __int64 v372; // r10
  __int64 v373; // r8
  _QWORD *v374; // rdx
  unsigned __int64 v375; // r9
  int v376; // ecx
  __int64 v377; // rax
  int v378; // ecx
  unsigned __int64 v379; // rcx
  unsigned __int128 v380; // rax
  void (*v381)(void); // rax
  __int64 v382; // rbx
  unsigned int v383; // ecx
  unsigned __int8 v384; // r14
  volatile signed __int8 **v385; // r8
  volatile signed __int8 *v386; // rdx
  unsigned __int64 v387; // r15
  __int64 v388; // r13
  unsigned __int64 v389; // rbx
  __int64 v390; // r12
  _BYTE *v391; // rbx
  char v392; // al
  int *v393; // rcx
  int v394; // ecx
  __int64 v395; // rcx
  __int64 v396; // r10
  __int64 v397; // r8
  _QWORD *v398; // rdx
  unsigned __int64 v399; // r9
  int v400; // ecx
  __int64 v401; // rax
  __int64 v402; // rcx
  __int64 v403; // rax
  int *v404; // rcx
  int v405; // ecx
  __int64 v406; // rcx
  __int64 v407; // r10
  __int64 v408; // r8
  _QWORD *v409; // rdx
  unsigned __int64 v410; // r9
  int *v411; // rcx
  int v412; // ecx
  __int64 v413; // rcx
  __int64 v414; // r10
  _QWORD *v415; // rdx
  unsigned __int64 v416; // r9
  int v417; // ecx
  __int64 v418; // rax
  void (*v419)(void); // rax
  unsigned int v420; // r13d
  __int64 v421; // rbx
  unsigned int v422; // ecx
  void (__fastcall *v423)(__int64, _QWORD); // rax
  _QWORD **v424; // r15
  _QWORD *v425; // r14
  int *v426; // rdi
  unsigned __int64 v427; // rbx
  int v428; // ecx
  __int64 v429; // rcx
  __int64 v430; // r10
  __int64 v431; // r8
  _QWORD *v432; // rdx
  unsigned __int64 v433; // r9
  int v434; // ecx
  __int64 v435; // rax
  __int64 v436; // rcx
  _QWORD **v437; // r13
  _QWORD *v438; // r14
  int *v439; // rdi
  int v440; // edx
  char *v441; // rbx
  int v442; // ecx
  __int64 v443; // rcx
  __int64 v444; // r10
  __int64 v445; // r8
  _QWORD *v446; // rdx
  unsigned __int64 v447; // r9
  int v448; // ecx
  __int64 v449; // rax
  const char *v450; // r14
  __int64 v451; // r8
  const char *v452; // rax
  int v453; // r10d
  __int64 i23; // r15
  unsigned __int64 v455; // rbx
  unsigned int v456; // r11d
  __int64 v457; // rax
  __int64 v458; // rbx
  char v459; // r10
  unsigned int v460; // r8d
  unsigned __int64 v461; // rax
  __int64 v462; // rax
  unsigned __int64 i24; // rax
  unsigned int v464; // ebx
  BOOL v465; // r12d
  __int64 v466; // rcx
  __int64 v467; // r8
  unsigned __int8 v468; // r15
  unsigned __int64 v469; // r14
  unsigned __int64 v470; // r13
  __int64 v471; // rcx
  int v472; // ecx
  __int64 v473; // rcx
  __int64 v474; // r10
  __int64 v475; // r8
  int v476; // ecx
  __int64 v477; // rax
  __int64 v478; // r15
  __int64 v479; // r14
  unsigned __int64 v480; // rbx
  __int64 v481; // rax
  int v482; // ecx
  __int64 v483; // rcx
  __int64 v484; // r10
  __int64 v485; // r8
  _QWORD *v486; // rdx
  unsigned __int64 v487; // r9
  int v488; // ecx
  __int64 v489; // rax
  unsigned __int64 v490; // rcx
  int v491; // ecx
  __int64 v492; // rcx
  __int64 v493; // r10
  __int64 v494; // r8
  _QWORD *v495; // rdx
  unsigned __int64 v496; // r9
  int v497; // ecx
  __int64 v498; // rax
  const char *v499; // r14
  __int64 v500; // r8
  const char *v501; // rax
  int v502; // r11d
  __int64 i5; // r15
  unsigned __int64 v504; // rbx
  unsigned int v505; // r10d
  __int64 v506; // rax
  __int64 v507; // rbx
  char v508; // r11
  unsigned int v509; // r8d
  unsigned __int64 v510; // rax
  __int64 v511; // rax
  unsigned __int64 i6; // rax
  unsigned int v513; // ebx
  BOOL v514; // r12d
  __int64 v515; // rcx
  __int64 v516; // r8
  unsigned __int8 v517; // r15
  unsigned __int64 v518; // r14
  unsigned __int64 v519; // r13
  __int64 v520; // rcx
  int v521; // ecx
  __int64 v522; // rcx
  __int64 v523; // r10
  __int64 v524; // r8
  int v525; // ecx
  __int64 v526; // rax
  __int64 **v527; // r12
  unsigned int v528; // eax
  char *v529; // rdi
  __int64 v530; // r13
  char *v531; // rbx
  __int64 v532; // r15
  __int64 v533; // r14
  _QWORD *v534; // rcx
  int v535; // edx
  __int64 v536; // r8
  char v537; // al
  __int64 v538; // rax
  __int64 v539; // rax
  int v540; // ecx
  __int64 v541; // rcx
  __int64 v542; // r10
  __int64 v543; // r8
  _QWORD *v544; // rdx
  unsigned __int64 v545; // r9
  int v546; // ecx
  __int64 v547; // rax
  __int64 v548; // rax
  __int64 (*v549)(void); // rax
  void (__fastcall *v550)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // r12
  __int64 v551; // rax
  unsigned int v552; // r14d
  __int64 (*v553)(void); // rax
  void (__fastcall *v554)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // rbx
  unsigned int v555; // r8d
  unsigned __int64 v556; // r8
  _QWORD *v557; // r14
  __int64 v558; // r9
  _QWORD *v559; // r10
  const char *v560; // rax
  int v561; // r11d
  __int64 v562; // r15
  unsigned __int64 v563; // r8
  unsigned int v564; // ebx
  __int64 v565; // rax
  __int64 v566; // r8
  unsigned int v567; // r9d
  unsigned __int64 v568; // rax
  __int64 v569; // rax
  unsigned __int64 v570; // rax
  unsigned int v571; // r10d
  const char *v572; // r14
  unsigned int v573; // r8d
  unsigned __int64 v574; // rcx
  int v575; // ebx
  const char *v576; // rax
  __int64 v577; // r15
  const char *v578; // rcx
  unsigned __int64 v579; // r8
  unsigned int v580; // r11d
  __int64 v581; // rax
  __int64 v582; // r8
  unsigned __int64 v583; // rcx
  __int64 v584; // rax
  int v585; // ecx
  __int64 v586; // rcx
  __int64 v587; // r10
  unsigned int v588; // r10d
  unsigned __int64 v589; // rax
  __int64 v590; // rax
  unsigned __int64 i7; // rax
  _QWORD *v592; // rcx
  __int64 v593; // r8
  __int64 v594; // rax
  __int64 v595; // rcx
  int v596; // ecx
  __int64 v597; // rcx
  __int64 v598; // r10
  _QWORD *v599; // r14
  __int64 v600; // r8
  _QWORD *v601; // r9
  const char *v602; // rax
  int v603; // r10d
  __int64 v604; // r15
  unsigned __int64 v605; // rbx
  unsigned int v606; // r11d
  __int64 v607; // rax
  __int64 v608; // rbx
  unsigned __int128 v609; // rax
  unsigned int v610; // r8d
  unsigned __int64 v611; // rax
  __int64 v612; // rax
  unsigned __int64 i8; // rax
  unsigned int v614; // ebx
  BOOL v615; // r12d
  __int64 v616; // rcx
  __int64 v617; // rdx
  __int64 v618; // r8
  unsigned __int8 v619; // r15
  unsigned __int64 v620; // r14
  unsigned __int64 v621; // r13
  int v622; // eax
  unsigned int v623; // r9d
  const char *v624; // r14
  const char *v625; // r10
  int v626; // r11d
  const char *v627; // rax
  __int64 v628; // r15
  const char *v629; // rcx
  unsigned __int64 v630; // r8
  unsigned int v631; // ebx
  __int64 v632; // rax
  __int64 v633; // r8
  char v634; // r11
  __int64 v635; // rcx
  int v636; // ecx
  __int64 v637; // rcx
  __int64 v638; // r10
  __int64 v639; // r8
  _QWORD *v640; // rdx
  unsigned __int64 v641; // r9
  int v642; // ecx
  __int64 v643; // rax
  unsigned __int64 v644; // rax
  __int64 v645; // rax
  unsigned __int64 i9; // rax
  __int64 v647; // rax
  unsigned int v648; // r8d
  int v649; // ecx
  __int64 v650; // rcx
  __int64 v651; // r10
  __int64 v652; // r14
  _QWORD *v653; // r13
  void (*v654)(void); // rax
  __int64 v655; // rbx
  unsigned int v656; // ecx
  void (__fastcall *v657)(__int64, _QWORD); // rax
  _QWORD **v658; // r9
  __int64 v659; // r10
  _QWORD *v660; // r8
  __int64 v661; // rdx
  __int64 v662; // rax
  _QWORD **v663; // r12
  _QWORD *v664; // r14
  __int64 v665; // rdi
  int v666; // edx
  unsigned __int8 v667; // r13
  char *v668; // rbx
  __int64 v669; // rcx
  int *v670; // rcx
  int v671; // ecx
  __int64 v672; // rcx
  __int64 v673; // r10
  __int64 v674; // r8
  _QWORD *v675; // rdx
  unsigned __int64 v676; // r9
  int v677; // ecx
  __int64 v678; // rax
  _QWORD **v679; // r10
  _QWORD *i4; // r9
  int v681; // r13d
  __int64 v682; // r14
  __int64 v683; // rbx
  void (*v684)(void); // rax
  unsigned int v685; // ecx
  unsigned __int8 v686; // r15
  volatile signed __int8 **v687; // r8
  volatile signed __int8 *v688; // rdx
  _QWORD **v689; // r12
  _QWORD *v690; // r14
  __int64 v691; // rax
  int *v692; // rdi
  char *v693; // rcx
  __int64 v694; // rbx
  int v695; // ecx
  __int64 v696; // rcx
  __int64 v697; // r10
  __int64 v698; // r8
  _QWORD *v699; // rdx
  unsigned __int64 v700; // r9
  int v701; // ecx
  __int64 v702; // rax
  _QWORD **v703; // r12
  __int64 v704; // rcx
  __int64 v705; // rdx
  unsigned int **v706; // rax
  __int64 v707; // rcx
  __int64 v708; // r13
  _QWORD *v709; // rax
  __int64 v710; // r8
  unsigned __int64 v711; // rcx
  __int64 v712; // rax
  int v713; // ebx
  unsigned __int64 v714; // rcx
  unsigned __int128 v715; // rax
  unsigned __int64 v716; // r14
  __int64 v717; // rax
  __int64 v718; // r11
  int v719; // r10d
  _QWORD *v720; // r9
  unsigned __int64 v721; // r8
  unsigned __int64 v722; // rcx
  unsigned __int128 v723; // rax
  unsigned __int64 v724; // rcx
  unsigned __int128 v725; // rax
  unsigned __int64 v726; // rdx
  unsigned int v727; // ebx
  _QWORD *v728; // r8
  unsigned __int64 v729; // rcx
  unsigned __int128 v730; // rax
  unsigned __int64 v731; // rcx
  unsigned __int64 v732; // rcx
  unsigned __int64 v733; // rdx
  __int64 v734; // rbx
  _QWORD *v735; // rdx
  unsigned int v736; // r14d
  int v737; // eax
  __int64 v738; // rcx
  unsigned __int64 v739; // r15
  int v740; // r14d
  unsigned __int64 v741; // r12
  int *v742; // rdi
  unsigned __int64 v743; // r10
  int v744; // r8d
  int v745; // edx
  int v746; // ecx
  int v747; // ecx
  __int64 v748; // rcx
  __int64 v749; // r10
  __int64 v750; // r8
  _QWORD *v751; // rdx
  unsigned __int64 v752; // r9
  int v753; // ecx
  __int64 v754; // rax
  unsigned __int64 v755; // rcx
  int v756; // ecx
  int v757; // ecx
  int v758; // ecx
  int v759; // ecx
  int v760; // ecx
  char *v761; // rbx
  int v762; // r13d
  unsigned int i12; // r14d
  _QWORD *v764; // rcx
  int v765; // edx
  __int64 v766; // r8
  char v767; // al
  __int64 v768; // rax
  __int64 v769; // rcx
  int v770; // ecx
  __int64 v771; // rcx
  __int64 v772; // r10
  __int64 v773; // r8
  _QWORD *v774; // rdx
  unsigned __int64 v775; // r9
  int v776; // ecx
  __int64 v777; // rax
  __int64 (__fastcall *v778)(_QWORD); // rax
  __int64 v779; // r15
  char *v780; // rdi
  char *v781; // rbx
  int v782; // r12d
  __int64 v783; // r14
  _QWORD *v784; // rcx
  int v785; // edx
  __int64 v786; // r8
  char v787; // al
  __int64 v788; // rax
  __int64 v789; // rax
  int v790; // ecx
  __int64 v791; // rcx
  __int64 v792; // r10
  __int64 v793; // r8
  _QWORD *v794; // rdx
  unsigned __int64 v795; // r9
  int v796; // ecx
  __int64 v797; // rax
  __int64 (__fastcall *v798)(__int64); // rax
  ULONG_PTR *v799; // rax
  ULONG_PTR v800; // rbx
  int *v801; // rcx
  __int64 v802; // rax
  __int64 v803; // rax
  __int64 v804; // rax
  int v805; // ecx
  __int64 v806; // rcx
  __int64 v807; // r10
  __int64 v808; // r8
  int v809; // ecx
  __int64 v810; // rax
  __int64 (__fastcall *v811)(ULONG_PTR, char *); // rax
  __int64 v812; // rax
  ULONG_PTR v813; // r15
  unsigned int v814; // r14d
  __int64 v815; // r12
  int v816; // ecx
  int v817; // ecx
  unsigned int *v818; // rax
  __int64 v819; // r8
  __int64 v820; // rdx
  unsigned int v821; // ebx
  unsigned int v822; // ecx
  __int64 v823; // r11
  unsigned int v824; // r10d
  __int64 v825; // r9
  __int64 v826; // rax
  int v827; // eax
  int v828; // eax
  char **v829; // rbx
  __int64 v830; // rcx
  __int64 v831; // rdx
  char *v832; // rdx
  __int64 v833; // r9
  ULONG_PTR v834; // rax
  __int64 v835; // rdx
  __int64 (__fastcall *v836)(ULONG_PTR, __int64, _QWORD, unsigned int *); // rax
  __int64 v837; // rdx
  __int64 v838; // rcx
  unsigned int v839; // eax
  __int64 v840; // rdx
  unsigned int v841; // eax
  __int64 v842; // rcx
  unsigned int v843; // eax
  __int64 v844; // rbx
  int v845; // ecx
  __int64 v846; // rcx
  __int64 v847; // r10
  __int64 v848; // r8
  _QWORD *v849; // rdx
  int v850; // ecx
  __int64 v851; // rax
  __int64 v852; // rcx
  __int64 v853; // rax
  int v854; // r8d
  __int64 v855; // r15
  unsigned int v856; // eax
  __int64 v857; // r14
  int v858; // ecx
  unsigned int v859; // eax
  __int64 v860; // r9
  _QWORD *v861; // rcx
  int v862; // r8d
  unsigned __int64 v863; // rdx
  int v864; // ebx
  __int64 v865; // r12
  const char **v866; // rdi
  unsigned int *v867; // rsi
  __int64 v868; // r13
  __int64 v869; // rdx
  const char *v870; // r15
  int v871; // ecx
  _QWORD *v872; // rax
  const char *v873; // rax
  int v874; // r11d
  __int64 v875; // rbx
  unsigned __int64 v876; // r8
  unsigned int v877; // r10d
  __int64 v878; // rax
  __int64 v879; // r8
  unsigned __int128 v880; // rax
  unsigned int v881; // edx
  unsigned __int64 v882; // rax
  __int64 v883; // rax
  unsigned __int64 i13; // rax
  _DWORD *v885; // rbx
  ULONG_PTR v886; // r12
  _BYTE *v887; // rbx
  unsigned int v888; // r9d
  _QWORD *v889; // r15
  _DWORD *v890; // r13
  int v891; // ecx
  _QWORD *v892; // rax
  __int64 v893; // rdx
  __int64 i14; // rdx
  _QWORD *v895; // r10
  const char *v896; // rax
  int v897; // r11d
  __int64 v898; // r12
  unsigned __int64 v899; // rcx
  ULONG_PTR v900; // r8
  unsigned int v901; // r14d
  __int64 v902; // rax
  __int64 v903; // r8
  unsigned __int128 v904; // rax
  char v905; // r11
  unsigned __int64 v906; // rax
  __int64 v907; // rax
  ULONG_PTR i15; // rax
  __int64 v909; // r14
  unsigned int v910; // eax
  __int64 v911; // r13
  int v912; // ecx
  unsigned int v913; // eax
  __int64 v914; // r8
  int v915; // edx
  unsigned __int64 v916; // rcx
  int v917; // ebx
  int v918; // ecx
  __int64 v919; // r14
  _QWORD *v920; // rax
  __int64 v921; // rdx
  __int64 v922; // r12
  unsigned int v923; // r15d
  int v924; // r10d
  __int64 v925; // rbx
  const char *v926; // rax
  unsigned int v927; // r11d
  __int64 v928; // rax
  __int64 v929; // r8
  unsigned __int128 v930; // rax
  unsigned __int64 v931; // rax
  __int64 v932; // rax
  ULONG_PTR i16; // rax
  _DWORD *v934; // rbx
  ULONG_PTR v935; // r15
  __int64 v936; // r14
  __int64 v937; // rax
  int v938; // ecx
  _QWORD *v939; // rax
  _QWORD *v940; // rax
  ULONG_PTR v941; // r14
  __int64 v942; // rax
  unsigned __int16 v943; // r10
  int v944; // ecx
  __int64 v945; // rcx
  __int64 v946; // r10
  _QWORD *v947; // rdx
  __int64 v948; // rax
  int v949; // ecx
  unsigned int *v950; // r13
  _DWORD *v951; // r12
  unsigned int v952; // ecx
  _BYTE *v953; // rbx
  unsigned __int64 v954; // r11
  _DWORD *v955; // r8
  unsigned int v956; // edx
  unsigned int v957; // edx
  unsigned int v958; // eax
  __int64 v959; // rax
  unsigned int v960; // r14d
  unsigned int v961; // r12d
  unsigned int v962; // r14d
  unsigned int *v963; // rax
  unsigned int *v964; // r15
  ULONG_PTR v965; // r8
  unsigned int v966; // eax
  int v967; // ecx
  __int64 v968; // rcx
  __int64 v969; // r10
  __int64 v970; // r8
  _QWORD *v971; // rdx
  unsigned __int64 v972; // r9
  int v973; // ecx
  __int64 v974; // rax
  unsigned int *v975; // rax
  unsigned int v976; // eax
  int v977; // ecx
  __int64 v978; // rcx
  __int64 v979; // r10
  __int64 v980; // r8
  _QWORD *v981; // rdx
  unsigned __int64 v982; // r9
  int v983; // ecx
  __int64 v984; // rax
  __int64 v985; // r15
  int v986; // ecx
  __int64 v987; // rcx
  __int64 v988; // r10
  _QWORD *v989; // rdx
  int v990; // ecx
  __int64 v991; // rax
  int v992; // ecx
  __int64 v993; // rcx
  __int64 v994; // r10
  _QWORD *v995; // rdx
  int v996; // ecx
  __int64 v997; // rcx
  __int64 v998; // r10
  _QWORD *v999; // rdx
  int v1000; // edx
  __int64 v1001; // r14
  unsigned int v1002; // ecx
  int v1003; // ecx
  unsigned int v1004; // eax
  __int64 v1005; // r8
  int v1006; // edx
  unsigned __int64 v1007; // rcx
  int v1008; // ebx
  __int64 v1009; // rdx
  int v1010; // ecx
  _QWORD *v1011; // rax
  __int64 v1012; // r8
  unsigned int *v1013; // rbx
  unsigned __int64 v1014; // rcx
  unsigned __int64 i17; // rax
  ULONG_PTR v1016; // rax
  int v1017; // ecx
  int i21; // r15d
  _DWORD *v1019; // r11
  __int64 v1020; // rax
  _DWORD *v1021; // r8
  unsigned __int64 v1022; // rax
  __int64 v1023; // rdx
  _DWORD *v1024; // rax
  __int64 v1025; // rcx
  int v1026; // ecx
  __int16 *v1027; // rax
  __int16 v1028; // cx
  char *v1029; // r9
  int v1030; // r10d
  char *v1031; // r11
  char *v1032; // rdx
  char *v1033; // rbx
  char *v1034; // r8
  char v1035; // cl
  char v1036; // al
  unsigned int v1037; // edx
  char *v1038; // r8
  __int64 v1039; // rcx
  __int64 v1040; // rax
  char v1041; // cl
  char v1042; // al
  int v1043; // r8d
  char *v1044; // rdx
  char v1045; // cl
  char v1046; // al
  int v1047; // r8d
  char *v1048; // rdx
  char v1049; // cl
  char v1050; // al
  int v1051; // ecx
  unsigned int v1052; // r10d
  __int64 v1053; // rdx
  unsigned int v1054; // r14d
  unsigned __int64 v1055; // r8
  unsigned int v1056; // r14d
  unsigned int v1057; // eax
  unsigned int v1058; // r12d
  unsigned __int64 v1059; // rbx
  unsigned int *v1060; // rdx
  _QWORD *v1061; // r8
  _QWORD *v1062; // r11
  int v1063; // r15d
  const char *v1064; // rax
  __int64 v1065; // r14
  unsigned __int64 v1066; // rcx
  unsigned __int64 v1067; // r8
  unsigned int v1068; // r10d
  __int64 v1069; // rax
  __int64 v1070; // r8
  unsigned __int64 v1071; // rcx
  unsigned __int64 v1072; // rax
  __int64 v1073; // rax
  unsigned __int64 i18; // rax
  unsigned int v1075; // ecx
  unsigned int *v1076; // rax
  unsigned int v1077; // r12d
  char v1078; // r8
  unsigned int v1079; // r15d
  __int64 v1080; // r14
  int v1081; // ecx
  ULONG_PTR v1082; // rdx
  __int64 v1083; // rcx
  __int64 v1084; // r10
  __int64 v1085; // r8
  _QWORD *v1086; // rdx
  unsigned __int64 v1087; // r9
  __int64 v1088; // rax
  int v1089; // ecx
  unsigned int *v1090; // rdx
  _QWORD *v1091; // r8
  unsigned __int64 v1092; // rbx
  _QWORD *v1093; // r11
  int v1094; // r14d
  const char *v1095; // rax
  __int64 v1096; // r15
  unsigned __int64 v1097; // rcx
  unsigned __int64 v1098; // r8
  unsigned int v1099; // r10d
  __int64 v1100; // rax
  __int64 v1101; // r8
  unsigned __int128 v1102; // rax
  unsigned __int64 v1103; // rax
  __int64 v1104; // rax
  unsigned __int64 i19; // rax
  _BYTE *v1106; // rax
  _DWORD *v1107; // rax
  unsigned int *v1108; // rdx
  _QWORD *v1109; // r8
  unsigned int v1110; // eax
  unsigned __int64 v1111; // rbx
  unsigned int i20; // r10d
  _QWORD *v1113; // r10
  int v1114; // r14d
  const char *v1115; // rax
  __int64 v1116; // r15
  unsigned __int64 v1117; // rcx
  unsigned __int64 v1118; // r8
  unsigned int v1119; // r11d
  __int64 v1120; // rax
  __int64 v1121; // r8
  unsigned __int128 v1122; // rax
  unsigned __int64 v1123; // rax
  __int64 v1124; // rax
  unsigned __int64 i22; // rax
  _DWORD *v1126; // r11
  __int64 v1127; // r8
  __int64 v1128; // rax
  char *v1129; // rdx
  char *v1130; // r14
  unsigned int v1131; // r12d
  __int64 v1132; // r13
  __int64 v1133; // rbx
  __int64 (__fastcall *v1134)(__int64); // rax
  __int64 v1135; // r15
  _QWORD *v1136; // rcx
  __int64 v1137; // r8
  __int64 v1138; // rax
  __int64 v1139; // rax
  int v1140; // ecx
  __int64 v1141; // rcx
  __int64 v1142; // r10
  __int64 v1143; // r8
  int v1144; // ecx
  __int64 v1145; // rax
  char *v1146; // rbx
  unsigned __int8 v1147; // r15
  __int64 i11; // r14
  _QWORD *v1149; // rcx
  int v1150; // edx
  __int64 v1151; // r8
  char v1152; // al
  __int64 v1153; // rax
  __int64 v1154; // rax
  int v1155; // ecx
  __int64 v1156; // rcx
  __int64 v1157; // r10
  __int64 v1158; // r8
  _QWORD *v1159; // rdx
  unsigned __int64 v1160; // r9
  __int64 v1161; // rax
  int v1162; // ecx
  char *v1163; // rbx
  __int64 i10; // r14
  _QWORD *v1165; // rcx
  int v1166; // edx
  __int64 v1167; // r8
  char v1168; // al
  __int64 v1169; // rax
  __int64 v1170; // rax
  int v1171; // ecx
  __int64 v1172; // rcx
  __int64 v1173; // r10
  __int64 v1174; // r8
  _QWORD *v1175; // rdx
  unsigned __int64 v1176; // r9
  int v1177; // ecx
  __int64 v1178; // rax
  int v1179; // eax
  int v1180; // ebx
  unsigned __int64 v1181; // rbx
  unsigned __int64 v1182; // r8
  __int64 v1183; // rcx
  int v1184; // ecx
  __int64 v1185; // rcx
  __int64 v1186; // r10
  __int64 v1187; // r8
  int v1188; // ecx
  __int64 v1189; // rax
  __int64 v1190; // rcx
  __int64 v1191; // r8
  char *v1192; // r11
  unsigned int v1193; // kr00_4
  unsigned __int64 v1194; // r10
  char *v1195; // r12
  _DWORD *v1196; // rdi
  unsigned __int64 v1197; // r15
  unsigned int v1198; // r14d
  int v1199; // r11d
  const char *v1200; // rax
  unsigned __int64 v1201; // rbx
  unsigned __int64 v1202; // rcx
  unsigned __int64 v1203; // r8
  unsigned int v1204; // r10d
  __int64 v1205; // rax
  __int64 v1206; // r8
  unsigned __int128 v1207; // rax
  unsigned int v1208; // edx
  unsigned __int64 v1209; // rax
  __int64 v1210; // rax
  unsigned __int64 i2; // rax
  unsigned int v1212; // r13d
  __int64 v1213; // rcx
  unsigned __int8 v1214; // r14
  unsigned __int64 v1215; // rbx
  __int64 v1216; // r12
  unsigned __int64 v1217; // r15
  int v1218; // eax
  int v1219; // edx
  __int64 v1220; // rcx
  int v1221; // ecx
  __int64 v1222; // rcx
  __int64 v1223; // r10
  __int64 v1224; // r8
  _QWORD *v1225; // rdx
  int v1226; // ecx
  __int64 v1227; // rax
  __int64 v1228; // rcx
  int *v1229; // rdi
  int *v1230; // r15
  __int64 v1231; // r13
  unsigned __int64 v1232; // r12
  unsigned int v1233; // r14d
  _QWORD *v1234; // r8
  int v1235; // r10d
  const char *v1236; // rax
  unsigned __int64 v1237; // r11
  unsigned __int64 v1238; // rcx
  unsigned __int64 v1239; // rbx
  unsigned int v1240; // r9d
  __int64 v1241; // rax
  __int64 v1242; // rbx
  unsigned __int64 v1243; // rcx
  unsigned int v1244; // edx
  unsigned __int64 v1245; // rax
  __int64 v1246; // rax
  unsigned __int64 i3; // rax
  unsigned int v1248; // ebx
  __int64 v1249; // rcx
  unsigned __int8 v1250; // r15
  unsigned __int64 v1251; // r14
  __int64 v1252; // r13
  unsigned __int64 v1253; // r12
  int v1254; // eax
  __int64 v1255; // rax
  int v1256; // ecx
  __int64 v1257; // rcx
  __int64 v1258; // r10
  __int64 v1259; // r8
  _QWORD *v1260; // rdx
  int v1261; // ecx
  __int64 v1262; // rax
  __int64 v1263; // rcx
  __int64 v1264; // r9
  _QWORD *v1265; // r11
  int v1266; // r14d
  _QWORD *v1267; // r10
  __int64 v1268; // r15
  const char *v1269; // rax
  __int64 v1270; // r8
  unsigned int v1271; // ebx
  __int64 v1272; // rax
  __int64 v1273; // r8
  unsigned __int64 v1274; // rcx
  __int64 v1275; // rax
  __int64 v1276; // rdx
  __int64 v1277; // rbx
  __int64 v1278; // r8
  __int64 v1279; // rcx
  int v1280; // ecx
  __int64 v1281; // rcx
  __int64 v1282; // r10
  int v1283; // ecx
  __int64 v1284; // rcx
  __int64 v1285; // r10
  _QWORD *v1286; // r14
  __int64 v1287; // r8
  _QWORD *v1288; // r9
  const char *v1289; // rax
  int v1290; // r10d
  __int64 v1291; // r15
  unsigned __int64 v1292; // rbx
  unsigned int v1293; // r11d
  __int64 v1294; // rdx
  __int64 v1295; // rax
  __int64 v1296; // rbx
  unsigned __int128 v1297; // rax
  char v1298; // r10
  __int64 v1299; // r8
  unsigned __int64 v1300; // rax
  __int64 v1301; // rax
  unsigned __int64 n; // rax
  unsigned int v1303; // ebx
  BOOL v1304; // r12d
  __int64 v1305; // rcx
  unsigned __int8 CurrentIrql; // r15
  unsigned __int64 v1307; // r14
  unsigned __int64 v1308; // r13
  int v1309; // eax
  __int64 v1310; // rcx
  int v1311; // ecx
  __int64 v1312; // rcx
  __int64 v1313; // r10
  int v1314; // ecx
  __int64 v1315; // rax
  __int64 v1316; // rcx
  unsigned __int8 v1317; // r14
  unsigned int *v1318; // rcx
  unsigned int *v1319; // rbx
  char v1320; // r15
  unsigned __int64 v1321; // r12
  __int64 v1322; // rdx
  char *v1323; // r8
  unsigned int *v1324; // r9
  __int64 v1325; // rcx
  __int64 v1326; // rax
  char v1327; // cl
  char v1328; // al
  int v1329; // ecx
  int v1330; // eax
  __int64 v1331; // rcx
  __int64 v1332; // r10
  __int64 v1333; // r8
  _QWORD *v1334; // rdx
  unsigned __int64 v1335; // r9
  int v1336; // ecx
  __int64 v1337; // rax
  int v1338; // ecx
  __int64 v1339; // rcx
  __int64 v1340; // r10
  __int64 v1341; // r8
  _QWORD *v1342; // rdx
  unsigned __int64 v1343; // r9
  int v1344; // ecx
  __int64 v1345; // rax
  __int64 v1346; // rcx
  unsigned __int8 v1347; // r15
  unsigned int *v1348; // rcx
  unsigned int *v1349; // rbx
  unsigned __int64 v1350; // rax
  unsigned __int64 v1351; // r14
  unsigned __int64 v1352; // rcx
  unsigned __int64 v1353; // rdx
  int v1354; // ecx
  __int64 v1355; // rcx
  __int64 v1356; // r10
  const char *v1357; // r14
  __int64 v1358; // r8
  const char *v1359; // rax
  int v1360; // r11d
  __int64 ii; // r15
  unsigned __int64 v1362; // rbx
  unsigned int v1363; // r10d
  __int64 v1364; // rax
  __int64 v1365; // rbx
  unsigned __int64 v1366; // rcx
  unsigned int v1367; // r8d
  unsigned __int64 v1368; // rax
  __int64 v1369; // rax
  unsigned __int64 jj; // rax
  unsigned int v1371; // ebx
  BOOL v1372; // r12d
  __int64 v1373; // rcx
  __int64 v1374; // r8
  unsigned __int8 v1375; // r15
  unsigned __int64 v1376; // r14
  unsigned __int64 v1377; // r13
  __int64 v1378; // rcx
  int v1379; // ecx
  __int64 v1380; // rcx
  __int64 v1381; // r10
  __int64 v1382; // r8
  int v1383; // ecx
  __int64 v1384; // rax
  int v1385; // eax
  __int64 v1386; // rbx
  __int64 v1387; // rcx
  __int64 v1388; // rax
  __int64 v1389; // rcx
  int v1390; // ecx
  __int64 v1391; // rcx
  __int64 v1392; // r10
  __int64 v1393; // r8
  int v1394; // ecx
  __int64 v1395; // rax
  __int64 v1396; // rcx
  __int64 v1397; // rax
  __int64 v1398; // rcx
  int v1399; // ecx
  __int64 v1400; // rcx
  __int64 v1401; // r10
  __int64 v1402; // rbx
  __int64 v1403; // rcx
  __int64 v1404; // rbx
  int v1405; // r14d
  __int64 v1406; // rbx
  __int64 (__fastcall *v1407)(_QWORD); // rax
  char v1408; // r12
  __int64 v1409; // r14
  unsigned __int64 v1410; // rbx
  int *v1411; // rdx
  int v1412; // ecx
  __int64 v1413; // rcx
  __int64 v1414; // r10
  __int64 v1415; // r8
  _QWORD *v1416; // rdx
  unsigned __int64 v1417; // r9
  int v1418; // ecx
  __int64 v1419; // rax
  char v1420; // r14
  int v1421; // ecx
  __int64 v1422; // rcx
  __int64 v1423; // r10
  __int64 v1424; // r8
  _QWORD *v1425; // rdx
  unsigned __int64 v1426; // r9
  int v1427; // ecx
  __int64 v1428; // rax
  __int64 v1429; // r15
  unsigned __int8 v1430; // di
  unsigned __int64 v1431; // r9
  int *v1432; // rdx
  __int64 v1433; // r8
  unsigned __int64 v1434; // rbx
  int v1435; // ecx
  __int64 v1436; // rcx
  __int64 v1437; // r10
  __int64 v1438; // r8
  _QWORD *v1439; // rdx
  unsigned __int64 v1440; // r9
  int v1441; // ecx
  __int64 v1442; // rax
  int v1443; // ecx
  __int64 v1444; // rcx
  __int64 v1445; // r10
  int v1446; // ecx
  __int64 v1447; // rax
  unsigned __int64 *v1448; // rax
  unsigned __int64 *v1449; // rbx
  unsigned __int64 v1450; // rcx
  _QWORD *v1451; // r15
  __int64 v1452; // r12
  __int64 v1453; // r15
  __int64 v1454; // rdx
  unsigned __int64 v1455; // r14
  unsigned __int64 v1456; // rcx
  _QWORD *v1457; // rcx
  int v1458; // edx
  __int64 v1459; // r8
  char v1460; // al
  int v1461; // ecx
  __int64 v1462; // rcx
  __int64 v1463; // r10
  __int64 v1464; // r8
  _QWORD *v1465; // rdx
  unsigned __int64 v1466; // r9
  int v1467; // ecx
  __int64 v1468; // rax
  unsigned __int64 v1469; // rbx
  unsigned int v1470; // edi
  int *v1471; // rdx
  int v1472; // ecx
  __int64 v1473; // rcx
  __int64 v1474; // r10
  __int64 v1475; // r8
  _QWORD *v1476; // rdx
  unsigned __int64 v1477; // r9
  int v1478; // ecx
  __int64 v1479; // rax
  char v1480; // r14
  int v1481; // ecx
  __int64 v1482; // rcx
  __int64 v1483; // r10
  __int64 v1484; // r8
  _QWORD *v1485; // rdx
  unsigned __int64 v1486; // r9
  int v1487; // ecx
  __int64 v1488; // rax
  __int64 v1489; // r15
  unsigned __int64 v1490; // rbx
  int v1491; // ecx
  __int64 v1492; // rcx
  __int64 v1493; // r10
  __int64 v1494; // r8
  _QWORD *v1495; // rdx
  unsigned __int64 v1496; // r9
  int v1497; // ecx
  __int64 v1498; // rax
  int v1499; // ecx
  __int64 v1500; // rcx
  __int64 v1501; // r10
  int v1502; // ecx
  __int64 v1503; // rax
  unsigned __int64 *v1504; // rax
  unsigned __int64 *v1505; // rbx
  unsigned __int64 v1506; // rcx
  __int64 v1507; // r12
  __int64 v1508; // r15
  __int64 v1509; // rdx
  unsigned __int64 v1510; // r14
  unsigned __int64 v1511; // rcx
  _QWORD *v1512; // rcx
  int v1513; // edx
  __int64 v1514; // r8
  char v1515; // al
  int v1516; // ecx
  __int64 v1517; // rcx
  __int64 v1518; // r10
  __int64 v1519; // r8
  _QWORD *v1520; // rdx
  unsigned __int64 v1521; // r9
  int v1522; // ecx
  __int64 v1523; // rax
  __int64 (__fastcall *v1524)(__int64); // rax
  __int64 v1525; // r13
  unsigned __int64 v1526; // rbx
  int *v1527; // rdx
  int v1528; // ecx
  __int64 v1529; // rcx
  __int64 v1530; // r10
  __int64 v1531; // r8
  _QWORD *v1532; // rdx
  unsigned __int64 v1533; // r9
  int v1534; // ecx
  __int64 v1535; // rax
  char v1536; // r14
  int v1537; // ecx
  __int64 v1538; // rcx
  __int64 v1539; // r10
  __int64 v1540; // r8
  _QWORD *v1541; // rdx
  unsigned __int64 v1542; // r9
  int v1543; // ecx
  __int64 v1544; // rax
  __int64 v1545; // r15
  unsigned __int64 v1546; // r9
  int *v1547; // rdx
  unsigned __int64 v1548; // r8
  unsigned __int64 v1549; // rbx
  int v1550; // ecx
  __int64 v1551; // rcx
  __int64 v1552; // r10
  __int64 v1553; // r8
  _QWORD *v1554; // rdx
  unsigned __int64 v1555; // r9
  int v1556; // ecx
  __int64 v1557; // rax
  int v1558; // ecx
  __int64 v1559; // rcx
  __int64 v1560; // r10
  int v1561; // ecx
  __int64 v1562; // rax
  unsigned __int64 *v1563; // rax
  unsigned __int64 *v1564; // rbx
  unsigned __int64 v1565; // rcx
  _QWORD *v1566; // r15
  unsigned __int8 v1567; // di
  __int64 v1568; // r12
  char *v1569; // r15
  __int64 v1570; // rdx
  unsigned __int64 v1571; // r14
  unsigned __int64 v1572; // rcx
  _QWORD *v1573; // rcx
  int v1574; // edx
  __int64 v1575; // r8
  char v1576; // al
  int v1577; // ecx
  __int64 v1578; // rcx
  __int64 v1579; // r10
  __int64 v1580; // r8
  _QWORD *v1581; // rdx
  unsigned __int64 v1582; // r9
  int v1583; // ecx
  __int64 v1584; // rax
  int v1585; // r10d
  int v1586; // r10d
  int v1587; // ecx
  __int64 v1588; // rcx
  __int64 v1589; // r10
  __int64 v1590; // rax
  unsigned int v1591; // ebx
  unsigned __int64 v1592; // rax
  __int64 v1593; // rax
  unsigned int v1594; // r14d
  unsigned __int64 v1595; // rax
  struct _KPRCB *v1596; // rdx
  __int64 v1597; // r8
  int v1598; // ecx
  struct _KPRCB *v1599; // rax
  unsigned __int64 v1600; // rcx
  __int64 v1601; // r8
  int v1602; // ecx
  __int64 v1603; // rcx
  __int64 v1604; // r10
  __int64 v1605; // r8
  unsigned __int64 v1606; // r9
  int v1607; // ecx
  __int64 v1608; // rax
  unsigned __int64 v1609; // r8
  int v1610; // ecx
  __int64 v1611; // rcx
  __int64 v1612; // r10
  __int64 v1613; // r8
  int v1614; // ecx
  __int64 v1615; // rax
  _QWORD *v1616; // r15
  __int64 v1617; // r14
  __int64 v1618; // rdx
  int v1619; // ecx
  _QWORD *v1620; // rax
  __int64 v1621; // r8
  __int64 Ldtr; // r12
  unsigned __int16 Tr; // ax
  int v1624; // r10d
  _QWORD *v1625; // r8
  __int64 v1626; // r11
  __int64 v1627; // r13
  const char *v1628; // rax
  unsigned __int64 v1629; // rbx
  unsigned int v1630; // r9d
  __int64 v1631; // rax
  __int64 v1632; // rbx
  unsigned __int64 v1633; // rcx
  unsigned int v1634; // r14d
  unsigned __int64 v1635; // rax
  __int64 v1636; // rax
  unsigned __int64 i30; // rax
  unsigned int v1638; // ebx
  _QWORD *v1639; // rcx
  int v1640; // edx
  __int64 v1641; // r8
  char v1642; // al
  __int64 v1643; // rcx
  int v1644; // ecx
  __int64 v1645; // rcx
  __int64 v1646; // r10
  __int64 v1647; // r8
  int v1648; // ecx
  __int64 v1649; // rax
  __int64 v1650; // rdx
  void (__fastcall *v1651)(_BYTE *, __int64); // rax
  unsigned int v1652; // edi
  __int64 v1653; // rcx
  __int64 v1654; // r9
  __int64 v1655; // r14
  unsigned __int64 v1656; // r8
  __int64 v1657; // r12
  __int64 v1658; // r13
  unsigned __int8 v1659; // r15
  __int16 v1660; // r10
  int v1661; // eax
  __int64 v1662; // rcx
  unsigned __int64 v1663; // rbx
  __int64 v1664; // rdx
  __int64 v1665; // r12
  __int64 v1666; // r13
  __int64 v1667; // rax
  unsigned int *v1668; // rax
  __int64 v1669; // rcx
  unsigned __int64 v1670; // rbx
  struct _KPRCB *v1671; // rdx
  _QWORD *v1672; // r14
  _QWORD *v1673; // r8
  int v1674; // r9d
  const char *v1675; // rax
  __int64 v1676; // r11
  unsigned __int64 v1677; // rbx
  int v1678; // r10d
  __int64 v1679; // rax
  __int64 v1680; // rbx
  unsigned __int128 v1681; // rax
  int v1682; // edx
  unsigned int v1683; // r15d
  __int64 v1684; // rax
  __int64 v1685; // rax
  unsigned __int64 i31; // rax
  unsigned int *v1687; // rax
  __int64 v1688; // rax
  __int64 v1689; // rax
  __int64 v1690; // rax
  _QWORD *v1691; // rdx
  unsigned int v1692; // ebx
  const char *v1693; // rax
  unsigned __int64 v1694; // rcx
  int v1695; // r9d
  unsigned __int64 v1696; // r14
  __int64 v1697; // rax
  int v1698; // r8d
  __int64 v1699; // rax
  unsigned __int64 i32; // rax
  unsigned int v1701; // r14d
  int *v1702; // r8
  unsigned __int64 v1703; // rcx
  __int64 v1704; // rcx
  int v1705; // ecx
  __int64 v1706; // rcx
  __int64 v1707; // r11
  __int64 v1708; // r8
  unsigned __int64 v1709; // r10
  int v1710; // ecx
  __int64 v1711; // rax
  volatile signed __int32 *v1712; // rcx
  const char *v1713; // r14
  __int64 v1714; // r8
  const char *v1715; // rax
  int v1716; // r11d
  __int64 kk; // r15
  unsigned __int64 v1718; // rbx
  unsigned int v1719; // r10d
  __int64 v1720; // rax
  __int64 v1721; // rbx
  char v1722; // r11
  unsigned int v1723; // r8d
  unsigned __int64 v1724; // rax
  __int64 v1725; // rax
  unsigned __int64 mm; // rax
  unsigned int v1727; // ebx
  BOOL v1728; // r12d
  __int64 v1729; // rcx
  __int64 v1730; // r8
  unsigned __int8 v1731; // r15
  unsigned __int64 v1732; // r14
  unsigned __int64 v1733; // r13
  __int64 v1734; // rcx
  int v1735; // ecx
  __int64 v1736; // rcx
  __int64 v1737; // r10
  __int64 v1738; // r8
  int v1739; // ecx
  __int64 v1740; // rax
  __int64 v1741; // r14
  __int64 v1742; // rcx
  __int64 v1743; // rax
  unsigned int v1744; // ebx
  _QWORD *v1745; // rcx
  __int64 v1746; // r8
  __int64 v1747; // rcx
  int v1748; // ecx
  __int64 v1749; // rcx
  __int64 v1750; // r10
  __int64 v1751; // rax
  int v1752; // ecx
  int v1753; // r14d
  __int64 v1754; // r15
  unsigned int v1755; // ecx
  char v1756; // bl
  volatile signed __int8 **v1757; // r8
  volatile signed __int8 *v1758; // rdx
  unsigned __int8 v1759; // bl
  const char *v1760; // r14
  __int64 v1761; // r12
  __int64 v1762; // r8
  const char *v1763; // rax
  int v1764; // r10d
  __int64 nn; // r15
  unsigned __int64 v1766; // rbx
  unsigned int v1767; // r11d
  __int64 v1768; // rax
  __int64 v1769; // rbx
  char v1770; // r10
  unsigned int v1771; // r8d
  unsigned __int64 v1772; // rax
  __int64 v1773; // rax
  unsigned __int64 i1; // rax
  int *v1775; // r14
  unsigned int v1776; // ebx
  BOOL v1777; // r13d
  __int64 v1778; // rcx
  __int64 v1779; // r8
  unsigned __int8 v1780; // r15
  unsigned __int64 v1781; // r14
  __int64 v1782; // rcx
  int v1783; // ecx
  __int64 v1784; // rcx
  __int64 v1785; // r10
  __int64 v1786; // r8
  int v1787; // ecx
  __int64 v1788; // rax
  __int64 v1789; // rbx
  __int64 (__fastcall *v1790)(__int64); // rax
  unsigned __int64 v1791; // r15
  unsigned int v1792; // r13d
  int v1793; // r14d
  __int64 v1794; // rdi
  unsigned int v1795; // ecx
  unsigned int v1796; // r10d
  unsigned int v1797; // ebx
  int v1798; // eax
  char *v1799; // rdx
  __int16 v1800; // ax
  char *v1801; // r8
  char v1802; // cl
  char v1803; // al
  char *v1804; // r8
  unsigned int v1805; // edx
  __int64 v1806; // rcx
  __int64 v1807; // rax
  char v1808; // cl
  char v1809; // al
  char *v1810; // rdx
  char *v1811; // r8
  char v1812; // cl
  char v1813; // al
  char *v1814; // rdx
  __int64 v1815; // r8
  char v1816; // cl
  char v1817; // al
  __int64 v1818; // rbx
  int *v1819; // rcx
  int v1820; // ecx
  __int64 v1821; // rcx
  __int64 v1822; // r10
  _QWORD *v1823; // rdx
  __int64 v1824; // rax
  int v1825; // ecx
  int v1826; // eax
  unsigned __int8 v1827; // bl
  _QWORD *v1828; // r14
  __int64 v1829; // r8
  _QWORD *v1830; // r9
  const char *v1831; // rax
  int v1832; // r10d
  __int64 v1833; // r15
  unsigned __int64 v1834; // rbx
  unsigned int v1835; // r11d
  __int64 v1836; // rax
  __int64 v1837; // rbx
  unsigned __int128 v1838; // rax
  unsigned int v1839; // r8d
  unsigned __int64 v1840; // rax
  __int64 v1841; // rax
  unsigned __int64 i25; // rax
  unsigned int v1843; // ebx
  BOOL v1844; // r12d
  __int64 v1845; // rcx
  __int64 v1846; // rdx
  __int64 v1847; // r8
  unsigned __int8 v1848; // r15
  unsigned __int64 v1849; // r14
  unsigned __int64 v1850; // r13
  int v1851; // eax
  __int64 v1852; // rcx
  int v1853; // ecx
  __int64 v1854; // rcx
  __int64 v1855; // r10
  __int64 v1856; // r8
  _QWORD *v1857; // rdx
  unsigned __int64 v1858; // r9
  int v1859; // ecx
  __int64 v1860; // rax
  __int64 v1861; // r8
  unsigned __int64 v1862; // rcx
  unsigned int *v1863; // r14
  int *v1864; // r12
  unsigned __int64 v1865; // rdi
  unsigned __int64 v1866; // r15
  unsigned int v1867; // ebx
  __int64 v1868; // r8
  const char *v1869; // rax
  __int64 v1870; // r11
  unsigned __int64 v1871; // rcx
  unsigned __int64 v1872; // r13
  unsigned int v1873; // r10d
  __int64 v1874; // rax
  __int64 v1875; // r13
  unsigned __int128 v1876; // rax
  unsigned int v1877; // edx
  unsigned __int64 v1878; // rax
  __int64 v1879; // rax
  unsigned __int64 i26; // rax
  unsigned int v1881; // r13d
  char v1882; // al
  volatile signed __int32 *v1883; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  __int64 v1885; // r8
  int v1886; // ecx
  struct _KPRCB *v1887; // rax
  unsigned __int64 v1888; // rcx
  int *v1889; // rcx
  int v1890; // ecx
  __int64 v1891; // rcx
  __int64 v1892; // r10
  _QWORD *v1893; // rdx
  int v1894; // ecx
  __int64 v1895; // rax
  __int64 v1896; // rcx
  unsigned __int8 v1897; // r14
  unsigned __int64 v1898; // rbx
  __int64 v1899; // r12
  unsigned __int64 v1900; // r15
  int v1901; // eax
  __int64 v1902; // rax
  int v1903; // ecx
  __int64 v1904; // rcx
  __int64 v1905; // r10
  __int64 v1906; // r8
  _QWORD *v1907; // rdx
  int v1908; // ecx
  __int64 v1909; // rax
  __int64 v1910; // rcx
  unsigned __int8 v1911; // bl
  unsigned int *v1912; // rcx
  unsigned int *v1913; // r15
  char v1914; // r14
  unsigned __int64 v1915; // r12
  __int64 v1916; // rdx
  char *v1917; // r8
  unsigned int *v1918; // r9
  __int64 v1919; // rcx
  __int64 v1920; // rax
  char v1921; // cl
  char v1922; // al
  __int64 v1923; // rcx
  __int64 v1924; // rax
  int v1925; // ecx
  __int64 v1926; // rcx
  __int64 v1927; // r10
  __int64 v1928; // r8
  _QWORD *v1929; // rdx
  int v1930; // ecx
  __int64 v1931; // rax
  __int64 v1932; // rcx
  __int64 v1933; // rax
  int v1934; // ecx
  __int64 v1935; // rcx
  __int64 v1936; // r10
  __int64 v1937; // r8
  _QWORD *v1938; // rdx
  int v1939; // ecx
  __int64 v1940; // rax
  unsigned __int64 v1941; // rax
  __int64 v1942; // rax
  __int64 v1943; // rcx
  __int64 v1944; // rcx
  int v1945; // ecx
  __int64 v1946; // rcx
  __int64 v1947; // r10
  __int64 v1948; // rbx
  __int64 v1949; // r10
  unsigned int v1950; // r14d
  __int64 v1951; // r11
  __int64 v1952; // r12
  void (__fastcall *v1953)(_QWORD, _QWORD, unsigned __int64 *); // r9
  unsigned __int64 v1954; // rcx
  unsigned __int128 v1955; // rax
  unsigned __int64 v1956; // r8
  unsigned __int64 v1957; // rcx
  unsigned __int128 v1958; // rax
  unsigned __int64 v1959; // rcx
  unsigned __int128 v1960; // rax
  int v1961; // eax
  __int64 v1962; // rbx
  int v1963; // r13d
  unsigned __int64 v1964; // rcx
  unsigned __int128 v1965; // rax
  int v1966; // ecx
  _QWORD *v1967; // rax
  __int64 v1968; // r9
  unsigned __int64 v1969; // r8
  __int64 *v1970; // r10
  __int64 v1971; // rdx
  __int64 v1972; // rcx
  _QWORD *v1973; // rdx
  _QWORD *v1974; // rax
  int v1975; // ecx
  unsigned __int64 v1976; // r8
  __int64 *v1977; // r10
  __int64 v1978; // rdx
  unsigned int v1979; // r14d
  __int64 v1980; // rax
  int v1981; // ecx
  int v1982; // ecx
  __int64 v1983; // rcx
  __int64 v1984; // r10
  __int64 v1985; // r8
  int v1986; // ecx
  __int64 v1987; // rax
  __int64 v1988; // rbx
  int v1989; // ecx
  __int64 v1990; // rcx
  __int64 v1991; // r10
  __int64 v1992; // r8
  _QWORD *v1993; // rdx
  unsigned __int64 v1994; // r9
  int v1995; // ecx
  __int64 v1996; // rax
  int v1997; // ecx
  __int64 v1998; // rcx
  __int64 v1999; // r11
  unsigned __int64 v2000; // r10
  unsigned __int64 v2001; // rcx
  __int64 v2002; // r8
  int v2003; // r8d
  unsigned __int64 v2004; // rax
  __int64 v2005; // rcx
  __int64 v2006; // rcx
  __int64 v2007; // r10
  __int64 v2008; // r8
  int v2009; // ecx
  __int64 v2010; // rax
  int v2011; // eax
  _BYTE *v2012; // rcx
  int v2013; // r8d
  __int64 v2014; // rax
  int *v2015; // r14
  const char *v2016; // r11
  __int64 v2017; // r9
  __int64 v2018; // r8
  const char *v2019; // rax
  int v2020; // r10d
  __int64 i35; // r12
  unsigned __int64 v2022; // rbx
  unsigned int v2023; // r15d
  __int64 v2024; // rax
  __int64 v2025; // rbx
  unsigned __int128 v2026; // rax
  char v2027; // r10
  __int64 v2028; // rdx
  unsigned int v2029; // r9d
  unsigned __int64 v2030; // rax
  __int64 v2031; // rax
  unsigned __int64 i36; // rax
  unsigned int v2033; // ebx
  BOOL v2034; // r12d
  __int64 v2035; // rcx
  unsigned __int8 v2036; // r13
  unsigned __int64 v2037; // r15
  int v2038; // eax
  __int64 v2039; // rcx
  int v2040; // ecx
  __int64 v2041; // rcx
  __int64 v2042; // r10
  unsigned __int64 v2043; // r9
  int v2044; // ecx
  __int64 v2045; // rax
  unsigned __int64 v2046; // rcx
  unsigned __int64 i37; // rax
  __int64 v2048; // r8
  unsigned __int64 v2049; // rcx
  __int64 v2050; // rcx
  _QWORD *v2051; // r12
  unsigned __int64 v2052; // rcx
  __int64 v2053; // rax
  int v2054; // ebx
  unsigned __int64 v2055; // rcx
  unsigned __int128 v2056; // rax
  unsigned __int64 v2057; // r15
  __int64 i43; // r11
  _QWORD *v2059; // r8
  unsigned __int64 v2060; // r10
  unsigned __int64 v2061; // rcx
  unsigned __int64 v2062; // rcx
  unsigned __int64 v2063; // rcx
  unsigned int v2064; // ebx
  _QWORD *v2065; // r8
  unsigned __int64 v2066; // rcx
  unsigned __int64 v2067; // rcx
  unsigned __int64 v2068; // rcx
  unsigned __int64 *v2069; // rcx
  char *v2070; // rdx
  int v2071; // r8d
  unsigned __int64 *v2072; // r9
  __int64 v2073; // rsi
  char v2074; // al
  int v2075; // r13d
  unsigned int v2076; // r13d
  unsigned __int64 v2077; // rcx
  unsigned __int128 v2078; // rax
  signed __int64 v2079; // r15
  char *v2080; // rcx
  __int64 v2081; // r14
  _BYTE *v2082; // rdx
  int v2083; // r8d
  __int64 v2084; // r10
  char v2085; // al
  _QWORD *v2086; // rax
  int v2087; // ecx
  __int64 v2088; // rdx
  __int64 v2089; // r11
  unsigned __int64 *v2090; // r10
  const char *v2091; // rax
  int v2092; // ebx
  unsigned __int64 v2093; // r8
  unsigned int v2094; // r12d
  unsigned __int64 v2095; // rdi
  __int64 v2096; // rax
  unsigned __int64 v2097; // r8
  unsigned __int128 v2098; // rax
  unsigned int v2099; // r11d
  unsigned __int64 v2100; // rax
  __int64 v2101; // rax
  int v2102; // r10d
  _BYTE *v2103; // rcx
  __int64 v2104; // r11
  unsigned __int64 *v2105; // rax
  unsigned int i39; // ecx
  _QWORD *v2107; // rax
  int v2108; // ecx
  unsigned __int64 v2109; // rcx
  __int64 v2110; // rcx
  __int64 v2111; // r15
  unsigned __int64 v2112; // rdi
  unsigned int v2113; // r11d
  unsigned __int64 v2114; // r10
  unsigned __int64 v2115; // r12
  unsigned __int64 *v2116; // rbx
  unsigned __int64 v2117; // rcx
  unsigned __int64 v2118; // rax
  int v2119; // r8d
  const char *v2120; // r15
  __int64 v2121; // r10
  const char *v2122; // rax
  int v2123; // r11d
  __int64 v2124; // r12
  unsigned __int64 v2125; // r8
  unsigned int v2126; // ebx
  __int64 v2127; // rax
  __int64 v2128; // r8
  unsigned int v2129; // r10d
  unsigned __int64 v2130; // rax
  __int64 v2131; // rax
  unsigned __int64 v2132; // rax
  int v2133; // r12d
  __int64 v2134; // rax
  int v2135; // r13d
  __int64 v2136; // rax
  unsigned int v2137; // r15d
  unsigned int v2138; // r15d
  unsigned __int64 v2139; // rcx
  unsigned __int128 v2140; // rax
  signed __int64 v2141; // rbx
  char *v2142; // rcx
  _BYTE *v2143; // rdx
  int v2144; // r8d
  __int64 v2145; // r9
  char v2146; // al
  _QWORD *v2147; // rax
  int v2148; // ecx
  __int64 v2149; // rdx
  __int64 v2150; // r10
  _QWORD *v2151; // r9
  const char *v2152; // rax
  int v2153; // r11d
  __int64 v2154; // r12
  __int64 v2155; // r8
  unsigned int i41; // r14d
  __int64 v2157; // rax
  __int64 v2158; // r8
  unsigned __int128 v2159; // rax
  unsigned int v2160; // r10d
  unsigned __int64 v2161; // rax
  __int64 v2162; // rax
  int v2163; // ecx
  _QWORD *v2164; // rdx
  __int64 v2165; // r9
  char *v2166; // rcx
  int v2167; // r10d
  char v2168; // al
  _QWORD *v2169; // rcx
  unsigned int i42; // eax
  unsigned int v2171; // r8d
  _QWORD *v2172; // rdx
  unsigned __int64 v2173; // rax
  unsigned __int128 v2174; // rax
  unsigned __int64 v2175; // r12
  unsigned __int64 v2176; // rdi
  unsigned int v2177; // ebx
  __int64 v2178; // r9
  unsigned int v2179; // r11d
  __int64 *v2180; // r10
  __int64 v2181; // r14
  __int64 v2182; // rcx
  unsigned __int64 v2183; // rax
  __int64 v2184; // r9
  unsigned int v2185; // eax
  __int64 v2186; // r15
  char *v2187; // rcx
  int v2188; // r12d
  _BYTE *v2189; // rdx
  __int64 v2190; // r9
  int v2191; // r8d
  char v2192; // al
  _QWORD *v2193; // rax
  int v2194; // ecx
  __int64 v2195; // rdx
  __int64 v2196; // r11
  _QWORD *v2197; // r9
  const char *v2198; // rax
  int v2199; // r10d
  __int64 v2200; // r14
  unsigned int v2201; // ebx
  __int64 v2202; // rax
  __int64 v2203; // r8
  unsigned __int128 v2204; // rax
  unsigned int v2205; // r11d
  unsigned __int64 v2206; // rax
  __int64 v2207; // rax
  _BYTE *v2208; // rcx
  int v2209; // r10d
  int v2210; // r14d
  __int64 v2211; // r15
  __int64 v2212; // r12
  __int64 v2213; // r13
  int *v2214; // r10
  unsigned int v2215; // ebx
  __int64 v2216; // rcx
  unsigned __int64 v2217; // rax
  __int64 v2218; // rax
  unsigned int v2219; // r15d
  unsigned int v2220; // r15d
  unsigned __int64 v2221; // rax
  unsigned __int128 v2222; // rax
  signed __int64 v2223; // rbx
  char *v2224; // rcx
  _BYTE *v2225; // rdx
  int v2226; // r8d
  __int64 v2227; // r9
  char v2228; // al
  _QWORD *v2229; // rax
  int v2230; // ecx
  __int64 v2231; // rdx
  __int64 v2232; // r11
  _QWORD *v2233; // r9
  const char *v2234; // rax
  int v2235; // r10d
  __int64 v2236; // r13
  __int64 v2237; // r8
  unsigned int v2238; // r14d
  __int64 v2239; // rax
  __int64 v2240; // r8
  unsigned __int128 v2241; // rax
  unsigned int v2242; // r11d
  unsigned __int64 v2243; // rax
  __int64 v2244; // rax
  _QWORD *v2245; // rdx
  __int64 v2246; // r9
  char *v2247; // rcx
  int v2248; // r10d
  char v2249; // al
  _QWORD *v2250; // rcx
  unsigned int i40; // eax
  unsigned int v2252; // r8d
  _QWORD *v2253; // rdx
  unsigned __int64 v2254; // rax
  unsigned __int128 v2255; // rax
  unsigned __int64 v2256; // r13
  unsigned __int64 v2257; // rdi
  unsigned int v2258; // ebx
  __int64 v2259; // r9
  unsigned int v2260; // r11d
  __int64 *v2261; // r10
  __int64 v2262; // r14
  __int64 v2263; // rcx
  unsigned __int64 v2264; // rax
  __int64 v2265; // r9
  unsigned int v2266; // eax
  unsigned __int64 v2267; // rax
  unsigned __int128 v2268; // rax
  __int64 v2269; // rdx
  int v2270; // r8d
  char v2271; // cl
  __int64 v2272; // r12
  _DWORD *v2273; // r14
  unsigned __int64 v2274; // rax
  unsigned __int128 v2275; // rax
  int v2276; // r13d
  char *v2277; // rcx
  int v2278; // r8d
  int *v2279; // rdx
  __int64 v2280; // r9
  char v2281; // al
  int v2282; // eax
  int v2283; // r11d
  unsigned __int64 v2284; // rax
  unsigned __int128 v2285; // rax
  int v2286; // r10d
  unsigned __int64 v2287; // rax
  unsigned __int64 v2288; // r8
  int v2289; // edx
  __int64 v2290; // r9
  unsigned __int64 v2291; // rbx
  __int64 v2292; // rsi
  __int64 v2293; // r12
  __int64 v2294; // rax
  __int64 v2295; // r9
  unsigned __int128 v2296; // rax
  int v2297; // ecx
  __int64 v2298; // rdx
  _QWORD *v2299; // rax
  __int64 v2300; // r8
  unsigned __int64 v2301; // rcx
  int v2302; // r10d
  __int64 v2303; // r8
  _QWORD *v2304; // rax
  __int64 v2305; // rdx
  unsigned __int64 v2306; // rdx
  _QWORD *v2307; // r10
  unsigned __int64 v2308; // r10
  unsigned __int64 v2309; // rax
  __int64 v2310; // rcx
  unsigned __int128 v2311; // rax
  __int64 v2312; // rdx
  _QWORD *v2313; // rax
  __int64 v2314; // rdx
  __int64 v2315; // rdx
  unsigned __int64 v2316; // rcx
  unsigned __int64 v2317; // r11
  char v2318; // r9
  unsigned __int64 *v2319; // r8
  int v2320; // ecx
  int v2321; // ecx
  int v2322; // ecx
  int v2323; // ecx
  __int64 v2324; // r8
  unsigned __int64 v2325; // rax
  unsigned __int128 v2326; // rax
  __int64 v2327; // r8
  __int64 v2328; // rcx
  __int64 v2329; // rax
  __int64 v2330; // rdi
  int v2331; // ecx
  __int64 v2332; // rcx
  __int64 v2333; // r10
  __int64 v2334; // r8
  _QWORD *v2335; // rdx
  unsigned __int64 v2336; // r9
  int v2337; // ecx
  __int64 v2338; // rax
  char *v2339; // rcx
  __int64 v2340; // r12
  int *v2341; // rdx
  char v2342; // al
  __int64 v2343; // rdi
  __int64 v2344; // rcx
  int v2345; // ecx
  __int64 v2346; // rcx
  __int64 v2347; // r10
  __int64 v2348; // r8
  _QWORD *v2349; // rdx
  unsigned __int64 v2350; // r9
  int v2351; // ecx
  __int64 v2352; // rax
  char *v2353; // rcx
  __int64 v2354; // r12
  int *v2355; // rdx
  char v2356; // al
  unsigned __int64 v2357; // rax
  unsigned __int128 v2358; // rax
  unsigned __int64 v2359; // rdi
  unsigned __int128 v2360; // rax
  int v2361; // r9d
  __int64 v2362; // rdi
  int v2363; // esi
  int v2364; // r14d
  int v2365; // r15d
  struct _KPRCB *v2366; // r8
  unsigned __int64 v2367; // r13
  __int64 v2368; // rax
  unsigned __int64 v2369; // rdx
  __int64 v2370; // rbx
  unsigned __int64 v2371; // rcx
  unsigned __int64 v2372; // rbx
  unsigned __int64 v2373; // rdi
  unsigned __int64 v2374; // r9
  unsigned __int64 v2375; // rcx
  unsigned __int64 v2376; // rax
  __int64 v2377; // rsi
  unsigned __int64 v2378; // r8
  _QWORD *v2379; // rcx
  unsigned __int64 v2380; // r10
  signed __int64 v2381; // r8
  unsigned int v2382; // r12d
  __int64 v2383; // rdi
  __int64 v2384; // r11
  unsigned __int64 *v2385; // rcx
  __int64 v2386; // rdx
  __int64 v2387; // r10
  unsigned __int64 v2388; // rax
  _QWORD *v2389; // r15
  __int64 v2390; // rax
  unsigned __int64 v2391; // rdx
  unsigned __int64 v2392; // rcx
  unsigned int v2393; // r10d
  _QWORD *v2394; // r11
  unsigned int v2395; // r14d
  unsigned __int64 v2396; // r15
  char *v2397; // r11
  unsigned __int64 v2398; // rcx
  unsigned __int64 v2399; // rax
  char *v2400; // r8
  unsigned __int64 v2401; // r9
  __int64 v2402; // r11
  __int64 v2403; // rdx
  __int64 v2404; // r10
  unsigned __int64 v2405; // rax
  unsigned __int64 *v2406; // rcx
  __int64 *v2407; // r11
  __int64 v2408; // rax
  unsigned __int64 v2409; // rdx
  unsigned __int64 v2410; // rcx
  unsigned __int64 v2411; // r9
  unsigned __int64 v2413; // rcx
  unsigned __int64 v2414; // rax
  int v2415; // ecx
  int v2416; // ecx
  int v2417; // ecx
  int v2418; // ecx
  int v2419; // ecx
  volatile signed __int32 *v2420; // rax
  signed __int32 v2421[8]; // [rsp+0h] [rbp-100h] BYREF
  __int64 v2422; // [rsp+28h] [rbp-D8h]
  __int64 *v2423; // [rsp+38h] [rbp-C8h]
  char *v2424; // [rsp+50h] [rbp-B0h]
  __int64 v2425; // [rsp+58h] [rbp-A8h]
  __int64 v2426; // [rsp+60h] [rbp-A0h]
  __int64 v2427; // [rsp+68h] [rbp-98h]
  __int64 v2428; // [rsp+70h] [rbp-90h]
  unsigned int v2429; // [rsp+78h] [rbp-88h]
  __int64 v2430; // [rsp+80h] [rbp-80h]
  int v2431; // [rsp+88h] [rbp-78h]
  __int64 v2432; // [rsp+90h] [rbp-70h]
  int v2433; // [rsp+98h] [rbp-68h]
  __int64 v2434; // [rsp+A0h] [rbp-60h]
  unsigned int v2435; // [rsp+A8h] [rbp-58h]
  _DWORD *v2436; // [rsp+B0h] [rbp-50h]
  unsigned __int8 v2437; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int8 v2438; // [rsp+B9h] [rbp-47h] BYREF
  char v2439[2]; // [rsp+BAh] [rbp-46h] BYREF
  unsigned int v2440; // [rsp+BCh] [rbp-44h] BYREF
  ULONG_PTR v2441; // [rsp+C0h] [rbp-40h]
  unsigned int *v2442; // [rsp+C8h] [rbp-38h]
  char *v2443; // [rsp+D0h] [rbp-30h]
  unsigned int v2444; // [rsp+D8h] [rbp-28h]
  void (__fastcall *v2445)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // [rsp+E0h] [rbp-20h]
  __int64 v2446; // [rsp+E8h] [rbp-18h] BYREF
  int v2447; // [rsp+F0h] [rbp-10h]
  char *v2448; // [rsp+F8h] [rbp-8h]
  unsigned __int64 v2449; // [rsp+100h] [rbp+0h]
  unsigned int v2450; // [rsp+108h] [rbp+8h]
  unsigned int v2451; // [rsp+10Ch] [rbp+Ch]
  _BYTE *v2452; // [rsp+110h] [rbp+10h] BYREF
  __int64 v2453; // [rsp+118h] [rbp+18h] BYREF
  _DWORD *v2454; // [rsp+120h] [rbp+20h]
  unsigned __int64 v2455; // [rsp+128h] [rbp+28h]
  __int64 v2456; // [rsp+130h] [rbp+30h] BYREF
  __int64 v2457; // [rsp+138h] [rbp+38h]
  unsigned int v2458; // [rsp+140h] [rbp+40h] BYREF
  int v2459; // [rsp+148h] [rbp+48h] BYREF
  unsigned int v2460; // [rsp+14Ch] [rbp+4Ch] BYREF
  unsigned int v2461; // [rsp+150h] [rbp+50h] BYREF
  unsigned __int64 v2462; // [rsp+158h] [rbp+58h] BYREF
  __int64 v2463; // [rsp+160h] [rbp+60h]
  unsigned int v2464; // [rsp+168h] [rbp+68h] BYREF
  _DWORD *v2465; // [rsp+170h] [rbp+70h]
  __int64 v2466; // [rsp+178h] [rbp+78h]
  unsigned __int64 v2467; // [rsp+180h] [rbp+80h] BYREF
  char v2468; // [rsp+188h] [rbp+88h] BYREF
  unsigned __int64 v2469; // [rsp+190h] [rbp+90h] BYREF
  __int64 v2470; // [rsp+198h] [rbp+98h] BYREF
  _DWORD v2471[4]; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v2472; // [rsp+1B0h] [rbp+B0h]
  __int64 v2473; // [rsp+1B8h] [rbp+B8h] BYREF
  int v2474; // [rsp+1C0h] [rbp+C0h]
  int v2475; // [rsp+1C4h] [rbp+C4h]
  __int64 v2476; // [rsp+1C8h] [rbp+C8h] BYREF
  signed __int64 v2477; // [rsp+1D0h] [rbp+D0h] BYREF
  signed __int64 v2478; // [rsp+1D8h] [rbp+D8h] BYREF
  int v2479; // [rsp+1E0h] [rbp+E0h]
  int v2480; // [rsp+1E4h] [rbp+E4h]
  int v2481; // [rsp+1E8h] [rbp+E8h]
  int v2482; // [rsp+1ECh] [rbp+ECh]
  _DWORD v2483[6]; // [rsp+1F0h] [rbp+F0h] BYREF
  __int16 v2484; // [rsp+208h] [rbp+108h] BYREF
  _QWORD *v2485; // [rsp+20Ah] [rbp+10Ah]
  __int64 v2486; // [rsp+218h] [rbp+118h] BYREF
  __int64 v2487; // [rsp+220h] [rbp+120h] BYREF
  __int64 v2488; // [rsp+228h] [rbp+128h]
  __int64 v2489; // [rsp+230h] [rbp+130h] BYREF
  signed __int64 v2490; // [rsp+238h] [rbp+138h] BYREF
  __int64 v2491; // [rsp+240h] [rbp+140h] BYREF
  __int64 v2492; // [rsp+248h] [rbp+148h] BYREF
  __int16 v2493; // [rsp+250h] [rbp+150h] BYREF
  __int64 v2494; // [rsp+252h] [rbp+152h]
  __int16 v2495; // [rsp+260h] [rbp+160h] BYREF
  struct _KPRCB *v2496; // [rsp+262h] [rbp+162h]
  __int16 v2497; // [rsp+270h] [rbp+170h] BYREF
  __int64 v2498; // [rsp+272h] [rbp+172h]
  __int16 v2499; // [rsp+280h] [rbp+180h] BYREF
  __int64 v2500; // [rsp+282h] [rbp+182h]
  __int16 v2501; // [rsp+290h] [rbp+190h] BYREF
  struct _KPRCB *v2502; // [rsp+292h] [rbp+192h]
  __int128 v2503; // [rsp+2A0h] [rbp+1A0h]
  __int128 v2504; // [rsp+2B0h] [rbp+1B0h]
  __int64 v2505; // [rsp+2C0h] [rbp+1C0h] BYREF
  _DWORD *v2506; // [rsp+2C8h] [rbp+1C8h]
  _WORD v2507[4]; // [rsp+2D0h] [rbp+1D0h] BYREF
  _BYTE *v2508; // [rsp+2D8h] [rbp+1D8h]
  int v2509[4]; // [rsp+2E0h] [rbp+1E0h] BYREF
  _WORD v2510[4]; // [rsp+2F0h] [rbp+1F0h] BYREF
  _BYTE *v2511; // [rsp+2F8h] [rbp+1F8h]
  __int64 v2512; // [rsp+300h] [rbp+200h]
  _QWORD v2513[6]; // [rsp+308h] [rbp+208h] BYREF
  _BYTE v2514[16]; // [rsp+338h] [rbp+238h] BYREF
  _BYTE v2515[16]; // [rsp+348h] [rbp+248h] BYREF
  _BYTE v2516[16]; // [rsp+358h] [rbp+258h] BYREF
  int v2517; // [rsp+368h] [rbp+268h] BYREF
  __int64 v2518; // [rsp+370h] [rbp+270h]
  ULONG_PTR v2519; // [rsp+378h] [rbp+278h]
  __int64 v2520; // [rsp+380h] [rbp+280h]
  _DWORD *v2521; // [rsp+388h] [rbp+288h]
  _BYTE v2522[16]; // [rsp+390h] [rbp+290h] BYREF
  __int64 v2523; // [rsp+3A0h] [rbp+2A0h] BYREF
  __int16 v2524; // [rsp+3A8h] [rbp+2A8h]
  __int16 v2525; // [rsp+3AAh] [rbp+2AAh]
  unsigned __int64 v2526; // [rsp+3C0h] [rbp+2C0h]
  int v2527; // [rsp+3C8h] [rbp+2C8h]
  unsigned int v2528; // [rsp+3CCh] [rbp+2CCh]
  unsigned __int64 v2529; // [rsp+3D0h] [rbp+2D0h]
  _BYTE v2530[16]; // [rsp+3D8h] [rbp+2D8h] BYREF
  __int64 v2531; // [rsp+3E8h] [rbp+2E8h]
  __int64 v2532; // [rsp+3F0h] [rbp+2F0h]
  __int64 v2533; // [rsp+3F8h] [rbp+2F8h]
  __int64 v2534; // [rsp+400h] [rbp+300h]
  __int64 v2535; // [rsp+408h] [rbp+308h]
  __int64 v2536; // [rsp+410h] [rbp+310h]
  __int64 v2537; // [rsp+418h] [rbp+318h]
  __int64 v2538; // [rsp+420h] [rbp+320h]
  __int64 v2539; // [rsp+428h] [rbp+328h]
  __int64 v2540; // [rsp+430h] [rbp+330h]
  __int64 v2541; // [rsp+438h] [rbp+338h]
  char v2542[8]; // [rsp+440h] [rbp+340h] BYREF
  char v2543[8]; // [rsp+448h] [rbp+348h] BYREF
  __int64 v2544; // [rsp+450h] [rbp+350h]
  __int64 v2545; // [rsp+458h] [rbp+358h]
  __int64 v2546; // [rsp+460h] [rbp+360h]
  unsigned int *v2547; // [rsp+468h] [rbp+368h]
  __int64 v2548; // [rsp+470h] [rbp+370h]
  __int64 v2549; // [rsp+478h] [rbp+378h]
  __int64 v2550; // [rsp+480h] [rbp+380h]
  char v2551[8]; // [rsp+488h] [rbp+388h] BYREF
  char v2552[8]; // [rsp+490h] [rbp+390h] BYREF
  char v2553[8]; // [rsp+498h] [rbp+398h] BYREF
  __int64 v2554; // [rsp+4A0h] [rbp+3A0h]
  __int64 v2555; // [rsp+4A8h] [rbp+3A8h]
  __int64 v2556; // [rsp+4B0h] [rbp+3B0h]
  __int64 v2557; // [rsp+4B8h] [rbp+3B8h]
  __int64 v2558; // [rsp+4C0h] [rbp+3C0h]
  __int64 v2559; // [rsp+4C8h] [rbp+3C8h]
  __int64 v2560; // [rsp+4D0h] [rbp+3D0h]
  __int64 v2561; // [rsp+4D8h] [rbp+3D8h]
  __int64 v2562; // [rsp+4E0h] [rbp+3E0h]
  __int64 v2563; // [rsp+4E8h] [rbp+3E8h]
  __int64 v2564; // [rsp+4F8h] [rbp+3F8h]
  __int64 v2565; // [rsp+500h] [rbp+400h]
  __int64 v2566; // [rsp+508h] [rbp+408h]
  __int64 v2567; // [rsp+510h] [rbp+410h]
  __int64 v2568; // [rsp+518h] [rbp+418h]
  __int64 v2569; // [rsp+520h] [rbp+420h]
  __int64 v2570; // [rsp+528h] [rbp+428h]
  __int64 v2571; // [rsp+530h] [rbp+430h]
  __int64 v2572; // [rsp+538h] [rbp+438h]
  __int64 v2573; // [rsp+540h] [rbp+440h]
  __int64 v2574; // [rsp+548h] [rbp+448h]
  __int64 v2575; // [rsp+550h] [rbp+450h]
  __int64 v2576; // [rsp+558h] [rbp+458h]
  __int64 v2577; // [rsp+560h] [rbp+460h]
  __int64 v2578; // [rsp+568h] [rbp+468h]
  __int64 v2579; // [rsp+570h] [rbp+470h]
  __int64 v2580; // [rsp+578h] [rbp+478h]
  __int64 v2581; // [rsp+580h] [rbp+480h]
  __int64 v2582; // [rsp+588h] [rbp+488h]
  __int64 v2583; // [rsp+590h] [rbp+490h]
  __int64 v2584; // [rsp+598h] [rbp+498h]
  __int64 v2585; // [rsp+5A0h] [rbp+4A0h]
  __int64 v2586; // [rsp+5A8h] [rbp+4A8h]
  __int64 v2587; // [rsp+5B0h] [rbp+4B0h]
  __int64 v2588; // [rsp+5B8h] [rbp+4B8h]
  __int64 v2589; // [rsp+5C0h] [rbp+4C0h]
  __int64 v2590; // [rsp+5C8h] [rbp+4C8h]
  __int64 v2591; // [rsp+5D0h] [rbp+4D0h]
  __int64 v2592; // [rsp+5D8h] [rbp+4D8h]
  __int64 v2593; // [rsp+5E0h] [rbp+4E0h]
  __int64 v2594; // [rsp+5E8h] [rbp+4E8h]
  __int64 v2595; // [rsp+5F0h] [rbp+4F0h]
  __int64 v2596; // [rsp+5F8h] [rbp+4F8h]
  __int64 v2597; // [rsp+600h] [rbp+500h]
  __int64 v2598; // [rsp+608h] [rbp+508h]
  __int64 v2599; // [rsp+610h] [rbp+510h]
  __int64 v2600; // [rsp+618h] [rbp+518h]
  __int64 v2601; // [rsp+620h] [rbp+520h]
  __int64 v2602; // [rsp+628h] [rbp+528h]
  __int64 v2603; // [rsp+630h] [rbp+530h]
  __int64 v2604; // [rsp+638h] [rbp+538h]
  __int64 v2605; // [rsp+640h] [rbp+540h]
  __int64 v2606; // [rsp+648h] [rbp+548h]
  __int64 v2607; // [rsp+650h] [rbp+550h]
  __int64 v2608; // [rsp+658h] [rbp+558h]
  __int64 v2609; // [rsp+660h] [rbp+560h]
  __int64 v2610; // [rsp+668h] [rbp+568h]
  __int64 v2611; // [rsp+670h] [rbp+570h]
  __int64 v2612; // [rsp+678h] [rbp+578h]
  __int64 v2613; // [rsp+680h] [rbp+580h]
  __int64 v2614; // [rsp+688h] [rbp+588h]
  __int64 v2615; // [rsp+690h] [rbp+590h]
  __int64 v2616; // [rsp+698h] [rbp+598h]
  __int64 v2617; // [rsp+6A0h] [rbp+5A0h]
  _BYTE v2618[16]; // [rsp+6A8h] [rbp+5A8h] BYREF
  _BYTE v2619[16]; // [rsp+6B8h] [rbp+5B8h] BYREF
  _BYTE v2620[16]; // [rsp+6C8h] [rbp+5C8h] BYREF
  _BYTE v2621[16]; // [rsp+6D8h] [rbp+5D8h] BYREF
  _BYTE v2622[16]; // [rsp+6E8h] [rbp+5E8h] BYREF
  _BYTE v2623[16]; // [rsp+6F8h] [rbp+5F8h] BYREF
  __int64 v2624; // [rsp+708h] [rbp+608h]
  _BYTE v2625[16]; // [rsp+710h] [rbp+610h] BYREF
  _BYTE v2626[16]; // [rsp+720h] [rbp+620h] BYREF
  _BYTE v2627[16]; // [rsp+730h] [rbp+630h] BYREF
  _BYTE v2628[16]; // [rsp+740h] [rbp+640h] BYREF
  _BYTE v2629[16]; // [rsp+750h] [rbp+650h] BYREF
  _BYTE v2630[16]; // [rsp+760h] [rbp+660h] BYREF
  _BYTE v2631[16]; // [rsp+770h] [rbp+670h] BYREF
  __int64 v2632; // [rsp+780h] [rbp+680h]
  _BYTE v2633[24]; // [rsp+788h] [rbp+688h] BYREF
  char v2634[8]; // [rsp+7A0h] [rbp+6A0h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+7A8h] [rbp+6A8h]
  unsigned int v2636; // [rsp+7B4h] [rbp+6B4h]
  __int64 v2637; // [rsp+7B8h] [rbp+6B8h]
  __int64 v2638; // [rsp+7C0h] [rbp+6C0h]
  char v2639[8]; // [rsp+7C8h] [rbp+6C8h] BYREF
  _BYTE v2640[16]; // [rsp+7D0h] [rbp+6D0h] BYREF
  char v2641[16]; // [rsp+7E0h] [rbp+6E0h] BYREF
  char v2642[16]; // [rsp+7F0h] [rbp+6F0h] BYREF
  _QWORD v2643[4]; // [rsp+800h] [rbp+700h] BYREF
  _QWORD v2644[4]; // [rsp+820h] [rbp+720h] BYREF
  char v2645[8]; // [rsp+840h] [rbp+740h] BYREF
  void (__fastcall *v2646)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // [rsp+848h] [rbp+748h]
  _BYTE v2647[24]; // [rsp+858h] [rbp+758h] BYREF
  char v2648[8]; // [rsp+870h] [rbp+770h] BYREF
  char *v2649; // [rsp+878h] [rbp+778h]
  _BYTE v2650[32]; // [rsp+888h] [rbp+788h] BYREF
  _BYTE v2651[32]; // [rsp+8A8h] [rbp+7A8h] BYREF
  _BYTE v2652[32]; // [rsp+8C8h] [rbp+7C8h] BYREF
  _BYTE v2653[32]; // [rsp+8E8h] [rbp+7E8h] BYREF
  _BYTE v2654[32]; // [rsp+908h] [rbp+808h] BYREF
  _BYTE v2655[48]; // [rsp+928h] [rbp+828h] BYREF
  _BYTE v2656[120]; // [rsp+958h] [rbp+858h] BYREF
  unsigned __int64 retaddr; // [rsp+9D8h] [rbp+8D8h]
  __int64 v2659; // [rsp+9E8h] [rbp+8E8h]
  unsigned int v2660; // [rsp+9E8h] [rbp+8E8h]
  BOOL v2661; // [rsp+9E8h] [rbp+8E8h]
  __int64 **v2662; // [rsp+9E8h] [rbp+8E8h]
  int v2663; // [rsp+9E8h] [rbp+8E8h]
  int v2664; // [rsp+9E8h] [rbp+8E8h]
  int v2665; // [rsp+9E8h] [rbp+8E8h]
  unsigned int v2666; // [rsp+9E8h] [rbp+8E8h]
  unsigned __int16 v2667; // [rsp+9E8h] [rbp+8E8h]
  unsigned int v2668; // [rsp+9E8h] [rbp+8E8h]
  unsigned __int8 v2669; // [rsp+9E8h] [rbp+8E8h]
  __int64 v2670; // [rsp+9E8h] [rbp+8E8h]
  unsigned __int8 v2671; // [rsp+9E8h] [rbp+8E8h]
  __int16 v2672; // [rsp+9E8h] [rbp+8E8h]
  int v2673; // [rsp+9E8h] [rbp+8E8h]
  __int64 v2674; // [rsp+9E8h] [rbp+8E8h]
  unsigned __int64 v2675; // [rsp+9E8h] [rbp+8E8h]
  int v2676; // [rsp+9E8h] [rbp+8E8h]
  int v2677; // [rsp+9E8h] [rbp+8E8h]
  int v2678; // [rsp+9E8h] [rbp+8E8h]
  int v2679; // [rsp+9E8h] [rbp+8E8h]
  char v2680; // [rsp+9F0h] [rbp+8F0h] BYREF
  char v2681; // [rsp+9F8h] [rbp+8F8h] BYREF

  v1 = a1;
  if ( (*(_DWORD *)(a1 + 2520) & 0x88000) != 0x88000 )
  {
    v2 = *(_QWORD *)(a1 + 2304);
    v3 = 304;
    v4 = *(_QWORD **)(v1 + 2304);
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
    *(_OWORD *)(v2 + 16) = *(_OWORD *)(v1 + 2152);
    *(_OWORD *)(v2 + 32) = *(_OWORD *)(v1 + 2168);
    *(_OWORD *)(v2 + 288) = *(_OWORD *)(v1 + 2184);
    v2494 = v2;
    v2493 = 303;
    *(_WORD *)(v2 + 16) = v1 + 2200;
    *(_WORD *)(v2 + 22) = (unsigned int)(v1 + 2200) >> 16;
    *(_DWORD *)(v2 + 24) = (unsigned __int64)(v1 + 2200) >> 32;
    _disable();
    if ( (*(_DWORD *)(v1 + 2520) & 0x40000000) != 0 )
    {
      __writedr(7u, 0LL);
    }
    else
    {
      __sidt(v2514);
      __lidt(&v2493);
      __writedr(7u, 0LL);
      __lidt(v2514);
    }
    _enable();
  }
  v300 = (*(_DWORD *)(v1 + 2524) & 0x100) == 0;
  v2449 = 0LL;
  if ( !v300 )
  {
    v2449 = retaddr;
    retaddr = 0LL;
  }
  v6 = 32;
  *(_DWORD *)(v1 + 2120) = 0;
  if ( (*(_DWORD *)(v1 + 2520) & 0x20000000) == 0 || !*(_QWORD *)(v1 + 2752) )
  {
    v7 = *(_QWORD *)(v1 + 2008);
    v8 = (_QWORD *)(v1 + 1976);
    v9 = v2650;
    v10 = (char *)(v1 + 1976);
    v11 = 32;
    v12 = 4LL;
    do
    {
      v11 -= 8;
      *(_QWORD *)v9 = *(_QWORD *)v10;
      v10 += 8;
      v9 += 8;
      --v12;
    }
    while ( v12 );
    for ( ; v11; --v11 )
    {
      v13 = *v10++;
      *v9++ = v13;
    }
    *(_QWORD *)(v1 + 2008) = 0LL;
    v14 = 32;
    *(_DWORD *)(v1 + 2120) = 0;
    v15 = (_QWORD *)(v1 + 1976);
    v16 = 4LL;
    do
    {
      *v15 = 0LL;
      v14 -= 8;
      ++v15;
      --v16;
    }
    while ( v16 );
    for ( ; v14; --v14 )
    {
      *(_BYTE *)v15 = 0;
      v15 = (_QWORD *)((char *)v15 + 1);
    }
    v17 = *(unsigned int *)(v1 + 2052);
    v18 = (_QWORD *)v1;
    *(_DWORD *)(v1 + 2120) += v17;
    v19 = (const char *)v1;
    v20 = *(_DWORD *)(v1 + 2100);
    v21 = *(_QWORD *)(v1 + 2104);
    if ( v1 < (unsigned __int64)(v17 + v1) )
    {
      do
      {
        _mm_prefetch(v19, 0);
        v19 += 64;
      }
      while ( (unsigned __int64)v19 < v17 + v1 );
    }
    v22 = *(_QWORD *)(v1 + 2104);
    v23 = (unsigned int)v17 >> 7;
    if ( (unsigned int)v17 >> 7 )
    {
      do
      {
        v24 = 8LL;
        do
        {
          v25 = v18[1] ^ __ROL8__(*v18 ^ v22, v20);
          v18 += 2;
          v22 = __ROL8__(v25, v20);
          --v24;
        }
        while ( v24 );
        v26 = (__ROL8__(v21 ^ ((unsigned __int64)v18 - v1), 17) ^ v21 ^ ((unsigned __int64)v18 - v1))
            * (unsigned __int128)0x7010008004002001uLL;
        v2600 = *((_QWORD *)&v26 + 1);
        v20 = ((unsigned __int8)(v26 ^ BYTE8(v26)) ^ (unsigned __int8)v20) & 0x3F;
        if ( !v20 )
          LOBYTE(v20) = 1;
        --v23;
      }
      while ( v23 );
      v8 = (_QWORD *)(v1 + 1976);
    }
    v27 = v17 & 0x7F;
    if ( v27 >= 8 )
    {
      v28 = (unsigned __int64)v27 >> 3;
      do
      {
        v22 = __ROL8__(*v18++ ^ v22, v20);
        v27 -= 8;
        --v28;
      }
      while ( v28 );
    }
    if ( v27 )
    {
      do
      {
        v29 = *(unsigned __int8 *)v18;
        v18 = (_QWORD *)((char *)v18 + 1);
        v22 = __ROL8__(v29 ^ v22, v20);
        --v27;
      }
      while ( v27 );
      v1 = a1;
    }
    *(_QWORD *)(v1 + 2008) = v7;
    v30 = v2650;
    v31 = 32;
    v32 = 4LL;
    do
    {
      v31 -= 8;
      *v8 = *(_QWORD *)v30;
      v30 += 8;
      ++v8;
      --v32;
    }
    while ( v32 );
    for ( ; v31; --v31 )
    {
      v33 = *v30++;
      *(_BYTE *)v8 = v33;
      v8 = (_QWORD *)((char *)v8 + 1);
    }
    if ( *(_QWORD *)(v1 + 2008) != v22 )
    {
      v34 = *(_DWORD *)(v1 + 2052);
      v35 = *(_QWORD *)(v1 + 1416);
      *(_QWORD *)v35 = v1;
      *(_DWORD *)(v35 + 16) = v34;
      if ( !*(_DWORD *)(v1 + 2328) )
      {
        *(_QWORD *)(*(_QWORD *)(v1 + 1416) + 24LL) = v22 ^ *(_QWORD *)(v1 + 2008);
        if ( !*(_DWORD *)(v1 + 2328) )
        {
          *(_QWORD *)(v1 + 2336) = v1 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v1 + 2344) = 0LL;
          *(_QWORD *)(v1 + 2352) = 257LL;
          *(_QWORD *)(v1 + 2360) = v22;
          *(_DWORD *)(v1 + 2328) = 1;
          v36 = *(_DWORD *)(v1 + 2520);
          if ( (v36 & 0x20000000) == 0 && (*(_DWORD *)(v1 + 2524) & 0x200000) != 0 && (v36 & 1) != 0 )
          {
            v37 = *(unsigned int *)(v1 + 2676);
            v38 = *(_QWORD *)(v1 + 2104);
            v39 = *(_QWORD *)(v1 + 2680);
            v40 = (_QWORD *)(v37 + v1);
            v41 = v37 + v1 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v1 + 2052) - v37) >> 3);
            while ( v40 != (_QWORD *)v41 )
            {
              *v40 ^= v39;
              v39 = ((v38 ^ *v40++) + __ROR8__(v39, v39 & 0x3F)) ^ 0xEFA;
            }
            *(_DWORD *)(v1 + 2524) &= ~0x200000u;
            if ( v39 != *(_QWORD *)(v1 + 2688) )
            {
              v42 = *(_DWORD *)(v1 + 2052);
              v43 = *(_QWORD *)(v1 + 1416);
              *(_QWORD *)v43 = v1;
              *(_DWORD *)(v43 + 16) = v42;
              if ( !*(_DWORD *)(v1 + 2328) )
                *(_QWORD *)(*(_QWORD *)(v1 + 1416) + 24LL) = v39 ^ *(_QWORD *)(v1 + 2688);
              ProbeAndFlag1(v1, 0LL, v39, 256LL);
            }
          }
        }
      }
    }
  }
  v44 = *(_DWORD *)(v1 + 2520) | 2;
  *(_DWORD *)(v1 + 2520) = v44;
  ++*(_DWORD *)(v1 + 2132);
  if ( (v44 & 4) != 0 && (v44 & 0x400000) == 0 )
  {
    v45 = *(_QWORD *)(v1 + 2744);
    v46 = *(_DWORD *)(v1 + 2052);
    v47 = *(_QWORD *)(v1 + 2624);
    v48 = *(unsigned int *)(v1 + 2088);
    v2659 = v45;
    if ( (*(_DWORD *)(v1 + 2524) & 2) != 0 )
      v47 = *(_QWORD *)(v1 + 1488);
    v49 = *(void (__fastcall **)(_QWORD, _QWORD, unsigned __int64 *))(v1 + 368);
    v2432 = *(_QWORD *)(v1 + 712);
    v2427 = *(_QWORD *)(v1 + 832);
    v2425 = (__int64)v49;
    v50 = __rdtsc();
    v51 = (__ROR8__(v50, 3) ^ v50) * (unsigned __int128)0x7010008004002001uLL;
    v2603 = *((_QWORD *)&v51 + 1);
    v52 = -1200000000LL - ((unsigned __int64)v51 ^ *((_QWORD *)&v51 + 1)) % 0x5F5E100;
    v2469 = v52;
    if ( (v44 & 0x2000000) != 0 )
    {
      v53 = __rdtsc();
      v54 = (__ROR8__(v53, 3) ^ v53) * (unsigned __int128)0x7010008004002001uLL;
      v2604 = *((_QWORD *)&v54 + 1);
      if ( ((unsigned __int64)v54 ^ *((_QWORD *)&v54 + 1)) % 0xA < 2 )
      {
        v55 = __rdtsc();
        v56 = (__ROR8__(v55, 3) ^ v55) * (unsigned __int128)0x7010008004002001uLL;
        v2605 = *((_QWORD *)&v56 + 1);
        v2469 = v52 * (((unsigned __int64)v56 ^ *((_QWORD *)&v56 + 1)) % 0xA + 1);
      }
    }
    v57 = 0LL;
    v58 = 0LL;
    if ( (v44 & 1) == 0 )
      v46 = v48;
    if ( (v44 & 0x40) != 0 )
    {
      v59 = 1;
      v60 = __rdtsc();
      v61 = (__ROR8__(v60, 3) ^ v60) * (unsigned __int128)0x7010008004002001uLL;
      v62 = 349;
      v63 = *((_QWORD *)&v61 + 1);
      v2606 = *((_QWORD *)&v61 + 1);
      v64 = a1;
      v57 = v61 ^ v63;
      v65 = v57;
      v58 = a1 ^ v57;
      v66 = (_QWORD *)(a1 + 2784);
      do
      {
        *v66-- ^= v65;
        v65 = __ROR8__(v65, v62--);
      }
      while ( v62 );
      v67 = v48;
      v68 = (unsigned __int64)(v48 - 2792) >> 3;
      if ( (_DWORD)v68 )
      {
        v69 = (__int64 *)(a1 + 8 * ((int)v68 + 348LL));
        do
        {
          v70 = *v69--;
          v58 = (2 * v58) ^ __ROR8__(v70, v68);
          LODWORD(v68) = v68 - 1;
        }
        while ( (_DWORD)v68 );
        v45 = v2659;
        v67 = v48;
        v64 = a1;
      }
      v71 = v67 + v64;
      v72 = (v46 - (unsigned int)v48) >> 3;
      if ( (_DWORD)v72 )
      {
        v73 = (_QWORD *)(v71 + 8 * v72 - 8);
        do
        {
          *v73-- ^= v65;
          v65 = __ROR8__(v65, v72);
          LODWORD(v72) = v72 - 1;
        }
        while ( (_DWORD)v72 );
      }
      v49 = (void (__fastcall *)(_QWORD, _QWORD, unsigned __int64 *))v2425;
    }
    else
    {
      v59 = 0;
    }
    if ( v45 )
    {
      ((void (__fastcall *)(__int64, _QWORD, unsigned __int64 *, void (__fastcall *)(_QWORD, _QWORD, unsigned __int64 *), __int64))v2427)(
        a1,
        v46,
        &v2469,
        v49,
        v45);
    }
    else if ( v47 )
    {
      ((void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, unsigned __int64 *))v2432)(v47, 0LL, 0LL, 0LL, &v2469);
    }
    else
    {
      v49(0LL, 0LL, &v2469);
    }
    v300 = v59 == 0;
    v1 = a1;
    if ( v300 )
      goto LABEL_104;
    v74 = (_QWORD *)(a1 + 2784);
    v75 = a1 ^ v57;
    v76 = 349;
    do
    {
      *v74-- ^= v57;
      v57 = __ROR8__(v57, v76--);
    }
    while ( v76 );
    v77 = v48;
    v78 = (unsigned __int64)(v48 - 2792) >> 3;
    if ( (_DWORD)v78 )
    {
      v79 = (__int64 *)(a1 + 2784 + 8LL * (int)v78);
      do
      {
        v80 = *v79--;
        v75 = (2 * v75) ^ __ROR8__(v80, v78);
        LODWORD(v78) = v78 - 1;
      }
      while ( (_DWORD)v78 );
      v77 = v48;
    }
    v81 = (v46 - (unsigned int)v48) >> 3;
    if ( v81 )
    {
      v82 = (_QWORD *)(v77 + a1 + 8 * (v81 - 1LL));
      do
      {
        *v82 ^= v57;
        v57 = __ROR8__(v57, v81);
        --v82;
        --v81;
      }
      while ( v81 );
    }
    if ( v75 == v58
      || (v83 = *(_QWORD *)(a1 + 1416),
          v84 = *(_DWORD *)(a1 + 2052),
          *(_QWORD *)v83 = a1,
          *(_DWORD *)(v83 + 16) = v84,
          *(_DWORD *)(a1 + 2328))
      || (*(_QWORD *)(*(_QWORD *)(a1 + 1416) + 24LL) = v58 ^ v75, *(_DWORD *)(a1 + 2328)) )
    {
LABEL_104:
      v6 = 32;
    }
    else
    {
      *(_QWORD *)(a1 + 2336) = a1 - 0x5C5FC0A76E374B18LL;
      *(_QWORD *)(a1 + 2344) = 0LL;
      *(_QWORD *)(a1 + 2352) = 270LL;
      *(_QWORD *)(a1 + 2360) = v75;
      *(_DWORD *)(a1 + 2328) = 1;
      v85 = *(_DWORD *)(a1 + 2520);
      if ( (v85 & 0x20000000) == 0 && (*(_DWORD *)(a1 + 2524) & 0x200000) != 0 && (v85 & 1) != 0 )
      {
        v86 = *(unsigned int *)(a1 + 2676);
        v87 = *(_QWORD *)(a1 + 2104);
        v88 = *(_QWORD *)(a1 + 2680);
        v89 = (_QWORD *)(v86 + a1);
        v90 = v86 + a1 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(a1 + 2052) - v86) >> 3);
        while ( v89 != (_QWORD *)v90 )
        {
          *v89 ^= v88;
          v88 = ((v87 ^ *v89++) + __ROR8__(v88, v88 & 0x3F)) ^ 0xEFA;
        }
        *(_DWORD *)(a1 + 2524) &= ~0x200000u;
        if ( v88 != *(_QWORD *)(a1 + 2688) )
        {
          v91 = *(_DWORD *)(a1 + 2052);
          v92 = *(_QWORD *)(a1 + 1416);
          *(_QWORD *)v92 = a1;
          *(_DWORD *)(v92 + 16) = v91;
          if ( !*(_DWORD *)(a1 + 2328) )
            *(_QWORD *)(*(_QWORD *)(a1 + 1416) + 24LL) = v88 ^ *(_QWORD *)(a1 + 2688);
          ProbeAndFlag1(a1, 0LL, v88, 256LL);
        }
      }
      v6 = 32;
    }
  }
  v93 = *(_DWORD *)(v1 + 196);
  *(_DWORD *)(v1 + 196) = 0;
  v94 = v1;
  *(_DWORD *)(v1 + 2120) += 1584;
  v95 = (const char *)v1;
  v96 = *(_DWORD *)(v1 + 2100);
  v97 = *(_QWORD *)(v1 + 2104);
  if ( v1 < (unsigned __int64)(v1 + 1584) )
  {
    do
    {
      _mm_prefetch(v95, 0);
      v95 += 64;
    }
    while ( (unsigned __int64)v95 < v1 + 1584 );
  }
  v98 = *(_QWORD *)(v1 + 2104);
  v99 = 12;
  do
  {
    v100 = 8LL;
    do
    {
      v101 = *(_QWORD *)(v94 + 8) ^ __ROL8__(*(_QWORD *)v94 ^ v98, v96);
      v94 += 16LL;
      v98 = __ROL8__(v101, v96);
      --v100;
    }
    while ( v100 );
    v102 = (__ROL8__(v97 ^ (v94 - v1), 17) ^ v97 ^ (v94 - v1)) * (unsigned __int128)0x7010008004002001uLL;
    v2607 = *((_QWORD *)&v102 + 1);
    v96 = ((unsigned __int8)(v102 ^ BYTE8(v102)) ^ (unsigned __int8)v96) & 0x3F;
    if ( !v96 )
      LOBYTE(v96) = 1;
    --v99;
  }
  while ( v99 );
  v103 = 6;
  v104 = 6LL;
  v105 = 48;
  do
  {
    v98 = __ROL8__(*(_QWORD *)v94 ^ v98, v96);
    v94 += 8LL;
    v105 -= 8;
    --v104;
  }
  while ( v104 );
  if ( v105 )
  {
    do
    {
      v106 = *(unsigned __int8 *)v94++;
      v98 = __ROL8__(v106 ^ v98, v96);
      --v105;
    }
    while ( v105 );
    v1 = a1;
  }
  *(_DWORD *)(v1 + 196) = v93;
  if ( *(_QWORD *)(v1 + 2664) != v98 )
  {
    v107 = *(_QWORD *)(v1 + 1416);
    v108 = *(_DWORD *)(v1 + 2052);
    *(_QWORD *)v107 = v1;
    *(_DWORD *)(v107 + 16) = v108;
    if ( !*(_DWORD *)(v1 + 2328) )
    {
      *(_QWORD *)(*(_QWORD *)(v1 + 1416) + 24LL) = *(_QWORD *)(v1 + 2664) ^ v98;
      if ( !*(_DWORD *)(v1 + 2328) )
      {
        *(_QWORD *)(v1 + 2336) = v1 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(v1 + 2344) = 0LL;
        *(_QWORD *)(v1 + 2352) = 265LL;
        *(_QWORD *)(v1 + 2360) = v98;
        *(_DWORD *)(v1 + 2328) = 1;
        v109 = *(_DWORD *)(v1 + 2520);
        if ( (v109 & 0x20000000) == 0 && (*(_DWORD *)(v1 + 2524) & 0x200000) != 0 && (v109 & 1) != 0 )
        {
          v110 = *(unsigned int *)(v1 + 2676);
          v111 = *(_QWORD *)(v1 + 2104);
          v112 = *(_QWORD *)(v1 + 2680);
          v113 = (_QWORD *)(v110 + v1);
          v94 = v110 + v1 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v1 + 2052) - v110) >> 3);
          while ( v113 != (_QWORD *)v94 )
          {
            *v113 ^= v112;
            v112 = ((v111 ^ *v113++) + __ROR8__(v112, v112 & 0x3F)) ^ 0xEFA;
          }
          *(_DWORD *)(v1 + 2524) &= ~0x200000u;
          if ( v112 != *(_QWORD *)(v1 + 2688) )
          {
            v114 = *(_DWORD *)(v1 + 2052);
            v115 = *(_QWORD *)(v1 + 1416);
            *(_QWORD *)v115 = v1;
            *(_DWORD *)(v115 + 16) = v114;
            if ( !*(_DWORD *)(v1 + 2328) )
              *(_QWORD *)(*(_QWORD *)(v1 + 1416) + 24LL) = v112 ^ *(_QWORD *)(v1 + 2688);
            ProbeAndFlag1(v1, 0LL, v112, 256LL);
          }
        }
      }
    }
  }
  v116 = *(_DWORD *)(v1 + 2520);
  if ( (v116 & 0x20000000) == 0 && (*(_DWORD *)(v1 + 2524) & 0x200000) != 0 && (v116 & 1) != 0 )
  {
    v117 = *(unsigned int *)(v1 + 2676);
    v118 = *(_QWORD *)(v1 + 2104);
    v119 = *(_QWORD *)(v1 + 2680);
    v120 = (_QWORD *)(v117 + v1);
    v94 = v117 + v1 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v1 + 2052) - v117) >> 3);
    while ( v120 != (_QWORD *)v94 )
    {
      *v120 ^= v119;
      v119 = ((v118 ^ *v120++) + __ROR8__(v119, v119 & 0x3F)) ^ 0xEFA;
    }
    *(_DWORD *)(v1 + 2524) &= ~0x200000u;
    if ( v119 != *(_QWORD *)(v1 + 2688) )
    {
      v121 = *(_DWORD *)(v1 + 2052);
      v122 = *(_QWORD *)(v1 + 1416);
      *(_QWORD *)v122 = v1;
      *(_DWORD *)(v122 + 16) = v121;
      if ( !*(_DWORD *)(v1 + 2328) )
      {
        *(_QWORD *)(*(_QWORD *)(v1 + 1416) + 24LL) = v119 ^ *(_QWORD *)(v1 + 2688);
        if ( !*(_DWORD *)(v1 + 2328) )
        {
          *(_QWORD *)(v1 + 2336) = v1 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v1 + 2344) = 0LL;
          *(_QWORD *)(v1 + 2352) = 256LL;
          *(_QWORD *)(v1 + 2360) = v119;
          *(_DWORD *)(v1 + 2328) = 1;
          ProbeAndFlag2(v1, 0LL);
        }
      }
    }
  }
  v300 = (*(_DWORD *)(v1 + 2520) & 0x20000000) == 0;
  i38 = v1;
  v2426 = v1;
  v124 = v1;
  if ( v300 )
  {
    v125 = *(_DWORD *)(v1 + 2488);
    if ( v125 )
    {
      if ( v125 != 1 )
        goto LABEL_256;
    }
    else
    {
      v147 = *(const char **)(v1 + 1552);
      if ( !v147 || !*(_QWORD *)v147 )
        goto LABEL_256;
      v148 = *(_DWORD *)(v1 + 2136);
      v124 = a1;
      v149 = *(unsigned int *)(v1 + 2052);
      if ( v148 != 7 )
        v6 = 0;
      v150 = v149 + 48;
      if ( (unsigned int)(v149 + 48) <= *(_DWORD *)(a1 + 2660) )
      {
        i38 = a1;
        v2426 = a1;
        *(_DWORD *)(a1 + 2052) = v150;
      }
      else
      {
        v2426 = sub_140BC9AF8((_DWORD *)a1, v150, *(_DWORD *)(a1 + 2372));
        i38 = v2426;
        if ( !v2426 )
          goto LABEL_256;
        v151 = *(_DWORD *)(a1 + 2520);
        if ( (v151 & 2) == 0 )
        {
          v152 = *(_DWORD *)(a1 + 2052);
          v153 = *(_QWORD *)(a1 + 2024);
          v154 = (v151 & 0x10000000) != 0;
          v155 = (_QWORD *)a1;
          v156 = v154 ? *(_DWORD *)(a1 + 2372) : 0;
          if ( v152 >= 8 )
          {
            v157 = (unsigned __int64)v152 >> 3;
            do
            {
              *v155 = 0LL;
              v152 -= 8;
              ++v155;
              --v157;
            }
            while ( v157 );
          }
          for ( ; v152; --v152 )
          {
            *(_BYTE *)v155 = 0;
            v155 = (_QWORD *)((char *)v155 + 1);
          }
          v158 = *(_DWORD *)(i38 + 2372);
          *(_DWORD *)(i38 + 2372) = v156;
          if ( v156 == 3 )
          {
            (*(void (__fastcall **)(__int64))(i38 + 872))(v153);
          }
          else if ( (*(_DWORD *)(i38 + 2520) & 0x8000000) != 0 || !v156 )
          {
            (*(void (__fastcall **)(__int64))(i38 + 264))(v153);
          }
          else
          {
            (*(void (__fastcall **)(__int64, _QWORD))(i38 + 568))(v153 - 8, *(_QWORD *)(v153 - 8));
          }
          *(_DWORD *)(i38 + 2372) = v158;
        }
        *(_DWORD *)(i38 + 2520) &= ~2u;
      }
      v159 = i38 + v149;
      ++*(_DWORD *)(i38 + 2092);
      v2608 = i38 + v149;
      v160 = 48;
      v161 = (_QWORD *)(i38 + v149);
      v162 = 6LL;
      do
      {
        *v161 = 0LL;
        v160 -= 8;
        ++v161;
        --v162;
      }
      while ( v162 );
      for ( ; v160; --v160 )
      {
        *(_BYTE *)v161 = 0;
        v161 = (_QWORD *)((char *)v161 + 1);
      }
      *(_DWORD *)v159 = v6;
      *(_QWORD *)(v159 + 8) = v147;
      if ( v148 == 7 )
        sub_14051F4BC(i38, (__int64)v147, 8u, v159 + 24);
      *(_DWORD *)(v159 + 16) = 8;
      *(_DWORD *)(i38 + 2120) += 8;
      for ( i = v147; i < v147 + 8; i += 64 )
        _mm_prefetch(i, 0);
      v164 = __ROL8__(*(_QWORD *)v147 ^ *(_QWORD *)(i38 + 2104), *(_DWORD *)(i38 + 2100));
      for ( j = v164; ; LODWORD(v164) = j ^ v164 )
      {
        j >>= 31;
        if ( !j )
          break;
      }
      *(_DWORD *)(v159 + 20) = v164 & 0x7FFFFFFF;
      *(_DWORD *)(i38 + 2120) += 8;
      if ( !i38 )
      {
        v124 = a1;
        goto LABEL_256;
      }
      ++*(_DWORD *)(i38 + 2488);
    }
    v126 = *(_QWORD **)(i38 + 1552);
    v124 = i38;
    if ( v126 && *v126 )
    {
      v127 = **(_QWORD **)(i38 + 1552);
      _InterlockedOr(v2421, 0);
      v128 = *(unsigned int *)(v127 + 2052);
      v94 = v127;
      v129 = *(_DWORD *)(v127 + 2100);
      v130 = (const char *)v127;
      v131 = *(_QWORD *)(v127 + 2104);
      if ( v127 < (unsigned __int64)(v127 + v128) )
      {
        do
        {
          _mm_prefetch(v130, 0);
          v130 += 64;
        }
        while ( (unsigned __int64)v130 < v127 + v128 );
      }
      v132 = *(_QWORD *)(v127 + 2104);
      v133 = (unsigned int)v128 >> 7;
      if ( (unsigned int)v128 >> 7 )
      {
        do
        {
          v134 = 8LL;
          do
          {
            v135 = *(_QWORD *)(v94 + 8) ^ __ROL8__(*(_QWORD *)v94 ^ v132, v129);
            v94 += 16LL;
            v132 = __ROL8__(v135, v129);
            --v134;
          }
          while ( v134 );
          v136 = (__ROL8__(v131 ^ (v94 - v127), 17) ^ v131 ^ (v94 - v127)) * (unsigned __int128)0x7010008004002001uLL;
          v2609 = *((_QWORD *)&v136 + 1);
          v129 = ((unsigned __int8)v136 ^ (unsigned __int8)(BYTE8(v136) ^ v129)) & 0x3F;
          if ( !v129 )
            LOBYTE(v129) = 1;
          --v133;
        }
        while ( v133 );
        i38 = v2426;
      }
      v137 = v128 & 0x7F;
      if ( v137 >= 8 )
      {
        v138 = (unsigned __int64)v137 >> 3;
        do
        {
          v132 = __ROL8__(*(_QWORD *)v94 ^ v132, v129);
          v94 += 8LL;
          v137 -= 8;
          --v138;
        }
        while ( v138 );
      }
      for ( ; v137; --v137 )
      {
        v139 = *(unsigned __int8 *)v94++;
        v132 = __ROL8__(v139 ^ v132, v129);
      }
      v140 = *(unsigned int *)(v127 + 2052);
      if ( v132 == **(_QWORD **)(i38 + 1560) )
      {
        v168 = *(unsigned int *)(i38 + 2052);
        v169 = 32;
        v171 = *(_DWORD *)(i38 + 2372);
        LODWORD(v2428) = *(_DWORD *)(i38 + 2136);
        v170 = v2428;
        v2660 = v168;
        v172 = v168 + 48;
        if ( (_DWORD)v2428 != 7 )
          v169 = 0;
        if ( v172 <= *(_DWORD *)(i38 + 2660) )
        {
          v124 = i38;
          *(_DWORD *)(i38 + 2052) = v172;
        }
        else
        {
          v124 = sub_140BC9AF8((_DWORD *)i38, v172, v171);
          if ( !v124 )
          {
LABEL_257:
            v103 = 6;
            goto LABEL_258;
          }
          v173 = *(_DWORD *)(i38 + 2520);
          if ( (v173 & 2) == 0 )
          {
            v174 = *(_DWORD *)(i38 + 2052);
            v175 = *(_QWORD *)(i38 + 2024);
            v154 = (v173 & 0x10000000) != 0;
            v176 = (_QWORD *)i38;
            v177 = v154 ? *(_DWORD *)(i38 + 2372) : 0;
            if ( v174 >= 8 )
            {
              v178 = (unsigned __int64)v174 >> 3;
              do
              {
                *v176 = 0LL;
                v174 -= 8;
                ++v176;
                --v178;
              }
              while ( v178 );
            }
            for ( ; v174; --v174 )
            {
              *(_BYTE *)v176 = 0;
              v176 = (_QWORD *)((char *)v176 + 1);
            }
            v179 = *(_DWORD *)(v124 + 2372);
            *(_DWORD *)(v124 + 2372) = v177;
            if ( v177 == 3 )
            {
              (*(void (__fastcall **)(__int64))(v124 + 872))(v175);
            }
            else if ( (*(_DWORD *)(v124 + 2520) & 0x8000000) != 0 || !v177 )
            {
              (*(void (__fastcall **)(__int64))(v124 + 264))(v175);
            }
            else
            {
              (*(void (__fastcall **)(__int64, _QWORD))(v124 + 568))(v175 - 8, *(_QWORD *)(v175 - 8));
            }
            *(_DWORD *)(v124 + 2372) = v179;
            v168 = v2660;
          }
          *(_DWORD *)(v124 + 2520) &= ~2u;
          v170 = v2428;
        }
        ++*(_DWORD *)(v124 + 2092);
        v180 = v124 + v168;
        v181 = (_QWORD *)v180;
        v182 = 48;
        v2610 = v180;
        v183 = 6LL;
        do
        {
          *v181 = 0LL;
          v182 -= 8;
          ++v181;
          --v183;
        }
        while ( v183 );
        for ( ; v182; --v182 )
        {
          *(_BYTE *)v181 = 0;
          v181 = (_QWORD *)((char *)v181 + 1);
        }
        *(_DWORD *)v180 = v169;
        *(_QWORD *)(v180 + 8) = v127;
        if ( v170 == 7 && (_DWORD)v140 )
          sub_14051F4BC(v124, v127, v140, v180 + 24);
        *(_DWORD *)(v180 + 16) = v140;
        *(_DWORD *)(v124 + 2120) += v140;
        v94 = v127;
        v184 = *(_DWORD *)(v124 + 2100);
        v185 = (const char *)v127;
        v186 = *(_QWORD *)(v124 + 2104);
        if ( v127 < (unsigned __int64)(v127 + v140) )
        {
          do
          {
            _mm_prefetch(v185, 0);
            v185 += 64;
          }
          while ( (unsigned __int64)v185 < v127 + v140 );
        }
        v187 = *(_QWORD *)(v124 + 2104);
        v188 = (unsigned int)v140 >> 7;
        if ( (unsigned int)v140 >> 7 )
        {
          do
          {
            v189 = 8LL;
            do
            {
              v190 = *(_QWORD *)(v94 + 8) ^ __ROL8__(*(_QWORD *)v94 ^ v187, v184);
              v94 += 16LL;
              v187 = __ROL8__(v190, v184);
              --v189;
            }
            while ( v189 );
            v191 = (__ROL8__(v186 ^ (v94 - v127), 17) ^ v186 ^ (v94 - v127)) * (unsigned __int128)0x7010008004002001uLL;
            v2611 = *((_QWORD *)&v191 + 1);
            v184 = ((unsigned __int8)v191 ^ (unsigned __int8)(BYTE8(v191) ^ v184)) & 0x3F;
            if ( !v184 )
              LOBYTE(v184) = 1;
            --v188;
          }
          while ( v188 );
          i38 = v2426;
        }
        v192 = v140 & 0x7F;
        if ( v192 >= 8 )
        {
          v193 = (unsigned __int64)(v140 & 0x7F) >> 3;
          do
          {
            v187 = __ROL8__(*(_QWORD *)v94 ^ v187, v184);
            v94 += 8LL;
            v192 -= 8;
            --v193;
          }
          while ( v193 );
        }
        if ( v192 )
        {
          do
          {
            v194 = *(unsigned __int8 *)v94++;
            v187 = __ROL8__(v194 ^ v187, v184);
            --v192;
          }
          while ( v192 );
          i38 = v2426;
        }
        for ( k = v187; ; LODWORD(v187) = k ^ v187 )
        {
          k >>= 31;
          if ( !k )
            break;
        }
        *(_DWORD *)(v180 + 20) = v187 & 0x7FFFFFFF;
        *(_DWORD *)(v124 + 2120) += v140;
        if ( !v124 )
          goto LABEL_257;
        ++*(_DWORD *)(v124 + 2488);
      }
      else
      {
        v141 = *(_QWORD *)(i38 + 1416);
        *(_QWORD *)v141 = v127;
        *(_DWORD *)(v141 + 16) = v140;
        if ( !*(_DWORD *)(i38 + 2328) )
        {
          *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v132 ^ **(_QWORD **)(i38 + 1560);
          if ( !*(_DWORD *)(i38 + 2328) )
          {
            *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(i38 + 2344) = 0LL;
            *(_QWORD *)(i38 + 2352) = 273LL;
            *(_QWORD *)(i38 + 2360) = v132;
            *(_DWORD *)(i38 + 2328) = 1;
            v142 = *(_DWORD *)(i38 + 2520);
            if ( (v142 & 0x20000000) == 0 && (*(_DWORD *)(i38 + 2524) & 0x200000) != 0 && (v142 & 1) != 0 )
            {
              v143 = *(unsigned int *)(i38 + 2676);
              v144 = *(_QWORD *)(i38 + 2104);
              v145 = *(_QWORD *)(i38 + 2680);
              v146 = (_QWORD *)(v143 + i38);
              v94 = v143 + i38 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v143) >> 3);
              while ( v146 != (_QWORD *)v94 )
              {
                *v146 ^= v145;
                v145 = ((v144 ^ *v146++) + __ROR8__(v145, v145 & 0x3F)) ^ 0xEFA;
              }
              *(_DWORD *)(i38 + 2524) &= ~0x200000u;
              if ( v145 != *(_QWORD *)(i38 + 2688) )
              {
                v166 = *(_QWORD *)(i38 + 1416);
                v167 = *(_DWORD *)(i38 + 2052);
                *(_QWORD *)v166 = i38;
                *(_DWORD *)(v166 + 16) = v167;
                if ( !*(_DWORD *)(i38 + 2328) )
                  *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v145 ^ *(_QWORD *)(i38 + 2688);
                ProbeAndFlag1(i38, 0LL, v145, 256LL);
              }
            }
          }
        }
        v124 = i38;
      }
    }
LABEL_256:
    v2426 = v124;
    i38 = v124;
    goto LABEL_257;
  }
  v2426 = v1;
LABEL_258:
  v196 = *(_DWORD *)(i38 + 2524);
  if ( (v196 & 8) == 0
    || (v196 & 0x1000) != 0
    || (v197 = __rdtsc(),
        v198 = __ROR8__(v197, 3) ^ v197,
        v2612 = (v198 * (unsigned __int128)0x7010008004002001uLL) >> 64,
        (((unsigned __int8)v198 ^ (unsigned __int8)v2612) & 3) != 0)
    || (v199 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(i38 + 256))(
                 64LL,
                 *(_QWORD *)(i38 + 1912),
                 *(unsigned int *)(i38 + 2096))) == 0 )
  {
LABEL_269:
    m = 0LL;
    v2447 = 0;
  }
  else
  {
    (*(void (__fastcall **)(__int64, _QWORD))(i38 + 440))(v199, *(unsigned __int16 *)(i38 + 1920));
    v200 = *(unsigned int *)(*(_QWORD *)(i38 + 1784) + *(_QWORD *)(i38 + 1296));
    if ( (_DWORD)v200 )
    {
      v201 = __rdtsc();
      v202 = (__ROR8__(v201, 3) ^ v201) * (unsigned __int128)0x7010008004002001uLL;
      v2613 = *((_QWORD *)&v202 + 1);
      v200 = (*((_QWORD *)&v202 + 1) ^ (unsigned __int64)v202) % v200;
    }
    v203 = 0LL;
    while ( 1 )
    {
      v204 = (*(__int64 (__fastcall **)(__int64))(i38 + 944))(v203);
      v205 = v204;
      if ( !v204 )
        goto LABEL_268;
      v203 = v204;
      if ( !(_DWORD)v200 )
        break;
      LODWORD(v200) = v200 - 1;
    }
    if ( (*(int (__fastcall **)(__int64))(i38 + 928))(v204) < 0 )
    {
      (*(void (__fastcall **)(__int64))(i38 + 952))(v205);
LABEL_268:
      (*(void (__fastcall **)(__int64))(i38 + 264))(v199);
      goto LABEL_269;
    }
    (*(void (__fastcall **)(__int64, _BYTE *))(i38 + 1080))(v205, v2656);
    (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD))(i38 + 472))(v205, v199, 0LL, 0LL, 0LL);
    v215 = __rdtsc();
    v216 = (__ROR8__(v215, 3) ^ v215) * (unsigned __int128)0x7010008004002001uLL;
    v2614 = *((_QWORD *)&v216 + 1);
    v217 = ((unsigned __int64)v216 ^ *((_QWORD *)&v216 + 1))
         % (*(unsigned int (__fastcall **)(__int64))(i38 + 464))(v199);
    _disable();
    _enable();
    (*(void (__fastcall **)(_BYTE *, _QWORD))(i38 + 432))(v2530, 0LL);
    (*(void (__fastcall **)(_BYTE *, __int64))(i38 + 448))(v2633, v199);
    while ( (*(int (__fastcall **)(unsigned int *, _BYTE *))(i38 + 456))(&v2461, v2633) >= 0 )
    {
      if ( !(_DWORD)v217 )
      {
        (*(void (__fastcall **)(_BYTE *, _QWORD))(i38 + 432))(v2530, v2461);
        break;
      }
      LODWORD(v217) = v217 - 1;
    }
    (*(void (__fastcall **)(_BYTE *, _BYTE *))(i38 + 480))(v2530, v2631);
    (*(void (__fastcall **)(__int64))(i38 + 264))(v199);
    v2447 = 1;
    m = 0LL;
  }
  v2457 = 0LL;
  v207 = &v2458;
  v208 = 4;
  do
  {
    *(_BYTE *)v207 = 0;
    v207 = (unsigned int *)((char *)v207 + 1);
    --v208;
  }
  while ( v208 );
  LODWORD(i29) = *(_DWORD *)(i38 + 2124);
  *((_QWORD *)&i29 + 1) = 40LL;
  v210 = *(_DWORD *)(i38 + 2112);
  v2451 = v210;
  if ( *(_DWORD *)(i38 + 2120) >= (int)i29 )
    goto LABEL_3050;
  while ( 2 )
  {
    if ( (*(_DWORD *)(i38 + 2520) & 0x88000) != 0x88000 )
      __writedr(7u, 0LL);
    if ( v210 == *(_DWORD *)(i38 + 2092) )
    {
      ++*(_DWORD *)(i38 + 2128);
      v210 = 0;
      v2451 = 0;
    }
    v211 = i38;
    v94 = 0LL;
    if ( *(_QWORD *)(i38 + 2752) )
      v211 = *(_QWORD *)(i38 + 2752);
    v212 = (char *)(v211 + *(unsigned int *)(v211 + 2088));
    v2424 = v212;
    if ( (_DWORD)v2457 && HIDWORD(v2457) <= v210 )
    {
      v94 = HIDWORD(v2457);
      v212 = (char *)(v211 + v2458);
      v2424 = v212;
    }
    if ( (_DWORD)v94 != v210 )
    {
      v213 = v210 - (unsigned int)v94;
      v94 = v210;
      while ( 1 )
      {
        if ( *(_DWORD *)v212 == 1 )
        {
LABEL_309:
          v214 = 4 * (*((_DWORD *)v212 + 4) / 0xCu) + 48;
          goto LABEL_310;
        }
        if ( *(_DWORD *)v212 == 7 )
        {
          v214 = (unsigned int)(24 * (*((_DWORD *)v212 + 6) + 2));
          goto LABEL_310;
        }
        if ( *(_DWORD *)v212 == 8 )
          break;
        switch ( *(_DWORD *)v212 )
        {
          case 0xA:
            v214 = (unsigned int)(16 * (*((_DWORD *)v212 + 7) + 3));
            break;
          case 0x1C:
            v218 = *((unsigned __int16 *)v212 + 20);
LABEL_307:
            v214 = (v218 + 55) & 0xFFFFFFF8;
            break;
          case 0x1E:
            v214 = (((*((_DWORD *)v212 + 9) != 0 ? *((_DWORD *)v212 + 9) - 1 : 0) / 0xCu + 7) & 0xFFFFFFF8)
                 + 24 * (*((unsigned __int16 *)v212 + 20) + 2);
            break;
          case 0x21:
            v214 = 20
                 * (unsigned int)(((*((_DWORD *)v212 + 8) & 0xFFF)
                                 + (unsigned __int64)*((unsigned int *)v212 + 10)
                                 + 4095) >> 12)
                 + 48;
            break;
          case 0x2B:
            goto LABEL_309;
          default:
            v214 = 48LL;
            break;
        }
LABEL_310:
        v212 += v214;
        if ( !--v213 )
        {
          i38 = v2426;
          *((_QWORD *)&i29 + 1) = 40LL;
          v2424 = v212;
          goto LABEL_312;
        }
      }
      v218 = *((unsigned __int16 *)v212 + 16);
      goto LABEL_307;
    }
LABEL_312:
    LODWORD(v2457) = 1;
    HIDWORD(v2457) = v94;
    v2458 = (_DWORD)v212 - v211;
    v219 = *(_DWORD *)v212;
    v2431 = v219;
    if ( v219 > 30 )
    {
      if ( v219 <= 40 )
      {
        if ( v219 == 40 )
          goto LABEL_1924;
        if ( v219 != 31 )
        {
          if ( v219 == 32 )
          {
            sub_1405206A8(i38, v212);
            goto LABEL_406;
          }
          if ( v219 == 33 )
          {
            sub_14051F5A4(i38, v212);
            goto LABEL_406;
          }
          if ( v219 != 35 )
          {
            if ( v219 != 36 )
            {
              if ( v219 == 37 )
              {
                if ( (*(_DWORD *)(i38 + 2524) & 4) != 0 )
                  goto LABEL_406;
                if ( !(*(unsigned __int8 (**)(void))(i38 + 1064))() )
                  goto LABEL_406;
                if ( *(_DWORD *)(i38 + 2328) )
                  goto LABEL_406;
                *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(i38 + 2344) = v212 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(i38 + 2352) = *(int *)v212;
                *(_QWORD *)(i38 + 2360) = 0LL;
                *(_DWORD *)(i38 + 2328) = 1;
                v1283 = *(_DWORD *)(i38 + 2520);
                if ( (v1283 & 0x20000000) != 0 || (*(_DWORD *)(i38 + 2524) & 0x200000) == 0 || (v1283 & 1) == 0 )
                  goto LABEL_406;
                v1284 = *(unsigned int *)(i38 + 2676);
                v1285 = *(_QWORD *)(i38 + 2104);
                v1187 = *(_QWORD *)(i38 + 2680);
                *((_QWORD *)&i29 + 1) = v1284 + i38;
                v94 = v1284 + i38 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v1284) >> 3);
                while ( *((_QWORD *)&i29 + 1) != v94 )
                {
                  **((_QWORD **)&i29 + 1) ^= v1187;
                  v1187 = ((v1285 ^ **((_QWORD **)&i29 + 1)) + __ROR8__(v1187, v1187 & 0x3F)) ^ 0xEFA;
                  *((_QWORD *)&i29 + 1) += 8LL;
                }
                goto LABEL_1797;
              }
              if ( v219 == 38 )
              {
                (*(void (__fastcall **)(_BYTE *, _QWORD))(i38 + 432))(v2623, *((unsigned int *)v212 + 11));
                v1275 = (*(__int64 (__fastcall **)(_BYTE *, _BYTE *))(i38 + 480))(v2623, v2640);
                __asm { xgetbv }
                v1277 = v1275 | (v1276 << 32);
                (*(void (__fastcall **)(_BYTE *))(i38 + 424))(v2640);
                *((_QWORD *)&i29 + 1) = *((_QWORD *)v212 + 4);
                v1278 = v1277 & *((_QWORD *)v212 + 3);
                if ( v1278 == *((_QWORD *)&i29 + 1) )
                  goto LABEL_406;
                v1279 = *((_QWORD *)v212 + 5);
                if ( *(_DWORD *)(i38 + 2328) )
                  goto LABEL_406;
                *((_QWORD *)&i29 + 1) ^= v1278;
                *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = *((_QWORD *)&i29 + 1);
                if ( *(_DWORD *)(i38 + 2328) )
                  goto LABEL_406;
                *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(i38 + 2344) = v212 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(i38 + 2352) = *(int *)v212;
                *(_QWORD *)(i38 + 2360) = v1279;
                *(_DWORD *)(i38 + 2328) = 1;
                v1280 = *(_DWORD *)(i38 + 2520);
                if ( (v1280 & 0x20000000) != 0 || (*(_DWORD *)(i38 + 2524) & 0x200000) == 0 || (v1280 & 1) == 0 )
                  goto LABEL_406;
                v1281 = *(unsigned int *)(i38 + 2676);
                v1282 = *(_QWORD *)(i38 + 2104);
                v1187 = *(_QWORD *)(i38 + 2680);
                *((_QWORD *)&i29 + 1) = v1281 + i38;
                v94 = v1281 + i38 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v1281) >> 3);
                while ( *((_QWORD *)&i29 + 1) != v94 )
                {
                  **((_QWORD **)&i29 + 1) ^= v1187;
                  v1187 = ((v1282 ^ **((_QWORD **)&i29 + 1)) + __ROR8__(v1187, v1187 & 0x3F)) ^ 0xEFA;
                  *((_QWORD *)&i29 + 1) += 8LL;
                }
                goto LABEL_1797;
              }
              if ( v219 != 39 )
                goto LABEL_2408;
LABEL_1924:
              *(_DWORD *)(i38 + 2120) += *((_DWORD *)v212 + 9);
              v1264 = *((unsigned int *)v212 + 9);
              v1265 = (_QWORD *)(i38 + *((unsigned int *)v212 + 8));
              v1266 = *(_DWORD *)(i38 + 2100);
              v1267 = v1265;
              v1268 = *(_QWORD *)(i38 + 2104);
              v1269 = (const char *)v1265;
              if ( v1265 < (_QWORD *)((char *)v1265 + v1264) )
              {
                do
                {
                  _mm_prefetch(v1269, 0);
                  v1269 += 64;
                }
                while ( v1269 < (const char *)v1265 + v1264 );
              }
              v1270 = *(_QWORD *)(i38 + 2104);
              v1271 = (unsigned int)v1264 >> 7;
              if ( (unsigned int)v1264 >> 7 )
              {
                do
                {
                  v1272 = 8LL;
                  do
                  {
                    v1273 = v1267[1] ^ __ROL8__(*v1267 ^ v1270, v1266);
                    v1267 += 2;
                    v1270 = __ROL8__(v1273, v1266);
                    --v1272;
                  }
                  while ( v1272 );
                  v1274 = __ROL8__(v1268 ^ ((char *)v1267 - (char *)v1265), 17) ^ v1268 ^ ((char *)v1267 - (char *)v1265);
                  v2567 = (v1274 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                  *((_QWORD *)&i29 + 1) = 0xFFFFFFFFLL;
                  v1266 = ((unsigned __int8)(v2567 ^ v1274) ^ (unsigned __int8)v1266) & 0x3F;
                  if ( !v1266 )
                    LOBYTE(v1266) = 1;
                  --v1271;
                }
                while ( v1271 );
                i38 = v2426;
              }
              else
              {
                *((_QWORD *)&i29 + 1) = 0xFFFFFFFFLL;
              }
              v94 = v1264 & 0x7F;
              if ( (unsigned int)v94 >= 8 )
              {
                v1941 = (unsigned __int64)(unsigned int)v94 >> 3;
                do
                {
                  v1270 = __ROL8__(*v1267++ ^ v1270, v1266);
                  v94 = (unsigned int)(v94 - 8);
                  --v1941;
                }
                while ( v1941 );
              }
              for ( m = 0LL; (_DWORD)v94; v94 = (unsigned int)(v94 - 1) )
              {
                v1942 = *(unsigned __int8 *)v1267;
                v1267 = (_QWORD *)((char *)v1267 + 1);
                v1270 = __ROL8__(v1942 ^ v1270, v1266);
              }
              v1943 = *((_QWORD *)v212 + 3);
              if ( v1270 == v1943 )
                goto LABEL_406;
              if ( !*(_DWORD *)(i38 + 2328) )
                *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v1270 ^ v1943;
              v1944 = i38 + *((unsigned int *)v212 + 8);
              if ( *(_DWORD *)(i38 + 2328) )
                goto LABEL_406;
              *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(i38 + 2344) = v212 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(i38 + 2352) = *(int *)v212;
              *(_QWORD *)(i38 + 2360) = v1944;
              *(_DWORD *)(i38 + 2328) = 1;
              v1945 = *(_DWORD *)(i38 + 2520);
              if ( (v1945 & 0x20000000) != 0 || (*(_DWORD *)(i38 + 2524) & 0x200000) == 0 || (v1945 & 1) == 0 )
                goto LABEL_406;
              v1946 = *(unsigned int *)(i38 + 2676);
              v1947 = *(_QWORD *)(i38 + 2104);
              v1187 = *(_QWORD *)(i38 + 2680);
              *((_QWORD *)&i29 + 1) = v1946 + i38;
              v94 = v1946 + i38 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v1946) >> 3);
              while ( *((_QWORD *)&i29 + 1) != v94 )
              {
                **((_QWORD **)&i29 + 1) ^= v1187;
                v1187 = ((v1947 ^ **((_QWORD **)&i29 + 1)) + __ROR8__(v1187, v1187 & 0x3F)) ^ 0xEFA;
                *((_QWORD *)&i29 + 1) += 8LL;
              }
              goto LABEL_1797;
            }
            v1286 = (_QWORD *)*((_QWORD *)v212 + 1);
            v1287 = *((unsigned int *)v212 + 4);
            v1288 = v1286;
            *(_DWORD *)(i38 + 2120) += v1287;
            v1289 = (const char *)v1286;
            v1290 = *(_DWORD *)(i38 + 2100);
            v1291 = *(_QWORD *)(i38 + 2104);
            if ( v1286 < (_QWORD *)((char *)v1286 + v1287) )
            {
              do
              {
                _mm_prefetch(v1289, 0);
                v1289 += 64;
              }
              while ( v1289 < (const char *)v1286 + v1287 );
            }
            v1292 = *(_QWORD *)(i38 + 2104);
            v1293 = (unsigned int)v1287 >> 7;
            v1294 = 1LL;
            if ( (unsigned int)v1287 >> 7 )
            {
              do
              {
                v1295 = 8LL;
                do
                {
                  v1296 = v1288[1] ^ __ROL8__(*v1288 ^ v1292, v1290);
                  v1288 += 2;
                  v1292 = __ROL8__(v1296, v1290);
                  --v1295;
                }
                while ( v1295 );
                v1297 = (__ROL8__(v1291 ^ ((char *)v1288 - (char *)v1286), 17) ^ v1291 ^ (unsigned __int64)((char *)v1288 - (char *)v1286))
                      * (unsigned __int128)0x7010008004002001uLL;
                v2556 = *((_QWORD *)&v1297 + 1);
                v1298 = v1297 ^ BYTE8(v1297) ^ v1290;
                v1294 = 1LL;
                v1290 = v1298 & 0x3F;
                if ( !v1290 )
                  LOBYTE(v1290) = 1;
                --v1293;
              }
              while ( v1293 );
              i38 = v2426;
            }
            v1299 = v1287 & 0x7F;
            if ( (unsigned int)v1299 >= 8 )
            {
              v1300 = (unsigned __int64)(unsigned int)v1299 >> 3;
              do
              {
                v1292 = __ROL8__(*v1288++ ^ v1292, v1290);
                v1299 = (unsigned int)(v1299 - 8);
                --v1300;
              }
              while ( v1300 );
            }
            for ( ; (_DWORD)v1299; v1299 = (unsigned int)(v1299 - 1) )
            {
              v1301 = *(unsigned __int8 *)v1288;
              v1288 = (_QWORD *)((char *)v1288 + 1);
              v1292 = __ROL8__(v1301 ^ v1292, v1290);
            }
            for ( n = v1292; ; LODWORD(v1292) = n ^ v1292 )
            {
              n >>= 31;
              if ( !n )
                break;
            }
            v1303 = v1292 & 0x7FFFFFFF;
            v1304 = 0;
            if ( v1303 == *((_DWORD *)v212 + 5) )
              goto LABEL_1997;
            if ( !*(_DWORD *)v212 )
              v1304 = *((_DWORD *)v212 + 6) != 0;
            v1305 = *((unsigned int *)v212 + 4);
            v1294 = *((_QWORD *)v212 + 1);
            if ( !*((_DWORD *)v212 + 4) )
              goto LABEL_1984;
            v1299 = 64LL;
            if ( (*(_DWORD *)(i38 + 2524) & 0x40) == 0 )
              goto LABEL_1984;
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
            v1307 = v1294 & 0xFFFFFFFFFFFFF000uLL;
            v2430 = (v1294 + v1305 - 1) | 0xFFF;
            v1308 = (v1294 & 0xFFFFFFFFFFFFF000uLL) - 1;
            while ( 1 )
            {
              while ( 1 )
              {
                v1309 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(i38 + 1128))(
                          v1307,
                          0LL,
                          v1299,
                          v1288);
                if ( v1309 == -1073741267 )
                  break;
                if ( v1309 < 0 )
                {
LABEL_1983:
                  __writecr8(CurrentIrql);
                  v212 = v2424;
LABEL_1984:
                  if ( !*(_DWORD *)(i38 + 2328) )
                    *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v1303 ^ (unsigned __int64)*((unsigned int *)v212 + 5);
                  v1310 = *((_QWORD *)v212 + 1);
                  if ( !*(_DWORD *)(i38 + 2328) )
                  {
                    v1294 = 1LL;
                    *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(i38 + 2344) = v212 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(i38 + 2352) = *(int *)v212;
                    *(_QWORD *)(i38 + 2360) = v1310;
                    *(_DWORD *)(i38 + 2328) = 1;
                    v1311 = *(_DWORD *)(i38 + 2520);
                    if ( (v1311 & 0x20000000) == 0 && (*(_DWORD *)(i38 + 2524) & 0x200000) != 0 && (v1311 & 1) != 0 )
                    {
                      v1312 = *(unsigned int *)(i38 + 2676);
                      v1313 = *(_QWORD *)(i38 + 2104);
                      v1299 = *(_QWORD *)(i38 + 2680);
                      v1294 = v1312 + i38;
                      v1288 = (_QWORD *)(v1312
                                       + i38
                                       + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v1312) >> 3));
                      while ( (_QWORD *)v1294 != v1288 )
                      {
                        *(_QWORD *)v1294 ^= v1299;
                        v1299 = ((v1313 ^ *(_QWORD *)v1294) + __ROR8__(v1299, v1299 & 0x3F)) ^ 0xEFA;
                        v1294 += 8LL;
                      }
                      *(_DWORD *)(i38 + 2524) &= ~0x200000u;
                      if ( v1299 != *(_QWORD *)(i38 + 2688) )
                      {
                        v1314 = *(_DWORD *)(i38 + 2052);
                        v1315 = *(_QWORD *)(i38 + 1416);
                        *(_QWORD *)v1315 = i38;
                        *(_DWORD *)(v1315 + 16) = v1314;
                        if ( !*(_DWORD *)(i38 + 2328) )
                          *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v1299 ^ *(_QWORD *)(i38 + 2688);
                        ProbeAndFlag1(i38, 0LL, v1299, 256LL);
                      }
                    }
                  }
                  goto LABEL_1997;
                }
LABEL_1981:
                v1307 += 4096LL;
                v1308 += 4096LL;
                if ( v1308 == v2430 )
                {
                  __writecr8(CurrentIrql);
                  v212 = v2424;
LABEL_1997:
                  v1316 = *(_QWORD *)(i38 + 1336);
                  v1317 = KeGetCurrentIrql();
                  __writecr8(0xFuLL);
                  (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD *))(i38 + 352))(v1316, v1294, v1299, v1288);
                  v1318 = **(unsigned int ***)(i38 + 1568);
                  v1319 = v1318 + 4;
                  v1320 = *((_BYTE *)v1318 + 12);
                  v1321 = (unsigned __int64)&v1318[6 * *v1318 + 4];
                  do
                  {
                    v1322 = 24LL;
                    v1323 = v212 + 24;
                    v1324 = v1319;
                    do
                    {
                      v1325 = *(_QWORD *)v1324;
                      v1324 += 2;
                      v1326 = *(_QWORD *)v1323;
                      v1323 += 8;
                      if ( v1325 != v1326 )
                        goto LABEL_2005;
                      v1322 = (unsigned int)(v1322 - 8);
                    }
                    while ( (unsigned int)v1322 >= 8 );
                    if ( !(_DWORD)v1322 )
                      break;
                    while ( 1 )
                    {
                      v1327 = *(_BYTE *)v1324;
                      v1324 = (unsigned int *)((char *)v1324 + 1);
                      v1328 = *v1323++;
                      if ( v1327 != v1328 )
                        break;
                      v300 = (_DWORD)v1322 == 1;
                      v1322 = (unsigned int)(v1322 - 1);
                      if ( v300 )
                        goto LABEL_2006;
                    }
LABEL_2005:
                    v1319 += 6;
                  }
                  while ( (unsigned __int64)v1319 < v1321 );
LABEL_2006:
                  i38 = v2426;
                  (*(void (__fastcall **)(_QWORD, __int64, char *, unsigned int *))(v2426 + 416))(
                    *(_QWORD *)(v2426 + 1336),
                    v1322,
                    v1323,
                    v1324);
                  __writecr8(v1317);
                  if ( !v1320 )
                    goto LABEL_3623;
                  v1329 = *(_DWORD *)(i38 + 2524);
                  if ( (v1329 & 0x10) != 0 && !*(_DWORD *)(i38 + 2328) )
                  {
                    *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(i38 + 2344) = v212 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(i38 + 2352) = *(int *)v212;
                    *(_QWORD *)(i38 + 2360) = 1LL;
                    *(_DWORD *)(i38 + 2328) = 1;
                    v1330 = *(_DWORD *)(i38 + 2520);
                    if ( (v1330 & 0x20000000) == 0 && (v1329 & 0x200000) != 0 && (v1330 & 1) != 0 )
                    {
                      v1331 = *(unsigned int *)(i38 + 2676);
                      v1332 = *(_QWORD *)(i38 + 2104);
                      v1333 = *(_QWORD *)(i38 + 2680);
                      v1334 = (_QWORD *)(v1331 + i38);
                      v1335 = v1331 + i38 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v1331) >> 3);
                      while ( v1334 != (_QWORD *)v1335 )
                      {
                        *v1334 ^= v1333;
                        v1333 = ((v1332 ^ *v1334++) + __ROR8__(v1333, v1333 & 0x3F)) ^ 0xEFA;
                      }
                      *(_DWORD *)(i38 + 2524) &= ~0x200000u;
                      if ( v1333 != *(_QWORD *)(i38 + 2688) )
                      {
                        v1336 = *(_DWORD *)(i38 + 2052);
                        v1337 = *(_QWORD *)(i38 + 1416);
                        *(_QWORD *)v1337 = i38;
                        *(_DWORD *)(v1337 + 16) = v1336;
                        if ( !*(_DWORD *)(i38 + 2328) )
                          *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v1333 ^ *(_QWORD *)(i38 + 2688);
                        ProbeAndFlag1(i38, 0LL, v1333, 256LL);
                      }
                    }
                  }
                  if ( *((_QWORD *)v212 + 3) != 1LL )
                  {
LABEL_3623:
                    if ( v1319 == (unsigned int *)v1321 && !*(_DWORD *)(i38 + 2328) )
                    {
                      *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(i38 + 2344) = v212 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(i38 + 2352) = *(int *)v212;
                      *(_QWORD *)(i38 + 2360) = v1319;
                      *(_DWORD *)(i38 + 2328) = 1;
                      v1338 = *(_DWORD *)(i38 + 2520);
                      if ( (v1338 & 0x20000000) == 0 && (*(_DWORD *)(i38 + 2524) & 0x200000) != 0 && (v1338 & 1) != 0 )
                      {
                        v1339 = *(unsigned int *)(i38 + 2676);
                        v1340 = *(_QWORD *)(i38 + 2104);
                        v1341 = *(_QWORD *)(i38 + 2680);
                        v1342 = (_QWORD *)(v1339 + i38);
                        v1343 = v1339
                              + i38
                              + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v1339) >> 3);
                        while ( v1342 != (_QWORD *)v1343 )
                        {
                          *v1342 ^= v1341;
                          v1341 = ((v1340 ^ *v1342++) + __ROR8__(v1341, v1341 & 0x3F)) ^ 0xEFA;
                        }
                        *(_DWORD *)(i38 + 2524) &= ~0x200000u;
                        if ( v1341 != *(_QWORD *)(i38 + 2688) )
                        {
                          v1344 = *(_DWORD *)(i38 + 2052);
                          v1345 = *(_QWORD *)(i38 + 1416);
                          *(_QWORD *)v1345 = i38;
                          *(_DWORD *)(v1345 + 16) = v1344;
                          if ( !*(_DWORD *)(i38 + 2328) )
                            *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v1341 ^ *(_QWORD *)(i38 + 2688);
                          ProbeAndFlag1(i38, 0LL, v1341, 256LL);
                        }
                      }
                    }
                  }
                  v1346 = *(_QWORD *)(i38 + 1336);
                  v1347 = KeGetCurrentIrql();
                  __writecr8(0xFuLL);
                  (*(void (__fastcall **)(__int64))(i38 + 352))(v1346);
                  v1348 = **(unsigned int ***)(i38 + 1568);
                  v1349 = v1348 + 4;
                  v1350 = 0LL;
                  v1351 = (unsigned __int64)&v1348[6 * *v1348 + 4];
                  do
                  {
                    v1349 += 6;
                    v1353 = v1350;
                    if ( (unsigned __int64)v1349 >= v1351 )
                      break;
                    v1352 = *((_QWORD *)v1349 + 1);
                    if ( v1352 < v1350 )
                      break;
                    if ( (v1352 & 0xFFFFFFFFFFFFF000uLL) != v1352 )
                      break;
                    v1350 = v1352 + v1349[4];
                    if ( v1350 <= v1352 )
                      break;
                  }
                  while ( v1350 != v1353 );
                  (*(void (__fastcall **)(_QWORD, unsigned __int64))(i38 + 416))(*(_QWORD *)(i38 + 1336), v1353);
                  __writecr8(v1347);
                  m = 0LL;
                  if ( v1349 == (unsigned int *)v1351 )
                    goto LABEL_405;
                  if ( *(_DWORD *)(i38 + 2328) )
                    goto LABEL_405;
                  *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(i38 + 2344) = v212 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(i38 + 2352) = *(int *)v212;
                  *(_QWORD *)(i38 + 2360) = v1349;
                  *(_DWORD *)(i38 + 2328) = 1;
                  v1354 = *(_DWORD *)(i38 + 2520);
                  if ( (v1354 & 0x20000000) != 0 || (*(_DWORD *)(i38 + 2524) & 0x200000) == 0 || (v1354 & 1) == 0 )
                    goto LABEL_405;
                  v1355 = *(unsigned int *)(i38 + 2676);
                  v1356 = *(_QWORD *)(i38 + 2104);
                  v475 = *(_QWORD *)(i38 + 2680);
                  *((_QWORD *)&i29 + 1) = v1355 + i38;
                  v94 = v1355 + i38 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v1355) >> 3);
                  while ( *((_QWORD *)&i29 + 1) != v94 )
                  {
                    **((_QWORD **)&i29 + 1) ^= v475;
                    v475 = ((v1356 ^ **((_QWORD **)&i29 + 1)) + __ROR8__(v475, v475 & 0x3F)) ^ 0xEFA;
                    *((_QWORD *)&i29 + 1) += 8LL;
                  }
LABEL_718:
                  *(_DWORD *)(i38 + 2524) &= ~0x200000u;
                  if ( v475 != *(_QWORD *)(i38 + 2688) )
                  {
                    v476 = *(_DWORD *)(i38 + 2052);
                    v477 = *(_QWORD *)(i38 + 1416);
                    *(_QWORD *)v477 = i38;
                    *(_DWORD *)(v477 + 16) = v476;
                    if ( !*(_DWORD *)(i38 + 2328) )
                      *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v475 ^ *(_QWORD *)(i38 + 2688);
                    ProbeAndFlag1(i38, 0LL, v475, 256LL);
                  }
                  goto LABEL_405;
                }
              }
              if ( v1304 )
                goto LABEL_1983;
              if ( CurrentIrql > 1u )
                goto LABEL_1981;
              __writecr8(CurrentIrql);
              __writecr8(2uLL);
            }
          }
          v1357 = (const char *)*((_QWORD *)v212 + 1);
          v1358 = *((unsigned int *)v212 + 4);
          v94 = (unsigned __int64)v1357;
          *(_DWORD *)(i38 + 2120) += v1358;
          v1359 = v1357;
          v1360 = *(_DWORD *)(i38 + 2100);
          for ( ii = *(_QWORD *)(i38 + 2104); v1359 < &v1357[v1358]; v1359 += 64 )
            _mm_prefetch(v1359, 0);
          v1362 = *(_QWORD *)(i38 + 2104);
          v1363 = (unsigned int)v1358 >> 7;
          *((_QWORD *)&i29 + 1) = 1LL;
          if ( (unsigned int)v1358 >> 7 )
          {
            do
            {
              v1364 = 8LL;
              do
              {
                v1365 = *(_QWORD *)(v94 + 8) ^ __ROL8__(*(_QWORD *)v94 ^ v1362, v1360);
                v94 += 16LL;
                v1362 = __ROL8__(v1365, v1360);
                --v1364;
              }
              while ( v1364 );
              v1366 = __ROL8__(ii ^ (v94 - (_QWORD)v1357), 17) ^ ii ^ (v94 - (_QWORD)v1357);
              v2557 = (v1366 * (unsigned __int128)0x7010008004002001uLL) >> 64;
              *((_QWORD *)&i29 + 1) = 1LL;
              v1360 = ((unsigned __int8)(v2557 ^ v1366) ^ (unsigned __int8)v1360) & 0x3F;
              if ( !v1360 )
                LOBYTE(v1360) = 1;
              --v1363;
            }
            while ( v1363 );
            i38 = v2426;
          }
          v1367 = v1358 & 0x7F;
          if ( v1367 >= 8 )
          {
            v1368 = (unsigned __int64)v1367 >> 3;
            do
            {
              v1362 = __ROL8__(*(_QWORD *)v94 ^ v1362, v1360);
              v94 += 8LL;
              v1367 -= 8;
              --v1368;
            }
            while ( v1368 );
          }
          for ( m = 0LL; v1367; --v1367 )
          {
            v1369 = *(unsigned __int8 *)v94++;
            v1362 = __ROL8__(v1369 ^ v1362, v1360);
          }
          for ( jj = v1362; ; LODWORD(v1362) = jj ^ v1362 )
          {
            jj >>= 31;
            if ( !jj )
              break;
          }
          v1371 = v1362 & 0x7FFFFFFF;
          v1372 = 0;
          if ( v1371 == *((_DWORD *)v212 + 5) )
            goto LABEL_2091;
          if ( !*(_DWORD *)v212 )
            v1372 = *((_DWORD *)v212 + 6) != 0;
          v1373 = *((unsigned int *)v212 + 4);
          *((_QWORD *)&i29 + 1) = *((_QWORD *)v212 + 1);
          if ( !*((_DWORD *)v212 + 4) )
            goto LABEL_2078;
          v1374 = 64LL;
          if ( (*(_DWORD *)(i38 + 2524) & 0x40) == 0 )
            goto LABEL_2078;
          v1375 = KeGetCurrentIrql();
          __writecr8(2uLL);
          v1376 = *((_QWORD *)&i29 + 1) & 0xFFFFFFFFFFFFF000uLL;
          v2430 = (*((_QWORD *)&i29 + 1) + v1373 - 1) | 0xFFF;
          v1377 = (*((_QWORD *)&i29 + 1) & 0xFFFFFFFFFFFFF000uLL) - 1;
          while ( 1 )
          {
            while ( 1 )
            {
              LODWORD(i29) = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, unsigned __int64))(i38 + 1128))(
                               v1376,
                               0LL,
                               v1374,
                               v94);
              if ( (_DWORD)i29 == -1073741267 )
                break;
              if ( (i29 & 0x80000000) != 0LL )
              {
LABEL_2077:
                __writecr8(v1375);
                v212 = v2424;
                m = 0LL;
LABEL_2078:
                if ( !*(_DWORD *)(i38 + 2328) )
                  *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = *((unsigned int *)v212 + 5) ^ (unsigned __int64)v1371;
                v1378 = *((_QWORD *)v212 + 1);
                if ( !*(_DWORD *)(i38 + 2328) )
                {
                  *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(i38 + 2344) = v212 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(i38 + 2352) = *(int *)v212;
                  *(_QWORD *)(i38 + 2360) = v1378;
                  *(_DWORD *)(i38 + 2328) = 1;
                  v1379 = *(_DWORD *)(i38 + 2520);
                  if ( (v1379 & 0x20000000) == 0 && (*(_DWORD *)(i38 + 2524) & 0x200000) != 0 && (v1379 & 1) != 0 )
                  {
                    v1380 = *(unsigned int *)(i38 + 2676);
                    v1381 = *(_QWORD *)(i38 + 2104);
                    v1382 = *(_QWORD *)(i38 + 2680);
                    *((_QWORD *)&i29 + 1) = v1380 + i38;
                    v94 = v1380 + i38 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v1380) >> 3);
                    while ( *((_QWORD *)&i29 + 1) != v94 )
                    {
                      **((_QWORD **)&i29 + 1) ^= v1382;
                      v1382 = ((v1381 ^ **((_QWORD **)&i29 + 1)) + __ROR8__(v1382, v1382 & 0x3F)) ^ 0xEFA;
                      *((_QWORD *)&i29 + 1) += 8LL;
                    }
                    *(_DWORD *)(i38 + 2524) &= ~0x200000u;
                    if ( v1382 != *(_QWORD *)(i38 + 2688) )
                    {
                      v1383 = *(_DWORD *)(i38 + 2052);
                      v1384 = *(_QWORD *)(i38 + 1416);
                      *(_QWORD *)v1384 = i38;
                      *(_DWORD *)(v1384 + 16) = v1383;
                      if ( !*(_DWORD *)(i38 + 2328) )
                        *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v1382 ^ *(_QWORD *)(i38 + 2688);
                      ProbeAndFlag1(i38, 0LL, v1382, 256LL);
                    }
                  }
                }
                goto LABEL_2091;
              }
LABEL_2075:
              v1376 += 4096LL;
              v1377 += 4096LL;
              if ( v1377 == v2430 )
              {
                __writecr8(v1375);
                v212 = v2424;
                m = 0LL;
LABEL_2091:
                v1385 = *((_DWORD *)v212 + 10);
                if ( (v1385 & 2) == 0 )
                  goto LABEL_405;
                v1386 = *((_QWORD *)v212 + 1);
                if ( (v1385 & 4) != 0 )
                {
                  *((_QWORD *)&i29 + 1) = *((_QWORD *)v212 + 3);
                  v1387 = **(_QWORD **)(v1386 + 112);
                  if ( v1387 != *((_QWORD *)&i29 + 1) )
                  {
                    v1388 = *(_QWORD *)(i38 + 1416);
                    *(_QWORD *)v1388 = v1387;
                    *(_DWORD *)(v1388 + 16) = 256;
                    if ( !*(_DWORD *)(i38 + 2328) )
                      *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = *((_QWORD *)&i29 + 1) ^ v1387;
                    v1389 = *(_QWORD *)(v1386 + 112);
                    if ( !*(_DWORD *)(i38 + 2328) )
                    {
                      *((_QWORD *)&i29 + 1) = 1LL;
                      *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(i38 + 2344) = v212 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(i38 + 2352) = *(int *)v212;
                      *(_QWORD *)(i38 + 2360) = v1389;
                      *(_DWORD *)(i38 + 2328) = 1;
                      v1390 = *(_DWORD *)(i38 + 2520);
                      if ( (v1390 & 0x20000000) == 0 && (*(_DWORD *)(i38 + 2524) & 0x200000) != 0 && (v1390 & 1) != 0 )
                      {
                        v1391 = *(unsigned int *)(i38 + 2676);
                        v1392 = *(_QWORD *)(i38 + 2104);
                        v1393 = *(_QWORD *)(i38 + 2680);
                        *((_QWORD *)&i29 + 1) = v1391 + i38;
                        v94 = v1391 + i38 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v1391) >> 3);
                        while ( *((_QWORD *)&i29 + 1) != v94 )
                        {
                          **((_QWORD **)&i29 + 1) ^= v1393;
                          v1393 = ((v1392 ^ **((_QWORD **)&i29 + 1)) + __ROR8__(v1393, v1393 & 0x3F)) ^ 0xEFA;
                          *((_QWORD *)&i29 + 1) += 8LL;
                        }
                        *(_DWORD *)(i38 + 2524) &= ~0x200000u;
                        if ( v1393 != *(_QWORD *)(i38 + 2688) )
                        {
                          v1394 = *(_DWORD *)(i38 + 2052);
                          v1395 = *(_QWORD *)(i38 + 1416);
                          *(_QWORD *)v1395 = i38;
                          *(_DWORD *)(v1395 + 16) = v1394;
                          if ( !*(_DWORD *)(i38 + 2328) )
                            *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v1393 ^ *(_QWORD *)(i38 + 2688);
                          ProbeAndFlag1(i38, 0LL, v1393, 256LL);
                        }
                      }
                    }
                  }
                }
                if ( (*((_DWORD *)v212 + 10) & 8) == 0 )
                  goto LABEL_405;
                *((_QWORD *)&i29 + 1) = *((_QWORD *)v212 + 4);
                v1396 = **(_QWORD **)(v1386 + 120);
                if ( v1396 == *((_QWORD *)&i29 + 1) )
                  goto LABEL_405;
                v1397 = *(_QWORD *)(i38 + 1416);
                *(_QWORD *)v1397 = v1396;
                *(_DWORD *)(v1397 + 16) = 256;
                if ( !*(_DWORD *)(i38 + 2328) )
                  *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = *((_QWORD *)&i29 + 1) ^ v1396;
                v1398 = *(_QWORD *)(v1386 + 120);
                if ( *(_DWORD *)(i38 + 2328) )
                  goto LABEL_405;
                *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(i38 + 2344) = v212 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(i38 + 2352) = *(int *)v212;
                *(_QWORD *)(i38 + 2360) = v1398;
                *(_DWORD *)(i38 + 2328) = 1;
                v1399 = *(_DWORD *)(i38 + 2520);
                if ( (v1399 & 0x20000000) != 0 || (*(_DWORD *)(i38 + 2524) & 0x200000) == 0 || (v1399 & 1) == 0 )
                  goto LABEL_405;
                v1400 = *(unsigned int *)(i38 + 2676);
                v1401 = *(_QWORD *)(i38 + 2104);
                v475 = *(_QWORD *)(i38 + 2680);
                *((_QWORD *)&i29 + 1) = v1400 + i38;
                v94 = v1400 + i38 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v1400) >> 3);
                while ( *((_QWORD *)&i29 + 1) != v94 )
                {
                  **((_QWORD **)&i29 + 1) ^= v475;
                  v475 = ((v1401 ^ **((_QWORD **)&i29 + 1)) + __ROR8__(v475, v475 & 0x3F)) ^ 0xEFA;
                  *((_QWORD *)&i29 + 1) += 8LL;
                }
                goto LABEL_718;
              }
            }
            if ( v1372 )
              goto LABEL_2077;
            if ( v1375 > 1u )
              goto LABEL_2075;
            __writecr8(v1375);
            __writecr8(2uLL);
          }
        }
        if ( (*(_DWORD *)(i38 + 2128) & 1) == 0 )
          goto LABEL_406;
        if ( !*(_QWORD *)(*(_QWORD *)(i38 + 1384) + 32LL) )
          goto LABEL_2123;
        v1403 = *(unsigned int *)(i38 + 2492);
        if ( (_DWORD)v1403 == -1 )
        {
          *(_DWORD *)(i38 + 2492) = 0;
          v1403 = 0LL;
        }
        v1404 = (*(__int64 (__fastcall **)(__int64))(i38 + 648))(v1403);
        if ( v1404 || (v1404 = (*(__int64 (__fastcall **)(_QWORD))(i38 + 656))(0LL)) != 0 )
        {
          while ( (*(int (__fastcall **)(__int64, __int64))(i38 + 672))(v1404, i38 + 2440) < 0 )
          {
            v1404 = (*(__int64 (__fastcall **)(__int64))(i38 + 656))(v1404);
            if ( !v1404 )
            {
              *(_DWORD *)(i38 + 2492) = -1;
              goto LABEL_2123;
            }
          }
          v1405 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(i38 + 976))(26LL, &v2505, 0LL);
          (*(void (__fastcall **)(__int64, __int64))(i38 + 680))(v1404, i38 + 2440);
          v1406 = (*(__int64 (__fastcall **)(__int64))(i38 + 656))(v1404);
          if ( v1406 )
          {
            *(_DWORD *)(i38 + 2492) = (*(__int64 (__fastcall **)(__int64))(i38 + 688))(v1406);
            (*(void (__fastcall **)(__int64))(i38 + 664))(v1406);
          }
          else
          {
            *(_DWORD *)(i38 + 2492) = -1;
          }
          v1402 = v2505;
          if ( v1405 < 0 )
            v1402 = 0LL;
        }
        else
        {
LABEL_2123:
          v1402 = 0LL;
        }
        v1407 = *(__int64 (__fastcall **)(_QWORD))(i38 + 944);
        v2427 = v1402;
        v2429 = 0;
        v1408 = 0;
        v2434 = v1407(0LL);
        v1409 = v2434;
        if ( v2434 )
        {
          while ( v1402 != v1409 )
          {
            if ( (*(unsigned int (__fastcall **)(__int64))(i38 + 968))(v1409) )
            {
              if ( (*(int (__fastcall **)(__int64))(i38 + 928))(v1409) >= 0 )
              {
                v1469 = (*(unsigned __int8 (__fastcall **)(__int64))(i38 + 992))(v1409);
                v1470 = (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int8 *))(i38 + 1000))(v1409, &v2438);
                v2670 = (*(__int64 (__fastcall **)(__int64))(i38 + 1008))(v1409);
                if ( (_BYTE)v1469 == 97 )
                  goto LABEL_2238;
                if ( *(_DWORD *)(i38 + 2328) )
                  goto LABEL_2238;
                *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = (unsigned int)v1469 ^ 0x61LL;
                if ( *(_DWORD *)(i38 + 2328) )
                  goto LABEL_2238;
                v1471 = (int *)v2424;
                *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(i38 + 2344) = (char *)v1471 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(i38 + 2352) = *v1471;
                *(_QWORD *)(i38 + 2360) = v1409;
                *(_DWORD *)(i38 + 2328) = 1;
                v1472 = *(_DWORD *)(i38 + 2520);
                if ( (v1472 & 0x20000000) == 0 && (*(_DWORD *)(i38 + 2524) & 0x200000) != 0 && (v1472 & 1) != 0 )
                {
                  v1473 = *(unsigned int *)(i38 + 2676);
                  v1474 = *(_QWORD *)(i38 + 2104);
                  v1475 = *(_QWORD *)(i38 + 2680);
                  v1476 = (_QWORD *)(v1473 + i38);
                  v1477 = v1473 + i38 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v1473) >> 3);
                  while ( v1476 != (_QWORD *)v1477 )
                  {
                    *v1476 ^= v1475;
                    v1475 = ((v1474 ^ *v1476++) + __ROR8__(v1475, v1475 & 0x3F)) ^ 0xEFA;
                  }
                  *(_DWORD *)(i38 + 2524) &= ~0x200000u;
                  if ( v1475 != *(_QWORD *)(i38 + 2688) )
                  {
                    v1478 = *(_DWORD *)(i38 + 2052);
                    v1479 = *(_QWORD *)(i38 + 1416);
                    *(_QWORD *)v1479 = i38;
                    *(_DWORD *)(v1479 + 16) = v1478;
                    if ( !*(_DWORD *)(i38 + 2328) )
                      *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v1475 ^ *(_QWORD *)(i38 + 2688);
                    ProbeAndFlag1(i38, 0LL, v1475, 256LL);
                  }
LABEL_2238:
                  v1471 = (int *)v2424;
                }
                v1480 = 0;
                if ( (v1469 & 7) == 1 )
                {
                  v1480 = 48;
                }
                else if ( (v1469 & 7) == 2 )
                {
                  v1480 = 16;
                  v1408 = 16;
                }
                else if ( (v1469 & 7) != 0 && !*(_DWORD *)(i38 + 2328) )
                {
                  *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(i38 + 2344) = (char *)v1471 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(i38 + 2352) = *v1471;
                  *(_QWORD *)(i38 + 2360) = v2434;
                  *(_DWORD *)(i38 + 2328) = 1;
                  v1481 = *(_DWORD *)(i38 + 2520);
                  if ( (v1481 & 0x20000000) == 0 && (*(_DWORD *)(i38 + 2524) & 0x200000) != 0 && (v1481 & 1) != 0 )
                  {
                    v1482 = *(unsigned int *)(i38 + 2676);
                    v1483 = *(_QWORD *)(i38 + 2104);
                    v1484 = *(_QWORD *)(i38 + 2680);
                    v1485 = (_QWORD *)(v1482 + i38);
                    v1486 = v1482 + i38 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v1482) >> 3);
                    while ( v1485 != (_QWORD *)v1486 )
                    {
                      *v1485 ^= v1484;
                      v1484 = ((v1483 ^ *v1485++) + __ROR8__(v1484, v1484 & 0x3F)) ^ 0xEFA;
                    }
                    *(_DWORD *)(i38 + 2524) &= ~0x200000u;
                    if ( v1484 != *(_QWORD *)(i38 + 2688) )
                    {
                      v1487 = *(_DWORD *)(i38 + 2052);
                      v1488 = *(_QWORD *)(i38 + 1416);
                      *(_QWORD *)v1488 = i38;
                      *(_DWORD *)(v1488 + 16) = v1487;
                      if ( !*(_DWORD *)(i38 + 2328) )
                        *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v1484 ^ *(_QWORD *)(i38 + 2688);
                      ProbeAndFlag1(i38, 0LL, v1484, 256LL);
                    }
                  }
                }
                v1489 = *(_QWORD *)(i38 + 1472);
                v1432 = (int *)v2424;
                v1431 = 0xB3B74BDEE4453415uLL;
                v1490 = v1469 >> 4;
                v1433 = 1LL;
                v300 = (*(_BYTE *)(v1489 + 2 * v1490) | (unsigned __int8)v1480) == (_BYTE)v1470;
                v1409 = v2434;
                if ( !v300 && !*(_DWORD *)(i38 + 2328) )
                {
                  *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(i38 + 2344) = (char *)v1432 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(i38 + 2352) = *v1432;
                  *(_QWORD *)(i38 + 2360) = v1409;
                  *(_DWORD *)(i38 + 2328) = 1;
                  v1491 = *(_DWORD *)(i38 + 2520);
                  if ( (v1491 & 0x20000000) == 0 && (*(_DWORD *)(i38 + 2524) & 0x200000) != 0 && (v1491 & 1) != 0 )
                  {
                    v1492 = *(unsigned int *)(i38 + 2676);
                    v1493 = *(_QWORD *)(i38 + 2104);
                    v1494 = *(_QWORD *)(i38 + 2680);
                    v1495 = (_QWORD *)(v1492 + i38);
                    v1496 = v1492 + i38 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v1492) >> 3);
                    while ( v1495 != (_QWORD *)v1496 )
                    {
                      *v1495 ^= v1494;
                      v1494 = ((v1493 ^ *v1495++) + __ROR8__(v1494, v1494 & 0x3F)) ^ 0xEFA;
                    }
                    *(_DWORD *)(i38 + 2524) &= ~0x200000u;
                    if ( v1494 != *(_QWORD *)(i38 + 2688) )
                    {
                      v1497 = *(_DWORD *)(i38 + 2052);
                      v1498 = *(_QWORD *)(i38 + 1416);
                      *(_QWORD *)v1498 = i38;
                      *(_DWORD *)(v1498 + 16) = v1497;
                      if ( !*(_DWORD *)(i38 + 2328) )
                        *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v1494 ^ *(_QWORD *)(i38 + 2688);
                      ProbeAndFlag1(i38, 0LL, v1494, 256LL);
                    }
                    v1432 = (int *)v2424;
                    v1431 = 0xB3B74BDEE4453415uLL;
                    v1433 = 1LL;
                  }
                }
                if ( (*(_BYTE *)(v1489 + 2 * v1490 + 1) | (unsigned __int8)v1408) == v2438 )
                {
                  v1408 = 0;
                }
                else
                {
                  v1408 = 0;
                  if ( !*(_DWORD *)(i38 + 2328) )
                  {
                    *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(i38 + 2344) = (char *)v1432 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(i38 + 2352) = *v1432;
                    *(_QWORD *)(i38 + 2360) = v1409;
                    *(_DWORD *)(i38 + 2328) = 1;
                    v1499 = *(_DWORD *)(i38 + 2520);
                    if ( (v1499 & 0x20000000) == 0 && (*(_DWORD *)(i38 + 2524) & 0x200000) != 0 && (v1499 & 1) != 0 )
                    {
                      v1500 = *(unsigned int *)(i38 + 2676);
                      v1501 = *(_QWORD *)(i38 + 2104);
                      v1433 = *(_QWORD *)(i38 + 2680);
                      v1432 = (int *)(v1500 + i38);
                      v1431 = v1500 + i38 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v1500) >> 3);
                      while ( v1432 != (int *)v1431 )
                      {
                        *(_QWORD *)v1432 ^= v1433;
                        v1433 = ((v1501 ^ *(_QWORD *)v1432) + __ROR8__(v1433, v1433 & 0x3F)) ^ 0xEFA;
                        v1432 += 2;
                      }
                      *(_DWORD *)(i38 + 2524) &= ~0x200000u;
                      if ( v1433 != *(_QWORD *)(i38 + 2688) )
                      {
                        v1502 = *(_DWORD *)(i38 + 2052);
                        v1503 = *(_QWORD *)(i38 + 1416);
                        *(_QWORD *)v1503 = i38;
                        *(_DWORD *)(v1503 + 16) = v1502;
                        if ( !*(_DWORD *)(i38 + 2328) )
                          *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v1433 ^ *(_QWORD *)(i38 + 2688);
                        ProbeAndFlag1(i38, 0LL, v1433, 256LL);
                      }
                    }
                  }
                }
                if ( v1409 != *(_QWORD *)(i38 + 1240) )
                {
                  v1504 = (unsigned __int64 *)(*(__int64 (__fastcall **)(__int64, __int64, __int64, unsigned __int64))(i38 + 984))(
                                                v1409,
                                                1LL,
                                                v1433,
                                                v1431);
                  v1505 = v1504;
                  if ( v1504 )
                  {
                    v1506 = *v1504;
                    v1451 = v1504;
                    if ( *v1504 )
                    {
                      v1507 = v2670;
                      v1508 = v2434;
                      v2430 = (__int64)v1504;
                      do
                      {
                        *v1505 = v1506 & 0xFFFFFFFFFFFFFFFCuLL;
                        (*(void (**)(void))(i38 + 496))();
                        v1509 = v2438;
                        v1510 = v1505[1] & 0xFFFFFFFFFFFF0000uLL;
                        if ( v1510 == v1507 )
                          v1509 = v1470;
                        v1511 = v1505[1] >> 6;
                        LOBYTE(v1511) = v1511 & 0xF;
                        if ( !(*(unsigned int (__fastcall **)(unsigned __int64, __int64))(i38 + 1016))(v1511, v1509) )
                        {
                          if ( (*(_DWORD *)(i38 + 2520) & 0x20000000) != 0 )
                          {
                            v1512 = *(_QWORD **)(i38 + 2760);
                            v1513 = 48;
                            v1514 = 6LL;
                            do
                            {
                              v1513 -= 8;
                              *v1512 = *(_QWORD *)v212;
                              v212 += 8;
                              ++v1512;
                              --v1514;
                            }
                            while ( v1514 );
                            if ( v1513 )
                            {
                              do
                              {
                                v1515 = *v212++;
                                *(_BYTE *)v1512 = v1515;
                                v1512 = (_QWORD *)((char *)v1512 + 1);
                                --v1513;
                              }
                              while ( v1513 );
                              v1507 = v2670;
                            }
                            v212 = *(char **)(i38 + 2760);
                          }
                          *((_QWORD *)v212 + 3) = v1510;
                          *((_QWORD *)v212 + 4) = *v1505;
                          v212[40] = ((unsigned __int64)*((unsigned int *)v1505 + 2) >> 6) & 0xF;
                          if ( !*(_DWORD *)(i38 + 2328) )
                          {
                            *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
                            *(_QWORD *)(i38 + 2344) = v212 - 0x4C48B4211BBACBEBLL;
                            *(_QWORD *)(i38 + 2352) = *(int *)v212;
                            *(_QWORD *)(i38 + 2360) = v1508;
                            *(_DWORD *)(i38 + 2328) = 1;
                            v1516 = *(_DWORD *)(i38 + 2520);
                            if ( (v1516 & 0x20000000) == 0
                              && (*(_DWORD *)(i38 + 2524) & 0x200000) != 0
                              && (v1516 & 1) != 0 )
                            {
                              v1517 = *(unsigned int *)(i38 + 2676);
                              v1518 = *(_QWORD *)(i38 + 2104);
                              v1519 = *(_QWORD *)(i38 + 2680);
                              v1520 = (_QWORD *)(v1517 + i38);
                              v1521 = v1517
                                    + i38
                                    + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v1517) >> 3);
                              while ( v1520 != (_QWORD *)v1521 )
                              {
                                *v1520 ^= v1519;
                                v1519 = ((v1518 ^ *v1520++) + __ROR8__(v1519, v1519 & 0x3F)) ^ 0xEFA;
                              }
                              *(_DWORD *)(i38 + 2524) &= ~0x200000u;
                              if ( v1519 != *(_QWORD *)(i38 + 2688) )
                              {
                                v1522 = *(_DWORD *)(i38 + 2052);
                                v1523 = *(_QWORD *)(i38 + 1416);
                                *(_QWORD *)v1523 = i38;
                                *(_DWORD *)(v1523 + 16) = v1522;
                                if ( !*(_DWORD *)(i38 + 2328) )
                                  *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v1519 ^ *(_QWORD *)(i38 + 2688);
                                ProbeAndFlag1(i38, 0LL, v1519, 256LL);
                              }
                            }
                          }
                        }
                        v1505 += 6;
                        v1506 = *v1505;
                      }
                      while ( *v1505 );
                      v1451 = (_QWORD *)v2430;
LABEL_2308:
                      v1409 = v2434;
                      v1408 = 0;
                    }
LABEL_2309:
                    (*(void (__fastcall **)(_QWORD *))(i38 + 264))(v1451);
                  }
                }
LABEL_2310:
                (*(void (__fastcall **)(__int64, int *, __int64, unsigned __int64))(i38 + 936))(
                  v1409,
                  v1432,
                  v1433,
                  v1431);
                LODWORD(m) = v2429;
                *(_DWORD *)(i38 + 2120) += 0x8000;
                v1402 = v2427;
              }
LABEL_2311:
              v212 = v2424;
            }
            v1524 = *(__int64 (__fastcall **)(__int64))(i38 + 944);
            LODWORD(m) = m + 1;
            v2429 = m;
            v2434 = v1524(v1409);
            v1409 = v2434;
            if ( !v2434 )
              goto LABEL_2313;
          }
          if ( (*(int (__fastcall **)(__int64))(i38 + 928))(v1409) < 0 )
            goto LABEL_2311;
          v1410 = (*(unsigned __int8 (__fastcall **)(__int64))(i38 + 992))(v1409);
          v2669 = (*(__int64 (__fastcall **)(__int64, unsigned __int8 *))(i38 + 1000))(v1409, &v2437);
          v2430 = (*(__int64 (__fastcall **)(__int64))(i38 + 1008))(v1409);
          if ( (_BYTE)v1410 != 97 && !*(_DWORD *)(i38 + 2328) )
          {
            *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = (unsigned int)v1410 ^ 0x61LL;
            if ( !*(_DWORD *)(i38 + 2328) )
            {
              v1411 = (int *)v2424;
              *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(i38 + 2344) = (char *)v1411 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(i38 + 2352) = *v1411;
              *(_QWORD *)(i38 + 2360) = v1409;
              *(_DWORD *)(i38 + 2328) = 1;
              v1412 = *(_DWORD *)(i38 + 2520);
              if ( (v1412 & 0x20000000) != 0 || (*(_DWORD *)(i38 + 2524) & 0x200000) == 0 || (v1412 & 1) == 0 )
              {
LABEL_2154:
                v1420 = 0;
                if ( (v1410 & 7) == 1 )
                {
                  v1420 = 48;
                }
                else if ( (v1410 & 7) == 2 )
                {
                  v1420 = 16;
                  v1408 = 16;
                }
                else if ( (v1410 & 7) != 0 && !*(_DWORD *)(i38 + 2328) )
                {
                  *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(i38 + 2344) = (char *)v1411 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(i38 + 2352) = *v1411;
                  *(_QWORD *)(i38 + 2360) = v2434;
                  *(_DWORD *)(i38 + 2328) = 1;
                  v1421 = *(_DWORD *)(i38 + 2520);
                  if ( (v1421 & 0x20000000) == 0 && (*(_DWORD *)(i38 + 2524) & 0x200000) != 0 && (v1421 & 1) != 0 )
                  {
                    v1422 = *(unsigned int *)(i38 + 2676);
                    v1423 = *(_QWORD *)(i38 + 2104);
                    v1424 = *(_QWORD *)(i38 + 2680);
                    v1425 = (_QWORD *)(v1422 + i38);
                    v1426 = v1422 + i38 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v1422) >> 3);
                    while ( v1425 != (_QWORD *)v1426 )
                    {
                      *v1425 ^= v1424;
                      v1424 = ((v1423 ^ *v1425++) + __ROR8__(v1424, v1424 & 0x3F)) ^ 0xEFA;
                    }
                    *(_DWORD *)(i38 + 2524) &= ~0x200000u;
                    if ( v1424 != *(_QWORD *)(i38 + 2688) )
                    {
                      v1427 = *(_DWORD *)(i38 + 2052);
                      v1428 = *(_QWORD *)(i38 + 1416);
                      *(_QWORD *)v1428 = i38;
                      *(_DWORD *)(v1428 + 16) = v1427;
                      if ( !*(_DWORD *)(i38 + 2328) )
                        *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v1424 ^ *(_QWORD *)(i38 + 2688);
                      ProbeAndFlag1(i38, 0LL, v1424, 256LL);
                    }
                  }
                }
                v1429 = *(_QWORD *)(i38 + 1472);
                v1430 = v2669;
                v1431 = 0xB3B74BDEE4453415uLL;
                v1432 = (int *)v2424;
                v1433 = 1LL;
                v1434 = v1410 >> 4;
                v300 = (*(_BYTE *)(v1429 + 2 * v1434) | (unsigned __int8)v1420) == v2669;
                v1409 = v2434;
                if ( !v300 && !*(_DWORD *)(i38 + 2328) )
                {
                  *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(i38 + 2344) = (char *)v1432 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(i38 + 2352) = *v1432;
                  *(_QWORD *)(i38 + 2360) = v1409;
                  *(_DWORD *)(i38 + 2328) = 1;
                  v1435 = *(_DWORD *)(i38 + 2520);
                  if ( (v1435 & 0x20000000) == 0 && (*(_DWORD *)(i38 + 2524) & 0x200000) != 0 && (v1435 & 1) != 0 )
                  {
                    v1436 = *(unsigned int *)(i38 + 2676);
                    v1437 = *(_QWORD *)(i38 + 2104);
                    v1438 = *(_QWORD *)(i38 + 2680);
                    v1439 = (_QWORD *)(v1436 + i38);
                    v1440 = v1436 + i38 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v1436) >> 3);
                    while ( v1439 != (_QWORD *)v1440 )
                    {
                      *v1439 ^= v1438;
                      v1438 = ((v1437 ^ *v1439++) + __ROR8__(v1438, v1438 & 0x3F)) ^ 0xEFA;
                    }
                    *(_DWORD *)(i38 + 2524) &= ~0x200000u;
                    if ( v1438 != *(_QWORD *)(i38 + 2688) )
                    {
                      v1441 = *(_DWORD *)(i38 + 2052);
                      v1442 = *(_QWORD *)(i38 + 1416);
                      *(_QWORD *)v1442 = i38;
                      *(_DWORD *)(v1442 + 16) = v1441;
                      if ( !*(_DWORD *)(i38 + 2328) )
                        *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v1438 ^ *(_QWORD *)(i38 + 2688);
                      ProbeAndFlag1(i38, 0LL, v1438, 256LL);
                    }
                    v1432 = (int *)v2424;
                    v1431 = 0xB3B74BDEE4453415uLL;
                    v1433 = 1LL;
                  }
                }
                if ( (*(_BYTE *)(v1429 + 2 * v1434 + 1) | (unsigned __int8)v1408) == v2437 )
                {
                  v1408 = 0;
                }
                else
                {
                  v1408 = 0;
                  if ( !*(_DWORD *)(i38 + 2328) )
                  {
                    *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(i38 + 2344) = (char *)v1432 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(i38 + 2352) = *v1432;
                    *(_QWORD *)(i38 + 2360) = v1409;
                    *(_DWORD *)(i38 + 2328) = 1;
                    v1443 = *(_DWORD *)(i38 + 2520);
                    if ( (v1443 & 0x20000000) == 0 && (*(_DWORD *)(i38 + 2524) & 0x200000) != 0 && (v1443 & 1) != 0 )
                    {
                      v1444 = *(unsigned int *)(i38 + 2676);
                      v1445 = *(_QWORD *)(i38 + 2104);
                      v1433 = *(_QWORD *)(i38 + 2680);
                      v1432 = (int *)(v1444 + i38);
                      v1431 = v1444 + i38 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v1444) >> 3);
                      while ( v1432 != (int *)v1431 )
                      {
                        *(_QWORD *)v1432 ^= v1433;
                        v1433 = ((v1445 ^ *(_QWORD *)v1432) + __ROR8__(v1433, v1433 & 0x3F)) ^ 0xEFA;
                        v1432 += 2;
                      }
                      *(_DWORD *)(i38 + 2524) &= ~0x200000u;
                      if ( v1433 != *(_QWORD *)(i38 + 2688) )
                      {
                        v1446 = *(_DWORD *)(i38 + 2052);
                        v1447 = *(_QWORD *)(i38 + 1416);
                        *(_QWORD *)v1447 = i38;
                        *(_DWORD *)(v1447 + 16) = v1446;
                        if ( !*(_DWORD *)(i38 + 2328) )
                          *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v1433 ^ *(_QWORD *)(i38 + 2688);
                        ProbeAndFlag1(i38, 0LL, v1433, 256LL);
                      }
                    }
                  }
                }
                if ( v1409 != *(_QWORD *)(i38 + 1240) )
                {
                  v1448 = (unsigned __int64 *)(*(__int64 (__fastcall **)(__int64, __int64, __int64, unsigned __int64))(i38 + 984))(
                                                v1409,
                                                1LL,
                                                v1433,
                                                v1431);
                  v1449 = v1448;
                  if ( v1448 )
                  {
                    v1450 = *v1448;
                    v1451 = v1448;
                    if ( *v1448 )
                    {
                      v1452 = v2430;
                      v1453 = v2434;
                      v2425 = (__int64)v1448;
                      do
                      {
                        *v1449 = v1450 & 0xFFFFFFFFFFFFFFFCuLL;
                        (*(void (**)(void))(i38 + 496))();
                        v1454 = v2437;
                        v1455 = v1449[1] & 0xFFFFFFFFFFFF0000uLL;
                        if ( v1455 == v1452 )
                          v1454 = v1430;
                        v1456 = v1449[1] >> 6;
                        LOBYTE(v1456) = v1456 & 0xF;
                        if ( !(*(unsigned int (__fastcall **)(unsigned __int64, __int64))(i38 + 1016))(v1456, v1454) )
                        {
                          if ( (*(_DWORD *)(i38 + 2520) & 0x20000000) != 0 )
                          {
                            v1457 = *(_QWORD **)(i38 + 2760);
                            v1458 = 48;
                            v1459 = 6LL;
                            do
                            {
                              v1458 -= 8;
                              *v1457 = *(_QWORD *)v212;
                              v212 += 8;
                              ++v1457;
                              --v1459;
                            }
                            while ( v1459 );
                            if ( v1458 )
                            {
                              do
                              {
                                v1460 = *v212++;
                                *(_BYTE *)v1457 = v1460;
                                v1457 = (_QWORD *)((char *)v1457 + 1);
                                --v1458;
                              }
                              while ( v1458 );
                              v1430 = v2669;
                            }
                            v212 = *(char **)(i38 + 2760);
                          }
                          *((_QWORD *)v212 + 3) = v1455;
                          *((_QWORD *)v212 + 4) = *v1449;
                          v212[40] = ((unsigned __int64)*((unsigned int *)v1449 + 2) >> 6) & 0xF;
                          if ( !*(_DWORD *)(i38 + 2328) )
                          {
                            *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
                            *(_QWORD *)(i38 + 2344) = v212 - 0x4C48B4211BBACBEBLL;
                            *(_QWORD *)(i38 + 2352) = *(int *)v212;
                            *(_QWORD *)(i38 + 2360) = v1453;
                            *(_DWORD *)(i38 + 2328) = 1;
                            v1461 = *(_DWORD *)(i38 + 2520);
                            if ( (v1461 & 0x20000000) == 0
                              && (*(_DWORD *)(i38 + 2524) & 0x200000) != 0
                              && (v1461 & 1) != 0 )
                            {
                              v1462 = *(unsigned int *)(i38 + 2676);
                              v1463 = *(_QWORD *)(i38 + 2104);
                              v1464 = *(_QWORD *)(i38 + 2680);
                              v1465 = (_QWORD *)(v1462 + i38);
                              v1466 = v1462
                                    + i38
                                    + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v1462) >> 3);
                              while ( v1465 != (_QWORD *)v1466 )
                              {
                                *v1465 ^= v1464;
                                v1464 = ((v1463 ^ *v1465++) + __ROR8__(v1464, v1464 & 0x3F)) ^ 0xEFA;
                              }
                              *(_DWORD *)(i38 + 2524) &= ~0x200000u;
                              if ( v1464 != *(_QWORD *)(i38 + 2688) )
                              {
                                v1467 = *(_DWORD *)(i38 + 2052);
                                v1468 = *(_QWORD *)(i38 + 1416);
                                *(_QWORD *)v1468 = i38;
                                *(_DWORD *)(v1468 + 16) = v1467;
                                if ( !*(_DWORD *)(i38 + 2328) )
                                  *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v1464 ^ *(_QWORD *)(i38 + 2688);
                                ProbeAndFlag1(i38, 0LL, v1464, 256LL);
                              }
                            }
                          }
                        }
                        v1449 += 6;
                        v1450 = *v1449;
                      }
                      while ( *v1449 );
                      v1451 = (_QWORD *)v2425;
                      goto LABEL_2308;
                    }
                    goto LABEL_2309;
                  }
                }
                goto LABEL_2310;
              }
              v1413 = *(unsigned int *)(i38 + 2676);
              v1414 = *(_QWORD *)(i38 + 2104);
              v1415 = *(_QWORD *)(i38 + 2680);
              v1416 = (_QWORD *)(v1413 + i38);
              v1417 = v1413 + i38 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v1413) >> 3);
              while ( v1416 != (_QWORD *)v1417 )
              {
                *v1416 ^= v1415;
                v1415 = ((v1414 ^ *v1416++) + __ROR8__(v1415, v1415 & 0x3F)) ^ 0xEFA;
              }
              *(_DWORD *)(i38 + 2524) &= ~0x200000u;
              if ( v1415 != *(_QWORD *)(i38 + 2688) )
              {
                v1418 = *(_DWORD *)(i38 + 2052);
                v1419 = *(_QWORD *)(i38 + 1416);
                *(_QWORD *)v1419 = i38;
                *(_DWORD *)(v1419 + 16) = v1418;
                if ( !*(_DWORD *)(i38 + 2328) )
                  *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v1415 ^ *(_QWORD *)(i38 + 2688);
                ProbeAndFlag1(i38, 0LL, v1415, 256LL);
              }
            }
          }
          v1411 = (int *)v2424;
          goto LABEL_2154;
        }
LABEL_2313:
        v1525 = *(_QWORD *)(i38 + 1240);
        if ( (*(int (__fastcall **)(__int64))(i38 + 928))(v1525) < 0 )
        {
LABEL_2398:
          if ( v2427 )
            (*(void (**)(void))(i38 + 496))();
          *(_DWORD *)(i38 + 2120) += (_DWORD)m << 8;
          goto LABEL_404;
        }
        v1526 = (*(unsigned __int8 (__fastcall **)(__int64))(i38 + 992))(v1525);
        v2671 = (*(__int64 (__fastcall **)(__int64, char *))(i38 + 1000))(v1525, v2439);
        v2430 = (*(__int64 (__fastcall **)(__int64))(i38 + 1008))(v1525);
        if ( (_BYTE)v1526 != 114 && !*(_DWORD *)(i38 + 2328) )
        {
          *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = (unsigned int)v1526 ^ 0x72LL;
          if ( !*(_DWORD *)(i38 + 2328) )
          {
            v1527 = (int *)v2424;
            *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(i38 + 2344) = (char *)v1527 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(i38 + 2352) = *v1527;
            *(_QWORD *)(i38 + 2360) = v1525;
            *(_DWORD *)(i38 + 2328) = 1;
            v1528 = *(_DWORD *)(i38 + 2520);
            if ( (v1528 & 0x20000000) != 0 || (*(_DWORD *)(i38 + 2524) & 0x200000) == 0 || (v1528 & 1) == 0 )
              goto LABEL_2328;
            v1529 = *(unsigned int *)(i38 + 2676);
            v1530 = *(_QWORD *)(i38 + 2104);
            v1531 = *(_QWORD *)(i38 + 2680);
            v1532 = (_QWORD *)(v1529 + i38);
            v1533 = v1529 + i38 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v1529) >> 3);
            while ( v1532 != (_QWORD *)v1533 )
            {
              *v1532 ^= v1531;
              v1531 = ((v1530 ^ *v1532++) + __ROR8__(v1531, v1531 & 0x3F)) ^ 0xEFA;
            }
            *(_DWORD *)(i38 + 2524) &= ~0x200000u;
            if ( v1531 != *(_QWORD *)(i38 + 2688) )
            {
              v1534 = *(_DWORD *)(i38 + 2052);
              v1535 = *(_QWORD *)(i38 + 1416);
              *(_QWORD *)v1535 = i38;
              *(_DWORD *)(v1535 + 16) = v1534;
              if ( !*(_DWORD *)(i38 + 2328) )
                *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v1531 ^ *(_QWORD *)(i38 + 2688);
              ProbeAndFlag1(i38, 0LL, v1531, 256LL);
            }
          }
        }
        v1527 = (int *)v2424;
LABEL_2328:
        v1536 = 0;
        if ( (v1526 & 7) == 1 )
        {
          v1536 = 48;
        }
        else if ( (v1526 & 7) == 2 )
        {
          v1536 = 16;
          v1408 = 16;
        }
        else if ( (v1526 & 7) != 0 && !*(_DWORD *)(i38 + 2328) )
        {
          *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(i38 + 2344) = (char *)v1527 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(i38 + 2352) = *v1527;
          *(_QWORD *)(i38 + 2360) = v1525;
          *(_DWORD *)(i38 + 2328) = 1;
          v1537 = *(_DWORD *)(i38 + 2520);
          if ( (v1537 & 0x20000000) == 0 && (*(_DWORD *)(i38 + 2524) & 0x200000) != 0 && (v1537 & 1) != 0 )
          {
            v1538 = *(unsigned int *)(i38 + 2676);
            v1539 = *(_QWORD *)(i38 + 2104);
            v1540 = *(_QWORD *)(i38 + 2680);
            v1541 = (_QWORD *)(v1538 + i38);
            v1542 = v1538 + i38 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v1538) >> 3);
            while ( v1541 != (_QWORD *)v1542 )
            {
              *v1541 ^= v1540;
              v1540 = ((v1539 ^ *v1541++) + __ROR8__(v1540, v1540 & 0x3F)) ^ 0xEFA;
            }
            *(_DWORD *)(i38 + 2524) &= ~0x200000u;
            if ( v1540 != *(_QWORD *)(i38 + 2688) )
            {
              v1543 = *(_DWORD *)(i38 + 2052);
              v1544 = *(_QWORD *)(i38 + 1416);
              *(_QWORD *)v1544 = i38;
              *(_DWORD *)(v1544 + 16) = v1543;
              if ( !*(_DWORD *)(i38 + 2328) )
                *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v1540 ^ *(_QWORD *)(i38 + 2688);
              ProbeAndFlag1(i38, 0LL, v1540, 256LL);
            }
          }
        }
        v1545 = *(_QWORD *)(i38 + 1472);
        v1546 = 0xA3A03F5891C8B4E8uLL;
        v1547 = (int *)v2424;
        v1548 = 0xB3B74BDEE4453415uLL;
        v1549 = v1526 >> 4;
        if ( (*(_BYTE *)(v1545 + 2 * v1549) | (unsigned __int8)v1536) != v2671 && !*(_DWORD *)(i38 + 2328) )
        {
          *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(i38 + 2344) = (char *)v1547 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(i38 + 2352) = *v1547;
          *(_QWORD *)(i38 + 2360) = v1525;
          *(_DWORD *)(i38 + 2328) = 1;
          v1550 = *(_DWORD *)(i38 + 2520);
          if ( (v1550 & 0x20000000) == 0 && (*(_DWORD *)(i38 + 2524) & 0x200000) != 0 && (v1550 & 1) != 0 )
          {
            v1551 = *(unsigned int *)(i38 + 2676);
            v1552 = *(_QWORD *)(i38 + 2104);
            v1553 = *(_QWORD *)(i38 + 2680);
            v1554 = (_QWORD *)(v1551 + i38);
            v1555 = v1551 + i38 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v1551) >> 3);
            while ( v1554 != (_QWORD *)v1555 )
            {
              *v1554 ^= v1553;
              v1553 = ((v1552 ^ *v1554++) + __ROR8__(v1553, v1553 & 0x3F)) ^ 0xEFA;
            }
            *(_DWORD *)(i38 + 2524) &= ~0x200000u;
            if ( v1553 != *(_QWORD *)(i38 + 2688) )
            {
              v1556 = *(_DWORD *)(i38 + 2052);
              v1557 = *(_QWORD *)(i38 + 1416);
              *(_QWORD *)v1557 = i38;
              *(_DWORD *)(v1557 + 16) = v1556;
              if ( !*(_DWORD *)(i38 + 2328) )
                *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v1553 ^ *(_QWORD *)(i38 + 2688);
              ProbeAndFlag1(i38, 0LL, v1553, 256LL);
            }
            v1547 = (int *)v2424;
            v1546 = 0xA3A03F5891C8B4E8uLL;
            v1548 = 0xB3B74BDEE4453415uLL;
          }
        }
        if ( (*(_BYTE *)(v1545 + 2 * v1549 + 1) | (unsigned __int8)v1408) != v2439[0] && !*(_DWORD *)(i38 + 2328) )
        {
          *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(i38 + 2344) = (char *)v1547 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(i38 + 2352) = *v1547;
          *(_QWORD *)(i38 + 2360) = v1525;
          *(_DWORD *)(i38 + 2328) = 1;
          v1558 = *(_DWORD *)(i38 + 2520);
          if ( (v1558 & 0x20000000) == 0 && (*(_DWORD *)(i38 + 2524) & 0x200000) != 0 && (v1558 & 1) != 0 )
          {
            v1559 = *(unsigned int *)(i38 + 2676);
            v1560 = *(_QWORD *)(i38 + 2104);
            v1548 = *(_QWORD *)(i38 + 2680);
            v1547 = (int *)(v1559 + i38);
            v1546 = v1559 + i38 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v1559) >> 3);
            while ( v1547 != (int *)v1546 )
            {
              *(_QWORD *)v1547 ^= v1548;
              v1548 = ((v1560 ^ *(_QWORD *)v1547) + __ROR8__(v1548, v1548 & 0x3F)) ^ 0xEFA;
              v1547 += 2;
            }
            *(_DWORD *)(i38 + 2524) &= ~0x200000u;
            if ( v1548 != *(_QWORD *)(i38 + 2688) )
            {
              v1561 = *(_DWORD *)(i38 + 2052);
              v1562 = *(_QWORD *)(i38 + 1416);
              *(_QWORD *)v1562 = i38;
              *(_DWORD *)(v1562 + 16) = v1561;
              if ( !*(_DWORD *)(i38 + 2328) )
                *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v1548 ^ *(_QWORD *)(i38 + 2688);
              ProbeAndFlag1(i38, 0LL, v1548, 256LL);
            }
          }
        }
        if ( v1525 != *(_QWORD *)(i38 + 1240) )
        {
          v1563 = (unsigned __int64 *)(*(__int64 (__fastcall **)(__int64, __int64, unsigned __int64, unsigned __int64))(i38 + 984))(
                                        v1525,
                                        1LL,
                                        v1548,
                                        v1546);
          v1564 = v1563;
          if ( v1563 )
          {
            v1565 = *v1563;
            v1566 = v1563;
            if ( *v1563 )
            {
              v1567 = v2671;
              v1568 = v2430;
              v1569 = v2424;
              v2425 = (__int64)v1563;
              do
              {
                *v1564 = v1565 & 0xFFFFFFFFFFFFFFFCuLL;
                (*(void (**)(void))(i38 + 496))();
                v1570 = (unsigned __int8)v2439[0];
                v1571 = v1564[1] & 0xFFFFFFFFFFFF0000uLL;
                if ( v1571 == v1568 )
                  v1570 = v1567;
                v1572 = v1564[1] >> 6;
                LOBYTE(v1572) = v1572 & 0xF;
                if ( !(*(unsigned int (__fastcall **)(unsigned __int64, __int64))(i38 + 1016))(v1572, v1570) )
                {
                  if ( (*(_DWORD *)(i38 + 2520) & 0x20000000) != 0 )
                  {
                    v1573 = *(_QWORD **)(i38 + 2760);
                    v1574 = 48;
                    v1575 = 6LL;
                    do
                    {
                      v1574 -= 8;
                      *v1573 = *(_QWORD *)v1569;
                      v1569 += 8;
                      ++v1573;
                      --v1575;
                    }
                    while ( v1575 );
                    if ( v1574 )
                    {
                      do
                      {
                        v1576 = *v1569++;
                        *(_BYTE *)v1573 = v1576;
                        v1573 = (_QWORD *)((char *)v1573 + 1);
                        --v1574;
                      }
                      while ( v1574 );
                      v1567 = v2671;
                    }
                    v1569 = *(char **)(i38 + 2760);
                  }
                  *((_QWORD *)v1569 + 3) = v1571;
                  *((_QWORD *)v1569 + 4) = *v1564;
                  v1569[40] = ((unsigned __int64)*((unsigned int *)v1564 + 2) >> 6) & 0xF;
                  if ( !*(_DWORD *)(i38 + 2328) )
                  {
                    *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(i38 + 2344) = v1569 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(i38 + 2352) = *(int *)v1569;
                    *(_QWORD *)(i38 + 2360) = v1525;
                    *(_DWORD *)(i38 + 2328) = 1;
                    v1577 = *(_DWORD *)(i38 + 2520);
                    if ( (v1577 & 0x20000000) == 0 && (*(_DWORD *)(i38 + 2524) & 0x200000) != 0 && (v1577 & 1) != 0 )
                    {
                      v1578 = *(unsigned int *)(i38 + 2676);
                      v1579 = *(_QWORD *)(i38 + 2104);
                      v1580 = *(_QWORD *)(i38 + 2680);
                      v1581 = (_QWORD *)(v1578 + i38);
                      v1582 = v1578 + i38 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v1578) >> 3);
                      while ( v1581 != (_QWORD *)v1582 )
                      {
                        *v1581 ^= v1580;
                        v1580 = ((v1579 ^ *v1581++) + __ROR8__(v1580, v1580 & 0x3F)) ^ 0xEFA;
                      }
                      *(_DWORD *)(i38 + 2524) &= ~0x200000u;
                      if ( v1580 != *(_QWORD *)(i38 + 2688) )
                      {
                        v1583 = *(_DWORD *)(i38 + 2052);
                        v1584 = *(_QWORD *)(i38 + 1416);
                        *(_QWORD *)v1584 = i38;
                        *(_DWORD *)(v1584 + 16) = v1583;
                        if ( !*(_DWORD *)(i38 + 2328) )
                          *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v1580 ^ *(_QWORD *)(i38 + 2688);
                        ProbeAndFlag1(i38, 0LL, v1580, 256LL);
                      }
                    }
                  }
                }
                v1564 += 6;
                v1565 = *v1564;
              }
              while ( *v1564 );
              v1566 = (_QWORD *)v2425;
            }
            (*(void (__fastcall **)(_QWORD *))(i38 + 264))(v1566);
          }
        }
        (*(void (__fastcall **)(__int64, int *, unsigned __int64, unsigned __int64))(i38 + 936))(
          v1525,
          v1547,
          v1548,
          v1546);
        LODWORD(m) = v2429;
        *(_DWORD *)(i38 + 2120) += 0x8000;
        goto LABEL_2398;
      }
      if ( v219 == 41 || v219 == 42 )
        goto LABEL_1924;
      if ( v219 == 43 )
        goto LABEL_2845;
      if ( v219 != 44 )
      {
        if ( v219 == 46 )
        {
          if ( (*(_DWORD *)(i38 + 2128) & 1) == 0 )
          {
            v1753 = 0;
            v1754 = *(_QWORD *)(i38 + 1344);
            (*(void (**)(void))(i38 + 392))();
            if ( (*(_DWORD *)(i38 + 2520) & 0x20000000) != 0 || (v1755 = *(_DWORD *)(i38 + 2424), v1755 >= 7) )
            {
              (*(void (__fastcall **)(_QWORD, _QWORD))(i38 + 312))(*(_QWORD *)(i38 + 2632), 0LL);
              v1756 = 0x80;
            }
            else
            {
              v1756 = 1 << v1755;
            }
            (*(void (__fastcall **)(__int64, _QWORD))(i38 + 328))(v1754, 0LL);
            if ( v1756 == (char)0x80 )
            {
              (*(void (__fastcall **)(_QWORD, _QWORD))(i38 + 320))(*(_QWORD *)(i38 + 2632), 0LL);
            }
            else
            {
              v1757 = *(volatile signed __int8 ***)(i38 + 1304);
              v1758 = *v1757;
              if ( *v1757 != (volatile signed __int8 *)v1757 )
              {
                v1759 = ~v1756;
                do
                {
                  _InterlockedAnd8(&v1758[*(_QWORD *)(i38 + 1736) - *(_QWORD *)(i38 + 1760)], v1759);
                  v1758 = *(volatile signed __int8 **)v1758;
                  ++v1753;
                }
                while ( v1758 != (volatile signed __int8 *)v1757 );
              }
            }
            (*(void (__fastcall **)(_QWORD, _QWORD))(i38 + 336))(*(_QWORD *)(i38 + 1344), 0LL);
            (*(void (**)(void))(i38 + 400))();
            *(_DWORD *)(i38 + 2120) += v1753 << 7;
            m = 0LL;
          }
          goto LABEL_406;
        }
        if ( v219 == 47 )
        {
          v2446 = *(_QWORD *)(*(_QWORD *)(i38 + 1720)
                            + *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *(_QWORD *)(i38 + 1624))
                            + *(_QWORD *)(i38 + 1688));
          *(_QWORD *)&i29 = (*(__int64 (**)(void))(i38 + 1168))();
          v94 = 0xFFFFFFFFLL;
          v1741 = i29;
          if ( (_QWORD)i29 == 0xFFFFFFFFLL )
          {
            v2446 = 0LL;
            v1742 = *(_QWORD *)(i38 + 2512);
            if ( !v1742
              || ((*(int (__fastcall **)(__int64, __int64 *))(i38 + 1152))(v1742, &v2446) >= 0
                ? (v1743 = v2446)
                : (v1743 = 0LL, v2446 = 0LL),
                  !v1743) )
            {
              v2446 = (*(__int64 (__fastcall **)(_QWORD))(i38 + 960))(0LL);
            }
            *(_QWORD *)(i38 + 2512) = 0LL;
            v1744 = 0;
            if ( !v2446 )
              goto LABEL_2686;
            while ( 1 )
            {
              ++v1744;
              if ( (*(int (**)(void))(i38 + 928))() >= 0 )
              {
                (*(void (__fastcall **)(__int64, _BYTE *))(i38 + 1080))(v2446, v2655);
                v1741 = (*(__int64 (**)(void))(i38 + 1168))();
                (*(void (__fastcall **)(_BYTE *))(i38 + 1088))(v2655);
                (*(void (__fastcall **)(__int64))(i38 + 936))(v2446);
                if ( v1741 != 0xFFFFFFFFLL || v1744 > 0x100 )
                  break;
              }
              v2446 = (*(__int64 (__fastcall **)(__int64))(i38 + 960))(v2446);
              if ( !v2446 )
                goto LABEL_2686;
            }
            *(_QWORD *)(i38 + 2512) = (*(__int64 (__fastcall **)(__int64))(i38 + 1160))(v2446);
            (*(void (__fastcall **)(__int64))(i38 + 496))(v2446);
            v94 = 0xFFFFFFFFLL;
            if ( v1741 == 0xFFFFFFFFLL )
            {
LABEL_2686:
              *(_DWORD *)(i38 + 2120) += v1744 << 12;
              goto LABEL_406;
            }
          }
          if ( _bittest((const signed __int32 *)(i38 + 2520), 0x1Du) )
          {
            v1745 = *(_QWORD **)(i38 + 2760);
            DWORD2(i29) = 48;
            v1746 = 6LL;
            do
            {
              *((_QWORD *)&i29 + 1) = (unsigned int)(DWORD2(i29) - 8);
              *v1745 = *(_QWORD *)v212;
              v212 += 8;
              ++v1745;
              --v1746;
            }
            while ( v1746 );
            for ( ; DWORD2(i29); *((_QWORD *)&i29 + 1) = (unsigned int)(DWORD2(i29) - 1) )
            {
              LOBYTE(i29) = *v212++;
              *(_BYTE *)v1745 = i29;
              v1745 = (_QWORD *)((char *)v1745 + 1);
            }
            v212 = *(char **)(i38 + 2760);
          }
          *((_QWORD *)v212 + 3) = v1741;
          v1747 = v2446;
          if ( *(_DWORD *)(i38 + 2328) )
            goto LABEL_406;
          *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(i38 + 2344) = v212 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(i38 + 2352) = *(int *)v212;
          *(_QWORD *)(i38 + 2360) = v1747;
          *(_DWORD *)(i38 + 2328) = 1;
          v1748 = *(_DWORD *)(i38 + 2520);
          if ( (v1748 & 0x20000000) != 0 )
            goto LABEL_406;
          if ( (*(_DWORD *)(i38 + 2524) & 0x200000) == 0 )
            goto LABEL_406;
          if ( (v1748 & 1) == 0 )
            goto LABEL_406;
          v1749 = *(unsigned int *)(i38 + 2676);
          v1750 = *(_QWORD *)(i38 + 2104);
          v1187 = *(_QWORD *)(i38 + 2680);
          *((_QWORD *)&i29 + 1) = v1749 + i38;
          v94 = v1749 + i38 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v1749) >> 3);
          while ( *((_QWORD *)&i29 + 1) != v94 )
          {
            **((_QWORD **)&i29 + 1) ^= v1187;
            v1187 = ((v1750 ^ **((_QWORD **)&i29 + 1)) + __ROR8__(v1187, v1187 & 0x3F)) ^ 0xEFA;
            *((_QWORD *)&i29 + 1) += 8LL;
          }
          *(_DWORD *)(i38 + 2524) &= ~0x200000u;
          if ( v1187 == *(_QWORD *)(i38 + 2688) )
            goto LABEL_406;
          v1751 = *(_QWORD *)(i38 + 1416);
          v1752 = *(_DWORD *)(i38 + 2052);
          *(_QWORD *)v1751 = i38;
          *(_DWORD *)(v1751 + 16) = v1752;
          if ( !*(_DWORD *)(i38 + 2328) )
          {
            v1190 = *(_QWORD *)(i38 + 2688) ^ v1187;
            goto LABEL_1800;
          }
LABEL_1801:
          ProbeAndFlag1(i38, 0LL, v1187, 256LL);
          goto LABEL_406;
        }
        if ( v219 != 48 )
          goto LABEL_2408;
        if ( !*((_DWORD *)v212 + 4) )
          goto LABEL_406;
        if ( (*(_DWORD *)(i38 + 2524) & 0x4000) != 0 )
        {
          v1712 = *(volatile signed __int32 **)(i38 + 1240);
          while ( 1 )
          {
            _disable();
            if ( !_interlockedbittestandset(v1712, (*(_DWORD *)(i38 + 2520) >> 9) & 0x1F) )
              break;
            _enable();
            _mm_pause();
          }
        }
        v1713 = (const char *)*((_QWORD *)v212 + 1);
        v1714 = *((unsigned int *)v212 + 4);
        v94 = (unsigned __int64)v1713;
        *(_DWORD *)(i38 + 2120) += v1714;
        v1715 = v1713;
        v1716 = *(_DWORD *)(i38 + 2100);
        for ( kk = *(_QWORD *)(i38 + 2104); v1715 < &v1713[v1714]; v1715 += 64 )
          _mm_prefetch(v1715, 0);
        v1718 = *(_QWORD *)(i38 + 2104);
        v1719 = (unsigned int)v1714 >> 7;
        *((_QWORD *)&i29 + 1) = 1LL;
        if ( (unsigned int)v1714 >> 7 )
        {
          do
          {
            v1720 = 8LL;
            do
            {
              v1721 = *(_QWORD *)(v94 + 8) ^ __ROL8__(*(_QWORD *)v94 ^ v1718, v1716);
              v94 += 16LL;
              v1718 = __ROL8__(v1721, v1716);
              --v1720;
            }
            while ( v1720 );
            i29 = (__ROL8__(kk ^ (v94 - (_QWORD)v1713), 17) ^ kk ^ (v94 - (unsigned __int64)v1713))
                * (unsigned __int128)0x7010008004002001uLL;
            v2562 = *((_QWORD *)&i29 + 1);
            v1722 = i29 ^ BYTE8(i29) ^ v1716;
            *((_QWORD *)&i29 + 1) = 1LL;
            v1716 = v1722 & 0x3F;
            if ( !v1716 )
              LOBYTE(v1716) = 1;
            --v1719;
          }
          while ( v1719 );
          i38 = v2426;
        }
        v1723 = v1714 & 0x7F;
        if ( v1723 >= 8 )
        {
          v1724 = (unsigned __int64)v1723 >> 3;
          do
          {
            v1718 = __ROL8__(*(_QWORD *)v94 ^ v1718, v1716);
            v94 += 8LL;
            v1723 -= 8;
            --v1724;
          }
          while ( v1724 );
        }
        for ( m = 0LL; v1723; --v1723 )
        {
          v1725 = *(unsigned __int8 *)v94++;
          v1718 = __ROL8__(v1725 ^ v1718, v1716);
        }
        for ( mm = v1718; ; LODWORD(v1718) = mm ^ v1718 )
        {
          mm >>= 31;
          if ( !mm )
            break;
        }
        v1727 = v1718 & 0x7FFFFFFF;
        v1728 = 0;
        if ( v1727 == *((_DWORD *)v212 + 5) )
        {
LABEL_2670:
          if ( (*(_DWORD *)(i38 + 2524) & 0x4000) != 0 )
          {
            *((_QWORD *)&i29 + 1) = *(_QWORD *)(i38 + 1240);
            _InterlockedAnd(*((volatile signed __int32 **)&i29 + 1), ~(1 << ((*(_DWORD *)(i38 + 2520) >> 9) & 0x1F)));
            _enable();
          }
          goto LABEL_405;
        }
        if ( !*(_DWORD *)v212 )
          v1728 = *((_DWORD *)v212 + 6) != 0;
        v1729 = *((unsigned int *)v212 + 4);
        *((_QWORD *)&i29 + 1) = *((_QWORD *)v212 + 1);
        if ( !*((_DWORD *)v212 + 4) || (v1730 = 64LL, (*(_DWORD *)(i38 + 2524) & 0x40) == 0) )
        {
LABEL_2657:
          if ( !*(_DWORD *)(i38 + 2328) )
            *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = *((unsigned int *)v212 + 5) ^ (unsigned __int64)v1727;
          v1734 = *((_QWORD *)v212 + 1);
          if ( !*(_DWORD *)(i38 + 2328) )
          {
            *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(i38 + 2344) = v212 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(i38 + 2352) = *(int *)v212;
            *(_QWORD *)(i38 + 2360) = v1734;
            *(_DWORD *)(i38 + 2328) = 1;
            v1735 = *(_DWORD *)(i38 + 2520);
            if ( (v1735 & 0x20000000) == 0 && (*(_DWORD *)(i38 + 2524) & 0x200000) != 0 && (v1735 & 1) != 0 )
            {
              v1736 = *(unsigned int *)(i38 + 2676);
              v1737 = *(_QWORD *)(i38 + 2104);
              v1738 = *(_QWORD *)(i38 + 2680);
              *((_QWORD *)&i29 + 1) = v1736 + i38;
              v94 = v1736 + i38 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v1736) >> 3);
              while ( *((_QWORD *)&i29 + 1) != v94 )
              {
                **((_QWORD **)&i29 + 1) ^= v1738;
                v1738 = ((v1737 ^ **((_QWORD **)&i29 + 1)) + __ROR8__(v1738, v1738 & 0x3F)) ^ 0xEFA;
                *((_QWORD *)&i29 + 1) += 8LL;
              }
              *(_DWORD *)(i38 + 2524) &= ~0x200000u;
              if ( v1738 != *(_QWORD *)(i38 + 2688) )
              {
                v1739 = *(_DWORD *)(i38 + 2052);
                v1740 = *(_QWORD *)(i38 + 1416);
                *(_QWORD *)v1740 = i38;
                *(_DWORD *)(v1740 + 16) = v1739;
                if ( !*(_DWORD *)(i38 + 2328) )
                  *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v1738 ^ *(_QWORD *)(i38 + 2688);
                ProbeAndFlag1(i38, 0LL, v1738, 256LL);
              }
            }
          }
          goto LABEL_2670;
        }
        v1731 = KeGetCurrentIrql();
        __writecr8(2uLL);
        v1732 = *((_QWORD *)&i29 + 1) & 0xFFFFFFFFFFFFF000uLL;
        v2430 = (*((_QWORD *)&i29 + 1) + v1729 - 1) | 0xFFF;
        v1733 = (*((_QWORD *)&i29 + 1) & 0xFFFFFFFFFFFFF000uLL) - 1;
        while ( 1 )
        {
          while ( 1 )
          {
            LODWORD(i29) = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, unsigned __int64))(i38 + 1128))(
                             v1732,
                             0LL,
                             v1730,
                             v94);
            if ( (_DWORD)i29 == -1073741267 )
              break;
            if ( (i29 & 0x80000000) != 0LL )
            {
LABEL_2656:
              __writecr8(v1731);
              v212 = v2424;
              m = 0LL;
              goto LABEL_2657;
            }
LABEL_2654:
            v1732 += 4096LL;
            v1733 += 4096LL;
            if ( v1733 == v2430 )
            {
              __writecr8(v1731);
              m = 0LL;
              goto LABEL_2670;
            }
          }
          if ( v1728 )
            goto LABEL_2656;
          if ( v1731 > 1u )
            goto LABEL_2654;
          __writecr8(v1731);
          __writecr8(2uLL);
        }
      }
      v1760 = (const char *)*((_QWORD *)v212 + 1);
      v1761 = i38;
      v1762 = *((unsigned int *)v212 + 4);
      v94 = (unsigned __int64)v1760;
      *(_DWORD *)(i38 + 2120) += v1762;
      v1763 = v1760;
      v1764 = *(_DWORD *)(i38 + 2100);
      for ( nn = *(_QWORD *)(i38 + 2104); v1763 < &v1760[v1762]; v1763 += 64 )
        _mm_prefetch(v1763, 0);
      v1766 = *(_QWORD *)(i38 + 2104);
      v1767 = (unsigned int)v1762 >> 7;
      *((_QWORD *)&i29 + 1) = 1LL;
      if ( (unsigned int)v1762 >> 7 )
      {
        do
        {
          v1768 = 8LL;
          do
          {
            v1769 = *(_QWORD *)(v94 + 8) ^ __ROL8__(*(_QWORD *)v94 ^ v1766, v1764);
            v94 += 16LL;
            v1766 = __ROL8__(v1769, v1764);
            --v1768;
          }
          while ( v1768 );
          i29 = (__ROL8__(nn ^ (v94 - (_QWORD)v1760), 17) ^ nn ^ (v94 - (unsigned __int64)v1760))
              * (unsigned __int128)0x7010008004002001uLL;
          v2563 = *((_QWORD *)&i29 + 1);
          v1770 = i29 ^ BYTE8(i29) ^ v1764;
          *((_QWORD *)&i29 + 1) = 1LL;
          v1764 = v1770 & 0x3F;
          if ( !v1764 )
            LOBYTE(v1764) = 1;
          --v1767;
        }
        while ( v1767 );
        i38 = v2426;
      }
      v1771 = v1762 & 0x7F;
      if ( v1771 >= 8 )
      {
        v1772 = (unsigned __int64)v1771 >> 3;
        do
        {
          v1766 = __ROL8__(*(_QWORD *)v94 ^ v1766, v1764);
          v94 += 8LL;
          v1771 -= 8;
          --v1772;
        }
        while ( v1772 );
      }
      for ( m = 0LL; v1771; --v1771 )
      {
        v1773 = *(unsigned __int8 *)v94++;
        v1766 = __ROL8__(v1773 ^ v1766, v1764);
      }
      for ( i1 = v1766; ; LODWORD(v1766) = i1 ^ v1766 )
      {
        i1 >>= 31;
        if ( !i1 )
          break;
      }
      v1775 = (int *)v2424;
      v1776 = v1766 & 0x7FFFFFFF;
      v1777 = 0;
      if ( v1776 == *((_DWORD *)v2424 + 5) )
        goto LABEL_2759;
      if ( !*(_DWORD *)v2424 )
        v1777 = *((_DWORD *)v2424 + 6) != 0;
      v1778 = *((unsigned int *)v2424 + 4);
      *((_QWORD *)&i29 + 1) = *((_QWORD *)v2424 + 1);
      if ( !*((_DWORD *)v2424 + 4) )
        goto LABEL_2746;
      v1779 = 64LL;
      if ( (*(_DWORD *)(i38 + 2524) & 0x40) == 0 )
        goto LABEL_2746;
      v1780 = KeGetCurrentIrql();
      __writecr8(2uLL);
      v1781 = *((_QWORD *)&i29 + 1) & 0xFFFFFFFFFFFFF000uLL;
      v2430 = (*((_QWORD *)&i29 + 1) + v1778 - 1) | 0xFFF;
      v2425 = (*((_QWORD *)&i29 + 1) & 0xFFFFFFFFFFFFF000uLL) - 1;
      while ( 1 )
      {
        while ( 1 )
        {
          LODWORD(i29) = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, unsigned __int64))(i38 + 1128))(
                           v1781,
                           0LL,
                           v1779,
                           v94);
          if ( (_DWORD)i29 == -1073741267 )
            break;
          if ( (i29 & 0x80000000) != 0LL )
          {
LABEL_2745:
            __writecr8(v1780);
            v1775 = (int *)v2424;
            m = 0LL;
LABEL_2746:
            if ( !*(_DWORD *)(i38 + 2328) )
              *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = (unsigned int)v1775[5] ^ (unsigned __int64)v1776;
            v1782 = *((_QWORD *)v1775 + 1);
            if ( !*(_DWORD *)(i38 + 2328) )
            {
              *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(i38 + 2344) = (char *)v1775 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(i38 + 2352) = *v1775;
              *(_QWORD *)(i38 + 2360) = v1782;
              *(_DWORD *)(i38 + 2328) = 1;
              v1783 = *(_DWORD *)(i38 + 2520);
              if ( (v1783 & 0x20000000) == 0 && (*(_DWORD *)(i38 + 2524) & 0x200000) != 0 && (v1783 & 1) != 0 )
              {
                v1784 = *(unsigned int *)(i38 + 2676);
                v1785 = *(_QWORD *)(i38 + 2104);
                v1786 = *(_QWORD *)(i38 + 2680);
                *((_QWORD *)&i29 + 1) = v1784 + i38;
                v94 = v1784 + i38 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v1784) >> 3);
                while ( *((_QWORD *)&i29 + 1) != v94 )
                {
                  **((_QWORD **)&i29 + 1) ^= v1786;
                  v1786 = ((v1785 ^ **((_QWORD **)&i29 + 1)) + __ROR8__(v1786, v1786 & 0x3F)) ^ 0xEFA;
                  *((_QWORD *)&i29 + 1) += 8LL;
                }
                *(_DWORD *)(i38 + 2524) &= ~0x200000u;
                if ( v1786 != *(_QWORD *)(i38 + 2688) )
                {
                  v1787 = *(_DWORD *)(i38 + 2052);
                  v1788 = *(_QWORD *)(i38 + 1416);
                  *(_QWORD *)v1788 = i38;
                  *(_DWORD *)(v1788 + 16) = v1787;
                  if ( !*(_DWORD *)(i38 + 2328) )
                    *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v1786 ^ *(_QWORD *)(i38 + 2688);
                  ProbeAndFlag1(i38, 0LL, v1786, 256LL);
                }
              }
            }
            goto LABEL_2759;
          }
LABEL_2743:
          v1781 += 4096LL;
          v2425 += 4096LL;
          if ( v2425 == v2430 )
          {
            __writecr8(v1780);
            v1775 = (int *)v2424;
            m = 0LL;
LABEL_2759:
            if ( (v1775[8] & 1) == 0 )
              goto LABEL_405;
            v1789 = *((_QWORD *)v1775 + 3);
            v1790 = *(__int64 (__fastcall **)(__int64))(i38 + 520);
            v2430 = v1789;
            *(_QWORD *)&i29 = v1790(v1789);
            v1791 = i29 + *(unsigned __int16 *)(i29 + 20) + 24LL;
            *(_QWORD *)&i29 = v1791 + 40LL * *(unsigned __int16 *)(i29 + 6);
            if ( v1791 == (_QWORD)i29 )
              goto LABEL_404;
            v1792 = *(_DWORD *)(i38 + 2116);
            *((_QWORD *)&i29 + 1) = 0LL;
            if ( !v1792 )
            {
              *(_DWORD *)(i38 + 2116) = 4096;
              v1792 = 4096;
            }
            if ( v1789 == *(_QWORD *)(i38 + 1504) || v1789 == *(_QWORD *)(i38 + 1512) )
            {
              v1793 = 1;
              v2673 = 1;
            }
            else
            {
              v2673 = 0;
              v1793 = 1;
            }
            v1794 = i29;
            while ( 1 )
            {
              v1795 = *(_DWORD *)(v1791 + 16);
              v1796 = *(_DWORD *)(v1791 + 12);
              if ( v1795 <= *(_DWORD *)(v1791 + 8) )
                v1795 = *(_DWORD *)(v1791 + 8);
              v1797 = (v1795 + v1796 + 4095) & 0xFFFFF000;
              LODWORD(v2428) = v1797;
              if ( v1792 < v1797 )
                break;
LABEL_2789:
              v1791 += 40LL;
              v1793 = 1;
              if ( v1791 == v1794 )
                goto LABEL_2790;
            }
            if ( (*(_DWORD *)(v1791 + 36) & 0x2000000) != 0 )
              goto LABEL_2788;
            v1798 = *(_DWORD *)v1791;
            if ( *(_DWORD *)v1791 == 1414090313 )
            {
              if ( *(_DWORD *)(v1791 + 4) != 1195525195 )
              {
LABEL_2774:
                if ( v1798 != 1095914053 || *(_WORD *)(v1791 + 4) != 16724 )
                  goto LABEL_2776;
              }
              goto LABEL_2788;
            }
            if ( v1798 != 1162297680 )
              goto LABEL_2774;
            v1800 = *(_WORD *)(v1791 + 4);
            if ( v1800 == 30839 || v1800 == 29303 || v1800 == 30583 )
              goto LABEL_2788;
LABEL_2776:
            if ( v1761 )
            {
              v1799 = *(char **)(v1761 + 2384);
              *((_QWORD *)&v2503 + 1) = *(_QWORD *)(v1761 + 2392);
              v2504 = *(_OWORD *)(v1761 + 2400);
              *(_QWORD *)&v2503 = v1799;
            }
            else
            {
              v2503 = *(_OWORD *)VfExcludeSections;
              v2504 = *(_OWORD *)off_140E09F68;
              v1799 = VfExcludeSections[0];
            }
            LODWORD(v94) = 7;
            v1801 = (char *)v1791;
            while ( 1 )
            {
              v1802 = *v1801++;
              v1803 = *v1799++;
              if ( v1802 != v1803 )
                break;
              v300 = (_DWORD)v94 == 1;
              v94 = (unsigned int)(v94 - 1);
              if ( v300 )
                goto LABEL_2787;
            }
            v1804 = (char *)*((_QWORD *)&v2503 + 1);
            v1805 = 8;
            v94 = v1791;
            do
            {
              v1806 = *(_QWORD *)v94;
              v94 += 8LL;
              v1807 = *(_QWORD *)v1804;
              v1804 += 8;
              if ( v1806 != v1807 )
                goto LABEL_2800;
              v1805 -= 8;
            }
            while ( v1805 >= 8 );
            if ( !v1805 )
            {
LABEL_2787:
              *((_QWORD *)&i29 + 1) = 0LL;
              goto LABEL_2788;
            }
            while ( 1 )
            {
              v1808 = *(_BYTE *)v94++;
              v1809 = *v1804++;
              if ( v1808 != v1809 )
                break;
              if ( !--v1805 )
                goto LABEL_2787;
            }
LABEL_2800:
            v1810 = (char *)v2504;
            LODWORD(v94) = 4;
            v1811 = (char *)v1791;
            while ( 1 )
            {
              v1812 = *v1811++;
              v1813 = *v1810++;
              if ( v1812 != v1813 )
                break;
              v300 = (_DWORD)v94 == 1;
              v94 = (unsigned int)(v94 - 1);
              if ( v300 )
                goto LABEL_2787;
            }
            v1814 = (char *)*((_QWORD *)&v2504 + 1);
            v94 = 6LL;
            v1815 = v1791;
            while ( 1 )
            {
              v1816 = *(_BYTE *)v1815++;
              v1817 = *v1814++;
              if ( v1816 != v1817 )
                break;
              v300 = (_DWORD)v94 == 1;
              v94 = (unsigned int)(v94 - 1);
              if ( v300 )
                goto LABEL_2787;
            }
            LODWORD(i29) = *(_DWORD *)(v1791 + 36);
            *((_QWORD *)&i29 + 1) = 0LL;
            if ( (i29 & 0x80000000) != 0LL || (i29 & 0x20000000) == 0 )
            {
LABEL_2788:
              v1792 = v1797;
              goto LABEL_2789;
            }
            if ( v2673 && *(_DWORD *)v1791 != 778396769 && *(_DWORD *)v1791 != 1162297680 )
              v1793 = 0;
            if ( v1792 < v1796 )
              v1792 = v1796;
            while ( 2 )
            {
              v1818 = v2430 + v1792;
              if ( (*(_BYTE *)(v1761 + 2203) & 4) != 0 )
              {
                __asm
                {
                  xbegin  $+6
                  xend
                }
                v1815 = 1LL;
                ++*(_DWORD *)(v1761 + 2140);
                *(_DWORD *)(v1761 + 2120) += 256;
LABEL_2835:
                v1797 = v2428;
                v1792 += 4096;
                v1826 = *(_DWORD *)(v1761 + 2124);
                if ( v1792 >= (unsigned int)v2428 )
                {
                  if ( *(_DWORD *)(v1761 + 2120) < v1826 )
                    goto LABEL_2789;
LABEL_2790:
                  i38 = v2426;
                  if ( v1791 != v1794 || v1792 < v1797 )
                  {
                    *(_DWORD *)(v1761 + 2116) = v1792;
                    goto LABEL_404;
                  }
                  m = 0LL;
                  *(_DWORD *)(v1761 + 2116) = 0;
                  goto LABEL_405;
                }
                if ( *(_DWORD *)(v1761 + 2120) >= v1826 )
                  goto LABEL_2790;
                continue;
              }
              break;
            }
            if ( v1793 )
            {
              LODWORD(i29) = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, unsigned __int64))(v1761 + 1104))(
                               &v2523,
                               v2430 + v1792,
                               v1815,
                               v94);
              *((_QWORD *)&i29 + 1) = 0LL;
              if ( (i29 & 0x80000000) != 0LL )
              {
                if ( (_DWORD)i29 == -1073741819 )
                {
                  v1819 = (int *)v2424;
                  if ( ((*((_DWORD *)v2424 + 8) & 4) == 0 || *(int *)(v1791 + 36) < 0) && !*(_DWORD *)(v1761 + 2328) )
                  {
                    v1815 = 1LL;
                    *(_QWORD *)(v1761 + 2336) = v1761 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v1761 + 2344) = (char *)v1819 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v1761 + 2352) = *v1819;
                    *(_QWORD *)(v1761 + 2360) = v1818;
                    *(_DWORD *)(v1761 + 2328) = 1;
                    v1820 = *(_DWORD *)(v1761 + 2520);
                    if ( (v1820 & 0x20000000) == 0 && (*(_DWORD *)(v1761 + 2524) & 0x200000) != 0 && (v1820 & 1) != 0 )
                    {
                      v1821 = *(unsigned int *)(v1761 + 2676);
                      v1822 = *(_QWORD *)(v1761 + 2104);
                      v1815 = *(_QWORD *)(v1761 + 2680);
                      v1823 = (_QWORD *)(v1821 + v1761);
                      v94 = v1821
                          + v1761
                          + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v1761 + 2052) - v1821) >> 3);
                      while ( v1823 != (_QWORD *)v94 )
                      {
                        *v1823 ^= v1815;
                        v1815 = ((v1822 ^ *v1823++) + __ROR8__(v1815, v1815 & 0x3F)) ^ 0xEFA;
                      }
                      *(_DWORD *)(v1761 + 2524) &= ~0x200000u;
                      if ( v1815 != *(_QWORD *)(v1761 + 2688) )
                      {
                        v1824 = *(_QWORD *)(v1761 + 1416);
                        v1825 = *(_DWORD *)(v1761 + 2052);
                        *(_QWORD *)v1824 = v1761;
                        *(_DWORD *)(v1824 + 16) = v1825;
                        if ( !*(_DWORD *)(v1761 + 2328) )
                          *(_QWORD *)(*(_QWORD *)(v1761 + 1416) + 24LL) = v1815 ^ *(_QWORD *)(v1761 + 2688);
                        ProbeAndFlag1(v1761, 0LL, v1815, 256LL);
                      }
                      *((_QWORD *)&i29 + 1) = 0LL;
                    }
                  }
                }
                goto LABEL_2835;
              }
            }
            else
            {
              v2523 = 0LL;
              v2525 = 0;
              v2527 = 4096;
              v2524 = 8 * ((((unsigned __int64)(v1818 & 0xFFF) + 0x1FFF) >> 12) + 6);
              v2526 = v1818 & 0xFFFFFFFFFFFFF000uLL;
              v2528 = v1818 & 0xFFF;
              v2529 = (unsigned __int64)(*(__int64 (__fastcall **)(__int64, _QWORD, __int64, unsigned __int64))(v1761 + 1112))(
                                          v2430 + v1792,
                                          0LL,
                                          4095LL,
                                          v94) >> 12;
            }
            ++*(_DWORD *)(v1761 + 2144);
            *(_QWORD *)(v1761 + 2736) = v2526 + v2528;
            *(_QWORD *)(v1761 + 2728) = v2424;
            v1827 = KeGetCurrentIrql();
            __writecr8(2uLL);
            RtlInitMinimalBarrier(v1761 + 2696, **(unsigned int **)(v1761 + 1520), 0LL);
            v1761 = (*(__int64 (__fastcall **)(__int64, __int64))(v1761 + 1096))(
                      v1761 + *(unsigned int *)(v1761 + 2068),
                      v1761);
            __writecr8(v1827);
            *((_QWORD *)&i29 + 1) = 0LL;
            if ( v1793 )
            {
              (*(void (__fastcall **)(__int64 *, _QWORD))(v1761 + 1120))(&v2523, 0LL);
              *((_QWORD *)&i29 + 1) = 0LL;
            }
            *(_DWORD *)(v1761 + 2120) += 81920;
            goto LABEL_2835;
          }
        }
        if ( v1777 )
          goto LABEL_2745;
        if ( v1780 > 1u )
          goto LABEL_2743;
        __writecr8(v1780);
        __writecr8(2uLL);
      }
    }
    if ( v219 == 30 )
    {
      v1191 = *(unsigned int *)(i38 + 2116);
      v2436 = (_DWORD *)*((_QWORD *)v212 + 1);
      v1192 = (char *)&v2436[3 * v1191 + 3];
      v1193 = *((_DWORD *)v212 + 9);
      v2427 = (__int64)v1192;
      v1194 = v1193 / 0xCuLL;
      v2442 = (unsigned int *)v1194;
      v2443 = (char *)&v2436[3 * (v1193 / 0xC)];
      v1195 = &v212[v1191 + 48];
      v2425 = (__int64)v1195;
      v94 = (unsigned int)(v1194 - 1);
      if ( (_DWORD)v1194 )
        *((_QWORD *)&i29 + 1) = &v212[(((unsigned int)v94 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL) + 48];
      else
        *((_QWORD *)&i29 + 1) = v212 + 48;
      *(_QWORD *)&i29 = *((unsigned __int16 *)v212 + 20);
      v2432 = *((_QWORD *)&i29 + 1);
      v2434 = *((_QWORD *)&i29 + 1) + 24 * i29;
      if ( (_DWORD)v1194 )
      {
        if ( (unsigned int)v1191 < (unsigned int)v94 )
        {
          v1196 = &v2436[3 * v1191];
          while ( 1 )
          {
            if ( *v1195 < 0 )
              goto LABEL_1841;
            v1197 = *((_QWORD *)v212 + 3) + (unsigned int)v1196[1];
            v1198 = *(_DWORD *)v1192 - v1196[1];
            *(_DWORD *)(i38 + 2120) += v1198;
            v94 = v1197;
            v1199 = *(_DWORD *)(i38 + 2100);
            v1200 = (const char *)v1197;
            v1201 = *(_QWORD *)(i38 + 2104);
            v1202 = v1197 + v1198;
            v2430 = v1197;
            if ( v1197 < v1202 )
            {
              do
              {
                _mm_prefetch(v1200, 0);
                v1200 += 64;
              }
              while ( (unsigned __int64)v1200 < v1202 );
            }
            v1203 = v1201;
            v1204 = v1198 >> 7;
            if ( v1198 >> 7 )
            {
              do
              {
                v1205 = 8LL;
                do
                {
                  v1206 = *(_QWORD *)(v94 + 8) ^ __ROL8__(*(_QWORD *)v94 ^ v1203, v1199);
                  v94 += 16LL;
                  v1203 = __ROL8__(v1206, v1199);
                  --v1205;
                }
                while ( v1205 );
                v1207 = (__ROL8__(v1201 ^ (v94 - v1197), 17) ^ v1201 ^ (v94 - v1197))
                      * (unsigned __int128)0x7010008004002001uLL;
                v2554 = *((_QWORD *)&v1207 + 1);
                v1199 = ((unsigned __int8)v1207 ^ (unsigned __int8)(BYTE8(v1207) ^ v1199)) & 0x3F;
                if ( !v1199 )
                  LOBYTE(v1199) = 1;
                --v1204;
              }
              while ( v1204 );
              i38 = v2426;
              v1195 = (char *)v2425;
            }
            v1208 = v1198 & 0x7F;
            if ( v1208 >= 8 )
            {
              v1209 = (unsigned __int64)(v1198 & 0x7F) >> 3;
              do
              {
                v1203 = __ROL8__(*(_QWORD *)v94 ^ v1203, v1199);
                v94 += 8LL;
                v1208 -= 8;
                --v1209;
              }
              while ( v1209 );
            }
            if ( v1208 )
            {
              do
              {
                v1210 = *(unsigned __int8 *)v94++;
                v1203 = __ROL8__(v1210 ^ v1203, v1199);
                --v1208;
              }
              while ( v1208 );
              v1195 = (char *)v2425;
            }
            for ( i2 = v1203; ; LOBYTE(v1203) = i2 ^ v1203 )
            {
              i2 >>= 7;
              if ( !i2 )
                break;
            }
            v1212 = v1203 & 0x7F;
            if ( v1212 == (*v1195 & 0x7F) )
              goto LABEL_1838;
            v1213 = v1198;
            if ( v1198 && (*(_DWORD *)(i38 + 2524) & 0x40) != 0 )
            {
              v1214 = KeGetCurrentIrql();
              v1215 = v1197 & 0xFFFFFFFFFFFFF000uLL;
              v1216 = (v1213 + v1197 - 1) | 0xFFF;
              v1217 = (v1197 & 0xFFFFFFFFFFFFF000uLL) - 1;
              while ( 1 )
              {
                __writecr8(2uLL);
                while ( 1 )
                {
                  v1218 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, unsigned __int64, unsigned __int64))(i38 + 1128))(
                            v1215,
                            0LL,
                            v1203,
                            v94);
                  if ( v1218 == -1073741267 )
                    break;
                  if ( v1218 < 0 )
                  {
                    __writecr8(v1214);
                    v1197 = v2430;
                    v1195 = (char *)v2425;
                    goto LABEL_1849;
                  }
LABEL_1836:
                  v1215 += 4096LL;
                  v1217 += 4096LL;
                  if ( v1217 == v1216 )
                  {
                    __writecr8(v1214);
                    v1195 = (char *)v2425;
                    goto LABEL_1838;
                  }
                }
                if ( v1214 > 1u )
                  goto LABEL_1836;
                __writecr8(v1214);
              }
            }
LABEL_1849:
            if ( *(_DWORD *)(i38 + 2328)
              || (*(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = *v1195 & 0x7F ^ (unsigned __int64)v1212,
                  *(_DWORD *)(i38 + 2328)) )
            {
LABEL_1838:
              v212 = v2424;
            }
            else
            {
              v212 = v2424;
              *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(i38 + 2344) = v212 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(i38 + 2352) = *(int *)v212;
              *(_QWORD *)(i38 + 2360) = v1197;
              *(_DWORD *)(i38 + 2328) = 1;
              v1221 = *(_DWORD *)(i38 + 2520);
              if ( (v1221 & 0x20000000) == 0 && (*(_DWORD *)(i38 + 2524) & 0x200000) != 0 && (v1221 & 1) != 0 )
              {
                v1222 = *(unsigned int *)(i38 + 2676);
                v1223 = *(_QWORD *)(i38 + 2104);
                v1224 = *(_QWORD *)(i38 + 2680);
                v1225 = (_QWORD *)(v1222 + i38);
                v94 = v1222 + i38 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v1222) >> 3);
                while ( v1225 != (_QWORD *)v94 )
                {
                  *v1225 ^= v1224;
                  v1224 = ((v1223 ^ *v1225++) + __ROR8__(v1224, v1224 & 0x3F)) ^ 0xEFA;
                }
                *(_DWORD *)(i38 + 2524) &= ~0x200000u;
                if ( v1224 != *(_QWORD *)(i38 + 2688) )
                {
                  v1226 = *(_DWORD *)(i38 + 2052);
                  m = 0LL;
                  v1227 = *(_QWORD *)(i38 + 1416);
                  *(_QWORD *)v1227 = i38;
                  *(_DWORD *)(v1227 + 16) = v1226;
                  if ( !*(_DWORD *)(i38 + 2328) )
                    *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v1224 ^ *(_QWORD *)(i38 + 2688);
                  ProbeAndFlag1(i38, 0LL, v1224, 256LL);
                  goto LABEL_1840;
                }
              }
            }
            m = 0LL;
LABEL_1840:
            v1192 = (char *)v2427;
            *(_DWORD *)(i38 + 2120) += 64;
LABEL_1841:
            ++v1195;
            v1192 += 12;
            v2425 = (__int64)v1195;
            v1196 += 3;
            v2427 = (__int64)v1192;
            if ( v1192 >= v2443 || *(_DWORD *)(i38 + 2120) >= *(_DWORD *)(i38 + 2124) )
            {
              LODWORD(v1194) = (_DWORD)v2442;
              v1219 = ((int)v1196 - (int)v2436) / 12;
              *(_DWORD *)(i38 + 2116) = v1219;
              LODWORD(v1191) = v1219;
              *((_QWORD *)&i29 + 1) = v2432;
              break;
            }
          }
        }
        if ( (unsigned int)v1191 < (int)v1194 - 1 )
          goto LABEL_405;
      }
      if ( *(_DWORD *)(i38 + 2120) >= *(_DWORD *)(i38 + 2124) )
        goto LABEL_405;
      if ( (_DWORD)v1194 )
        v1220 = 3LL * (unsigned int)(v1191 - v1194 + 1);
      else
        v1220 = 3LL * (unsigned int)v1191;
      v1228 = *((_QWORD *)&i29 + 1) + 8 * v1220;
      v2432 = v1228;
LABEL_1863:
      v1229 = (int *)v2424;
      v1230 = (int *)(v1228 + 8);
      v2425 = v1228 + 8;
      *((_QWORD *)&i29 + 1) = 0LL;
      v2427 = 2LL;
      v1231 = 2LL;
LABEL_1864:
      if ( *v1230 < 0 )
        goto LABEL_1909;
      v1232 = *((_QWORD *)v1229 + 3) + (unsigned int)*(v1230 - 2);
      v1233 = *(v1230 - 1) - *(v1230 - 2);
      *(_DWORD *)(i38 + 2120) += v1233;
      v1234 = (_QWORD *)v1232;
      v1235 = *(_DWORD *)(i38 + 2100);
      v1236 = (const char *)v1232;
      v1237 = *(_QWORD *)(i38 + 2104);
      v1238 = v1232 + v1233;
      v2430 = v1232;
      if ( v1232 < v1238 )
      {
        do
        {
          _mm_prefetch(v1236, 0);
          v1236 += 64;
        }
        while ( (unsigned __int64)v1236 < v1238 );
      }
      v1239 = v1237;
      v1240 = v1233 >> 7;
      if ( v1233 >> 7 )
      {
        do
        {
          v1241 = 8LL;
          do
          {
            v1242 = v1234[1] ^ __ROL8__(*v1234 ^ v1239, v1235);
            v1234 += 2;
            v1239 = __ROL8__(v1242, v1235);
            --v1241;
          }
          while ( v1241 );
          v1243 = __ROL8__(v1237 ^ ((unsigned __int64)v1234 - v1232), 17) ^ v1237 ^ ((unsigned __int64)v1234 - v1232);
          v2555 = (v1243 * (unsigned __int128)0x7010008004002001uLL) >> 64;
          v1235 = ((unsigned __int8)(v2555 ^ v1243) ^ (unsigned __int8)v1235) & 0x3F;
          if ( !v1235 )
            LOBYTE(v1235) = 1;
          --v1240;
        }
        while ( v1240 );
        i38 = v2426;
        v1230 = (int *)v2425;
        v1231 = v2427;
      }
      v94 = 1LL;
      v1244 = v1233 & 0x7F;
      if ( v1244 >= 8 )
      {
        v1245 = (unsigned __int64)(v1233 & 0x7F) >> 3;
        do
        {
          v1239 = __ROL8__(*v1234++ ^ v1239, v1235);
          v1244 -= 8;
          --v1245;
        }
        while ( v1245 );
      }
      if ( v1244 )
      {
        do
        {
          v1246 = *(unsigned __int8 *)v1234;
          v1234 = (_QWORD *)((char *)v1234 + 1);
          v1239 = __ROL8__(v1246 ^ v1239, v1235);
          --v1244;
        }
        while ( v1244 );
        v1230 = (int *)v2425;
      }
      for ( i3 = v1239; ; LODWORD(v1239) = i3 ^ v1239 )
      {
        i3 >>= 31;
        if ( !i3 )
          break;
      }
      v1248 = v1239 & 0x7FFFFFFF;
      if ( v1248 == (*v1230 & 0x7FFFFFFF) )
        goto LABEL_1908;
      v1249 = v1233;
      if ( !v1233 || (*(_DWORD *)(i38 + 2524) & 0x40) == 0 )
        goto LABEL_1895;
      v1250 = KeGetCurrentIrql();
      v1251 = v1232 & 0xFFFFFFFFFFFFF000uLL;
      v1252 = (v1249 + v1232 - 1) | 0xFFF;
      v1253 = (v1232 & 0xFFFFFFFFFFFFF000uLL) - 1;
LABEL_1887:
      __writecr8(2uLL);
      while ( 1 )
      {
        v1254 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, _QWORD *, unsigned __int64))(i38 + 1128))(
                  v1251,
                  0LL,
                  v1234,
                  v94);
        if ( v1254 == -1073741267 )
        {
          if ( v1250 <= 1u )
          {
            __writecr8(v1250);
            goto LABEL_1887;
          }
        }
        else if ( v1254 < 0 )
        {
          __writecr8(v1250);
          v1232 = v2430;
          v1230 = (int *)v2425;
          v1231 = v2427;
LABEL_1895:
          v1255 = (unsigned int)*v1230;
          LODWORD(v1255) = v1255 & 0x7FFFFFFF;
          if ( !*(_DWORD *)(i38 + 2328) )
          {
            *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v1255 ^ v1248;
            if ( !*(_DWORD *)(i38 + 2328) )
            {
              *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(i38 + 2344) = (char *)v1229 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(i38 + 2352) = *v1229;
              *(_QWORD *)(i38 + 2360) = v1232;
              *(_DWORD *)(i38 + 2328) = 1;
              v1256 = *(_DWORD *)(i38 + 2520);
              if ( (v1256 & 0x20000000) == 0 && (*(_DWORD *)(i38 + 2524) & 0x200000) != 0 && (v1256 & 1) != 0 )
              {
                v1257 = *(unsigned int *)(i38 + 2676);
                v1258 = *(_QWORD *)(i38 + 2104);
                v1259 = *(_QWORD *)(i38 + 2680);
                v1260 = (_QWORD *)(v1257 + i38);
                v94 = v1257 + i38 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v1257) >> 3);
                while ( v1260 != (_QWORD *)v94 )
                {
                  *v1260 ^= v1259;
                  v1259 = ((v1258 ^ *v1260++) + __ROR8__(v1259, v1259 & 0x3F)) ^ 0xEFA;
                }
                *(_DWORD *)(i38 + 2524) &= ~0x200000u;
                if ( v1259 != *(_QWORD *)(i38 + 2688) )
                {
                  v1261 = *(_DWORD *)(i38 + 2052);
                  v1262 = *(_QWORD *)(i38 + 1416);
                  *(_QWORD *)v1262 = i38;
                  *(_DWORD *)(v1262 + 16) = v1261;
                  if ( !*(_DWORD *)(i38 + 2328) )
                    *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v1259 ^ *(_QWORD *)(i38 + 2688);
                  ProbeAndFlag1(i38, 0LL, v1259, 256LL);
                }
              }
            }
          }
LABEL_1908:
          *((_QWORD *)&i29 + 1) = 0LL;
LABEL_1909:
          v1230 += 3;
          --v1231;
          v2425 = (__int64)v1230;
          v2427 = v1231;
          if ( !v1231 )
          {
            v1263 = v2432;
            ++*(_DWORD *)(i38 + 2116);
            v1228 = v1263 + 24;
            v2432 = v1228;
            if ( v1228 == v2434 )
            {
              m = 0LL;
              *(_DWORD *)(i38 + 2116) = 0;
              goto LABEL_405;
            }
            if ( *(_DWORD *)(i38 + 2120) >= *(_DWORD *)(i38 + 2124) )
              goto LABEL_464;
            goto LABEL_1863;
          }
          goto LABEL_1864;
        }
        v1251 += 4096LL;
        v1253 += 4096LL;
        if ( v1253 == v1252 )
        {
          __writecr8(v1250);
          v1230 = (int *)v2425;
          v1231 = v2427;
          goto LABEL_1908;
        }
      }
    }
    if ( v219 > 15 )
    {
      if ( v219 != 21 )
      {
        if ( v219 != 24 )
        {
          if ( v219 != 25 )
          {
            if ( v219 == 26 )
            {
              if ( (*(_DWORD *)(i38 + 2128) & 1) == 0 )
              {
                v681 = 0;
                v682 = *(_QWORD *)(i38 + 1440);
                v683 = *(_QWORD *)(i38 + 1344);
                v2425 = *(_QWORD *)(i38 + 1448);
                v684 = *(void (**)(void))(i38 + 392);
                v2664 = 0;
                v2427 = v682;
                v684();
                if ( (*(_DWORD *)(i38 + 2520) & 0x20000000) != 0 || (v685 = *(_DWORD *)(i38 + 2424), v685 >= 7) )
                {
                  (*(void (__fastcall **)(_QWORD, _QWORD))(i38 + 312))(*(_QWORD *)(i38 + 2632), 0LL);
                  v686 = 0x80;
                }
                else
                {
                  v686 = 1 << v685;
                }
                (*(void (__fastcall **)(__int64, _QWORD))(i38 + 328))(v683, 0LL);
                v687 = *(volatile signed __int8 ***)(i38 + 1304);
                v688 = *v687;
                if ( *v687 != (volatile signed __int8 *)v687 )
                {
                  do
                  {
                    _InterlockedOr8(&v688[*(_QWORD *)(i38 + 1736) - *(_QWORD *)(i38 + 1760)], v686);
                    v688 = *(volatile signed __int8 **)v688;
                    ++v681;
                  }
                  while ( v688 != (volatile signed __int8 *)v687 );
                  v2664 = v681;
                }
                (*(void (__fastcall **)(__int64, _QWORD))(i38 + 328))(v682, 0LL);
                v689 = *(_QWORD ***)(i38 + 1432);
                v690 = *v689;
                if ( *v689 != v689 )
                {
                  v691 = v2425;
                  v692 = (int *)v2424;
                  do
                  {
                    v693 = (char *)v690 - *(_QWORD *)(i38 + 1872);
                    if ( v693 != (char *)v691 )
                    {
                      v694 = *(_QWORD *)&v693[*(_QWORD *)(i38 + 1864)];
                      if ( (v686 & *(_BYTE *)(v694 + *(_QWORD *)(i38 + 1736))) == 0
                        && (*(_DWORD *)(v694 + *(_QWORD *)(i38 + 1744)) & *(_DWORD *)(i38 + 1768)) != 0
                        && !*(_DWORD *)(i38 + 2328) )
                      {
                        *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(i38 + 2344) = (char *)v692 - 0x4C48B4211BBACBEBLL;
                        *(_QWORD *)(i38 + 2352) = *v692;
                        *(_QWORD *)(i38 + 2360) = v694;
                        *(_DWORD *)(i38 + 2328) = 1;
                        v695 = *(_DWORD *)(i38 + 2520);
                        if ( (v695 & 0x20000000) == 0 && (*(_DWORD *)(i38 + 2524) & 0x200000) != 0 && (v695 & 1) != 0 )
                        {
                          v696 = *(unsigned int *)(i38 + 2676);
                          v697 = *(_QWORD *)(i38 + 2104);
                          v698 = *(_QWORD *)(i38 + 2680);
                          v699 = (_QWORD *)(v696 + i38);
                          v700 = v696
                               + i38
                               + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v696) >> 3);
                          while ( v699 != (_QWORD *)v700 )
                          {
                            *v699 ^= v698;
                            v698 = ((v697 ^ *v699++) + __ROR8__(v698, v698 & 0x3F)) ^ 0xEFA;
                          }
                          *(_DWORD *)(i38 + 2524) &= ~0x200000u;
                          if ( v698 != *(_QWORD *)(i38 + 2688) )
                          {
                            v701 = *(_DWORD *)(i38 + 2052);
                            v702 = *(_QWORD *)(i38 + 1416);
                            *(_QWORD *)v702 = i38;
                            *(_DWORD *)(v702 + 16) = v701;
                            if ( !*(_DWORD *)(i38 + 2328) )
                              *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v698 ^ *(_QWORD *)(i38 + 2688);
                            ProbeAndFlag1(i38, 0LL, v698, 256LL);
                          }
                        }
                      }
                      _InterlockedAnd8((volatile signed __int8 *)(v694 + *(_QWORD *)(i38 + 1736)), ~v686);
                      v691 = v2425;
                    }
                    v690 = (_QWORD *)*v690;
                  }
                  while ( v690 != v689 );
                  v681 = v2664;
                }
                (*(void (__fastcall **)(__int64, _QWORD))(i38 + 336))(v2427, 0LL);
                if ( v686 == 0x80 )
                  (*(void (__fastcall **)(_QWORD, _QWORD))(i38 + 320))(*(_QWORD *)(i38 + 2632), 0LL);
                (*(void (__fastcall **)(_QWORD, _QWORD))(i38 + 336))(*(_QWORD *)(i38 + 1344), 0LL);
                (*(void (**)(void))(i38 + 400))();
                *(_DWORD *)(i38 + 2120) += v681 << 8;
                goto LABEL_404;
              }
              goto LABEL_406;
            }
            if ( v219 == 27 )
            {
              if ( (*(_DWORD *)(i38 + 2128) & 1) == 0 )
                goto LABEL_406;
              v652 = *(_QWORD *)(i38 + 1440);
              v653 = *(_QWORD **)(i38 + 1448);
              v654 = *(void (**)(void))(i38 + 392);
              v655 = *(_QWORD *)(i38 + 1344);
              v2432 = v652;
              v2425 = (__int64)v653;
              v2663 = 0;
              v654();
              if ( (*(_DWORD *)(i38 + 2520) & 0x20000000) != 0 || (v656 = *(_DWORD *)(i38 + 2424), v656 >= 7) )
              {
                (*(void (__fastcall **)(_QWORD, _QWORD))(i38 + 312))(*(_QWORD *)(i38 + 2632), 0LL);
                LOBYTE(m) = 0x80;
              }
              else
              {
                LODWORD(m) = 1;
                LOBYTE(m) = 1 << v656;
              }
              v657 = *(void (__fastcall **)(__int64, _QWORD))(i38 + 328);
              v2429 = m;
              v657(v655, 0LL);
              (*(void (__fastcall **)(__int64, _QWORD))(i38 + 328))(v652, 0LL);
              v658 = *(_QWORD ***)(i38 + 1432);
              v659 = 0LL;
              v2427 = 0LL;
              v660 = *v658;
              if ( *v658 != v658 )
              {
                do
                {
                  if ( v660 - 3 != v653 )
                  {
                    v661 = *(_QWORD *)((char *)v660 + *(_QWORD *)(i38 + 1864) - 24);
                    if ( (*(_DWORD *)(v661 + *(_QWORD *)(i38 + 1744)) & *(_DWORD *)(i38 + 1768)) == 0 )
                    {
                      v662 = *(_QWORD *)((char *)v660 + *(_QWORD *)(i38 + 1864) - 24);
                      if ( v659 )
                        v662 = 1LL;
                      v659 = v662;
                    }
                    _InterlockedOr8((volatile signed __int8 *)(v661 + *(_QWORD *)(i38 + 1736)), m);
                  }
                  v660 = (_QWORD *)*v660;
                }
                while ( v660 != v658 );
                v2427 = v659;
              }
              v663 = *(_QWORD ***)(i38 + 1304);
              v664 = *v663;
              if ( *v663 != v663 )
              {
                v665 = v2425;
                v666 = (unsigned __int8)m;
                v667 = ~(_BYTE)m;
                LODWORD(m) = 0;
                LODWORD(v2428) = v666;
                do
                {
                  v668 = (char *)v664 - *(_QWORD *)(i38 + 1760);
                  if ( (v668[*(_QWORD *)(i38 + 1736)] & v666) == 0 )
                  {
                    v669 = *(_QWORD *)&v668[*(_QWORD *)(i38 + 1752)];
                    if ( v669 )
                    {
                      if ( v669 != v665 && !*(_DWORD *)(i38 + 2328) )
                      {
                        v670 = (int *)v2424;
                        *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(i38 + 2344) = (char *)v670 - 0x4C48B4211BBACBEBLL;
                        *(_QWORD *)(i38 + 2352) = *v670;
                        *(_QWORD *)(i38 + 2360) = v668;
                        *(_DWORD *)(i38 + 2328) = 1;
                        v671 = *(_DWORD *)(i38 + 2520);
                        if ( (v671 & 0x20000000) == 0 && (*(_DWORD *)(i38 + 2524) & 0x200000) != 0 && (v671 & 1) != 0 )
                        {
                          v672 = *(unsigned int *)(i38 + 2676);
                          v673 = *(_QWORD *)(i38 + 2104);
                          v674 = *(_QWORD *)(i38 + 2680);
                          v675 = (_QWORD *)(v672 + i38);
                          v676 = v672
                               + i38
                               + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v672) >> 3);
                          while ( v675 != (_QWORD *)v676 )
                          {
                            *v675 ^= v674;
                            v674 = ((v673 ^ *v675++) + __ROR8__(v674, v674 & 0x3F)) ^ 0xEFA;
                          }
                          *(_DWORD *)(i38 + 2524) &= ~0x200000u;
                          if ( v674 != *(_QWORD *)(i38 + 2688) )
                          {
                            v677 = *(_DWORD *)(i38 + 2052);
                            v678 = *(_QWORD *)(i38 + 1416);
                            *(_QWORD *)v678 = i38;
                            *(_DWORD *)(v678 + 16) = v677;
                            if ( !*(_DWORD *)(i38 + 2328) )
                              *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v674 ^ *(_QWORD *)(i38 + 2688);
                            ProbeAndFlag1(i38, 0LL, v674, 256LL);
                          }
                          v666 = v2428;
                        }
                      }
                    }
                  }
                  _InterlockedAnd8(&v668[*(_QWORD *)(i38 + 1736)], v667);
                  v664 = (_QWORD *)*v664;
                  LODWORD(m) = m + 1;
                }
                while ( v664 != v663 );
                v653 = (_QWORD *)v2425;
                v2663 = m;
                LOBYTE(m) = v2429;
              }
              if ( v2427 )
              {
                if ( v2427 == 1 )
                {
                  v679 = *(_QWORD ***)(i38 + 1432);
                  for ( i4 = *v679; i4 != v679; i4 = (_QWORD *)*i4 )
                  {
                    if ( i4 - 3 != v653 )
                      _InterlockedAnd8(
                        (volatile signed __int8 *)(*(_QWORD *)((char *)i4 + *(_QWORD *)(i38 + 1864) - 24)
                                                 + *(_QWORD *)(i38 + 1736)),
                        ~(_BYTE)m);
                  }
                }
                else
                {
                  _InterlockedAnd8((volatile signed __int8 *)(v2427 + *(_QWORD *)(i38 + 1736)), ~(_BYTE)m);
                }
              }
              (*(void (__fastcall **)(__int64, _QWORD))(i38 + 336))(v2432, 0LL);
              if ( (_BYTE)m == 0x80 )
                (*(void (__fastcall **)(_QWORD, _QWORD))(i38 + 320))(*(_QWORD *)(i38 + 2632), 0LL);
              (*(void (__fastcall **)(_QWORD, _QWORD))(i38 + 336))(*(_QWORD *)(i38 + 1344), 0LL);
              (*(void (**)(void))(i38 + 400))();
              *(_DWORD *)(i38 + 2120) += v2663 << 8;
LABEL_464:
              m = 0LL;
              goto LABEL_405;
            }
            if ( v219 != 28 )
            {
              if ( v219 != 29 )
                goto LABEL_2408;
              v499 = (const char *)*((_QWORD *)v212 + 1);
              v500 = *((unsigned int *)v212 + 4);
              v94 = (unsigned __int64)v499;
              *(_DWORD *)(i38 + 2120) += v500;
              v501 = v499;
              v502 = *(_DWORD *)(i38 + 2100);
              for ( i5 = *(_QWORD *)(i38 + 2104); v501 < &v499[v500]; v501 += 64 )
                _mm_prefetch(v501, 0);
              v504 = *(_QWORD *)(i38 + 2104);
              v505 = (unsigned int)v500 >> 7;
              *((_QWORD *)&i29 + 1) = 1LL;
              if ( (unsigned int)v500 >> 7 )
              {
                do
                {
                  v506 = 8LL;
                  do
                  {
                    v507 = *(_QWORD *)(v94 + 8) ^ __ROL8__(*(_QWORD *)v94 ^ v504, v502);
                    v94 += 16LL;
                    v504 = __ROL8__(v507, v502);
                    --v506;
                  }
                  while ( v506 );
                  i29 = (__ROL8__(i5 ^ (v94 - (_QWORD)v499), 17) ^ i5 ^ (v94 - (unsigned __int64)v499))
                      * (unsigned __int128)0x7010008004002001uLL;
                  v2638 = *((_QWORD *)&i29 + 1);
                  v508 = i29 ^ BYTE8(i29) ^ v502;
                  *((_QWORD *)&i29 + 1) = 1LL;
                  v502 = v508 & 0x3F;
                  if ( !v502 )
                    LOBYTE(v502) = 1;
                  --v505;
                }
                while ( v505 );
                i38 = v2426;
              }
              v509 = v500 & 0x7F;
              if ( v509 >= 8 )
              {
                v510 = (unsigned __int64)v509 >> 3;
                do
                {
                  v504 = __ROL8__(*(_QWORD *)v94 ^ v504, v502);
                  v94 += 8LL;
                  v509 -= 8;
                  --v510;
                }
                while ( v510 );
              }
              for ( m = 0LL; v509; --v509 )
              {
                v511 = *(unsigned __int8 *)v94++;
                v504 = __ROL8__(v511 ^ v504, v502);
              }
              for ( i6 = v504; ; LODWORD(v504) = i6 ^ v504 )
              {
                i6 >>= 31;
                if ( !i6 )
                  break;
              }
              v513 = v504 & 0x7FFFFFFF;
              v514 = 0;
              if ( v513 != *((_DWORD *)v212 + 5) )
              {
                if ( !*(_DWORD *)v212 )
                  v514 = *((_DWORD *)v212 + 6) != 0;
                v515 = *((unsigned int *)v212 + 4);
                *((_QWORD *)&i29 + 1) = *((_QWORD *)v212 + 1);
                if ( *((_DWORD *)v212 + 4) )
                {
                  v516 = 64LL;
                  if ( (*(_DWORD *)(i38 + 2524) & 0x40) != 0 )
                  {
                    v517 = KeGetCurrentIrql();
                    __writecr8(2uLL);
                    v518 = *((_QWORD *)&i29 + 1) & 0xFFFFFFFFFFFFF000uLL;
                    v2425 = (*((_QWORD *)&i29 + 1) + v515 - 1) | 0xFFF;
                    v519 = (*((_QWORD *)&i29 + 1) & 0xFFFFFFFFFFFFF000uLL) - 1;
                    while ( 1 )
                    {
                      while ( 1 )
                      {
                        LODWORD(i29) = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, unsigned __int64))(i38 + 1128))(
                                         v518,
                                         0LL,
                                         v516,
                                         v94);
                        if ( (_DWORD)i29 == -1073741267 )
                          break;
                        if ( (i29 & 0x80000000) != 0LL )
                        {
LABEL_791:
                          __writecr8(v517);
                          v212 = v2424;
                          m = 0LL;
                          goto LABEL_792;
                        }
LABEL_789:
                        v518 += 4096LL;
                        v519 += 4096LL;
                        if ( v519 == v2425 )
                        {
                          __writecr8(v517);
                          v212 = v2424;
                          m = 0LL;
                          goto LABEL_805;
                        }
                      }
                      if ( v514 )
                        goto LABEL_791;
                      if ( v517 > 1u )
                        goto LABEL_789;
                      __writecr8(v517);
                      __writecr8(2uLL);
                    }
                  }
                }
LABEL_792:
                if ( !*(_DWORD *)(i38 + 2328) )
                  *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = *((unsigned int *)v212 + 5) ^ (unsigned __int64)v513;
                v520 = *((_QWORD *)v212 + 1);
                if ( !*(_DWORD *)(i38 + 2328) )
                {
                  *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(i38 + 2344) = v212 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(i38 + 2352) = *(int *)v212;
                  *(_QWORD *)(i38 + 2360) = v520;
                  *(_DWORD *)(i38 + 2328) = 1;
                  v521 = *(_DWORD *)(i38 + 2520);
                  if ( (v521 & 0x20000000) == 0 && (*(_DWORD *)(i38 + 2524) & 0x200000) != 0 && (v521 & 1) != 0 )
                  {
                    v522 = *(unsigned int *)(i38 + 2676);
                    v523 = *(_QWORD *)(i38 + 2104);
                    v524 = *(_QWORD *)(i38 + 2680);
                    *((_QWORD *)&i29 + 1) = v522 + i38;
                    v94 = v522 + i38 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v522) >> 3);
                    while ( *((_QWORD *)&i29 + 1) != v94 )
                    {
                      **((_QWORD **)&i29 + 1) ^= v524;
                      v524 = ((v523 ^ **((_QWORD **)&i29 + 1)) + __ROR8__(v524, v524 & 0x3F)) ^ 0xEFA;
                      *((_QWORD *)&i29 + 1) += 8LL;
                    }
                    *(_DWORD *)(i38 + 2524) &= ~0x200000u;
                    if ( v524 != *(_QWORD *)(i38 + 2688) )
                    {
                      v525 = *(_DWORD *)(i38 + 2052);
                      v526 = *(_QWORD *)(i38 + 1416);
                      *(_QWORD *)v526 = i38;
                      *(_DWORD *)(v526 + 16) = v525;
                      if ( !*(_DWORD *)(i38 + 2328) )
                        *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v524 ^ *(_QWORD *)(i38 + 2688);
                      ProbeAndFlag1(i38, 0LL, v524, 256LL);
                    }
                  }
                }
              }
LABEL_805:
              v527 = (__int64 **)*((_QWORD *)v212 + 1);
              v528 = *((_DWORD *)v212 + 4) >> 4;
              v2662 = v527;
              if ( !v528 )
                goto LABEL_405;
              v529 = v2424;
              v530 = v528;
              v2425 = v528;
              do
              {
                v531 = v529;
                v532 = **v527;
                v2492 = 0LL;
                v533 = (*(__int64 (__fastcall **)(__int64, __int64 *))(i38 + 784))(v532, &v2492);
                if ( v533 )
                {
                  do
                  {
                    if ( !(*(__int64 (__fastcall **)(__int64, char *))(i38 + 536))(v533, v2639) )
                    {
                      if ( (*(_DWORD *)(i38 + 2520) & 0x20000000) != 0 )
                      {
                        v534 = *(_QWORD **)(i38 + 2760);
                        v535 = 48;
                        v536 = 6LL;
                        do
                        {
                          v535 -= 8;
                          *v534 = *(_QWORD *)v531;
                          v531 += 8;
                          ++v534;
                          --v536;
                        }
                        while ( v536 );
                        if ( v535 )
                        {
                          do
                          {
                            v537 = *v531++;
                            *(_BYTE *)v534 = v537;
                            v534 = (_QWORD *)((char *)v534 + 1);
                            --v535;
                          }
                          while ( v535 );
                          i38 = v2426;
                        }
                        v531 = *(char **)(i38 + 2760);
                      }
                      *((_QWORD *)v531 + 3) = v533;
                      *((_QWORD *)v531 + 4) = v532;
                      v538 = *(_QWORD *)(i38 + 1416);
                      *(_QWORD *)v538 = v531;
                      *(_DWORD *)(v538 + 16) = 48;
                      v539 = *(_QWORD *)(i38 + 1416);
                      *(_QWORD *)(v539 + 8) = v533;
                      *(_DWORD *)(v539 + 20) = 4096;
                      if ( !*(_DWORD *)(i38 + 2328) )
                      {
                        *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(i38 + 2344) = v531 - 0x4C48B4211BBACBEBLL;
                        *(_QWORD *)(i38 + 2352) = *(int *)v531;
                        *(_QWORD *)(i38 + 2360) = 6LL;
                        *(_DWORD *)(i38 + 2328) = 1;
                        v540 = *(_DWORD *)(i38 + 2520);
                        if ( (v540 & 0x20000000) == 0 && (*(_DWORD *)(i38 + 2524) & 0x200000) != 0 && (v540 & 1) != 0 )
                        {
                          v541 = *(unsigned int *)(i38 + 2676);
                          v542 = *(_QWORD *)(i38 + 2104);
                          v543 = *(_QWORD *)(i38 + 2680);
                          v544 = (_QWORD *)(v541 + i38);
                          v545 = v541
                               + i38
                               + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v541) >> 3);
                          while ( v544 != (_QWORD *)v545 )
                          {
                            *v544 ^= v543;
                            v543 = ((v542 ^ *v544++) + __ROR8__(v543, v543 & 0x3F)) ^ 0xEFA;
                          }
                          *(_DWORD *)(i38 + 2524) &= ~0x200000u;
                          if ( v543 != *(_QWORD *)(i38 + 2688) )
                          {
                            v546 = *(_DWORD *)(i38 + 2052);
                            v547 = *(_QWORD *)(i38 + 1416);
                            *(_QWORD *)v547 = i38;
                            *(_DWORD *)(v547 + 16) = v546;
                            if ( !*(_DWORD *)(i38 + 2328) )
                              *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v543 ^ *(_QWORD *)(i38 + 2688);
                            ProbeAndFlag1(i38, 0LL, v543, 256LL);
                          }
                        }
                      }
                    }
                    v533 = (*(__int64 (__fastcall **)(__int64, __int64 *))(i38 + 784))(v532, &v2492);
                  }
                  while ( v533 );
                  v527 = v2662;
                  v530 = v2425;
                  v529 = v2424;
                }
                v527 += 2;
                --v530;
                v2662 = v527;
                v2425 = v530;
              }
              while ( v530 );
              goto LABEL_464;
            }
            if ( !*((_DWORD *)v212 + 4) )
            {
              v2508 = v212 + 48;
              v2507[0] = *((_WORD *)v212 + 20);
              v2507[1] = v2507[0];
              v2423 = &v2456;
              v548 = *(_QWORD *)(i38 + 1288);
              LOBYTE(v2422) = 0;
              if ( (*(int (__fastcall **)(_WORD *, _QWORD, _QWORD, _QWORD, __int64, _DWORD, _QWORD, __int64 *))(i38 + 504))(
                     v2507,
                     0LL,
                     0LL,
                     0LL,
                     v548,
                     v2422,
                     0LL,
                     &v2456) < 0 )
                goto LABEL_406;
              if ( (*(_DWORD *)(v2456 + 16) & 0x10) == 0 )
              {
                (*(void (__fastcall **)(__int64))(i38 + 496))(v2456);
                goto LABEL_406;
              }
              (*(void (__fastcall **)(_QWORD, char *))(i38 + 528))(*(_QWORD *)(i38 + 504), v2648);
              if ( v2649 )
              {
                v549 = *(__int64 (**)(void))(i38 + 520);
                v550 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v2649;
                v2448 = v2649;
                v551 = v549();
                if ( v551 )
                {
                  v552 = *(_DWORD *)(v551 + 80);
                  v2444 = v552;
                  goto LABEL_840;
                }
              }
              else
              {
                v550 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v2448;
              }
              v552 = v2444;
LABEL_840:
              (*(void (__fastcall **)(_QWORD, char *))(i38 + 528))(*((_QWORD *)v212 + 3), v2645);
              if ( v2646 )
              {
                v553 = *(__int64 (**)(void))(i38 + 520);
                v554 = v2646;
                v2445 = v2646;
                *(_QWORD *)&i29 = v553();
                if ( (_QWORD)i29 )
                {
                  v555 = *(_DWORD *)(i29 + 80);
                  v2450 = v555;
                  goto LABEL_845;
                }
              }
              else
              {
                v554 = v2445;
              }
              v555 = v2450;
LABEL_845:
              if ( !_bittest((const signed __int32 *)(i38 + 2520), 0x1Du) )
              {
                *((_QWORD *)v212 + 1) = v2456 + 112;
                *((_DWORD *)v212 + 4) = 224;
              }
              BYTE8(i29) = 0;
              while ( 1 )
              {
                v94 = *(_QWORD *)(v2456 + 8LL * BYTE8(i29) + 112);
                if ( !v552 || v94 < (unsigned __int64)v550 || v94 > (unsigned __int64)v550 + v552 - 1 )
                {
                  if ( !v555 )
                    break;
                  v556 = (unsigned __int64)v554 + v555 - 1;
                  if ( v94 < (unsigned __int64)v554 || v94 > v556 )
                    break;
                }
                v555 = v2450;
                if ( ++BYTE8(i29) >= 0x1Cu )
                {
                  if ( !_bittest((const signed __int32 *)(i38 + 2520), 0x1Du) )
                  {
                    v557 = (_QWORD *)*((_QWORD *)v212 + 1);
                    v558 = *((unsigned int *)v212 + 4);
                    v559 = v557;
                    *(_DWORD *)(i38 + 2120) += v558;
                    v560 = (const char *)v557;
                    v561 = *(_DWORD *)(i38 + 2100);
                    v562 = *(_QWORD *)(i38 + 2104);
                    if ( v557 < (_QWORD *)((char *)v557 + v558) )
                    {
                      *((_QWORD *)&i29 + 1) = 64LL;
                      do
                      {
                        _mm_prefetch(v560, 0);
                        v560 += 64;
                      }
                      while ( v560 < (const char *)v557 + v558 );
                    }
                    v563 = *(_QWORD *)(i38 + 2104);
                    v564 = (unsigned int)v558 >> 7;
                    if ( (unsigned int)v558 >> 7 )
                    {
                      do
                      {
                        v565 = 8LL;
                        do
                        {
                          v566 = v559[1] ^ __ROL8__(*v559 ^ v563, v561);
                          v559 += 2;
                          v563 = __ROL8__(v566, v561);
                          --v565;
                        }
                        while ( v565 );
                        i29 = (__ROL8__(v562 ^ ((char *)v559 - (char *)v557), 17) ^ v562 ^ (unsigned __int64)((char *)v559 - (char *)v557))
                            * (unsigned __int128)0x7010008004002001uLL;
                        v2531 = *((_QWORD *)&i29 + 1);
                        v561 = ((unsigned __int8)i29 ^ (unsigned __int8)(BYTE8(i29) ^ v561)) & 0x3F;
                        if ( !v561 )
                          LOBYTE(v561) = 1;
                        --v564;
                      }
                      while ( v564 );
                      i38 = v2426;
                      v550 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v2448;
                    }
                    v567 = v558 & 0x7F;
                    if ( v567 >= 8 )
                    {
                      v568 = (unsigned __int64)v567 >> 3;
                      do
                      {
                        v563 = __ROL8__(*v559++ ^ v563, v561);
                        v567 -= 8;
                        --v568;
                      }
                      while ( v568 );
                    }
                    if ( v567 )
                    {
                      do
                      {
                        v569 = *(unsigned __int8 *)v559;
                        v559 = (_QWORD *)((char *)v559 + 1);
                        v563 = __ROL8__(v569 ^ v563, v561);
                        --v567;
                      }
                      while ( v567 );
                      v550 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v2448;
                    }
                    v570 = v563 >> 31;
                    v94 = 0LL;
                    while ( v570 )
                    {
                      LODWORD(v563) = v570 ^ v563;
                      v570 >>= 31;
                    }
                    v571 = 0;
                    *((_DWORD *)v212 + 5) = v563 & 0x7FFFFFFF;
                    v572 = *(const char **)(v2456 + 80);
                    if ( !v572
                      || (v571 = *(_DWORD *)v572, BYTE8(i29) = 0, (v573 = (unsigned int)(*(_DWORD *)v572 - 8) >> 3) == 0) )
                    {
LABEL_886:
                      *(_DWORD *)(i38 + 2120) += v571;
                      v94 = (unsigned __int64)v572;
                      v575 = *(_DWORD *)(i38 + 2100);
                      v576 = v572;
                      v577 = *(_QWORD *)(i38 + 2104);
                      v578 = &v572[v571];
                      if ( v572 < v578 )
                      {
                        do
                        {
                          _mm_prefetch(v576, 0);
                          v576 += 64;
                        }
                        while ( v576 < v578 );
                      }
                      v579 = *(_QWORD *)(i38 + 2104);
                      v580 = v571 >> 7;
                      if ( v571 >> 7 )
                      {
                        do
                        {
                          v581 = 8LL;
                          do
                          {
                            v582 = *(_QWORD *)(v94 + 8) ^ __ROL8__(*(_QWORD *)v94 ^ v579, v575);
                            v94 += 16LL;
                            v579 = __ROL8__(v582, v575);
                            --v581;
                          }
                          while ( v581 );
                          v583 = __ROL8__(v577 ^ (v94 - (_QWORD)v572), 17) ^ v577 ^ (v94 - (_QWORD)v572);
                          v2532 = (v583 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                          *((_QWORD *)&i29 + 1) = 0xFFFFFFFFLL;
                          v575 = ((unsigned __int8)(v2532 ^ v583) ^ (unsigned __int8)v575) & 0x3F;
                          if ( !v575 )
                            LOBYTE(v575) = 1;
                          --v580;
                        }
                        while ( v580 );
                        i38 = v2426;
                      }
                      else
                      {
                        *((_QWORD *)&i29 + 1) = 0xFFFFFFFFLL;
                      }
                      v588 = v571 & 0x7F;
                      if ( v588 >= 8 )
                      {
                        v589 = (unsigned __int64)v588 >> 3;
                        do
                        {
                          v579 = __ROL8__(*(_QWORD *)v94 ^ v579, v575);
                          v94 += 8LL;
                          v588 -= 8;
                          --v589;
                        }
                        while ( v589 );
                      }
                      for ( m = 0LL; v588; --v588 )
                      {
                        v590 = *(unsigned __int8 *)v94++;
                        v579 = __ROL8__(v590 ^ v579, v575);
                      }
                      for ( i7 = v579; ; LODWORD(v579) = i7 ^ v579 )
                      {
                        i7 >>= 31;
                        if ( !i7 )
                          break;
                      }
                      *((_DWORD *)v212 + 11) = v579 & 0x7FFFFFFF;
                      goto LABEL_405;
                    }
                    while ( 1 )
                    {
                      v574 = *(_QWORD *)&v572[8 * BYTE8(i29) + 8];
                      if ( v574
                        && (!v2444 || v574 < (unsigned __int64)v550 || v574 > (unsigned __int64)v550 + v2444 - 1) )
                      {
                        if ( !v2450
                          || (v94 = (unsigned __int64)v2445 + v2450 - 1, v574 < (unsigned __int64)v2445)
                          || v574 > v94 )
                        {
                          *((_QWORD *)v212 + 4) = v574;
                          m = 0LL;
                          v584 = *(_QWORD *)(i38 + 1416);
                          *(_QWORD *)v584 = v212;
                          *(_DWORD *)(v584 + 16) = 48;
                          if ( *(_DWORD *)(i38 + 2328) )
                            goto LABEL_405;
                          *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
                          *(_QWORD *)(i38 + 2344) = v212 - 0x4C48B4211BBACBEBLL;
                          *(_QWORD *)(i38 + 2352) = *(int *)v212;
                          *(_QWORD *)(i38 + 2360) = v572;
                          *(_DWORD *)(i38 + 2328) = 1;
                          v585 = *(_DWORD *)(i38 + 2520);
                          if ( (v585 & 0x20000000) != 0 || (*(_DWORD *)(i38 + 2524) & 0x200000) == 0 || (v585 & 1) == 0 )
                            goto LABEL_405;
                          v586 = *(unsigned int *)(i38 + 2676);
                          v587 = *(_QWORD *)(i38 + 2104);
                          v475 = *(_QWORD *)(i38 + 2680);
                          *((_QWORD *)&i29 + 1) = v586 + i38;
                          v94 = v586 + i38 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v586) >> 3);
                          while ( *((_QWORD *)&i29 + 1) != v94 )
                          {
                            **((_QWORD **)&i29 + 1) ^= v475;
                            v475 = ((v587 ^ **((_QWORD **)&i29 + 1)) + __ROR8__(v475, v475 & 0x3F)) ^ 0xEFA;
                            *((_QWORD *)&i29 + 1) += 8LL;
                          }
                          goto LABEL_718;
                        }
                        v94 = 0LL;
                      }
                      ++BYTE8(i29);
                      if ( BYTE8(i29) >= v573 )
                        goto LABEL_886;
                    }
                  }
LABEL_547:
                  v362 = *(void (**)(void))(i38 + 496);
LABEL_548:
                  v362();
                  goto LABEL_405;
                }
              }
              if ( _bittest((const signed __int32 *)(i38 + 2520), 0x1Du) )
              {
                v592 = *(_QWORD **)(i38 + 2760);
                DWORD2(i29) = 48;
                v593 = 6LL;
                do
                {
                  *((_QWORD *)&i29 + 1) = (unsigned int)(DWORD2(i29) - 8);
                  *v592 = *(_QWORD *)v212;
                  v212 += 8;
                  ++v592;
                  --v593;
                }
                while ( v593 );
                if ( DWORD2(i29) )
                {
                  do
                  {
                    LOBYTE(i29) = *v212++;
                    *(_BYTE *)v592 = i29;
                    v592 = (_QWORD *)((char *)v592 + 1);
                    *((_QWORD *)&i29 + 1) = (unsigned int)(DWORD2(i29) - 1);
                  }
                  while ( DWORD2(i29) );
                  i38 = v2426;
                }
                v212 = *(char **)(i38 + 2760);
              }
              *((_QWORD *)v212 + 4) = v94;
              v594 = *(_QWORD *)(i38 + 1416);
              *(_QWORD *)v594 = v212;
              *(_DWORD *)(v594 + 16) = 48;
              v595 = *((_QWORD *)v212 + 1);
              if ( *(_DWORD *)(i38 + 2328) )
                goto LABEL_405;
              *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(i38 + 2344) = v212 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(i38 + 2352) = *(int *)v212;
              *(_QWORD *)(i38 + 2360) = v595;
              *(_DWORD *)(i38 + 2328) = 1;
              v596 = *(_DWORD *)(i38 + 2520);
              if ( (v596 & 0x20000000) != 0 || (*(_DWORD *)(i38 + 2524) & 0x200000) == 0 || (v596 & 1) == 0 )
                goto LABEL_405;
              v597 = *(unsigned int *)(i38 + 2676);
              v598 = *(_QWORD *)(i38 + 2104);
              v475 = *(_QWORD *)(i38 + 2680);
              *((_QWORD *)&i29 + 1) = v597 + i38;
              v94 = v597 + i38 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v597) >> 3);
              while ( *((_QWORD *)&i29 + 1) != v94 )
              {
                **((_QWORD **)&i29 + 1) ^= v475;
                v475 = ((v598 ^ **((_QWORD **)&i29 + 1)) + __ROR8__(v475, v475 & 0x3F)) ^ 0xEFA;
                *((_QWORD *)&i29 + 1) += 8LL;
              }
              goto LABEL_718;
            }
            v599 = (_QWORD *)*((_QWORD *)v212 + 1);
            v600 = *((unsigned int *)v212 + 4);
            v601 = v599;
            *(_DWORD *)(i38 + 2120) += v600;
            v602 = (const char *)v599;
            v603 = *(_DWORD *)(i38 + 2100);
            v604 = *(_QWORD *)(i38 + 2104);
            if ( v599 < (_QWORD *)((char *)v599 + v600) )
            {
              do
              {
                _mm_prefetch(v602, 0);
                v602 += 64;
              }
              while ( v602 < (const char *)v599 + v600 );
            }
            v605 = *(_QWORD *)(i38 + 2104);
            v606 = (unsigned int)v600 >> 7;
            if ( (unsigned int)v600 >> 7 )
            {
              do
              {
                v607 = 8LL;
                do
                {
                  v608 = v601[1] ^ __ROL8__(*v601 ^ v605, v603);
                  v601 += 2;
                  v605 = __ROL8__(v608, v603);
                  --v607;
                }
                while ( v607 );
                v609 = (__ROL8__(v604 ^ ((char *)v601 - (char *)v599), 17) ^ v604 ^ (unsigned __int64)((char *)v601 - (char *)v599))
                     * (unsigned __int128)0x7010008004002001uLL;
                v2533 = *((_QWORD *)&v609 + 1);
                v603 = ((unsigned __int8)v609 ^ (unsigned __int8)(BYTE8(v609) ^ v603)) & 0x3F;
                if ( !v603 )
                  LOBYTE(v603) = 1;
                --v606;
              }
              while ( v606 );
              i38 = v2426;
            }
            v610 = v600 & 0x7F;
            if ( v610 >= 8 )
            {
              v611 = (unsigned __int64)v610 >> 3;
              do
              {
                v605 = __ROL8__(*v601++ ^ v605, v603);
                v610 -= 8;
                --v611;
              }
              while ( v611 );
            }
            for ( ; v610; --v610 )
            {
              v612 = *(unsigned __int8 *)v601;
              v601 = (_QWORD *)((char *)v601 + 1);
              v605 = __ROL8__(v612 ^ v605, v603);
            }
            for ( i8 = v605; ; LODWORD(v605) = i8 ^ v605 )
            {
              i8 >>= 31;
              if ( !i8 )
                break;
            }
            v614 = v605 & 0x7FFFFFFF;
            v615 = 0;
            if ( v614 != *((_DWORD *)v212 + 5) )
            {
              if ( !*(_DWORD *)v212 )
                v615 = *((_DWORD *)v212 + 6) != 0;
              v616 = *((unsigned int *)v212 + 4);
              v617 = *((_QWORD *)v212 + 1);
              if ( *((_DWORD *)v212 + 4) )
              {
                v618 = 64LL;
                if ( (*(_DWORD *)(i38 + 2524) & 0x40) != 0 )
                {
                  v619 = KeGetCurrentIrql();
                  __writecr8(2uLL);
                  v620 = v617 & 0xFFFFFFFFFFFFF000uLL;
                  v2425 = (v617 + v616 - 1) | 0xFFF;
                  v621 = (v617 & 0xFFFFFFFFFFFFF000uLL) - 1;
                  while ( 1 )
                  {
                    while ( 1 )
                    {
                      v622 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(i38 + 1128))(
                               v620,
                               0LL,
                               v618,
                               v601);
                      if ( v622 == -1073741267 )
                        break;
                      if ( v622 < 0 )
                      {
LABEL_969:
                        __writecr8(v619);
                        v212 = v2424;
                        goto LABEL_970;
                      }
LABEL_956:
                      v620 += 4096LL;
                      v621 += 4096LL;
                      if ( v621 == v2425 )
                      {
                        __writecr8(v619);
                        v212 = v2424;
                        goto LABEL_958;
                      }
                    }
                    if ( v615 )
                      goto LABEL_969;
                    if ( v619 > 1u )
                      goto LABEL_956;
                    __writecr8(v619);
                    __writecr8(2uLL);
                  }
                }
              }
LABEL_970:
              if ( !*(_DWORD *)(i38 + 2328) )
                *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = *((unsigned int *)v212 + 5) ^ (unsigned __int64)v614;
              v635 = *((_QWORD *)v212 + 1);
              if ( !*(_DWORD *)(i38 + 2328) )
              {
                *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(i38 + 2344) = v212 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(i38 + 2352) = *(int *)v212;
                *(_QWORD *)(i38 + 2360) = v635;
                *(_DWORD *)(i38 + 2328) = 1;
                v636 = *(_DWORD *)(i38 + 2520);
                if ( (v636 & 0x20000000) == 0 && (*(_DWORD *)(i38 + 2524) & 0x200000) != 0 && (v636 & 1) != 0 )
                {
                  v637 = *(unsigned int *)(i38 + 2676);
                  v638 = *(_QWORD *)(i38 + 2104);
                  v639 = *(_QWORD *)(i38 + 2680);
                  v640 = (_QWORD *)(v637 + i38);
                  v641 = v637 + i38 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v637) >> 3);
                  while ( v640 != (_QWORD *)v641 )
                  {
                    *v640 ^= v639;
                    v639 = ((v638 ^ *v640++) + __ROR8__(v639, v639 & 0x3F)) ^ 0xEFA;
                  }
                  *(_DWORD *)(i38 + 2524) &= ~0x200000u;
                  if ( v639 != *(_QWORD *)(i38 + 2688) )
                  {
                    v642 = *(_DWORD *)(i38 + 2052);
                    v643 = *(_QWORD *)(i38 + 1416);
                    *(_QWORD *)v643 = i38;
                    *(_DWORD *)(v643 + 16) = v642;
                    if ( !*(_DWORD *)(i38 + 2328) )
                      *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v639 ^ *(_QWORD *)(i38 + 2688);
                    ProbeAndFlag1(i38, 0LL, v639, 256LL);
                  }
                }
              }
            }
LABEL_958:
            v623 = 0;
            v2456 = *((_QWORD *)v212 + 1) - 112LL;
            v624 = *(const char **)(v2456 + 80);
            if ( v624 )
              v623 = *(_DWORD *)v624;
            *(_DWORD *)(i38 + 2120) += v623;
            v625 = v624;
            v626 = *(_DWORD *)(i38 + 2100);
            v627 = v624;
            v628 = *(_QWORD *)(i38 + 2104);
            v629 = &v624[v623];
            if ( v624 < v629 )
            {
              do
              {
                _mm_prefetch(v627, 0);
                v627 += 64;
              }
              while ( v627 < v629 );
            }
            v630 = *(_QWORD *)(i38 + 2104);
            v631 = v623 >> 7;
            if ( v623 >> 7 )
            {
              do
              {
                v632 = 8LL;
                do
                {
                  v633 = *((_QWORD *)v625 + 1) ^ __ROL8__(*(_QWORD *)v625 ^ v630, v626);
                  v625 += 16;
                  v630 = __ROL8__(v633, v626);
                  --v632;
                }
                while ( v632 );
                i29 = (__ROL8__(v628 ^ (v625 - v624), 17) ^ v628 ^ (unsigned __int64)(v625 - v624))
                    * (unsigned __int128)0x7010008004002001uLL;
                v2534 = *((_QWORD *)&i29 + 1);
                v634 = i29 ^ BYTE8(i29) ^ v626;
                *((_QWORD *)&i29 + 1) = 0xFFFFFFFFLL;
                v626 = v634 & 0x3F;
                if ( !v626 )
                  LOBYTE(v626) = 1;
                --v631;
              }
              while ( v631 );
              i38 = v2426;
            }
            else
            {
              *((_QWORD *)&i29 + 1) = 0xFFFFFFFFLL;
            }
            v94 = v623 & 0x7F;
            if ( (unsigned int)v94 >= 8 )
            {
              v644 = (unsigned __int64)(unsigned int)v94 >> 3;
              do
              {
                v630 = __ROL8__(*(_QWORD *)v625 ^ v630, v626);
                v625 += 8;
                v94 = (unsigned int)(v94 - 8);
                --v644;
              }
              while ( v644 );
            }
            for ( m = 0LL; (_DWORD)v94; v94 = (unsigned int)(v94 - 1) )
            {
              v645 = *(unsigned __int8 *)v625++;
              v630 = __ROL8__(v645 ^ v630, v626);
            }
            for ( i9 = v630; ; LODWORD(v630) = i9 ^ v630 )
            {
              i9 >>= 31;
              if ( !i9 )
                break;
            }
            v647 = *((unsigned int *)v212 + 11);
            v648 = v630 & 0x7FFFFFFF;
            if ( v648 == (_DWORD)v647 )
              goto LABEL_405;
            if ( *(_DWORD *)(i38 + 2328) )
              goto LABEL_405;
            *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v647 ^ v648;
            if ( *(_DWORD *)(i38 + 2328) )
              goto LABEL_405;
            *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(i38 + 2344) = v212 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(i38 + 2352) = *(int *)v212;
            *(_QWORD *)(i38 + 2360) = v624;
            *(_DWORD *)(i38 + 2328) = 1;
            v649 = *(_DWORD *)(i38 + 2520);
            if ( (v649 & 0x20000000) != 0 || (*(_DWORD *)(i38 + 2524) & 0x200000) == 0 || (v649 & 1) == 0 )
              goto LABEL_405;
            v650 = *(unsigned int *)(i38 + 2676);
            v651 = *(_QWORD *)(i38 + 2104);
            v475 = *(_QWORD *)(i38 + 2680);
            *((_QWORD *)&i29 + 1) = v650 + i38;
            v94 = v650 + i38 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v650) >> 3);
            while ( *((_QWORD *)&i29 + 1) != v94 )
            {
              **((_QWORD **)&i29 + 1) ^= v475;
              v475 = ((v651 ^ **((_QWORD **)&i29 + 1)) + __ROR8__(v475, v475 & 0x3F)) ^ 0xEFA;
              *((_QWORD *)&i29 + 1) += 8LL;
            }
            goto LABEL_718;
          }
          v703 = *(_QWORD ***)(i38 + 1320);
          v2665 = 0;
          v2432 = (*(__int64 (**)(void))(i38 + 888))();
          _disable();
          v704 = *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *(_QWORD *)(i38 + 1624));
          _enable();
          (*(void (__fastcall **)(__int64))(i38 + 376))(v704);
          LOBYTE(v705) = 1;
          (*(void (__fastcall **)(_QWORD, __int64))(i38 + 248))(*(_QWORD *)(i38 + 1328), v705);
          v706 = *(unsigned int ***)(i38 + 1568);
          LODWORD(v2428) = 0;
          v707 = (__int64)*v706;
          v708 = **v706;
          v2425 = (__int64)(*v706 + 4);
          v2427 = v2425 + 24 * v708;
          if ( *(_BYTE *)(v707 + 12) )
          {
            v709 = *v703;
            LODWORD(v708) = 0;
            while ( v709 != v703 )
            {
              v709 = (_QWORD *)*v709;
              LODWORD(v708) = v708 + 1;
            }
          }
          v710 = *(unsigned int *)(i38 + 2096);
          v711 = __rdtsc();
          v712 = __ROR8__(v711, 3);
          v2535 = ((v712 ^ v711) * (unsigned __int128)0x7010008004002001uLL) >> 64;
          v713 = ((unsigned __int16)v2535 ^ (unsigned __int16)(8193 * (v712 ^ v711))) & 0x7FF;
          v714 = __rdtsc();
          v715 = (__ROR8__(v714, 3) ^ v714) * (unsigned __int128)0x7010008004002001uLL;
          v2536 = *((_QWORD *)&v715 + 1);
          v716 = (*((_QWORD *)&v715 + 1) ^ (unsigned __int64)v715) % (unsigned int)(v713 + 1);
          v717 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(i38 + 256))(
                   66LL,
                   (unsigned int)(v713 + 8 * v708),
                   v710);
          v718 = v717;
          if ( !v717 )
          {
            ++*(_DWORD *)(i38 + 2656);
            m = 0LL;
LABEL_1097:
            v2472 = 0LL;
LABEL_1126:
            (*(void (__fastcall **)(_QWORD))(i38 + 296))(*(_QWORD *)(i38 + 1328));
            (*(void (**)(void))(i38 + 384))();
            (*(void (__fastcall **)(__int64))(i38 + 896))(v2432);
            if ( !v2472 )
              goto LABEL_405;
            *(_DWORD *)(i38 + 2120) += v2665 << 9;
            v362 = *(void (**)(void))(i38 + 264);
            goto LABEL_548;
          }
          v719 = v716;
          v720 = (_QWORD *)v717;
          if ( (unsigned int)v716 >= 8 )
          {
            v721 = (unsigned __int64)(unsigned int)v716 >> 3;
            do
            {
              v719 -= 8;
              v722 = __rdtsc();
              v723 = (__ROR8__(v722, 3) ^ v722) * (unsigned __int128)0x7010008004002001uLL;
              v2537 = *((_QWORD *)&v723 + 1);
              *v720++ = v723 ^ *((_QWORD *)&v723 + 1);
              --v721;
            }
            while ( v721 );
            i38 = v2426;
          }
          if ( v719 )
          {
            v724 = __rdtsc();
            v725 = (__ROR8__(v724, 3) ^ v724) * (unsigned __int128)0x7010008004002001uLL;
            v2538 = *((_QWORD *)&v725 + 1);
            v726 = v725 ^ *((_QWORD *)&v725 + 1);
            do
            {
              *(_BYTE *)v720 = v726;
              v720 = (_QWORD *)((char *)v720 + 1);
              v726 >>= 8;
              --v719;
            }
            while ( v719 );
          }
          v727 = v713 - v716;
          v728 = (_QWORD *)(v718 + (unsigned int)v716 + (unsigned int)(8 * v708));
          if ( v727 >= 8 )
          {
            v720 = (_QWORD *)((unsigned __int64)v727 >> 3);
            do
            {
              v727 -= 8;
              v729 = __rdtsc();
              v730 = (__ROR8__(v729, 3) ^ v729) * (unsigned __int128)0x7010008004002001uLL;
              v2539 = *((_QWORD *)&v730 + 1);
              *v728++ = v730 ^ *((_QWORD *)&v730 + 1);
              v720 = (_QWORD *)((char *)v720 - 1);
            }
            while ( v720 );
            i38 = v2426;
          }
          m = 0LL;
          if ( v727 )
          {
            v731 = __rdtsc();
            v732 = __ROR8__(v731, 3) ^ v731;
            v2540 = (v732 * (unsigned __int128)0x7010008004002001uLL) >> 64;
            v733 = (0x7010008004002001LL * v732) ^ v2540;
            do
            {
              *(_BYTE *)v728 = v733;
              v728 = (_QWORD *)((char *)v728 + 1);
              v733 >>= 8;
              --v727;
            }
            while ( v727 );
          }
          v2472 = v718;
          v734 = v718 + (unsigned int)v716;
          if ( !v734 )
            goto LABEL_1097;
          v735 = *v703;
          v736 = v2428;
          if ( *v703 != v703 )
          {
            v737 = v2428;
            do
            {
              v728 = (_QWORD *)((char *)v735 - *(_QWORD *)(i38 + 1880));
              if ( v736 < (unsigned int)v708 )
              {
                v738 = v736++;
                *(_QWORD *)(v734 + 8 * v738) = *(_QWORD *)((char *)v728 + *(_QWORD *)(i38 + 1888));
                v737 = v2665;
              }
              v735 = (_QWORD *)*v735;
              v2665 = ++v737;
            }
            while ( v735 != v703 );
          }
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD *, _QWORD *))(i38 + 920))(v734, v736, v728, v720);
          v739 = v2425;
          v740 = v736 - 1;
          v741 = v2427;
          v742 = (int *)v2424;
LABEL_1104:
          v743 = *(_QWORD *)(v739 + 8);
          v744 = 0;
          v745 = v740;
          if ( v740 < 0 )
            goto LABEL_1113;
          while ( 1 )
          {
            v746 = (v745 + v744) >> 1;
            if ( v743 >= *(_QWORD *)(v734 + 8LL * v746) )
            {
              if ( v743 <= *(_QWORD *)(v734 + 8LL * v746) )
              {
                if ( v745 < v744 )
                {
LABEL_1113:
                  if ( !*(_DWORD *)(i38 + 2328) )
                  {
                    *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(i38 + 2344) = (char *)v742 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(i38 + 2352) = *v742;
                    *(_QWORD *)(i38 + 2360) = v743;
                    *(_DWORD *)(i38 + 2328) = 1;
                    v747 = *(_DWORD *)(i38 + 2520);
                    if ( (v747 & 0x20000000) == 0 && (*(_DWORD *)(i38 + 2524) & 0x200000) != 0 && (v747 & 1) != 0 )
                    {
                      v748 = *(unsigned int *)(i38 + 2676);
                      v749 = *(_QWORD *)(i38 + 2104);
                      v750 = *(_QWORD *)(i38 + 2680);
                      v751 = (_QWORD *)(v748 + i38);
                      v752 = v748 + i38 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v748) >> 3);
                      while ( v751 != (_QWORD *)v752 )
                      {
                        *v751 ^= v750;
                        v750 = ((v749 ^ *v751++) + __ROR8__(v750, v750 & 0x3F)) ^ 0xEFA;
                      }
                      *(_DWORD *)(i38 + 2524) &= ~0x200000u;
                      if ( v750 != *(_QWORD *)(i38 + 2688) )
                      {
                        v753 = *(_DWORD *)(i38 + 2052);
                        v754 = *(_QWORD *)(i38 + 1416);
                        *(_QWORD *)v754 = i38;
                        *(_DWORD *)(v754 + 16) = v753;
                        if ( !*(_DWORD *)(i38 + 2328) )
                          *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v750 ^ *(_QWORD *)(i38 + 2688);
                        ProbeAndFlag1(i38, 0LL, v750, 256LL);
                      }
                    }
                  }
                }
                v739 += 24LL;
                if ( v739 >= v741 )
                {
                  m = 0LL;
                  goto LABEL_1126;
                }
                goto LABEL_1104;
              }
              v744 = v746 + 1;
            }
            else
            {
              if ( !v746 )
                goto LABEL_1113;
              v745 = v746 - 1;
            }
            if ( v745 < v744 )
              goto LABEL_1113;
          }
        }
        if ( (*(_DWORD *)(i38 + 2520) & 0x20000000) != 0 && (*(_DWORD *)(i38 + 2524) & 0x1000) == 0 )
        {
          v755 = __rdtsc();
          i29 = (__ROR8__(v755, 3) ^ v755) * (unsigned __int128)0x7010008004002001uLL;
          v2541 = *((_QWORD *)&i29 + 1);
          LODWORD(v755) = i29 ^ DWORD2(i29);
          *((_QWORD *)&i29 + 1) = ((unsigned __int64)i29 ^ *((_QWORD *)&i29 + 1)) / 5;
          *(_DWORD *)(i38 + 2116) = v755 - 5 * DWORD2(i29);
        }
LABEL_1131:
        v756 = *(_DWORD *)(i38 + 2116);
        if ( !v756 )
        {
          v2491 = 0LL;
          v1163 = v212;
          v762 = 0;
          for ( i10 = (*(__int64 (__fastcall **)(__int64 *))(i38 + 768))(&v2491);
                i10;
                i10 = (*(__int64 (__fastcall **)(__int64 *))(i38 + 768))(&v2491) )
          {
            ++v762;
            if ( !(*(__int64 (__fastcall **)(__int64, char *))(i38 + 536))(i10, v2553) )
            {
              if ( (*(_DWORD *)(i38 + 2520) & 0x20000000) != 0 )
              {
                v1165 = *(_QWORD **)(i38 + 2760);
                v1166 = 48;
                v1167 = 6LL;
                do
                {
                  v1166 -= 8;
                  *v1165 = *(_QWORD *)v1163;
                  v1163 += 8;
                  ++v1165;
                  --v1167;
                }
                while ( v1167 );
                if ( v1166 )
                {
                  do
                  {
                    v1168 = *v1163++;
                    *(_BYTE *)v1165 = v1168;
                    v1165 = (_QWORD *)((char *)v1165 + 1);
                    --v1166;
                  }
                  while ( v1166 );
                  i38 = v2426;
                }
                v1163 = *(char **)(i38 + 2760);
              }
              *((_QWORD *)v1163 + 3) = i10;
              v1169 = *(_QWORD *)(i38 + 1416);
              *(_QWORD *)v1169 = v1163;
              *(_DWORD *)(v1169 + 16) = 48;
              v1170 = *(_QWORD *)(i38 + 1416);
              *(_QWORD *)(v1170 + 8) = i10;
              *(_DWORD *)(v1170 + 20) = 4096;
              if ( !*(_DWORD *)(i38 + 2328) )
              {
                *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(i38 + 2344) = v1163 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(i38 + 2352) = *(int *)v1163;
                *(_QWORD *)(i38 + 2360) = 3LL;
                *(_DWORD *)(i38 + 2328) = 1;
                v1171 = *(_DWORD *)(i38 + 2520);
                if ( (v1171 & 0x20000000) == 0 && (*(_DWORD *)(i38 + 2524) & 0x200000) != 0 && (v1171 & 1) != 0 )
                {
                  v1172 = *(unsigned int *)(i38 + 2676);
                  v1173 = *(_QWORD *)(i38 + 2104);
                  v1174 = *(_QWORD *)(i38 + 2680);
                  v1175 = (_QWORD *)(v1172 + i38);
                  v1176 = v1172 + i38 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v1172) >> 3);
                  while ( v1175 != (_QWORD *)v1176 )
                  {
                    *v1175 ^= v1174;
                    v1174 = ((v1173 ^ *v1175++) + __ROR8__(v1174, v1174 & 0x3F)) ^ 0xEFA;
                  }
                  *(_DWORD *)(i38 + 2524) &= ~0x200000u;
                  if ( v1174 != *(_QWORD *)(i38 + 2688) )
                  {
                    v1177 = *(_DWORD *)(i38 + 2052);
                    v1178 = *(_QWORD *)(i38 + 1416);
                    *(_QWORD *)v1178 = i38;
                    *(_DWORD *)(v1178 + 16) = v1177;
                    if ( !*(_DWORD *)(i38 + 2328) )
                      *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v1174 ^ *(_QWORD *)(i38 + 2688);
                    ProbeAndFlag1(i38, 0LL, v1174, 256LL);
                  }
                }
              }
            }
          }
          goto LABEL_1782;
        }
        v757 = v756 - 1;
        if ( !v757 )
        {
          v1146 = v212;
          v2489 = 0LL;
          v762 = 0;
          v1147 = KeGetCurrentIrql();
          __writecr8(0xCuLL);
          for ( i11 = (*(__int64 (__fastcall **)(__int64 *))(i38 + 776))(&v2489);
                i11;
                i11 = (*(__int64 (__fastcall **)(__int64 *))(i38 + 776))(&v2489) )
          {
            ++v762;
            if ( !(*(__int64 (__fastcall **)(__int64, char *))(i38 + 536))(i11, v2552) )
            {
              if ( (*(_DWORD *)(i38 + 2520) & 0x20000000) != 0 )
              {
                v1149 = *(_QWORD **)(i38 + 2760);
                v1150 = 48;
                v1151 = 6LL;
                do
                {
                  v1150 -= 8;
                  *v1149 = *(_QWORD *)v1146;
                  v1146 += 8;
                  ++v1149;
                  --v1151;
                }
                while ( v1151 );
                if ( v1150 )
                {
                  do
                  {
                    v1152 = *v1146++;
                    *(_BYTE *)v1149 = v1152;
                    v1149 = (_QWORD *)((char *)v1149 + 1);
                    --v1150;
                  }
                  while ( v1150 );
                  i38 = v2426;
                }
                v1146 = *(char **)(i38 + 2760);
              }
              *((_QWORD *)v1146 + 3) = i11;
              v1153 = *(_QWORD *)(i38 + 1416);
              *(_QWORD *)v1153 = v1146;
              *(_DWORD *)(v1153 + 16) = 48;
              v1154 = *(_QWORD *)(i38 + 1416);
              *(_QWORD *)(v1154 + 8) = i11;
              *(_DWORD *)(v1154 + 20) = 4096;
              if ( !*(_DWORD *)(i38 + 2328) )
              {
                *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(i38 + 2344) = v1146 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(i38 + 2352) = *(int *)v1146;
                *(_QWORD *)(i38 + 2360) = 4LL;
                *(_DWORD *)(i38 + 2328) = 1;
                v1155 = *(_DWORD *)(i38 + 2520);
                if ( (v1155 & 0x20000000) == 0 && (*(_DWORD *)(i38 + 2524) & 0x200000) != 0 && (v1155 & 1) != 0 )
                {
                  v1156 = *(unsigned int *)(i38 + 2676);
                  v1157 = *(_QWORD *)(i38 + 2104);
                  v1158 = *(_QWORD *)(i38 + 2680);
                  v1159 = (_QWORD *)(v1156 + i38);
                  v1160 = v1156 + i38 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v1156) >> 3);
                  while ( v1159 != (_QWORD *)v1160 )
                  {
                    *v1159 ^= v1158;
                    v1158 = ((v1157 ^ *v1159++) + __ROR8__(v1158, v1158 & 0x3F)) ^ 0xEFA;
                  }
                  *(_DWORD *)(i38 + 2524) &= ~0x200000u;
                  if ( v1158 != *(_QWORD *)(i38 + 2688) )
                  {
                    v1161 = *(_QWORD *)(i38 + 1416);
                    v1162 = *(_DWORD *)(i38 + 2052);
                    *(_QWORD *)v1161 = i38;
                    *(_DWORD *)(v1161 + 16) = v1162;
                    if ( !*(_DWORD *)(i38 + 2328) )
                      *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = *(_QWORD *)(i38 + 2688) ^ v1158;
                    ProbeAndFlag1(i38, 0LL, v1158, 256LL);
                  }
                }
              }
            }
          }
          __writecr8(v1147);
          goto LABEL_1782;
        }
        v758 = v757 - 1;
        if ( !v758 )
        {
          v2431 = 0;
          v1130 = v212;
          v1131 = 0;
          v1132 = 0LL;
          while ( 1 )
          {
            v2459 = 0;
            if ( (*(unsigned int (__fastcall **)(_QWORD, int *, __int64 *))(i38 + 760))(v1131, &v2459, &v2476) )
              break;
LABEL_1719:
            LODWORD(m) = v2431;
            ++v1131;
            ++v1132;
            if ( v1131 >= 3 )
            {
              v762 = v2431;
              goto LABEL_1782;
            }
          }
          while ( 1 )
          {
            v1133 = (*(__int64 (__fastcall **)(__int64))(i38 + 728))(v2476);
            if ( v1133 )
            {
              v1134 = *(__int64 (__fastcall **)(__int64))(i38 + 736);
              v2431 = m + 1;
              v1135 = v1134(v1133);
              if ( !(*(__int64 (__fastcall **)(__int64, char *))(i38 + 536))(v1135, v2551) )
              {
                if ( (*(_DWORD *)(i38 + 2520) & 0x20000000) != 0 )
                {
                  v1136 = *(_QWORD **)(i38 + 2760);
                  DWORD2(i29) = 48;
                  v1137 = 6LL;
                  do
                  {
                    *((_QWORD *)&i29 + 1) = (unsigned int)(DWORD2(i29) - 8);
                    *v1136 = *(_QWORD *)v1130;
                    v1130 += 8;
                    ++v1136;
                    --v1137;
                  }
                  while ( v1137 );
                  if ( DWORD2(i29) )
                  {
                    do
                    {
                      LOBYTE(i29) = *v1130++;
                      *(_BYTE *)v1136 = i29;
                      v1136 = (_QWORD *)((char *)v1136 + 1);
                      *((_QWORD *)&i29 + 1) = (unsigned int)(DWORD2(i29) - 1);
                    }
                    while ( DWORD2(i29) );
                    i38 = v2426;
                  }
                  v1130 = *(char **)(i38 + 2760);
                }
                *((_QWORD *)v1130 + 3) = v1135;
                v1138 = *(_QWORD *)(i38 + 1416);
                *(_QWORD *)v1138 = v1130;
                *(_DWORD *)(v1138 + 16) = 48;
                v1139 = *(_QWORD *)(i38 + 1416);
                *(_QWORD *)(v1139 + 8) = v1135;
                *(_DWORD *)(v1139 + 20) = 4096;
                if ( !*(_DWORD *)(i38 + 2328) )
                {
                  *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(i38 + 2344) = v1130 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(i38 + 2352) = *(int *)v1130;
                  *(_QWORD *)(i38 + 2360) = v1132;
                  *(_DWORD *)(i38 + 2328) = 1;
                  v1140 = *(_DWORD *)(i38 + 2520);
                  if ( (v1140 & 0x20000000) == 0 && (*(_DWORD *)(i38 + 2524) & 0x200000) != 0 && (v1140 & 1) != 0 )
                  {
                    v1141 = *(unsigned int *)(i38 + 2676);
                    v1142 = *(_QWORD *)(i38 + 2104);
                    v1143 = *(_QWORD *)(i38 + 2680);
                    *((_QWORD *)&i29 + 1) = v1141 + i38;
                    v94 = v1141 + i38 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v1141) >> 3);
                    while ( *((_QWORD *)&i29 + 1) != v94 )
                    {
                      **((_QWORD **)&i29 + 1) ^= v1143;
                      v1143 = ((v1142 ^ **((_QWORD **)&i29 + 1)) + __ROR8__(v1143, v1143 & 0x3F)) ^ 0xEFA;
                      *((_QWORD *)&i29 + 1) += 8LL;
                    }
                    *(_DWORD *)(i38 + 2524) &= ~0x200000u;
                    if ( v1143 != *(_QWORD *)(i38 + 2688) )
                    {
                      v1144 = *(_DWORD *)(i38 + 2052);
                      v1145 = *(_QWORD *)(i38 + 1416);
                      *(_QWORD *)v1145 = i38;
                      *(_DWORD *)(v1145 + 16) = v1144;
                      if ( !*(_DWORD *)(i38 + 2328) )
                        *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v1143 ^ *(_QWORD *)(i38 + 2688);
                      ProbeAndFlag1(i38, 0LL, v1143, 256LL);
                    }
                  }
                }
                goto LABEL_1719;
              }
              (*(void (__fastcall **)(__int64, __int64))(i38 + 744))(v2476, v1133);
              LODWORD(m) = v2431;
            }
            if ( !(*(unsigned int (__fastcall **)(_QWORD, int *, __int64 *))(i38 + 760))(v1131, &v2459, &v2476) )
              goto LABEL_1719;
          }
        }
        v759 = v758 - 1;
        if ( v759 )
        {
          v760 = v759 - 1;
          if ( !v760 )
          {
            v778 = *(__int64 (__fastcall **)(_QWORD))(i38 + 792);
            v762 = 0;
            v2431 = 0;
            v779 = v778(0LL);
            if ( v779 )
            {
              v780 = v2424;
              do
              {
                v2487 = 0LL;
                v781 = v780;
                v782 = 1;
                v783 = (*(__int64 (__fastcall **)(__int64, __int64 *))(i38 + 784))(v779, &v2487);
                if ( v783 )
                {
                  do
                  {
                    ++v782;
                    if ( !(*(__int64 (__fastcall **)(__int64, char *))(i38 + 536))(v783, v2543) )
                    {
                      if ( (*(_DWORD *)(i38 + 2520) & 0x20000000) != 0 )
                      {
                        v784 = *(_QWORD **)(i38 + 2760);
                        v785 = 48;
                        v786 = 6LL;
                        do
                        {
                          v785 -= 8;
                          *v784 = *(_QWORD *)v781;
                          v781 += 8;
                          ++v784;
                          --v786;
                        }
                        while ( v786 );
                        if ( v785 )
                        {
                          do
                          {
                            v787 = *v781++;
                            *(_BYTE *)v784 = v787;
                            v784 = (_QWORD *)((char *)v784 + 1);
                            --v785;
                          }
                          while ( v785 );
                          i38 = v2426;
                        }
                        v781 = *(char **)(i38 + 2760);
                      }
                      *((_QWORD *)v781 + 3) = v783;
                      *((_QWORD *)v781 + 4) = v779;
                      v788 = *(_QWORD *)(i38 + 1416);
                      *(_QWORD *)v788 = v781;
                      *(_DWORD *)(v788 + 16) = 48;
                      v789 = *(_QWORD *)(i38 + 1416);
                      *(_QWORD *)(v789 + 8) = v783;
                      *(_DWORD *)(v789 + 20) = 4096;
                      if ( !*(_DWORD *)(i38 + 2328) )
                      {
                        *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(i38 + 2344) = v781 - 0x4C48B4211BBACBEBLL;
                        *(_QWORD *)(i38 + 2352) = *(int *)v781;
                        *(_QWORD *)(i38 + 2360) = 6LL;
                        *(_DWORD *)(i38 + 2328) = 1;
                        v790 = *(_DWORD *)(i38 + 2520);
                        if ( (v790 & 0x20000000) == 0 && (*(_DWORD *)(i38 + 2524) & 0x200000) != 0 && (v790 & 1) != 0 )
                        {
                          v791 = *(unsigned int *)(i38 + 2676);
                          v792 = *(_QWORD *)(i38 + 2104);
                          v793 = *(_QWORD *)(i38 + 2680);
                          v794 = (_QWORD *)(v791 + i38);
                          v795 = v791
                               + i38
                               + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v791) >> 3);
                          while ( v794 != (_QWORD *)v795 )
                          {
                            *v794 ^= v793;
                            v793 = ((v792 ^ *v794++) + __ROR8__(v793, v793 & 0x3F)) ^ 0xEFA;
                          }
                          *(_DWORD *)(i38 + 2524) &= ~0x200000u;
                          if ( v793 != *(_QWORD *)(i38 + 2688) )
                          {
                            v796 = *(_DWORD *)(i38 + 2052);
                            v797 = *(_QWORD *)(i38 + 1416);
                            *(_QWORD *)v797 = i38;
                            *(_DWORD *)(v797 + 16) = v796;
                            if ( !*(_DWORD *)(i38 + 2328) )
                              *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v793 ^ *(_QWORD *)(i38 + 2688);
                            ProbeAndFlag1(i38, 0LL, v793, 256LL);
                          }
                        }
                      }
                    }
                    v783 = (*(__int64 (__fastcall **)(__int64, __int64 *))(i38 + 784))(v779, &v2487);
                  }
                  while ( v783 );
                  v762 = v2431;
                  v780 = v2424;
                }
                v798 = *(__int64 (__fastcall **)(__int64))(i38 + 792);
                v762 += v782;
                v2431 = v762;
                v779 = v798(v779);
              }
              while ( v779 );
            }
            goto LABEL_1782;
          }
          if ( v760 == 1 )
          {
            v761 = v212;
            v2680 = -1;
            v762 = 0;
            for ( i12 = 0; i12 < 3; ++i12 )
            {
              v2486 = 0LL;
              while ( (*(unsigned int (__fastcall **)(_QWORD, __int64 *, char *, __int64 *))(i38 + 1072))(
                        i12,
                        &v2486,
                        &v2680,
                        &v2470) )
              {
                ++v762;
                if ( !(*(__int64 (__fastcall **)(__int64, char *))(i38 + 536))(v2470, v2542) )
                {
                  if ( (*(_DWORD *)(i38 + 2520) & 0x20000000) != 0 )
                  {
                    v764 = *(_QWORD **)(i38 + 2760);
                    v765 = 48;
                    v766 = 6LL;
                    do
                    {
                      v765 -= 8;
                      *v764 = *(_QWORD *)v761;
                      v761 += 8;
                      ++v764;
                      --v766;
                    }
                    while ( v766 );
                    if ( v765 )
                    {
                      do
                      {
                        v767 = *v761++;
                        *(_BYTE *)v764 = v767;
                        v764 = (_QWORD *)((char *)v764 + 1);
                        --v765;
                      }
                      while ( v765 );
                      i38 = v2426;
                    }
                    v761 = *(char **)(i38 + 2760);
                  }
                  *((_QWORD *)v761 + 3) = v2470;
                  v768 = *(_QWORD *)(i38 + 1416);
                  *(_QWORD *)v768 = v761;
                  *(_DWORD *)(v768 + 16) = 48;
                  v769 = *(_QWORD *)(i38 + 1416);
                  *(_QWORD *)(v769 + 8) = v2470;
                  *(_DWORD *)(v769 + 20) = 4096;
                  if ( !*(_DWORD *)(i38 + 2328) )
                  {
                    *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(i38 + 2344) = v761 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(i38 + 2352) = *(int *)v761;
                    *(_QWORD *)(i38 + 2360) = m;
                    *(_DWORD *)(i38 + 2328) = 1;
                    v770 = *(_DWORD *)(i38 + 2520);
                    if ( (v770 & 0x20000000) == 0 && (*(_DWORD *)(i38 + 2524) & 0x200000) != 0 && (v770 & 1) != 0 )
                    {
                      v771 = *(unsigned int *)(i38 + 2676);
                      v772 = *(_QWORD *)(i38 + 2104);
                      v773 = *(_QWORD *)(i38 + 2680);
                      v774 = (_QWORD *)(v771 + i38);
                      v775 = v771 + i38 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v771) >> 3);
                      while ( v774 != (_QWORD *)v775 )
                      {
                        *v774 ^= v773;
                        v773 = ((v772 ^ *v774++) + __ROR8__(v773, v773 & 0x3F)) ^ 0xEFA;
                      }
                      *(_DWORD *)(i38 + 2524) &= ~0x200000u;
                      if ( v773 != *(_QWORD *)(i38 + 2688) )
                      {
                        v776 = *(_DWORD *)(i38 + 2052);
                        v777 = *(_QWORD *)(i38 + 1416);
                        *(_QWORD *)v777 = i38;
                        *(_DWORD *)(v777 + 16) = v776;
                        if ( !*(_DWORD *)(i38 + 2328) )
                          *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v773 ^ *(_QWORD *)(i38 + 2688);
                        ProbeAndFlag1(i38, 0LL, v773, 256LL);
                      }
                    }
                  }
                }
              }
              ++m;
            }
            goto LABEL_1782;
          }
          *(_DWORD *)(i38 + 2116) = 0;
          goto LABEL_1785;
        }
        v300 = (*(_DWORD *)(i38 + 2520) & 0x20000000) == 0;
        v762 = 0;
        v799 = *(ULONG_PTR **)(i38 + 1256);
        v2453 = i38;
        v800 = *v799;
        v2443 = (char *)*v799;
        if ( !v300 )
          goto LABEL_1782;
        v801 = (int *)v2424;
        v802 = *((_QWORD *)v2424 + 5);
        if ( v802 )
        {
          *((_QWORD *)&i29 + 1) = 1LL;
          v762 = 1;
          if ( v800 != v802 )
          {
            *((_QWORD *)v2424 + 3) = v800;
            v803 = *(_QWORD *)(i38 + 1416);
            *(_QWORD *)v803 = v801;
            *(_DWORD *)(v803 + 16) = 48;
            v804 = *(_QWORD *)(i38 + 1416);
            *(_QWORD *)(v804 + 8) = v800;
            *(_DWORD *)(v804 + 20) = 4096;
            if ( !*(_DWORD *)(i38 + 2328) )
            {
              *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(i38 + 2344) = (char *)v801 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(i38 + 2352) = *v801;
              *(_QWORD *)(i38 + 2360) = 5LL;
              *(_DWORD *)(i38 + 2328) = 1;
              v805 = *(_DWORD *)(i38 + 2520);
              if ( (v805 & 0x20000000) == 0 && (*(_DWORD *)(i38 + 2524) & 0x200000) != 0 && (v805 & 1) != 0 )
              {
                v806 = *(unsigned int *)(i38 + 2676);
                v807 = *(_QWORD *)(i38 + 2104);
                v808 = *(_QWORD *)(i38 + 2680);
                *((_QWORD *)&i29 + 1) = v806 + i38;
                v94 = v806 + i38 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v806) >> 3);
                while ( *((_QWORD *)&i29 + 1) != v94 )
                {
                  **((_QWORD **)&i29 + 1) ^= v808;
                  v808 = ((v807 ^ **((_QWORD **)&i29 + 1)) + __ROR8__(v808, v808 & 0x3F)) ^ 0xEFA;
                  *((_QWORD *)&i29 + 1) += 8LL;
                }
                *(_DWORD *)(i38 + 2524) &= ~0x200000u;
                if ( v808 != *(_QWORD *)(i38 + 2688) )
                {
                  v809 = *(_DWORD *)(i38 + 2052);
                  v810 = *(_QWORD *)(i38 + 1416);
                  *(_QWORD *)v810 = i38;
                  *(_DWORD *)(v810 + 16) = v809;
                  if ( !*(_DWORD *)(i38 + 2328) )
                    *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v808 ^ *(_QWORD *)(i38 + 2688);
                  ProbeAndFlag1(i38, 0LL, v808, 256LL);
                }
              }
            }
          }
          goto LABEL_1782;
        }
        if ( !v800 )
          goto LABEL_1782;
        v811 = *(__int64 (__fastcall **)(ULONG_PTR, char *))(i38 + 528);
        v2431 = 1;
        v2452 = (_BYTE *)i38;
        v812 = v811(v800, v2634);
        v813 = BugCheckParameter2;
        v814 = v2636;
        v815 = v812;
        v2434 = v812;
        v2440 = v2636;
        v2441 = BugCheckParameter2;
        if ( !BugCheckParameter2 )
        {
          if ( (*(_DWORD *)(i38 + 2520) & 0x100000) == 0 )
          {
            v2471[1] = -402653175;
            KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, v800, 5uLL, 0LL);
          }
          v816 = -1073741701;
          goto LABEL_1709;
        }
        v817 = 4;
        v2463 = 0LL;
        v818 = &v2464;
        v819 = 0xFFFFFFFFLL;
        v820 = 1LL;
        do
        {
          *(_BYTE *)v818 = 0;
          v818 = (unsigned int *)((char *)v818 + 1);
          --v817;
        }
        while ( v817 );
        v821 = 0;
        if ( !*(_DWORD *)(i38 + 2092) )
        {
LABEL_1243:
          v2454 = 0LL;
          goto LABEL_1244;
        }
        v822 = v2464;
        LODWORD(v820) = HIDWORD(v2463);
        LODWORD(v94) = v2463;
        while ( 1 )
        {
          v823 = i38;
          v824 = 0;
          if ( *(_QWORD *)(i38 + 2752) )
            v823 = *(_QWORD *)(i38 + 2752);
          v819 = v823 + *(unsigned int *)(v823 + 2088);
          if ( (_DWORD)v94 && (unsigned int)v820 <= v821 )
          {
            v824 = v820;
            v819 = v823 + v822;
          }
          if ( v824 != v821 )
            break;
LABEL_1235:
          v820 = v824;
          v94 = 1LL;
          LODWORD(v2463) = 1;
          HIDWORD(v2463) = v824;
          v822 = v819 - v823;
          v2464 = v819 - v823;
          v828 = *(_DWORD *)v819;
          if ( (*(_DWORD *)v819 == 1 || v828 == 12 || v828 == 43)
            && *(_QWORD *)(v819 + 8) == v815
            && *(_DWORD *)(v819 + 16) == v814
            || (unsigned int)(v828 - 33) <= 1 && *(_QWORD *)(v819 + 32) == v813 )
          {
            v2454 = (_DWORD *)v819;
            if ( v819 )
            {
              v816 = -1073741554;
              goto LABEL_1708;
            }
LABEL_1244:
            v829 = *(char ***)(i38 + 1320);
            LODWORD(v2428) = v2440;
            _disable();
            v830 = *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *(_QWORD *)(i38 + 1624));
            _enable();
            (*(void (__fastcall **)(__int64, __int64, __int64))(i38 + 376))(v830, v820, v819);
            LOBYTE(v831) = 1;
            (*(void (__fastcall **)(_QWORD, __int64))(i38 + 248))(*(_QWORD *)(i38 + 1328), v831);
            v832 = *v829;
            if ( *v829 != (char *)v829 )
            {
              v833 = *(_QWORD *)(i38 + 1880);
              while ( 1 )
              {
                v834 = *(_QWORD *)&v832[*(_QWORD *)(i38 + 1888) - v833];
                if ( v813 >= v834 && v813 < v834 + *(unsigned int *)&v832[*(_QWORD *)(i38 + 1896) - v833] )
                  break;
                v832 = *(char **)v832;
                if ( v832 == (char *)v829 )
                  goto LABEL_1253;
              }
              (*(void (__fastcall **)(char *, __int64))(i38 + 232))(&v832[-v833], 1LL);
            }
LABEL_1253:
            (*(void (__fastcall **)(_QWORD))(i38 + 296))(*(_QWORD *)(i38 + 1328));
            (*(void (**)(void))(i38 + 384))();
            if ( _bittest((const signed __int32 *)(i38 + 2520), 0x1Du) )
            {
              v816 = sub_140BD1EDC(&v2453, v813, 9LL);
              goto LABEL_1708;
            }
            v836 = *(__int64 (__fastcall **)(ULONG_PTR, __int64, _QWORD, unsigned int *))(i38 + 512);
            v2513[4] = 0LL;
            LOBYTE(v835) = 1;
            v2483[4] = 0;
            v838 = v836(v813, v835, 0LL, &v2440);
            if ( v838 )
            {
              v839 = v2440;
            }
            else
            {
              v839 = 0;
              v2440 = 0;
            }
            v2513[1] = v838;
            v2483[1] = v839;
            LOBYTE(v837) = 1;
            v2436 = (_DWORD *)(*(__int64 (__fastcall **)(ULONG_PTR, __int64, __int64, unsigned int *))(i38 + 512))(
                                v813,
                                v837,
                                12LL,
                                &v2440);
            if ( v2436 )
            {
              v841 = v2440;
            }
            else
            {
              v841 = 0;
              v2440 = 0;
            }
            v2666 = v841;
            v2513[2] = v2436;
            v2483[2] = v841;
            LOBYTE(v840) = 1;
            v842 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, __int64, unsigned int *))(i38 + 512))(
                     v813,
                     v840,
                     10LL,
                     &v2440);
            if ( v842 )
            {
              v843 = v2440;
            }
            else
            {
              v843 = 0;
              v2440 = 0;
            }
            v2513[3] = v842;
            v2483[3] = v843;
            v844 = (*(__int64 (__fastcall **)(ULONG_PTR))(i38 + 520))(v813);
            if ( !v844 )
            {
              v845 = *(_DWORD *)(i38 + 2520);
              if ( (v845 & 0x100000) == 0 )
              {
                v2471[2] = -402653175;
                KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, v813, 7uLL, 0LL);
              }
              if ( *(_DWORD *)(i38 + 2328) )
                goto LABEL_1278;
              *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(i38 + 2344) = 0LL;
              *(_QWORD *)(i38 + 2352) = 271LL;
              *(_QWORD *)(i38 + 2360) = v813;
              *(_DWORD *)(i38 + 2328) = 1;
              if ( (v845 & 0x20000000) != 0 )
                goto LABEL_1278;
              if ( (*(_DWORD *)(i38 + 2524) & 0x200000) == 0 )
                goto LABEL_1278;
              if ( (v845 & 1) == 0 )
                goto LABEL_1278;
              v846 = *(unsigned int *)(i38 + 2676);
              v847 = *(_QWORD *)(i38 + 2104);
              v848 = *(_QWORD *)(i38 + 2680);
              v849 = (_QWORD *)(v846 + i38);
              v94 = v846 + i38 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v846) >> 3);
              while ( v849 != (_QWORD *)v94 )
              {
                *v849 ^= v848;
                v848 = ((v847 ^ *v849++) + __ROR8__(v848, v848 & 0x3F)) ^ 0xEFA;
              }
              *(_DWORD *)(i38 + 2524) &= ~0x200000u;
              if ( v848 == *(_QWORD *)(i38 + 2688) )
                goto LABEL_1278;
              v850 = *(_DWORD *)(i38 + 2052);
              v851 = *(_QWORD *)(i38 + 1416);
              *(_QWORD *)v851 = i38;
              *(_DWORD *)(v851 + 16) = v850;
              if ( !*(_DWORD *)(i38 + 2328) )
                *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v848 ^ *(_QWORD *)(i38 + 2688);
              v852 = i38;
              goto LABEL_1277;
            }
            v853 = (*(__int64 (__fastcall **)(ULONG_PTR, int *))(i38 + 1176))(v813, v2509);
            v854 = *(_DWORD *)(i38 + 2372);
            v2513[5] = v853;
            v2483[5] = v2509[0];
            LODWORD(v853) = *(_DWORD *)(v844 + 84);
            v2513[0] = v813;
            v855 = *(unsigned int *)(i38 + 2052);
            v2483[0] = v853;
            v856 = v855 + 288;
            if ( (unsigned int)(v855 + 288) <= *(_DWORD *)(i38 + 2660) )
            {
              v857 = i38;
              v2425 = i38;
              *(_DWORD *)(i38 + 2052) = v856;
            }
            else
            {
              v2425 = sub_140BC9AF8((_DWORD *)i38, v856, v854);
              v857 = v2425;
              if ( !v2425 )
              {
                v2452 = 0LL;
                goto LABEL_1322;
              }
              v858 = *(_DWORD *)(i38 + 2520);
              if ( (v858 & 2) == 0 )
              {
                v859 = *(_DWORD *)(i38 + 2052);
                v860 = *(_QWORD *)(i38 + 2024);
                v154 = (v858 & 0x10000000) != 0;
                v861 = (_QWORD *)i38;
                v862 = v154 ? *(_DWORD *)(i38 + 2372) : 0;
                if ( v859 >= 8 )
                {
                  v863 = (unsigned __int64)v859 >> 3;
                  do
                  {
                    *v861 = 0LL;
                    v859 -= 8;
                    ++v861;
                    --v863;
                  }
                  while ( v863 );
                }
                for ( ; v859; --v859 )
                {
                  *(_BYTE *)v861 = 0;
                  v861 = (_QWORD *)((char *)v861 + 1);
                }
                v864 = *(_DWORD *)(v857 + 2372);
                *(_DWORD *)(v857 + 2372) = v862;
                if ( v862 == 3 )
                {
                  (*(void (__fastcall **)(__int64))(v857 + 872))(v860);
                }
                else if ( (*(_DWORD *)(v857 + 2520) & 0x8000000) != 0 || !v862 )
                {
                  (*(void (__fastcall **)(__int64))(v857 + 264))(v860);
                }
                else
                {
                  (*(void (__fastcall **)(__int64, _QWORD))(v857 + 568))(v860 - 8, *(_QWORD *)(v860 - 8));
                }
                *(_DWORD *)(v857 + 2372) = v864;
              }
              *(_DWORD *)(v857 + 2520) &= ~2u;
            }
            v865 = v857 + v855;
            *(_DWORD *)(v857 + 2092) += 6;
            v866 = (const char **)v2513;
            v2488 = v857 + v855;
            v867 = v2483;
            v2454 = (_DWORD *)(v857 + v855);
            v2427 = (__int64)v2513;
            v2432 = 6LL;
            do
            {
              v868 = *v867;
              v869 = 6LL;
              v870 = *v866;
              v871 = 48;
              v2429 = *v867;
              v872 = (_QWORD *)v865;
              do
              {
                *v872 = 0LL;
                v871 -= 8;
                ++v872;
                --v869;
              }
              while ( v869 );
              for ( ; v871; --v871 )
              {
                *(_BYTE *)v872 = 0;
                v872 = (_QWORD *)((char *)v872 + 1);
              }
              *(_DWORD *)v865 = 0;
              *(_QWORD *)(v865 + 8) = v870;
              v94 = (unsigned __int64)v870;
              *(_DWORD *)(v865 + 16) = v868;
              v873 = v870;
              *(_DWORD *)(v857 + 2120) += v868;
              v874 = *(_DWORD *)(v857 + 2100);
              v875 = *(_QWORD *)(v857 + 2104);
              if ( v870 < &v870[v868] )
              {
                do
                {
                  _mm_prefetch(v873, 0);
                  v873 += 64;
                }
                while ( v873 < &v870[v868] );
              }
              v876 = *(_QWORD *)(v857 + 2104);
              v877 = (unsigned int)v868 >> 7;
              if ( (unsigned int)v868 >> 7 )
              {
                do
                {
                  v878 = 8LL;
                  do
                  {
                    v879 = *(_QWORD *)(v94 + 8) ^ __ROL8__(*(_QWORD *)v94 ^ v876, v874);
                    v94 += 16LL;
                    v876 = __ROL8__(v879, v874);
                    --v878;
                  }
                  while ( v878 );
                  v880 = (__ROL8__(v875 ^ (v94 - (_QWORD)v870), 17) ^ v875 ^ (v94 - (unsigned __int64)v870))
                       * (unsigned __int128)0x7010008004002001uLL;
                  v2544 = *((_QWORD *)&v880 + 1);
                  v874 = (BYTE8(v880) ^ (unsigned __int8)(v880 ^ v874)) & 0x3F;
                  if ( !v874 )
                    LOBYTE(v874) = 1;
                  --v877;
                }
                while ( v877 );
                v857 = v2425;
                LODWORD(v868) = v2429;
                v866 = (const char **)v2427;
              }
              v881 = v868 & 0x7F;
              if ( v881 >= 8 )
              {
                v882 = (unsigned __int64)(v868 & 0x7F) >> 3;
                do
                {
                  v876 = __ROL8__(*(_QWORD *)v94 ^ v876, v874);
                  v94 += 8LL;
                  v881 -= 8;
                  --v882;
                }
                while ( v882 );
              }
              if ( v881 )
              {
                do
                {
                  v883 = *(unsigned __int8 *)v94++;
                  v876 = __ROL8__(v883 ^ v876, v874);
                  --v881;
                }
                while ( v881 );
                v857 = v2425;
              }
              for ( i13 = v876; ; LODWORD(v876) = i13 ^ v876 )
              {
                i13 >>= 31;
                if ( !i13 )
                  break;
              }
              *(_DWORD *)(v865 + 20) = v876 & 0x7FFFFFFF;
              *(_DWORD *)(v857 + 2120) += v868;
              ++v866;
              ++v867;
              v865 = v2488 + 48;
              v2427 = (__int64)v866;
              v300 = v2432-- == 1;
              v2488 += 48LL;
            }
            while ( !v300 );
            i38 = v2426;
            v2452 = (_BYTE *)v857;
            if ( !v857 )
              goto LABEL_1322;
            v885 = v2454;
            v886 = v2441;
            *v2454 = 44;
            *((_QWORD *)v885 + 3) = v886;
            if ( (*(_DWORD *)(v857 + 2520) & 0x8100000) == 0 )
            {
              if ( _bittest((const signed __int32 *)(v857 + 2524), 0xFu) )
              {
                v885[8] |= 1u;
                if ( (unsigned int)SomethingPte1(v857, v886) )
                  v885[8] |= 4u;
              }
            }
            v2453 = v857;
            v816 = sub_140BC80B0((unsigned int)&v2452, v2434, v2428, v886, 9, (__int64)&v2460, (__int64)v2471);
            if ( v816 < 0 )
              goto LABEL_1708;
            v887 = v2452;
            v888 = v2471[0] - v2460;
            v2454 = &v2452[(_QWORD)v2454 - v857];
            v889 = (_QWORD *)(v886 + v2460);
            v2453 = (__int64)v2452;
            v890 = v2454 + 48;
            v891 = 48;
            v892 = v2454 + 48;
            v893 = 6LL;
            do
            {
              *v892 = 0LL;
              v891 -= 8;
              ++v892;
              --v893;
            }
            while ( v893 );
            for ( i14 = 1LL; v891; --v891 )
            {
              *(_BYTE *)v892 = 0;
              v892 = (_QWORD *)((char *)v892 + 1);
            }
            *v890 = 0;
            v895 = v889;
            *((_QWORD *)v890 + 1) = v889;
            v896 = (const char *)v889;
            v890[4] = v888;
            *((_DWORD *)v887 + 530) += v888;
            v897 = *((_DWORD *)v887 + 525);
            v898 = *((_QWORD *)v887 + 263);
            v899 = (unsigned __int64)v889 + v888;
            if ( (unsigned __int64)v889 < v899 )
            {
              do
              {
                _mm_prefetch(v896, 0);
                v896 += 64;
              }
              while ( (unsigned __int64)v896 < v899 );
            }
            v900 = *((_QWORD *)v887 + 263);
            v901 = v888 >> 7;
            if ( v888 >> 7 )
            {
              do
              {
                v902 = 8LL;
                do
                {
                  v903 = v895[1] ^ __ROL8__(*v895 ^ v900, v897);
                  v895 += 2;
                  v900 = __ROL8__(v903, v897);
                  --v902;
                }
                while ( v902 );
                v904 = (__ROL8__(v898 ^ ((char *)v895 - (char *)v889), 17) ^ v898 ^ (unsigned __int64)((char *)v895 - (char *)v889))
                     * (unsigned __int128)0x7010008004002001uLL;
                v2545 = *((_QWORD *)&v904 + 1);
                v905 = v904 ^ BYTE8(v904) ^ v897;
                i14 = 1LL;
                v897 = v905 & 0x3F;
                if ( !v897 )
                  LOBYTE(v897) = 1;
                --v901;
              }
              while ( v901 );
              i38 = v2426;
            }
            v94 = v888 & 0x7F;
            if ( (unsigned int)v94 >= 8 )
            {
              v906 = (unsigned __int64)(unsigned int)v94 >> 3;
              do
              {
                v900 = __ROL8__(*v895++ ^ v900, v897);
                v94 = (unsigned int)(v94 - 8);
                --v906;
              }
              while ( v906 );
            }
            if ( (_DWORD)v94 )
            {
              do
              {
                v907 = *(unsigned __int8 *)v895;
                v895 = (_QWORD *)((char *)v895 + 1);
                v900 = __ROL8__(v907 ^ v900, v897);
                v94 = (unsigned int)(v94 - 1);
              }
              while ( (_DWORD)v94 );
              i38 = v2426;
            }
            for ( i15 = v900; ; v900 = (unsigned int)i15 ^ (unsigned int)v900 )
            {
              i15 >>= 31;
              if ( !i15 )
                break;
            }
            LODWORD(v900) = v900 & 0x7FFFFFFF;
            v2453 = (__int64)v887;
            v890[5] = v900;
            v2454[60] = 48;
            v2465 = v2454 + 24;
            if ( v2454 == (_DWORD *)-96LL )
            {
              v909 = *((unsigned int *)v887 + 513);
              v910 = v909 + 48;
              if ( (unsigned int)(v909 + 48) <= *((_DWORD *)v887 + 665) )
              {
                v911 = (__int64)v887;
                v2427 = (__int64)v887;
                *((_DWORD *)v887 + 513) = v910;
              }
              else
              {
                v2427 = sub_140BC9AF8(v887, v910, *((_DWORD *)v887 + 593));
                v911 = v2427;
                if ( !v2427 )
                {
                  v2452 = 0LL;
                  goto LABEL_1322;
                }
                v912 = *((_DWORD *)v887 + 630);
                if ( (v912 & 2) == 0 )
                {
                  v913 = *((_DWORD *)v887 + 513);
                  v914 = *((_QWORD *)v887 + 253);
                  v915 = (v912 & 0x10000000) != 0 ? *((_DWORD *)v887 + 593) : 0;
                  if ( v913 >= 8 )
                  {
                    v916 = (unsigned __int64)v913 >> 3;
                    do
                    {
                      *(_QWORD *)v887 = 0LL;
                      v913 -= 8;
                      v887 += 8;
                      --v916;
                    }
                    while ( v916 );
                  }
                  for ( ; v913; --v913 )
                    *v887++ = 0;
                  v917 = *(_DWORD *)(v911 + 2372);
                  *(_DWORD *)(v911 + 2372) = v915;
                  if ( v915 == 3 )
                  {
                    (*(void (__fastcall **)(__int64))(v911 + 872))(v914);
                  }
                  else if ( (*(_DWORD *)(v911 + 2520) & 0x8000000) != 0 || !v915 )
                  {
                    (*(void (__fastcall **)(__int64))(v911 + 264))(v914);
                  }
                  else
                  {
                    (*(void (__fastcall **)(__int64, _QWORD))(v911 + 568))(v914 - 8, *(_QWORD *)(v914 - 8));
                  }
                  *(_DWORD *)(v911 + 2372) = v917;
                }
                *(_DWORD *)(v911 + 2520) &= ~2u;
              }
              ++*(_DWORD *)(v911 + 2092);
              v918 = 48;
              v919 = v911 + v909;
              v2506 = (_DWORD *)v919;
              v920 = (_QWORD *)v919;
              v921 = 6LL;
              do
              {
                *v920 = 0LL;
                v918 -= 8;
                ++v920;
                --v921;
              }
              while ( v921 );
              for ( ; v918; --v918 )
              {
                *(_BYTE *)v920 = 0;
                v920 = (_QWORD *)((char *)v920 + 1);
              }
              v922 = (__int64)v2436;
              v923 = v2666;
              v94 = (unsigned __int64)v2436;
              *(_DWORD *)v919 = 13;
              *(_QWORD *)(v919 + 8) = v94;
              *(_DWORD *)(v919 + 16) = v2666;
              *(_DWORD *)(v911 + 2120) += v2666;
              v924 = *(_DWORD *)(v911 + 2100);
              v925 = *(_QWORD *)(v911 + 2104);
              if ( v94 < v94 + v2666 )
              {
                v926 = (const char *)v922;
                do
                {
                  _mm_prefetch(v926, 0);
                  v926 += 64;
                }
                while ( (unsigned __int64)v926 < v94 + v2666 );
              }
              v900 = *(_QWORD *)(v911 + 2104);
              v927 = v2666 >> 7;
              if ( v2666 >> 7 )
              {
                do
                {
                  v928 = 8LL;
                  do
                  {
                    v929 = *(_QWORD *)(v94 + 8) ^ __ROL8__(*(_QWORD *)v94 ^ v900, v924);
                    v94 += 16LL;
                    v900 = __ROL8__(v929, v924);
                    --v928;
                  }
                  while ( v928 );
                  v930 = (__ROL8__(v925 ^ (v94 - v922), 17) ^ v925 ^ (v94 - v922))
                       * (unsigned __int128)0x7010008004002001uLL;
                  v2546 = *((_QWORD *)&v930 + 1);
                  v924 = ((unsigned __int8)v930 ^ (unsigned __int8)(BYTE8(v930) ^ v924)) & 0x3F;
                  if ( !v924 )
                    LOBYTE(v924) = 1;
                  --v927;
                }
                while ( v927 );
                i38 = v2426;
                v923 = v2666;
              }
              i14 = v923 & 0x7F;
              if ( (unsigned int)i14 >= 8 )
              {
                v931 = (unsigned __int64)(v923 & 0x7F) >> 3;
                do
                {
                  v900 = __ROL8__(*(_QWORD *)v94 ^ v900, v924);
                  v94 += 8LL;
                  i14 = (unsigned int)(i14 - 8);
                  --v931;
                }
                while ( v931 );
              }
              if ( (_DWORD)i14 )
              {
                do
                {
                  v932 = *(unsigned __int8 *)v94++;
                  v900 = __ROL8__(v932 ^ v900, v924);
                  i14 = (unsigned int)(i14 - 1);
                }
                while ( (_DWORD)i14 );
                i38 = v2426;
              }
              for ( i16 = v900; ; v900 = (unsigned int)i16 ^ (unsigned int)v900 )
              {
                i16 >>= 31;
                if ( !i16 )
                  break;
              }
              LODWORD(v900) = v900 & 0x7FFFFFFF;
              *(_DWORD *)(v919 + 20) = v900;
              v2465 = v2506;
              *(_DWORD *)(v911 + 2120) += v923;
            }
            else
            {
              v923 = v2666;
              v911 = (__int64)v887;
              v922 = (__int64)v2436;
              v2427 = (__int64)v887;
              v2454[24] = 13;
            }
            if ( (*(_DWORD *)(v911 + 2520) & 0x20000000) != 0 && v923 )
              sub_14051F4BC(v911, v922, v923, (__int64)(v2465 + 7));
            v2452 = (_BYTE *)v911;
            v2465[6] = 0;
            v2465[6] |= 1u;
            if ( !v911 )
              goto LABEL_1322;
            v934 = v2454;
            v2453 = v911;
            v2454[36] = 35;
            if ( v934[40] < 0x94u )
            {
              v941 = v2441;
            }
            else
            {
              v935 = v2441;
              v936 = *((_QWORD *)v934 + 19);
              v937 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, ULONG_PTR, unsigned __int64))(v911 + 520))(
                       v2441,
                       i14,
                       v900,
                       v94);
              if ( !v937 )
              {
                v2452 = 0LL;
                goto LABEL_1322;
              }
              v900 = v935 + *(unsigned int *)(v937 + 80);
              i14 = v934[46] | 2u;
              v934[46] = i14;
              v938 = i14;
              v939 = *(_QWORD **)(v936 + 112);
              if ( (unsigned __int64)v939 >= v935 && (unsigned __int64)v939 < v900 )
              {
                v938 = i14 | 4;
                *((_QWORD *)v934 + 21) = *v939;
                v934[46] = i14 | 4;
              }
              v940 = *(_QWORD **)(v936 + 120);
              v941 = v2441;
              if ( (unsigned __int64)v940 >= v2441 && (unsigned __int64)v940 < v900 )
              {
                *((_QWORD *)v934 + 22) = *v940;
                v934[46] = v938 | 8;
              }
            }
            v154 = _bittest((const signed __int32 *)(v911 + 2520), 0x15u);
            v2453 = v911;
            if ( !v154 )
              goto LABEL_1707;
            v942 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, ULONG_PTR))(v911 + 520))(v941, i14, v900);
            v2430 = v942;
            if ( !v942 )
              goto LABEL_1278;
            v943 = *(_WORD *)(v942 + 6);
            v2667 = v943;
            v94 = (unsigned int)v2428 / 0xCuLL;
            v2432 = v94;
            if ( !v943 )
            {
              v944 = *(_DWORD *)(v911 + 2520);
              if ( (v944 & 0x100000) == 0 )
              {
                v2471[3] = -402653175;
                KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, v941, 0LL, 0LL);
              }
              if ( *(_DWORD *)(v911 + 2328) )
                goto LABEL_1278;
              *(_QWORD *)(v911 + 2336) = v911 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v911 + 2344) = 0LL;
              *(_QWORD *)(v911 + 2352) = 271LL;
              *(_QWORD *)(v911 + 2360) = v941;
              *(_DWORD *)(v911 + 2328) = 1;
              if ( (v944 & 0x20000000) != 0 )
                goto LABEL_1278;
              if ( !_bittest((const signed __int32 *)(v911 + 2524), 0x15u) )
                goto LABEL_1278;
              if ( (v944 & 1) == 0 )
                goto LABEL_1278;
              v945 = *(unsigned int *)(v911 + 2676);
              v946 = *(_QWORD *)(v911 + 2104);
              v848 = *(_QWORD *)(v911 + 2680);
              v947 = (_QWORD *)(v945 + v911);
              v94 = v945 + v911 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v911 + 2052) - v945) >> 3);
              while ( v947 != (_QWORD *)v94 )
              {
                *v947 ^= v848;
                v848 = ((v946 ^ *v947++) + __ROR8__(v848, v848 & 0x3F)) ^ 0xEFA;
              }
              *(_DWORD *)(v911 + 2524) &= ~0x200000u;
              if ( v848 == *(_QWORD *)(v911 + 2688) )
                goto LABEL_1278;
              v948 = *(_QWORD *)(v911 + 1416);
              v949 = *(_DWORD *)(v911 + 2052);
              *(_QWORD *)v948 = v911;
              *(_DWORD *)(v948 + 16) = v949;
              if ( !*(_DWORD *)(v911 + 2328) )
                *(_QWORD *)(*(_QWORD *)(v911 + 1416) + 24LL) = v848 ^ *(_QWORD *)(v911 + 2688);
              v852 = v911;
              goto LABEL_1277;
            }
            v950 = (unsigned int *)v2434;
            v2425 = v942 + *(unsigned __int16 *)(v942 + 20) + 24LL;
            v951 = (_DWORD *)v2425;
            v952 = 0;
            v2442 = (unsigned int *)(v2434 + 12LL * (unsigned int)v94);
            v2429 = 0;
            v953 = (_BYTE *)v2427;
            v954 = (unsigned __int64)v2442;
            v955 = (_DWORD *)v2425;
            v2436 = (_DWORD *)v2425;
            while ( 1 )
            {
              v956 = v955[4];
              v94 = (unsigned int)v955[3];
              if ( v956 <= v955[2] )
                v956 = v955[2];
              v2435 = v955[3];
              v957 = v94 + v956;
              v2433 = v957;
              if ( v952 )
              {
                if ( v957 < v951[10 * v952 - 7] )
                {
                  v986 = *((_DWORD *)v953 + 630);
                  if ( (v986 & 0x100000) == 0 )
                  {
                    v2475 = -402653175;
                    KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, v941, 1uLL, 0LL);
                  }
                  if ( *((_DWORD *)v953 + 582) )
                    goto LABEL_1278;
                  *((_QWORD *)v953 + 292) = v953 - 0x5C5FC0A76E374B18LL;
                  *((_QWORD *)v953 + 293) = 0LL;
                  *((_QWORD *)v953 + 294) = 271LL;
                  *((_QWORD *)v953 + 295) = v941;
                  *((_DWORD *)v953 + 582) = 1;
                  if ( (v986 & 0x20000000) != 0 || (*((_DWORD *)v953 + 631) & 0x200000) == 0 || (v986 & 1) == 0 )
                    goto LABEL_1278;
                  v987 = *((unsigned int *)v953 + 669);
                  v988 = *((_QWORD *)v953 + 263);
                  v848 = *((_QWORD *)v953 + 335);
                  v989 = &v953[v987];
                  v94 = (unsigned __int64)&v953[8
                                              * ((unsigned __int64)(unsigned int)(*((_DWORD *)v953 + 513) - v987) >> 3)
                                              + v987];
                  while ( v989 != (_QWORD *)v94 )
                  {
                    *v989 ^= v848;
                    v848 = ((v988 ^ *v989++) + __ROR8__(v848, v848 & 0x3F)) ^ 0xEFA;
                  }
LABEL_1480:
                  *((_DWORD *)v953 + 631) &= ~0x200000u;
                  if ( v848 == *((_QWORD *)v953 + 336) )
                  {
LABEL_1278:
                    v816 = -1073741701;
                    goto LABEL_1708;
                  }
                  v990 = *((_DWORD *)v953 + 513);
                  v991 = *((_QWORD *)v953 + 177);
                  *(_QWORD *)v991 = v953;
                  *(_DWORD *)(v991 + 16) = v990;
                  if ( !*((_DWORD *)v953 + 582) )
                    *(_QWORD *)(*((_QWORD *)v953 + 177) + 24LL) = v848 ^ *((_QWORD *)v953 + 336);
                  v852 = (__int64)v953;
LABEL_1277:
                  ProbeAndFlag1(v852, 0LL, v848, 256LL);
                  goto LABEL_1278;
                }
                v952 = v2429;
              }
              if ( v950 != (unsigned int *)v954 )
              {
                do
                {
                  v958 = v950[1];
                  if ( *v950 >= v957 || v958 <= (unsigned int)v94 )
                    break;
                  if ( *v950 < (unsigned int)v94 || v958 > v957 )
                  {
                    v992 = *((_DWORD *)v953 + 630);
                    if ( (v992 & 0x100000) == 0 )
                    {
                      v2482 = -402653175;
                      KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, v941, 2uLL, 0LL);
                    }
                    if ( !*((_DWORD *)v953 + 582) )
                    {
                      *((_QWORD *)v953 + 292) = v953 - 0x5C5FC0A76E374B18LL;
                      *((_QWORD *)v953 + 293) = 0LL;
                      *((_QWORD *)v953 + 294) = 271LL;
                      *((_QWORD *)v953 + 295) = v941;
                      *((_DWORD *)v953 + 582) = 1;
                      if ( (v992 & 0x20000000) == 0 && (*((_DWORD *)v953 + 631) & 0x200000) != 0 && (v992 & 1) != 0 )
                      {
                        v993 = *((unsigned int *)v953 + 669);
                        v994 = *((_QWORD *)v953 + 263);
                        v848 = *((_QWORD *)v953 + 335);
                        v995 = &v953[v993];
                        v94 = (unsigned __int64)&v953[8
                                                    * ((unsigned __int64)(unsigned int)(*((_DWORD *)v953 + 513) - v993) >> 3)
                                                    + v993];
                        while ( v995 != (_QWORD *)v94 )
                        {
                          *v995 ^= v848;
                          v848 = ((v994 ^ *v995++) + __ROR8__(v848, v848 & 0x3F)) ^ 0xEFA;
                        }
                        goto LABEL_1480;
                      }
                    }
                    goto LABEL_1278;
                  }
                  v959 = v950[2];
                  v2547 = v950;
                  if ( (v959 & 1) != 0 || (*(_BYTE *)(v959 + v941) & 0x20) != 0 )
                  {
                    v960 = v955[4];
                    v961 = v955[3];
                    if ( v960 <= v955[2] )
                      v960 = v955[2];
                    v962 = v961 + v960;
                    v963 = (unsigned int *)(*((__int64 (__fastcall **)(unsigned int *, ULONG_PTR))v953 + 131))(
                                             v950,
                                             v2441);
                    v964 = v963;
                    if ( *v963 < v961 || v963[1] > v962 )
                    {
                      v965 = v2441;
                      v966 = ((_DWORD)v963 - v2441) | 0x80000000;
                      v967 = *((_DWORD *)v953 + 630);
                      if ( (v967 & 0x100000) == 0 )
                      {
                        v2481 = -402653175;
                        KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, v2441, v966, 0LL);
                      }
                      if ( !*((_DWORD *)v953 + 582) )
                      {
                        *((_QWORD *)v953 + 292) = v953 - 0x5C5FC0A76E374B18LL;
                        *((_QWORD *)v953 + 293) = 0LL;
                        *((_QWORD *)v953 + 294) = 271LL;
                        *((_QWORD *)v953 + 295) = v965;
                        *((_DWORD *)v953 + 582) = 1;
                        if ( (v967 & 0x20000000) == 0 && (*((_DWORD *)v953 + 631) & 0x200000) != 0 && (v967 & 1) != 0 )
                        {
                          v968 = *((unsigned int *)v953 + 669);
                          v969 = *((_QWORD *)v953 + 263);
                          v970 = *((_QWORD *)v953 + 335);
                          v971 = &v953[v968];
                          v972 = (unsigned __int64)&v953[8
                                                       * ((unsigned __int64)(unsigned int)(*((_DWORD *)v953 + 513) - v968) >> 3)
                                                       + v968];
                          while ( v971 != (_QWORD *)v972 )
                          {
                            *v971 ^= v970;
                            v970 = ((v969 ^ *v971++) + __ROR8__(v970, v970 & 0x3F)) ^ 0xEFA;
                          }
                          *((_DWORD *)v953 + 631) &= ~0x200000u;
                          if ( v970 != *((_QWORD *)v953 + 336) )
                          {
                            v973 = *((_DWORD *)v953 + 513);
                            v974 = *((_QWORD *)v953 + 177);
                            *(_QWORD *)v974 = v953;
                            *(_DWORD *)(v974 + 16) = v973;
                            if ( !*((_DWORD *)v953 + 582) )
                              *(_QWORD *)(*((_QWORD *)v953 + 177) + 24LL) = v970 ^ *((_QWORD *)v953 + 336);
                            ProbeAndFlag1((__int64)v953, 0LL, v970, 256LL);
                          }
                        }
                      }
                    }
                    v975 = (unsigned int *)(*((__int64 (__fastcall **)(unsigned int *, ULONG_PTR, ULONG_PTR))v953 + 132))(
                                             v964,
                                             v2441,
                                             v2441 + *v964);
                    if ( *v975 >= v961 && v975[1] <= v962 )
                    {
                      v941 = v2441;
                    }
                    else
                    {
                      v941 = v2441;
                      v976 = ((_DWORD)v975 - v2441) | 0x80000000;
                      v977 = *((_DWORD *)v953 + 630);
                      if ( (v977 & 0x100000) == 0 )
                      {
                        v2479 = -402653175;
                        KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, v2441, v976, 0LL);
                      }
                      if ( !*((_DWORD *)v953 + 582) )
                      {
                        *((_QWORD *)v953 + 292) = v953 - 0x5C5FC0A76E374B18LL;
                        *((_QWORD *)v953 + 293) = 0LL;
                        *((_QWORD *)v953 + 294) = 271LL;
                        *((_QWORD *)v953 + 295) = v941;
                        *((_DWORD *)v953 + 582) = 1;
                        if ( (v977 & 0x20000000) == 0 && (*((_DWORD *)v953 + 631) & 0x200000) != 0 && (v977 & 1) != 0 )
                        {
                          v978 = *((unsigned int *)v953 + 669);
                          v979 = *((_QWORD *)v953 + 263);
                          v980 = *((_QWORD *)v953 + 335);
                          v981 = &v953[v978];
                          v982 = (unsigned __int64)&v953[8
                                                       * ((unsigned __int64)(unsigned int)(*((_DWORD *)v953 + 513) - v978) >> 3)
                                                       + v978];
                          while ( v981 != (_QWORD *)v982 )
                          {
                            *v981 ^= v980;
                            v980 = ((v979 ^ *v981++) + __ROR8__(v980, v980 & 0x3F)) ^ 0xEFA;
                          }
                          *((_DWORD *)v953 + 631) &= ~0x200000u;
                          if ( v980 != *((_QWORD *)v953 + 336) )
                          {
                            v983 = *((_DWORD *)v953 + 513);
                            v984 = *((_QWORD *)v953 + 177);
                            *(_QWORD *)v984 = v953;
                            *(_DWORD *)(v984 + 16) = v983;
                            if ( !*((_DWORD *)v953 + 582) )
                              *(_QWORD *)(*((_QWORD *)v953 + 177) + 24LL) = v980 ^ *((_QWORD *)v953 + 336);
                            ProbeAndFlag1((__int64)v953, 0LL, v980, 256LL);
                          }
                        }
                      }
                    }
                    v957 = v2433;
                    v955 = v2436;
                    v94 = v2435;
                  }
                  v950 += 3;
                }
                while ( v950 != v2442 );
                v952 = v2429;
                v943 = v2667;
                v951 = (_DWORD *)v2425;
                v954 = (unsigned __int64)v2442;
              }
              v955 += 10;
              v2436 = v955;
              v2429 = ++v952;
              if ( v952 >= v943 )
              {
                v94 = v2432;
                v985 = v2430;
                if ( v950 != v2442 )
                {
                  v996 = *((_DWORD *)v953 + 630);
                  if ( (v996 & 0x100000) == 0 )
                  {
                    v2480 = -402653175;
                    KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, v941, 3uLL, 0LL);
                  }
                  if ( !*((_DWORD *)v953 + 582) )
                  {
                    *((_QWORD *)v953 + 292) = v953 - 0x5C5FC0A76E374B18LL;
                    *((_QWORD *)v953 + 293) = 0LL;
                    *((_QWORD *)v953 + 294) = 271LL;
                    *((_QWORD *)v953 + 295) = v941;
                    *((_DWORD *)v953 + 582) = 1;
                    if ( (v996 & 0x20000000) == 0 && (*((_DWORD *)v953 + 631) & 0x200000) != 0 && (v996 & 1) != 0 )
                    {
                      v997 = *((unsigned int *)v953 + 669);
                      v998 = *((_QWORD *)v953 + 263);
                      v848 = *((_QWORD *)v953 + 335);
                      v999 = &v953[v997];
                      v94 = (unsigned __int64)&v953[8
                                                  * ((unsigned __int64)(unsigned int)(*((_DWORD *)v953 + 513) - v997) >> 3)
                                                  + v997];
                      while ( v999 != (_QWORD *)v94 )
                      {
                        *v999 ^= v848;
                        v848 = ((v998 ^ *v999++) + __ROR8__(v848, v848 & 0x3F)) ^ 0xEFA;
                      }
                      goto LABEL_1480;
                    }
                  }
                  goto LABEL_1278;
                }
                if ( (_DWORD)v2432 )
                  v1000 = (v2432 + 6) & 0xFFFFFFF8;
                else
                  v1000 = 0;
                v1001 = *((unsigned int *)v953 + 513);
                v1002 = v1000 + 24 * v943 + v1001 + 48;
                if ( v1002 <= *((_DWORD *)v953 + 665) )
                {
                  v911 = (__int64)v953;
                  *((_DWORD *)v953 + 513) = v1002;
                  goto LABEL_1523;
                }
                v911 = sub_140BC9AF8(v953, v1002, *((_DWORD *)v953 + 593));
                if ( v911 )
                {
                  v1003 = *((_DWORD *)v953 + 630);
                  if ( (v1003 & 2) == 0 )
                  {
                    v1004 = *((_DWORD *)v953 + 513);
                    v1005 = *((_QWORD *)v953 + 253);
                    v1006 = (v1003 & 0x10000000) != 0 ? *((_DWORD *)v953 + 593) : 0;
                    if ( v1004 >= 8 )
                    {
                      v1007 = (unsigned __int64)v1004 >> 3;
                      do
                      {
                        *(_QWORD *)v953 = 0LL;
                        v1004 -= 8;
                        v953 += 8;
                        --v1007;
                      }
                      while ( v1007 );
                    }
                    for ( ; v1004; --v1004 )
                      *v953++ = 0;
                    v1008 = *(_DWORD *)(v911 + 2372);
                    *(_DWORD *)(v911 + 2372) = v1006;
                    if ( v1006 == 3 )
                    {
                      (*(void (__fastcall **)(__int64))(v911 + 872))(v1005);
                    }
                    else if ( (*(_DWORD *)(v911 + 2520) & 0x8000000) != 0 || !v1006 )
                    {
                      (*(void (__fastcall **)(__int64))(v911 + 264))(v1005);
                    }
                    else
                    {
                      (*(void (__fastcall **)(__int64, _QWORD))(v911 + 568))(v1005 - 8, *(_QWORD *)(v1005 - 8));
                    }
                    *(_DWORD *)(v911 + 2372) = v1008;
                  }
                  *(_DWORD *)(v911 + 2520) &= ~2u;
                  v94 = v2432;
                  v943 = v2667;
LABEL_1523:
                  v1009 = v1001 + v911;
                  ++*(_DWORD *)(v911 + 2092);
                  v2512 = v1001 + v911;
                  v1010 = 48;
                  v1011 = (_QWORD *)(v1001 + v911);
                  v1012 = 6LL;
                  do
                  {
                    *v1011 = 0LL;
                    v1010 -= 8;
                    ++v1011;
                    --v1012;
                  }
                  while ( v1012 );
                  for ( ; v1010; --v1010 )
                  {
                    *(_BYTE *)v1011 = 0;
                    v1011 = (_QWORD *)((char *)v1011 + 1);
                  }
                  v1013 = (unsigned int *)v2434;
                  *(_DWORD *)v1009 = 30;
                  *(_QWORD *)(v1009 + 8) = v1013;
                  *(_DWORD *)(v1009 + 16) = 0;
                  v1014 = *(_QWORD *)(v911 + 2104);
                  for ( i17 = v1014; ; LODWORD(v1014) = i17 ^ v1014 )
                  {
                    i17 >>= 31;
                    if ( !i17 )
                      break;
                  }
                  v1016 = v2441;
                  *(_DWORD *)(v1009 + 20) = v1014 & 0x7FFFFFFF;
                  v2466 = v2512;
                  v2452 = (_BYTE *)v911;
                  *(_QWORD *)(v2512 + 24) = v1016;
                  v1017 = *(_DWORD *)(v985 + 80);
                  i21 = 0;
                  *(_DWORD *)(v2466 + 32) = v1017;
                  *(_DWORD *)(v2466 + 36) = v2428;
                  *(_WORD *)(v2466 + 40) = v943;
                  v2432 = v2466 + 48;
                  if ( (_DWORD)v94 )
                    v1019 = (_DWORD *)(v2466 + 48 + (((unsigned int)(v94 - 1) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL));
                  else
                    v1019 = (_DWORD *)(v2466 + 48);
                  v1020 = *(unsigned __int16 *)(v2466 + 40);
                  v2436 = v1019;
                  v1021 = &v1019[6 * v1020];
                  v2430 = (__int64)v1021;
                  v1022 = (unsigned __int64)(v1013 + 3);
                  if ( !(_DWORD)v94 )
                    v1022 = (unsigned __int64)v2442;
                  v2427 = v1022;
                  if ( v943 )
                  {
                    v1023 = v943;
                    v1024 = v1019 + 2;
                    do
                    {
                      v1025 = 2LL;
                      do
                      {
                        *(v1024 - 2) = 0;
                        *(v1024 - 1) = 0;
                        *v1024 = 0x80000000;
                        v1024 += 3;
                        --v1025;
                      }
                      while ( v1025 );
                      --v1023;
                    }
                    while ( v1023 );
                    i38 = v2426;
                  }
                  if ( v1019 != v1021 )
                  {
                    while ( 2 )
                    {
                      v300 = (v951[9] & 0x2000000) == 0;
                      v2433 = 0;
                      if ( v300 )
                      {
                        v1026 = *v951;
                        v1027 = (__int16 *)(v951 + 1);
                        if ( *v951 != 1414090313 || *(_DWORD *)v1027 != 1195525195 )
                        {
                          if ( v1026 == 1162297680 )
                          {
                            v1028 = *v1027;
                            if ( *v1027 == 30839 || v1028 == 29303 || v1028 == 30583 )
                              break;
LABEL_1552:
                            v1029 = *(char **)(v911 + 2392);
                            v1030 = 7;
                            v1031 = *(char **)(v911 + 2400);
                            v1032 = (char *)v951;
                            v1033 = *(char **)(v911 + 2408);
                            v1034 = *(char **)(v911 + 2384);
                            while ( 1 )
                            {
                              v1035 = *v1032++;
                              v1036 = *v1034++;
                              if ( v1035 != v1036 )
                                break;
                              if ( !--v1030 )
                                goto LABEL_1570;
                            }
                            v1037 = 8;
                            v1038 = (char *)v951;
                            do
                            {
                              v1039 = *(_QWORD *)v1038;
                              v1038 += 8;
                              v1040 = *(_QWORD *)v1029;
                              v1029 += 8;
                              if ( v1039 != v1040 )
                                goto LABEL_1563;
                              v1037 -= 8;
                            }
                            while ( v1037 >= 8 );
                            if ( v1037 )
                            {
                              while ( 1 )
                              {
                                v1041 = *v1038++;
                                v1042 = *v1029++;
                                if ( v1041 != v1042 )
                                  break;
                                if ( !--v1037 )
                                  goto LABEL_1570;
                              }
LABEL_1563:
                              v1043 = 4;
                              v1044 = (char *)v951;
                              while ( 1 )
                              {
                                v1045 = *v1044++;
                                v1046 = *v1031++;
                                if ( v1045 != v1046 )
                                  break;
                                if ( !--v1043 )
                                  goto LABEL_1570;
                              }
                              v1047 = 6;
                              v1048 = (char *)v951;
                              while ( 1 )
                              {
                                v1049 = *v1048++;
                                v1050 = *v1033++;
                                if ( v1049 != v1050 )
                                  break;
                                if ( !--v1047 )
                                  goto LABEL_1570;
                              }
                            }
                            else
                            {
LABEL_1570:
                              i21 = 1;
                              v2433 = 1;
                            }
                            v1013 = (unsigned int *)v2434;
                            v1019 = v2436;
LABEL_1572:
                            v1051 = v951[9];
                            v1052 = 0;
                            if ( v1051 < 0 )
                            {
                              i21 = 1;
                              v2433 = 1;
                              goto LABEL_1575;
                            }
                            if ( i21 )
                            {
LABEL_1575:
                              if ( *v951 == 1414090313 && v951[1] == 1195525195 )
                              {
                                if ( (*(_DWORD *)(v911 + 2524) & 0x2000) != 0 )
                                  i21 = 0;
                                v2433 = i21;
                              }
                            }
                            v94 = v2441;
                            if ( (*(_DWORD *)(v911 + 2524) & 0x4000) != 0
                              && (v1051 & 0x20000000) != 0
                              && (v2441 == *(_QWORD *)(v911 + 1504) || v2441 == *(_QWORD *)(v911 + 1512)) )
                            {
                              i21 = 1;
                              v2433 = 1;
                            }
                            v1053 = (unsigned int)v951[3];
                            v1054 = v951[4];
                            v1055 = (unsigned __int64)v2442;
                            if ( v1054 <= v951[2] )
                              v1054 = v951[2];
                            LODWORD(v2428) = v951[3];
                            v1056 = v1053 + v1054;
                            v2668 = v1053;
                            v2429 = v1056;
                            if ( v1013 == v2442 )
                            {
                              v1057 = 0;
                              v1058 = 0;
                            }
                            else
                            {
                              v1057 = *v1013;
                              v1058 = v1013[1];
                              if ( *v1013 > (unsigned int)v1053 )
                              {
                                v2668 = v1053;
                                if ( v1013[1] > v1056 )
                                {
                                  v1075 = v1053;
                                  goto LABEL_1619;
                                }
                                v2668 = v1053;
                                if ( i21 )
                                {
                                  v1075 = v1053;
                                  goto LABEL_1623;
                                }
                                *v1019 = v1053;
                                v1059 = v94 + v1053;
                                v1019[1] = v1057;
                                v1060 = v2483;
                                v2668 = v1057;
                                v94 = v1057 - *v1019;
                                v1061 = v2513;
                                do
                                {
                                  if ( v1059 < *v1061 + (unsigned __int64)*v1060 && v1059 + v94 > *v1061 )
                                  {
                                    v1075 = v1057;
                                    v1052 = 0;
                                    v1055 = (unsigned __int64)v2442;
                                    v1013 = (unsigned int *)v2434;
                                    goto LABEL_1619;
                                  }
                                  ++v1052;
                                  ++v1061;
                                  ++v1060;
                                }
                                while ( v1052 < 6 );
                                *(_DWORD *)(v911 + 2120) += v94;
                                v1062 = (_QWORD *)v1059;
                                v1063 = *(_DWORD *)(v911 + 2100);
                                v1064 = (const char *)v1059;
                                v1065 = *(_QWORD *)(v911 + 2104);
                                v1066 = v1059 + (unsigned int)v94;
                                if ( v1059 < v1066 )
                                {
                                  do
                                  {
                                    _mm_prefetch(v1064, 0);
                                    v1064 += 64;
                                  }
                                  while ( (unsigned __int64)v1064 < v1066 );
                                }
                                v1067 = *(_QWORD *)(v911 + 2104);
                                v1068 = (unsigned int)v94 >> 7;
                                if ( (unsigned int)v94 >> 7 )
                                {
                                  do
                                  {
                                    v1069 = 8LL;
                                    do
                                    {
                                      v1070 = v1062[1] ^ __ROL8__(*v1062 ^ v1067, v1063);
                                      v1062 += 2;
                                      v1067 = __ROL8__(v1070, v1063);
                                      --v1069;
                                    }
                                    while ( v1069 );
                                    v1071 = __ROL8__(v1065 ^ ((unsigned __int64)v1062 - v1059), 17) ^ v1065 ^ ((unsigned __int64)v1062 - v1059);
                                    v2548 = (v1071 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                                    v1063 = ((unsigned __int8)(v2548 ^ v1071) ^ (unsigned __int8)v1063) & 0x3F;
                                    if ( !v1063 )
                                      LOBYTE(v1063) = 1;
                                    --v1068;
                                  }
                                  while ( v1068 );
                                  i38 = v2426;
                                }
                                v94 &= 0x7Fu;
                                if ( (unsigned int)v94 >= 8 )
                                {
                                  v1072 = (unsigned __int64)(unsigned int)v94 >> 3;
                                  do
                                  {
                                    v1067 = __ROL8__(*v1062++ ^ v1067, v1063);
                                    v94 = (unsigned int)(v94 - 8);
                                    --v1072;
                                  }
                                  while ( v1072 );
                                }
                                v1052 = 0;
                                if ( (_DWORD)v94 )
                                {
                                  do
                                  {
                                    v1073 = *(unsigned __int8 *)v1062;
                                    v1062 = (_QWORD *)((char *)v1062 + 1);
                                    v1067 = __ROL8__(v1073 ^ v1067, v1063);
                                    v94 = (unsigned int)(v94 - 1);
                                  }
                                  while ( (_DWORD)v94 );
                                  i38 = v2426;
                                }
                                for ( i18 = v1067; ; LODWORD(v1067) = i18 ^ v1067 )
                                {
                                  i18 >>= 31;
                                  if ( !i18 )
                                    break;
                                }
                                v1056 = v2429;
                                i21 = v2433;
                                v1013 = (unsigned int *)v2434;
                                v2436[2] = v1067 & 0x7FFFFFFF;
                                v1075 = v2668;
                                v1055 = (unsigned __int64)v2442;
LABEL_1619:
                                if ( v1058 <= v1056 && v1013 != (unsigned int *)v1055 )
                                {
LABEL_1623:
                                  v1076 = (unsigned int *)v2427;
                                  if ( v2427 != v1055 )
                                  {
                                    v1077 = *(_DWORD *)(v2427 + 4);
                                    if ( v1077 <= v1056 )
                                    {
                                      do
                                      {
                                        if ( v1076 == (unsigned int *)v1055 )
                                          break;
                                        if ( i21 )
                                        {
                                          v1078 = 0x80;
                                        }
                                        else
                                        {
                                          v1079 = *v1076;
                                          v1080 = v1013[1];
                                          v2668 = *v1076;
                                          if ( *v1076 < (unsigned int)v1080 )
                                          {
                                            v1081 = *(_DWORD *)(v911 + 2520);
                                            if ( (v1081 & 0x100000) == 0 )
                                            {
                                              v2474 = -402653175;
                                              KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, v2441, 6uLL, 0LL);
                                            }
                                            if ( !*(_DWORD *)(v911 + 2328) )
                                            {
                                              v1082 = v2441;
                                              *(_QWORD *)(v911 + 2336) = v911 - 0x5C5FC0A76E374B18LL;
                                              *(_QWORD *)(v911 + 2344) = 0LL;
                                              *(_QWORD *)(v911 + 2352) = 271LL;
                                              *(_QWORD *)(v911 + 2360) = v1082;
                                              *(_DWORD *)(v911 + 2328) = 1;
                                              if ( (v1081 & 0x20000000) == 0
                                                && (*(_DWORD *)(v911 + 2524) & 0x200000) != 0
                                                && (v1081 & 1) != 0 )
                                              {
                                                v1083 = *(unsigned int *)(v911 + 2676);
                                                v1084 = *(_QWORD *)(v911 + 2104);
                                                v1085 = *(_QWORD *)(v911 + 2680);
                                                v1086 = (_QWORD *)(v1083 + v911);
                                                v1087 = v1083
                                                      + v911
                                                      + 8
                                                      * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v911 + 2052)
                                                                                        - v1083) >> 3);
                                                while ( v1086 != (_QWORD *)v1087 )
                                                {
                                                  *v1086 ^= v1085;
                                                  v1085 = ((v1084 ^ *v1086++) + __ROR8__(v1085, v1085 & 0x3F)) ^ 0xEFA;
                                                }
                                                *(_DWORD *)(v911 + 2524) &= ~0x200000u;
                                                if ( v1085 != *(_QWORD *)(v911 + 2688) )
                                                {
                                                  v1088 = *(_QWORD *)(v911 + 1416);
                                                  v1089 = *(_DWORD *)(v911 + 2052);
                                                  *(_QWORD *)v1088 = v911;
                                                  *(_DWORD *)(v1088 + 16) = v1089;
                                                  if ( !*(_DWORD *)(v911 + 2328) )
                                                    *(_QWORD *)(*(_QWORD *)(v911 + 1416) + 24LL) = v1085 ^ *(_QWORD *)(v911 + 2688);
                                                  ProbeAndFlag1(v911, 0LL, v1085, 256LL);
                                                }
                                                v1052 = 0;
                                              }
                                            }
                                          }
                                          v1090 = v2483;
                                          v94 = v1079 - (unsigned int)v1080;
                                          v1091 = v2513;
                                          v1092 = v2441 + v1080;
                                          do
                                          {
                                            if ( v1092 < *v1091 + (unsigned __int64)*v1090
                                              && v2441 + v1080 + v1079 - (unsigned int)v1080 > *v1091 )
                                            {
                                              goto LABEL_1666;
                                            }
                                            ++v1052;
                                            ++v1090;
                                            ++v1091;
                                          }
                                          while ( v1052 < 6 );
                                          if ( (unsigned int)v94 < 4 )
                                          {
LABEL_1666:
                                            v1052 = 0;
                                            v1078 = 0x80;
                                          }
                                          else
                                          {
                                            *(_DWORD *)(v911 + 2120) += v94;
                                            v1093 = (_QWORD *)v1092;
                                            v1094 = *(_DWORD *)(v911 + 2100);
                                            v1095 = (const char *)v1092;
                                            v1096 = *(_QWORD *)(v911 + 2104);
                                            v1097 = v1092 + (unsigned int)v94;
                                            if ( v1092 < v1097 )
                                            {
                                              do
                                              {
                                                _mm_prefetch(v1095, 0);
                                                v1095 += 64;
                                              }
                                              while ( (unsigned __int64)v1095 < v1097 );
                                            }
                                            v1098 = *(_QWORD *)(v911 + 2104);
                                            v1099 = (unsigned int)v94 >> 7;
                                            if ( (unsigned int)v94 >> 7 )
                                            {
                                              do
                                              {
                                                v1100 = 8LL;
                                                do
                                                {
                                                  v1101 = v1093[1] ^ __ROL8__(*v1093 ^ v1098, v1094);
                                                  v1093 += 2;
                                                  v1098 = __ROL8__(v1101, v1094);
                                                  --v1100;
                                                }
                                                while ( v1100 );
                                                v1102 = (__ROL8__(v1096 ^ ((unsigned __int64)v1093 - v1092), 17) ^ v1096 ^ ((unsigned __int64)v1093 - v1092))
                                                      * (unsigned __int128)0x7010008004002001uLL;
                                                v2549 = *((_QWORD *)&v1102 + 1);
                                                v1094 = (BYTE8(v1102) ^ (unsigned __int8)(v1102 ^ v1094)) & 0x3F;
                                                if ( !v1094 )
                                                  LOBYTE(v1094) = 1;
                                                --v1099;
                                              }
                                              while ( v1099 );
                                              i38 = v2426;
                                            }
                                            v94 &= 0x7Fu;
                                            if ( (unsigned int)v94 >= 8 )
                                            {
                                              v1103 = (unsigned __int64)(unsigned int)v94 >> 3;
                                              do
                                              {
                                                v1098 = __ROL8__(*v1093++ ^ v1098, v1094);
                                                v94 = (unsigned int)(v94 - 8);
                                                --v1103;
                                              }
                                              while ( v1103 );
                                            }
                                            v1052 = 0;
                                            if ( (_DWORD)v94 )
                                            {
                                              do
                                              {
                                                v1104 = *(unsigned __int8 *)v1093;
                                                v1093 = (_QWORD *)((char *)v1093 + 1);
                                                v1098 = __ROL8__(v1104 ^ v1098, v1094);
                                                v94 = (unsigned int)(v94 - 1);
                                              }
                                              while ( (_DWORD)v94 );
                                              i38 = v2426;
                                            }
                                            for ( i19 = v1098; ; LOBYTE(v1098) = i19 ^ v1098 )
                                            {
                                              i19 >>= 7;
                                              if ( !i19 )
                                                break;
                                            }
                                            v1078 = v1098 & 0x7F;
                                          }
                                          v1013 = (unsigned int *)v2434;
                                          i21 = v2433;
                                          v1056 = v2429;
                                        }
                                        v1106 = (_BYTE *)v2432;
                                        v1013 += 3;
                                        ++v2432;
                                        v2434 = (__int64)v1013;
                                        *v1106 = v1078;
                                        v1055 = (unsigned __int64)v2442;
                                        v1076 = (unsigned int *)(v2427 + 12);
                                        v2427 = (__int64)v1076;
                                        if ( v1076 != v2442 )
                                          v1077 = v1076[1];
                                      }
                                      while ( v1077 <= v1056 );
                                      v1075 = v2668;
                                    }
                                  }
                                }
LABEL_1672:
                                if ( i21 || v1075 == v1056 )
                                {
                                  i21 = 0;
                                  goto LABEL_1698;
                                }
                                v1107 = v2436;
                                v1108 = v2483;
                                v1109 = v2513;
                                v2436[3] = v1075;
                                v1107[4] = v1056;
                                v1110 = v1107[3];
                                v94 = v1056 - v1110;
                                v1111 = v2441 + v1110;
                                i21 = 0;
                                for ( i20 = 0; i20 < 6; ++i20 )
                                {
                                  if ( v1111 < *v1109 + (unsigned __int64)*v1108 && v1111 + v1056 - v1110 > *v1109 )
                                  {
                                    v1013 = (unsigned int *)v2434;
LABEL_1698:
                                    v1126 = v2436;
                                    goto LABEL_1699;
                                  }
                                  ++v1109;
                                  ++v1108;
                                }
                                *(_DWORD *)(v911 + 2120) += v94;
                                v1113 = (_QWORD *)v1111;
                                v1114 = *(_DWORD *)(v911 + 2100);
                                v1115 = (const char *)v1111;
                                v1116 = *(_QWORD *)(v911 + 2104);
                                v1117 = v1111 + (unsigned int)v94;
                                if ( v1111 < v1117 )
                                {
                                  do
                                  {
                                    _mm_prefetch(v1115, 0);
                                    v1115 += 64;
                                  }
                                  while ( (unsigned __int64)v1115 < v1117 );
                                }
                                v1118 = *(_QWORD *)(v911 + 2104);
                                v1119 = (unsigned int)v94 >> 7;
                                if ( (unsigned int)v94 >> 7 )
                                {
                                  do
                                  {
                                    v1120 = 8LL;
                                    do
                                    {
                                      v1121 = v1113[1] ^ __ROL8__(*v1113 ^ v1118, v1114);
                                      v1113 += 2;
                                      v1118 = __ROL8__(v1121, v1114);
                                      --v1120;
                                    }
                                    while ( v1120 );
                                    v1122 = (__ROL8__(v1116 ^ ((unsigned __int64)v1113 - v1111), 17) ^ v1116 ^ ((unsigned __int64)v1113 - v1111))
                                          * (unsigned __int128)0x7010008004002001uLL;
                                    v2550 = *((_QWORD *)&v1122 + 1);
                                    v1114 = (BYTE8(v1122) ^ (unsigned __int8)(v1122 ^ v1114)) & 0x3F;
                                    if ( !v1114 )
                                      LOBYTE(v1114) = 1;
                                    --v1119;
                                  }
                                  while ( v1119 );
                                  i38 = v2426;
                                }
                                v94 &= 0x7Fu;
                                if ( (unsigned int)v94 >= 8 )
                                {
                                  v1123 = (unsigned __int64)(unsigned int)v94 >> 3;
                                  do
                                  {
                                    v1118 = __ROL8__(*v1113++ ^ v1118, v1114);
                                    v94 = (unsigned int)(v94 - 8);
                                    --v1123;
                                  }
                                  while ( v1123 );
                                }
                                for ( i21 = 0; (_DWORD)v94; v94 = (unsigned int)(v94 - 1) )
                                {
                                  v1124 = *(unsigned __int8 *)v1113;
                                  v1113 = (_QWORD *)((char *)v1113 + 1);
                                  v1118 = __ROL8__(v1124 ^ v1118, v1114);
                                }
                                for ( i22 = v1118; ; LODWORD(v1118) = i22 ^ v1118 )
                                {
                                  i22 >>= 31;
                                  if ( !i22 )
                                    break;
                                }
                                v1126 = v2436;
                                v1056 = v2429;
                                v1013 = (unsigned int *)v2434;
                                v2436[5] = v1118 & 0x7FFFFFFF;
LABEL_1699:
                                if ( v1013 != v2442 && *v1013 >= (unsigned int)v2428 && v1013[1] <= v1056 )
                                {
                                  v1127 = v2427;
                                  if ( (unsigned int *)v2427 != v2442 )
                                  {
                                    v1128 = v2432;
                                    *(_BYTE *)v2432 = 0x80;
                                    v2432 = v1128 + 1;
                                    v2427 = v1127 + 12;
                                  }
                                  v1013 += 3;
                                  v2434 = (__int64)v1013;
                                }
                                v1019 = v1126 + 6;
                                v951 = (_DWORD *)(v2425 + 40);
                                v2436 = v1019;
                                v2425 += 40LL;
                                if ( v1019 == (_DWORD *)v2430 )
                                {
                                  v911 = (__int64)v2452;
                                  goto LABEL_1707;
                                }
                                continue;
                              }
                            }
                            v1075 = v1053;
                            if ( v1057 >= (unsigned int)v1053 )
                              goto LABEL_1619;
                            goto LABEL_1672;
                          }
                          if ( v1026 != 1095914053 || *v1027 != 16724 )
                            goto LABEL_1552;
                        }
                      }
                      break;
                    }
                    i21 = 1;
                    v2433 = 1;
                    goto LABEL_1572;
                  }
LABEL_1707:
                  v2453 = v911;
                  v816 = 0;
LABEL_1708:
                  v800 = (ULONG_PTR)v2443;
LABEL_1709:
                  v1129 = &v2424[-i38];
                  i38 = v2453;
                  *((_QWORD *)&i29 + 1) = &v1129[v2453];
                  v2426 = v2453;
                  v2424 = (char *)*((_QWORD *)&i29 + 1);
                  if ( (int)(v816 + 0x80000000) < 0 || v816 == -1073741554 )
                    *(_QWORD *)(*((_QWORD *)&i29 + 1) + 40LL) = v800;
                  v762 = v2431;
LABEL_1782:
                  m = 0LL;
                  *(_DWORD *)(i38 + 2120) += v762 << 12;
                  v1179 = *(_DWORD *)(i38 + 2120);
                  ++*(_DWORD *)(i38 + 2116);
                  if ( v1179 < *(_DWORD *)(i38 + 2124) )
                  {
                    v212 = v2424;
                    goto LABEL_1131;
                  }
LABEL_1785:
                  v2426 = i38;
                  goto LABEL_405;
                }
LABEL_1322:
                v816 = -1073741670;
                goto LABEL_1708;
              }
            }
          }
          if ( ++v821 >= *(_DWORD *)(i38 + 2092) )
            goto LABEL_1243;
        }
        v825 = v821 - v824;
        v824 = v821;
        while ( 1 )
        {
          if ( *(_DWORD *)v819 == 1 )
          {
LABEL_1232:
            v826 = 4 * (*(_DWORD *)(v819 + 16) / 0xCu) + 48;
            goto LABEL_1233;
          }
          if ( *(_DWORD *)v819 == 7 )
          {
            v826 = (unsigned int)(24 * (*(_DWORD *)(v819 + 24) + 2));
            goto LABEL_1233;
          }
          if ( *(_DWORD *)v819 == 8 )
            break;
          switch ( *(_DWORD *)v819 )
          {
            case 0xA:
              v826 = (unsigned int)(16 * (*(_DWORD *)(v819 + 28) + 3));
              break;
            case 0x1C:
              v827 = *(unsigned __int16 *)(v819 + 40);
LABEL_1230:
              v826 = (v827 + 55) & 0xFFFFFFF8;
              break;
            case 0x1E:
              v826 = (((*(_DWORD *)(v819 + 36) != 0 ? *(_DWORD *)(v819 + 36) - 1 : 0) / 0xCu + 7) & 0xFFFFFFF8)
                   + 24 * (*(unsigned __int16 *)(v819 + 40) + 2);
              break;
            case 0x21:
              v826 = 20
                   * (unsigned int)(((*(_DWORD *)(v819 + 32) & 0xFFF)
                                   + (unsigned __int64)*(unsigned int *)(v819 + 40)
                                   + 4095) >> 12)
                   + 48;
              break;
            case 0x2B:
              goto LABEL_1232;
            default:
              v826 = 48LL;
              break;
          }
LABEL_1233:
          v819 += v826;
          if ( !--v825 )
          {
            i38 = v2426;
            v813 = v2441;
            v815 = v2434;
            goto LABEL_1235;
          }
        }
        v827 = *(unsigned __int16 *)(v819 + 32);
        goto LABEL_1230;
      }
      v1180 = *((_DWORD *)v212 + 10);
      (*(void (__fastcall **)(_BYTE *, _QWORD))(i38 + 432))(v2621, *((unsigned int *)v212 + 11));
      (*(void (__fastcall **)(_BYTE *, _BYTE *))(i38 + 480))(v2621, v2622);
      v300 = v1180 == 0;
      v1181 = __readcr4();
      if ( v300 )
        v1181 = __readcr0();
      (*(void (__fastcall **)(_BYTE *))(i38 + 424))(v2622);
      *((_QWORD *)&i29 + 1) = *((_QWORD *)v212 + 4);
      v1182 = v1181 & *((_QWORD *)v212 + 3);
      if ( v1182 == *((_QWORD *)&i29 + 1) )
        goto LABEL_406;
      v1183 = *((_QWORD *)v212 + 5);
      if ( *(_DWORD *)(i38 + 2328) )
        goto LABEL_406;
      *((_QWORD *)&i29 + 1) ^= v1182;
      *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = *((_QWORD *)&i29 + 1);
      if ( *(_DWORD *)(i38 + 2328) )
        goto LABEL_406;
      *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
      *(_QWORD *)(i38 + 2344) = v212 - 0x4C48B4211BBACBEBLL;
      *(_QWORD *)(i38 + 2352) = *(int *)v212;
      *(_QWORD *)(i38 + 2360) = v1183;
      *(_DWORD *)(i38 + 2328) = 1;
      v1184 = *(_DWORD *)(i38 + 2520);
      if ( (v1184 & 0x20000000) != 0 || (*(_DWORD *)(i38 + 2524) & 0x200000) == 0 || (v1184 & 1) == 0 )
        goto LABEL_406;
      v1185 = *(unsigned int *)(i38 + 2676);
      v1186 = *(_QWORD *)(i38 + 2104);
      v1187 = *(_QWORD *)(i38 + 2680);
      *((_QWORD *)&i29 + 1) = v1185 + i38;
      v94 = v1185 + i38 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v1185) >> 3);
      while ( *((_QWORD *)&i29 + 1) != v94 )
      {
        **((_QWORD **)&i29 + 1) ^= v1187;
        v1187 = ((v1186 ^ **((_QWORD **)&i29 + 1)) + __ROR8__(v1187, v1187 & 0x3F)) ^ 0xEFA;
        *((_QWORD *)&i29 + 1) += 8LL;
      }
LABEL_1797:
      *(_DWORD *)(i38 + 2524) &= ~0x200000u;
      if ( v1187 == *(_QWORD *)(i38 + 2688) )
        goto LABEL_406;
      goto LABEL_1798;
    }
    switch ( v219 )
    {
      case 15:
        if ( *(_QWORD *)(*(_QWORD *)(i38 + 1384) + 32LL) )
        {
          *(_DWORD *)(i38 + 2120) += 256;
          v478 = *(_QWORD *)(i38 + 1408);
          v479 = (*(__int64 (__fastcall **)(__int64))(i38 + 728))(v478);
          if ( v479 )
          {
            v480 = (*(__int64 (__fastcall **)(__int64))(i38 + 736))(v479);
            v481 = *((_QWORD *)v212 + 3);
            if ( v481 )
            {
              if ( v481 != v480 && !*(_DWORD *)(i38 + 2328) )
              {
                *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(i38 + 2344) = v212 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(i38 + 2352) = *(int *)v212;
                *(_QWORD *)(i38 + 2360) = v480;
                *(_DWORD *)(i38 + 2328) = 1;
                v482 = *(_DWORD *)(i38 + 2520);
                if ( (v482 & 0x20000000) == 0 && (*(_DWORD *)(i38 + 2524) & 0x200000) != 0 && (v482 & 1) != 0 )
                {
                  v483 = *(unsigned int *)(i38 + 2676);
                  v484 = *(_QWORD *)(i38 + 2104);
                  v485 = *(_QWORD *)(i38 + 2680);
                  v486 = (_QWORD *)(v483 + i38);
                  v487 = v483 + i38 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v483) >> 3);
                  while ( v486 != (_QWORD *)v487 )
                  {
                    *v486 ^= v485;
                    v485 = ((v484 ^ *v486++) + __ROR8__(v485, v485 & 0x3F)) ^ 0xEFA;
                  }
                  *(_DWORD *)(i38 + 2524) &= ~0x200000u;
                  if ( v485 != *(_QWORD *)(i38 + 2688) )
                  {
                    v488 = *(_DWORD *)(i38 + 2052);
                    v489 = *(_QWORD *)(i38 + 1416);
                    *(_QWORD *)v489 = i38;
                    *(_DWORD *)(v489 + 16) = v488;
                    if ( !*(_DWORD *)(i38 + 2328) )
                      *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v485 ^ *(_QWORD *)(i38 + 2688);
                    ProbeAndFlag1(i38, 0LL, v485, 256LL);
                  }
                }
              }
            }
            else
            {
              v490 = *(_QWORD *)(i38 + 2504);
              if ( (!*(_DWORD *)(i38 + 2496) || v480 < v490 || v480 > v490 + *(unsigned int *)(i38 + 2496) - 1LL)
                && !*(_DWORD *)(i38 + 2328) )
              {
                *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(i38 + 2344) = v212 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(i38 + 2352) = *(int *)v212;
                *(_QWORD *)(i38 + 2360) = v480;
                *(_DWORD *)(i38 + 2328) = 1;
                v491 = *(_DWORD *)(i38 + 2520);
                if ( (v491 & 0x20000000) == 0 && (*(_DWORD *)(i38 + 2524) & 0x200000) != 0 && (v491 & 1) != 0 )
                {
                  v492 = *(unsigned int *)(i38 + 2676);
                  v493 = *(_QWORD *)(i38 + 2104);
                  v494 = *(_QWORD *)(i38 + 2680);
                  v495 = (_QWORD *)(v492 + i38);
                  v496 = v492 + i38 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v492) >> 3);
                  while ( v495 != (_QWORD *)v496 )
                  {
                    *v495 ^= v494;
                    v494 = ((v493 ^ *v495++) + __ROR8__(v494, v494 & 0x3F)) ^ 0xEFA;
                  }
                  *(_DWORD *)(i38 + 2524) &= ~0x200000u;
                  if ( v494 != *(_QWORD *)(i38 + 2688) )
                  {
                    v497 = *(_DWORD *)(i38 + 2052);
                    v498 = *(_QWORD *)(i38 + 1416);
                    *(_QWORD *)v498 = i38;
                    *(_DWORD *)(v498 + 16) = v497;
                    if ( !*(_DWORD *)(i38 + 2328) )
                      *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v494 ^ *(_QWORD *)(i38 + 2688);
                    ProbeAndFlag1(i38, 0LL, v494, 256LL);
                  }
                }
              }
              *((_QWORD *)v212 + 3) = v480;
            }
            (*(void (__fastcall **)(__int64, __int64))(i38 + 744))(v478, v479);
          }
          m = 0LL;
        }
        goto LABEL_406;
      case 0:
        v450 = (const char *)*((_QWORD *)v212 + 1);
        v451 = *((unsigned int *)v212 + 4);
        v94 = (unsigned __int64)v450;
        *(_DWORD *)(i38 + 2120) += v451;
        v452 = v450;
        v453 = *(_DWORD *)(i38 + 2100);
        for ( i23 = *(_QWORD *)(i38 + 2104); v452 < &v450[v451]; v452 += 64 )
          _mm_prefetch(v452, 0);
        v455 = *(_QWORD *)(i38 + 2104);
        v456 = (unsigned int)v451 >> 7;
        *((_QWORD *)&i29 + 1) = 1LL;
        if ( (unsigned int)v451 >> 7 )
        {
          do
          {
            v457 = 8LL;
            do
            {
              v458 = *(_QWORD *)(v94 + 8) ^ __ROL8__(*(_QWORD *)v94 ^ v455, v453);
              v94 += 16LL;
              v455 = __ROL8__(v458, v453);
              --v457;
            }
            while ( v457 );
            i29 = (__ROL8__(i23 ^ (v94 - (_QWORD)v450), 17) ^ i23 ^ (v94 - (unsigned __int64)v450))
                * (unsigned __int128)0x7010008004002001uLL;
            v2637 = *((_QWORD *)&i29 + 1);
            v459 = i29 ^ BYTE8(i29) ^ v453;
            *((_QWORD *)&i29 + 1) = 1LL;
            v453 = v459 & 0x3F;
            if ( !v453 )
              LOBYTE(v453) = 1;
            --v456;
          }
          while ( v456 );
          i38 = v2426;
        }
        v460 = v451 & 0x7F;
        if ( v460 >= 8 )
        {
          v461 = (unsigned __int64)v460 >> 3;
          do
          {
            v455 = __ROL8__(*(_QWORD *)v94 ^ v455, v453);
            v94 += 8LL;
            v460 -= 8;
            --v461;
          }
          while ( v461 );
        }
        for ( m = 0LL; v460; --v460 )
        {
          v462 = *(unsigned __int8 *)v94++;
          v455 = __ROL8__(v462 ^ v455, v453);
        }
        for ( i24 = v455; ; LODWORD(v455) = i24 ^ v455 )
        {
          i24 >>= 31;
          if ( !i24 )
            break;
        }
        v464 = v455 & 0x7FFFFFFF;
        v465 = 0;
        if ( v464 == *((_DWORD *)v212 + 5) )
          goto LABEL_405;
        if ( !*(_DWORD *)v212 )
          v465 = *((_DWORD *)v212 + 6) != 0;
        v466 = *((unsigned int *)v212 + 4);
        *((_QWORD *)&i29 + 1) = *((_QWORD *)v212 + 1);
        if ( !*((_DWORD *)v212 + 4) || (v467 = 64LL, (*(_DWORD *)(i38 + 2524) & 0x40) == 0) )
        {
LABEL_709:
          if ( !*(_DWORD *)(i38 + 2328) )
            *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = *((unsigned int *)v212 + 5) ^ (unsigned __int64)v464;
          v471 = *((_QWORD *)v212 + 1);
          if ( *(_DWORD *)(i38 + 2328) )
            goto LABEL_405;
          *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(i38 + 2344) = v212 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(i38 + 2352) = *(int *)v212;
          *(_QWORD *)(i38 + 2360) = v471;
          *(_DWORD *)(i38 + 2328) = 1;
          v472 = *(_DWORD *)(i38 + 2520);
          if ( (v472 & 0x20000000) != 0 || (*(_DWORD *)(i38 + 2524) & 0x200000) == 0 || (v472 & 1) == 0 )
            goto LABEL_405;
          v473 = *(unsigned int *)(i38 + 2676);
          v474 = *(_QWORD *)(i38 + 2104);
          v475 = *(_QWORD *)(i38 + 2680);
          *((_QWORD *)&i29 + 1) = v473 + i38;
          v94 = v473 + i38 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v473) >> 3);
          while ( *((_QWORD *)&i29 + 1) != v94 )
          {
            **((_QWORD **)&i29 + 1) ^= v475;
            v475 = ((v474 ^ **((_QWORD **)&i29 + 1)) + __ROR8__(v475, v475 & 0x3F)) ^ 0xEFA;
            *((_QWORD *)&i29 + 1) += 8LL;
          }
          goto LABEL_718;
        }
        v468 = KeGetCurrentIrql();
        __writecr8(2uLL);
        v469 = *((_QWORD *)&i29 + 1) & 0xFFFFFFFFFFFFF000uLL;
        v2425 = (*((_QWORD *)&i29 + 1) + v466 - 1) | 0xFFF;
        v470 = (*((_QWORD *)&i29 + 1) & 0xFFFFFFFFFFFFF000uLL) - 1;
        while ( 1 )
        {
          while ( 1 )
          {
            LODWORD(i29) = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, unsigned __int64))(i38 + 1128))(
                             v469,
                             0LL,
                             v467,
                             v94);
            if ( (_DWORD)i29 == -1073741267 )
              break;
            if ( (i29 & 0x80000000) != 0LL )
            {
LABEL_708:
              __writecr8(v468);
              v212 = v2424;
              m = 0LL;
              goto LABEL_709;
            }
LABEL_706:
            v469 += 4096LL;
            v470 += 4096LL;
            if ( v470 == v2425 )
            {
              __writecr8(v468);
              goto LABEL_404;
            }
          }
          if ( v465 )
            goto LABEL_708;
          if ( v468 > 1u )
            goto LABEL_706;
          __writecr8(v468);
          __writecr8(2uLL);
        }
      case 1:
LABEL_2845:
        if ( !*(_DWORD *)(i38 + 2116) )
        {
          v1828 = (_QWORD *)*((_QWORD *)v212 + 1);
          v1829 = *((unsigned int *)v212 + 4);
          v1830 = v1828;
          *(_DWORD *)(i38 + 2120) += v1829;
          v1831 = (const char *)v1828;
          v1832 = *(_DWORD *)(i38 + 2100);
          v1833 = *(_QWORD *)(i38 + 2104);
          if ( v1828 < (_QWORD *)((char *)v1828 + v1829) )
          {
            do
            {
              _mm_prefetch(v1831, 0);
              v1831 += 64;
            }
            while ( v1831 < (const char *)v1828 + v1829 );
          }
          v1834 = *(_QWORD *)(i38 + 2104);
          v1835 = (unsigned int)v1829 >> 7;
          if ( (unsigned int)v1829 >> 7 )
          {
            do
            {
              v1836 = 8LL;
              do
              {
                v1837 = v1830[1] ^ __ROL8__(*v1830 ^ v1834, v1832);
                v1830 += 2;
                v1834 = __ROL8__(v1837, v1832);
                --v1836;
              }
              while ( v1836 );
              v1838 = (__ROL8__(v1833 ^ ((char *)v1830 - (char *)v1828), 17) ^ v1833 ^ (unsigned __int64)((char *)v1830 - (char *)v1828))
                    * (unsigned __int128)0x7010008004002001uLL;
              v2564 = *((_QWORD *)&v1838 + 1);
              v1832 = (BYTE8(v1838) ^ (unsigned __int8)(v1838 ^ v1832)) & 0x3F;
              if ( !v1832 )
                LOBYTE(v1832) = 1;
              --v1835;
            }
            while ( v1835 );
            i38 = v2426;
          }
          v1839 = v1829 & 0x7F;
          if ( v1839 >= 8 )
          {
            v1840 = (unsigned __int64)v1839 >> 3;
            do
            {
              v1834 = __ROL8__(*v1830++ ^ v1834, v1832);
              v1839 -= 8;
              --v1840;
            }
            while ( v1840 );
          }
          for ( m = 0LL; v1839; --v1839 )
          {
            v1841 = *(unsigned __int8 *)v1830;
            v1830 = (_QWORD *)((char *)v1830 + 1);
            v1834 = __ROL8__(v1841 ^ v1834, v1832);
          }
          for ( i25 = v1834; ; LODWORD(v1834) = i25 ^ v1834 )
          {
            i25 >>= 31;
            if ( !i25 )
              break;
          }
          v1843 = v1834 & 0x7FFFFFFF;
          v1844 = 0;
          if ( v1843 != *((_DWORD *)v212 + 5) )
          {
            if ( !*(_DWORD *)v212 )
              v1844 = *((_DWORD *)v212 + 6) != 0;
            v1845 = *((unsigned int *)v212 + 4);
            v1846 = *((_QWORD *)v212 + 1);
            if ( *((_DWORD *)v212 + 4) )
            {
              v1847 = 64LL;
              if ( (*(_DWORD *)(i38 + 2524) & 0x40) != 0 )
              {
                v1848 = KeGetCurrentIrql();
                __writecr8(2uLL);
                v1849 = v1846 & 0xFFFFFFFFFFFFF000uLL;
                v2430 = (v1846 + v1845 - 1) | 0xFFF;
                v1850 = (v1846 & 0xFFFFFFFFFFFFF000uLL) - 1;
                while ( 1 )
                {
                  while ( 1 )
                  {
                    v1851 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(i38 + 1128))(
                              v1849,
                              0LL,
                              v1847,
                              v1830);
                    if ( v1851 == -1073741267 )
                      break;
                    if ( v1851 < 0 )
                    {
LABEL_2876:
                      __writecr8(v1848);
                      v212 = v2424;
                      m = 0LL;
                      goto LABEL_2877;
                    }
LABEL_2874:
                    v1849 += 4096LL;
                    v1850 += 4096LL;
                    if ( v1850 == v2430 )
                    {
                      __writecr8(v1848);
                      v212 = v2424;
                      m = 0LL;
                      goto LABEL_2890;
                    }
                  }
                  if ( v1844 )
                    goto LABEL_2876;
                  if ( v1848 > 1u )
                    goto LABEL_2874;
                  __writecr8(v1848);
                  __writecr8(2uLL);
                }
              }
            }
LABEL_2877:
            if ( !*(_DWORD *)(i38 + 2328) )
              *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = *((unsigned int *)v212 + 5) ^ (unsigned __int64)v1843;
            v1852 = *((_QWORD *)v212 + 1);
            if ( !*(_DWORD *)(i38 + 2328) )
            {
              *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(i38 + 2344) = v212 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(i38 + 2352) = *(int *)v212;
              *(_QWORD *)(i38 + 2360) = v1852;
              *(_DWORD *)(i38 + 2328) = 1;
              v1853 = *(_DWORD *)(i38 + 2520);
              if ( (v1853 & 0x20000000) == 0 && (*(_DWORD *)(i38 + 2524) & 0x200000) != 0 && (v1853 & 1) != 0 )
              {
                v1854 = *(unsigned int *)(i38 + 2676);
                v1855 = *(_QWORD *)(i38 + 2104);
                v1856 = *(_QWORD *)(i38 + 2680);
                v1857 = (_QWORD *)(v1854 + i38);
                v1858 = v1854 + i38 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v1854) >> 3);
                while ( v1857 != (_QWORD *)v1858 )
                {
                  *v1857 ^= v1856;
                  v1856 = ((v1855 ^ *v1857++) + __ROR8__(v1856, v1856 & 0x3F)) ^ 0xEFA;
                }
                *(_DWORD *)(i38 + 2524) &= ~0x200000u;
                if ( v1856 != *(_QWORD *)(i38 + 2688) )
                {
                  v1859 = *(_DWORD *)(i38 + 2052);
                  v1860 = *(_QWORD *)(i38 + 1416);
                  *(_QWORD *)v1860 = i38;
                  *(_DWORD *)(v1860 + 16) = v1859;
                  if ( !*(_DWORD *)(i38 + 2328) )
                    *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v1856 ^ *(_QWORD *)(i38 + 2688);
                  ProbeAndFlag1(i38, 0LL, v1856, 256LL);
                }
              }
            }
          }
LABEL_2890:
          v219 = v2431;
        }
        v94 = *((_QWORD *)v212 + 1);
        v1861 = *(unsigned int *)(i38 + 2116);
        v1862 = *((unsigned int *)v212 + 4);
        v2443 = (char *)v94;
        v1863 = (unsigned int *)(v94 + 12 * v1861);
        v2432 = (__int64)v1863;
        v2425 = v94 + 12 * (v1862 / 0xC);
        v1864 = (int *)&v212[4 * v1861 + 48];
        v2427 = (__int64)v1864;
        if ( v1863 == (unsigned int *)v2425 )
          goto LABEL_2982;
        v1865 = v2425;
        while ( 1 )
        {
          if ( *v1864 < 0 )
            goto LABEL_2965;
          v1866 = *((_QWORD *)v212 + 4) + *v1863;
          v1867 = v1863[1] - *v1863;
          v2430 = v1866;
          if ( v219 == 43 )
          {
            v1881 = CheckKernelROPAndProbe(i38, v1866, v1867);
            *(_DWORD *)(i38 + 2120) += 8 * v1867;
            if ( (*(_DWORD *)(i38 + 2524) & 0x800) != 0 )
            {
              v1882 = *(_BYTE *)(v1866 - 1);
              if ( *(_BYTE *)(v1866 - 6) == 76
                && *(_BYTE *)(v1866 - 5) == 0x87
                && !*(_BYTE *)(v1866 - 4)
                && *(_BYTE *)(v1866 - 3) == 0x98
                && *(_BYTE *)(v1866 - 2) == 0xC3
                && (v1882 == -112 || v1882 == -15) )
              {
                v1883 = *(volatile signed __int32 **)(i38 + 1240);
                while ( 1 )
                {
                  _disable();
                  if ( !_interlockedbittestandset(v1883, (*(_DWORD *)(i38 + 2520) >> 9) & 0x1F) )
                    break;
                  _enable();
                  _mm_pause();
                }
                CurrentPrcb = *(struct _KPRCB **)(i38 + 2304);
                v1885 = 38LL;
                v1886 = 304;
                v1887 = CurrentPrcb;
                v94 = 1LL;
                do
                {
                  *(_QWORD *)&v1887->MxCsr = 0LL;
                  v1886 -= 8;
                  v1887 = (struct _KPRCB *)((char *)v1887 + 8);
                  --v1885;
                }
                while ( v1885 );
                if ( v1886 )
                {
                  v1885 = 0xFFFFFFFFLL;
                  do
                  {
                    LOBYTE(v1887->MxCsr) = 0;
                    v1887 = (struct _KPRCB *)((char *)v1887 + 1);
                    --v1886;
                  }
                  while ( v1886 );
                }
                *(_OWORD *)&CurrentPrcb->NextThread = *(_OWORD *)(i38 + 2152);
                *(_OWORD *)&CurrentPrcb->NestingLevel = *(_OWORD *)(i38 + 2168);
                *(_OWORD *)&CurrentPrcb->ProcessorState.SpecialRegisters.KernelDr0 = *(_OWORD *)(i38 + 2184);
                v2501 = 303;
                v2502 = CurrentPrcb;
                LOWORD(CurrentPrcb->NextThread) = i38 + 2220;
                v1888 = (unsigned __int64)(i38 + 2220) >> 16;
                v2566 = i38 + 2220;
                HIWORD(CurrentPrcb->NextThread) = v1888;
                LODWORD(CurrentPrcb->IdleThread) = (unsigned __int64)(i38 + 2220) >> 32;
                __sidt(v2515);
                __lidt(&v2501);
                *(_BYTE *)(v1866 - 1) = -15;
                if ( *(_BYTE *)(v1866 - 1) != 0xF1 )
                  goto LABEL_2936;
                if ( (*(_DWORD *)(i38 + 2524) & 0x20000) == 0 )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  v1888 = i38 - 0x5C5FC0A76E374B18LL;
                  **(_QWORD **)(i38 + 1208) = i38 - 0x5C5FC0A76E374B18LL;
                  **(_QWORD **)(i38 + 1216) = CurrentPrcb;
                  **(_QWORD **)(i38 + 1224) = v1866;
                  **(_QWORD **)(i38 + 1232) = 275LL;
                }
                ((void (__fastcall *)(unsigned __int64, struct _KPRCB *, __int64, __int64))(v1866 - 1))(
                  v1888,
                  CurrentPrcb,
                  v1885,
                  1LL);
                if ( (*(_DWORD *)(i38 + 2524) & 0x20000) == 0 )
                {
                  **(_QWORD **)(i38 + 1208) = 0xA3A03F5891C8B4E8uLL;
                  **(_QWORD **)(i38 + 1216) = 0LL;
                  **(_QWORD **)(i38 + 1224) = 0LL;
                  **(_QWORD **)(i38 + 1232) = 0LL;
                }
                v94 = 1LL;
                if ( *(_BYTE *)(v1866 - 1) == 0xF1 )
                {
                  *(_BYTE *)(v1866 - 1) = -112;
                  v1868 = *(_BYTE *)(v1866 - 1) == 0x90;
                }
                else
                {
LABEL_2936:
                  v1868 = 0LL;
                }
                __lidt(v2515);
                _InterlockedAnd(
                  *(volatile signed __int32 **)(i38 + 1240),
                  ~(1 << ((*(_DWORD *)(i38 + 2520) >> 9) & 0x1F)));
                _enable();
                if ( (_DWORD)v1868 )
                  goto LABEL_2952;
              }
              else
              {
                v94 = 1LL;
              }
              if ( !*(_DWORD *)(i38 + 2328) )
              {
                v1889 = (int *)v2424;
                *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(i38 + 2344) = (char *)v1889 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(i38 + 2352) = *v1889;
                *(_QWORD *)(i38 + 2360) = v1866 - 6;
                *(_DWORD *)(i38 + 2328) = 1;
                v1890 = *(_DWORD *)(i38 + 2520);
                if ( (v1890 & 0x20000000) == 0 && (*(_DWORD *)(i38 + 2524) & 0x200000) != 0 && (v1890 & 1) != 0 )
                {
                  v1891 = *(unsigned int *)(i38 + 2676);
                  v1892 = *(_QWORD *)(i38 + 2104);
                  v1868 = *(_QWORD *)(i38 + 2680);
                  v1893 = (_QWORD *)(v1891 + i38);
                  v94 = v1891 + i38 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v1891) >> 3);
                  while ( v1893 != (_QWORD *)v94 )
                  {
                    *v1893 ^= v1868;
                    v1868 = ((v1892 ^ *v1893++) + __ROR8__(v1868, v1868 & 0x3F)) ^ 0xEFA;
                  }
                  *(_DWORD *)(i38 + 2524) &= ~0x200000u;
                  if ( v1868 != *(_QWORD *)(i38 + 2688) )
                  {
                    v1894 = *(_DWORD *)(i38 + 2052);
                    v1895 = *(_QWORD *)(i38 + 1416);
                    *(_QWORD *)v1895 = i38;
                    *(_DWORD *)(v1895 + 16) = v1894;
                    if ( !*(_DWORD *)(i38 + 2328) )
                      *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v1868 ^ *(_QWORD *)(i38 + 2688);
                    ProbeAndFlag1(i38, 0LL, v1868, 256LL);
                  }
                }
              }
            }
          }
          else
          {
            *(_DWORD *)(i38 + 2120) += v1867;
            v1868 = v1866;
            v94 = *(unsigned int *)(i38 + 2100);
            v1869 = (const char *)v1866;
            v1870 = *(_QWORD *)(i38 + 2104);
            v1871 = v1866 + v1867;
            if ( v1866 < v1871 )
            {
              do
              {
                _mm_prefetch(v1869, 0);
                v1869 += 64;
              }
              while ( (unsigned __int64)v1869 < v1871 );
            }
            v1872 = *(_QWORD *)(i38 + 2104);
            v1873 = v1867 >> 7;
            if ( v1867 >> 7 )
            {
              do
              {
                v1874 = 8LL;
                do
                {
                  v1875 = *(_QWORD *)(v1868 + 8) ^ __ROL8__(*(_QWORD *)v1868 ^ v1872, v94);
                  v1868 += 16LL;
                  v1872 = __ROL8__(v1875, v94);
                  --v1874;
                }
                while ( v1874 );
                v1876 = (__ROL8__(v1870 ^ (v1868 - v1866), 17) ^ v1870 ^ (v1868 - v1866))
                      * (unsigned __int128)0x7010008004002001uLL;
                v2565 = *((_QWORD *)&v1876 + 1);
                v94 = ((unsigned __int8)v1876 ^ (unsigned __int8)(BYTE8(v1876) ^ v94)) & 0x3F;
                if ( !(_DWORD)v94 )
                  v94 = 1LL;
                --v1873;
              }
              while ( v1873 );
              i38 = v2426;
              v1864 = (int *)v2427;
              v1865 = v2425;
            }
            v1877 = v1867 & 0x7F;
            if ( v1877 >= 8 )
            {
              v1878 = (unsigned __int64)(v1867 & 0x7F) >> 3;
              do
              {
                v1872 = __ROL8__(*(_QWORD *)v1868 ^ v1872, v94);
                v1868 += 8LL;
                v1877 -= 8;
                --v1878;
              }
              while ( v1878 );
            }
            if ( v1877 )
            {
              do
              {
                v1879 = *(unsigned __int8 *)v1868++;
                v1872 = __ROL8__(v1879 ^ v1872, v94);
                --v1877;
              }
              while ( v1877 );
              v1865 = v2425;
            }
            for ( i26 = v1872; ; LODWORD(v1872) = i26 ^ v1872 )
            {
              i26 >>= 31;
              if ( !i26 )
                break;
            }
            v1881 = v1872 & 0x7FFFFFFF;
          }
LABEL_2952:
          if ( v1881 == (*v1864 & 0x7FFFFFFF) )
            goto LABEL_2963;
          v1896 = v1867;
          if ( v1867 && (*(_DWORD *)(i38 + 2524) & 0x40) != 0 )
          {
            v1897 = KeGetCurrentIrql();
            v1898 = v1866 & 0xFFFFFFFFFFFFF000uLL;
            v1899 = (v1896 + v1866 - 1) | 0xFFF;
            v1900 = (v1866 & 0xFFFFFFFFFFFFF000uLL) - 1;
            while ( 1 )
            {
              __writecr8(2uLL);
              while ( 1 )
              {
                v1901 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, unsigned __int64))(i38 + 1128))(
                          v1898,
                          0LL,
                          v1868,
                          v94);
                if ( v1901 == -1073741267 )
                  break;
                if ( v1901 < 0 )
                {
                  __writecr8(v1897);
                  v1866 = v2430;
                  v1863 = (unsigned int *)v2432;
                  v1864 = (int *)v2427;
                  goto LABEL_2970;
                }
LABEL_2961:
                v1898 += 4096LL;
                v1900 += 4096LL;
                if ( v1900 == v1899 )
                {
                  __writecr8(v1897);
                  v1863 = (unsigned int *)v2432;
                  v1864 = (int *)v2427;
                  goto LABEL_2963;
                }
              }
              if ( v1897 > 1u )
                goto LABEL_2961;
              __writecr8(v1897);
            }
          }
LABEL_2970:
          v1902 = (unsigned int)*v1864;
          LODWORD(v1902) = v1902 & 0x7FFFFFFF;
          if ( *(_DWORD *)(i38 + 2328)
            || (*(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v1902 ^ v1881, *(_DWORD *)(i38 + 2328)) )
          {
LABEL_2963:
            v212 = v2424;
          }
          else
          {
            v212 = v2424;
            *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(i38 + 2344) = v212 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(i38 + 2352) = *(int *)v212;
            *(_QWORD *)(i38 + 2360) = v1866;
            *(_DWORD *)(i38 + 2328) = 1;
            v1903 = *(_DWORD *)(i38 + 2520);
            if ( (v1903 & 0x20000000) == 0 && (*(_DWORD *)(i38 + 2524) & 0x200000) != 0 && (v1903 & 1) != 0 )
            {
              v1904 = *(unsigned int *)(i38 + 2676);
              v1905 = *(_QWORD *)(i38 + 2104);
              v1906 = *(_QWORD *)(i38 + 2680);
              v1907 = (_QWORD *)(v1904 + i38);
              v94 = v1904 + i38 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v1904) >> 3);
              while ( v1907 != (_QWORD *)v94 )
              {
                *v1907 ^= v1906;
                v1906 = ((v1905 ^ *v1907++) + __ROR8__(v1906, v1906 & 0x3F)) ^ 0xEFA;
              }
              *(_DWORD *)(i38 + 2524) &= ~0x200000u;
              if ( v1906 != *(_QWORD *)(i38 + 2688) )
              {
                v1908 = *(_DWORD *)(i38 + 2052);
                m = 0LL;
                v1909 = *(_QWORD *)(i38 + 1416);
                *(_QWORD *)v1909 = i38;
                *(_DWORD *)(v1909 + 16) = v1908;
                if ( !*(_DWORD *)(i38 + 2328) )
                  *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v1906 ^ *(_QWORD *)(i38 + 2688);
                ProbeAndFlag1(i38, 0LL, v1906, 256LL);
                goto LABEL_2965;
              }
            }
          }
          m = 0LL;
LABEL_2965:
          ++v1864;
          v1863 += 3;
          v2427 = (__int64)v1864;
          v2432 = (__int64)v1863;
          if ( (unsigned __int64)v1863 < v1865 )
          {
            v219 = v2431;
            if ( *(_DWORD *)(i38 + 2120) < *(_DWORD *)(i38 + 2124) )
              continue;
          }
          if ( v1863 != (unsigned int *)v2425 )
          {
            *((_QWORD *)&i29 + 1) = ((char *)v1863 - v2443) / 12;
            goto LABEL_3013;
          }
LABEL_2982:
          v1910 = *(_QWORD *)(i38 + 1336);
          v1911 = KeGetCurrentIrql();
          __writecr8(0xFuLL);
          (*(void (__fastcall **)(__int64))(i38 + 352))(v1910);
          v1912 = **(unsigned int ***)(i38 + 1568);
          v1913 = v1912 + 4;
          v1914 = *((_BYTE *)v1912 + 12);
          v1915 = (unsigned __int64)&v1912[6 * *v1912 + 4];
          do
          {
            v1916 = 24LL;
            v1917 = v212 + 24;
            v1918 = v1913;
            do
            {
              v1919 = *(_QWORD *)v1918;
              v1918 += 2;
              v1920 = *(_QWORD *)v1917;
              v1917 += 8;
              if ( v1919 != v1920 )
                goto LABEL_2990;
              v1916 = (unsigned int)(v1916 - 8);
            }
            while ( (unsigned int)v1916 >= 8 );
            if ( !(_DWORD)v1916 )
              break;
            while ( 1 )
            {
              v1921 = *(_BYTE *)v1918;
              v1918 = (unsigned int *)((char *)v1918 + 1);
              v1922 = *v1917++;
              if ( v1921 != v1922 )
                break;
              v300 = (_DWORD)v1916 == 1;
              v1916 = (unsigned int)(v1916 - 1);
              if ( v300 )
                goto LABEL_2991;
            }
LABEL_2990:
            v1913 += 6;
          }
          while ( (unsigned __int64)v1913 < v1915 );
LABEL_2991:
          i38 = v2426;
          (*(void (__fastcall **)(_QWORD, __int64, char *, unsigned int *))(v2426 + 416))(
            *(_QWORD *)(v2426 + 1336),
            v1916,
            v1917,
            v1918);
          __writecr8(v1911);
          if ( v1914 )
          {
            if ( (*(_DWORD *)(i38 + 2524) & 0x10) != 0 && !*(_DWORD *)(i38 + 2328) )
            {
              *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
              v1923 = v212 ? (__int64)(v212 - 0x4C48B4211BBACBEBLL) : 0LL;
              *(_QWORD *)(i38 + 2344) = v1923;
              v1924 = v212 ? *(int *)v212 : 0LL;
              *(_QWORD *)(i38 + 2352) = v1924;
              *(_QWORD *)(i38 + 2360) = 1LL;
              *(_DWORD *)(i38 + 2328) = 1;
              v1925 = *(_DWORD *)(i38 + 2520);
              if ( (v1925 & 0x20000000) == 0 && (*(_DWORD *)(i38 + 2524) & 0x200000) != 0 && (v1925 & 1) != 0 )
              {
                v1926 = *(unsigned int *)(i38 + 2676);
                v1927 = *(_QWORD *)(i38 + 2104);
                v1928 = *(_QWORD *)(i38 + 2680);
                v1929 = (_QWORD *)(v1926 + i38);
                v94 = v1926 + i38 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v1926) >> 3);
                while ( v1929 != (_QWORD *)v94 )
                {
                  *v1929 ^= v1928;
                  v1928 = ((v1927 ^ *v1929++) + __ROR8__(v1928, v1928 & 0x3F)) ^ 0xEFA;
                }
                *(_DWORD *)(i38 + 2524) &= ~0x200000u;
                if ( v1928 != *(_QWORD *)(i38 + 2688) )
                {
                  v1930 = *(_DWORD *)(i38 + 2052);
                  v1931 = *(_QWORD *)(i38 + 1416);
                  *(_QWORD *)v1931 = i38;
                  *(_DWORD *)(v1931 + 16) = v1930;
                  if ( !*(_DWORD *)(i38 + 2328) )
                    *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v1928 ^ *(_QWORD *)(i38 + 2688);
                  ProbeAndFlag1(i38, 0LL, v1928, 256LL);
                }
              }
            }
            if ( *((_QWORD *)v212 + 3) == 1LL )
              goto LABEL_3011;
          }
          if ( v1913 != (unsigned int *)v1915 || *(_DWORD *)(i38 + 2328) )
            goto LABEL_3011;
          *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
          v1932 = v212 ? (__int64)(v212 - 0x4C48B4211BBACBEBLL) : 0LL;
          *(_QWORD *)(i38 + 2344) = v1932;
          v1933 = v212 ? *(int *)v212 : 0LL;
          *(_QWORD *)(i38 + 2352) = v1933;
          *(_QWORD *)(i38 + 2360) = v1913;
          *(_DWORD *)(i38 + 2328) = 1;
          v1934 = *(_DWORD *)(i38 + 2520);
          if ( (v1934 & 0x20000000) != 0 || (*(_DWORD *)(i38 + 2524) & 0x200000) == 0 || (v1934 & 1) == 0 )
          {
LABEL_3011:
            m = 0LL;
          }
          else
          {
            v1935 = *(unsigned int *)(i38 + 2676);
            v1936 = *(_QWORD *)(i38 + 2104);
            v1937 = *(_QWORD *)(i38 + 2680);
            v1938 = (_QWORD *)(v1935 + i38);
            v94 = v1935 + i38 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v1935) >> 3);
            while ( v1938 != (_QWORD *)v94 )
            {
              *v1938 ^= v1937;
              v1937 = ((v1936 ^ *v1938++) + __ROR8__(v1937, v1937 & 0x3F)) ^ 0xEFA;
            }
            *(_DWORD *)(i38 + 2524) &= ~0x200000u;
            m = 0LL;
            if ( v1937 != *(_QWORD *)(i38 + 2688) )
            {
              v1939 = *(_DWORD *)(i38 + 2052);
              v1940 = *(_QWORD *)(i38 + 1416);
              *(_QWORD *)v1940 = i38;
              *(_DWORD *)(v1940 + 16) = v1939;
              if ( !*(_DWORD *)(i38 + 2328) )
                *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v1937 ^ *(_QWORD *)(i38 + 2688);
              ProbeAndFlag1(i38, 0LL, v1937, 256LL);
            }
          }
          *((_QWORD *)&i29 + 1) = 0LL;
LABEL_3013:
          *(_DWORD *)(i38 + 2116) = DWORD2(i29);
          goto LABEL_405;
        }
      case 4:
        if ( (*(_DWORD *)(i38 + 2128) & 1) != 0 )
          goto LABEL_406;
        v419 = *(void (**)(void))(i38 + 392);
        v420 = 0;
        v421 = *(_QWORD *)(i38 + 1344);
        v2429 = 0;
        v419();
        if ( (*(_DWORD *)(i38 + 2520) & 0x20000000) != 0 || (v422 = *(_DWORD *)(i38 + 2424), v422 >= 7) )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD))(i38 + 312))(*(_QWORD *)(i38 + 2632), 0LL);
          LOBYTE(v103) = 0x80;
        }
        else
        {
          v103 = 1;
          LOBYTE(v103) = 1 << v422;
        }
        v423 = *(void (__fastcall **)(__int64, _QWORD))(i38 + 328);
        LODWORD(v2428) = v103;
        v423(v421, 0LL);
        v424 = *(_QWORD ***)(i38 + 1304);
        v425 = *v424;
        if ( *v424 != v424 )
        {
          v426 = (int *)v2424;
          do
          {
            v427 = (unsigned __int64)v425 - *(_QWORD *)(i38 + 1760);
            if ( (_BYTE)v103 != 0x80
              && ((unsigned __int8)v103 & *(_BYTE *)(v427 + *(_QWORD *)(i38 + 1736))) != 0
              && (*(_DWORD *)(v427 + *(_QWORD *)(i38 + 1744)) & *(_DWORD *)(i38 + 1768)) != 0
              && !*(_DWORD *)(i38 + 2328) )
            {
              *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(i38 + 2344) = (char *)v426 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(i38 + 2352) = *v426;
              *(_QWORD *)(i38 + 2360) = v427 | 1;
              *(_DWORD *)(i38 + 2328) = 1;
              v428 = *(_DWORD *)(i38 + 2520);
              if ( (v428 & 0x20000000) == 0 && (*(_DWORD *)(i38 + 2524) & 0x200000) != 0 && (v428 & 1) != 0 )
              {
                v429 = *(unsigned int *)(i38 + 2676);
                v430 = *(_QWORD *)(i38 + 2104);
                v431 = *(_QWORD *)(i38 + 2680);
                v432 = (_QWORD *)(v429 + i38);
                v433 = v429 + i38 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v429) >> 3);
                while ( v432 != (_QWORD *)v433 )
                {
                  *v432 ^= v431;
                  v431 = ((v430 ^ *v432++) + __ROR8__(v431, v431 & 0x3F)) ^ 0xEFA;
                }
                *(_DWORD *)(i38 + 2524) &= ~0x200000u;
                if ( v431 != *(_QWORD *)(i38 + 2688) )
                {
                  v434 = *(_DWORD *)(i38 + 2052);
                  v435 = *(_QWORD *)(i38 + 1416);
                  *(_QWORD *)v435 = i38;
                  *(_DWORD *)(v435 + 16) = v434;
                  if ( !*(_DWORD *)(i38 + 2328) )
                    *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v431 ^ *(_QWORD *)(i38 + 2688);
                  ProbeAndFlag1(i38, 0LL, v431, 256LL);
                }
              }
            }
            _InterlockedOr8((volatile signed __int8 *)(v427 + *(_QWORD *)(i38 + 1736)), v103);
            v425 = (_QWORD *)*v425;
            ++v420;
          }
          while ( v425 != v424 );
          v2429 = v420;
        }
        v436 = *(_QWORD *)(i38 + 1272);
        v2425 = KeGetCurrentIrql();
        __writecr8(0xCuLL);
        (*(void (__fastcall **)(__int64, _BYTE *))(i38 + 344))(v436, v2647);
        v437 = *(_QWORD ***)(i38 + 1264);
        v438 = *v437;
        if ( *v437 != v437 )
        {
          v439 = (int *)v2424;
          v440 = (unsigned __int8)v103;
          do
          {
            v441 = (char *)v438 - *(_QWORD *)(i38 + 1728);
            if ( (v441[*(_QWORD *)(i38 + 1736)] & v440) == 0 && !*(_DWORD *)(i38 + 2328) )
            {
              *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(i38 + 2344) = (char *)v439 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(i38 + 2352) = *v439;
              *(_QWORD *)(i38 + 2360) = v441;
              *(_DWORD *)(i38 + 2328) = 1;
              v442 = *(_DWORD *)(i38 + 2520);
              if ( (v442 & 0x20000000) == 0 && (*(_DWORD *)(i38 + 2524) & 0x200000) != 0 && (v442 & 1) != 0 )
              {
                v443 = *(unsigned int *)(i38 + 2676);
                v444 = *(_QWORD *)(i38 + 2104);
                v445 = *(_QWORD *)(i38 + 2680);
                v446 = (_QWORD *)(v443 + i38);
                v447 = v443 + i38 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v443) >> 3);
                while ( v446 != (_QWORD *)v447 )
                {
                  *v446 ^= v445;
                  v445 = ((v444 ^ *v446++) + __ROR8__(v445, v445 & 0x3F)) ^ 0xEFA;
                }
                *(_DWORD *)(i38 + 2524) &= ~0x200000u;
                if ( v445 != *(_QWORD *)(i38 + 2688) )
                {
                  v448 = *(_DWORD *)(i38 + 2052);
                  v449 = *(_QWORD *)(i38 + 1416);
                  *(_QWORD *)v449 = i38;
                  *(_DWORD *)(v449 + 16) = v448;
                  if ( !*(_DWORD *)(i38 + 2328) )
                    *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v445 ^ *(_QWORD *)(i38 + 2688);
                  ProbeAndFlag1(i38, 0LL, v445, 256LL);
                }
                v440 = (unsigned __int8)v103;
              }
            }
            _InterlockedAnd8(&v441[*(_QWORD *)(i38 + 1736)], ~(_BYTE)v103);
            v438 = (_QWORD *)*v438;
          }
          while ( v438 != v437 );
          LOBYTE(v103) = v2428;
        }
        (*(void (__fastcall **)(_BYTE *))(i38 + 408))(v2647);
        __writecr8((unsigned __int8)v2425);
        if ( (_BYTE)v103 == 0x80 )
          (*(void (__fastcall **)(_QWORD, _QWORD))(i38 + 320))(*(_QWORD *)(i38 + 2632), 0LL);
        (*(void (__fastcall **)(_QWORD, _QWORD))(i38 + 336))(*(_QWORD *)(i38 + 1344), 0LL);
        (*(void (**)(void))(i38 + 400))();
        LODWORD(i29) = v2429;
LABEL_634:
        v266 = (_DWORD)i29 << 8;
        goto LABEL_403;
      case 5:
        v378 = *(_DWORD *)(i38 + 2128);
        if ( (v378 & 1) == 0 )
          goto LABEL_406;
        if ( _bittest((const signed __int32 *)(i38 + 2520), 0x1Du) )
        {
          v379 = __rdtsc();
          v380 = (__ROR8__(v379, 3) ^ v379) * (unsigned __int128)0x7010008004002001uLL;
          v2632 = *((_QWORD *)&v380 + 1);
          v2661 = ((unsigned __int64)v380 ^ *((_QWORD *)&v380 + 1)) == 3
                                                                     * (((unsigned __int64)v380 ^ *((_QWORD *)&v380 + 1))
                                                                      / 3);
        }
        else
        {
          v2661 = (v378 & 3) == 3;
        }
        v381 = *(void (**)(void))(i38 + 392);
        v382 = *(_QWORD *)(i38 + 1344);
        LODWORD(v2428) = 0;
        v381();
        if ( _bittest((const signed __int32 *)(i38 + 2520), 0x1Du) || (v383 = *(_DWORD *)(i38 + 2424), v383 >= 7) )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD))(i38 + 312))(*(_QWORD *)(i38 + 2632), 0LL);
          v384 = 0x80;
        }
        else
        {
          v384 = 1 << v383;
        }
        (*(void (__fastcall **)(__int64, _QWORD))(i38 + 328))(v382, 0LL);
        v385 = *(volatile signed __int8 ***)(i38 + 1304);
        v386 = *v385;
        if ( *v385 != (volatile signed __int8 *)v385 )
        {
          do
          {
            _InterlockedOr8(&v386[*(_QWORD *)(i38 + 1736) - *(_QWORD *)(i38 + 1760)], v384);
            v386 = *(volatile signed __int8 **)v386;
            LODWORD(m) = m + 1;
          }
          while ( v386 != (volatile signed __int8 *)v385 );
          LODWORD(v2428) = m;
        }
        v387 = 4LL;
        v388 = **(_QWORD **)(i38 + 1352);
        v389 = *(unsigned int *)(*(_QWORD *)(i38 + 1856) + v388);
        v2425 = v389;
        while ( 1 )
        {
          v390 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(i38 + 272))(v388, v387);
          if ( v390 )
            break;
LABEL_630:
          v387 += 4LL;
          if ( v387 >= v389 )
          {
            if ( v384 == 0x80 )
              (*(void (__fastcall **)(_QWORD, _QWORD))(i38 + 320))(*(_QWORD *)(i38 + 2632), 0LL);
            (*(void (__fastcall **)(_QWORD, _QWORD))(i38 + 336))(*(_QWORD *)(i38 + 1344), 0LL);
            (*(void (**)(void))(i38 + 400))();
            LODWORD(i29) = (v389 >> 2) + v2428;
            goto LABEL_634;
          }
        }
        v391 = (_BYTE *)(*(__int64 (__fastcall **)(__int64))(i38 + 280))(v390);
        v392 = *v391 & 0x7F;
        if ( v392 == 3 )
        {
          if ( (v384 & v391[*(_QWORD *)(i38 + 1736)]) == 0
            && (*(_DWORD *)&v391[*(_QWORD *)(i38 + 1744)] & *(_DWORD *)(i38 + 1768)) != 0
            && !*(_DWORD *)(i38 + 2328) )
          {
            v393 = (int *)v2424;
            *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(i38 + 2344) = (char *)v393 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(i38 + 2352) = *v393;
            *(_QWORD *)(i38 + 2360) = v391;
            *(_DWORD *)(i38 + 2328) = 1;
            v394 = *(_DWORD *)(i38 + 2520);
            if ( (v394 & 0x20000000) == 0 && (*(_DWORD *)(i38 + 2524) & 0x200000) != 0 && (v394 & 1) != 0 )
            {
              v395 = *(unsigned int *)(i38 + 2676);
              v396 = *(_QWORD *)(i38 + 2104);
              v397 = *(_QWORD *)(i38 + 2680);
              v398 = (_QWORD *)(v395 + i38);
              v399 = v395 + i38 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v395) >> 3);
              while ( v398 != (_QWORD *)v399 )
              {
                *v398 ^= v397;
                v397 = ((v396 ^ *v398++) + __ROR8__(v397, v397 & 0x3F)) ^ 0xEFA;
              }
              *(_DWORD *)(i38 + 2524) &= ~0x200000u;
              if ( v397 != *(_QWORD *)(i38 + 2688) )
              {
                v400 = *(_DWORD *)(i38 + 2052);
                v401 = *(_QWORD *)(i38 + 1416);
                *(_QWORD *)v401 = i38;
                *(_DWORD *)(v401 + 16) = v400;
                if ( !*(_DWORD *)(i38 + 2328) )
                  *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v397 ^ *(_QWORD *)(i38 + 2688);
                ProbeAndFlag1(i38, 0LL, v397, 256LL);
              }
            }
          }
          _InterlockedAnd8(&v391[*(_QWORD *)(i38 + 1736)], ~v384);
          goto LABEL_629;
        }
        if ( v392 == 6 )
        {
          if ( v2661 )
          {
            if ( (v402 = *(_QWORD *)(i38 + 1680), v403 = *(_QWORD *)&v391[v402 + 32], v403 != *(_QWORD *)(i38 + 800))
              && v403 != *(_QWORD *)(i38 + 808)
              || *(_QWORD *)&v391[v402 + 48] != *(_QWORD *)(i38 + 816)
              || *(_QWORD *)&v391[v402 + 40] != *(_QWORD *)(i38 + 824) )
            {
              if ( !*(_DWORD *)(i38 + 2328) )
              {
                v404 = (int *)v2424;
                *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(i38 + 2344) = (char *)v404 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(i38 + 2352) = *v404;
                *(_QWORD *)(i38 + 2360) = v391;
                *(_DWORD *)(i38 + 2328) = 1;
                v405 = *(_DWORD *)(i38 + 2520);
                if ( (v405 & 0x20000000) == 0 && (*(_DWORD *)(i38 + 2524) & 0x200000) != 0 && (v405 & 1) != 0 )
                {
                  v406 = *(unsigned int *)(i38 + 2676);
                  v407 = *(_QWORD *)(i38 + 2104);
                  v408 = *(_QWORD *)(i38 + 2680);
                  v409 = (_QWORD *)(v406 + i38);
                  v410 = v406 + i38 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v406) >> 3);
                  while ( v409 != (_QWORD *)v410 )
                  {
                    *v409 ^= v408;
                    v408 = ((v407 ^ *v409++) + __ROR8__(v408, v408 & 0x3F)) ^ 0xEFA;
                  }
                  goto LABEL_625;
                }
              }
            }
          }
        }
        else if ( v392 )
        {
          if ( !*(_DWORD *)(i38 + 2328) )
          {
            v411 = (int *)v2424;
            *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(i38 + 2344) = (char *)v411 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(i38 + 2352) = *v411;
            *(_QWORD *)(i38 + 2360) = v391;
            *(_DWORD *)(i38 + 2328) = 1;
            v412 = *(_DWORD *)(i38 + 2520);
            if ( (v412 & 0x20000000) == 0 && (*(_DWORD *)(i38 + 2524) & 0x200000) != 0 && (v412 & 1) != 0 )
            {
              v413 = *(unsigned int *)(i38 + 2676);
              v414 = *(_QWORD *)(i38 + 2104);
              v408 = *(_QWORD *)(i38 + 2680);
              v415 = (_QWORD *)(v413 + i38);
              v416 = v413 + i38 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v413) >> 3);
              while ( v415 != (_QWORD *)v416 )
              {
                *v415 ^= v408;
                v408 = ((v414 ^ *v415++) + __ROR8__(v408, v408 & 0x3F)) ^ 0xEFA;
              }
LABEL_625:
              *(_DWORD *)(i38 + 2524) &= ~0x200000u;
              if ( v408 != *(_QWORD *)(i38 + 2688) )
              {
                v417 = *(_DWORD *)(i38 + 2052);
                v418 = *(_QWORD *)(i38 + 1416);
                *(_QWORD *)v418 = i38;
                *(_DWORD *)(v418 + 16) = v417;
                if ( !*(_DWORD *)(i38 + 2328) )
                  *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v408 ^ *(_QWORD *)(i38 + 2688);
                ProbeAndFlag1(i38, 0LL, v408, 256LL);
              }
            }
          }
        }
LABEL_629:
        (*(void (__fastcall **)(__int64, __int64))(i38 + 304))(v388, v390);
        v389 = v2425;
        goto LABEL_630;
      case 7:
        (*(void (__fastcall **)(_BYTE *, _QWORD))(i38 + 432))(v2619, *((unsigned int *)v212 + 7));
        (*(void (__fastcall **)(_BYTE *, _BYTE *))(i38 + 480))(v2619, v2620);
        for ( i27 = 0; i27 < *((_DWORD *)v212 + 6); ++i27 )
        {
          v364 = *(unsigned int *)&v212[24 * i27 + 64];
          if ( (*(_BYTE *)(i38 + 2203) & 2) != 0
            && (_DWORD)v364 == -1073741694
            && KeGetPcr()->Prcb.Number == *(_DWORD *)(i38 + 2320) )
          {
            v365 = *(_QWORD *)(i38 + 2312);
          }
          else
          {
            v365 = __readmsr(v364);
          }
          v366 = *(_QWORD *)&v212[24 * i27 + 48];
          v367 = *(_QWORD *)&v212[24 * i27 + 56];
          v368 = v366 & v365;
          if ( v368 == v367 )
          {
            if ( (*(_DWORD *)(i38 + 2524) & 0x200) != 0 && v366 == -1 )
              __writemsr(v364, v368);
          }
          else
          {
            v369 = v364 | ((unsigned __int64)*((unsigned int *)v212 + 7) << 32);
            if ( !*(_DWORD *)(i38 + 2328) )
            {
              *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v368 ^ v367;
              if ( !*(_DWORD *)(i38 + 2328) )
              {
                *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(i38 + 2344) = v212 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(i38 + 2352) = *(int *)v212;
                *(_QWORD *)(i38 + 2360) = v369;
                *(_DWORD *)(i38 + 2328) = 1;
                v370 = *(_DWORD *)(i38 + 2520);
                if ( (v370 & 0x20000000) == 0 && (*(_DWORD *)(i38 + 2524) & 0x200000) != 0 && (v370 & 1) != 0 )
                {
                  v371 = *(unsigned int *)(i38 + 2676);
                  v372 = *(_QWORD *)(i38 + 2104);
                  v373 = *(_QWORD *)(i38 + 2680);
                  v374 = (_QWORD *)(v371 + i38);
                  v375 = v371 + i38 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v371) >> 3);
                  while ( v374 != (_QWORD *)v375 )
                  {
                    *v374 ^= v373;
                    v373 = ((v372 ^ *v374++) + __ROR8__(v373, v373 & 0x3F)) ^ 0xEFA;
                  }
                  *(_DWORD *)(i38 + 2524) &= ~0x200000u;
                  if ( v373 != *(_QWORD *)(i38 + 2688) )
                  {
                    v376 = *(_DWORD *)(i38 + 2052);
                    v377 = *(_QWORD *)(i38 + 1416);
                    *(_QWORD *)v377 = i38;
                    *(_DWORD *)(v377 + 16) = v376;
                    if ( !*(_DWORD *)(i38 + 2328) )
                      *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v373 ^ *(_QWORD *)(i38 + 2688);
                    ProbeAndFlag1(i38, 0LL, v373, 256LL);
                  }
                }
              }
            }
          }
        }
        (*(void (__fastcall **)(_BYTE *))(i38 + 424))(v2620);
        *(_DWORD *)(i38 + 2120) += *((_DWORD *)v212 + 6) << 15;
        goto LABEL_406;
      case 8:
        v302 = *((_QWORD *)v212 + 3);
        if ( *(_WORD *)(v302 + *(_QWORD *)(i38 + 1792) + *(_QWORD *)(i38 + 1840)) != *((_WORD *)v212 + 17)
          && !*(_DWORD *)(i38 + 2328) )
        {
          *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(i38 + 2344) = v212 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(i38 + 2352) = *(int *)v212;
          *(_QWORD *)(i38 + 2360) = v302;
          *(_DWORD *)(i38 + 2328) = 1;
          v303 = *(_DWORD *)(i38 + 2520);
          if ( (v303 & 0x20000000) == 0 && (*(_DWORD *)(i38 + 2524) & 0x200000) != 0 && (v303 & 1) != 0 )
          {
            v304 = *(unsigned int *)(i38 + 2676);
            v305 = *(_QWORD *)(i38 + 2104);
            v306 = *(_QWORD *)(i38 + 2680);
            v307 = (_QWORD *)(v304 + i38);
            v308 = v304 + i38 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v304) >> 3);
            while ( v307 != (_QWORD *)v308 )
            {
              *v307 ^= v306;
              v306 = ((v305 ^ *v307++) + __ROR8__(v306, v306 & 0x3F)) ^ 0xEFA;
            }
            *(_DWORD *)(i38 + 2524) &= ~0x200000u;
            if ( v306 != *(_QWORD *)(i38 + 2688) )
            {
              v309 = *(_DWORD *)(i38 + 2052);
              v310 = *(_QWORD *)(i38 + 1416);
              *(_QWORD *)v310 = i38;
              *(_DWORD *)(v310 + 16) = v309;
              if ( !*(_DWORD *)(i38 + 2328) )
                *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v306 ^ *(_QWORD *)(i38 + 2688);
              ProbeAndFlag1(i38, 0LL, v306, 256LL);
            }
          }
        }
        if ( (*((_WORD *)v212 + 17) & *(_WORD *)(i38 + 1848)) == 0
          && *(_QWORD *)(v302 + *(_QWORD *)(i38 + 1800)) != v302 + *(_QWORD *)(i38 + 1800)
          && !*(_DWORD *)(i38 + 2328) )
        {
          *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(i38 + 2344) = v212 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(i38 + 2352) = *(int *)v212;
          *(_QWORD *)(i38 + 2360) = v302;
          *(_DWORD *)(i38 + 2328) = 1;
          v311 = *(_DWORD *)(i38 + 2520);
          if ( (v311 & 0x20000000) == 0 && (*(_DWORD *)(i38 + 2524) & 0x200000) != 0 && (v311 & 1) != 0 )
          {
            v312 = *(unsigned int *)(i38 + 2676);
            v313 = *(_QWORD *)(i38 + 2104);
            v314 = *(_QWORD *)(i38 + 2680);
            v315 = (_QWORD *)(v312 + i38);
            v316 = v312 + i38 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v312) >> 3);
            while ( v315 != (_QWORD *)v316 )
            {
              *v315 ^= v314;
              v314 = ((v313 ^ *v315++) + __ROR8__(v314, v314 & 0x3F)) ^ 0xEFA;
            }
            *(_DWORD *)(i38 + 2524) &= ~0x200000u;
            if ( v314 != *(_QWORD *)(i38 + 2688) )
            {
              v317 = *(_DWORD *)(i38 + 2052);
              v318 = *(_QWORD *)(i38 + 1416);
              *(_QWORD *)v318 = i38;
              *(_DWORD *)(v318 + 16) = v317;
              if ( !*(_DWORD *)(i38 + 2328) )
                *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v314 ^ *(_QWORD *)(i38 + 2688);
              ProbeAndFlag1(i38, 0LL, v314, 256LL);
            }
          }
        }
        v319 = (_QWORD *)*((_QWORD *)v212 + 1);
        v320 = *((unsigned int *)v212 + 4);
        v321 = v319;
        *(_DWORD *)(i38 + 2120) += v320;
        v322 = (const char *)v319;
        v323 = *(_DWORD *)(i38 + 2100);
        v324 = *(_QWORD *)(i38 + 2104);
        if ( v319 < (_QWORD *)((char *)v319 + v320) )
        {
          do
          {
            _mm_prefetch(v322, 0);
            v322 += 64;
          }
          while ( v322 < (const char *)v319 + v320 );
        }
        v325 = *(_QWORD *)(i38 + 2104);
        v326 = (unsigned int)v320 >> 7;
        if ( (unsigned int)v320 >> 7 )
        {
          do
          {
            v327 = 8LL;
            do
            {
              v328 = v321[1] ^ __ROL8__(*v321 ^ v325, v323);
              v321 += 2;
              v325 = __ROL8__(v328, v323);
              --v327;
            }
            while ( v327 );
            v329 = (__ROL8__(v324 ^ ((char *)v321 - (char *)v319), 17) ^ v324 ^ (unsigned __int64)((char *)v321
                                                                                                 - (char *)v319))
                 * (unsigned __int128)0x7010008004002001uLL;
            v2617 = *((_QWORD *)&v329 + 1);
            v323 = (BYTE8(v329) ^ (unsigned __int8)(v329 ^ v323)) & 0x3F;
            if ( !v323 )
              LOBYTE(v323) = 1;
            --v326;
          }
          while ( v326 );
          i38 = v2426;
        }
        v330 = v320 & 0x7F;
        if ( v330 >= 8 )
        {
          v331 = (unsigned __int64)v330 >> 3;
          do
          {
            v325 = __ROL8__(*v321++ ^ v325, v323);
            v330 -= 8;
            --v331;
          }
          while ( v331 );
        }
        for ( m = 0LL; v330; --v330 )
        {
          v332 = *(unsigned __int8 *)v321;
          v321 = (_QWORD *)((char *)v321 + 1);
          v325 = __ROL8__(v332 ^ v325, v323);
        }
        for ( i28 = v325; ; LODWORD(v325) = i28 ^ v325 )
        {
          i28 >>= 31;
          if ( !i28 )
            break;
        }
        v334 = v325 & 0x7FFFFFFF;
        v335 = 0;
        if ( v334 != *((_DWORD *)v212 + 5) )
        {
          if ( !*(_DWORD *)v212 )
            v335 = *((_DWORD *)v212 + 6) != 0;
          v336 = *((unsigned int *)v212 + 4);
          v337 = *((_QWORD *)v212 + 1);
          if ( *((_DWORD *)v212 + 4) )
          {
            v338 = 64LL;
            if ( (*(_DWORD *)(i38 + 2524) & 0x40) != 0 )
            {
              v339 = KeGetCurrentIrql();
              __writecr8(2uLL);
              v340 = v337 & 0xFFFFFFFFFFFFF000uLL;
              v2425 = (v337 + v336 - 1) | 0xFFF;
              v341 = (v337 & 0xFFFFFFFFFFFFF000uLL) - 1;
              while ( 1 )
              {
                while ( 1 )
                {
                  v342 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(i38 + 1128))(
                           v340,
                           0LL,
                           v338,
                           v321);
                  if ( v342 == -1073741267 )
                    break;
                  if ( v342 < 0 )
                  {
LABEL_527:
                    __writecr8(v339);
                    v212 = v2424;
                    m = 0LL;
                    goto LABEL_528;
                  }
LABEL_518:
                  v340 += 4096LL;
                  v341 += 4096LL;
                  if ( v341 == v2425 )
                  {
                    __writecr8(v339);
                    v212 = v2424;
                    m = 0LL;
                    goto LABEL_520;
                  }
                }
                if ( v335 )
                  goto LABEL_527;
                if ( v339 > 1u )
                  goto LABEL_518;
                __writecr8(v339);
                __writecr8(2uLL);
              }
            }
          }
LABEL_528:
          if ( !*(_DWORD *)(i38 + 2328) )
            *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v334 ^ (unsigned __int64)*((unsigned int *)v212 + 5);
          v351 = *((_QWORD *)v212 + 1);
          if ( !*(_DWORD *)(i38 + 2328) )
          {
            *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(i38 + 2344) = v212 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(i38 + 2352) = *(int *)v212;
            *(_QWORD *)(i38 + 2360) = v351;
            *(_DWORD *)(i38 + 2328) = 1;
            v352 = *(_DWORD *)(i38 + 2520);
            if ( (v352 & 0x20000000) == 0 && (*(_DWORD *)(i38 + 2524) & 0x200000) != 0 && (v352 & 1) != 0 )
            {
              v353 = *(unsigned int *)(i38 + 2676);
              v354 = *(_QWORD *)(i38 + 2104);
              v355 = *(_QWORD *)(i38 + 2680);
              v356 = (_QWORD *)(v353 + i38);
              v357 = v353 + i38 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v353) >> 3);
              while ( v356 != (_QWORD *)v357 )
              {
                *v356 ^= v355;
                v355 = ((v354 ^ *v356++) + __ROR8__(v355, v355 & 0x3F)) ^ 0xEFA;
              }
              *(_DWORD *)(i38 + 2524) &= ~0x200000u;
              if ( v355 != *(_QWORD *)(i38 + 2688) )
              {
                v358 = *(_DWORD *)(i38 + 2052);
                v359 = *(_QWORD *)(i38 + 1416);
                *(_QWORD *)v359 = i38;
                *(_DWORD *)(v359 + 16) = v358;
                if ( !*(_DWORD *)(i38 + 2328) )
                  *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v355 ^ *(_QWORD *)(i38 + 2688);
                ProbeAndFlag1(i38, 0LL, v355, 256LL);
              }
            }
          }
        }
LABEL_520:
        v2511 = v212 + 48;
        v2510[0] = *((_WORD *)v212 + 16);
        v2510[1] = v2510[0];
        v2423 = &v2473;
        v343 = *(_QWORD *)(i38 + 1280);
        LOBYTE(v2422) = 0;
        if ( (*(int (__fastcall **)(_WORD *, _QWORD, _QWORD, _QWORD, __int64, _DWORD, _QWORD, __int64 *))(i38 + 504))(
               v2510,
               0LL,
               0LL,
               0LL,
               v343,
               v2422,
               0LL,
               &v2473) < 0 )
          goto LABEL_405;
        v344 = v2473;
        if ( v2473 != *((_QWORD *)v212 + 3) && !*(_DWORD *)(i38 + 2328) )
        {
          *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(i38 + 2344) = v212 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(i38 + 2352) = *(int *)v212;
          *(_QWORD *)(i38 + 2360) = v344;
          *(_DWORD *)(i38 + 2328) = 1;
          v345 = *(_DWORD *)(i38 + 2520);
          if ( (v345 & 0x20000000) == 0 && (*(_DWORD *)(i38 + 2524) & 0x200000) != 0 && (v345 & 1) != 0 )
          {
            v346 = *(unsigned int *)(i38 + 2676);
            v347 = *(_QWORD *)(i38 + 2104);
            v348 = *(_QWORD *)(i38 + 2680);
            v349 = (_QWORD *)(v346 + i38);
            v350 = v346 + i38 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v346) >> 3);
            while ( v349 != (_QWORD *)v350 )
            {
              *v349 ^= v348;
              v348 = ((v347 ^ *v349++) + __ROR8__(v348, v348 & 0x3F)) ^ 0xEFA;
            }
            *(_DWORD *)(i38 + 2524) &= ~0x200000u;
            if ( v348 != *(_QWORD *)(i38 + 2688) )
            {
              v360 = *(_DWORD *)(i38 + 2052);
              v361 = *(_QWORD *)(i38 + 1416);
              *(_QWORD *)v361 = i38;
              *(_DWORD *)(v361 + 16) = v360;
              if ( !*(_DWORD *)(i38 + 2328) )
                *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v348 ^ *(_QWORD *)(i38 + 2688);
              ProbeAndFlag1(i38, 0LL, v348, 256LL);
            }
          }
        }
        goto LABEL_547;
      case 10:
        v268 = (int *)v2424;
        v269 = (unsigned int *)&v212[16 * *(unsigned int *)(i38 + 2116) + 48];
        v270 = (unsigned __int64)&v212[16 * *((unsigned int *)v212 + 7) + 48];
        v2425 = v270;
        *((_QWORD *)&i29 + 1) = 0LL;
        while ( 1 )
        {
          if ( (*v269 & 0x80000000) != 0 )
            goto LABEL_456;
          v271 = *((_QWORD *)v269 + 1);
          v272 = v269[1];
          v273 = (_QWORD *)v271;
          *(_DWORD *)(i38 + 2120) += v272;
          v274 = (const char *)v271;
          v275 = *(_DWORD *)(i38 + 2100);
          v276 = *(_QWORD *)(i38 + 2104);
          v2432 = v271;
          if ( v271 < v272 + v271 )
          {
            do
            {
              _mm_prefetch(v274, 0);
              v274 += 64;
            }
            while ( (unsigned __int64)v274 < v272 + v271 );
          }
          v277 = v276;
          v278 = (unsigned int)v272 >> 7;
          if ( (unsigned int)v272 >> 7 )
          {
            do
            {
              v279 = 8LL;
              do
              {
                v280 = v273[1] ^ __ROL8__(*v273 ^ v277, v275);
                v273 += 2;
                v277 = __ROL8__(v280, v275);
                --v279;
              }
              while ( v279 );
              v281 = __ROL8__(v276 ^ ((unsigned __int64)v273 - v271), 17) ^ v276 ^ ((unsigned __int64)v273 - v271);
              v2616 = (v281 * (unsigned __int128)0x7010008004002001uLL) >> 64;
              v275 = ((unsigned __int8)(v2616 ^ v281) ^ (unsigned __int8)v275) & 0x3F;
              if ( !v275 )
                LOBYTE(v275) = 1;
              --v278;
            }
            while ( v278 );
            i38 = v2426;
            v270 = v2425;
          }
          v94 = 1LL;
          v282 = v272 & 0x7F;
          if ( v282 >= 8 )
          {
            v283 = (unsigned __int64)(v272 & 0x7F) >> 3;
            do
            {
              v277 = __ROL8__(*v273++ ^ v277, v275);
              v282 -= 8;
              --v283;
            }
            while ( v283 );
          }
          if ( v282 )
          {
            do
            {
              v284 = *(unsigned __int8 *)v273;
              v273 = (_QWORD *)((char *)v273 + 1);
              v277 = __ROL8__(v284 ^ v277, v275);
              --v282;
            }
            while ( v282 );
            i38 = v2426;
          }
          for ( i29 = v277 >> 31; (_QWORD)i29; *(_QWORD *)&i29 = (unsigned __int64)i29 >> 31 )
            LODWORD(v277) = i29 ^ v277;
          v285 = v277 & 0x7FFFFFFF;
          if ( v285 == (*v269 & 0x7FFFFFFF) )
            goto LABEL_456;
          v286 = (unsigned int)v272;
          if ( !(_DWORD)v272 )
            goto LABEL_440;
          v287 = 64LL;
          if ( (*(_DWORD *)(i38 + 2524) & 0x40) == 0 )
            goto LABEL_440;
          v288 = KeGetCurrentIrql();
          __writecr8(2uLL);
          v289 = v271 & 0xFFFFFFFFFFFFF000uLL;
          v2427 = (v286 + v271 - 1) | 0xFFF;
          v290 = (v271 & 0xFFFFFFFFFFFFF000uLL) - 1;
          while ( 1 )
          {
            while ( 1 )
            {
              v291 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, unsigned __int64))(i38 + 1128))(
                       v289,
                       0LL,
                       v287,
                       v94);
              if ( v291 != -1073741267 )
                break;
              if ( v288 > 1u )
              {
                *((_QWORD *)&i29 + 1) = 0LL;
                goto LABEL_447;
              }
              __writecr8(v288);
              __writecr8(2uLL);
            }
            *((_QWORD *)&i29 + 1) = 0LL;
            if ( v291 < 0 )
              break;
LABEL_447:
            v289 += 4096LL;
            v290 += 4096LL;
            if ( v290 == v2427 )
            {
              __writecr8(v288);
              v270 = v2425;
              goto LABEL_456;
            }
          }
          __writecr8(v288);
          v271 = v2432;
          v270 = v2425;
LABEL_440:
          v292 = *v269;
          LODWORD(v292) = v292 & 0x7FFFFFFF;
          if ( !*(_DWORD *)(i38 + 2328) )
          {
            *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v292 ^ v285;
            if ( !*(_DWORD *)(i38 + 2328) )
            {
              *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(i38 + 2344) = (char *)v268 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(i38 + 2352) = *v268;
              *(_QWORD *)(i38 + 2360) = v271;
              *(_DWORD *)(i38 + 2328) = 1;
              v293 = *(_DWORD *)(i38 + 2520);
              if ( (v293 & 0x20000000) == 0 && (*(_DWORD *)(i38 + 2524) & 0x200000) != 0 && (v293 & 1) != 0 )
              {
                v294 = *(unsigned int *)(i38 + 2676);
                v295 = *(_QWORD *)(i38 + 2104);
                v296 = *(_QWORD *)(i38 + 2680);
                v297 = (_QWORD *)(v294 + i38);
                v94 = v294 + i38 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v294) >> 3);
                while ( v297 != (_QWORD *)v94 )
                {
                  *v297 ^= v296;
                  v296 = ((v295 ^ *v297++) + __ROR8__(v296, v296 & 0x3F)) ^ 0xEFA;
                }
                *(_DWORD *)(i38 + 2524) &= ~0x200000u;
                if ( v296 != *(_QWORD *)(i38 + 2688) )
                {
                  v298 = *(_QWORD *)(i38 + 1416);
                  v299 = *(_DWORD *)(i38 + 2052);
                  *(_QWORD *)v298 = i38;
                  *(_DWORD *)(v298 + 16) = v299;
                  if ( !*(_DWORD *)(i38 + 2328) )
                    *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v296 ^ *(_QWORD *)(i38 + 2688);
                  ProbeAndFlag1(i38, 0LL, v296, 256LL);
                }
                *((_QWORD *)&i29 + 1) = 0LL;
              }
            }
          }
LABEL_456:
          v269 += 4;
          v300 = v269 == (unsigned int *)v270;
          if ( (unsigned __int64)v269 >= v270 )
          {
LABEL_459:
            if ( v300 )
              LODWORD(v301) = 0;
            else
              v301 = ((char *)v269 - (v2424 + 48)) >> 4;
            *(_DWORD *)(i38 + 2116) = v301;
            goto LABEL_464;
          }
          if ( *(_DWORD *)(i38 + 2120) >= *(_DWORD *)(i38 + 2124) )
          {
            v300 = v269 == (unsigned int *)v270;
            goto LABEL_459;
          }
        }
    }
    if ( v219 != 13 )
    {
LABEL_2408:
      v1585 = v219 - 2;
      if ( v1585 )
      {
        v1586 = v1585 - 1;
        if ( !v1586 )
        {
          (*(void (__fastcall **)(_BYTE *, _QWORD))(i38 + 432))(v2627, *((unsigned int *)v212 + 10));
          (*(void (__fastcall **)(_BYTE *, _BYTE *))(i38 + 480))(v2627, v2628);
          KiGetGdtIdt(&v2484, v2641);
          v1616 = v2485;
          v1617 = *((unsigned int *)v212 + 4);
          if ( (*(_BYTE *)(i38 + 2203) & 2) != 0 )
          {
            v1618 = *(_QWORD *)(i38 + 2304);
            v1619 = 304;
            v1620 = (_QWORD *)v1618;
            v1621 = 38LL;
            do
            {
              *v1620 = 0LL;
              v1619 -= 8;
              ++v1620;
              --v1621;
            }
            while ( v1621 );
            for ( ; v1619; --v1619 )
            {
              *(_BYTE *)v1620 = 0;
              v1620 = (_QWORD *)((char *)v1620 + 1);
            }
            *(_OWORD *)(v1618 + 16) = *(_OWORD *)(i38 + 2152);
            *(_OWORD *)(v1618 + 32) = *(_OWORD *)(i38 + 2168);
            *(_OWORD *)(v1618 + 288) = *(_OWORD *)(i38 + 2184);
            v2497 = 303;
            v2498 = v1618;
            *(_WORD *)(v1618 + 16) = i38 + 2200;
            v2559 = i38 + 2200;
            *(_WORD *)(v1618 + 22) = (unsigned int)(i38 + 2200) >> 16;
            *(_DWORD *)(v1618 + 24) = (unsigned __int64)(i38 + 2200) >> 32;
            _disable();
            __sidt(v2516);
            __lidt(&v2497);
            __writedr(7u, 0LL);
            *(_WORD *)(v1618 + 16) = i38 + 2206;
            *(_WORD *)(v1618 + 22) = (unsigned int)(i38 + 2206) >> 16;
            *(_DWORD *)(v1618 + 24) = (unsigned __int64)(i38 + 2206) >> 32;
            if ( (*(_BYTE *)(i38 + 2203) & 0x20) != 0 )
            {
              *(_WORD *)(i38 + 2250) = KiGetSs();
              __writedr(0, i38 + 2250);
              __writedr(7u, 0x70001uLL);
              *(_QWORD *)(i38 + 2312) = KiErrataSkx55Present(i38 + 2250);
              __writedr(7u, 0LL);
              __writedr(0, 0LL);
            }
            else
            {
              *(_QWORD *)(i38 + 2312) = KiErrata704Present();
            }
            *(_DWORD *)(i38 + 2320) = KeGetPcr()->Prcb.Number;
            __lidt(v2516);
            _enable();
          }
          Ldtr = (unsigned __int16)KiGetLdtr();
          Tr = KiGetTr();
          *(_DWORD *)(i38 + 2120) += v1617;
          v1624 = *(_DWORD *)(i38 + 2100);
          v1625 = v1616;
          v1626 = *(_QWORD *)(i38 + 2104);
          v1627 = Tr;
          v1628 = (const char *)v1616;
          if ( v1616 < (_QWORD *)((char *)v1616 + v1617) )
          {
            do
            {
              _mm_prefetch(v1628, 0);
              v1628 += 64;
            }
            while ( v1628 < (const char *)v1616 + v1617 );
          }
          v1629 = *(_QWORD *)(i38 + 2104);
          v1630 = (unsigned int)v1617 >> 7;
          if ( (unsigned int)v1617 >> 7 )
          {
            do
            {
              v1631 = 8LL;
              do
              {
                v1632 = v1625[1] ^ __ROL8__(*v1625 ^ v1629, v1624);
                v1625 += 2;
                v1629 = __ROL8__(v1632, v1624);
                --v1631;
              }
              while ( v1631 );
              v1633 = __ROL8__(v1626 ^ ((char *)v1625 - (char *)v1616), 17) ^ v1626 ^ ((char *)v1625 - (char *)v1616);
              v2560 = (v1633 * (unsigned __int128)0x7010008004002001uLL) >> 64;
              v1624 = ((unsigned __int8)(v2560 ^ v1633) ^ (unsigned __int8)v1624) & 0x3F;
              if ( !v1624 )
                LOBYTE(v1624) = 1;
              --v1630;
            }
            while ( v1630 );
            i38 = v2426;
          }
          v1634 = v1617 & 0x7F;
          if ( v1634 >= 8 )
          {
            v1635 = (unsigned __int64)v1634 >> 3;
            do
            {
              v1629 = __ROL8__(*v1625++ ^ v1629, v1624);
              v1634 -= 8;
              --v1635;
            }
            while ( v1635 );
          }
          m = 0LL;
          if ( v1634 )
          {
            do
            {
              v1636 = *(unsigned __int8 *)v1625;
              v1625 = (_QWORD *)((char *)v1625 + 1);
              v1629 = __ROL8__(v1636 ^ v1629, v1624);
              --v1634;
            }
            while ( v1634 );
            i38 = v2426;
          }
          for ( i30 = v1629; ; LODWORD(v1629) = i30 ^ v1629 )
          {
            i30 >>= 31;
            if ( !i30 )
              break;
          }
          v1638 = v1629 & 0x7FFFFFFF;
          (*(void (__fastcall **)(_BYTE *, __int64, _QWORD *))(i38 + 424))(v2628, 1LL, v1625);
          v94 = (unsigned __int64)v2424;
          if ( v1638 != *((_DWORD *)v2424 + 5) || v2484 != *((_WORD *)v2424 + 22) || (_WORD)Ldtr || (_WORD)v1627 != 64 )
          {
            if ( (*(_DWORD *)(i38 + 2520) & 0x20000000) != 0 )
            {
              v1639 = *(_QWORD **)(i38 + 2760);
              v1640 = 48;
              v1641 = 6LL;
              do
              {
                v1640 -= 8;
                *v1639 = *(_QWORD *)v94;
                v94 += 8LL;
                ++v1639;
                --v1641;
              }
              while ( v1641 );
              if ( v1640 )
              {
                do
                {
                  v1642 = *(_BYTE *)v94++;
                  *(_BYTE *)v1639 = v1642;
                  v1639 = (_QWORD *)((char *)v1639 + 1);
                  --v1640;
                }
                while ( v1640 );
                i38 = v2426;
              }
              v94 = *(_QWORD *)(i38 + 2760);
            }
            *((_QWORD *)&i29 + 1) = v1638;
            *(_QWORD *)(v94 + 24) = v2485;
            *(_QWORD *)(v94 + 32) = v1638;
            if ( (_WORD)Ldtr )
            {
              *(_QWORD *)(v94 + 24) = Ldtr;
            }
            else if ( (_WORD)v1627 != 64 )
            {
              *(_QWORD *)(v94 + 24) = v1627;
            }
            if ( !*(_DWORD *)(i38 + 2328) )
              *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v1638 ^ (unsigned __int64)*(unsigned int *)(v94 + 20);
            v1643 = *(_QWORD *)(v94 + 8);
            if ( !*(_DWORD *)(i38 + 2328) )
            {
              *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(i38 + 2344) = v94 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(i38 + 2352) = *(int *)v94;
              *(_QWORD *)(i38 + 2360) = v1643;
              *(_DWORD *)(i38 + 2328) = 1;
              v1644 = *(_DWORD *)(i38 + 2520);
              if ( (v1644 & 0x20000000) == 0 && (*(_DWORD *)(i38 + 2524) & 0x200000) != 0 && (v1644 & 1) != 0 )
              {
                v1645 = *(unsigned int *)(i38 + 2676);
                v1646 = *(_QWORD *)(i38 + 2104);
                v1647 = *(_QWORD *)(i38 + 2680);
                *((_QWORD *)&i29 + 1) = v1645 + i38;
                v94 = v1645 + i38 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v1645) >> 3);
                while ( *((_QWORD *)&i29 + 1) != v94 )
                {
                  **((_QWORD **)&i29 + 1) ^= v1647;
                  v1647 = ((v1646 ^ **((_QWORD **)&i29 + 1)) + __ROR8__(v1647, v1647 & 0x3F)) ^ 0xEFA;
                  *((_QWORD *)&i29 + 1) += 8LL;
                }
                *(_DWORD *)(i38 + 2524) &= ~0x200000u;
                if ( v1647 != *(_QWORD *)(i38 + 2688) )
                {
                  v1648 = *(_DWORD *)(i38 + 2052);
                  v1649 = *(_QWORD *)(i38 + 1416);
                  *(_QWORD *)v1649 = i38;
                  *(_DWORD *)(v1649 + 16) = v1648;
                  if ( !*(_DWORD *)(i38 + 2328) )
                    *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v1647 ^ *(_QWORD *)(i38 + 2688);
                  ProbeAndFlag1(i38, 0LL, v1647, 256LL);
                }
              }
            }
          }
          *(_DWORD *)(i38 + 2120) += 0x8000;
          goto LABEL_405;
        }
        if ( v1586 != 20 )
        {
          if ( *(_DWORD *)(i38 + 2328) )
            goto LABEL_406;
          *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(i38 + 2344) = v212 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(i38 + 2352) = 257LL;
          *(_QWORD *)(i38 + 2360) = 0LL;
          *(_DWORD *)(i38 + 2328) = 1;
          v1587 = *(_DWORD *)(i38 + 2520);
          if ( (v1587 & 0x20000000) != 0 )
            goto LABEL_406;
          if ( (*(_DWORD *)(i38 + 2524) & 0x200000) == 0 )
            goto LABEL_406;
          if ( (v1587 & 1) == 0 )
            goto LABEL_406;
          v1588 = *(unsigned int *)(i38 + 2676);
          v1589 = *(_QWORD *)(i38 + 2104);
          v1187 = *(_QWORD *)(i38 + 2680);
          *((_QWORD *)&i29 + 1) = v1588 + i38;
          v94 = v1588 + i38 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v1588) >> 3);
          while ( *((_QWORD *)&i29 + 1) != v94 )
          {
            **((_QWORD **)&i29 + 1) ^= v1187;
            v1187 = ((v1589 ^ **((_QWORD **)&i29 + 1)) + __ROR8__(v1187, v1187 & 0x3F)) ^ 0xEFA;
            *((_QWORD *)&i29 + 1) += 8LL;
          }
          *(_DWORD *)(i38 + 2524) &= ~0x200000u;
          if ( v1187 == *(_QWORD *)(i38 + 2688) )
            goto LABEL_406;
LABEL_1798:
          v1188 = *(_DWORD *)(i38 + 2052);
          v1189 = *(_QWORD *)(i38 + 1416);
          *(_QWORD *)v1189 = i38;
          *(_DWORD *)(v1189 + 16) = v1188;
          if ( !*(_DWORD *)(i38 + 2328) )
          {
            v1190 = v1187 ^ *(_QWORD *)(i38 + 2688);
LABEL_1800:
            *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v1190;
            goto LABEL_1801;
          }
          goto LABEL_1801;
        }
        (*(void (__fastcall **)(_BYTE *, _QWORD))(i38 + 432))(v2625, *((unsigned int *)v212 + 10));
        (*(void (__fastcall **)(_BYTE *, _BYTE *))(i38 + 480))(v2625, v2626);
        v1590 = *(_QWORD *)(i38 + 2648);
        if ( v1590 )
        {
          v1591 = *(_DWORD *)(v1590 + 800);
        }
        else
        {
          v1592 = __readmsr(0x832u);
          v1591 = v1592;
        }
        v1593 = *(_QWORD *)(i38 + 2648);
        if ( v1593 )
        {
          v1594 = *(_DWORD *)(v1593 + 832);
        }
        else
        {
          v1595 = __readmsr(0x834u);
          v1594 = v1595;
        }
        (*(void (__fastcall **)(_BYTE *))(i38 + 424))(v2626);
        if ( (*(_BYTE *)(i38 + 2203) & 0x10) != 0 )
        {
          _disable();
          v1596 = *(struct _KPRCB **)(i38 + 2304);
          v1597 = 38LL;
          v1598 = 304;
          v1599 = v1596;
          do
          {
            *(_QWORD *)&v1599->MxCsr = 0LL;
            v1598 -= 8;
            v1599 = (struct _KPRCB *)((char *)v1599 + 8);
            --v1597;
          }
          while ( v1597 );
          if ( v1598 )
          {
            v1597 = 0xFFFFFFFFLL;
            do
            {
              LOBYTE(v1599->MxCsr) = 0;
              v1599 = (struct _KPRCB *)((char *)v1599 + 1);
              --v1598;
            }
            while ( v1598 );
          }
          *(_OWORD *)&v1596->NextThread = *(_OWORD *)(i38 + 2152);
          *(_OWORD *)&v1596->NestingLevel = *(_OWORD *)(i38 + 2168);
          *(_OWORD *)&v1596->ProcessorState.SpecialRegisters.KernelDr0 = *(_OWORD *)(i38 + 2184);
          v2495 = 303;
          v2496 = v1596;
          LOWORD(v1596->NextThread) = i38 + 2200;
          v1600 = (unsigned __int64)(i38 + 2200) >> 16;
          v2558 = i38 + 2200;
          HIWORD(v1596->NextThread) = v1600;
          LODWORD(v1596->IdleThread) = (unsigned __int64)(i38 + 2200) >> 32;
          __sidt(v2522);
          __lidt(&v2495);
          if ( (*(_DWORD *)(i38 + 2524) & 0x20000) == 0 )
          {
            v1596 = KeGetCurrentPrcb();
            v1600 = i38 - 0x5C5FC0A76E374B18LL;
            **(_QWORD **)(i38 + 1208) = i38 - 0x5C5FC0A76E374B18LL;
            **(_QWORD **)(i38 + 1216) = v1596;
            **(_QWORD **)(i38 + 1224) = 0LL;
            **(_QWORD **)(i38 + 1232) = 277LL;
          }
          KiErrata361Present(v1600, v1596, v1597, 1LL);
          if ( (*(_DWORD *)(i38 + 2524) & 0x20000) == 0 )
          {
            **(_QWORD **)(i38 + 1208) = 0xA3A03F5891C8B4E8uLL;
            **(_QWORD **)(i38 + 1216) = 0LL;
            **(_QWORD **)(i38 + 1224) = 0LL;
            **(_QWORD **)(i38 + 1232) = 0LL;
          }
          __lidt(v2522);
          _enable();
        }
        v1601 = *((unsigned int *)v212 + 6);
        if ( (v1591 & *((_DWORD *)v212 + 7)) != (_DWORD)v1601
          || (v1591 & 0x10000) == 0 && (unsigned __int8)v1591 != 209 && (unsigned int)(unsigned __int8)v1591 - 253 >= 2 )
        {
          *((_QWORD *)&i29 + 1) = v1601 | ((unsigned __int64)*((unsigned int *)v212 + 10) << 48) | 0x32000000000LL;
          if ( !*(_DWORD *)(i38 + 2328) )
          {
            *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v1601 ^ v1591;
            if ( !*(_DWORD *)(i38 + 2328) )
            {
              v94 = 0xB3B74BDEE4453415uLL;
              *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(i38 + 2344) = v212 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(i38 + 2352) = *(int *)v212;
              *(_QWORD *)(i38 + 2360) = *((_QWORD *)&i29 + 1);
              *(_DWORD *)(i38 + 2328) = 1;
              v1602 = *(_DWORD *)(i38 + 2520);
              if ( (v1602 & 0x20000000) != 0 || (*(_DWORD *)(i38 + 2524) & 0x200000) == 0 || (v1602 & 1) == 0 )
              {
LABEL_2454:
                v1609 = *((unsigned int *)v212 + 8);
                if ( (v1594 & *((_DWORD *)v212 + 9)) != (_DWORD)v1609
                  || (v1594 & 0x10000) == 0
                  && (unsigned __int8)v1594 != 209
                  && (unsigned int)(unsigned __int8)v1594 - 253 >= 2 )
                {
                  *((_QWORD *)&i29 + 1) = v1609 | ((unsigned __int64)*((unsigned int *)v212 + 10) << 48) | 0x34000000000LL;
                  if ( !*(_DWORD *)(i38 + 2328) )
                  {
                    *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v1594 ^ v1609;
                    if ( !*(_DWORD *)(i38 + 2328) )
                    {
                      *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(i38 + 2344) = v212 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(i38 + 2352) = *(int *)v212;
                      *(_QWORD *)(i38 + 2360) = *((_QWORD *)&i29 + 1);
                      *(_DWORD *)(i38 + 2328) = 1;
                      v1610 = *(_DWORD *)(i38 + 2520);
                      if ( (v1610 & 0x20000000) == 0 && (*(_DWORD *)(i38 + 2524) & 0x200000) != 0 && (v1610 & 1) != 0 )
                      {
                        v1611 = *(unsigned int *)(i38 + 2676);
                        v1612 = *(_QWORD *)(i38 + 2104);
                        v1613 = *(_QWORD *)(i38 + 2680);
                        *((_QWORD *)&i29 + 1) = v1611 + i38;
                        v94 = v1611 + i38 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v1611) >> 3);
                        while ( *((_QWORD *)&i29 + 1) != v94 )
                        {
                          **((_QWORD **)&i29 + 1) ^= v1613;
                          v1613 = ((v1612 ^ **((_QWORD **)&i29 + 1)) + __ROR8__(v1613, v1613 & 0x3F)) ^ 0xEFA;
                          *((_QWORD *)&i29 + 1) += 8LL;
                        }
                        *(_DWORD *)(i38 + 2524) &= ~0x200000u;
                        if ( v1613 != *(_QWORD *)(i38 + 2688) )
                        {
                          v1614 = *(_DWORD *)(i38 + 2052);
                          v1615 = *(_QWORD *)(i38 + 1416);
                          *(_QWORD *)v1615 = i38;
                          *(_DWORD *)(v1615 + 16) = v1614;
                          if ( !*(_DWORD *)(i38 + 2328) )
                            *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v1613 ^ *(_QWORD *)(i38 + 2688);
                          ProbeAndFlag1(i38, 0LL, v1613, 256LL);
                        }
                      }
                    }
                  }
                }
                *(_DWORD *)(i38 + 2120) += 0x8000;
                goto LABEL_406;
              }
              v1603 = *(unsigned int *)(i38 + 2676);
              v1604 = *(_QWORD *)(i38 + 2104);
              v1605 = *(_QWORD *)(i38 + 2680);
              *((_QWORD *)&i29 + 1) = v1603 + i38;
              v1606 = v1603 + i38 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v1603) >> 3);
              while ( *((_QWORD *)&i29 + 1) != v1606 )
              {
                **((_QWORD **)&i29 + 1) ^= v1605;
                v1605 = ((v1604 ^ **((_QWORD **)&i29 + 1)) + __ROR8__(v1605, v1605 & 0x3F)) ^ 0xEFA;
                *((_QWORD *)&i29 + 1) += 8LL;
              }
              *(_DWORD *)(i38 + 2524) &= ~0x200000u;
              if ( v1605 != *(_QWORD *)(i38 + 2688) )
              {
                v1607 = *(_DWORD *)(i38 + 2052);
                v1608 = *(_QWORD *)(i38 + 1416);
                *(_QWORD *)v1608 = i38;
                *(_DWORD *)(v1608 + 16) = v1607;
                if ( !*(_DWORD *)(i38 + 2328) )
                  *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v1605 ^ *(_QWORD *)(i38 + 2688);
                ProbeAndFlag1(i38, 0LL, v1605, 256LL);
              }
            }
          }
        }
        v94 = 0xB3B74BDEE4453415uLL;
        goto LABEL_2454;
      }
      v1650 = *((unsigned int *)v212 + 10);
      v1651 = *(void (__fastcall **)(_BYTE *, __int64))(i38 + 432);
      v2435 = 0;
      v1651(v2629, v1650);
      (*(void (__fastcall **)(_BYTE *, _BYTE *))(i38 + 480))(v2629, v2630);
      KiGetGdtIdt(v2642, &v2499);
      v1652 = 0;
      v2430 = v2500;
      v1653 = v2500 + 4;
      v2425 = v2500 + 4;
      while ( 1 )
      {
        v1654 = 0LL;
        v2462 = *(_QWORD *)(i38 + 2280);
        v1655 = 0LL;
        v1656 = *(_QWORD *)(i38 + 2288);
        v1657 = *(unsigned int *)(i38 + 2252);
        v1658 = *(unsigned int *)(i38 + 2256);
        v2427 = v1656;
        v2428 = 0LL;
        v2432 = 0LL;
        v1659 = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        v1660 = *(_WORD *)v1653;
        LOWORD(v2455) = *(_WORD *)(v1653 - 4);
        WORD1(v2455) = *(_WORD *)(v1653 + 2);
        v1661 = *(_DWORD *)(v1653 + 4);
        v1662 = *(_QWORD *)(i38 + 1576);
        HIDWORD(v2455) = v1661;
        v1663 = v2455;
        v2672 = v1660;
        v1664 = v1662 + 8LL * v1652;
        if ( v2455 != v1664 )
          break;
        if ( (v1660 & 0x6000) != 0 )
        {
          __writecr8(v1659);
          goto LABEL_2581;
        }
        v1655 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, _QWORD))(i38 + 1136))(
                             v1652,
                             v1664,
                             v1656,
                             0LL);
        if ( !v1655 )
        {
          v1656 = v2427;
          v1655 = -1LL;
          v1666 = v2432;
LABEL_2537:
          v1665 = v2428;
          goto LABEL_2538;
        }
        v1665 = *(_QWORD *)(v1657 + v1655);
        v2428 = v1665;
        if ( v1652 < 0x30 )
        {
          __writecr8(v1659);
LABEL_2580:
          v1654 = v2428;
LABEL_2581:
          v1689 = *(_QWORD *)(i38 + 1416);
          *(_QWORD *)v1689 = v1663;
          *(_DWORD *)(v1689 + 16) = 128;
          if ( v1654 )
          {
            v1690 = *(_QWORD *)(i38 + 1416);
            *(_QWORD *)(v1690 + 8) = v1654;
            *(_DWORD *)(v1690 + 20) = 128;
          }
          v2435 = 1;
          goto LABEL_2550;
        }
        v1666 = *(_QWORD *)(v1658 + v1655);
        v1656 = v2427;
LABEL_2538:
        __writecr8(v1659);
        if ( !v1655 )
        {
          if ( v1663 < v2462 )
            goto LABEL_2580;
          if ( v1663 > v1656 )
            goto LABEL_2580;
          v1667 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD))(i38 + 544))(
                    *(_QWORD *)(i38 + 2296),
                    v2462,
                    (unsigned int)(v2455 - v2462));
          if ( !v1667 || (*(_DWORD *)(v1667 + 36) & 0x2000000) != 0 )
            goto LABEL_2580;
        }
        if ( *(_WORD *)(v2425 - 2) != 16 || (*(_WORD *)v2425 & 0x1F00) != 0xE00 || *(__int16 *)v2425 >= 0 )
          goto LABEL_2580;
        v1668 = (unsigned int *)(*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64 *, _QWORD))(i38 + 624))(
                                  v1663,
                                  &v2462,
                                  0LL);
        if ( v1668 && v2462 + *v1668 == v1663 && v2462 == *(_QWORD *)(i38 + 2280) )
        {
          if ( !v1655 )
            goto LABEL_2550;
        }
        else if ( !v1655 )
        {
          goto LABEL_2580;
        }
        if ( (v2672 & 0x6000) != 0 )
          goto LABEL_2580;
        if ( v1655 != -1 )
        {
          v1687 = (unsigned int *)(*(__int64 (__fastcall **)(__int64, unsigned __int64 *, _QWORD))(i38 + 624))(
                                    v1665,
                                    &v2462,
                                    0LL);
          if ( !v1687 )
            goto LABEL_2580;
          if ( v2462 + *v1687 != v1665 )
            goto LABEL_2580;
          if ( v2462 != *(_QWORD *)(i38 + 2280) )
            goto LABEL_2580;
          v1688 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD))(i38 + 544))(
                    *(_QWORD *)(i38 + 2296),
                    v2462,
                    (unsigned int)(v1665 - v2462));
          if ( !v1688 || (*(_DWORD *)(v1688 + 36) & 0x2000000) != 0 || v1652 == 254 && v1666 != *(_QWORD *)(i38 + 2264) )
            goto LABEL_2580;
        }
LABEL_2550:
        ++v1652;
        v1653 = v2425 + 16;
        v2425 += 16LL;
        if ( v1652 > 0xFF )
        {
          if ( (*(_BYTE *)(i38 + 2203) & 1) != 0 )
          {
            _disable();
            v1669 = 3221225602LL;
            v1670 = __readmsr(0xC0000082);
            v1671 = (struct _KPRCB *)((unsigned __int64)(i38 + 2202) >> 32);
            __writemsr(0xC0000082, i38 + 2202);
            if ( !_bittest((const signed __int32 *)(i38 + 2524), 0x11u) )
            {
              v1671 = KeGetCurrentPrcb();
              v1669 = i38 - 0x5C5FC0A76E374B18LL;
              **(_QWORD **)(i38 + 1208) = i38 - 0x5C5FC0A76E374B18LL;
              **(_QWORD **)(i38 + 1216) = v1671;
              **(_QWORD **)(i38 + 1224) = 3221225602LL;
              **(_QWORD **)(i38 + 1232) = 274LL;
            }
            ((void (__fastcall *)(__int64, struct _KPRCB *))(i38 + 2204))(v1669, v1671);
            if ( !_bittest((const signed __int32 *)(i38 + 2524), 0x11u) )
            {
              **(_QWORD **)(i38 + 1208) = 0xA3A03F5891C8B4E8uLL;
              **(_QWORD **)(i38 + 1216) = 0LL;
              **(_QWORD **)(i38 + 1224) = 0LL;
              **(_QWORD **)(i38 + 1232) = 0LL;
            }
            __writemsr(0xC0000082, v1670);
            _enable();
          }
          v1672 = (_QWORD *)v2430;
          *(_DWORD *)(i38 + 2120) += 848;
          v1673 = v1672;
          v1674 = *(_DWORD *)(i38 + 2100);
          v1675 = (const char *)v1672;
          v1676 = *(_QWORD *)(i38 + 2104);
          if ( v1672 < v1672 + 106 )
          {
            do
            {
              _mm_prefetch(v1675, 0);
              v1675 += 64;
            }
            while ( v1675 < (const char *)v1672 + 848 );
          }
          v103 = 6;
          v1677 = *(_QWORD *)(i38 + 2104);
          v1678 = 6;
          do
          {
            v1679 = 8LL;
            do
            {
              v1680 = v1673[1] ^ __ROL8__(*v1673 ^ v1677, v1674);
              v1673 += 2;
              v1677 = __ROL8__(v1680, v1674);
              --v1679;
            }
            while ( v1679 );
            v1681 = (__ROL8__(v1676 ^ ((char *)v1673 - (char *)v1672), 17) ^ v1676 ^ (unsigned __int64)((char *)v1673 - (char *)v1672))
                  * (unsigned __int128)0x7010008004002001uLL;
            v2561 = *((_QWORD *)&v1681 + 1);
            v1674 = ((unsigned __int8)v1681 ^ (unsigned __int8)(BYTE8(v1681) ^ v1674)) & 0x3F;
            if ( !v1674 )
              LOBYTE(v1674) = 1;
            --v1678;
          }
          while ( v1678 );
          i38 = v2426;
          v1682 = 80;
          v1683 = v2435;
          v1684 = 10LL;
          do
          {
            v1677 = __ROL8__(*v1673++ ^ v1677, v1674);
            v1682 -= 8;
            --v1684;
          }
          while ( v1684 );
          for ( ; v1682; --v1682 )
          {
            v1685 = *(unsigned __int8 *)v1673;
            v1673 = (_QWORD *)((char *)v1673 + 1);
            v1677 = __ROL8__(v1685 ^ v1677, v1674);
          }
          for ( i31 = v1677; ; LODWORD(v1677) = i31 ^ v1677 )
          {
            i31 >>= 31;
            if ( !i31 )
              break;
          }
          v1691 = v1672 + 450;
          v1692 = v1677 & 0x7FFFFFFF;
          v1693 = (const char *)v1691;
          *(_DWORD *)(v2426 + 2120) += 16;
          v1694 = (unsigned __int64)(v1672 + 452);
          v1695 = *(_DWORD *)(i38 + 2100);
          v1696 = *(_QWORD *)(i38 + 2104);
          if ( (unsigned __int64)v1691 < v1694 )
          {
            do
            {
              _mm_prefetch(v1693, 0);
              v1693 += 64;
            }
            while ( (unsigned __int64)v1693 < v1694 );
          }
          v1697 = 2LL;
          v1698 = 16;
          do
          {
            v1696 = __ROL8__(*v1691++ ^ v1696, v1695);
            v1698 -= 8;
            --v1697;
          }
          while ( v1697 );
          for ( ; v1698; --v1698 )
          {
            v1699 = *(unsigned __int8 *)v1691;
            v1691 = (_QWORD *)((char *)v1691 + 1);
            v1696 = __ROL8__(v1699 ^ v1696, v1695);
          }
          for ( i32 = v1696; ; LODWORD(v1696) = i32 ^ v1696 )
          {
            i32 >>= 31;
            if ( !i32 )
              break;
          }
          v1701 = v1696 & 0x7FFFFFFF;
          (*(void (__fastcall **)(_BYTE *, _QWORD *))(i38 + 424))(v2630, v1691);
          v1702 = (int *)v2424;
          *((_QWORD *)&i29 + 1) = *((unsigned int *)v2424 + 5);
          if ( v1692 == DWORD2(i29) && v1701 == *((_QWORD *)v2424 + 3) && v2499 == *((_WORD *)v2424 + 22) && !v1683 )
          {
            m = 0LL;
          }
          else
          {
            if ( v1683 )
            {
              m = 0LL;
            }
            else
            {
              m = 0LL;
              if ( v1701 == *((_QWORD *)v2424 + 3) )
              {
                if ( !*(_DWORD *)(i38 + 2328) )
                {
                  v1703 = *((_QWORD *)&i29 + 1) ^ v1692;
                  goto LABEL_2603;
                }
              }
              else if ( !*(_DWORD *)(i38 + 2328) )
              {
                v1703 = v1701 ^ (unsigned __int64)*((unsigned int *)v2424 + 6);
LABEL_2603:
                *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v1703;
              }
            }
            v1704 = *((_QWORD *)v1702 + 1);
            if ( !*(_DWORD *)(i38 + 2328) )
            {
              *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(i38 + 2344) = (char *)v1702 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(i38 + 2352) = *v1702;
              *(_QWORD *)(i38 + 2360) = v1704;
              *(_DWORD *)(i38 + 2328) = 1;
              v1705 = *(_DWORD *)(i38 + 2520);
              if ( (v1705 & 0x20000000) == 0 && (*(_DWORD *)(i38 + 2524) & 0x200000) != 0 && (v1705 & 1) != 0 )
              {
                v1706 = *(unsigned int *)(i38 + 2676);
                v1707 = *(_QWORD *)(i38 + 2104);
                v1708 = *(_QWORD *)(i38 + 2680);
                v94 = v1706 + i38;
                v1709 = v1706 + i38 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v1706) >> 3);
                while ( v94 != v1709 )
                {
                  *(_QWORD *)v94 ^= v1708;
                  v1708 = ((*(_QWORD *)v94 ^ v1707) + __ROR8__(v1708, v1708 & 0x3F)) ^ 0xEFA;
                  v94 += 8LL;
                }
                *(_DWORD *)(i38 + 2524) &= ~0x200000u;
                if ( v1708 != *(_QWORD *)(i38 + 2688) )
                {
                  v1710 = *(_DWORD *)(i38 + 2052);
                  v1711 = *(_QWORD *)(i38 + 1416);
                  *(_QWORD *)v1711 = i38;
                  *(_DWORD *)(v1711 + 16) = v1710;
                  if ( !*(_DWORD *)(i38 + 2328) )
                    *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v1708 ^ *(_QWORD *)(i38 + 2688);
                  ProbeAndFlag1(i38, 0LL, v1708, 256LL);
                }
              }
            }
          }
          *(_DWORD *)(i38 + 2120) += 0x10000;
          goto LABEL_406;
        }
      }
      v1666 = 0LL;
      goto LABEL_2537;
    }
    v220 = (const char *)*((_QWORD *)v212 + 1);
    v221 = *((unsigned int *)v212 + 4);
    v94 = (unsigned __int64)v220;
    *(_DWORD *)(i38 + 2120) += v221;
    v222 = v220;
    v223 = *(_DWORD *)(i38 + 2100);
    for ( i33 = *(_QWORD *)(i38 + 2104); v222 < &v220[v221]; v222 += 64 )
      _mm_prefetch(v222, 0);
    v225 = (unsigned int)v221 >> 7;
    v226 = *(_QWORD *)(i38 + 2104);
    *((_QWORD *)&i29 + 1) = 1LL;
    if ( (unsigned int)v221 >> 7 )
    {
      do
      {
        v227 = 8LL;
        do
        {
          v228 = *(_QWORD *)(v94 + 8) ^ __ROL8__(*(_QWORD *)v94 ^ v226, v223);
          v94 += 16LL;
          v226 = __ROL8__(v228, v223);
          --v227;
        }
        while ( v227 );
        i29 = (__ROL8__(i33 ^ (v94 - (_QWORD)v220), 17) ^ i33 ^ (v94 - (unsigned __int64)v220))
            * (unsigned __int128)0x7010008004002001uLL;
        v2615 = *((_QWORD *)&i29 + 1);
        v229 = i29 ^ BYTE8(i29) ^ v223;
        *((_QWORD *)&i29 + 1) = 1LL;
        v223 = v229 & 0x3F;
        if ( !v223 )
          LOBYTE(v223) = 1;
        --v225;
      }
      while ( v225 );
      i38 = v2426;
    }
    v230 = v221 & 0x7F;
    if ( v230 >= 8 )
    {
      v231 = (unsigned __int64)v230 >> 3;
      do
      {
        v226 = __ROL8__(*(_QWORD *)v94 ^ v226, v223);
        v94 += 8LL;
        v230 -= 8;
        --v231;
      }
      while ( v231 );
    }
    if ( v230 )
    {
      do
      {
        v232 = *(unsigned __int8 *)v94++;
        v226 = __ROL8__(v232 ^ v226, v223);
        --v230;
      }
      while ( v230 );
      i38 = v2426;
    }
    for ( i34 = v226; ; LODWORD(v226) = i34 ^ v226 )
    {
      i34 >>= 31;
      if ( !i34 )
        break;
    }
    v234 = v226 & 0x7FFFFFFF;
    if ( v234 != *((_DWORD *)v212 + 5) )
    {
      _InterlockedOr(v2421, 0);
      if ( (*((_DWORD *)v212 + 6) & 1) == 0 || !**(_BYTE **)(i38 + 1400) )
      {
        v235 = *((unsigned int *)v212 + 4);
        *((_QWORD *)&i29 + 1) = *((_QWORD *)v212 + 1);
        if ( *((_DWORD *)v212 + 4) && (v236 = 64LL, (*(_DWORD *)(i38 + 2524) & 0x40) != 0) )
        {
          v237 = KeGetCurrentIrql();
          __writecr8(2uLL);
          v238 = *((_QWORD *)&i29 + 1) & 0xFFFFFFFFFFFFF000uLL;
          v2425 = (*((_QWORD *)&i29 + 1) + v235 - 1) | 0xFFF;
          v239 = (*((_QWORD *)&i29 + 1) & 0xFFFFFFFFFFFFF000uLL) - 1;
          while ( 2 )
          {
            v240 = v237;
            while ( 1 )
            {
              LODWORD(i29) = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, unsigned __int64))(i38 + 1128))(
                               v238,
                               0LL,
                               v236,
                               v94);
              if ( (_DWORD)i29 != -1073741267 )
                break;
              if ( v237 > 1u )
                goto LABEL_353;
              v240 = v237;
              __writecr8(v237);
              __writecr8(2uLL);
            }
            if ( (i29 & 0x80000000) != 0LL )
            {
              __writecr8(v240);
              v212 = v2424;
              goto LABEL_365;
            }
LABEL_353:
            v238 += 4096LL;
            v239 += 4096LL;
            if ( v239 != v2425 )
              continue;
            break;
          }
          __writecr8(v240);
          v212 = v2424;
        }
        else
        {
LABEL_365:
          if ( !*(_DWORD *)(i38 + 2328) )
            *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v234 ^ (unsigned __int64)*((unsigned int *)v212 + 5);
          v247 = *((_QWORD *)v212 + 1);
          if ( !*(_DWORD *)(i38 + 2328) )
          {
            *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(i38 + 2344) = v212 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(i38 + 2352) = *(int *)v212;
            *(_QWORD *)(i38 + 2360) = v247;
            *(_DWORD *)(i38 + 2328) = 1;
            v248 = *(_DWORD *)(i38 + 2520);
            if ( (v248 & 0x20000000) == 0 && (*(_DWORD *)(i38 + 2524) & 0x200000) != 0 && (v248 & 1) != 0 )
            {
              v249 = *(unsigned int *)(i38 + 2676);
              v250 = *(_QWORD *)(i38 + 2104);
              v251 = *(_QWORD *)(i38 + 2680);
              *((_QWORD *)&i29 + 1) = v249 + i38;
              v94 = v249 + i38 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v249) >> 3);
              while ( *((_QWORD *)&i29 + 1) != v94 )
              {
                **((_QWORD **)&i29 + 1) ^= v251;
                v251 = ((v250 ^ **((_QWORD **)&i29 + 1)) + __ROR8__(v251, v251 & 0x3F)) ^ 0xEFA;
                *((_QWORD *)&i29 + 1) += 8LL;
              }
              *(_DWORD *)(i38 + 2524) &= ~0x200000u;
              if ( v251 != *(_QWORD *)(i38 + 2688) )
              {
                v252 = *(_DWORD *)(i38 + 2052);
                v253 = *(_QWORD *)(i38 + 1416);
                *(_QWORD *)v253 = i38;
                *(_DWORD *)(v253 + 16) = v252;
                if ( !*(_DWORD *)(i38 + 2328) )
                  *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v251 ^ *(_QWORD *)(i38 + 2688);
                ProbeAndFlag1(i38, 0LL, v251, 256LL);
              }
            }
          }
        }
      }
    }
    if ( (*(_DWORD *)(i38 + 2520) & 0x20000000) == 0 )
      goto LABEL_404;
    v241 = *((_DWORD *)v212 + 4);
    if ( !v241 )
      goto LABEL_404;
    sub_14051F4BC(i38, *((_QWORD *)v212 + 1), v241, (__int64)v2618);
    *((_QWORD *)&i29 + 1) = 16LL;
    v242 = v212 + 28;
    v94 = (unsigned __int64)v2618;
    while ( 1 )
    {
      v243 = *(_QWORD *)v94;
      v94 += 8LL;
      v244 = *(_QWORD *)v242;
      v242 += 8;
      if ( v243 != v244 )
        break;
      *((_QWORD *)&i29 + 1) = (unsigned int)(DWORD2(i29) - 8);
      if ( DWORD2(i29) < 8 )
      {
        if ( !DWORD2(i29) )
          goto LABEL_402;
        while ( 1 )
        {
          v245 = *(_BYTE *)v94++;
          v246 = *v242++;
          if ( v245 != v246 )
            goto LABEL_378;
          v300 = DWORD2(i29) == 1;
          *((_QWORD *)&i29 + 1) = (unsigned int)(DWORD2(i29) - 1);
          if ( v300 )
            goto LABEL_402;
        }
      }
    }
LABEL_378:
    _InterlockedOr(v2421, 0);
    if ( (*((_DWORD *)v212 + 6) & 1) != 0 && **(_BYTE **)(i38 + 1400) )
      goto LABEL_402;
    *((_QWORD *)&i29 + 1) = *((_QWORD *)v212 + 1);
    if ( !*((_DWORD *)v212 + 4) )
      goto LABEL_391;
    v254 = 64LL;
    if ( (*(_DWORD *)(i38 + 2524) & 0x40) == 0 )
      goto LABEL_391;
    v255 = KeGetCurrentIrql();
    v256 = *((_QWORD *)&i29 + 1) & 0xFFFFFFFFFFFFF000uLL;
    v257 = (*((_QWORD *)&i29 + 1) + *((unsigned int *)v212 + 4) - 1LL) | 0xFFF;
    v258 = (*((_QWORD *)&i29 + 1) & 0xFFFFFFFFFFFFF000uLL) - 1;
LABEL_383:
    __writecr8(2uLL);
    while ( 1 )
    {
      LODWORD(i29) = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, unsigned __int64))(i38 + 1128))(
                       v256,
                       0LL,
                       v254,
                       v94);
      if ( (_DWORD)i29 == -1073741267 )
      {
        if ( v255 <= 1u )
        {
          __writecr8(v255);
          goto LABEL_383;
        }
        goto LABEL_388;
      }
      if ( (i29 & 0x80000000) != 0LL )
        break;
LABEL_388:
      v256 += 4096LL;
      v258 += 4096LL;
      if ( v258 == v257 )
      {
        __writecr8(v255);
        goto LABEL_402;
      }
    }
    __writecr8(v255);
LABEL_391:
    v259 = *((_QWORD *)v212 + 1);
    if ( !*(_DWORD *)(i38 + 2328) )
    {
      *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
      *(_QWORD *)(i38 + 2344) = v212 - 0x4C48B4211BBACBEBLL;
      *(_QWORD *)(i38 + 2352) = *(int *)v212;
      *(_QWORD *)(i38 + 2360) = v259;
      *(_DWORD *)(i38 + 2328) = 1;
      v260 = *(_DWORD *)(i38 + 2520);
      if ( (v260 & 0x20000000) == 0 && (*(_DWORD *)(i38 + 2524) & 0x200000) != 0 && (v260 & 1) != 0 )
      {
        v261 = *(unsigned int *)(i38 + 2676);
        v262 = *(_QWORD *)(i38 + 2104);
        v263 = *(_QWORD *)(i38 + 2680);
        *((_QWORD *)&i29 + 1) = v261 + i38;
        v94 = v261 + i38 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v261) >> 3);
        while ( *((_QWORD *)&i29 + 1) != v94 )
        {
          **((_QWORD **)&i29 + 1) ^= v263;
          v263 = ((v262 ^ **((_QWORD **)&i29 + 1)) + __ROR8__(v263, v263 & 0x3F)) ^ 0xEFA;
          *((_QWORD *)&i29 + 1) += 8LL;
        }
        *(_DWORD *)(i38 + 2524) &= ~0x200000u;
        if ( v263 != *(_QWORD *)(i38 + 2688) )
        {
          v264 = *(_DWORD *)(i38 + 2052);
          v265 = *(_QWORD *)(i38 + 1416);
          *(_QWORD *)v265 = i38;
          *(_DWORD *)(v265 + 16) = v264;
          if ( !*(_DWORD *)(i38 + 2328) )
            *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v263 ^ *(_QWORD *)(i38 + 2688);
          ProbeAndFlag1(i38, 0LL, v263, 256LL);
        }
      }
    }
LABEL_402:
    v266 = 16 * *((_DWORD *)v212 + 4);
LABEL_403:
    *(_DWORD *)(i38 + 2120) += v266;
LABEL_404:
    m = 0LL;
LABEL_405:
    v103 = 6;
LABEL_406:
    v267 = v2451;
    if ( *(_DWORD *)(i38 + 2116) )
      v267 = v2451 - 1;
    v210 = v267 + 1;
    v2451 = v210;
    if ( !*(_DWORD *)(i38 + 2328) && *(_DWORD *)(i38 + 2120) < *(_DWORD *)(i38 + 2124) )
    {
      *((_QWORD *)&i29 + 1) = 40LL;
      continue;
    }
    break;
  }
LABEL_3050:
  *(_DWORD *)(i38 + 2112) = v210;
  if ( v2447 )
  {
    v1948 = *(_QWORD *)(*(_QWORD *)(i38 + 1720)
                      + *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *(_QWORD *)(i38 + 1624))
                      + *(_QWORD *)(i38 + 1688));
    (*(void (__fastcall **)(_BYTE *))(i38 + 424))(v2631);
    (*(void (__fastcall **)(_BYTE *))(i38 + 1088))(v2656);
    (*(void (__fastcall **)(__int64))(i38 + 936))(v1948);
    (*(void (__fastcall **)(__int64))(i38 + 952))(v1948);
  }
  if ( (*(_DWORD *)(i38 + 2520) & 0x400004) == 0x400004 )
  {
    v1949 = *(_QWORD *)(i38 + 2744);
    v1950 = *(_DWORD *)(i38 + 2052);
    v1951 = *(_QWORD *)(i38 + 2624);
    v1952 = *(unsigned int *)(i38 + 2088);
    v2674 = v1949;
    if ( (*(_DWORD *)(i38 + 2524) & 2) != 0 )
      v1951 = *(_QWORD *)(i38 + 1488);
    v1953 = *(void (__fastcall **)(_QWORD, _QWORD, unsigned __int64 *))(i38 + 368);
    v2448 = *(char **)(i38 + 712);
    v2445 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(i38 + 832);
    v2430 = (__int64)v1953;
    v1954 = __rdtsc();
    v1955 = (__ROR8__(v1954, 3) ^ v1954) * (unsigned __int128)0x7010008004002001uLL;
    v2568 = *((_QWORD *)&v1955 + 1);
    v1956 = -1200000000LL - ((unsigned __int64)v1955 ^ *((_QWORD *)&v1955 + 1)) % 0x5F5E100;
    v2467 = v1956;
    if ( (*(_DWORD *)(i38 + 2520) & 0x2000000) != 0 )
    {
      v1957 = __rdtsc();
      v1958 = (__ROR8__(v1957, 3) ^ v1957) * (unsigned __int128)0x7010008004002001uLL;
      v2569 = *((_QWORD *)&v1958 + 1);
      if ( ((unsigned __int64)v1958 ^ *((_QWORD *)&v1958 + 1)) % 0xA < 2 )
      {
        v1959 = __rdtsc();
        v1960 = (__ROR8__(v1959, 3) ^ v1959) * (unsigned __int128)0x7010008004002001uLL;
        v2570 = *((_QWORD *)&v1960 + 1);
        v2467 = v1956 * (((unsigned __int64)v1960 ^ *((_QWORD *)&v1960 + 1)) % 0xA + 1);
      }
    }
    v1961 = *(_DWORD *)(i38 + 2520);
    v1962 = 0LL;
    if ( (v1961 & 1) == 0 )
      v1950 = v1952;
    if ( (v1961 & 0x40) != 0 )
    {
      v1963 = 1;
      v1964 = __rdtsc();
      v1965 = (__ROR8__(v1964, 3) ^ v1964) * (unsigned __int128)0x7010008004002001uLL;
      v1966 = 349;
      v2571 = *((_QWORD *)&v1965 + 1);
      v1962 = v1965 ^ *((_QWORD *)&v1965 + 1);
      v1967 = (_QWORD *)(i38 + 2784);
      v1968 = v1962;
      m = v1962 ^ i38;
      do
      {
        *v1967-- ^= v1968;
        v1968 = __ROR8__(v1968, v1966--);
      }
      while ( v1966 );
      v1969 = (unsigned __int64)(v1952 - 2792) >> 3;
      if ( (_DWORD)v1969 )
      {
        v1970 = (__int64 *)(i38 + 2784 + 8LL * (int)v1969);
        do
        {
          v1971 = *v1970--;
          m = (2 * m) ^ __ROR8__(v1971, v1969);
          LODWORD(v1969) = v1969 - 1;
        }
        while ( (_DWORD)v1969 );
        i38 = v2426;
        v1949 = v2674;
      }
      v1972 = (v1950 - (unsigned int)v1952) >> 3;
      if ( (_DWORD)v1972 )
      {
        v1973 = (_QWORD *)(i38 + v1952 + 8 * v1972 - 8);
        do
        {
          *v1973-- ^= v1968;
          v1968 = __ROR8__(v1968, v1972);
          LODWORD(v1972) = v1972 - 1;
        }
        while ( (_DWORD)v1972 );
      }
      v1953 = (void (__fastcall *)(_QWORD, _QWORD, unsigned __int64 *))v2430;
    }
    else
    {
      v1963 = 0;
    }
    if ( v1949 )
    {
      v2445(i38, v1950, &v2467, v1953, v1949);
    }
    else if ( v1951 )
    {
      ((void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, unsigned __int64 *))v2448)(v1951, 0LL, 0LL, 0LL, &v2467);
    }
    else
    {
      v1953(0LL, 0LL, &v2467);
    }
    if ( v1963 )
    {
      v1974 = (_QWORD *)(i38 + 2784);
      v94 = v1962 ^ i38;
      v1975 = 349;
      do
      {
        *v1974-- ^= v1962;
        v1962 = __ROR8__(v1962, v1975--);
      }
      while ( v1975 );
      v1976 = (unsigned __int64)(v1952 - 2792) >> 3;
      if ( (_DWORD)v1976 )
      {
        v1977 = (__int64 *)(i38 + 8 * ((int)v1976 + 348LL));
        do
        {
          v1978 = *v1977--;
          *((_QWORD *)&i29 + 1) = __ROR8__(v1978, v1976);
          v94 = (2 * v94) ^ *((_QWORD *)&i29 + 1);
          LODWORD(v1976) = v1976 - 1;
        }
        while ( (_DWORD)v1976 );
      }
      v1979 = (v1950 - (unsigned int)v1952) >> 3;
      if ( v1979 )
      {
        *((_QWORD *)&i29 + 1) = i38 + v1952 + 8 * (v1979 - 1LL);
        do
        {
          **((_QWORD **)&i29 + 1) ^= v1962;
          v1962 = __ROR8__(v1962, v1979);
          *((_QWORD *)&i29 + 1) -= 8LL;
          --v1979;
        }
        while ( v1979 );
      }
      if ( v94 != m )
      {
        v1980 = *(_QWORD *)(i38 + 1416);
        v1981 = *(_DWORD *)(i38 + 2052);
        *(_QWORD *)v1980 = i38;
        *(_DWORD *)(v1980 + 16) = v1981;
        if ( !*(_DWORD *)(i38 + 2328) )
          *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = m ^ v94;
        if ( !*(_DWORD *)(i38 + 2328) )
        {
          *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(i38 + 2344) = 0LL;
          *(_QWORD *)(i38 + 2352) = 270LL;
          *(_QWORD *)(i38 + 2360) = v94;
          *(_DWORD *)(i38 + 2328) = 1;
          v1982 = *(_DWORD *)(i38 + 2520);
          if ( (v1982 & 0x20000000) == 0 && (*(_DWORD *)(i38 + 2524) & 0x200000) != 0 && (v1982 & 1) != 0 )
          {
            v1983 = *(unsigned int *)(i38 + 2676);
            v1984 = *(_QWORD *)(i38 + 2104);
            v1985 = *(_QWORD *)(i38 + 2680);
            *((_QWORD *)&i29 + 1) = v1983 + i38;
            v94 = v1983 + i38 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v1983) >> 3);
            while ( *((_QWORD *)&i29 + 1) != v94 )
            {
              **((_QWORD **)&i29 + 1) ^= v1985;
              v1985 = ((v1984 ^ **((_QWORD **)&i29 + 1)) + __ROR8__(v1985, v1985 & 0x3F)) ^ 0xEFA;
              *((_QWORD *)&i29 + 1) += 8LL;
            }
            *(_DWORD *)(i38 + 2524) &= ~0x200000u;
            if ( v1985 != *(_QWORD *)(i38 + 2688) )
            {
              v1986 = *(_DWORD *)(i38 + 2052);
              v1987 = *(_QWORD *)(i38 + 1416);
              *(_QWORD *)v1987 = i38;
              *(_DWORD *)(v1987 + 16) = v1986;
              if ( !*(_DWORD *)(i38 + 2328) )
                *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v1985 ^ *(_QWORD *)(i38 + 2688);
              ProbeAndFlag1(i38, 0LL, v1985, 256LL);
            }
          }
        }
      }
    }
  }
  if ( (*(_DWORD *)(i38 + 2520) & 0x1000000) != 0 )
  {
    v1988 = *(_QWORD *)(i38 + 2528);
    if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))(i38 + 912))(v1988, *((_QWORD *)&i29 + 1)) )
    {
      if ( !*(_DWORD *)(i38 + 2328) )
      {
        *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(i38 + 2344) = 0LL;
        *(_QWORD *)(i38 + 2352) = 272LL;
        *(_QWORD *)(i38 + 2360) = 0LL;
        *(_DWORD *)(i38 + 2328) = 1;
        v1989 = *(_DWORD *)(i38 + 2520);
        if ( (v1989 & 0x20000000) == 0 && (*(_DWORD *)(i38 + 2524) & 0x200000) != 0 && (v1989 & 1) != 0 )
        {
          v1990 = *(unsigned int *)(i38 + 2676);
          v1991 = *(_QWORD *)(i38 + 2104);
          v1992 = *(_QWORD *)(i38 + 2680);
          v1993 = (_QWORD *)(v1990 + i38);
          v1994 = v1990 + i38 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v1990) >> 3);
          while ( v1993 != (_QWORD *)v1994 )
          {
            *v1993 ^= v1992;
            v1992 = ((v1991 ^ *v1993++) + __ROR8__(v1992, v1992 & 0x3F)) ^ 0xEFA;
          }
          *(_DWORD *)(i38 + 2524) &= ~0x200000u;
          if ( v1992 != *(_QWORD *)(i38 + 2688) )
          {
            v1995 = *(_DWORD *)(i38 + 2052);
            v1996 = *(_QWORD *)(i38 + 1416);
            *(_QWORD *)v1996 = i38;
            *(_DWORD *)(v1996 + 16) = v1995;
            if ( !*(_DWORD *)(i38 + 2328) )
              *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v1992 ^ *(_QWORD *)(i38 + 2688);
            ProbeAndFlag1(i38, 0LL, v1992, 256LL);
          }
        }
      }
    }
    (*(void (__fastcall **)(__int64, __int64 (__fastcall *)(), __int64, _QWORD))(i38 + 904))(
      v1988,
      SmallDetection1,
      i38,
      0LL);
  }
  v1997 = *(_DWORD *)(i38 + 2520);
  if ( (v1997 & 0x20000000) == 0 && (*(_DWORD *)(i38 + 2524) & 0x200000) == 0 && (v1997 & 1) != 0 )
  {
    v1998 = *(unsigned int *)(i38 + 2676);
    v1999 = *(_QWORD *)(i38 + 2104);
    v94 = v1998 + i38;
    v2000 = v1998 + i38 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v1998) >> 3);
    v2001 = __rdtsc();
    i29 = (__ROR8__(v2001, 3) ^ v2001) * (unsigned __int128)0x7010008004002001uLL;
    v2572 = *((_QWORD *)&i29 + 1);
    *((_QWORD *)&i29 + 1) ^= i29;
    *(_QWORD *)(i38 + 2680) = *((_QWORD *)&i29 + 1);
    while ( v94 != v2000 )
    {
      v2002 = *(_QWORD *)v94;
      *(_QWORD *)v94 ^= *((_QWORD *)&i29 + 1);
      *((_QWORD *)&i29 + 1) = ((v1999 ^ v2002) + __ROR8__(*((_QWORD *)&i29 + 1), BYTE8(i29) & 0x3F)) ^ 0xEFA;
      v94 += 8LL;
    }
    *(_DWORD *)(i38 + 2524) |= 0x200000u;
    *(_QWORD *)(i38 + 2688) = *((_QWORD *)&i29 + 1);
  }
  if ( (*(_DWORD *)(i38 + 2524) & 0x100) != 0 )
    retaddr = v2449;
  v2003 = *(_DWORD *)(i38 + 2520);
  if ( (v2003 & 0x20000) != 0 )
  {
    v2004 = __rdtsc();
    i29 = (__ROR8__(v2004, 3) ^ v2004) * (unsigned __int128)0x7010008004002001uLL;
    v2573 = *((_QWORD *)&i29 + 1);
    v2005 = i29 ^ *((_QWORD *)&i29 + 1);
    *((_QWORD *)&i29 + 1) = ((unsigned __int64)i29 ^ *((_QWORD *)&i29 + 1)) / 0xA;
    if ( (unsigned __int64)(v2005 - 10LL * *((_QWORD *)&i29 + 1)) < 2 && !*(_DWORD *)(i38 + 2328) )
    {
      *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
      *(_QWORD *)(i38 + 2344) = 0LL;
      *(_QWORD *)(i38 + 2352) = 264LL;
      *(_QWORD *)(i38 + 2360) = 0LL;
      *(_DWORD *)(i38 + 2328) = 1;
      if ( (v2003 & 0x20000000) == 0 && (*(_DWORD *)(i38 + 2524) & 0x200000) != 0 && (v2003 & 1) != 0 )
      {
        v2006 = *(unsigned int *)(i38 + 2676);
        v2007 = *(_QWORD *)(i38 + 2104);
        v2008 = *(_QWORD *)(i38 + 2680);
        *((_QWORD *)&i29 + 1) = v2006 + i38;
        v94 = v2006 + i38 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v2006) >> 3);
        while ( *((_QWORD *)&i29 + 1) != v94 )
        {
          **((_QWORD **)&i29 + 1) ^= v2008;
          v2008 = ((v2007 ^ **((_QWORD **)&i29 + 1)) + __ROR8__(v2008, v2008 & 0x3F)) ^ 0xEFA;
          *((_QWORD *)&i29 + 1) += 8LL;
        }
        *(_DWORD *)(i38 + 2524) &= ~0x200000u;
        if ( v2008 != *(_QWORD *)(i38 + 2688) )
        {
          v2009 = *(_DWORD *)(i38 + 2052);
          v2010 = *(_QWORD *)(i38 + 1416);
          *(_QWORD *)v2010 = i38;
          *(_DWORD *)(v2010 + 16) = v2009;
          if ( !*(_DWORD *)(i38 + 2328) )
            *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v2008 ^ *(_QWORD *)(i38 + 2688);
          ProbeAndFlag1(i38, 0LL, v2008, 256LL);
        }
      }
    }
  }
  v2011 = *(_DWORD *)(i38 + 2520);
  if ( (v2011 & 0x20000000) == 0 && (v2011 & 0x4000) == 0 )
  {
    v2012 = (_BYTE *)(i38 + 2328);
    if ( *(_DWORD *)(i38 + 2328) )
    {
      *((_QWORD *)&i29 + 1) = a1;
      if ( (*(_DWORD *)(a1 + 2520) & 0x4000) != 0 || !*(_DWORD *)(a1 + 2328) )
      {
        v2013 = 40;
        *((_QWORD *)&i29 + 1) = a1 + 2328;
        v94 = 5LL;
        do
        {
          v2013 -= 8;
          **((_QWORD **)&i29 + 1) = *(_QWORD *)v2012;
          v2012 += 8;
          *((_QWORD *)&i29 + 1) += 8LL;
          --v94;
        }
        while ( v94 );
        if ( v2013 )
        {
          do
          {
            LOBYTE(i29) = *v2012++;
            **((_BYTE **)&i29 + 1) = i29;
            ++*((_QWORD *)&i29 + 1);
            --v2013;
          }
          while ( v2013 );
          i38 = v2426;
        }
      }
    }
  }
  if ( (*(_DWORD *)(i38 + 2520) & 0x4000) == 0 && *(_DWORD *)(i38 + 2328)
    || (v2014 = *(unsigned int *)(i38 + 2672), !(_DWORD)v2014) )
  {
    i43 = 0LL;
LABEL_3289:
    v2048 = 0x7010008004002001LL;
    goto LABEL_3290;
  }
  v2015 = (int *)(i38 + v2014);
  v2016 = *(const char **)(i38 + v2014 + 8);
  v2427 = i38 + v2014;
  if ( v2016 )
  {
    v2017 = (unsigned int)v2015[4];
    v2018 = (__int64)v2016;
    *(_DWORD *)(i38 + 2120) += v2017;
    v2019 = v2016;
    v2020 = *(_DWORD *)(i38 + 2100);
    for ( i35 = *(_QWORD *)(i38 + 2104); v2019 < &v2016[v2017]; v2019 += 64 )
      _mm_prefetch(v2019, 0);
    v2022 = *(_QWORD *)(i38 + 2104);
    v2023 = (unsigned int)v2017 >> 7;
    if ( (unsigned int)v2017 >> 7 )
    {
      do
      {
        v2024 = 8LL;
        do
        {
          v2025 = *(_QWORD *)(v2018 + 8) ^ __ROL8__(*(_QWORD *)v2018 ^ v2022, v2020);
          v2018 += 16LL;
          v2022 = __ROL8__(v2025, v2020);
          --v2024;
        }
        while ( v2024 );
        v2026 = (__ROL8__(i35 ^ (v2018 - (_QWORD)v2016), 17) ^ i35 ^ (unsigned __int64)(v2018 - (_QWORD)v2016))
              * (unsigned __int128)0x7010008004002001uLL;
        v2574 = *((_QWORD *)&v2026 + 1);
        v2027 = BYTE8(v2026) ^ v2026 ^ v2020;
        v2028 = 0xFFFFFFFFLL;
        v2020 = v2027 & 0x3F;
        if ( !v2020 )
          LOBYTE(v2020) = 1;
        --v2023;
      }
      while ( v2023 );
      i38 = v2426;
    }
    else
    {
      v2028 = 0xFFFFFFFFLL;
    }
    v2029 = v2017 & 0x7F;
    if ( v2029 >= 8 )
    {
      v2030 = (unsigned __int64)v2029 >> 3;
      do
      {
        v2022 = __ROL8__(*(_QWORD *)v2018 ^ v2022, v2020);
        v2018 += 8LL;
        v2029 -= 8;
        --v2030;
      }
      while ( v2030 );
    }
    for ( ; v2029; --v2029 )
    {
      v2031 = *(unsigned __int8 *)v2018++;
      v2022 = __ROL8__(v2031 ^ v2022, v2020);
    }
    for ( i36 = v2022; ; LODWORD(v2022) = i36 ^ v2022 )
    {
      i36 >>= 31;
      if ( !i36 )
        break;
    }
    v2033 = v2022 & 0x7FFFFFFF;
    v2034 = 0;
    if ( v2033 != v2015[5] )
    {
      if ( !*v2015 )
        v2034 = v2015[6] != 0;
      v2035 = (unsigned int)v2015[4];
      v2028 = *((_QWORD *)v2015 + 1);
      if ( v2015[4] )
      {
        v2018 = 64LL;
        if ( (*(_DWORD *)(i38 + 2524) & 0x40) != 0 )
        {
          v2036 = KeGetCurrentIrql();
          __writecr8(2uLL);
          v2037 = v2028 & 0xFFFFFFFFFFFFF000uLL;
          v2430 = (v2028 + v2035 - 1) | 0xFFF;
          v2675 = (v2028 & 0xFFFFFFFFFFFFF000uLL) - 1;
          while ( 1 )
          {
            while ( 1 )
            {
              v2038 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(i38 + 1128))(v2037, 0LL);
              if ( v2038 == -1073741267 )
                break;
              if ( v2038 < 0 )
              {
LABEL_3181:
                __writecr8(v2036);
                goto LABEL_3182;
              }
LABEL_3179:
              v2037 += 4096LL;
              v2675 += 4096LL;
              if ( v2675 == v2430 )
              {
                __writecr8(v2036);
                goto LABEL_3195;
              }
            }
            if ( v2034 )
              goto LABEL_3181;
            if ( v2036 > 1u )
              goto LABEL_3179;
            __writecr8(v2036);
            KeGetCurrentIrql();
            __writecr8(2uLL);
          }
        }
      }
LABEL_3182:
      if ( !*(_DWORD *)(i38 + 2328) )
        *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = (unsigned int)v2015[5] ^ (unsigned __int64)v2033;
      v2039 = *((_QWORD *)v2015 + 1);
      if ( !*(_DWORD *)(i38 + 2328) )
      {
        v2028 = 1LL;
        *(_QWORD *)(i38 + 2336) = i38 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(i38 + 2344) = (char *)v2015 - 0x4C48B4211BBACBEBLL;
        *(_QWORD *)(i38 + 2352) = *v2015;
        *(_QWORD *)(i38 + 2360) = v2039;
        *(_DWORD *)(i38 + 2328) = 1;
        v2040 = *(_DWORD *)(i38 + 2520);
        if ( (v2040 & 0x20000000) == 0 && (*(_DWORD *)(i38 + 2524) & 0x200000) != 0 && (v2040 & 1) != 0 )
        {
          v2041 = *(unsigned int *)(i38 + 2676);
          v2042 = *(_QWORD *)(i38 + 2104);
          v2018 = *(_QWORD *)(i38 + 2680);
          v2028 = v2041 + i38;
          v2043 = v2041 + i38 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(i38 + 2052) - v2041) >> 3);
          while ( v2028 != v2043 )
          {
            *(_QWORD *)v2028 ^= v2018;
            v2018 = ((v2042 ^ *(_QWORD *)v2028) + __ROR8__(v2018, v2018 & 0x3F)) ^ 0xEFA;
            v2028 += 8LL;
          }
          *(_DWORD *)(i38 + 2524) &= ~0x200000u;
          if ( v2018 != *(_QWORD *)(i38 + 2688) )
          {
            v2044 = *(_DWORD *)(i38 + 2052);
            v2045 = *(_QWORD *)(i38 + 1416);
            *(_QWORD *)v2045 = i38;
            *(_DWORD *)(v2045 + 16) = v2044;
            if ( !*(_DWORD *)(i38 + 2328) )
              *(_QWORD *)(*(_QWORD *)(i38 + 1416) + 24LL) = v2018 ^ *(_QWORD *)(i38 + 2688);
            ProbeAndFlag1(i38, 0LL, v2018, 256LL);
          }
        }
      }
    }
LABEL_3195:
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(i38 + 264))(*((_QWORD *)v2015 + 3), v2028, v2018);
    *((_QWORD *)v2015 + 1) = 0LL;
    v2015[4] = 0;
    *(_DWORD *)(i38 + 2120) = *(_DWORD *)(i38 + 2120);
    v2046 = *(_QWORD *)(i38 + 2104);
    for ( i37 = v2046; ; LODWORD(v2046) = i37 ^ v2046 )
    {
      i37 >>= 31;
      if ( !i37 )
        break;
    }
    v2015[5] = v2046 & 0x7FFFFFFF;
  }
  v2048 = 0x7010008004002001LL;
  v2049 = __rdtsc();
  i29 = (__ROR8__(v2049, 3) ^ v2049) * (unsigned __int128)0x7010008004002001uLL;
  v2575 = *((_QWORD *)&i29 + 1);
  v2050 = i29 ^ *((_QWORD *)&i29 + 1);
  *((_QWORD *)&i29 + 1) = ((unsigned __int64)i29 ^ *((_QWORD *)&i29 + 1)) / 3;
  if ( v2050 == 3LL * *((_QWORD *)&i29 + 1) )
  {
    v2051 = v2015 + 6;
    v2052 = __rdtsc();
    v2053 = __ROR8__(v2052, 3);
    v2576 = ((v2053 ^ v2052) * (unsigned __int128)0x7010008004002001uLL) >> 64;
    v2054 = ((unsigned __int16)(8193 * (v2053 ^ v2052)) ^ (unsigned __int16)v2576) & 0x7FF;
    v2055 = __rdtsc();
    v2056 = (__ROR8__(v2055, 3) ^ v2055) * (unsigned __int128)0x7010008004002001uLL;
    v2577 = *((_QWORD *)&v2056 + 1);
    v2057 = (*((_QWORD *)&v2056 + 1) ^ (unsigned __int64)v2056) % (unsigned int)(v2054 + 1);
    *(_QWORD *)&i29 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, _QWORD))(i38 + 256))(
                        (-(__int64)((*(_DWORD *)(i38 + 2520) & 0x8000000) != 0) & 0xFFFFFFFFFFFFFFC0uLL) + 130,
                        (unsigned int)(v2054 + 2792),
                        *(unsigned int *)(i38 + 2096));
    i43 = i29;
    if ( (_QWORD)i29 )
    {
      v94 = (unsigned int)v2057;
      v2059 = (_QWORD *)i29;
      if ( (unsigned int)v2057 >= 8 )
      {
        v2060 = (unsigned __int64)(unsigned int)v2057 >> 3;
        do
        {
          v94 = (unsigned int)(v94 - 8);
          v2061 = __rdtsc();
          i29 = (__ROR8__(v2061, 3) ^ v2061) * (unsigned __int128)0x7010008004002001uLL;
          v2578 = *((_QWORD *)&i29 + 1);
          *((_QWORD *)&i29 + 1) ^= i29;
          *v2059++ = *((_QWORD *)&i29 + 1);
          --v2060;
        }
        while ( v2060 );
        i38 = v2426;
        v2051 = v2015 + 6;
      }
      if ( (_DWORD)v94 )
      {
        v2062 = __rdtsc();
        v2063 = __ROR8__(v2062, 3) ^ v2062;
        v2579 = (v2063 * (unsigned __int128)0x7010008004002001uLL) >> 64;
        *((_QWORD *)&i29 + 1) = (0x7010008004002001LL * v2063) ^ v2579;
        do
        {
          *(_BYTE *)v2059 = BYTE8(i29);
          v2059 = (_QWORD *)((char *)v2059 + 1);
          *((_QWORD *)&i29 + 1) >>= 8;
          v94 = (unsigned int)(v94 - 1);
        }
        while ( (_DWORD)v94 );
      }
      v2064 = v2054 - v2057;
      v2065 = (_QWORD *)(i43 + (unsigned int)v2057 + 2792LL);
      if ( v2064 >= 8 )
      {
        v94 = (unsigned __int64)v2064 >> 3;
        do
        {
          v2064 -= 8;
          v2066 = __rdtsc();
          i29 = (__ROR8__(v2066, 3) ^ v2066) * (unsigned __int128)0x7010008004002001uLL;
          v2580 = *((_QWORD *)&i29 + 1);
          *((_QWORD *)&i29 + 1) ^= i29;
          *v2065++ = *((_QWORD *)&i29 + 1);
          --v94;
        }
        while ( v94 );
        v2015 = (int *)v2427;
      }
      if ( v2064 )
      {
        v2067 = __rdtsc();
        v2068 = __ROR8__(v2067, 3) ^ v2067;
        v2581 = (v2068 * (unsigned __int128)0x7010008004002001uLL) >> 64;
        *((_QWORD *)&i29 + 1) = (0x7010008004002001LL * v2068) ^ v2581;
        do
        {
          *(_BYTE *)v2065 = BYTE8(i29);
          v2065 = (_QWORD *)((char *)v2065 + 1);
          *((_QWORD *)&i29 + 1) >>= 8;
          --v2064;
        }
        while ( v2064 );
      }
      if ( v2051 )
        *v2051 = i43;
      v2069 = (unsigned __int64 *)(i43 + (unsigned int)v2057);
      i43 = 0LL;
      if ( v2069 )
      {
        *((_QWORD *)v2015 + 1) = v2069;
        v2070 = (char *)i38;
        v2015[4] = 2792;
        v2071 = 2792;
        v2072 = v2069;
        v2073 = 349LL;
        do
        {
          v2071 -= 8;
          *v2069 = *(_QWORD *)v2070;
          v2070 += 8;
          ++v2069;
          --v2073;
        }
        while ( v2073 );
        for ( i38 = v2426; v2071; --v2071 )
        {
          v2074 = *v2070++;
          *(_BYTE *)v2069 = v2074;
          v2069 = (unsigned __int64 *)((char *)v2069 + 1);
        }
        v2075 = *((_DWORD *)v2072 + 630) | 0x40000;
        *((_DWORD *)v2072 + 630) = v2075;
        v2076 = v2075 & 0xFFFFFFFE;
        *((_DWORD *)v2072 + 513) = 2792;
        *((_DWORD *)v2072 + 522) = 2792;
        *((_DWORD *)v2072 + 630) = v2076;
        *((_DWORD *)v2072 + 669) = 2792;
        LODWORD(v2428) = *((_DWORD *)v2072 + 607);
        v2448 = (char *)v2072[156];
        v2445 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v2072[183];
        *((_DWORD *)v2072 + 49) = 324;
        do
        {
          v2077 = __rdtsc();
          v2078 = (__ROR8__(v2077, 3) ^ v2077) * (unsigned __int128)0x7010008004002001uLL;
          v2582 = *((_QWORD *)&v2078 + 1);
          v2079 = v2078 ^ *((_QWORD *)&v2078 + 1);
        }
        while ( (unsigned __int64)v2078 == *((_QWORD *)&v2078 + 1) );
        v2080 = (char *)(v2072 + 247);
        v2081 = v2427;
        v2082 = v2651;
        v2449 = v2072[251];
        v2083 = 32;
        v2676 = *((_DWORD *)v2072 + 530);
        v2084 = 4LL;
        do
        {
          v2083 -= 8;
          *(_QWORD *)v2082 = *(_QWORD *)v2080;
          v2080 += 8;
          v2082 += 8;
          --v2084;
        }
        while ( v2084 );
        if ( v2083 )
        {
          do
          {
            v2085 = *v2080++;
            *v2082++ = v2085;
            --v2083;
          }
          while ( v2083 );
          i38 = v2426;
        }
        v2072[251] = 0LL;
        v2086 = v2072 + 247;
        *((_DWORD *)v2072 + 530) = 0;
        v2087 = 32;
        v2088 = 4LL;
        do
        {
          *v2086 = 0LL;
          v2087 -= 8;
          ++v2086;
          --v2088;
        }
        while ( v2088 );
        for ( ; v2087; --v2087 )
        {
          *(_BYTE *)v2086 = 0;
          v2086 = (_QWORD *)((char *)v2086 + 1);
        }
        v2089 = *((unsigned int *)v2072 + 513);
        v2090 = v2072;
        *((_DWORD *)v2072 + 530) += v2089;
        v2091 = (const char *)v2072;
        v2092 = *((_DWORD *)v2072 + 525);
        v2093 = v2072[263];
        if ( v2072 < (unsigned __int64 *)((char *)v2072 + v2089) )
        {
          do
          {
            _mm_prefetch(v2091, 0);
            v2091 += 64;
          }
          while ( v2091 < (const char *)v2072 + v2089 );
        }
        v2094 = (unsigned int)v2089 >> 7;
        if ( (unsigned int)v2089 >> 7 )
        {
          v2095 = v2072[263];
          do
          {
            v2096 = 8LL;
            do
            {
              v2097 = v2090[1] ^ __ROL8__(*v2090 ^ v2093, v2092);
              v2090 += 2;
              v2093 = __ROL8__(v2097, v2092);
              --v2096;
            }
            while ( v2096 );
            v2098 = (__ROL8__(v2095 ^ ((char *)v2090 - (char *)v2072), 17) ^ v2095 ^ ((char *)v2090 - (char *)v2072))
                  * (unsigned __int128)0x7010008004002001uLL;
            v2583 = *((_QWORD *)&v2098 + 1);
            v2092 = ((unsigned __int8)v2098 ^ (unsigned __int8)(BYTE8(v2098) ^ v2092)) & 0x3F;
            if ( !v2092 )
              LOBYTE(v2092) = 1;
            --v2094;
          }
          while ( v2094 );
          i38 = v2426;
          v2081 = v2427;
        }
        v2099 = v2089 & 0x7F;
        if ( v2099 >= 8 )
        {
          v2100 = (unsigned __int64)v2099 >> 3;
          do
          {
            v2093 = __ROL8__(*v2090++ ^ v2093, v2092);
            v2099 -= 8;
            --v2100;
          }
          while ( v2100 );
        }
        if ( v2099 )
        {
          do
          {
            v2101 = *(unsigned __int8 *)v2090;
            v2090 = (unsigned __int64 *)((char *)v2090 + 1);
            v2093 = __ROL8__(v2101 ^ v2093, v2092);
            --v2099;
          }
          while ( v2099 );
          i38 = v2426;
        }
        *((_QWORD *)&i29 + 1) = v2072 + 247;
        v2102 = 32;
        v2072[251] = v2449;
        *((_DWORD *)v2072 + 530) += v2676;
        v2103 = v2651;
        v2104 = 4LL;
        do
        {
          v2102 -= 8;
          **((_QWORD **)&i29 + 1) = *(_QWORD *)v2103;
          v2103 += 8;
          *((_QWORD *)&i29 + 1) += 8LL;
          --v2104;
        }
        while ( v2104 );
        if ( v2102 )
        {
          do
          {
            LOBYTE(i29) = *v2103++;
            **((_BYTE **)&i29 + 1) = i29;
            ++*((_QWORD *)&i29 + 1);
            --v2102;
          }
          while ( v2102 );
          v2081 = v2427;
        }
        v2072[251] = v2093;
        if ( (v2072[315] & 0x20000000) == 0 )
        {
          v2105 = v2072;
          for ( i39 = 0; i39 < 0x19; ++i39 )
            *v2105++ ^= v2079;
          v2107 = v2105 + 323;
          v2108 = 324;
          while ( 1 )
          {
            *v2107-- ^= v2079;
            v2490 = __ROR8__(v2079, v2108);
            _bittestandcomplement64(&v2490, v2490 & 0x3F);
            if ( !--v2108 )
              break;
            v2079 = v2490;
          }
          v2109 = __rdtsc();
          i29 = (__ROR8__(v2109, 3) ^ v2109) * (unsigned __int128)0x7010008004002001uLL;
          v2584 = *((_QWORD *)&i29 + 1);
          v2110 = i29 ^ *((_QWORD *)&i29 + 1);
          *((_QWORD *)&i29 + 1) = ((unsigned __int64)i29 ^ *((_QWORD *)&i29 + 1)) / 3;
          if ( v2110 == 3LL * *((_QWORD *)&i29 + 1) )
          {
            v2111 = (unsigned int)v2428;
            v2112 = (unsigned __int64)v2448;
            v2113 = 0;
            v2114 = __ROR8__(v2072, (char)v2072);
            v2115 = (unsigned __int64)v2445;
            v2116 = v2072;
            do
            {
              *v2072 -= (unsigned __int64)v2116 + v2113;
              v2117 = *v2072;
              if ( (v2076 & 0x100) != 0 )
                v2118 = v2117 ^ v2114;
              else
                v2118 = v2115 ^ __ROR8__(v2114 ^ _byteswap_uint64(v2117 ^ v2112), v2115);
              *v2072 = v2118;
              v2119 = *(_DWORD *)v2072 ^ 0xEFA;
              *((_QWORD *)&i29 + 1) = __ROR8__(v2113 ^ (unsigned __int64)(200 - v2113), ~*(_BYTE *)v2072++);
              ++v2113;
              v2114 = v2111 ^ ((unsigned __int64)v2116 + __ROL8__(*((_QWORD *)&i29 + 1) ^ v2114, v2119));
            }
            while ( v2113 < 0x19 );
            i38 = v2426;
            v2081 = v2427;
          }
        }
        v2120 = *(const char **)(v2081 + 8);
        v2121 = *(unsigned int *)(v2081 + 16);
        v94 = (unsigned __int64)v2120;
        *(_DWORD *)(i38 + 2120) += v2121;
        v2122 = v2120;
        v2123 = *(_DWORD *)(i38 + 2100);
        v2124 = *(_QWORD *)(i38 + 2104);
        if ( v2120 < &v2120[v2121] )
        {
          *((_QWORD *)&i29 + 1) = 64LL;
          do
          {
            _mm_prefetch(v2122, 0);
            v2122 += 64;
          }
          while ( v2122 < &v2120[v2121] );
        }
        v2125 = *(_QWORD *)(i38 + 2104);
        v2126 = (unsigned int)v2121 >> 7;
        if ( (unsigned int)v2121 >> 7 )
        {
          do
          {
            v2127 = 8LL;
            do
            {
              v2128 = *(_QWORD *)(v94 + 8) ^ __ROL8__(*(_QWORD *)v94 ^ v2125, v2123);
              v94 += 16LL;
              v2125 = __ROL8__(v2128, v2123);
              --v2127;
            }
            while ( v2127 );
            i29 = (__ROL8__(v2124 ^ (v94 - (_QWORD)v2120), 17) ^ v2124 ^ (v94 - (unsigned __int64)v2120))
                * (unsigned __int128)0x7010008004002001uLL;
            v2585 = *((_QWORD *)&i29 + 1);
            v2123 = ((unsigned __int8)i29 ^ (unsigned __int8)(BYTE8(i29) ^ v2123)) & 0x3F;
            if ( !v2123 )
              LOBYTE(v2123) = 1;
            --v2126;
          }
          while ( v2126 );
          i38 = v2426;
          v2081 = v2427;
        }
        v2129 = v2121 & 0x7F;
        if ( v2129 >= 8 )
        {
          v2130 = (unsigned __int64)v2129 >> 3;
          do
          {
            v2125 = __ROL8__(*(_QWORD *)v94 ^ v2125, v2123);
            v94 += 8LL;
            v2129 -= 8;
            --v2130;
          }
          while ( v2130 );
        }
        if ( v2129 )
        {
          do
          {
            v2131 = *(unsigned __int8 *)v94++;
            v2125 = __ROL8__(v2131 ^ v2125, v2123);
            --v2129;
          }
          while ( v2129 );
          i38 = v2426;
        }
        v2132 = v2125 >> 31;
        i43 = 0LL;
        while ( v2132 )
        {
          LODWORD(v2125) = v2132 ^ v2125;
          v2132 >>= 31;
        }
        *(_DWORD *)(v2081 + 20) = v2125 & 0x7FFFFFFF;
      }
    }
    else
    {
      ++*(_DWORD *)(i38 + 2656);
    }
    goto LABEL_3289;
  }
  i43 = 0LL;
LABEL_3290:
  v2133 = *(_DWORD *)(i38 + 2520);
  v2677 = 0;
  v2425 = 0LL;
  LODWORD(v2428) = v2133;
  if ( (v2133 & 0x20000000) != 0 )
    goto LABEL_3371;
  if ( i38 != a1 )
  {
    v2218 = *(_QWORD *)(i38 + 2024);
    v2219 = *(_DWORD *)(i38 + 2676) - 200;
    v2444 = *(_DWORD *)(i38 + 2428);
    v2445 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(i38 + 1248);
    v2220 = v2219 >> 3;
    v2449 = *(_QWORD *)(i38 + 1464);
    v2425 = v2218;
    *(_DWORD *)(i38 + 196) = v2220;
    do
    {
      v2221 = __rdtsc();
      v2222 = (__ROR8__(v2221, 3) ^ v2221) * (unsigned __int128)0x7010008004002001uLL;
      v2590 = *((_QWORD *)&v2222 + 1);
      v2223 = v2222 ^ *((_QWORD *)&v2222 + 1);
    }
    while ( (unsigned __int64)v2222 == *((_QWORD *)&v2222 + 1) );
    v2224 = (char *)(i38 + 1976);
    v2430 = *(_QWORD *)(i38 + 2008);
    v2225 = v2654;
    v2678 = *(_DWORD *)(i38 + 2120);
    v2226 = 32;
    v2227 = 4LL;
    do
    {
      v2226 -= 8;
      *(_QWORD *)v2225 = *(_QWORD *)v2224;
      v2224 += 8;
      v2225 += 8;
      --v2227;
    }
    while ( v2227 );
    if ( v2226 )
    {
      do
      {
        v2228 = *v2224++;
        *v2225++ = v2228;
        --v2226;
      }
      while ( v2226 );
      i38 = v2426;
    }
    *(_QWORD *)(i38 + 2008) = 0LL;
    v2229 = (_QWORD *)(i38 + 1976);
    *(_DWORD *)(i38 + 2120) = 0;
    v2230 = 32;
    v2231 = 4LL;
    do
    {
      *v2229 = 0LL;
      v2230 -= 8;
      ++v2229;
      --v2231;
    }
    while ( v2231 );
    for ( ; v2230; --v2230 )
    {
      *(_BYTE *)v2229 = 0;
      v2229 = (_QWORD *)((char *)v2229 + 1);
    }
    v2232 = *(unsigned int *)(i38 + 2052);
    v2233 = (_QWORD *)i38;
    *(_DWORD *)(i38 + 2120) += v2232;
    v2234 = (const char *)i38;
    v2235 = *(_DWORD *)(i38 + 2100);
    v2236 = *(_QWORD *)(i38 + 2104);
    if ( i38 < (unsigned __int64)(i38 + v2232) )
    {
      do
      {
        _mm_prefetch(v2234, 0);
        v2234 += 64;
      }
      while ( (unsigned __int64)v2234 < i38 + v2232 );
    }
    v2237 = *(_QWORD *)(i38 + 2104);
    v2238 = (unsigned int)v2232 >> 7;
    if ( (unsigned int)v2232 >> 7 )
    {
      do
      {
        v2239 = 8LL;
        do
        {
          v2240 = v2233[1] ^ __ROL8__(*v2233 ^ v2237, v2235);
          v2233 += 2;
          v2237 = __ROL8__(v2240, v2235);
          --v2239;
        }
        while ( v2239 );
        v2241 = (__ROL8__(v2236 ^ ((unsigned __int64)v2233 - i38), 17) ^ v2236 ^ ((unsigned __int64)v2233 - i38))
              * (unsigned __int128)0x7010008004002001uLL;
        v2591 = *((_QWORD *)&v2241 + 1);
        v2235 = ((unsigned __int8)v2241 ^ (unsigned __int8)(BYTE8(v2241) ^ v2235)) & 0x3F;
        if ( !v2235 )
          LOBYTE(v2235) = 1;
        --v2238;
      }
      while ( v2238 );
      v2133 = v2428;
    }
    v2242 = v2232 & 0x7F;
    if ( v2242 >= 8 )
    {
      v2243 = (unsigned __int64)v2242 >> 3;
      do
      {
        v2237 = __ROL8__(*v2233++ ^ v2237, v2235);
        v2242 -= 8;
        --v2243;
      }
      while ( v2243 );
    }
    for ( ; v2242; --v2242 )
    {
      v2244 = *(unsigned __int8 *)v2233;
      v2233 = (_QWORD *)((char *)v2233 + 1);
      v2237 = __ROL8__(v2244 ^ v2237, v2235);
    }
    v2245 = (_QWORD *)(i38 + 1976);
    v2246 = 4LL;
    *(_QWORD *)(i38 + 2008) = v2430;
    *(_DWORD *)(i38 + 2120) += v2678;
    v2247 = v2654;
    v2248 = 32;
    do
    {
      v2248 -= 8;
      *v2245 = *(_QWORD *)v2247;
      v2247 += 8;
      ++v2245;
      --v2246;
    }
    while ( v2246 );
    if ( v2248 )
    {
      do
      {
        v2249 = *v2247++;
        *(_BYTE *)v2245 = v2249;
        v2245 = (_QWORD *)((char *)v2245 + 1);
        --v2248;
      }
      while ( v2248 );
      i38 = v2426;
    }
    *(_QWORD *)(i38 + 2008) = v2237;
    if ( (*(_DWORD *)(i38 + 2520) & 0x20000000) != 0 )
      goto LABEL_3426;
    v2250 = (_QWORD *)i38;
    for ( i40 = 0; i40 < 0x19; ++i40 )
      *v2250++ ^= v2223;
    v2478 = v2223;
    v2252 = v2220;
    if ( v2220 )
    {
      v2253 = &v2250[v2220 - 1];
      while ( 1 )
      {
        *v2253-- ^= v2223;
        v2478 = __ROR8__(v2223, v2252);
        _bittestandcomplement64(&v2478, v2478 & 0x3F);
        if ( !--v2252 )
          break;
        v2223 = v2478;
      }
    }
    if ( (v2133 & 0x40000) != 0 )
    {
      v2254 = __rdtsc();
      v2255 = (__ROR8__(v2254, 3) ^ v2254) * (unsigned __int128)0x7010008004002001uLL;
      v2592 = *((_QWORD *)&v2255 + 1);
      if ( ((unsigned __int64)v2255 ^ *((_QWORD *)&v2255 + 1)) != 3
                                                                * (((unsigned __int64)v2255 ^ *((_QWORD *)&v2255 + 1))
                                                                 / 3) )
        goto LABEL_3426;
    }
    else if ( (v2133 & 0x80u) != 0 )
    {
LABEL_3426:
      v2677 = 1;
      goto LABEL_3427;
    }
    v2256 = v2449;
    v2257 = (unsigned __int64)v2445;
    v2258 = 25;
    v2259 = __ROR8__(i38, i38);
    v2260 = 0;
    v2261 = (__int64 *)i38;
    v2262 = v2444;
    do
    {
      *v2261 -= i38 + v2260;
      v2263 = *v2261;
      if ( (v2133 & 0x100) != 0 )
        v2264 = v2263 ^ v2259;
      else
        v2264 = v2256 ^ __ROR8__(v2259 ^ _byteswap_uint64(v2263 ^ v2257), v2256);
      *v2261 = v2264;
      v2265 = __ROL8__(
                __ROR8__(v2260 ^ (unsigned __int64)(200 - v2260), ~*(_BYTE *)v2261) ^ v2259,
                *(_BYTE *)v2261 ^ 0xFAu);
      ++v2261;
      ++v2260;
      v2259 = v2262 ^ (i38 + v2265);
      if ( v2260 == 25 )
      {
        v2266 = 0;
        if ( (v2133 & 0x40000) == 0 )
          v2266 = v2220;
        v2258 += v2266;
      }
    }
    while ( v2260 < v2258 );
    goto LABEL_3426;
  }
  if ( (v2133 & 0x4000) != 0 || !*(_DWORD *)(i38 + 2328) )
  {
    v2134 = sub_140BC9AF8((_DWORD *)a1, *(_DWORD *)(a1 + 2052), *(_DWORD *)(a1 + 2372));
    i38 = v2134;
    if ( v2134 )
    {
      v2135 = *(_DWORD *)(v2134 + 2520);
      v2136 = *(_QWORD *)(v2134 + 2024);
      v2137 = *(_DWORD *)(i38 + 2676) - 200;
      v2444 = *(_DWORD *)(i38 + 2428);
      v2445 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(i38 + 1248);
      v2138 = v2137 >> 3;
      v2449 = *(_QWORD *)(i38 + 1464);
      v2425 = v2136;
      *(_DWORD *)(i38 + 196) = v2138;
      do
      {
        v2139 = __rdtsc();
        v2140 = (__ROR8__(v2139, 3) ^ v2139) * (unsigned __int128)0x7010008004002001uLL;
        v2586 = *((_QWORD *)&v2140 + 1);
        v2141 = v2140 ^ *((_QWORD *)&v2140 + 1);
      }
      while ( (unsigned __int64)v2140 == *((_QWORD *)&v2140 + 1) );
      v2142 = (char *)(i38 + 1976);
      v2143 = v2652;
      v2430 = *(_QWORD *)(i38 + 2008);
      v2144 = 32;
      LODWORD(v2428) = *(_DWORD *)(i38 + 2120);
      v2145 = 4LL;
      do
      {
        v2144 -= 8;
        *(_QWORD *)v2143 = *(_QWORD *)v2142;
        v2142 += 8;
        v2143 += 8;
        --v2145;
      }
      while ( v2145 );
      for ( ; v2144; --v2144 )
      {
        v2146 = *v2142++;
        *v2143++ = v2146;
      }
      *(_QWORD *)(i38 + 2008) = 0LL;
      v2147 = (_QWORD *)(i38 + 1976);
      *(_DWORD *)(i38 + 2120) = 0;
      v2148 = 32;
      v2149 = 4LL;
      do
      {
        *v2147 = 0LL;
        v2148 -= 8;
        ++v2147;
        --v2149;
      }
      while ( v2149 );
      for ( ; v2148; --v2148 )
      {
        *(_BYTE *)v2147 = 0;
        v2147 = (_QWORD *)((char *)v2147 + 1);
      }
      v2150 = *(unsigned int *)(i38 + 2052);
      v2151 = (_QWORD *)i38;
      *(_DWORD *)(i38 + 2120) += v2150;
      v2152 = (const char *)i38;
      v2153 = *(_DWORD *)(i38 + 2100);
      v2154 = *(_QWORD *)(i38 + 2104);
      if ( i38 < (unsigned __int64)(i38 + v2150) )
      {
        do
        {
          _mm_prefetch(v2152, 0);
          v2152 += 64;
        }
        while ( (unsigned __int64)v2152 < i38 + v2150 );
      }
      v2155 = *(_QWORD *)(i38 + 2104);
      for ( i41 = (unsigned int)v2150 >> 7; i41; --i41 )
      {
        v2157 = 8LL;
        do
        {
          v2158 = v2151[1] ^ __ROL8__(*v2151 ^ v2155, v2153);
          v2151 += 2;
          v2155 = __ROL8__(v2158, v2153);
          --v2157;
        }
        while ( v2157 );
        v2159 = (__ROL8__(v2154 ^ ((unsigned __int64)v2151 - i38), 17) ^ v2154 ^ ((unsigned __int64)v2151 - i38))
              * (unsigned __int128)0x7010008004002001uLL;
        v2587 = *((_QWORD *)&v2159 + 1);
        v2153 = ((unsigned __int8)v2159 ^ (unsigned __int8)(BYTE8(v2159) ^ v2153)) & 0x3F;
        if ( !v2153 )
          LOBYTE(v2153) = 1;
      }
      v2160 = v2150 & 0x7F;
      if ( v2160 >= 8 )
      {
        v2161 = (unsigned __int64)v2160 >> 3;
        do
        {
          v2155 = __ROL8__(*v2151++ ^ v2155, v2153);
          v2160 -= 8;
          --v2161;
        }
        while ( v2161 );
      }
      for ( ; v2160; --v2160 )
      {
        v2162 = *(unsigned __int8 *)v2151;
        v2151 = (_QWORD *)((char *)v2151 + 1);
        v2155 = __ROL8__(v2162 ^ v2155, v2153);
      }
      v2163 = v2428;
      v2164 = (_QWORD *)(i38 + 1976);
      v2165 = 4LL;
      *(_QWORD *)(i38 + 2008) = v2430;
      *(_DWORD *)(i38 + 2120) += v2163;
      v2166 = v2652;
      v2167 = 32;
      do
      {
        v2167 -= 8;
        *v2164 = *(_QWORD *)v2166;
        v2166 += 8;
        ++v2164;
        --v2165;
      }
      while ( v2165 );
      for ( ; v2167; --v2167 )
      {
        v2168 = *v2166++;
        *(_BYTE *)v2164 = v2168;
        v2164 = (_QWORD *)((char *)v2164 + 1);
      }
      *(_QWORD *)(i38 + 2008) = v2155;
      if ( (*(_DWORD *)(i38 + 2520) & 0x20000000) != 0 )
        goto LABEL_3343;
      v2169 = (_QWORD *)i38;
      for ( i42 = 0; i42 < 0x19; ++i42 )
        *v2169++ ^= v2141;
      v2477 = v2141;
      v2171 = v2138;
      if ( v2138 )
      {
        v2172 = &v2169[v2138 - 1];
        while ( 1 )
        {
          *v2172-- ^= v2141;
          v2477 = __ROR8__(v2141, v2171);
          _bittestandcomplement64(&v2477, v2477 & 0x3F);
          if ( !--v2171 )
            break;
          v2141 = v2477;
        }
      }
      if ( (v2135 & 0x40000) != 0 )
      {
        v2173 = __rdtsc();
        v2174 = (__ROR8__(v2173, 3) ^ v2173) * (unsigned __int128)0x7010008004002001uLL;
        v2588 = *((_QWORD *)&v2174 + 1);
        if ( ((unsigned __int64)v2174 ^ *((_QWORD *)&v2174 + 1)) != 3
                                                                  * (((unsigned __int64)v2174 ^ *((_QWORD *)&v2174 + 1))
                                                                   / 3) )
          goto LABEL_3343;
      }
      else if ( (v2135 & 0x80u) != 0 )
      {
LABEL_3343:
        v2677 = 1;
LABEL_3427:
        v2267 = __rdtsc();
        v2268 = (__ROR8__(v2267, 3) ^ v2267) * (unsigned __int128)0x7010008004002001uLL;
        v2593 = *((_QWORD *)&v2268 + 1);
        v2211 = *((_QWORD *)&v2268 + 1) ^ v2268;
        goto LABEL_3431;
      }
      v2175 = v2449;
      v2176 = (unsigned __int64)v2445;
      v2177 = 25;
      v2178 = __ROR8__(i38, i38);
      v2179 = 0;
      v2180 = (__int64 *)i38;
      v2181 = v2444;
      do
      {
        *v2180 -= i38 + v2179;
        v2182 = *v2180;
        if ( (v2135 & 0x100) != 0 )
          v2183 = v2182 ^ v2178;
        else
          v2183 = v2175 ^ __ROR8__(v2178 ^ _byteswap_uint64(v2182 ^ v2176), v2175);
        *v2180 = v2183;
        v2184 = __ROL8__(
                  __ROR8__(v2179 ^ (unsigned __int64)(200 - v2179), ~*(_BYTE *)v2180) ^ v2178,
                  *(_BYTE *)v2180 ^ 0xFAu);
        ++v2180;
        ++v2179;
        v2178 = v2181 ^ (i38 + v2184);
        if ( v2179 == 25 )
        {
          v2185 = 0;
          if ( (v2135 & 0x40000) == 0 )
            v2185 = v2138;
          v2177 += v2185;
        }
      }
      while ( v2179 < v2177 );
      goto LABEL_3343;
    }
  }
  *(_DWORD *)(a1 + 196) = 1;
  v2186 = *(_QWORD *)(a1 + 2008);
  v2187 = (char *)(a1 + 1976);
  v2188 = *(_DWORD *)(a1 + 2120);
  v2189 = v2653;
  i38 = a1;
  v2430 = v2186;
  LODWORD(v2428) = v2188;
  v2190 = 4LL;
  v2191 = 32;
  do
  {
    v2191 -= 8;
    *(_QWORD *)v2189 = *(_QWORD *)v2187;
    v2187 += 8;
    v2189 += 8;
    --v2190;
  }
  while ( v2190 );
  for ( ; v2191; --v2191 )
  {
    v2192 = *v2187++;
    *v2189++ = v2192;
  }
  *(_QWORD *)(a1 + 2008) = 0LL;
  v2193 = (_QWORD *)(a1 + 1976);
  *(_DWORD *)(a1 + 2120) = 0;
  v2194 = 32;
  v2195 = 4LL;
  do
  {
    *v2193 = 0LL;
    v2194 -= 8;
    ++v2193;
    --v2195;
  }
  while ( v2195 );
  for ( ; v2194; --v2194 )
  {
    *(_BYTE *)v2193 = 0;
    v2193 = (_QWORD *)((char *)v2193 + 1);
  }
  v2196 = *(unsigned int *)(a1 + 2052);
  v2197 = (_QWORD *)a1;
  *(_DWORD *)(a1 + 2120) += v2196;
  v2198 = (const char *)a1;
  v2199 = *(_DWORD *)(a1 + 2100);
  v2200 = *(_QWORD *)(a1 + 2104);
  if ( a1 < (unsigned __int64)(v2196 + a1) )
  {
    do
    {
      _mm_prefetch(v2198, 0);
      v2198 += 64;
    }
    while ( (unsigned __int64)v2198 < v2196 + a1 );
  }
  v2048 = *(_QWORD *)(a1 + 2104);
  v2201 = (unsigned int)v2196 >> 7;
  if ( (unsigned int)v2196 >> 7 )
  {
    do
    {
      v2202 = 8LL;
      do
      {
        v2203 = v2197[1] ^ __ROL8__(*v2197 ^ v2048, v2199);
        v2197 += 2;
        v2048 = __ROL8__(v2203, v2199);
        --v2202;
      }
      while ( v2202 );
      v2204 = (__ROL8__(v2200 ^ ((unsigned __int64)v2197 - a1), 17) ^ v2200 ^ ((unsigned __int64)v2197 - a1))
            * (unsigned __int128)0x7010008004002001uLL;
      v2589 = *((_QWORD *)&v2204 + 1);
      v2199 = ((unsigned __int8)v2204 ^ (unsigned __int8)(BYTE8(v2204) ^ v2199)) & 0x3F;
      if ( !v2199 )
        LOBYTE(v2199) = 1;
      --v2201;
    }
    while ( v2201 );
    v2186 = v2430;
    v2188 = v2428;
  }
  v2205 = v2196 & 0x7F;
  if ( v2205 >= 8 )
  {
    v2206 = (unsigned __int64)v2205 >> 3;
    do
    {
      v2048 = __ROL8__(*v2197++ ^ v2048, v2199);
      v2205 -= 8;
      --v2206;
    }
    while ( v2206 );
  }
  for ( ; v2205; --v2205 )
  {
    v2207 = *(unsigned __int8 *)v2197;
    v2197 = (_QWORD *)((char *)v2197 + 1);
    v2048 = __ROL8__(v2207 ^ v2048, v2199);
  }
  v94 = 4LL;
  *(_QWORD *)(a1 + 2008) = v2186;
  *(_DWORD *)(a1 + 2120) += v2188;
  v2208 = v2653;
  *((_QWORD *)&i29 + 1) = a1 + 1976;
  v2209 = 32;
  do
  {
    v2209 -= 8;
    **((_QWORD **)&i29 + 1) = *(_QWORD *)v2208;
    v2208 += 8;
    *((_QWORD *)&i29 + 1) += 8LL;
    --v94;
  }
  while ( v94 );
  for ( i43 = 0LL; v2209; --v2209 )
  {
    LOBYTE(i29) = *v2208++;
    **((_BYTE **)&i29 + 1) = i29;
    ++*((_QWORD *)&i29 + 1);
  }
  *(_QWORD *)(a1 + 2008) = v2048;
LABEL_3371:
  v2210 = *(_DWORD *)(i38 + 2520);
  v2211 = 0LL;
  if ( (v2210 & 0x20000000) == 0 )
  {
    if ( (v2210 & 0x80u) == 0 )
    {
      v2212 = *(_QWORD *)(i38 + 1464);
      v2213 = *(_QWORD *)(i38 + 1248);
      v2214 = (int *)i38;
      v94 = __ROR8__(i38, i38);
      v2215 = 0;
      v2430 = *(unsigned int *)(i38 + 2428);
      do
      {
        v2216 = *(_QWORD *)v2214 - i43 - i38;
        *(_QWORD *)v2214 = v2216;
        if ( (v2210 & 0x100) != 0 )
          v2217 = v2216 ^ v94;
        else
          v2217 = v2212 ^ __ROR8__(v94 ^ _byteswap_uint64(v2216 ^ v2213), v2212);
        v2269 = i43 ^ (200 - v2215);
        *(_QWORD *)v2214 = v2217;
        ++v2215;
        v2270 = *v2214;
        v2214 += 2;
        v2271 = ~(_BYTE)v2270;
        v2048 = v2270 ^ 0xEFAu;
        *((_QWORD *)&i29 + 1) = __ROR8__(v2269, v2271);
        ++i43;
        v94 = v2430 ^ (i38 + __ROL8__(*((_QWORD *)&i29 + 1) ^ v94, v2048));
      }
      while ( v2215 < 0x19 );
    }
    (*(void (__fastcall **)(__int64, _QWORD, __int64, unsigned __int64))(i38 + 632))(
      i38 + 2080,
      *((_QWORD *)&i29 + 1),
      v2048,
      v94);
  }
LABEL_3431:
  v2272 = a1;
  v2273 = *(_DWORD **)(a1 + 2040);
  if ( (*(_DWORD *)(a1 + 2520) & 0x8000000) != 0 )
  {
    v2274 = __rdtsc();
    v2275 = (__ROR8__(v2274, 3) ^ v2274) * (unsigned __int128)0x7010008004002001uLL;
    v2594 = *((_QWORD *)&v2275 + 1);
    v2273 = (_DWORD *)(*(_QWORD *)(a1 + 1480) + 16LL * (((unsigned __int8)v2275 ^ BYTE8(v2275)) & 0xF));
  }
  v2276 = 40;
  v2277 = (char *)(a1 + 2328);
  v2278 = 40;
  v2279 = &v2517;
  v2280 = 5LL;
  do
  {
    v2278 -= 8;
    *(_QWORD *)v2279 = *(_QWORD *)v2277;
    v2277 += 8;
    v2279 += 2;
    --v2280;
  }
  while ( v2280 );
  if ( v2278 )
  {
    do
    {
      v2281 = *v2277++;
      *(_BYTE *)v2279 = v2281;
      v2279 = (int *)((char *)v2279 + 1);
      --v2278;
    }
    while ( v2278 );
    v2272 = a1;
  }
  v2282 = *(_DWORD *)(v2272 + 2520);
  if ( (v2282 & 0x4000) != 0 || !*(_DWORD *)(v2272 + 2328) )
  {
    if ( (v2282 & 0x20000000) != 0 )
      goto LABEL_3582;
    v2283 = (unsigned __int8)(*(_BYTE *)(v2272 + 2368) - 1);
    v2284 = __rdtsc();
    v2285 = (__ROR8__(v2284, 3) ^ v2284) * (unsigned __int128)0x7010008004002001uLL;
    v2595 = *((_QWORD *)&v2285 + 1);
    v2286 = v2283 + (*((_QWORD *)&v2285 + 1) ^ (unsigned __int64)v2285) % (unsigned int)(63 - v2283);
    do
    {
      v2287 = __rdtsc();
      v2288 = __ROR8__(v2287, 3) ^ v2287;
      v2596 = (v2288 * (unsigned __int128)0x7010008004002001uLL) >> 64;
      v2289 = v2283 + (v2596 ^ (0x7010008004002001LL * v2288)) % (unsigned int)(63 - v2283);
    }
    while ( v2289 == v2286 );
    v2272 = a1;
    v2290 = (i38 ^ v2211 | (1LL << v2286)) & ~(1LL << v2289);
    v2291 = *(_QWORD *)(a1 + 1968);
    v2292 = *(_QWORD *)(a1 + 1960);
    if ( *(_DWORD *)(a1 + 2372) == 3 )
    {
      v2293 = v2425;
      if ( v2425 )
      {
        v2294 = *(_QWORD *)(a1 + 880);
        *(_BYTE *)v2291 = 19;
        *(_BYTE *)(v2291 + 1) = 1;
        *(_WORD *)(v2291 + 2) = 0;
        *(_QWORD *)(v2291 + 24) = v2294;
        *(_QWORD *)(v2291 + 32) = v2293;
        *(_QWORD *)(v2291 + 56) = 0LL;
        *(_QWORD *)(v2291 + 16) = 0LL;
        *(_QWORD *)(v2291 + 40) = v2290;
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(a1 + 864))(
          *(_QWORD *)(v2293 + 8),
          *(unsigned int *)(v2293 + 16),
          *(_QWORD *)v2293);
        v2295 = *(_QWORD *)v2293;
        v2296 = ((unsigned __int64)v2293 ^ __ROL8__(v2293, 17)) * (unsigned __int128)0x7010008004002001uLL;
        v2297 = 4;
        v2597 = *((_QWORD *)&v2296 + 1);
        v2298 = v2296 ^ *((_QWORD *)&v2296 + 1);
        v2299 = (_QWORD *)(v2293 + 24);
        v2300 = v2298;
        do
        {
          *v2299-- ^= v2300;
          v2300 = __ROL8__(v2300, v2297--);
        }
        while ( v2297 );
        if ( ((unsigned __int8)v2298 & 0xFu) < 7 )
        {
          v2301 = __ROL8__(v2295, 17);
          v2302 = 6;
          v2598 = ((v2295 ^ v2301) * (unsigned __int128)0x7010008004002001uLL) >> 64;
          v2303 = ((0x7010008004002001LL * (v2295 ^ v2301)) ^ v2598) + v2300;
          v2304 = (_QWORD *)(v2295 + 40);
          v2305 = (unsigned int)*(__int16 *)(v2295 + 8);
          do
          {
            *v2304 ^= v2303;
            v2303 = __ROL8__(v2303, v2302);
            --v2304;
            --v2302;
          }
          while ( v2302 );
          v2306 = (unsigned __int64)(v2305 - 48) >> 3;
          if ( (_DWORD)v2306 )
          {
            v2307 = (_QWORD *)(v2295 + 8 * ((int)v2306 + 5LL));
            do
            {
              *v2307 ^= v2303;
              v2303 = __ROL8__(v2303, v2306);
              --v2307;
              LODWORD(v2306) = v2306 - 1;
            }
            while ( (_DWORD)v2306 );
          }
        }
        v2272 = a1;
        goto LABEL_3454;
      }
      v2272 = a1;
    }
    *(_BYTE *)v2291 = 19;
    *(_BYTE *)(v2291 + 1) = 1;
    *(_WORD *)(v2291 + 2) = 0;
    *(_QWORD *)(v2291 + 24) = v2273;
    *(_QWORD *)(v2291 + 32) = v2290;
    *(_QWORD *)(v2291 + 56) = 0LL;
    *(_QWORD *)(v2291 + 16) = 0LL;
LABEL_3454:
    *(_QWORD *)(v2291 + 64) = v2211;
    if ( (*(_DWORD *)(v2272 + 2520) & 0x80u) == 0 )
    {
      v2308 = v2291;
    }
    else
    {
      v2308 = (unsigned __int64)(v2273 - 18);
      *((_QWORD *)v2273 - 1) = v2291;
      v2309 = __rdtsc();
      v2310 = 25LL;
      v2311 = (__ROR8__(v2309, 3) ^ v2309) * (unsigned __int128)0x7010008004002001uLL;
      v2599 = *((_QWORD *)&v2311 + 1);
      v2312 = v2311 ^ *((_QWORD *)&v2311 + 1);
      v2313 = v2273;
      do
      {
        *v2313++ ^= v2312;
        --v2310;
      }
      while ( v2310 );
      *v2273 = 1213280584;
      *(_QWORD *)(v2308 + 32) = v2312;
    }
    v2314 = *(_QWORD *)(v2272 + 2784);
    if ( v2314 )
    {
      v2315 = *(_QWORD *)(v2314 + 32);
      v2316 = *(_QWORD *)(v2272 + 1416) ^ ((v2315 ^ ((v2315 ^ 0xE04C2400uLL) >> 4)) >> 4);
      v2317 = v2316;
      v2318 = (*(_BYTE *)(v2272 + 1416) ^ ((v2315 ^ ((v2315 ^ 0xE04C2400uLL) >> 4)) >> 4)) & 0xF;
      if ( !v2318 )
        v2318 = 1;
      do
      {
        v2319 = (unsigned __int64 *)(v2315 + (v2316 & 0xF));
        v2315 = *v2319;
        v2316 ^= (*v2319 ^ ((*v2319 ^ 0x1DF400) >> 4)) >> 4;
        --v2318;
      }
      while ( v2318 );
      if ( (v2317 & 0x1000) != 0 )
        v2308 ^= v2317;
      *v2319 = v2308;
      v2308 = *(_QWORD *)(v2272 + 2784);
    }
    _InterlockedOr(v2421, 0);
    v2320 = *(_DWORD *)(v2272 + 2136);
    if ( v2320 )
    {
      v2321 = v2320 - 1;
      if ( v2321 )
      {
        v2322 = v2321 - 1;
        if ( v2322 )
        {
          v2323 = v2322 - 1;
          if ( v2323 )
          {
            if ( v2323 == 1 )
            {
              v2327 = *(_QWORD *)(v2272 + 2600);
              v2328 = *(_QWORD *)(v2272 + 2616);
              v2329 = *(_QWORD *)(v2272 + 2608);
              v2330 = *(_QWORD *)(v2272 + 2528);
              *(_BYTE *)v2327 = 18;
              *(_BYTE *)(v2327 + 2) = 88;
              *(_BYTE *)(v2327 + 80) = 0;
              *(_QWORD *)(v2327 + 8) = v2330;
              *(_QWORD *)(v2327 + 32) = v2329;
              *(_QWORD *)(v2327 + 40) = 0LL;
              *(_QWORD *)(v2327 + 48) = v2328;
              *(_BYTE *)(v2327 + 81) = 0;
              *(_QWORD *)(v2327 + 56) = 0LL;
              *(_BYTE *)(v2327 + 82) = 0;
              if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, unsigned __int64, _QWORD, _QWORD))(v2272 + 704))(
                      *(_QWORD *)(v2272 + 2600),
                      v2291,
                      0LL,
                      0LL) )
              {
                if ( !*(_DWORD *)(v2272 + 2328) )
                {
                  *(_QWORD *)(v2272 + 2336) = v2272 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v2272 + 2344) = 0LL;
                  *(_QWORD *)(v2272 + 2352) = 260LL;
                  *(_QWORD *)(v2272 + 2360) = v2330;
                  *(_DWORD *)(v2272 + 2328) = 1;
                  v2331 = *(_DWORD *)(v2272 + 2520);
                  if ( (v2331 & 0x20000000) == 0 && (*(_DWORD *)(v2272 + 2524) & 0x200000) != 0 && (v2331 & 1) != 0 )
                  {
                    v2332 = *(unsigned int *)(v2272 + 2676);
                    v2333 = *(_QWORD *)(v2272 + 2104);
                    v2334 = *(_QWORD *)(v2272 + 2680);
                    v2335 = (_QWORD *)(v2332 + v2272);
                    v2336 = v2332
                          + v2272
                          + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v2272 + 2052) - v2332) >> 3);
                    while ( v2335 != (_QWORD *)v2336 )
                    {
                      *v2335 ^= v2334;
                      v2334 = ((v2333 ^ *v2335++) + __ROR8__(v2334, v2334 & 0x3F)) ^ 0xEFA;
                    }
                    *(_DWORD *)(v2272 + 2524) &= ~0x200000u;
                    if ( v2334 != *(_QWORD *)(v2272 + 2688) )
                    {
                      v2337 = *(_DWORD *)(v2272 + 2052);
                      v2338 = *(_QWORD *)(v2272 + 1416);
                      *(_QWORD *)v2338 = v2272;
                      *(_DWORD *)(v2338 + 16) = v2337;
                      if ( !*(_DWORD *)(v2272 + 2328) )
                        *(_QWORD *)(*(_QWORD *)(v2272 + 1416) + 24LL) = v2334 ^ *(_QWORD *)(v2272 + 2688);
                      ProbeAndFlag1(v2272, 0LL, v2334, 256LL);
                    }
                  }
                }
                v2339 = (char *)(v2272 + 2328);
                v2340 = 5LL;
                v2341 = &v2517;
                do
                {
                  v2276 -= 8;
                  *(_QWORD *)v2341 = *(_QWORD *)v2339;
                  v2339 += 8;
                  v2341 += 2;
                  --v2340;
                }
                while ( v2340 );
                v2272 = a1;
                if ( v2276 )
                {
                  do
                  {
                    v2342 = *v2339++;
                    *(_BYTE *)v2341 = v2342;
                    v2341 = (int *)((char *)v2341 + 1);
                    --v2276;
                  }
                  while ( v2276 );
                  v2272 = a1;
                }
              }
            }
            else
            {
              v2324 = *(_QWORD *)(v2272 + 2528);
              *(_QWORD *)(v2324 + 72) = v2308;
              _InterlockedOr(v2421, 0);
              v2325 = __rdtsc();
              v2326 = (__ROR8__(v2325, 3) ^ v2325) * (unsigned __int128)0x7010008004002001uLL;
              v2624 = *((_QWORD *)&v2326 + 1);
              *(_DWORD *)v2324 = (__int64)(((unsigned __int64)v2326 ^ *((_QWORD *)&v2326 + 1)) % 0x5F5E100 + 1200000000)
                               / 10000000;
            }
          }
          else
          {
            v2343 = *(_QWORD *)(v2272 + 2528);
            v2344 = *(_QWORD *)(v2343 + *(_QWORD *)(v2272 + 1704));
            if ( v2344 )
            {
              if ( !*(_DWORD *)(v2272 + 2328) )
              {
                *(_QWORD *)(v2272 + 2336) = v2272 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v2272 + 2344) = 0LL;
                *(_QWORD *)(v2272 + 2352) = 260LL;
                *(_QWORD *)(v2272 + 2360) = v2344;
                *(_DWORD *)(v2272 + 2328) = 1;
                v2345 = *(_DWORD *)(v2272 + 2520);
                if ( (v2345 & 0x20000000) == 0 && (*(_DWORD *)(v2272 + 2524) & 0x200000) != 0 && (v2345 & 1) != 0 )
                {
                  v2346 = *(unsigned int *)(v2272 + 2676);
                  v2347 = *(_QWORD *)(v2272 + 2104);
                  v2348 = *(_QWORD *)(v2272 + 2680);
                  v2349 = (_QWORD *)(v2346 + v2272);
                  v2350 = v2346 + v2272 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v2272 + 2052) - v2346) >> 3);
                  while ( v2349 != (_QWORD *)v2350 )
                  {
                    *v2349 ^= v2348;
                    v2348 = ((v2347 ^ *v2349++) + __ROR8__(v2348, v2348 & 0x3F)) ^ 0xEFA;
                  }
                  *(_DWORD *)(v2272 + 2524) &= ~0x200000u;
                  if ( v2348 != *(_QWORD *)(v2272 + 2688) )
                  {
                    v2351 = *(_DWORD *)(v2272 + 2052);
                    v2352 = *(_QWORD *)(v2272 + 1416);
                    *(_QWORD *)v2352 = v2272;
                    *(_DWORD *)(v2352 + 16) = v2351;
                    if ( !*(_DWORD *)(v2272 + 2328) )
                      *(_QWORD *)(*(_QWORD *)(v2272 + 1416) + 24LL) = v2348 ^ *(_QWORD *)(v2272 + 2688);
                    ProbeAndFlag1(v2272, 0LL, v2348, 256LL);
                  }
                }
              }
              v2353 = (char *)(v2272 + 2328);
              v2354 = 5LL;
              v2355 = &v2517;
              do
              {
                v2276 -= 8;
                *(_QWORD *)v2355 = *(_QWORD *)v2353;
                v2353 += 8;
                v2355 += 2;
                --v2354;
              }
              while ( v2354 );
              v2272 = a1;
              if ( v2276 )
              {
                do
                {
                  v2356 = *v2353++;
                  *(_BYTE *)v2355 = v2356;
                  v2355 = (int *)((char *)v2355 + 1);
                  --v2276;
                }
                while ( v2276 );
                v2272 = a1;
              }
            }
            _InterlockedOr(v2421, 0);
            *(_QWORD *)(v2343 + *(_QWORD *)(v2272 + 1704)) = v2291;
          }
        }
        else
        {
          *(_QWORD *)(*(_QWORD *)(v2272 + 2016) + 128LL) = v2308;
        }
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(v2272 + 2016) + *(_QWORD *)(v2272 + 1592)) = v2308;
      }
    }
    else
    {
      v2357 = __rdtsc();
      v2358 = (__ROR8__(v2357, 3) ^ v2357) * (unsigned __int128)0x7010008004002001uLL;
      v2601 = *((_QWORD *)&v2358 + 1);
      v2359 = -1200000000LL - ((unsigned __int64)v2358 ^ *((_QWORD *)&v2358 + 1)) % 0x5F5E100;
      *(_QWORD *)&v2358 = __rdtsc();
      v2360 = (__ROR8__(v2358, 3) ^ (unsigned __int64)v2358) * (unsigned __int128)0x7010008004002001uLL;
      v2602 = *((_QWORD *)&v2360 + 1);
      (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD, unsigned __int64, unsigned __int64))(v2272 + 488))(
        v2292,
        v2359,
        0LL,
        ((unsigned __int64)v2360 ^ *((_QWORD *)&v2360 + 1)) % 0x2710,
        v2308);
    }
  }
  if ( v2517 )
  {
    v2361 = *(_DWORD *)(v2272 + 2520);
    if ( (v2361 & 0x4000) == 0 )
    {
      v2362 = v2520;
      v2363 = (int)v2521;
      v2364 = v2519;
      v2365 = v2518;
      v2443 = (char *)v2520;
      v2436 = v2521;
      v2441 = v2519;
      v2434 = v2518;
      if ( KeGetCurrentIrql() < 2u )
      {
        KeGetCurrentIrql();
        __writecr8(2uLL);
        v2361 = *(_DWORD *)(v2272 + 2520);
      }
      v2366 = KeGetCurrentPrcb();
      v2367 = *(_QWORD *)((char *)&v2366->MxCsr + *(_QWORD *)(v2272 + 1600));
      v2368 = *(_QWORD *)(v2272 + 1608);
      v2427 = v2367;
      v2369 = *(_QWORD *)(v2272 + 1928) + *(_QWORD *)((char *)&v2366->MxCsr + v2368);
      v2370 = *(_QWORD *)((char *)&v2366->MxCsr + *(_QWORD *)(v2272 + 1624));
      v2432 = v2370;
      if ( (unsigned __int64)&v2468 > v2367 || (unsigned __int64)&v2468 < v2367 - *(unsigned int *)(v2272 + 1532) )
      {
        if ( *((_BYTE *)&v2366->MxCsr + *(_QWORD *)(v2272 + 1616))
          && (unsigned __int64)&v2468 <= v2369
          && (unsigned __int64)&v2468 >= v2369 - *(unsigned int *)(v2272 + 1528) )
        {
          v2367 = v2369;
          v2427 = v2369;
        }
        else
        {
          v2367 = *(_QWORD *)(v2370 + *(_QWORD *)(v2272 + 1672));
          v2427 = v2367;
        }
      }
      if ( (v2361 & 0x4000000) == 0 )
      {
        v300 = (*(_DWORD *)(v2272 + 2524) & 0x400000) == 0;
        v2442 = 0LL;
        if ( v300 )
        {
          v2371 = __readcr0();
          v2442 = (unsigned int *)v2371;
          __writecr0(v2371 & 0xFFFFFFFFFFFEFFFFuLL);
        }
        v2372 = v2272 + 2800;
        v2369 = 0LL;
        v2373 = v2272 + 2800 + 16LL * *(unsigned int *)(v2272 + 2792);
        v2425 = v2272 + 2800;
        v2374 = v2373;
        v2445 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v2373;
        v2455 = v2373;
        if ( *(_DWORD *)(v2272 + 2796) )
        {
          do
          {
            **(_QWORD **)v2374 = *(_QWORD *)(v2374 + 8);
            v2375 = __readcr4();
            if ( (v2375 & 0x20080) != 0 )
            {
              __writecr4(v2375 ^ 0x80);
              __writecr4(v2375);
            }
            else
            {
              v2376 = __readcr3();
              __writecr3(v2376);
            }
            v2374 += 16LL;
            v2369 = (unsigned int)(v2369 + 1);
          }
          while ( (unsigned int)v2369 < *(_DWORD *)(v2272 + 2796) );
          v2363 = (int)v2436;
          v2455 = v2374;
        }
        if ( v2372 < v2373 )
        {
          do
          {
            v2377 = *(unsigned int *)(v2372 + 8);
            v2378 = *(_QWORD *)v2372;
            v2679 = *(_DWORD *)(v2372 + 8);
            if ( (*(_DWORD *)(v2272 + 2524) & 0x400000) != 0 )
            {
              v2448 = (char *)v2374;
              v2382 = v2377;
              v2369 = ((v2378 & 0xFFF) + v2377 + 4095) >> 12;
              if ( (_DWORD)v2369 )
              {
                v2383 = a1;
                v2449 = (unsigned int)v2369;
                do
                {
                  v2384 = *(_QWORD *)(v2383 + 1496);
                  v2385 = v2643;
                  v2386 = 4LL;
                  LODWORD(v2387) = 4;
                  v2388 = v2384 + ((v2378 >> 9) & 0x7FFFFFFFF8LL);
                  do
                  {
                    *v2385++ = v2388;
                    v2388 = v2384 + ((v2388 >> 9) & 0x7FFFFFFFF8LL);
                    --v2386;
                  }
                  while ( v2386 );
                  do
                  {
                    v300 = (_DWORD)v2387 == 1;
                    v2387 = (unsigned int)(v2387 - 1);
                  }
                  while ( !v300 && (*(_DWORD *)v2643[v2387] & 0x80) == 0 );
                  v2389 = (_QWORD *)v2643[v2387];
                  v2430 = (__int64)v2389;
                  v2390 = *v2389 | 0x62LL;
                  *v2389 = v2390;
                  v2391 = __readcr4();
                  if ( (v2391 & 0x20080) != 0 )
                  {
                    __writecr4(v2391 ^ 0x80);
                    __writecr4(v2391);
                  }
                  else
                  {
                    v2392 = __readcr3();
                    __writecr3(v2392);
                  }
                  v2393 = v2382;
                  v2394 = (_QWORD *)v2378;
                  if ( 4096 - (v2378 & 0xFFF) < v2382 )
                    v2393 = 4096 - (v2378 & 0xFFF);
                  v2369 = (unsigned __int64)v2448;
                  v2395 = v2393;
                  if ( v2393 >= 8 )
                  {
                    v2396 = (unsigned __int64)v2393 >> 3;
                    do
                    {
                      v2395 -= 8;
                      *v2394 = *(_QWORD *)v2369;
                      v2369 += 8LL;
                      ++v2394;
                      --v2396;
                    }
                    while ( v2396 );
                    v2389 = (_QWORD *)v2430;
                  }
                  if ( v2395 )
                  {
                    v2397 = (char *)v2394 - v2369;
                    do
                    {
                      v2397[v2369] = *(_BYTE *)v2369;
                      ++v2369;
                      --v2395;
                    }
                    while ( v2395 );
                    v2383 = a1;
                  }
                  v2448 += v2393;
                  v2378 += v2393;
                  v2382 -= v2393;
                  *v2389 = v2390;
                  v2398 = __readcr4();
                  if ( (v2398 & 0x20080) != 0 )
                  {
                    __writecr4(v2398 ^ 0x80);
                    __writecr4(v2398);
                  }
                  else
                  {
                    v2399 = __readcr3();
                    __writecr3(v2399);
                  }
                  --v2449;
                }
                while ( v2449 );
                v2374 = v2455;
                v2372 = v2425;
                v2373 = (unsigned __int64)v2445;
                LODWORD(v2377) = v2679;
              }
              v2272 = a1;
            }
            else
            {
              v2369 = (unsigned int)v2377;
              v2379 = (_QWORD *)v2374;
              if ( (unsigned int)v2377 >= 8 )
              {
                v2380 = (unsigned __int64)(unsigned int)v2377 >> 3;
                do
                {
                  v2369 = (unsigned int)(v2369 - 8);
                  *(_QWORD *)v2378 = *v2379++;
                  v2378 += 8LL;
                  --v2380;
                }
                while ( v2380 );
                v2373 = (unsigned __int64)v2445;
              }
              if ( (_DWORD)v2369 )
              {
                v2381 = v2378 - (_QWORD)v2379;
                do
                {
                  *((_BYTE *)v2379 + v2381) = *(_BYTE *)v2379;
                  v2379 = (_QWORD *)((char *)v2379 + 1);
                  v2369 = (unsigned int)(v2369 - 1);
                }
                while ( (_DWORD)v2369 );
                v2372 = v2425;
              }
            }
            v2372 += 16LL;
            v2374 += (unsigned int)v2377;
            v2425 = v2372;
            v2455 = v2374;
          }
          while ( v2372 < v2373 );
          v2367 = v2427;
          v2363 = (int)v2436;
          v2364 = v2441;
          v2365 = v2434;
        }
        if ( (*(_DWORD *)(v2272 + 2524) & 0x400000) != 0 )
        {
          v2681 = -61;
          v2400 = &v2681;
          v2401 = *(_QWORD *)(v2272 + 552);
          v2402 = 4LL;
          v2403 = *(_QWORD *)(v2272 + 1496);
          LODWORD(v2404) = 4;
          v2405 = v2403 + ((v2401 >> 9) & 0x7FFFFFFFF8LL);
          v2406 = v2644;
          do
          {
            *v2406++ = v2405;
            v2405 = v2403 + ((v2405 >> 9) & 0x7FFFFFFFF8LL);
            --v2402;
          }
          while ( v2402 );
          do
          {
            v300 = (_DWORD)v2404 == 1;
            v2404 = (unsigned int)(v2404 - 1);
          }
          while ( !v300 && (*(_DWORD *)v2644[v2404] & 0x80) == 0 );
          v2407 = (__int64 *)v2644[v2404];
          v2408 = *v2407 | 0x62;
          *v2407 = v2408;
          v2409 = __readcr4();
          if ( (v2409 & 0x20080) != 0 )
          {
            __writecr4(v2409 ^ 0x80);
            __writecr4(v2409);
          }
          else
          {
            v2410 = __readcr3();
            __writecr3(v2410);
          }
          v2369 = (v2401 & 0xFFF) != 4096;
          if ( (v2401 & 0xFFF) != 0x1000 )
          {
            v2411 = v2401 - (_QWORD)&v2681;
            do
            {
              v2400[v2411] = *v2400;
              ++v2400;
              v2369 = (unsigned int)(v2369 - 1);
            }
            while ( (_DWORD)v2369 );
            v2365 = v2434;
          }
          *v2407 = v2408;
          v2413 = __readcr4();
          if ( (v2413 & 0x20080) != 0 )
          {
            __writecr4(v2413 ^ 0x80);
            __writecr4(v2413);
          }
          else
          {
            v2414 = __readcr3();
            __writecr3(v2414);
          }
        }
        else
        {
          **(_BYTE **)(v2272 + 552) = -61;
          __writecr0((unsigned __int64)v2442);
        }
        v2370 = v2432;
        v2362 = (__int64)v2443;
      }
      if ( *(_DWORD *)(v2272 + 2376) && KeGetCurrentIrql() < 2u )
      {
        KeGetCurrentIrql();
        __writecr8(2uLL);
      }
      v2415 = *(_DWORD *)(v2272 + 2376);
      if ( v2415 )
      {
        v2416 = v2415 - 1;
        if ( v2416 )
        {
          v2417 = v2416 - 1;
          if ( v2417 )
          {
            v2418 = v2417 - 1;
            if ( v2418 )
            {
              v2419 = v2418 - 1;
              if ( v2419 )
              {
                if ( v2419 == 1 )
                {
                  v2369 = (*(_DWORD *)(v2272 + 2520) >> 9) & 0x1F;
                  _interlockedbittestandset(
                    *(volatile signed __int32 **)((char *)&KeGetCurrentPrcb()->MxCsr + *(_QWORD *)(v2272 + 1624)),
                    v2369);
                }
                else
                {
                  _InterlockedOr64((volatile signed __int64 *)(*(_QWORD *)(v2272 + 1456) + 832LL), 1uLL);
                }
              }
              else
              {
                v2369 = *(_QWORD *)(*(_QWORD *)(v2272 + 1720)
                                  + *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *(_QWORD *)(v2272 + 1624))
                                  + *(_QWORD *)(v2272 + 1688));
                _interlockedbittestandset((volatile signed __int32 *)v2369, (*(_DWORD *)(v2272 + 2520) >> 9) & 0x1F);
              }
              goto LABEL_3619;
            }
            v2420 = *(volatile signed __int32 **)(v2272 + 1368);
          }
          else
          {
            v2420 = *(volatile signed __int32 **)(v2272 + 1360);
          }
        }
        else
        {
          v2420 = *(volatile signed __int32 **)(v2272 + 1344);
        }
        _interlockedbittestandset64(v2420, 0LL);
      }
LABEL_3619:
      *(_QWORD *)(v2370 + *(_QWORD *)(v2272 + 1696)) = 0LL;
      *(_QWORD *)(v2370 + *(_QWORD *)(v2272 + 1712)) = 0LL;
      KeGuardCheckICall(*(_QWORD *)(v2272 + 360), v2369);
      SdbpCheckDll(265, v2365, v2364, v2363, v2362, *(_QWORD *)(v2272 + 360), v2367 - 8);
      JUMPOUT(0x140BC57A6LL);
    }
  }
LABEL_3582:
  if ( (*(_DWORD *)(v2272 + 2520) & 0x20000000) == 0 && v2677 )
  {
    if ( *(_DWORD *)(v2272 + 2372) == 1 )
    {
      *(_QWORD *)(v2272 + 2024) -= 8LL;
      *(_DWORD *)(v2272 + 2032) = **(_DWORD **)(v2272 + 2024);
      *(_QWORD *)(v2272 + 264) = *(_QWORD *)(v2272 + 568);
    }
    else if ( *(_DWORD *)(v2272 + 2372) == 3 )
    {
      *(_QWORD *)(v2272 + 264) = *(_QWORD *)(v2272 + 872);
    }
  }
  return v2272;
}