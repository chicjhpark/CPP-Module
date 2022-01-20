#include <iostream>

int	main(void)
{
	std::string		stringORG = "HI THIS IS BRAIN";
	std::string*	stringPTR = &stringORG;
	std::string&	stringREF = stringORG;

	std::cout << "stringORG addr : " << &stringORG << std::endl;
	std::cout << "stringPTR addr : " << stringPTR << std::endl;
	std::cout << "stringREF addr : " << &stringREF << std::endl;

	std::cout << "stringPTR : " << *stringPTR << std::endl;
	std::cout << "stringREF : " << stringREF << std::endl;

	return (0);
}
