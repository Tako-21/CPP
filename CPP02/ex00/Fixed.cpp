/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 12:08:03 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/09/30 16:03:45 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed( void ) {

	std::cout << "Default constructor called" << std::endl;
	this->_fixed_point_value = 0;
};

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

int	Fixed::getRawBits( void ) const {

	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixed_point_value);
}

void Fixed::setRawBits( int const raw ) {

	this->_fixed_point_value = raw;
}
