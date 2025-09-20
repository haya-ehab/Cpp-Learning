#include <iostream>

int main() {

  std::string name;

  if(name.empty()) {
    std::cout << "Enter your Name: ";
    std::getline(std::cin, name);

//    while(name.empty()) {
//     std::cout << "Enter your Name: ";
//     std::getline(std::cin, name);

  }


 std::cout << "Hello, " << name << "!\n";

     // Keep the window open
    std::cout << "\nPress Enter to continue...";
    std::cin.ignore();
    std::cin.get();
    return 0;

}