/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdinis <rdinis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 15:39:46 by rdinis            #+#    #+#             */
/*   Updated: 2026/04/14 16:28:41 by rdinis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP


#include <iostream>
#include <fstream>  
#include <stdexcept>
#include <string.h>
#include "../AForm/AForm.hpp"
#include "../Bureaucrat/Bureaucrat.hpp"

class ShrubberyCreationForm : public AForm
{
private:
	std::string _target;
public:
	ShrubberyCreationForm(std::string target);
	void execute(Bureaucrat const & executor) const;
	~ShrubberyCreationForm();
};

#endif