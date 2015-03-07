# gsocStrace

example  
in file test.c

#include<stdio.h>
int main()
{
    printf("hello world\n");
    return 0;
}

gcc test.c -o test

strace -olog1 -T ./test

in file log1

execve("./a.out", ["./a.out"], [/* 75 vars */]) = 0 <0.000475>
brk(0)                                  = 0xacc000 <0.000046>
access("/etc/ld.so.nohwcap", F_OK)      = -1 ENOENT (No such file or directory) <0.000065>
mmap(NULL, 8192, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7fd60580f000 <0.000023>
access("/etc/ld.so.preload", R_OK)      = -1 ENOENT (No such file or directory) <0.000023>
open("/etc/ld.so.cache", O_RDONLY|O_CLOEXEC) = 3 <0.000013>
fstat(3, {st_mode=S_IFREG|0644, st_size=95090, ...}) = 0 <0.000008>
mmap(NULL, 95090, PROT_READ, MAP_PRIVATE, 3, 0) = 0x7fd6057f7000 <0.000010>
close(3)                                = 0 <0.000007>
access("/etc/ld.so.nohwcap", F_OK)      = -1 ENOENT (No such file or directory) <0.000009>
open("/lib/x86_64-linux-gnu/libc.so.6", O_RDONLY|O_CLOEXEC) = 3 <0.000013>
read(3, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0\320\37\2\0\0\0\0\0"..., 832) = 832 <0.000009>
fstat(3, {st_mode=S_IFREG|0755, st_size=1840928, ...}) = 0 <0.000008>
mmap(NULL, 3949248, PROT_READ|PROT_EXEC, MAP_PRIVATE|MAP_DENYWRITE, 3, 0) = 0x7fd60522a000 <0.000011>
mprotect(0x7fd6053e5000, 2093056, PROT_NONE) = 0 <0.000015>
mmap(0x7fd6055e4000, 24576, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x1ba000) = 0x7fd6055e4000 <0.000014>
mmap(0x7fd6055ea000, 17088, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x7fd6055ea000 <0.000011>
close(3)                                = 0 <0.000007>
mmap(NULL, 4096, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7fd6057f6000 <0.000009>
mmap(NULL, 8192, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7fd6057f4000 <0.000009>
arch_prctl(ARCH_SET_FS, 0x7fd6057f4740) = 0 <0.000008>
mprotect(0x7fd6055e4000, 16384, PROT_READ) = 0 <0.000013>
mprotect(0x600000, 4096, PROT_READ)     = 0 <0.000010>
mprotect(0x7fd605811000, 4096, PROT_READ) = 0 <0.000010>
munmap(0x7fd6057f7000, 95090)           = 0 <0.000016>
fstat(1, {st_mode=S_IFCHR|0620, st_rdev=makedev(136, 1), ...}) = 0 <0.000008>
mmap(NULL, 4096, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7fd60580e000 <0.000009>
write(1, "hello world\n", 12)           = 12 <0.000025>
exit_group(0)                           = ?
+++ exited with 0 +++


strace -olog2 -T -j ./test

in file log2 

{
  "Function" : execve
  "Arguments" : ("./a.out", ["./a.out"], [/* 75 vars */])
  "Return" : 0
  "TimeSpent" : 0.000466
}
{
  "Function" : brk
  "Arguments" : (0)
   "Return" : 0x116c000
  "TimeSpent" : 0.000057
}
{
  "Function" : access
  "Arguments" : ("/etc/ld.so.nohwcap", F_OK)
  "Return" : -1 ENOENT (No such file or directory)
  "TimeSpent" : 0.000032
}
{
  "Function" : mmap
  "Arguments" : (NULL, 8192, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0)
  "Return" : 0x7fc31b9c3000
  "TimeSpent" : 0.000023
}
{
  "Function" : access
  "Arguments" : ("/etc/ld.so.preload", R_OK)
  "Return" : -1 ENOENT (No such file or directory)
  "TimeSpent" : 0.000024
}
{
  "Function" : open
  "Arguments" : ("/etc/ld.so.cache", O_RDONLY|O_CLOEXEC)
  "Return" : 3
  "TimeSpent" : 0.000053
}
{
  "Function" : fstat
  "Arguments" : (3, {st_mode=S_IFREG|0644, st_size=95090, ...})
  "Return" : 0
  "TimeSpent" : 0.000021
}
{
  "Function" : mmap
  "Arguments" : (NULL, 95090, PROT_READ, MAP_PRIVATE, 3, 0)
  "Return" : 0x7fc31b9ab000
  "TimeSpent" : 0.000021
}
{
  "Function" : close
  "Arguments" : (3)
  "Return" : 0
  "TimeSpent" : 0.000014
}
{
  "Function" : access
  "Arguments" : ("/etc/ld.so.nohwcap", F_OK)
  "Return" : -1 ENOENT (No such file or directory)
  "TimeSpent" : 0.000023
}
{
  "Function" : open
  "Arguments" : ("/lib/x86_64-linux-gnu/libc.so.6", O_RDONLY|O_CLOEXEC)
  "Return" : 3
  "TimeSpent" : 0.000028
}
{
  "Function" : read
  "Arguments" : (3, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0\320\37\2\0\0\0\0\0"..., 832)
  "Return" : 832
  "TimeSpent" : 0.000019
}
{
  "Function" : fstat
  "Arguments" : (3, {st_mode=S_IFREG|0755, st_size=1840928, ...})
  "Return" : 0
  "TimeSpent" : 0.000016
}
{
  "Function" : mmap
  "Arguments" : (NULL, 3949248, PROT_READ|PROT_EXEC, MAP_PRIVATE|MAP_DENYWRITE, 3, 0)
  "Return" : 0x7fc31b3de000
  "TimeSpent" : 0.000020
}
{
  "Function" : mprotect
  "Arguments" : (0x7fc31b599000, 2093056, PROT_NONE)
  "Return" : 0
  "TimeSpent" : 0.000035
}
{
  "Function" : mmap
  "Arguments" : (0x7fc31b798000, 24576, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x1ba000)
  "Return" : 0x7fc31b798000
  "TimeSpent" : 0.000028
}
{
  "Function" : mmap
  "Arguments" : (0x7fc31b79e000, 17088, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0)
  "Return" : 0x7fc31b79e000
  "TimeSpent" : 0.000022
}
{
  "Function" : close
  "Arguments" : (3)
  "Return" : 0
  "TimeSpent" : 0.000016
}
{
  "Function" : mmap
  "Arguments" : (NULL, 4096, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0)
  "Return" : 0x7fc31b9aa000
  "TimeSpent" : 0.000019
}
{
  "Function" : mmap
  "Arguments" : (NULL, 8192, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0)
  "Return" : 0x7fc31b9a8000
  "TimeSpent" : 0.000018
}
{
  "Function" : arch_prctl
  "Arguments" : (ARCH_SET_FS, 0x7fc31b9a8740)
  "Return" : 0
  "TimeSpent" : 0.000015
}
{
  "Function" : mprotect
  "Arguments" : (0x7fc31b798000, 16384, PROT_READ)
  "Return" : 0
  "TimeSpent" : 0.000024
}
{
  "Function" : mprotect
  "Arguments" : (0x600000, 4096, PROT_READ)
  "Return" : 0
  "TimeSpent" : 0.000019
}
{
  "Function" : mprotect
  "Arguments" : (0x7fc31b9c5000, 4096, PROT_READ)
  "Return" : 0
  "TimeSpent" : 0.000021
}
{
  "Function" : munmap
  "Arguments" : (0x7fc31b9ab000, 95090)
  "Return" : 0
  "TimeSpent" : 0.000034
}
{
  "Function" : fstat
  "Arguments" : (1, {st_mode=S_IFCHR|0620, st_rdev=makedev(136, 1), ...})
  "Return" : 0
  "TimeSpent" : 0.000017
}
{
  "Function" : mmap
  "Arguments" : (NULL, 4096, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0)
  "Return" : 0x7fc31b9c2000
  "TimeSpent" : 0.000083
}
{
  "Function" : write
  "Arguments" : (1, "hello world\n", 12)
  "Return" : 12
  "TimeSpent" : 0.000047
}
{
  "Function" : exit_group
  "Arguments" : (0) = ?
+++ exited with 0 +++
