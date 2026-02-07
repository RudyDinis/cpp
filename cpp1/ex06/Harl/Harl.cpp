/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdinis <rdinis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 15:56:06 by rdinis            #+#    #+#             */
/*   Updated: 2026/02/07 16:57:23 by rdinis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << "love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}
void Harl::info(void)
{
	std::cout << "cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "his is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	std::string status[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*functions[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	int i = 0;
	while (i < 4 && level.compare(status[i]))
	{
		i++;
	}
	/*while (i < 4)
	{
		std::cout << "[ " << status[i] << "]" << std::endl;
		(this->*functions[i])();
		std::cout << std::endl;
		i++;
	}*/
	switch (i)
	{
	case 0:
		while (i < 4)
		{
			std::cout << "[ " << status[i] << " ]" << std::endl;
			(this->*functions[i])();
			std::cout << std::endl;
			i++;
		}
		break;
	case 1:
		while (i < 4)
		{
			std::cout << "[ " << status[i] << " ]" << std::endl;
			(this->*functions[i])();
			std::cout << std::endl;
			i++;
		}
		break;
	case 2:
		while (i < 4)
		{
			std::cout << "[ " << status[i] << " ]" << std::endl;
			(this->*functions[i])();
			std::cout << std::endl;
			i++;
		}
		break;
	case 3:
		while (i < 4)
		{
			std::cout << "[ " << status[i] << " ]" << std::endl;
			(this->*functions[i])();
			std::cout << std::endl;
			i++;
		}
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]";
		break;
	}
}