#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "constructor default called" << std::endl;
    return ;
}

ClapTrap::ClapTrap(std::string name)
{
    this->hit_point = 10;
    this->energy_point = 10;
    this->attack_damage = 0;
    this->name = name;
    std::cout << "constructeur called" << std::endl;
    return ;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return ;
}

ClapTrap &  ClapTrap::operator=(ClapTrap const & rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    return *this;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->hit_point > 0 && this->energy_point > 0)
    {
        std::cout << "ClapTrap " << this->name << " attacks " << target << " causing " << this->attack_damage;
        std::cout << " points of damage!" << std::endl;
        this->hit_point -= this->attack_damage;
        this->energy_point -= 1;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hit_point > 0 && this->energy_point > 0)
    {
        this->attack_damage = amount;
        std::cout << "ClapTrap " << this->name << " perd " << amount << " hit point" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->hit_point > 0 && this->energy_point > 0)
    {
        this->hit_point += amount;
        this->energy_point -= 1;
        std::cout << "ClapTrap " << this->name << " regagne " << amount << " hit point" << std::endl;
    }
}

ClapTrap::~ClapTrap()
{
    std::cout << "destrtructeur called" << std::endl;
    return ;
}