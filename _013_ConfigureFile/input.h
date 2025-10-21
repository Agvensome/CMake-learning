// input.h

#cmakedefine VAR 3.1415
#cmakedefine VAR1 "Good"
#cmakedefine01 VAR3
#cmakedefine01 VAR4
#cmakedefine NAME "@NAME@"
#cmakedefine NEW_NAME "${NEW_NAME}"
#cmakedefine QUOTE "@QUOTE@"

#include <iostream>

void ${my_print}() {
    std::cout << "printing something" << std::endl;
}