/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdinis <rdinis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 12:03:45 by rdinis            #+#    #+#             */
/*   Updated: 2026/05/12 13:31:19 by rdinis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(/* args */)
{
}

RPN::RPN(const RPN &obj)
{
	(void)obj;
}

RPN &RPN::operator=(const RPN &obj)
{
	(void)obj;
	return (*this);
}

RPN::~RPN()
{
}

std::stack<int> &RPN::numbers()
{
	return (_numbers);
}

template <typename T>
void RPN::printstack(std::stack<T> content)
{
	while (!content.empty())
	{
		std::cout << content.top() << " ";
		content.pop();
	}
	std::cout << std::endl;
}

int RPN::resolve(int a, int b, char sign)
{
	if (sign == '-')
		return (a - b);
	else if (sign == '+')
		return (a + b);
	else if (sign == '*')
		return (a * b);
	else if (sign == '/')
	{
		if (b == 0)
			throw std::runtime_error("Error");
		return (a / b);
	}
	return (throw std::runtime_error("Error"), 0);
}