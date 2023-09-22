/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:08:14 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/09/22 13:03:13 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__SED_HPP__
#define __SED_HPP__

# include <iostream>
# include <fstream>

class Sed {

public :

	// Sed( std::ifstream const infile, std::ofstream const outfile );
	Sed( std::ifstream const & infile, std::ofstream const & outfile, std::string occurence, std::string replaced );
	~Sed( void );

	void sedReplace( void ) const;

private :

	std::ifstream const	& _infile;
	std::ofstream const	& _outfile;
	std::string const	_occurence;
	std::string const	_replaced;
};

#endif /* __SED_HPP__ */
