/*
 * Copyright (c) 1993 Branko Lankester <branko@hacktic.nl>
 * Copyright (c) 1993, 1994, 1995 Rick Sladkey <jrs@world.std.com>
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. The name of the author may not be used to endorse or promote products
 *    derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

[  0] = { 0,	0,		sys_setup,			"setup"			},
[  1] = { 1,	TP|SE,		sys_exit,			"_exit"			},
[  2] = { 0,	TP,		sys_fork,			"fork"			},
[  3] = { 3,	TD,		sys_read,			"read"			},
[  4] = { 3,	TD,		sys_write,			"write"			},
[  5] = { 3,	TD|TF,		sys_open,			"open"			},
[  6] = { 1,	TD,		sys_close,			"close"			},
[  7] = { 3,	TP,		sys_waitpid,			"waitpid"		},
[  8] = { 2,	TD|TF,		sys_creat,			"creat"			},
[  9] = { 2,	TF,		sys_link,			"link"			},
[ 10] = { 1,	TF,		sys_unlink,			"unlink"		},
[ 11] = { 3,	TF|TP|SE|SI,	sys_execve,			"execve"		},
[ 12] = { 1,	TF,		sys_chdir,			"chdir"			},
[ 13] = { 1,	0,		sys_time,			"time"			},
[ 14] = { 3,	TF,		sys_mknod,			"mknod"			},
[ 15] = { 2,	TF,		sys_chmod,			"chmod"			},
[ 16] = { 3,	TF,		sys_chown16,			"lchown"		},
[ 17] = { 0,	TM,		sys_break,			"break"			},
[ 18] = { 2,	TF,		sys_oldstat,			"oldstat"		},
[ 19] = { 3,	TD,		sys_lseek,			"lseek"			},
[ 20] = { 0,	0,		sys_getpid,			"getpid"		},
[ 21] = { 5,	TF,		sys_mount,			"mount"			},
[ 22] = { 1,	TF,		sys_umount,			"umount"		},
[ 23] = { 1,	0,		sys_setuid16,			"setuid"		},
[ 24] = { 0,	NF,		sys_getuid16,			"getuid"		},
[ 25] = { 1,	0,		sys_stime,			"stime"			},
[ 26] = { 4,	0,		sys_ptrace,			"ptrace"		},
[ 27] = { 1,	0,		sys_alarm,			"alarm"			},
[ 28] = { 2,	TD,		sys_oldfstat,			"oldfstat"		},
[ 29] = { 0,	TS,		sys_pause,			"pause"			},
[ 30] = { 2,	TF,		sys_utime,			"utime"			},
[ 31] = { 2,	0,		sys_stty,			"stty"			},
[ 32] = { 2,	0,		sys_gtty,			"gtty"			},
[ 33] = { 2,	TF,		sys_access,			"access"		},
[ 34] = { 1,	0,		sys_nice,			"nice"			},
[ 35] = { 0,	0,		sys_ftime,			"ftime"			},
[ 36] = { 0,	0,		sys_sync,			"sync"			},
[ 37] = { 2,	TS,		sys_kill,			"kill"			},
[ 38] = { 2,	TF,		sys_rename,			"rename"		},
[ 39] = { 2,	TF,		sys_mkdir,			"mkdir"			},
[ 40] = { 1,	TF,		sys_rmdir,			"rmdir"			},
[ 41] = { 1,	TD,		sys_dup,			"dup"			},
[ 42] = { 1,	TD,		sys_pipe,			"pipe"			},
[ 43] = { 1,	0,		sys_times,			"times"			},
[ 44] = { 0,	0,		sys_prof,			"prof"			},
[ 45] = { 1,	TM|SI,		sys_brk,			"brk"			},
[ 46] = { 1,	0,		sys_setgid16,			"setgid"		},
[ 47] = { 0,	NF,		sys_getgid16,			"getgid"		},
[ 48] = { 3,	TS,		sys_signal,			"signal"		},
[ 49] = { 0,	NF,		sys_geteuid16,			"geteuid"		},
[ 50] = { 0,	NF,		sys_getegid16,			"getegid"		},
[ 51] = { 1,	TF,		sys_acct,			"acct"			},
[ 52] = { 2,	TF,		sys_umount2,			"umount2"		},
[ 53] = { 0,	0,		sys_lock,			"lock"			},
[ 54] = { 3,	TD,		sys_ioctl,			"ioctl"			},
[ 55] = { 3,	TD,		sys_fcntl,			"fcntl"			},
[ 56] = { 0,	0,		sys_mpx,			"mpx"			},
[ 57] = { 2,	0,		sys_setpgid,			"setpgid"		},
[ 58] = { 2,	0,		sys_ulimit,			"ulimit"		},
[ 59] = { 1,	0,		sys_oldolduname,		"oldolduname"		},
[ 60] = { 1,	0,		sys_umask,			"umask"			},
[ 61] = { 1,	TF,		sys_chroot,			"chroot"		},
[ 62] = { 2,	0,		sys_ustat,			"ustat"			},
[ 63] = { 2,	TD,		sys_dup2,			"dup2"			},
[ 64] = { 0,	0,		sys_getppid,			"getppid"		},
[ 65] = { 0,	0,		sys_getpgrp,			"getpgrp"		},
[ 66] = { 0,	0,		sys_setsid,			"setsid"		},
[ 67] = { 3,	TS,		sys_sigaction,			"sigaction"		},
[ 68] = { 0,	TS,		sys_siggetmask,			"sgetmask"		},
[ 69] = { 1,	TS,		sys_sigsetmask,			"ssetmask"		},
[ 70] = { 2,	0,		sys_setreuid16,			"setreuid"		},
[ 71] = { 2,	0,		sys_setregid16,			"setregid"		},
[ 72] = { 3,	TS,		sys_sigsuspend,			"sigsuspend"		},
[ 73] = { 1,	TS,		sys_sigpending,			"sigpending"		},
[ 74] = { 2,	0,		sys_sethostname,		"sethostname"		},
[ 75] = { 2,	0,		sys_setrlimit,			"setrlimit"		},
[ 76] = { 2,	0,		sys_getrlimit,			"getrlimit"		},
[ 77] = { 2,	0,		sys_getrusage,			"getrusage"		},
[ 78] = { 2,	0,		sys_gettimeofday,		"gettimeofday"		},
[ 79] = { 2,	0,		sys_settimeofday,		"settimeofday"		},
[ 80] = { 2,	0,		sys_getgroups16,		"getgroups"		},
[ 81] = { 2,	0,		sys_setgroups16,		"setgroups"		},
[ 82] = { 1,	TD,		sys_oldselect,			"oldselect"		},
[ 83] = { 2,	TF,		sys_symlink,			"symlink"		},
[ 84] = { 2,	TF,		sys_oldlstat,			"oldlstat"		},
[ 85] = { 3,	TF,		sys_readlink,			"readlink"		},
[ 86] = { 1,	TF,		sys_uselib,			"uselib"		},
[ 87] = { 2,	TF,		sys_swapon,			"swapon"		},
[ 88] = { 4,	0,		sys_reboot,			"reboot"		},
[ 89] = { 3,	TD,		sys_readdir,			"readdir"		},
[ 90] = { 6,	TD|TM|SI,	sys_mmap,			"old_mmap"		},
[ 91] = { 2,	TM|SI,		sys_munmap,			"munmap"		},
[ 92] = { 2,	TF,		sys_truncate,			"truncate"		},
[ 93] = { 2,	TD,		sys_ftruncate,			"ftruncate"		},
[ 94] = { 2,	TD,		sys_fchmod,			"fchmod"		},
[ 95] = { 3,	TD,		sys_fchown16,			"fchown"		},
[ 96] = { 2,	0,		sys_getpriority,		"getpriority"		},
[ 97] = { 3,	0,		sys_setpriority,		"setpriority"		},
[ 98] = { 4,	0,		sys_profil,			"profil"		},
[ 99] = { 2,	TF,		sys_statfs,			"statfs"		},
[100] = { 2,	TD,		sys_fstatfs,			"fstatfs"		},
[101] = { 3,	0,		sys_ioperm,			"ioperm"		},
[102] = { 2,	TD,		sys_socketcall,			"socketcall"		},
[103] = { 3,	0,		sys_syslog,			"syslog"		},
[104] = { 3,	0,		sys_setitimer,			"setitimer"		},
[105] = { 2,	0,		sys_getitimer,			"getitimer"		},
[106] = { 2,	TF,		sys_stat,			"stat"			},
[107] = { 2,	TF,		sys_lstat,			"lstat"			},
[108] = { 2,	TD,		sys_fstat,			"fstat"			},
[109] = { 1,	0,		sys_olduname,			"olduname"		},
[110] = { 1,	0,		sys_iopl,			"iopl"			},
[111] = { 0,	0,		sys_vhangup,			"vhangup"		},
[112] = { 0,	0,		sys_idle,			"idle"			},
[113] = { },
[114] = { 4,	TP,		sys_wait4,			"wait4"			},
[115] = { 1,	TF,		sys_swapoff,			"swapoff"		},
[116] = { 1,	0,		sys_sysinfo,			"sysinfo"		},
[117] = { 5,	TI,		sys_ipc,			"ipc"			},
[118] = { 1,	TD,		sys_fsync,			"fsync"			},
[119] = { 0,	TS,		sys_sigreturn,			"sigreturn"		},
[120] = { 5,	TP,		sys_clone,			"clone"			},
[121] = { 2,	0,		sys_setdomainname,		"setdomainname"		},
[122] = { 1,	0,		sys_uname,			"uname"			},
[123] = { 3,	0,		printargs,			"cacheflush"		},
[124] = { 1,	0,		sys_adjtimex,			"adjtimex"		},
[125] = { 3,	TM|SI,		sys_mprotect,			"mprotect"		},
[126] = { 3,	TS,		sys_sigprocmask,		"sigprocmask"		},
[127] = { 2,	0,		sys_create_module,		"create_module"		},
[128] = { 3,	0,		sys_init_module,		"init_module"		},
[129] = { 2,	0,		sys_delete_module,		"delete_module"		},
[130] = { 1,	0,		sys_get_kernel_syms,		"get_kernel_syms"	},
[131] = { 4,	TF,		sys_quotactl,			"quotactl"		},
[132] = { 1,	0,		sys_getpgid,			"getpgid"		},
[133] = { 1,	TD,		sys_fchdir,			"fchdir"		},
[134] = { 0,	0,		sys_bdflush,			"bdflush"		},
[135] = { 3,	0,		sys_sysfs,			"sysfs"			},
[136] = { 1,	0,		sys_personality,		"personality"		},
[137] = { 5,	0,		sys_afs_syscall,		"afs_syscall"		},
[138] = { 1,	NF,		sys_setfsuid16,			"setfsuid"		},
[139] = { 1,	NF,		sys_setfsgid16,			"setfsgid"		},
[140] = { 5,	TD,		sys_llseek,			"_llseek"		},
[141] = { 3,	TD,		sys_getdents,			"getdents"		},
[142] = { 5,	TD,		sys_select,			"select"		},
[143] = { 2,	TD,		sys_flock,			"flock"			},
[144] = { 3,	TM,		sys_msync,			"msync"			},
[145] = { 3,	TD,		sys_readv,			"readv"			},
[146] = { 3,	TD,		sys_writev,			"writev"		},
[147] = { 1,	0,		sys_getsid,			"getsid"		},
[148] = { 1,	TD,		sys_fdatasync,			"fdatasync"		},
[149] = { 1,	0,		sys_sysctl,			"_sysctl"		},
[150] = { 2,	TM,		sys_mlock,			"mlock"			},
[151] = { 2,	TM,		sys_munlock,			"munlock"		},
[152] = { 1,	TM,		sys_mlockall,			"mlockall"		},
[153] = { 0,	TM,		sys_munlockall,			"munlockall"		},
[154] = { 2,	0,		sys_sched_setparam,		"sched_setparam"	},
[155] = { 2,	0,		sys_sched_getparam,		"sched_getparam"	},
[156] = { 3,	0,		sys_sched_setscheduler,		"sched_setscheduler"	},
[157] = { 1,	0,		sys_sched_getscheduler,		"sched_getscheduler"	},
[158] = { 0,	0,		sys_sched_yield,		"sched_yield"		},
[159] = { 1,	0,		sys_sched_get_priority_max,	"sched_get_priority_max"},
[160] = { 1,	0,		sys_sched_get_priority_min,	"sched_get_priority_min"},
[161] = { 2,	0,		sys_sched_rr_get_interval,	"sched_rr_get_interval"	},
[162] = { 2,	0,		sys_nanosleep,			"nanosleep"		},
[163] = { 5,	TM|SI,		sys_mremap,			"mremap"		},
[164] = { 3,	0,		sys_setresuid16,		"setresuid"		},
[165] = { 3,	0,		sys_getresuid16,		"getresuid"		},
[166] = { },
[167] = { 5,	0,		sys_query_module,		"query_module"		},
[168] = { 3,	TD,		sys_poll,			"poll"			},
[169] = { 3,	0,		sys_nfsservctl,			"nfsservctl"		},
[170] = { 3,	0,		sys_setresgid16,		"setresgid"		},
[171] = { 3,	0,		sys_getresgid16,		"getresgid"		},
[172] = { 5,	0,		sys_prctl,			"prctl"			},
[173] = { 0,	TS,		sys_rt_sigreturn,		"rt_sigreturn"		},
[174] = { 4,	TS,		sys_rt_sigaction,		"rt_sigaction"		},
[175] = { 4,	TS,		sys_rt_sigprocmask,		"rt_sigprocmask"	},
[176] = { 2,	TS,		sys_rt_sigpending,		"rt_sigpending"		},
[177] = { 4,	TS,		sys_rt_sigtimedwait,		"rt_sigtimedwait"	},
[178] = { 3,	TS,		sys_rt_sigqueueinfo,		"rt_sigqueueinfo"	},
[179] = { 2,	TS,		sys_rt_sigsuspend,		"rt_sigsuspend"		},
[180] = { 4,	TD,		sys_pread,			"pread"			},
[181] = { 4,	TD,		sys_pwrite,			"pwrite"		},
[182] = { 3,	TF,		sys_chown16,			"chown"			},
[183] = { 2,	TF,		sys_getcwd,			"getcwd"		},
[184] = { 2,	0,		sys_capget,			"capget"		},
[185] = { 2,	0,		sys_capset,			"capset"		},
[186] = { 2,	TS,		sys_sigaltstack,		"sigaltstack"		},
[187] = { 4,	TD|TN,		sys_sendfile,			"sendfile"		},
[188 ... 189] = { },
[190] = { 0,	TP,		sys_vfork,			"vfork"			},
[191] = { 2,	0,		sys_getrlimit,			"ugetrlimit"		},
[192] = { 6,	TD|TM|SI,	sys_mmap_4koff,			"mmap2"			},
[193] = { 2,	TF,		sys_truncate,			"truncate64"		},
[194] = { 2,	TD,		sys_ftruncate,			"ftruncate64"		},
[195] = { 2,	TF,		sys_stat64,			"stat64"		},
[196] = { 2,	TF,		sys_lstat64,			"lstat64"		},
[197] = { 2,	TD,		sys_fstat64,			"fstat64"		},
[198] = { 3,	TF,		sys_chown,			"lchown32"		},
[199] = { 0,	NF,		sys_getuid,			"getuid32"		},
[200] = { 0,	NF,		sys_getgid,			"getgid32"		},
[201] = { 0,	0,		sys_geteuid,			"geteuid32"		},
[202] = { 0,	0,		sys_getegid,			"getegid32"		},
[203] = { 2,	0,		sys_setreuid,			"setreuid32"		},
[204] = { 2,	0,		sys_setregid,			"setregid32"		},
[205] = { 2,	0,		sys_getgroups,			"getgroups32"		},
[206] = { 2,	0,		sys_setgroups,			"setgroups32"		},
[207] = { 3,	0,		sys_fchown,			"fchown32"		},
[208] = { 3,	0,		sys_setresuid,			"setresuid32"		},
[209] = { 3,	0,		sys_getresuid,			"getresuid32"		},
[210] = { 3,	0,		sys_setresgid,			"setresgid32"		},
[211] = { 3,	0,		sys_getresgid,			"getresgid32"		},
[212] = { 3,	TF,		sys_chown,			"chown32"		},
[213] = { 1,	0,		sys_setuid,			"setuid32"		},
[214] = { 1,	0,		sys_setgid,			"setgid32"		},
[215] = { 1,	0,		sys_setfsuid,			"setfsuid32"		},
[216] = { 1,	0,		sys_setfsgid,			"setfsgid32"		},
[217] = { 2,	TF,		sys_pivotroot,			"pivot_root"		},
[218] = { 3,	TM,		sys_mincore,			"mincore"		},
[219] = { 3,	TM,		sys_madvise,			"madvise"		},
[220] = { 3,	TN,		sys_socket,			"socket"		},
[221] = { 3,	TN,		sys_bind,			"bind"			},
[222] = { 3,	TN,		sys_connect,			"connect"		},
[223] = { 2,	TN,		sys_listen,			"listen"		},
[224] = { 3,	TN,		sys_accept,			"accept"		},
[225] = { 3,	TN,		sys_getsockname,		"getsockname"		},
[226] = { 3,	TN,		sys_getpeername,		"getpeername"		},
[227] = { 4,	TN,		sys_socketpair,			"socketpair"		},
[228] = { 4,	TN,		sys_send,			"send"			},
[229] = { 6,	TN,		sys_sendto,			"sendto"		},
[230] = { 4,	TN,		sys_recv,			"recv"			},
[231] = { 6,	TN,		sys_recvfrom,			"recvfrom"		},
[232] = { 2,	TN,		sys_shutdown,			"shutdown"		},
[233] = { 5,	TN,		sys_setsockopt,			"setsockopt"		},
[234] = { 5,	TN,		sys_getsockopt,			"getsockopt"		},
[235] = { 3,	TN,		sys_sendmsg,			"sendmsg"		},
[236] = { 3,	TN,		sys_recvmsg,			"recvmsg"		},
[237] = { 4,	TI,		sys_semop,			"semop"			},
[238] = { 3,	TI,		sys_semget,			"semget"		},
[239] = { 4,	TI,		sys_semctl,			"semctl"		},
[240] = { 4,	TI,		sys_msgsnd,			"msgsnd"		},
[241] = { 4,	TI,		sys_msgrcv,			"msgrcv"		},
[242] = { 2,	TI,		sys_msgget,			"msgget"		},
[243] = { 4,	TI,		sys_msgctl,			"msgctl"		},
[244] = { 4,	TI|TM|SI,	sys_shmat,			"shmat"			},
[245] = { 4,	TI|TM|SI,	sys_shmdt,			"shmdt"			},
[246] = { 3,	TI,		sys_shmget,			"shmget"		},
[247] = { 4,	TI,		sys_shmctl,			"shmctl"		},
[248] = { 3,	TD,		sys_getdents64,			"getdents64"		},
[249] = { 3,	TD,		sys_fcntl,			"fcntl64"		},
[250 ... 251] = { },
[252] = { 4,	0,		sys_gettid,			"gettid"		},
[253] = { 3,	TD,		sys_readahead,			"readahead"		},
[254] = { 5,	TF,		sys_setxattr,			"setxattr"		},
[255] = { 5,	TF,		sys_setxattr,			"lsetxattr"		},
[256] = { 5,	TD,		sys_fsetxattr,			"fsetxattr"		},
[257] = { 4,	TF,		sys_getxattr,			"getxattr"		},
[258] = { 4,	TF,		sys_getxattr,			"lgetxattr"		},
[259] = { 4,	TD,		sys_fgetxattr,			"fgetxattr"		},
[260] = { 3,	TF,		sys_listxattr,			"listxattr"		},
[261] = { 3,	TF,		sys_listxattr,			"llistxattr"		},
[262] = { 3,	TD,		sys_flistxattr,			"flistxattr"		},
[263] = { 2,	TF,		sys_removexattr,		"removexattr"		},
[264] = { 2,	TF,		sys_removexattr,		"lremovexattr"		},
[265] = { 2,	TD,		sys_fremovexattr,		"fremovexattr"		},
[266] = { 2,	TS,		sys_kill,			"tkill"			},
[267] = { 4,	TD|TN,		sys_sendfile64,			"sendfile64"		},
[268] = { 6,	0,		sys_futex,			"futex"			},
[269] = { 3,	0,		sys_sched_setaffinity,		"sched_setaffinity"	},
[270] = { 3,	0,		sys_sched_getaffinity,		"sched_getaffinity"	},
[271 ... 272] = { },
[273] = { 2,	0,		sys_io_setup,			"io_setup"		},
[274] = { 1,	0,		sys_io_destroy,			"io_destroy"		},
[275] = { 5,	0,		sys_io_getevents,		"io_getevents"		},
[276] = { 3,	0,		sys_io_submit,			"io_submit"		},
[277] = { 3,	0,		sys_io_cancel,			"io_cancel"		},
[278] = { 4,	TD,		sys_fadvise64,			"fadvise64"		},
[279] = { },
[280] = { 1,	TP|SE,		sys_exit,			"exit_group"		},
[281] = { 3,	0,		sys_lookup_dcookie,		"lookup_dcookie"	},
[282] = { 1,	TD,		sys_epoll_create,		"epoll_create"		},
[283] = { 4,	TD,		sys_epoll_ctl,			"epoll_ctl"		},
[284] = { 4,	TD,		sys_epoll_wait,			"epoll_wait"		},
[285] = { 5,	TM|SI,		sys_remap_file_pages,		"remap_file_pages"	},
[286] = { 1,	0,		sys_set_tid_address,		"set_tid_address"	},
[287] = { 3,	0,		sys_timer_create,		"timer_create"		},
[288] = { 4,	0,		sys_timer_settime,		"timer_settime"		},
[289] = { 2,	0,		sys_timer_gettime,		"timer_gettime"		},
[290] = { 1,	0,		sys_timer_getoverrun,		"timer_getoverrun"	},
[291] = { 1,	0,		sys_timer_delete,		"timer_delete"		},
[292] = { 2,	0,		sys_clock_settime,		"clock_settime"		},
[293] = { 2,	0,		sys_clock_gettime,		"clock_gettime"		},
[294] = { 2,	0,		sys_clock_getres,		"clock_getres"		},
[295] = { 4,	0,		sys_clock_nanosleep,		"clock_nanosleep"	},
[296] = { 3,	TF,		sys_statfs64,			"statfs64"		},
[297] = { 2,	TD,		sys_fstatfs64,			"fstatfs64"		},
[298] = { 3,	TS,		sys_tgkill,			"tgkill"		},
[299] = { 2,	TF,		sys_utimes,			"utimes"		},
[300] = { 4,	TD,		sys_fadvise64,			"fadvise64_64"		},
[301] = { },
[302] = { 6,	TM,		sys_mbind,			"mbind"			},
[303] = { 5,	TM,		sys_get_mempolicy,		"get_mempolicy"		},
[304] = { 3,	TM,		sys_set_mempolicy,		"set_mempolicy"		},
[305] = { 4,	0,		sys_mq_open,			"mq_open"		},
[306] = { 1,	0,		sys_mq_unlink,			"mq_unlink"		},
[307] = { 5,	0,		sys_mq_timedsend,		"mq_timedsend"		},
[308] = { 5,	0,		sys_mq_timedreceive,		"mq_timedreceive"	},
[309] = { 2,	0,		sys_mq_notify,			"mq_notify"		},
[310] = { 3,	0,		sys_mq_getsetattr,		"mq_getsetattr"		},
[311] = { 4,	0,		sys_kexec_load,			"kexec_load"		},
[312] = { 5,	TP,		sys_waitid,			"waitid"		},
[313] = { 5,	0,		sys_add_key,			"add_key"		},
[314] = { 4,	0,		sys_request_key,		"request_key"		},
[315] = { 5,	0,		sys_keyctl,			"keyctl"		},
[316] = { 3,	0,		sys_ioprio_set,			"ioprio_set"		},
[317] = { 2,	0,		sys_ioprio_get,			"ioprio_get"		},
[318] = { 0,	TD,		sys_inotify_init,		"inotify_init"		},
[319] = { 3,	TD,		printargs,			"inotify_add_watch"	},
[320] = { 2,	TD,		printargs,			"inotify_rm_watch"	},
[321] = { },
[322] = { 4,	TM,		sys_migrate_pages,		"migrate_pages"		},
[323] = { 4,	TD|TF,		sys_openat,			"openat"		},
[324] = { 3,	TD|TF,		sys_mkdirat,			"mkdirat"		},
[325] = { 4,	TD|TF,		sys_mknodat,			"mknodat"		},
[326] = { 5,	TD|TF,		sys_fchownat,			"fchownat"		},
[327] = { 3,	TD|TF,		sys_futimesat,			"futimesat"		},
[328] = { 4,	TD|TF,		sys_newfstatat,			"newfstatat"		},
[329] = { 3,	TD|TF,		sys_unlinkat,			"unlinkat"		},
[330] = { 4,	TD|TF,		sys_renameat,			"renameat"		},
[331] = { 5,	TD|TF,		sys_linkat,			"linkat"		},
[332] = { 3,	TD|TF,		sys_symlinkat,			"symlinkat"		},
[333] = { 4,	TD|TF,		sys_readlinkat,			"readlinkat"		},
[334] = { 3,	TD|TF,		sys_fchmodat,			"fchmodat"		},
[335] = { 3,	TD|TF,		sys_faccessat,			"faccessat"		},
[336] = { 6,	TD,		sys_pselect6,			"pselect6"		},
[337] = { 5,	TD,		sys_ppoll,			"ppoll"			},
[338] = { 1,	TP,		sys_unshare,			"unshare"		},
[339] = { 2,	0,		sys_set_robust_list,		"set_robust_list"	},
[340] = { 3,	0,		sys_get_robust_list,		"get_robust_list"	},
[341] = { 6,	TD,		sys_splice,			"splice"		},
[342] = { 4,	TD,		sys_sync_file_range,		"sync_file_range"	},
[343] = { 4,	TD,		sys_tee,			"tee"			},
[344] = { 5,	TD,		sys_vmsplice,			"vmsplice"		},
[345] = { 6,	TM,		sys_move_pages,			"move_pages"		},
[346] = { 3,	0,		sys_getcpu,			"getcpu"		},
[347] = { 6,	TD,		sys_epoll_pwait,		"epoll_pwait"		},
[348] = { 4,	TD|TF,		sys_utimensat,			"utimensat"		},
[349] = { 3,	TD|TS,		sys_signalfd,			"signalfd"		},
[350] = { 4,	TD,		sys_timerfd,			"timerfd"		},
[351] = { 1,	TD,		sys_eventfd,			"eventfd"		},
[352] = { 4,	TD,		sys_fallocate,			"fallocate"		},
[353] = { 4,	TD,		sys_timerfd_settime,		"timerfd_settime"	},
[354] = { 2,	TD,		sys_timerfd_gettime,		"timerfd_gettime"	},
[355] = { 4,	TD|TS,		sys_signalfd4,			"signalfd4"		},
[356] = { 2,	TD,		sys_eventfd2,			"eventfd2"		},
[357] = { 1,	TD,		sys_epoll_create1,		"epoll_create1"		},
[358] = { 3,	TD,		sys_dup3,			"dup3"			},
[359] = { 2,	TD,		sys_pipe2,			"pipe2"			},
[360] = { 1,	TD,		sys_inotify_init1,		"inotify_init1"		},
[361] = { 4,	TD,		sys_preadv,			"preadv"		},
[362] = { 4,	TD,		sys_pwritev,			"pwritev"		},
[363] = { 4,	TP|TS,		sys_rt_tgsigqueueinfo,		"rt_tgsigqueueinfo"	},
[364] = { 5,	TD,		sys_perf_event_open,		"perf_event_open"	},
[365] = { 5,	TN,		sys_recvmmsg,			"recvmmsg"		},
[366] = { 4,	TN,		sys_accept4,			"accept4"		},
[367] = { 2,	TD,		sys_fanotify_init,		"fanotify_init"		},
[368] = { 5,	TD|TF,		sys_fanotify_mark,		"fanotify_mark"		},
[369] = { 4,	0,		sys_prlimit64,			"prlimit64"		},
[370] = { 5,	TD|TF,		sys_name_to_handle_at,		"name_to_handle_at"	},
[371] = { 3,	TD,		sys_open_by_handle_at,		"open_by_handle_at"	},
[372] = { 2,	0,		sys_clock_adjtime,		"clock_adjtime"		},
[373] = { 1,	TD,		sys_syncfs,			"syncfs"		},
[374] = { 4,	TN,		sys_sendmmsg,			"sendmmsg"		},
[375] = { 2,	TD,		sys_setns,			"setns"			},
[376] = { 6,	0,		sys_process_vm_readv,		"process_vm_readv"	},
[377] = { 6,	0,		sys_process_vm_writev,		"process_vm_writev"	},
[378] = { 5,	0,		sys_kcmp,			"kcmp"			},
[379] = { 3,	TD,		sys_finit_module,		"finit_module"		},
[380 ... 399] = { },
#define SYS_socket_subcall	400
#include "subcall.h"
