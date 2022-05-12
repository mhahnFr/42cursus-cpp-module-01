//
// Created by Manuel Hahn on 5/12/22.
//

#include "Zombie.h"

#define COUNT 5

int main() {
    Zombie* zombies = zombieHorde(COUNT, "Main Zombie");
    for (int i = 0; i < COUNT; i++) {
        zombies[i].announce();
    }
    delete[] zombies;
}
