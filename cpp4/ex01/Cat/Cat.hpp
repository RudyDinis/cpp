/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdinis <rdinis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 11:55:58 by rdinis            #+#    #+#             */
/*   Updated: 2026/03/17 17:59:53 by rdinis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "../Animal/Animal.hpp"
#include <iostream>
#include "../Brain/Brain.hpp"

class Cat : public Animal
{
private:
	Brain *brain;
public:
	Cat();
	~Cat();
	Cat(const Cat &obj);
	Cat &operator=(const Cat &obj);
	void makeSound() const;
	std::string getType() const;
	Brain *getBrain() const;
};

#endif