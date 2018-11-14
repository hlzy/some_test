//#include <boost/python/reference.hpp>
#include <boost/python.hpp>
//#include <pyboostcvconverter.hpp>
struct tag {};
tag make_tag() { return tag(); }

using namespace boost::python;

struct tag_to_noddy
{
    static PyObject* convert(tag const& x)
    {
        return PyObject_New(noddy_NoddyObject, &noddy_NoddyType);
    }
    static PyTypeObject const* get_pytype()
    {
        return &noddy_NoddyType;
    }
};

BOOST_PYTHON_MODULE(to_python_converter)
{
    def("make_tag", make_tag);
    boost::python::to_python_converter<tag, tag_to_noddy, true>(); //"true" because tag_to_noddy has member get_pytype
}
