/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdinis <rdinis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 18:36:30 by rdinis            #+#    #+#             */
/*   Updated: 2026/01/31 20:09:39 by rdinis           ###   ########.fr       */
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
	std::cout << "|index     |first name|last name |nickname  |" << std::endl;
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
}
