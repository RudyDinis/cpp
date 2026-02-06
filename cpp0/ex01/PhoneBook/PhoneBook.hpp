/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdinis <rdinis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 18:02:28 by rdinis            #+#    #+#             */
/*   Updated: 2026/01/31 19:43:54 by rdinis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK
#define PHONE_BOOK

#include "../main.hpp"

class PhoneBook
{
private:
	Contact contact[8];
	int		last_id = 0;
public:
	int		addContact(const std::string &first_name, const std::string &last_name,
		const std::string &nickname, const std::string &phone_number, const std::string &darkest_secret);
	void	displayContacts();
};

#endif