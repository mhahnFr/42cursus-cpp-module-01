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
