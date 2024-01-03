#ifndef HARL_HPP
# define HARL_HPP
# include <string>
# include <iostream>

class Harl {
	static void debug(void);
	static void info(void);
	static void warning(void);
	static void error(void);
public:
	static void complain(std::string);
};

#endif
