#include "Form.hpp"

int	main(void)
{
    try
    {
        Bureaucrat jhpark("jhpark", 50);
        Form form("form", 49, 30);

        std::cout << jhpark;
        std::cout << form;
        jhpark.signForm(form);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
