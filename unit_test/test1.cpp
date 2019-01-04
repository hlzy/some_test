#include <iostream>
#include <string>
using namespace std;

typedef struct{
    int  a;
} S1;

typedef struct{
    float b;
} S2;

struct S3
{
    int type;
    union U1{
      S1 s1;
      S2 s2;
    } u1;
};

union U2{
  int a;
  float b;
};
int main(){
    S3 a={1,{2.3}};
    a.type = 1;
    S2 b = {1.1};
    U2 c = {.a=1};
    cout<<c.a<<endl;
//    cout<<b.b<<endl;
//    cout<<a.u1.s1.a<<endl;
//    cout<<a.u1.s2.b<<endl;
//    cout<<a.u1.s1.a<<endl;
//    cout<<a.u1.s2.b<<endl;

    return 0;
}
