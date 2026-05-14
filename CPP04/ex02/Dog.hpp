#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal {

	public:
		Dog();
		~Dog();
		Dog( const Dog& a );
		Dog& operator=( const Dog& a );
		void makeSound() const;
		Brain* getBrain() const;
		
	private:
		Brain* brain;
};

#endif