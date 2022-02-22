#include "phoneBook.h"

int main(void)
{
  phoneBook instance;
  int nb = 0;
  int tmp = nb;

  std::string var;
  std::cout << " - ADD\n - SEARCH\n - EXIT\n\nChoose an option : ";
  while (1)
  {
    std::getline(std::cin, var);
    if (!var.compare("ADD"))
    {
      if (nb == 8)
        nb = 0;
      instance.add(nb);
      nb++;
      if (tmp < 8)
        tmp++;

    }
    else if (!var.compare("SEARCH"))
    {
      instance.search(tmp);
    }
    else if (!var.compare("EXIT"))
    {
      instance.exitt();
    }
    else
    {
      std::cout << "\033[1;31mINVALID INPUT\nChoose a correct one ....\033[0m\n\n";
			std::cout << " - ADD\n - SEARCH\n - EXIT\n\nChoose an option : ";
      continue;
    }
    std::cout << " - ADD\n - SEARCH\n - EXIT\n\nChoose an option : ";
  }
    return 0;
}