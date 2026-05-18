#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

Form::Form() : name_( "Unknow" ), grade_to_sign_( 1 ), grade_to_exec_( 1 ), signed_( false ) {
	std::cout << "Form Constructor default called" << std::endl;
}

Form::~Form() {
	std::cout << "Form Destructor called" << std::endl;
}

Form::Form( const std::string name, const int grade_to_sign, const int grade_to_exec ) : name_( name ), grade_to_sign_( grade_to_sign ), grade_to_exec_( grade_to_exec ), signed_( false ) {
	std::cout << "Form Constructor called" << std::endl;

	if ( grade_to_sign < 1 || grade_to_exec < 1 )
		throw GradeTooHighException();
	if ( grade_to_sign > 150 || grade_to_exec > 150 )
		throw GradeTooLowException();
}

Form::Form( const Form& src ) : name_( src.name_ ), grade_to_sign_( src.grade_to_sign_ ), grade_to_exec_( src.grade_to_exec_ ), signed_( src.signed_ ) {
	std::cout << "Form Copy constructor called" << std::endl;
}

Form& Form::operator=( const Form& src ) {
	std::cout << "Form Operator= called" << std::endl;

	if (this != &src)
		signed_ = src.signed_;
	return *this;
}

const std::string& Form::getName() const {
	return name_;
}

bool Form::isSigned() const {
	return signed_;
}

int Form::getGradeToSign() const {
	return grade_to_sign_;
}

int Form::getGradeToExecute() const {
	return grade_to_exec_;
}


void Form::beSigned( const Bureaucrat& b ) {
	if ( b.getGrade() > grade_to_sign_ )
		throw GradeTooLowException();
	signed_ = true;
}

const char* Form::GradeTooHighException::what( ) const throw( ) {
	return "grade is too high";
}

const char* Form::GradeTooLowException::what( ) const throw( ) {
	return "grade is too low";
}

std::ostream& operator<<( std::ostream& out, const Form& f ) {
	out << "Form: " << f.getName()  << "; Grade to sign: " << f.getGradeToSign() << "; Grade to exec: " << f.getGradeToExecute() << "; Is signed: " << f.isSigned();
	return out;
}