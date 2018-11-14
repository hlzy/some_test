#include <stdio.h>

//extern void symbol1() __attribute__((weak));
void symbol1()
{
    printf("%s,%s\n",__FILE__,__FUNCTION__);
}
