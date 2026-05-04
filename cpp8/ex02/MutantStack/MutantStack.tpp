/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdinis <rdinis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 11:23:56 by rdinis            #+#    #+#             */
/*   Updated: 2026/04/30 15:03:12 by rdinis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T>

MutantStack<T>::MutantStack()
{
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &obj)
{
	*this = obj;
}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack &obj)
{
	if (this != &obj)
	{
		std::stack<T>::operator=(obj);
	}
	return (*this);
}


template <typename T>

MutantStack<T>::~MutantStack()
{
}