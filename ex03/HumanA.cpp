//
// Created by Manuel Hahn on 5/12/22.
//

#include <iostream>
#include "HumanA.h"

HumanA::HumanA(const std::string &name, Weapon &weapon) : weapon(weapon), name(name) {}

Weapon &HumanA::getWeapon() const {
    return weapon;
}

void HumanA::setWeapon(Weapon &weapon) {
    HumanA::weapon = weapon;
}

void HumanA::attack() {
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
