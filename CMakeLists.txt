cmake_minimum_required(VERSION 3.2.1)
project (boilerplate)

set(CMAKE_CXX_FLAGS "-Wall -Wextra -Wpedantic")
set(CMAKE_CXX_STANDARD 14)

add_subdirectory(src)
add_subdirectory(test)
add_subdirectory(vendor/googletest)
