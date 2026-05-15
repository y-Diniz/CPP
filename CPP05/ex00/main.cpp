#include "Bureaucrat.hpp"
#include <iostream>

int main () {

	{
		Bureaucrat b;
		std::cout << b << std::endl;
	}

	{
		try {

			Bureaucrat a("Pam Beesly", 2);
			std::cout << a << std::endl;
			a.incrementGrade();
			std::cout << a << std::endl;
			a.incrementGrade();
			std::cout << a << std::endl;

		} catch (std::exception& e) {
			std::cout << e.what() << std::endl;
		}
	}

	{
		try {

			Bureaucrat b("Dwight Schrute", 150);
			std::cout << b << std::endl;
			b.incrementGrade();
			std::cout << b << std::endl;
			b.decrementGrade();
			std::cout << b << std::endl;
			b.decrementGrade();
			std::cout << b << std::endl;

		} catch (std::exception& e) {
			std::cout << e.what() << std::endl;
		}
	}

	return 0;
}