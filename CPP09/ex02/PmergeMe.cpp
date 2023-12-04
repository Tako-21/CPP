/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 17:37:39 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/12/04 16:21:48 by mmeguedm         ###   ########.fr       */
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

	for ( std::vector<int>::iterator cpy_it = it; cpy_it != end - size / 2; ++cpy_it ) {
		left_pair.push_back(*cpy_it);
	}
	for ( std::vector<int>::iterator cpy_it = it; cpy_it != end - size / 2; ++cpy_it ) {
		*cpy_it = *(cpy_it + size / 2);
	}
	std::vector<int>::iterator left_pair_it = left_pair.begin();
	for ( std::vector<int>::iterator cpy_it = end - size / 2; cpy_it != end; ++cpy_it, ++left_pair_it ) {
		*cpy_it = *left_pair_it;
	}
}

void	insertPair( std::vector<int> & johnson, unsigned element_to_insert, unsigned index_pair, std::vector<int> & vec )
{
	std::vector<int>::iterator	it = johnson.begin();


	for ( unsigned i = 0; i < index_pair; it++, i++ ) {}
	
	johnson.insert(it, element_to_insert);
}

unsigned long	comparePair( std::vector<int> johnson, const unsigned long number_to_compare, const unsigned range )
{
	unsigned	i = 0;
	unsigned	index_pair = 0;
	i = range - 1;

	std::cout << "JOHNSON COMPARE" << std::endl;
	std::cout << "number to compare : " << number_to_compare << std::endl;
	displayVec( johnson );
	while ( i < johnson.size() ) {
		if ( number_to_compare < johnson[i])
			return ( index_pair * range );
		i += range;
		index_pair++;
	}
	return ( index_pair * range );
}

void	jacobsthal( std::vector<int> & johnson, std::vector<int> & odd, std::vector<int> & vec, const int step, const int pair )
{
	static const int	jacob[] = {0, 1, 3, 5, 11, 21, 43, 85, 171, 341, 683, 1365, 2731, 5461, 10923, 21845};
	std::vector<int>::iterator	it = johnson.begin();
	std::vector<int>::iterator	vec_it = vec.begin();
	std::vector<int>	pair_to_insert;
	unsigned	range_jacob;
	unsigned long	index_pair = 0;
	unsigned		index_to_insert = 0;
	
	range_jacob = (step >> 1);
	int	i = 0;
	int	j = 0;
	while ( i < range_jacob ) {
		i++;
		johnson.insert(johnson.begin(), vec[range_jacob - i]);
	}
	if ( range_jacob << 1 >= vec.size() ) {
		vec = johnson;
		return ;
	}
	i += range_jacob;

	for ( int i = 1; jacob[i] && jacob[i - 1] < pair; i++ ) {		
		j = jacob[i];
		if ( jacob[i] >= pair )
			j = pair - 1;
		while ( j != jacob[i - 1] ) {
			for ( int i = 0; i < range_jacob; i++ ) {
				index_pair = j * step + i;
			}
			index_to_insert = comparePair(johnson, vec[index_pair], range_jacob);
			for ( int i = 0; i < range_jacob; i++ ) {
				index_pair = j * step + i;
				insertPair( johnson, vec[index_pair], index_to_insert + i, vec );
			}
			j--;
		}
	}
	i = range_jacob;
	
	displayVec( odd );
	while ( i <= odd.size() ) {
		index_to_insert = comparePair(johnson, odd[i - 1], range_jacob);
		for (int j = 0; j < range_jacob; ++j ) {
			insertPair( johnson, odd[(i >> 1) + j - 1], index_to_insert + j, vec );
		}
		i += range_jacob;
	}
	vec = johnson;
}

void	fordJohson( std::vector<int>& vec, std::vector<int> & odd, int step )
{
	std::vector<int>	johnson;
	unsigned long		range;
	unsigned long		range_jacob;
	int	k = 0;

	std::vector<int>::iterator	it = vec.begin();
		unsigned	pair = 0;
		if ( static_cast<unsigned long>(step) == vec.size() )
			pair = 1;
		else
			pair = vec.size() / (step);

		range = step >> 1;

		int	i = range;
		while ( i + range <= vec.size() ) {
			for (int j = 0, k = i; j < range; ++j, ++k ) {
				johnson.push_back(vec[k]);
			}
			std::cout << std::endl;
			i += range << 1;
		}
	jacobsthal(johnson, odd, vec, step, pair);
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
	
	if ( step >> 1 == vec.size() )
		return ;
	if ( vec.size() % step != 0 ) {
		for ( unsigned long i = 0; i < step >> 1; i++ ) {
			odd.insert(odd.begin(), vec.back());
			vec.pop_back();
		}
	}

	while ( sup < vec.size() ) {
		if ( vec[inf] > vec[sup] ) {
			if ( layer > 1 )
				lower_inf = (step >> 1) - 1;
			swapPair( it + inf - lower_inf, it + sup + 1 );
		}
		inf += step;
		sup += step;
	}
	
	// displayVec( vec );
	sort( vec, layer + 1 );
	fordJohson( vec, odd, step );
	//jacobsthal pour implement le 1er de la paire (donc le plus petit :)
}