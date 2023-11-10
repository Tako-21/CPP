/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:34:10 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/11/10 18:12:43 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _max(10) {}

Span::Span( unsigned int const & N ) : _max(N) {}

Span::~Span() {}

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
	if ( _vec.size() > _max)
		throw ( SpanIsFull() );
	_vec.push_back(number);
}

void			Span::displaySpan( void ) const
{
	for ( std::vector<int>::const_iterator it = this->_vec.begin(), end = this->_vec.end(); it != end; it++ ) {
		std::cout << *it << std::endl;
	}
}

void	print( int n )
{
	std::cout << n << std::endl;
}

unsigned int	Span::shortestSpan()
{
	if ( _vec.size() < 2 )
		throw ( SpanSize() );

	std::vector<int>::iterator	next;
	std::vector<int> vec_cpy = this->_vec;
	std::sort(vec_cpy.begin(), vec_cpy.end());
	vec_cpy.erase(std::unique( vec_cpy.begin(), vec_cpy.end()), vec_cpy.end() );
	next = vec_cpy.begin();
	
	int	result = vec_cpy[1] - vec_cpy[0];
	
	for ( std::vector<int>::const_iterator it = vec_cpy.begin(), end = vec_cpy.end(); it != end; ++it ) {
		next++;
		if ( next != vec_cpy.end() && *next - *it < result ) {
			result = std::abs( *next - *it );
		}
	}	
	return ( result );
}

unsigned int	Span::longestSpan()
{
	int	result = *std::max_element(_vec.begin(), _vec.end()) - *std::min_element(_vec.begin(), _vec.end());
	return  ( result );
}

std::vector<int>::iterator	Span::begin()
{
	return ( this->_vec.begin() );
}

std::vector<int>::iterator	Span::end()
{
	return ( this->_vec.end() );
}

void			Span::addNumber( std::vector<int>::iterator it, std::vector<int>::iterator end )
{
	srand( time(NULL) );
	for (; it != end; it++ ) {
		if ( _vec.size() >= this->_max )
			throw ( RepTooHigh() );
		_vec.push_back(rand() % 100 + 1);
	}
}
