#include "Intern.hpp"

int	main(void)
{
	Bureaucrat	b("jhpark", 1);
	Intern		someRandomIntern;

	Form* rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	b.signForm(*rrf);
	b.executeForm(*rrf);
	Form* scf = someRandomIntern.makeForm("shrubbery creation", "Bender");
	b.signForm(*scf);
	b.executeForm(*scf);
	Form* ppf = someRandomIntern.makeForm("presidential pardon", "Bender");
	b.signForm(*ppf);
	b.executeForm(*ppf);

	delete rrf;
	delete scf;
	delete ppf;
	return 0;
}
