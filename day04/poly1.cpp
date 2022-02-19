#include <iostream>


 class character
{
    private:
        std::string name;
    public:
        ~character();
         character(): name("anonmous"){};
        virtual void    sayHello(std::string const& target);
};

class warrior : public character
{
    public:
       ~warrior();
       void    sayHello(std::string const& target);
       void     hamade(void);
};

character::~character()
{

}

void    character::sayHello(std::string const& target)
{
    std::cout << "Hello " << target << "!" << std::endl;
}

void    warrior::sayHello(std::string const& target)
{
    std::cout << "fuck of " << target << ", I don't like you !" << std::endl;
}

void     warrior::hamade(void)
{
    std::cout << "hamade" << std::endl;
}

int main()
{
    // warrior*    a = new warrior();
    character  b;
    std::cout << sizeof(b) << std::endl;
    // a->sayHello("student");
    //b->sayHello("student");
    //b->hamade();
    // delete b;
}