#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "default constructeur ScavTrap called" << std::endl;
    return ;
}

ScavTrap::ScavTrap(std::string name)
{
    this->name = name;
    std::cout << "constructeur ScavTrap called" << std::endl;
    return ;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
    *this = src;
    std::cout << "constructeur copie ScavTrap called" << std::endl;
    return ;
}

ScavTrap & ScavTrap::operator=(ScavTrap const &)
{
    std::cout << "Copy assignment operator ScavTrap called" << std::endl;
    return *this;
}

void ScavTrap::attack(const std::string& target)
{
    std::cout << "ScavTrap " << this->name << " attacks " << target << " causing " << this->attack_damage;
    std::cout << " points of damage!" << std::endl;
}

void ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap est entré en mode Gate keeper" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "destrtructeur ScavTrap called" << std::endl;
}

