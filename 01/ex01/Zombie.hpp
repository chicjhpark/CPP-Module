#ifndef __ZOMBIE_HPP__
#define __ZOMBIE_HPP__

#include <iostream>

class Zombie
{
	private:
		std::string	name;
	public:
		Zombie();
		Zombie(std::string str);
		void	giveName(std::string str);
		void	Announce(void);
		~Zombie();
};

Zombie*	zombieHorde(int N, std::string name);

#endif
