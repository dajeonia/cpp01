#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>

int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cerr << "mySed: invalid argument" << std::endl;
		return (1);
	}

	std::ifstream is;
	is.open(argv[1]);
	if (!is.is_open())
	{
		std::cerr << "mySed: Cannot open the file" << std::endl;
		return (1);
	}

	std::ofstream os(std::string(argv[1]) + ".replace");
	char c;
	while (true)
	{
		is.get(c);
		if (is.eof())
			break ;
		if (c != argv[2][0])
			os << c;
		else
		{
			std::stringstream ss;
			ss << c;
			if (!is.eof())
			{
				for (int i=1; argv[2][i]; ++i)
				{
					is.get(c);
					ss << c;
					if (c != argv[2][i])
						break ;
				}
			}
			if (ss.str() == std::string(argv[2]))
				os << argv[3];
			else
				os << ss.str();
		}
	}
	return (0);
}
