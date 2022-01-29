#ifndef __BUREAUCRAT_HPP__
#define __BUREAUCRAT_HPP__

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;
	public:
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat& ref);
		~Bureaucrat(void);

		Bureaucrat& operator=(const Bureaucrat& ref);
		std::string	getName(void) const;
		int			getGrade(void) const;
		void		upGrade(int grade);
		void		downGrade(int grade);
		void		signForm(Form& form);

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
};

std::ostream&	operator<<(std::ostream& o, const Bureaucrat& ref);

#endif
