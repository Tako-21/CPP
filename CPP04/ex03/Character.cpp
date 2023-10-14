/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 12:55:38 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/14 19:53:02 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Character.hpp"

/*----------Constructor/Destructor/Copy Constructor---------*/
Character::Character( std::string const & name) : ICharacter(), _name(name) 
{
	for ( int i = 0; i < 4; i++ ) {
		this->_inventory[i] = NULL;
	}
	std::cout << name << " is born" << std::endl;
}

Character::Character( std::string name ) : _name(name) {}


Character::Character( const Character& cpy) : ICharacter( cpy )
{
	std::cout << "Copy completed successfully with copy constructor" << std::endl;
	*this = cpy;
}

Character&	Character::operator= ( const Character& cpy)
{
	std::cout << "Copy completed successfully with assignment operator" << std::endl;
	this->_name = cpy._name;
	return ( *this );
}

/*----------Public members functions------------------------*/
void	Character::equip( AMateria *m )
{
	for ( int i = 0; i < 4; i++ ) {
		if ( this->_inventory[i] != NULL )
			this->_inventory[i] = m;
	}
}

void	Character::unequip( int idx )
{
	this->_inventory[idx] = NULL;
}

void	Character::use( int idx, ICharacter& target )
{
	if ( this->_inventory[idx] != NULL)
		this->_inventory[idx]->use( target );
}

std::string	const & Character::getName() const
{
	return ( this->_name );
}
