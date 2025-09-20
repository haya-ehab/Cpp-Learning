#include <iostream>
#include <ctime>

int main() {

// Pseudo-Random Number Generation 

srand(time(NULL));

int num1 = (rand() % 6 ) + 1;
int num2 = (rand() % 6 ) + 1;
int num3 = (rand() % 6 ) + 1;

std::cout << num1 << '\n';
std::cout << num2 << '\n';
std::cout << num3 << '\n';



    
    // Keep the window open
    std::cout << "\nPress Enter to continue...";
    std::cin.ignore();
    std::cin.get();
    return 0;
}