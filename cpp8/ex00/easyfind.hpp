#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <iterator>

template<typename T>
int easyfind(T x, int value)
{
	typename T::iterator theFind = std::find(x.begin(), x.end(), value);
	if (theFind == x.end())
		throw std::runtime_error("Value not found");
	return (std::distance(x.begin(), theFind));
}

#endif