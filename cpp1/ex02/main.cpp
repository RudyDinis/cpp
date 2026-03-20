#include <iostream>
#include <string>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string* strPTR = &str;
	std::string& strREF = str;

	std::cout << &str << " | " << &strPTR << " | " << &strREF << std::endl;
	std::cout << str << " | " << strPTR << " | " << strREF << std::endl;
	return 0;
}