/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:33:14 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/11/30 22:53:16 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PmergeMe.hpp"

static unsigned long	getSize( std::vector<int>::iterator it, std::vector<int>::iterator end)
{
	unsigned long size = 0;
	for (; it != end; it++, size++ ) {}
	return ( size );
}

static void	swapPair2( std::vector<int> vec, std::vector<int>::iterator it, std::vector<int>::iterator end, unsigned long & size_swap )
{
	
	std::vector<int>	left_pair;
	unsigned long size = getSize(it, end);
	
	for ( std::vector<int>::iterator cpy_it = it; cpy_it != end - size / 2; ++cpy_it ) {
		left_pair.push_back(*cpy_it);
	}
	for ( std::vector<int>::iterator cpy_it = it; cpy_it != end - size / 2; ++cpy_it ) {
		*cpy_it = *(cpy_it + size / 2);
		std::cout << "j : " << j << std::endl;
		std::cout << "*(cpy_it + size / 2 + j) : " << *(cpy_it + size / 2 + j) << std::endl;
	}
	std::vector<int>::iterator left_pair_it = left_pair.begin();
	for ( std::vector<int>::iterator cpy_it = end - size / 2; cpy_it != end; ++cpy_it, ++left_pair_it ) {
		*cpy_it = *left_pair_it;
	}
}

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
	
	std::vector<int>::iterator it = v.begin();
	unsigned long	a = 0;
	swapPair2( vec, it, it + 4, a );
	a = 1;
	// swapPair( v, 2 / 2, a );
	displayVec(v);
	// sort(vec, 1);
}