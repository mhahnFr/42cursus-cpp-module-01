//
// Created by Manuel Hahn on 5/12/22.
//

#include <string>
#include "Zombie.h"

Zombie* zombieHorde(int N, std::string name) {
    Zombie* zombies = new Zombie[N]();
    for (int i = 0; i < N; i++) {
        zombies[i].setName(name);
    }
    return zombies;
}
