#include "dealstr.h"
#include <iostream>

class Dealstr{

void DealStr::print(std::string str) {
    std::cout << str << std::endl;
}
string read_str(std::string str) {
    
    std::getline(std::cin, str);
  
    return str;
}
}