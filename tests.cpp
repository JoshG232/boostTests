#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE SqrTestModule
#include <boost/test/unit_test.hpp>
#include "sqr.h"
int sqr(int x)
{
   return x*x;
}
BOOST_AUTO_TEST_CASE( sqr0 )
{
   BOOST_CHECK_EQUAL( sqr(0) , 0 );
}


