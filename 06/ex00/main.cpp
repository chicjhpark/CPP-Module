#include "ScalarConversion.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
		std::cout << "Invalid arguments!" << std::endl;
	else
	{
		ScalarConversion	sc(av[1]);

		sc.convertChar();
		sc.convertInt();
		sc.convertFloat();
		sc.convertDouble();
	}
	return 0;
}
