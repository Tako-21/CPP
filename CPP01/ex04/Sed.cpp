/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:07:47 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/09/29 16:07:25 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <fstream>
# include <string>
# include <cstdlib>
# include "Sed.hpp"

Sed::Sed( std::ifstream& infile, std::ofstream& outfile, std::string occurence, std::string replaced ) :
_infile(infile),
_outfile(outfile),
_occurence(occurence),
_replaced(replaced) {

	this->sedReplace();
}

Sed::~Sed( void ) {}

void	Sed::sedReplace( void ) const {

	std::string	line;
	size_t		found;

	if ( !this->_infile.is_open() )
	{
		std::cout << "Error while opening the file" << std::endl;
		exit(EXIT_FAILURE);
	}
	if ( std::getline(this->_infile, line, '\0') )
	{
		found = line.find(this->_occurence);
		while ( found != std::string::npos )
		{
			line.erase(found, this->_occurence.length());
			line.insert(found, this->_replaced);
			found = line.find(this->_occurence);
		}
		this->_outfile << line;
		this->_infile.close();
		std::cout << "Another file was successfuly created !" << std::endl;
	}
}
