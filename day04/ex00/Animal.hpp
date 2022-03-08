#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
    std::string type;
public:
    Animal();
    Animal(Animal const &  src);
    Animal operator=(Animal const &);
    ~Animal();

    virtual std::string getType(void) const;
    virtual void    makeSound(void) const;
};

class Dog : public Animal
{
    public:
        Dog();
        Dog(Dog const & src);
        Dog operator=(Dog const &);;/-
        ~Dog();

        std::string getType(void) const;
        void    makeSound(void) const;
};

class Cat : public Animal
{
    public:
        Cat();
        Cat(Cat const & src);
        Cat operator=(Cat const &);
        ~Cat();

        std::string getType(void) const;
        void    makeSound(void) const;
};


#endif