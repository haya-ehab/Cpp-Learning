#include <iostream>

int main() {

  // Using do-while loop to ensure the user enters a non-empty name
  
  int number;

  do {
    std::cout << "Enter a +ve number: ";
    std::cin >> number;
    } while(number <= 0);
  

    // Keep the window open
    std::cout << "\nPress Enter to continue...";
    std::cin.ignore();
    std::cin.get();
    return 0;
}