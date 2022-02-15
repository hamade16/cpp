#ifndef WEAPON
# define WEAPON

#include <iostream>

class Weapon{
    public:
        std::string    getType(void);
        void    setType(std::string typ);
        Weapon(std::string type);
        ~Weapon(void);
        Weapon(){}
    private:
        std::string type;
};

#endif