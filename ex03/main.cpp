#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int	main(void)
{
	{
		Weapon club("crude spiked club");

		HumanA bob("Bob", club);
		bob.attack();
		club.setType("M4A1");
		bob.attack();
	}
	{
		Weapon club("crude spiked club");

		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("AK47");
		jim.attack();
	}

	return (0);
}
