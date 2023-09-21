/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:05:56 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/09/21 16:57:51 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _name(name) {}

HumanB::~HumanB( void ) {};

void	HumanB::setWeapon( Weapon& weapon ) {
	this->_weapon = &weapon;	
}

void	HumanB::attack( void ) {

	if (this->_weapon && this->_weapon->getType() != "")
		std::cout << this->_name << " attacks with their " << _weapon->getType() << std::endl;
	else
		std::cout << "Give me a weapon !" << std::endl;
}