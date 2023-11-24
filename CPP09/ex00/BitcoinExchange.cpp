/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 19:46:15 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/11/24 01:19:55 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "BitcoinExchange.hpp"


BitcoinExchange::BitcoinExchange()
{

}

BitcoinExchange::BitcoinExchange( std::ifstream& infile )
{
	createMap( infile );
}


std::map<int, std::string>    BitcoinExchange::split( const std::string & toSplit ) {

    int							i;
	std::map<int, std::string>	aSplit;
    std::istringstream			is(toSplit);
    std::string					buff;


	i = 0;
	while (is >> buff) {
		aSplit.insert(std::pair<int, std::string>(i, buff));
		i++;
	}
	return (aSplit);
};

bool	BitcoinExchange::validDate( std::string& line )
{
	(void)line;
	return ( true );
}

bool	BitcoinExchange::validValue( std::string& line )
{
	std::map<int, std::string>	splited = split( line );

	
	std::string	token = line.substr(0, 4);
	std::cout << token << std::endl;

	// if ( line.substr(0, 4) && line.substr(6, 8) && line.substr(10, 12)

	return ( true );
}

bool	BitcoinExchange::validFormat( std::string& line )
{
	if ( validDate( line ) && validValue( line ) )
		return ( true );
	return ( false ); 
}

void	BitcoinExchange::createMap( std::ifstream &infile )
{
	std::string	line;

	std::cout << atoi("a21abc24") << std::endl;

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
