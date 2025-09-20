#include <iostream>

int main() {
    // Using for loop to print numbers from 1 to 5

    for(int i = 10; i < 10; i--){
        std::cout << i << "\n";
    }
      std::cout << "Happy new year!\n";

    // Keep the window open
    std::cout << "\nPress Enter to continue...";
    std::cin.ignore();
    std::cin.get();
    return 0;
}