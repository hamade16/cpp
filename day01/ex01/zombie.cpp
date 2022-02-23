#include "zombie.h"

zombie::zombie()
{

}

zombie::~zombie(void)
{
    std::cout << name << " is destroyed" << std::endl;
    return ; 
}

void    zombie::annonce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    zombie::setname(std::string Name)
{
    this->name = Name;
}