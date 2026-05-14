#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal {

	public:
		Cat();
		~Cat();
		Cat( const Cat& a );
		Cat& operator=( const Cat& a );
		void makeSound() const;
		Brain* getBrain() const;

	private:
		Brain* brain;

};

#endif