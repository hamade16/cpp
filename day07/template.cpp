#include <iostream>
#include "template.hpp"

template< typename T >

T const & max(T const & x, T const & y)
{
    return (x >= y ? x : y);
}

int main(void)
{
    //int a = 21;
    /*int b = 42;

    std::cout << "max of " << a << " and " << b << " is ";
    std::cout << max<int>(a, b) << std::endl;

    float c = -1.2f;
    float d = 4.2f;

    std::cout << "max of " << a << " and " << b << " is ";
    std::cout << max<int>(a, b) << std::endl;*/
    vertex<int>     v1(12, 23, 34);
    vertex<>     v2(12, 23, 34);

    std::cout << v1 << std::endl;
    return (0);
}