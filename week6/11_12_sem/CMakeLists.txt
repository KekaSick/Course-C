cmake_minimum_required(VERSION 3.0)

project(11_12_sem)


if (NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug)
endif(NOT CMAKE_BUILD_TYPE)

set(CMAKE_CXX_STANDARD 20)

# the following options prevent compiler-optimization issues that are unwanted in an edu process
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -O0 -Wall")
set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -O0")

#### the list of targets ####
add_executable(problem1_sum                problem1_sum/main.cpp)
add_executable(problem2_csv                problem2_csv/main.cpp)
add_executable(problem3_matrix                problem3_matrix/main.cpp)
add_executable(problem4_snake                problem4_snake/main.cpp)
add_executable(problem5_workers                problem5_workers/main.cpp)

