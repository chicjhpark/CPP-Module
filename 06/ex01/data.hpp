#ifndef __DATA_HPP__
#define __DATA_HPP__

#include <iostream>

struct Data
{
	char test[10];
};

uintptr_t	serialize(Data* ptr);
Data*		deserialize(uintptr_t raw);

#endif
