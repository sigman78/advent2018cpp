ranges_append_flag(RANGES_HAS_WNO_MISSING_BRACES -Wno-missing-braces)
ranges_append_flag(RANGES_HAS_WNO_SHORTEN_64_TO_32 -Wno-shorten-64-to-32)
ranges_append_flag(RANGES_HAS_WNO_GLOBAL_CONSTRUCTORS -Wno-global-constructors)

add_executable(day01a day01a.cpp)
target_link_libraries(day01a range-v3)
add_test(test.day01a, day01a WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})
