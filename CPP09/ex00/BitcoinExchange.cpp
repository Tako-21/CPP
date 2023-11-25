/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 19:46:15 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/11/25 20:03:04 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "BitcoinExchange.hpp"


BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange( std::ifstream& infile )
{
	createMap( infile );
}

bool	strIsDigit( std::string token)
{
	size_t	i = 0;

	while ( token[i] ) {
		if ( !isdigit(token[i]) )
			return ( false );
		i++;
	}
	return ( true );
}

bool	parseDate( size_t date, size_t min, size_t max)
{
	if ( date < min || date > max )
		return ( false );
	return ( true );
}

bool	BitcoinExchange::validDate( std::string& line )
{
	std::string	token;
	size_t		date;

	if ( !strIsDigit(line.substr(0, 4)) || !strIsDigit(line.substr(5, 2)) || !strIsDigit(line.substr(8, 2)) )
		throw ( std::runtime_error("Error format date") );
	if ( !parseDate ( date = atoi( line.substr(0, 4).c_str() ), 2009, 9999 ) )
		return ( false );
	if ( !parseDate ( date = atoi( line.substr(5, 2).c_str() ), 1, 12 ) )
		return ( false );
	if ( !parseDate ( date = atoi( line.substr(5, 2).c_str() ), 1, 31 ) )
		return ( false );
	return ( true );
}

bool	BitcoinExchange::validValue( std::string& line )
{
	double		value;
	std::string	token;
	int			i;

	i =  0;
	token = line.substr(13, std::string::npos);
	std::string::difference_type n = std::count(token.begin(), token.end(), '.');
	if ( token.find('.') != std::string::npos )
		token.erase(token.find('.'), 1);
	if ( n > 1 )
		return ( false );
	if ( token[i] == '-' )
		i++;
	if ( !strIsDigit( &token[i] ) ) {
		std::cout << "token|" << token << "|" << std::endl;
		return ( false );
	}
	value = atof( token.c_str() );
	if ( value < 0 || value > 1000 )
		return ( false );
	std::cout << "value " << value << std::endl;
	return ( true );
}

bool	BitcoinExchange::validFormat( std::string& line )
{
	if ( line.size() < 12 )
		return ( false );
	if ( line[4] != '-' || line[7] != '-' || line[10] != ' ' || line[11] != '|' || line[12] != ' ')
		return ( false );
	if ( validDate( line ) && validValue( line ) )
		return ( true );
	return ( false ); 
}

void	BitcoinExchange::createMap( std::ifstream &infile )
{
	std::string	line;

	std::getline(infile, line, '\n');
	if (line != "date | value")
		throw ( std::runtime_error("The file must begin with <line | value>") );
	while ( std::getline(infile, line, '\n') ) {
		if ( BitcoinExchange::validFormat( line ) ) {
			continue;
		}
		std::cout << line << std::endl;
	}

}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange ( const BitcoinExchange& ) {}

BitcoinExchange& BitcoinExchange::operator= ( const BitcoinExchange& )
{
	return *this;
}
