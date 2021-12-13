#include "iter.hpp"

int main(void)
{
	int tab[3] = {1, 2, 3};
	float tab2[3] = {10.32, 100.42, 432.67};
	std::string tab3[4] = {"Ceci", "est", "un", "test"};

	ft_iter(tab, 3, &ft_print);
	ft_iter(tab2, 3, &ft_print);
	ft_iter(tab3, 4, &ft_print);
	return (0);
}