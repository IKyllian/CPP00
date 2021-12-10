#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("Robotomy Request", "undefined", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &r)
{
	*this = r;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robotomy Request", target, 72, 45) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &r)
{
	(void)r;
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	int random = rand() % 3;

	if (this->getSigned() == false)
		throw Form::FormNotSigned();
	else if (executor.getGrade() > this->getExecGrade())
		throw Form::GradeTooHighException();
	else
	{
		if (random % 2 == 0)
			std::cout << "BRRRRRRR " << getTarget() << " was successfully robotomized" << std::endl;
		else
			std::cout << "BRRRRRRR " << getTarget() << " failed the robotomize" << std::endl;
	}
}