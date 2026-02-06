/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdinis <rdinis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 18:20:54 by rdinis            #+#    #+#             */
/*   Updated: 2026/01/31 19:55:55 by rdinis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.hpp"
#include "Contact.hpp"

void Contact::editContact(const std::string &fn, const std::string &ln,
						  const std::string &nn, const std::string &pn, const std::string &ds, int last_id)
{
	first_name = fn;
	last_name = ln;
	nickname = nn;
	phone_number = pn;
	darkest_secret = ds;
	id = last_id;
}

std::string Contact::getFn()
{
	return (first_name);
}
std::string Contact::getLn()
{
	return (last_name);
}
std::string Contact::getNn()
{
	return (nickname);
}
std::string Contact::getPn()
{
	return (phone_number);
}
std::string Contact::getDs()
{
	return (darkest_secret);
}

int Contact::getId()
{
	return (id);
}
