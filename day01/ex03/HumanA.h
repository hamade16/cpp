#ifndef HUMANA
# define HUMANA

#include <iostream>
#include "Weapon.h"

class HumanA{
    private:
      std::string name;

    public:
      Weapon &weapon;
      HumanA(std::string name, Weapon &weapon);
      void  attack(void);
      ~HumanA(void);
};
#endif