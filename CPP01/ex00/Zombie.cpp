/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:10:38 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/09/20 14:11:23 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie( std::string name) :_name(name) {}

Zombie::~Zombie(){
	
	std::cout << "Bye bye " << this->_name << std::endl;
}

void Zombie::announce( void ) {
	
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}