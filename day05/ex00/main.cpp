#include "Bureaucrat.hpp"

int	main () {

	//Bureaucrat a;
	//Bureaucrat b ( 100 );
	
		try
		{
			Bureaucrat c("bureau", 1);
			c.incrementGrade();
			//c.incrementGrade();
		}
		catch (const std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	/*{
		try
		{
			Bureaucrat c ( "hhhh", 1);
			c.incrementGrade();
			c.incrementGrade();
		}
		catch (const std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}*/

	return 0;
}