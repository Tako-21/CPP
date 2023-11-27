/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 19:17:39 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/11/27 15:19:52 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "BitcoinExchange.hpp"

int	main( int argc, char** argv )
{
	try {
		if ( argc != 2 )
			throw (std::runtime_error("Wrong number arguments") );
	}
	catch ( std::exception &e ) {
		std::cout << e.what() << std::endl;
		return ( -1 );
	}
	std::ifstream	btc_price("data.csv");
	std::ifstream	input_price(argv[1]);
	try {
		if ( !btc_price.is_open() || !input_price.is_open() ) {
			throw ( std::runtime_error("Could not open file"));
	}
	}
	catch ( std::exception &e ) {
		std::cout << e.what() << std::endl;
		return ( -1 );
	}
	try {
		BitcoinExchange::fillDbMap(btc_price);
		BitcoinExchange::createMap(input_price);
	}
	catch ( std::exception &e ) {
		std::cout << e.what() << std::endl;
		return ( -1 );
	}
}