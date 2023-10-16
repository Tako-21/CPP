/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 12:41:12 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/16 13:25:04 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ICE_HPP__
#define __ICE_HPP__

# include "AMateria.hpp"
# include "Character.hpp"

class Ice : public AMateria
{

public:

	/*----------Constructor/Destructor/Copy Constructor---------*/
	Ice( void );
	~Ice();
	Ice( const Ice& cpy);
	Ice& operator= ( const Ice& cpy);


	/*----------Inherited methods-------------------------------*/
	void		use( ICharacter& target );
	AMateria*	clone() const;
	std::string const & getType() const;

private:

	std::string	_type;
};

#endif /* __ICE_HPP__ */