#include <string>
using namespace std;
class Foo {
public:
    virtual ~Foo() = default;
    virtual std::string xxx() = 0;
};

class Bar: public Foo {
public:
    ~Bar();// override = default;
    std::string xxx() override { return "xxx"; }
};

std::shared_ptr<const Foo> create_shared_ptr() {
    return std::shared_ptr<const Foo>(new Bar);
}

void accept_shared_ptr(const std::shared_ptr<const Foo>& p) 
{
    ; // do nothing
}

BOOST_PYTHON_MODULE(myLib)
{
    using namespace boost::python;
    class_<Foo, boost::noncopyable>("Foo", no_init);
    register_ptr_to_python< std::shared_ptr<const Foo> >();
    def("create_shared_ptr", create_shared_ptr);
    def("accept_shared_ptr", accept_shared_ptr);
}
