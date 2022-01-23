#ifndef __FIXED_HPP__
#define __FIXED_HPP__

#include <iostream>

class Fixed
{
	private:
		int					fixedPoint; // 고정 소수점
		static const int	fracBits = 8; // 소수 비트 수
	public:
		Fixed(void); // constructor
		Fixed(const Fixed& ref); // copy constructor
		Fixed&	operator=(const Fixed& ref); // assignation operator
		int		getRawBits(void) const; // returns the raw value of the fixed point
		void	setRawBits(int const raw); // sets the raw value of the fixed point
		~Fixed(); // destructor
};

#endif
