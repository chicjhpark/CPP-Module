#include "Zombie.hpp"

Zombie::Zombie(std::string str) : name(str) {}

void	Zombie::Announce(void)
{
	std::cout << '<' << name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << name << " is dead." << std::endl;
}
