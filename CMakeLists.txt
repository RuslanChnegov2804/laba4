cmake_minimum_required(VERSION 3.14)
project(Lab4Basic LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} --coverage")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} --coverage")

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)
FetchContent_MakeAvailable(googletest)

add_executable(stack_app main.cpp src/stack.cpp)
target_include_directories(stack_app PUBLIC include)

add_executable(stack_tests tests/teststack.cpp src/stack.cpp)
target_include_directories(stack_tests PUBLIC include)
target_link_libraries(stack_tests gtest gtest_main)

enable_testing()
add_test(NAME StackTests COMMAND stack_tests)