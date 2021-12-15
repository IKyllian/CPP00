#include "mutantstack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "Top = " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Size = " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);

	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << '[' << *it << ']' << std::endl;
		++it;
	}

	MutantStack<int> mstack2(mstack);
	mstack.push(42);
	mstack.push(150);
	mstack.push(942);

	MutantStack<int>::iterator it2 = mstack.begin();
	MutantStack<int>::iterator ite2 = mstack.end();
	std::cout << std::endl << "COPY" << std::endl;
	while (it2 != ite2)
	{
		std::cout << '[' << *it2 << ']' << std::endl;
		++it2;
	}
	return 0;
}