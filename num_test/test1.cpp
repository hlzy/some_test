#include "stdio.h"

int main(){
    unsigned long long a=123;
    long b=123;
    int c=123;
    char d;

    printf("%d",sizeof(a));
    printf("%d",sizeof(b));
    printf("%d",sizeof(c));
    printf("%d",sizeof(d));
    return 0;
}
