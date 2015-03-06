{"DKIOCGGEOM", 0x401},
{"DKIOCSGEOM", 0x402},
{"DKIOCINFO", 0x403},
{"DKIOCSAPART", 0x404},
{"DKIOCGAPART", 0x405},
{"DKIOCEJECT", 0x406},
{"DKIOCLOCK", 0x407},
{"DKIOCUNLOCK", 0x408},
{"DKIOCGVTOC", 0x40b},
{"DKIOCSVTOC", 0x40c},
{"DKIOCSTATE", 0x40d},
{"FDIOGCHAR", 0x433},
{"FDIOSCHAR", 0x434},
{"FDEJECT", 0x435},
{"FDGETCHANGE", 0x436},
{"FDGETDRIVECHAR", 0x437},
{"FDSETDRIVECHAR", 0x438},
{"FDGETSEARCH", 0x439},
{"FDSETSEARCH", 0x43a},
{"FDIOCMD", 0x43b},
{"FDRAW", 0x446},
{"FDDEFGEOCHAR", 0x456},
{"HDKIOCSTYPE", 0x465},
{"HDKIOCGTYPE", 0x466},
{"HDKIOCSBAD", 0x467},
{"HDKIOCGBAD", 0x468},
{"HDKIOCSCMD", 0x469},
{"HDKIOCGDIAG", 0x46a},
{"CDROMPAUSE", 0x497},
{"CDROMRESUME", 0x498},
{"CDROMPLAYMSF", 0x499},
{"CDROMPLAYTRKIND", 0x49a},
{"CDROMREADTOCHDR", 0x49b},
{"CDROMREADTOCENTRY", 0x49c},
{"CDROMSTOP", 0x49d},
{"CDROMSTART", 0x49e},
{"CDROMEJECT", 0x49f},
{"CDROMVOLCTRL", 0x4a0},
{"CDROMSUBCHNL", 0x4a1},
{"CDROMREADMODE2", 0x4a2},
{"CDROMREADMODE1", 0x4a3},
{"CDROMREADOFFSET", 0x4a4},
{"CDROMGBLKMODE", 0x4a5},
{"CDROMSBLKMODE", 0x4a6},
{"CDROMCDDA", 0x4a7},
{"CDROMCDXA", 0x4a8},
{"CDROMSUBCODE", 0x4a9},
{"CDROMGDRVSPEED", 0x4aa},
{"CDROMSDRVSPEED", 0x4ab},
{"USCSICMD", 0x4c9},
{"SBIOCSTIME", 0x4201},
{"SBIOCGTIME", 0x4202},
{"SBIOCCTIME", 0x4203},
{"SBIOCSCHUNK", 0x4204},
{"SBIOCGCHUNK", 0x4205},
{"SBIOCSSNAP", 0x4206},
{"SBIOCGSNAP", 0x4207},
{"SBIOCSFLAGS", 0x4208},
{"SBIOCGFLAGS", 0x4209},
{"LDOPEN", 0x4400},
{"LDCLOSE", 0x4401},
{"DLIOCRAW", 0x4401},
{"SAD_SAP", 0x4401},
{"LDCHG", 0x4402},
{"SAD_GAP", 0x4402},
{"SAD_VML", 0x4403},
{"LDGETT", 0x4408},
{"LDSETT", 0x4409},
{"DL_IOC_HDR_INFO", 0x440a},
{"LDSMAP", 0x446e},
{"LDGMAP", 0x446f},
{"LDNMAP", 0x4470},
{"LDEMAP", 0x4471},
{"LDDMAP", 0x4472},
{"FBIOGTYPE", 0x4600},
{"FBIOGINFO", 0x4602},
{"FBIOPUTCMAP", 0x4603},
{"FBIOGETCMAP", 0x4604},
{"FBIOSATTR", 0x4605},
{"FBIOGATTR", 0x4606},
{"FBIOSVIDEO", 0x4607},
{"FBIOGVIDEO", 0x4608},
{"FBIOVERTICAL", 0x4609},
{"GRABPAGEALLOC", 0x460a},
{"GRABPAGEFREE", 0x460b},
{"GRABATTACH", 0x460c},
{"FBIOGPLNGRP", 0x460d},
{"FBIOGCMSIZE", 0x460e},
{"FBIOSCMSIZE", 0x460f},
{"FBIOSCMS", 0x4610},
{"FBIOAVAILPLNGRP", 0x4611},
{"FBIODBLGINFO", 0x4612},
{"FBIODBLSINFO", 0x4613},
{"FBIOSWINFD", 0x4614},
{"FBIOSAVWINFD", 0x4615},
{"FBIORESWINFD", 0x4616},
{"FBIOSRWINFD", 0x4617},
{"VIS_SETCURSOR", 0x4618},
{"FBIOSCURSOR", 0x4618},
{"FBIOGCURSOR", 0x4619},
{"VIS_GETCURSOR", 0x4619},
{"FBIOSCURPOS", 0x461a},
{"VIS_MOVECURSOR", 0x461a},
{"FBIOGCURPOS", 0x461b},
{"VIS_GETCURSORPOS", 0x461b},
{"FBIOGCURMAX", 0x461c},
{"GRABLOCKINFO", 0x461d},
{"FBIO_WID_ALLOC", 0x461e},
{"FBIO_WID_FREE", 0x461f},
{"FBIO_WID_PUT", 0x4620},
{"FBIO_WID_GET", 0x4621},
{"FBIO_DEVID", 0x4622},
{"FBIO_U_RST", 0x4623},
{"FBIO_FULLSCREEN_ELIMINATION_GROUPS", 0x4624},
{"FBIO_WID_DBL_SET", 0x4625},
{"FBIOVRTOFFSET", 0x4626},
{"FBIOGXINFO", 0x4627},
{"FBIOMONINFO", 0x4628},
{"FBIOPUTCMAPI", 0x4629},
{"FBIOGETCMAPI", 0x462a},
{"FBIO_ASSIGNWID", 0x462b},
{"FBIO_STEREO", 0x462c},
{"GP1IO_PUT_INFO", 0x4700},
{"GP1IO_GET_STATIC_BLOCK", 0x4701},
{"GP1IO_FREE_STATIC_BLOCK", 0x4702},
{"GP1IO_GET_GBUFFER_STATE", 0x4703},
{"GP1IO_CHK_GP", 0x4704},
{"GP1IO_GET_RESTART_COUNT", 0x4705},
{"GP1IO_REDIRECT_DEVFB", 0x4706},
{"GP1IO_GET_REQDEV", 0x4707},
{"GP1IO_GET_TRUMINORDEV", 0x4708},
{"GP1IO_CHK_FOR_GBUFFER", 0x4709},
{"GP1IO_SET_USING_GBUFFER", 0x470a},
{"GP1IO_INFO_STATIC_BLOCK", 0x470b},
{"O_SI_GETUDATA", 0x4965},
{"SI_SHUTDOWN", 0x4966},
{"SI_LISTEN", 0x4967},
{"SI_SETMYNAME", 0x4968},
{"SI_SETPEERNAME", 0x4969},
{"SI_GETINTRANSIT", 0x496a},
{"SI_SOCKPARAMS", 0x496d},
{"SI_GETUDATA", 0x496e},
{"I_TRCLOG", 0x4c01},
{"I_ERRLOG", 0x4c02},
{"I_CONSLOG", 0x4c03},
{"MDI_RESET", 0x4d01},
{"MDI_GET_CFGINFO", 0x4d02},
{"MDI_SET_PIXELMODE", 0x4d03},
{"MDI_SET_COUNTERS", 0x4d04},
{"MDI_SET_PPR", 0x4d05},
{"MDI_VRT_CNTL", 0x4d06},
{"MDI_SET_CLUT", 0x4d07},
{"MDI_GET_CLUT", 0x4d08},
{"MDI_SET_XLUT", 0x4d09},
{"MDI_GET_XLUT", 0x4d0a},
{"MDI_GAMMA_CORRECT", 0x4d0b},
{"MDI_SET_GAMMALUT", 0x4d0c},
{"MDI_GET_GAMMALUT", 0x4d0d},
{"MDI_SET_DEGAMMALUT", 0x4d0e},
{"MDI_GET_DEGAMMALUT", 0x4d0f},
{"MDI_GET_BUFFER_INFO", 0x4d10},
{"MDI_SET_CURSOR", 0x4d11},
{"MDI_GET_DIAGINFO", 0x4d12},
{"MDI_SET_RESOLUTION", 0x4d13},
{"SET_MONITOR_POWER", 0x4d14},
{"OPROMGETBOOTARGS", 0x4f0c},
{"PFIOCSETF", 0x5001},
{"I_NREAD", 0x5301},
{"I_PUSH", 0x5302},
{"I_POP", 0x5303},
{"I_LOOK", 0x5304},
{"I_FLUSH", 0x5305},
{"I_SRDOPT", 0x5306},
{"I_GRDOPT", 0x5307},
{"I_STR", 0x5308},
{"I_SETSIG", 0x5309},
{"I_GETSIG", 0x530a},
{"I_FIND", 0x530b},
{"I_LINK", 0x530c},
{"I_UNLINK", 0x530d},
{"I_RECVFD", 0x530e},
{"I_PEEK", 0x530f},
{"I_FDINSERT", 0x5310},
{"I_SENDFD", 0x5311},
{"I_SWROPT", 0x5313},
{"I_GWROPT", 0x5314},
{"I_LIST", 0x5315},
{"I_PLINK", 0x5316},
{"I_PUNLINK", 0x5317},
{"I_SETEV", 0x5318},
{"I_GETEV", 0x5319},
{"I_STREV", 0x531a},
{"I_UNSTREV", 0x531b},
{"I_FLUSHBAND", 0x531c},
{"I_CKBAND", 0x531d},
{"I_GETBAND", 0x531e},
{"I_ATMARK", 0x531f},
{"I_SETCLTIME", 0x5320},
{"I_GETCLTIME", 0x5321},
{"I_CANPUT", 0x5322},
{"TCGETA", 0x5401},
{"TCSETA", 0x5402},
{"TCSETAW", 0x5403},
{"TCSETAF", 0x5404},
{"TCSBRK", 0x5405},
{"TCXONC", 0x5406},
{"TCFLSH", 0x5407},
{"TIOCKBON", 0x5408},
{"TIOCKBOF", 0x5409},
{"KBENABLED", 0x540a},
{"TCGETS", 0x540d},
{"TCSETS", 0x540e},
{"TCSANOW", 0x540e},
{"TCSADRAIN", 0x540f},
{"TCSETSW", 0x540f},
{"TCSAFLUSH", 0x5410},
{"TCSETSF", 0x5410},
{"TCDSET", 0x5420},
{"TCDSET", 0x5420},
{"RTS_TOG", 0x5421},
{"TIOCSWINSZ", 0x5467},
{"TIOCSWINSZ", 0x5467},
{"TIOCGWINSZ", 0x5468},
{"TIOCGWINSZ", 0x5468},
{"TIOCGSOFTCAR", 0x5469},
{"TIOCSSOFTCAR", 0x546a},
{"TI_GETINFO", 0x548c},
{"TI_OPTMGMT", 0x548d},
{"TI_BIND", 0x548e},
{"TI_UNBIND", 0x548f},
{"TI_GETMYNAME", 0x5490},
{"TI_GETPEERNAME", 0x5491},
{"TI_SETMYNAME", 0x5492},
{"TI_SETPEERNAME", 0x5493},
{"TCGETX", 0x5801},
{"TCSETX", 0x5802},
{"TCSETXW", 0x5803},
{"TCSETXF", 0x5804},
{"DIOCGETC", 0x6401},
{"DIOCGETB", 0x6402},
{"DIOCSETE", 0x6403},
{"DIOCGETP", 0x6408},
{"DIOCSETP", 0x6409},
{"JBOOT", 0x6a01},
{"JTERM", 0x6a02},
{"JMPX", 0x6a03},
{"JWINSIZE", 0x6a05},
{"JZOMBOOT", 0x6a07},
{"JAGENT", 0x6a09},
{"JTRUN", 0x6a0a},
{"JXTPROTO", 0x6a0b},
{"KIOCTRANS", 0x6b00},
{"KIOCSETKEY", 0x6b01},
{"KIOCGETKEY", 0x6b02},
{"KIOCGTRANS", 0x6b05},
{"KIOCTRANSABLE", 0x6b06},
{"KIOCGTRANSABLE", 0x6b07},
{"KIOCCMD", 0x6b08},
{"KIOCTYPE", 0x6b09},
{"KIOCSDIRECT", 0x6b0a},
{"KIOCGDIRECT", 0x6b0b},
{"KIOCSKEY", 0x6b0c},
{"KIOCGKEY", 0x6b0d},
{"KIOCSLED", 0x6b0e},
{"KIOCGLED", 0x6b0f},
{"KIOCSCOMPAT", 0x6b10},
{"KIOCGCOMPAT", 0x6b11},
{"KIOCLAYOUT", 0x6b14},
{"LIOCGETP", 0x6c01},
{"LIOCSETP", 0x6c02},
{"LIOCGETS", 0x6c05},
{"LIOCSETS", 0x6c06},
{"MTIOCTOP", 0x6d01},
{"MSIOGETPARMS", 0x6d01},
{"MSIOSETPARMS", 0x6d02},
{"MTIOCGET", 0x6d02},
{"MTIOCGETDRIVETYPE", 0x6d03},
{"PIOCSTATUS", 0x7101},
{"PIOCSTOP", 0x7102},
{"PIOCWSTOP", 0x7103},
{"PIOCRUN", 0x7104},
{"PIOCGTRACE", 0x7105},
{"PIOCSTRACE", 0x7106},
{"PIOCSSIG", 0x7107},
{"PIOCKILL", 0x7108},
{"PIOCUNKILL", 0x7109},
{"PIOCGHOLD", 0x710a},
{"PIOCSHOLD", 0x710b},
{"PIOCMAXSIG", 0x710c},
{"PIOCACTION", 0x710d},
{"PIOCGFAULT", 0x710e},
{"PIOCSFAULT", 0x710f},
{"PIOCCFAULT", 0x7110},
{"PIOCGENTRY", 0x7111},
{"PIOCSENTRY", 0x7112},
{"PIOCGEXIT", 0x7113},
{"PIOCSEXIT", 0x7114},
{"PIOCSFORK", 0x7115},
{"PIOCRFORK", 0x7116},
{"PIOCSRLC", 0x7117},
{"PIOCRRLC", 0x7118},
{"PIOCGREG", 0x7119},
{"PIOCSREG", 0x711a},
{"PIOCGFPREG", 0x711b},
{"PIOCSFPREG", 0x711c},
{"PIOCNICE", 0x711d},
{"PIOCPSINFO", 0x711e},
{"PIOCNMAP", 0x711f},
{"PIOCMAP", 0x7120},
{"PIOCOPENM", 0x7121},
{"PIOCCRED", 0x7122},
{"PIOCGROUPS", 0x7123},
{"PIOCGETPR", 0x7124},
{"PIOCGETU", 0x7125},
{"PIOCSET", 0x7126},
{"PIOCRESET", 0x7127},
{"PIOCNWATCH", 0x7128},
{"PIOCGWATCH", 0x7129},
{"PIOCSWATCH", 0x712a},
{"PIOCUSAGE", 0x712b},
{"PIOCOPENPD", 0x712c},
{"PIOCLWPIDS", 0x712d},
{"PIOCOPENLWP", 0x712e},
{"PIOCLSTATUS", 0x712f},
{"PIOCLUSAGE", 0x7130},
{"PIOCNAUXV", 0x7131},
{"PIOCAUXV", 0x7132},
{"PIOCGWIN", 0x7165},
{"TIOCGETD", 0x7400},
{"TIOCGETD", 0x7400},
{"TIOCSETD", 0x7401},
{"TIOCSETD", 0x7401},
{"TIOCHPCL", 0x7402},
{"TIOCHPCL", 0x7402},
{"TIOCGETP", 0x7408},
{"TIOCGETP", 0x7408},
{"TIOCSETP", 0x7409},
{"TIOCSETP", 0x7409},
{"TIOCSETN", 0x740a},
{"TIOCSETN", 0x740a},
{"TIOCEXCL", 0x740d},
{"TIOCEXCL", 0x740d},
{"TIOCNXCL", 0x740e},
{"TIOCNXCL", 0x740e},
{"TIOCFLUSH", 0x7410},
{"TIOCFLUSH", 0x7410},
{"TIOCSETC", 0x7411},
{"TIOCSETC", 0x7411},
{"TIOCGETC", 0x7412},
{"TIOCGETC", 0x7412},
{"TIOCGPGRP", 0x7414},
{"TIOCSPGRP", 0x7415},
{"TIOCGSID", 0x7416},
{"TIOCSTI", 0x7417},
{"TIOCSSID", 0x7418},
{"TIOCMSET", 0x741a},
{"TIOCMBIS", 0x741b},
{"TIOCMBIC", 0x741c},
{"TIOCMGET", 0x741d},
{"TIOCREMOTE", 0x741e},
{"TIOCREMOTE", 0x741e},
{"TIOCSIGNAL", 0x741f},
{"TIOCSTART", 0x746e},
{"TIOCSTART", 0x746e},
{"TIOCSTOP", 0x746f},
{"TIOCSTOP", 0x746f},
{"TIOCNOTTY", 0x7471},
{"TIOCNOTTY", 0x7471},
{"TIOCOUTQ", 0x7473},
{"TIOCOUTQ", 0x7473},
{"TIOCGLTC", 0x7474},
{"TIOCGLTC", 0x7474},
{"TIOCSLTC", 0x7475},
{"TIOCSLTC", 0x7475},
{"TIOCCDTR", 0x7478},
{"TIOCCDTR", 0x7478},
{"TIOCSDTR", 0x7479},
{"TIOCSDTR", 0x7479},
{"TIOCCBRK", 0x747a},
{"TIOCCBRK", 0x747a},
{"TIOCSBRK", 0x747b},
{"TIOCSBRK", 0x747b},
{"TIOCLGET", 0x747c},
{"TIOCLGET", 0x747c},
{"TIOCLSET", 0x747d},
{"TIOCLSET", 0x747d},
{"TIOCLBIC", 0x747e},
{"TIOCLBIC", 0x747e},
{"TIOCLBIS", 0x747f},
{"TIOCLBIS", 0x747f},
{"VOLIOCMAP", 0x7601},
{"VUIDSFORMAT", 0x7601},
{"VUIDSFORMAT", 0x7601},
{"VUIDGFORMAT", 0x7602},
{"VUIDGFORMAT", 0x7602},
{"VOLIOCUNMAP", 0x7602},
{"VOLIOCEVENT", 0x7603},
{"VUIDSADDR", 0x7603},
{"VUIDSADDR", 0x7603},
{"VUIDGADDR", 0x7604},
{"VUIDGADDR", 0x7604},
{"VOLIOCEJECT", 0x7604},
{"VOLIOCCHECK", 0x7605},
{"VOLIOCINUSE", 0x7606},
{"VOLIOCDGATTR", 0x7607},
{"VOLIOCDSATTR", 0x7608},
{"VOLIOCDCHECK", 0x7609},
{"VOLIOCCANCEL", 0x760a},
{"VOLIOCINFO", 0x760b},
{"VOLIOCSATTR", 0x760c},
{"VOLIOCGATTR", 0x760d},
{"VOLIOCDINUSE", 0x760e},
{"VOLIOCDAEMON", 0x760f},
{"VOLIOCFLAGS", 0x7610},
{"VOLIOCEXTRA4", 0x7611},
{"VOLIOCEXTRA5", 0x7612},
{"VOLIOCEXTRA6", 0x7613},
{"VOLIOCEXTRA7", 0x7614},
{"S_IOCGETMODE", 0x7a01},
{"S_IOCSETMODE", 0x7a02},
{"S_IOCGETSTATS", 0x7a03},
{"S_IOCCLRSTATS", 0x7a04},
{"S_IOCGETSPEED", 0x7a05},
{"S_IOCGETMRU", 0x7a06},
{"S_IOCSETMRU", 0x7a07},
{"S_IOCGETMTU", 0x7a08},
{"S_IOCSETMTU", 0x7a09},
{"S_IOCGETMCTL", 0x7a0a},
{"TL_IOC_CREDOPT", 0x544c01},
