#include "Zombie.hpp"

Zombie	*newZombie(std::string name)
{
	Zombie *zp;

	zp = new Zombie(name);
	return (zp);
}
