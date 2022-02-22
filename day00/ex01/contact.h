#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>
#include <iomanip>
#include <stdio.h>

class contact {

public:

    std::string getfhirst(void);
    std::string getlast(void);
    std::string getnick(void);
    std::string getphone(void);
    std::string getdark(void);
    void setfhirst(std::string first);
    void setlast(std::string last);
    void setnick(std::string nick);
    void setphone(std::string phone);
    void setdark(std::string dark);

private:
    std::string first_name;
    std::string last_name;
    std::string nickneame;
    std::string phone_number;
    std::string darkest_secret;    
};

#endif