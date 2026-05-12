#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <string>
#include <stack>

class RPN
{
private:
	std::stack<int> _numbers;
public:
	RPN(/* args */);
	RPN(const RPN &obj);
	RPN &operator=(const RPN &obj);
	~RPN();

	std::stack<int> &numbers();
	std::stack<char> &signs();

	template <typename T>
	void printstack(std::stack<T> content);


	int resolve(int a, int b, char sign);
};


#endif