/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:42:44 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/09/21 16:37:22 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){}

Weapon::Weapon( std::string type ) : _type(type) {
}

Weapon::~Weapon( void ) {}

std::string	const &	Weapon::getType( void ) const {

	return (this->_type);
}

void	Weapon::setType( std::string const & type ) {

	this->_type = type;
}