/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdinis <rdinis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 17:39:16 by rdinis            #+#    #+#             */
/*   Updated: 2026/03/10 13:56:35 by rdinis           ###   ########.fr       */
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

		std::cout << GREEN "Enter a first name ?> " RESET;
		std::getline(std::cin, first_name);
		std::cout << GREEN "Enter a last name ?> " RESET;
		std::getline(std::cin, last_name);
		std::cout << GREEN "Enter a nickname ?> " RESET;
		std::getline(std::cin, nickname);
		std::cout << GREEN "Enter a phone number ?> " RESET;
		std::getline(std::cin, phone_number);
		std::cout << GREEN "Enter a darkest secret ?> " RESET;
		std::getline(std::cin, darkest_secret);
		
		if (first_name.empty() || last_name.empty() || nickname.empty() || phone_number.empty() || darkest_secret.empty())
		{
			std::cout << RED << "You have an empty line" << RESET << std::endl;
			return;
		}
		phonebook.addContact(first_name, last_name, nickname, phone_number, darkest_secret);
	}
	if (!str.compare("SEARCH"))
	{
		int	index;
		phonebook.displayContacts();
		std::cout << GREEN "Enter a index ?> " RESET;
		std::cin >> index;
	if (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << RED << "Not a valid index" << RESET << std::endl;
		return ;
	}
		if (!phonebook.findIndex(index))
			std::cout << RED "index not found" RESET << std::endl;
	}
}

int main(void)
{
	PhoneBook phonebook;
	while (1)
	{
		std::string input("");
		std::cout << GREEN "Enter a command (ADD, SEARCH, EXIT) ?> " RESET;
		std::cin >> input;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		check_input(input, phonebook);
	}
}