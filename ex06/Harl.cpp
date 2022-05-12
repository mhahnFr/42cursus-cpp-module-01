//
// Created by Manuel Hahn on 5/12/22.
//

#include <iostream>
#include "Harl.h"

void Harl::complain(const std::string &level) {
    void (Harl::*funcs[])() = {
            &Harl::debug,
            &Harl::info,
            &Harl::warning,
            &Harl::error
    };
    std::string levels[] = {
            "DEBUG",
            "INFO",
            "WARNING",
            "ERROR"
    };
    int i;
    for (i = 0; i < 4 && levels[i] != level; i++);
    switch (i) {
        case 0: (this->*funcs[0])();
        case 1: (this->*funcs[1])();
        case 2: (this->*funcs[2])();
        case 3: (this->*funcs[3])();
            break;

        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
    }
}

void Harl::error() {
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::warning() {
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::info() {
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::debug() {
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}
