#include "HumanB.h"

HumanB::HumanB(std::string name)
{
    this->name = name;
    return ;
}

HumanB::~HumanB(void)
{

}

void    HumanB::setWeapon(Weapon &weapon){
    
    this->weapon = &weapon;
}

void    HumanB::attack(void)
{
    std::cout << name << " attacks with theire " << weapon->getType() << std::endl;
}

