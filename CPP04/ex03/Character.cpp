/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 12:55:38 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/17 10:27:51 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Character.hpp"

/*----------Constructor/Destructor/Copy Constructor---------*/
Character::Character() : _name("Rufus")
{
	std::cout << "Character is born : Rufus is the name by default" << std::endl;
	for ( int i = 0; i < 100; i++ ) {
		this->_garbage[i] = NULL;
	}

	for ( int i = 0; i < 4; i++ ) {
		this->_inventory[i] = NULL;
	}
}

Character::~Character()
{
	for ( int i = 0; i < 100; i++ ) {
		if ( this->_garbage[i] != NULL ) {
			delete ( this->_garbage[i] );
			this->_garbage[i] = NULL;
		}
	}
	for ( int i = 0; i < 4; i++ ) {
		if ( this->_inventory[i] != NULL ) {
			delete ( this->_inventory[i] );
			this->_inventory[i] = NULL;
		}
	}
}

Character::Character( std::string const & name) : _name(name) 
{
	for ( int i = 0; i < 100; i++ ) {
		this->_garbage[i] = NULL;
	}
	for ( int i = 0; i < 4; i++ ) {
		this->_inventory[i] = NULL;
	}

	std::cout << name << " is born" << std::endl;
}

Character::Character( const Character& cpy)
{
	*this = cpy;
}

Character&	Character::operator= ( const Character& cpy)
{
	this->_name = cpy._name;
	for ( int i = 0; i < 4; i++ ) {
		if ( this->_inventory[i] != NULL )
			delete ( this->_inventory[i] );
		if ( cpy._inventory[i] )
			this->_inventory[i] = cpy._inventory[i]->clone();
	}
	return ( *this );
}

/*----------Public members functions------------------------*/
void	Character::equip( AMateria *m )
{
	if (!m)
		return ;
	for ( int i = 0; i < 4; i++ ) {
		if ( this->_inventory[i] == NULL ) {
			this->_inventory[i] = m;
			std::cout << m->getType() << " is equiped" << std::endl;
			return ;
		}
	}
	std::cout << "Insufficient space. Use unequip to free up space." << std::endl;
}

void	Character::unequip( int idx )
{
	static int	index = 0;

	if ( idx >= 0 && idx <= 3 ) {
		this->_garbage[index] = this->_inventory[idx];
		this->_inventory[idx] = NULL;
		std::cout << "Successfully unequiped at index " << idx << std::endl;
		index++;
		return ;
	}
	std::cout << "Index out of range" << std::endl;
}

void	Character::use( int idx, ICharacter& target )
{
	if ( idx < 0 || idx > 3 ) {
		std::cout << "Index out of range" << std::endl;
		return ;
	}
	if ( this->_inventory[idx] != NULL ) {
		this->_inventory[idx]->use( target );
		return ;
	}
	std::cout << "No Materia was found at index " << idx << ". Use <equip> to equip a Materia." << std::endl;
}

std::string	const & Character::getName() const
{
	return ( this->_name );
}
