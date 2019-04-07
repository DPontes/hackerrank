cmake_minimum_required(VERSION 3.0)
 
# Locate GTest
find_package(GTest REQUIRED)
SET(CMAKE_CXX_FLAGS "-std=c++0x")
include_directories(${GTEST_INCLUDE_DIRS})
file(GLOB_RECURSE sources ./test.cpp)
# Link runTests with what we want to test and the GTest and pthread library
add_executable(runTests ${sources})
target_link_libraries(runTests ${GTEST_LIBRARIES} pthread)
