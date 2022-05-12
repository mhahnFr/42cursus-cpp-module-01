//
// Created by Manuel Hahn on 5/12/22.
//

#include <string>
#include "Zombie.h"

void randomChump(std::string const & name) {
    Zombie zombie(name);
    zombie.announce();
}
