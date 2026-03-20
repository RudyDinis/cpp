#ifndef DOG_HPP
#define DOG_HPP

#include "../Animal/Animal.hpp"
#include <iostream>

class Dog : public Animal
{
public:
	Dog();
	~Dog();
	Dog(const Dog &obj);
	Dog &operator=(const Dog &obj);
	void makeSound() const;
	std::string getType() const;
};


#endif