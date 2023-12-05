/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 17:37:31 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/12/05 13:46:11 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <ctime>
# include <deque>
# include <cmath>
# include <cctype>
# include <vector>
# include <sstream>
# include <cstdlib>
# include <iostream>

bool			parseInput( int argc, char** argv, std::vector<int> & _vec );
void			sort( std::vector<int> & vec, int layer );
void			displayVec( std::vector<int> vec );
unsigned long	getSize( std::vector<int>::iterator it, std::vector<int>::iterator end);
void			swapPair( std::vector<int>::iterator it, std::vector<int>::iterator end );
void			insertPair( std::vector<int>::iterator it, std::vector<int>::iterator end, std::vector<int> & johnson );
void			fordJohson( std::vector<int>  & johnson, std::vector<int>& vec, std::vector<int> & odd, int step );
void			jacobsthal( std::vector<int> & johnson, std::vector<int> & vec, const int step, const int pair );
unsigned long	comparePair( std::vector<int> johnson, const int number_to_compare, const unsigned range );

/*	--------DEQUE PART----------*/

bool	parseInput( int argc, char** argv, std::deque<int> & vec );
void	displayVec( std::deque<int> vec );
unsigned long	getSize( std::deque<int>::iterator it, std::deque<int>::iterator end);
void	swapPair( std::deque<int>::iterator it, std::deque<int>::iterator end );
void	insertPair( std::deque<int> & johnson, unsigned element_to_insert, unsigned index_pair );
unsigned long	comparePair( std::deque<int> johnson, const int number_to_compare, const unsigned range );
void	jacobsthal( std::deque<int> & johnson, std::deque<int> & vec, const int step, const int pair );
void	fordJohson( std::deque<int>& vec, std::deque<int> & odd, int step );
void	sort( std::deque<int> & deque, int layer );