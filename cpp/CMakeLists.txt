cmake_minimum_required(VERSION 3.13)
project(MyCythonLib)
set(CMAKE_BUILD_TYPE Release)

set(CMAKE_CXX_STANDARD 14)

# Find MPI
#find_package(MPI REQUIRED)
#include_directories(${MPI_CXX_INCLUDE_PATH})

add_library(MyCythonLib SHARED src/library.cpp include/library.h src/simplelibrary.cpp include/simplelibrary.h)

install(TARGETS MyCythonLib DESTINATION /usr/lib)