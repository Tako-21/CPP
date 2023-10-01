/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 19:47:42 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/01 18:18:03 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __POINT_HPP__
#define __POINT_HPP__

#include "Fixed.hpp"

class Point {


public:
	
	//	Constructor / Copy Constructor / Destructor
	Point( void );
	Point( const Point& );
	Point( const Fixed x, const Fixed y );
	~Point( void );

	//	Copy assignment operator overload
	Point& operator= (const Point& point);
	
private:
	Fixed const _x;
	Fixed const _y;

};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif /* __POINT_HPP__ */