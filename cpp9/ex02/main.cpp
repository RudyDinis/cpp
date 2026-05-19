/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdinis <rdinis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 12:00:15 by rdinis            #+#    #+#             */
/*   Updated: 2026/05/19 12:09:46 by rdinis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pmergeMe/PmergeMe.hpp"

int main(int argc, char **argv)
{
	PmergeMe tab;

	if (argc == 1)
		return (std::cerr << "Error" << std::endl, 0);

	int i = 1;
	while (i < argc)
	{
		int j = 0;
		if (!argv[i] || argv[i][0] == '\0' || std::strtol(argv[i], NULL, 10) < 0 || std::strtol(argv[i], NULL, 10) > 2147483647)
			return (std::cerr << "Error" << std::endl, 0);
		while (argv[i][j])
		{
			if (!std::isdigit(argv[i][j]))
				return (std::cerr << "Error" << std::endl, 0);
			j++;
		}

		tab.getTabV().push_back(std::strtol(argv[i], NULL, 10));
		tab.getTabQ().push_back(std::strtol(argv[i], NULL, 10));
		i++;
	}

	tab.resolve();
}