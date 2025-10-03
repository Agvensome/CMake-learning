
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
add_executable(customize_install main.cpp)
install(TARGETS customize_install DESTINATION CustomizeInstall/bin)