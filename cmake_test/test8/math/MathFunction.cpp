#include "MathFunction.h"
#include "stdio.h"
extern "C"{
  double power2(double,int);
}

double power(double base, int exponent)
{
//   return 666;
    power2(base,exponent);
}
