#include <iostream>
#include <string>
using namespace std;
 
//    cout<<"func0"<<endl;
//    return;
//}
// 
//template <>
//void GetValueFunc<1>(void* pData)
//{
//    cout<<"func1"<<endl;
//    return;
//}
// 

template <typename T1>
struct MyValue 
{
    template <typename T2>
    MyValue(T1 a,T2 b)
    {
       cout<<"struct construct ??????????????? "<<a<<" "<<b<<endl;
    }

//    template <typename T2>
    MyValue(string a,int b)
    {
       cout<<"struct construct !!!!!!!!!!!!!! "<<a<<" "<<b<<endl;
    }

    MyValue(int a,int b)
    {
       cout<<"struct construct xxxxxxxxxxxxxx "<<a<<" "<<b<<endl;
    }

//    template <typename T2>
//    MyValue(int a,T2 b)
//    {
//       cout<<"struct construct !!!!!!!!!!!!!!"<<a<<" "<<b<<endl;
//    }


//    template <typename T1,typename T2>
//    MyValue(int c,T1 a,T2 b)
//    {
//       cout<<"struct construct !!!!!!!!!!!!!!!"<<a<<"  "<<b<<endl;
//    }

    static void GetValue(void* pData) {
      cout<<"struct defualt"<<endl;
      return; 
    }
};

//template<>
//template<> inline
//MyValue<int>::MyValue<int>(string a,int b)
//{
//   cout<<"struct construct !!!!!!!!!!!!!"<<a<<" "<<b<<endl;
//   //cout<<"struct construct !!!!!!!!!!!!!!"<<a<<endl;
//}

//template<>
//template<> inline
//MyValue<char>::MyValue<int>(int a)
//{
//   cout<<"struct construct xxxxxxxxxxxxxx"<<a<<endl;
//}


int main()
{
    void* lp;
//    GetValueFunc<0>(lp);
//    GetValueFunc<1>(lp);
//    GetValueFunc<3>(lp);
    MyValue<int> a(1,2);
//    MyValue<int> b("string",2);
//    MyValue<string> c("string",2);
//    MyValue<string> d(1,2);

//    a.GetValue(lp);

//    MyValue<0>::GetValueFunc<0>(lp);
//    MyValue<0>::GetValueFunc<1>(lp);
//    MyValue<1>::GetValue(lp);
//    MyValue<1>::GetValue(lp);

    return 0;
}
