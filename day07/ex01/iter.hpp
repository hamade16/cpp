#ifndef ITER_HPP
# define ITER_HPP
#include <iostream>
#include <string>

template <typename T>
void    iter(T *list, int len, void (*f)(T const &))
{
    for (int i = 0;i < len; i++)
    {
        f(list[i]);
    }
}



#endif