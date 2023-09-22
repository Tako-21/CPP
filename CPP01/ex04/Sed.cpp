/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:07:47 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/09/22 13:02:14 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <fstream>
# include <string>

# include "Sed.hpp"

Sed::Sed( std::ifstream const & infile, std::ofstream const & outfile, std::string occurence, std::string replaced ) :
_infile(infile),
_outfile(outfile),
_occurence(occurence),
_replaced(replaced) {
}

// Sed::Sed( std::ifstream const infile, std::ofstream const outfile ) :
// _infile(infile),
// _outfile(outfile)
// {
// }

Sed::~Sed( void ) {}

// void	Sed::sedReplace(  ) const {

	// return (this->_occurence);
	// if ( this->_ ) {
	// 	while ( infile ) {
	// 		std::getline(infile, line);
	// 		outfile << line << std::endl;
	// 		std::cout << line << std::endl;
	// 	}
	// }
// }
