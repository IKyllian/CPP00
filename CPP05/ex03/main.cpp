#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
	Intern  someRandomIntern;
	Form*   rrf;
	Bureaucrat b1("B1", 1);

	rrf = someRandomIntern.makeForm("shrubbery request", "Bender");

	b1.signForm(*rrf);
	b1.executeForm(*rrf);
	return (0);
}