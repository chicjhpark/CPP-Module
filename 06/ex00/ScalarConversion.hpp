#ifndef __SCALARCONVERSION_HPP__
#define __SCALARCONVERSION_HPP__

#include <iostream>
#include <cmath>

class ScalarConversion
{
	private:
		std::string	_value;
		double		_double;
		bool		_nan;
		bool		_inf;
	public:
		ScalarConversion(void);
		ScalarConversion(std::string val);
		ScalarConversion(const ScalarConversion& ref);
		~ScalarConversion(void);

		ScalarConversion&	operator=(const ScalarConversion& ref);
		void				convertChar(void);
		void				convertInt(void);
		void				convertFloat(void);
		void				convertDouble(void);

		class ConversionException : public std::exception
		{
			private:
				std::string	_msg;
			public:
				ConversionException(std::string msg);
				const char* what() const throw();
				~ConversionException() throw();
		};
};

#endif
