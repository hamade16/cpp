#include "Zombie.h"

zombie::zombie(std::string name)
{
    this->name = name;
    return ;
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