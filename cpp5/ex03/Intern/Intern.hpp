/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdinis <rdinis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 13:33:09 by rdinis            #+#    #+#             */
/*   Updated: 2026/04/18 17:27:17 by rdinis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <string.h>
#include <iostream>
#include "../AForm/AForm.hpp"

class Intern
{
private:
public:
	Intern(/* args */);
	Intern(const Intern &obj);
	Intern &operator=(const Intern &obj);
	AForm *makeForm(std::string name, std::string target);
	~Intern();
};


#endif