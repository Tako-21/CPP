/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 19:46:57 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/02 19:30:41 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

/*---------Constructor/Destructor/Copy Constructor---------*/
Point::Point( void ) :
_x(Fixed(0)),
_y(Fixed(0)) {

}

Point::Point( float x, float y ) :
_x(x),
_y(y) {
}

Point::~Point( void ) {}

Point& Point::operator= (const Point& point)
{
	std::cout << "test" << std::endl;
	if (this != &point) {
		
		// (Fixed)this->_x = point._x;
		// (Fixed)this->_y = point._y;
		this->~Point();
		new (this) Point(point);
		std::cout << this << std::endl;
	}
	return (*this);
}

Point::Point(const Point& point)  :
_x(point._x),
_y(point._y){
}



float	Point::getx( void ) const
{
	return (this->_x.toFloat());
}

float	Point::gety( void ) const
{
	return (this->_y.toFloat());
}
