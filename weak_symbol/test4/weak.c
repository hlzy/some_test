#include "stdio.h"
#include "weak.h"
void __attribute__((weak)) symbol1()
{
   printf("%s.%s\n",__FILE__,__FUNCTION__);
}
