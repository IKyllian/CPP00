#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
	int nb = rand() % 3;
	if (nb == 0)
	{
		std::cout << "created A" << std::endl;
		return (new A);
	}
	else if (nb == 1)
	{
		std::cout << "created B" << std::endl;
		return (new B);
	}
	else
	{
		std::cout << "created C" << std::endl;
		return (new C);
	}
}

void identify_from_pointer(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify_from_reference(Base &p)
{
	Base base;

	try {
		base = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch (std::bad_cast what) {}
	try {
		base = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch (std::bad_cast what) {}
	try {
		base = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch (std::bad_cast what) {}
}

int main()
{
	Base* test;
	Base* test2;

	Base *test3;
	Base *test4;

	test = generate();
	test2 = generate();
	test3 = generate();
	test4 = generate();

	identify_from_pointer(test);
	identify_from_pointer(test2);
	identify_from_reference(*test3);
	identify_from_reference(*test4);

	delete test;
	delete test2;
	delete test3;
	delete test4;
	return (0);
}