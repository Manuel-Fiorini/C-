cmake_minimum_required(VERSION 3.10)
project(VecF)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(vecf main.cpp vecF.cpp)
target_compile_options(vecf PRIVATE -Wall -Wextra -g)
