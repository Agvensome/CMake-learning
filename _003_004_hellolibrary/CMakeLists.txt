cmake_minimum_required(VERSION 3.12)
project(HelloLibrary)
add_library(hello_library SHARED hellolibrary.cpp)
# add_library(hello_library STATIC hellolibrary.cpp)
include_directories(${PROJECT_SOURCE_DIR})

# 003 hidden variables for binary directory and project directory
message(STATUS ${HelloLibrary_BINARY_DIR})
message(STATUS ${PROJECT_BINARY_DIR})
message(STATUS ${HelloLibrary_SOURCE_DIR})
message(STATUS ${PROJECT_SOURCE_DIR})

add_executable(hello_main main.cpp)
target_link_libraries(hello_main hello_library)