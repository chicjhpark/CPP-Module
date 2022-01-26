#ifndef __SCAVTRAP_HPP__
#define __SCAVTRAP_HPP__

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& ref);
		~ScavTrap(void);
		ScavTrap&	operator=(const ScavTrap& ref);

		void	attack(std::string const& target);
		void	guardGate(void);
};

#endif
