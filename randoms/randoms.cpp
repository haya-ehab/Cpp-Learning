// this file contains functions for random stuff basically just snippents of code that don't belong anywhere else

// useful math functions

// #include <iostream>


// int main() {
//     double x = 3;
//     double y = 4;
//     double z;

//  z = std::max(x, y);

//  std::cout << z;
//     return 0;
// }

#include <iostream>

int main() {
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    if (name.length() > 12){
        std::cout << "you name cant be over 12 chars";
    }
    return 0;

}