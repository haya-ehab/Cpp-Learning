#include <iostream>

int main() {
     char op;
     double num1;
     double num2;
     double result;

     std::cout << "******** CALCULATOR ********" << std::endl;

     std::cout << "Enter either (+ - * /): ";
     std::cin >> op;

     std::cout << "Enter #1:";
     std::cin >> num1;

      std::cout << "Enter #2:";
      std::cin >> num2;

      switch(op){

        case '+':
            result = num1 + num2;
            std::cout << "result: " << result << '\n';
            break;

        case '-':
            result = num1 - num2;
            std::cout << "result: " << result << '\n';
            break;

        case '*':
            result = num1 * num2;
            std::cout << "result: " << result << '\n';
            break;

        case '/':
            if(num2 != 0) {
                result = num1 / num2;
                std::cout << "result: " << result << '\n';
            } else {
                std::cout << "Error: Division by zero!" << std::endl;
            }
            break;

        default:
            std::cout << "Error: Invalid operator!" << std::endl;
            break;
      }

      std::cout << "***********************" << std::endl;
     
   
       // Keep the window open
    std::cout << "\nPress Enter to continue...";
    std::cin.ignore();
    std::cin.get();
    return 0;
}