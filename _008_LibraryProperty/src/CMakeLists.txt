
set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)

add_library(linear SHARED linear.cpp)
add_library(static_linear STATIC linear.cpp)

set_target_properties(static_linear PROPERTIES OUTPUT_NAME "linear")

# get defined value
get_target_property(OUTPUT_VALUE static_linear OUTPUT_NAME)
message(STATUS "OUTPUT_NAME = ${OUTPUT_VALUE}")

# get undefined value
get_target_property(UNDEFINED_VALUE static_linear UNDEFINED_NAME)
message(STATUS "UNDEFINED_NAME = ${UNDEFINED_VALUE}")

set_target_properties(linear PROPERTIES VERSION 1.0 SOVERSION 1)

# set install path
install(TARGETS linear static_linear 
        LIBRARY DESTINATION lib/${PROJECT_NAME}
        ARCHIVE DESTINATION lib/${PROJECT_NAME})
install(FILES linear.h DESTINATION include/${PROJECT_NAME})

