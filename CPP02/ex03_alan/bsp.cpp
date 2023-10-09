/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 19:46:49 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/04 14:26:36 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

Fixed	vectorialProduct( Point const a, Point const b, Point const point )
{
	return ( ((a.getx() - point.getx()) * (b.gety() - point.gety())) - ((a.gety() - point.gety()) * (b.getx() - point.getx())) );
}

bool	bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed	w1 = vectorialProduct(a, b, point);
	Fixed	w2 = vectorialProduct(b, c, point);
	Fixed	w3 = vectorialProduct(c, a, point);

	return ((w1 > 0 && w2 > 0 && w1 > 0) || (w1 < 0 && w2 < 0 && w1 < 0));
}
