#include "Span.hpp"

Span::Span() : _n(0)
{
}

Span::Span(Span const & src)
{
    *this = src;
}

Span::Span(unsigned int n) : _n(n)
{
}

Span::~Span()
{

}

Span    &Span::operator=(Span const & src)
{
    _n = src._n;
    _vec = src._vec;
    return *this;
}

void    Span::addNumber(int number)
{
    if (_vec.size() >= this->_n)
        throw std::exception();
    _vec.push_back(number);
}


int                         Span::longestSpan()
{
    if (_vec.size() <= 1)
        throw std::exception();
    return ((*std::max_element(_vec.begin(), _vec.end())) - (*std::min_element(_vec.begin(), _vec.end())));
}

int                             Span::shortestSpan()
{
    if (_vec.size() <= 1)
        throw std::exception();
    int min = INT_MAX;
    std::vector<int> cp(_vec);
    std::sort(cp.begin(), cp.end());
    std::vector<int>::iterator prev = cp.begin();
    for (std::vector<int>::iterator it = cp.begin() + 1, last = cp.end(); it != last; it++)
    {
        if (std::abs(*it - *prev) < min)
            min = std::abs(*it - *prev);
        prev = it;
    }
    return min;
}