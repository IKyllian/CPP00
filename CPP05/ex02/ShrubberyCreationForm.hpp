#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class Bureaucrat ;

class ShrubberyCreationForm : public Form
{
	public :

		ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &s);
		ShrubberyCreationForm(std::string target);
		virtual ~ShrubberyCreationForm() {};

		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &s);

		virtual void execute (Bureaucrat const & executor) const;

};

#endif