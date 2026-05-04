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
	Span(const Span &obj);
	Span &operator=(const Span &obj);
	void addNumber(int value);
	template <typename T>
	void addNumbers(T begin, T end)
	{
		_span.insert(_span.end(), begin, end);
	}
	int	shortestSpan();
	int longestSpan();
	int &operator[](unsigned int index);
	~Span();
};

#endif