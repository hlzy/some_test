#include <iostream>
#include <string>
#include <memory>
using namespace std;

class Env;
static int b;
static shared_ptr<Env> c;
//static Env *c ;
class Env {
public:
    static void init() {
        std::cout << "Env init"<<endl;
        b = 10;
        c.reset(new Env());
//        c= new Env();
    }
    
    ~Env() {
        std::cout << "Env deinit"<<endl;
    }
    
private:
    Env(){
    cout<<"ok"<<endl;
    }
};


int main()
{
  Env::init();
  cout<<b<<endl; 
//  delete c;
}
