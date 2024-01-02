#include "Zombie.hpp"

void	zombieHorde(int N, std::string name)
{
	Zombie *zarr;

	zarr = new Zombie[N];

	for (int i=0; i!=N; ++i)
	{
		zarr[i] = Zombie(name);
		zarr[i].announce();
	}
	delete[] zarr;
	std::cout << "The destructor executed." << std::endl;
}
