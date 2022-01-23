#include "Fixed.hpp"

Fixed::Fixed(void) : fixedPoint(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& ref)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = ref;
}

Fixed&	Fixed::operator=(const Fixed& ref)
{
	std::cout << "Assignation operator called" << std::endl;
	fixedPoint = ref.getRawBits();
	return *this;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits memeber function called" << std::endl;
	return fixedPoint;
}

void	Fixed::setRawBits(int const raw)
{
	fixedPoint = raw;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}
