#ifndef __DIAMONDTRAP_HPP__
#define __DIAMONDTRAP_HPP__

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string	_name;
	public:
		DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap& ref);
		~DiamondTrap(void);

		DiamondTrap&	operator=(const DiamondTrap& ref);
		void			attack(std::string const& target);
		void			whoAmI(void);
};

#endif
