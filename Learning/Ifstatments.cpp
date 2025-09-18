#include <iostream>

int main() {

  //if statments = a condition that if true will execute a block of code
  //else if = a condition that will be checked if the previous if was false

  int age;
   std::cout << "How Old are You?: " <<std::endl;
    std::cin >> age;

   

    if(age >= 18) {
        std::cout << "Welcome to the site!" << std::endl;

    }
    else {
        std::cout << "You are not old enough to enter this site!";
    }
      // Keep the window open
    std::cout << "\nPress Enter to continue...";
    std::cin.ignore();
    std::cin.get();
    return 0;
}
