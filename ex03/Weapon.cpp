#include "Weapon.hpp"

const	std::string& Weapon::getType(void) const
{
	return (type);
}

void	Weapon::setType(const std::string& _type)
{
	type = _type;
}

Weapon& Weapon::operator=(const Weapon& w)
{
	if (this == &w)
		return (*this);
	this->type = w.type;
	return (*this);
}
