#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename type, typename funct>
void iter(type* arr, const int size, funct f)
{
	for (int i = 0; i < size; i++)
	{
		f(arr[i]);
	}
}

template<typename type>
void print(const type &value)
{
	std::cout << value << std::endl;
}

#endif