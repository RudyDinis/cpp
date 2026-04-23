#include "Serialization/Serialization.hpp"
#include "data.hpp"

int main(void)
{
	Data test;
	test.value = 1;

	std::cout << &test << std::endl;
	std::cout << test.value << std::endl;
	uintptr_t raw = Serialization::serialize(&test);
	std::cout << raw << std::endl;

	Data* result = Serialization::deserialize(raw);
	std::cout << result << std::endl;

	if (result == &test)
	{
		std::cout << "equal" << std::endl;
	}

	std::cout << result->value << std::endl;
}