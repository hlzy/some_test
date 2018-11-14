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
  f = fopen("test","wb");
  double a=12.34;
//  char a='c';
  fwrite(&a,sizeof(a),1,f);
  a=32.12;
  fwrite(&a,sizeof(a),1,f);

  fclose(f);

  f = fopen("test","rb");
  double t;
  if(f!=NULL)
  {
     double p[100] = {0};
     fread(p,sizeof(double),20,f);
     for (int i = 0 ;i < 20;i ++)
     {
        printf("%lf\n",p[i]);
     }
  }

  return 0;
}

