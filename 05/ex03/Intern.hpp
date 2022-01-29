#ifndef __INTERN_HPP__
#define __INTERN_HPP__

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	public:
		Form*	makeForm(std::string name, std::string target);
};

#endif
