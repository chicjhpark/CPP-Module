#ifndef __ZOMBIE_HPP__
#define __ZOMBIE_HPP__

#include <iostream>

class Zombie
{
	private:
		std::string	name; // 좀비 객체의 이름
	public:
		Zombie(std::string str); // 좀비 생성자
		void	Announce(void); // 좀비가 자기소개를 한다.
		~Zombie(); // 좀비 소멸자
};

Zombie*	newZombie(std::string name); // new를 사용해서 좀비 객체를 생성한다.
void	randomChump(std::string name); // 좀비를 생성하고 자기소개를 한다.

#endif
