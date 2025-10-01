
#### 003 hidden variables for binary directory and project directory
    <project_name>_BINARY_DIR
    <project_name>_SOURCE_DIR
    
    - Other two variables
    PROJECT_BINARY_DIR = <project_name>_BINARY_DIR
    PROJECT_SOURCE_DIR = <project_name>_SOURCE_DIR
    
#### 004 static library and dynamic library
    cmake_minimum_required(VERSION version)

    add_library(lib_name [SHARED|STATIC|MODULE]
                [EXCLUDE_FROM_ALL] src1 src2 ...srcN)

    include_directories(include_path)

    target_link_libraries(target item1 item2 ... itemN)