#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class zombie
{
    public:
        void    annonce(void);
        ~zombie(void);
        void    setname(std::string Name);
    private:
        std::string name;

};

#endif