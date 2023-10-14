/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 16:08:46 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/14 17:31:34 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter() {}

ICharacter::ICharacter( const ICharacter& cpy )
{
	*this = cpy;
}

ICharacter&	ICharacter::operator= ( const ICharacter& cpy )
{
	(void)cpy;
	return ( *this );
}
