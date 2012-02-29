include (GenerateExportHeader)

add_library(static_foo STATIC foo.cpp)
add_library(shared_foo SHARED foo.cpp)

generate_export_header(shared_foo
BASE_NAME libfoo
EXPORT_MACRO_NAME LIBFOO_API
)

include_directories(${CMAKE_CURRENT_BINARY_DIR})

set_target_properties(static_foo PROPERTIES
COMPILE_FLAGS -DLIBFOO_STATIC_DEFINE
)

add_executable(test1 test1.cpp foo.cpp)
set_target_properties(test1 PROPERTIES
COMPILE_FLAGS -DLIBFOO_STATIC_DEFINE
)


add_executable(test1_static test1.cpp)
set_target_properties(test1_static PROPERTIES
COMPILE_FLAGS -DLIBFOO_STATIC_DEFINE
)
target_link_libraries(test1_static static_foo)

add_executable(test1_shared test1.cpp)
target_link_libraries(test1_shared shared_foo)

add_test(test1_runs test1)
add_test(test1_static_runs test1_static)
add_test(test1_shared_runs test1_shared)
