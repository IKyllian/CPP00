#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat ;

class Form
{
	public :

		class GradeTooHighException : public std::exception
		{
			public :

			GradeTooHighException () {};
			GradeTooHighException (const exception&);

			GradeTooHighException& operator= (const exception&);

			virtual ~GradeTooHighException() throw() {};
			virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public :

			GradeTooLowException () {};
			GradeTooLowException (const exception&);
			
			GradeTooLowException& operator= (const exception&);

			virtual ~GradeTooLowException() throw(){};
			virtual const char* what() const throw();
		};

		Form();
		Form(const Form &form);
		Form(std::string name, int sign_grade, int exec_grade);
		~Form() {};

		Form &operator=(const Form &f);

		std::string getName(void) const;
		bool		getSigned(void) const;
		int 		getSignGrade(void) const;
		int			getExecGrade(void) const;

		void beSigned(Bureaucrat &bureaucrat);


	private :

		const std::string _name;
		bool 		_signed;
		const int _sign_grade;
		const int _exec_grade;
};

std::ostream &operator<<(std::ostream &os, const Form &form);

#endif