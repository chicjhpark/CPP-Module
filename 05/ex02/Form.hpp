#ifndef __FORM_HPP__
#define __FORM_HPP__

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_signGrade;
		const int			_executeGrade;
	public:
		Form(void);
		Form(std::string name, int signGrade, int execute);
		Form(const Form& ref);
		virtual ~Form(void);

		Form&			operator=(const Form& ref);
		std::string		getName(void) const;
		bool			getSign(void) const;
		int				getSignGrade(void) const;
		int				getExecuteGrade(void) const;
		bool			beSigned(const Bureaucrat& sign);
		virtual void	execute(Bureaucrat const& executor) const = 0;

		class GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		class ExecutetException : public std::exception
		{
			public:
				const char* what() const throw();
		};
};

std::ostream&	operator<<(std::ostream& o, const Form& ref);

#endif
