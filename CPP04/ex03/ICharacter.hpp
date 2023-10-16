/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 15:21:11 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/16 17:41:32 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ICHARACTER_HPP__
#define __ICHARACTER_HPP__

# include "AMateria.hpp"

class AMateria;

class ICharacter {

public:

	/*----------Constructor/Destructor/Copy Constructor---------*/
	// ICharacter( void );
	// ICharacter( std::string name );
	virtual ~ICharacter() {}
	// ICharacter( const ICharacter& cpy );
	// virtual ICharacter&	operator= ( const ICharacter& cpy );

	/*----------Public members functions------------------------*/
	virtual std::string const & getName() const = 0;
	virtual void equip( AMateria* m ) = 0;
	virtual void unequip( int idx ) = 0;
	virtual void use( int idx, ICharacter& target ) = 0;

private:

};

#endif /* __ICHARACTER_HPP__ */