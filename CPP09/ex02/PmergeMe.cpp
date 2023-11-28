/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:28:08 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/11/28 16:50:32 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

std::vector<std::pair<int, int> >	PmergeMe::_mergeMe;
std::list<int>						PmergeMe::_list;

PmergeMe::PmergeMe() {

}

PmergeMe::~PmergeMe() {

}

PmergeMe::PmergeMe ( const PmergeMe& cpy ) {
	*this = cpy;
}

PmergeMe& PmergeMe::operator= ( const PmergeMe& cpy ) {
	(void)cpy;
	return *this;
}

bool	PmergeMe::makePair( void )
{
	if ( _list.size() <= 1 )
		return ( false );
	std::list<int>::iterator end = _list.end();
	std::list<int>::iterator it = ++_list.begin();
	std::list<int>::iterator previous_it = --it;
	if ( _list.size() % 2 == 0 ) {
		for ( ; it != end; it++, previous_it++ ) {
			_mergeMe.push_back(std::make_pair(*previous_it,*it));
		}
	}
	for ( int i = 0; i < _mergeMe.size(); i++ ) {
		std::cout << _mergeMe.first[i] << _merge.second[i] << std::endl; 
	}
}

bool PmergeMe::parseInput( std::string line )
{
	for ( int i = 1; line[i]; i++ ) {
		if ( line[i] == SPACE )
			continue ;
		else if ( isdigit(line[i]) )
			_list.push_back( static_cast<int>(line[i] - '0') );
		else
			return ( false );
	}
	makePair();
	return ( true );
}
