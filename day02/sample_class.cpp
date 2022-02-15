#include "sample_class.hpp"

sample::sample(void) : _foo(0)
{
    std::cout << "default constructor colled" << std::endl;
    return ;
}

sample::sample(int const n) : _foo(n)
{
    std::cout << "prametric constructor colled" << std::endl;
    return ;
}

sample::sample(sample const & src)
{
    std::cout << "copy constructor colled" << std::endl;
    *this = src;

    return ;
}

sample &  sample::operator=(sample const & rhs)
{
    std::cout << "assignement operator colled" << std::endl;
    return *this;
}
int sample::getfoo() const
{
    std::cout << "the value of _foo is :" ;
    return(_foo);
}
/*std::ostream &  operator<<(std::ostream & o, sample  const  & i)
{
    o << i.getfoo();
    return(o);
}*/
sample::~sample(void)
{
    std::cout << "destructor colled" << std::endl;
    return ;
}
