#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class   ClapTrap {
    protected:
        std::string name;
        int hit_point;
        int energy_point;
        int attack_damage;
    public:
        ClapTrap();
        ClapTrap(ClapTrap const & src);
        ClapTrap(std::string name);
        ~ClapTrap();

        ClapTrap &  operator=(ClapTrap const &);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif