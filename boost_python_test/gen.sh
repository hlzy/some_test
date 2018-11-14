g++ test_class_wrapper.cpp -o test_class.so -shared -fPIC -I. -I/usr/include/python2.7 -L/usr/lib/x86_64-linux-gnu -lboost_python   -L. -ltest_class -lpython2.7
