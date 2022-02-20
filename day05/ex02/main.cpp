#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat c("bureau", 66);
		Form f("hama", false, 5, 8);
        //f.beSigned(c);
		c.signForm(f);
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
    return (0);
}