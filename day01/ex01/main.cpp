#include "zombie.h"

zombie* zombieHorde(int n, std::string name);

int main()
{
    int i = 0;
    zombie* instance = zombieHorde(5, "hamade");
    while(i < 5)
    {
        instance[i].annonce();
        i++;
    }
    delete [] instance;
    return (0);
}