
cmake_minimum_required(VERSION 3.12)
project(CustomizeInstall)
add_subdirectory(src bin)
install(FILES copyright readme DESTINATION CustomizeInstall)
install(PROGRAMS run_customize_install.sh DESTINATION CustomizeInstall/bin)
install(DIRECTORY doc/ DESTINATION CustomizeInstall/share/doc)