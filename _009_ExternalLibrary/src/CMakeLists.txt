
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

# link_libraries(/tmp/lib/LibraryProperty/liblinear.so)               # one linking method

link_directories(/tmp/lib/LibraryProperty)        # other linking method
add_executable(external_library main.cpp)
include_directories(/tmp/include/LibraryProperty)
target_link_libraries(external_library linear)    # other linking method
# target_link_libraries(external_library linear.a)    # other linking static_lib method