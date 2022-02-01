#ifndef __EASYFIND_HPP__
#define __EASYFIND_HPP__

#include <iostream>

class EasyfindException : public std::exception
{
	public:
		virtual const char* what() const throw()
		{
			return "Can't be found!";
		}
};

template <typename T>
typename T::iterator easyfind(T& container, int val)
{
	typename T::iterator	temp = std::find(container.begin(), container.end(), val);
	if (temp == container.end())
		throw EasyfindException();
	return temp;
}

#endif
