#include <iostream>
#include <iomanip>

template<typename T>

class Array {

    public:
        Array()
        {
            T a[100];
        }
        Array(unsigned int n)
        {
            T a[n];
        }
        Array(Array const src)
        {
            *this = src;
        }
        Array operator=(Array const src)
        {
            return (*this);
        }

};