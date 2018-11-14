#include <iostream>
using namespace std;

int main(){
   int b = 33;
   int c = 31;
   int d= ((b+c))&~(c);
   cout<<d<<endl;
   return 0;
}
