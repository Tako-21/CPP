/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 12:45:03 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/17 09:59:09 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure"), _type("cure")
{
	std::cout << "Cure Materia is created" << std::endl;
}

Cure::~Cure()
{
	std::cout << "Cure Materia is destroyed" << std::endl;
}

Cure::Cure( const Cure& cpy) : AMateria( cpy )
{
	*this = cpy;
}

Cure&	Cure::operator= ( const Cure& cpy )
{
	this->_type = cpy._type;
	return ( *this );
}

void	Cure::use( ICharacter& target )
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

AMateria* Cure::clone() const
{
	AMateria	*newObj = new Cure( *this );

	return ( newObj );
}

std::string const & Cure::getType() const
{
	return ( this->_type );
}