/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 12:00:56 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/02 23:55:47 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

int	main( void )
{
	Point	a(1.0f, 2.0f), b(7.0f, 2.0f), c(2.0f, 2.0f), point(2.0f, 2.0f);

	std::cout << "Main Raw Bits : " << a.getx() << std::endl;
	if (bsp(a, b, c, point))
		std::cout << "Is in the triangle !" << std::endl;
	else
		std::cout << "Is not in the triangle." << std::endl;
	return 0;
}