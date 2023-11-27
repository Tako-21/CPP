/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 19:46:15 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/11/27 15:20:31 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "BitcoinExchange.hpp"

std::map<std::string, float> BitcoinExchange::_db_map;

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

void		BitcoinExchange::fillDbMap( std::ifstream &infile )
{
	std::string		date;
	float			exchange_rate;
	std::string		line;

	std::getline(infile, line, '\n');
	while ( std::getline(infile, line, '\n') ) {
		date = line.substr(0, 10).c_str();
		exchange_rate = atof( line.substr(11, std::string::npos).c_str() );
		_db_map.insert( std::pair<std::string, float>(date, exchange_rate) );
	}
}

bool	parseDate( size_t date, size_t min, size_t max)
{
	if ( date < min || date > max )
		return ( false );
	return ( true );
}

std::string	BitcoinExchange::validDate( std::string& line )
{
	size_t		date;

	if ( !strIsDigit(line.substr(0, 4)) || !strIsDigit(line.substr(5, 2)) || !strIsDigit(line.substr(8, 2)) )
		return ( "" );
	if ( !parseDate ( date = atoi( line.substr(0, 4).c_str() ), 2009, 2022 ) )
		return ( "" );
	if ( !parseDate ( date = atoi( line.substr(5, 2).c_str() ), 1, 12 ) )
		return ( "" );
	if ( !parseDate ( date = atoi( line.substr(8, 2).c_str() ), 1, 31 ) )
		return ( "" );
	return ( line.substr(0, 10) );
}

float	BitcoinExchange::validValue( std::string& line )
{
	std::string	token;
	std::string	cpy;
	double		value;
	int			i;
	i =  0;
	token = line.substr(13, std::string::npos);
	cpy = token;
	std::string::difference_type n = std::count(token.begin(), token.end(), '.');
	if ( token.find('.') != std::string::npos )
		cpy.erase(token.find('.'), 1);
	if ( n > 1 ) {
		std::cerr << "Too many dots \".\" => " << &token[i] << std::endl;
		return ( -1 );
	}
	if ( token[i] == '-' )
		i++;
	if ( !strIsDigit( &cpy[i] ) ) {
		std::cerr << "Not only digit => " << &token[i] << std::endl;
		return ( -1 );
	}
	value = atof( token.c_str() );
	if ( value < 0 ) {
		std::cerr << "Error: not a positive number." << std::endl;
		return ( -1 );
	}
	else if ( value > 1000 ) {
		std::cerr << "Error: too large a number." << std::endl;
		return ( -1 );
	}
	return ( value );
}

std::map<std::string, float>::iterator	BitcoinExchange::getClosestDate( std::string date )
{
	std::map<std::string, float>::iterator it = _db_map.begin();
	std::map<std::string, float>::iterator end = _db_map.end();
	int	d_year;
	int	d_month;
	int	d_day;
	int	db_year;
	int	db_month;
	int	db_day;

	int	result = 0;
	int	previous_result = atoi(date.substr(0, 10).c_str());

	d_year  = atoi( date.substr(0, 4).c_str() );
	d_month = atoi( date.substr(5, 2).c_str() );
	d_day   = atoi( date.substr(8, 2).c_str() );
	for (; it != end; it++ ) {
		db_year  = atoi( it->first.substr(0, 4).c_str() );
		db_month = atoi( it->first.substr(5, 2).c_str() );
		db_day   = atoi( it->first.substr(8, 2).c_str() );
		if ( db_year == d_year && db_month == d_month && db_day == d_day ) {
			return ( it ) ;
		}
		else if ( db_year == d_year && db_month == d_month ) {
			if ( db_day > d_day ) {
				return ( --it );
			}
			previous_result = result;
		}
	}
	return ( it );
}

bool	BitcoinExchange::validFormat( std::string& line )
{
	std::string	date;
	float		value;

	if ( line.size() < 14 ) {
		std::cerr << "Error: bad input => " << line << std::endl;
		return ( false );
	}
	if ( line[4] != '-' || line[7] != '-' || line[10] != ' ' || line[11] != '|' || line[12] != ' ') {
		std::cerr << "Error: bad format => " << line << std::endl;
		return ( false );
	}
	if ( ( date = validDate( line ) ) == "" ){
		std:: cerr<< "Error: bad date format => " << line.substr(0, 10) << std::endl;
		return ( false );
	}
	if ( ( value = validValue( line ) ) < 0)
		return ( false );
	std::map<std::string, float>::iterator it = getClosestDate(date);
	std::cout << date << " => " << value << " = " << value *it->second << std::endl;

	return ( true ); 
}

void	BitcoinExchange::createMap( std::ifstream &infile )
{
	std::string	line;

	std::getline(infile, line, '\n');
	if (line != "date | value")
		throw ( std::runtime_error("The file must begin with <line | value>") );
	while ( std::getline(infile, line, '\n') ) {
		if ( !BitcoinExchange::validFormat( line ) ) {
			continue;
		}
	}
}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange ( const BitcoinExchange& ) {}

BitcoinExchange& BitcoinExchange::operator= ( const BitcoinExchange& )
{
	return *this;
}
