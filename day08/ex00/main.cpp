#include "easyfind.hpp"

int main ( void )
{
	std::vector<int> a;	
	

	a.push_back(10);
	a.push_back(15);
	a.push_back(20);
	a.push_back(25);

	try
	{
		std::cout << easyfind(a, 17) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	return (0);
}