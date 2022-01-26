#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	setHitpoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	setHitpoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
	std::cout << "FragTrap <" << name << "> constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& ref) : ClapTrap(ref)
{
	std::cout << "FragTrap <" << getName() << "> copy constructor called" << std::endl;
	*this = ref;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap <" << getName() << "> destructor called" << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& ref)
{
	std::cout << "FragTrap <" << getName() << "> assignation operator called" << std::endl;
	ClapTrap::operator=(ref);
	return *this;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap <" << getName() << "> a positive high fives request" << std::endl;
}
