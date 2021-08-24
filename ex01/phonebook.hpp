#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Contact
{	
	public :
	Contact();
	void	add_contact(Contact *phoneBook);
	void	print_contact(Contact phoneBook[]);
	int		print_user(Contact user);

	private :
	int is_create;
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string	phone_number;
	std::string darkest_secret;
};

#endif