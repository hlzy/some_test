#include "func.h"
using std::cout;
using std::endl;
#ifdef TEST
void fuction(){
    cout<<"you have define TEST"<<AA<<endl;
}
#else
void fuction(){
    cout<<"you have not define TEST"<<AA<<endl;
}
#endif
