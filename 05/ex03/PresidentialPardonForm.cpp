#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target)
: Form("Form", 25, 5), _target(target) {}

PresidentialPardonForm::~PresidentialPardonForm(void) {}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& ref)
{
	Form::operator=(ref);
	_target = ref._target;
	return *this;
}

void	PresidentialPardonForm::execute(Bureaucrat const& executor) const
{
	if (getSign() == false)
		throw ExecutetException();
	else if (getExecuteGrade() < executor.getGrade())
		throw GradeTooLowException();
	else
		std::cout << "<" << _target << "> has been pardoned by Zafod Beeblebrox." << std::endl;
}
