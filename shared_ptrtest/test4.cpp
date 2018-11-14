#include <memory>
#include <iostream>
#include <vector>
using namespace std;

class A
{ 
public:
  A() {cout<<"init"<<endl;}
  A(int b) {cout<<"init"<<endl;a=b;}
  ~A() {
   cout<<"deinit "<<a<<endl;
}
protected:
  int a;
};

class B:public A
{
public:
  B(int b):A(b) {}
  int& geta(){
    return a;
  }
};


int main(int argc, char **argv) {
  A b(10);
//  cout<<b.a<<endl;
  cout<<((B*)&b)-> geta()<<endl;
  return 0;
}
