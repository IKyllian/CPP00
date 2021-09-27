#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	public :

		Intern() {};
		Intern(const Intern &src);

		~Intern() {};

		Intern &operator=(const Intern &b);

		Form *makeForm(std::string NameForm, std::string TargetForm);

};

#endif