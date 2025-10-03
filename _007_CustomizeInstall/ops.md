#### Steps

    mkdir build && cd build
    cmake -DCMAKE_INSTALL_PREFIX=/tmp ..
    make
    make install
        ```
            Consolidate compiler generated dependencies of target customize_install
            [100%] Built target customize_install
            Install the project...
            -- Install configuration: ""
            -- Installing: /tmp/CustomizeInstall/copyright
            -- Installing: /tmp/CustomizeInstall/readme
            -- Installing: /tmp/CustomizeInstall/bin/run_customize_install.sh
            -- Installing: /tmp/CustomizeInstall/share/doc
            -- Installing: /tmp/CustomizeInstall/share/doc/custom_install_doc.txt
            -- Installing: /tmp/CustomizeInstall/bin/customize_install
        ```

    cd /tmp
    tree CustomizeInstall/
        ```
            CustomizeInstall/
            ├── bin
            │   ├── customize_install
            │   └── run_customize_install.sh
            ├── copyright
            ├── readme
            └── share
                └── doc
                    └── custom_install_doc.txt

            3 directories, 5 files
        ```
