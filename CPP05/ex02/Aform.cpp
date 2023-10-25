/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Aform.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:34:59 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/25 14:45:20 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Aform.hpp"
# include <iostream>

Aform::Aform( std::string name, unsigned int s_grade, unsigned int x_grade ) :
_name(name), _signed(false), _s_grade(s_grade), _x_grade(x_grade) {}



unsigned int	Aform::getXGrade( void ) const
{
	return ( this->_x_grade );
}

unsigned int	Aform::getSGrade( void ) const
{
	return ( this->_s_grade );
}

bool			Aform::getSigned( void ) const
{
	return ( this->_signed );
}

std::string		Aform::getName( void ) const
{
	return ( this->_name );
}
