#include <iostream>
#include <string>

#include "leaver.h"

int main()
{
    std::cout << "Enter your name: ";
    std::string user_name;
    std::cin >> user_name;
    
    Leaver l1;
    std::cout << l1.leave(user_name) << std::endl;
    
    return 0;
}
