/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdinis <rdinis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 15:39:46 by rdinis            #+#    #+#             */
/*   Updated: 2026/04/17 18:54:54 by rdinis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <fstream>
#include <stdexcept>
#include <string.h>
#include <cstdlib>
#include <ctime>
#include "../AForm/AForm.hpp"
#include "../Bureaucrat/Bureaucrat.hpp"

class RobotomyRequestForm : public AForm
{
private:
	std::string _target;

public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &obj);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &obj);
	void execute(Bureaucrat const &executor) const;
	~RobotomyRequestForm();
};

#endif