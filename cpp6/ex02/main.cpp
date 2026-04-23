/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdinis <rdinis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 13:28:07 by rdinis            #+#    #+#             */
/*   Updated: 2026/04/23 13:34:36 by rdinis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.hpp"

int main()
{
	std::srand(std::time(0));


	Base* test = generate();
	identify(test);
	identify(*test);

	delete test;

	std::cout << "------------" << std::endl;

	Base* test1 = generate();
	identify(test1);
	identify(*test1);

	delete test1;

	std::cout << "------------" << std::endl;

	Base* test2 = generate();
	identify(test2);
	identify(*test2);

	delete test2;
}