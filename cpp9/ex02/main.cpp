/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdinis <rdinis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 12:00:15 by rdinis            #+#    #+#             */
/*   Updated: 2026/05/13 12:54:55 by rdinis           ###   ########.fr       */
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
		if (std::strtol(argv[i], NULL, 10) < 0)
			return (std::cerr << "Error" << std::endl, 0);
		tab.getTabV().push_back(std::strtol(argv[i], NULL, 10));
		tab.getTabQ().push_back(std::strtol(argv[i], NULL, 10));
		i++;
	}

	tab.resolve();
}