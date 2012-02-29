#ifndef INSTANTIATE_HPP
#define INSTANTIATE_HPP

#include <boost/preprocessor/cat.hpp>
#include <boost/preprocessor/seq/for_each.hpp>
#include <boost/preprocessor/tuple/elem.hpp>

#define DETAIL_FOREACH_PROTOTYPE(r, function, prototype) \
	{BOOST_PP_TUPLE_ELEM(2, 0, prototype)(*_)BOOST_PP_TUPLE_ELEM(2, 1, prototype) = &function;}

#define INSTANTIATE_FUNCTION(function, prototypes) \
	struct BOOST_PP_CAT(instantiate, function)\
	{\
		BOOST_PP_CAT(instantiate, function)()\
		{\
			BOOST_PP_SEQ_FOR_EACH(DETAIL_FOREACH_PROTOTYPE, function, prototypes) \
		}\
	};\
	BOOST_PP_CAT(instantiate, function) BOOST_PP_CAT(g_, BOOST_PP_CAT(instantiate, function));

#endif
