//
// Created by Manuel Hahn on 5/12/22.
//

#include <string>
#include <iostream>

int main() {
    std::string str("HI THIS IS BRAIN");
    std::string* stringPTR = &str;
    std::string& stringREF = str;

    std::cout << "Address of string:       " << &str << std::endl
              << "Address held by pointer: " << stringPTR << std::endl
              << "Address of reference:    " << &stringREF << std::endl;

    std::cout << std::endl
              << "Value of string:    " << str << std::endl
              << "Value pointed:      " << *stringPTR << std::endl
              << "Value of reference: " << stringREF << std::endl;
}
