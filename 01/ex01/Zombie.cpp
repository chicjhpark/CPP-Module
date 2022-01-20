#include "Zombie.hpp"

Zombie::Zombie(void) {}

Zombie::Zombie(std::string str) : name(str) {}

void	Zombie::Announce(void)
{
	std::cout << '<' << name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::giveName(std::string str)
{
	name = str;
}

Zombie::~Zombie(void)
{
	std::cout << name << " is dead." << std::endl;
}
