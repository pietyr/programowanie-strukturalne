cmake_minimum_required(VERSION 3.26)
project(7_9 C)

set(CMAKE_C_STANDARD 11)

add_executable(7_9 main.c)

target_link_libraries(7_9 PRIVATE m)
