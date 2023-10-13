/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 16:17:44 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/12 19:18:12 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Wrong Animal is born" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Wrong Animal is died" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	*this = copy;
	std::cout << "Copy completed successfully with copy constructor" << std::endl;
}

WrongAnimal& WrongAnimal::operator= (const WrongAnimal &cpy)
{
	this->_type = cpy._type;
	std::cout << "Copy completed successfully with assignment operator" << std::endl;
	return ( *this );
}

void	WrongAnimal::makeSound() const
{
	std::cout << "* WRONG ANIMAL SOUND *" << std::endl;
}

std::string	WrongAnimal::getType() const{
	return _type;
}
