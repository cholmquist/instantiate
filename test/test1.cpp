#include <boost/detail/lightweight_test.hpp>
#include "foo.hpp"

int main(int argc, char* argv[])
{
	foo1((int)1);
	foo1(false);
	return 0;
}
