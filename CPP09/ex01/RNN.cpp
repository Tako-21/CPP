/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RNN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:47:05 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/11/27 19:11:35 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RNN.hpp"

std::stack<int> RNN::_stack;
int				RNN::_a;
int				RNN::_b;

RNN::RNN() {}

RNN::~RNN() {}

RNN::RNN ( const RNN& cpy ) {
	*this = cpy;
}

RNN& RNN::operator= ( const RNN& ) {
	return *this;
}

void	RNN::doStack( void )
{
	if ( _stack.size() < 2 )
		return ;
	_a = _stack.top();
	_stack.pop();
	_b = _stack.top();
	_stack.pop();
}

void	RNN::addition( void )
{
	_stack.push( _a + _b );
}

void	RNN::soustraction( void )
{
	_stack.push( _b - _a );
}

void	RNN::multiplication( void )
{
	_stack.push( _a * _b );
}

void	RNN::division( void )
{
	_stack.push( _b / _a );
}

bool RNN::isOperand(char op)
{
	static const	operandsMap	operandsMap[] = {
		{'+', RNN::addition},
		{'-', RNN::soustraction},
		{'*', RNN::multiplication},
		{'/', RNN::division},
		{'\0', NULL}
	};
	
	for ( int i = 0; operandsMap[i].operatorFunction; i++ ) {
		if ( op == operandsMap[i].op ) {
			doStack();
			operandsMap[i].operatorFunction();
			return ( true );
		}
	}
	return ( false );
}


void	RNN::parseInput( std::string line )
{
	if (line.empty() )
		return ;
	for ( int i = 0; line[i]; i++ ) {
		if ( isdigit( line[i]) ) {
			if ( isdigit(line[i - 1]) )
				throw ( std::runtime_error("Two consecutives digits"));
			_stack.push( static_cast<int>( line[i] - '0' ) );
		}
		else if ( line[i] == ' ')
			continue ;
		else if ( isOperand( line[i] ) ) {
			continue ;
		}
		else {
			throw ( std::runtime_error("Error") );
		}
	}
	std::cout << _stack.top() << std::endl;
}