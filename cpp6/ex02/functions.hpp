/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdinis <rdinis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 13:35:44 by rdinis            #+#    #+#             */
/*   Updated: 2026/04/23 13:35:45 by rdinis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_HPP
#define FUNCTIONS_HPP

#include <ctime>
#include <cstdlib>
#include <iostream>

#include "Base/Base.hpp"
#include "A/A.hpp"
#include "B/B.hpp"
#include "C/C.hpp"

Base * generate(void);
void identify(Base* p);
void identify(Base& p);


#endif