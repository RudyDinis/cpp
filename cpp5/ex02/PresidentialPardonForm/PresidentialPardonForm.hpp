/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdinis <rdinis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 15:39:46 by rdinis            #+#    #+#             */
/*   Updated: 2026/04/17 18:50:37 by rdinis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <fstream>
#include <stdexcept>
#include <string.h>
#include <cstdlib>
#include <ctime>
#include "../AForm/AForm.hpp"
#include "../Bureaucrat/Bureaucrat.hpp"

class PresidentialPardonForm : public AForm
{
private:
	std::string _target;

public:
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &obj);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &obj);
	void execute(Bureaucrat const &executor) const;
	~PresidentialPardonForm();
};

#endif