#ifndef HUMANB
# define HUMANB

#include <iostream>
#include "Weapon.h"

class HumanB{
    public:
        HumanB(std::string name);
        Weapon *weapon;
        std::string name;
        void  attack(void);
        void    setWeapon(Weapon &weapon);
        //~HumanB(void);
};
#endif