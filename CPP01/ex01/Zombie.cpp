/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:10:38 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/09/21 14:28:43 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(){
	this->a = 21;
}

Zombie::Zombie( std::string name) {

	this->a = 21;
	this->_name = name;
}

Zombie::~Zombie(){
	
	std::cout << "Bye bye " << this->_name << std::endl;
}

void Zombie::announce( void ) {
	
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName( std::string name ) {
	
	this->_name = name;
}
