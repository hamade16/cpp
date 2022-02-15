#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class zombie
{
    public:
        void    annonce(void);
        zombie (std::string name);
        ~zombie(void);

    private:
        std::string name;

};

#endif