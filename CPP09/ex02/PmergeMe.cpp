/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 17:37:39 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/11/30 22:47:30 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PmergeMe.hpp"


bool	parseInput( int argc, char** argv, std::vector<int> & vec )
{
	int					number;
	int					i = 1;

	for (; i < argc; i++ ) {
		std::istringstream	stream(argv[i]);
		while ( !stream.eof() ) {
			stream >> number;
			if ( stream.bad() || stream.fail() )
				return ( false );
			vec.push_back(number);
		}
	}
	return ( true );
}

void	displayVec( std::vector<int> vec )
{
	std::cout << "--------DISPLAYING--------" << std::endl;
	for ( std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++ ) {
		std::cout << *it << std::endl;
	}
	std::cout << "--------------------------" << std::endl;
}

void	swapPair( std::vector<int> & vec, unsigned long size_swap, int begin )
{
	std::vector<int>	tmp;

	
	for ( unsigned long i = begin; i < size_swap; i++ ) {
		tmp.push_back(vec[i]);
	}
	for ( unsigned long i = 0; i < size_swap; i++ ) {
		vec[i] = vec[size_swap + i];
	}
	for ( unsigned long i = size_swap, j = 0; i < size_swap * 2; i++, j++ ) {
		vec[i] = tmp[j];
	}
}

void	sort( std::vector<int> & vec, int layer )
{
	std::vector<int>	odd;
	int					inf;
	int					sup;
	int					step;
	
	step	= static_cast<unsigned int>(std::pow(2, layer));
	inf		= step - 1;
	sup		= (step - 1) / 2;
	
	if ( vec.size() %  step  == 0 ) {
		for ( int i = 0; i < layer; i++ ) {
			vec.pop_back();
		}
	}
	while ( sup != vec.size() - 1 ) {
		if ( vec[inf] > vec[sup] ) {
			swapPair( vec, step / 2, inf );
		}
		inf += step;
		sup += step;
	}
	displayVec( vec );
	//jacobsthal pour implement le 1er de la paire (donc le plus petit :)
}