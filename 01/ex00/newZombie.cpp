#include "Zombie.hpp"

Zombie*	newZombie(std::string name)
{
	Zombie* ptrZombie = new Zombie(name); // newZombie라는 객체에 좀비 객체를 new로 할당한다.
	return ptrZombie;
}
