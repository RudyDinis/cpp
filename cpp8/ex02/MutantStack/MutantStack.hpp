#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template<typename T>
class MutantStack
{
private:
	std::stack<T> data;
public:
	MutantStack();
	~MutantStack();
};


#endif