

#### Steps

    mkdir build && cd build
    cmake ..
    make

        ```
            [ 50%] Building CXX object src/CMakeFiles/external_library.dir/main.cpp.o
            [100%] Linking CXX executable ../bin/external_library
            [100%] Built target external_library
        ```

    ldd ./bin/external_library
        ```
            linux-vdso.so.1 (0x00007fff7a94f000)
            liblinear.so.1 => /tmp/lib/LibraryProperty/liblinear.so.1 (0x00007ebde0548000)
            libstdc++.so.6 => /usr/local/gcc-13.3.0/lib64/libstdc++.so.6 (0x00007ebde0200000)
            libc.so.6 => /lib/x86_64-linux-gnu/libc.so.6 (0x00007ebddfe00000)
            libm.so.6 => /lib/x86_64-linux-gnu/libm.so.6 (0x00007ebde0119000)
            /lib64/ld-linux-x86-64.so.2 (0x00007ebde0554000)
            libgcc_s.so.1 => /usr/local/gcc-13.3.0/lib64/libgcc_s.so.1 (0x00007ebde0510000)
        ```

    tree /tmp/lib
        ```
            /tmp/lib
            └── LibraryProperty
                ├── liblinear.a
                ├── liblinear.so -> liblinear.so.1
                ├── liblinear.so.1 -> liblinear.so.1.0
                └── liblinear.so.1.0

            1 directory, 4 files
        ```