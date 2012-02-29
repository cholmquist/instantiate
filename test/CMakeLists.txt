add_executable(test1 test1.cpp lib.cpp)
add_test(test1
	PROPERTIES PASS_REGULAR_EXPRESSION "Works")
