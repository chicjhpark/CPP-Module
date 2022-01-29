#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
    Bureaucrat b("jhpark", 5);
    std::cout << b;

    ShrubberyCreationForm s("tree");
    b.signForm(s);
    b.executeForm(s);

    RobotomyRequestForm r("drill");
    b.signForm(r);
    b.executeForm(r);

    PresidentialPardonForm p("pardon");
    b.signForm(p);
    b.executeForm(p);

    b.downGrade(140);
    b.signForm(s);
    b.executeForm(s);
    b.signForm(r);
    b.executeForm(r);
    b.signForm(p);
    b.executeForm(p);

    return 0;
}
