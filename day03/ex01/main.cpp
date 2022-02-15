#include "ScavTrap.hpp"

int main()
{
    ScavTrap instance("X");
    instance.attack("Y");
    instance.takeDamage(5);
    instance.beRepaired(6);
    instance.guardGate();
    return(0);
}