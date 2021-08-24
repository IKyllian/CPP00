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
		if (str[i] < 48 && str[i] > 57)
			return (-1);
		nbr = nbr * 10 + (str[i++] - 48);
	}	
	return (nbr);
}


void Contact::add_contact(Contact *phoneBook)
{
	std::cout << "First Name : ";
	std::cin >> phoneBook->first_name;
	std::cout << "Last Name : ";
	std::cin >> phoneBook->last_name;
	std::cout << "Nickname : ";
	std::cin >> phoneBook->nickname;
	std::cout << "Phone Number : ";
	std::cin >> phoneBook->phone_number;
	std::cout << "Darkest Secret : ";
	std::cin >> phoneBook->darkest_secret;
	std::cout << std::endl;
	phoneBook->is_create = 1;
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

void Contact::print_contact(Contact phoneBook[])
{
	int i;

	i = 0;
	print_collumn();
	while (i < 8)
	{
		if (phoneBook[i].is_create)
		{
			std::cout << i;
			std::cout << std::setw(9);
			std::cout << "|";
			std::cout << phoneBook[i].first_name;
			std::cout << std::setw(10 - ft_strlen(phoneBook[i].first_name) + 1);
			std::cout << "|";
			std::cout << phoneBook[i].last_name;
			std::cout << std::setw(10 - ft_strlen(phoneBook[i].last_name));
			std::cout << "|";
			std::cout << phoneBook[i].nickname;
			// std::cout << std::setw(10 - ft_strlen(phoneBook[i].nickname) + 1);
			std::cout << std::endl;
		}
		i++;
	}
}

Contact::Contact() : is_create(0)
{

}

int	Contact::print_user(Contact user)
{
	if (!user.is_create)
	{
		std::cout << "Le contact n'existe pas" << std::endl;
		return (1);
	}
	else
	{
		std::cout << "First Name : " + user.first_name << std::endl;
		std::cout << "Last Name : " + user.last_name << std::endl;
		std::cout << "Nickname : " + user.nickname << std::endl;
		std::cout << "Phone Number : " + user.phone_number << std::endl;
		std::cout << "Darkest Secret : " + user.darkest_secret << std::endl;
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
				std::cout << "Le phoneBook ne peut contenir que 8 contacts maximum.\n Voulez vous en remplacé un ? (o/n)" << std::endl;
				std::cin >> response;
				if (response == "o")
				{
					std::cout << "Voici la liste des contacts" << std::endl;
					phoneBook->print_contact(phoneBook);
					while (nb >= 8)
					{
						std::cout << "Lequel voulez-vous remplacé ? (id)" << std::endl;
						std::cin >> response;
						nb = ft_atoi(response);
						if (nb >= 8)
							std::cout << "Le contact n'existe pas" << std::endl;
						else if (nb == -1)
							std::cout << "Nombre invalide" << std::endl;
					}
					phoneBook->add_contact(&phoneBook[nb]);
				}
			}
			else
			{
				phoneBook->add_contact(&phoneBook[index]);
				index++;
			}
		}
		else if (response == "SEARCH")
		{
			if (index > 0)
			{
				phoneBook->print_contact(phoneBook);
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
						if (phoneBook->print_user(phoneBook[nb]) == 0)
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