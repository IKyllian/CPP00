#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("undefined"), _grade(150) {}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : _name(src._name), _grade(src._grade) {}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooLowException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &b)
{
	if (this == &b)
		return (*this);
	_grade = b._grade;
	return (*this);
}

void Bureaucrat::grade_increment()
{
	if (this->_grade > 1)
		this->_grade--;
	else
		throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::grade_decrement()
{
	if (this->_grade < 150)
		this->_grade++;
	else
		throw Bureaucrat::GradeTooHighException();
}

const std::string Bureaucrat::getName(void) const
{
	return (this->_name);
}

int Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat)
{
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << "." << std::endl;
	return (os);
}

void Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);	
		std::cout << _name << " signs " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << _name <<  " cannot sign because " << e.what() << std::endl;
	}
}


				/* GradeTooHighException EXEPTION  */

Bureaucrat::GradeTooHighException::GradeTooHighException (const exception& e)
{
	*this = e;
}

Bureaucrat::GradeTooHighException& Bureaucrat::GradeTooHighException::operator= (const exception &e)
{
	(void)e;
	return (*this);
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

				/* GradeTooLowException EXEPTION  */

Bureaucrat::GradeTooLowException::GradeTooLowException (const exception& e)
{
	*this = e;
}

Bureaucrat::GradeTooLowException& Bureaucrat::GradeTooLowException::operator= (const exception &e)
{
	(void)e;
	return (*this);
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}