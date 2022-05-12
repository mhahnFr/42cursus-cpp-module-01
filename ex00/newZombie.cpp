//
// Created by Manuel Hahn on 5/12/22.
//

#include "Zombie.h"

Zombie* newZombie(std::string const & name) {
    return new Zombie(name);
}
