#include "Array.hpp"

int	main(void)
{
	Array<int> a;
	Array<int> b(5);
	Array<int> c(b);
	Array<int> d;

	b[0] = 0;
	b[1] = 1;
	b[2] = 2;
	b[3] = 42;
	b[4] = 4242;
	d = b;
	d[0] = -1;
	c[2] = 44;

	for (unsigned int i = 0; i < b.size(); i++)
	{
		std::cout << "b[" << i << "] : " << b[i] << std::endl;
	}
	std::cout << "d[0] : " << d[0] << std::endl;
	std::cout << "c[2] : " << c[2] << std::endl;
	try
	{
		a[0] = 1;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		b[-1] = -1;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}


	return 0;
}
