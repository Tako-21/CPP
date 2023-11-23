/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 19:46:15 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/11/23 22:01:21 by mmeguedm         ###   ########.fr       */
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


std::map<int, std::string>    BitcoinExchange::cppSplit( const std::string & toSplit ) {

    int							i;
	std::map<int, std::string>	aSplit;
    std::istringstream			is(toSplit);
    std::string					buff;


 
    // insert elements in random order
	i = 0;
    while (is >> buff) {
		aSplit.insert(std::pair<int, std::string>(i, buff));
		i++;
	}
    return (aSplit);
};

bool	BitcoinExchange::validDate( std::string& line )
{
	line.sp
}


bool	BitcoinExchange::validValue( std::string& line )
{

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

	while ( std::getline(infile, line, '\n') ) {
		if ( BitcoinExchange::validFormat( line ) ) {

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
