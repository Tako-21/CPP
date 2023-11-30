/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:33:14 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/11/30 23:22:11 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PmergeMe.hpp"

int	main(int argc, char** argv)
{
	std::vector<int>	vec;
	
	try {
		if ( parseInput(argc, argv, vec) == false ) {
			throw ( std::runtime_error("Error") );
		}
	}
	catch ( std::exception &e ) {
		std::cout << e.what() << std::endl;
		return ( -1 );
	}

	std::vector<int>	v;
	v.push_back(5);
	v.push_back(4);
	v.push_back(3);
	v.push_back(2);
	
	// swapPair( v, 2 / 2, a );
	sort(vec, 1);
}