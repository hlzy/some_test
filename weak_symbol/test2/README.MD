# how compile sort effect result
```
#strong.c
#include <stdio.h>

extern void symbol1() __attribute__((weak));
void symbol1()
{
    printf("%s,%s\n",__FILE__,__FUNCTION__);
}

#weak2.c
#include <stdio.h>
extern void symbol1() __attribute__((weak));
void symbol1()
{
   printf("%s.%s\n",__FILE__,__FUNCTION__);
}
int main(){
    symbol1();
    return 0;
}
```
gcc strong.c weak2.c
> strong.c,symbol1
gcc weak2.c strong.c
>weak2.c,symbol1

# how to use dynamic or static library as strong symbol
```
#strong.c
#include <stdio.h>

//extern void symbol1() __attribute__((weak));
void symbol1()
{
    printf("%s,%s\n",__FILE__,__FUNCTION__);
}

#weak2.c
#include <stdio.h>
extern void symbol1() __attribute__((weak));
void symbol1()
{
   printf("%s.%s\n",__FILE__,__FUNCTION__);
}
int main(){
    symbol1();
    return 0;
}
```

make dynamic to compile strong.so file,but the result is:
> weak2.c,symbol1

make staitc result is:
> weak2.c,symbol1
it shows that's strong.a have the  global symobol of symbol1 ,but did't link to output
finnally I use gcc -Wl,--whole-archive strong.a -Wl,--no-whole-archive weak2.o ,result is what I want 
> strong.c,symbol1 
but it's does't work on dynamic libarary
