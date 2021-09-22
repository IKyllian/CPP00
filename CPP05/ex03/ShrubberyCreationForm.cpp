#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Shruberry", "undefined", 145, 137)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &s)
{
	*this = s;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shruberry", target, 145, 137)
{

}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &s)
{
	(void)s;
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::string file_name;

	if (this->getSigned() == false)
		throw Form::FormNotSigned();
	else if (executor.getGrade() > this->getExecGrade())
		throw Form::GradeTooHighException();
	else
	{
		file_name = getTarget() + "_shrubbery";
		std::ofstream new_file(file_name);
		if (new_file.fail())
			std::cerr << "Error while create the file" << std::endl;
		new_file << "          1          " << std::endl;
		new_file << "         / \\         " << std::endl;
		new_file << "        /   \\        " << std::endl;
		new_file << "       /     \\       " << std::endl;
		new_file << "      2       3      " << std::endl;
		new_file << "     / \\     / \\     " << std::endl;
		new_file << "    4   5   6   7    " << std::endl;
		new_file << "   /   / \\     / \\   " << std::endl;
		new_file << "  8   9   1   2   3  " << std::endl;
		new_file << "     /               " << std::endl;
		new_file << "    4                " << std::endl;
		new_file.close();
	}	
}