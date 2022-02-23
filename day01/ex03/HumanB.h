#ifndef HUMANB
# define HUMANB

#include <iostream>
#include "Weapon.h"

class HumanB{
    private:
        std::string name;

    public:
        HumanB(std::string name);
        Weapon *weapon;
        void  attack(void);
        void    setWeapon(Weapon &weapon);
        ~HumanB(void);
};
#endif