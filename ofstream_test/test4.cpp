#include <iostream>
#include <fstream>
#include <string>
#include <map>
using namespace std;

int main(){
   map<string,ofstream *> of_map;
   ofstream of[3];
   for (int i = 0 ;i < 3;i++)
   {
     char b[20];
     sprintf(b,"test%d.txt",i);
     cout<<b<<endl;
     of[i].open(b);
     of_map.insert(std::pair<string,ofstream *> (string(b),&(of[i])));
   }
   for (map<string,ofstream *>::iterator iter = of_map.begin();
       iter !=of_map.end();
       iter++) {
       (*(iter->second)) << "hello" <<endl;
   }
   return 0;
}
