#include <iostream>

void    set(int &x)
{
    x = 11;
}

int main()
{
    int i = 10;
    int &x = i;
    set(x);
    std::cout << i << std::endl;
    return (0);
}