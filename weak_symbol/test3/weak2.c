#include <stdio.h>
void __attribute__((weak)) symbol1()
{
   printf("%s.%s\n",__FILE__,__FUNCTION__);
}
int main(){
    symbol1();
    return 0;
}
