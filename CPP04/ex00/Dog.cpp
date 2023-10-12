/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:39:49 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/12 19:45:24 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog is born" << std::endl;
	_type = "DOG";
}

Dog::~Dog()
{
	std::cout << "Dog is died" << std::endl;
}

Dog& Dog::operator= ( const Dog& cpy)
{
	std::cout << "Copy completed successfully with assignment operator" << std::endl;
	this->_type = cpy._type;
	return ( *this );
}

Dog::Dog( const Dog& cpy) : Animal(cpy)
{
	std::cout << "Copy completed successfully with copy constructor" << std::endl;
	*this = cpy;
}

void	Dog::makeSound( void ) const
{
	std::cout << "* DOG SOUND *" << std::endl;
}

std::string	Dog::getType( void )
{
	return ( this->_type );
}