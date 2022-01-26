#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
: _name("default"), _hitpoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
: _name(name), _hitpoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap <" << _name << "> constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& ref)
{
	std::cout << "ClapTrap <" << ref._name << "> copy constructor called" << std::endl;
	*this = ref;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap <" << _name << "> destructor called" << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& ref)
{
	std::cout << "ClapTrap <" << ref._name << "> assignation operator called" << std::endl;
	_name = ref._name;
	_hitpoints = ref._hitpoints;
	_energyPoints = ref._energyPoints;
	_attackDamage = ref._attackDamage;
	return *this;
}

void	ClapTrap::setName(std::string name)
{
	_name = name;
}

void	ClapTrap::setHitpoints(unsigned int amount)
{
	_hitpoints = amount;
}

void	ClapTrap::setEnergyPoints(unsigned int amount)
{
	_energyPoints = amount;
}

void	ClapTrap::setAttackDamage(unsigned int amount)
{
	_attackDamage = amount;
}

std::string		ClapTrap::getName(void)
{
	return _name;
}

unsigned int	ClapTrap::getHitpoints(void)
{
	return _hitpoints;
}

unsigned int	ClapTrap::getEnergyPoints(void)
{
	return _energyPoints;
}

unsigned int	ClapTrap::getAttackDamage(void)
{
	return _attackDamage;
}

void	ClapTrap::attack(std::string const& target)
{
	std::cout << "ClapTrap <" << _name << "> attack <" << target << ">, causing <" << _attackDamage << "> points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) //
{
	std::cout << "ClapTrap <" << _name << "> take damage of <" << amount << ">" << std::endl;
	if (_hitpoints <= amount)
	{
		_hitpoints = 0;
		std::cout << "ClapTrap <" << _name << "> has been died." << std::endl;
	}
	else
	{
		_hitpoints -= amount;
		std::cout << "ClapTrap <" << _name << "> hitpoints is <" << _hitpoints << ">" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap <" << _name << "> be repaired of <" << amount << ">" << std::endl;
	_hitpoints += amount;
	std::cout << "ClapTrap <" << _name << "> hitpoints is <" << _hitpoints << ">" << std::endl;
}


