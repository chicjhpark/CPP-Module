#include "HumanA.hpp"

HumanA::HumanA(std::string n, Weapon& w) : name(n), weapon(w) {}

void	HumanA::attack(void)
{
	std::cout << name << " attacks with his " << weapon.getType() << std::endl;
}
