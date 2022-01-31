#ifndef __ITER_HPP__
#define __ITER_HPP__

#include <iostream>

template <typename T>
void	iter(T* arr, int len, void (*f)(T&))
{
	for (int i = 0; i < len; i++)
	{
		f(arr[i]);
	}
}

template <typename T>
void	increase(T& val)
{
	val++;
}

template <typename T>
void	decrease(T& val)
{
	val--;
}

template <typename T>
void	printVal(T& val)
{
	std::cout << val << std::endl;
}

#endif
