#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
	int nb = rand() % 4;
	if (nb == 1)
	{
		std::cout << "Create Class A" << std::endl;
		return (new A);
	}
	else if (nb == 2)
	{
		std::cout << "Create Class B" << std::endl;
		return (new B);
	}
	else
	{
		std::cout << "Create Class C" << std::endl;
		return (new C);
	}
}

void identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify(Base &p)
{
	Base base;

	try {
		base = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch (const std::bad_cast &e)
	{
		try {
			base = dynamic_cast<B&>(p);
			std::cout << "B" << std::endl;
		}
		catch (const std::bad_cast &e)
		{
			try {
				base = dynamic_cast<C&>(p);
				std::cout << "C" << std::endl;
			}
			catch (const std::bad_cast &e) {
				std::cerr << e.what() << '\n';
			}
		}
	}
}

int main()
{
	Base*  base;

	for (int i = 0; i < 10; i++)
	{
		base = generate();
		identify(base);
		identify(*base);
		delete base;
	}
	return (0);
}