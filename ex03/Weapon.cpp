//
// Created by Manuel Hahn on 5/12/22.
//

#include "Weapon.h"

const std::string &Weapon::getType() const {
    return type;
}

void Weapon::setType(const std::string &type) {
    Weapon::type = type;
}

Weapon::Weapon(const std::string &type) : type(type) {}
