/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:03:27 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/11/06 17:33:01 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "template.hpp"

template <typename T> T tmp(T const & x, T const & y)
{
	return ( x > y ) ? y : x;
}


template <typename T> void	printElement( T& element )
{
	std::cout << element << std::endl;
}

int	main( void )
{
	int		a[5] = {0 ,1 ,2, 3, 4};	
	char	str[10] = "Helloooo";
	
	::iter(a, 5, printElement);
	::iter(str, 5, printElement);
}
