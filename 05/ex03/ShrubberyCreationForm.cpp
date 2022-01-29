#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
: Form("Form", 145, 137), _target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& ref)
{
	Form::operator=(ref);
	_target = ref._target;
	return *this;
}

void	ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
	if (getSign() == false)
		throw ExecutetException();
	else if (getExecuteGrade() < executor.getGrade())
		throw GradeTooLowException();
	else
	{
		std::ofstream newFile(_target + "_shrubbery");
		if (newFile.is_open())
		{
			newFile << SHRUBBERY;
			newFile.close();
		}
		else
			std::cout << "open error!" << std::endl;
	}
}
