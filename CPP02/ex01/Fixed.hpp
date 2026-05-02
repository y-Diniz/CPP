/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devrafaelly <devrafaelly@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 13:53:29 by rafaoliv          #+#    #+#             */
/*   Updated: 2026/05/01 19:02:34 by devrafaelly      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <ostream>

class	Fixed {

	public:
		Fixed( );
		Fixed(const Fixed&);
		Fixed& operator=(const Fixed& src);
		~Fixed( );
		Fixed( int const n );
		Fixed( float const n );
		float toFloat( void ) const;
		int toInt( void ) const;
		int getRawBits( void ) const;
		void setRawBits( int const raw );

	private:
		int	fixed_;	
		static int const BITS = 8;
		
};

std::ostream& operator<<(std::ostream& output, const Fixed& fixed);

#endif