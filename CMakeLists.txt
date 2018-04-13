cmake_minimum_required(VERSION 3.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

option(BUILD_EXAMPLES "Build examples" ON)
option(BUILD_TESTS "Build tests" ON)

project(RK2)

add_executable(demo ${CMAKE_CURRENT_SOURCE_DIR}/sources/demo.cpp)

