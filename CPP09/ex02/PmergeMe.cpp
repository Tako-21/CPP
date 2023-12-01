/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 17:37:39 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/12/01 13:48:37 by mmeguedm         ###   ########.fr       */
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

unsigned long	getSize( std::vector<int>::iterator it, std::vector<int>::iterator end)
{
	unsigned long size = 0;
	for (; it != end; it++, size++ ) {}
	return ( size );
}


void	swapPair( std::vector<int>::iterator it, std::vector<int>::iterator end )
{
	
	std::vector<int>	left_pair;
	unsigned long size = getSize(it, end);
	
	// std::cout << "--------DISPLAYING--------" << std::endl;
	// for (; it != end; it++ ) {
	// 	std::cout << *it << std::endl;
	// }
	// std::cout << "--------------------------" << std::endl;

	std::cout << "size : " << size << std::endl;
	for ( std::vector<int>::iterator cpy_it = it; cpy_it != end - size / 2; ++cpy_it ) {
		left_pair.push_back(*cpy_it);
	}
	for ( std::vector<int>::iterator cpy_it = it; cpy_it != end - size / 2; ++cpy_it ) {
		*cpy_it = *(cpy_it + size / 2);
	}
	std::vector<int>::iterator left_pair_it = left_pair.begin();
	for ( std::vector<int>::iterator cpy_it = end - size / 2; cpy_it != end; ++cpy_it, ++left_pair_it ) {
		std::cout << "test" << std::endl;
		*cpy_it = *left_pair_it;
	}
}

std::vector<int>	fordJohson( std::vector<int> & vec, int layer )
{
	std::vector<int>	johnson;


}

void	sort( std::vector<int> & vec, int layer )
{
	std::vector<int>	odd;
	std::vector<int>	johnson;
	unsigned long		inf;
	unsigned long		lower_inf = 0;
	unsigned long		sup;
	unsigned long		step;
	
	std::vector<int>::iterator	it = vec.begin();
	step	= static_cast<unsigned int>(std::pow(2, layer));
	sup		= step - 1;
	inf		= (step - 1) >> 1;
	
	std::cout << "step : " << step << std::endl;
	if ( step  == vec.size() )
		return ;
	if ( vec.size() %  step  != 0 ) {
		std::cout << "remove pair" << std::endl;
		for ( unsigned long i = 0; i < step >> 1; i++ ) {
			odd.push_back(vec.back());
			vec.pop_back();
		}
	}

	while ( sup < vec.size() ) {
		if ( vec[inf] > vec[sup] ) {
			if ( layer > 1 )
				lower_inf = (step >> 1) - 1;
			std::cout << "swap" << std::endl;
			swapPair( it + inf - lower_inf, it + sup + 1 );
		}
		inf += step;
		sup += step;
	}
	
	displayVec( vec );
	sort( vec, layer + 1 );
	// johnson = fordJohson( vec );
	//jacobsthal pour implement le 1er de la paire (donc le plus petit :)
}