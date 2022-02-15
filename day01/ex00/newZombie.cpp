#include "Zombie.h"

zombie* newZombie(std::string name)
{
    zombie* instance1= new zombie(name);
    return (instance1);
}