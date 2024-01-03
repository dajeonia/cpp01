#include <iostream>
#include "Harl.hpp"

int	harl_find(std::string array[4], std::string str);

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cerr << "harlFilter: invalid argument" << std::endl;
		return (1);
	}
	if (Harl::find(argv[1]) == -1)
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	else
	{
		switch (Harl::find(argv[1])) {
		case 0:
			Harl::complain("INFO");
			std::cout << std::endl;
		case 1:
			Harl::complain("DEBUG");
			std::cout << std::endl;
		case 2:
			Harl::complain("WARNING");
			std::cout << std::endl;
		case 3:
			Harl::complain("ERROR");
			std::cout << std::endl;
		}
	}
	return (0);
}

