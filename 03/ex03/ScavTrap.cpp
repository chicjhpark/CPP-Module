#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	setHitpoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	setHitpoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
	std::cout << "ScavTrap <" << name << "> constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& ref) : ClapTrap(ref)
{// 자식 클래스는 부모 클래스를 상속 받고 있기에 참조가 가능하다.
	std::cout << "ScavTrap <" << getName() << "> copy constructor called" << std::endl;
	*this = ref;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap <" << getName() << "> destructor called" << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& ref)
{
	std::cout << "ScavTrap <" << getName() << "> assignation operator called" << std::endl;
	ClapTrap::operator=(ref);
	return *this;
}

void	ScavTrap::attack(std::string const& target)
{
	std::cout << "ScavTrap <" << getName() << "> attack <" << target << ">, causing <" << getAttackDamage() << "> points of damage!" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap <" << getName() << "> have enterred in Gate keeper mode" << std::endl;
}
