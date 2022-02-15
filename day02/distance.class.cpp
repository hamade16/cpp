#include "distance.class.h"

distance::distance(int i, int f):feet(f),inches(i)
{}

void distance::display()
{
    std::cout << "FEETS = " << feet << std::endl;
    std::cout << "INCHES: " << inches << std::endl;
}
distance distance::operator +(distance d2)
{
    int f = feet + d2.feet;
    int i = inches + d2.inches;
    return distance(f, i);
}
