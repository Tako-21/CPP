/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scavtrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:29:38 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/09 14:45:44 by mmeguedm         ###   ########.fr       */
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