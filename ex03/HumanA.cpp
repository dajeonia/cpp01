#include "HumanA.hpp"
#include <iostream>

void	HumanA::attack(void)
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}

HumanA::HumanA(const std::string& _name, const Weapon& _weapon)
	: name(_name), weapon(_weapon) {}

/*
HumanA::HumanA(const std::string& _name, Weapon& _weapon)
{
	name = _name;
	weapon = _weapon;
}
*/
