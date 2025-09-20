#include <iostream>
#include <ctime>


int main(){

 int num;
 int guess;
 int tries;

 srand(time(NULL));
 num = (rand() % 100) + 1;

 std::cout << "***** Number Guessing Game *****\n\n";
    std::cout << "Guess a number between 1 and 100: ";
    std::cin >> guess;

    tries++;

    if(guess > num){
        std::cout << "Too high! Try again.\n";
    } else if(guess < num){
        std::cout << "Too low! Try again.\n";
    } else {
        std::cout << "Congratulations! You guessed the number in " << tries << " tries.\n";
    }
    while (guess != num);
    
    {
        std::cout << "The number was: " << num << std::endl;
    }
    


     // Keep the window open
    std::cout << "\nPress Enter to continue...";
    std::cin.ignore();
    std::cin.get();
    return 0;
}