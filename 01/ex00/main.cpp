#include "Zombie.hpp"

int	main(void)
{
	Zombie	zombie("zombie"); // 입력한 문자열로 좀비 객체의 이름을 정의한다.

	zombie.Announce(); // 좀비가 자기소개를 한다.

	Zombie*	zombie2 = newZombie("zombie2"); // new를 사용해서 좀비를 생성한다.
	zombie2->Announce();
	delete zombie2; // 할당된 좀비를 해제한다.

	randomChump("zombie3"); // 좀비를 생성하고 자기소개를 한다.
	return (0);
}
