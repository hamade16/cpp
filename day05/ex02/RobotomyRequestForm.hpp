#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
#include "Form.hpp"
#include <fstream>
#include <iostream>

class RobotomyRequestForm : public Form
{
    private:
        std::string _target;
    public:
        RobotomyRequestForm();
        ~RobotomyRequestForm();
       
        RobotomyRequestForm(std::string target);
        void    execute(Bureaucrat const & executor) const;
        RobotomyRequestForm(RobotomyRequestForm const & src);
        RobotomyRequestForm   operator=(RobotomyRequestForm const & src);

    
};

#endif