/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 12:01:09 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/09/26 18:34:20 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__FIXED_HPP__
#define __FIXED_HPP__

#include <iostream>

class Fixed {


public:

	Fixed( void );
	Fixed( float const fixed_point );
	Fixed( int const fixed_point );
	~Fixed( void );
	Fixed( const Fixed& );
	
	
	Fixed& operator=( const Fixed& fixed );
	Fixed		operator++( int );
	int		toInt( void ) const;
	float	toFloat( void ) const;
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

private:

	int			_fixed_point_value;
	static int	_frc_bits;
};

std::ostream & operator << ( std::ostream& stream, Fixed const &fixed );


#endif /* __FIXED_HPP__ */