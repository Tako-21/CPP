/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:33:14 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/11/28 10:41:05 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PmergeMe.hpp"

int	main(int argc, char** argv)
{
	try {
		if ( argc != 2 || PmergeMe::parseInput(argv[1]) == false) {
			throw ( std::runtime_error("Error") );
		}
	}
	catch ( std::exception &e ) {
		std::cout << e.what() << std::endl;
	}
}