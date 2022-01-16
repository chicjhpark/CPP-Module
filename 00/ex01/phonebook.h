#ifndef __PHONEBOOK_H__
#define __PHONEBOOK_H__

#include "contact.h"

class PhoneBook
{
	private:
		enum
		{
			SIZE = 8
		};
		Contact		Contacts[SIZE];
		static int	num;
		int			idx;
	public:
		PhoneBook();
		void	AddContact();
		void	DisplayAllContacts();
		void	DisplayOneContact();
};

#endif
