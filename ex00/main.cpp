//
// Created by Manuel Hahn on 5/12/22.
//

#include <cstdlib>
#include "Zombie.h"

int main() {
    Zombie* zombie = {newZombie("Foo")};
    zombie->announce();
    delete zombie;
    randomChump("Bar");
    return EXIT_SUCCESS;
}
