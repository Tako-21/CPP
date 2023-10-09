/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scavtrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:29:38 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/09 19:23:39 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scavtrap.hpp"

Scavtrap::Scavtrap( std::string name ) : Claptrap(name)
{
	std::cout << "Scavtrap Constructor Called" << std::endl;
}

Scavtrap::~Scavtrap()
{
	std::cout << "Scavtrap Destructor Called" << std::endl;
}

void	Scavtrap::guardGate()
{
	std::cout << " ScavTrap is now in Gate keeper mode." << std::endl;
}

void	Scavtrap::attack( const std::string& target )
{
	if (!this->_hit_points) {
		std::cout << "Insufficient hit points" << std::endl;
		return ;
	}

	if (!this->_energy_points) {
		std::cout << "Insufficient energy points" << std::endl;
		return ;
	}
	this->_hit_points -= this->_attack_damage;
	this->_energy_points--;
	std::cout << "ClapTrap " << this->_name << " attacks " << target <<  " causing " << this->_attack_damage << " points of damage" << std::endl;
}

Scavtrap&	Scavtrap::operator= ( const Scavtrap& obj)
{
	this->_name = obj._name;
	this->_attack_damage = obj._attack_damage;
	this->_energy_points = obj._energy_points;
	this->_hit_points = obj._hit_points;
	std::cout << "Copy completed successfully with copy assignment operator" << std::endl;
	return (*this);
}

Scavtrap::Scavtrap(const Scavtrap& obj) : Claptrap(obj)
{
	*this = obj;
	std::cout << "Copy completed succesfully with copy constructor" << std::endl;	
}
