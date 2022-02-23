#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class zombie
{
    private:
        std::string name;

    public:
        zombie();
        void    annonce(void);
        ~zombie(void);
        void    setname(std::string Name);

};

zombie* zombieHorde(int n, std::string name);
#endif