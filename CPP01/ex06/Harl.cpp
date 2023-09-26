/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:54:51 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/09/25 18:00:33 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void ) {}

Harl::~Harl( void ) {}

void	Harl::complain( std::string level ) {
	
	e_HarlLevel	harl_level = NONE;
	HarlMap	harlmap[4] = {
		{"DEBUG", DEBUG},
		{"INFO", INFO},
		{"WARNING", WARNING},
		{"ERROR", ERROR},
	};

	for ( int i = 0; i < 4; i++ ) {
		if (level == harlmap[i].harl_level) {
			harl_level = harlmap[i].level;
			break ;
		}
	}
	
	switch (harl_level) {
		case NONE:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break ;
		case DEBUG:
			Harl::_debug();
			break ;
		case INFO:
			Harl::_info( false );
			break ;
		case WARNING:
			Harl::_warning( false );
			break ;
		case ERROR:
			Harl::_error( false );
			break ;
	}
}

void	Harl::_debug( void ) {

	std::cout << "[ DEBUG ]" << std::endl;
	std::cout	<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !"
				<< std::endl;
	this->_info( true );
}

void	Harl::_info( bool newline ) {

	if (newline)
		std::cout << std::endl;
	std::cout << "[ INFO ]" << std::endl;
	std::cout	<< "I cannot believe adding extra bacon costs more money.";
	std::cout	<< " You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !"
				<< std::endl;
	this->_warning( true );
}

void	Harl::_warning( bool newline ) {

	if (newline)
		std::cout << std::endl;
	std::cout << "[ WARNING ]" << std::endl;
	std::cout	<< "I think I deserve to have some extra bacon for free. I’ve been coming";
	std::cout	<< "for years whereas you started working here since last month."
				<< std::endl;
	this->_error( true );
}

void	Harl::_error( bool newline ) {

	if (newline)
		std::cout << std::endl;
	std::cout << "[ ERROR ]" << std::endl;
	std::cout	<< "This is unacceptable ! I want to speak to the manager now."
				<< std::endl;
}