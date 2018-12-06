add_executable(day01a day01a.cpp)
target_link_libraries(day01a range-v3)
add_test(test.day01a, day01a WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})
