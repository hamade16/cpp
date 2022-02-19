#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
protected:
    std::string type;
public:
    WrongAnimal();
    WrongAnimal(WrongAnimal const &  src);
    WrongAnimal operator=(WrongAnimal const &);
    ~WrongAnimal();

    virtual std::string getType(void) const;
    void    makeSound(void) const;
};

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(WrongCat const & src);
        WrongCat operator=(WrongCat const &);
        ~WrongCat();

        std::string getType(void) const;
        void    makeSound(void) const;
};

#endif