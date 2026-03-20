/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdinis <rdinis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 14:11:29 by rdinis            #+#    #+#             */
/*   Updated: 2026/03/18 14:42:44 by rdinis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string name)
{
	this->type = name;
}

Weapon::~Weapon()
{
}

const std::string& Weapon::getType()
{
	return type;
}

void Weapon::setType(std::string type)
{
	Weapon::type = type;
}