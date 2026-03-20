#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
private:
	std::string ideas[99];
public:
	Brain();
	~Brain();
	Brain(const Brain &obj);
	Brain &operator=(const Brain &obj);
};

#endif