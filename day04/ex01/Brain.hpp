#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>


class Brain
{
    public:
        Brain();
        Brain(Brain const & src);
        Brain   operator=(Brain const &);
        ~Brain();
        std::string ideas[100];
};

#endif