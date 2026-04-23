#include "Serialization.hpp"

Serialization::Serialization(/* args */)
{
}

Serialization::~Serialization()
{
}
Serialization::Serialization(const Serialization &obj)
{
	(void)obj;
}
Serialization &Serialization::operator=(const Serialization &obj)
{
	(void)obj;
	return (*this);
}

uintptr_t Serialization::serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data *Serialization::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}