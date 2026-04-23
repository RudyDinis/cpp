/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdinis <rdinis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 18:10:59 by rdinis            #+#    #+#             */
/*   Updated: 2026/04/23 13:37:48 by rdinis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter &obj)
{
	(void)obj;
}
ScalarConverter &ScalarConverter::operator=(const ScalarConverter &obj)
{
	(void)obj;
	return (*this);
}

static int detect_type(const std::string literal)
{
	if (literal == "+inff" || literal == "+inf")
		return (-3);
	else if (literal == "-inff" || literal == "-inf")
		return (-2);
	else if (literal.length() == 1 && literal[0] > '9')
		return 0;
	else if (literal[literal.length() - 1] == 'f')
		return (1);
	else if (literal.find('.') != std::string::npos)
		return (2);
	else
	{
		for (int i = 0; i < (int)literal.length(); i++)
		{
			if (literal[i] > '9')
			{
				std::cout << literal << std::endl;
				return (-1);
			}
		}
		return (3);
	}
}

void ScalarConverter::convert(const std::string literal)
{
	int type = detect_type(literal);

	switch (type)
	{
	case -3:
	{
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : +inff" << std::endl;
		std::cout << "double : +inf" << std::endl;
		break;
	}
	case -2:
	{
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : -inff" << std::endl;
		std::cout << "double : -inf" << std::endl;
		break;
	}
	case -1:
	{
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : nanf" << std::endl;
		std::cout << "double : nan" << std::endl;
		break;
	}
	case 0:
	{
		int value = std::atoi(literal.c_str());

		std::cout << "char : " << literal << std::endl;
		std::cout << "int : " << value << std::endl;
		std::cout << "float : " << std::fixed << std::setprecision(1) << static_cast<float>(value) << "f" << std::endl;
		std::cout << "double : " << std::fixed << std::setprecision(1) << static_cast<double>(value) << std::endl;
		break;
	}
	case 1:
	{
		float value = std::atof(literal.c_str());

		if (value > 33 && value < 127)
			std::cout << "char : " << static_cast<char>(value) << std::endl;
		else
			std::cout << "char : Non displayable " << std::endl;

		if (value < (float)INT_MIN || value > (float)INT_MAX)
			std::cout << "int : overflow" << std::endl;
		else
			std::cout << "int : " << value << std::endl;
		std::cout << "float : " << std::fixed << std::setprecision(1) << value << "f" << std::endl;
		std::cout << "double : " << std::fixed << std::setprecision(1) << static_cast<double>(value) << std::endl;
		break;
	}
	case 2:
	{
		double value = std::atof(literal.c_str());

		if (value > 33 && value < 127)
			std::cout << "char : " << static_cast<char>(value) << std::endl;
		else
			std::cout << "char : Non displayable " << std::endl;

		if (value < (double)INT_MIN || value > (double)INT_MAX)
			std::cout << "int : overflow" << std::endl;
		else
			std::cout << "int : " << static_cast<int>(value) << std::endl;
		std::cout << "float : " << std::fixed << std::setprecision(1) << static_cast<float>(value) << "f" << std::endl;
		std::cout << "double : " << std::fixed << std::setprecision(1) << value << std::endl;
		break;
	}
	case 3:
	{
		double value = std::atof(literal.c_str());

		if (value > 33 && value < 127)
			std::cout << "char : " << static_cast<char>(value) << std::endl;
		else
			std::cout << "char : Non displayable " << std::endl;

		if (value < (double)INT_MIN || value > (double)INT_MAX)
			std::cout << "int : overflow" << std::endl;
		else
			std::cout << "int : " << static_cast<int>(value) << std::endl;
		std::cout << "float : " << std::fixed << std::setprecision(1) << static_cast<float>(value) << "f" << std::endl;
		std::cout << "double : " << std::fixed << std::setprecision(1) << value << std::endl;
		break;
	}
	default:
		break;
	}
}

ScalarConverter::~ScalarConverter()
{
}