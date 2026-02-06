/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdinis <rdinis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 18:36:30 by rdinis            #+#    #+#             */
/*   Updated: 2026/02/06 14:05:54 by rdinis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.hpp"
#include "./PhoneBook.hpp"

int PhoneBook::addContact(const std::string &first_name, const std::string &last_name,
						  const std::string &nickname, const std::string &phone_number, const std::string &darkest_secret)
{
	int j = -1;

	for (int i = 0; i < 8; i++)
	{
		if (contact[i].getId() == -1)
		{
			j = i;
			break;
		}
	}

	if (j == -1)
	{
		j = 0;
		for (int i = 1; i < 8; i++)
		{
			if (contact[i].getId() < contact[j].getId())
				j = i;
		}
	}

	contact[j].editContact(first_name, last_name, nickname,
						   phone_number, darkest_secret, last_id++);
	return 0;
}

std::string formatField(const std::string &str)
{
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	else
		return str + std::string(10 - str.length(), ' ');
}

void PhoneBook::displayContacts()
{
	std::cout << std::endl << "|" 
		CYAN "index" RESET"     |" 
		CYAN "first name" RESET "|"
		CYAN "last name" RESET " |"
		CYAN "nickname" RESET "  |" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		if (contact[i].getId() != -1)
			std::cout << "|"
				<< formatField(std::to_string(contact[i].getId())) << "|"
				<< formatField(contact[i].getFn()) << "|"
				<< formatField(contact[i].getLn()) << "|"
				<< formatField(contact[i].getNn()) << "|"
				<< std::endl;
	}
	std::cout << std::endl << std::endl;
}

int PhoneBook::findIndex(int id)
{
	for (int i = 0; i < 8; i++)
	{
		if (contact[i].getId() == id)
		{
			std::cout << CYAN "Index->" RESET << contact[i].getId() << std::endl
				<< CYAN "First Name->" RESET<< contact[i].getFn() << std::endl
				<< CYAN "Last Name->" RESET<< contact[i].getLn() << std::endl
				<< CYAN "Nickname->" RESET<< contact[i].getNn() << std::endl
				<< CYAN "Phone number->" RESET<< contact[i].getPn() << std::endl
				<< CYAN "Darkest secret->" RESET<< contact[i].getDs() << std::endl;
				return 1;
		}
	}
	return 0;
}