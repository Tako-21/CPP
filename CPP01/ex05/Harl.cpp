/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:54:51 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/01 16:50:14 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void ) {}

Harl::~Harl( void ) {}

void	Harl::complain( const char* level ) {

	std::string	str;

	str = level;
	if (level == NULL)
		return ;
	else
		Harl::complain( str );
}

void	Harl::complain( std::string level ) {
	
	std::string	map_level[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	void	(Harl::* harlLevel[]) ( void )  = {
		&Harl::_debug,
		&Harl::_info,
		&Harl::_warning,
		&Harl::_error
	};
 
	for ( int i = 0; i < 4; i++ ) {
		if ( level == map_level[i] ) {
			(this->*harlLevel[i])();
			break ;
		}
	}
}

void	Harl::_debug( void ) {
	
	std::cout	<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !"
				<< std::endl;
}

void	Harl::_info( void ) {

	std::cout	<< "I cannot believe adding extra bacon costs more money.";
	std::cout	<< " You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !"
				<< std::endl;
}

void	Harl::_warning( void ) {

	std::cout	<< "I think I deserve to have some extra bacon for free. I’ve been coming";
	std::cout	<< "for years whereas you started working here since last month."
				<< std::endl;
}

void	Harl::_error( void ) {

	std::cout	<< "This is unacceptable ! I want to speak to the manager now."
				<< std::endl;
}