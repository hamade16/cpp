#ifndef SHRUBBERYREATIONFORM_HPP
# define SHRUBBERYREATIONFORM_HPP
#include "Form.hpp"
#include <fstream>
#include <iostream>

class ShrubberyCreationForm : public Form
{
    private:
        std::string _target;

    public:
        ShrubberyCreationForm();
        ~ShrubberyCreationForm();
        ShrubberyCreationForm(ShrubberyCreationForm const & src);
        ShrubberyCreationForm(std::string target);
        void    execute(Bureaucrat const & executor) const;
        ShrubberyCreationForm   operator=(ShrubberyCreationForm const & src);

    
};

#endif