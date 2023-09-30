/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 19:47:42 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/09/30 20:13:40 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __POINT_HPP__
#define __POINT_HPP__

#include "Fixed.hpp"

class Point {


public:
	Point( void );
	Point( const Fixed x, const Fixed y );
	~Point( void );

private:
	Fixed const _x;
	Fixed const _y;

};

#endif /* __POINT_HPP__ */