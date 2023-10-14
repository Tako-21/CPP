/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 12:42:42 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/14 15:11:42 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : _type("ice") {}

Ice::~Ice() {}

Ice::Ice( const Ice& cpy) : AMateria( cpy )
{
	*this = cpy;
	std::cout << "Copy completed successfully with copy constructor" << std::endl;
}

Ice&	Ice::operator= ( const Ice& cpy)
{
	std::cout << "Copy completed successfully with assignment operator" << std::endl;
	this->_type = cpy._type;
	return ( *this );
}

void	Ice::use( ICharacter& target )
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria* Ice::clone() const
{
	AMateria	*newObj = new Ice( *this );
	
	return ( newObj );
}
