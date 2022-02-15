#include "zombie.h"

zombie* zombieHorde(int n, std::string name)
{
    zombie* instance = new zombie[n];
    int i = 0;

    while (i < n)
    {
        instance[i].setname(name);
        i++;
    }
    return (instance);

}