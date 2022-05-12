//
// Created by Manuel Hahn on 5/12/22.
//

#ifndef EX05_HARL_H
#define EX05_HARL_H

#include <string>

class Harl {
public:
    void complain(const std::string &level);

private:
    void debug();
    void info();
    void warning();
    void error();
};


#endif //EX05_HARL_H
