/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdinis <rdinis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 11:55:51 by rdinis            #+#    #+#             */
/*   Updated: 2026/03/13 13:49:43 by rdinis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "a cat but a wrongCat";
	std::cout << "init WrongCat" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "Wrong MIAOU" << std::endl;
}

WrongCat::WrongCat(const WrongCat &obj)
{
	std::cout << "WrongCat copy instructor called" << std::endl;
	*this = obj;
}

WrongCat &WrongCat::operator=(const WrongCat &obj)
{
	std::cout << "WrongCat copy assignment operator called" << std::endl;
	if (this != &obj)
	{
		type = obj.type;
	}
	return (*this);
}

std::string WrongCat::getType() const
{
	return (type);
}

WrongCat::~WrongCat()
{
	std::cout << "destroy WrongCat" << std::endl;
}