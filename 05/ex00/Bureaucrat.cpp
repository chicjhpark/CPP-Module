#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name(""), _grade(150) {}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& ref)
: _name(ref._name), _grade(ref._grade) {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& ref)
{
	_grade = ref._grade;
	return *this;
}

Bureaucrat::~Bureaucrat(void) {}

std::string	Bureaucrat::getName(void) const
{
	return _name;
}

int	Bureaucrat::getGrade(void) const
{
	return _grade;
}

void	Bureaucrat::upGrade(int grade)
{
	if (_grade - grade <= 0)
		throw GradeTooHighException();
	_grade -= grade;
}

void	Bureaucrat::downGrade(int grade)
{
	if (_grade + grade > 150)
		throw GradeTooLowException();
	_grade += grade;
}

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade too low!";
}

std::ostream&	operator<<(std::ostream& o, const Bureaucrat& ref)
{
	o << "<" << ref.getName() << ">, bureaucrat grade <" << ref.getGrade() << ">" << std::endl;
	return o;
}
