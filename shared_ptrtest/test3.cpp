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
  int a;
};



int main(int argc, char **argv) {
  vector<A> a;
  a.resize(10);
//  cout<<a[12]<<endl;
  cout<<a[9].a<<endl;
  cout<<a.size()<<endl;

  return 0;
}
