/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdinis <rdinis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 13:04:00 by rdinis            #+#    #+#             */
/*   Updated: 2026/05/08 16:05:01 by rdinis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange/BitcoinExchange.hpp"
#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
	BitcoinExchange data;
	(void)argv;
	if (argc != 2)
		return (std::cout << "Error: could not open file." << std::endl, 1);
	std::string file = argv[1];
	if (file.size() >= 3 && (file.substr(file.size() - 3) == "txt" || file.substr(file.size() - 3) == "csv"))
	{
		try
		{
			data.parseCSV();
			std::string line;
			std::ifstream read(argv[1]);
			if (!read.is_open())
				throw std::runtime_error("Cannot open the data file.");
			getline(read, line);
			while (getline(read, line))
			{
				try
				{
					std::pair<std::string, double> check = data.checkRules(line);
					data.exchange(check.first, check.second);
				}
				catch (const std::exception &e)
				{
					std::cerr << e.what() << '\n';
				}
			}
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	else
	{
		std::cerr << "Wrong extention" << std::endl;
	}
}