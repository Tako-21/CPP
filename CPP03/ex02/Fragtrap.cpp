/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fragtrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:09:17 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/09 19:23:27 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fragtrap.hpp"

Fragtrap::Fragtrap( std::string name ) : Claptrap(name)
{
	std::cout << "Fragtrap Constructor Called" << std::endl;
}

Fragtrap::~Fragtrap()
{
	std::cout << "Fragtrap Destructor Called" << std::endl;
}


Fragtrap&	Fragtrap::operator= ( const Fragtrap& obj)
{
	this->_name = obj._name;
	this->_attack_damage = obj._attack_damage;
	this->_energy_points = obj._energy_points;
	this->_hit_points = obj._hit_points;
	std::cout << "Copy completed successfully with copy assignment operator" << std::endl;
	return (*this);
}

Fragtrap::Fragtrap(const Fragtrap& obj) : Claptrap(obj)
{
	*this = obj;
	std::cout << "Copy completed succesfully with copy constructor" << std::endl;	
}


void	Fragtrap::highFivesGuys( void )
{
	if ( this->_energy_points <= 0 ) {
		std::cout << "Fragtrap " << this->_name << " not enough energy." << std::endl;
		return;
    }
    std::cout << "Fragtrap " << this->_name << " high fives !" << std::endl;
    this->_energy_points -= 1;
}

