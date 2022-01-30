#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base(void)
{
	std::cout << "Base destructor called" << std::endl;
}

Base*	generate(void)
{
	srand((unsigned int)time(NULL));
	int	idx = rand() % 3;

	switch (idx)
	{
		case 0:
			return new A;
		case 1:
			return new B;
		default:
			return new C;
	}
}

void	identify(Base* p)
{
	A*	a = dynamic_cast<A*>(p);
	if (a)
	{
		std::cout << "It's A" << std::endl;
		return ;
	}

	B*	b = dynamic_cast<B*>(p);
	if (b)
	{
		std::cout << "It's B" << std::endl;
		return ;
	}

	C*	c = dynamic_cast<C*>(p);
	if (c)
	{
		std::cout << "It's C" << std::endl;
		return ;
	}
}

void	identify(Base& p)
{
	A	a;
	try
	{
		a = dynamic_cast<A&>(p);
		std::cout << "It's A" << std::endl;
		return ;
	}
	catch (std::bad_cast& e)
	{}

	B	b;
	try
	{
		b = dynamic_cast<B&>(p);
		std::cout << "It's B" << std::endl;
		return ;
	}
	catch (std::bad_cast& e)
	{}

	C	c;
	try
	{
		c = dynamic_cast<C&>(p);
		std::cout << "It's C" << std::endl;
		return ;
	}
	catch (std::bad_cast& e)
	{}
}
