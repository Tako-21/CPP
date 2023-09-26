/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 12:08:03 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/09/26 17:34:46 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed( void ) {

	std::cout << "Default constructor called" << std::endl;
	this->_fixed_point_value = 0;
};

Fixed::Fixed( int const fixed_point ) : 
_fixed_point_value(fixed_point) {

	this->_fixed_point_value = fixed_point << Fixed::_frc_bits;
}

Fixed::Fixed( float const fixed_point ) {

	this->_fixed_point_value = roundf(fixed_point * (1 << Fixed::_frc_bits));
}

Fixed::~Fixed() {

	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& fixed) {

	std::cout << "Copy constructor called" << std::endl;
	this->setRawBits(fixed.getRawBits());
}

Fixed& Fixed::operator=(const Fixed& fixed) {

	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fixed)
		this->_fixed_point_value = fixed.getRawBits();
	return (*this);
}

std::ostream& operator << ( std::ostream& stream, Fixed const &fixed ) {

	return (stream << fixed.toFloat());
}

int	Fixed::getRawBits( void ) const {

	return (this->_fixed_point_value);
}

void Fixed::setRawBits( int const raw ) {

	this->_fixed_point_value = raw;
}

int Fixed::toInt( void ) const {

	return (this->_fixed_point_value >> Fixed::_frc_bits);
}

float Fixed::toFloat( void ) const {

	return ((float)this->_fixed_point_value / (1 << Fixed::_frc_bits));
}

int Fixed::_frc_bits = 8;