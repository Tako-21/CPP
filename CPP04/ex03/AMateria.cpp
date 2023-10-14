/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 11:45:52 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/14 19:50:31 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {}

AMateria::~AMateria() {}

AMateria::AMateria(std::string const & type) : _type(type) {}

AMateria&	AMateria::operator= ( const AMateria& cpy )
{
	std::cout << "Copy completed successfully with assignment operator" << std::endl;
	this->_type = cpy._type;
	return ( *this );
}

AMateria::AMateria( const AMateria& cpy)
{
	*this = cpy;
	std::cout << "Copy completed successfully with copy constructor" << std::endl;
}

std::string const & AMateria::getType( void ) const
{
	return ( this->_type );
}

void	AMateria::use( ICharacter& target )
{
	(void)target;
	std::cout << "No Materia in inventory" << std::endl;
}
