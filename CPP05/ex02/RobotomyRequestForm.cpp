#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("Robotomy", "undefined", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &r)
{
	*this = r;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robotomy", target, 72, 45) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &r)
{
	(void)r;
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (this->getSigned() == false)
		throw Form::FormNotSigned();
	else if (executor.getGrade() > this->getExecGrade())
		throw Form::GradeTooHighException();
	else
		std::cout << "BRRRRRRR " << getTarget() << " was successfully robotomized in 50% of the cases, or failed the rest of the time." << std::endl;
}