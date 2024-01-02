#include <iostream>
#include <fstream>

int	main(void)
{
	std::ifstream file("text");
	char buf[5];

	while (file)
	{
		file.read(buf, 4);
		buf[file.gcount()] = '\0';
		std::cout << buf;
	}
	return (0);
}
