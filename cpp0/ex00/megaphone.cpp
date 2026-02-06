/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdinis <rdinis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 17:15:56 by rdinis            #+#    #+#             */
/*   Updated: 2026/01/31 17:48:08 by rdinis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void uppercase(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
		std::cout << (char)(toupper(str[i++]));
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (i < argc)
	{
		uppercase(argv[i++]);
	}
	std::cout << std::endl;
	return (0);
}
