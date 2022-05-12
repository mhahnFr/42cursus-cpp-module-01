//
// Created by Manuel Hahn on 5/12/22.
//

#include <iostream>
#include "HumanB.h"

HumanB::HumanB(const std::string &name) : name(name), weapon(nullptr) {}

Weapon *HumanB::getWeapon() const {
    return weapon;
}

void HumanB::setWeapon(Weapon &weapon) {
    HumanB::weapon = &weapon;
}

void HumanB::attack() const {
    if (weapon != nullptr) {
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    } else {
        std::cout << name << " is not armed!" << std::endl;
    }
}
