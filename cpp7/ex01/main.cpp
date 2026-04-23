#include "iter.hpp"

void doubler(int &value)
{
	std::cout << value * 2 << std::endl;
}

int main()
{
	int test[6] = {5, 4, 3, 2, 1};
	char test1[6] = "test";

	iter(test, 6, print<int>);
	std::cout << "---------" << std::endl;
	iter(test, 6, doubler);
	std::cout << "---------" << std::endl;
	iter(test1, 6, print<char>);
}