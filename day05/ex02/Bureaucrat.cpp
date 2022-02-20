#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat ( void ) : _name("hhh"){

	this->_grade = 150;

	std::cout << "Bureaucrat " << this->_name << " was hired with grade 150!" << std::endl;
}

Bureaucrat::Bureaucrat ( std::string name, int grade ) : _name ( name ) {


	if ( grade > 150 )
		throw GradeTooLowException();
	else if ( grade < 0 )
		throw GradeTooHighException();
	else
		this->_grade = grade;
	std::cout << "Bureaucrat " << this->_name << " was hired with grade " << this->_grade << "!" << std::endl;

}
Bureaucrat::Bureaucrat ( const Bureaucrat& b ) : _name (b._name){

	this->_grade = b._grade;
}

Bureaucrat& Bureaucrat::operator= ( const Bureaucrat& b ) {

	this->_grade = b._grade;

	return *this;
}

Bureaucrat::~Bureaucrat ( void ) {


}

std::string Bureaucrat::getName ( void ) const {

	return this->_name;
}

int Bureaucrat::getGrade ( void ) const {

	return this->_grade;
}

void					Bureaucrat::incrementGrade ( void )
{
	if (this->_grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
}

void					Bureaucrat::decrementGrade ( void )
{
	if (this->_grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
}

void    Bureaucrat::signForm(Form const &src)
{
    if (this->_grade < src.getG_signe())
        std::cout << src.getName() << " signed " << _name << std::endl;
    else
        std::cout << src.getName() << " couldn't sign " << _name << " dosen't have permission" << std::endl;
}


std::ostream& operator<< ( std::ostream& os, const Bureaucrat& b) {

	os << b.getName() << ", bureaucrat grade " << b.getGrade();
	return os;
}