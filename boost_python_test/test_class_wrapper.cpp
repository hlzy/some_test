//test_class_wrapper.cpp
#include <boost/python.hpp>
#include "test_class.h"
#include <boost/python/suite/indexing/vector_indexing_suite.hpp>

BOOST_PYTHON_MODULE(test_class)
{
    using namespace boost::python;
    // 导出类
    class_<A>("A", init<>())                            //如果默认构造函数没有参数，可以省略
        .def(init<int>())                               //其他构造函数
        .def("get", &A::get)                            //成员函数
        .def("set", &A::set)                            //成员函数
        .def_readwrite("publicVal", &A::publicVal)      //数据成员，当然是公共的
    ;   
    def("printA", &printA);
    def("addA", &addA);
    class_<vector<int> >("veca")
        .def(vector_indexing_suite<std::vector<int> >());
    def("addsum",&addsum);
}
