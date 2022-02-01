#ifndef __SPAN_HPP__
#define __SPAN_HPP__

#include <iostream>
#include <vector>

class Span
{
	private:
		std::vector<int>	_nums;
		unsigned int		_size;
		unsigned int		_fill;
	public:
		Span(void); // constructor
		Span(unsigned int n);
		Span(const Span& ref); // copy constructor
		~Span(void); // destructor

		Span&			operator=(const Span& ref);
		unsigned int	getSize(void);
		void			addNumber(int num);
		void			addNumber(unsigned int begin, unsigned int end);
		int				shortestSpan(void);
		int				longestSpan(void);

		class SpanException : public std::exception
		{
			private:
				std::string	_msg;
			public:
				SpanException(std::string msg);
				~SpanException(void) throw();
				virtual const char* what() const throw();
		};
};

#endif
