/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:26:42 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/11/07 16:42:38 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "easyfind.hpp"

int	main( void )
{
	std::vector<int> arr(5, 21);

	try {
		::easyfind(arr, 12);	
	}
	catch ( std::exception& e ) {
		std::cout << e.what() << std::endl;
	}
}