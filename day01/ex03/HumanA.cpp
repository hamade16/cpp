#include "HumanA.h"

HumanA::HumanA(std::string name, Weapon &weapon): weapon(weapon)
{
    this->name = name;
}

HumanA::~HumanA(void)
{
    
}

void    HumanA::attack(void)
{
    std::cout << name << " attacks with theire " << weapon.getType() << std::endl;

}
