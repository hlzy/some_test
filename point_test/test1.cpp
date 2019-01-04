#include <iostream>
using namespace std;

//void test1(int *&a)
//{
//    cout<<a<<endl;
//    a = new int[10];
//    cout<<a<<endl;
//    for (int i = 0 ;i < 10;i++)
//    {
//        a[i]  = i;
//    }
//}

void test1(int *&a)
{
    cout<<a<<endl;
    a = new int[10];
    cout<<a<<endl;
    for (int i = 0 ;i < 10;i++)
    {
        a[i]  = i;
    }
}

int main(){
    int *b = NULL;
    cout<<b<<endl;
    {
      int *a = new int[10];
      for (int i = 0 ;i < 10;i++)
      {
          a[i]  = i;
      }
      b = a;
    }
//    test1(b);
    cout<<b<<endl;
    for (int i = 0 ;i < 10;i++)
    {
        cout<<b[i]<<endl;
    }
    delete []b;
    return  0;
}
