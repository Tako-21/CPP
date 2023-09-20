/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:15:15 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/09/20 19:16:08 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__WEAPON_HPP__
#define	__WEAPON_HPP__

#include <iostream>

class Weapon {


public :
	
	std::string&	getType( void );


private :
	
	std::string	str;
};

#endif	/* __WEAPON_HPP__ */