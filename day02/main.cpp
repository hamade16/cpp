#include "Fixed.hpp"

int main()
{
    /*sample instance;

    instance.bar('a');
    instance.bar(55);
    instance.bar(instance);
    distance d1(4, 5);
    distance  d2(5, 4);
    distance d3 = d1 + d2;
    d3.display();*/
   // sample instance1;
    //sample instance2(42);
   //sample  instance3(instance1);

    //std::cout << instance1 << std::endl;
    //std::cout << instance2 << std::endl;
  // std::cout << instance3 << std::endl;

    //instance1   = instance2;
    //std::cout << instance1 << std::endl;
    Fixed a;
    Fixed b( a );
    Fixed c;
    c = b;
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;
    return 0;
}