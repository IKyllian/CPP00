#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Contact
{	
	public :
		Contact();
		~Contact();
		void	add_contact();
		void	print_info_user(int i);
		int		print_user();

	private :
		int is_create;
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string	phone_number;
		std::string darkest_secret;
};

#endif