#include <iostream>

int main() {
    using namespace std;
    // this is to avoid writing std::

    // instead of std::string name = "Bro";
    string name = "Bro";

    // instead of std::cout << "Hello " << name;
    cout << "Hello " << name;

    return 0;
}

// see lesson4/without_namespacestd.cpp for comparison or...

/*
#include <iostream>

int main() {
    using std::cout;
    using std::string;

    string name = "Bro";
    cout << "Hello " << name;

    return 0;
}
*/