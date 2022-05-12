//
// Created by Manuel Hahn on 5/12/22.
//

#ifndef EX03_HUMANB_H
#define EX03_HUMANB_H

#include "Weapon.h"

class HumanB {
public:
    HumanB(const std::string &name);
    Weapon *getWeapon() const;
    void setWeapon(Weapon &weapon);
    void attack() const;

private:
    const std::string name;
    Weapon* weapon;
};


#endif //EX03_HUMANB_H
