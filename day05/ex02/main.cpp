#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	try
	{
		Bureaucrat c("bureau", 66);
		ShrubberyCreationForm abc("Maro");
		abc.beSigned( c );
		abc.execute(c);
        //f.beSigned(c);
		// c.signForm(f);
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
    return (0);
}