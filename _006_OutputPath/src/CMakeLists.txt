
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)
add_library(sayhello sayhello.cpp)
include_directories(${PROJECT_SOURCE_DIR}/src)

add_executable(outputpath main.cpp)
target_link_libraries(outputpath sayhello)