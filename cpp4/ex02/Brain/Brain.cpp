#include "./Brain.hpp"

Brain::Brain()
{
	std::cout << "init brain" << std::endl;
}

Brain::~Brain()
{
	std::cout << "destroy brain" << std::endl;
}

Brain::Brain(const Brain &obj)
{
	std::cout << "Brain copy instructor called" << std::endl;
	*this = obj;
}

Brain &Brain::operator=(const Brain &obj)
{
	std::cout << "Brain copy assignment operator called" << std::endl;
	if (this != &obj)
	{
		int i = 0;
		while (i < 100)
		{
			this->ideas[i] = obj.ideas[i];
			i++;
		}
	}
	return (*this);
}
