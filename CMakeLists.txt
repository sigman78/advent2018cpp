cmake_minimum_required(VERSION 3.6)
project(advent)

if ("${CMAKE_BUILD_TYPE}" STREQUAL "")
  message(STATUS "No build type selected, default to Debug")
  set(CMAKE_BUILD_TYPE "Debug")
endif()

include(CTest)

set(CMAKE_CXX_STANDARD 17)

# dependencies
add_subdirectory(3rd)

# targets
add_subdirectory(src)
