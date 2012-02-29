#include "foo.hpp"
#include "instantiate.hpp"
#include <string>

template<class T>
LIBFOO_API void foo1(T t)
{
}

template<class R, class T>
LIBFOO_API R foo2(T t)
{
	return R(t);
}

template<class R, class T1, class T2>
LIBFOO_API R foo3(T1 t1, T2 t2)
{
	return static_cast<R>(t1 + t2);
}

template<class C>
LIBFOO_API void clear(C& c)
{
	c.clear();
}

extern "C"
{
	INSTANTIATE_FUNCTION(foo1,
		((void,(int)))
		((void,(bool)))
	)

	INSTANTIATE_FUNCTION(foo2,
	((int,(float)))
	((short,(int)))
	)

	INSTANTIATE_FUNCTION(foo3,
	((int,(float, double)))
	((short,(int, char)))
	)

	INSTANTIATE_FUNCTION(clear,
	((void, (std::string&)))
	)
};
