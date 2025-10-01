project(HelloCMake)
set(SRC_LIST hellocmake.cpp)
message("This is a message")
message(STATUS "This is another message")
# To test SEND_ERROR and FATAL_ERROR, you can execute messages as follows:
# message(SEND_ERROR "This is SEND_ERROR message.")       # send error and continue.
# message(FATAL_ERROR "This is FATAL_ERROR message.")     # terminate.
# message(SEND_ERROR "This is SEND_ERROR message.")
add_executable(hello_cmake ${SRC_LIST})