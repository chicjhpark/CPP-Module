#ifndef __ARRAY_HPP__
#define __ARRAY_HPP__

#include <iostream>

template <typename T>
class Array
{
	private:
		T*				_arr;
		unsigned int	_size;
	public:
		Array(void);
		Array(unsigned int n);
		Array(const Array& ref);
		~Array(void);

		Array&			operator=(const Array& ref);
		T&				operator[](unsigned int idx);
		unsigned int	size(void) const;

		class ArrayException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

template <typename T>
Array<T>::Array(void) : _arr(NULL), _size(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : _size(n)
{
	_arr = new T[n];
}

template <typename T>
Array<T>::Array(const Array& ref) : _size(ref._size)
{
	_arr = new T[_size];
	for (unsigned int i = 0; i < _size; i++)
	{
		_arr[i] = ref._arr[i];
	}
}

template <typename T>
Array<T>::~Array(void)
{
	delete[] _arr;
}

template <typename T>
Array<T>&	Array<T>::operator=(const Array& ref)
{
	delete[] _arr;

	_size = ref._size;
	_arr = new T[_size];
	for (unsigned int i = 0; i < _size; i++)
	{
		_arr[i] = ref._arr[i];
	}
	return *this;
}

template <typename T>
T&	Array<T>::operator[](unsigned int idx)
{
	if (idx >= _size || idx < 0)
		throw ArrayException();
	return _arr[idx];
}

template <typename T>
unsigned int	Array<T>::size(void) const
{
	return _size;
}

template <typename T>
const char*	Array<T>::ArrayException::what(void) const throw()
{
	return "Invalid index!";
}

#endif
