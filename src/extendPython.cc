/*
 *  $Id: extendPython.cc, 2014-03-02 14:03:22 chi $
 *  Author(s):
 *    Chi WANG (chiwang@mail.ustc.edu.cn) 02/03/2014
*/

/*
 *  1. include header file to know the functions
 *  2. add a module by using boost/python.hpp
 */

#include "python_main.h"
#include <boost/python.hpp>

BOOST_PYTHON_MODULE(libpythonmain){  // the lib name is important, it must be the same with the created shared lib.
  using namespace boost::python;
  def("helloworld",helloworld);     // the second argument is the function name in c++, the first one is the function name correspond in python
  def("setN",setN);
  def("test",test);
}
