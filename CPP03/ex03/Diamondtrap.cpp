
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Diamondtrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:37:43 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/09 16:46:36 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Diamondtrap.hpp"

Diamondtrap::Diamondtrap( std::string name) : Claptrap(name + "_clap_name"), Fragtrap(name), Scavtrap(name), _name(name)
{
	std::cout << "Diamond Constructor Called" << std::endl;
	Fragtrap::_hit_points = 100;
	Scavtrap::_energy_points = 50;
	Fragtrap::_attack_damage = 30;
}

Diamondtrap::~Diamondtrap()
{
	std::cout << "DiamondTrap Died" << std::endl;
}

Diamondtrap&	Diamondtrap::operator= (const Diamondtrap& obj)
{
	this->_name = obj._name;
	this->_attack_damage = obj._attack_damage;
	this->_energy_points = obj._energy_points;
	this->_hit_points = obj._hit_points;
	std::cout << "Copy completed successfully with copy assignment operator" << std::endl;
	return (*this);
}

Diamondtrap::Diamondtrap(const Diamondtrap& obj) : Claptrap(obj), Fragtrap(obj), Scavtrap(obj)
{
	*this = obj;
	std::cout << "Copy completed succesfully with copy constructor" << std::endl;
}

void	Diamondtrap::whoAmI()
{
	std::cout << "Diamond's name : " << this->_name << "\nClap's name    : " << Claptrap::_name << std::endl;
}
