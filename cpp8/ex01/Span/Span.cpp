#include "Span.hpp"

Span::Span(unsigned int N)
	: _N(N)
{
}

void Span::addNumber(int value)
{
	if (_span.size() == _N)
		throw std::runtime_error("Cannot add more int");
	_span.push_back(value);
}

void Span::addRandNumbers(int begin, int end)
{
	(void) begin;
	(void) end;
	for (unsigned int i = 0; i < (_N - _span.size()); i++)
	{
		const int value = rand() % (end - begin + 1) + begin;
		_span.push_back(value);
	}
}

int Span::shortestSpan()
{
	std::sort(_span.begin(), _span.end());
	int min = _span[1] - _span[0];
	for (unsigned int i = 1; i < _span.size() - 1; i++)
	{
		if (min > (_span[i+1] - _span[i]))
			min = _span[i+1] - _span[i];
	}
	return (min);
}

int Span::longestSpan()
{
	std::sort(_span.begin(), _span.end());
	return (_span.back() - _span.front());
}

Span::~Span()
{
}