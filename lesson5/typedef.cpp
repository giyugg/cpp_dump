#include <iostream>
#include <vector>

// typedef std::vector<std::pair<std::string, int>> pairlist_t; //the t on pairlist is type.
typedef std::string text_t;
typedef int number_t;
// using text_t = std::string;
// using number_t = int;

int main() {

    /* typedef is reseved keyword used to create an additioal name (alias) for another data type.
    - new identifier for an existing type
    - helps with readability and reduces typos
    - use when there is a clear benefit
    - replaced with 'using' (work better w/ templates)
    */

    // pairlist_t pairlist;
    text_t firstName = "Mister";
    number_t age = 19;

    std::cout << firstName << '\n';
    std::cout << age << '\n';

    return 0;
}