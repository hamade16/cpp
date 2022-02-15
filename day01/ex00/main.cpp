#include "Zombie.h"
zombie* newZombie(std::string name);
void    randomChump(std::string name);

int main()
{
    zombie instance("hamade");
    instance.annonce();
    zombie* instance1 = newZombie("oubeid");
    instance1->annonce();
    randomChump("ahmedou"); 
    delete instance1;
    return (0);
}