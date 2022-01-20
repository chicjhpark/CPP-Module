#ifndef __KAREN_HPP__
#define __KAREN_HPP__

#include <iostream>
#include <algorithm> // std::find
#include <vector>

class Karen
{
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
		void	(Karen::*f[4])(void); // 멤버함수 포인터는 클래스를 직접 명시해야한다.
	public:
		Karen();
		void	complain(std::string level);
};

#endif
