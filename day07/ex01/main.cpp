#include "iter.hpp"


template <typename T>
void    print(T const & n)
{
    std::cout << n << std::endl;
}

int main()
{
    int arr[5] = {1,2,3,4,5};

    iter(arr, 5, print);

    std::cout << "***********************************" <<std::endl;

    float arr1[5] = {1.5,2.5,3,4.5,5.5};

    iter(arr1, 5, print);

    std::cout << "***********************************" <<std::endl;
}