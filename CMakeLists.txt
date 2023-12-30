cmake_minimum_required(VERSION 3.27)

project(RaylibTemplate VERSION 0.1.0)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)
include_directories(${CMAKE_SOURCE_DIR}/include)
link_directories(${CMAKE_SOURCE_DIR}/deps)

add_executable(RaylibTemplate   src/main.cpp)

target_include_directories(RaylibTemplate PRIVATE include)
#winmm is used to compile begin time peroid
target_link_libraries(RaylibTemplate PRIVATE raylib winmm)