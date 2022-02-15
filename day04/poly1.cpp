#include <iostream>


 class character
{
    public:
        virtual void    sayHello(std::string const& target);
};
class warrior : public character
{
    public:
       void    sayHello(std::string const& target);
};

void    character::sayHello(std::string const& target)
{
    std::cout << "Hello " << target << "!" << std::endl;
}

void    warrior::sayHello(std::string const& target)
{
    std::cout << "fuck of " << target << ", I don't like you !" << std::endl;
}

int main()
{
    warrior*    a = new warrior();
    character*  b = new warrior();
    a->sayHello("student");
    b->sayHello("student");
}