#include "lib.hpp"
#include "instantiate.hpp"

template<class T>
void foo1(T t)
{
}
INSTANTIATE(foo1, (int)(bool))
