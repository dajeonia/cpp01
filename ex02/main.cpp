#include <string>
#include <iostream>

int	main(void)
{
	std::string s = "HI THIS IS BRAIN";
	std::string* stringPTR = &s;
	std::string& stringREF = s;
	std::cout << "The memory address of variable: " << &s << std::endl;
	std::cout << "The memory address of stringPTR: " << stringPTR << std::endl;
	std::cout << "The memory address of stringREF: " << &stringREF << std::endl;
	std::cout << "The value of the string variable: " << s << std::endl;
	std::cout << "The value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringPTR: " << stringREF << std::endl;
	return (0);
}
