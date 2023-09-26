#define BOOST_TEST_MODULE SqrTestModule
#include <boost/test/included/unit_test.hpp>
int sqr(int x)
{
   return x*x;
}
BOOST_AUTO_TEST_CASE( sqr0 )
{
   BOOST_CHECK_EQUAL( sqr(0) , 0 );
}
