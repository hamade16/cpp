#include "Fixed.hpp"

Fixed::Fixed(void) : fixed_p(0)
{
    std::cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::Fixed(Fixed const &src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    this->fixed_p = src.fixed_p;
    return ;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

Fixed &  Fixed::operator=(Fixed const & rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->fixed_p = getRawBits();
    return *this;
}

void Fixed::setRawBits( int const raw )
{
    fixed_p = raw;
}

 int Fixed::getRawBits( void )
 {
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fixed_p);
 }

