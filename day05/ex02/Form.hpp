#ifndef  FORM_HPP
# define FORM_HPP

#include <iostream>

#include "Bureaucrat.hpp"

class   Form
{
    private:
        const std::string name;
        bool f_signe;
        const int   g_signe;
        const int   g_execute;
    public:
        Form();
        Form(const std::string name, bool bl, const int g_sig, const int g_exec);
        Form(Form const & s);
        Form&    operator=(Form const & s);
        ~Form();

        std::string getName(void) const;
        bool        getF_signe(void) const;
        int         getG_signe(void) const;
        int         getG_execute(void) const;
        void    beSigned(Bureaucrat b);
        virtual void    execute(Bureaucrat const & executor) const = 0;

        class GradeTooHighException : public std::exception
        {
            public:
			    virtual const char* what() const throw()
			    {
			        return ("the given grade is to high");
			    }
        };
        class GradeTooLowException : public std::exception 
        {
		    public:
			    virtual const char* what() const throw()
			    {
				    return ("The given grade is too low");
			    }
	    };

        class FormIsNotSigned : public std::exception
        {
            public:
                virtual const char* what() const throw()
			    {
				    return ("The form is not signed!");
			    }
        };

};

#endif
