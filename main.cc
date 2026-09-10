#include <iostream>
#include <string>
#include "Dealstr.h"

int main() {
    
    while (cin >> str){
        std::cout << "Enter a commands : " << std::endl;
        DealStr read_str(str);
        DealStr::print(str);
        
    }

}