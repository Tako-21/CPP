/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:33:14 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/12/04 15:42:27 by mmeguedm         ###   ########.fr       */
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
	std::vector<int>	cpy;
	
	v.push_back(9);
	v.push_back(8);
	v.push_back(7);
	v.push_back(6);
	v.push_back(5);
	v.push_back(4);
	v.push_back(3);
	v.push_back(2);

	// std::vector<int>::iterator it = v.begin();
	// insertPair( it + 2, it + 4, cpy );
	// displayVec( cpy );
	sort(vec, 1);
	std::cout << "--------END OF SORT-------" << std::endl;
	
	// displayVec( v );
	displayVec( vec );
	std::cout << "--------------------------" << std::endl;

}