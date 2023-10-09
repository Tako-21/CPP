/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:42:49 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/09 19:21:28 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Claptrap.hpp"

/*----------------Constructor/Destructor----------------*/
Claptrap::Claptrap()
{
	std::cout << "Claptrap Constructor Called" << std::endl;
}

Claptrap::Claptrap(std::string name) :
_name(name)
{
	std::cout << "Claptrap Constructor Called" << std::endl;
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
};

Claptrap::~Claptrap()
{
	std::cout << "Claptrap died" << std::endl;
}

Claptrap&	Claptrap::operator= ( const Claptrap& obj)
{
	this->_name = obj._name;
	this->_attack_damage = obj._attack_damage;
	this->_energy_points = obj._energy_points;
	this->_hit_points = obj._hit_points;
	std::cout << "Copy completed successfully with copy assignment operator" << std::endl;
	return (*this);
}

Claptrap::Claptrap(const Claptrap& obj)
{
	*this = obj;
	std::cout << "Copy completed succesfully with copy constructor" << std::endl;	
}


/*----------------Public members functions--------------*/
void	Claptrap::attack(const std::string& target)
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

void	Claptrap::takeDamage(unsigned int amount)
{
	if (!this->_hit_points) {
		std::cout << "Insufficient hit points\nAbort Damage" << std::endl;
		return ;
	}
	this->_hit_points -= amount;
}

void	Claptrap::beRepaired(unsigned int amount)
{
	if (!this->_energy_points) {
		std::cout << "Insufficient energy points" << std::endl;
		return ;
	}
	this->_hit_points += amount;
	this->_energy_points--;
	std::cout << "Claptrap " << this->_name << " gets " << amount  << " hit points back" << std::endl;
}
