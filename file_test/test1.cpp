#include <stdio.h>

int main()
{
    FILE *fp = fopen("1.txt","a");
    fclose(fp);
    return 0;
}
