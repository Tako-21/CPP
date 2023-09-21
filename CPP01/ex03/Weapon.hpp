/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:15:15 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/09/21 16:22:18 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__WEAPON_HPP__
#define	__WEAPON_HPP__

#include <iostream>

class Weapon {


public :

	Weapon();
	Weapon( std::string type );
	~Weapon( void );

	std::string const &	getType( void ) const;
	void			setType( std::string  const & type);

private :
	
	std::string	_type;
};

#endif	/* __WEAPON_HPP__ */