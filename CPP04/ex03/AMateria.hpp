/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 11:45:55 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/14 19:16:13 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AMATERIA_HPP__
#define __AMATERIA_HPP__

# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria {

public:

	/*----------Constructor/Destructor/Copy Constructor---------*/
	AMateria( void );
	virtual ~AMateria();
	AMateria(std::string const & type);
	AMateria& operator= ( const AMateria& cpy );
	AMateria( const AMateria& cpy);

	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use( ICharacter& target );

protected:

	std::string	_type;
};

#endif /* __AMATERIA_HPP__ */