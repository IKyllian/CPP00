#include "phonebook.hpp"

int	ft_strlen(std::string str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_atoi(std::string str)
{
	int		i;
	long	nbr;

	i = 0;
	nbr = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i])
	{
		if (str[i] < 48 || str[i] > 57)
			return (-1);
		nbr = nbr * 10 + (str[i++] - 48);
	}	
	return (nbr);
}

void Contact::add_contact()
{
	std::cout << "First Name : ";
	std::cin >> first_name;
	std::cout << "Last Name : ";
	std::cin >> last_name;
	std::cout << "Nickname : ";
	std::cin >> nickname;
	std::cout << "Phone Number : ";
	std::cin >> phone_number;
	std::cout << "Darkest Secret : ";
	std::cin >> darkest_secret;
	std::cout << std::endl;
	is_create = 1;
}

void	print_collumn(void)
{
	std::cout << "Index";
	std::cout << std::setw(5);
	std::cout << "|";
	std::cout << "First Name";
	std::cout << "|";
	std::cout << "Last Name";
	std::cout << std::setw(1);
	std::cout << "|";
	std::cout << "Nickname";
	std::cout << std::endl;
}

std::string trunc_string(std::string to_trunc)
{
	std::string str;

	if (to_trunc.size() > 10)
	{
		str = to_trunc;
		str.resize(10);
		str.at(9) = '.';
		return (str);
	}
	return (to_trunc);
}

void Contact::print_info_user(int i)
{
	if (is_create)
	{
		std::cout << i;
		std::cout << std::setw(9);
		std::cout << "|";
		std::cout << trunc_string(first_name);
		std::cout << std::setw(10 - ft_strlen(first_name) + 1);
		std::cout << "|";
		std::cout << trunc_string(last_name);
		std::cout << std::setw(10 - ft_strlen(last_name) + 1);
		std::cout << "|";
		std::cout << trunc_string(nickname);
		std::cout << std::endl;
	}
}

void print_contacts(Contact phoneBook[])
{
	int i;

	i = 0;
	print_collumn();
	while (i < 8)
	{
		phoneBook[i].print_info_user(i);
		i++;
	}
	std::cout << std::endl;
}

Contact::Contact() : is_create(0)
{

}

Contact::~Contact()
{

}

int	Contact::print_user()
{
	if (!is_create)
	{
		std::cout << "Le contact n'existe pas" << std::endl;
		return (1);
	}
	else
	{
		std::cout << "First Name : " + first_name << std::endl;
		std::cout << "Last Name : " + last_name << std::endl;
		std::cout << "Nickname : " + nickname << std::endl;
		std::cout << "Phone Number : " + phone_number << std::endl;
		std::cout << "Darkest Secret : " + darkest_secret << std::endl;
		std::cout << std::endl;
		return (0);
	}
}

int	main(void)
{
	Contact phoneBook[8];
	std::string response;
	int	index;
	int nb;

	index = 0;
	nb = 10;
	while (response != "EXIT")
	{
		std::cin >> response;
		if (response == "ADD")
		{
			if (index >= 8)
			{
				std::cout << "Le phoneBook ne peut contenir que 8 contacts maximum.\n Voulez-vous en remplacé un ? (y/n)" << std::endl;
				std::cin >> response;
				if (response == "y")
				{
					std::cout << "Voici la liste des contacts" << std::endl;
					print_contacts(phoneBook);
					nb = 8;
					while (nb >= 8 || nb < 0)
					{
						std::cout << "Lequel voulez-vous remplacé ? (indiquez le user id)" << std::endl;
						std::cin >> response;
						nb = ft_atoi(response);
						if (nb >= 8)
							std::cout << "Le contact n'existe pas" << std::endl;
						else if (nb == -1)
							std::cout << "Nombre invalide" << std::endl;
					}
					phoneBook[nb].add_contact();
				}
			}
			else
			{
				phoneBook[index].add_contact();
				index++;
			}
		}
		else if (response == "SEARCH")
		{
			if (index > 0)
			{
				print_contacts(phoneBook);
				while (1)
				{
					std::cout << "\nSaisissez l'index d'un contact pour voir ses informations : ";
					std::cin >> response;
					nb = ft_atoi(response);
					if (nb >= 8)
						std::cout << "Le contact n'existe pas, Veuillez prendre un index entre 0 et 7" << std::endl;
					else if (nb == -1)
						std::cout << "Nombre invalide" << std::endl;
					else
					{
						if (phoneBook[nb].print_user() == 0)
							break ;
					}
				}
			}
			else
				std::cout << "Aucun contact disponible" << std::endl;
		}
	}
	return (0);
}