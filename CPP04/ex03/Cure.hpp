/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 12:44:25 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/14 16:15:05 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CURE_HPP__
#define __CURE_HPP__

# include "AMateria.hpp"

class Cure : public AMateria
{

public:

	/*----------Constructor/Destructor/Copy Constructor---------*/
	Cure( void );
	virtual ~Cure();
	Cure( const Cure& cpy);
	Cure& operator= ( const Cure& cpy );

	/*----------Public members functions------------------------*/
	void use(ICharacter& target);
	AMateria* clone() const;

private:

	std::string	_type;
};

#endif /* __CURE_HPP__ */