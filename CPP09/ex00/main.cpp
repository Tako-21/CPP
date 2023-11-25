/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 19:17:39 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/11/25 16:44:20 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "BitcoinExchange.hpp"

int	main( int argc, char** argv )
{
	if ( argc != 2 )
		throw (std::runtime_error("Wrong number arguments") );
	std::ifstream	btc_price("data.csv");
	std::ifstream	input_price(argv[1]);
	if ( !btc_price.is_open() || !input_price.is_open() ) {
		throw ( std::runtime_error("Could not open file"));
	}

	BitcoinExchange::createMap(input_price);

	// std::string	date = "2011-01-03";
	// std::string	delimiter = "-";
	// std::string	token;
	// size_t		pos = 0;

	// while ( (pos = date.find(delimiter) ) != std::string::npos ) {
	// 	token = date.substr(0, pos);
	// 	date = date.erase(0, pos + delimiter.size());
	// 	std::cout << token << std::endl;
	// }

	// std::cout << token << std::endl;
}