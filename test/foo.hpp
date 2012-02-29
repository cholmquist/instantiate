#ifndef INSTANTIATE_TEST_LIB_HPP
#define INSTANTIATE_TEST_LIB_HPP

#include "libfoo_export.h"

template<class T>
LIBFOO_API void foo1(T);

template<class R, class T>
LIBFOO_API R foo2(T);

template<class R, class T1, class T2>
LIBFOO_API R foo3(T1, T2);

template<class C>
LIBFOO_API void clear(C&);

#endif
