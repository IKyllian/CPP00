#include "Form.hpp"

Form::Form() : _name("undefined"), _signed(false), _sign_grade(1), _exec_grade(1) {}

Form::Form(const Form &form): _name(form._name), _signed(form._signed), _sign_grade(form._sign_grade), _exec_grade(form._exec_grade) {}

Form::Form(std::string name, int sign_grade, int exec_grade) : _name(name), _signed(false), _sign_grade(sign_grade), _exec_grade(exec_grade)
{
	if (sign_grade < 1)
		throw Form::GradeTooLowException();
	else if (sign_grade > 150)
		throw Form::GradeTooHighException();
	else if (exec_grade < 1)
		throw Form::GradeTooLowException();
	else if (exec_grade > 150)
		throw Form::GradeTooHighException();
}

Form &Form::operator=(const Form &f)
{
	if (this == &f)
		return (*this);
	_signed = f._signed;
	return (*this);
}

const std::string &Form::getName(void) const
{
	return (_name);
}

bool Form::getSigned(void) const
{
	return (_signed);
}

int Form::getSignGrade(void) const
{
	return (_sign_grade);
}

int Form::getExecGrade(void) const
{
	return (_exec_grade);
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
	if (_sign_grade >= bureaucrat.getGrade())
			_signed = true;
	else
		throw Form::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &os, const Form &form)
{
	os << form.getName() << ", grade to sign is " << form.getSignGrade() << ", grade to execute is " << form.getExecGrade() << ".";
	std::cout << "The form is ";
	if (form.getSigned() == true)
		std::cout << "signed." << std::endl;
	else
		std::cout << "not signed." << std::endl;
	return (os);
}

				/* GradeTooHighException EXEPTION  */

Form::GradeTooHighException::GradeTooHighException (const exception& e)
{
	*this = e;
}

Form::GradeTooHighException& Form::GradeTooHighException::operator= (const exception &e)
{
	(void)e;
	return (*this);
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Form Grade is too high");
}

				/* GradeTooLowException EXEPTION  */

Form::GradeTooLowException::GradeTooLowException (const exception& e)
{
	*this = e;
}

Form::GradeTooLowException& Form::GradeTooLowException::operator= (const exception &e)
{
	(void)e;
	return (*this);
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Form Grade is too low");
}