#ifndef INSTANTIATE_HPP
#define INSTANTIATE_HPP

#include <boost/preprocessor/cat.hpp>
#include <boost/preprocessor/seq/for_each.hpp>

#define DETAIL_INSTANTIATE_ONE(r, function, arg) {void(*_)(arg) = &function;}

#define INSTANTIATE(function, args) \
	struct BOOST_PP_CAT(instantiate, function)\
	{\
		BOOST_PP_CAT(instantiate, function)()\
		{\
			BOOST_PP_SEQ_FOR_EACH(DETAIL_INSTANTIATE_ONE, function, args) \
		}\
	};\
	BOOST_PP_CAT(instantiate, function) BOOST_PP_CAT(g_, BOOST_PP_CAT(instantiate, function));

#endif
