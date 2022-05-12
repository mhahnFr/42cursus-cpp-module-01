//
// Created by Manuel Hahn on 5/12/22.
//

#ifndef EX03_HUMANA_H
#define EX03_HUMANA_H


#include "Weapon.h"

class HumanA {
public:
    HumanA(const std::string &name, Weapon &weapon);
    Weapon &getWeapon() const;
    void setWeapon(Weapon &weapon);
    void attack();

private:
    Weapon &weapon;
    const std::string name;
};


#endif //EX03_HUMANA_H
