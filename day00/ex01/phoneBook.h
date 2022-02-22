#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include "contact.h"

class phoneBook{

public:

    contact contact[8];
    void add(int nb);
    void  search(int tmp);
    void  exitt(void);
};

#endif