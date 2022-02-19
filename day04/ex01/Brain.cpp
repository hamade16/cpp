#include "Brain.hpp"

Brain::Brain()
{
    std::cout <<"costructeur de default Brain" << std::endl;
    return ;
}

Brain::Brain(Brain const & src)
{
    *this = src;
    std::cout << "constructeur de copie Brain" << std::endl;
    return ;
}

Brain   Brain::operator=(Brain const &)
{
    std::cout << "oerator d'assignement Brain" << std::endl;
    return *this;
}

Brain::~Brain()
{
    std::cout << "destructor de Brain" << std::endl;
    return ;
}
