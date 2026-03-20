/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdinis <rdinis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 11:56:09 by rdinis            #+#    #+#             */
/*   Updated: 2026/03/17 17:58:22 by rdinis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "../Brain/Brain.hpp"

class Animal
{
protected:
	std::string type;
public:
	Animal();
	virtual ~Animal();
	Animal(const Animal &obj);
	Animal &operator=(const Animal &obj);
	virtual void makeSound() const;
	virtual std::string getType() const ;
};

#endif