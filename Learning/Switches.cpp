#include <iostream>

int main() {
    // switch = statement that allows a variable to be tested for equality against a list of values
    // each value is called a case, the variable being switched on is checked for each case

    int month;
    std::cout << "Enter a Month (1-12); ";
    std::cin >> month;

    switch(month) {
        case 1:
        std::cout << "January";
        break;
    }
     // Keep the window open
    std::cout << "\nPress Enter to continue...";
    std::cin.ignore();
    std::cin.get();
    return 0;
}

