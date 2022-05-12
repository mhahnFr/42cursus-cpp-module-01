//
// Created by Manuel Hahn on 5/12/22.
//

#ifndef EX00_ZOMBIE_H
#define EX00_ZOMBIE_H


#include <string>

class Zombie {
public:
    Zombie(std::string const &);
    ~Zombie();
    void announce() const;

private:
    std::string name;
};

Zombie* newZombie(std::string const &);
void randomChump(std::string const &);

#endif //EX00_ZOMBIE_H
