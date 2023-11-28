/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:28:08 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/11/28 10:42:08 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

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

bool PmergeMe::parseInput( std::string line )
{
	for ( int i = 0; line[i]; i++ ) {
		if ( !isdigit(line[i]) && line[i] != SPACE ) {
			return ( false );
		}
	}
	return ( true );
}
