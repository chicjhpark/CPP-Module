#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	minion1("minion1");
	ScavTrap	minion2("minion2");

	std::cout << minion2.getName() << " HP : " << minion2.getHitpoints() << std::endl;
	minion1.attack(minion2.getName());
	minion2.takeDamage(minion1.getAttackDamage());
	minion2.beRepaired(10);

	minion1.guardGate();
	minion2.guardGate();

	return 0;
}
