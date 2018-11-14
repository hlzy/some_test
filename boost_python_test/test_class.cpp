//test_class.cpp
#include <iostream>
#include "test_class.h"
#include <vector>
using std::vector;

int addA(A &a, int addVal)
{
    int val = a.get();
    val += addVal;
    a.set(val);
    return val;
}

void printA(const A& a)
{
//  printf("%d\n",a.get());
  std::cout<<a.get()<<std::endl;
}

int addsum(vector<int> a) {
  int sum = 0;
  for(vector<int>::iterator iter = a.begin();
      iter != a.end();
      iter ++) {
    sum += *iter; 
  }
  return sum;
}
