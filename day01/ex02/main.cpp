#include <iostream>

int main()
{
    std::string A = "HI THIS IS BRAIN";
    std::string* stringPTR = &A;
    std::string& stringREF = A;

    std::cout << &A << " " << stringPTR;
    std::cout << " " << &stringREF << std::endl;
    std::cout << std::endl;
    std::cout << A << " " << *stringPTR << " " << stringREF << std::endl;
}