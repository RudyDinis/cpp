/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdinis <rdinis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 11:23:49 by rdinis            #+#    #+#             */
/*   Updated: 2026/04/30 14:55:12 by rdinis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
private:
public:
	MutantStack();
	~MutantStack();
	MutantStack(const MutantStack &obj);
	MutantStack &operator=(const MutantStack &obj);

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;

	iterator begin(){return this->c.begin();}
	iterator end(){return this->c.end();}

	const_iterator begin() const {return this->c.begin();}
	const_iterator end() const {return this->c.end();}
};

#include "MutantStack.tpp"

#endif