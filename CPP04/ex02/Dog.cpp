/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:39:49 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/14 11:05:50 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() : _brain( new Brain() )
{
	std::cout << "Dog is born" << std::endl;
	Animal::_type = "DOG";
}

Dog::~Dog()
{
	delete ( this->_brain );
	std::cout << "Dog is died" << std::endl;
}

Dog& Dog::operator= ( const Dog& cpy)
{
	std::cout << "Copy completed successfully with assignment operator" << std::endl;
	this->_type = cpy._type;
	delete ( this->_brain );
	this->_brain = new Brain( *cpy._brain );
	return ( *this );
}

Dog::Dog( const Dog& cpy) :  Animal(cpy), _brain( new Brain( *cpy._brain ) )
{
	this->_type = cpy._type;
	std::cout << "Copy completed successfully with copy constructor" << std::endl;
}

void	Dog::makeSound( void ) const
{
	std::cout << "* DOG SOUND *" << std::endl;
}

std::string	Dog::getType( void )
{
	return ( this->_type );
}