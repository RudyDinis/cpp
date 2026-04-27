#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

class Span
{
private:
	unsigned int _N;
	std::vector <int> _span;
public:
	Span(unsigned int N);
	void addNumber(int value);
	void addRandNumbers(int begin, int end);
	int	shortestSpan();
	int longestSpan();
	int &operator[](unsigned int index);
	~Span();
};

#endif