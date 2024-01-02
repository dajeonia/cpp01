#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>

class Weapon {
	std::string type;
public:
	Weapon() {}
	Weapon(const std::string& _type) : type(_type) {}
	Weapon& operator=(const Weapon&);
	Weapon(const Weapon& w) { *this = w; }
	~Weapon() {}
	const std::string& getType(void) const;
	void setType(const std::string&);
};
#endif
