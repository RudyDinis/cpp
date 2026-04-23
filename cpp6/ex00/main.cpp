/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdinis <rdinis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 18:10:46 by rdinis            #+#    #+#             */
/*   Updated: 2026/04/18 18:12:17 by rdinis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter/ScalarConverter.hpp"


int main(int argc, char **argv)
{
	if (argc == 2)
		ScalarConverter::convert(argv[1]);
	else
		std::cout << "Need one arg" << std::endl;
}