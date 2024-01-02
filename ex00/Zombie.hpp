#ifndef ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie {
	std::string name;
public:
	Zombie() {}
	Zombie(const std::string n) { name = n; }
	Zombie	&operator=(const Zombie &z);
	Zombie(const Zombie &z) { *this = z; }
	~Zombie() {}

	void announce(void);
};

Zombie	*newZombie(std::string);
void 	randomChump(std::string);

#endif
