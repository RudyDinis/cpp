/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdinis <rdinis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 18:10:22 by rdinis            #+#    #+#             */
/*   Updated: 2026/01/31 19:56:09 by rdinis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include "../main.hpp"

class Contact
{
private:
	std::string first_name = "";
	std::string last_name = "";
	std::string nickname = "";
	std::string phone_number = "";
	std::string darkest_secret = "";
	int			id = -1;
public:
	void	editContact(const std::string &first_name, const std::string &last_name,
		const std::string &nickname, const std::string &phone_number, const std::string &darkest_secret, int	last_id);
	std::string getFn();
	std::string getLn();
	std::string getNn();
	std::string getPn();
	std::string getDs();
	int			getId();
};

#endif