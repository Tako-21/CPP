/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:41:54 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/11/06 19:17:22 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "Array.hpp"

int	main( void )
{
	Array<int>	arr_int(5);
	Array<char>	arr_char(5);
	arr_int[3] = 21;
	arr_char[1] = 'a';

	std::cout << arr_int[3] << std::endl;
	std::cout << arr_char[1] << std::endl;
	
	return ( 21 );
}