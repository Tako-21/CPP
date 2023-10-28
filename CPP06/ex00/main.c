/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 14:20:55 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/27 14:23:35 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScalarConverter.hpp"

int	main( int argc, char **argv )
{
	if ( argc < 2 ) {
		std::cout << "Wrong number arguments. Usage : ./converter <number>" << std::endl;
		return ( -1 );
	}
	ScalarConverter	convert( argv[1] );
}