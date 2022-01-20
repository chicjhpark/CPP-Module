#include "Karen.hpp"

Karen::Karen()
{
	f[0] = &Karen::debug;
	f[1] = &Karen::info;
	f[2] = &Karen::warning;
	f[3] = &Karen::error;
}

void	Karen::debug(void)
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void	Karen::complain(std::string level)
{
	std::string		levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	std::string*	temp = std::find(levels, levels + 4, level); // 첫번째로 일치하는 원소의 반복자를 반환한다.
	int				idx = std::distance(levels, temp); // 반복자 temp와 그 원소의 첫번째인 levels의 거리를 반환한다.

	switch (idx)
	{
		case 0:
			(this->*f[idx])();
			break ;
		case 1:
			(this->*f[idx])();
			break ;
		case 2:
			(this->*f[idx])();
			break ;
		case 3:
			(this->*f[idx])();
			break ;
		default:
			break;
	}
}
