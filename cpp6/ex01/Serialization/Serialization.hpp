#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP

#include <stdint.h>
#include <iostream>
#include "../data.hpp"

class Serialization
{
private:
	Serialization(/* args */);
	Serialization(const Serialization &obj);
	Serialization &operator=(const Serialization &obj);
	~Serialization();
public:
	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);
};


#endif