#include "HumanB.hpp"

HumanB::HumanB(std::string n) : name(n), weapon(NULL) {}

void	HumanB::attack(void)
{
	std::cout << name << " attacks with his ";
	if (weapon == NULL)
		std::cout << "punch" << std::endl;
	else
		std::cout << weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& w)
{
	weapon = &w;
}
