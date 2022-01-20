#include "Karen.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
		std::cout << "Wrong input!\n";
	else
	{
		Karen	karen;

		karen.complain(argv[1]);
	}
	return (0);
}
