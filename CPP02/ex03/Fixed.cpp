/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 12:08:03 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/09/30 19:40:53 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>


/*	Constructor / Copy Constructor / Destructor */
Fixed::Fixed( void ) {

	this->_fixed_point_value = 0;
};

Fixed::Fixed( int const fixed_point ) : 
_fixed_point_value(fixed_point) {

	this->_fixed_point_value = fixed_point << Fixed::_frc_bits;
}

Fixed::Fixed( float const fixed_point ) {

	this->_fixed_point_value = roundf(fixed_point * (1 << Fixed::_frc_bits));
}

Fixed::~Fixed() {}

Fixed::Fixed(const Fixed& fixed) {

	this->setRawBits(fixed.getRawBits());
}


/*	Maths members functions */
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


/* Copy assignment operator overload */
Fixed& Fixed::operator= (const Fixed& fixed) {

	if (this != &fixed)
		this->_fixed_point_value = fixed.getRawBits();
	return (*this);
}


/* Overload comparison operators */
bool Fixed::operator> ( const Fixed& fixed) {
	
	return ( this->getRawBits() > fixed.getRawBits() );
}

bool Fixed::operator< ( const Fixed& fixed) const {
	
	return ( this->getRawBits() < fixed.getRawBits() );
}

bool Fixed::operator>= ( const Fixed& fixed) {
	
	return ( this->getRawBits() >= fixed.getRawBits() );
}

bool Fixed::operator<= ( const Fixed& fixed) {
	
	return ( this->getRawBits() <= fixed.getRawBits() );
}

bool Fixed::operator== ( const Fixed& fixed) {
	
	return ( this->getRawBits() == fixed.getRawBits() );
}

bool Fixed::operator!= ( const Fixed& fixed) {
	
	return ( this->getRawBits() != fixed.getRawBits() );
}


/* Overload arithmetic operators */
Fixed	Fixed::operator+( const Fixed& fixed) {

	return Fixed(this->toFloat() + fixed.toFloat());
}

Fixed	Fixed::operator-( const Fixed& fixed) {

	return Fixed(this->toFloat() - fixed.toFloat());
}

Fixed	Fixed::operator*( const Fixed& fixed) {

	return Fixed(this->toFloat() * fixed.toFloat());
}

Fixed	Fixed::operator/( const Fixed& fixed) {

	return Fixed(this->toFloat() / fixed.toFloat());
}


/*--------------Increment/decrement operators-----------------*/
//	Post-increment
Fixed	Fixed::operator++ ( int ) {

	Fixed cpy(*this);
	this->_fixed_point_value++;
	return (cpy);
}

//	Post-decrement
Fixed	Fixed::operator-- ( int ) {

	Fixed cpy(*this);
	this->_fixed_point_value--;
	return (*this);
}

//	Pre-increment
Fixed	Fixed::operator++ ( void ) {

	++this->_fixed_point_value;
	return (*this);
}

//	Pre-decrement
Fixed	Fixed::operator-- ( void )
{
	--this->_fixed_point_value;
	return (*this);
}

Fixed& Fixed::min( Fixed& obj1,  Fixed& obj2) {

	if (obj1 < obj2)
		return (obj1);
	return (obj2);
}

Fixed& Fixed::max( Fixed& obj1, Fixed& obj2) {

	if (obj1 > obj2)
		return (obj1);
	return (obj2);
}


Fixed const & Fixed::max( Fixed const & obj1, Fixed const & obj2) {

	if (obj1.getRawBits() > obj2.getRawBits())
		return (obj1);
	return (obj2);
}

Fixed const & Fixed::min( Fixed const & obj1, Fixed const & obj2) {

	if (obj1.getRawBits() > obj2.getRawBits())
		return (obj1);
	return (obj2);
}

std::ostream& operator<< ( std::ostream& stream, Fixed const &fixed ) {

	return (stream << fixed.toFloat());
}


int Fixed::_frc_bits = 8;