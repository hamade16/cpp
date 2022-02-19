
#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

/*
	The class goes as follow:
		- Constructors ==> Destructors ==> Operator overloaders ==> Methods.
*/
class	Fixed {
	public:
		Fixed ( void ); 					// canonical
		Fixed (const Fixed& src ); 				// canonical
		Fixed ( const int i );
		Fixed ( const float f);
		~Fixed( void );						// canonical
		Fixed& operator=( Fixed const& rhs);	// canonical
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat ( void ) const;
		int		toInt( void ) const;
	private:
		static const int	_nBit = 8;
		int					_fp;
};

std::ostream& operator<<( std::ostream& o,  Fixed const& rhs);
#endif