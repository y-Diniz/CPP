/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaoliv <rafaoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 00:21:51 by devrafaelly       #+#    #+#             */
/*   Updated: 2026/05/07 00:44:29 by rafaoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie {

	public:
		Zombie( void );
		~Zombie( void );
		void	announce( void );
		void	setName( std::string name );
		
	private:
		std::string name;

};

Zombie* zombieHorde( int N, std::string name );
#endif