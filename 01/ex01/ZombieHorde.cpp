#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie*	zombies = new Zombie[N];
	std::string	temp;

	for (int i = 0; i < N; i++)
	{
		temp = name;
		name += i + '1';
		zombies[i].giveName(name);
		name = temp;
	}
	return zombies;
}
