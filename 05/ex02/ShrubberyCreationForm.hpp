#ifndef __SHRUBBERYCREATIONFORM_HPP__
#define __SHRUBBERYCREATIONFORM_HPP__

#include <fstream>
#include "Form.hpp"

#define SHRUBBERY "\
                   *\n\
                  * *\n\
                 *   *\n\
                *     *\n\
               *       *\n\
              *         *\n\
             *           *\n\
            *             *\n\
           *               *\n\
          * * * * * * * * * *\n\
                   []\n\
                   []\n\
                   []\n\
                   []\n\
                   []\n\
                   []\n"

class ShrubberyCreationForm : public Form
{
	private:
		std::string	_target;
	public:
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm(void);

		ShrubberyCreationForm&	operator=(const ShrubberyCreationForm& ref);
		void					execute(Bureaucrat const& executor) const;
};

#endif
