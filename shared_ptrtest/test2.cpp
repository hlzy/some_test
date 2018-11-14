#include <memory>
#include <iostream>
#include <vector>
using namespace std;
class A;
static shared_ptr<A> c;
class A
{ 
public:
//  A() {};
  A(int b) {cout<<"init"<<endl;a=b;}
//  A(const A& b) {cout<<"initx"<<endl;a=b.a;}
  ~A() {
   cout<<"deinit "<<a<<endl;
}
  int a;
};


int main(int argc, char **argv) {
//   c.reset(new A(10));
   c.reset(new A(10));
   cout<<"???"<<endl;
//  static vector<A> b;
//  b.push_back(A(10));
//  b[0].a=5;

//  A *a= new A(10);
//  shared_ptr<A>  s_a(a);
//  s_a.reset(a);
//  cout<<s_a.use_count()<<endl;
//  shared_ptr<A>  s_b;
//  s_b = s_a;
//  shared_ptr<A>  s_c(s_b);
//  cout<<s_a.use_count()<<" "<<s_a.get()->a<<endl;
//  cout<<s_b.use_count()<<" "<<s_b->a<<endl;
//  s_a.reset(new A(11));
//  cout<<s_a.use_count()<<" "<<s_a.get()->a<<endl;
//  cout<<s_b.use_count()<<" "<<s_b->a<<endl;
//  int *i_a = new int(2);
//  shared_ptr<int> s_i(i_a);
//  A *a = new A[10]; 
  
  return 0;
}
