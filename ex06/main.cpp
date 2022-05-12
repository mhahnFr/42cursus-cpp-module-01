//
// Created by Manuel Hahn on 5/12/22.
//

#include <string>
#include "Harl.h"

int main(int argc, char *argv[]) {
    Harl harl;
    std::string level = argc == 2 ? argv[1] : "";
    harl.complain(level);
}
