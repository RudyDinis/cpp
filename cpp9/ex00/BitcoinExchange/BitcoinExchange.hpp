#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <map>

class BitcoinExchange
{
private:
	std::map<std::string, double> _data;
public:
	BitcoinExchange();
	~BitcoinExchange();
	void parseCSV();
	void exchange(std::string date, double amount);
	std::pair<std::string, double> checkRules(std::string value);
};

#endif