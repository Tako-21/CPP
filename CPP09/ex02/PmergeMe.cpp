/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:28:08 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/11/29 13:18:12 by mmeguedm         ###   ########.fr       */
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
	std::list<int>::iterator previous_it = _list.begin();
	
	if ( _list.size() % 2 == 0 ) {
		for ( ; it != end; it++, previous_it++ ) {
			_mergeMe.push_back(std::make_pair(*previous_it,*it));
		}
	}
	else {
		end--;
		for ( ; it != end; it++, previous_it++ ) {
			_mergeMe.push_back(std::make_pair(*previous_it,*it));
		}
	}
	for ( unsigned long i = 0; i < _mergeMe.size(); i++ ) {	
		std::cout <<  "first : " << _mergeMe[i].first << "\tsecond : " << _mergeMe[i].second << std::endl;
	}
	return ( true );
}

int	strDigit( std::string line, int& number )
{
	number = 0;

	for ( ; isdigit(line[number]); number++ ) {}
	return ( number );
}

bool PmergeMe::parseInput( std::string line )
{
	std::stringstream	stream(line);
	int					number;

	for ( int i = 0; line[i]; i++ ) {
		if ( line[i] == SPACE ) {
			continue ;
		}
		else if ( strDigit( &line[i], number ) ) {
			_list.push_back( atoi(line.substr(i, number).c_str() ) );
			i += number;
		}
		else
			return ( false );
	}
	makePair();
	return ( true );
}
