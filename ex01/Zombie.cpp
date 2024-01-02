#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie	&Zombie::operator=(const Zombie &z)
{
	if (this == &z)
		return (*this);
	name = z.name;
	return (*this);
}
