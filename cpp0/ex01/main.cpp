/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdinis <rdinis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 17:39:16 by rdinis            #+#    #+#             */
/*   Updated: 2026/01/31 20:14:22 by rdinis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void check_input(std::string str, PhoneBook &phonebook)
{
	if (!str.compare("EXIT"))
		std::exit(0);
	if (!str.compare("ADD"))
	{
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;

		std::cout << "Enter a first name ?>";
		std::cin >> first_name;
		std::cout << "Enter a last name ?>";
		std::cin >> last_name;
		std::cout << "Enter a nickname ?>";
		std::cin >> nickname;
		std::cout << "Enter a phone number ?>";
		std::cin >> phone_number;
		std::cout << "Enter a darkest secret ?>";
		std::cin >> darkest_secret;
		
		phonebook.addContact(first_name, last_name, nickname, phone_number, darkest_secret);
	}
	if (!str.compare("SEARCH"))
	{
		int	index;
		phonebook.displayContacts();
		std::cout << "Enter a index";
		std::cin >> index;
	}
}

int main(void)
{
	PhoneBook phonebook;
	while (1)
	{
		std::string input("");
		std::cout << "Enter a command (ADD, SEARCH, EXIT) ?>";
		std::cin >> input;
		check_input(input, phonebook);
	}
}

//TODO : INDEX CHOOSE.