/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:16:43 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/09/21 16:29:56 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__HUMAN_A_HPP__
#define	__HUMAN_A_HPP__

#include <iostream>
#include "Weapon.hpp"

class HumanA {


public :
	
	HumanA( std::string name, Weapon &weapon );
	~HumanA( void );
	
	void	attack( void );

private :

	Weapon &_weapon;
	std::string	_name;
};

#endif /* __HUMAN_A_HPP__*/