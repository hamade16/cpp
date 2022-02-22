#include "contact.h"

void contact::setfhirst(std::string first)
{
    this->first_name = first;
}

void contact::setlast(std::string last)
{
    this->last_name = last;
}

void contact::setnick(std::string nick)
{
    this->nickneame = nick;
}

  void contact::setphone(std::string phone)
  {
      this->phone_number = phone;
  }

  void contact::setdark(std::string dark)
  {
      this->darkest_secret = dark;
  }

  std::string contact::getfhirst(void)
  {
      return this->first_name;
  }
  
  std::string contact::getlast(void)
  {
      return this->last_name;
  }

  std::string contact::getnick(void)
  {
      return this->nickneame;
  }

  std::string contact::getphone(void)
  {
      return this->phone_number;
  }

  std::string contact::getdark(void)
  {
      return this->darkest_secret;
  }