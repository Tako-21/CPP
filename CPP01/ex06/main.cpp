/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:54:22 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/09/25 18:25:54 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp" 
#include <iostream>
#include <cstdlib>

int	main( int argc, char **argv )
{
	Harl	harl;

	harl.a = 21;
	std::cout << harl.a << std::endl;
	Harl	harl2 = harl;
	harl2.a = 42;
	harl2.a = 42;
	std::cout << harl2.a << std::endl;
	
	if ( argc > 2 ) {
		std::cout << "The are too many arguments in program call." << std::endl;
		exit(EXIT_FAILURE);
	}
	else if ( argc < 2 ) {
		std::cout << "The are too few arguments in program call." << std::endl;
		exit(EXIT_FAILURE);
	}

	harl.complain(argv[1]);
	return (21);
}