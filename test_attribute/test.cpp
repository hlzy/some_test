#include <iostream>
using std::cout;
using std::endl;
struct A
{
  int a;
  char b;
  int g;
  char f;
  double c;
};

struct B
{
  int a;
  char b;
  int g;
  char f;
  double c;
}__attribute__((packed));

int main()
{
   cout<<sizeof(A)<<endl;
   cout<<sizeof(B)<<endl; 
   return 0;
}
