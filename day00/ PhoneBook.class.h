#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include <iostream>
#include "contact.class.h"

class phoneBook{

public:

    contact contacts[8];
    void add(int nb);
    void  search(int nb, int tmp);
    void  exitt(void);
};

#endif