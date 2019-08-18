cmake_minimum_required(VERSION 2.8.3)
project(lib_test)

find_package(catkin REQUIRED COMPONENTS
  roscpp
)

catkin_package(
)

include_directories(
# include
  ${catkin_INCLUDE_DIRS}
)

add_library(mytest src/prog.cpp)

catkin_add_gtest(lib_test test/testsqrt.cpp)
target_link_libraries(lib_test mytest)
target_link_libraries(lib_test ${catkin_LIBRARIES})
