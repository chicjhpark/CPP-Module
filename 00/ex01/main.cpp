#include "phonebook.h"

int	main(void)
{
	std::string	input;
	PhoneBook	PhoneBook;

	while (true)
	{
		std::cout << "________________________" << std::endl << std::endl;
		std::cout << "COMMAND : ADD, SEARCH, EXIT" << std::endl;
		std::cout << "________________________" << std::endl << std::endl;
		std::cout << "Input : ";
		std::cin >> input;
		if (std::cin.fail())
			exit (1);
		else if (input == "EXIT")
			break ;
		else if (input == "ADD")
			PhoneBook.AddContact();
		else if (input == "SEARCH")
		{
			PhoneBook.DisplayAllContacts();
			PhoneBook.DisplayOneContact();
		}
		else
			std::cout << "Error : Wrong input!" << std::endl;
		input = "";
	}
	return (0);
}
