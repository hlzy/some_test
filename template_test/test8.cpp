#include <iostream>

using namespace std;
template <typename T1,int a>
struct Data{
    Data(){
        cout<<"Data base"<<endl;
    }
};
template <>
struct Data<int,0>{
    Data(){
        cout<<"Data 3"<<endl;
    }
};


template <typename T1>
struct Data<T1,0>{
    Data(){
        cout<<"Data 0"<<endl;
    }
};

template <typename T1>
struct Data<T1,1>{
    Data(){
        cout<<"Data 1"<<endl;
    }
};



int main() {
    Data<int,0> a;
    Data<int,2> b;
    Data<string,1> e;

    Data<int,3> c;
    Data<string,3> d;

    return 0;
}
