#include <memory>
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char **argv) {
  int *aa = new int(10);
  shared_ptr<int> a(aa);
  int &b = *a;
  cout<<b<<endl;
  b = 20;
  cout<<*a<<endl;

  return 0;
}
