#include <iostream>
using namespace std;

typedef enum{
    TYPE1 = 2,
    TYPE2
} bm_test;

typedef enum{
    TYPE3 = 200,
    TYPE4
} bm_test2;

int main()
{
    bm_test a;
    a=TYPE3;
    cout << a <<endl;
    return 0;
}
