#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("shrubbery creation", 0, 145, 137), _target(target)
{

    
}

ShrubberyCreationForm::ShrubberyCreationForm()
{

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm  const & src) : Form(src)
{

}

ShrubberyCreationForm   ShrubberyCreationForm::operator=(ShrubberyCreationForm const & src)
{
    Form::operator=(src);
    this->_target = src._target;
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

void    ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if ( this->getF_signe() == false )
        throw FormIsNotSigned();

    if (executor.getGrade() > this->getG_execute())
        throw GradeTooLowException();

    std::ofstream file;

    file.open(this->getName() + "_shrubbery");
    file <<
        "____________36936936936936936\n"
        "____________36936936936936936\n"
        "____________369369369369369369\n"
        "___________36936936936936933693\n"
        "__________3693693693693693693693\n"
        "_________369369369369369369369369\n"
        "_________3693693693693693693693699\n"
        "________3693693693693693693693699369\n"
        "_______36936939693693693693693693693693\n"
        "_____3693693693693693693693693693693636936\n"
        "___36936936936936936936936936936___369369369\n"
        "__36936___369336936369369369369________36936\n"
        "_36936___36936_369369336936936__¶¶__¶¶\n"
        "36933___36936__36936___3693636_¶¶¶¶¶¶¶¶\n"
        "693____36936__36936_____369363_¶¶¶¶¶¶¶¶\n"
        "______36936__36936______369369__¶¶¶¶¶¶\n"
        "_____36936___36936_______36936___¶¶¶¶\n"
        "_____36936___36936________36936___¶¶\n"
        "_____36936___36936_________36936___11\n"
        "______369____36936__________369___11\n"
        "______________369________________11\n";
    file.close();
    std::cout << "The form " << this->_target << " was executed!" << std::endl;
}