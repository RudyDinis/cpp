/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdinis <rdinis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 13:24:22 by rdinis            #+#    #+#             */
/*   Updated: 2026/04/27 15:06:08 by rdinis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T>
class Array
{
private:
	T *_array;
	unsigned int _size;

public:
	Array() : _array(NULL), _size(0) {}
	Array(unsigned int n) : _array(new T[n]), _size(n) {}
	Array(const Array &obj)
		: _array(new T[obj._size]), _size(obj._size)
	{
		for (unsigned int i = 0; i < _size; i++)
		{
			_array[i] = obj._array[i];
		}
	}

	Array &operator=(const Array &obj)
	{
		if (this != &obj)
		{
			delete[] _array;
			_size = obj._size;
			_array = new T[_size];
			for (unsigned int i = 0; i < _size; i++)
			{
				_array[i] = obj._array[i];
			}
		}
		return (*this);
	}
	
	T &operator[](unsigned int index)
	{
		if (index >= _size)
			throw std::out_of_range("Index out of range");
		return (_array[index]);
	}

	const T &operator[](unsigned int index) const
	{
		if (index >= _size)
			throw std::out_of_range("Index out of range");
		return (_array[index]);
	}

	unsigned int size() const {return _size;}
	~Array() { delete[] _array; }
};

#endif