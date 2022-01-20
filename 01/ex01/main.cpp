#include "Zombie.hpp"

int	main(void)
{
	int	num = 5;
	Zombie*	zombies = zombieHorde(num, "zombie");

	for (int i = 0; i < num; i++)
	{
		zombies[i].Announce();
	}
	delete[] zombies;

	return (0);
}
