/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdinis <rdinis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 11:55:58 by rdinis            #+#    #+#             */
/*   Updated: 2026/03/13 13:26:51 by rdinis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "../Animal/Animal.hpp"
#include <iostream>

class Cat : public Animal
{
public:
	Cat();
	~Cat();
	Cat(const Cat &obj);
	Cat &operator=(const Cat &obj);
	void makeSound() const;
	std::string getType() const;
};

#endif