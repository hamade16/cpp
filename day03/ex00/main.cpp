#include "ClapTrap.hpp"

int main()
{
    ClapTrap instance("X");
    instance.attack("Y");
    instance.takeDamage(5);
    instance.beRepaired(6);
    return(0);
}