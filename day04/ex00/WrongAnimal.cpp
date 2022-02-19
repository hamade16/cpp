#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "constructeur de default Animal" << std::endl;
    this->type = "Abdelaziz";
    return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src)
{
    std::cout << "constructor de copie WrongAnimal" << std::endl;
    *this = src;
    return ;
}

WrongAnimal WrongAnimal::operator=(WrongAnimal const &)
{
    std::cout << "operator d'assignemnt WrongAnimal" << std::endl;
    return (*this);
}

std::string WrongAnimal::getType(void) const
{
    return this->type;
}

void    WrongAnimal::makeSound(void) const
{
    std::cout << "na3essssss" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "destructor du WrongAnimal" << std::endl;
    return ;
}

WrongCat::WrongCat()
{
    this->type = "Cat";
    std::cout << "constructeur de default Cat" << std::endl;
    return ;
}

WrongCat::WrongCat(WrongCat const & src)
{
    *this = src;
    std::cout << "constructeur de Wrongcat" << std::endl;
    return ;
}

WrongCat WrongCat::operator=(WrongCat const &)
{
    std::cout << "operator d'assignemnt WrongCat" << std::endl;
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "destructor du WrongCat" << std::endl;
    return ;
}

std::string WrongCat::getType(void) const
{
    return this->type;
}

void   WrongCat::makeSound(void) const
{
    std::cout << "miawwwwwwwww" << std::endl;
}