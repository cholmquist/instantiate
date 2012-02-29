cmake_minimum_required(VERSION 2.8)

project(instantiate)

include_directories(${instantiate_SOURCE_DIR})

find_package(Boost REQUIRED)
include_directories(${Boost_INCLUDE_DIRS})

enable_testing()
add_subdirectory(test)
