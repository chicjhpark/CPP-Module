#ifndef __WEAPON_HPP__
#define __WEAPON_HPP__

#include <iostream>

class Weapon
{
	private:
		std::string	type; // weapon type
	public:
		Weapon(std::string t);
		const std::string&	getType();
		void				setType(std::string t);
};

#endif
