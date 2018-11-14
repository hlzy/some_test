#include <iostream>
#include <vector>
using namespace std;

 
template <int N>
void GetValueFunc(void* pData) { cout<<"func default"<<endl;
return; }

template <int N,int T>
void GetValueFunc(void* pData) { cout<<"func default2"<<endl;
return; }

 
template <>
void GetValueFunc<0>(void* pData)
{
    cout<<"func0"<<endl;
    return;
}
 
template <>
void GetValueFunc<1,1>(void* pData)
{
    cout<<"func1"<<endl;
    return;
}
 
template <int N>
struct MyValue 
{
    static void GetValue(void* pData) {
      cout<<"struct defualt"<<endl;
      return; 
    }
    static void GetType(void* pData)
    {
        cout<<"get type struct0"<<endl;
        return;
    }
};
 
template <>
struct MyValue<0>
{
    static void GetValue(void* pData)
    {
        cout<<"struct0"<<endl;
        return;
    }
    static void GetType(void* pData)
    {
        cout<<"get type struct0"<<endl;
        return;
    }
};
template <>
struct MyValue<1>
{
    static void GetValue(void* pData)
    {
        cout<<"struct1"<<endl;
        return;
    }
};


//template <class N>
//struct MyValue 
//{
//    static void GetValue(void* pData) {
//      cout<<"struct defualt"<<endl;
//      return; 
//    }
//};
// 
//template <>
//struct MyValue<int>
//{
//    static void GetValue(void* pData)
//    {
//        cout<<"struct0"<<endl;
//        return;
//    }
//    static void GetType(void* pData)
//    {
//        cout<<"get type struct0"<<endl;
//        return;
//    }
//};
// 
//template <>
//struct MyValue<float>
//{
//    static void GetValue(void* pData)
//    {
//        cout<<"struct1"<<endl;
//        return;
//    }
//};
 
int main(int argc,char **argv)
{
//    void* lp;
//    int *b =new int[20];
//    vector<int> a(b,b+10);
// 
//    GetValueFunc<0>(lp);
//    GetValueFunc<1>(lp);
//    GetValueFunc<3>(lp);
//    GetValueFunc<3,3>(lp);

//    MyValue<0>::GetType(lp);
//    MyValue<1>::GetType(lp);
//    MyValue<1>::GetValue(lp);
    cout << argc<<endl;
    cout <<argv[0]<<endl;
    cout <<argv[1]<<endl;
    string context_dir;
    context_dir  = string("/asdf/sfasf/sdfasfd/");
    cout << context_dir.substr(0,context_dir.size()-1) <<endl;
    cout << context_dir.find_last_of("/") <<endl;
    cout << context_dir.substr(context_dir.substr(0,context_dir.size()-1).find_last_of("/")) << endl;
    return 0;
}

