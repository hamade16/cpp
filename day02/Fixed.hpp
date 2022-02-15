#ifndef FIXED_H
# define FIXED_H
#include <iostream>

class Fixed
{
private:

    int fixed_p;
    const static int foo = 8;
public:
    
    Fixed();
    Fixed(Fixed const & src);
    ~Fixed();

    Fixed &  operator=(Fixed const & rhs);
    int getRawBits( void );
    void setRawBits( int const raw );
};

#endif