#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include "Brain.hpp"
# include <string>

class AAnimal {

	public:
		AAnimal();
		virtual ~AAnimal();
		AAnimal( const AAnimal& src );
		AAnimal& operator=( const AAnimal& src );
		virtual void makeSound() const = 0;
		const std::string& getType() const;
		virtual Brain* getBrain() const;

	protected:
		std::string type;
		
};

#endif