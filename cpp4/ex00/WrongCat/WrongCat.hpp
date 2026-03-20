/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdinis <rdinis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 11:55:58 by rdinis            #+#    #+#             */
/*   Updated: 2026/03/13 13:47:36 by rdinis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "../WrongAnimal/WrongAnimal.hpp"
#include <iostream>

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	~WrongCat();
	WrongCat(const WrongCat &obj);
	WrongCat &operator=(const WrongCat &obj);
	void makeSound() const;
	std::string getType() const;
};

#endif