/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:15:55 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/09/21 16:49:33 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__HUMAN_B_HPP__
#define __HUMAN_B_HPP__

#include <iostream>
#include "Weapon.hpp"

class HumanB {


public :

	HumanB( std::string name );
	~HumanB( void );
	
	void	setWeapon( Weapon& weapon );
	void	attack( void );

private :

	Weapon		*_weapon;
	std::string	_name;
};


#endif /* __HUMAN_B_HPP__ */