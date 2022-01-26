#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	minion1("minion1");
	DiamondTrap	minion2("minion2");

	std::cout << std::endl;
	minion1.whoAmI();
	minion2.whoAmI();
	std::cout << std::endl;
	std::cout << minion2.getName() << " HP : " << minion2.getHitpoints() << std::endl;
	std::cout << minion2.getName() << " EP : " << minion2.getEnergyPoints() << std::endl;
	std::cout << minion2.getName() << " AD : " << minion2.getAttackDamage() << std::endl;
	std::cout << std::endl;
	minion1.attack(minion2.getName());
	minion2.takeDamage(minion1.getAttackDamage());
	minion2.beRepaired(10);
	std::cout << std::endl;
	minion1.guardGate();
	minion1.highFivesGuys();
	minion2.guardGate();
	minion2.highFivesGuys();
	std::cout << std::endl;
	return 0;
}
