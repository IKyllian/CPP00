#include "Form.hpp"

Form::Form()
{
	_name = "undefined";
	_name = "undefined";
	_sign_grade = 1;
	_exec_grade = 1;
	_signed = false;
}

Form::Form(const Form &form)
{
	*this = form;
}

Form::Form(std::string name, std::string target, int sign_grade, int exec_grade)
{
	if (sign_grade < 1)
		throw Form::GradeTooLowException();
	else if (sign_grade > 150)
		throw Form::GradeTooHighException();
	else if (exec_grade < 1)
		throw Form::GradeTooLowException();
	else if (exec_grade > 150)
		throw Form::GradeTooHighException();
	else
	{
		_name = name;
		_sign_grade = sign_grade;
		_exec_grade = exec_grade;
		_target = target;
		_signed = false;
	}
}

Form &Form::operator=(const Form &f)
{
	if (this == &f)
		return (*this);
	_name = f._name;
	_signed = f._signed;
	_sign_grade = f._sign_grade;
	_exec_grade = f._exec_grade;
	return (*this);
}

std::string Form::getName(void) const
{
	return (_name);
}

std::string Form::getTarget(void) const
{
	return (_target);
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

				/* FormNotSigned EXEPTION  */

Form::FormNotSigned::FormNotSigned (const exception& e)
{
	*this = e;
}

Form::FormNotSigned& Form::FormNotSigned::operator= (const exception &e)
{
	(void)e;
	return (*this);
}

const char* Form::FormNotSigned::what() const throw()
{
	return ("Form is not signed");
}