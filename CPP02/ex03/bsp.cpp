/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 19:46:49 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/02 23:41:06 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

// float	vectorialProduct( Point const a, Point const b, Point const c )
// {
// 	return ( (b.getx() - a.getx()) * (c.gety() - a.gety())) - ((b.gety() - a.gety()) * (c.gety() - a.gety()) );
// }

float	vectorialProduct( Point const a, Point const b, Point const point )
{
	return ( ((a.getx() - point.getx()) * (b.gety() - point.gety())) - ((a.gety() - point.gety()) * (b.getx() - point.getx())) );
}


bool	isInSegment( Point const a, Point const b, Point const point )
{
	if ( ((b.getx() - a.getx()) * (point.gety() - a.gety())) - ((b.gety() - a.gety()) * (point.gety() - a.gety())) == 0)
		return (true);
	return (false);
}

bool	bsp( Point const a, Point const b, Point const c, Point const point)
{
	int	tab[4] = {0};
	int	i = 1;
	int	j = 0;

	// if (((c.getx() - point.getx()) * (a.gety() - point.gety())) - ((c.gety() - point.gety()) * (a.getx() - point.getx())) > 0)
	// 	tab[1] = 1;
	// if (((a.getx() - point.getx()) * (b.gety() - point.gety())) - ((a.gety() - point.gety()) * (b.getx() - point.getx())) > 0)
	// 	tab[2] = 1;
	// if (((b.getx() - point.getx()) * (c.gety() - point.gety())) - ((b.gety() - point.gety()) * (c.getx() - point.getx())) > 0)
	// 	tab[3] = 1;
	
	if ( vectorialProduct(c, a, point) > 0)
		tab[1] = 1;
	if ( vectorialProduct(a, b, point) > 0)
		tab[1] = 1;
	if (vectorialProduct(b, c, point) > 0)
		tab[1] = 1;
	for (; tab[i] == 0 && i < 3; i++);
	for (; tab[j] == 0 && j < 3; j++);
	// for (int i = 0; i < 3; i++){
	// 	std::cout << tab[i] << std::endl;
	// }
	// if ( i == 3	|| j == 3
	// 			&& isInSegment(a, b, point)
	// 			&& isInSegment(a, c, point)
	// 			&& isInSegment(b, c, point)
	// 			&& isInSegment(a, b, c))
	if (i == 3 || j == 3)
		return (true);	
	return (false);
	// std::cout << a.gety() << std::endl;
	
	// std::cout << b.getx() << std::endl;
	// std::cout << b.gety() << std::endl;
	
	// std::cout << c.getx() << std::endl;
	// std::cout << c.gety() << std::endl;
	
	// std::cout << point.getx() << std::endl;
	// std::cout << point.gety() << std::endl;

}
