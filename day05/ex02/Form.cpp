#include "Form.hpp"

Form::Form() : name("ha"), g_signe(66), g_execute(43)
{
    f_signe = false;
}

Form::Form(const std::string name, bool bl, const int g_sig, const int g_exec) : name(name), g_signe(g_sig), g_execute(g_exec)
{
    f_signe = bl;
}

Form::Form(Form const & s) : name(s.name), g_signe(s.g_signe), g_execute(s.g_execute)
{
    f_signe = s.f_signe;
}

Form&    Form::operator=(Form const & s)
{
    this->f_signe = s.f_signe;
    return (*this);
}

Form::~Form()
{
   
}

std::string Form::getName(void) const
{
    return this->name;
}

bool        Form::getF_signe(void) const
{
    return this->f_signe;
}

int         Form::getG_signe(void) const
{
    return this->g_signe;
}

int         Form::getG_execute(void) const
{
    return this->g_execute;
}

void    Form::beSigned(Bureaucrat b)
{
    if (b.getGrade() > this->g_signe)
        throw Form::GradeTooLowException();
    else
        b.signForm(*this);
    f_signe = true;        
}
