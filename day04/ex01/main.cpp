#include "Brain.hpp"
#include "Animal.hpp"

int main()
{
    Animal *hayawan[2];

    hayawan[0] = new Dog("puspus");
    hayawan[1] = new Cat("vfbgfhfghgfg");

    std::cout << hayawan[0]->getType() << std::endl;
    std::cout << hayawan[1]->getType() << std::endl;
    for (int i = 0; i < 2; i++)
        delete hayawan[i];
}