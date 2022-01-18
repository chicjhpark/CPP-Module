#ifndef __PHONEBOOK_H__
#define __PHONEBOOK_H__

#include <iomanip>
#include <sstream>
#include "contact.h"

class PhoneBook
{
	private:
		enum
		{
			SIZE = 8
		};
		Contact		Contacts[SIZE];
		int			num;
		int			idx;
	public:
		PhoneBook();
		void	AddContact();
		void	DisplayContactForm(std::string str, bool end);
		void	DisplayAllContacts();
		void	DisplayOneContact();
};

#endif
