#include "HumanB.hpp"
#include <iostream>

void	HumanB::attack(void)
{
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

void	HumanB::setWeapon(const Weapon& _weapon)
{
	weapon = &_weapon;
}
