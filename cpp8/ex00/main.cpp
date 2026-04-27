#include "easyfind.hpp"

int main()
{
	std::vector<int> test;
	test.push_back(1);
	test.push_back(2);
	test.push_back(3);
	test.push_back(4);
	test.push_back(5);

	std::vector<char> test2;
	test2.push_back('a');
	test2.push_back('b');
	test2.push_back('c');
	test2.push_back('d');
	test2.push_back('e');

	std::deque<int> test3;
	test3.push_back(1);
	test3.push_back(2);
	test3.push_back(3);
	test3.push_back(4);
	test3.push_back(5);

	try
	{
		std::cout << easyfind(test, 2) << std::endl;
		std::cout << easyfind(test, 6) << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << "--------------" << std::endl;

		std::cout << easyfind(test2, 'a') << std::endl;
		std::cout << easyfind(test2, 'z') << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << "--------------" << std::endl;

		std::cout << easyfind(test3, 2) << std::endl;
		std::cout << easyfind(test3, 6) << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}