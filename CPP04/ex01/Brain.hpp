#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>

class Brain {

	public:
		Brain();
		~Brain();
		Brain( const Brain& src );
		Brain& operator=( const Brain& src );
		void setIdea( int i, const std::string& idea );
		const std::string& getIdea( int i ) const;

	private:
		std::string ideas[100];
};

#endif