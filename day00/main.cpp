#include " PhoneBook.class.h"

int main(void)
{//
 // sample instance;
//
 // instance.foo = 42;
 // std::cout << "instance.foo: " << instance.foo << std::endl;
//
 // instance.bar();
//
  phoneBook instance;
  int nb = 0;
  int tmp = nb;

  std::string var;

  while (1)
  {
    std::cout << "entrez commande: ";
    std::cin >> var;
    if (!var.compare("ADD"))
    {
      if (nb == 8)
        nb = 0;
      instance.add(nb);
      nb++;
      if (tmp < 8)
        tmp++;
     /* std::cout << "first name:";
      std::cin >> first_name;
      instance.setfhirst(first_name);*/
    }
    if (!var.compare("SEARCH"))
    {
      instance.search(nb, tmp);
    }
    if (!var.compare("EXIT"))
    {
      instance.exitt();
    }
   // std::cout << instance.contacts[nb - 1].getfhirst() << std::endl;
  }
    return 0;
}