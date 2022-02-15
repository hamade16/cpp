#include "FragTrap.hpp"

int main()
{
    FragTrap instance("X");
    instance.attack("Y");
    instance.takeDamage(5);
    instance.beRepaired(6);
    instance.highFivesGuys();
    return(0);
}