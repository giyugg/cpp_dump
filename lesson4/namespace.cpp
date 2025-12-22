#include <iostream>

namespace first {
    int x = 1;
}
namespace second {
    int x = 2;
}

int main() {
    /* Namespace
        - provides a solution for preventing name conflicts
        in large projects. Each entity needs a unique name.
        - A namespace allows for identically name entities as
        long as the namespaces are different.
    */
    
    int x = 0;
    // instead of int x = 1... (line 3-8)

    std::cout << x << std::endl;    // calls local x
    std::cout << first::x << std::endl;  // calls first namespace x
    std::cout << second::x << std::endl; // calls second namespace x

    return 0;
}