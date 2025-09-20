#include <iostream>

int main() {

  // Break -> to break out of the loop
    // Continue -> to skip the current iteration of the loop
 for(int i = 1; i <= 20; i++){
    if(i == 13){
        break;
    }
 }

    // Keep the window open
    std::cout << "\nPress Enter to continue...";
    std::cin.ignore();
    std::cin.get();
    return 0;
}

// int main() {

//   // Break -> to break out of the loop
//     // Continue -> to skip the current iteration of the loop
//  for(int i = 1; i <= 20; i++){
//     if(i == 13){
//       continue;
//     }
//  }

//     // Keep the window open
//     std::cout << "\nPress Enter to continue...";
//     std::cin.ignore();
//     std::cin.get();
//     return 0;
// }