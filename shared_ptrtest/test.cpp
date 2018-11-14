#include <memory>
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char **argv) {
  vector<int> a;
  for(int i = 0;i<10;i++) { 
    a.push_back(i);
  } 
  
  vector<int> *b = &a[0];
  cout<<*(&a[0]+3)<<endl;
//  cout<<*b[1]<<endl;
//  cout<<*b[2]<<endl;

  cout<<b->size()<<endl;

  return 0;
}
