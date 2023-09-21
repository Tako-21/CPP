/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:34:48 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/09/21 16:28:41 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"


HumanA::HumanA( std::string name, Weapon &weapon ) : _weapon(weapon), _name(name) {
}

HumanA::~HumanA(){}

void	HumanA::attack( void ) {

	std::cout << this->_name << " attacks with their " << _weapon.getType() << std::endl;
}
