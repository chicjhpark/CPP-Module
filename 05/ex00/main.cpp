#include "Bureaucrat.hpp"

int	main(void)
{
    try
    {
        Bureaucrat jhpark("jhpark", 50);
        std::cout << jhpark;

        jhpark.upGrade(44);
        std::cout << jhpark;
        jhpark.downGrade(107);
        std::cout << jhpark;

        Bureaucrat jhpark2("jhpark2", 0);
        std::cout << jhpark2;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
