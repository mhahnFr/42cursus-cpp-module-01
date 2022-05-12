//
// Created by Manuel Hahn on 5/12/22.
//

#ifndef EX00_ZOMBIE_H
#define EX00_ZOMBIE_H


#include <string>

class Zombie {
public:
    Zombie(std::string const &);
    Zombie();
    ~Zombie();
    void announce() const;

    const std::string &getName() const;

    void setName(const std::string &name);

private:
    std::string name;
};

Zombie* zombieHorde(int N, std::string name);

#endif //EX00_ZOMBIE_H
