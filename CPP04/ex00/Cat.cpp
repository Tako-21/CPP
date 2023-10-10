/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:43:38 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/10 16:19:56 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat is born" << std::endl;
	this->_type = "CAT";
}

Cat::~Cat()
{
	std::cout << "Cat is died" << std::endl;
}

Cat& Cat::operator= ( const Cat& cpy)
{
	std::cout << "Copy completed successfully with assignment operator" << std::endl;
	this->_type = cpy._type;
	return ( *this );
}

Cat::Cat( const Cat& cpy) : Animal(cpy)
{
	std::cout << "Copy completed successfully with copy constructor" << std::endl;
	this->_type = cpy._type;
	*this = cpy;
}

std::string	Cat::getType( void )
{
	return ( Animal::_type );
}

void	Cat::makeSound( void ) const
{
	std::cout << "* CAT SOUND *" << std::endl;
}