#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{

public:
	Brain();
	~Brain();
	Brain(const Brain &obj);
	std::string ideas[99];
	Brain &operator=(const Brain &obj);
};

#endif