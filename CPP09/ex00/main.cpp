/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 19:17:39 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/11/23 19:29:11 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <exception>
# include <fstream>

int	main( int argc, char** argv )
{
	if ( argc != 2 )
		throw (std::runtime_error("Wrong number arguments") );
	std::ifstream	infile(argv[1]);
	if ( !infile.is_open() ) {
		throw ( std::runtime_error("Could not open file"));
	}
}