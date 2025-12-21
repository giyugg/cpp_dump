#include <iostream>

int main() {

    // integer (whole number)
    int age = 19;
    int year = 2023;
    int days = 7.5; // this will truncate the decimal part

    std::cout << age << '\n';
    std::cout << year << '\n';
    std::cout << days << '\n'; // note that days will print as 7 instead of 7.5
    std::cout << '\n';

    // double (number including decimal)
    double price = 10.99;
    double gwa = 1.75;
    double temperature = 25.1;

    std::cout << price << '\n';
    std::cout << gwa << '\n';
    std::cout << temperature << '\n';
    std::cout << '\n';

    // char (single character)
    char grade = 'A';
    char initial = 'B';
    char dollarSign = '$';

    std::cout << grade << '\n';
    std::cout << initial << '\n';
    std::cout << dollarSign << '\n';
    std::cout << '\n';

    // boolean (true or false)
    bool student = false;
    bool power = true;
    bool forSale = true;
    
    // string (objects that represents a sequence of characters)
    std::string name = "Kyle";
    std::string day = "Friday";
    std::string food = "pizza";
    std::string address = "123 Main St.";

    std::cout << name << '\n';
    std::cout << day << '\n';
    std::cout << food << '\n';
    std::cout << address << '\n';
    std::cout << '\n';

    std::cout << "Hello, " << name <<  "!\n";
    std::cout << "You are " << age << " years old." << '\n';
    std::cout << "Today is " << day << "." << '\n';
    std::cout << "Your favorite food is " << food << "." << '\n';

    return 0;
}