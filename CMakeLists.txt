cmake_minimum_required(VERSION 4.0)
project(Paon)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Global toggle for tests (ON by default, change to OFF to disable)
option(BUILD_TESTING "Build the test suite" ON)

# Source code subdirectory
add_subdirectory(src)

# Conditional test subdirectory
if(BUILD_TESTING)
    enable_testing()
    add_subdirectory(tests)
endif()
