cmake_minimum_required(VERSION 3.5)

set(PROJECT_NAME Taxiing)

project(${PROJECT_NAME})

enable_testing()

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -lgtest -pthread")

aux_source_directory(src SOURCE_FILES)

include_directories("gtest/include")

include_directories("include")

link_directories("gtest/lib")

add_executable(${PROJECT_NAME} main.cpp ${SOURCE_FILES})

target_link_libraries(${PROJECT_NAME} gtest gtest_main ${CMAKE_THREAD_LIBS_INIT})

add_test(NAME ${PROJECT_NAME} COMMAND ${PROJECT_NAME})