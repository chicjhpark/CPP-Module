#include "contact.h"

void	Contact::SetFirstName(std::string str)
{
	if (std::cin.fail())
		exit (1);
	firstName = str;
}

void	Contact::SetLastName(std::string str)
{
	if (std::cin.fail())
		exit (1);
	lastName = str;
}

void	Contact::SetNickname(std::string str)
{
	if (std::cin.fail())
		exit (1);
	nickname = str;
}

void	Contact::SetPhoneNumber(std::string str)
{
	if (std::cin.fail())
		exit (1);
	phoneNumber = str;
}

void	Contact::SetDarkestSecret(std::string str)
{
	if (std::cin.fail())
		exit(1);
	darkestSecret = str;
}

Contact::Contact(void)
{
	SetFirstName("");
	SetLastName("");
	SetNickname("");
	SetPhoneNumber("");
	SetDarkestSecret("");
}

std::string	Contact::GetFirstName(void)
{
	return firstName;
}

std::string	Contact::GetLastName(void)
{
	return lastName;
}

std::string	Contact::GetNickname(void)
{
	return nickname;
}

std::string	Contact::GetPhoneNumber(void)
{
	return phoneNumber;
}

std::string	Contact::GetDarkestSecret(void)
{
	return darkestSecret;
}
