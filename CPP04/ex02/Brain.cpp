/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:14:48 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/14 11:06:34 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() 
{
	std::cout << "Brain is born" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain is died" << std::endl;
}

Brain::Brain( const Brain& cpy)
{
	*this = cpy;	
	std::cout << "Brain copy completed successfully with copy constructor" << std::endl;
}

Brain&	Brain::operator= ( const Brain& cpy)
{
	for (int i = 0; i < 100; i++) {
		this->ideas[i] = cpy.ideas[i];
	}
	return ( *this );
}
