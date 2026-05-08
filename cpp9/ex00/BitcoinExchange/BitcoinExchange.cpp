/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdinis <rdinis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 13:04:07 by rdinis            #+#    #+#             */
/*   Updated: 2026/05/08 16:04:27 by rdinis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(/* args */)
{
}

BitcoinExchange::~BitcoinExchange()
{
}

void BitcoinExchange::parseCSV()
{
	std::string data;

	std::ifstream read("./data.csv");
	if (!read.is_open())
		throw std::runtime_error("Cannot open the data file.");
	getline(read, data);
	while (getline(read, data))
	{
		std::string date = data.substr(0, 10);
		std::string value = data.substr(11);
		double amount = std::strtod(value.c_str(), NULL);
		_data.insert(std::make_pair(date, amount));
	}
	read.close();
}

void BitcoinExchange::exchange(std::string date, double amount)
{
	(void)amount;
	std::map<std::string, double>::iterator value = _data.lower_bound(date);
	if (value == _data.end() || value->first != date)
	{
		if (value == _data.begin())
		{
			std::cerr << "No lower date" << std::endl;
			return;
		}
		--value;
	}

	std::cout << value->first << " => " << amount << " = " << value->second * amount << std::endl;
}

std::pair<std::string, double> BitcoinExchange::checkRules(std::string value)
{
	std::string date = value.substr(0, value.find(' '));
	if (date.size() != 10)
		throw std::runtime_error("Error: bad input");
	int month = std::strtol(date.substr(date.find('-') + 1, 2).c_str(), NULL, 10);
	int day   = std::strtol(date.substr(date.rfind('-') + 1, 2).c_str(), NULL, 10);

	if (month > 12 || day > 31 || day == 0 || month == 0)
		throw std::runtime_error("Error: bad input");
	
	if (value.size() <= 13)
		throw std::runtime_error("Error: bad input");
	double amount = strtod(value.substr(13).c_str(), NULL);
	if (amount > 1000)
		throw std::runtime_error("Error: too large number");
	if (amount < 0)
		throw std::runtime_error("Error: not a positive number");
	return (std::make_pair(date, amount));
}