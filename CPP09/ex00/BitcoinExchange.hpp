/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 19:45:39 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/11/26 01:32:45 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BITCOINEXCHANGE__
#define __BITCOINEXCHANGE__


# include <map>
# include <string>
# include <cctype>
# include <cstring>
# include <sstream>
# include <fstream>
# include <utility>
# include <cstdlib>
# include <iostream>
# include <algorithm>
# include <exception>

class BitcoinExchange
{

public:

	BitcoinExchange( void );
	BitcoinExchange( std::ifstream& infile );
	~BitcoinExchange();
	BitcoinExchange ( const BitcoinExchange& cpy );
	BitcoinExchange& operator= ( const BitcoinExchange& cpy );

	static bool			checkFormat( std::string date, int max_date );
	static bool			validFormat( std::string& line );
	static std::string	validDate( std::string& line );
	static float		validValue( std::string& line );
	static void			createMap( std::ifstream& infile );
	static void			fillDbMap( std::ifstream &infile );
	static std::map<std::string, float>::iterator	getClosestDate( std::string date );


private:
	
	static std::map<std::string, float>	_db_map; 
	
};

#endif /* __BITCOINEXCHANGE__ */