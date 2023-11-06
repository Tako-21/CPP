/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:03:27 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/11/06 15:16:14 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "template.hpp"

void	printElement( int element )
{
	std::cout << element << std::endl;
}

int	main( void )
{
	int	a[5] = {0 ,1 ,2, 3, 4};

	::iter(a, 5, printElement);
}