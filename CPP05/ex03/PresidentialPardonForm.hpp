#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class Bureaucrat ;

class PresidentialPardonForm : public Form
{
	public :

		PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &p);
		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm() {};

		PresidentialPardonForm &operator=(const PresidentialPardonForm &p);

		virtual void execute (Bureaucrat const & executor) const;

};

#endif