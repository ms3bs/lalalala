cmake_minimum_required(VERSION 3.20)
project(SettingUpGoogleTest)

set(CMAKE_CXX_STANDARD 14)
add_subdirectory(lib/googletest-main)
include_directories(lib/googletest-main/googletest/include)

add_executable(SettingUpGoogleTest main.cpp test_cover.cpp)
target_link_libraries(SettingUpGoogleTest gtest gtest_main)