/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdinis <rdinis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 18:02:28 by rdinis            #+#    #+#             */
/*   Updated: 2026/03/10 13:36:06 by rdinis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK
#define PHONE_BOOK

#include "../main.hpp"

class PhoneBook
{
private:
	Contact contact[8];
	int		last_id;
public:
	PhoneBook();
	int		addContact(const std::string &first_name, const std::string &last_name,
		const std::string &nickname, const std::string &phone_number, const std::string &darkest_secret);
	void	displayContacts();
	int		findIndex(int id);
};

#endif