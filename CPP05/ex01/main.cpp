#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main() {

	{
		try {

			Bureaucrat p("Pam Beesly", 2);
			Form f( "form1", 3, 2 );
			std::cout << f << std::endl;
   			p.signForm(f);
			std::cout << f << std::endl;

		} catch (std::exception& e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		try {

			Bureaucrat d("Dwight Schrute", 150);
			Form f( "form2", 20, 50 );
			std::cout << f << std::endl;
   			d.signForm(f);
			std::cout << f << std::endl;

		} catch (std::exception& e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		try {

			Form f( "form3", 1, 200 );
			std::cout << f << std::endl;

		} catch (std::exception& e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		try {

			Form f( "form4", 0, 70 );
			std::cout << f << std::endl;

		} catch (std::exception& e) {
			std::cout << e.what() << std::endl;
		}
	}

	return 0;
}