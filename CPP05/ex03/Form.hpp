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

		class FormNotSigned : public std::exception
		{
			public :

			FormNotSigned () {};
			FormNotSigned (const exception&);
			
			FormNotSigned& operator= (const exception&);

			virtual ~FormNotSigned() throw(){};
			virtual const char* what() const throw();
		};

		Form();
		Form(const Form &form);
		Form(std::string name, std::string target, int sign_grade, int exec_grade);
		~Form() {};

		Form &operator=(const Form &f);

		std::string getName(void) const;
		std::string getTarget(void) const;
		bool		getSigned(void) const;
		int 		getSignGrade(void) const;
		int			getExecGrade(void) const;

		void beSigned(Bureaucrat &bureaucrat);

		virtual void execute (Bureaucrat const & executor) const = 0;

	private :

		const std::string _name;
		bool 		_signed;
		const int _sign_grade;
		const int _exec_grade;
		std::string _target;
};

std::ostream &operator<<(std::ostream &os, const Form &form);

#endif