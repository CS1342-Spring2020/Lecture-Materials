#include <iostream>
#include <limits>

int main() {
    int number;
    std::cout << "Enter a number: " << std::endl;
    std::cin >> number;

    // check input validity
    while (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Not a valid number. Please re-enter: ";
        std::cin >> number;
    }

    std::cout << "You entered " << number << std::endl;

    return 0;
}
