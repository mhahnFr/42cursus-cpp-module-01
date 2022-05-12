//
// Created by Manuel Hahn on 5/12/22.
//

#ifndef EX03_WEAPON_H
#define EX03_WEAPON_H


#include <string>

class Weapon {
public:
    Weapon(const std::string &type);

    const std::string &getType() const;

    void setType(const std::string &type);

private:
    std::string type;
};


#endif //EX03_WEAPON_H
