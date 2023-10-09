/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 12:01:09 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/09/30 17:35:17 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__FIXED_HPP__
#define __FIXED_HPP__

#include <iostream>

class Fixed {


public:

	//	Constructor / Copy Constructor / Destructor
	Fixed( void );
	Fixed( float const fixed_point );
	Fixed( int const fixed_point );
	~Fixed( void );
	Fixed( const Fixed& );

	//	Copy assignment operator overload
	Fixed& operator=( const Fixed& fixed );

	//	Overload comparison operators
	bool	operator< ( const Fixed& fixed) const;
	bool	operator> ( const Fixed& fixed);
	bool	operator>= ( const Fixed& fixed);
	bool 	operator<= ( const Fixed& fixed);
	bool 	operator== ( const Fixed& fixed);
	bool 	operator!= ( const Fixed& fixed);

	//	Overload arithmetic operators
	Fixed	operator+( const Fixed& fixed);
	Fixed	operator-( const Fixed& fixed);
	Fixed	operator*( const Fixed& fixed);
	Fixed	operator/( const Fixed& fixed);

	//	Increment/decrement operators
	Fixed	operator++( int );		//	Post-increment
	Fixed	operator-- ( int );		//	Post-decrement
	Fixed	operator++ ( void );	//	Pre-increment
	Fixed	operator-- ( void );	//	Pre-decrement
	
	
	static 	Fixed& min(  Fixed& obj1,  Fixed& obj2);
	static	Fixed& max(  Fixed& obj1,  Fixed& obj2);
	static	Fixed const & max( Fixed const & obj1, Fixed const & obj2);
	static	Fixed const & min( Fixed const & obj1, Fixed const & obj2);

	//	Maths members functions
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