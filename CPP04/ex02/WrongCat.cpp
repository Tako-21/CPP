/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 16:47:26 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/12 19:21:57 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

WrongCat::WrongCat() 
{
	std::cout << "Wrong Cat is born" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "Wrong Cat is died" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy)
{
	*this = copy;
	std::cout << "Copy completed successfully with copy constructor" << std::endl;
}

WrongCat& WrongCat::operator= (const WrongCat &cpy)
{
	this->_type = cpy._type;
	std::cout << "Copy completed successfully with assignment operator" << std::endl;
	return ( *this );
}

void	WrongCat::makeSound() const
{
	std::cout << "* WRONG CAT SOUND *" << std::endl;
}


std::string	WrongCat::getType() const{
	return _type;
}
