#include "Fixed.hpp"

Fixed::Fixed(void) : fixedPoint(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int digit)
{
	std::cout << "Int constructor called" << std::endl;
	fixedPoint = digit << fracBits; // 소수 비트 부분만큼 밀어준다.
}

Fixed::Fixed(const float digit)
{
	std::cout << "Float constructor called" << std::endl;
	fixedPoint = (int)roundf(digit * (1 << fracBits)); // 지수부에 소수 비트만큼 곱해준다.
}

Fixed::Fixed(const Fixed& ref)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = ref;
}

Fixed&	Fixed::operator=(const Fixed& ref)
{
	std::cout << "Assignation operator called" << std::endl;
	fixedPoint = ref.fixedPoint;
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

float	Fixed::toFloat(void) const
{
	return (float)fixedPoint / (1 << fracBits);
}

int		Fixed::toInt(void) const
{
	return fixedPoint >> fracBits; // 다시 소수 비트만큼 당겨온다.
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

std::ostream&	operator<<(std::ostream& outStream, const Fixed& fixed)
{
	outStream << fixed.toFloat();
	return outStream; // outStream을 반환해야 그 후에도 계속 쓸 수 있다.
}
