#ifndef __CLAPTRAP_HPP__
#define __CLAPTRAP_HPP__

#include <iostream>

class ClapTrap
{
	private:
		std::string		_name;
		unsigned int	_hitpoints; // HP
		unsigned int	_energyPoints; // MP
		unsigned int	_attackDamage;
	public:
		ClapTrap(void); // default constructor
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& ref); // copy constructor
		~ClapTrap(void); // destructor
		ClapTrap&		operator=(const ClapTrap& ref); // assignation operator

		void			setName(std::string name);
		void			setHitpoints(unsigned int amount);
		void			setEnergyPoints(unsigned int amount);
		void			setAttackDamage(unsigned int amount);

		std::string		getName(void);
		unsigned int	getHitpoints(void);
		unsigned int	getEnergyPoints(void);
		unsigned int	getAttackDamage(void);

		void			attack(std::string const& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);


};

#endif
