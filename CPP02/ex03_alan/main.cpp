/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 12:00:56 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/04 14:29:31 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

int	main( void )
{
	Point	a(0.0f, 0.0f), b(1.0f, 0.0f), c(0.0f, 0.1f), point(0.25f, 0.05f);

	std::cout << "Main Raw Bits : " << a.getx() << std::endl;
	if (bsp(c, b, a, point))
		std::cout << "Is in the triangle !" << std::endl;
	else
		std::cout << "Is not in the triangle." << std::endl;
	return 0;
}