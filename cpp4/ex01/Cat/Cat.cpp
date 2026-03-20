/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdinis <rdinis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 11:55:51 by rdinis            #+#    #+#             */
/*   Updated: 2026/03/17 18:07:37 by rdinis           ###   ########.fr       */
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
	this->brain = new Brain(*obj.brain);
	this->type = obj.type;
}

Cat &Cat::operator=(const Cat &obj)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &obj)
	{
		type = obj.type;
		delete brain;
		brain = new Brain(*obj.brain);
	}
	return (*this);
}

std::string Cat::getType() const
{
	return (type);
}

Brain *Cat::getBrain() const
{
	return (this->brain);
}

Cat::~Cat()
{
	delete brain;
	std::cout << "destroy Cat" << std::endl;
}