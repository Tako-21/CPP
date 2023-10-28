/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 15:32:30 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/28 17:09:50 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

Serialization::Serialization() {

}

Serialization::~Serialization() {

}

Serialization::Serialization ( const Serialization& cpy )
{
	(void)cpy;
	*this = cpy;
}

Serialization& Serialization::operator= ( const Serialization& cpy )
{
	(void)cpy;	
	return *this;
}


uintptr_t	Serialization::serialize(Data* ptr)
{
	uintptr_t	addr = reinterpret_cast< uintptr_t > ( ptr );
	return ( addr );
}

Data*		Serialization::deserialize(uintptr_t raw)
{
	Data	*data;

	data = reinterpret_cast< Data* > ( raw );
	return ( data );
}
