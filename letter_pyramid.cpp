#include <iostream>
#include <string>

int main()
{
	std::string letter{};
	std::string reverse{};

	std::cout << "Enter with a word: ";
	getline(std::cin, letter);

	std::cout << std::endl;

	for (size_t i = 0; i < letter.length(); i++)
	{
		std::string line = letter.substr(0, i + 1) + reverse;
		std::string spaces (letter.size() - reverse.length(), ' ');

		std::cout << spaces + line << std::endl;

		reverse = letter.at(i) + reverse;
	}
}
