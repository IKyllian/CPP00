#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	Bureaucrat				b1("B1", 1);
	Bureaucrat				b2("B2", 15);
	Bureaucrat				b3("B3", 20);
	Bureaucrat				b4("B4", 100);
	PresidentialPardonForm	ppf("Target1");
	RobotomyRequestForm		rrf("Target2");
	ShrubberyCreationForm	scf("Target3");
	try
	{
		b1.executeForm(ppf);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl << "-----------------------------------" << std::endl << std::endl;

	try
	{
		b4.executeForm(rrf);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl << "-----------------------------------" << std::endl << std::endl;

	try
	{
		b1.signForm(ppf);
		b1.executeForm(ppf);
		b2.signForm(rrf);
		b2.executeForm(rrf);
		b2.executeForm(rrf);
		b2.executeForm(rrf);
		b2.executeForm(rrf);
		b3.signForm(scf);
		b3.executeForm(scf);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl << "-----------------------------------" << std::endl << std::endl;

	try
	{
		b3.executeForm(ppf);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}