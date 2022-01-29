#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target)
: Form("Form", 72, 45), _target(target) {}

RobotomyRequestForm::~RobotomyRequestForm(void) {}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& ref)
{
	Form::operator=(ref);
	_target = ref._target;
	return *this;
}

void	RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
	if (getSign() == false)
		throw ExecutetException();
	else if (getExecuteGrade() < executor.getGrade())
		throw GradeTooLowException();
	else
	{
		srand((unsigned int)time(NULL));
		int	randNum= rand() % 2;
		std::cout << "Dudududududu!" << std::endl;
		if (randNum != 0)
			std::cout << "<" << _target << "> has been robotomized successfully" << std::endl;
		else
			std::cout << "<" << _target << "> failed to robotomized" << std::endl;
	}
}
