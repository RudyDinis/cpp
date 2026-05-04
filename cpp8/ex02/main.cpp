#include "MutantStack/MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	MutantStack<std::string> sstack;
	sstack.push("hello");
	sstack.push("world");
	sstack.push("42");
	MutantStack<std::string>::iterator sit = sstack.begin();
	while (sit != sstack.end())
		std::cout << *sit++ << std::endl;

	const MutantStack<int> cmstack(mstack);
	MutantStack<int>::const_iterator cit = cmstack.begin();
	while (cit != cmstack.end())
		std::cout << *cit++ << std::endl;
	return 0;
}