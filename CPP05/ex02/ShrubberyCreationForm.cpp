#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <cerrno>

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Shruberry Creation", "undefined", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &s)
{
	*this = s;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shruberry Creation", target, 145, 137) {}

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
		std::ofstream new_file;
		new_file.open(file_name, std::ios::out);
		if (new_file)
		{
			for (int i = 0; i <= 1; i++)
			{
				new_file << "          1          " << std::endl;
				new_file << "         / \\         " << std::endl;
				new_file << "        /   \\        " << std::endl;
				new_file << "       /     \\       " << std::endl;
				new_file << "      2       3      " << std::endl;
				new_file << "     / \\     / \\     " << std::endl;
				new_file << "    4   5   6   7    " << std::endl;
				new_file << "   /   / \\     / \\   " << std::endl;
				new_file << "  8   9   1   2   3  " << std::endl;
				new_file << "          \\ /       " << std::endl;
				new_file << "           4       " << std::endl << std::endl;
			}
			new_file.close();
		}
		else
			std::cerr << "Error : " << strerror(errno) << std::endl;
		
	}	
}