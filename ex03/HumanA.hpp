#ifndef HUMANA_HPP
# define HUMANA_HPP
# include <string>
# include "Weapon.hpp"

class HumanA {
	std::string name;
	const Weapon& weapon;
public:
	HumanA(const std::string&, const Weapon&);
	void	attack(void);
};
#endif
