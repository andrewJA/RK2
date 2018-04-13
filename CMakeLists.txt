cmake_minimum_required(VERSION 3.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

option(BUILD_EXAMPLES "Build examples" ON)
option(BUILD_TESTS "Build tests" ON)

project(RK2)

install(TARGETS demo
    EXPORT demo-config
    ARCHIVE DESTINATION lib
    LIBRARY DESTINATION lib
)

install(EXPORT demo-config DESTINATION cmake)
