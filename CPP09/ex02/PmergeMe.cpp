/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:28:08 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/11/29 18:33:50 by mmeguedm         ###   ########.fr       */
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

void	PmergeMe::merge( std::vector<std::pair<int, int> > & mergeMe , std::vector<std::pair<int, int> > & l_pair, std::vector<std::pair<int, int> > & r_pair )
{
	std::vector<std::pair<int, int> >::iterator	l_it = l_pair.begin();
	std::vector<std::pair<int, int> >::iterator	l_end = l_pair.end();
	std::vector<std::pair<int, int> >::iterator	r_it = r_pair.begin();
	std::vector<std::pair<int, int> >::iterator	r_end = r_pair.end();
	std::vector<std::pair<int, int> >::iterator	m_it = mergeMe.begin();
	
	std::cout << "M_IT" << m_it->first << std::endl;

	l_it = l_pair.begin();
	while ( l_it != l_end && r_it != r_end ) {
		if ( l_it->first < r_it->first ) {
			// std::cout << "TEST" << std::endl;
			_mergeMe.erase(m_it);
			_mergeMe.insert(m_it, *l_it);
			m_it++;
			l_it++;
			// std::cout << "first : " << m_it->first << "\tsecond : " << m_it->second << std::endl;
		}
		else {
			// std::cout << "TAST" << std::endl;
			_mergeMe.erase(m_it);
			_mergeMe.insert(m_it, *r_it);
			m_it++;
			r_it++;
		}
	}
	for (; l_it != l_end; l_it++, m_it++ ) {
		_mergeMe.erase(m_it);
		_mergeMe.insert(m_it, *l_it);
	}
	for (; r_it != r_end; r_it++, m_it++ ) {
		_mergeMe.erase(m_it);
		_mergeMe.insert(m_it, *r_it);
	}
	// for ( unsigned long i = 0; i < _mergeMe.size(); i++ ) {	
	// 	std::cout <<  "first : " << _mergeMe[i].first << "\tsecond : " << _mergeMe[i].second << std::endl;
	// }
}

void	PmergeMe::sortPair( std::vector<std::pair<int, int> > & pair )
{
	int	tmp;

	if ( pair[0].first < pair[0].second )
		return ;
	std::cout << "pair0first : " << pair[0].first << " pair0second : " << pair[0].second << std::endl;
	tmp = pair[0].first;
	pair[0].first = pair[0].second;
	pair[0].second = tmp;
}

void	PmergeMe::mergeSort( std::vector<std::pair<int, int> > & pair )
{
	std::cout << "begin" << std::endl;
	int	lenght = pair.size();
	std::vector<std::pair<int, int> >::iterator it = pair.begin();
	std::vector<std::pair<int, int> >::iterator	end = pair.end();


	std::cout << std::endl;
	std::cout << "lenght : " << lenght << std::endl;
	std::cout << std::endl;
	if ( lenght <= 1 ) {
		sortPair( pair );
		return ;
	}
	int	middle = lenght / 2;
	std::vector<std::pair<int, int> >	l_pair;
	std::vector<std::pair<int, int>	>	r_pair;

	for (; it != end; it++ ) {
		if ( l_pair.size() < middle ) {
			l_pair.push_back( std::make_pair(it->first, it->second) );
			std::cout << "< middle : " << "first : " << it->first << "\tsecond : " << it->second << std::endl;
		}
		else {
			r_pair.push_back( std::make_pair(it->first, it->second) );
			std::cout << "> middle : " << "first : " << it->first << "\tsecond : " << it->second << std::endl;
		}
	}
	std::vector<std::pair<int, int> >::iterator	l_it = l_pair.begin();
	std::vector<std::pair<int, int> >::iterator	l_end = l_pair.end();
	for (; l_it != l_end; l_it++ ) {
		std::cout << "l_it first " << l_it->first << " l_it second " << l_it->second << std::endl;
	}
	
	mergeSort(l_pair);
	mergeSort(r_pair);
	merge(_mergeMe, l_pair, r_pair);
	std::cout << "end" << std::endl;
	// int	i = 0;
	// int	j = 0;

	// for (; i < lenght; i++ ) {
	// 	if ( i < middle ) {
	// 		l_pair.push_back(std::make_pair())
	// 	}
	// }
}

void	PmergeMe::makePair( void )
{
	std::list<int>::iterator end = _list.end();
	std::list<int>::iterator it = ++_list.begin();
	std::list<int>::iterator previous_it = _list.begin();
	
	if ( _list.size() % 2 == 0 ) {
		while ( it != end ) {
			_mergeMe.push_back(std::make_pair(*previous_it,*it));
			previous_it++;
			it++;
			if ( it != end ) {
				it++;
				previous_it++;
			}
		}
	}
	else {
		end--;
		while ( it != end ) {
			_mergeMe.push_back(std::make_pair(*previous_it,*it));
			previous_it++;
			it++;
			if ( it != end ) {
				it++;
				previous_it++;
			}
		}
	}
	mergeSort( _mergeMe );
	for ( unsigned long i = 0; i < _mergeMe.size(); i++ ) {	
		std::cout <<  "first : " << _mergeMe[i].first << "\tsecond : " << _mergeMe[i].second << std::endl;
	}
	
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
	if ( _list.size() <= 1 )
		return ( false );
	makePair();
	return ( true );
}
