#include <iostream>

int main() {


 // logical operators = used to connect two or more expressions
    // && = must be true
    // || = one must be true
    // ! = reverses the logical state of its operand (not)

    int temp;
    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    if(temp > 0 && temp < 30) {
        std::cout << "The Temp is good!";
    }

    else {
        std::cout << "The Temp is bad!";
    }

    // Keep the window open
    std::cout << "\nPress Enter to continue...";
    std::cin.ignore();
    std::cin.get();
    return 0;
}