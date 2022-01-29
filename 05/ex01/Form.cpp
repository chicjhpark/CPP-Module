#include "Form.hpp"

Form::Form(void)
: _name(""), _isSigned(false), _signGrade(50), _executeGrade(20) {}

Form::Form(const Form& ref)
: _name(ref._name), _isSigned(false), _signGrade(ref._signGrade), _executeGrade(ref._executeGrade) {}

Form::Form(std::string name, int signGrade, int executeGrade)
: _name(name), _isSigned(false), _signGrade(signGrade), _executeGrade(executeGrade)
{
	if (_signGrade < 1 || _executeGrade < 1)
		throw GradeTooHighException();
	else if (_signGrade > 150 || _executeGrade > 150)
		throw GradeTooLowException();
}

Form& Form::operator=(const Form& ref)
{
	_isSigned = ref._isSigned;
	return *this;
}

Form::~Form(void) {}

std::string	Form::getName(void) const
{
	return _name;
}

bool	Form::getSign(void) const
{
	return _isSigned;
}

int	Form::getSignGrade(void) const
{
	return _signGrade;
}

int	Form::getExecuteGrade(void) const
{
	return _executeGrade;
}

bool	Form::beSigned(const Bureaucrat& sign)
{
	if (sign.getGrade() <= _signGrade)
		_isSigned = true;
	else
		_isSigned = false;
	return _isSigned;
}

const char*	Form::GradeTooHighException::what() const throw()
{
	return "Grade too high!";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Grade too low!";
}

std::ostream&	operator<<(std::ostream& o, const Form& ref)
{
	o << "<" << ref.getName() << ">, form sign grade <" << ref.getSignGrade() << "> form execute grade <"
	<< ref.getExecuteGrade() << ">" << std::endl;
	return o;
}
