#include <iostream>
#include <functional>
#include <vector>
int func_test(int a) {
    std::cout<<"number:"<<a<<std::endl;
}
int main(int argc,char **argv)
{
//    std::function<int(int)> a;
//    a=func_test;
//    std::cout<<argv[0]<<std::endl;
//    a(10);

    std::vector<int> a{1,3,9};
    std::cout<<a.size()<<std::endl;
    std::cout<<a[0]<<std::endl;
    std::cout<<a[1]<<std::endl;
    std::cout<<a[2]<<std::endl;

}
