#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("Presidential", "undefined", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &p)
{
	*this = p;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Presidential", target, 25, 5) {}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &p)
{
	(void)p;
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->getSigned() == false)
	{
		throw PresidentialPardonForm::FormNotSigned();
	}
	else if (executor.getGrade() > this->getExecGrade())
		throw Form::GradeTooHighException();
	else
		std::cout << getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}