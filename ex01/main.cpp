#include "Zombie.hpp"
#include <iostream>

Zombie *zombieHorde(int, std::string);

int	main(void)
{
	Zombie *horde = zombieHorde(5, "Zombie");
	for (int i=0; i!=5; ++i)
		horde[i].announce();

	delete[] horde;
	std::cout << "The destructor executed." << std::endl;
	return (0);
}
