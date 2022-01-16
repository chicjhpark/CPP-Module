#include "phonebook.h"

int	main(void)
{
	std::string	input;
	PhoneBook	PhoneBook;

	while (true)
	{
		std::cout << "MENU : ADD, SEARCH, EXIT" << std::endl;
		std::cout << "Input : ";
		std::cin >> input;
		if (input == "ADD")
			PhoneBook.AddContact();
		else if (input == "SEARCH")
		{

		}
		else if (input == "EXIT" || input == "")
			break ;
		else
			std::cout << "WRONG COMMAND!" << std::endl;
		system("leaks phonebook");
	}
	return (0);
}
