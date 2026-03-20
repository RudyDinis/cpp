/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdinis <rdinis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 15:56:06 by rdinis            #+#    #+#             */
/*   Updated: 2026/03/11 13:44:36 by rdinis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}
void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	std::string status[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int i = 0;
	while (i < 4 && level.compare(status[i]))
	{
		i++;
	}
	switch (i)
	{
	case 0:
		std::cout << "[ " << "DEBUG" << " ]" << std::endl;
		this->debug();
		std::cout << std::endl;
	case 1:
		std::cout << "[ " << "INFO" << " ]" << std::endl;
		this->info();
		std::cout << std::endl;
	case 2:
		std::cout << "[ " << "WARNING" << " ]" << std::endl;
		this->warning();
		std::cout << std::endl;
	case 3:
		std::cout << "[ " << "ERROR" << " ]" << std::endl;
		this->error();
		std::cout << std::endl;
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]";
		std::cout << std::endl;
		break;
	}
}