#include "Zombie.hpp"

Zombie	*newZombie(std::string name);

void	randomChump(std::string name)
{
	Zombie *zp;

	zp = newZombie(name);
	zp->announce();
	delete zp;
	std::cout << "The destructor executed." << std::endl;
}
