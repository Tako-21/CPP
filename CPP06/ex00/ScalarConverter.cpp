/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:44:12 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/28 12:36:32 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScalarConverter.hpp"
# include <iostream>

char	ScalarConverter::_char = 0;
int		ScalarConverter::_int = 0;
float	ScalarConverter::_float = 0;
double	ScalarConverter::_double = 0;

ScalarConverter::ScalarConverter( std::string number ) : _number(number)
{
	this->setType( );
}

ScalarConverter::~ScalarConverter() {

}

ScalarConverter::ScalarConverter ( const ScalarConverter& cpy ) {
	*this = cpy;
}

ScalarConverter& ScalarConverter::operator= ( const ScalarConverter& cpy ) {
	(void)cpy;
	return *this;
}

void	ScalarConverter::convert( std::string str )
{
	(void)str;
}

void	ScalarConverter::setType( void )
{
	t_type			type;

	t_Convert_Map convert_map[5] = {
		{type = CHAR, &ScalarConverter::isChar, &ScalarConverter::castChar, &ScalarConverter::printChar},
		{type = INT, &ScalarConverter::isInt, &ScalarConverter::castInt, &ScalarConverter::printInt},
		{type = FLOAT, &ScalarConverter::isFloat, &ScalarConverter::castFloat, &ScalarConverter::printFloat},
		{type = DOUBLE, &ScalarConverter::isDouble, &ScalarConverter::castDouble, &ScalarConverter::printDouble},
		{type = NONE, NULL, NULL, NULL}
	};

	for ( int i = 0; convert_map[i].getType; i++ ) {
		// if ( (this->*functionMap[0].command)(x, y);)
		if ( (this->*convert_map[i].getType)())  {
			std::cout << "Romeooo" << std::endl;
		}
	}
}

bool	ScalarConverter::isChar( void ) {
	return ( this->_number.length() == 1 && std::isalpha( this->_number[0] ) && std::isprint( this->_number[0] ) );
}

bool	ScalarConverter::isInt( void ) {
	int	j = 0;
	if ( this->_number[j] == '-' || this->_number[j] == '+' )
		j++;
	for ( int i( j ); i < ( int ) this->_number.length(); i++ ) {
		if ( !std::isdigit( this->_number[i] ) )
			return false;
	}
	return true;
}

g
bool ScalarConverter::isDouble( void )
{
	if ( this->_number.find( '.' ) == std::string::npos || this->_number.find( '.' ) == 0 
		|| this->_number.find( '.' ) == this->_number.length() - 1 )
		return false;
	int	j = 0;
	int	found = 0;
	if ( this->_number[j] == '-' || this->_number[j] == '+' )
		j++;
	for ( int i( j ); i < ( int ) this->_number.length(); i++ ) {
		if ( this->_number[i] == '.' )
			found++;
	if ( ( !std::isdigit( this->_number[i] ) && this->_number[i] != '.' ) || found > 1 )
		return false;
	}

	return true;
}

bool	ScalarConverter::isFloat ( void )
{
	if ( this->_number.find( '.' ) == std::string::npos || this->_number[this->_number.length()] != 'f' 
		|| this->_number.find( '.' ) == 0 || this->_number.find( '.' ) == this->_number.length() - 2 )
		return false;
	int	found = 0;
	int	j = 0;
	if ( this->_number[j] == '-' || this->_number[j] == '+' )
		j++;
	for ( int i( j ); i < ( int ) this->_number.length() - 1; i++ ) {
		if ( this->_number[i] == '.' )
			found++;
	if ( ( !std::isdigit( this->_number[i] ) && this->_number[i] != '.' ) || found > 1 )
		return false;
	}
	return true;
}

void	ScalarConverter::castChar( void )
{
	ScalarConverter::_int = static_cast< int >( ScalarConverter::_char );
	ScalarConverter::_float = static_cast< float >( ScalarConverter::_char );
	ScalarConverter::_double = static_cast< double >( ScalarConverter::_char );
}

void	ScalarConverter::castInt( void )
{

}

void ScalarConverter::castFloat( void )
{

}

void ScalarConverter::castDouble( void )
{
}

void		ScalarConverter::printChar( void )
{

}

void		ScalarConverter::printInt( void )
{

}

void		ScalarConverter::printFloat( void )
{

}

void		ScalarConverter::printDouble( void )
{

}
