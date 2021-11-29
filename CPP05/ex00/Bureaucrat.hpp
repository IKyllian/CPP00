#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
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

		Bureaucrat();
		Bureaucrat(const Bureaucrat &src);
		Bureaucrat(std::string name, int grade);

		~Bureaucrat() {};

		Bureaucrat &operator=(const Bureaucrat &b);

		void grade_increment();
		void grade_decrement();

		const std::string getName(void) const;
		int getGrade(void) const;

	private :

		std::string _name;
		int	_grade;
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);

#endif