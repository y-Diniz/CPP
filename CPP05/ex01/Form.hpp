#ifndef FORM_HPP
# define FORM_HPP

# include <string>

class Bureaucrat; 

class Form {

	private:
		const std::string name_;
		const int grade_to_sign_;
		const int grade_to_exec_;
		bool signed_;

	public:
		Form();
		~Form();
		Form( const std::string name, const int grade_to_sign, const int grade_to_exec );
		Form( const Form& src );
		Form& operator=( const Form& src );
		const std::string& getName() const;
		bool isSigned() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;
		void beSigned( const Bureaucrat& b );

		class GradeTooHighException : public std::exception {
			public:
				const char* what() const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				const char* what() const throw();
		};
};

std::ostream& operator<<( std::ostream& out, const Form& f );

#endif