#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>


class	Fixed {
	public:
		Fixed ( void );
		Fixed (const Fixed& src );
		Fixed ( const int i );
		Fixed ( const float f);
		~Fixed( void );
		Fixed&	operator=( Fixed const& rhs);
		bool	operator>(Fixed const& rhs) const;
		bool	operator<(Fixed const& rhs) const;
		bool	operator<=(Fixed const& rhs) const;
		bool	operator>=(Fixed const& rhs) const;
		bool	operator==(Fixed const& rhs) const;
		bool	operator!=(Fixed const& rhs) const;
		Fixed	operator+(Fixed const& rhs) const;
		Fixed	operator-(Fixed const& rhs) const;
		Fixed	operator*(Fixed const& rhs) const;
		Fixed	operator/(Fixed const& rhs) const;
		Fixed	operator++();
		Fixed	operator++(int);
		Fixed	operator--();
		Fixed	operator--(int);
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