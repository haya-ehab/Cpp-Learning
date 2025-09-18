#include <iostream>
#include <string>

int main() {
    std::string name;
    int age;
    
    std::cout << "What's your name?: " << std::endl;
    std::getline(std::cin, name);  // This reads the entire line including spaces
    
    std::cout << "How old are you?: " << std::endl;
    std::cin >> age;
    
    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old";
      // Keep the window open
    std::cout << "\nPress Enter to continue...";
    std::cin.ignore();
    std::cin.get();
    return 0;
}