cmake_minimum_required(VERSION 3.13)
project(mycythonexamples)

# Find MPI
#find_package(MPI REQUIRED)
#include_directories(${MPI_CXX_INCLUDE_PATH})

set(CMAKE_CXX_STANDARD 14)


#For the shared library:
set ( PROJECT_LINK_LIBS libMyCythonLib.so)
link_directories(/home/vibhatha/github/mycythonlib/cpp/cmake-build-debug/)

include_directories(/home/vibhatha/github/mycythonlib/cpp/include)

#set(CMAKE_CXX_COMPILER /home/vibhatha/software/openmpi/build/bin/mpic++)

add_executable(mycythonexamples main.cpp)
target_link_libraries(mycythonexamples ${PROJECT_LINK_LIBS} )