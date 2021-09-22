#include "Intern.hpp"

Intern &Intern::operator=(const Intern &b)
{
	(void)b;
	return (*this);
}

std::string FormNames[3] = {
	"robotomy request",
	"shrubbery request",
	"presidential request"
};

Form *presidential_f(std::string target)
{
	std::cout << "Intern creates Presidential form with target " << target << std::endl;
	return (new PresidentialPardonForm(target));
}

Form *robotomy_f(std::string target)
{
	std::cout << "Intern creates Robotomy form with target " << target << std::endl;
	return (new RobotomyRequestForm(target));
}

Form *shrubbery_f(std::string target)
{
	std::cout << "Intern creates Shrubbery form with target " << target << std::endl;
	return (new ShrubberyCreationForm(target));
}

Form * (*functptr[])(std::string target) = { robotomy_f, shrubbery_f, presidential_f };

Form *Intern::makeForm(std::string NameForm, std::string TargetForm)
{
	for (int i = 0; i < 3; i++)
	{
		if (FormNames[i] == NameForm)
			return ((*functptr[i])(TargetForm));
	}
	std::cout << "The form does not exist." << std::endl;
	return (NULL);
}