#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "constructeur de default Animal" << std::endl;
    this->type = "Abdelaziz";
    return ;
}

Animal::Animal(Animal const & src)
{
    std::cout << "constructor de copie Animal" << std::endl;
    *this = src;
    return ;
}

Animal Animal::operator=(Animal const &)
{
    std::cout << "operator d'assignemnt Animal" << std::endl;
    return (*this);
}

std::string Animal::getType(void) const
{
    return this->type;
}

void    Animal::makeSound(void) const
{
    std::cout << "na3essssss" << std::endl;
}

Animal::~Animal()
{
    std::cout << "destructor du Animal" << std::endl;
    return ;
}

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "constructeur de default Cat" << std::endl;
    return ;
}

Cat::Cat(Cat const & src)
{
    *this = src;
    std::cout << "constructeur de cat" << std::endl;
    return ;
}

Cat Cat::operator=(Cat const &)
{
    std::cout << "operator d'assignemnt Cat" << std::endl;
    return (*this);
}

Cat::~Cat()
{
    std::cout << "destructor du Cat" << std::endl;
    return ;
}

std::string Cat::getType(void) const
{
    return this->type;
}

void   Cat::makeSound(void) const
{
    std::cout << "miawwwwwwwww" << std::endl;
}

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "constructeur de default Dog" << std::endl;
    return ;
}

Dog::Dog(Dog const & src)
{
    *this = src;
    std::cout << "constructor de copie Dog" << std::endl;
    return ;
}

Dog Dog::operator=(Dog const &)
{
    std::cout << "operator d'assignemnt Dog" << std::endl;
    return *this;
}

Dog::~Dog()
{
    std::cout << "destructor du Dog" << std::endl;
    return ;
}

std::string Dog::getType(void) const
{
    return this->type;
}

void    Dog::makeSound(void) const
{
    std::cout << "howwww howwwwww" << std::endl;
}