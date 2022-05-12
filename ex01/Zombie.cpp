//
// Created by Manuel Hahn on 5/12/22.
//

#include <iostream>
#include "Zombie.h"

void Zombie::announce() const {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie() {
    std::cout << name << " destroyed" << std::endl;
}

Zombie::Zombie(std::string const & name): name(name) {
    std::cout << name << " created" << std::endl;
}

Zombie::Zombie() {}

const std::string &Zombie::getName() const {
    return name;
}

void Zombie::setName(const std::string &name) {
    Zombie::name = name;
}
