#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class Bureaucrat ;

class RobotomyRequestForm : public Form
{
	public :

		RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &r);
		RobotomyRequestForm(std::string target);
		virtual ~RobotomyRequestForm() {};

		RobotomyRequestForm &operator=(const RobotomyRequestForm &r);

		virtual void execute (Bureaucrat const & executor) const;

};

#endif