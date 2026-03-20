/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdinis <rdinis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 11:55:43 by rdinis            #+#    #+#             */
/*   Updated: 2026/03/17 17:47:17 by rdinis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal/Animal.hpp"
#include "WrongAnimal/WrongAnimal.hpp"
#include "WrongCat/WrongCat.hpp"
#include "Dog/Dog.hpp"
#include "Cat/Cat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();


	delete j;
	delete i;

	std::cout << "----------------------------" << std::endl << std::endl;

	int nb_animal = 50;
	const Animal* array[nb_animal];

	int indice = 0;
	while (indice < nb_animal)
	{
		if (indice % 2)
			array[indice] = new Dog();
		else
			array[indice] = new Cat();
		indice++;
	}

	indice = 0;
	while (indice < nb_animal)
	{
		delete array[indice];
		indice++;
	}
	return 0;
}