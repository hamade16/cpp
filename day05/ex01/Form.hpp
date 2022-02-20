#ifndef  FORM_HPP
# define FORM_HPP

#include <iostream>

class Bureaucrat;

class   Form
{
    private:
        const std::string name;
        bool f_signe;
        const int   g_signe;
        const int   g_execute;
    public:
        Form();
        Form(bool f_signe);
        Form(const std::string name, bool bl, const int g_sig, const int g_exec);
        Form(Form const & s);
        Form&    operator=(Form const & s);
        ~Form();

        std::string getName(void);
        bool        getF_signe(void);
        int         getG_signe(void);
        int         getG_execute(void);
        void    beSigned(Bureaucrat b);

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

};

#endif
