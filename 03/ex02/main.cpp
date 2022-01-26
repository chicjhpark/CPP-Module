#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	minion1("minion1");
	FragTrap	minion2("minion2");

	std::cout << minion2.getName() << " HP : " << minion2.getHitpoints() << std::endl;
	minion1.attack(minion2.getName());
	minion2.takeDamage(minion1.getAttackDamage());
	minion2.beRepaired(10);

	minion1.highFivesGuys();
	minion2.highFivesGuys();

	return 0;
}
