## This is a test about how compile parameter affect the result
- I have set -fPIC when compile the object file like this,we can compare the different between the 
```
gcc -c weak.c -o weak.o
objdump -t weak.o > tmp

gcc -c weak.c -o weak1.o
objdump -t weak1.o > tmp1
```
> different between tmp and tmp1 is that weak1 have a _GLOBAL_OFFSET_TABLE_

```
  1                                                       
  2 weak1.o：     文件格式 elf64-x86-64                   
  3                                                       
  4 SYMBOL TABLE:                                         
  5 0000000000000000 l    df *ABS*  0000000000000000 weak.c
  6 0000000000000000 l    d  .text  0000000000000000 .text                                                                                                           
  7 0000000000000000 l    d  .data  0000000000000000 .data
  8 0000000000000000 l    d  .bss   0000000000000000 .bss                 
  9 0000000000000000 l    d  .rodata    0000000000000000 .rodata                  
 10 0000000000000010 l     O .rodata    0000000000000008 __FUNCTION__.2286
 11 0000000000000000 l    d  .note.GNU-stack    0000000000000000 .note.GNU-stack  
 12 0000000000000000 l    d  .eh_frame  0000000000000000 .eh_frame
 13 0000000000000000 l    d  .comment   0000000000000000 .comment         
 14 0000000000000000  w    F .text  0000000000000026 symbol1
 15 0000000000000000         *UND*  0000000000000000 _GLOBAL_OFFSET_TABLE_
 16 0000000000000000         *UND*  0000000000000000 printf
```

```
  4 SYMBOL TABLE:
  5 0000000000000000 l    df *ABS*  0000000000000000 weak.c                                                                                                          
  6 0000000000000000 l    d  .text  0000000000000000 .text
  7 0000000000000000 l    d  .data  0000000000000000 .data
  8 0000000000000000 l    d  .bss   0000000000000000 .bss
  9 0000000000000000 l    d  .rodata    0000000000000000 .rodata
 10 0000000000000010 l     O .rodata    0000000000000008 __FUNCTION__.2286
 11 0000000000000000 l    d  .note.GNU-stack    0000000000000000 .note.GNU-stack
 12 0000000000000000 l    d  .eh_frame  0000000000000000 .eh_frame
 13 0000000000000000 l    d  .comment   0000000000000000 .comment
 14 0000000000000000  w    F .text  0000000000000020 symbol1
 15 0000000000000000         *UND*  0000000000000000 printf
```


#### attention test9 and test9_9 is different
> as 9_9 noly use strong.a instead of strong.o 
I fond it very strange when compile a dynamic library using static library **IT WILL LOSSING FUNCTION**
