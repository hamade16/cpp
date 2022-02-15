#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "default constructeur FragTrap called" << std::endl;
    return ;
}

FragTrap::FragTrap(std::string name)
{
    this->name = name;
    std::cout << "constructeur FragTrap called" << std::endl;
    return ;
}

FragTrap::FragTrap(FragTrap const &src)
{
    *this = src;
    std::cout << "constructeur copie FragTrap called" << std::endl;
    return ;
}

FragTrap& FragTrap::operator=(FragTrap const &)
{
    std::cout << "Copy assignment operator FragTrap called" << std::endl;
    return *this;
}

void FragTrap::attack(const std::string& target)
{
    std::cout << "FragTrap " << this->name << " attacks " << target << " causing " << this->attack_damage;
    std::cout << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "Demande de high fives" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "destrtructeur FragTrap called" << std::endl;
}
