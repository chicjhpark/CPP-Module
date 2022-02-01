#include "easyfind.hpp"
#include <vector>

int	main(void)
{
	std::vector<int>			num;
	std::vector<int>::iterator	iter;

	num.push_back(-42);
	num.push_back(0);
	num.push_back(42);
	num.push_back(4242);

	try
	{
		iter = easyfind(num, 42);
		std::cout << *iter << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}
