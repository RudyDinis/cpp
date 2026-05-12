/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdinis <rdinis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 11:09:39 by rdinis            #+#    #+#             */
/*   Updated: 2026/05/12 13:35:48 by rdinis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rpn/RPN.hpp"

int main(int argc, char **argv)
{
	RPN rpn;
	int i = 0;
	int a;
	int b;
	if (argc != 2)
		return (std::cerr << "Error" << std::endl, 0);
	try
	{
		while (argv[1][i])
		{
			if (argv[1][i] == ' ')
			{
				i++;
				continue;
			}

			if (argv[1][i] >= 48 && argv[1][i] <= 57 && argv[1][i + 1] == ' ')
				rpn.numbers().push(argv[1][i] - '0');
			else if (argv[1][i] == 42 || argv[1][i] == 43 || argv[1][i] == 45 || argv[1][i] == 47)
			{
				if (rpn.numbers().size() < 2)
					return (std::cerr << "Error" << std::endl, 0);
				b = rpn.numbers().top();
				rpn.numbers().pop();
				a = rpn.numbers().top();
				rpn.numbers().pop();
				rpn.numbers().push(rpn.resolve(a, b, argv[1][i]));
			}
			else
				return (std::cerr << "Error" << std::endl, 0);
			i++;
		}
		std::cout << rpn.numbers().top() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
}