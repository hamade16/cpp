#pragma once

#include <iostream>
#include <vector>

class Notoccurence: public std::exception
{
	virtual const char* what() const throw()
	{
		return "element n'exist pas";
	}
};

template <typename T>
int	easyfind(T container, int i)
{
	typename T::iterator itB;
	typename T::iterator itE;
	int			index = 0;

	itB = container.begin();
	itE = container.end();

	for (itB = container.begin(); itB != container.end(); itB++)
	{
		if (*itB == i)
			return index;
		index++;
	}
	throw ::Notoccurence();
	return -1;
}	