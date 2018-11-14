#include <stdint.h>
#include <fcntl.h>
#include <algorithm>
#include <string>
#include <vector>
#include <fstream>  // NOLINT(readability/streams)
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
  FILE *f;

  f = fopen("000001.prob","rb");
  double t;

  if(f!=NULL)
  {
     int p[5] = {0};
     fread(p,sizeof(int),5,f);
     for (int i = 0 ;i < 5;i ++)
     {
        printf("%d\n",p[i]);
     }
  }

  if(f!=NULL)
  {
     double p[487] = {0};
     fread(p,4,487,f);
     for (int i = 0 ;i < 487;i ++)
     {
        if(i % 10 == 0 )
         { 
          printf("\n");
         }
          printf("%lf ",p[i]);
 
     }
  }
  fclose(f);
  return 0;
}

