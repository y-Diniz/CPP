#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include "Brain.hpp"
# include <string>

class Animal {

	public:
		Animal();
		virtual ~Animal();
		Animal( const Animal& src );
		Animal& operator=( const Animal& src );
		virtual void makeSound() const;
		const std::string& getType() const;
		virtual Brain* getBrain() const;

	protected:
		std::string type;

};

#endif