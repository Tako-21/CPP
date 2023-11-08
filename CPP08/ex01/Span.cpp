/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:34:10 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/11/08 14:44:15 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

std::vector<int>::iterator Span::_it;

Span::Span() : _max(10), _vec(10) {}

Span::Span( unsigned int const & N ) : _max(N), _vec(N)
{
	this->_it = _vec.begin();
}

Span::~Span() {

}

Span::Span ( const Span& cpy ) : _max(cpy._max)
{
	*this = cpy;
}

Span& Span::operator= ( const Span& cpy )
{
	this->_max = cpy._max;
	return ( *this );
}

void	Span::addNumber( int number )
{
	if (_it == _vec.end() )
		throw( SpanIsFull() );
	*(_it++) = number;
}

void	Span::displaySpan( void ) const
{
	for ( std::vector<int>::const_iterator it = this->_vec.begin(), end = this->_vec.end(); it != end; it++ ) {
		std::cout << *it << std::endl;
	}
}