#include <iostream>

int main() {
    //ternary operator = shortcut for an if-else statement
    //condition ? expression if true : expression if false


  int grade = 75;
  grade >= 60 ? std::cout << "you pass!" : std::cout << "you fail!" ;
    
  // Keep the window open
    std::cout << "\nPress Enter to continue...";
    std::cin.ignore();
    std::cin.get();
    return 0;
   
  }









