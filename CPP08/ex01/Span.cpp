/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:34:10 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/11/08 19:03:09 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

std::vector<int>::iterator Span::_it;

Span::Span() : _vec(10), _max(10) {}

Span::Span( unsigned int const & N ) : _vec(N), _max(N)
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

void	print( int n )
{
	std::cout << n << std::endl;
}

unsigned int		Span::shortestSpan()
{
	if ( !_vec.size() || _vec.size() == 1 )
		throw ( SpanSize() );

	unsigned int	result = INT32_MAX;
	std::vector<int>::iterator	next;
	std::vector<int> vec_cpy = this->_vec;

	std::sort(vec_cpy.begin(), vec_cpy.end());
	std::vector<int>::iterator last = std::unique( vec_cpy.begin(), vec_cpy.end() );
	vec_cpy.erase(last, vec_cpy.end() );
	next = vec_cpy.begin();
	next++;
	for ( std::vector<int>::const_iterator it = vec_cpy.begin(), end = vec_cpy.end(); it != end; ++it ) {
		if ( *next - *it < static_cast<int>(result) && it != next ) {
			result = std::abs( *it - *next );
		}
		if ( next != --vec_cpy.end() ) {
			next++;
		}
	}	
	return ( result );
}

unsigned int		Span::longestSpan()
{
	int	result = *std::max_element(_vec.begin(), _vec.end()) - *std::min_element(_vec.begin(), _vec.end());
	return  ( result );
}

void				Span::addMultipleNumber( unsigned int number, unsigned int rep )
{
	if ( rep > _vec.size() )
		throw ( RepTooHigh() );
	
	unsigned int i = 0;
	for (; i < rep; _it++, i++ ) {
		*_it = number;
	}
}
