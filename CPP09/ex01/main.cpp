/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:49:18 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/11/27 16:16:34 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RNN.hpp"

int	main( int argc, char** argv )
{
	try {
		if ( argc != 2 )
			throw ( std::runtime_error("Invalid number of arguments") );
	}
	catch ( std::exception &e ) {
		std::cerr << e.what() << std::endl;
	}

	try {
		RNN::parseInput( argv[1] );
	}
	catch ( std::exception &e ) {
		std::cerr << e.what() << std::endl;
	}
}