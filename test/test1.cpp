#include <boost/detail/lightweight_test.hpp>
#include "foo.hpp"
#include <string>

int main(int argc, char* argv[])
{
	foo1((int)1);
	foo1(false);

	foo2<int>(1.0f);
	foo2<short>(10);

	foo3<int>(1.0f, 1.0);
	foo3<short>((int)1, (char)1);

	std::string s("42");
	clear(s);
	BOOST_TEST(s.empty());
	return boost::report_errors();
}
