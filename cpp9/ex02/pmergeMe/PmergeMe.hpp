/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdinis <rdinis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 12:00:26 by rdinis            #+#    #+#             */
/*   Updated: 2026/05/13 14:01:13 by rdinis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <cstdlib>
#include <sys/time.h>
#include <vector>
#include <deque>

class PmergeMe
{
private:
	std::vector<int> _tableauV;
	std::deque<int> _tableauQ;

public:
	PmergeMe();
	PmergeMe(const PmergeMe &obj);
	PmergeMe &operator=(const PmergeMe &obj);
	~PmergeMe();

	std::vector<int> &getTabV();
	std::deque<int> &getTabQ();

	void resolve();
	std::vector<int> resolveV(std::vector<int> tableau);
	std::deque<int> resolveQ(std::deque<int> tableau);
	

	// debug
	template <typename T>
	void printTab(T tab)
	{
		size_t i = 0;
		while (i < tab.size())
		{
			std::cout << tab[i] << " ";
			i++;
		}
		std::cout << std::endl;
	}
};

#endif