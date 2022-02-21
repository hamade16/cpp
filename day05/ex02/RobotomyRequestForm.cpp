#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("robotomy request", 1, 72, 45), _target(target)
{

    
}

RobotomyRequestForm::RobotomyRequestForm()
{
    
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm  const & src) : Form(src)
{

}

RobotomyRequestForm   RobotomyRequestForm::operator=(RobotomyRequestForm const & src)
{
    Form::operator=(src);
    this->_target = src._target;
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

void    RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if ( this->getF_signe() == false )
        throw FormIsNotSigned();

    if (executor.getGrade() > this->getG_execute())
        throw GradeTooLowException();

    if (rand() % 100 >= 50)
        std::cout << this->_target << " robotomise avec succes" << std::endl;
    else
        std::cout << "l'operation a echoue" << std::endl;
    std::cout << "The form " << this->_target << " was executed!" << std::endl;
}