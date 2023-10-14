/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 12:45:03 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/14 15:12:09 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : _type("cure")
{

}

Cure::~Cure() {

}

Cure::Cure( const Cure& cpy) : AMateria( cpy )
{
	*this = cpy;
	std::cout << "Copy completed successfully with copy constructor" << std::endl;
}

Cure&	Cure::operator= ( const Cure& cpy )
{
	std::cout << "Copy completed successfully with assignment operator" << std::endl;
	this->_type = cpy._type;
	return ( *this );
}

void	Cure::use( ICharacter& target )
{
	std::cout << "* heals" << target.getName() << "’s wounds *" << std::endl;
}

AMateria* Cure::clone() const
{
	AMateria	*newObj = new Cure( *this );

	return ( newObj );
}
