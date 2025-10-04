
#### Steps

    mkdir build && cd build
    cmake -DCMAKE_INSTALL_PREFIX=/tmp ..
    make
    make install
        ```
            Consolidate compiler generated dependencies of target linear
            [ 50%] Built target linear
            Consolidate compiler generated dependencies of target static_linear
            [100%] Built target static_linear
            Install the project...
            -- Install configuration: ""
            -- Installing: /tmp/lib/LibraryProperty/liblinear.so.1.0
            -- Up-to-date: /tmp/lib/LibraryProperty/liblinear.so.1
            -- Up-to-date: /tmp/lib/LibraryProperty/liblinear.so
            -- Installing: /tmp/lib/LibraryProperty/liblinear.a
            -- Up-to-date: /tmp/include/LibraryProperty/linear.h
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

    tree /tmp/include
        ```
            /tmp/include
            └── LibraryProperty
                └── linear.h

            1 directory, 1 file
        ```