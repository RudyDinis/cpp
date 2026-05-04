#include "Span.hpp"

Span::Span(unsigned int N)
	: _N(N)
{
}

Span::Span(const Span &obj)
{
	*this = obj;
}

Span &Span::operator=(const Span &obj)
{
	if (this != &obj)
	{
		this->_span = obj._span;
		this->_N = obj._N;
	}
	return (*this);
}

void Span::addNumber(int value)
{
	if (_span.size() == _N)
		throw std::runtime_error("Cannot add more int");
	_span.push_back(value);
}

int Span::shortestSpan()
{
	std::sort(_span.begin(), _span.end());
	int min = _span[1] - _span[0];
	for (unsigned int i = 1; i < _span.size() - 1; i++)
	{
		if (min > (_span[i + 1] - _span[i]))
			min = _span[i + 1] - _span[i];
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