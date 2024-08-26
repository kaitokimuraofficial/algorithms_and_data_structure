cmake_minimum_required(VERSION 3.14)
project(my_project)

# Set policy for handling timestamps in FetchContent
cmake_policy(SET CMP0135 NEW)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
  DOWNLOAD_EXTRACT_TIMESTAMP TRUE
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

# == TEMPLATE == 
#
# add_executable(
#   xxx_test
#   xxx_test.cc
#   ../src/xxx.c
# )
# target_link_libraries(
#   xxx_test
#   GTest::gtest_main
# )
#
# include(GoogleTest)
# gtest_discover_tests(xxx_test)


add_executable(
  singly-linked-list-test
  singly-linked-list-test.cc
  ../src/singly-linked-list.c 
)
target_link_libraries(
  singly-linked-list-test
  GTest::gtest_main
)

add_executable(
  doubly-linked-list-test
  doubly-linked-list-test.cc
  ../src/doubly-linked-list.c 
)
target_link_libraries(
  doubly-linked-list-test
  GTest::gtest_main
)

add_executable(
  stack-test
  stack-test.cc
  ../src/stack.c
  ../src/singly-linked-list.c
)
target_link_libraries(
  stack-test
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(singly-linked-list-test)
gtest_discover_tests(doubly-linked-list-test)
gtest_discover_tests(stack-test)
