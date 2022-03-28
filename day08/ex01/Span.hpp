#ifndef SPAN_HPP
# define SPAN_HPP
#include <iostream>
#include <vector>

class Span
{
    private:
        unsigned int _n;
        std::vector<int> _vec;
    public:
        Span();
        Span(Span const & src);
        Span(unsigned int n);
        ~Span();
        Span    &operator=(Span const & src);
        void    addNumber(int);
        int                         shortestSpan();
        int                         longestSpan();
};

#endif