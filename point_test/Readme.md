##测试如何在子函数中创建一块空间，并且在父空间中使用：
### 试验一：

```
#include <iostream>
using namespace std;

void test1(int *a)
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
    int * b = NULL;
    cout<<b<<endl;
    test1(b);
    cout<<b<<endl;
    for (int i = 0 ;i < 10;i++)
    {
        cout<<b[i]<<endl;
    }
    delete []b;
    return  0;
}
```
运行结果
```
0
0
0x21b2030
0
段错误 (核心已转储)
```
> 由于指针在main中是null，在子函数虽然创建了空间且并未呗取消，但是回到main中指针值并没有改变


### 试验二
修改 test1形参为引用
```
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
```
运行结果
```
0
0
0x1b50030
0x1b50030
0
1
2
3
4
5
6
7
8
9
```
正常，主要是引用改变了main中的指向数值
