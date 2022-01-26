#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	minion1("minion1");
	ClapTrap	minion2("minion2");

	std::cout << minion2.getName() << " HP : " << minion2.getHitpoints() << std::endl;
	minion1.attack(minion2.getName());
	minion2.takeDamage(minion1.getAttackDamage());
	std::cout << minion2.getName() << " HP : " << minion2.getHitpoints() << std::endl;
	minion2.beRepaired(10);
	std::cout << minion2.getName() << " HP : " << minion2.getHitpoints() << std::endl;
	return 0;
}
