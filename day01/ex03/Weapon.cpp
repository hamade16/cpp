#include "Weapon.h"

Weapon::Weapon(std::string type)
{
    this->type = type;
    return ;
}

Weapon::~Weapon(void)
{
    return ;
}

void    Weapon::setType(std::string type)
{
    this->type = type;
}

std::string Weapon::getType(void)
{
    return type;
}
