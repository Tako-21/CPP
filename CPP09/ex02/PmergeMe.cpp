/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 17:37:39 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/12/01 21:39:32 by mmeguedm         ###   ########.fr       */
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

void	insertPair( std::vector<int>::iterator it, std::vector<int>::iterator end, std::vector<int> & johnson, unsigned index )
{
	for ( unsigned i = 0; i < index; it++, i++ ) {}
	for (; it != end; it++ ) {
		johnson.push_back(*it);
		// johnson.insert( johnson.begin() ,*it);
	}
}

void	jacobsthal( std::vector<int> & johnson, std::vector<int> & odd, std::vector<int>::iterator begin_vec, std::vector<int>::iterator end_vec,int step, const int pair )
{
	static const int	jacob[] = {0, 1, 1, 3, 5, 11, 21, 43, 85, 171, 341, 683, 1365, 2731, 5461, 10923, 21845};
	std::vector<int>::iterator	it = johnson.begin();
	int							j;
	// unsigned range = step >> 1;

	
	std::cout << "----------JACOB----------" << std::endl;
	// for (; begin_vec != end_vec ; begin_vec++ ) {
	// 	std::cout << *begin_vec << std::endl;
	// }
	std::cout << "pair : " << (const int)(pair) << std::endl;
	unsigned	range;
	//insertion de la petite  partie de la premiere paire au debut
	for ( int i = 1; jacob[i] && jacob[i - 1] < pair; i++ ) {		
		j = jacob[i];
		if ( jacob[i] >= pair )
			j = pair - 1;
		while ( j != jacob[i - 1] ) {
			//insertion de la petite partie de la paire a l indice j
			//pour se faire, trouver avec le binary search ou inserer la petite partie de la paire
			j--;
		}
		// if ( j == jacob[i - 1] ) {
		// 	std::cout << "j : " << j << "\ti : " << i << std::endl;
		// 	range = j * ( step >> 1);
		// 	insertPair(it + range, it + (range << 1 ), johnson, j);
		// }
	}
	std::cout << "---------END_JACOB--------" << std::endl;

}

void	fordJohson( std::vector<int>& vec, std::vector<int> & odd, int step )
{
	std::vector<int>	johnson;
	unsigned long		range;
	unsigned long		range_jacob;
	unsigned long		size;

	std::vector<int>::iterator	it = vec.begin();
	size = getSize(it, vec.end() );
	//taille de mon vecteur - les grands qui sont superieurs a ma paire
	//incrementer mon jacobsthal
	//decrementer jacob dans la double boucle
		// std::cout << "step : " << step << std::endl;
		unsigned	pair = 0;
		if ( step == vec.size() )
			pair = 1;
		else
			pair = vec.size() / (step);

	// while ( step >= 1 ) {
		std::cout << "vec.size : " << vec.size() << std::endl;
		std::cout << "step : " << step << std::endl;
		range = step >> 1;
		range_jacob = range - (step / 2) ;
		std::cout << "range : " << range << std::endl; 
	// while ( range != size ) {
		insertPair(it + range, it + (range << 1 ), johnson, 0);
		std::cout << "range_jacob : " << range_jacob << std::endl;
		jacobsthal(johnson, odd, it + range_jacob, it + (step >> 1), step, pair);
		// range += range;
		// vec = johnson;
		displayVec( vec );
		// step >>= 1;

	// }
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
			odd.push_back(vec.back());
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
	std::cout << "-----JOHNSON------" << std::endl;
	fordJohson( vec, odd, step );
	std::cout << "-----END_JOHNSON--" << std::endl;
	//jacobsthal pour implement le 1er de la paire (donc le plus petit :)
}