/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdinis <rdinis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 12:00:22 by rdinis            #+#    #+#             */
/*   Updated: 2026/05/13 14:01:44 by rdinis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
}

PmergeMe::PmergeMe(const PmergeMe &obj)
{
	(void)obj;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &obj)
{
	(void)obj;
	return (*this);
}

PmergeMe::~PmergeMe()
{
}

std::vector<int> &PmergeMe::getTabV()
{
	return (_tableauV);
}

std::deque<int> &PmergeMe::getTabQ()
{
	return (_tableauQ);
}

void PmergeMe::resolve()
{
	std::cout << "Before : ";
	printTab(_tableauV);

	timeval startV;
	gettimeofday(&startV, NULL);

	std::vector<int> resV = resolveV(_tableauV);

	timeval endV;
	gettimeofday(&endV, NULL);
	double timeV = (endV.tv_sec - startV.tv_sec) * 1e6 + (endV.tv_usec - startV.tv_usec);
	
	std::cout << "After :  ";
	printTab(resolveV(_tableauV));
	std::cout << std::endl;

	timeval startQ;
	gettimeofday(&startQ, NULL);

	resolveQ(_tableauQ);

	timeval endQ;
	gettimeofday(&endQ, NULL);
	double timeQ = (endQ.tv_sec - startQ.tv_sec) * 1e6 + (endQ.tv_usec - startQ.tv_usec);
	

	std::cout << "Time to process a range of " << _tableauV.size() << " elements with std::vector : " << timeV << " us" << std::endl;
	std::cout << "Time to process a range of " << _tableauQ.size() << " elements with std::deque : " << timeQ << " us" << std::endl;

}

std::vector<int> PmergeMe::resolveV(std::vector<int> tableau)
{
	if (tableau.size() <= 1)
		return (tableau);

	std::vector<int> petit;
	size_t i = 0;
	while (i < tableau.size())
	{
		if (i + 1 >= tableau.size())
		{
			petit.push_back(tableau[i]);
			tableau.erase(tableau.begin() + i);
		}
		else if (tableau[i] > tableau[i + 1])
		{
			petit.push_back(tableau[i + 1]);
			tableau.erase(tableau.begin() + i + 1);
		}
		else
		{
			petit.push_back(tableau[i]);
			tableau.erase(tableau.begin() + i);
		}
		i++;
	}

	std::vector<bool> inserted;
	i = 0;
	while (i < petit.size())
	{
		inserted.push_back(0);
		i++;
	}

	tableau = resolveV(tableau);
	tableau.insert(tableau.begin(), petit[0]);
	inserted[0] = 1;

	std::vector<int> jacobsthal;

	jacobsthal.push_back(0);
	jacobsthal.push_back(1);

	i = 2;
	while (jacobsthal.back() < (int)petit.size())
	{
		jacobsthal.push_back(jacobsthal[i - 1] + (2 * jacobsthal[i - 2]));
		i++;
	}

	i = 2;
	while (i < jacobsthal.size())
	{
		int j = jacobsthal[i];
		while (j >= jacobsthal[i - 1])
		{
			if (j < (int)petit.size() && j >= 0)
			{
				if (inserted[j] != 1)
				{
					tableau.insert(std::lower_bound(tableau.begin(), tableau.end(), petit[j]), petit[j]);
					inserted[j] = 1;
				}
			}
			j--;
		}
		i++;
	}

	return (tableau);
}

std::deque<int> PmergeMe::resolveQ(std::deque<int> tableau)
{
	if (tableau.size() <= 1)
		return (tableau);

	std::deque<int> petit;
	size_t i = 0;
	while (i < tableau.size())
	{
		if (i + 1 >= tableau.size())
		{
			petit.push_back(tableau[i]);
			tableau.erase(tableau.begin() + i);
		}
		else if (tableau[i] > tableau[i + 1])
		{
			petit.push_back(tableau[i + 1]);
			tableau.erase(tableau.begin() + i + 1);
		}
		else
		{
			petit.push_back(tableau[i]);
			tableau.erase(tableau.begin() + i);
		}
		i++;
	}

	std::deque<bool> inserted;
	i = 0;
	while (i < petit.size())
	{
		inserted.push_back(0);
		i++;
	}

	tableau = resolveQ(tableau);
	tableau.insert(tableau.begin(), petit[0]);
	inserted[0] = 1;

	std::deque<int> jacobsthal;

	jacobsthal.push_back(0);
	jacobsthal.push_back(1);

	i = 2;
	while (jacobsthal.back() < (int)petit.size())
	{
		jacobsthal.push_back(jacobsthal[i - 1] + (2 * jacobsthal[i - 2]));
		i++;
	}

	i = 2;
	while (i < jacobsthal.size())
	{
		int j = jacobsthal[i];
		while (j >= jacobsthal[i - 1])
		{
			if (j < (int)petit.size() && j >= 0)
			{
				if (inserted[j] != 1)
				{
					tableau.insert(std::lower_bound(tableau.begin(), tableau.end(), petit[j]), petit[j]);
					inserted[j] = 1;
				}
			}
			j--;
		}
		i++;
	}

	return (tableau);
}