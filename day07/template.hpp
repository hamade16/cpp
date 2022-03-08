#ifndef TEMPLATE_HPP
# define TEMPLATE_HPP

#include <iostream>

template< typename T = float>

class vertex{
    public:
        vertex(T const & x, T const & y, T const & z) : _x(x), _y(y), _z(z) {}
        ~vertex(void) {}
        T const & getx(void) const { return this->_x;}
        T const & gety(void) const { return this->_y;}
        T const & getz(void) const { return this->_z;}

    private:
        T const _x;
        T const _y;
        T const _z;

        vertex(void);
};

template<typename T>
std::ostream & operator<<(std::ostream & o, vertex<T> const v)
{
    //std::cout.presicision(1);
    o << "vertex(";
    o << v.getx() << ", ";
    o << v.gety() << ", ";
    o << v.getz();
    o << ")";
    return o;
}

#endif