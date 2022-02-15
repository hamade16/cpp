#ifndef DISTANCE_CLASS_H
# define DISTANCE_CLASS_H

#include <iostream>

class distance {
    public:
        distance(int f, int i);

        void    display(void);
        distance operator +(distance d2);
        distance operator -(distance d2);
    private:
        int feet;
        int inches;

};

#endif