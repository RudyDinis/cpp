/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdinis <rdinis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 11:55:43 by rdinis            #+#    #+#             */
/*   Updated: 2026/03/13 14:01:20 by rdinis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal/Animal.hpp"
#include "WrongAnimal/WrongAnimal.hpp"
#include "WrongCat/WrongCat.hpp"
#include "Dog/Dog.hpp"
#include "Cat/Cat.hpp"

int main()
{
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;

	std::cout << std::endl << "----------------------" << std::endl;

	const WrongAnimal *wrongAni = new WrongAnimal();
	const WrongAnimal *wrongMiaou = new WrongCat();
	
	std::cout << wrongMiaou->getType() << " " << std::endl;
	std::cout << wrongAni->getType() << " " << std::endl;

	wrongMiaou->makeSound();
	wrongAni->makeSound();
	
	delete wrongAni;
	delete wrongMiaou;
	
	return 0;
}