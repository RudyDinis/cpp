#include "main.hpp"

void replace(std::string *text, std::string s1, std::string s2)
{
	int pos = 0;
	while ((pos = text->find(s1, pos)) != std::string::npos)
	{
		text->insert(pos, s2);
		text->erase(pos + s2.length(), s1.length());
		pos += s2.length();
	}
}

void openFile(std::string filename, std::string s1, std::string s2)
{
	std::string text;
	std::ifstream file(filename);

	if (!file.is_open())
	{
		errorHandler(1);
		if (file.fail())
		{
			std::cout << "Error details : " << std::strerror(errno) << std::endl;
			return;
		}
	}
	std::ofstream ofs(filename + ".replace");
	if (!ofs.is_open())
	{
		errorHandler(1);
		if (file.fail())
		{
			std::cout << "Error details : " << std::strerror(errno) << std::endl;
			return;
		}
	}
	while (std::getline(file, text))
	{
		replace(&text, s1, s2);
		ofs << text << std::endl;
	}
}

int main(int argc, char **argv)
{
	if (argc != 4)
		return (errorHandler(0), 1);
	openFile(argv[1], argv[2], argv[3]);
}