/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdinis <rdinis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 13:04:07 by rdinis            #+#    #+#             */
/*   Updated: 2026/05/19 12:56:52 by rdinis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(/* args */)
{
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &obj)
{
	(void) obj;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &obj)
{
	(void) obj;
	return (*this);
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
int isBissextile(int year)
{
	if (year % 400 == 0)
		return true;
	if (year % 100 == 0)
		return false;
	if (year % 4 == 0)
		return true;
	return false;
}

std::pair<std::string, double> BitcoinExchange::checkRules(std::string value)
{
	std::string date = value.substr(0, value.find(' '));
	if (date.size() != 10)
		throw std::runtime_error("Error: bad input");

	int year, month, day;
	char sep1, sep2;

	std::stringstream ss(date);
	ss >> year >> sep1 >> month >> sep2 >> day;

	if (month > 12 || day > 31 || day == 0 || month == 0)
		throw std::runtime_error("Error: bad input");
	
	switch (month)
	{
	case 1:
		if (day > 31)
			throw std::runtime_error("Error: bad input");
		break;
	case 2:
		if (isBissextile(year))
		{
			if (day > 29)
				throw std::runtime_error("Error: bad input");
		}
		else
		{
			if (day > 28)
				throw std::runtime_error("Error: bad input");			
		}
		break;
	case 3:
		if (day > 31)
			throw std::runtime_error("Error: bad input");
		break;
	case 4:
		if (day > 30)
			throw std::runtime_error("Error: bad input");
		break;
	case 5:
		if (day > 31)
			throw std::runtime_error("Error: bad input");
		break;
	case 6:
		if (day > 30)
			throw std::runtime_error("Error: bad input");
		break;
	case 7:
		if (day > 31)
			throw std::runtime_error("Error: bad input");
		break;
	case 8:
		if (day > 31)
			throw std::runtime_error("Error: bad input");
		break;
	case 9:
		if (day > 30)
			throw std::runtime_error("Error: bad input");
		break;
	case 10:
		if (day > 31)
			throw std::runtime_error("Error: bad input");
		break;
	case 11:
		if (day > 30)
			throw std::runtime_error("Error: bad input");
		break;
	case 12:
		if (day > 31)
			throw std::runtime_error("Error: bad input");
		break;
	default:
		break;
	}
		
	if (value.size() <= 13)
		throw std::runtime_error("Error: bad input");
	double amount = strtod(value.substr(13).c_str(), NULL);
	if (amount > 1000)
		throw std::runtime_error("Error: too large number");
	if (amount < 0)
		throw std::runtime_error("Error: not a positive number");
	return (std::make_pair(date, amount));
}