/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdinis <rdinis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 14:10:52 by rdinis            #+#    #+#             */
/*   Updated: 2026/03/17 15:17:55 by rdinis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
	: name(name), weapon(NULL)
{
}

HumanB::~HumanB()
{
}

void HumanB::attack()
{
	if (HumanB::weapon)
		std::cout << HumanB::name << " attacks with their " << HumanB::weapon->getType() << std::endl;
	else
		std::cout << HumanB::name << " dont have weapon" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	HumanB::weapon = &weapon;
}