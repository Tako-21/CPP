/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 19:45:39 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/11/24 01:05:19 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BITCOINEXCHANGE__
#define __BITCOINEXCHANGE__


# include <map>
# include <string>
# include <sstream>
# include <fstream>
# include <utility>
# include <cstdlib>
# include <iostream>
# include <exception>

class BitcoinExchange
{

public:

	BitcoinExchange( void );
	BitcoinExchange( std::ifstream& infile );
	~BitcoinExchange();
	BitcoinExchange ( const BitcoinExchange& cpy );
	BitcoinExchange& operator= ( const BitcoinExchange& cpy );

	static bool	checkFormat( std::string date, int max_date );
	static bool	validFormat( std::string& line );
	static bool	validDate( std::string& line );
	static bool	validValue( std::string& line );
	static void createMap( std::ifstream& infile );
	static std::map<int, std::string> split( const std::string & toSplit );

private:
	
	static std::map<std::string, int>	_map;
};

#endif /* __BITCOINEXCHANGE__ */