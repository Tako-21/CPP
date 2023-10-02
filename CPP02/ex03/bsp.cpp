/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 19:46:49 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/02 23:53:49 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

float	vectorialProduct( Point const a, Point const b, Point const point )
{
	return ( ((a.getx() - point.getx()) * (b.gety() - point.gety())) - ((a.gety() - point.gety()) * (b.getx() - point.getx())) );
}

bool	bsp( Point const a, Point const b, Point const c, Point const point)
{
	int	tab[4] = {0};
	int	i = 1;
	int	j = 0;

	if (!vectorialProduct(a, b, c)) {
		std::cout << "It's not a triangle !" << std::endl;
		return (false);
	}
	if ( vectorialProduct(c, a, point) > 0)
		tab[1] = 1;
	if ( vectorialProduct(a, b, point) > 0)
		tab[1] = 1;
	if (vectorialProduct(b, c, point) > 0)
		tab[1] = 1;
	for (; tab[i] == 0 && i < 3; i++);
	for (; tab[j] == 0 && j < 3; j++);
	
	if (i != 3 || j != 3)
		return (false);
	if (		!vectorialProduct(a, b, point)
			||	!vectorialProduct(a, c, point)
			||	!vectorialProduct(b, c, point)
		return (false);
	return (true);
}
