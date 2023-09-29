/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:08:14 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/09/29 15:53:29 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__SED_HPP__
#define __SED_HPP__

# include <iostream>
# include <fstream>

class Sed {

public :

	// Sed( std::ifstream const infile, std::ofstream const outfile );
	Sed( std::ifstream& infile, std::ofstream& outfile, std::string occurence, std::string replaced );
	~Sed( void );

	void sedReplace( void ) const;

private :

	std::ifstream& _infile;
	std::ofstream& _outfile;
	std::string const	_occurence;
	std::string const	_replaced;
};

#endif /* __SED_HPP__ */
