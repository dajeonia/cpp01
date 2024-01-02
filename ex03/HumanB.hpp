#ifndef HUMANB_HPP
# define HUMANB_HPP
# include <string>
# include "Weapon.hpp"

class HumanB {
	std::string name;
	const Weapon* weapon;
public:
	HumanB() {}
	HumanB(const std::string& _name) : name(_name) {}
	~HumanB() {}

	void	setWeapon(const Weapon&);
	void	attack(void);
};
#endif
