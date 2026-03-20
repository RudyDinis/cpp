/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdinis <rdinis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 11:55:51 by rdinis            #+#    #+#             */
/*   Updated: 2026/03/17 17:27:48 by rdinis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	brain = new Brain();
	std::cout << "init Cat" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "MIAOUUU !" << std::endl;
}

Cat::Cat(const Cat &obj)
{
	std::cout << "Cat copy instructor called" << std::endl;
	*this = obj;
}

Cat &Cat::operator=(const Cat &obj)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &obj)
	{
		type = obj.type;
	}
	return (*this);
}

std::string Cat::getType() const
{
	return (type);
}

Cat::~Cat()
{
	delete brain;
	std::cout << "destroy Cat" << std::endl;
}