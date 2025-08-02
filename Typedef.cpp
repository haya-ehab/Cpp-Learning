#include <iostream>
#include <vector>


  //typedef std::vector<std::pair<std::string, int>> pairlist_t;
   // typedef std::string text_t;
   //typedef int number_t;

   using text_t = std::string;
   using number_t = int;



int main() {
 // typedefs are used to create an alias for a type.
//std::vector<std::pair<std::string, int>> pairlist;

text_t firstName = "Haya";
number_t age = 16;
std::cout << firstName << '\n';
std::cout << age << '\n';



 return 0;
}