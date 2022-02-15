#ifndef HUMANA
# define HUMANA

#include <iostream>
#include "Weapon.h"

class HumanA{
    public:
      Weapon &weapon;
      HumanA(std::string name, Weapon &weapon);
      std::string name;
      void  attack(void);
      //~HumanA(void);
};
#endif