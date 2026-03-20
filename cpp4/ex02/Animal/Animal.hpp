/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdinis <rdinis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 11:56:09 by rdinis            #+#    #+#             */
/*   Updated: 2026/03/13 13:26:45 by rdinis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

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