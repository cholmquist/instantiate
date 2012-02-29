#include "foo.hpp"
#include "instantiate.hpp"

template<class T>
LIBFOO_API void foo1(T t)
{
}

extern "C"
{
	INSTANTIATE(foo1, (int)(bool))
};
