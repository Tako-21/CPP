/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:42:35 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/17 10:38:03 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/*----------Constructor/Destructor/Copy Constructor---------*/
MateriaSource::MateriaSource()
{
	for ( int i = 0; i < 4; i++ ) {
		_materia_data[i] = NULL;
	}
	std::cout << "Materia Source is born" << std::endl;
}

MateriaSource::~MateriaSource()
{
	for ( int i = 0; i < 4; i++ ) {
		delete ( this->_materia_data[i]);
	}
	std::cout << "Materia Source is died" << std::endl;
}

MateriaSource&	MateriaSource::operator= ( const MateriaSource& cpy )
{
	if ( this == &cpy )
	{
		for ( int i = 0; i < 4; i++ ) {
			this->_materia_data[i] = cpy._materia_data[i];
		}
	}
	return ( *this );
}

MateriaSource::MateriaSource( const MateriaSource& cpy ) : IMateriaSource()
{
	*this = cpy;
}

/*----------Inherited Methods-------------------------------*/
void		MateriaSource::learnMateria(AMateria* obj)
{
	for ( int i = 0; i < 4; i++ ) {
		if (this->_materia_data[i] == NULL) {
			this->_materia_data[i] = obj;
			return ;
		}
	}
	std::cout << "Materia data is full" << std::endl;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for ( int i = 3; i >= 0; i-- ) {
		if ( this->_materia_data[i] != NULL && !(this->_materia_data[i]->getType().compare(type)) ) {
			return ( this->_materia_data[i]->clone() );
		}
	}
	return ( 0 );
}
