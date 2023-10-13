/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:34:41 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/13 16:35:10 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal is born" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal is died" << std::endl;
}

Animal& Animal::operator= ( const Animal& cpy )
{
	std::cout << "Copy completed successfully with copy assignment operator" << std::endl;
	this->_type = cpy._type;
	return ( *this );
}

Animal::Animal( const Animal& cpy)
{
	std::cout << "Copy completed successfully with copy constructor" << std::endl;
	*this = cpy;
}

void	Animal::makeSound( void ) const
{
	std::cout << "* ANIMAL SOUND *" << std::endl;
}

std::string	Animal::getType( void ) const
{
	return ( this->_type );
}