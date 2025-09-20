#include <iostream>
#include <ctime>

int main() {

 srand(time(0));
 int randNum = rand() % 5 + 1;

 switch(randNum){
    case 1: std::cout << "you win a sticker!\n";
    break;
    case 2: std::cout << "you win a tee!\n";
      break;
    case 3: std::cout << "you win a a keychain!\n";
      break;
    case 4: std::cout << "you win a nail set!\n";
      break;
    case 5: std::cout << "you win a bottle!\n";
      break;
 }

      // Keep the window open
    std::cout << "\nPress Enter to continue...";
    std::cin.ignore();
    std::cin.get();
    return 0;
}