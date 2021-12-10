#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat test("Bob", 101);
		Form form("form1", 100, 50);

		test.signForm(form);
		std::cout << form;
		std::cout << test;
		test.grade_increment();
		test.grade_increment();
		std::cout << test;
		test.grade_decrement();
		std::cout << test;
		test.signForm(form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl << "-----------------------------------" << std::endl << std::endl;

	try
	{
		Form form("form2", 151, 20);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl << "-----------------------------------" << std::endl << std::endl;

	try
	{
		Form form("form4", -1, 30);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl << "-----------------------------------" << std::endl << std::endl;

	try
	{
		Bureaucrat test("Mat", 1);
		Form form("form5", 1, 30);

		test.signForm(form);
		std::cout << form;
		std::cout << test;
		test.grade_increment();
		std::cout << test;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}