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
	Form*   formError;
	Bureaucrat b1("B1", 1);

	rrf = someRandomIntern.makeForm("shrubbery request", "Bender");
	
	b1.signForm(*rrf);
	b1.executeForm(*rrf);
	formError = someRandomIntern.makeForm("Hello World", "Bender");

	delete rrf;
	delete formError;
	
	return (0);
}